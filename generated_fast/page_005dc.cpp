#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5dc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5dc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 page_5dc(Cpu& c){return body_5dc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5dc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5dc000:goto L5dc000;
case 0x5dc003:c.instructions+=2;goto B5dc003;
case 0x5dc005:c.instructions+=1;goto B5dc005;
case 0x5dc007:goto L5dc007;
case 0x5dc00c:c.instructions+=9;goto B5dc00c;
case 0x5dc00e:c.instructions+=8;goto B5dc00e;
case 0x5dc014:c.instructions+=7;goto B5dc014;
case 0x5dc015:c.instructions+=6;goto B5dc015;
case 0x5dc018:c.instructions+=5;goto B5dc018;
case 0x5dc01e:c.instructions+=4;goto B5dc01e;
case 0x5dc01f:c.instructions+=3;goto B5dc01f;
case 0x5dc024:c.instructions+=2;goto B5dc024;
case 0x5dc025:c.instructions+=1;goto B5dc025;
case 0x5dc026:goto L5dc026;
case 0x5dc02b:c.instructions+=9;goto B5dc02b;
case 0x5dc02d:c.instructions+=8;goto B5dc02d;
case 0x5dc033:c.instructions+=7;goto B5dc033;
case 0x5dc039:c.instructions+=6;goto B5dc039;
case 0x5dc03c:c.instructions+=5;goto B5dc03c;
case 0x5dc03d:c.instructions+=4;goto B5dc03d;
case 0x5dc03e:c.instructions+=3;goto B5dc03e;
case 0x5dc043:c.instructions+=2;goto B5dc043;
case 0x5dc044:c.instructions+=1;goto B5dc044;
case 0x5dc050:goto L5dc050;
case 0x5dc054:c.instructions+=2;goto B5dc054;
case 0x5dc05a:c.instructions+=1;goto B5dc05a;
case 0x5dc05c:goto L5dc05c;
case 0x5dc05e:c.instructions+=1;goto B5dc05e;
case 0x5dc05f:goto L5dc05f;
case 0x5dc062:c.instructions+=4;goto B5dc062;
case 0x5dc065:c.instructions+=3;goto B5dc065;
case 0x5dc069:c.instructions+=2;goto B5dc069;
case 0x5dc06b:c.instructions+=1;goto B5dc06b;
case 0x5dc06d:goto L5dc06d;
case 0x5dc06f:c.instructions+=1;goto B5dc06f;
case 0x5dc070:goto L5dc070;
case 0x5dc075:c.instructions+=1;goto B5dc075;
case 0x5dc077:goto L5dc077;
case 0x5dc07a:c.instructions+=3;goto B5dc07a;
case 0x5dc07d:c.instructions+=2;goto B5dc07d;
case 0x5dc081:c.instructions+=1;goto B5dc081;
case 0x5dc083:goto L5dc083;
case 0x5dc085:c.instructions+=3;goto B5dc085;
case 0x5dc088:c.instructions+=2;goto B5dc088;
case 0x5dc08a:c.instructions+=1;goto B5dc08a;
case 0x5dc08d:goto L5dc08d;
case 0x5dc090:c.instructions+=6;goto B5dc090;
case 0x5dc097:c.instructions+=5;goto B5dc097;
case 0x5dc09e:c.instructions+=4;goto B5dc09e;
case 0x5dc0a1:c.instructions+=3;goto B5dc0a1;
case 0x5dc0a8:c.instructions+=2;goto B5dc0a8;
case 0x5dc0aa:c.instructions+=1;goto B5dc0aa;
case 0x5dc0ac:goto L5dc0ac;
case 0x5dc0ae:c.instructions+=1;goto B5dc0ae;
case 0x5dc0b0:goto L5dc0b0;
case 0x5dc0b6:c.instructions+=6;goto B5dc0b6;
case 0x5dc0bc:c.instructions+=5;goto B5dc0bc;
case 0x5dc0be:c.instructions+=4;goto B5dc0be;
case 0x5dc0c3:c.instructions+=3;goto B5dc0c3;
case 0x5dc0c6:c.instructions+=2;goto B5dc0c6;
case 0x5dc0cc:c.instructions+=1;goto B5dc0cc;
case 0x5dc0d7:goto L5dc0d7;
case 0x5dc0dc:c.instructions+=1;goto B5dc0dc;
case 0x5dc0e0:goto L5dc0e0;
case 0x5dc0e2:c.instructions+=14;goto B5dc0e2;
case 0x5dc0e7:c.instructions+=13;goto B5dc0e7;
case 0x5dc0ed:c.instructions+=12;goto B5dc0ed;
case 0x5dc0ee:c.instructions+=11;goto B5dc0ee;
case 0x5dc0f5:c.instructions+=10;goto B5dc0f5;
case 0x5dc0f6:c.instructions+=9;goto B5dc0f6;
case 0x5dc0f7:c.instructions+=8;goto B5dc0f7;
case 0x5dc0f8:c.instructions+=7;goto B5dc0f8;
case 0x5dc0fa:c.instructions+=6;goto B5dc0fa;
case 0x5dc0fb:c.instructions+=5;goto B5dc0fb;
case 0x5dc0ff:c.instructions+=4;goto B5dc0ff;
case 0x5dc101:c.instructions+=3;goto B5dc101;
case 0x5dc103:c.instructions+=2;goto B5dc103;
case 0x5dc10b:c.instructions+=1;goto B5dc10b;
case 0x5dc110:goto L5dc110;
case 0x5dc116:c.instructions+=3;goto B5dc116;
case 0x5dc119:c.instructions+=2;goto B5dc119;
case 0x5dc11b:c.instructions+=1;goto B5dc11b;
case 0x5dc120:goto L5dc120;
case 0x5dc122:c.instructions+=1;goto B5dc122;
case 0x5dc127:goto L5dc127;
case 0x5dc12a:c.instructions+=2;goto B5dc12a;
case 0x5dc12b:c.instructions+=1;goto B5dc12b;
case 0x5dc12d:goto L5dc12d;
case 0x5dc132:c.instructions+=5;goto B5dc132;
case 0x5dc134:c.instructions+=4;goto B5dc134;
case 0x5dc136:c.instructions+=3;goto B5dc136;
case 0x5dc137:c.instructions+=2;goto B5dc137;
case 0x5dc13f:c.instructions+=1;goto B5dc13f;
case 0x5dc144:goto L5dc144;
case 0x5dc148:c.instructions+=6;goto B5dc148;
case 0x5dc149:c.instructions+=5;goto B5dc149;
case 0x5dc14a:c.instructions+=4;goto B5dc14a;
case 0x5dc14b:c.instructions+=3;goto B5dc14b;
case 0x5dc152:c.instructions+=2;goto B5dc152;
case 0x5dc155:c.instructions+=1;goto B5dc155;
case 0x5dc160:goto L5dc160;
case 0x5dc163:c.instructions+=3;goto B5dc163;
case 0x5dc166:c.instructions+=2;goto B5dc166;
case 0x5dc167:c.instructions+=1;goto B5dc167;
case 0x5dc16c:goto L5dc16c;
case 0x5dc170:goto L5dc170;
case 0x5dc173:c.instructions+=2;goto B5dc173;
case 0x5dc175:c.instructions+=1;goto B5dc175;
case 0x5dc177:goto L5dc177;
case 0x5dc17b:c.instructions+=4;goto B5dc17b;
case 0x5dc17c:c.instructions+=3;goto B5dc17c;
case 0x5dc17f:c.instructions+=2;goto B5dc17f;
case 0x5dc181:c.instructions+=1;goto B5dc181;
case 0x5dc183:goto L5dc183;
case 0x5dc185:c.instructions+=1;goto B5dc185;
case 0x5dc18a:goto L5dc18a;
case 0x5dc18f:c.instructions+=3;goto B5dc18f;
case 0x5dc190:c.instructions+=2;goto B5dc190;
case 0x5dc191:c.instructions+=1;goto B5dc191;
case 0x5dc196:goto L5dc196;
case 0x5dc199:goto L5dc199;
case 0x5dc19a:goto L5dc19a;
case 0x5dc1a0:goto L5dc1a0;
case 0x5dc1a1:c.instructions+=4;goto B5dc1a1;
case 0x5dc1a2:c.instructions+=3;goto B5dc1a2;
case 0x5dc1a8:c.instructions+=2;goto B5dc1a8;
case 0x5dc1ad:c.instructions+=1;goto B5dc1ad;
case 0x5dc1b2:goto L5dc1b2;
case 0x5dc1b4:c.instructions+=2;goto B5dc1b4;
case 0x5dc1b6:c.instructions+=1;goto B5dc1b6;
case 0x5dc1b8:goto L5dc1b8;
case 0x5dc1b9:c.instructions+=2;goto B5dc1b9;
case 0x5dc1ba:c.instructions+=1;goto B5dc1ba;
case 0x5dc1c0:goto L5dc1c0;
case 0x5dc1c5:c.instructions+=5;goto B5dc1c5;
case 0x5dc1c8:c.instructions+=4;goto B5dc1c8;
case 0x5dc1ca:c.instructions+=3;goto B5dc1ca;
case 0x5dc1cc:c.instructions+=2;goto B5dc1cc;
case 0x5dc1d1:c.instructions+=1;goto B5dc1d1;
case 0x5dc1d3:goto L5dc1d3;
case 0x5dc1d6:c.instructions+=5;goto B5dc1d6;
case 0x5dc1d8:c.instructions+=4;goto B5dc1d8;
case 0x5dc1db:c.instructions+=3;goto B5dc1db;
case 0x5dc1de:c.instructions+=2;goto B5dc1de;
case 0x5dc1e0:c.instructions+=1;goto B5dc1e0;
case 0x5dc1e2:goto L5dc1e2;
case 0x5dc1e6:c.instructions+=3;goto B5dc1e6;
case 0x5dc1e9:c.instructions+=2;goto B5dc1e9;
case 0x5dc1eb:c.instructions+=1;goto B5dc1eb;
case 0x5dc1ed:goto L5dc1ed;
case 0x5dc1ef:c.instructions+=1;goto B5dc1ef;
case 0x5dc1f4:goto L5dc1f4;
case 0x5dc1fa:c.instructions+=3;goto B5dc1fa;
case 0x5dc1fb:c.instructions+=2;goto B5dc1fb;
case 0x5dc1fc:c.instructions+=1;goto B5dc1fc;
case 0x5dc201:goto L5dc201;
case 0x5dc204:goto L5dc204;
case 0x5dc20a:c.instructions+=3;goto B5dc20a;
case 0x5dc20b:c.instructions+=2;goto B5dc20b;
case 0x5dc20c:c.instructions+=1;goto B5dc20c;
case 0x5dc211:goto L5dc211;
case 0x5dc214:goto L5dc214;
case 0x5dc216:c.instructions+=2;goto B5dc216;
case 0x5dc218:c.instructions+=1;goto B5dc218;
case 0x5dc21a:goto L5dc21a;
case 0x5dc21b:c.instructions+=1;goto B5dc21b;
case 0x5dc21c:goto L5dc21c;
case 0x5dc221:c.instructions+=3;goto B5dc221;
case 0x5dc223:c.instructions+=2;goto B5dc223;
case 0x5dc227:c.instructions+=1;goto B5dc227;
case 0x5dc229:goto L5dc229;
case 0x5dc230:goto L5dc230;
case 0x5dc233:c.instructions+=1;goto B5dc233;
case 0x5dc235:goto L5dc235;
case 0x5dc237:c.instructions+=2;goto B5dc237;
case 0x5dc239:c.instructions+=1;goto B5dc239;
case 0x5dc23b:goto L5dc23b;
case 0x5dc240:c.instructions+=1;goto B5dc240;
case 0x5dc242:goto L5dc242;
case 0x5dc247:c.instructions+=2;goto B5dc247;
case 0x5dc248:c.instructions+=1;goto B5dc248;
case 0x5dc24d:goto L5dc24d;
case 0x5dc250:c.instructions+=2;goto B5dc250;
case 0x5dc252:c.instructions+=1;goto B5dc252;
case 0x5dc254:goto L5dc254;
case 0x5dc25a:c.instructions+=2;goto B5dc25a;
case 0x5dc25b:c.instructions+=1;goto B5dc25b;
case 0x5dc260:goto L5dc260;
case 0x5dc262:c.instructions+=3;goto B5dc262;
case 0x5dc265:c.instructions+=2;goto B5dc265;
case 0x5dc267:c.instructions+=1;goto B5dc267;
case 0x5dc269:goto L5dc269;
case 0x5dc26c:c.instructions+=6;goto B5dc26c;
case 0x5dc272:c.instructions+=5;goto B5dc272;
case 0x5dc275:c.instructions+=4;goto B5dc275;
case 0x5dc278:c.instructions+=3;goto B5dc278;
case 0x5dc27b:c.instructions+=2;goto B5dc27b;
case 0x5dc27e:c.instructions+=1;goto B5dc27e;
case 0x5dc280:goto L5dc280;
case 0x5dc282:goto L5dc282;
case 0x5dc288:c.instructions+=4;goto B5dc288;
case 0x5dc28a:c.instructions+=3;goto B5dc28a;
case 0x5dc28f:c.instructions+=2;goto B5dc28f;
case 0x5dc292:c.instructions+=1;goto B5dc292;
case 0x5dc298:goto L5dc298;
case 0x5dc299:c.instructions+=2;goto B5dc299;
case 0x5dc29a:c.instructions+=1;goto B5dc29a;
case 0x5dc2a0:goto L5dc2a0;
case 0x5dc2a2:c.instructions+=44;goto B5dc2a2;
case 0x5dc2a8:c.instructions+=43;goto B5dc2a8;
case 0x5dc2ab:c.instructions+=42;goto B5dc2ab;
case 0x5dc2af:c.instructions+=41;goto B5dc2af;
case 0x5dc2b2:c.instructions+=40;goto B5dc2b2;
case 0x5dc2b5:c.instructions+=39;goto B5dc2b5;
case 0x5dc2bc:c.instructions+=38;goto B5dc2bc;
case 0x5dc2bf:c.instructions+=37;goto B5dc2bf;
case 0x5dc2c2:c.instructions+=36;goto B5dc2c2;
case 0x5dc2c5:c.instructions+=35;goto B5dc2c5;
case 0x5dc2c8:c.instructions+=34;goto B5dc2c8;
case 0x5dc2ca:c.instructions+=33;goto B5dc2ca;
case 0x5dc2cd:c.instructions+=32;goto B5dc2cd;
case 0x5dc2d0:c.instructions+=31;goto B5dc2d0;
case 0x5dc2d3:c.instructions+=30;goto B5dc2d3;
case 0x5dc2d6:c.instructions+=29;goto B5dc2d6;
case 0x5dc2d9:c.instructions+=28;goto B5dc2d9;
case 0x5dc2dc:c.instructions+=27;goto B5dc2dc;
case 0x5dc2de:c.instructions+=26;goto B5dc2de;
case 0x5dc2e1:c.instructions+=25;goto B5dc2e1;
case 0x5dc2e4:c.instructions+=24;goto B5dc2e4;
case 0x5dc2e7:c.instructions+=23;goto B5dc2e7;
case 0x5dc2ea:c.instructions+=22;goto B5dc2ea;
case 0x5dc2ed:c.instructions+=21;goto B5dc2ed;
case 0x5dc2f0:c.instructions+=20;goto B5dc2f0;
case 0x5dc2f2:c.instructions+=19;goto B5dc2f2;
case 0x5dc2f5:c.instructions+=18;goto B5dc2f5;
case 0x5dc2f8:c.instructions+=17;goto B5dc2f8;
case 0x5dc2fb:c.instructions+=16;goto B5dc2fb;
case 0x5dc2fe:c.instructions+=15;goto B5dc2fe;
case 0x5dc301:c.instructions+=14;goto B5dc301;
case 0x5dc304:c.instructions+=13;goto B5dc304;
case 0x5dc306:c.instructions+=12;goto B5dc306;
case 0x5dc309:c.instructions+=11;goto B5dc309;
case 0x5dc30c:c.instructions+=10;goto B5dc30c;
case 0x5dc30f:c.instructions+=9;goto B5dc30f;
case 0x5dc312:c.instructions+=8;goto B5dc312;
case 0x5dc315:c.instructions+=7;goto B5dc315;
case 0x5dc318:c.instructions+=6;goto B5dc318;
case 0x5dc31a:c.instructions+=5;goto B5dc31a;
case 0x5dc31d:c.instructions+=4;goto B5dc31d;
case 0x5dc320:c.instructions+=3;goto B5dc320;
case 0x5dc323:c.instructions+=2;goto B5dc323;
case 0x5dc326:c.instructions+=1;goto B5dc326;
case 0x5dc328:goto L5dc328;
case 0x5dc32c:c.instructions+=12;goto B5dc32c;
case 0x5dc32f:c.instructions+=11;goto B5dc32f;
case 0x5dc335:c.instructions+=10;goto B5dc335;
case 0x5dc338:c.instructions+=9;goto B5dc338;
case 0x5dc33b:c.instructions+=8;goto B5dc33b;
case 0x5dc341:c.instructions+=7;goto B5dc341;
case 0x5dc344:c.instructions+=6;goto B5dc344;
case 0x5dc347:c.instructions+=5;goto B5dc347;
case 0x5dc34d:c.instructions+=4;goto B5dc34d;
case 0x5dc350:c.instructions+=3;goto B5dc350;
case 0x5dc353:c.instructions+=2;goto B5dc353;
case 0x5dc359:c.instructions+=1;goto B5dc359;
case 0x5dc35c:goto L5dc35c;
case 0x5dc360:goto L5dc360;
case 0x5dc361:c.instructions+=4;goto B5dc361;
case 0x5dc367:c.instructions+=3;goto B5dc367;
case 0x5dc368:c.instructions+=2;goto B5dc368;
case 0x5dc36d:c.instructions+=1;goto B5dc36d;
case 0x5dc372:goto L5dc372;
case 0x5dc374:c.instructions+=2;goto B5dc374;
case 0x5dc378:c.instructions+=1;goto B5dc378;
case 0x5dc37a:goto L5dc37a;
case 0x5dc380:goto L5dc380;
case 0x5dc383:c.instructions+=2;goto B5dc383;
case 0x5dc385:c.instructions+=1;goto B5dc385;
case 0x5dc387:goto L5dc387;
case 0x5dc38a:c.instructions+=1;goto B5dc38a;
case 0x5dc38c:goto L5dc38c;
case 0x5dc38e:c.instructions+=2;goto B5dc38e;
case 0x5dc390:c.instructions+=1;goto B5dc390;
case 0x5dc392:goto L5dc392;
case 0x5dc398:c.instructions+=2;goto B5dc398;
case 0x5dc399:c.instructions+=1;goto B5dc399;
case 0x5dc39e:goto L5dc39e;
case 0x5dc3a1:c.instructions+=2;goto B5dc3a1;
case 0x5dc3a3:c.instructions+=1;goto B5dc3a3;
case 0x5dc3a5:goto L5dc3a5;
case 0x5dc3a8:c.instructions+=3;goto B5dc3a8;
case 0x5dc3aa:c.instructions+=2;goto B5dc3aa;
case 0x5dc3ac:c.instructions+=1;goto B5dc3ac;
case 0x5dc3ae:goto L5dc3ae;
case 0x5dc3b4:c.instructions+=2;goto B5dc3b4;
case 0x5dc3b6:c.instructions+=1;goto B5dc3b6;
case 0x5dc3b8:goto L5dc3b8;
case 0x5dc3bb:c.instructions+=1;goto B5dc3bb;
case 0x5dc3bd:goto L5dc3bd;
case 0x5dc3bf:c.instructions+=1;goto B5dc3bf;
case 0x5dc3c1:goto L5dc3c1;
case 0x5dc3c7:c.instructions+=2;goto B5dc3c7;
case 0x5dc3c8:c.instructions+=1;goto B5dc3c8;
case 0x5dc3cd:goto L5dc3cd;
case 0x5dc3d0:c.instructions+=2;goto B5dc3d0;
case 0x5dc3d2:c.instructions+=1;goto B5dc3d2;
case 0x5dc3d4:goto L5dc3d4;
case 0x5dc3d8:c.instructions+=4;goto B5dc3d8;
case 0x5dc3d9:c.instructions+=3;goto B5dc3d9;
case 0x5dc3da:c.instructions+=2;goto B5dc3da;
case 0x5dc3dc:c.instructions+=1;goto B5dc3dc;
case 0x5dc3e1:goto L5dc3e1;
case 0x5dc3e3:goto L5dc3e3;
case 0x5dc3e8:c.instructions+=4;goto B5dc3e8;
case 0x5dc3e9:c.instructions+=3;goto B5dc3e9;
case 0x5dc3ec:c.instructions+=2;goto B5dc3ec;
case 0x5dc3ed:c.instructions+=1;goto B5dc3ed;
case 0x5dc3ee:goto L5dc3ee;
case 0x5dc3f0:goto L5dc3f0;
case 0x5dc3f6:c.instructions+=4;goto B5dc3f6;
case 0x5dc3f8:c.instructions+=3;goto B5dc3f8;
case 0x5dc3fd:c.instructions+=2;goto B5dc3fd;
case 0x5dc400:c.instructions+=1;goto B5dc400;
case 0x5dc406:goto L5dc406;
case 0x5dc407:c.instructions+=2;goto B5dc407;
case 0x5dc408:c.instructions+=1;goto B5dc408;
case 0x5dc410:goto L5dc410;
case 0x5dc415:c.instructions+=2;goto B5dc415;
case 0x5dc417:c.instructions+=1;goto B5dc417;
case 0x5dc419:goto L5dc419;
case 0x5dc41e:c.instructions+=2;goto B5dc41e;
case 0x5dc420:c.instructions+=1;goto B5dc420;
case 0x5dc422:goto L5dc422;
case 0x5dc423:c.instructions+=6;goto B5dc423;
case 0x5dc427:c.instructions+=5;goto B5dc427;
case 0x5dc42d:c.instructions+=4;goto B5dc42d;
case 0x5dc42e:c.instructions+=3;goto B5dc42e;
case 0x5dc430:c.instructions+=2;goto B5dc430;
case 0x5dc432:c.instructions+=1;goto B5dc432;
case 0x5dc434:goto L5dc434;
case 0x5dc435:c.instructions+=4;goto B5dc435;
case 0x5dc439:c.instructions+=3;goto B5dc439;
case 0x5dc43a:c.instructions+=2;goto B5dc43a;
case 0x5dc43d:c.instructions+=1;goto B5dc43d;
case 0x5dc440:goto L5dc440;
case 0x5dc442:c.instructions+=3;goto B5dc442;
case 0x5dc443:c.instructions+=2;goto B5dc443;
case 0x5dc444:c.instructions+=1;goto B5dc444;
case 0x5dc449:goto L5dc449;
case 0x5dc44f:c.instructions+=5;goto B5dc44f;
case 0x5dc452:c.instructions+=4;goto B5dc452;
case 0x5dc453:c.instructions+=3;goto B5dc453;
case 0x5dc456:c.instructions+=2;goto B5dc456;
case 0x5dc458:c.instructions+=1;goto B5dc458;
case 0x5dc45a:goto L5dc45a;
case 0x5dc45b:c.instructions+=1;goto B5dc45b;
case 0x5dc45c:goto L5dc45c;
case 0x5dc45d:c.instructions+=1;goto B5dc45d;
case 0x5dc45e:goto L5dc45e;
case 0x5dc460:goto L5dc460;
case 0x5dc461:c.instructions+=4;goto B5dc461;
case 0x5dc462:c.instructions+=3;goto B5dc462;
case 0x5dc468:c.instructions+=2;goto B5dc468;
case 0x5dc46d:c.instructions+=1;goto B5dc46d;
case 0x5dc472:goto L5dc472;
case 0x5dc474:c.instructions+=2;goto B5dc474;
case 0x5dc476:c.instructions+=1;goto B5dc476;
case 0x5dc478:goto L5dc478;
case 0x5dc479:c.instructions+=3;goto B5dc479;
case 0x5dc47d:c.instructions+=2;goto B5dc47d;
case 0x5dc47e:c.instructions+=1;goto B5dc47e;
case 0x5dc480:goto L5dc480;
case 0x5dc485:c.instructions+=5;goto B5dc485;
case 0x5dc488:c.instructions+=4;goto B5dc488;
case 0x5dc48a:c.instructions+=3;goto B5dc48a;
case 0x5dc48c:c.instructions+=2;goto B5dc48c;
case 0x5dc48f:c.instructions+=1;goto B5dc48f;
case 0x5dc491:goto L5dc491;
case 0x5dc494:c.instructions+=6;goto B5dc494;
case 0x5dc496:c.instructions+=5;goto B5dc496;
case 0x5dc499:c.instructions+=4;goto B5dc499;
case 0x5dc49f:c.instructions+=3;goto B5dc49f;
case 0x5dc4a0:c.instructions+=2;goto B5dc4a0;
case 0x5dc4a1:c.instructions+=1;goto B5dc4a1;
case 0x5dc4a6:goto L5dc4a6;
case 0x5dc4a9:c.instructions+=1;goto B5dc4a9;
case 0x5dc4ab:goto L5dc4ab;
case 0x5dc4ac:c.instructions+=2;goto B5dc4ac;
case 0x5dc4ae:c.instructions+=1;goto B5dc4ae;
case 0x5dc4b3:goto L5dc4b3;
case 0x5dc4b5:c.instructions+=2;goto B5dc4b5;
case 0x5dc4b7:c.instructions+=1;goto B5dc4b7;
case 0x5dc4b9:goto L5dc4b9;
case 0x5dc4ba:c.instructions+=1;goto B5dc4ba;
case 0x5dc4bb:goto L5dc4bb;
case 0x5dc4bc:c.instructions+=2;goto B5dc4bc;
case 0x5dc4bd:c.instructions+=1;goto B5dc4bd;
case 0x5dc4c0:goto L5dc4c0;
case 0x5dc4c1:c.instructions+=13;goto B5dc4c1;
case 0x5dc4c3:c.instructions+=12;goto B5dc4c3;
case 0x5dc4c6:c.instructions+=11;goto B5dc4c6;
case 0x5dc4c9:c.instructions+=10;goto B5dc4c9;
case 0x5dc4cc:c.instructions+=9;goto B5dc4cc;
case 0x5dc4cf:c.instructions+=8;goto B5dc4cf;
case 0x5dc4d2:c.instructions+=7;goto B5dc4d2;
case 0x5dc4d3:c.instructions+=6;goto B5dc4d3;
case 0x5dc4d5:c.instructions+=5;goto B5dc4d5;
case 0x5dc4d6:c.instructions+=4;goto B5dc4d6;
case 0x5dc4d7:c.instructions+=3;goto B5dc4d7;
case 0x5dc4da:c.instructions+=2;goto B5dc4da;
case 0x5dc4dc:c.instructions+=1;goto B5dc4dc;
case 0x5dc4e2:goto L5dc4e2;
case 0x5dc4e6:c.instructions+=2;goto B5dc4e6;
case 0x5dc4e7:c.instructions+=1;goto B5dc4e7;
case 0x5dc4ec:goto L5dc4ec;
case 0x5dc4ef:c.instructions+=11;goto B5dc4ef;
case 0x5dc4f2:c.instructions+=10;goto B5dc4f2;
case 0x5dc4f4:c.instructions+=9;goto B5dc4f4;
case 0x5dc4f6:c.instructions+=8;goto B5dc4f6;
case 0x5dc4fa:c.instructions+=7;goto B5dc4fa;
case 0x5dc4fd:c.instructions+=6;goto B5dc4fd;
case 0x5dc500:c.instructions+=5;goto B5dc500;
case 0x5dc504:c.instructions+=4;goto B5dc504;
case 0x5dc506:c.instructions+=3;goto B5dc506;
case 0x5dc50a:c.instructions+=2;goto B5dc50a;
case 0x5dc512:c.instructions+=1;goto B5dc512;
case 0x5dc517:goto L5dc517;
case 0x5dc519:c.instructions+=2;goto B5dc519;
case 0x5dc51b:c.instructions+=1;goto B5dc51b;
case 0x5dc51d:goto L5dc51d;
case 0x5dc520:c.instructions+=4;goto B5dc520;
case 0x5dc523:c.instructions+=3;goto B5dc523;
case 0x5dc525:c.instructions+=2;goto B5dc525;
case 0x5dc529:c.instructions+=1;goto B5dc529;
case 0x5dc530:goto L5dc530;
case 0x5dc534:c.instructions+=4;goto B5dc534;
case 0x5dc535:c.instructions+=3;goto B5dc535;
case 0x5dc538:c.instructions+=2;goto B5dc538;
case 0x5dc539:c.instructions+=1;goto B5dc539;
case 0x5dc53e:goto L5dc53e;
case 0x5dc541:c.instructions+=13;goto B5dc541;
case 0x5dc544:c.instructions+=12;goto B5dc544;
case 0x5dc546:c.instructions+=11;goto B5dc546;
case 0x5dc54a:c.instructions+=10;goto B5dc54a;
case 0x5dc550:c.instructions+=9;goto B5dc550;
case 0x5dc553:c.instructions+=8;goto B5dc553;
case 0x5dc555:c.instructions+=7;goto B5dc555;
case 0x5dc55b:c.instructions+=6;goto B5dc55b;
case 0x5dc55c:c.instructions+=5;goto B5dc55c;
case 0x5dc55d:c.instructions+=4;goto B5dc55d;
case 0x5dc562:c.instructions+=3;goto B5dc562;
case 0x5dc568:c.instructions+=2;goto B5dc568;
case 0x5dc572:c.instructions+=1;goto B5dc572;
case 0x5dc577:goto L5dc577;
case 0x5dc579:c.instructions+=2;goto B5dc579;
case 0x5dc57b:c.instructions+=1;goto B5dc57b;
case 0x5dc57d:goto L5dc57d;
case 0x5dc57e:c.instructions+=5;goto B5dc57e;
case 0x5dc57f:c.instructions+=4;goto B5dc57f;
case 0x5dc580:c.instructions+=3;goto B5dc580;
case 0x5dc582:c.instructions+=2;goto B5dc582;
case 0x5dc583:c.instructions+=1;goto B5dc583;
case 0x5dc590:goto L5dc590;
case 0x5dc592:c.instructions+=2;goto B5dc592;
case 0x5dc594:c.instructions+=1;goto B5dc594;
case 0x5dc596:goto L5dc596;
case 0x5dc597:goto L5dc597;
case 0x5dc599:c.instructions+=11;goto B5dc599;
case 0x5dc59c:c.instructions+=10;goto B5dc59c;
case 0x5dc59e:c.instructions+=9;goto B5dc59e;
case 0x5dc5a1:c.instructions+=8;goto B5dc5a1;
case 0x5dc5a7:c.instructions+=7;goto B5dc5a7;
case 0x5dc5a9:c.instructions+=6;goto B5dc5a9;
case 0x5dc5ae:c.instructions+=5;goto B5dc5ae;
case 0x5dc5b1:c.instructions+=4;goto B5dc5b1;
case 0x5dc5b7:c.instructions+=3;goto B5dc5b7;
case 0x5dc5b9:c.instructions+=2;goto B5dc5b9;
case 0x5dc5bb:c.instructions+=1;goto B5dc5bb;
case 0x5dc5bd:goto L5dc5bd;
case 0x5dc5be:goto L5dc5be;
case 0x5dc5c0:goto L5dc5c0;
case 0x5dc5c1:c.instructions+=5;goto B5dc5c1;
case 0x5dc5c2:c.instructions+=4;goto B5dc5c2;
case 0x5dc5c4:c.instructions+=3;goto B5dc5c4;
case 0x5dc5c6:c.instructions+=2;goto B5dc5c6;
case 0x5dc5c8:c.instructions+=1;goto B5dc5c8;
case 0x5dc5ca:goto L5dc5ca;
case 0x5dc5d0:goto L5dc5d0;
case 0x5dc5d3:c.instructions+=5;goto B5dc5d3;
case 0x5dc5d5:c.instructions+=4;goto B5dc5d5;
case 0x5dc5d7:c.instructions+=3;goto B5dc5d7;
case 0x5dc5da:c.instructions+=2;goto B5dc5da;
case 0x5dc5dc:c.instructions+=1;goto B5dc5dc;
case 0x5dc5e1:goto L5dc5e1;
case 0x5dc5e6:c.instructions+=3;goto B5dc5e6;
case 0x5dc5e7:c.instructions+=2;goto B5dc5e7;
case 0x5dc5e8:c.instructions+=1;goto B5dc5e8;
case 0x5dc5ed:goto L5dc5ed;
case 0x5dc5ef:c.instructions+=3;goto B5dc5ef;
case 0x5dc5f2:c.instructions+=2;goto B5dc5f2;
case 0x5dc5f4:c.instructions+=1;goto B5dc5f4;
case 0x5dc5f6:goto L5dc5f6;
case 0x5dc5f7:c.instructions+=2;goto B5dc5f7;
case 0x5dc5f8:c.instructions+=1;goto B5dc5f8;
case 0x5dc600:goto L5dc600;
case 0x5dc601:c.instructions+=5;goto B5dc601;
case 0x5dc602:c.instructions+=4;goto B5dc602;
case 0x5dc604:c.instructions+=3;goto B5dc604;
case 0x5dc606:c.instructions+=2;goto B5dc606;
case 0x5dc608:c.instructions+=1;goto B5dc608;
case 0x5dc60a:goto L5dc60a;
case 0x5dc610:goto L5dc610;
case 0x5dc613:c.instructions+=5;goto B5dc613;
case 0x5dc615:c.instructions+=4;goto B5dc615;
case 0x5dc617:c.instructions+=3;goto B5dc617;
case 0x5dc61a:c.instructions+=2;goto B5dc61a;
case 0x5dc61c:c.instructions+=1;goto B5dc61c;
case 0x5dc621:goto L5dc621;
case 0x5dc626:c.instructions+=3;goto B5dc626;
case 0x5dc627:c.instructions+=2;goto B5dc627;
case 0x5dc628:c.instructions+=1;goto B5dc628;
case 0x5dc62d:goto L5dc62d;
case 0x5dc62f:c.instructions+=3;goto B5dc62f;
case 0x5dc632:c.instructions+=2;goto B5dc632;
case 0x5dc634:c.instructions+=1;goto B5dc634;
case 0x5dc636:goto L5dc636;
case 0x5dc637:c.instructions+=2;goto B5dc637;
case 0x5dc638:c.instructions+=1;goto B5dc638;
case 0x5dc640:goto L5dc640;
case 0x5dc641:c.instructions+=4;goto B5dc641;
case 0x5dc643:c.instructions+=3;goto B5dc643;
case 0x5dc645:c.instructions+=2;goto B5dc645;
case 0x5dc647:c.instructions+=1;goto B5dc647;
case 0x5dc649:goto L5dc649;
case 0x5dc650:goto L5dc650;
case 0x5dc652:c.instructions+=7;goto B5dc652;
case 0x5dc655:c.instructions+=6;goto B5dc655;
case 0x5dc657:c.instructions+=5;goto B5dc657;
case 0x5dc658:c.instructions+=4;goto B5dc658;
case 0x5dc65b:c.instructions+=3;goto B5dc65b;
case 0x5dc660:c.instructions+=2;goto B5dc660;
case 0x5dc661:c.instructions+=1;goto B5dc661;
case 0x5dc666:goto L5dc666;
case 0x5dc668:c.instructions+=3;goto B5dc668;
case 0x5dc66b:c.instructions+=2;goto B5dc66b;
case 0x5dc66d:c.instructions+=1;goto B5dc66d;
case 0x5dc66f:goto L5dc66f;
case 0x5dc670:c.instructions+=1;goto B5dc670;
case 0x5dc680:goto L5dc680;
case 0x5dc681:c.instructions+=12;goto B5dc681;
case 0x5dc683:c.instructions+=11;goto B5dc683;
case 0x5dc686:c.instructions+=10;goto B5dc686;
case 0x5dc68c:c.instructions+=9;goto B5dc68c;
case 0x5dc68d:c.instructions+=8;goto B5dc68d;
case 0x5dc690:c.instructions+=7;goto B5dc690;
case 0x5dc691:c.instructions+=6;goto B5dc691;
case 0x5dc693:c.instructions+=5;goto B5dc693;
case 0x5dc699:c.instructions+=4;goto B5dc699;
case 0x5dc69c:c.instructions+=3;goto B5dc69c;
case 0x5dc69d:c.instructions+=2;goto B5dc69d;
case 0x5dc6a5:c.instructions+=1;goto B5dc6a5;
case 0x5dc6a7:goto L5dc6a7;
case 0x5dc6a9:c.instructions+=29;goto B5dc6a9;
case 0x5dc6ac:c.instructions+=28;goto B5dc6ac;
case 0x5dc6af:c.instructions+=27;goto B5dc6af;
case 0x5dc6b2:c.instructions+=26;goto B5dc6b2;
case 0x5dc6b4:c.instructions+=25;goto B5dc6b4;
case 0x5dc6b7:c.instructions+=24;goto B5dc6b7;
case 0x5dc6bb:c.instructions+=23;goto B5dc6bb;
case 0x5dc6be:c.instructions+=22;goto B5dc6be;
case 0x5dc6c1:c.instructions+=21;goto B5dc6c1;
case 0x5dc6c2:c.instructions+=20;goto B5dc6c2;
case 0x5dc6c5:c.instructions+=19;goto B5dc6c5;
case 0x5dc6c9:c.instructions+=18;goto B5dc6c9;
case 0x5dc6ca:c.instructions+=17;goto B5dc6ca;
case 0x5dc6ce:c.instructions+=16;goto B5dc6ce;
case 0x5dc6d2:c.instructions+=15;goto B5dc6d2;
case 0x5dc6d4:c.instructions+=14;goto B5dc6d4;
case 0x5dc6d8:c.instructions+=13;goto B5dc6d8;
case 0x5dc6dc:c.instructions+=12;goto B5dc6dc;
case 0x5dc6e0:c.instructions+=11;goto B5dc6e0;
case 0x5dc6e4:c.instructions+=10;goto B5dc6e4;
case 0x5dc6e8:c.instructions+=9;goto B5dc6e8;
case 0x5dc6ec:c.instructions+=8;goto B5dc6ec;
case 0x5dc6f0:c.instructions+=7;goto B5dc6f0;
case 0x5dc6f2:c.instructions+=6;goto B5dc6f2;
case 0x5dc6f6:c.instructions+=5;goto B5dc6f6;
case 0x5dc6fa:c.instructions+=4;goto B5dc6fa;
case 0x5dc6fc:c.instructions+=3;goto B5dc6fc;
case 0x5dc6fe:c.instructions+=2;goto B5dc6fe;
case 0x5dc702:c.instructions+=1;goto B5dc702;
case 0x5dc707:goto L5dc707;
case 0x5dc70a:goto L5dc70a;
case 0x5dc710:c.instructions+=3;goto B5dc710;
case 0x5dc712:c.instructions+=2;goto B5dc712;
case 0x5dc715:c.instructions+=1;goto B5dc715;
case 0x5dc71b:goto L5dc71b;
case 0x5dc71f:c.instructions+=17;goto B5dc71f;
case 0x5dc722:c.instructions+=16;goto B5dc722;
case 0x5dc726:c.instructions+=15;goto B5dc726;
case 0x5dc729:c.instructions+=14;goto B5dc729;
case 0x5dc72b:c.instructions+=13;goto B5dc72b;
case 0x5dc72f:c.instructions+=12;goto B5dc72f;
case 0x5dc732:c.instructions+=11;goto B5dc732;
case 0x5dc734:c.instructions+=10;goto B5dc734;
case 0x5dc73a:c.instructions+=9;goto B5dc73a;
case 0x5dc73e:c.instructions+=8;goto B5dc73e;
case 0x5dc741:c.instructions+=7;goto B5dc741;
case 0x5dc745:c.instructions+=6;goto B5dc745;
case 0x5dc749:c.instructions+=5;goto B5dc749;
case 0x5dc74f:c.instructions+=4;goto B5dc74f;
case 0x5dc753:c.instructions+=3;goto B5dc753;
case 0x5dc755:c.instructions+=2;goto B5dc755;
case 0x5dc758:c.instructions+=1;goto B5dc758;
case 0x5dc75a:goto L5dc75a;
case 0x5dc75d:c.instructions+=3;goto B5dc75d;
case 0x5dc75f:c.instructions+=2;goto B5dc75f;
case 0x5dc761:c.instructions+=1;goto B5dc761;
case 0x5dc767:goto L5dc767;
case 0x5dc769:c.instructions+=8;goto B5dc769;
case 0x5dc76c:c.instructions+=7;goto B5dc76c;
case 0x5dc76e:c.instructions+=6;goto B5dc76e;
case 0x5dc76f:c.instructions+=5;goto B5dc76f;
case 0x5dc770:c.instructions+=4;goto B5dc770;
case 0x5dc771:c.instructions+=3;goto B5dc771;
case 0x5dc773:c.instructions+=2;goto B5dc773;
case 0x5dc774:c.instructions+=1;goto B5dc774;
case 0x5dc777:goto L5dc777;
case 0x5dc77b:c.instructions+=4;goto B5dc77b;
case 0x5dc781:c.instructions+=3;goto B5dc781;
case 0x5dc783:c.instructions+=2;goto B5dc783;
case 0x5dc786:c.instructions+=1;goto B5dc786;
case 0x5dc788:goto L5dc788;
case 0x5dc78d:goto L5dc78d;
case 0x5dc793:c.instructions+=3;goto B5dc793;
case 0x5dc795:c.instructions+=2;goto B5dc795;
case 0x5dc798:c.instructions+=1;goto B5dc798;
case 0x5dc79a:goto L5dc79a;
case 0x5dc79f:goto L5dc79f;
case 0x5dc7a3:c.instructions+=4;goto B5dc7a3;
case 0x5dc7a9:c.instructions+=3;goto B5dc7a9;
case 0x5dc7ab:c.instructions+=2;goto B5dc7ab;
case 0x5dc7ae:c.instructions+=1;goto B5dc7ae;
case 0x5dc7b0:goto L5dc7b0;
case 0x5dc7b2:c.instructions+=1;goto B5dc7b2;
case 0x5dc7b4:goto L5dc7b4;
case 0x5dc7b7:c.instructions+=1;goto B5dc7b7;
case 0x5dc7b9:goto L5dc7b9;
case 0x5dc7be:c.instructions+=6;goto B5dc7be;
case 0x5dc7bf:c.instructions+=5;goto B5dc7bf;
case 0x5dc7c0:c.instructions+=4;goto B5dc7c0;
case 0x5dc7c1:c.instructions+=3;goto B5dc7c1;
case 0x5dc7c3:c.instructions+=2;goto B5dc7c3;
case 0x5dc7c4:c.instructions+=1;goto B5dc7c4;
case 0x5dc7c7:goto L5dc7c7;
case 0x5dc7ca:c.instructions+=5;goto B5dc7ca;
case 0x5dc7ce:c.instructions+=4;goto B5dc7ce;
case 0x5dc7d1:c.instructions+=3;goto B5dc7d1;
case 0x5dc7d3:c.instructions+=2;goto B5dc7d3;
case 0x5dc7d6:c.instructions+=1;goto B5dc7d6;
case 0x5dc7d8:goto L5dc7d8;
case 0x5dc7db:c.instructions+=6;goto B5dc7db;
case 0x5dc7de:c.instructions+=5;goto B5dc7de;
case 0x5dc7e1:c.instructions+=4;goto B5dc7e1;
case 0x5dc7e3:c.instructions+=3;goto B5dc7e3;
case 0x5dc7e6:c.instructions+=2;goto B5dc7e6;
case 0x5dc7ec:c.instructions+=1;goto B5dc7ec;
case 0x5dc7ee:goto L5dc7ee;
case 0x5dc7f2:c.instructions+=5;goto B5dc7f2;
case 0x5dc7f6:c.instructions+=4;goto B5dc7f6;
case 0x5dc7fa:c.instructions+=3;goto B5dc7fa;
case 0x5dc7fd:c.instructions+=2;goto B5dc7fd;
case 0x5dc800:c.instructions+=1;goto B5dc800;
case 0x5dc803:goto L5dc803;
case 0x5dc807:c.instructions+=1;goto B5dc807;
case 0x5dc80a:goto L5dc80a;
case 0x5dc80d:c.instructions+=4;goto B5dc80d;
case 0x5dc80e:c.instructions+=3;goto B5dc80e;
case 0x5dc80f:c.instructions+=2;goto B5dc80f;
case 0x5dc811:c.instructions+=1;goto B5dc811;
case 0x5dc816:goto L5dc816;
case 0x5dc819:c.instructions+=2;goto B5dc819;
case 0x5dc81f:c.instructions+=1;goto B5dc81f;
case 0x5dc824:goto L5dc824;
case 0x5dc828:c.instructions+=9;goto B5dc828;
case 0x5dc82b:c.instructions+=8;goto B5dc82b;
case 0x5dc82c:c.instructions+=7;goto B5dc82c;
case 0x5dc82f:c.instructions+=6;goto B5dc82f;
case 0x5dc830:c.instructions+=5;goto B5dc830;
case 0x5dc833:c.instructions+=4;goto B5dc833;
case 0x5dc836:c.instructions+=3;goto B5dc836;
case 0x5dc837:c.instructions+=2;goto B5dc837;
case 0x5dc838:c.instructions+=1;goto B5dc838;
case 0x5dc83d:goto L5dc83d;
case 0x5dc840:c.instructions+=7;goto B5dc840;
case 0x5dc841:c.instructions+=6;goto B5dc841;
case 0x5dc844:c.instructions+=5;goto B5dc844;
case 0x5dc845:c.instructions+=4;goto B5dc845;
case 0x5dc846:c.instructions+=3;goto B5dc846;
case 0x5dc849:c.instructions+=2;goto B5dc849;
case 0x5dc84a:c.instructions+=1;goto B5dc84a;
case 0x5dc84f:goto L5dc84f;
case 0x5dc852:c.instructions+=28;goto B5dc852;
case 0x5dc855:c.instructions+=27;goto B5dc855;
case 0x5dc858:c.instructions+=26;goto B5dc858;
case 0x5dc85b:c.instructions+=25;goto B5dc85b;
case 0x5dc85f:c.instructions+=24;goto B5dc85f;
case 0x5dc861:c.instructions+=23;goto B5dc861;
case 0x5dc864:c.instructions+=22;goto B5dc864;
case 0x5dc866:c.instructions+=21;goto B5dc866;
case 0x5dc869:c.instructions+=20;goto B5dc869;
case 0x5dc86b:c.instructions+=19;goto B5dc86b;
case 0x5dc871:c.instructions+=18;goto B5dc871;
case 0x5dc873:c.instructions+=17;goto B5dc873;
case 0x5dc879:c.instructions+=16;goto B5dc879;
case 0x5dc87d:c.instructions+=15;goto B5dc87d;
case 0x5dc87f:c.instructions+=14;goto B5dc87f;
case 0x5dc885:c.instructions+=13;goto B5dc885;
case 0x5dc887:c.instructions+=12;goto B5dc887;
case 0x5dc889:c.instructions+=11;goto B5dc889;
case 0x5dc88f:c.instructions+=10;goto B5dc88f;
case 0x5dc895:c.instructions+=9;goto B5dc895;
case 0x5dc89b:c.instructions+=8;goto B5dc89b;
case 0x5dc8a1:c.instructions+=7;goto B5dc8a1;
case 0x5dc8a7:c.instructions+=6;goto B5dc8a7;
case 0x5dc8a9:c.instructions+=5;goto B5dc8a9;
case 0x5dc8af:c.instructions+=4;goto B5dc8af;
case 0x5dc8b5:c.instructions+=3;goto B5dc8b5;
case 0x5dc8bb:c.instructions+=2;goto B5dc8bb;
case 0x5dc8c1:c.instructions+=1;goto B5dc8c1;
case 0x5dc8c7:goto L5dc8c7;
case 0x5dc8cb:c.instructions+=31;goto B5dc8cb;
case 0x5dc8cf:c.instructions+=30;goto B5dc8cf;
case 0x5dc8d3:c.instructions+=29;goto B5dc8d3;
case 0x5dc8d5:c.instructions+=28;goto B5dc8d5;
case 0x5dc8d9:c.instructions+=27;goto B5dc8d9;
case 0x5dc8dd:c.instructions+=26;goto B5dc8dd;
case 0x5dc8e3:c.instructions+=25;goto B5dc8e3;
case 0x5dc8e5:c.instructions+=24;goto B5dc8e5;
case 0x5dc8e9:c.instructions+=23;goto B5dc8e9;
case 0x5dc8ed:c.instructions+=22;goto B5dc8ed;
case 0x5dc8ef:c.instructions+=21;goto B5dc8ef;
case 0x5dc8f3:c.instructions+=20;goto B5dc8f3;
case 0x5dc8f7:c.instructions+=19;goto B5dc8f7;
case 0x5dc8fb:c.instructions+=18;goto B5dc8fb;
case 0x5dc8fe:c.instructions+=17;goto B5dc8fe;
case 0x5dc901:c.instructions+=16;goto B5dc901;
case 0x5dc905:c.instructions+=15;goto B5dc905;
case 0x5dc907:c.instructions+=14;goto B5dc907;
case 0x5dc90e:c.instructions+=13;goto B5dc90e;
case 0x5dc911:c.instructions+=12;goto B5dc911;
case 0x5dc915:c.instructions+=11;goto B5dc915;
case 0x5dc91c:c.instructions+=10;goto B5dc91c;
case 0x5dc921:c.instructions+=9;goto B5dc921;
case 0x5dc929:c.instructions+=8;goto B5dc929;
case 0x5dc931:c.instructions+=7;goto B5dc931;
case 0x5dc939:c.instructions+=6;goto B5dc939;
case 0x5dc941:c.instructions+=5;goto B5dc941;
case 0x5dc949:c.instructions+=4;goto B5dc949;
case 0x5dc951:c.instructions+=3;goto B5dc951;
case 0x5dc958:c.instructions+=2;goto B5dc958;
case 0x5dc963:c.instructions+=1;goto B5dc963;
case 0x5dc968:goto L5dc968;
case 0x5dc96a:c.instructions+=2;goto B5dc96a;
case 0x5dc96c:c.instructions+=1;goto B5dc96c;
case 0x5dc96e:goto L5dc96e;
case 0x5dc970:goto L5dc970;
case 0x5dc971:c.instructions+=1;goto B5dc971;
case 0x5dc976:goto L5dc976;
case 0x5dc978:c.instructions+=3;goto B5dc978;
case 0x5dc97b:c.instructions+=2;goto B5dc97b;
case 0x5dc97d:c.instructions+=1;goto B5dc97d;
case 0x5dc97f:goto L5dc97f;
case 0x5dc983:c.instructions+=5;goto B5dc983;
case 0x5dc984:c.instructions+=4;goto B5dc984;
case 0x5dc987:c.instructions+=3;goto B5dc987;
case 0x5dc988:c.instructions+=2;goto B5dc988;
case 0x5dc98f:c.instructions+=1;goto B5dc98f;
case 0x5dc994:goto L5dc994;
case 0x5dc997:c.instructions+=3;goto B5dc997;
case 0x5dc998:c.instructions+=2;goto B5dc998;
case 0x5dc99d:c.instructions+=1;goto B5dc99d;
case 0x5dc9a2:goto L5dc9a2;
case 0x5dc9a3:c.instructions+=2;goto B5dc9a3;
case 0x5dc9a8:c.instructions+=1;goto B5dc9a8;
case 0x5dc9ad:goto L5dc9ad;
case 0x5dc9af:c.instructions+=2;goto B5dc9af;
case 0x5dc9b1:c.instructions+=1;goto B5dc9b1;
case 0x5dc9b3:goto L5dc9b3;
case 0x5dc9b4:c.instructions+=6;goto B5dc9b4;
case 0x5dc9b5:c.instructions+=5;goto B5dc9b5;
case 0x5dc9b7:c.instructions+=4;goto B5dc9b7;
case 0x5dc9b8:c.instructions+=3;goto B5dc9b8;
case 0x5dc9ba:c.instructions+=2;goto B5dc9ba;
case 0x5dc9bb:c.instructions+=1;goto B5dc9bb;
case 0x5dc9c0:goto L5dc9c0;
case 0x5dc9c3:c.instructions+=2;goto B5dc9c3;
case 0x5dc9c5:c.instructions+=1;goto B5dc9c5;
case 0x5dc9c7:goto L5dc9c7;
case 0x5dc9c8:c.instructions+=3;goto B5dc9c8;
case 0x5dc9ce:c.instructions+=2;goto B5dc9ce;
case 0x5dc9d0:c.instructions+=1;goto B5dc9d0;
case 0x5dc9d2:goto L5dc9d2;
case 0x5dc9d8:c.instructions+=2;goto B5dc9d8;
case 0x5dc9d9:c.instructions+=1;goto B5dc9d9;
case 0x5dc9e0:goto L5dc9e0;
case 0x5dc9e2:c.instructions+=6;goto B5dc9e2;
case 0x5dc9e5:c.instructions+=5;goto B5dc9e5;
case 0x5dc9e7:c.instructions+=4;goto B5dc9e7;
case 0x5dc9ea:c.instructions+=3;goto B5dc9ea;
case 0x5dc9eb:c.instructions+=2;goto B5dc9eb;
case 0x5dc9ee:c.instructions+=1;goto B5dc9ee;
case 0x5dc9f0:goto L5dc9f0;
case 0x5dc9f1:goto L5dc9f1;
case 0x5dc9fb:c.instructions+=1;goto B5dc9fb;
case 0x5dca00:goto L5dca00;
case 0x5dca02:c.instructions+=10;goto B5dca02;
case 0x5dca05:c.instructions+=9;goto B5dca05;
case 0x5dca07:c.instructions+=8;goto B5dca07;
case 0x5dca0a:c.instructions+=7;goto B5dca0a;
case 0x5dca11:c.instructions+=6;goto B5dca11;
case 0x5dca16:c.instructions+=5;goto B5dca16;
case 0x5dca18:c.instructions+=4;goto B5dca18;
case 0x5dca1e:c.instructions+=3;goto B5dca1e;
case 0x5dca21:c.instructions+=2;goto B5dca21;
case 0x5dca27:c.instructions+=1;goto B5dca27;
case 0x5dca28:goto L5dca28;
case 0x5dca30:goto L5dca30;
case 0x5dca31:c.instructions+=6;goto B5dca31;
case 0x5dca33:c.instructions+=5;goto B5dca33;
case 0x5dca36:c.instructions+=4;goto B5dca36;
case 0x5dca37:c.instructions+=3;goto B5dca37;
case 0x5dca3a:c.instructions+=2;goto B5dca3a;
case 0x5dca3b:c.instructions+=1;goto B5dca3b;
case 0x5dca40:goto L5dca40;
case 0x5dca43:c.instructions+=2;goto B5dca43;
case 0x5dca45:c.instructions+=1;goto B5dca45;
case 0x5dca4a:goto L5dca4a;
case 0x5dca4d:c.instructions+=4;goto B5dca4d;
case 0x5dca4e:c.instructions+=3;goto B5dca4e;
case 0x5dca51:c.instructions+=2;goto B5dca51;
case 0x5dca52:c.instructions+=1;goto B5dca52;
case 0x5dca57:goto L5dca57;
case 0x5dca59:c.instructions+=7;goto B5dca59;
case 0x5dca5c:c.instructions+=6;goto B5dca5c;
case 0x5dca5f:c.instructions+=5;goto B5dca5f;
case 0x5dca62:c.instructions+=4;goto B5dca62;
case 0x5dca65:c.instructions+=3;goto B5dca65;
case 0x5dca6c:c.instructions+=2;goto B5dca6c;
case 0x5dca6d:c.instructions+=1;goto B5dca6d;
case 0x5dca70:goto L5dca70;
case 0x5dca71:c.instructions+=5;goto B5dca71;
case 0x5dca74:c.instructions+=4;goto B5dca74;
case 0x5dca76:c.instructions+=3;goto B5dca76;
case 0x5dca78:c.instructions+=2;goto B5dca78;
case 0x5dca7a:c.instructions+=1;goto B5dca7a;
case 0x5dca7c:goto L5dca7c;
case 0x5dca7d:c.instructions+=3;goto B5dca7d;
case 0x5dca81:c.instructions+=2;goto B5dca81;
case 0x5dca82:c.instructions+=1;goto B5dca82;
case 0x5dca83:goto L5dca83;
case 0x5dca85:c.instructions+=1;goto B5dca85;
case 0x5dca87:goto L5dca87;
case 0x5dca8a:c.instructions+=3;goto B5dca8a;
case 0x5dca8c:c.instructions+=2;goto B5dca8c;
case 0x5dca8e:c.instructions+=1;goto B5dca8e;
case 0x5dca90:goto L5dca90;
case 0x5dca93:c.instructions+=2;goto B5dca93;
case 0x5dca95:c.instructions+=1;goto B5dca95;
case 0x5dca97:goto L5dca97;
case 0x5dca9d:goto L5dca9d;
case 0x5dca9f:c.instructions+=9;goto B5dca9f;
case 0x5dcaa2:c.instructions+=8;goto B5dcaa2;
case 0x5dcaa4:c.instructions+=7;goto B5dcaa4;
case 0x5dcaa7:c.instructions+=6;goto B5dcaa7;
case 0x5dcaad:c.instructions+=5;goto B5dcaad;
case 0x5dcaaf:c.instructions+=4;goto B5dcaaf;
case 0x5dcab5:c.instructions+=3;goto B5dcab5;
case 0x5dcab8:c.instructions+=2;goto B5dcab8;
case 0x5dcabe:c.instructions+=1;goto B5dcabe;
case 0x5dcabf:goto L5dcabf;
case 0x5dcac1:c.instructions+=2;goto B5dcac1;
case 0x5dcac3:c.instructions+=1;goto B5dcac3;
case 0x5dcac5:goto L5dcac5;
case 0x5dcac6:c.instructions+=2;goto B5dcac6;
case 0x5dcac7:c.instructions+=1;goto B5dcac7;
case 0x5dcac8:goto L5dcac8;
case 0x5dcac9:c.instructions+=1;goto B5dcac9;
case 0x5dcad0:goto L5dcad0;
case 0x5dcad3:c.instructions+=9;goto B5dcad3;
case 0x5dcad4:c.instructions+=8;goto B5dcad4;
case 0x5dcad5:c.instructions+=7;goto B5dcad5;
case 0x5dcad7:c.instructions+=6;goto B5dcad7;
case 0x5dcada:c.instructions+=5;goto B5dcada;
case 0x5dcadb:c.instructions+=4;goto B5dcadb;
case 0x5dcadd:c.instructions+=3;goto B5dcadd;
case 0x5dcadf:c.instructions+=2;goto B5dcadf;
case 0x5dcae0:c.instructions+=1;goto B5dcae0;
case 0x5dcae6:goto L5dcae6;
case 0x5dcae7:c.instructions+=2;goto B5dcae7;
case 0x5dcaeb:c.instructions+=1;goto B5dcaeb;
case 0x5dcaf0:goto L5dcaf0;
case 0x5dcaf2:c.instructions+=4;goto B5dcaf2;
case 0x5dcaf4:c.instructions+=3;goto B5dcaf4;
case 0x5dcaf8:c.instructions+=2;goto B5dcaf8;
case 0x5dcafc:c.instructions+=1;goto B5dcafc;
case 0x5dcb02:goto L5dcb02;
case 0x5dcb03:c.instructions+=5;goto B5dcb03;
case 0x5dcb05:c.instructions+=4;goto B5dcb05;
case 0x5dcb07:c.instructions+=3;goto B5dcb07;
case 0x5dcb09:c.instructions+=2;goto B5dcb09;
case 0x5dcb0d:c.instructions+=1;goto B5dcb0d;
case 0x5dcb0f:goto L5dcb0f;
case 0x5dcb13:goto L5dcb13;
case 0x5dcb16:c.instructions+=6;goto B5dcb16;
case 0x5dcb18:c.instructions+=5;goto B5dcb18;
case 0x5dcb1b:c.instructions+=4;goto B5dcb1b;
case 0x5dcb1d:c.instructions+=3;goto B5dcb1d;
case 0x5dcb20:c.instructions+=2;goto B5dcb20;
case 0x5dcb24:c.instructions+=1;goto B5dcb24;
case 0x5dcb26:goto L5dcb26;
case 0x5dcb2a:c.instructions+=2;goto B5dcb2a;
case 0x5dcb2c:c.instructions+=1;goto B5dcb2c;
case 0x5dcb2e:goto L5dcb2e;
case 0x5dcb33:goto L5dcb33;
case 0x5dcb35:c.instructions+=1;goto B5dcb35;
case 0x5dcb3a:goto L5dcb3a;
case 0x5dcb3e:c.instructions+=4;goto B5dcb3e;
case 0x5dcb40:c.instructions+=3;goto B5dcb40;
case 0x5dcb41:c.instructions+=2;goto B5dcb41;
case 0x5dcb43:c.instructions+=1;goto B5dcb43;
case 0x5dcb48:goto L5dcb48;
case 0x5dcb4a:c.instructions+=1;goto B5dcb4a;
case 0x5dcb4c:goto L5dcb4c;
case 0x5dcb4f:c.instructions+=5;goto B5dcb4f;
case 0x5dcb51:c.instructions+=4;goto B5dcb51;
case 0x5dcb54:c.instructions+=3;goto B5dcb54;
case 0x5dcb57:c.instructions+=2;goto B5dcb57;
case 0x5dcb59:c.instructions+=1;goto B5dcb59;
case 0x5dcb5b:goto L5dcb5b;
case 0x5dcb5e:c.instructions+=4;goto B5dcb5e;
case 0x5dcb61:c.instructions+=3;goto B5dcb61;
case 0x5dcb64:c.instructions+=2;goto B5dcb64;
case 0x5dcb67:c.instructions+=1;goto B5dcb67;
case 0x5dcb69:goto L5dcb69;
case 0x5dcb6b:c.instructions+=2;goto B5dcb6b;
case 0x5dcb6f:c.instructions+=1;goto B5dcb6f;
case 0x5dcb71:goto L5dcb71;
case 0x5dcb75:c.instructions+=5;goto B5dcb75;
case 0x5dcb79:c.instructions+=4;goto B5dcb79;
case 0x5dcb7a:c.instructions+=3;goto B5dcb7a;
case 0x5dcb7c:c.instructions+=2;goto B5dcb7c;
case 0x5dcb80:c.instructions+=1;goto B5dcb80;
case 0x5dcb82:goto L5dcb82;
case 0x5dcb83:c.instructions+=6;goto B5dcb83;
case 0x5dcb84:c.instructions+=5;goto B5dcb84;
case 0x5dcb85:c.instructions+=4;goto B5dcb85;
case 0x5dcb87:c.instructions+=3;goto B5dcb87;
case 0x5dcb88:c.instructions+=2;goto B5dcb88;
case 0x5dcb8b:c.instructions+=1;goto B5dcb8b;
case 0x5dcb90:goto L5dcb90;
case 0x5dcb94:c.instructions+=3;goto B5dcb94;
case 0x5dcb96:c.instructions+=2;goto B5dcb96;
case 0x5dcb99:c.instructions+=1;goto B5dcb99;
case 0x5dcb9b:goto L5dcb9b;
case 0x5dcb9c:c.instructions+=1;goto B5dcb9c;
case 0x5dcb9e:goto L5dcb9e;
case 0x5dcb9f:c.instructions+=1;goto B5dcb9f;
case 0x5dcba1:goto L5dcba1;
case 0x5dcba4:c.instructions+=4;goto B5dcba4;
case 0x5dcba6:c.instructions+=3;goto B5dcba6;
case 0x5dcba8:c.instructions+=2;goto B5dcba8;
case 0x5dcbab:c.instructions+=1;goto B5dcbab;
case 0x5dcbae:goto L5dcbae;
case 0x5dcbb1:c.instructions+=5;goto B5dcbb1;
case 0x5dcbb4:c.instructions+=4;goto B5dcbb4;
case 0x5dcbb7:c.instructions+=3;goto B5dcbb7;
case 0x5dcbba:c.instructions+=2;goto B5dcbba;
case 0x5dcbbd:c.instructions+=1;goto B5dcbbd;
case 0x5dcbc0:goto L5dcbc0;
case 0x5dcbc3:c.instructions+=3;goto B5dcbc3;
case 0x5dcbc6:c.instructions+=2;goto B5dcbc6;
case 0x5dcbc9:c.instructions+=1;goto B5dcbc9;
case 0x5dcbcb:goto L5dcbcb;
case 0x5dcbce:c.instructions+=1;goto B5dcbce;
case 0x5dcbd0:goto L5dcbd0;
case 0x5dcbd2:c.instructions+=1;goto B5dcbd2;
case 0x5dcbd5:goto L5dcbd5;
case 0x5dcbd7:goto L5dcbd7;
case 0x5dcbe0:goto L5dcbe0;
case 0x5dcbe4:c.instructions+=3;goto B5dcbe4;
case 0x5dcbe6:c.instructions+=2;goto B5dcbe6;
case 0x5dcbe9:c.instructions+=1;goto B5dcbe9;
case 0x5dcbeb:goto L5dcbeb;
case 0x5dcbec:c.instructions+=1;goto B5dcbec;
case 0x5dcbee:goto L5dcbee;
case 0x5dcbef:c.instructions+=1;goto B5dcbef;
case 0x5dcbf1:goto L5dcbf1;
case 0x5dcbf4:c.instructions+=3;goto B5dcbf4;
case 0x5dcbf7:c.instructions+=2;goto B5dcbf7;
case 0x5dcbfa:c.instructions+=1;goto B5dcbfa;
case 0x5dcbfc:goto L5dcbfc;
case 0x5dcbff:c.instructions+=1;goto B5dcbff;
case 0x5dcc01:goto L5dcc01;
case 0x5dcc04:goto L5dcc04;
case 0x5dcc06:c.instructions+=1;goto B5dcc06;
case 0x5dcc09:goto L5dcc09;
case 0x5dcc0c:c.instructions+=5;goto B5dcc0c;
case 0x5dcc0f:c.instructions+=4;goto B5dcc0f;
case 0x5dcc11:c.instructions+=3;goto B5dcc11;
case 0x5dcc13:c.instructions+=2;goto B5dcc13;
case 0x5dcc16:c.instructions+=1;goto B5dcc16;
case 0x5dcc19:goto L5dcc19;
case 0x5dcc1c:c.instructions+=3;goto B5dcc1c;
case 0x5dcc1f:c.instructions+=2;goto B5dcc1f;
case 0x5dcc22:c.instructions+=1;goto B5dcc22;
case 0x5dcc25:goto L5dcc25;
case 0x5dcc30:goto L5dcc30;
case 0x5dcc34:c.instructions+=3;goto B5dcc34;
case 0x5dcc36:c.instructions+=2;goto B5dcc36;
case 0x5dcc39:c.instructions+=1;goto B5dcc39;
case 0x5dcc3b:goto L5dcc3b;
case 0x5dcc3c:c.instructions+=1;goto B5dcc3c;
case 0x5dcc3e:goto L5dcc3e;
case 0x5dcc3f:c.instructions+=1;goto B5dcc3f;
case 0x5dcc41:goto L5dcc41;
case 0x5dcc43:c.instructions+=1;goto B5dcc43;
case 0x5dcc46:goto L5dcc46;
case 0x5dcc49:c.instructions+=2;goto B5dcc49;
case 0x5dcc4c:c.instructions+=1;goto B5dcc4c;
case 0x5dcc4e:goto L5dcc4e;
case 0x5dcc51:c.instructions+=1;goto B5dcc51;
case 0x5dcc53:goto L5dcc53;
case 0x5dcc55:c.instructions+=1;goto B5dcc55;
case 0x5dcc58:goto L5dcc58;
case 0x5dcc5b:c.instructions+=2;goto B5dcc5b;
case 0x5dcc5e:c.instructions+=1;goto B5dcc5e;
case 0x5dcc60:goto L5dcc60;
case 0x5dcc62:c.instructions+=4;goto B5dcc62;
case 0x5dcc65:c.instructions+=3;goto B5dcc65;
case 0x5dcc68:c.instructions+=2;goto B5dcc68;
case 0x5dcc6b:c.instructions+=1;goto B5dcc6b;
case 0x5dcc6d:goto L5dcc6d;
case 0x5dcc70:c.instructions+=1;goto B5dcc70;
case 0x5dcc72:goto L5dcc72;
case 0x5dcc74:goto L5dcc74;
case 0x5dcc80:goto L5dcc80;
case 0x5dcc85:c.instructions+=2;goto B5dcc85;
case 0x5dcc87:c.instructions+=1;goto B5dcc87;
case 0x5dcc89:goto L5dcc89;
case 0x5dcc8b:c.instructions+=1;goto B5dcc8b;
case 0x5dcc8d:goto L5dcc8d;
case 0x5dcc90:c.instructions+=3;goto B5dcc90;
case 0x5dcc95:c.instructions+=2;goto B5dcc95;
case 0x5dcc9c:c.instructions+=1;goto B5dcc9c;
case 0x5dcc9e:goto L5dcc9e;
case 0x5dcca0:goto L5dcca0;
case 0x5dcca3:c.instructions+=3;goto B5dcca3;
case 0x5dcca6:c.instructions+=2;goto B5dcca6;
case 0x5dcca9:c.instructions+=1;goto B5dcca9;
case 0x5dccab:goto L5dccab;
case 0x5dccae:c.instructions+=3;goto B5dccae;
case 0x5dccb1:c.instructions+=2;goto B5dccb1;
case 0x5dccb3:c.instructions+=1;goto B5dccb3;
case 0x5dccb5:goto L5dccb5;
case 0x5dccba:c.instructions+=1;goto B5dccba;
case 0x5dccbb:goto L5dccbb;
case 0x5dccbd:c.instructions+=1;goto B5dccbd;
case 0x5dccc0:goto L5dccc0;
case 0x5dccc1:c.instructions+=17;goto B5dccc1;
case 0x5dccc3:c.instructions+=16;goto B5dccc3;
case 0x5dccc6:c.instructions+=15;goto B5dccc6;
case 0x5dccc9:c.instructions+=14;goto B5dccc9;
case 0x5dccca:c.instructions+=13;goto B5dccca;
case 0x5dcccb:c.instructions+=12;goto B5dcccb;
case 0x5dcccc:c.instructions+=11;goto B5dcccc;
case 0x5dccce:c.instructions+=10;goto B5dccce;
case 0x5dccd1:c.instructions+=9;goto B5dccd1;
case 0x5dccd5:c.instructions+=8;goto B5dccd5;
case 0x5dccd7:c.instructions+=7;goto B5dccd7;
case 0x5dccda:c.instructions+=6;goto B5dccda;
case 0x5dccdc:c.instructions+=5;goto B5dccdc;
case 0x5dccdf:c.instructions+=4;goto B5dccdf;
case 0x5dcce1:c.instructions+=3;goto B5dcce1;
case 0x5dcce5:c.instructions+=2;goto B5dcce5;
case 0x5dcce9:c.instructions+=1;goto B5dcce9;
case 0x5dcceb:goto L5dcceb;
case 0x5dccf2:c.instructions+=1;goto B5dccf2;
case 0x5dccf4:goto L5dccf4;
case 0x5dccf6:goto L5dccf6;
case 0x5dccfa:c.instructions+=29;goto B5dccfa;
case 0x5dccfd:c.instructions+=28;goto B5dccfd;
case 0x5dcd04:c.instructions+=27;goto B5dcd04;
case 0x5dcd06:c.instructions+=26;goto B5dcd06;
case 0x5dcd0a:c.instructions+=25;goto B5dcd0a;
case 0x5dcd0d:c.instructions+=24;goto B5dcd0d;
case 0x5dcd11:c.instructions+=23;goto B5dcd11;
case 0x5dcd15:c.instructions+=22;goto B5dcd15;
case 0x5dcd18:c.instructions+=21;goto B5dcd18;
case 0x5dcd1b:c.instructions+=20;goto B5dcd1b;
case 0x5dcd1d:c.instructions+=19;goto B5dcd1d;
case 0x5dcd1f:c.instructions+=18;goto B5dcd1f;
case 0x5dcd24:c.instructions+=17;goto B5dcd24;
case 0x5dcd28:c.instructions+=16;goto B5dcd28;
case 0x5dcd2b:c.instructions+=15;goto B5dcd2b;
case 0x5dcd2f:c.instructions+=14;goto B5dcd2f;
case 0x5dcd33:c.instructions+=13;goto B5dcd33;
case 0x5dcd37:c.instructions+=12;goto B5dcd37;
case 0x5dcd3f:c.instructions+=11;goto B5dcd3f;
case 0x5dcd45:c.instructions+=10;goto B5dcd45;
case 0x5dcd4d:c.instructions+=9;goto B5dcd4d;
case 0x5dcd51:c.instructions+=8;goto B5dcd51;
case 0x5dcd55:c.instructions+=7;goto B5dcd55;
case 0x5dcd59:c.instructions+=6;goto B5dcd59;
case 0x5dcd5d:c.instructions+=5;goto B5dcd5d;
case 0x5dcd63:c.instructions+=4;goto B5dcd63;
case 0x5dcd69:c.instructions+=3;goto B5dcd69;
case 0x5dcd6b:c.instructions+=2;goto B5dcd6b;
case 0x5dcd6e:c.instructions+=1;goto B5dcd6e;
case 0x5dcd74:goto L5dcd74;
case 0x5dcd78:c.instructions+=4;goto B5dcd78;
case 0x5dcd7e:c.instructions+=3;goto B5dcd7e;
case 0x5dcd80:c.instructions+=2;goto B5dcd80;
case 0x5dcd83:c.instructions+=1;goto B5dcd83;
case 0x5dcd89:goto L5dcd89;
case 0x5dcd91:c.instructions+=4;goto B5dcd91;
case 0x5dcd95:c.instructions+=3;goto B5dcd95;
case 0x5dcd97:c.instructions+=2;goto B5dcd97;
case 0x5dcd9c:c.instructions+=1;goto B5dcd9c;
case 0x5dcd9e:goto L5dcd9e;
case 0x5dcda0:c.instructions+=1;goto B5dcda0;
case 0x5dcda2:goto L5dcda2;
case 0x5dcda7:goto L5dcda7;
case 0x5dcdab:c.instructions+=2;goto B5dcdab;
case 0x5dcdb0:c.instructions+=1;goto B5dcdb0;
case 0x5dcdb2:goto L5dcdb2;
case 0x5dcdb4:c.instructions+=1;goto B5dcdb4;
case 0x5dcdb6:goto L5dcdb6;
case 0x5dcdb7:goto L5dcdb7;
case 0x5dcdbb:c.instructions+=2;goto B5dcdbb;
case 0x5dcdbd:c.instructions+=1;goto B5dcdbd;
case 0x5dcdc3:goto L5dcdc3;
case 0x5dcdc4:c.instructions+=2;goto B5dcdc4;
case 0x5dcdc6:c.instructions+=1;goto B5dcdc6;
case 0x5dcdcb:goto L5dcdcb;
case 0x5dcdce:c.instructions+=7;goto B5dcdce;
case 0x5dcdd2:c.instructions+=6;goto B5dcdd2;
case 0x5dcdd4:c.instructions+=5;goto B5dcdd4;
case 0x5dcdd7:c.instructions+=4;goto B5dcdd7;
case 0x5dcddb:c.instructions+=3;goto B5dcddb;
case 0x5dcdde:c.instructions+=2;goto B5dcdde;
case 0x5dcde0:c.instructions+=1;goto B5dcde0;
case 0x5dcde6:goto L5dcde6;
case 0x5dcde8:c.instructions+=3;goto B5dcde8;
case 0x5dcdeb:c.instructions+=2;goto B5dcdeb;
case 0x5dcdee:c.instructions+=1;goto B5dcdee;
case 0x5dcdf4:goto L5dcdf4;
case 0x5dcdf7:c.instructions+=1;goto B5dcdf7;
case 0x5dcdf9:goto L5dcdf9;
case 0x5dcdfd:c.instructions+=1;goto B5dcdfd;
case 0x5dcdff:goto L5dcdff;
case 0x5dce03:goto L5dce03;
case 0x5dce07:c.instructions+=2;goto B5dce07;
case 0x5dce0a:c.instructions+=1;goto B5dce0a;
case 0x5dce10:goto L5dce10;
case 0x5dce12:c.instructions+=4;goto B5dce12;
case 0x5dce14:c.instructions+=3;goto B5dce14;
case 0x5dce17:c.instructions+=2;goto B5dce17;
case 0x5dce1a:c.instructions+=1;goto B5dce1a;
case 0x5dce20:goto L5dce20;
case 0x5dce23:c.instructions+=1;goto B5dce23;
case 0x5dce29:goto L5dce29;
case 0x5dce2c:c.instructions+=1;goto B5dce2c;
case 0x5dce2e:goto L5dce2e;
case 0x5dce30:c.instructions+=1;goto B5dce30;
case 0x5dce32:goto L5dce32;
case 0x5dce36:goto L5dce36;
case 0x5dce39:c.instructions+=2;goto B5dce39;
case 0x5dce3b:c.instructions+=1;goto B5dce3b;
case 0x5dce3d:goto L5dce3d;
case 0x5dce44:c.instructions+=1;goto B5dce44;
case 0x5dce46:goto L5dce46;
case 0x5dce48:goto L5dce48;
case 0x5dce4a:c.instructions+=2;goto B5dce4a;
case 0x5dce4d:c.instructions+=1;goto B5dce4d;
case 0x5dce50:goto L5dce50;
case 0x5dce55:c.instructions+=1;goto B5dce55;
case 0x5dce57:goto L5dce57;
case 0x5dce58:c.instructions+=3;goto B5dce58;
case 0x5dce5b:c.instructions+=2;goto B5dce5b;
case 0x5dce5e:c.instructions+=1;goto B5dce5e;
case 0x5dce60:goto L5dce60;
case 0x5dce65:goto L5dce65;
case 0x5dce69:c.instructions+=7;goto B5dce69;
case 0x5dce6c:c.instructions+=6;goto B5dce6c;
case 0x5dce6e:c.instructions+=5;goto B5dce6e;
case 0x5dce70:c.instructions+=4;goto B5dce70;
case 0x5dce73:c.instructions+=3;goto B5dce73;
case 0x5dce75:c.instructions+=2;goto B5dce75;
case 0x5dce79:c.instructions+=1;goto B5dce79;
case 0x5dce7e:goto L5dce7e;
case 0x5dce80:c.instructions+=2;goto B5dce80;
case 0x5dce82:c.instructions+=1;goto B5dce82;
case 0x5dce88:goto L5dce88;
case 0x5dce8a:goto L5dce8a;
case 0x5dce8e:c.instructions+=5;goto B5dce8e;
case 0x5dce94:c.instructions+=4;goto B5dce94;
case 0x5dce96:c.instructions+=3;goto B5dce96;
case 0x5dce9b:c.instructions+=2;goto B5dce9b;
case 0x5dce9f:c.instructions+=1;goto B5dce9f;
case 0x5dcea1:goto L5dcea1;
case 0x5dcea3:c.instructions+=1;goto B5dcea3;
case 0x5dcea5:goto L5dcea5;
case 0x5dceaa:goto L5dceaa;
case 0x5dceae:c.instructions+=2;goto B5dceae;
case 0x5dceb3:c.instructions+=1;goto B5dceb3;
case 0x5dceb5:goto L5dceb5;
case 0x5dceb7:c.instructions+=1;goto B5dceb7;
case 0x5dceb9:goto L5dceb9;
case 0x5dceba:goto L5dceba;
case 0x5dcebc:c.instructions+=1;goto B5dcebc;
case 0x5dcec2:goto L5dcec2;
case 0x5dcec3:c.instructions+=2;goto B5dcec3;
case 0x5dcec5:c.instructions+=1;goto B5dcec5;
case 0x5dceca:goto L5dceca;
case 0x5dcecd:c.instructions+=5;goto B5dcecd;
case 0x5dced1:c.instructions+=4;goto B5dced1;
case 0x5dced3:c.instructions+=3;goto B5dced3;
case 0x5dced5:c.instructions+=2;goto B5dced5;
case 0x5dced7:c.instructions+=1;goto B5dced7;
case 0x5dcedd:goto L5dcedd;
case 0x5dcedf:c.instructions+=4;goto B5dcedf;
case 0x5dcee1:c.instructions+=3;goto B5dcee1;
case 0x5dcee4:c.instructions+=2;goto B5dcee4;
case 0x5dcee7:c.instructions+=1;goto B5dcee7;
case 0x5dceed:goto L5dceed;
case 0x5dcef0:c.instructions+=1;goto B5dcef0;
case 0x5dcef6:goto L5dcef6;
case 0x5dcefa:c.instructions+=6;goto B5dcefa;
case 0x5dcefc:c.instructions+=5;goto B5dcefc;
case 0x5dceff:c.instructions+=4;goto B5dceff;
case 0x5dcf03:c.instructions+=3;goto B5dcf03;
case 0x5dcf06:c.instructions+=2;goto B5dcf06;
case 0x5dcf08:c.instructions+=1;goto B5dcf08;
case 0x5dcf0e:goto L5dcf0e;
case 0x5dcf10:c.instructions+=2;goto B5dcf10;
case 0x5dcf14:c.instructions+=1;goto B5dcf14;
case 0x5dcf16:goto L5dcf16;
case 0x5dcf1a:c.instructions+=1;goto B5dcf1a;
case 0x5dcf1c:goto L5dcf1c;
case 0x5dcf20:goto L5dcf20;
case 0x5dcf24:c.instructions+=4;goto B5dcf24;
case 0x5dcf27:c.instructions+=3;goto B5dcf27;
case 0x5dcf2a:c.instructions+=2;goto B5dcf2a;
case 0x5dcf2d:c.instructions+=1;goto B5dcf2d;
case 0x5dcf2f:goto L5dcf2f;
case 0x5dcf33:c.instructions+=1;goto B5dcf33;
case 0x5dcf35:goto L5dcf35;
case 0x5dcf39:goto L5dcf39;
case 0x5dcf3c:c.instructions+=1;goto B5dcf3c;
case 0x5dcf42:goto L5dcf42;
case 0x5dcf44:c.instructions+=2;goto B5dcf44;
case 0x5dcf48:c.instructions+=1;goto B5dcf48;
case 0x5dcf4a:goto L5dcf4a;
case 0x5dcf4e:c.instructions+=1;goto B5dcf4e;
case 0x5dcf50:goto L5dcf50;
case 0x5dcf54:goto L5dcf54;
case 0x5dcf57:c.instructions+=2;goto B5dcf57;
case 0x5dcf5a:c.instructions+=1;goto B5dcf5a;
case 0x5dcf5c:goto L5dcf5c;
case 0x5dcf60:c.instructions+=2;goto B5dcf60;
case 0x5dcf64:c.instructions+=1;goto B5dcf64;
case 0x5dcf66:goto L5dcf66;
case 0x5dcf6a:c.instructions+=1;goto B5dcf6a;
case 0x5dcf6e:goto L5dcf6e;
case 0x5dcf71:c.instructions+=4;goto B5dcf71;
case 0x5dcf73:c.instructions+=3;goto B5dcf73;
case 0x5dcf78:c.instructions+=2;goto B5dcf78;
case 0x5dcf7a:c.instructions+=1;goto B5dcf7a;
case 0x5dcf7c:goto L5dcf7c;
case 0x5dcf80:c.instructions+=7;goto B5dcf80;
case 0x5dcf83:c.instructions+=6;goto B5dcf83;
case 0x5dcf85:c.instructions+=5;goto B5dcf85;
case 0x5dcf87:c.instructions+=4;goto B5dcf87;
case 0x5dcf8b:c.instructions+=3;goto B5dcf8b;
case 0x5dcf8e:c.instructions+=2;goto B5dcf8e;
case 0x5dcf90:c.instructions+=1;goto B5dcf90;
case 0x5dcf92:goto L5dcf92;
case 0x5dcf94:c.instructions+=1;goto B5dcf94;
case 0x5dcf99:goto L5dcf99;
case 0x5dcf9b:c.instructions+=15;goto B5dcf9b;
case 0x5dcf9d:c.instructions+=14;goto B5dcf9d;
case 0x5dcfa1:c.instructions+=13;goto B5dcfa1;
case 0x5dcfa4:c.instructions+=12;goto B5dcfa4;
case 0x5dcfa8:c.instructions+=11;goto B5dcfa8;
case 0x5dcfac:c.instructions+=10;goto B5dcfac;
case 0x5dcfaf:c.instructions+=9;goto B5dcfaf;
case 0x5dcfb3:c.instructions+=8;goto B5dcfb3;
case 0x5dcfb7:c.instructions+=7;goto B5dcfb7;
case 0x5dcfb8:c.instructions+=6;goto B5dcfb8;
case 0x5dcfbc:c.instructions+=5;goto B5dcfbc;
case 0x5dcfc0:c.instructions+=4;goto B5dcfc0;
case 0x5dcfc1:c.instructions+=3;goto B5dcfc1;
case 0x5dcfc7:c.instructions+=2;goto B5dcfc7;
case 0x5dcfcb:c.instructions+=1;goto B5dcfcb;
case 0x5dcfd0:goto L5dcfd0;
case 0x5dcfd6:c.instructions+=4;goto B5dcfd6;
case 0x5dcfd9:c.instructions+=3;goto B5dcfd9;
case 0x5dcfdb:c.instructions+=2;goto B5dcfdb;
case 0x5dcfde:c.instructions+=1;goto B5dcfde;
case 0x5dcfe0:goto L5dcfe0;
case 0x5dcfe4:goto L5dcfe4;
case 0x5dcfe8:c.instructions+=2;goto B5dcfe8;
case 0x5dcfe9:c.instructions+=1;goto B5dcfe9;
case 0x5dcfee:goto L5dcfee;
case 0x5dcff1:c.instructions+=3;goto B5dcff1;
case 0x5dcff6:c.instructions+=2;goto B5dcff6;
case 0x5dcffd:c.instructions+=1;goto B5dcffd;
default:missing_instruction(c.pc);}
B5dc000:L5dc000:{c.instructions+=3;NFSU2_TR(0x5dc000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc003:{NFSU2_TR(0x5dc003);
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
B5dc005:{NFSU2_TR(0x5dc005);
if(r1(R+518)){{goto L5dc026;}}
}
B5dc007:L5dc007:{c.instructions+=10;NFSU2_TR(0x5dc007);
__builtin_memmove((R+0),gp(0x88ffa4),4);
}
B5dc00c:{NFSU2_TR(0x5dc00c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dc00e:{NFSU2_TR(0x5dc00e);
__builtin_memmove(gp(0x88ffa4),(R+24),4);
}
B5dc014:{NFSU2_TR(0x5dc014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc015:{NFSU2_TR(0x5dc015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc018:{NFSU2_TR(0x5dc018);
u8 U[4];
w4(U+0,u32(0x88ffa0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5dc01e:{NFSU2_TR(0x5dc01e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc01f:{NFSU2_TR(0x5dc01f);
w4(R+0,u32(0x1ull));
}
B5dc024:{NFSU2_TR(0x5dc024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc025:{NFSU2_TR(0x5dc025);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc026:L5dc026:{c.instructions+=10;NFSU2_TR(0x5dc026);
__builtin_memmove((R+0),gp(0x88f290),4);
}
B5dc02b:{NFSU2_TR(0x5dc02b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dc02d:{NFSU2_TR(0x5dc02d);
__builtin_memmove(gp(0x88f290),(R+24),4);
}
B5dc033:{NFSU2_TR(0x5dc033);
u8 U[4];
w4(U+0,u32(0x88f28cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5dc039:{NFSU2_TR(0x5dc039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc03c:{NFSU2_TR(0x5dc03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc03d:{NFSU2_TR(0x5dc03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc03e:{NFSU2_TR(0x5dc03e);
w4(R+0,u32(0x1ull));
}
B5dc043:{NFSU2_TR(0x5dc043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc044:{NFSU2_TR(0x5dc044);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc050:L5dc050:{c.instructions+=3;NFSU2_TR(0x5dc050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc054:{NFSU2_TR(0x5dc054);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80036000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5dc05a:{NFSU2_TR(0x5dc05a);
if(r1(R+518)){{goto L5dc05f;}}
}
B5dc05c:L5dc05c:{c.instructions+=2;NFSU2_TR(0x5dc05c);
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
B5dc05e:{NFSU2_TR(0x5dc05e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc05f:L5dc05f:{c.instructions+=5;NFSU2_TR(0x5dc05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc062:{NFSU2_TR(0x5dc062);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc065:{NFSU2_TR(0x5dc065);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5dc069:{NFSU2_TR(0x5dc069);
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
B5dc06b:{NFSU2_TR(0x5dc06b);
if(r1(R+518)){{goto L5dc0d7;}}
}
B5dc06d:L5dc06d:{c.instructions+=2;NFSU2_TR(0x5dc06d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc06f:{NFSU2_TR(0x5dc06f);
}
B5dc070:L5dc070:{c.instructions+=2;NFSU2_TR(0x5dc070);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x36001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc075:{NFSU2_TR(0x5dc075);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc070u);}goto L5dc070;}}
}
B5dc077:L5dc077:{c.instructions+=4;NFSU2_TR(0x5dc077);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dc07a:{NFSU2_TR(0x5dc07a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5dc07d:{NFSU2_TR(0x5dc07d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dc081:{NFSU2_TR(0x5dc081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc08d;}}
}
B5dc083:L5dc083:{c.instructions+=4;NFSU2_TR(0x5dc083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dc085:{NFSU2_TR(0x5dc085);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc088:{NFSU2_TR(0x5dc088);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dc08a:{NFSU2_TR(0x5dc08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc08d:L5dc08d:{c.instructions+=7;NFSU2_TR(0x5dc08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc090:{NFSU2_TR(0x5dc090);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5dc097:{NFSU2_TR(0x5dc097);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc09e:{NFSU2_TR(0x5dc09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc0a1:{NFSU2_TR(0x5dc0a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dc0a8:{NFSU2_TR(0x5dc0a8);
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
B5dc0aa:{NFSU2_TR(0x5dc0aa);
if(r1(R+518)){{goto L5dc0d7;}}
}
B5dc0ac:L5dc0ac:{c.instructions+=2;NFSU2_TR(0x5dc0ac);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5dc0ae:{NFSU2_TR(0x5dc0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc0d7;}}
}
B5dc0b0:L5dc0b0:{c.instructions+=7;NFSU2_TR(0x5dc0b0);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x886a80),u32(0x1ull)));
s4(0x886a80,u32(u32(m4(0x886a80))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x886a80))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x886a80))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x886a80))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dc0b6:{NFSU2_TR(0x5dc0b6);
__builtin_memmove((R+4),gp(0x88a288),4);
}
B5dc0bc:{NFSU2_TR(0x5dc0bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dc0be:{NFSU2_TR(0x5dc0be);
__builtin_memmove(gp(0x88a288),(R+0),4);
}
B5dc0c3:{NFSU2_TR(0x5dc0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc0c6:{NFSU2_TR(0x5dc0c6);
u8 U[4];
w4(U+0,u32(0x88a284ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dc0cc:{NFSU2_TR(0x5dc0cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B5dc0d7:L5dc0d7:{c.instructions+=2;NFSU2_TR(0x5dc0d7);
w4(R+0,u32(0x1ull));
}
B5dc0dc:{NFSU2_TR(0x5dc0dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc0e0:L5dc0e0:{c.instructions+=15;NFSU2_TR(0x5dc0e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0e2:{NFSU2_TR(0x5dc0e2);
u8 U[4];
w4(U+0,u32(0x779388ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0e7:{NFSU2_TR(0x5dc0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc0ed:{NFSU2_TR(0x5dc0ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0ee:{NFSU2_TR(0x5dc0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc0f5:{NFSU2_TR(0x5dc0f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0f6:{NFSU2_TR(0x5dc0f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0f7:{NFSU2_TR(0x5dc0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0f8:{NFSU2_TR(0x5dc0f8);
__builtin_memmove((R+24),(R+4),4);
}
B5dc0fa:{NFSU2_TR(0x5dc0fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc0fb:{NFSU2_TR(0x5dc0fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc0ff:{NFSU2_TR(0x5dc0ff);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc101:{NFSU2_TR(0x5dc101);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc103:{NFSU2_TR(0x5dc103);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc10b:{NFSU2_TR(0x5dc10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc110ull));
TAIL_STATIC(0x57c330u,57c);
}
B5dc110:L5dc110:{c.instructions+=4;NFSU2_TR(0x5dc110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2084ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc116:{NFSU2_TR(0x5dc116);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc119:{NFSU2_TR(0x5dc119);
__builtin_memmove((R+24),(R+12),4);
}
B5dc11b:{NFSU2_TR(0x5dc11b);
w4(R+28,u32(0x4ull));
}
B5dc120:L5dc120:{c.instructions+=2;NFSU2_TR(0x5dc120);
__builtin_memmove((R+4),(R+24),4);
}
B5dc122:{NFSU2_TR(0x5dc122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc127ull));
TAIL_STATIC(0x4903b0u,490);
}
B5dc127:L5dc127:{c.instructions+=3;NFSU2_TR(0x5dc127);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B5dc12a:{NFSU2_TR(0x5dc12a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5dc12b:{NFSU2_TR(0x5dc12b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc120u);}goto L5dc120;}}
}
B5dc12d:L5dc12d:{c.instructions+=6;NFSU2_TR(0x5dc12d);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc132:{NFSU2_TR(0x5dc132);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc134:{NFSU2_TR(0x5dc134);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc136:{NFSU2_TR(0x5dc136);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc137:{NFSU2_TR(0x5dc137);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc13f:{NFSU2_TR(0x5dc13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc144ull));
TAIL_STATIC(0x75c401u,75c);
}
B5dc144:L5dc144:{c.instructions+=7;NFSU2_TR(0x5dc144);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc148:{NFSU2_TR(0x5dc148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc149:{NFSU2_TR(0x5dc149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc14a:{NFSU2_TR(0x5dc14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc14b:{NFSU2_TR(0x5dc14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc152:{NFSU2_TR(0x5dc152);
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
B5dc155:{NFSU2_TR(0x5dc155);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc160:L5dc160:{c.instructions+=4;NFSU2_TR(0x5dc160);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dc163:{NFSU2_TR(0x5dc163);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc166:{NFSU2_TR(0x5dc166);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc167:{NFSU2_TR(0x5dc167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc16cull));
TAIL_STATIC(0x5d6320u,5d6);
}
B5dc16c:L5dc16c:{c.instructions+=1;NFSU2_TR(0x5dc16c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc170:L5dc170:{c.instructions+=3;NFSU2_TR(0x5dc170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc173:{NFSU2_TR(0x5dc173);
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
B5dc175:{NFSU2_TR(0x5dc175);
if(r1(R+518)){{goto L5dc19a;}}
}
B5dc177:L5dc177:{c.instructions+=5;NFSU2_TR(0x5dc177);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5dc17b:{NFSU2_TR(0x5dc17b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc17c:{NFSU2_TR(0x5dc17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dc17f:{NFSU2_TR(0x5dc17f);
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
B5dc181:{NFSU2_TR(0x5dc181);
if(r1(R+518)){{goto L5dc199;}}
}
B5dc183:L5dc183:{c.instructions+=2;NFSU2_TR(0x5dc183);
__builtin_memmove((R+4),(R+24),4);
}
B5dc185:{NFSU2_TR(0x5dc185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc18aull));
TAIL_STATIC(0x633fd0u,633);
}
B5dc18a:L5dc18a:{c.instructions+=4;NFSU2_TR(0x5dc18a);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B5dc18f:{NFSU2_TR(0x5dc18f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc190:{NFSU2_TR(0x5dc190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc191:{NFSU2_TR(0x5dc191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc196ull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc196:L5dc196:{c.instructions+=1;NFSU2_TR(0x5dc196);
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
B5dc199:L5dc199:{c.instructions+=1;NFSU2_TR(0x5dc199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc19a:L5dc19a:{c.instructions+=1;NFSU2_TR(0x5dc19a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc1a0:L5dc1a0:{c.instructions+=5;NFSU2_TR(0x5dc1a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1a1:{NFSU2_TR(0x5dc1a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1a2:{NFSU2_TR(0x5dc1a2);
__builtin_memmove((R+24),gp(0x88ea84),4);
}
B5dc1a8:{NFSU2_TR(0x5dc1a8);
w4(R+4,u32(0x88ea84ull));
}
B5dc1ad:{NFSU2_TR(0x5dc1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc1b2ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dc1b2:L5dc1b2:{c.instructions+=3;NFSU2_TR(0x5dc1b2);
__builtin_memmove((R+20),(R+0),4);
}
B5dc1b4:{NFSU2_TR(0x5dc1b4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc1b6:{NFSU2_TR(0x5dc1b6);
if(r1(R+518)){{goto L5dc21c;}}
}
B5dc1b8:L5dc1b8:{c.instructions+=3;NFSU2_TR(0x5dc1b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1b9:{NFSU2_TR(0x5dc1b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1ba:{NFSU2_TR(0x5dc1ba);
__builtin_memmove((R+12),(R+12),4);
}
B5dc1c0:L5dc1c0:{c.instructions+=6;NFSU2_TR(0x5dc1c0);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5dc1c5:{NFSU2_TR(0x5dc1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc1c8:{NFSU2_TR(0x5dc1c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dc1ca:{NFSU2_TR(0x5dc1ca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5dc1cc:{NFSU2_TR(0x5dc1cc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xf0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc1d1:{NFSU2_TR(0x5dc1d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dc214;}}
}
B5dc1d3:L5dc1d3:{c.instructions+=6;NFSU2_TR(0x5dc1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc1d6:{NFSU2_TR(0x5dc1d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dc1d8:{NFSU2_TR(0x5dc1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc1db:{NFSU2_TR(0x5dc1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc1de:{NFSU2_TR(0x5dc1de);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc1e0:{NFSU2_TR(0x5dc1e0);
if(r1(R+518)){{goto L5dc204;}}
}
B5dc1e2:L5dc1e2:{c.instructions+=4;NFSU2_TR(0x5dc1e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5dc1e6:{NFSU2_TR(0x5dc1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dc1e9:{NFSU2_TR(0x5dc1e9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc1eb:{NFSU2_TR(0x5dc1eb);
if(r1(R+518)){{goto L5dc204;}}
}
B5dc1ed:L5dc1ed:{c.instructions+=2;NFSU2_TR(0x5dc1ed);
__builtin_memmove((R+4),(R+12),4);
}
B5dc1ef:{NFSU2_TR(0x5dc1ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc1f4ull));
TAIL_STATIC(0x633fd0u,633);
}
B5dc1f4:L5dc1f4:{c.instructions+=4;NFSU2_TR(0x5dc1f4);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B5dc1fa:{NFSU2_TR(0x5dc1fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1fb:{NFSU2_TR(0x5dc1fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc1fc:{NFSU2_TR(0x5dc1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc201ull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc201:L5dc201:{c.instructions+=1;NFSU2_TR(0x5dc201);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc204:L5dc204:{c.instructions+=4;NFSU2_TR(0x5dc204);
__builtin_memmove((R+8),gp(0x883e58),4);
}
B5dc20a:{NFSU2_TR(0x5dc20a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc20b:{NFSU2_TR(0x5dc20b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc20c:{NFSU2_TR(0x5dc20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc211ull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc211:L5dc211:{c.instructions+=1;NFSU2_TR(0x5dc211);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc214:L5dc214:{c.instructions+=3;NFSU2_TR(0x5dc214);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc216:{NFSU2_TR(0x5dc216);
__builtin_memmove((R+24),(R+28),4);
}
B5dc218:{NFSU2_TR(0x5dc218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc1c0u);}goto L5dc1c0;}}
}
B5dc21a:L5dc21a:{c.instructions+=2;NFSU2_TR(0x5dc21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc21b:{NFSU2_TR(0x5dc21b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc21c:L5dc21c:{c.instructions+=4;NFSU2_TR(0x5dc21c);
__builtin_memmove((R+0),gp(0x88ea84),4);
}
B5dc221:{NFSU2_TR(0x5dc221);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc223:{NFSU2_TR(0x5dc223);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dc227:{NFSU2_TR(0x5dc227);
if(r1(R+518)){{goto L5dc23b;}}
}
B5dc229:L5dc229:{c.instructions+=1;NFSU2_TR(0x5dc229);
__builtin_memmove((R+16),(R+16),4);
}
B5dc230:L5dc230:{c.instructions+=2;NFSU2_TR(0x5dc230);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dc233:{NFSU2_TR(0x5dc233);
if(r1(R+518)){{goto L5dc23b;}}
}
B5dc235:L5dc235:{c.instructions+=3;NFSU2_TR(0x5dc235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc237:{NFSU2_TR(0x5dc237);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc239:{NFSU2_TR(0x5dc239);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc230u);}goto L5dc230;}}
}
B5dc23b:L5dc23b:{c.instructions+=2;NFSU2_TR(0x5dc23b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88ea84ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88ea84ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88ea84ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dc240:{NFSU2_TR(0x5dc240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc298;}}
}
B5dc242:L5dc242:{c.instructions+=3;NFSU2_TR(0x5dc242);
__builtin_memmove((R+0),gp(0x883e58),4);
}
B5dc247:{NFSU2_TR(0x5dc247);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc248:{NFSU2_TR(0x5dc248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc24dull));
TAIL_STATIC(0x43cd10u,43c);
}
B5dc24d:L5dc24d:{c.instructions+=3;NFSU2_TR(0x5dc24d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dc250:{NFSU2_TR(0x5dc250);
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
B5dc252:{NFSU2_TR(0x5dc252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc298;}}
}
B5dc254:L5dc254:{c.instructions+=3;NFSU2_TR(0x5dc254);
__builtin_memmove((R+4),gp(0x883e58),4);
}
B5dc25a:{NFSU2_TR(0x5dc25a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc25b:{NFSU2_TR(0x5dc25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc260ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B5dc260:L5dc260:{c.instructions+=4;NFSU2_TR(0x5dc260);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dc262:{NFSU2_TR(0x5dc262);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dc265:{NFSU2_TR(0x5dc265);
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
B5dc267:{NFSU2_TR(0x5dc267);
if(r1(R+518)){{goto L5dc280;}}
}
B5dc269:L5dc269:{c.instructions+=7;NFSU2_TR(0x5dc269);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc26c:{NFSU2_TR(0x5dc26c);
__builtin_memmove((R+8),gp(0x7fb720),4);
}
B5dc272:{NFSU2_TR(0x5dc272);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc275:{NFSU2_TR(0x5dc275);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc278:{NFSU2_TR(0x5dc278);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc27b:{NFSU2_TR(0x5dc27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc27e:{NFSU2_TR(0x5dc27e);
{goto L5dc282;}
}
B5dc280:L5dc280:{c.instructions+=1;NFSU2_TR(0x5dc280);
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
B5dc282:L5dc282:{c.instructions+=5;NFSU2_TR(0x5dc282);
__builtin_memmove((R+4),gp(0x88ea88),4);
}
B5dc288:{NFSU2_TR(0x5dc288);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dc28a:{NFSU2_TR(0x5dc28a);
__builtin_memmove(gp(0x88ea88),(R+0),4);
}
B5dc28f:{NFSU2_TR(0x5dc28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc292:{NFSU2_TR(0x5dc292);
u8 U[4];
w4(U+0,u32(0x88ea84ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dc298:L5dc298:{c.instructions+=3;NFSU2_TR(0x5dc298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc299:{NFSU2_TR(0x5dc299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc29a:{NFSU2_TR(0x5dc29a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc2a0:L5dc2a0:{c.instructions+=45;NFSU2_TR(0x5dc2a0);
__builtin_memmove((R+0),(R+4),4);
}
B5dc2a2:{NFSU2_TR(0x5dc2a2);
__builtin_memmove((R+4),gp(0x7fb720),4);
}
B5dc2a8:{NFSU2_TR(0x5dc2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2ab:{NFSU2_TR(0x5dc2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc2af:{NFSU2_TR(0x5dc2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc2b2:{NFSU2_TR(0x5dc2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2b5:{NFSU2_TR(0x5dc2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2bc:{NFSU2_TR(0x5dc2bc);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2bf:{NFSU2_TR(0x5dc2bf);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2c2:{NFSU2_TR(0x5dc2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc2c5:{NFSU2_TR(0x5dc2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2c8:{NFSU2_TR(0x5dc2c8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc2ca:{NFSU2_TR(0x5dc2ca);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2cd:{NFSU2_TR(0x5dc2cd);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2d0:{NFSU2_TR(0x5dc2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc2d3:{NFSU2_TR(0x5dc2d3);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2d6:{NFSU2_TR(0x5dc2d6);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2d9:{NFSU2_TR(0x5dc2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2dc:{NFSU2_TR(0x5dc2dc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc2de:{NFSU2_TR(0x5dc2de);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2e1:{NFSU2_TR(0x5dc2e1);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2e4:{NFSU2_TR(0x5dc2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc2e7:{NFSU2_TR(0x5dc2e7);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2ea:{NFSU2_TR(0x5dc2ea);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2ed:{NFSU2_TR(0x5dc2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc2f0:{NFSU2_TR(0x5dc2f0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc2f2:{NFSU2_TR(0x5dc2f2);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2f5:{NFSU2_TR(0x5dc2f5);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc2f8:{NFSU2_TR(0x5dc2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc2fb:{NFSU2_TR(0x5dc2fb);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc2fe:{NFSU2_TR(0x5dc2fe);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc301:{NFSU2_TR(0x5dc301);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc304:{NFSU2_TR(0x5dc304);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc306:{NFSU2_TR(0x5dc306);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc309:{NFSU2_TR(0x5dc309);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc30c:{NFSU2_TR(0x5dc30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc30f:{NFSU2_TR(0x5dc30f);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc312:{NFSU2_TR(0x5dc312);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc315:{NFSU2_TR(0x5dc315);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc318:{NFSU2_TR(0x5dc318);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc31a:{NFSU2_TR(0x5dc31a);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc31d:{NFSU2_TR(0x5dc31d);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc320:{NFSU2_TR(0x5dc320);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dc323:{NFSU2_TR(0x5dc323);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dc326:{NFSU2_TR(0x5dc326);
if(r1(R+518)){{goto L5dc35c;}}
}
B5dc328:L5dc328:{c.instructions+=13;NFSU2_TR(0x5dc328);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc32c:{NFSU2_TR(0x5dc32c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc32f:{NFSU2_TR(0x5dc32f);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dc335:{NFSU2_TR(0x5dc335);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc338:{NFSU2_TR(0x5dc338);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc33b:{NFSU2_TR(0x5dc33b);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dc341:{NFSU2_TR(0x5dc341);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc344:{NFSU2_TR(0x5dc344);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc347:{NFSU2_TR(0x5dc347);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dc34d:{NFSU2_TR(0x5dc34d);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc350:{NFSU2_TR(0x5dc350);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc353:{NFSU2_TR(0x5dc353);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dc359:{NFSU2_TR(0x5dc359);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc35c:L5dc35c:{c.instructions+=1;NFSU2_TR(0x5dc35c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc360:L5dc360:{c.instructions+=5;NFSU2_TR(0x5dc360);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc361:{NFSU2_TR(0x5dc361);
__builtin_memmove((R+24),gp(0x88eadc),4);
}
B5dc367:{NFSU2_TR(0x5dc367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc368:{NFSU2_TR(0x5dc368);
w4(R+4,u32(0x88eadcull));
}
B5dc36d:{NFSU2_TR(0x5dc36d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc372ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dc372:L5dc372:{c.instructions+=3;NFSU2_TR(0x5dc372);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc374:{NFSU2_TR(0x5dc374);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dc378:{NFSU2_TR(0x5dc378);
if(r1(R+518)){{goto L5dc392;}}
}
B5dc37a:L5dc37a:{c.instructions+=1;NFSU2_TR(0x5dc37a);
__builtin_memmove((R+12),(R+12),4);
}
B5dc380:L5dc380:{c.instructions+=3;NFSU2_TR(0x5dc380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc383:{NFSU2_TR(0x5dc383);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc385:{NFSU2_TR(0x5dc385);
if(r1(R+518)){{goto L5dc38c;}}
}
B5dc387:L5dc387:{c.instructions+=2;NFSU2_TR(0x5dc387);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5dc38a:{NFSU2_TR(0x5dc38a);
if(r1(R+518)){{goto L5dc3e3;}}
}
B5dc38c:L5dc38c:{c.instructions+=3;NFSU2_TR(0x5dc38c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc38e:{NFSU2_TR(0x5dc38e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc390:{NFSU2_TR(0x5dc390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc380u);}goto L5dc380;}}
}
B5dc392:L5dc392:{c.instructions+=3;NFSU2_TR(0x5dc392);
__builtin_memmove((R+4),gp(0x883e5c),4);
}
B5dc398:{NFSU2_TR(0x5dc398);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc399:{NFSU2_TR(0x5dc399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc39eull));
TAIL_STATIC(0x43cd10u,43c);
}
B5dc39e:L5dc39e:{c.instructions+=3;NFSU2_TR(0x5dc39e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dc3a1:{NFSU2_TR(0x5dc3a1);
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
B5dc3a3:{NFSU2_TR(0x5dc3a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc406;}}
}
B5dc3a5:L5dc3a5:{c.instructions+=4;NFSU2_TR(0x5dc3a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dc3a8:{NFSU2_TR(0x5dc3a8);
__builtin_memmove((R+0),(R+4),1);
}
B5dc3aa:{NFSU2_TR(0x5dc3aa);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5dc3ac:{NFSU2_TR(0x5dc3ac);
if(r1(R+518)){{goto L5dc3b8;}}
}
B5dc3ae:L5dc3ae:{c.instructions+=3;NFSU2_TR(0x5dc3ae);
__builtin_memmove((R+8),gp(0x802040),4);
}
B5dc3b4:{NFSU2_TR(0x5dc3b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc3b6:{NFSU2_TR(0x5dc3b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc3c1;}}
}
B5dc3b8:L5dc3b8:{c.instructions+=2;NFSU2_TR(0x5dc3b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dc3bb:{NFSU2_TR(0x5dc3bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc3c1;}}
}
B5dc3bd:L5dc3bd:{c.instructions+=2;NFSU2_TR(0x5dc3bd);
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
B5dc3bf:{NFSU2_TR(0x5dc3bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc406;}}
}
B5dc3c1:L5dc3c1:{c.instructions+=3;NFSU2_TR(0x5dc3c1);
__builtin_memmove((R+8),gp(0x883e5c),4);
}
B5dc3c7:{NFSU2_TR(0x5dc3c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc3c8:{NFSU2_TR(0x5dc3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc3cdull));
TAIL_STATIC(0x43f8f0u,43f);
}
B5dc3cd:L5dc3cd:{c.instructions+=3;NFSU2_TR(0x5dc3cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dc3d0:{NFSU2_TR(0x5dc3d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc3d2:{NFSU2_TR(0x5dc3d2);
if(r1(R+518)){{goto L5dc3ee;}}
}
B5dc3d4:L5dc3d4:{c.instructions+=5;NFSU2_TR(0x5dc3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc3d8:{NFSU2_TR(0x5dc3d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc3d9:{NFSU2_TR(0x5dc3d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc3da:{NFSU2_TR(0x5dc3da);
__builtin_memmove((R+4),(R+0),4);
}
B5dc3dc:{NFSU2_TR(0x5dc3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc3e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc2a0u);}goto L5dc2a0;}
}
B5dc3e1:L5dc3e1:{c.instructions+=1;NFSU2_TR(0x5dc3e1);
{goto L5dc3f0;}
}
B5dc3e3:L5dc3e3:{c.instructions+=5;NFSU2_TR(0x5dc3e3);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5dc3e8:{NFSU2_TR(0x5dc3e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc3e9:{NFSU2_TR(0x5dc3e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc3ec:{NFSU2_TR(0x5dc3ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc3ed:{NFSU2_TR(0x5dc3ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc3ee:L5dc3ee:{c.instructions+=1;NFSU2_TR(0x5dc3ee);
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
B5dc3f0:L5dc3f0:{c.instructions+=5;NFSU2_TR(0x5dc3f0);
__builtin_memmove((R+4),gp(0x88eae0),4);
}
B5dc3f6:{NFSU2_TR(0x5dc3f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dc3f8:{NFSU2_TR(0x5dc3f8);
__builtin_memmove(gp(0x88eae0),(R+0),4);
}
B5dc3fd:{NFSU2_TR(0x5dc3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc400:{NFSU2_TR(0x5dc400);
u8 U[4];
w4(U+0,u32(0x88eadcull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dc406:L5dc406:{c.instructions+=3;NFSU2_TR(0x5dc406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc407:{NFSU2_TR(0x5dc407);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc408:{NFSU2_TR(0x5dc408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc410:L5dc410:{c.instructions+=3;NFSU2_TR(0x5dc410);
__builtin_memmove((R+0),gp(0x883e5c),4);
}
B5dc415:{NFSU2_TR(0x5dc415);
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
B5dc417:{NFSU2_TR(0x5dc417);
if(r1(R+518)){{goto L5dc45e;}}
}
B5dc419:L5dc419:{c.instructions+=3;NFSU2_TR(0x5dc419);
__builtin_memmove((R+0),gp(0x883e60),4);
}
B5dc41e:{NFSU2_TR(0x5dc41e);
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
B5dc420:{NFSU2_TR(0x5dc420);
if(r1(R+518)){{goto L5dc45e;}}
}
B5dc422:L5dc422:{c.instructions+=7;NFSU2_TR(0x5dc422);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc423:{NFSU2_TR(0x5dc423);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dc427:{NFSU2_TR(0x5dc427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc42d:{NFSU2_TR(0x5dc42d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc42e:{NFSU2_TR(0x5dc42e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dc430:{NFSU2_TR(0x5dc430);
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
B5dc432:{NFSU2_TR(0x5dc432);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dc45c;}}
}
B5dc434:L5dc434:{c.instructions+=5;NFSU2_TR(0x5dc434);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc435:{NFSU2_TR(0x5dc435);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dc439:{NFSU2_TR(0x5dc439);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc43a:{NFSU2_TR(0x5dc43a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc43d:{NFSU2_TR(0x5dc43d);
__builtin_memmove((R+4),(R+4),4);
}
B5dc440:L5dc440:{c.instructions+=4;NFSU2_TR(0x5dc440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc442:{NFSU2_TR(0x5dc442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc443:{NFSU2_TR(0x5dc443);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc444:{NFSU2_TR(0x5dc444);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc449ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc360u);}goto L5dc360;}
}
B5dc449:L5dc449:{c.instructions+=6;NFSU2_TR(0x5dc449);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc44f:{NFSU2_TR(0x5dc44f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc452:{NFSU2_TR(0x5dc452);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dc453:{NFSU2_TR(0x5dc453);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5dc456:{NFSU2_TR(0x5dc456);
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
B5dc458:{NFSU2_TR(0x5dc458);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc440u);}goto L5dc440;}}
}
B5dc45a:L5dc45a:{c.instructions+=2;NFSU2_TR(0x5dc45a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc45b:{NFSU2_TR(0x5dc45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc45c:L5dc45c:{c.instructions+=2;NFSU2_TR(0x5dc45c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc45d:{NFSU2_TR(0x5dc45d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc45e:L5dc45e:{c.instructions+=1;NFSU2_TR(0x5dc45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc460:L5dc460:{c.instructions+=5;NFSU2_TR(0x5dc460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc461:{NFSU2_TR(0x5dc461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc462:{NFSU2_TR(0x5dc462);
__builtin_memmove((R+24),gp(0x88eadc),4);
}
B5dc468:{NFSU2_TR(0x5dc468);
w4(R+4,u32(0x88eadcull));
}
B5dc46d:{NFSU2_TR(0x5dc46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc472ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dc472:L5dc472:{c.instructions+=3;NFSU2_TR(0x5dc472);
__builtin_memmove((R+12),(R+0),4);
}
B5dc474:{NFSU2_TR(0x5dc474);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5dc476:{NFSU2_TR(0x5dc476);
if(r1(R+518)){{goto L5dc4bb;}}
}
B5dc478:L5dc478:{c.instructions+=4;NFSU2_TR(0x5dc478);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc479:{NFSU2_TR(0x5dc479);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dc47d:{NFSU2_TR(0x5dc47d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc47e:{NFSU2_TR(0x5dc47e);
__builtin_memmove((R+28),(R+28),4);
}
B5dc480:L5dc480:{c.instructions+=6;NFSU2_TR(0x5dc480);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5dc485:{NFSU2_TR(0x5dc485);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc488:{NFSU2_TR(0x5dc488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dc48a:{NFSU2_TR(0x5dc48a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5dc48c:{NFSU2_TR(0x5dc48c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc48f:{NFSU2_TR(0x5dc48f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dc4ab;}}
}
B5dc491:L5dc491:{c.instructions+=7;NFSU2_TR(0x5dc491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc494:{NFSU2_TR(0x5dc494);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dc496:{NFSU2_TR(0x5dc496);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc499:{NFSU2_TR(0x5dc499);
__builtin_memmove((R+4),gp(0x883e5c),4);
}
B5dc49f:{NFSU2_TR(0x5dc49f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4a0:{NFSU2_TR(0x5dc4a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4a1:{NFSU2_TR(0x5dc4a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc4a6ull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc4a6:L5dc4a6:{c.instructions+=2;NFSU2_TR(0x5dc4a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc4a9:{NFSU2_TR(0x5dc4a9);
{goto L5dc4b3;}
}
B5dc4ab:L5dc4ab:{c.instructions+=3;NFSU2_TR(0x5dc4ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4ac:{NFSU2_TR(0x5dc4ac);
__builtin_memmove((R+4),(R+24),4);
}
B5dc4ae:{NFSU2_TR(0x5dc4ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc4b3ull));
TAIL_STATIC(0x5d7bc0u,5d7);
}
B5dc4b3:L5dc4b3:{c.instructions+=3;NFSU2_TR(0x5dc4b3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5dc4b5:{NFSU2_TR(0x5dc4b5);
__builtin_memmove((R+24),(R+28),4);
}
B5dc4b7:{NFSU2_TR(0x5dc4b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc480u);}goto L5dc480;}}
}
B5dc4b9:L5dc4b9:{c.instructions+=2;NFSU2_TR(0x5dc4b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc4ba:{NFSU2_TR(0x5dc4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc4bb:L5dc4bb:{c.instructions+=3;NFSU2_TR(0x5dc4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc4bc:{NFSU2_TR(0x5dc4bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc4bd:{NFSU2_TR(0x5dc4bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc4c0:L5dc4c0:{c.instructions+=14;NFSU2_TR(0x5dc4c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4c1:{NFSU2_TR(0x5dc4c1);
__builtin_memmove((R+20),(R+16),4);
}
B5dc4c3:{NFSU2_TR(0x5dc4c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dc4c6:{NFSU2_TR(0x5dc4c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B5dc4c9:{NFSU2_TR(0x5dc4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc4cc:{NFSU2_TR(0x5dc4cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc4cf:{NFSU2_TR(0x5dc4cf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5dc4d2:{NFSU2_TR(0x5dc4d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4d3:{NFSU2_TR(0x5dc4d3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5dc4d5:{NFSU2_TR(0x5dc4d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4d6:{NFSU2_TR(0x5dc4d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4d7:{NFSU2_TR(0x5dc4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5dc4da:{NFSU2_TR(0x5dc4da);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5dc4dc:{NFSU2_TR(0x5dc4dc);
if(r1(R+518)){{goto L5dc57d;}}
}
B5dc4e2:L5dc4e2:{c.instructions+=3;NFSU2_TR(0x5dc4e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc4e6:{NFSU2_TR(0x5dc4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc4e7:{NFSU2_TR(0x5dc4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc4ecull));
TAIL_STATIC(0x43c780u,43c);
}
B5dc4ec:L5dc4ec:{c.instructions+=12;NFSU2_TR(0x5dc4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc4ef:{NFSU2_TR(0x5dc4ef);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc4f2:{NFSU2_TR(0x5dc4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dc4f4:{NFSU2_TR(0x5dc4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc4f6:{NFSU2_TR(0x5dc4f6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc4fa:{NFSU2_TR(0x5dc4fa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc4fd:{NFSU2_TR(0x5dc4fd);
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
B5dc500:{NFSU2_TR(0x5dc500);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc504:{NFSU2_TR(0x5dc504);
__builtin_memmove((R+4),(R+28),4);
}
B5dc506:{NFSU2_TR(0x5dc506);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc50a:{NFSU2_TR(0x5dc50a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc512:{NFSU2_TR(0x5dc512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc517ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dc517:L5dc517:{c.instructions+=3;NFSU2_TR(0x5dc517);
__builtin_memmove((R+12),(R+0),4);
}
B5dc519:{NFSU2_TR(0x5dc519);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5dc51b:{NFSU2_TR(0x5dc51b);
if(r1(R+518)){{goto L5dc57d;}}
}
B5dc51d:L5dc51d:{c.instructions+=5;NFSU2_TR(0x5dc51d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc520:{NFSU2_TR(0x5dc520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dc523:{NFSU2_TR(0x5dc523);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dc525:{NFSU2_TR(0x5dc525);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc529:{NFSU2_TR(0x5dc529);
__builtin_memmove((R+16),(R+16),4);
}
B5dc530:L5dc530:{c.instructions+=5;NFSU2_TR(0x5dc530);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dc534:{NFSU2_TR(0x5dc534);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc535:{NFSU2_TR(0x5dc535);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc538:{NFSU2_TR(0x5dc538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc539:{NFSU2_TR(0x5dc539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc53eull));
TAIL_STATIC(0x4012b0u,401);
}
B5dc53e:L5dc53e:{c.instructions+=14;NFSU2_TR(0x5dc53e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc541:{NFSU2_TR(0x5dc541);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc544:{NFSU2_TR(0x5dc544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dc546:{NFSU2_TR(0x5dc546);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc54a:{NFSU2_TR(0x5dc54a);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc550:{NFSU2_TR(0x5dc550);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc553:{NFSU2_TR(0x5dc553);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc555:{NFSU2_TR(0x5dc555);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc55b:{NFSU2_TR(0x5dc55b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc55c:{NFSU2_TR(0x5dc55c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc55d:{NFSU2_TR(0x5dc55d);
w4(R+4,u32(0x8357e0ull));
}
B5dc562:{NFSU2_TR(0x5dc562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc568:{NFSU2_TR(0x5dc568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc572:{NFSU2_TR(0x5dc572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc577ull));
TAIL_STATIC(0x491e50u,491);
}
B5dc577:L5dc577:{c.instructions+=3;NFSU2_TR(0x5dc577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc579:{NFSU2_TR(0x5dc579);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5dc57b:{NFSU2_TR(0x5dc57b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc530u);}goto L5dc530;}}
}
B5dc57d:L5dc57d:{c.instructions+=6;NFSU2_TR(0x5dc57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc57e:{NFSU2_TR(0x5dc57e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc57f:{NFSU2_TR(0x5dc57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc580:{NFSU2_TR(0x5dc580);
__builtin_memmove((R+16),(R+20),4);
}
B5dc582:{NFSU2_TR(0x5dc582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc583:{NFSU2_TR(0x5dc583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc590:L5dc590:{c.instructions+=3;NFSU2_TR(0x5dc590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc592:{NFSU2_TR(0x5dc592);
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
B5dc594:{NFSU2_TR(0x5dc594);
if(r1(R+518)){{goto L5dc5be;}}
}
B5dc596:L5dc596:{c.instructions+=1;NFSU2_TR(0x5dc596);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc597:L5dc597:{c.instructions+=12;NFSU2_TR(0x5dc597);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dc599:{NFSU2_TR(0x5dc599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dc59c:{NFSU2_TR(0x5dc59c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dc59e:{NFSU2_TR(0x5dc59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc5a1:{NFSU2_TR(0x5dc5a1);
__builtin_memmove((R+8),gp(0x88ea90),4);
}
B5dc5a7:{NFSU2_TR(0x5dc5a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dc5a9:{NFSU2_TR(0x5dc5a9);
__builtin_memmove(gp(0x88ea90),(R+0),4);
}
B5dc5ae:{NFSU2_TR(0x5dc5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc5b1:{NFSU2_TR(0x5dc5b1);
u8 U[4];
w4(U+0,u32(0x88ea8cull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dc5b7:{NFSU2_TR(0x5dc5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc5b9:{NFSU2_TR(0x5dc5b9);
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
B5dc5bb:{NFSU2_TR(0x5dc5bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc597u);}goto L5dc597;}}
}
B5dc5bd:L5dc5bd:{c.instructions+=1;NFSU2_TR(0x5dc5bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc5be:L5dc5be:{c.instructions+=1;NFSU2_TR(0x5dc5be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc5c0:L5dc5c0:{c.instructions+=6;NFSU2_TR(0x5dc5c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc5c1:{NFSU2_TR(0x5dc5c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc5c2:{NFSU2_TR(0x5dc5c2);
__builtin_memmove((R+28),(R+4),4);
}
B5dc5c4:{NFSU2_TR(0x5dc5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc5c6:{NFSU2_TR(0x5dc5c6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5dc5c8:{NFSU2_TR(0x5dc5c8);
if(r1(R+518)){{goto L5dc5f6;}}
}
B5dc5ca:L5dc5ca:{c.instructions+=1;NFSU2_TR(0x5dc5ca);
__builtin_memmove((R+12),(R+12),4);
}
B5dc5d0:L5dc5d0:{c.instructions+=6;NFSU2_TR(0x5dc5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc5d3:{NFSU2_TR(0x5dc5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc5d5:{NFSU2_TR(0x5dc5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dc5d7:{NFSU2_TR(0x5dc5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc5da:{NFSU2_TR(0x5dc5da);
__builtin_memmove((R+4),(R+24),4);
}
B5dc5dc:{NFSU2_TR(0x5dc5dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc5e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc160u);}goto L5dc160;}
}
B5dc5e1:L5dc5e1:{c.instructions+=4;NFSU2_TR(0x5dc5e1);
__builtin_memmove((R+0),gp(0x883e4c),4);
}
B5dc5e6:{NFSU2_TR(0x5dc5e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc5e7:{NFSU2_TR(0x5dc5e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc5e8:{NFSU2_TR(0x5dc5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc5edull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc5ed:L5dc5ed:{c.instructions+=4;NFSU2_TR(0x5dc5ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc5ef:{NFSU2_TR(0x5dc5ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc5f2:{NFSU2_TR(0x5dc5f2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5dc5f4:{NFSU2_TR(0x5dc5f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc5d0u);}goto L5dc5d0;}}
}
B5dc5f6:L5dc5f6:{c.instructions+=3;NFSU2_TR(0x5dc5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc5f7:{NFSU2_TR(0x5dc5f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc5f8:{NFSU2_TR(0x5dc5f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc600:L5dc600:{c.instructions+=6;NFSU2_TR(0x5dc600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc601:{NFSU2_TR(0x5dc601);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc602:{NFSU2_TR(0x5dc602);
__builtin_memmove((R+28),(R+4),4);
}
B5dc604:{NFSU2_TR(0x5dc604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc606:{NFSU2_TR(0x5dc606);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5dc608:{NFSU2_TR(0x5dc608);
if(r1(R+518)){{goto L5dc636;}}
}
B5dc60a:L5dc60a:{c.instructions+=1;NFSU2_TR(0x5dc60a);
__builtin_memmove((R+12),(R+12),4);
}
B5dc610:L5dc610:{c.instructions+=6;NFSU2_TR(0x5dc610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc613:{NFSU2_TR(0x5dc613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc615:{NFSU2_TR(0x5dc615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dc617:{NFSU2_TR(0x5dc617);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc61a:{NFSU2_TR(0x5dc61a);
__builtin_memmove((R+4),(R+24),4);
}
B5dc61c:{NFSU2_TR(0x5dc61c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc621ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc170u);}goto L5dc170;}
}
B5dc621:L5dc621:{c.instructions+=4;NFSU2_TR(0x5dc621);
__builtin_memmove((R+0),gp(0x883e58),4);
}
B5dc626:{NFSU2_TR(0x5dc626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc627:{NFSU2_TR(0x5dc627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc628:{NFSU2_TR(0x5dc628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc62dull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc62d:L5dc62d:{c.instructions+=4;NFSU2_TR(0x5dc62d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dc62f:{NFSU2_TR(0x5dc62f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc632:{NFSU2_TR(0x5dc632);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5dc634:{NFSU2_TR(0x5dc634);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc610u);}goto L5dc610;}}
}
B5dc636:L5dc636:{c.instructions+=3;NFSU2_TR(0x5dc636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc637:{NFSU2_TR(0x5dc637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc638:{NFSU2_TR(0x5dc638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc640:L5dc640:{c.instructions+=5;NFSU2_TR(0x5dc640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc641:{NFSU2_TR(0x5dc641);
__builtin_memmove((R+24),(R+4),4);
}
B5dc643:{NFSU2_TR(0x5dc643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc645:{NFSU2_TR(0x5dc645);
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
B5dc647:{NFSU2_TR(0x5dc647);
if(r1(R+518)){{goto L5dc66f;}}
}
B5dc649:L5dc649:{c.instructions+=1;NFSU2_TR(0x5dc649);
__builtin_memmove((R+16),(R+16),4);
}
B5dc650:L5dc650:{c.instructions+=8;NFSU2_TR(0x5dc650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dc652:{NFSU2_TR(0x5dc652);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc655:{NFSU2_TR(0x5dc655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dc657:{NFSU2_TR(0x5dc657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc658:{NFSU2_TR(0x5dc658);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc65b:{NFSU2_TR(0x5dc65b);
__builtin_memmove((R+0),gp(0x883e5c),4);
}
B5dc660:{NFSU2_TR(0x5dc660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc661:{NFSU2_TR(0x5dc661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc666ull));
TAIL_STATIC(0x43f920u,43f);
}
B5dc666:L5dc666:{c.instructions+=4;NFSU2_TR(0x5dc666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc668:{NFSU2_TR(0x5dc668);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc66b:{NFSU2_TR(0x5dc66b);
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
B5dc66d:{NFSU2_TR(0x5dc66d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc650u);}goto L5dc650;}}
}
B5dc66f:L5dc66f:{c.instructions+=2;NFSU2_TR(0x5dc66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc670:{NFSU2_TR(0x5dc670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc680:L5dc680:{c.instructions+=13;NFSU2_TR(0x5dc680);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc681:{NFSU2_TR(0x5dc681);
__builtin_memmove((R+20),(R+16),4);
}
B5dc683:{NFSU2_TR(0x5dc683);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dc686:{NFSU2_TR(0x5dc686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5dc68c:{NFSU2_TR(0x5dc68c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc68d:{NFSU2_TR(0x5dc68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dc690:{NFSU2_TR(0x5dc690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc691:{NFSU2_TR(0x5dc691);
__builtin_memmove((R+24),(R+4),4);
}
B5dc693:{NFSU2_TR(0x5dc693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc699:{NFSU2_TR(0x5dc699);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dc69c:{NFSU2_TR(0x5dc69c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc69d:{NFSU2_TR(0x5dc69d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc6a5:{NFSU2_TR(0x5dc6a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dc70a;}}
}
B5dc6a7:L5dc6a7:{c.instructions+=30;NFSU2_TR(0x5dc6a7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6a9:{NFSU2_TR(0x5dc6a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B5dc6ac:{NFSU2_TR(0x5dc6ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5dc6af:{NFSU2_TR(0x5dc6af);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dc6b2:{NFSU2_TR(0x5dc6b2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5dc6b4:{NFSU2_TR(0x5dc6b4);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6b7:{NFSU2_TR(0x5dc6b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc6bb:{NFSU2_TR(0x5dc6bb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dc6be:{NFSU2_TR(0x5dc6be);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6c1:{NFSU2_TR(0x5dc6c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc6c2:{NFSU2_TR(0x5dc6c2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dc6c5:{NFSU2_TR(0x5dc6c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dc6c9:{NFSU2_TR(0x5dc6c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc6ca:{NFSU2_TR(0x5dc6ca);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc6ce:{NFSU2_TR(0x5dc6ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc6d2:{NFSU2_TR(0x5dc6d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc6d4:{NFSU2_TR(0x5dc6d4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc6d8:{NFSU2_TR(0x5dc6d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc6dc:{NFSU2_TR(0x5dc6dc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc6e0:{NFSU2_TR(0x5dc6e0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6e4:{NFSU2_TR(0x5dc6e4);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc6e8:{NFSU2_TR(0x5dc6e8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6ec:{NFSU2_TR(0x5dc6ec);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc6f0:{NFSU2_TR(0x5dc6f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dc6f2:{NFSU2_TR(0x5dc6f2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc6f6:{NFSU2_TR(0x5dc6f6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc6fa:{NFSU2_TR(0x5dc6fa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dc6fc:{NFSU2_TR(0x5dc6fc);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5dc6fe:{NFSU2_TR(0x5dc6fe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc702:{NFSU2_TR(0x5dc702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc707ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5dc707:L5dc707:{c.instructions+=1;NFSU2_TR(0x5dc707);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc70a:L5dc70a:{c.instructions+=4;NFSU2_TR(0x5dc70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc710:{NFSU2_TR(0x5dc710);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5dc712:{NFSU2_TR(0x5dc712);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dc715:{NFSU2_TR(0x5dc715);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dc7b4;}}
}
B5dc71b:L5dc71b:{c.instructions+=18;NFSU2_TR(0x5dc71b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc71f:{NFSU2_TR(0x5dc71f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc722:{NFSU2_TR(0x5dc722);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc726:{NFSU2_TR(0x5dc726);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc729:{NFSU2_TR(0x5dc729);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dc72b:{NFSU2_TR(0x5dc72b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc72f:{NFSU2_TR(0x5dc72f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc732:{NFSU2_TR(0x5dc732);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dc734:{NFSU2_TR(0x5dc734);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5dc73a:{NFSU2_TR(0x5dc73a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc73e:{NFSU2_TR(0x5dc73e);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dc741:{NFSU2_TR(0x5dc741);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc745:{NFSU2_TR(0x5dc745);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc749:{NFSU2_TR(0x5dc749);
{u32 ea_=u32(u32(8013360u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5dc74f:{NFSU2_TR(0x5dc74f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc753:{NFSU2_TR(0x5dc753);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dc755:{NFSU2_TR(0x5dc755);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dc758:{NFSU2_TR(0x5dc758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc777;}}
}
B5dc75a:L5dc75a:{c.instructions+=4;NFSU2_TR(0x5dc75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc75d:{NFSU2_TR(0x5dc75d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dc75f:{NFSU2_TR(0x5dc75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc761:{NFSU2_TR(0x5dc761);
if(r1(R+518)){{goto L5dc9b3;}}
}
B5dc767:L5dc767:{c.instructions+=9;NFSU2_TR(0x5dc767);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dc769:{NFSU2_TR(0x5dc769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc76c:{NFSU2_TR(0x5dc76c);
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
B5dc76e:{NFSU2_TR(0x5dc76e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc76f:{NFSU2_TR(0x5dc76f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc770:{NFSU2_TR(0x5dc770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc771:{NFSU2_TR(0x5dc771);
__builtin_memmove((R+16),(R+20),4);
}
B5dc773:{NFSU2_TR(0x5dc773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc774:{NFSU2_TR(0x5dc774);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc777:L5dc777:{c.instructions+=5;NFSU2_TR(0x5dc777);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc77b:{NFSU2_TR(0x5dc77b);
{u32 ea_=u32(u32(8013352u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dc781:{NFSU2_TR(0x5dc781);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dc783:{NFSU2_TR(0x5dc783);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dc786:{NFSU2_TR(0x5dc786);
if(r1(R+514)){{goto L5dc78d;}}
}
B5dc788:L5dc788:{c.instructions+=1;NFSU2_TR(0x5dc788);
w4(R+8,u32(0x1ull));
}
B5dc78d:L5dc78d:{c.instructions+=4;NFSU2_TR(0x5dc78d);
{u32 ea_=u32(u32(8013356u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dc793:{NFSU2_TR(0x5dc793);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dc795:{NFSU2_TR(0x5dc795);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dc798:{NFSU2_TR(0x5dc798);
if(r1(R+514)){{goto L5dc79f;}}
}
B5dc79a:L5dc79a:{c.instructions+=1;NFSU2_TR(0x5dc79a);
w4(R+8,u32(0x1ull));
}
B5dc79f:L5dc79f:{c.instructions+=5;NFSU2_TR(0x5dc79f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc7a3:{NFSU2_TR(0x5dc7a3);
{u32 ea_=u32(u32(8013348u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dc7a9:{NFSU2_TR(0x5dc7a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dc7ab:{NFSU2_TR(0x5dc7ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dc7ae:{NFSU2_TR(0x5dc7ae);
if(r1(R+518)){{goto L5dc7b4;}}
}
B5dc7b0:L5dc7b0:{c.instructions+=2;NFSU2_TR(0x5dc7b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc7b2:{NFSU2_TR(0x5dc7b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc7c7;}}
}
B5dc7b4:L5dc7b4:{c.instructions+=2;NFSU2_TR(0x5dc7b4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dc7b7:{NFSU2_TR(0x5dc7b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dc7d8;}}
}
B5dc7b9:L5dc7b9:{c.instructions+=7;NFSU2_TR(0x5dc7b9);
w4(R+0,u32(0x1ull));
}
B5dc7be:{NFSU2_TR(0x5dc7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc7bf:{NFSU2_TR(0x5dc7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc7c0:{NFSU2_TR(0x5dc7c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc7c1:{NFSU2_TR(0x5dc7c1);
__builtin_memmove((R+16),(R+20),4);
}
B5dc7c3:{NFSU2_TR(0x5dc7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc7c4:{NFSU2_TR(0x5dc7c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc7c7:L5dc7c7:{c.instructions+=6;NFSU2_TR(0x5dc7c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc7ca:{NFSU2_TR(0x5dc7ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc7ce:{NFSU2_TR(0x5dc7ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5dc7d1:{NFSU2_TR(0x5dc7d1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B5dc7d3:{NFSU2_TR(0x5dc7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc7d6:{NFSU2_TR(0x5dc7d6);
{goto L5dc80a;}
}
B5dc7d8:L5dc7d8:{c.instructions+=7;NFSU2_TR(0x5dc7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc7db:{NFSU2_TR(0x5dc7db);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5dc7de:{NFSU2_TR(0x5dc7de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dc7e1:{NFSU2_TR(0x5dc7e1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B5dc7e3:{NFSU2_TR(0x5dc7e3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dc7e6:{NFSU2_TR(0x5dc7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc7ec:{NFSU2_TR(0x5dc7ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dc803;}}
}
B5dc7ee:L5dc7ee:{c.instructions+=6;NFSU2_TR(0x5dc7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc7f2:{NFSU2_TR(0x5dc7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc7f6:{NFSU2_TR(0x5dc7f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc7fa:{NFSU2_TR(0x5dc7fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc7fd:{NFSU2_TR(0x5dc7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc800:{NFSU2_TR(0x5dc800);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc803:L5dc803:{c.instructions+=2;NFSU2_TR(0x5dc803);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc807:{NFSU2_TR(0x5dc807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc80a:L5dc80a:{c.instructions+=5;NFSU2_TR(0x5dc80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc80d:{NFSU2_TR(0x5dc80d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc80e:{NFSU2_TR(0x5dc80e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc80f:{NFSU2_TR(0x5dc80f);
__builtin_memmove((R+4),(R+28),4);
}
B5dc811:{NFSU2_TR(0x5dc811);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc816ull));
TAIL_STATIC(0x5d2f50u,5d2);
}
B5dc816:L5dc816:{c.instructions+=3;NFSU2_TR(0x5dc816);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc819:{NFSU2_TR(0x5dc819);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc81f:{NFSU2_TR(0x5dc81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc824ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5dc824:L5dc824:{c.instructions+=10;NFSU2_TR(0x5dc824);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc828:{NFSU2_TR(0x5dc828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc82b:{NFSU2_TR(0x5dc82b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc82c:{NFSU2_TR(0x5dc82c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dc82f:{NFSU2_TR(0x5dc82f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc830:{NFSU2_TR(0x5dc830);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc833:{NFSU2_TR(0x5dc833);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc836:{NFSU2_TR(0x5dc836);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc837:{NFSU2_TR(0x5dc837);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc838:{NFSU2_TR(0x5dc838);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc83dull));
TAIL_STATIC(0x43d610u,43d);
}
B5dc83d:L5dc83d:{c.instructions+=8;NFSU2_TR(0x5dc83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc840:{NFSU2_TR(0x5dc840);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc841:{NFSU2_TR(0x5dc841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc844:{NFSU2_TR(0x5dc844);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc845:{NFSU2_TR(0x5dc845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc846:{NFSU2_TR(0x5dc846);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5dc849:{NFSU2_TR(0x5dc849);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc84a:{NFSU2_TR(0x5dc84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc84full));
TAIL_STATIC(0x43d6e0u,43d);
}
B5dc84f:L5dc84f:{c.instructions+=29;NFSU2_TR(0x5dc84f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc852:{NFSU2_TR(0x5dc852);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc855:{NFSU2_TR(0x5dc855);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc858:{NFSU2_TR(0x5dc858);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc85b:{NFSU2_TR(0x5dc85b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc85f:{NFSU2_TR(0x5dc85f);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc861:{NFSU2_TR(0x5dc861);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dc864:{NFSU2_TR(0x5dc864);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dc866:{NFSU2_TR(0x5dc866);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5dc869:{NFSU2_TR(0x5dc869);
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
B5dc86b:{NFSU2_TR(0x5dc86b);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc871:{NFSU2_TR(0x5dc871);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5dc873:{NFSU2_TR(0x5dc873);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc879:{NFSU2_TR(0x5dc879);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc87d:{NFSU2_TR(0x5dc87d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5dc87f:{NFSU2_TR(0x5dc87f);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc885:{NFSU2_TR(0x5dc885);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dc887:{NFSU2_TR(0x5dc887);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dc889:{NFSU2_TR(0x5dc889);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc88f:{NFSU2_TR(0x5dc88f);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc895:{NFSU2_TR(0x5dc895);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc89b:{NFSU2_TR(0x5dc89b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc8a1:{NFSU2_TR(0x5dc8a1);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc8a7:{NFSU2_TR(0x5dc8a7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc8a9:{NFSU2_TR(0x5dc8a9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc8af:{NFSU2_TR(0x5dc8af);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc8b5:{NFSU2_TR(0x5dc8b5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dc8bb:{NFSU2_TR(0x5dc8bb);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc8c1:{NFSU2_TR(0x5dc8c1);
if(r1(R+518)){{goto L5dc9b3;}}
}
B5dc8c7:L5dc8c7:{c.instructions+=32;NFSU2_TR(0x5dc8c7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc8cb:{NFSU2_TR(0x5dc8cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc8cf:{NFSU2_TR(0x5dc8cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dc8d3:{NFSU2_TR(0x5dc8d3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dc8d5:{NFSU2_TR(0x5dc8d5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc8d9:{NFSU2_TR(0x5dc8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dc8dd:{NFSU2_TR(0x5dc8dd);
__builtin_memmove((R+28),gp(0x88ea68),4);
}
B5dc8e3:{NFSU2_TR(0x5dc8e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dc8e5:{NFSU2_TR(0x5dc8e5);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc8e9:{NFSU2_TR(0x5dc8e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc8ed:{NFSU2_TR(0x5dc8ed);
__builtin_memmove((R+4),(R+0),4);
}
B5dc8ef:{NFSU2_TR(0x5dc8ef);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc8f3:{NFSU2_TR(0x5dc8f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc8f7:{NFSU2_TR(0x5dc8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc8fb:{NFSU2_TR(0x5dc8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc8fe:{NFSU2_TR(0x5dc8fe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc901:{NFSU2_TR(0x5dc901);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc905:{NFSU2_TR(0x5dc905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dc907:{NFSU2_TR(0x5dc907);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc90e:{NFSU2_TR(0x5dc90e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dc911:{NFSU2_TR(0x5dc911);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc915:{NFSU2_TR(0x5dc915);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dc91c:{NFSU2_TR(0x5dc91c);
w4(R+4,u32(0x88ea68ull));
}
B5dc921:{NFSU2_TR(0x5dc921);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc929:{NFSU2_TR(0x5dc929);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc931:{NFSU2_TR(0x5dc931);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc939:{NFSU2_TR(0x5dc939);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc941:{NFSU2_TR(0x5dc941);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc949:{NFSU2_TR(0x5dc949);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc951:{NFSU2_TR(0x5dc951);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dc958:{NFSU2_TR(0x5dc958);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc963:{NFSU2_TR(0x5dc963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc968ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dc968:L5dc968:{c.instructions+=3;NFSU2_TR(0x5dc968);
__builtin_memmove((R+12),(R+0),4);
}
B5dc96a:{NFSU2_TR(0x5dc96a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc96c:{NFSU2_TR(0x5dc96c);
if(r1(R+518)){{goto L5dc9b3;}}
}
B5dc96e:L5dc96e:{c.instructions+=1;NFSU2_TR(0x5dc96e);
__builtin_memmove((R+28),(R+28),4);
}
B5dc970:L5dc970:{c.instructions+=2;NFSU2_TR(0x5dc970);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc971:{NFSU2_TR(0x5dc971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc976ull));
TAIL_STATIC(0x48b830u,48b);
}
B5dc976:L5dc976:{c.instructions+=4;NFSU2_TR(0x5dc976);
__builtin_memmove((R+24),(R+0),4);
}
B5dc978:{NFSU2_TR(0x5dc978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dc97b:{NFSU2_TR(0x5dc97b);
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
B5dc97d:{NFSU2_TR(0x5dc97d);
if(r1(R+518)){{goto L5dc9ad;}}
}
B5dc97f:L5dc97f:{c.instructions+=6;NFSU2_TR(0x5dc97f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dc983:{NFSU2_TR(0x5dc983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc984:{NFSU2_TR(0x5dc984);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dc987:{NFSU2_TR(0x5dc987);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc988:{NFSU2_TR(0x5dc988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc98f:{NFSU2_TR(0x5dc98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc994ull));
TAIL_STATIC(0x4012b0u,401);
}
B5dc994:L5dc994:{c.instructions+=4;NFSU2_TR(0x5dc994);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dc997:{NFSU2_TR(0x5dc997);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc998:{NFSU2_TR(0x5dc998);
w4(R+4,u32(0x8357e0ull));
}
B5dc99d:{NFSU2_TR(0x5dc99d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc9a2ull));
TAIL_STATIC(0x48bc50u,48b);
}
B5dc9a2:L5dc9a2:{c.instructions+=3;NFSU2_TR(0x5dc9a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc9a3:{NFSU2_TR(0x5dc9a3);
w4(R+4,u32(0x88ff98ull));
}
B5dc9a8:{NFSU2_TR(0x5dc9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dc9adull));
TAIL_STATIC(0x4cbab0u,4cb);
}
B5dc9ad:L5dc9ad:{c.instructions+=3;NFSU2_TR(0x5dc9ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dc9af:{NFSU2_TR(0x5dc9af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dc9b1:{NFSU2_TR(0x5dc9b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc970u);}goto L5dc970;}}
}
B5dc9b3:L5dc9b3:{c.instructions+=7;NFSU2_TR(0x5dc9b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dc9b4:{NFSU2_TR(0x5dc9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dc9b5:{NFSU2_TR(0x5dc9b5);
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
B5dc9b7:{NFSU2_TR(0x5dc9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc9b8:{NFSU2_TR(0x5dc9b8);
__builtin_memmove((R+16),(R+20),4);
}
B5dc9ba:{NFSU2_TR(0x5dc9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dc9bb:{NFSU2_TR(0x5dc9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dc9c0:L5dc9c0:{c.instructions+=3;NFSU2_TR(0x5dc9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dc9c3:{NFSU2_TR(0x5dc9c3);
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
B5dc9c5:{NFSU2_TR(0x5dc9c5);
if(r1(R+518)){{goto L5dca28;}}
}
B5dc9c7:L5dc9c7:{c.instructions+=4;NFSU2_TR(0x5dc9c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc9c8:{NFSU2_TR(0x5dc9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dc9ce:{NFSU2_TR(0x5dc9ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dc9d0:{NFSU2_TR(0x5dc9d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dc9f1;}}
}
B5dc9d2:L5dc9d2:{c.instructions+=3;NFSU2_TR(0x5dc9d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5dc9d8:{NFSU2_TR(0x5dc9d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dc9d9:{NFSU2_TR(0x5dc9d9);
__builtin_memmove((R+16),(R+16),4);
}
B5dc9e0:L5dc9e0:{c.instructions+=7;NFSU2_TR(0x5dc9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dc9e2:{NFSU2_TR(0x5dc9e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dc9e5:{NFSU2_TR(0x5dc9e5);
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x1ull))));
}
B5dc9e7:{NFSU2_TR(0x5dc9e7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5dc9ea:{NFSU2_TR(0x5dc9ea);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5dc9eb:{NFSU2_TR(0x5dc9eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dc9ee:{NFSU2_TR(0x5dc9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc9e0u);}goto L5dc9e0;}}
}
B5dc9f0:L5dc9f0:{c.instructions+=1;NFSU2_TR(0x5dc9f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dc9f1:L5dc9f1:{c.instructions+=2;NFSU2_TR(0x5dc9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2bcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dc9fb:{NFSU2_TR(0x5dc9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dca00ull));
TAIL_STATIC(0x5d80a0u,5d8);
}
B5dca00:L5dca00:{c.instructions+=11;NFSU2_TR(0x5dca00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dca02:{NFSU2_TR(0x5dca02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dca05:{NFSU2_TR(0x5dca05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dca07:{NFSU2_TR(0x5dca07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dca0a:{NFSU2_TR(0x5dca0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dca11:{NFSU2_TR(0x5dca11);
__builtin_memmove((R+0),gp(0x88f74c),4);
}
B5dca16:{NFSU2_TR(0x5dca16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5dca18:{NFSU2_TR(0x5dca18);
__builtin_memmove(gp(0x88f74c),(R+4),4);
}
B5dca1e:{NFSU2_TR(0x5dca1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dca21:{NFSU2_TR(0x5dca21);
u8 U[4];
w4(U+0,u32(0x88f748ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5dca27:{NFSU2_TR(0x5dca27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dca28:L5dca28:{c.instructions+=1;NFSU2_TR(0x5dca28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dca30:L5dca30:{c.instructions+=7;NFSU2_TR(0x5dca30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca31:{NFSU2_TR(0x5dca31);
__builtin_memmove((R+24),(R+4),4);
}
B5dca33:{NFSU2_TR(0x5dca33);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dca36:{NFSU2_TR(0x5dca36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca37:{NFSU2_TR(0x5dca37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dca3a:{NFSU2_TR(0x5dca3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca3b:{NFSU2_TR(0x5dca3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dca40ull));
TAIL_STATIC(0x43d220u,43d);
}
B5dca40:L5dca40:{c.instructions+=3;NFSU2_TR(0x5dca40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dca43:{NFSU2_TR(0x5dca43);
__builtin_memmove((R+4),(R+24),4);
}
B5dca45:{NFSU2_TR(0x5dca45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dca4aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dc9c0u);}goto L5dc9c0;}
}
B5dca4a:L5dca4a:{c.instructions+=5;NFSU2_TR(0x5dca4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5dca4d:{NFSU2_TR(0x5dca4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca4e:{NFSU2_TR(0x5dca4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dca51:{NFSU2_TR(0x5dca51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca52:{NFSU2_TR(0x5dca52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dca57ull));
TAIL_STATIC(0x43d220u,43d);
}
B5dca57:L5dca57:{c.instructions+=8;NFSU2_TR(0x5dca57);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dca59:{NFSU2_TR(0x5dca59);
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
B5dca5c:{NFSU2_TR(0x5dca5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dca5f:{NFSU2_TR(0x5dca5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dca62:{NFSU2_TR(0x5dca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dca65:{NFSU2_TR(0x5dca65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xc479c000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dca6c:{NFSU2_TR(0x5dca6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dca6d:{NFSU2_TR(0x5dca6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dca70:L5dca70:{c.instructions+=6;NFSU2_TR(0x5dca70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca71:{NFSU2_TR(0x5dca71);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dca74:{NFSU2_TR(0x5dca74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dca76:{NFSU2_TR(0x5dca76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dca78:{NFSU2_TR(0x5dca78);
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
B5dca7a:{NFSU2_TR(0x5dca7a);
if(r1(R+518)){{goto L5dcac8;}}
}
B5dca7c:L5dca7c:{c.instructions+=4;NFSU2_TR(0x5dca7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca7d:{NFSU2_TR(0x5dca7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dca81:{NFSU2_TR(0x5dca81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca82:{NFSU2_TR(0x5dca82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dca83:L5dca83:{c.instructions+=2;NFSU2_TR(0x5dca83);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5dca85:{NFSU2_TR(0x5dca85);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dcac5;}}
}
B5dca87:L5dca87:{c.instructions+=4;NFSU2_TR(0x5dca87);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dca8a:{NFSU2_TR(0x5dca8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dca8c:{NFSU2_TR(0x5dca8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dca8e:{NFSU2_TR(0x5dca8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcabf;}}
}
B5dca90:L5dca90:{c.instructions+=3;NFSU2_TR(0x5dca90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dca93:{NFSU2_TR(0x5dca93);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dca95:{NFSU2_TR(0x5dca95);
if(r1(R+518)){{goto L5dca9d;}}
}
B5dca97:L5dca97:{c.instructions+=1;NFSU2_TR(0x5dca97);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B5dca9d:L5dca9d:{c.instructions+=10;NFSU2_TR(0x5dca9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dca9f:{NFSU2_TR(0x5dca9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dcaa2:{NFSU2_TR(0x5dcaa2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dcaa4:{NFSU2_TR(0x5dcaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcaa7:{NFSU2_TR(0x5dcaa7);
__builtin_memmove((R+8),gp(0x88ea90),4);
}
B5dcaad:{NFSU2_TR(0x5dcaad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5dcaaf:{NFSU2_TR(0x5dcaaf);
__builtin_memmove(gp(0x88ea90),(R+4),4);
}
B5dcab5:{NFSU2_TR(0x5dcab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcab8:{NFSU2_TR(0x5dcab8);
u8 U[4];
w4(U+0,u32(0x88ea8cull));
s4(u32(r4(R+4)),r4(U+0));
}
B5dcabe:{NFSU2_TR(0x5dcabe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dcabf:L5dcabf:{c.instructions+=3;NFSU2_TR(0x5dcabf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5dcac1:{NFSU2_TR(0x5dcac1);
__builtin_memmove((R+4),(R+28),4);
}
B5dcac3:{NFSU2_TR(0x5dcac3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dca83u);}goto L5dca83;}}
}
B5dcac5:L5dcac5:{c.instructions+=3;NFSU2_TR(0x5dcac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dcac6:{NFSU2_TR(0x5dcac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dcac7:{NFSU2_TR(0x5dcac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dcac8:L5dcac8:{c.instructions+=2;NFSU2_TR(0x5dcac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dcac9:{NFSU2_TR(0x5dcac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcad0:L5dcad0:{c.instructions+=10;NFSU2_TR(0x5dcad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5dcad3:{NFSU2_TR(0x5dcad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcad4:{NFSU2_TR(0x5dcad4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcad5:{NFSU2_TR(0x5dcad5);
__builtin_memmove((R+20),(R+4),4);
}
B5dcad7:{NFSU2_TR(0x5dcad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dcada:{NFSU2_TR(0x5dcada);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcadb:{NFSU2_TR(0x5dcadb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dcadd:{NFSU2_TR(0x5dcadd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dcadf:{NFSU2_TR(0x5dcadf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcae0:{NFSU2_TR(0x5dcae0);
if(r1(R+518)){{goto L5dcb82;}}
}
B5dcae6:L5dcae6:{c.instructions+=3;NFSU2_TR(0x5dcae6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcae7:{NFSU2_TR(0x5dcae7);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dcaeb:{NFSU2_TR(0x5dcaeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcaf0ull));
TAIL_STATIC(0x43be80u,43b);
}
B5dcaf0:L5dcaf0:{c.instructions+=5;NFSU2_TR(0x5dcaf0);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5dcaf2:{NFSU2_TR(0x5dcaf2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dcaf4:{NFSU2_TR(0x5dcaf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcaf8:{NFSU2_TR(0x5dcaf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcafc:{NFSU2_TR(0x5dcafc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dcb82;}}
}
B5dcb02:L5dcb02:{c.instructions+=6;NFSU2_TR(0x5dcb02);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5dcb03:{NFSU2_TR(0x5dcb03);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5dcb05:{NFSU2_TR(0x5dcb05);
__builtin_memmove((R+8),(R+0),4);
}
B5dcb07:{NFSU2_TR(0x5dcb07);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5dcb09:{NFSU2_TR(0x5dcb09);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb0d:{NFSU2_TR(0x5dcb0d);
{goto L5dcb13;}
}
B5dcb0f:L5dcb0f:{c.instructions+=1;NFSU2_TR(0x5dcb0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcb13:L5dcb13:{c.instructions+=7;NFSU2_TR(0x5dcb13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dcb16:{NFSU2_TR(0x5dcb16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dcb18:{NFSU2_TR(0x5dcb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcb1b:{NFSU2_TR(0x5dcb1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dcb1d:{NFSU2_TR(0x5dcb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb20:{NFSU2_TR(0x5dcb20);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5dcb24:{NFSU2_TR(0x5dcb24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dcb3a;}}
}
B5dcb26:L5dcb26:{c.instructions+=3;NFSU2_TR(0x5dcb26);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcb2a:{NFSU2_TR(0x5dcb2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcb2c:{NFSU2_TR(0x5dcb2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcb33;}}
}
B5dcb2e:L5dcb2e:{c.instructions+=1;NFSU2_TR(0x5dcb2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5dcb33:L5dcb33:{c.instructions+=2;NFSU2_TR(0x5dcb33);
__builtin_memmove((R+4),(R+24),4);
}
B5dcb35:{NFSU2_TR(0x5dcb35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcb3aull));
TAIL_STATIC(0x5d82c0u,5d8);
}
B5dcb3a:L5dcb3a:{c.instructions+=5;NFSU2_TR(0x5dcb3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dcb3e:{NFSU2_TR(0x5dcb3e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B5dcb40:{NFSU2_TR(0x5dcb40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcb41:{NFSU2_TR(0x5dcb41);
__builtin_memmove((R+4),(R+24),4);
}
B5dcb43:{NFSU2_TR(0x5dcb43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcb48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dca70u);}goto L5dca70;}
}
B5dcb48:L5dcb48:{c.instructions+=2;NFSU2_TR(0x5dcb48);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dcb4a:{NFSU2_TR(0x5dcb4a);
if(r1(R+518)){{goto L5dcb5b;}}
}
B5dcb4c:L5dcb4c:{c.instructions+=6;NFSU2_TR(0x5dcb4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcb4f:{NFSU2_TR(0x5dcb4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dcb51:{NFSU2_TR(0x5dcb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb54:{NFSU2_TR(0x5dcb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb57:{NFSU2_TR(0x5dcb57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dcb59:{NFSU2_TR(0x5dcb59);
{goto L5dcb69;}
}
B5dcb5b:L5dcb5b:{c.instructions+=5;NFSU2_TR(0x5dcb5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dcb5e:{NFSU2_TR(0x5dcb5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5dcb61:{NFSU2_TR(0x5dcb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb64:{NFSU2_TR(0x5dcb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb67:{NFSU2_TR(0x5dcb67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dcb69:L5dcb69:{c.instructions+=3;NFSU2_TR(0x5dcb69);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B5dcb6b:{NFSU2_TR(0x5dcb6b);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5dcb6f:{NFSU2_TR(0x5dcb6f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dcb82;}}
}
B5dcb71:L5dcb71:{c.instructions+=6;NFSU2_TR(0x5dcb71);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcb75:{NFSU2_TR(0x5dcb75);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcb79:{NFSU2_TR(0x5dcb79);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dcb7a:{NFSU2_TR(0x5dcb7a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcb7c:{NFSU2_TR(0x5dcb7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcb80:{NFSU2_TR(0x5dcb80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dcb0fu);}goto L5dcb0f;}}
}
B5dcb82:L5dcb82:{c.instructions+=7;NFSU2_TR(0x5dcb82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dcb83:{NFSU2_TR(0x5dcb83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dcb84:{NFSU2_TR(0x5dcb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dcb85:{NFSU2_TR(0x5dcb85);
__builtin_memmove((R+0),(R+12),4);
}
B5dcb87:{NFSU2_TR(0x5dcb87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dcb88:{NFSU2_TR(0x5dcb88);
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
B5dcb8b:{NFSU2_TR(0x5dcb8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcb90:L5dcb90:{c.instructions+=4;NFSU2_TR(0x5dcb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcb94:{NFSU2_TR(0x5dcb94);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5dcb96:{NFSU2_TR(0x5dcb96);
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcb99:{NFSU2_TR(0x5dcb99);
if(r1(R+518)){{goto L5dcbc0;}}
}
B5dcb9b:L5dcb9b:{c.instructions+=2;NFSU2_TR(0x5dcb9b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcb9c:{NFSU2_TR(0x5dcb9c);
if(r1(R+518)){{goto L5dcbae;}}
}
B5dcb9e:L5dcb9e:{c.instructions+=2;NFSU2_TR(0x5dcb9e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dcb9f:{NFSU2_TR(0x5dcb9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcbd7;}}
}
B5dcba1:L5dcba1:{c.instructions+=5;NFSU2_TR(0x5dcba1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcba4:{NFSU2_TR(0x5dcba4);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5dcba6:{NFSU2_TR(0x5dcba6);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x7ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcba8:{NFSU2_TR(0x5dcba8);
__builtin_memmove((R+0),(R+518),1);
}
B5dcbab:{NFSU2_TR(0x5dcbab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcbae:L5dcbae:{c.instructions+=6;NFSU2_TR(0x5dcbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcbb1:{NFSU2_TR(0x5dcbb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dcbb4:{NFSU2_TR(0x5dcbb4);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dcbb7:{NFSU2_TR(0x5dcbb7);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x7ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcbba:{NFSU2_TR(0x5dcbba);
__builtin_memmove((R+0),(R+518),1);
}
B5dcbbd:{NFSU2_TR(0x5dcbbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcbc0:L5dcbc0:{c.instructions+=4;NFSU2_TR(0x5dcbc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dcbc3:{NFSU2_TR(0x5dcbc3);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dcbc6:{NFSU2_TR(0x5dcbc6);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x7ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x7ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x7ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcbc9:{NFSU2_TR(0x5dcbc9);
if(r1(R+518)){{goto L5dcbd5;}}
}
B5dcbcb:L5dcbcb:{c.instructions+=2;NFSU2_TR(0x5dcbcb);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x8ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x8ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcbce:{NFSU2_TR(0x5dcbce);
if(r1(R+518)){{goto L5dcbd5;}}
}
B5dcbd0:L5dcbd0:{c.instructions+=2;NFSU2_TR(0x5dcbd0);
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
B5dcbd2:{NFSU2_TR(0x5dcbd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcbd5:L5dcbd5:{c.instructions+=1;NFSU2_TR(0x5dcbd5);
w1(R+0,u8(0x1ull));
}
B5dcbd7:L5dcbd7:{c.instructions+=1;NFSU2_TR(0x5dcbd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcbe0:L5dcbe0:{c.instructions+=4;NFSU2_TR(0x5dcbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcbe4:{NFSU2_TR(0x5dcbe4);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5dcbe6:{NFSU2_TR(0x5dcbe6);
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcbe9:{NFSU2_TR(0x5dcbe9);
if(r1(R+518)){{goto L5dcc19;}}
}
B5dcbeb:L5dcbeb:{c.instructions+=2;NFSU2_TR(0x5dcbeb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcbec:{NFSU2_TR(0x5dcbec);
if(r1(R+518)){{goto L5dcc09;}}
}
B5dcbee:L5dcbee:{c.instructions+=2;NFSU2_TR(0x5dcbee);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dcbef:{NFSU2_TR(0x5dcbef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcc25;}}
}
B5dcbf1:L5dcbf1:{c.instructions+=4;NFSU2_TR(0x5dcbf1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dcbf4:{NFSU2_TR(0x5dcbf4);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dcbf7:{NFSU2_TR(0x5dcbf7);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcbfa:{NFSU2_TR(0x5dcbfa);
if(r1(R+518)){{goto L5dcc04;}}
}
B5dcbfc:L5dcbfc:{c.instructions+=2;NFSU2_TR(0x5dcbfc);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x8ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x8ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcbff:{NFSU2_TR(0x5dcbff);
if(r1(R+518)){{goto L5dcc04;}}
}
B5dcc01:L5dcc01:{c.instructions+=1;NFSU2_TR(0x5dcc01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc04:L5dcc04:{c.instructions+=2;NFSU2_TR(0x5dcc04);
w1(R+0,u8(0x1ull));
}
B5dcc06:{NFSU2_TR(0x5dcc06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc09:L5dcc09:{c.instructions+=6;NFSU2_TR(0x5dcc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcc0c:{NFSU2_TR(0x5dcc0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dcc0f:{NFSU2_TR(0x5dcc0f);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5dcc11:{NFSU2_TR(0x5dcc11);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcc13:{NFSU2_TR(0x5dcc13);
__builtin_memmove((R+0),(R+518),1);
}
B5dcc16:{NFSU2_TR(0x5dcc16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc19:L5dcc19:{c.instructions+=4;NFSU2_TR(0x5dcc19);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dcc1c:{NFSU2_TR(0x5dcc1c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dcc1f:{NFSU2_TR(0x5dcc1f);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcc22:{NFSU2_TR(0x5dcc22);
__builtin_memmove((R+0),(R+518),1);
}
B5dcc25:L5dcc25:{c.instructions+=1;NFSU2_TR(0x5dcc25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc30:L5dcc30:{c.instructions+=4;NFSU2_TR(0x5dcc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcc34:{NFSU2_TR(0x5dcc34);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5dcc36:{NFSU2_TR(0x5dcc36);
w1(R+512,u8((r4(R+8))<(u32(0x0ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcc39:{NFSU2_TR(0x5dcc39);
if(r1(R+518)){{goto L5dcc60;}}
}
B5dcc3b:L5dcc3b:{c.instructions+=2;NFSU2_TR(0x5dcc3b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dcc3c:{NFSU2_TR(0x5dcc3c);
if(r1(R+518)){{goto L5dcc58;}}
}
B5dcc3e:L5dcc3e:{c.instructions+=2;NFSU2_TR(0x5dcc3e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dcc3f:{NFSU2_TR(0x5dcc3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcc74;}}
}
B5dcc41:L5dcc41:{c.instructions+=2;NFSU2_TR(0x5dcc41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dcc43:{NFSU2_TR(0x5dcc43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcc46:L5dcc46:{c.instructions+=3;NFSU2_TR(0x5dcc46);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5dcc49:{NFSU2_TR(0x5dcc49);
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
B5dcc4c:{NFSU2_TR(0x5dcc4c);
if(r1(R+518)){{goto L5dcc72;}}
}
B5dcc4e:L5dcc4e:{c.instructions+=2;NFSU2_TR(0x5dcc4e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dcc51:{NFSU2_TR(0x5dcc51);
if(r1(R+518)){{goto L5dcc72;}}
}
B5dcc53:L5dcc53:{c.instructions+=2;NFSU2_TR(0x5dcc53);
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
B5dcc55:{NFSU2_TR(0x5dcc55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc58:L5dcc58:{c.instructions+=3;NFSU2_TR(0x5dcc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcc5b:{NFSU2_TR(0x5dcc5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dcc5e:{NFSU2_TR(0x5dcc5e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dcc46u);}goto L5dcc46;}
}
B5dcc60:L5dcc60:{c.instructions+=5;NFSU2_TR(0x5dcc60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dcc62:{NFSU2_TR(0x5dcc62);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcc65:{NFSU2_TR(0x5dcc65);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5dcc68:{NFSU2_TR(0x5dcc68);
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
B5dcc6b:{NFSU2_TR(0x5dcc6b);
if(r1(R+518)){{goto L5dcc72;}}
}
B5dcc6d:L5dcc6d:{c.instructions+=2;NFSU2_TR(0x5dcc6d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dcc70:{NFSU2_TR(0x5dcc70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dcc53u);}goto L5dcc53;}}
}
B5dcc72:L5dcc72:{c.instructions+=1;NFSU2_TR(0x5dcc72);
w1(R+0,u8(0x1ull));
}
B5dcc74:L5dcc74:{c.instructions+=1;NFSU2_TR(0x5dcc74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dcc80:L5dcc80:{c.instructions+=3;NFSU2_TR(0x5dcc80);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B5dcc85:{NFSU2_TR(0x5dcc85);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcc87:{NFSU2_TR(0x5dcc87);
if(r1(R+518)){{goto L5dccbb;}}
}
B5dcc89:L5dcc89:{c.instructions+=2;NFSU2_TR(0x5dcc89);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dcc8b:{NFSU2_TR(0x5dcc8b);
if(r1(R+518)){{goto L5dcc9e;}}
}
B5dcc8d:L5dcc8d:{c.instructions+=4;NFSU2_TR(0x5dcc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcc90:{NFSU2_TR(0x5dcc90);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5dcc95:{NFSU2_TR(0x5dcc95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dcc9c:{NFSU2_TR(0x5dcc9c);
{goto L5dcca0;}
}
B5dcc9e:L5dcc9e:{c.instructions+=1;NFSU2_TR(0x5dcc9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dcca0:L5dcca0:{c.instructions+=4;NFSU2_TR(0x5dcca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcca3:{NFSU2_TR(0x5dcca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dcca6:{NFSU2_TR(0x5dcca6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcca9:{NFSU2_TR(0x5dcca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dccbb;}}
}
B5dccab:L5dccab:{c.instructions+=4;NFSU2_TR(0x5dccab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dccae:{NFSU2_TR(0x5dccae);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dccb1:{NFSU2_TR(0x5dccb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dccb3:{NFSU2_TR(0x5dccb3);
if(r1(R+518)){{goto L5dccbb;}}
}
B5dccb5:L5dccb5:{c.instructions+=2;NFSU2_TR(0x5dccb5);
w4(R+0,u32(0x1ull));
}
B5dccba:{NFSU2_TR(0x5dccba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dccbb:L5dccbb:{c.instructions+=2;NFSU2_TR(0x5dccbb);
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
B5dccbd:{NFSU2_TR(0x5dccbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dccc0:L5dccc0:{c.instructions+=18;NFSU2_TR(0x5dccc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dccc1:{NFSU2_TR(0x5dccc1);
__builtin_memmove((R+20),(R+16),4);
}
B5dccc3:{NFSU2_TR(0x5dccc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dccc6:{NFSU2_TR(0x5dccc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B5dccc9:{NFSU2_TR(0x5dccc9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dccca:{NFSU2_TR(0x5dccca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcccb:{NFSU2_TR(0x5dcccb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcccc:{NFSU2_TR(0x5dcccc);
__builtin_memmove((R+28),(R+4),4);
}
B5dccce:{NFSU2_TR(0x5dccce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dccd1:{NFSU2_TR(0x5dccd1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5dccd5:{NFSU2_TR(0x5dccd5);
__builtin_memmove((R+12),(R+0),4);
}
B5dccd7:{NFSU2_TR(0x5dccd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5dccda:{NFSU2_TR(0x5dccda);
w1(R+12,u8(~u32(r1(R+12))));
}
B5dccdc:{NFSU2_TR(0x5dccdc);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B5dccdf:{NFSU2_TR(0x5dccdf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5dcce1:{NFSU2_TR(0x5dcce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcce5:{NFSU2_TR(0x5dcce5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dcce9:{NFSU2_TR(0x5dcce9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dccf4;}}
}
B5dcceb:L5dcceb:{c.instructions+=2;NFSU2_TR(0x5dcceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dccf2:{NFSU2_TR(0x5dccf2);
{goto L5dccf6;}
}
B5dccf4:L5dccf4:{c.instructions+=1;NFSU2_TR(0x5dccf4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dccf6:L5dccf6:{c.instructions+=30;NFSU2_TR(0x5dccf6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dccfa:{NFSU2_TR(0x5dccfa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dccfd:{NFSU2_TR(0x5dccfd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5dcd04:{NFSU2_TR(0x5dcd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dcd06:{NFSU2_TR(0x5dcd06);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd0a:{NFSU2_TR(0x5dcd0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcd0d:{NFSU2_TR(0x5dcd0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd11:{NFSU2_TR(0x5dcd11);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5dcd15:{NFSU2_TR(0x5dcd15);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dcd18:{NFSU2_TR(0x5dcd18);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5dcd1b:{NFSU2_TR(0x5dcd1b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5dcd1d:{NFSU2_TR(0x5dcd1d);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+12))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5dcd1f:{NFSU2_TR(0x5dcd1f);
w4(R+8,u32(0x0ull));
}
B5dcd24:{NFSU2_TR(0x5dcd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd28:{NFSU2_TR(0x5dcd28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5dcd2b:{NFSU2_TR(0x5dcd2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd2f:{NFSU2_TR(0x5dcd2f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dcd33:{NFSU2_TR(0x5dcd33);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dcd37:{NFSU2_TR(0x5dcd37);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd3f:{NFSU2_TR(0x5dcd3f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dcd45:{NFSU2_TR(0x5dcd45);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd4d:{NFSU2_TR(0x5dcd4d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dcd51:{NFSU2_TR(0x5dcd51);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5dcd55:{NFSU2_TR(0x5dcd55);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd59:{NFSU2_TR(0x5dcd59);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dcd5d:{NFSU2_TR(0x5dcd5d);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5dcd63:{NFSU2_TR(0x5dcd63);
{u32 ea_=u32(u32(8013392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dcd69:{NFSU2_TR(0x5dcd69);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dcd6b:{NFSU2_TR(0x5dcd6b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcd6e:{NFSU2_TR(0x5dcd6e);
if(r1(R+514)){TAIL_STATIC(0x5dd13cu,5dd);}
}
B5dcd74:L5dcd74:{c.instructions+=5;NFSU2_TR(0x5dcd74);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dcd78:{NFSU2_TR(0x5dcd78);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dcd7e:{NFSU2_TR(0x5dcd7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dcd80:{NFSU2_TR(0x5dcd80);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcd83:{NFSU2_TR(0x5dcd83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5dd0acu,5dd);}
}
B5dcd89:L5dcd89:{c.instructions+=5;NFSU2_TR(0x5dcd89);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dcd91:{NFSU2_TR(0x5dcd91);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dcd95:{NFSU2_TR(0x5dcd95);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dcd97:{NFSU2_TR(0x5dcd97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dcd9c:{NFSU2_TR(0x5dcd9c);
if(r1(R+518)){{goto L5dcda7;}}
}
B5dcd9e:L5dcd9e:{c.instructions+=2;NFSU2_TR(0x5dcd9e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcda0:{NFSU2_TR(0x5dcda0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dcda7;}}
}
B5dcda2:L5dcda2:{c.instructions+=1;NFSU2_TR(0x5dcda2);
w4(R+4,u32(0x1ull));
}
B5dcda7:L5dcda7:{c.instructions+=3;NFSU2_TR(0x5dcda7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dcdab:{NFSU2_TR(0x5dcdab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dcdb0:{NFSU2_TR(0x5dcdb0);
if(r1(R+518)){{goto L5dcdb7;}}
}
B5dcdb2:L5dcdb2:{c.instructions+=2;NFSU2_TR(0x5dcdb2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcdb4:{NFSU2_TR(0x5dcdb4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dcdb7;}}
}
B5dcdb6:L5dcdb6:{c.instructions+=1;NFSU2_TR(0x5dcdb6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dcdb7:L5dcdb7:{c.instructions+=3;NFSU2_TR(0x5dcdb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcdbb:{NFSU2_TR(0x5dcdbb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcdbd:{NFSU2_TR(0x5dcdbd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5dd0acu,5dd);}
}
B5dcdc3:L5dcdc3:{c.instructions+=3;NFSU2_TR(0x5dcdc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcdc4:{NFSU2_TR(0x5dcdc4);
__builtin_memmove((R+4),(R+24),4);
}
B5dcdc6:{NFSU2_TR(0x5dcdc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcdcbull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5dcdcb:L5dcdcb:{c.instructions+=8;NFSU2_TR(0x5dcdcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcdce:{NFSU2_TR(0x5dcdce);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dcdd2:{NFSU2_TR(0x5dcdd2);
__builtin_memmove((R+4),(R+8),4);
}
B5dcdd4:{NFSU2_TR(0x5dcdd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dcdd7:{NFSU2_TR(0x5dcdd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcddb:{NFSU2_TR(0x5dcddb);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5dcdde:{NFSU2_TR(0x5dcdde);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+12))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5dcde0:{NFSU2_TR(0x5dcde0);
if(r1(R+518)){TAIL_STATIC(0x5dd056u,5dd);}
}
B5dcde6:L5dcde6:{c.instructions+=4;NFSU2_TR(0x5dcde6);
__builtin_memmove((R+12),(R+8),1);
}
B5dcde8:{NFSU2_TR(0x5dcde8);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B5dcdeb:{NFSU2_TR(0x5dcdeb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dcdee:{NFSU2_TR(0x5dcdee);
if(r1(R+518)){TAIL_STATIC(0x5dd08cu,5dd);}
}
B5dcdf4:L5dcdf4:{c.instructions+=2;NFSU2_TR(0x5dcdf4);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dcdf7:{NFSU2_TR(0x5dcdf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcdff;}}
}
B5dcdf9:L5dcdf9:{c.instructions+=2;NFSU2_TR(0x5dcdf9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5dcdfd:{NFSU2_TR(0x5dcdfd);
{goto L5dce03;}
}
B5dcdff:L5dcdff:{c.instructions+=1;NFSU2_TR(0x5dcdff);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5dce03:L5dce03:{c.instructions+=3;NFSU2_TR(0x5dce03);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5dce07:{NFSU2_TR(0x5dce07);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+24))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5dce0a:{NFSU2_TR(0x5dce0a);
if(r1(R+518)){TAIL_STATIC(0x5dd08cu,5dd);}
}
B5dce10:L5dce10:{c.instructions+=5;NFSU2_TR(0x5dce10);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dce12:{NFSU2_TR(0x5dce12);
__builtin_memmove((R+4),(R+8),1);
}
B5dce14:{NFSU2_TR(0x5dce14);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B5dce17:{NFSU2_TR(0x5dce17);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dce1a:{NFSU2_TR(0x5dce1a);
if(r1(R+518)){TAIL_STATIC(0x5dd07bu,5dd);}
}
B5dce20:L5dce20:{c.instructions+=2;NFSU2_TR(0x5dce20);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dce23:{NFSU2_TR(0x5dce23);
if(r1(R+518)){TAIL_STATIC(0x5dd07bu,5dd);}
}
B5dce29:L5dce29:{c.instructions+=2;NFSU2_TR(0x5dce29);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dce2c:{NFSU2_TR(0x5dce2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dce32;}}
}
B5dce2e:L5dce2e:{c.instructions+=2;NFSU2_TR(0x5dce2e);
__builtin_memmove((R+4),(R+24),4);
}
B5dce30:{NFSU2_TR(0x5dce30);
{goto L5dce36;}
}
B5dce32:L5dce32:{c.instructions+=1;NFSU2_TR(0x5dce32);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5dce36:L5dce36:{c.instructions+=3;NFSU2_TR(0x5dce36);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5dce39:{NFSU2_TR(0x5dce39);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5dce3b:{NFSU2_TR(0x5dce3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dce46;}}
}
B5dce3d:L5dce3d:{c.instructions+=2;NFSU2_TR(0x5dce3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5dce44:{NFSU2_TR(0x5dce44);
{goto L5dce48;}
}
B5dce46:L5dce46:{c.instructions+=1;NFSU2_TR(0x5dce46);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dce48:L5dce48:{c.instructions+=3;NFSU2_TR(0x5dce48);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dce4a:{NFSU2_TR(0x5dce4a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x44ull))));
}
B5dce4d:{NFSU2_TR(0x5dce4d);
__builtin_memmove((R+4),(R+4),4);
}
B5dce50:L5dce50:{c.instructions+=2;NFSU2_TR(0x5dce50);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xfa0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5dce55:{NFSU2_TR(0x5dce55);
if(r1(R+518)){{goto L5dce65;}}
}
B5dce57:L5dce57:{c.instructions+=4;NFSU2_TR(0x5dce57);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dce58:{NFSU2_TR(0x5dce58);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5dce5b:{NFSU2_TR(0x5dce5b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dce5e:{NFSU2_TR(0x5dce5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dce50u);}goto L5dce50;}}
}
B5dce60:L5dce60:{c.instructions+=1;NFSU2_TR(0x5dce60);
TAIL_STATIC(0x5dd08cu,5dd);
}
B5dce65:L5dce65:{c.instructions+=8;NFSU2_TR(0x5dce65);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dce69:{NFSU2_TR(0x5dce69);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dce6c:{NFSU2_TR(0x5dce6c);
w1(R+8,u8(~u32(r1(R+8))));
}
B5dce6e:{NFSU2_TR(0x5dce6e);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+12))));
}
B5dce70:{NFSU2_TR(0x5dce70);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5dce73:{NFSU2_TR(0x5dce73);
__builtin_memmove((R+4),(R+0),4);
}
B5dce75:{NFSU2_TR(0x5dce75);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dce79:{NFSU2_TR(0x5dce79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dce7eull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5dce7e:L5dce7e:{c.instructions+=3;NFSU2_TR(0x5dce7e);
__builtin_memmove((R+24),(R+0),4);
}
B5dce80:{NFSU2_TR(0x5dce80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dce82:{NFSU2_TR(0x5dce82);
if(r1(R+518)){TAIL_STATIC(0x5dd08cu,5dd);}
}
B5dce88:L5dce88:{c.instructions+=1;NFSU2_TR(0x5dce88);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dce8a:L5dce8a:{c.instructions+=6;NFSU2_TR(0x5dce8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dce8e:{NFSU2_TR(0x5dce8e);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5dce94:{NFSU2_TR(0x5dce94);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dce96:{NFSU2_TR(0x5dce96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dce9b:{NFSU2_TR(0x5dce9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dce9f:{NFSU2_TR(0x5dce9f);
if(r1(R+518)){{goto L5dceaa;}}
}
B5dcea1:L5dcea1:{c.instructions+=2;NFSU2_TR(0x5dcea1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcea3:{NFSU2_TR(0x5dcea3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dceaa;}}
}
B5dcea5:L5dcea5:{c.instructions+=1;NFSU2_TR(0x5dcea5);
w4(R+4,u32(0x1ull));
}
B5dceaa:L5dceaa:{c.instructions+=3;NFSU2_TR(0x5dceaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dceae:{NFSU2_TR(0x5dceae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dceb3:{NFSU2_TR(0x5dceb3);
if(r1(R+518)){{goto L5dceba;}}
}
B5dceb5:L5dceb5:{c.instructions+=2;NFSU2_TR(0x5dceb5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dceb7:{NFSU2_TR(0x5dceb7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dceba;}}
}
B5dceb9:L5dceb9:{c.instructions+=1;NFSU2_TR(0x5dceb9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dceba:L5dceba:{c.instructions+=2;NFSU2_TR(0x5dceba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dcebc:{NFSU2_TR(0x5dcebc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dcfee;}}
}
B5dcec2:L5dcec2:{c.instructions+=3;NFSU2_TR(0x5dcec2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcec3:{NFSU2_TR(0x5dcec3);
__builtin_memmove((R+4),(R+24),4);
}
B5dcec5:{NFSU2_TR(0x5dcec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcecaull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5dceca:L5dceca:{c.instructions+=6;NFSU2_TR(0x5dceca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcecd:{NFSU2_TR(0x5dcecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dced1:{NFSU2_TR(0x5dced1);
__builtin_memmove((R+0),(R+8),1);
}
B5dced3:{NFSU2_TR(0x5dced3);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5dced5:{NFSU2_TR(0x5dced5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dced7:{NFSU2_TR(0x5dced7);
if(r1(R+518)){{goto L5dcfe4;}}
}
B5dcedd:L5dcedd:{c.instructions+=5;NFSU2_TR(0x5dcedd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dcedf:{NFSU2_TR(0x5dcedf);
__builtin_memmove((R+4),(R+8),1);
}
B5dcee1:{NFSU2_TR(0x5dcee1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B5dcee4:{NFSU2_TR(0x5dcee4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dcee7:{NFSU2_TR(0x5dcee7);
if(r1(R+518)){{goto L5dcfe4;}}
}
B5dceed:L5dceed:{c.instructions+=2;NFSU2_TR(0x5dceed);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dcef0:{NFSU2_TR(0x5dcef0);
if(r1(R+518)){{goto L5dcfe4;}}
}
B5dcef6:L5dcef6:{c.instructions+=7;NFSU2_TR(0x5dcef6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dcefa:{NFSU2_TR(0x5dcefa);
__builtin_memmove((R+4),(R+8),4);
}
B5dcefc:{NFSU2_TR(0x5dcefc);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dceff:{NFSU2_TR(0x5dceff);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcf03:{NFSU2_TR(0x5dcf03);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5dcf06:{NFSU2_TR(0x5dcf06);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+12))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5dcf08:{NFSU2_TR(0x5dcf08);
if(r1(R+518)){{goto L5dcfe4;}}
}
B5dcf0e:L5dcf0e:{c.instructions+=3;NFSU2_TR(0x5dcf0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcf10:{NFSU2_TR(0x5dcf10);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcf14:{NFSU2_TR(0x5dcf14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcf1c;}}
}
B5dcf16:L5dcf16:{c.instructions+=2;NFSU2_TR(0x5dcf16);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B5dcf1a:{NFSU2_TR(0x5dcf1a);
{goto L5dcf20;}
}
B5dcf1c:L5dcf1c:{c.instructions+=1;NFSU2_TR(0x5dcf1c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B5dcf20:L5dcf20:{c.instructions+=5;NFSU2_TR(0x5dcf20);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dcf24:{NFSU2_TR(0x5dcf24);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dcf27:{NFSU2_TR(0x5dcf27);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dcf2a:{NFSU2_TR(0x5dcf2a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dcf2d:{NFSU2_TR(0x5dcf2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcf35;}}
}
B5dcf2f:L5dcf2f:{c.instructions+=2;NFSU2_TR(0x5dcf2f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5dcf33:{NFSU2_TR(0x5dcf33);
{goto L5dcf39;}
}
B5dcf35:L5dcf35:{c.instructions+=1;NFSU2_TR(0x5dcf35);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5dcf39:L5dcf39:{c.instructions+=2;NFSU2_TR(0x5dcf39);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5dcf3c:{NFSU2_TR(0x5dcf3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcfe4;}}
}
B5dcf42:L5dcf42:{c.instructions+=3;NFSU2_TR(0x5dcf42);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dcf44:{NFSU2_TR(0x5dcf44);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dcf48:{NFSU2_TR(0x5dcf48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcf50;}}
}
B5dcf4a:L5dcf4a:{c.instructions+=2;NFSU2_TR(0x5dcf4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dcf4e:{NFSU2_TR(0x5dcf4e);
{goto L5dcf54;}
}
B5dcf50:L5dcf50:{c.instructions+=1;NFSU2_TR(0x5dcf50);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dcf54:L5dcf54:{c.instructions+=3;NFSU2_TR(0x5dcf54);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dcf57:{NFSU2_TR(0x5dcf57);
w4(R+28,u32(s32(s16(r2(R+0)))));
}
B5dcf5a:{NFSU2_TR(0x5dcf5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcf66;}}
}
B5dcf5c:L5dcf5c:{c.instructions+=3;NFSU2_TR(0x5dcf5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcf60:{NFSU2_TR(0x5dcf60);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dcf64:{NFSU2_TR(0x5dcf64);
{goto L5dcf6e;}
}
B5dcf66:L5dcf66:{c.instructions+=2;NFSU2_TR(0x5dcf66);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dcf6a:{NFSU2_TR(0x5dcf6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dcf6e:L5dcf6e:{c.instructions+=5;NFSU2_TR(0x5dcf6e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5dcf71:{NFSU2_TR(0x5dcf71);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B5dcf73:{NFSU2_TR(0x5dcf73);
u8 U[32];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B5dcf78:{NFSU2_TR(0x5dcf78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dcf7a:{NFSU2_TR(0x5dcf7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dcfe4;}}
}
B5dcf7c:L5dcf7c:{c.instructions+=8;NFSU2_TR(0x5dcf7c);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcf80:{NFSU2_TR(0x5dcf80);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dcf83:{NFSU2_TR(0x5dcf83);
w1(R+8,u8(~u32(r1(R+8))));
}
B5dcf85:{NFSU2_TR(0x5dcf85);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+0))));
}
B5dcf87:{NFSU2_TR(0x5dcf87);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dcf8b:{NFSU2_TR(0x5dcf8b);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5dcf8e:{NFSU2_TR(0x5dcf8e);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dcf90:{NFSU2_TR(0x5dcf90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dcfe4;}}
}
B5dcf92:L5dcf92:{c.instructions+=2;NFSU2_TR(0x5dcf92);
__builtin_memmove((R+4),(R+12),4);
}
B5dcf94:{NFSU2_TR(0x5dcf94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcf99ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5dcf99:L5dcf99:{c.instructions+=16;NFSU2_TR(0x5dcf99);
__builtin_memmove((R+28),(R+0),4);
}
B5dcf9b:{NFSU2_TR(0x5dcf9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dcf9d:{NFSU2_TR(0x5dcf9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcfa1:{NFSU2_TR(0x5dcfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dcfa4:{NFSU2_TR(0x5dcfa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcfa8:{NFSU2_TR(0x5dcfa8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dcfac:{NFSU2_TR(0x5dcfac);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5dcfaf:{NFSU2_TR(0x5dcfaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcfb3:{NFSU2_TR(0x5dcfb3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dcfb7:{NFSU2_TR(0x5dcfb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcfb8:{NFSU2_TR(0x5dcfb8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dcfbc:{NFSU2_TR(0x5dcfbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dcfc0:{NFSU2_TR(0x5dcfc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dcfc1:{NFSU2_TR(0x5dcfc1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dcfc7:{NFSU2_TR(0x5dcfc7);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dcfcb:{NFSU2_TR(0x5dcfcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dcfd0ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5dcfd0:L5dcfd0:{c.instructions+=5;NFSU2_TR(0x5dcfd0);
{u32 ea_=u32(u32(8013392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dcfd6:{NFSU2_TR(0x5dcfd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dcfd9:{NFSU2_TR(0x5dcfd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dcfdb:{NFSU2_TR(0x5dcfdb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dcfde:{NFSU2_TR(0x5dcfde);
if(r1(R+514)){{goto L5dcfe4;}}
}
B5dcfe0:L5dcfe0:{c.instructions+=1;NFSU2_TR(0x5dcfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dcfe4:L5dcfe4:{c.instructions+=3;NFSU2_TR(0x5dcfe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dcfe8:{NFSU2_TR(0x5dcfe8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5dcfe9:{NFSU2_TR(0x5dcfe9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dce8au);}goto L5dce8a;}
}
B5dcfee:L5dcfee:{c.instructions+=4;NFSU2_TR(0x5dcfee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dcff1:{NFSU2_TR(0x5dcff1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5dcff6:{NFSU2_TR(0x5dcff6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dcffd:{NFSU2_TR(0x5dcffd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
TAIL_STATIC(0x5dd001u,5dd);
}
XIT:NFSU2_TR_EXIT(0x5dc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
