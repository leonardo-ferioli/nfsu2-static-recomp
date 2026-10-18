#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4dd(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4dc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4dc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4dc(u8* __restrict R,Cpu& c);
u32 page_4dc(Cpu& c){return body_4dc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4dc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4dc005:goto L4dc005;
case 0x4dc006:c.instructions+=2;goto B4dc006;
case 0x4dc008:c.instructions+=1;goto B4dc008;
case 0x4dc00d:goto L4dc00d;
case 0x4dc013:c.instructions+=1;goto B4dc013;
case 0x4dc015:goto L4dc015;
case 0x4dc017:goto L4dc017;
case 0x4dc019:c.instructions+=2;goto B4dc019;
case 0x4dc021:c.instructions+=1;goto B4dc021;
case 0x4dc026:goto L4dc026;
case 0x4dc028:c.instructions+=5;goto B4dc028;
case 0x4dc02b:c.instructions+=4;goto B4dc02b;
case 0x4dc02f:c.instructions+=3;goto B4dc02f;
case 0x4dc031:c.instructions+=2;goto B4dc031;
case 0x4dc039:c.instructions+=1;goto B4dc039;
case 0x4dc03b:goto L4dc03b;
case 0x4dc041:c.instructions+=5;goto B4dc041;
case 0x4dc042:c.instructions+=4;goto B4dc042;
case 0x4dc048:c.instructions+=3;goto B4dc048;
case 0x4dc049:c.instructions+=2;goto B4dc049;
case 0x4dc04b:c.instructions+=1;goto B4dc04b;
case 0x4dc050:goto L4dc050;
case 0x4dc056:c.instructions+=1;goto B4dc056;
case 0x4dc058:goto L4dc058;
case 0x4dc05a:goto L4dc05a;
case 0x4dc05b:c.instructions+=5;goto B4dc05b;
case 0x4dc05c:c.instructions+=4;goto B4dc05c;
case 0x4dc05d:c.instructions+=3;goto B4dc05d;
case 0x4dc05f:c.instructions+=2;goto B4dc05f;
case 0x4dc067:c.instructions+=1;goto B4dc067;
case 0x4dc06c:goto L4dc06c;
case 0x4dc06e:c.instructions+=1;goto B4dc06e;
case 0x4dc073:goto L4dc073;
case 0x4dc075:c.instructions+=5;goto B4dc075;
case 0x4dc078:c.instructions+=4;goto B4dc078;
case 0x4dc07c:c.instructions+=3;goto B4dc07c;
case 0x4dc07e:c.instructions+=2;goto B4dc07e;
case 0x4dc086:c.instructions+=1;goto B4dc086;
case 0x4dc088:goto L4dc088;
case 0x4dc08a:c.instructions+=6;goto B4dc08a;
case 0x4dc090:c.instructions+=5;goto B4dc090;
case 0x4dc091:c.instructions+=4;goto B4dc091;
case 0x4dc097:c.instructions+=3;goto B4dc097;
case 0x4dc098:c.instructions+=2;goto B4dc098;
case 0x4dc09a:c.instructions+=1;goto B4dc09a;
case 0x4dc09f:goto L4dc09f;
case 0x4dc0a5:c.instructions+=2;goto B4dc0a5;
case 0x4dc0a7:c.instructions+=1;goto B4dc0a7;
case 0x4dc0a9:goto L4dc0a9;
case 0x4dc0ab:goto L4dc0ab;
case 0x4dc0ad:c.instructions+=2;goto B4dc0ad;
case 0x4dc0b5:c.instructions+=1;goto B4dc0b5;
case 0x4dc0ba:goto L4dc0ba;
case 0x4dc0bc:c.instructions+=5;goto B4dc0bc;
case 0x4dc0bf:c.instructions+=4;goto B4dc0bf;
case 0x4dc0c3:c.instructions+=3;goto B4dc0c3;
case 0x4dc0c5:c.instructions+=2;goto B4dc0c5;
case 0x4dc0cd:c.instructions+=1;goto B4dc0cd;
case 0x4dc0cf:goto L4dc0cf;
case 0x4dc0d1:c.instructions+=6;goto B4dc0d1;
case 0x4dc0d7:c.instructions+=5;goto B4dc0d7;
case 0x4dc0d8:c.instructions+=4;goto B4dc0d8;
case 0x4dc0de:c.instructions+=3;goto B4dc0de;
case 0x4dc0df:c.instructions+=2;goto B4dc0df;
case 0x4dc0e1:c.instructions+=1;goto B4dc0e1;
case 0x4dc0e6:goto L4dc0e6;
case 0x4dc0ec:c.instructions+=1;goto B4dc0ec;
case 0x4dc0ee:goto L4dc0ee;
case 0x4dc0f0:goto L4dc0f0;
case 0x4dc0f2:c.instructions+=2;goto B4dc0f2;
case 0x4dc0fa:c.instructions+=1;goto B4dc0fa;
case 0x4dc0ff:goto L4dc0ff;
case 0x4dc101:c.instructions+=5;goto B4dc101;
case 0x4dc104:c.instructions+=4;goto B4dc104;
case 0x4dc108:c.instructions+=3;goto B4dc108;
case 0x4dc10a:c.instructions+=2;goto B4dc10a;
case 0x4dc112:c.instructions+=1;goto B4dc112;
case 0x4dc114:goto L4dc114;
case 0x4dc11a:c.instructions+=5;goto B4dc11a;
case 0x4dc11b:c.instructions+=4;goto B4dc11b;
case 0x4dc121:c.instructions+=3;goto B4dc121;
case 0x4dc122:c.instructions+=2;goto B4dc122;
case 0x4dc124:c.instructions+=1;goto B4dc124;
case 0x4dc129:goto L4dc129;
case 0x4dc12f:c.instructions+=1;goto B4dc12f;
case 0x4dc131:goto L4dc131;
case 0x4dc133:goto L4dc133;
case 0x4dc134:c.instructions+=5;goto B4dc134;
case 0x4dc135:c.instructions+=4;goto B4dc135;
case 0x4dc136:c.instructions+=3;goto B4dc136;
case 0x4dc138:c.instructions+=2;goto B4dc138;
case 0x4dc140:c.instructions+=1;goto B4dc140;
case 0x4dc145:goto L4dc145;
case 0x4dc147:c.instructions+=1;goto B4dc147;
case 0x4dc14c:goto L4dc14c;
case 0x4dc14e:c.instructions+=5;goto B4dc14e;
case 0x4dc151:c.instructions+=4;goto B4dc151;
case 0x4dc155:c.instructions+=3;goto B4dc155;
case 0x4dc157:c.instructions+=2;goto B4dc157;
case 0x4dc15f:c.instructions+=1;goto B4dc15f;
case 0x4dc161:goto L4dc161;
case 0x4dc163:c.instructions+=6;goto B4dc163;
case 0x4dc169:c.instructions+=5;goto B4dc169;
case 0x4dc16a:c.instructions+=4;goto B4dc16a;
case 0x4dc170:c.instructions+=3;goto B4dc170;
case 0x4dc171:c.instructions+=2;goto B4dc171;
case 0x4dc173:c.instructions+=1;goto B4dc173;
case 0x4dc178:goto L4dc178;
case 0x4dc17e:c.instructions+=2;goto B4dc17e;
case 0x4dc180:c.instructions+=1;goto B4dc180;
case 0x4dc182:goto L4dc182;
case 0x4dc184:goto L4dc184;
case 0x4dc186:c.instructions+=2;goto B4dc186;
case 0x4dc18e:c.instructions+=1;goto B4dc18e;
case 0x4dc193:goto L4dc193;
case 0x4dc195:c.instructions+=5;goto B4dc195;
case 0x4dc198:c.instructions+=4;goto B4dc198;
case 0x4dc19c:c.instructions+=3;goto B4dc19c;
case 0x4dc19e:c.instructions+=2;goto B4dc19e;
case 0x4dc1a6:c.instructions+=1;goto B4dc1a6;
case 0x4dc1a8:goto L4dc1a8;
case 0x4dc1aa:c.instructions+=6;goto B4dc1aa;
case 0x4dc1b0:c.instructions+=5;goto B4dc1b0;
case 0x4dc1b1:c.instructions+=4;goto B4dc1b1;
case 0x4dc1b7:c.instructions+=3;goto B4dc1b7;
case 0x4dc1b8:c.instructions+=2;goto B4dc1b8;
case 0x4dc1ba:c.instructions+=1;goto B4dc1ba;
case 0x4dc1bf:goto L4dc1bf;
case 0x4dc1c5:c.instructions+=1;goto B4dc1c5;
case 0x4dc1c7:goto L4dc1c7;
case 0x4dc1c9:goto L4dc1c9;
case 0x4dc1cb:c.instructions+=2;goto B4dc1cb;
case 0x4dc1d3:c.instructions+=1;goto B4dc1d3;
case 0x4dc1d8:goto L4dc1d8;
case 0x4dc1da:c.instructions+=5;goto B4dc1da;
case 0x4dc1dd:c.instructions+=4;goto B4dc1dd;
case 0x4dc1e1:c.instructions+=3;goto B4dc1e1;
case 0x4dc1e3:c.instructions+=2;goto B4dc1e3;
case 0x4dc1eb:c.instructions+=1;goto B4dc1eb;
case 0x4dc1ed:goto L4dc1ed;
case 0x4dc1f3:c.instructions+=5;goto B4dc1f3;
case 0x4dc1f4:c.instructions+=4;goto B4dc1f4;
case 0x4dc1fa:c.instructions+=3;goto B4dc1fa;
case 0x4dc1fb:c.instructions+=2;goto B4dc1fb;
case 0x4dc1fd:c.instructions+=1;goto B4dc1fd;
case 0x4dc202:goto L4dc202;
case 0x4dc208:c.instructions+=1;goto B4dc208;
case 0x4dc20a:goto L4dc20a;
case 0x4dc20c:goto L4dc20c;
case 0x4dc20d:c.instructions+=5;goto B4dc20d;
case 0x4dc20e:c.instructions+=4;goto B4dc20e;
case 0x4dc20f:c.instructions+=3;goto B4dc20f;
case 0x4dc211:c.instructions+=2;goto B4dc211;
case 0x4dc219:c.instructions+=1;goto B4dc219;
case 0x4dc21e:goto L4dc21e;
case 0x4dc220:c.instructions+=1;goto B4dc220;
case 0x4dc225:goto L4dc225;
case 0x4dc227:c.instructions+=5;goto B4dc227;
case 0x4dc22a:c.instructions+=4;goto B4dc22a;
case 0x4dc22e:c.instructions+=3;goto B4dc22e;
case 0x4dc230:c.instructions+=2;goto B4dc230;
case 0x4dc238:c.instructions+=1;goto B4dc238;
case 0x4dc23a:goto L4dc23a;
case 0x4dc23c:c.instructions+=6;goto B4dc23c;
case 0x4dc242:c.instructions+=5;goto B4dc242;
case 0x4dc243:c.instructions+=4;goto B4dc243;
case 0x4dc249:c.instructions+=3;goto B4dc249;
case 0x4dc24a:c.instructions+=2;goto B4dc24a;
case 0x4dc24c:c.instructions+=1;goto B4dc24c;
case 0x4dc251:goto L4dc251;
case 0x4dc257:c.instructions+=2;goto B4dc257;
case 0x4dc259:c.instructions+=1;goto B4dc259;
case 0x4dc25b:goto L4dc25b;
case 0x4dc25d:goto L4dc25d;
case 0x4dc25f:c.instructions+=2;goto B4dc25f;
case 0x4dc267:c.instructions+=1;goto B4dc267;
case 0x4dc26c:goto L4dc26c;
case 0x4dc26e:c.instructions+=5;goto B4dc26e;
case 0x4dc271:c.instructions+=4;goto B4dc271;
case 0x4dc275:c.instructions+=3;goto B4dc275;
case 0x4dc277:c.instructions+=2;goto B4dc277;
case 0x4dc27f:c.instructions+=1;goto B4dc27f;
case 0x4dc281:goto L4dc281;
case 0x4dc283:c.instructions+=6;goto B4dc283;
case 0x4dc289:c.instructions+=5;goto B4dc289;
case 0x4dc28a:c.instructions+=4;goto B4dc28a;
case 0x4dc290:c.instructions+=3;goto B4dc290;
case 0x4dc291:c.instructions+=2;goto B4dc291;
case 0x4dc293:c.instructions+=1;goto B4dc293;
case 0x4dc298:goto L4dc298;
case 0x4dc29e:c.instructions+=1;goto B4dc29e;
case 0x4dc2a0:goto L4dc2a0;
case 0x4dc2a2:goto L4dc2a2;
case 0x4dc2a4:c.instructions+=2;goto B4dc2a4;
case 0x4dc2ac:c.instructions+=1;goto B4dc2ac;
case 0x4dc2b1:goto L4dc2b1;
case 0x4dc2b3:c.instructions+=5;goto B4dc2b3;
case 0x4dc2b6:c.instructions+=4;goto B4dc2b6;
case 0x4dc2ba:c.instructions+=3;goto B4dc2ba;
case 0x4dc2bc:c.instructions+=2;goto B4dc2bc;
case 0x4dc2c4:c.instructions+=1;goto B4dc2c4;
case 0x4dc2c6:goto L4dc2c6;
case 0x4dc2cc:c.instructions+=5;goto B4dc2cc;
case 0x4dc2cd:c.instructions+=4;goto B4dc2cd;
case 0x4dc2d3:c.instructions+=3;goto B4dc2d3;
case 0x4dc2d4:c.instructions+=2;goto B4dc2d4;
case 0x4dc2d6:c.instructions+=1;goto B4dc2d6;
case 0x4dc2db:goto L4dc2db;
case 0x4dc2e1:c.instructions+=1;goto B4dc2e1;
case 0x4dc2e3:goto L4dc2e3;
case 0x4dc2e5:goto L4dc2e5;
case 0x4dc2e6:c.instructions+=5;goto B4dc2e6;
case 0x4dc2e7:c.instructions+=4;goto B4dc2e7;
case 0x4dc2e8:c.instructions+=3;goto B4dc2e8;
case 0x4dc2ea:c.instructions+=2;goto B4dc2ea;
case 0x4dc2f2:c.instructions+=1;goto B4dc2f2;
case 0x4dc2f7:goto L4dc2f7;
case 0x4dc2f9:c.instructions+=1;goto B4dc2f9;
case 0x4dc2fe:goto L4dc2fe;
case 0x4dc300:c.instructions+=5;goto B4dc300;
case 0x4dc303:c.instructions+=4;goto B4dc303;
case 0x4dc307:c.instructions+=3;goto B4dc307;
case 0x4dc309:c.instructions+=2;goto B4dc309;
case 0x4dc311:c.instructions+=1;goto B4dc311;
case 0x4dc313:goto L4dc313;
case 0x4dc315:c.instructions+=6;goto B4dc315;
case 0x4dc31b:c.instructions+=5;goto B4dc31b;
case 0x4dc31c:c.instructions+=4;goto B4dc31c;
case 0x4dc322:c.instructions+=3;goto B4dc322;
case 0x4dc323:c.instructions+=2;goto B4dc323;
case 0x4dc325:c.instructions+=1;goto B4dc325;
case 0x4dc32a:goto L4dc32a;
case 0x4dc330:c.instructions+=2;goto B4dc330;
case 0x4dc332:c.instructions+=1;goto B4dc332;
case 0x4dc334:goto L4dc334;
case 0x4dc336:goto L4dc336;
case 0x4dc338:c.instructions+=2;goto B4dc338;
case 0x4dc340:c.instructions+=1;goto B4dc340;
case 0x4dc345:goto L4dc345;
case 0x4dc347:c.instructions+=5;goto B4dc347;
case 0x4dc34a:c.instructions+=4;goto B4dc34a;
case 0x4dc34e:c.instructions+=3;goto B4dc34e;
case 0x4dc350:c.instructions+=2;goto B4dc350;
case 0x4dc358:c.instructions+=1;goto B4dc358;
case 0x4dc35a:goto L4dc35a;
case 0x4dc35c:c.instructions+=6;goto B4dc35c;
case 0x4dc362:c.instructions+=5;goto B4dc362;
case 0x4dc363:c.instructions+=4;goto B4dc363;
case 0x4dc369:c.instructions+=3;goto B4dc369;
case 0x4dc36a:c.instructions+=2;goto B4dc36a;
case 0x4dc36c:c.instructions+=1;goto B4dc36c;
case 0x4dc371:goto L4dc371;
case 0x4dc377:c.instructions+=1;goto B4dc377;
case 0x4dc379:goto L4dc379;
case 0x4dc37b:goto L4dc37b;
case 0x4dc37d:c.instructions+=2;goto B4dc37d;
case 0x4dc385:c.instructions+=1;goto B4dc385;
case 0x4dc38a:goto L4dc38a;
case 0x4dc38c:c.instructions+=5;goto B4dc38c;
case 0x4dc38f:c.instructions+=4;goto B4dc38f;
case 0x4dc393:c.instructions+=3;goto B4dc393;
case 0x4dc395:c.instructions+=2;goto B4dc395;
case 0x4dc39d:c.instructions+=1;goto B4dc39d;
case 0x4dc39f:goto L4dc39f;
case 0x4dc3a5:c.instructions+=5;goto B4dc3a5;
case 0x4dc3a6:c.instructions+=4;goto B4dc3a6;
case 0x4dc3ac:c.instructions+=3;goto B4dc3ac;
case 0x4dc3ad:c.instructions+=2;goto B4dc3ad;
case 0x4dc3af:c.instructions+=1;goto B4dc3af;
case 0x4dc3b4:goto L4dc3b4;
case 0x4dc3ba:c.instructions+=1;goto B4dc3ba;
case 0x4dc3bc:goto L4dc3bc;
case 0x4dc3be:goto L4dc3be;
case 0x4dc3bf:c.instructions+=5;goto B4dc3bf;
case 0x4dc3c0:c.instructions+=4;goto B4dc3c0;
case 0x4dc3c1:c.instructions+=3;goto B4dc3c1;
case 0x4dc3c3:c.instructions+=2;goto B4dc3c3;
case 0x4dc3cb:c.instructions+=1;goto B4dc3cb;
case 0x4dc3d0:goto L4dc3d0;
case 0x4dc3d2:c.instructions+=1;goto B4dc3d2;
case 0x4dc3d7:goto L4dc3d7;
case 0x4dc3d9:c.instructions+=5;goto B4dc3d9;
case 0x4dc3dc:c.instructions+=4;goto B4dc3dc;
case 0x4dc3e0:c.instructions+=3;goto B4dc3e0;
case 0x4dc3e2:c.instructions+=2;goto B4dc3e2;
case 0x4dc3ea:c.instructions+=1;goto B4dc3ea;
case 0x4dc3ec:goto L4dc3ec;
case 0x4dc3ee:c.instructions+=6;goto B4dc3ee;
case 0x4dc3f4:c.instructions+=5;goto B4dc3f4;
case 0x4dc3f5:c.instructions+=4;goto B4dc3f5;
case 0x4dc3fb:c.instructions+=3;goto B4dc3fb;
case 0x4dc3fc:c.instructions+=2;goto B4dc3fc;
case 0x4dc3fe:c.instructions+=1;goto B4dc3fe;
case 0x4dc403:goto L4dc403;
case 0x4dc409:c.instructions+=2;goto B4dc409;
case 0x4dc40b:c.instructions+=1;goto B4dc40b;
case 0x4dc40d:goto L4dc40d;
case 0x4dc40f:goto L4dc40f;
case 0x4dc411:c.instructions+=2;goto B4dc411;
case 0x4dc419:c.instructions+=1;goto B4dc419;
case 0x4dc41e:goto L4dc41e;
case 0x4dc420:c.instructions+=5;goto B4dc420;
case 0x4dc423:c.instructions+=4;goto B4dc423;
case 0x4dc427:c.instructions+=3;goto B4dc427;
case 0x4dc429:c.instructions+=2;goto B4dc429;
case 0x4dc431:c.instructions+=1;goto B4dc431;
case 0x4dc433:goto L4dc433;
case 0x4dc435:c.instructions+=6;goto B4dc435;
case 0x4dc43b:c.instructions+=5;goto B4dc43b;
case 0x4dc43c:c.instructions+=4;goto B4dc43c;
case 0x4dc442:c.instructions+=3;goto B4dc442;
case 0x4dc443:c.instructions+=2;goto B4dc443;
case 0x4dc445:c.instructions+=1;goto B4dc445;
case 0x4dc44a:goto L4dc44a;
case 0x4dc450:c.instructions+=1;goto B4dc450;
case 0x4dc452:goto L4dc452;
case 0x4dc454:goto L4dc454;
case 0x4dc456:c.instructions+=2;goto B4dc456;
case 0x4dc45e:c.instructions+=1;goto B4dc45e;
case 0x4dc463:goto L4dc463;
case 0x4dc465:c.instructions+=5;goto B4dc465;
case 0x4dc468:c.instructions+=4;goto B4dc468;
case 0x4dc46c:c.instructions+=3;goto B4dc46c;
case 0x4dc46e:c.instructions+=2;goto B4dc46e;
case 0x4dc476:c.instructions+=1;goto B4dc476;
case 0x4dc478:goto L4dc478;
case 0x4dc47e:c.instructions+=5;goto B4dc47e;
case 0x4dc47f:c.instructions+=4;goto B4dc47f;
case 0x4dc485:c.instructions+=3;goto B4dc485;
case 0x4dc486:c.instructions+=2;goto B4dc486;
case 0x4dc488:c.instructions+=1;goto B4dc488;
case 0x4dc48d:goto L4dc48d;
case 0x4dc493:c.instructions+=1;goto B4dc493;
case 0x4dc495:goto L4dc495;
case 0x4dc497:goto L4dc497;
case 0x4dc498:c.instructions+=5;goto B4dc498;
case 0x4dc499:c.instructions+=4;goto B4dc499;
case 0x4dc49a:c.instructions+=3;goto B4dc49a;
case 0x4dc49c:c.instructions+=2;goto B4dc49c;
case 0x4dc4a4:c.instructions+=1;goto B4dc4a4;
case 0x4dc4a9:goto L4dc4a9;
case 0x4dc4ab:c.instructions+=1;goto B4dc4ab;
case 0x4dc4b0:goto L4dc4b0;
case 0x4dc4b2:c.instructions+=5;goto B4dc4b2;
case 0x4dc4b5:c.instructions+=4;goto B4dc4b5;
case 0x4dc4b9:c.instructions+=3;goto B4dc4b9;
case 0x4dc4bb:c.instructions+=2;goto B4dc4bb;
case 0x4dc4c3:c.instructions+=1;goto B4dc4c3;
case 0x4dc4c5:goto L4dc4c5;
case 0x4dc4c7:c.instructions+=6;goto B4dc4c7;
case 0x4dc4cd:c.instructions+=5;goto B4dc4cd;
case 0x4dc4ce:c.instructions+=4;goto B4dc4ce;
case 0x4dc4d4:c.instructions+=3;goto B4dc4d4;
case 0x4dc4d5:c.instructions+=2;goto B4dc4d5;
case 0x4dc4d7:c.instructions+=1;goto B4dc4d7;
case 0x4dc4dc:goto L4dc4dc;
case 0x4dc4e2:c.instructions+=2;goto B4dc4e2;
case 0x4dc4e4:c.instructions+=1;goto B4dc4e4;
case 0x4dc4e6:goto L4dc4e6;
case 0x4dc4e8:goto L4dc4e8;
case 0x4dc4ea:c.instructions+=2;goto B4dc4ea;
case 0x4dc4f2:c.instructions+=1;goto B4dc4f2;
case 0x4dc4f7:goto L4dc4f7;
case 0x4dc4f9:c.instructions+=5;goto B4dc4f9;
case 0x4dc4fc:c.instructions+=4;goto B4dc4fc;
case 0x4dc500:c.instructions+=3;goto B4dc500;
case 0x4dc502:c.instructions+=2;goto B4dc502;
case 0x4dc50a:c.instructions+=1;goto B4dc50a;
case 0x4dc50c:goto L4dc50c;
case 0x4dc50e:c.instructions+=6;goto B4dc50e;
case 0x4dc514:c.instructions+=5;goto B4dc514;
case 0x4dc515:c.instructions+=4;goto B4dc515;
case 0x4dc51b:c.instructions+=3;goto B4dc51b;
case 0x4dc51c:c.instructions+=2;goto B4dc51c;
case 0x4dc51e:c.instructions+=1;goto B4dc51e;
case 0x4dc523:goto L4dc523;
case 0x4dc529:c.instructions+=1;goto B4dc529;
case 0x4dc52b:goto L4dc52b;
case 0x4dc52d:goto L4dc52d;
case 0x4dc52f:c.instructions+=2;goto B4dc52f;
case 0x4dc537:c.instructions+=1;goto B4dc537;
case 0x4dc53c:goto L4dc53c;
case 0x4dc53e:c.instructions+=5;goto B4dc53e;
case 0x4dc541:c.instructions+=4;goto B4dc541;
case 0x4dc545:c.instructions+=3;goto B4dc545;
case 0x4dc547:c.instructions+=2;goto B4dc547;
case 0x4dc54f:c.instructions+=1;goto B4dc54f;
case 0x4dc551:goto L4dc551;
case 0x4dc557:c.instructions+=5;goto B4dc557;
case 0x4dc558:c.instructions+=4;goto B4dc558;
case 0x4dc55e:c.instructions+=3;goto B4dc55e;
case 0x4dc55f:c.instructions+=2;goto B4dc55f;
case 0x4dc561:c.instructions+=1;goto B4dc561;
case 0x4dc566:goto L4dc566;
case 0x4dc56c:c.instructions+=1;goto B4dc56c;
case 0x4dc56e:goto L4dc56e;
case 0x4dc570:goto L4dc570;
case 0x4dc571:c.instructions+=5;goto B4dc571;
case 0x4dc572:c.instructions+=4;goto B4dc572;
case 0x4dc573:c.instructions+=3;goto B4dc573;
case 0x4dc575:c.instructions+=2;goto B4dc575;
case 0x4dc57d:c.instructions+=1;goto B4dc57d;
case 0x4dc582:goto L4dc582;
case 0x4dc584:c.instructions+=1;goto B4dc584;
case 0x4dc589:goto L4dc589;
case 0x4dc58b:c.instructions+=5;goto B4dc58b;
case 0x4dc58e:c.instructions+=4;goto B4dc58e;
case 0x4dc592:c.instructions+=3;goto B4dc592;
case 0x4dc594:c.instructions+=2;goto B4dc594;
case 0x4dc59c:c.instructions+=1;goto B4dc59c;
case 0x4dc59e:goto L4dc59e;
case 0x4dc5a0:c.instructions+=6;goto B4dc5a0;
case 0x4dc5a6:c.instructions+=5;goto B4dc5a6;
case 0x4dc5a7:c.instructions+=4;goto B4dc5a7;
case 0x4dc5ad:c.instructions+=3;goto B4dc5ad;
case 0x4dc5ae:c.instructions+=2;goto B4dc5ae;
case 0x4dc5b0:c.instructions+=1;goto B4dc5b0;
case 0x4dc5b5:goto L4dc5b5;
case 0x4dc5bb:c.instructions+=2;goto B4dc5bb;
case 0x4dc5bd:c.instructions+=1;goto B4dc5bd;
case 0x4dc5bf:goto L4dc5bf;
case 0x4dc5c1:goto L4dc5c1;
case 0x4dc5c3:c.instructions+=2;goto B4dc5c3;
case 0x4dc5cb:c.instructions+=1;goto B4dc5cb;
case 0x4dc5d0:goto L4dc5d0;
case 0x4dc5d2:c.instructions+=5;goto B4dc5d2;
case 0x4dc5d5:c.instructions+=4;goto B4dc5d5;
case 0x4dc5d9:c.instructions+=3;goto B4dc5d9;
case 0x4dc5db:c.instructions+=2;goto B4dc5db;
case 0x4dc5e3:c.instructions+=1;goto B4dc5e3;
case 0x4dc5e5:goto L4dc5e5;
case 0x4dc5e7:c.instructions+=6;goto B4dc5e7;
case 0x4dc5ed:c.instructions+=5;goto B4dc5ed;
case 0x4dc5ee:c.instructions+=4;goto B4dc5ee;
case 0x4dc5f4:c.instructions+=3;goto B4dc5f4;
case 0x4dc5f5:c.instructions+=2;goto B4dc5f5;
case 0x4dc5f7:c.instructions+=1;goto B4dc5f7;
case 0x4dc5fc:goto L4dc5fc;
case 0x4dc602:c.instructions+=1;goto B4dc602;
case 0x4dc604:goto L4dc604;
case 0x4dc606:goto L4dc606;
case 0x4dc608:c.instructions+=2;goto B4dc608;
case 0x4dc610:c.instructions+=1;goto B4dc610;
case 0x4dc615:goto L4dc615;
case 0x4dc617:c.instructions+=5;goto B4dc617;
case 0x4dc61a:c.instructions+=4;goto B4dc61a;
case 0x4dc61e:c.instructions+=3;goto B4dc61e;
case 0x4dc620:c.instructions+=2;goto B4dc620;
case 0x4dc628:c.instructions+=1;goto B4dc628;
case 0x4dc62a:goto L4dc62a;
case 0x4dc630:c.instructions+=5;goto B4dc630;
case 0x4dc631:c.instructions+=4;goto B4dc631;
case 0x4dc637:c.instructions+=3;goto B4dc637;
case 0x4dc638:c.instructions+=2;goto B4dc638;
case 0x4dc63a:c.instructions+=1;goto B4dc63a;
case 0x4dc63f:goto L4dc63f;
case 0x4dc645:c.instructions+=1;goto B4dc645;
case 0x4dc647:goto L4dc647;
case 0x4dc649:goto L4dc649;
case 0x4dc64a:c.instructions+=5;goto B4dc64a;
case 0x4dc64b:c.instructions+=4;goto B4dc64b;
case 0x4dc64c:c.instructions+=3;goto B4dc64c;
case 0x4dc64e:c.instructions+=2;goto B4dc64e;
case 0x4dc656:c.instructions+=1;goto B4dc656;
case 0x4dc65b:goto L4dc65b;
case 0x4dc65d:c.instructions+=1;goto B4dc65d;
case 0x4dc662:goto L4dc662;
case 0x4dc664:c.instructions+=5;goto B4dc664;
case 0x4dc667:c.instructions+=4;goto B4dc667;
case 0x4dc66b:c.instructions+=3;goto B4dc66b;
case 0x4dc66d:c.instructions+=2;goto B4dc66d;
case 0x4dc675:c.instructions+=1;goto B4dc675;
case 0x4dc677:goto L4dc677;
case 0x4dc679:c.instructions+=6;goto B4dc679;
case 0x4dc67f:c.instructions+=5;goto B4dc67f;
case 0x4dc680:c.instructions+=4;goto B4dc680;
case 0x4dc686:c.instructions+=3;goto B4dc686;
case 0x4dc687:c.instructions+=2;goto B4dc687;
case 0x4dc689:c.instructions+=1;goto B4dc689;
case 0x4dc68e:goto L4dc68e;
case 0x4dc694:c.instructions+=2;goto B4dc694;
case 0x4dc696:c.instructions+=1;goto B4dc696;
case 0x4dc698:goto L4dc698;
case 0x4dc69a:goto L4dc69a;
case 0x4dc69c:c.instructions+=2;goto B4dc69c;
case 0x4dc6a4:c.instructions+=1;goto B4dc6a4;
case 0x4dc6a9:goto L4dc6a9;
case 0x4dc6ab:c.instructions+=5;goto B4dc6ab;
case 0x4dc6ae:c.instructions+=4;goto B4dc6ae;
case 0x4dc6b2:c.instructions+=3;goto B4dc6b2;
case 0x4dc6b4:c.instructions+=2;goto B4dc6b4;
case 0x4dc6bc:c.instructions+=1;goto B4dc6bc;
case 0x4dc6be:goto L4dc6be;
case 0x4dc6c0:c.instructions+=6;goto B4dc6c0;
case 0x4dc6c6:c.instructions+=5;goto B4dc6c6;
case 0x4dc6c7:c.instructions+=4;goto B4dc6c7;
case 0x4dc6cd:c.instructions+=3;goto B4dc6cd;
case 0x4dc6ce:c.instructions+=2;goto B4dc6ce;
case 0x4dc6d0:c.instructions+=1;goto B4dc6d0;
case 0x4dc6d5:goto L4dc6d5;
case 0x4dc6db:c.instructions+=1;goto B4dc6db;
case 0x4dc6dd:goto L4dc6dd;
case 0x4dc6df:goto L4dc6df;
case 0x4dc6e1:c.instructions+=2;goto B4dc6e1;
case 0x4dc6e9:c.instructions+=1;goto B4dc6e9;
case 0x4dc6ee:goto L4dc6ee;
case 0x4dc6f0:c.instructions+=5;goto B4dc6f0;
case 0x4dc6f3:c.instructions+=4;goto B4dc6f3;
case 0x4dc6f7:c.instructions+=3;goto B4dc6f7;
case 0x4dc6f9:c.instructions+=2;goto B4dc6f9;
case 0x4dc701:c.instructions+=1;goto B4dc701;
case 0x4dc703:goto L4dc703;
case 0x4dc709:c.instructions+=5;goto B4dc709;
case 0x4dc70a:c.instructions+=4;goto B4dc70a;
case 0x4dc710:c.instructions+=3;goto B4dc710;
case 0x4dc711:c.instructions+=2;goto B4dc711;
case 0x4dc713:c.instructions+=1;goto B4dc713;
case 0x4dc718:goto L4dc718;
case 0x4dc71e:c.instructions+=1;goto B4dc71e;
case 0x4dc720:goto L4dc720;
case 0x4dc722:goto L4dc722;
case 0x4dc723:c.instructions+=5;goto B4dc723;
case 0x4dc724:c.instructions+=4;goto B4dc724;
case 0x4dc725:c.instructions+=3;goto B4dc725;
case 0x4dc727:c.instructions+=2;goto B4dc727;
case 0x4dc72f:c.instructions+=1;goto B4dc72f;
case 0x4dc734:goto L4dc734;
case 0x4dc736:c.instructions+=1;goto B4dc736;
case 0x4dc73b:goto L4dc73b;
case 0x4dc73d:c.instructions+=5;goto B4dc73d;
case 0x4dc740:c.instructions+=4;goto B4dc740;
case 0x4dc744:c.instructions+=3;goto B4dc744;
case 0x4dc746:c.instructions+=2;goto B4dc746;
case 0x4dc74e:c.instructions+=1;goto B4dc74e;
case 0x4dc750:goto L4dc750;
case 0x4dc752:c.instructions+=6;goto B4dc752;
case 0x4dc758:c.instructions+=5;goto B4dc758;
case 0x4dc759:c.instructions+=4;goto B4dc759;
case 0x4dc75f:c.instructions+=3;goto B4dc75f;
case 0x4dc760:c.instructions+=2;goto B4dc760;
case 0x4dc762:c.instructions+=1;goto B4dc762;
case 0x4dc767:goto L4dc767;
case 0x4dc76d:c.instructions+=2;goto B4dc76d;
case 0x4dc76f:c.instructions+=1;goto B4dc76f;
case 0x4dc771:goto L4dc771;
case 0x4dc773:goto L4dc773;
case 0x4dc775:c.instructions+=2;goto B4dc775;
case 0x4dc77d:c.instructions+=1;goto B4dc77d;
case 0x4dc782:goto L4dc782;
case 0x4dc784:c.instructions+=5;goto B4dc784;
case 0x4dc787:c.instructions+=4;goto B4dc787;
case 0x4dc78b:c.instructions+=3;goto B4dc78b;
case 0x4dc78d:c.instructions+=2;goto B4dc78d;
case 0x4dc795:c.instructions+=1;goto B4dc795;
case 0x4dc797:goto L4dc797;
case 0x4dc799:c.instructions+=6;goto B4dc799;
case 0x4dc79f:c.instructions+=5;goto B4dc79f;
case 0x4dc7a0:c.instructions+=4;goto B4dc7a0;
case 0x4dc7a6:c.instructions+=3;goto B4dc7a6;
case 0x4dc7a7:c.instructions+=2;goto B4dc7a7;
case 0x4dc7a9:c.instructions+=1;goto B4dc7a9;
case 0x4dc7ae:goto L4dc7ae;
case 0x4dc7b4:c.instructions+=1;goto B4dc7b4;
case 0x4dc7b6:goto L4dc7b6;
case 0x4dc7b8:goto L4dc7b8;
case 0x4dc7ba:c.instructions+=2;goto B4dc7ba;
case 0x4dc7c2:c.instructions+=1;goto B4dc7c2;
case 0x4dc7c7:goto L4dc7c7;
case 0x4dc7c9:c.instructions+=5;goto B4dc7c9;
case 0x4dc7cc:c.instructions+=4;goto B4dc7cc;
case 0x4dc7d0:c.instructions+=3;goto B4dc7d0;
case 0x4dc7d2:c.instructions+=2;goto B4dc7d2;
case 0x4dc7da:c.instructions+=1;goto B4dc7da;
case 0x4dc7dc:goto L4dc7dc;
case 0x4dc7e2:c.instructions+=5;goto B4dc7e2;
case 0x4dc7e3:c.instructions+=4;goto B4dc7e3;
case 0x4dc7e9:c.instructions+=3;goto B4dc7e9;
case 0x4dc7ea:c.instructions+=2;goto B4dc7ea;
case 0x4dc7ec:c.instructions+=1;goto B4dc7ec;
case 0x4dc7f1:goto L4dc7f1;
case 0x4dc7f7:c.instructions+=1;goto B4dc7f7;
case 0x4dc7f9:goto L4dc7f9;
case 0x4dc7fb:goto L4dc7fb;
case 0x4dc7fc:c.instructions+=5;goto B4dc7fc;
case 0x4dc7fd:c.instructions+=4;goto B4dc7fd;
case 0x4dc7fe:c.instructions+=3;goto B4dc7fe;
case 0x4dc800:c.instructions+=2;goto B4dc800;
case 0x4dc808:c.instructions+=1;goto B4dc808;
case 0x4dc80d:goto L4dc80d;
case 0x4dc80f:c.instructions+=1;goto B4dc80f;
case 0x4dc814:goto L4dc814;
case 0x4dc816:c.instructions+=5;goto B4dc816;
case 0x4dc819:c.instructions+=4;goto B4dc819;
case 0x4dc81d:c.instructions+=3;goto B4dc81d;
case 0x4dc81f:c.instructions+=2;goto B4dc81f;
case 0x4dc827:c.instructions+=1;goto B4dc827;
case 0x4dc829:goto L4dc829;
case 0x4dc82b:c.instructions+=6;goto B4dc82b;
case 0x4dc831:c.instructions+=5;goto B4dc831;
case 0x4dc832:c.instructions+=4;goto B4dc832;
case 0x4dc838:c.instructions+=3;goto B4dc838;
case 0x4dc839:c.instructions+=2;goto B4dc839;
case 0x4dc83b:c.instructions+=1;goto B4dc83b;
case 0x4dc840:goto L4dc840;
case 0x4dc846:c.instructions+=2;goto B4dc846;
case 0x4dc848:c.instructions+=1;goto B4dc848;
case 0x4dc84a:goto L4dc84a;
case 0x4dc84c:goto L4dc84c;
case 0x4dc84e:c.instructions+=2;goto B4dc84e;
case 0x4dc856:c.instructions+=1;goto B4dc856;
case 0x4dc85b:goto L4dc85b;
case 0x4dc85d:c.instructions+=5;goto B4dc85d;
case 0x4dc860:c.instructions+=4;goto B4dc860;
case 0x4dc864:c.instructions+=3;goto B4dc864;
case 0x4dc866:c.instructions+=2;goto B4dc866;
case 0x4dc86e:c.instructions+=1;goto B4dc86e;
case 0x4dc870:goto L4dc870;
case 0x4dc872:c.instructions+=6;goto B4dc872;
case 0x4dc878:c.instructions+=5;goto B4dc878;
case 0x4dc879:c.instructions+=4;goto B4dc879;
case 0x4dc87f:c.instructions+=3;goto B4dc87f;
case 0x4dc880:c.instructions+=2;goto B4dc880;
case 0x4dc882:c.instructions+=1;goto B4dc882;
case 0x4dc887:goto L4dc887;
case 0x4dc88d:c.instructions+=1;goto B4dc88d;
case 0x4dc88f:goto L4dc88f;
case 0x4dc891:goto L4dc891;
case 0x4dc893:c.instructions+=2;goto B4dc893;
case 0x4dc89b:c.instructions+=1;goto B4dc89b;
case 0x4dc8a0:goto L4dc8a0;
case 0x4dc8a2:c.instructions+=5;goto B4dc8a2;
case 0x4dc8a5:c.instructions+=4;goto B4dc8a5;
case 0x4dc8a9:c.instructions+=3;goto B4dc8a9;
case 0x4dc8ab:c.instructions+=2;goto B4dc8ab;
case 0x4dc8b3:c.instructions+=1;goto B4dc8b3;
case 0x4dc8b5:goto L4dc8b5;
case 0x4dc8bb:c.instructions+=5;goto B4dc8bb;
case 0x4dc8bc:c.instructions+=4;goto B4dc8bc;
case 0x4dc8c2:c.instructions+=3;goto B4dc8c2;
case 0x4dc8c3:c.instructions+=2;goto B4dc8c3;
case 0x4dc8c5:c.instructions+=1;goto B4dc8c5;
case 0x4dc8ca:goto L4dc8ca;
case 0x4dc8d0:c.instructions+=1;goto B4dc8d0;
case 0x4dc8d2:goto L4dc8d2;
case 0x4dc8d4:goto L4dc8d4;
case 0x4dc8d5:c.instructions+=5;goto B4dc8d5;
case 0x4dc8d6:c.instructions+=4;goto B4dc8d6;
case 0x4dc8d7:c.instructions+=3;goto B4dc8d7;
case 0x4dc8d9:c.instructions+=2;goto B4dc8d9;
case 0x4dc8e1:c.instructions+=1;goto B4dc8e1;
case 0x4dc8e6:goto L4dc8e6;
case 0x4dc8e8:c.instructions+=1;goto B4dc8e8;
case 0x4dc8ed:goto L4dc8ed;
case 0x4dc8ef:c.instructions+=5;goto B4dc8ef;
case 0x4dc8f2:c.instructions+=4;goto B4dc8f2;
case 0x4dc8f6:c.instructions+=3;goto B4dc8f6;
case 0x4dc8f8:c.instructions+=2;goto B4dc8f8;
case 0x4dc900:c.instructions+=1;goto B4dc900;
case 0x4dc902:goto L4dc902;
case 0x4dc904:c.instructions+=6;goto B4dc904;
case 0x4dc90a:c.instructions+=5;goto B4dc90a;
case 0x4dc90b:c.instructions+=4;goto B4dc90b;
case 0x4dc911:c.instructions+=3;goto B4dc911;
case 0x4dc912:c.instructions+=2;goto B4dc912;
case 0x4dc914:c.instructions+=1;goto B4dc914;
case 0x4dc919:goto L4dc919;
case 0x4dc91f:c.instructions+=2;goto B4dc91f;
case 0x4dc921:c.instructions+=1;goto B4dc921;
case 0x4dc923:goto L4dc923;
case 0x4dc925:goto L4dc925;
case 0x4dc927:c.instructions+=2;goto B4dc927;
case 0x4dc92f:c.instructions+=1;goto B4dc92f;
case 0x4dc934:goto L4dc934;
case 0x4dc936:c.instructions+=5;goto B4dc936;
case 0x4dc939:c.instructions+=4;goto B4dc939;
case 0x4dc93d:c.instructions+=3;goto B4dc93d;
case 0x4dc93f:c.instructions+=2;goto B4dc93f;
case 0x4dc947:c.instructions+=1;goto B4dc947;
case 0x4dc949:goto L4dc949;
case 0x4dc94b:c.instructions+=6;goto B4dc94b;
case 0x4dc951:c.instructions+=5;goto B4dc951;
case 0x4dc952:c.instructions+=4;goto B4dc952;
case 0x4dc958:c.instructions+=3;goto B4dc958;
case 0x4dc959:c.instructions+=2;goto B4dc959;
case 0x4dc95b:c.instructions+=1;goto B4dc95b;
case 0x4dc960:goto L4dc960;
case 0x4dc966:c.instructions+=1;goto B4dc966;
case 0x4dc968:goto L4dc968;
case 0x4dc96a:goto L4dc96a;
case 0x4dc96c:c.instructions+=2;goto B4dc96c;
case 0x4dc974:c.instructions+=1;goto B4dc974;
case 0x4dc979:goto L4dc979;
case 0x4dc97b:c.instructions+=5;goto B4dc97b;
case 0x4dc97e:c.instructions+=4;goto B4dc97e;
case 0x4dc982:c.instructions+=3;goto B4dc982;
case 0x4dc984:c.instructions+=2;goto B4dc984;
case 0x4dc98c:c.instructions+=1;goto B4dc98c;
case 0x4dc98e:goto L4dc98e;
case 0x4dc994:c.instructions+=5;goto B4dc994;
case 0x4dc995:c.instructions+=4;goto B4dc995;
case 0x4dc99b:c.instructions+=3;goto B4dc99b;
case 0x4dc99c:c.instructions+=2;goto B4dc99c;
case 0x4dc99e:c.instructions+=1;goto B4dc99e;
case 0x4dc9a3:goto L4dc9a3;
case 0x4dc9a9:c.instructions+=1;goto B4dc9a9;
case 0x4dc9ab:goto L4dc9ab;
case 0x4dc9ad:goto L4dc9ad;
case 0x4dc9ae:c.instructions+=5;goto B4dc9ae;
case 0x4dc9af:c.instructions+=4;goto B4dc9af;
case 0x4dc9b0:c.instructions+=3;goto B4dc9b0;
case 0x4dc9b2:c.instructions+=2;goto B4dc9b2;
case 0x4dc9ba:c.instructions+=1;goto B4dc9ba;
case 0x4dc9bf:goto L4dc9bf;
case 0x4dc9c2:c.instructions+=3;goto B4dc9c2;
case 0x4dc9c4:c.instructions+=2;goto B4dc9c4;
case 0x4dc9cb:c.instructions+=1;goto B4dc9cb;
case 0x4dc9cd:goto L4dc9cd;
case 0x4dc9d0:c.instructions+=1;goto B4dc9d0;
case 0x4dc9d2:goto L4dc9d2;
case 0x4dc9d4:goto L4dc9d4;
case 0x4dc9d8:c.instructions+=8;goto B4dc9d8;
case 0x4dc9d9:c.instructions+=7;goto B4dc9d9;
case 0x4dc9dc:c.instructions+=6;goto B4dc9dc;
case 0x4dc9dd:c.instructions+=5;goto B4dc9dd;
case 0x4dc9de:c.instructions+=4;goto B4dc9de;
case 0x4dc9df:c.instructions+=3;goto B4dc9df;
case 0x4dc9e6:c.instructions+=2;goto B4dc9e6;
case 0x4dc9e9:c.instructions+=1;goto B4dc9e9;
case 0x4dc9f0:goto L4dc9f0;
case 0x4dc9f2:c.instructions+=14;goto B4dc9f2;
case 0x4dc9f7:c.instructions+=13;goto B4dc9f7;
case 0x4dc9fd:c.instructions+=12;goto B4dc9fd;
case 0x4dc9fe:c.instructions+=11;goto B4dc9fe;
case 0x4dca05:c.instructions+=10;goto B4dca05;
case 0x4dca06:c.instructions+=9;goto B4dca06;
case 0x4dca07:c.instructions+=8;goto B4dca07;
case 0x4dca08:c.instructions+=7;goto B4dca08;
case 0x4dca09:c.instructions+=6;goto B4dca09;
case 0x4dca0a:c.instructions+=5;goto B4dca0a;
case 0x4dca0c:c.instructions+=4;goto B4dca0c;
case 0x4dca12:c.instructions+=3;goto B4dca12;
case 0x4dca17:c.instructions+=2;goto B4dca17;
case 0x4dca18:c.instructions+=1;goto B4dca18;
case 0x4dca1d:goto L4dca1d;
case 0x4dca1f:c.instructions+=1;goto B4dca1f;
case 0x4dca24:goto L4dca24;
case 0x4dca26:c.instructions+=6;goto B4dca26;
case 0x4dca29:c.instructions+=5;goto B4dca29;
case 0x4dca2d:c.instructions+=4;goto B4dca2d;
case 0x4dca2f:c.instructions+=3;goto B4dca2f;
case 0x4dca31:c.instructions+=2;goto B4dca31;
case 0x4dca35:c.instructions+=1;goto B4dca35;
case 0x4dca37:goto L4dca37;
case 0x4dca3c:c.instructions+=9;goto B4dca3c;
case 0x4dca3f:c.instructions+=8;goto B4dca3f;
case 0x4dca46:c.instructions+=7;goto B4dca46;
case 0x4dca48:c.instructions+=6;goto B4dca48;
case 0x4dca4e:c.instructions+=5;goto B4dca4e;
case 0x4dca4f:c.instructions+=4;goto B4dca4f;
case 0x4dca55:c.instructions+=3;goto B4dca55;
case 0x4dca56:c.instructions+=2;goto B4dca56;
case 0x4dca58:c.instructions+=1;goto B4dca58;
case 0x4dca5d:goto L4dca5d;
case 0x4dca63:c.instructions+=2;goto B4dca63;
case 0x4dca66:c.instructions+=1;goto B4dca66;
case 0x4dca68:goto L4dca68;
case 0x4dca6a:c.instructions+=2;goto B4dca6a;
case 0x4dca72:c.instructions+=1;goto B4dca72;
case 0x4dca77:goto L4dca77;
case 0x4dca79:c.instructions+=5;goto B4dca79;
case 0x4dca7c:c.instructions+=4;goto B4dca7c;
case 0x4dca80:c.instructions+=3;goto B4dca80;
case 0x4dca82:c.instructions+=2;goto B4dca82;
case 0x4dca8a:c.instructions+=1;goto B4dca8a;
case 0x4dca8c:goto L4dca8c;
case 0x4dca91:c.instructions+=9;goto B4dca91;
case 0x4dca94:c.instructions+=8;goto B4dca94;
case 0x4dca9b:c.instructions+=7;goto B4dca9b;
case 0x4dca9d:c.instructions+=6;goto B4dca9d;
case 0x4dcaa3:c.instructions+=5;goto B4dcaa3;
case 0x4dcaa4:c.instructions+=4;goto B4dcaa4;
case 0x4dcaaa:c.instructions+=3;goto B4dcaaa;
case 0x4dcaab:c.instructions+=2;goto B4dcaab;
case 0x4dcaad:c.instructions+=1;goto B4dcaad;
case 0x4dcab2:goto L4dcab2;
case 0x4dcab8:c.instructions+=2;goto B4dcab8;
case 0x4dcabb:c.instructions+=1;goto B4dcabb;
case 0x4dcabd:goto L4dcabd;
case 0x4dcabf:goto L4dcabf;
case 0x4dcac1:c.instructions+=2;goto B4dcac1;
case 0x4dcac9:c.instructions+=1;goto B4dcac9;
case 0x4dcace:goto L4dcace;
case 0x4dcad0:c.instructions+=5;goto B4dcad0;
case 0x4dcad3:c.instructions+=4;goto B4dcad3;
case 0x4dcad7:c.instructions+=3;goto B4dcad7;
case 0x4dcad9:c.instructions+=2;goto B4dcad9;
case 0x4dcae1:c.instructions+=1;goto B4dcae1;
case 0x4dcae3:goto L4dcae3;
case 0x4dcae9:c.instructions+=5;goto B4dcae9;
case 0x4dcaea:c.instructions+=4;goto B4dcaea;
case 0x4dcaf0:c.instructions+=3;goto B4dcaf0;
case 0x4dcaf1:c.instructions+=2;goto B4dcaf1;
case 0x4dcaf3:c.instructions+=1;goto B4dcaf3;
case 0x4dcaf8:goto L4dcaf8;
case 0x4dcafe:c.instructions+=1;goto B4dcafe;
case 0x4dcb00:goto L4dcb00;
case 0x4dcb02:goto L4dcb02;
case 0x4dcb03:c.instructions+=5;goto B4dcb03;
case 0x4dcb04:c.instructions+=4;goto B4dcb04;
case 0x4dcb05:c.instructions+=3;goto B4dcb05;
case 0x4dcb07:c.instructions+=2;goto B4dcb07;
case 0x4dcb0f:c.instructions+=1;goto B4dcb0f;
case 0x4dcb14:goto L4dcb14;
case 0x4dcb16:c.instructions+=1;goto B4dcb16;
case 0x4dcb1b:goto L4dcb1b;
case 0x4dcb1d:c.instructions+=5;goto B4dcb1d;
case 0x4dcb20:c.instructions+=4;goto B4dcb20;
case 0x4dcb24:c.instructions+=3;goto B4dcb24;
case 0x4dcb26:c.instructions+=2;goto B4dcb26;
case 0x4dcb2e:c.instructions+=1;goto B4dcb2e;
case 0x4dcb30:goto L4dcb30;
case 0x4dcb35:c.instructions+=9;goto B4dcb35;
case 0x4dcb37:c.instructions+=8;goto B4dcb37;
case 0x4dcb3d:c.instructions+=7;goto B4dcb3d;
case 0x4dcb3e:c.instructions+=6;goto B4dcb3e;
case 0x4dcb44:c.instructions+=5;goto B4dcb44;
case 0x4dcb47:c.instructions+=4;goto B4dcb47;
case 0x4dcb4e:c.instructions+=3;goto B4dcb4e;
case 0x4dcb4f:c.instructions+=2;goto B4dcb4f;
case 0x4dcb51:c.instructions+=1;goto B4dcb51;
case 0x4dcb56:goto L4dcb56;
case 0x4dcb5c:c.instructions+=3;goto B4dcb5c;
case 0x4dcb5f:c.instructions+=2;goto B4dcb5f;
case 0x4dcb61:c.instructions+=1;goto B4dcb61;
case 0x4dcb63:goto L4dcb63;
case 0x4dcb65:goto L4dcb65;
case 0x4dcb67:c.instructions+=2;goto B4dcb67;
case 0x4dcb6f:c.instructions+=1;goto B4dcb6f;
case 0x4dcb74:goto L4dcb74;
case 0x4dcb76:c.instructions+=5;goto B4dcb76;
case 0x4dcb79:c.instructions+=4;goto B4dcb79;
case 0x4dcb7d:c.instructions+=3;goto B4dcb7d;
case 0x4dcb7f:c.instructions+=2;goto B4dcb7f;
case 0x4dcb87:c.instructions+=1;goto B4dcb87;
case 0x4dcb89:goto L4dcb89;
case 0x4dcb8e:c.instructions+=9;goto B4dcb8e;
case 0x4dcb90:c.instructions+=8;goto B4dcb90;
case 0x4dcb96:c.instructions+=7;goto B4dcb96;
case 0x4dcb97:c.instructions+=6;goto B4dcb97;
case 0x4dcb9d:c.instructions+=5;goto B4dcb9d;
case 0x4dcba0:c.instructions+=4;goto B4dcba0;
case 0x4dcba7:c.instructions+=3;goto B4dcba7;
case 0x4dcba8:c.instructions+=2;goto B4dcba8;
case 0x4dcbaa:c.instructions+=1;goto B4dcbaa;
case 0x4dcbaf:goto L4dcbaf;
case 0x4dcbb5:c.instructions+=2;goto B4dcbb5;
case 0x4dcbb8:c.instructions+=1;goto B4dcbb8;
case 0x4dcbba:goto L4dcbba;
case 0x4dcbbc:goto L4dcbbc;
case 0x4dcbbe:c.instructions+=2;goto B4dcbbe;
case 0x4dcbc6:c.instructions+=1;goto B4dcbc6;
case 0x4dcbcb:goto L4dcbcb;
case 0x4dcbcd:c.instructions+=5;goto B4dcbcd;
case 0x4dcbd0:c.instructions+=4;goto B4dcbd0;
case 0x4dcbd4:c.instructions+=3;goto B4dcbd4;
case 0x4dcbd6:c.instructions+=2;goto B4dcbd6;
case 0x4dcbde:c.instructions+=1;goto B4dcbde;
case 0x4dcbe0:goto L4dcbe0;
case 0x4dcbe6:c.instructions+=5;goto B4dcbe6;
case 0x4dcbe7:c.instructions+=4;goto B4dcbe7;
case 0x4dcbed:c.instructions+=3;goto B4dcbed;
case 0x4dcbee:c.instructions+=2;goto B4dcbee;
case 0x4dcbf0:c.instructions+=1;goto B4dcbf0;
case 0x4dcbf5:goto L4dcbf5;
case 0x4dcbfb:c.instructions+=1;goto B4dcbfb;
case 0x4dcbfd:goto L4dcbfd;
case 0x4dcbff:goto L4dcbff;
case 0x4dcc00:c.instructions+=5;goto B4dcc00;
case 0x4dcc01:c.instructions+=4;goto B4dcc01;
case 0x4dcc02:c.instructions+=3;goto B4dcc02;
case 0x4dcc04:c.instructions+=2;goto B4dcc04;
case 0x4dcc0c:c.instructions+=1;goto B4dcc0c;
case 0x4dcc11:goto L4dcc11;
case 0x4dcc13:c.instructions+=1;goto B4dcc13;
case 0x4dcc18:goto L4dcc18;
case 0x4dcc1a:c.instructions+=5;goto B4dcc1a;
case 0x4dcc1d:c.instructions+=4;goto B4dcc1d;
case 0x4dcc21:c.instructions+=3;goto B4dcc21;
case 0x4dcc23:c.instructions+=2;goto B4dcc23;
case 0x4dcc2b:c.instructions+=1;goto B4dcc2b;
case 0x4dcc2d:goto L4dcc2d;
case 0x4dcc32:c.instructions+=9;goto B4dcc32;
case 0x4dcc35:c.instructions+=8;goto B4dcc35;
case 0x4dcc3c:c.instructions+=7;goto B4dcc3c;
case 0x4dcc3e:c.instructions+=6;goto B4dcc3e;
case 0x4dcc44:c.instructions+=5;goto B4dcc44;
case 0x4dcc45:c.instructions+=4;goto B4dcc45;
case 0x4dcc4b:c.instructions+=3;goto B4dcc4b;
case 0x4dcc4c:c.instructions+=2;goto B4dcc4c;
case 0x4dcc4e:c.instructions+=1;goto B4dcc4e;
case 0x4dcc53:goto L4dcc53;
case 0x4dcc59:c.instructions+=3;goto B4dcc59;
case 0x4dcc5c:c.instructions+=2;goto B4dcc5c;
case 0x4dcc5e:c.instructions+=1;goto B4dcc5e;
case 0x4dcc60:goto L4dcc60;
case 0x4dcc62:goto L4dcc62;
case 0x4dcc64:c.instructions+=2;goto B4dcc64;
case 0x4dcc6c:c.instructions+=1;goto B4dcc6c;
case 0x4dcc71:goto L4dcc71;
case 0x4dcc73:c.instructions+=5;goto B4dcc73;
case 0x4dcc76:c.instructions+=4;goto B4dcc76;
case 0x4dcc7a:c.instructions+=3;goto B4dcc7a;
case 0x4dcc7c:c.instructions+=2;goto B4dcc7c;
case 0x4dcc84:c.instructions+=1;goto B4dcc84;
case 0x4dcc86:goto L4dcc86;
case 0x4dcc8b:c.instructions+=9;goto B4dcc8b;
case 0x4dcc8e:c.instructions+=8;goto B4dcc8e;
case 0x4dcc95:c.instructions+=7;goto B4dcc95;
case 0x4dcc97:c.instructions+=6;goto B4dcc97;
case 0x4dcc9d:c.instructions+=5;goto B4dcc9d;
case 0x4dcc9e:c.instructions+=4;goto B4dcc9e;
case 0x4dcca4:c.instructions+=3;goto B4dcca4;
case 0x4dcca5:c.instructions+=2;goto B4dcca5;
case 0x4dcca7:c.instructions+=1;goto B4dcca7;
case 0x4dccac:goto L4dccac;
case 0x4dccb2:c.instructions+=2;goto B4dccb2;
case 0x4dccb5:c.instructions+=1;goto B4dccb5;
case 0x4dccb7:goto L4dccb7;
case 0x4dccb9:goto L4dccb9;
case 0x4dccbb:c.instructions+=2;goto B4dccbb;
case 0x4dccc3:c.instructions+=1;goto B4dccc3;
case 0x4dccc8:goto L4dccc8;
case 0x4dccca:c.instructions+=5;goto B4dccca;
case 0x4dcccd:c.instructions+=4;goto B4dcccd;
case 0x4dccd1:c.instructions+=3;goto B4dccd1;
case 0x4dccd3:c.instructions+=2;goto B4dccd3;
case 0x4dccdb:c.instructions+=1;goto B4dccdb;
case 0x4dccdd:goto L4dccdd;
case 0x4dcce3:c.instructions+=5;goto B4dcce3;
case 0x4dcce4:c.instructions+=4;goto B4dcce4;
case 0x4dccea:c.instructions+=3;goto B4dccea;
case 0x4dcceb:c.instructions+=2;goto B4dcceb;
case 0x4dcced:c.instructions+=1;goto B4dcced;
case 0x4dccf2:goto L4dccf2;
case 0x4dccf8:c.instructions+=1;goto B4dccf8;
case 0x4dccfa:goto L4dccfa;
case 0x4dccfc:goto L4dccfc;
case 0x4dccfd:c.instructions+=5;goto B4dccfd;
case 0x4dccfe:c.instructions+=4;goto B4dccfe;
case 0x4dccff:c.instructions+=3;goto B4dccff;
case 0x4dcd01:c.instructions+=2;goto B4dcd01;
case 0x4dcd09:c.instructions+=1;goto B4dcd09;
case 0x4dcd0e:goto L4dcd0e;
case 0x4dcd10:c.instructions+=1;goto B4dcd10;
case 0x4dcd15:goto L4dcd15;
case 0x4dcd17:c.instructions+=5;goto B4dcd17;
case 0x4dcd1a:c.instructions+=4;goto B4dcd1a;
case 0x4dcd1e:c.instructions+=3;goto B4dcd1e;
case 0x4dcd20:c.instructions+=2;goto B4dcd20;
case 0x4dcd28:c.instructions+=1;goto B4dcd28;
case 0x4dcd2a:goto L4dcd2a;
case 0x4dcd2f:c.instructions+=9;goto B4dcd2f;
case 0x4dcd32:c.instructions+=8;goto B4dcd32;
case 0x4dcd39:c.instructions+=7;goto B4dcd39;
case 0x4dcd3b:c.instructions+=6;goto B4dcd3b;
case 0x4dcd41:c.instructions+=5;goto B4dcd41;
case 0x4dcd42:c.instructions+=4;goto B4dcd42;
case 0x4dcd48:c.instructions+=3;goto B4dcd48;
case 0x4dcd49:c.instructions+=2;goto B4dcd49;
case 0x4dcd4b:c.instructions+=1;goto B4dcd4b;
case 0x4dcd50:goto L4dcd50;
case 0x4dcd56:c.instructions+=3;goto B4dcd56;
case 0x4dcd59:c.instructions+=2;goto B4dcd59;
case 0x4dcd5b:c.instructions+=1;goto B4dcd5b;
case 0x4dcd5d:goto L4dcd5d;
case 0x4dcd5f:goto L4dcd5f;
case 0x4dcd61:c.instructions+=2;goto B4dcd61;
case 0x4dcd69:c.instructions+=1;goto B4dcd69;
case 0x4dcd6e:goto L4dcd6e;
case 0x4dcd70:c.instructions+=5;goto B4dcd70;
case 0x4dcd73:c.instructions+=4;goto B4dcd73;
case 0x4dcd77:c.instructions+=3;goto B4dcd77;
case 0x4dcd79:c.instructions+=2;goto B4dcd79;
case 0x4dcd81:c.instructions+=1;goto B4dcd81;
case 0x4dcd83:goto L4dcd83;
case 0x4dcd88:c.instructions+=9;goto B4dcd88;
case 0x4dcd8b:c.instructions+=8;goto B4dcd8b;
case 0x4dcd92:c.instructions+=7;goto B4dcd92;
case 0x4dcd94:c.instructions+=6;goto B4dcd94;
case 0x4dcd9a:c.instructions+=5;goto B4dcd9a;
case 0x4dcd9b:c.instructions+=4;goto B4dcd9b;
case 0x4dcda1:c.instructions+=3;goto B4dcda1;
case 0x4dcda2:c.instructions+=2;goto B4dcda2;
case 0x4dcda4:c.instructions+=1;goto B4dcda4;
case 0x4dcda9:goto L4dcda9;
case 0x4dcdaf:c.instructions+=2;goto B4dcdaf;
case 0x4dcdb2:c.instructions+=1;goto B4dcdb2;
case 0x4dcdb4:goto L4dcdb4;
case 0x4dcdb6:goto L4dcdb6;
case 0x4dcdb8:c.instructions+=2;goto B4dcdb8;
case 0x4dcdc0:c.instructions+=1;goto B4dcdc0;
case 0x4dcdc5:goto L4dcdc5;
case 0x4dcdc7:c.instructions+=5;goto B4dcdc7;
case 0x4dcdca:c.instructions+=4;goto B4dcdca;
case 0x4dcdce:c.instructions+=3;goto B4dcdce;
case 0x4dcdd0:c.instructions+=2;goto B4dcdd0;
case 0x4dcdd8:c.instructions+=1;goto B4dcdd8;
case 0x4dcdda:goto L4dcdda;
case 0x4dcde0:c.instructions+=5;goto B4dcde0;
case 0x4dcde1:c.instructions+=4;goto B4dcde1;
case 0x4dcde7:c.instructions+=3;goto B4dcde7;
case 0x4dcde8:c.instructions+=2;goto B4dcde8;
case 0x4dcdea:c.instructions+=1;goto B4dcdea;
case 0x4dcdef:goto L4dcdef;
case 0x4dcdf5:c.instructions+=1;goto B4dcdf5;
case 0x4dcdf7:goto L4dcdf7;
case 0x4dcdf9:goto L4dcdf9;
case 0x4dcdfa:c.instructions+=5;goto B4dcdfa;
case 0x4dcdfb:c.instructions+=4;goto B4dcdfb;
case 0x4dcdfc:c.instructions+=3;goto B4dcdfc;
case 0x4dcdfe:c.instructions+=2;goto B4dcdfe;
case 0x4dce06:c.instructions+=1;goto B4dce06;
case 0x4dce0b:goto L4dce0b;
case 0x4dce0d:c.instructions+=1;goto B4dce0d;
case 0x4dce12:goto L4dce12;
case 0x4dce14:c.instructions+=5;goto B4dce14;
case 0x4dce17:c.instructions+=4;goto B4dce17;
case 0x4dce1b:c.instructions+=3;goto B4dce1b;
case 0x4dce1d:c.instructions+=2;goto B4dce1d;
case 0x4dce25:c.instructions+=1;goto B4dce25;
case 0x4dce27:goto L4dce27;
case 0x4dce2c:c.instructions+=9;goto B4dce2c;
case 0x4dce2e:c.instructions+=8;goto B4dce2e;
case 0x4dce34:c.instructions+=7;goto B4dce34;
case 0x4dce35:c.instructions+=6;goto B4dce35;
case 0x4dce3b:c.instructions+=5;goto B4dce3b;
case 0x4dce3e:c.instructions+=4;goto B4dce3e;
case 0x4dce45:c.instructions+=3;goto B4dce45;
case 0x4dce46:c.instructions+=2;goto B4dce46;
case 0x4dce48:c.instructions+=1;goto B4dce48;
case 0x4dce4d:goto L4dce4d;
case 0x4dce53:c.instructions+=3;goto B4dce53;
case 0x4dce56:c.instructions+=2;goto B4dce56;
case 0x4dce58:c.instructions+=1;goto B4dce58;
case 0x4dce5a:goto L4dce5a;
case 0x4dce5c:goto L4dce5c;
case 0x4dce5e:c.instructions+=2;goto B4dce5e;
case 0x4dce66:c.instructions+=1;goto B4dce66;
case 0x4dce6b:goto L4dce6b;
case 0x4dce6d:c.instructions+=5;goto B4dce6d;
case 0x4dce70:c.instructions+=4;goto B4dce70;
case 0x4dce74:c.instructions+=3;goto B4dce74;
case 0x4dce76:c.instructions+=2;goto B4dce76;
case 0x4dce7e:c.instructions+=1;goto B4dce7e;
case 0x4dce80:goto L4dce80;
case 0x4dce85:c.instructions+=9;goto B4dce85;
case 0x4dce87:c.instructions+=8;goto B4dce87;
case 0x4dce8d:c.instructions+=7;goto B4dce8d;
case 0x4dce8e:c.instructions+=6;goto B4dce8e;
case 0x4dce94:c.instructions+=5;goto B4dce94;
case 0x4dce97:c.instructions+=4;goto B4dce97;
case 0x4dce9e:c.instructions+=3;goto B4dce9e;
case 0x4dce9f:c.instructions+=2;goto B4dce9f;
case 0x4dcea1:c.instructions+=1;goto B4dcea1;
case 0x4dcea6:goto L4dcea6;
case 0x4dceac:c.instructions+=2;goto B4dceac;
case 0x4dceaf:c.instructions+=1;goto B4dceaf;
case 0x4dceb1:goto L4dceb1;
case 0x4dceb3:goto L4dceb3;
case 0x4dceb5:c.instructions+=2;goto B4dceb5;
case 0x4dcebd:c.instructions+=1;goto B4dcebd;
case 0x4dcec2:goto L4dcec2;
case 0x4dcec4:c.instructions+=5;goto B4dcec4;
case 0x4dcec7:c.instructions+=4;goto B4dcec7;
case 0x4dcecb:c.instructions+=3;goto B4dcecb;
case 0x4dcecd:c.instructions+=2;goto B4dcecd;
case 0x4dced5:c.instructions+=1;goto B4dced5;
case 0x4dced7:goto L4dced7;
case 0x4dcedd:c.instructions+=5;goto B4dcedd;
case 0x4dcede:c.instructions+=4;goto B4dcede;
case 0x4dcee4:c.instructions+=3;goto B4dcee4;
case 0x4dcee5:c.instructions+=2;goto B4dcee5;
case 0x4dcee7:c.instructions+=1;goto B4dcee7;
case 0x4dceec:goto L4dceec;
case 0x4dcef2:c.instructions+=1;goto B4dcef2;
case 0x4dcef4:goto L4dcef4;
case 0x4dcef6:goto L4dcef6;
case 0x4dcef7:c.instructions+=5;goto B4dcef7;
case 0x4dcef8:c.instructions+=4;goto B4dcef8;
case 0x4dcef9:c.instructions+=3;goto B4dcef9;
case 0x4dcefb:c.instructions+=2;goto B4dcefb;
case 0x4dcf03:c.instructions+=1;goto B4dcf03;
case 0x4dcf08:goto L4dcf08;
case 0x4dcf0a:c.instructions+=1;goto B4dcf0a;
case 0x4dcf0f:goto L4dcf0f;
case 0x4dcf11:c.instructions+=5;goto B4dcf11;
case 0x4dcf14:c.instructions+=4;goto B4dcf14;
case 0x4dcf18:c.instructions+=3;goto B4dcf18;
case 0x4dcf1a:c.instructions+=2;goto B4dcf1a;
case 0x4dcf22:c.instructions+=1;goto B4dcf22;
case 0x4dcf24:goto L4dcf24;
case 0x4dcf29:c.instructions+=9;goto B4dcf29;
case 0x4dcf2c:c.instructions+=8;goto B4dcf2c;
case 0x4dcf33:c.instructions+=7;goto B4dcf33;
case 0x4dcf35:c.instructions+=6;goto B4dcf35;
case 0x4dcf3b:c.instructions+=5;goto B4dcf3b;
case 0x4dcf3c:c.instructions+=4;goto B4dcf3c;
case 0x4dcf42:c.instructions+=3;goto B4dcf42;
case 0x4dcf43:c.instructions+=2;goto B4dcf43;
case 0x4dcf45:c.instructions+=1;goto B4dcf45;
case 0x4dcf4a:goto L4dcf4a;
case 0x4dcf50:c.instructions+=3;goto B4dcf50;
case 0x4dcf53:c.instructions+=2;goto B4dcf53;
case 0x4dcf55:c.instructions+=1;goto B4dcf55;
case 0x4dcf57:goto L4dcf57;
case 0x4dcf59:goto L4dcf59;
case 0x4dcf5b:c.instructions+=2;goto B4dcf5b;
case 0x4dcf63:c.instructions+=1;goto B4dcf63;
case 0x4dcf68:goto L4dcf68;
case 0x4dcf6a:c.instructions+=5;goto B4dcf6a;
case 0x4dcf6d:c.instructions+=4;goto B4dcf6d;
case 0x4dcf71:c.instructions+=3;goto B4dcf71;
case 0x4dcf73:c.instructions+=2;goto B4dcf73;
case 0x4dcf7b:c.instructions+=1;goto B4dcf7b;
case 0x4dcf7d:goto L4dcf7d;
case 0x4dcf82:c.instructions+=9;goto B4dcf82;
case 0x4dcf85:c.instructions+=8;goto B4dcf85;
case 0x4dcf8c:c.instructions+=7;goto B4dcf8c;
case 0x4dcf8e:c.instructions+=6;goto B4dcf8e;
case 0x4dcf94:c.instructions+=5;goto B4dcf94;
case 0x4dcf95:c.instructions+=4;goto B4dcf95;
case 0x4dcf9b:c.instructions+=3;goto B4dcf9b;
case 0x4dcf9c:c.instructions+=2;goto B4dcf9c;
case 0x4dcf9e:c.instructions+=1;goto B4dcf9e;
case 0x4dcfa3:goto L4dcfa3;
case 0x4dcfa9:c.instructions+=2;goto B4dcfa9;
case 0x4dcfac:c.instructions+=1;goto B4dcfac;
case 0x4dcfae:goto L4dcfae;
case 0x4dcfb0:goto L4dcfb0;
case 0x4dcfb2:c.instructions+=2;goto B4dcfb2;
case 0x4dcfba:c.instructions+=1;goto B4dcfba;
case 0x4dcfbf:goto L4dcfbf;
case 0x4dcfc1:c.instructions+=5;goto B4dcfc1;
case 0x4dcfc4:c.instructions+=4;goto B4dcfc4;
case 0x4dcfc8:c.instructions+=3;goto B4dcfc8;
case 0x4dcfca:c.instructions+=2;goto B4dcfca;
case 0x4dcfd2:c.instructions+=1;goto B4dcfd2;
case 0x4dcfd4:goto L4dcfd4;
case 0x4dcfda:c.instructions+=5;goto B4dcfda;
case 0x4dcfdb:c.instructions+=4;goto B4dcfdb;
case 0x4dcfe1:c.instructions+=3;goto B4dcfe1;
case 0x4dcfe2:c.instructions+=2;goto B4dcfe2;
case 0x4dcfe4:c.instructions+=1;goto B4dcfe4;
case 0x4dcfe9:goto L4dcfe9;
case 0x4dcfef:c.instructions+=1;goto B4dcfef;
case 0x4dcff1:goto L4dcff1;
case 0x4dcff3:goto L4dcff3;
case 0x4dcff4:c.instructions+=4;goto B4dcff4;
case 0x4dcff5:c.instructions+=3;goto B4dcff5;
case 0x4dcff6:c.instructions+=2;goto B4dcff6;
case 0x4dcff8:c.instructions+=1;goto B4dcff8;
default:missing_instruction(c.pc);}
B4dc005:L4dc005:{c.instructions+=3;NFSU2_TR(0x4dc005);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc006:{NFSU2_TR(0x4dc006);
__builtin_memmove((R+4),(R+12),4);
}
B4dc008:{NFSU2_TR(0x4dc008);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc00dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc00d:L4dc00d:{c.instructions+=2;NFSU2_TR(0x4dc00d);
u8 U[4];
w4(U+0,u32(0x792aa8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc013:{NFSU2_TR(0x4dc013);
{goto L4dc017;}
}
B4dc015:L4dc015:{c.instructions+=1;NFSU2_TR(0x4dc015);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc017:L4dc017:{c.instructions+=3;NFSU2_TR(0x4dc017);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc019:{NFSU2_TR(0x4dc019);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc021:{NFSU2_TR(0x4dc021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc026ull));
TAIL_STATIC(0x575620u,575);
}
B4dc026:L4dc026:{c.instructions+=6;NFSU2_TR(0x4dc026);
__builtin_memmove((R+28),(R+0),4);
}
B4dc028:{NFSU2_TR(0x4dc028);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc02b:{NFSU2_TR(0x4dc02b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc02f:{NFSU2_TR(0x4dc02f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc031:{NFSU2_TR(0x4dc031);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc039:{NFSU2_TR(0x4dc039);
if(r1(R+518)){{goto L4dc058;}}
}
B4dc03b:L4dc03b:{c.instructions+=6;NFSU2_TR(0x4dc03b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc041:{NFSU2_TR(0x4dc041);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc042:{NFSU2_TR(0x4dc042);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc048:{NFSU2_TR(0x4dc048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc049:{NFSU2_TR(0x4dc049);
__builtin_memmove((R+4),(R+28),4);
}
B4dc04b:{NFSU2_TR(0x4dc04b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc050ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc050:L4dc050:{c.instructions+=2;NFSU2_TR(0x4dc050);
u8 U[4];
w4(U+0,u32(0x793468ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc056:{NFSU2_TR(0x4dc056);
{goto L4dc05a;}
}
B4dc058:L4dc058:{c.instructions+=1;NFSU2_TR(0x4dc058);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc05a:L4dc05a:{c.instructions+=6;NFSU2_TR(0x4dc05a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc05b:{NFSU2_TR(0x4dc05b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc05c:{NFSU2_TR(0x4dc05c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc05d:{NFSU2_TR(0x4dc05d);
__builtin_memmove((R+4),(R+24),4);
}
B4dc05f:{NFSU2_TR(0x4dc05f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc067:{NFSU2_TR(0x4dc067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc06cull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc06c:L4dc06c:{c.instructions+=2;NFSU2_TR(0x4dc06c);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc06e:{NFSU2_TR(0x4dc06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc073ull));
TAIL_STATIC(0x575620u,575);
}
B4dc073:L4dc073:{c.instructions+=6;NFSU2_TR(0x4dc073);
__builtin_memmove((R+28),(R+0),4);
}
B4dc075:{NFSU2_TR(0x4dc075);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc078:{NFSU2_TR(0x4dc078);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc07c:{NFSU2_TR(0x4dc07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc07e:{NFSU2_TR(0x4dc07e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x15ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc086:{NFSU2_TR(0x4dc086);
if(r1(R+518)){{goto L4dc0a9;}}
}
B4dc088:L4dc088:{c.instructions+=7;NFSU2_TR(0x4dc088);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc08a:{NFSU2_TR(0x4dc08a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc090:{NFSU2_TR(0x4dc090);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc091:{NFSU2_TR(0x4dc091);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc097:{NFSU2_TR(0x4dc097);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc098:{NFSU2_TR(0x4dc098);
__builtin_memmove((R+4),(R+28),4);
}
B4dc09a:{NFSU2_TR(0x4dc09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc09full));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc09f:L4dc09f:{c.instructions+=3;NFSU2_TR(0x4dc09f);
u8 U[4];
w4(U+0,u32(0x792b68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc0a5:{NFSU2_TR(0x4dc0a5);
__builtin_memmove((R+20),(R+28),4);
}
B4dc0a7:{NFSU2_TR(0x4dc0a7);
{goto L4dc0ab;}
}
B4dc0a9:L4dc0a9:{c.instructions+=1;NFSU2_TR(0x4dc0a9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc0ab:L4dc0ab:{c.instructions+=3;NFSU2_TR(0x4dc0ab);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc0ad:{NFSU2_TR(0x4dc0ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc0b5:{NFSU2_TR(0x4dc0b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc0baull));
TAIL_STATIC(0x575620u,575);
}
B4dc0ba:L4dc0ba:{c.instructions+=6;NFSU2_TR(0x4dc0ba);
__builtin_memmove((R+12),(R+0),4);
}
B4dc0bc:{NFSU2_TR(0x4dc0bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc0bf:{NFSU2_TR(0x4dc0bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc0c3:{NFSU2_TR(0x4dc0c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc0c5:{NFSU2_TR(0x4dc0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x16ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc0cd:{NFSU2_TR(0x4dc0cd);
if(r1(R+518)){{goto L4dc0ee;}}
}
B4dc0cf:L4dc0cf:{c.instructions+=7;NFSU2_TR(0x4dc0cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc0d1:{NFSU2_TR(0x4dc0d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc0d7:{NFSU2_TR(0x4dc0d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc0d8:{NFSU2_TR(0x4dc0d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc0de:{NFSU2_TR(0x4dc0de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc0df:{NFSU2_TR(0x4dc0df);
__builtin_memmove((R+4),(R+12),4);
}
B4dc0e1:{NFSU2_TR(0x4dc0e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc0e6ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc0e6:L4dc0e6:{c.instructions+=2;NFSU2_TR(0x4dc0e6);
u8 U[4];
w4(U+0,u32(0x792b28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc0ec:{NFSU2_TR(0x4dc0ec);
{goto L4dc0f0;}
}
B4dc0ee:L4dc0ee:{c.instructions+=1;NFSU2_TR(0x4dc0ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc0f0:L4dc0f0:{c.instructions+=3;NFSU2_TR(0x4dc0f0);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc0f2:{NFSU2_TR(0x4dc0f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc0fa:{NFSU2_TR(0x4dc0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc0ffull));
TAIL_STATIC(0x575620u,575);
}
B4dc0ff:L4dc0ff:{c.instructions+=6;NFSU2_TR(0x4dc0ff);
__builtin_memmove((R+28),(R+0),4);
}
B4dc101:{NFSU2_TR(0x4dc101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc104:{NFSU2_TR(0x4dc104);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc108:{NFSU2_TR(0x4dc108);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc10a:{NFSU2_TR(0x4dc10a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc112:{NFSU2_TR(0x4dc112);
if(r1(R+518)){{goto L4dc131;}}
}
B4dc114:L4dc114:{c.instructions+=6;NFSU2_TR(0x4dc114);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc11a:{NFSU2_TR(0x4dc11a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc11b:{NFSU2_TR(0x4dc11b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc121:{NFSU2_TR(0x4dc121);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc122:{NFSU2_TR(0x4dc122);
__builtin_memmove((R+4),(R+28),4);
}
B4dc124:{NFSU2_TR(0x4dc124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc129ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc129:L4dc129:{c.instructions+=2;NFSU2_TR(0x4dc129);
u8 U[4];
w4(U+0,u32(0x793528ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc12f:{NFSU2_TR(0x4dc12f);
{goto L4dc133;}
}
B4dc131:L4dc131:{c.instructions+=1;NFSU2_TR(0x4dc131);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc133:L4dc133:{c.instructions+=6;NFSU2_TR(0x4dc133);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc134:{NFSU2_TR(0x4dc134);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc135:{NFSU2_TR(0x4dc135);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc136:{NFSU2_TR(0x4dc136);
__builtin_memmove((R+4),(R+24),4);
}
B4dc138:{NFSU2_TR(0x4dc138);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc140:{NFSU2_TR(0x4dc140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc145ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc145:L4dc145:{c.instructions+=2;NFSU2_TR(0x4dc145);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc147:{NFSU2_TR(0x4dc147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc14cull));
TAIL_STATIC(0x575620u,575);
}
B4dc14c:L4dc14c:{c.instructions+=6;NFSU2_TR(0x4dc14c);
__builtin_memmove((R+28),(R+0),4);
}
B4dc14e:{NFSU2_TR(0x4dc14e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc151:{NFSU2_TR(0x4dc151);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc155:{NFSU2_TR(0x4dc155);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc157:{NFSU2_TR(0x4dc157);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc15f:{NFSU2_TR(0x4dc15f);
if(r1(R+518)){{goto L4dc182;}}
}
B4dc161:L4dc161:{c.instructions+=7;NFSU2_TR(0x4dc161);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc163:{NFSU2_TR(0x4dc163);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc169:{NFSU2_TR(0x4dc169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc16a:{NFSU2_TR(0x4dc16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc170:{NFSU2_TR(0x4dc170);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc171:{NFSU2_TR(0x4dc171);
__builtin_memmove((R+4),(R+28),4);
}
B4dc173:{NFSU2_TR(0x4dc173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc178ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc178:L4dc178:{c.instructions+=3;NFSU2_TR(0x4dc178);
u8 U[4];
w4(U+0,u32(0x792be8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc17e:{NFSU2_TR(0x4dc17e);
__builtin_memmove((R+20),(R+28),4);
}
B4dc180:{NFSU2_TR(0x4dc180);
{goto L4dc184;}
}
B4dc182:L4dc182:{c.instructions+=1;NFSU2_TR(0x4dc182);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc184:L4dc184:{c.instructions+=3;NFSU2_TR(0x4dc184);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc186:{NFSU2_TR(0x4dc186);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc18e:{NFSU2_TR(0x4dc18e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc193ull));
TAIL_STATIC(0x575620u,575);
}
B4dc193:L4dc193:{c.instructions+=6;NFSU2_TR(0x4dc193);
__builtin_memmove((R+12),(R+0),4);
}
B4dc195:{NFSU2_TR(0x4dc195);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc198:{NFSU2_TR(0x4dc198);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc19c:{NFSU2_TR(0x4dc19c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc19e:{NFSU2_TR(0x4dc19e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x19ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc1a6:{NFSU2_TR(0x4dc1a6);
if(r1(R+518)){{goto L4dc1c7;}}
}
B4dc1a8:L4dc1a8:{c.instructions+=7;NFSU2_TR(0x4dc1a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1aa:{NFSU2_TR(0x4dc1aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc1b0:{NFSU2_TR(0x4dc1b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1b1:{NFSU2_TR(0x4dc1b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc1b7:{NFSU2_TR(0x4dc1b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1b8:{NFSU2_TR(0x4dc1b8);
__builtin_memmove((R+4),(R+12),4);
}
B4dc1ba:{NFSU2_TR(0x4dc1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc1bfull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc1bf:L4dc1bf:{c.instructions+=2;NFSU2_TR(0x4dc1bf);
u8 U[4];
w4(U+0,u32(0x792ba8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc1c5:{NFSU2_TR(0x4dc1c5);
{goto L4dc1c9;}
}
B4dc1c7:L4dc1c7:{c.instructions+=1;NFSU2_TR(0x4dc1c7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc1c9:L4dc1c9:{c.instructions+=3;NFSU2_TR(0x4dc1c9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1cb:{NFSU2_TR(0x4dc1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc1d3:{NFSU2_TR(0x4dc1d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc1d8ull));
TAIL_STATIC(0x575620u,575);
}
B4dc1d8:L4dc1d8:{c.instructions+=6;NFSU2_TR(0x4dc1d8);
__builtin_memmove((R+28),(R+0),4);
}
B4dc1da:{NFSU2_TR(0x4dc1da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc1dd:{NFSU2_TR(0x4dc1dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc1e1:{NFSU2_TR(0x4dc1e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc1e3:{NFSU2_TR(0x4dc1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc1eb:{NFSU2_TR(0x4dc1eb);
if(r1(R+518)){{goto L4dc20a;}}
}
B4dc1ed:L4dc1ed:{c.instructions+=6;NFSU2_TR(0x4dc1ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc1f3:{NFSU2_TR(0x4dc1f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1f4:{NFSU2_TR(0x4dc1f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc1fa:{NFSU2_TR(0x4dc1fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc1fb:{NFSU2_TR(0x4dc1fb);
__builtin_memmove((R+4),(R+28),4);
}
B4dc1fd:{NFSU2_TR(0x4dc1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc202ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc202:L4dc202:{c.instructions+=2;NFSU2_TR(0x4dc202);
u8 U[4];
w4(U+0,u32(0x7935e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc208:{NFSU2_TR(0x4dc208);
{goto L4dc20c;}
}
B4dc20a:L4dc20a:{c.instructions+=1;NFSU2_TR(0x4dc20a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc20c:L4dc20c:{c.instructions+=6;NFSU2_TR(0x4dc20c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc20d:{NFSU2_TR(0x4dc20d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc20e:{NFSU2_TR(0x4dc20e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc20f:{NFSU2_TR(0x4dc20f);
__builtin_memmove((R+4),(R+24),4);
}
B4dc211:{NFSU2_TR(0x4dc211);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc219:{NFSU2_TR(0x4dc219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc21eull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc21e:L4dc21e:{c.instructions+=2;NFSU2_TR(0x4dc21e);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc220:{NFSU2_TR(0x4dc220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc225ull));
TAIL_STATIC(0x575620u,575);
}
B4dc225:L4dc225:{c.instructions+=6;NFSU2_TR(0x4dc225);
__builtin_memmove((R+28),(R+0),4);
}
B4dc227:{NFSU2_TR(0x4dc227);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc22a:{NFSU2_TR(0x4dc22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc22e:{NFSU2_TR(0x4dc22e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc230:{NFSU2_TR(0x4dc230);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc238:{NFSU2_TR(0x4dc238);
if(r1(R+518)){{goto L4dc25b;}}
}
B4dc23a:L4dc23a:{c.instructions+=7;NFSU2_TR(0x4dc23a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc23c:{NFSU2_TR(0x4dc23c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc242:{NFSU2_TR(0x4dc242);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc243:{NFSU2_TR(0x4dc243);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc249:{NFSU2_TR(0x4dc249);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc24a:{NFSU2_TR(0x4dc24a);
__builtin_memmove((R+4),(R+28),4);
}
B4dc24c:{NFSU2_TR(0x4dc24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc251ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc251:L4dc251:{c.instructions+=3;NFSU2_TR(0x4dc251);
u8 U[4];
w4(U+0,u32(0x792c68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc257:{NFSU2_TR(0x4dc257);
__builtin_memmove((R+20),(R+28),4);
}
B4dc259:{NFSU2_TR(0x4dc259);
{goto L4dc25d;}
}
B4dc25b:L4dc25b:{c.instructions+=1;NFSU2_TR(0x4dc25b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc25d:L4dc25d:{c.instructions+=3;NFSU2_TR(0x4dc25d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc25f:{NFSU2_TR(0x4dc25f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc267:{NFSU2_TR(0x4dc267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc26cull));
TAIL_STATIC(0x575620u,575);
}
B4dc26c:L4dc26c:{c.instructions+=6;NFSU2_TR(0x4dc26c);
__builtin_memmove((R+12),(R+0),4);
}
B4dc26e:{NFSU2_TR(0x4dc26e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc271:{NFSU2_TR(0x4dc271);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc275:{NFSU2_TR(0x4dc275);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc277:{NFSU2_TR(0x4dc277);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc27f:{NFSU2_TR(0x4dc27f);
if(r1(R+518)){{goto L4dc2a0;}}
}
B4dc281:L4dc281:{c.instructions+=7;NFSU2_TR(0x4dc281);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc283:{NFSU2_TR(0x4dc283);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc289:{NFSU2_TR(0x4dc289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc28a:{NFSU2_TR(0x4dc28a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc290:{NFSU2_TR(0x4dc290);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc291:{NFSU2_TR(0x4dc291);
__builtin_memmove((R+4),(R+12),4);
}
B4dc293:{NFSU2_TR(0x4dc293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc298ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc298:L4dc298:{c.instructions+=2;NFSU2_TR(0x4dc298);
u8 U[4];
w4(U+0,u32(0x792c28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc29e:{NFSU2_TR(0x4dc29e);
{goto L4dc2a2;}
}
B4dc2a0:L4dc2a0:{c.instructions+=1;NFSU2_TR(0x4dc2a0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc2a2:L4dc2a2:{c.instructions+=3;NFSU2_TR(0x4dc2a2);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2a4:{NFSU2_TR(0x4dc2a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc2ac:{NFSU2_TR(0x4dc2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc2b1ull));
TAIL_STATIC(0x575620u,575);
}
B4dc2b1:L4dc2b1:{c.instructions+=6;NFSU2_TR(0x4dc2b1);
__builtin_memmove((R+28),(R+0),4);
}
B4dc2b3:{NFSU2_TR(0x4dc2b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc2b6:{NFSU2_TR(0x4dc2b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc2ba:{NFSU2_TR(0x4dc2ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc2bc:{NFSU2_TR(0x4dc2bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc2c4:{NFSU2_TR(0x4dc2c4);
if(r1(R+518)){{goto L4dc2e3;}}
}
B4dc2c6:L4dc2c6:{c.instructions+=6;NFSU2_TR(0x4dc2c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc2cc:{NFSU2_TR(0x4dc2cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2cd:{NFSU2_TR(0x4dc2cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc2d3:{NFSU2_TR(0x4dc2d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2d4:{NFSU2_TR(0x4dc2d4);
__builtin_memmove((R+4),(R+28),4);
}
B4dc2d6:{NFSU2_TR(0x4dc2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc2dbull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc2db:L4dc2db:{c.instructions+=2;NFSU2_TR(0x4dc2db);
u8 U[4];
w4(U+0,u32(0x7936a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc2e1:{NFSU2_TR(0x4dc2e1);
{goto L4dc2e5;}
}
B4dc2e3:L4dc2e3:{c.instructions+=1;NFSU2_TR(0x4dc2e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc2e5:L4dc2e5:{c.instructions+=6;NFSU2_TR(0x4dc2e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2e6:{NFSU2_TR(0x4dc2e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2e7:{NFSU2_TR(0x4dc2e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2e8:{NFSU2_TR(0x4dc2e8);
__builtin_memmove((R+4),(R+24),4);
}
B4dc2ea:{NFSU2_TR(0x4dc2ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc2f2:{NFSU2_TR(0x4dc2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc2f7ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc2f7:L4dc2f7:{c.instructions+=2;NFSU2_TR(0x4dc2f7);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc2f9:{NFSU2_TR(0x4dc2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc2feull));
TAIL_STATIC(0x575620u,575);
}
B4dc2fe:L4dc2fe:{c.instructions+=6;NFSU2_TR(0x4dc2fe);
__builtin_memmove((R+28),(R+0),4);
}
B4dc300:{NFSU2_TR(0x4dc300);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc303:{NFSU2_TR(0x4dc303);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc307:{NFSU2_TR(0x4dc307);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc309:{NFSU2_TR(0x4dc309);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc311:{NFSU2_TR(0x4dc311);
if(r1(R+518)){{goto L4dc334;}}
}
B4dc313:L4dc313:{c.instructions+=7;NFSU2_TR(0x4dc313);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc315:{NFSU2_TR(0x4dc315);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc31b:{NFSU2_TR(0x4dc31b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc31c:{NFSU2_TR(0x4dc31c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc322:{NFSU2_TR(0x4dc322);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc323:{NFSU2_TR(0x4dc323);
__builtin_memmove((R+4),(R+28),4);
}
B4dc325:{NFSU2_TR(0x4dc325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc32aull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc32a:L4dc32a:{c.instructions+=3;NFSU2_TR(0x4dc32a);
u8 U[4];
w4(U+0,u32(0x792ce8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc330:{NFSU2_TR(0x4dc330);
__builtin_memmove((R+20),(R+28),4);
}
B4dc332:{NFSU2_TR(0x4dc332);
{goto L4dc336;}
}
B4dc334:L4dc334:{c.instructions+=1;NFSU2_TR(0x4dc334);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc336:L4dc336:{c.instructions+=3;NFSU2_TR(0x4dc336);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc338:{NFSU2_TR(0x4dc338);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc340:{NFSU2_TR(0x4dc340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc345ull));
TAIL_STATIC(0x575620u,575);
}
B4dc345:L4dc345:{c.instructions+=6;NFSU2_TR(0x4dc345);
__builtin_memmove((R+12),(R+0),4);
}
B4dc347:{NFSU2_TR(0x4dc347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc34a:{NFSU2_TR(0x4dc34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc34e:{NFSU2_TR(0x4dc34e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc350:{NFSU2_TR(0x4dc350);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc358:{NFSU2_TR(0x4dc358);
if(r1(R+518)){{goto L4dc379;}}
}
B4dc35a:L4dc35a:{c.instructions+=7;NFSU2_TR(0x4dc35a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc35c:{NFSU2_TR(0x4dc35c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc362:{NFSU2_TR(0x4dc362);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc363:{NFSU2_TR(0x4dc363);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc369:{NFSU2_TR(0x4dc369);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc36a:{NFSU2_TR(0x4dc36a);
__builtin_memmove((R+4),(R+12),4);
}
B4dc36c:{NFSU2_TR(0x4dc36c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc371ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc371:L4dc371:{c.instructions+=2;NFSU2_TR(0x4dc371);
u8 U[4];
w4(U+0,u32(0x792ca8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc377:{NFSU2_TR(0x4dc377);
{goto L4dc37b;}
}
B4dc379:L4dc379:{c.instructions+=1;NFSU2_TR(0x4dc379);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc37b:L4dc37b:{c.instructions+=3;NFSU2_TR(0x4dc37b);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc37d:{NFSU2_TR(0x4dc37d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc385:{NFSU2_TR(0x4dc385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc38aull));
TAIL_STATIC(0x575620u,575);
}
B4dc38a:L4dc38a:{c.instructions+=6;NFSU2_TR(0x4dc38a);
__builtin_memmove((R+28),(R+0),4);
}
B4dc38c:{NFSU2_TR(0x4dc38c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc38f:{NFSU2_TR(0x4dc38f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc393:{NFSU2_TR(0x4dc393);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc395:{NFSU2_TR(0x4dc395);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc39d:{NFSU2_TR(0x4dc39d);
if(r1(R+518)){{goto L4dc3bc;}}
}
B4dc39f:L4dc39f:{c.instructions+=6;NFSU2_TR(0x4dc39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc3a5:{NFSU2_TR(0x4dc3a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3a6:{NFSU2_TR(0x4dc3a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc3ac:{NFSU2_TR(0x4dc3ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3ad:{NFSU2_TR(0x4dc3ad);
__builtin_memmove((R+4),(R+28),4);
}
B4dc3af:{NFSU2_TR(0x4dc3af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc3b4ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc3b4:L4dc3b4:{c.instructions+=2;NFSU2_TR(0x4dc3b4);
u8 U[4];
w4(U+0,u32(0x793768ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc3ba:{NFSU2_TR(0x4dc3ba);
{goto L4dc3be;}
}
B4dc3bc:L4dc3bc:{c.instructions+=1;NFSU2_TR(0x4dc3bc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc3be:L4dc3be:{c.instructions+=6;NFSU2_TR(0x4dc3be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3bf:{NFSU2_TR(0x4dc3bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3c0:{NFSU2_TR(0x4dc3c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3c1:{NFSU2_TR(0x4dc3c1);
__builtin_memmove((R+4),(R+24),4);
}
B4dc3c3:{NFSU2_TR(0x4dc3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc3cb:{NFSU2_TR(0x4dc3cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc3d0ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc3d0:L4dc3d0:{c.instructions+=2;NFSU2_TR(0x4dc3d0);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3d2:{NFSU2_TR(0x4dc3d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc3d7ull));
TAIL_STATIC(0x575620u,575);
}
B4dc3d7:L4dc3d7:{c.instructions+=6;NFSU2_TR(0x4dc3d7);
__builtin_memmove((R+28),(R+0),4);
}
B4dc3d9:{NFSU2_TR(0x4dc3d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc3dc:{NFSU2_TR(0x4dc3dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc3e0:{NFSU2_TR(0x4dc3e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc3e2:{NFSU2_TR(0x4dc3e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x21ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc3ea:{NFSU2_TR(0x4dc3ea);
if(r1(R+518)){{goto L4dc40d;}}
}
B4dc3ec:L4dc3ec:{c.instructions+=7;NFSU2_TR(0x4dc3ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3ee:{NFSU2_TR(0x4dc3ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc3f4:{NFSU2_TR(0x4dc3f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3f5:{NFSU2_TR(0x4dc3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc3fb:{NFSU2_TR(0x4dc3fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc3fc:{NFSU2_TR(0x4dc3fc);
__builtin_memmove((R+4),(R+28),4);
}
B4dc3fe:{NFSU2_TR(0x4dc3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc403ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc403:L4dc403:{c.instructions+=3;NFSU2_TR(0x4dc403);
u8 U[4];
w4(U+0,u32(0x792de8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc409:{NFSU2_TR(0x4dc409);
__builtin_memmove((R+20),(R+28),4);
}
B4dc40b:{NFSU2_TR(0x4dc40b);
{goto L4dc40f;}
}
B4dc40d:L4dc40d:{c.instructions+=1;NFSU2_TR(0x4dc40d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc40f:L4dc40f:{c.instructions+=3;NFSU2_TR(0x4dc40f);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc411:{NFSU2_TR(0x4dc411);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc419:{NFSU2_TR(0x4dc419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc41eull));
TAIL_STATIC(0x575620u,575);
}
B4dc41e:L4dc41e:{c.instructions+=6;NFSU2_TR(0x4dc41e);
__builtin_memmove((R+12),(R+0),4);
}
B4dc420:{NFSU2_TR(0x4dc420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc423:{NFSU2_TR(0x4dc423);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc427:{NFSU2_TR(0x4dc427);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc429:{NFSU2_TR(0x4dc429);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x22ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc431:{NFSU2_TR(0x4dc431);
if(r1(R+518)){{goto L4dc452;}}
}
B4dc433:L4dc433:{c.instructions+=7;NFSU2_TR(0x4dc433);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc435:{NFSU2_TR(0x4dc435);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc43b:{NFSU2_TR(0x4dc43b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc43c:{NFSU2_TR(0x4dc43c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc442:{NFSU2_TR(0x4dc442);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc443:{NFSU2_TR(0x4dc443);
__builtin_memmove((R+4),(R+12),4);
}
B4dc445:{NFSU2_TR(0x4dc445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc44aull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc44a:L4dc44a:{c.instructions+=2;NFSU2_TR(0x4dc44a);
u8 U[4];
w4(U+0,u32(0x792da8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc450:{NFSU2_TR(0x4dc450);
{goto L4dc454;}
}
B4dc452:L4dc452:{c.instructions+=1;NFSU2_TR(0x4dc452);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc454:L4dc454:{c.instructions+=3;NFSU2_TR(0x4dc454);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc456:{NFSU2_TR(0x4dc456);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc45e:{NFSU2_TR(0x4dc45e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc463ull));
TAIL_STATIC(0x575620u,575);
}
B4dc463:L4dc463:{c.instructions+=6;NFSU2_TR(0x4dc463);
__builtin_memmove((R+28),(R+0),4);
}
B4dc465:{NFSU2_TR(0x4dc465);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc468:{NFSU2_TR(0x4dc468);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc46c:{NFSU2_TR(0x4dc46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc46e:{NFSU2_TR(0x4dc46e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x23ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc476:{NFSU2_TR(0x4dc476);
if(r1(R+518)){{goto L4dc495;}}
}
B4dc478:L4dc478:{c.instructions+=6;NFSU2_TR(0x4dc478);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc47e:{NFSU2_TR(0x4dc47e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc47f:{NFSU2_TR(0x4dc47f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc485:{NFSU2_TR(0x4dc485);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc486:{NFSU2_TR(0x4dc486);
__builtin_memmove((R+4),(R+28),4);
}
B4dc488:{NFSU2_TR(0x4dc488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc48dull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc48d:L4dc48d:{c.instructions+=2;NFSU2_TR(0x4dc48d);
u8 U[4];
w4(U+0,u32(0x7938e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc493:{NFSU2_TR(0x4dc493);
{goto L4dc497;}
}
B4dc495:L4dc495:{c.instructions+=1;NFSU2_TR(0x4dc495);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc497:L4dc497:{c.instructions+=6;NFSU2_TR(0x4dc497);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc498:{NFSU2_TR(0x4dc498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc499:{NFSU2_TR(0x4dc499);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc49a:{NFSU2_TR(0x4dc49a);
__builtin_memmove((R+4),(R+24),4);
}
B4dc49c:{NFSU2_TR(0x4dc49c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc4a4:{NFSU2_TR(0x4dc4a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc4a9ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc4a9:L4dc4a9:{c.instructions+=2;NFSU2_TR(0x4dc4a9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc4ab:{NFSU2_TR(0x4dc4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc4b0ull));
TAIL_STATIC(0x575620u,575);
}
B4dc4b0:L4dc4b0:{c.instructions+=6;NFSU2_TR(0x4dc4b0);
__builtin_memmove((R+28),(R+0),4);
}
B4dc4b2:{NFSU2_TR(0x4dc4b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc4b5:{NFSU2_TR(0x4dc4b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc4b9:{NFSU2_TR(0x4dc4b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc4bb:{NFSU2_TR(0x4dc4bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc4c3:{NFSU2_TR(0x4dc4c3);
if(r1(R+518)){{goto L4dc4e6;}}
}
B4dc4c5:L4dc4c5:{c.instructions+=7;NFSU2_TR(0x4dc4c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc4c7:{NFSU2_TR(0x4dc4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc4cd:{NFSU2_TR(0x4dc4cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc4ce:{NFSU2_TR(0x4dc4ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc4d4:{NFSU2_TR(0x4dc4d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc4d5:{NFSU2_TR(0x4dc4d5);
__builtin_memmove((R+4),(R+28),4);
}
B4dc4d7:{NFSU2_TR(0x4dc4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc4dcull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc4dc:L4dc4dc:{c.instructions+=3;NFSU2_TR(0x4dc4dc);
u8 U[4];
w4(U+0,u32(0x792e68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc4e2:{NFSU2_TR(0x4dc4e2);
__builtin_memmove((R+20),(R+28),4);
}
B4dc4e4:{NFSU2_TR(0x4dc4e4);
{goto L4dc4e8;}
}
B4dc4e6:L4dc4e6:{c.instructions+=1;NFSU2_TR(0x4dc4e6);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc4e8:L4dc4e8:{c.instructions+=3;NFSU2_TR(0x4dc4e8);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc4ea:{NFSU2_TR(0x4dc4ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc4f2:{NFSU2_TR(0x4dc4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc4f7ull));
TAIL_STATIC(0x575620u,575);
}
B4dc4f7:L4dc4f7:{c.instructions+=6;NFSU2_TR(0x4dc4f7);
__builtin_memmove((R+12),(R+0),4);
}
B4dc4f9:{NFSU2_TR(0x4dc4f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc4fc:{NFSU2_TR(0x4dc4fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc500:{NFSU2_TR(0x4dc500);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc502:{NFSU2_TR(0x4dc502);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x25ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc50a:{NFSU2_TR(0x4dc50a);
if(r1(R+518)){{goto L4dc52b;}}
}
B4dc50c:L4dc50c:{c.instructions+=7;NFSU2_TR(0x4dc50c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc50e:{NFSU2_TR(0x4dc50e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc514:{NFSU2_TR(0x4dc514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc515:{NFSU2_TR(0x4dc515);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc51b:{NFSU2_TR(0x4dc51b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc51c:{NFSU2_TR(0x4dc51c);
__builtin_memmove((R+4),(R+12),4);
}
B4dc51e:{NFSU2_TR(0x4dc51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc523ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc523:L4dc523:{c.instructions+=2;NFSU2_TR(0x4dc523);
u8 U[4];
w4(U+0,u32(0x792e28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc529:{NFSU2_TR(0x4dc529);
{goto L4dc52d;}
}
B4dc52b:L4dc52b:{c.instructions+=1;NFSU2_TR(0x4dc52b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc52d:L4dc52d:{c.instructions+=3;NFSU2_TR(0x4dc52d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc52f:{NFSU2_TR(0x4dc52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc537:{NFSU2_TR(0x4dc537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc53cull));
TAIL_STATIC(0x575620u,575);
}
B4dc53c:L4dc53c:{c.instructions+=6;NFSU2_TR(0x4dc53c);
__builtin_memmove((R+28),(R+0),4);
}
B4dc53e:{NFSU2_TR(0x4dc53e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc541:{NFSU2_TR(0x4dc541);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc545:{NFSU2_TR(0x4dc545);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc547:{NFSU2_TR(0x4dc547);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x26ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc54f:{NFSU2_TR(0x4dc54f);
if(r1(R+518)){{goto L4dc56e;}}
}
B4dc551:L4dc551:{c.instructions+=6;NFSU2_TR(0x4dc551);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc557:{NFSU2_TR(0x4dc557);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc558:{NFSU2_TR(0x4dc558);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc55e:{NFSU2_TR(0x4dc55e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc55f:{NFSU2_TR(0x4dc55f);
__builtin_memmove((R+4),(R+28),4);
}
B4dc561:{NFSU2_TR(0x4dc561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc566ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc566:L4dc566:{c.instructions+=2;NFSU2_TR(0x4dc566);
u8 U[4];
w4(U+0,u32(0x7939a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc56c:{NFSU2_TR(0x4dc56c);
{goto L4dc570;}
}
B4dc56e:L4dc56e:{c.instructions+=1;NFSU2_TR(0x4dc56e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc570:L4dc570:{c.instructions+=6;NFSU2_TR(0x4dc570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc571:{NFSU2_TR(0x4dc571);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc572:{NFSU2_TR(0x4dc572);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc573:{NFSU2_TR(0x4dc573);
__builtin_memmove((R+4),(R+24),4);
}
B4dc575:{NFSU2_TR(0x4dc575);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc57d:{NFSU2_TR(0x4dc57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc582ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc582:L4dc582:{c.instructions+=2;NFSU2_TR(0x4dc582);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc584:{NFSU2_TR(0x4dc584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc589ull));
TAIL_STATIC(0x575620u,575);
}
B4dc589:L4dc589:{c.instructions+=6;NFSU2_TR(0x4dc589);
__builtin_memmove((R+28),(R+0),4);
}
B4dc58b:{NFSU2_TR(0x4dc58b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc58e:{NFSU2_TR(0x4dc58e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc592:{NFSU2_TR(0x4dc592);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc594:{NFSU2_TR(0x4dc594);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x27ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc59c:{NFSU2_TR(0x4dc59c);
if(r1(R+518)){{goto L4dc5bf;}}
}
B4dc59e:L4dc59e:{c.instructions+=7;NFSU2_TR(0x4dc59e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5a0:{NFSU2_TR(0x4dc5a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc5a6:{NFSU2_TR(0x4dc5a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5a7:{NFSU2_TR(0x4dc5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc5ad:{NFSU2_TR(0x4dc5ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5ae:{NFSU2_TR(0x4dc5ae);
__builtin_memmove((R+4),(R+28),4);
}
B4dc5b0:{NFSU2_TR(0x4dc5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc5b5ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc5b5:L4dc5b5:{c.instructions+=3;NFSU2_TR(0x4dc5b5);
u8 U[4];
w4(U+0,u32(0x792d68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc5bb:{NFSU2_TR(0x4dc5bb);
__builtin_memmove((R+20),(R+28),4);
}
B4dc5bd:{NFSU2_TR(0x4dc5bd);
{goto L4dc5c1;}
}
B4dc5bf:L4dc5bf:{c.instructions+=1;NFSU2_TR(0x4dc5bf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc5c1:L4dc5c1:{c.instructions+=3;NFSU2_TR(0x4dc5c1);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5c3:{NFSU2_TR(0x4dc5c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc5cb:{NFSU2_TR(0x4dc5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc5d0ull));
TAIL_STATIC(0x575620u,575);
}
B4dc5d0:L4dc5d0:{c.instructions+=6;NFSU2_TR(0x4dc5d0);
__builtin_memmove((R+12),(R+0),4);
}
B4dc5d2:{NFSU2_TR(0x4dc5d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc5d5:{NFSU2_TR(0x4dc5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc5d9:{NFSU2_TR(0x4dc5d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc5db:{NFSU2_TR(0x4dc5db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc5e3:{NFSU2_TR(0x4dc5e3);
if(r1(R+518)){{goto L4dc604;}}
}
B4dc5e5:L4dc5e5:{c.instructions+=7;NFSU2_TR(0x4dc5e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5e7:{NFSU2_TR(0x4dc5e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc5ed:{NFSU2_TR(0x4dc5ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5ee:{NFSU2_TR(0x4dc5ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc5f4:{NFSU2_TR(0x4dc5f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc5f5:{NFSU2_TR(0x4dc5f5);
__builtin_memmove((R+4),(R+12),4);
}
B4dc5f7:{NFSU2_TR(0x4dc5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc5fcull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc5fc:L4dc5fc:{c.instructions+=2;NFSU2_TR(0x4dc5fc);
u8 U[4];
w4(U+0,u32(0x792d28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc602:{NFSU2_TR(0x4dc602);
{goto L4dc606;}
}
B4dc604:L4dc604:{c.instructions+=1;NFSU2_TR(0x4dc604);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc606:L4dc606:{c.instructions+=3;NFSU2_TR(0x4dc606);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc608:{NFSU2_TR(0x4dc608);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc610:{NFSU2_TR(0x4dc610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc615ull));
TAIL_STATIC(0x575620u,575);
}
B4dc615:L4dc615:{c.instructions+=6;NFSU2_TR(0x4dc615);
__builtin_memmove((R+28),(R+0),4);
}
B4dc617:{NFSU2_TR(0x4dc617);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc61a:{NFSU2_TR(0x4dc61a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc61e:{NFSU2_TR(0x4dc61e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc620:{NFSU2_TR(0x4dc620);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x29ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc628:{NFSU2_TR(0x4dc628);
if(r1(R+518)){{goto L4dc647;}}
}
B4dc62a:L4dc62a:{c.instructions+=6;NFSU2_TR(0x4dc62a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc630:{NFSU2_TR(0x4dc630);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc631:{NFSU2_TR(0x4dc631);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc637:{NFSU2_TR(0x4dc637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc638:{NFSU2_TR(0x4dc638);
__builtin_memmove((R+4),(R+28),4);
}
B4dc63a:{NFSU2_TR(0x4dc63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc63full));
TAIL_STATIC(0x51e090u,51e);
}
B4dc63f:L4dc63f:{c.instructions+=2;NFSU2_TR(0x4dc63f);
u8 U[4];
w4(U+0,u32(0x793828ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc645:{NFSU2_TR(0x4dc645);
{goto L4dc649;}
}
B4dc647:L4dc647:{c.instructions+=1;NFSU2_TR(0x4dc647);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc649:L4dc649:{c.instructions+=6;NFSU2_TR(0x4dc649);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc64a:{NFSU2_TR(0x4dc64a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc64b:{NFSU2_TR(0x4dc64b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc64c:{NFSU2_TR(0x4dc64c);
__builtin_memmove((R+4),(R+24),4);
}
B4dc64e:{NFSU2_TR(0x4dc64e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc656:{NFSU2_TR(0x4dc656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc65bull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc65b:L4dc65b:{c.instructions+=2;NFSU2_TR(0x4dc65b);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc65d:{NFSU2_TR(0x4dc65d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc662ull));
TAIL_STATIC(0x575620u,575);
}
B4dc662:L4dc662:{c.instructions+=6;NFSU2_TR(0x4dc662);
__builtin_memmove((R+28),(R+0),4);
}
B4dc664:{NFSU2_TR(0x4dc664);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc667:{NFSU2_TR(0x4dc667);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc66b:{NFSU2_TR(0x4dc66b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc66d:{NFSU2_TR(0x4dc66d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2aull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc675:{NFSU2_TR(0x4dc675);
if(r1(R+518)){{goto L4dc698;}}
}
B4dc677:L4dc677:{c.instructions+=7;NFSU2_TR(0x4dc677);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc679:{NFSU2_TR(0x4dc679);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc67f:{NFSU2_TR(0x4dc67f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc680:{NFSU2_TR(0x4dc680);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc686:{NFSU2_TR(0x4dc686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc687:{NFSU2_TR(0x4dc687);
__builtin_memmove((R+4),(R+28),4);
}
B4dc689:{NFSU2_TR(0x4dc689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc68eull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc68e:L4dc68e:{c.instructions+=3;NFSU2_TR(0x4dc68e);
u8 U[4];
w4(U+0,u32(0x792ee8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc694:{NFSU2_TR(0x4dc694);
__builtin_memmove((R+20),(R+28),4);
}
B4dc696:{NFSU2_TR(0x4dc696);
{goto L4dc69a;}
}
B4dc698:L4dc698:{c.instructions+=1;NFSU2_TR(0x4dc698);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc69a:L4dc69a:{c.instructions+=3;NFSU2_TR(0x4dc69a);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc69c:{NFSU2_TR(0x4dc69c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc6a4:{NFSU2_TR(0x4dc6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc6a9ull));
TAIL_STATIC(0x575620u,575);
}
B4dc6a9:L4dc6a9:{c.instructions+=6;NFSU2_TR(0x4dc6a9);
__builtin_memmove((R+12),(R+0),4);
}
B4dc6ab:{NFSU2_TR(0x4dc6ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc6ae:{NFSU2_TR(0x4dc6ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc6b2:{NFSU2_TR(0x4dc6b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc6b4:{NFSU2_TR(0x4dc6b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2bull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc6bc:{NFSU2_TR(0x4dc6bc);
if(r1(R+518)){{goto L4dc6dd;}}
}
B4dc6be:L4dc6be:{c.instructions+=7;NFSU2_TR(0x4dc6be);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc6c0:{NFSU2_TR(0x4dc6c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc6c6:{NFSU2_TR(0x4dc6c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc6c7:{NFSU2_TR(0x4dc6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc6cd:{NFSU2_TR(0x4dc6cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc6ce:{NFSU2_TR(0x4dc6ce);
__builtin_memmove((R+4),(R+12),4);
}
B4dc6d0:{NFSU2_TR(0x4dc6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc6d5ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc6d5:L4dc6d5:{c.instructions+=2;NFSU2_TR(0x4dc6d5);
u8 U[4];
w4(U+0,u32(0x792ea8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc6db:{NFSU2_TR(0x4dc6db);
{goto L4dc6df;}
}
B4dc6dd:L4dc6dd:{c.instructions+=1;NFSU2_TR(0x4dc6dd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc6df:L4dc6df:{c.instructions+=3;NFSU2_TR(0x4dc6df);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc6e1:{NFSU2_TR(0x4dc6e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc6e9:{NFSU2_TR(0x4dc6e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc6eeull));
TAIL_STATIC(0x575620u,575);
}
B4dc6ee:L4dc6ee:{c.instructions+=6;NFSU2_TR(0x4dc6ee);
__builtin_memmove((R+28),(R+0),4);
}
B4dc6f0:{NFSU2_TR(0x4dc6f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc6f3:{NFSU2_TR(0x4dc6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc6f7:{NFSU2_TR(0x4dc6f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc6f9:{NFSU2_TR(0x4dc6f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc701:{NFSU2_TR(0x4dc701);
if(r1(R+518)){{goto L4dc720;}}
}
B4dc703:L4dc703:{c.instructions+=6;NFSU2_TR(0x4dc703);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc709:{NFSU2_TR(0x4dc709);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc70a:{NFSU2_TR(0x4dc70a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc710:{NFSU2_TR(0x4dc710);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc711:{NFSU2_TR(0x4dc711);
__builtin_memmove((R+4),(R+28),4);
}
B4dc713:{NFSU2_TR(0x4dc713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc718ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc718:L4dc718:{c.instructions+=2;NFSU2_TR(0x4dc718);
u8 U[4];
w4(U+0,u32(0x793a68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc71e:{NFSU2_TR(0x4dc71e);
{goto L4dc722;}
}
B4dc720:L4dc720:{c.instructions+=1;NFSU2_TR(0x4dc720);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc722:L4dc722:{c.instructions+=6;NFSU2_TR(0x4dc722);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc723:{NFSU2_TR(0x4dc723);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc724:{NFSU2_TR(0x4dc724);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc725:{NFSU2_TR(0x4dc725);
__builtin_memmove((R+4),(R+24),4);
}
B4dc727:{NFSU2_TR(0x4dc727);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc72f:{NFSU2_TR(0x4dc72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc734ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc734:L4dc734:{c.instructions+=2;NFSU2_TR(0x4dc734);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc736:{NFSU2_TR(0x4dc736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc73bull));
TAIL_STATIC(0x575620u,575);
}
B4dc73b:L4dc73b:{c.instructions+=6;NFSU2_TR(0x4dc73b);
__builtin_memmove((R+28),(R+0),4);
}
B4dc73d:{NFSU2_TR(0x4dc73d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc740:{NFSU2_TR(0x4dc740);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc744:{NFSU2_TR(0x4dc744);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc746:{NFSU2_TR(0x4dc746);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2dull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc74e:{NFSU2_TR(0x4dc74e);
if(r1(R+518)){{goto L4dc771;}}
}
B4dc750:L4dc750:{c.instructions+=7;NFSU2_TR(0x4dc750);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc752:{NFSU2_TR(0x4dc752);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc758:{NFSU2_TR(0x4dc758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc759:{NFSU2_TR(0x4dc759);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc75f:{NFSU2_TR(0x4dc75f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc760:{NFSU2_TR(0x4dc760);
__builtin_memmove((R+4),(R+28),4);
}
B4dc762:{NFSU2_TR(0x4dc762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc767ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc767:L4dc767:{c.instructions+=3;NFSU2_TR(0x4dc767);
u8 U[4];
w4(U+0,u32(0x792f68ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc76d:{NFSU2_TR(0x4dc76d);
__builtin_memmove((R+20),(R+28),4);
}
B4dc76f:{NFSU2_TR(0x4dc76f);
{goto L4dc773;}
}
B4dc771:L4dc771:{c.instructions+=1;NFSU2_TR(0x4dc771);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc773:L4dc773:{c.instructions+=3;NFSU2_TR(0x4dc773);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc775:{NFSU2_TR(0x4dc775);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc77d:{NFSU2_TR(0x4dc77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc782ull));
TAIL_STATIC(0x575620u,575);
}
B4dc782:L4dc782:{c.instructions+=6;NFSU2_TR(0x4dc782);
__builtin_memmove((R+12),(R+0),4);
}
B4dc784:{NFSU2_TR(0x4dc784);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc787:{NFSU2_TR(0x4dc787);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc78b:{NFSU2_TR(0x4dc78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc78d:{NFSU2_TR(0x4dc78d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc795:{NFSU2_TR(0x4dc795);
if(r1(R+518)){{goto L4dc7b6;}}
}
B4dc797:L4dc797:{c.instructions+=7;NFSU2_TR(0x4dc797);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc799:{NFSU2_TR(0x4dc799);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc79f:{NFSU2_TR(0x4dc79f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7a0:{NFSU2_TR(0x4dc7a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc7a6:{NFSU2_TR(0x4dc7a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7a7:{NFSU2_TR(0x4dc7a7);
__builtin_memmove((R+4),(R+12),4);
}
B4dc7a9:{NFSU2_TR(0x4dc7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc7aeull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc7ae:L4dc7ae:{c.instructions+=2;NFSU2_TR(0x4dc7ae);
u8 U[4];
w4(U+0,u32(0x792f28ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc7b4:{NFSU2_TR(0x4dc7b4);
{goto L4dc7b8;}
}
B4dc7b6:L4dc7b6:{c.instructions+=1;NFSU2_TR(0x4dc7b6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc7b8:L4dc7b8:{c.instructions+=3;NFSU2_TR(0x4dc7b8);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7ba:{NFSU2_TR(0x4dc7ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc7c2:{NFSU2_TR(0x4dc7c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc7c7ull));
TAIL_STATIC(0x575620u,575);
}
B4dc7c7:L4dc7c7:{c.instructions+=6;NFSU2_TR(0x4dc7c7);
__builtin_memmove((R+28),(R+0),4);
}
B4dc7c9:{NFSU2_TR(0x4dc7c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc7cc:{NFSU2_TR(0x4dc7cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc7d0:{NFSU2_TR(0x4dc7d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc7d2:{NFSU2_TR(0x4dc7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2full));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc7da:{NFSU2_TR(0x4dc7da);
if(r1(R+518)){{goto L4dc7f9;}}
}
B4dc7dc:L4dc7dc:{c.instructions+=6;NFSU2_TR(0x4dc7dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc7e2:{NFSU2_TR(0x4dc7e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7e3:{NFSU2_TR(0x4dc7e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc7e9:{NFSU2_TR(0x4dc7e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7ea:{NFSU2_TR(0x4dc7ea);
__builtin_memmove((R+4),(R+28),4);
}
B4dc7ec:{NFSU2_TR(0x4dc7ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc7f1ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc7f1:L4dc7f1:{c.instructions+=2;NFSU2_TR(0x4dc7f1);
u8 U[4];
w4(U+0,u32(0x793b28ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc7f7:{NFSU2_TR(0x4dc7f7);
{goto L4dc7fb;}
}
B4dc7f9:L4dc7f9:{c.instructions+=1;NFSU2_TR(0x4dc7f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc7fb:L4dc7fb:{c.instructions+=6;NFSU2_TR(0x4dc7fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7fc:{NFSU2_TR(0x4dc7fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7fd:{NFSU2_TR(0x4dc7fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc7fe:{NFSU2_TR(0x4dc7fe);
__builtin_memmove((R+4),(R+24),4);
}
B4dc800:{NFSU2_TR(0x4dc800);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc808:{NFSU2_TR(0x4dc808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc80dull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc80d:L4dc80d:{c.instructions+=2;NFSU2_TR(0x4dc80d);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc80f:{NFSU2_TR(0x4dc80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc814ull));
TAIL_STATIC(0x575620u,575);
}
B4dc814:L4dc814:{c.instructions+=6;NFSU2_TR(0x4dc814);
__builtin_memmove((R+28),(R+0),4);
}
B4dc816:{NFSU2_TR(0x4dc816);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc819:{NFSU2_TR(0x4dc819);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc81d:{NFSU2_TR(0x4dc81d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc81f:{NFSU2_TR(0x4dc81f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc827:{NFSU2_TR(0x4dc827);
if(r1(R+518)){{goto L4dc84a;}}
}
B4dc829:L4dc829:{c.instructions+=7;NFSU2_TR(0x4dc829);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc82b:{NFSU2_TR(0x4dc82b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc831:{NFSU2_TR(0x4dc831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc832:{NFSU2_TR(0x4dc832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc838:{NFSU2_TR(0x4dc838);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc839:{NFSU2_TR(0x4dc839);
__builtin_memmove((R+4),(R+28),4);
}
B4dc83b:{NFSU2_TR(0x4dc83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc840ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc840:L4dc840:{c.instructions+=3;NFSU2_TR(0x4dc840);
u8 U[4];
w4(U+0,u32(0x792fe8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc846:{NFSU2_TR(0x4dc846);
__builtin_memmove((R+20),(R+28),4);
}
B4dc848:{NFSU2_TR(0x4dc848);
{goto L4dc84c;}
}
B4dc84a:L4dc84a:{c.instructions+=1;NFSU2_TR(0x4dc84a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc84c:L4dc84c:{c.instructions+=3;NFSU2_TR(0x4dc84c);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc84e:{NFSU2_TR(0x4dc84e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc856:{NFSU2_TR(0x4dc856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc85bull));
TAIL_STATIC(0x575620u,575);
}
B4dc85b:L4dc85b:{c.instructions+=6;NFSU2_TR(0x4dc85b);
__builtin_memmove((R+12),(R+0),4);
}
B4dc85d:{NFSU2_TR(0x4dc85d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc860:{NFSU2_TR(0x4dc860);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc864:{NFSU2_TR(0x4dc864);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc866:{NFSU2_TR(0x4dc866);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x31ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc86e:{NFSU2_TR(0x4dc86e);
if(r1(R+518)){{goto L4dc88f;}}
}
B4dc870:L4dc870:{c.instructions+=7;NFSU2_TR(0x4dc870);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc872:{NFSU2_TR(0x4dc872);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc878:{NFSU2_TR(0x4dc878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc879:{NFSU2_TR(0x4dc879);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc87f:{NFSU2_TR(0x4dc87f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc880:{NFSU2_TR(0x4dc880);
__builtin_memmove((R+4),(R+12),4);
}
B4dc882:{NFSU2_TR(0x4dc882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc887ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc887:L4dc887:{c.instructions+=2;NFSU2_TR(0x4dc887);
u8 U[4];
w4(U+0,u32(0x792fa8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc88d:{NFSU2_TR(0x4dc88d);
{goto L4dc891;}
}
B4dc88f:L4dc88f:{c.instructions+=1;NFSU2_TR(0x4dc88f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc891:L4dc891:{c.instructions+=3;NFSU2_TR(0x4dc891);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc893:{NFSU2_TR(0x4dc893);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc89b:{NFSU2_TR(0x4dc89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc8a0ull));
TAIL_STATIC(0x575620u,575);
}
B4dc8a0:L4dc8a0:{c.instructions+=6;NFSU2_TR(0x4dc8a0);
__builtin_memmove((R+28),(R+0),4);
}
B4dc8a2:{NFSU2_TR(0x4dc8a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc8a5:{NFSU2_TR(0x4dc8a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc8a9:{NFSU2_TR(0x4dc8a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc8ab:{NFSU2_TR(0x4dc8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc8b3:{NFSU2_TR(0x4dc8b3);
if(r1(R+518)){{goto L4dc8d2;}}
}
B4dc8b5:L4dc8b5:{c.instructions+=6;NFSU2_TR(0x4dc8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc8bb:{NFSU2_TR(0x4dc8bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8bc:{NFSU2_TR(0x4dc8bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc8c2:{NFSU2_TR(0x4dc8c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8c3:{NFSU2_TR(0x4dc8c3);
__builtin_memmove((R+4),(R+28),4);
}
B4dc8c5:{NFSU2_TR(0x4dc8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc8caull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc8ca:L4dc8ca:{c.instructions+=2;NFSU2_TR(0x4dc8ca);
u8 U[4];
w4(U+0,u32(0x793be8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc8d0:{NFSU2_TR(0x4dc8d0);
{goto L4dc8d4;}
}
B4dc8d2:L4dc8d2:{c.instructions+=1;NFSU2_TR(0x4dc8d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc8d4:L4dc8d4:{c.instructions+=6;NFSU2_TR(0x4dc8d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8d5:{NFSU2_TR(0x4dc8d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8d6:{NFSU2_TR(0x4dc8d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8d7:{NFSU2_TR(0x4dc8d7);
__builtin_memmove((R+4),(R+24),4);
}
B4dc8d9:{NFSU2_TR(0x4dc8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc8e1:{NFSU2_TR(0x4dc8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc8e6ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc8e6:L4dc8e6:{c.instructions+=2;NFSU2_TR(0x4dc8e6);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc8e8:{NFSU2_TR(0x4dc8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc8edull));
TAIL_STATIC(0x575620u,575);
}
B4dc8ed:L4dc8ed:{c.instructions+=6;NFSU2_TR(0x4dc8ed);
__builtin_memmove((R+28),(R+0),4);
}
B4dc8ef:{NFSU2_TR(0x4dc8ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc8f2:{NFSU2_TR(0x4dc8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc8f6:{NFSU2_TR(0x4dc8f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc8f8:{NFSU2_TR(0x4dc8f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x33ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc900:{NFSU2_TR(0x4dc900);
if(r1(R+518)){{goto L4dc923;}}
}
B4dc902:L4dc902:{c.instructions+=7;NFSU2_TR(0x4dc902);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc904:{NFSU2_TR(0x4dc904);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc90a:{NFSU2_TR(0x4dc90a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc90b:{NFSU2_TR(0x4dc90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc911:{NFSU2_TR(0x4dc911);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc912:{NFSU2_TR(0x4dc912);
__builtin_memmove((R+4),(R+28),4);
}
B4dc914:{NFSU2_TR(0x4dc914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc919ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc919:L4dc919:{c.instructions+=3;NFSU2_TR(0x4dc919);
u8 U[4];
w4(U+0,u32(0x793068ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc91f:{NFSU2_TR(0x4dc91f);
__builtin_memmove((R+20),(R+28),4);
}
B4dc921:{NFSU2_TR(0x4dc921);
{goto L4dc925;}
}
B4dc923:L4dc923:{c.instructions+=1;NFSU2_TR(0x4dc923);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dc925:L4dc925:{c.instructions+=3;NFSU2_TR(0x4dc925);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc927:{NFSU2_TR(0x4dc927);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc92f:{NFSU2_TR(0x4dc92f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc934ull));
TAIL_STATIC(0x575620u,575);
}
B4dc934:L4dc934:{c.instructions+=6;NFSU2_TR(0x4dc934);
__builtin_memmove((R+12),(R+0),4);
}
B4dc936:{NFSU2_TR(0x4dc936);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc939:{NFSU2_TR(0x4dc939);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc93d:{NFSU2_TR(0x4dc93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc93f:{NFSU2_TR(0x4dc93f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc947:{NFSU2_TR(0x4dc947);
if(r1(R+518)){{goto L4dc968;}}
}
B4dc949:L4dc949:{c.instructions+=7;NFSU2_TR(0x4dc949);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc94b:{NFSU2_TR(0x4dc94b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc951:{NFSU2_TR(0x4dc951);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc952:{NFSU2_TR(0x4dc952);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dc958:{NFSU2_TR(0x4dc958);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc959:{NFSU2_TR(0x4dc959);
__builtin_memmove((R+4),(R+12),4);
}
B4dc95b:{NFSU2_TR(0x4dc95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc960ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dc960:L4dc960:{c.instructions+=2;NFSU2_TR(0x4dc960);
u8 U[4];
w4(U+0,u32(0x793028ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dc966:{NFSU2_TR(0x4dc966);
{goto L4dc96a;}
}
B4dc968:L4dc968:{c.instructions+=1;NFSU2_TR(0x4dc968);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dc96a:L4dc96a:{c.instructions+=3;NFSU2_TR(0x4dc96a);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc96c:{NFSU2_TR(0x4dc96c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc974:{NFSU2_TR(0x4dc974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc979ull));
TAIL_STATIC(0x575620u,575);
}
B4dc979:L4dc979:{c.instructions+=6;NFSU2_TR(0x4dc979);
__builtin_memmove((R+28),(R+0),4);
}
B4dc97b:{NFSU2_TR(0x4dc97b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dc97e:{NFSU2_TR(0x4dc97e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc982:{NFSU2_TR(0x4dc982);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc984:{NFSU2_TR(0x4dc984);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x35ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc98c:{NFSU2_TR(0x4dc98c);
if(r1(R+518)){{goto L4dc9ab;}}
}
B4dc98e:L4dc98e:{c.instructions+=6;NFSU2_TR(0x4dc98e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dc994:{NFSU2_TR(0x4dc994);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc995:{NFSU2_TR(0x4dc995);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dc99b:{NFSU2_TR(0x4dc99b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc99c:{NFSU2_TR(0x4dc99c);
__builtin_memmove((R+4),(R+28),4);
}
B4dc99e:{NFSU2_TR(0x4dc99e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc9a3ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dc9a3:L4dc9a3:{c.instructions+=2;NFSU2_TR(0x4dc9a3);
u8 U[4];
w4(U+0,u32(0x793ca8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dc9a9:{NFSU2_TR(0x4dc9a9);
{goto L4dc9ad;}
}
B4dc9ab:L4dc9ab:{c.instructions+=1;NFSU2_TR(0x4dc9ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dc9ad:L4dc9ad:{c.instructions+=6;NFSU2_TR(0x4dc9ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9ae:{NFSU2_TR(0x4dc9ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9af:{NFSU2_TR(0x4dc9af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9b0:{NFSU2_TR(0x4dc9b0);
__builtin_memmove((R+4),(R+24),4);
}
B4dc9b2:{NFSU2_TR(0x4dc9b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc9ba:{NFSU2_TR(0x4dc9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dc9bfull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dc9bf:L4dc9bf:{c.instructions+=4;NFSU2_TR(0x4dc9bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dc9c2:{NFSU2_TR(0x4dc9c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dc9c4:{NFSU2_TR(0x4dc9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dc9cb:{NFSU2_TR(0x4dc9cb);
if(r1(R+518)){{goto L4dc9d2;}}
}
B4dc9cd:L4dc9cd:{c.instructions+=2;NFSU2_TR(0x4dc9cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4dc9d0:{NFSU2_TR(0x4dc9d0);
{goto L4dc9d4;}
}
B4dc9d2:L4dc9d2:{c.instructions+=1;NFSU2_TR(0x4dc9d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dc9d4:L4dc9d4:{c.instructions+=9;NFSU2_TR(0x4dc9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dc9d8:{NFSU2_TR(0x4dc9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dc9d9:{NFSU2_TR(0x4dc9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc9dc:{NFSU2_TR(0x4dc9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dc9dd:{NFSU2_TR(0x4dc9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dc9de:{NFSU2_TR(0x4dc9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dc9df:{NFSU2_TR(0x4dc9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dc9e6:{NFSU2_TR(0x4dc9e6);
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
B4dc9e9:{NFSU2_TR(0x4dc9e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dc9f0:L4dc9f0:{c.instructions+=15;NFSU2_TR(0x4dc9f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9f2:{NFSU2_TR(0x4dc9f2);
u8 U[4];
w4(U+0,u32(0x775498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9f7:{NFSU2_TR(0x4dc9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dc9fd:{NFSU2_TR(0x4dc9fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dc9fe:{NFSU2_TR(0x4dc9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dca05:{NFSU2_TR(0x4dca05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca06:{NFSU2_TR(0x4dca06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca07:{NFSU2_TR(0x4dca07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca08:{NFSU2_TR(0x4dca08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca09:{NFSU2_TR(0x4dca09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca0a:{NFSU2_TR(0x4dca0a);
__builtin_memmove((R+24),(R+4),4);
}
B4dca0c:{NFSU2_TR(0x4dca0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dca12:{NFSU2_TR(0x4dca12);
u8 U[4];
w4(U+0,u32(0xf91fba4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca17:{NFSU2_TR(0x4dca17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca18:{NFSU2_TR(0x4dca18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dca1dull));
TAIL_STATIC(0x50c900u,50c);
}
B4dca1d:L4dca1d:{c.instructions+=2;NFSU2_TR(0x4dca1d);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca1f:{NFSU2_TR(0x4dca1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dca24ull));
TAIL_STATIC(0x575620u,575);
}
B4dca24:L4dca24:{c.instructions+=7;NFSU2_TR(0x4dca24);
__builtin_memmove((R+28),(R+0),4);
}
B4dca26:{NFSU2_TR(0x4dca26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dca29:{NFSU2_TR(0x4dca29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dca2d:{NFSU2_TR(0x4dca2d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dca2f:{NFSU2_TR(0x4dca2f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dca31:{NFSU2_TR(0x4dca31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dca35:{NFSU2_TR(0x4dca35);
if(r1(R+518)){{goto L4dca68;}}
}
B4dca37:L4dca37:{c.instructions+=10;NFSU2_TR(0x4dca37);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dca3c:{NFSU2_TR(0x4dca3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dca3f:{NFSU2_TR(0x4dca3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dca46:{NFSU2_TR(0x4dca46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca48:{NFSU2_TR(0x4dca48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dca4e:{NFSU2_TR(0x4dca4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca4f:{NFSU2_TR(0x4dca4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dca55:{NFSU2_TR(0x4dca55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca56:{NFSU2_TR(0x4dca56);
__builtin_memmove((R+4),(R+28),4);
}
B4dca58:{NFSU2_TR(0x4dca58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dca5dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dca5d:L4dca5d:{c.instructions+=3;NFSU2_TR(0x4dca5d);
u8 U[4];
w4(U+0,u32(0x793168ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dca63:{NFSU2_TR(0x4dca63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dca66:{NFSU2_TR(0x4dca66);
__builtin_memmove((R+20),(R+28),4);
}
B4dca68:L4dca68:{c.instructions+=3;NFSU2_TR(0x4dca68);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca6a:{NFSU2_TR(0x4dca6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dca72:{NFSU2_TR(0x4dca72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dca77ull));
TAIL_STATIC(0x575620u,575);
}
B4dca77:L4dca77:{c.instructions+=6;NFSU2_TR(0x4dca77);
__builtin_memmove((R+28),(R+0),4);
}
B4dca79:{NFSU2_TR(0x4dca79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dca7c:{NFSU2_TR(0x4dca7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dca80:{NFSU2_TR(0x4dca80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dca82:{NFSU2_TR(0x4dca82);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dca8a:{NFSU2_TR(0x4dca8a);
if(r1(R+518)){{goto L4dcabd;}}
}
B4dca8c:L4dca8c:{c.instructions+=10;NFSU2_TR(0x4dca8c);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dca91:{NFSU2_TR(0x4dca91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dca94:{NFSU2_TR(0x4dca94);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dca9b:{NFSU2_TR(0x4dca9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dca9d:{NFSU2_TR(0x4dca9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcaa3:{NFSU2_TR(0x4dcaa3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcaa4:{NFSU2_TR(0x4dcaa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcaaa:{NFSU2_TR(0x4dcaaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcaab:{NFSU2_TR(0x4dcaab);
__builtin_memmove((R+4),(R+28),4);
}
B4dcaad:{NFSU2_TR(0x4dcaad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcab2ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcab2:L4dcab2:{c.instructions+=3;NFSU2_TR(0x4dcab2);
u8 U[4];
w4(U+0,u32(0x793128ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcab8:{NFSU2_TR(0x4dcab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcabb:{NFSU2_TR(0x4dcabb);
{goto L4dcabf;}
}
B4dcabd:L4dcabd:{c.instructions+=1;NFSU2_TR(0x4dcabd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dcabf:L4dcabf:{c.instructions+=3;NFSU2_TR(0x4dcabf);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcac1:{NFSU2_TR(0x4dcac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcac9:{NFSU2_TR(0x4dcac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcaceull));
TAIL_STATIC(0x575620u,575);
}
B4dcace:L4dcace:{c.instructions+=6;NFSU2_TR(0x4dcace);
__builtin_memmove((R+12),(R+0),4);
}
B4dcad0:{NFSU2_TR(0x4dcad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcad3:{NFSU2_TR(0x4dcad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcad7:{NFSU2_TR(0x4dcad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcad9:{NFSU2_TR(0x4dcad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcae1:{NFSU2_TR(0x4dcae1);
if(r1(R+518)){{goto L4dcb00;}}
}
B4dcae3:L4dcae3:{c.instructions+=6;NFSU2_TR(0x4dcae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcae9:{NFSU2_TR(0x4dcae9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcaea:{NFSU2_TR(0x4dcaea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcaf0:{NFSU2_TR(0x4dcaf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcaf1:{NFSU2_TR(0x4dcaf1);
__builtin_memmove((R+4),(R+12),4);
}
B4dcaf3:{NFSU2_TR(0x4dcaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcaf8ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dcaf8:L4dcaf8:{c.instructions+=2;NFSU2_TR(0x4dcaf8);
u8 U[4];
w4(U+0,u32(0x7930e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dcafe:{NFSU2_TR(0x4dcafe);
{goto L4dcb02;}
}
B4dcb00:L4dcb00:{c.instructions+=1;NFSU2_TR(0x4dcb00);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dcb02:L4dcb02:{c.instructions+=6;NFSU2_TR(0x4dcb02);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb03:{NFSU2_TR(0x4dcb03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb04:{NFSU2_TR(0x4dcb04);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb05:{NFSU2_TR(0x4dcb05);
__builtin_memmove((R+4),(R+24),4);
}
B4dcb07:{NFSU2_TR(0x4dcb07);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb0f:{NFSU2_TR(0x4dcb0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcb14ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dcb14:L4dcb14:{c.instructions+=2;NFSU2_TR(0x4dcb14);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb16:{NFSU2_TR(0x4dcb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcb1bull));
TAIL_STATIC(0x575620u,575);
}
B4dcb1b:L4dcb1b:{c.instructions+=6;NFSU2_TR(0x4dcb1b);
__builtin_memmove((R+28),(R+0),4);
}
B4dcb1d:{NFSU2_TR(0x4dcb1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcb20:{NFSU2_TR(0x4dcb20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb24:{NFSU2_TR(0x4dcb24);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcb26:{NFSU2_TR(0x4dcb26);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb2e:{NFSU2_TR(0x4dcb2e);
if(r1(R+518)){{goto L4dcb63;}}
}
B4dcb30:L4dcb30:{c.instructions+=10;NFSU2_TR(0x4dcb30);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcb35:{NFSU2_TR(0x4dcb35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb37:{NFSU2_TR(0x4dcb37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcb3d:{NFSU2_TR(0x4dcb3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb3e:{NFSU2_TR(0x4dcb3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcb44:{NFSU2_TR(0x4dcb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dcb47:{NFSU2_TR(0x4dcb47);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dcb4e:{NFSU2_TR(0x4dcb4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb4f:{NFSU2_TR(0x4dcb4f);
__builtin_memmove((R+4),(R+28),4);
}
B4dcb51:{NFSU2_TR(0x4dcb51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcb56ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcb56:L4dcb56:{c.instructions+=4;NFSU2_TR(0x4dcb56);
u8 U[4];
w4(U+0,u32(0x7931e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcb5c:{NFSU2_TR(0x4dcb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb5f:{NFSU2_TR(0x4dcb5f);
__builtin_memmove((R+20),(R+28),4);
}
B4dcb61:{NFSU2_TR(0x4dcb61);
{goto L4dcb65;}
}
B4dcb63:L4dcb63:{c.instructions+=1;NFSU2_TR(0x4dcb63);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dcb65:L4dcb65:{c.instructions+=3;NFSU2_TR(0x4dcb65);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb67:{NFSU2_TR(0x4dcb67);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb6f:{NFSU2_TR(0x4dcb6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcb74ull));
TAIL_STATIC(0x575620u,575);
}
B4dcb74:L4dcb74:{c.instructions+=6;NFSU2_TR(0x4dcb74);
__builtin_memmove((R+12),(R+0),4);
}
B4dcb76:{NFSU2_TR(0x4dcb76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcb79:{NFSU2_TR(0x4dcb79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb7d:{NFSU2_TR(0x4dcb7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcb7f:{NFSU2_TR(0x4dcb7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcb87:{NFSU2_TR(0x4dcb87);
if(r1(R+518)){{goto L4dcbba;}}
}
B4dcb89:L4dcb89:{c.instructions+=10;NFSU2_TR(0x4dcb89);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcb8e:{NFSU2_TR(0x4dcb8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb90:{NFSU2_TR(0x4dcb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcb96:{NFSU2_TR(0x4dcb96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcb97:{NFSU2_TR(0x4dcb97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcb9d:{NFSU2_TR(0x4dcb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dcba0:{NFSU2_TR(0x4dcba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dcba7:{NFSU2_TR(0x4dcba7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcba8:{NFSU2_TR(0x4dcba8);
__builtin_memmove((R+4),(R+12),4);
}
B4dcbaa:{NFSU2_TR(0x4dcbaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcbafull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcbaf:L4dcbaf:{c.instructions+=3;NFSU2_TR(0x4dcbaf);
u8 U[4];
w4(U+0,u32(0x7931a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dcbb5:{NFSU2_TR(0x4dcbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcbb8:{NFSU2_TR(0x4dcbb8);
{goto L4dcbbc;}
}
B4dcbba:L4dcbba:{c.instructions+=1;NFSU2_TR(0x4dcbba);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dcbbc:L4dcbbc:{c.instructions+=3;NFSU2_TR(0x4dcbbc);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcbbe:{NFSU2_TR(0x4dcbbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcbc6:{NFSU2_TR(0x4dcbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcbcbull));
TAIL_STATIC(0x575620u,575);
}
B4dcbcb:L4dcbcb:{c.instructions+=6;NFSU2_TR(0x4dcbcb);
__builtin_memmove((R+28),(R+0),4);
}
B4dcbcd:{NFSU2_TR(0x4dcbcd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcbd0:{NFSU2_TR(0x4dcbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcbd4:{NFSU2_TR(0x4dcbd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcbd6:{NFSU2_TR(0x4dcbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcbde:{NFSU2_TR(0x4dcbde);
if(r1(R+518)){{goto L4dcbfd;}}
}
B4dcbe0:L4dcbe0:{c.instructions+=6;NFSU2_TR(0x4dcbe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcbe6:{NFSU2_TR(0x4dcbe6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcbe7:{NFSU2_TR(0x4dcbe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcbed:{NFSU2_TR(0x4dcbed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcbee:{NFSU2_TR(0x4dcbee);
__builtin_memmove((R+4),(R+28),4);
}
B4dcbf0:{NFSU2_TR(0x4dcbf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcbf5ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dcbf5:L4dcbf5:{c.instructions+=2;NFSU2_TR(0x4dcbf5);
u8 U[4];
w4(U+0,u32(0x792728ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcbfb:{NFSU2_TR(0x4dcbfb);
{goto L4dcbff;}
}
B4dcbfd:L4dcbfd:{c.instructions+=1;NFSU2_TR(0x4dcbfd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dcbff:L4dcbff:{c.instructions+=6;NFSU2_TR(0x4dcbff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc00:{NFSU2_TR(0x4dcc00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc01:{NFSU2_TR(0x4dcc01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc02:{NFSU2_TR(0x4dcc02);
__builtin_memmove((R+4),(R+24),4);
}
B4dcc04:{NFSU2_TR(0x4dcc04);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc0c:{NFSU2_TR(0x4dcc0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcc11ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dcc11:L4dcc11:{c.instructions+=2;NFSU2_TR(0x4dcc11);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc13:{NFSU2_TR(0x4dcc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcc18ull));
TAIL_STATIC(0x575620u,575);
}
B4dcc18:L4dcc18:{c.instructions+=6;NFSU2_TR(0x4dcc18);
__builtin_memmove((R+28),(R+0),4);
}
B4dcc1a:{NFSU2_TR(0x4dcc1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcc1d:{NFSU2_TR(0x4dcc1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc21:{NFSU2_TR(0x4dcc21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcc23:{NFSU2_TR(0x4dcc23);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc2b:{NFSU2_TR(0x4dcc2b);
if(r1(R+518)){{goto L4dcc60;}}
}
B4dcc2d:L4dcc2d:{c.instructions+=10;NFSU2_TR(0x4dcc2d);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcc32:{NFSU2_TR(0x4dcc32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dcc35:{NFSU2_TR(0x4dcc35);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dcc3c:{NFSU2_TR(0x4dcc3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc3e:{NFSU2_TR(0x4dcc3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcc44:{NFSU2_TR(0x4dcc44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc45:{NFSU2_TR(0x4dcc45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcc4b:{NFSU2_TR(0x4dcc4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc4c:{NFSU2_TR(0x4dcc4c);
__builtin_memmove((R+4),(R+28),4);
}
B4dcc4e:{NFSU2_TR(0x4dcc4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcc53ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcc53:L4dcc53:{c.instructions+=4;NFSU2_TR(0x4dcc53);
u8 U[4];
w4(U+0,u32(0x793268ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcc59:{NFSU2_TR(0x4dcc59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc5c:{NFSU2_TR(0x4dcc5c);
__builtin_memmove((R+20),(R+28),4);
}
B4dcc5e:{NFSU2_TR(0x4dcc5e);
{goto L4dcc62;}
}
B4dcc60:L4dcc60:{c.instructions+=1;NFSU2_TR(0x4dcc60);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dcc62:L4dcc62:{c.instructions+=3;NFSU2_TR(0x4dcc62);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc64:{NFSU2_TR(0x4dcc64);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc6c:{NFSU2_TR(0x4dcc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcc71ull));
TAIL_STATIC(0x575620u,575);
}
B4dcc71:L4dcc71:{c.instructions+=6;NFSU2_TR(0x4dcc71);
__builtin_memmove((R+12),(R+0),4);
}
B4dcc73:{NFSU2_TR(0x4dcc73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcc76:{NFSU2_TR(0x4dcc76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc7a:{NFSU2_TR(0x4dcc7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcc7c:{NFSU2_TR(0x4dcc7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcc84:{NFSU2_TR(0x4dcc84);
if(r1(R+518)){{goto L4dccb7;}}
}
B4dcc86:L4dcc86:{c.instructions+=10;NFSU2_TR(0x4dcc86);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcc8b:{NFSU2_TR(0x4dcc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dcc8e:{NFSU2_TR(0x4dcc8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dcc95:{NFSU2_TR(0x4dcc95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc97:{NFSU2_TR(0x4dcc97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcc9d:{NFSU2_TR(0x4dcc9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcc9e:{NFSU2_TR(0x4dcc9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcca4:{NFSU2_TR(0x4dcca4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcca5:{NFSU2_TR(0x4dcca5);
__builtin_memmove((R+4),(R+12),4);
}
B4dcca7:{NFSU2_TR(0x4dcca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dccacull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dccac:L4dccac:{c.instructions+=3;NFSU2_TR(0x4dccac);
u8 U[4];
w4(U+0,u32(0x793228ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dccb2:{NFSU2_TR(0x4dccb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dccb5:{NFSU2_TR(0x4dccb5);
{goto L4dccb9;}
}
B4dccb7:L4dccb7:{c.instructions+=1;NFSU2_TR(0x4dccb7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dccb9:L4dccb9:{c.instructions+=3;NFSU2_TR(0x4dccb9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dccbb:{NFSU2_TR(0x4dccbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dccc3:{NFSU2_TR(0x4dccc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dccc8ull));
TAIL_STATIC(0x575620u,575);
}
B4dccc8:L4dccc8:{c.instructions+=6;NFSU2_TR(0x4dccc8);
__builtin_memmove((R+28),(R+0),4);
}
B4dccca:{NFSU2_TR(0x4dccca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcccd:{NFSU2_TR(0x4dcccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dccd1:{NFSU2_TR(0x4dccd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dccd3:{NFSU2_TR(0x4dccd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dccdb:{NFSU2_TR(0x4dccdb);
if(r1(R+518)){{goto L4dccfa;}}
}
B4dccdd:L4dccdd:{c.instructions+=6;NFSU2_TR(0x4dccdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcce3:{NFSU2_TR(0x4dcce3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcce4:{NFSU2_TR(0x4dcce4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dccea:{NFSU2_TR(0x4dccea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcceb:{NFSU2_TR(0x4dcceb);
__builtin_memmove((R+4),(R+28),4);
}
B4dcced:{NFSU2_TR(0x4dcced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dccf2ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dccf2:L4dccf2:{c.instructions+=2;NFSU2_TR(0x4dccf2);
u8 U[4];
w4(U+0,u32(0x7927e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dccf8:{NFSU2_TR(0x4dccf8);
{goto L4dccfc;}
}
B4dccfa:L4dccfa:{c.instructions+=1;NFSU2_TR(0x4dccfa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dccfc:L4dccfc:{c.instructions+=6;NFSU2_TR(0x4dccfc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dccfd:{NFSU2_TR(0x4dccfd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dccfe:{NFSU2_TR(0x4dccfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dccff:{NFSU2_TR(0x4dccff);
__builtin_memmove((R+4),(R+24),4);
}
B4dcd01:{NFSU2_TR(0x4dcd01);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd09:{NFSU2_TR(0x4dcd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcd0eull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dcd0e:L4dcd0e:{c.instructions+=2;NFSU2_TR(0x4dcd0e);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd10:{NFSU2_TR(0x4dcd10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcd15ull));
TAIL_STATIC(0x575620u,575);
}
B4dcd15:L4dcd15:{c.instructions+=6;NFSU2_TR(0x4dcd15);
__builtin_memmove((R+28),(R+0),4);
}
B4dcd17:{NFSU2_TR(0x4dcd17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcd1a:{NFSU2_TR(0x4dcd1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd1e:{NFSU2_TR(0x4dcd1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcd20:{NFSU2_TR(0x4dcd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd28:{NFSU2_TR(0x4dcd28);
if(r1(R+518)){{goto L4dcd5d;}}
}
B4dcd2a:L4dcd2a:{c.instructions+=10;NFSU2_TR(0x4dcd2a);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcd2f:{NFSU2_TR(0x4dcd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dcd32:{NFSU2_TR(0x4dcd32);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dcd39:{NFSU2_TR(0x4dcd39);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd3b:{NFSU2_TR(0x4dcd3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcd41:{NFSU2_TR(0x4dcd41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd42:{NFSU2_TR(0x4dcd42);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcd48:{NFSU2_TR(0x4dcd48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd49:{NFSU2_TR(0x4dcd49);
__builtin_memmove((R+4),(R+28),4);
}
B4dcd4b:{NFSU2_TR(0x4dcd4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcd50ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcd50:L4dcd50:{c.instructions+=4;NFSU2_TR(0x4dcd50);
u8 U[4];
w4(U+0,u32(0x7932e8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcd56:{NFSU2_TR(0x4dcd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd59:{NFSU2_TR(0x4dcd59);
__builtin_memmove((R+20),(R+28),4);
}
B4dcd5b:{NFSU2_TR(0x4dcd5b);
{goto L4dcd5f;}
}
B4dcd5d:L4dcd5d:{c.instructions+=1;NFSU2_TR(0x4dcd5d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dcd5f:L4dcd5f:{c.instructions+=3;NFSU2_TR(0x4dcd5f);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd61:{NFSU2_TR(0x4dcd61);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd69:{NFSU2_TR(0x4dcd69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcd6eull));
TAIL_STATIC(0x575620u,575);
}
B4dcd6e:L4dcd6e:{c.instructions+=6;NFSU2_TR(0x4dcd6e);
__builtin_memmove((R+12),(R+0),4);
}
B4dcd70:{NFSU2_TR(0x4dcd70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcd73:{NFSU2_TR(0x4dcd73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd77:{NFSU2_TR(0x4dcd77);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcd79:{NFSU2_TR(0x4dcd79);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcd81:{NFSU2_TR(0x4dcd81);
if(r1(R+518)){{goto L4dcdb4;}}
}
B4dcd83:L4dcd83:{c.instructions+=10;NFSU2_TR(0x4dcd83);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcd88:{NFSU2_TR(0x4dcd88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4dcd8b:{NFSU2_TR(0x4dcd8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dcd92:{NFSU2_TR(0x4dcd92);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd94:{NFSU2_TR(0x4dcd94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcd9a:{NFSU2_TR(0x4dcd9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcd9b:{NFSU2_TR(0x4dcd9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcda1:{NFSU2_TR(0x4dcda1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcda2:{NFSU2_TR(0x4dcda2);
__builtin_memmove((R+4),(R+12),4);
}
B4dcda4:{NFSU2_TR(0x4dcda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcda9ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcda9:L4dcda9:{c.instructions+=3;NFSU2_TR(0x4dcda9);
u8 U[4];
w4(U+0,u32(0x7932a8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dcdaf:{NFSU2_TR(0x4dcdaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcdb2:{NFSU2_TR(0x4dcdb2);
{goto L4dcdb6;}
}
B4dcdb4:L4dcdb4:{c.instructions+=1;NFSU2_TR(0x4dcdb4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dcdb6:L4dcdb6:{c.instructions+=3;NFSU2_TR(0x4dcdb6);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcdb8:{NFSU2_TR(0x4dcdb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcdc0:{NFSU2_TR(0x4dcdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcdc5ull));
TAIL_STATIC(0x575620u,575);
}
B4dcdc5:L4dcdc5:{c.instructions+=6;NFSU2_TR(0x4dcdc5);
__builtin_memmove((R+28),(R+0),4);
}
B4dcdc7:{NFSU2_TR(0x4dcdc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcdca:{NFSU2_TR(0x4dcdca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcdce:{NFSU2_TR(0x4dcdce);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcdd0:{NFSU2_TR(0x4dcdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcdd8:{NFSU2_TR(0x4dcdd8);
if(r1(R+518)){{goto L4dcdf7;}}
}
B4dcdda:L4dcdda:{c.instructions+=6;NFSU2_TR(0x4dcdda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcde0:{NFSU2_TR(0x4dcde0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcde1:{NFSU2_TR(0x4dcde1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcde7:{NFSU2_TR(0x4dcde7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcde8:{NFSU2_TR(0x4dcde8);
__builtin_memmove((R+4),(R+28),4);
}
B4dcdea:{NFSU2_TR(0x4dcdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcdefull));
TAIL_STATIC(0x51e090u,51e);
}
B4dcdef:L4dcdef:{c.instructions+=2;NFSU2_TR(0x4dcdef);
u8 U[4];
w4(U+0,u32(0x7928a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcdf5:{NFSU2_TR(0x4dcdf5);
{goto L4dcdf9;}
}
B4dcdf7:L4dcdf7:{c.instructions+=1;NFSU2_TR(0x4dcdf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dcdf9:L4dcdf9:{c.instructions+=6;NFSU2_TR(0x4dcdf9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcdfa:{NFSU2_TR(0x4dcdfa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcdfb:{NFSU2_TR(0x4dcdfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcdfc:{NFSU2_TR(0x4dcdfc);
__builtin_memmove((R+4),(R+24),4);
}
B4dcdfe:{NFSU2_TR(0x4dcdfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dce06:{NFSU2_TR(0x4dce06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dce0bull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dce0b:L4dce0b:{c.instructions+=2;NFSU2_TR(0x4dce0b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce0d:{NFSU2_TR(0x4dce0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dce12ull));
TAIL_STATIC(0x575620u,575);
}
B4dce12:L4dce12:{c.instructions+=6;NFSU2_TR(0x4dce12);
__builtin_memmove((R+28),(R+0),4);
}
B4dce14:{NFSU2_TR(0x4dce14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dce17:{NFSU2_TR(0x4dce17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dce1b:{NFSU2_TR(0x4dce1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dce1d:{NFSU2_TR(0x4dce1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dce25:{NFSU2_TR(0x4dce25);
if(r1(R+518)){{goto L4dce5a;}}
}
B4dce27:L4dce27:{c.instructions+=10;NFSU2_TR(0x4dce27);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dce2c:{NFSU2_TR(0x4dce2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce2e:{NFSU2_TR(0x4dce2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dce34:{NFSU2_TR(0x4dce34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce35:{NFSU2_TR(0x4dce35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dce3b:{NFSU2_TR(0x4dce3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dce3e:{NFSU2_TR(0x4dce3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dce45:{NFSU2_TR(0x4dce45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce46:{NFSU2_TR(0x4dce46);
__builtin_memmove((R+4),(R+28),4);
}
B4dce48:{NFSU2_TR(0x4dce48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dce4dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dce4d:L4dce4d:{c.instructions+=4;NFSU2_TR(0x4dce4d);
u8 U[4];
w4(U+0,u32(0x793368ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dce53:{NFSU2_TR(0x4dce53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dce56:{NFSU2_TR(0x4dce56);
__builtin_memmove((R+20),(R+28),4);
}
B4dce58:{NFSU2_TR(0x4dce58);
{goto L4dce5c;}
}
B4dce5a:L4dce5a:{c.instructions+=1;NFSU2_TR(0x4dce5a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dce5c:L4dce5c:{c.instructions+=3;NFSU2_TR(0x4dce5c);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce5e:{NFSU2_TR(0x4dce5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dce66:{NFSU2_TR(0x4dce66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dce6bull));
TAIL_STATIC(0x575620u,575);
}
B4dce6b:L4dce6b:{c.instructions+=6;NFSU2_TR(0x4dce6b);
__builtin_memmove((R+12),(R+0),4);
}
B4dce6d:{NFSU2_TR(0x4dce6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dce70:{NFSU2_TR(0x4dce70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dce74:{NFSU2_TR(0x4dce74);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dce76:{NFSU2_TR(0x4dce76);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dce7e:{NFSU2_TR(0x4dce7e);
if(r1(R+518)){{goto L4dceb1;}}
}
B4dce80:L4dce80:{c.instructions+=10;NFSU2_TR(0x4dce80);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dce85:{NFSU2_TR(0x4dce85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce87:{NFSU2_TR(0x4dce87);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dce8d:{NFSU2_TR(0x4dce8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce8e:{NFSU2_TR(0x4dce8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dce94:{NFSU2_TR(0x4dce94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4dce97:{NFSU2_TR(0x4dce97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dce9e:{NFSU2_TR(0x4dce9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dce9f:{NFSU2_TR(0x4dce9f);
__builtin_memmove((R+4),(R+12),4);
}
B4dcea1:{NFSU2_TR(0x4dcea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcea6ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcea6:L4dcea6:{c.instructions+=3;NFSU2_TR(0x4dcea6);
u8 U[4];
w4(U+0,u32(0x793328ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dceac:{NFSU2_TR(0x4dceac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dceaf:{NFSU2_TR(0x4dceaf);
{goto L4dceb3;}
}
B4dceb1:L4dceb1:{c.instructions+=1;NFSU2_TR(0x4dceb1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dceb3:L4dceb3:{c.instructions+=3;NFSU2_TR(0x4dceb3);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dceb5:{NFSU2_TR(0x4dceb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcebd:{NFSU2_TR(0x4dcebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcec2ull));
TAIL_STATIC(0x575620u,575);
}
B4dcec2:L4dcec2:{c.instructions+=6;NFSU2_TR(0x4dcec2);
__builtin_memmove((R+28),(R+0),4);
}
B4dcec4:{NFSU2_TR(0x4dcec4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcec7:{NFSU2_TR(0x4dcec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcecb:{NFSU2_TR(0x4dcecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcecd:{NFSU2_TR(0x4dcecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dced5:{NFSU2_TR(0x4dced5);
if(r1(R+518)){{goto L4dcef4;}}
}
B4dced7:L4dced7:{c.instructions+=6;NFSU2_TR(0x4dced7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcedd:{NFSU2_TR(0x4dcedd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcede:{NFSU2_TR(0x4dcede);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcee4:{NFSU2_TR(0x4dcee4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcee5:{NFSU2_TR(0x4dcee5);
__builtin_memmove((R+4),(R+28),4);
}
B4dcee7:{NFSU2_TR(0x4dcee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dceecull));
TAIL_STATIC(0x51e090u,51e);
}
B4dceec:L4dceec:{c.instructions+=2;NFSU2_TR(0x4dceec);
u8 U[4];
w4(U+0,u32(0x792968ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcef2:{NFSU2_TR(0x4dcef2);
{goto L4dcef6;}
}
B4dcef4:L4dcef4:{c.instructions+=1;NFSU2_TR(0x4dcef4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dcef6:L4dcef6:{c.instructions+=6;NFSU2_TR(0x4dcef6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcef7:{NFSU2_TR(0x4dcef7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcef8:{NFSU2_TR(0x4dcef8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcef9:{NFSU2_TR(0x4dcef9);
__builtin_memmove((R+4),(R+24),4);
}
B4dcefb:{NFSU2_TR(0x4dcefb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf03:{NFSU2_TR(0x4dcf03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcf08ull));
TAIL_STATIC(0x4cb4b0u,4cb);
}
B4dcf08:L4dcf08:{c.instructions+=2;NFSU2_TR(0x4dcf08);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf0a:{NFSU2_TR(0x4dcf0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcf0full));
TAIL_STATIC(0x575620u,575);
}
B4dcf0f:L4dcf0f:{c.instructions+=6;NFSU2_TR(0x4dcf0f);
__builtin_memmove((R+28),(R+0),4);
}
B4dcf11:{NFSU2_TR(0x4dcf11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcf14:{NFSU2_TR(0x4dcf14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf18:{NFSU2_TR(0x4dcf18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcf1a:{NFSU2_TR(0x4dcf1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf22:{NFSU2_TR(0x4dcf22);
if(r1(R+518)){{goto L4dcf57;}}
}
B4dcf24:L4dcf24:{c.instructions+=10;NFSU2_TR(0x4dcf24);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcf29:{NFSU2_TR(0x4dcf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dcf2c:{NFSU2_TR(0x4dcf2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4dcf33:{NFSU2_TR(0x4dcf33);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf35:{NFSU2_TR(0x4dcf35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcf3b:{NFSU2_TR(0x4dcf3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf3c:{NFSU2_TR(0x4dcf3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcf42:{NFSU2_TR(0x4dcf42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf43:{NFSU2_TR(0x4dcf43);
__builtin_memmove((R+4),(R+28),4);
}
B4dcf45:{NFSU2_TR(0x4dcf45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcf4aull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcf4a:L4dcf4a:{c.instructions+=4;NFSU2_TR(0x4dcf4a);
u8 U[4];
w4(U+0,u32(0x793428ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcf50:{NFSU2_TR(0x4dcf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf53:{NFSU2_TR(0x4dcf53);
__builtin_memmove((R+20),(R+28),4);
}
B4dcf55:{NFSU2_TR(0x4dcf55);
{goto L4dcf59;}
}
B4dcf57:L4dcf57:{c.instructions+=1;NFSU2_TR(0x4dcf57);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4dcf59:L4dcf59:{c.instructions+=3;NFSU2_TR(0x4dcf59);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf5b:{NFSU2_TR(0x4dcf5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf63:{NFSU2_TR(0x4dcf63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcf68ull));
TAIL_STATIC(0x575620u,575);
}
B4dcf68:L4dcf68:{c.instructions+=6;NFSU2_TR(0x4dcf68);
__builtin_memmove((R+12),(R+0),4);
}
B4dcf6a:{NFSU2_TR(0x4dcf6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcf6d:{NFSU2_TR(0x4dcf6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf71:{NFSU2_TR(0x4dcf71);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcf73:{NFSU2_TR(0x4dcf73);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcf7b:{NFSU2_TR(0x4dcf7b);
if(r1(R+518)){{goto L4dcfae;}}
}
B4dcf7d:L4dcf7d:{c.instructions+=10;NFSU2_TR(0x4dcf7d);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4dcf82:{NFSU2_TR(0x4dcf82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4dcf85:{NFSU2_TR(0x4dcf85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835938ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4dcf8c:{NFSU2_TR(0x4dcf8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf8e:{NFSU2_TR(0x4dcf8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcf94:{NFSU2_TR(0x4dcf94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf95:{NFSU2_TR(0x4dcf95);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dcf9b:{NFSU2_TR(0x4dcf9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcf9c:{NFSU2_TR(0x4dcf9c);
__builtin_memmove((R+4),(R+12),4);
}
B4dcf9e:{NFSU2_TR(0x4dcf9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcfa3ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4dcfa3:L4dcfa3:{c.instructions+=3;NFSU2_TR(0x4dcfa3);
u8 U[4];
w4(U+0,u32(0x7933e8ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4dcfa9:{NFSU2_TR(0x4dcfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcfac:{NFSU2_TR(0x4dcfac);
{goto L4dcfb0;}
}
B4dcfae:L4dcfae:{c.instructions+=1;NFSU2_TR(0x4dcfae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dcfb0:L4dcfb0:{c.instructions+=3;NFSU2_TR(0x4dcfb0);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcfb2:{NFSU2_TR(0x4dcfb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcfba:{NFSU2_TR(0x4dcfba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcfbfull));
TAIL_STATIC(0x575620u,575);
}
B4dcfbf:L4dcfbf:{c.instructions+=6;NFSU2_TR(0x4dcfbf);
__builtin_memmove((R+28),(R+0),4);
}
B4dcfc1:{NFSU2_TR(0x4dcfc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dcfc4:{NFSU2_TR(0x4dcfc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dcfc8:{NFSU2_TR(0x4dcfc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dcfca:{NFSU2_TR(0x4dcfca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x11ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dcfd2:{NFSU2_TR(0x4dcfd2);
if(r1(R+518)){{goto L4dcff1;}}
}
B4dcfd4:L4dcfd4:{c.instructions+=6;NFSU2_TR(0x4dcfd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dcfda:{NFSU2_TR(0x4dcfda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcfdb:{NFSU2_TR(0x4dcfdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dcfe1:{NFSU2_TR(0x4dcfe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcfe2:{NFSU2_TR(0x4dcfe2);
__builtin_memmove((R+4),(R+28),4);
}
B4dcfe4:{NFSU2_TR(0x4dcfe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dcfe9ull));
TAIL_STATIC(0x51e090u,51e);
}
B4dcfe9:L4dcfe9:{c.instructions+=2;NFSU2_TR(0x4dcfe9);
u8 U[4];
w4(U+0,u32(0x7933a8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4dcfef:{NFSU2_TR(0x4dcfef);
{goto L4dcff3;}
}
B4dcff1:L4dcff1:{c.instructions+=1;NFSU2_TR(0x4dcff1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dcff3:L4dcff3:{c.instructions+=5;NFSU2_TR(0x4dcff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcff4:{NFSU2_TR(0x4dcff4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcff5:{NFSU2_TR(0x4dcff5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dcff6:{NFSU2_TR(0x4dcff6);
__builtin_memmove((R+4),(R+24),4);
}
B4dcff8:{NFSU2_TR(0x4dcff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4dd000u,4dd);
}
XIT:NFSU2_TR_EXIT(0x4dc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
