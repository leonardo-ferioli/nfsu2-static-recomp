#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_616(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x615,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x615,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_615(u8* __restrict R,Cpu& c);
u32 page_615(Cpu& c){return body_615(c.regs.data(),c);}
__attribute__((noinline)) u32 body_615(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x615000:goto L615000;
case 0x615007:c.instructions+=1;goto B615007;
case 0x615010:goto L615010;
case 0x615013:c.instructions+=6;goto B615013;
case 0x615016:c.instructions+=5;goto B615016;
case 0x61501d:c.instructions+=4;goto B61501d;
case 0x61501e:c.instructions+=3;goto B61501e;
case 0x615025:c.instructions+=2;goto B615025;
case 0x615029:c.instructions+=1;goto B615029;
case 0x61502e:goto L61502e;
case 0x615031:c.instructions+=2;goto B615031;
case 0x615033:c.instructions+=1;goto B615033;
case 0x615035:goto L615035;
case 0x615038:c.instructions+=2;goto B615038;
case 0x615039:c.instructions+=1;goto B615039;
case 0x61503e:goto L61503e;
case 0x615042:c.instructions+=2;goto B615042;
case 0x615045:c.instructions+=1;goto B615045;
case 0x615047:goto L615047;
case 0x61504a:c.instructions+=2;goto B61504a;
case 0x61504b:c.instructions+=1;goto B61504b;
case 0x615050:goto L615050;
case 0x615053:c.instructions+=2;goto B615053;
case 0x615055:c.instructions+=1;goto B615055;
case 0x615057:goto L615057;
case 0x61505a:c.instructions+=2;goto B61505a;
case 0x61505b:c.instructions+=1;goto B61505b;
case 0x615060:goto L615060;
case 0x615064:c.instructions+=2;goto B615064;
case 0x615067:c.instructions+=1;goto B615067;
case 0x615069:goto L615069;
case 0x61506f:goto L61506f;
case 0x615076:c.instructions+=11;goto B615076;
case 0x615078:c.instructions+=10;goto B615078;
case 0x61507a:c.instructions+=9;goto B61507a;
case 0x61507e:c.instructions+=8;goto B61507e;
case 0x615082:c.instructions+=7;goto B615082;
case 0x615084:c.instructions+=6;goto B615084;
case 0x61508b:c.instructions+=5;goto B61508b;
case 0x61508f:c.instructions+=4;goto B61508f;
case 0x615095:c.instructions+=3;goto B615095;
case 0x615097:c.instructions+=2;goto B615097;
case 0x61509a:c.instructions+=1;goto B61509a;
case 0x61509c:goto L61509c;
case 0x6150a2:c.instructions+=2;goto B6150a2;
case 0x6150a9:c.instructions+=1;goto B6150a9;
case 0x6150ab:goto L6150ab;
case 0x6150ad:goto L6150ad;
case 0x6150b0:c.instructions+=4;goto B6150b0;
case 0x6150b1:c.instructions+=3;goto B6150b1;
case 0x6150b4:c.instructions+=2;goto B6150b4;
case 0x6150b6:c.instructions+=1;goto B6150b6;
case 0x6150bc:goto L6150bc;
case 0x6150bf:c.instructions+=2;goto B6150bf;
case 0x6150c1:c.instructions+=1;goto B6150c1;
case 0x6150c7:goto L6150c7;
case 0x6150ca:c.instructions+=3;goto B6150ca;
case 0x6150cb:c.instructions+=2;goto B6150cb;
case 0x6150cf:c.instructions+=1;goto B6150cf;
case 0x6150d3:goto L6150d3;
case 0x6150d7:c.instructions+=3;goto B6150d7;
case 0x6150d9:c.instructions+=2;goto B6150d9;
case 0x6150db:c.instructions+=1;goto B6150db;
case 0x6150dd:goto L6150dd;
case 0x6150e0:goto L6150e0;
case 0x6150e7:c.instructions+=4;goto B6150e7;
case 0x6150ee:c.instructions+=3;goto B6150ee;
case 0x6150f0:c.instructions+=2;goto B6150f0;
case 0x6150f3:c.instructions+=1;goto B6150f3;
case 0x6150f5:goto L6150f5;
case 0x6150fc:c.instructions+=7;goto B6150fc;
case 0x615103:c.instructions+=6;goto B615103;
case 0x61510a:c.instructions+=5;goto B61510a;
case 0x615111:c.instructions+=4;goto B615111;
case 0x615118:c.instructions+=3;goto B615118;
case 0x61511f:c.instructions+=2;goto B61511f;
case 0x615126:c.instructions+=1;goto B615126;
case 0x61512d:goto L61512d;
case 0x61512e:c.instructions+=2;goto B61512e;
case 0x615130:c.instructions+=1;goto B615130;
case 0x615132:goto L615132;
case 0x615136:c.instructions+=1;goto B615136;
case 0x615138:goto L615138;
case 0x61513b:c.instructions+=3;goto B61513b;
case 0x61513d:c.instructions+=2;goto B61513d;
case 0x61513f:c.instructions+=1;goto B61513f;
case 0x615141:goto L615141;
case 0x615144:c.instructions+=1;goto B615144;
case 0x615150:goto L615150;
case 0x615157:c.instructions+=2;goto B615157;
case 0x61515a:c.instructions+=1;goto B61515a;
case 0x61515f:goto L61515f;
case 0x615161:goto L615161;
case 0x615164:c.instructions+=3;goto B615164;
case 0x61516b:c.instructions+=2;goto B61516b;
case 0x61516d:c.instructions+=1;goto B61516d;
case 0x61516f:goto L61516f;
case 0x615171:c.instructions+=2;goto B615171;
case 0x615173:c.instructions+=1;goto B615173;
case 0x615175:goto L615175;
case 0x615178:c.instructions+=1;goto B615178;
case 0x61517a:goto L61517a;
case 0x615180:goto L615180;
case 0x615183:c.instructions+=4;goto B615183;
case 0x615184:c.instructions+=3;goto B615184;
case 0x615187:c.instructions+=2;goto B615187;
case 0x615189:c.instructions+=1;goto B615189;
case 0x61518b:goto L61518b;
case 0x615190:c.instructions+=6;goto B615190;
case 0x615192:c.instructions+=5;goto B615192;
case 0x615194:c.instructions+=4;goto B615194;
case 0x61519b:c.instructions+=3;goto B61519b;
case 0x61519c:c.instructions+=2;goto B61519c;
case 0x6151a7:c.instructions+=1;goto B6151a7;
case 0x6151ac:goto L6151ac;
case 0x6151b3:c.instructions+=7;goto B6151b3;
case 0x6151b4:c.instructions+=6;goto B6151b4;
case 0x6151b5:c.instructions+=5;goto B6151b5;
case 0x6151bc:c.instructions+=4;goto B6151bc;
case 0x6151bd:c.instructions+=3;goto B6151bd;
case 0x6151bf:c.instructions+=2;goto B6151bf;
case 0x6151c0:c.instructions+=1;goto B6151c0;
case 0x6151d0:goto L6151d0;
case 0x6151d3:c.instructions+=14;goto B6151d3;
case 0x6151d5:c.instructions+=13;goto B6151d5;
case 0x6151d9:c.instructions+=12;goto B6151d9;
case 0x6151dd:c.instructions+=11;goto B6151dd;
case 0x6151e1:c.instructions+=10;goto B6151e1;
case 0x6151e3:c.instructions+=9;goto B6151e3;
case 0x6151e5:c.instructions+=8;goto B6151e5;
case 0x6151e9:c.instructions+=7;goto B6151e9;
case 0x6151ec:c.instructions+=6;goto B6151ec;
case 0x6151f0:c.instructions+=5;goto B6151f0;
case 0x6151f3:c.instructions+=4;goto B6151f3;
case 0x6151f7:c.instructions+=3;goto B6151f7;
case 0x6151fa:c.instructions+=2;goto B6151fa;
case 0x6151fd:c.instructions+=1;goto B6151fd;
case 0x615200:goto L615200;
case 0x615203:c.instructions+=14;goto B615203;
case 0x615206:c.instructions+=13;goto B615206;
case 0x61520a:c.instructions+=12;goto B61520a;
case 0x61520e:c.instructions+=11;goto B61520e;
case 0x615212:c.instructions+=10;goto B615212;
case 0x615214:c.instructions+=9;goto B615214;
case 0x615216:c.instructions+=8;goto B615216;
case 0x61521a:c.instructions+=7;goto B61521a;
case 0x61521d:c.instructions+=6;goto B61521d;
case 0x615221:c.instructions+=5;goto B615221;
case 0x615224:c.instructions+=4;goto B615224;
case 0x615228:c.instructions+=3;goto B615228;
case 0x61522b:c.instructions+=2;goto B61522b;
case 0x61522e:c.instructions+=1;goto B61522e;
case 0x615240:goto L615240;
case 0x615244:c.instructions+=2;goto B615244;
case 0x615246:c.instructions+=1;goto B615246;
case 0x615248:goto L615248;
case 0x61524b:c.instructions+=1;goto B61524b;
case 0x61524d:goto L61524d;
case 0x61524f:c.instructions+=6;goto B61524f;
case 0x615252:c.instructions+=5;goto B615252;
case 0x615253:c.instructions+=4;goto B615253;
case 0x615259:c.instructions+=3;goto B615259;
case 0x61525b:c.instructions+=2;goto B61525b;
case 0x61525c:c.instructions+=1;goto B61525c;
case 0x61525e:goto L61525e;
case 0x615265:c.instructions+=4;goto B615265;
case 0x61526b:c.instructions+=3;goto B61526b;
case 0x61526d:c.instructions+=2;goto B61526d;
case 0x615270:c.instructions+=1;goto B615270;
case 0x615272:goto L615272;
case 0x615277:c.instructions+=1;goto B615277;
case 0x61527a:goto L61527a;
case 0x61527c:c.instructions+=1;goto B61527c;
case 0x615280:goto L615280;
case 0x615281:c.instructions+=8;goto B615281;
case 0x615282:c.instructions+=7;goto B615282;
case 0x615283:c.instructions+=6;goto B615283;
case 0x615285:c.instructions+=5;goto B615285;
case 0x615287:c.instructions+=4;goto B615287;
case 0x615288:c.instructions+=3;goto B615288;
case 0x61528a:c.instructions+=2;goto B61528a;
case 0x61528c:c.instructions+=1;goto B61528c;
case 0x61528e:goto L61528e;
case 0x615294:c.instructions+=3;goto B615294;
case 0x615298:c.instructions+=2;goto B615298;
case 0x615299:c.instructions+=1;goto B615299;
case 0x61529b:goto L61529b;
case 0x61529f:c.instructions+=3;goto B61529f;
case 0x6152a1:c.instructions+=2;goto B6152a1;
case 0x6152a2:c.instructions+=1;goto B6152a2;
case 0x6152a4:goto L6152a4;
case 0x6152a8:goto L6152a8;
case 0x6152aa:c.instructions+=2;goto B6152aa;
case 0x6152ac:c.instructions+=1;goto B6152ac;
case 0x6152ae:goto L6152ae;
case 0x6152b4:c.instructions+=3;goto B6152b4;
case 0x6152b8:c.instructions+=2;goto B6152b8;
case 0x6152ba:c.instructions+=1;goto B6152ba;
case 0x6152bd:goto L6152bd;
case 0x6152c4:c.instructions+=7;goto B6152c4;
case 0x6152c6:c.instructions+=6;goto B6152c6;
case 0x6152c9:c.instructions+=5;goto B6152c9;
case 0x6152d0:c.instructions+=4;goto B6152d0;
case 0x6152d2:c.instructions+=3;goto B6152d2;
case 0x6152d4:c.instructions+=2;goto B6152d4;
case 0x6152db:c.instructions+=1;goto B6152db;
case 0x6152dd:goto L6152dd;
case 0x6152e0:c.instructions+=3;goto B6152e0;
case 0x6152e6:c.instructions+=2;goto B6152e6;
case 0x6152ec:c.instructions+=1;goto B6152ec;
case 0x6152ee:goto L6152ee;
case 0x6152f1:goto L6152f1;
case 0x6152f8:c.instructions+=2;goto B6152f8;
case 0x6152fe:c.instructions+=1;goto B6152fe;
case 0x615300:goto L615300;
case 0x615306:c.instructions+=1;goto B615306;
case 0x61530c:goto L61530c;
case 0x61530f:c.instructions+=1;goto B61530f;
case 0x615311:goto L615311;
case 0x615313:c.instructions+=2;goto B615313;
case 0x615319:c.instructions+=1;goto B615319;
case 0x61531b:goto L61531b;
case 0x61531d:c.instructions+=2;goto B61531d;
case 0x61531f:c.instructions+=1;goto B61531f;
case 0x615321:goto L615321;
case 0x615326:c.instructions+=1;goto B615326;
case 0x615328:goto L615328;
case 0x61532a:goto L61532a;
case 0x615330:c.instructions+=1;goto B615330;
case 0x615336:goto L615336;
case 0x615337:c.instructions+=2;goto B615337;
case 0x61533a:c.instructions+=1;goto B61533a;
case 0x615340:goto L615340;
case 0x615346:c.instructions+=4;goto B615346;
case 0x61534c:c.instructions+=3;goto B61534c;
case 0x615351:c.instructions+=2;goto B615351;
case 0x615353:c.instructions+=1;goto B615353;
case 0x615355:goto L615355;
case 0x615357:goto L615357;
case 0x61535d:c.instructions+=5;goto B61535d;
case 0x615367:c.instructions+=4;goto B615367;
case 0x61536a:c.instructions+=3;goto B61536a;
case 0x61536d:c.instructions+=2;goto B61536d;
case 0x61536f:c.instructions+=1;goto B61536f;
case 0x615371:goto L615371;
case 0x615374:c.instructions+=1;goto B615374;
case 0x615377:goto L615377;
case 0x61537d:c.instructions+=2;goto B61537d;
case 0x615383:c.instructions+=1;goto B615383;
case 0x615385:goto L615385;
case 0x61538b:c.instructions+=1;goto B61538b;
case 0x615391:goto L615391;
case 0x615397:c.instructions+=2;goto B615397;
case 0x61539d:c.instructions+=1;goto B61539d;
case 0x61539f:goto L61539f;
case 0x6153a5:c.instructions+=1;goto B6153a5;
case 0x6153ab:goto L6153ab;
case 0x6153b0:c.instructions+=1;goto B6153b0;
case 0x6153b5:goto L6153b5;
case 0x6153bb:c.instructions+=3;goto B6153bb;
case 0x6153be:c.instructions+=2;goto B6153be;
case 0x6153c0:c.instructions+=1;goto B6153c0;
case 0x6153c2:goto L6153c2;
case 0x6153c8:c.instructions+=1;goto B6153c8;
case 0x6153ce:goto L6153ce;
case 0x6153d3:c.instructions+=1;goto B6153d3;
case 0x6153d8:goto L6153d8;
case 0x6153de:c.instructions+=3;goto B6153de;
case 0x6153e1:c.instructions+=2;goto B6153e1;
case 0x6153e3:c.instructions+=1;goto B6153e3;
case 0x6153e5:goto L6153e5;
case 0x6153eb:c.instructions+=1;goto B6153eb;
case 0x6153f1:goto L6153f1;
case 0x6153f7:c.instructions+=3;goto B6153f7;
case 0x6153f9:c.instructions+=2;goto B6153f9;
case 0x6153fe:c.instructions+=1;goto B6153fe;
case 0x615400:goto L615400;
case 0x615402:goto L615402;
case 0x615408:c.instructions+=5;goto B615408;
case 0x61540b:c.instructions+=4;goto B61540b;
case 0x61540e:c.instructions+=3;goto B61540e;
case 0x615410:c.instructions+=2;goto B615410;
case 0x615411:c.instructions+=1;goto B615411;
case 0x615413:goto L615413;
case 0x615416:c.instructions+=1;goto B615416;
case 0x615419:goto L615419;
case 0x61541f:c.instructions+=2;goto B61541f;
case 0x615425:c.instructions+=1;goto B615425;
case 0x615427:goto L615427;
case 0x61542d:c.instructions+=1;goto B61542d;
case 0x615433:goto L615433;
case 0x615439:c.instructions+=2;goto B615439;
case 0x61543f:c.instructions+=1;goto B61543f;
case 0x615441:goto L615441;
case 0x615447:c.instructions+=1;goto B615447;
case 0x61544d:goto L61544d;
case 0x615452:c.instructions+=1;goto B615452;
case 0x615457:goto L615457;
case 0x61545d:c.instructions+=3;goto B61545d;
case 0x615460:c.instructions+=2;goto B615460;
case 0x615462:c.instructions+=1;goto B615462;
case 0x615464:goto L615464;
case 0x61546a:c.instructions+=1;goto B61546a;
case 0x615470:goto L615470;
case 0x615476:c.instructions+=2;goto B615476;
case 0x61547c:c.instructions+=1;goto B61547c;
case 0x61547e:goto L61547e;
case 0x615484:c.instructions+=1;goto B615484;
case 0x61548a:goto L61548a;
case 0x61548b:c.instructions+=4;goto B61548b;
case 0x61548c:c.instructions+=3;goto B61548c;
case 0x61548d:c.instructions+=2;goto B61548d;
case 0x61548e:c.instructions+=1;goto B61548e;
case 0x615490:goto L615490;
case 0x615491:c.instructions+=9;goto B615491;
case 0x615493:c.instructions+=8;goto B615493;
case 0x615496:c.instructions+=7;goto B615496;
case 0x615499:c.instructions+=6;goto B615499;
case 0x61549e:c.instructions+=5;goto B61549e;
case 0x6154a0:c.instructions+=4;goto B6154a0;
case 0x6154a1:c.instructions+=3;goto B6154a1;
case 0x6154a2:c.instructions+=2;goto B6154a2;
case 0x6154a3:c.instructions+=1;goto B6154a3;
case 0x6154a9:goto L6154a9;
case 0x6154ab:c.instructions+=2;goto B6154ab;
case 0x6154ad:c.instructions+=1;goto B6154ad;
case 0x6154b3:goto L6154b3;
case 0x6154c0:goto L6154c0;
case 0x6154c6:c.instructions+=2;goto B6154c6;
case 0x6154c8:c.instructions+=1;goto B6154c8;
case 0x6154ce:goto L6154ce;
case 0x6154d1:c.instructions+=3;goto B6154d1;
case 0x6154d2:c.instructions+=2;goto B6154d2;
case 0x6154d3:c.instructions+=1;goto B6154d3;
case 0x6154d8:goto L6154d8;
case 0x6154db:c.instructions+=2;goto B6154db;
case 0x6154dd:c.instructions+=1;goto B6154dd;
case 0x6154e3:goto L6154e3;
case 0x6154e6:c.instructions+=4;goto B6154e6;
case 0x6154eb:c.instructions+=3;goto B6154eb;
case 0x6154ed:c.instructions+=2;goto B6154ed;
case 0x6154f3:c.instructions+=1;goto B6154f3;
case 0x6154f9:goto L6154f9;
case 0x6154ff:c.instructions+=27;goto B6154ff;
case 0x615505:c.instructions+=26;goto B615505;
case 0x615508:c.instructions+=25;goto B615508;
case 0x61550b:c.instructions+=24;goto B61550b;
case 0x615511:c.instructions+=23;goto B615511;
case 0x615514:c.instructions+=22;goto B615514;
case 0x61551a:c.instructions+=21;goto B61551a;
case 0x61551e:c.instructions+=20;goto B61551e;
case 0x615522:c.instructions+=19;goto B615522;
case 0x615524:c.instructions+=18;goto B615524;
case 0x615528:c.instructions+=17;goto B615528;
case 0x61552c:c.instructions+=16;goto B61552c;
case 0x615532:c.instructions+=15;goto B615532;
case 0x615534:c.instructions+=14;goto B615534;
case 0x615538:c.instructions+=13;goto B615538;
case 0x61553e:c.instructions+=12;goto B61553e;
case 0x615541:c.instructions+=11;goto B615541;
case 0x615544:c.instructions+=10;goto B615544;
case 0x61554a:c.instructions+=9;goto B61554a;
case 0x61554d:c.instructions+=8;goto B61554d;
case 0x615553:c.instructions+=7;goto B615553;
case 0x615557:c.instructions+=6;goto B615557;
case 0x61555b:c.instructions+=5;goto B61555b;
case 0x61555d:c.instructions+=4;goto B61555d;
case 0x615561:c.instructions+=3;goto B615561;
case 0x615565:c.instructions+=2;goto B615565;
case 0x615569:c.instructions+=1;goto B615569;
case 0x61556f:goto L61556f;
case 0x615575:c.instructions+=1;goto B615575;
case 0x615577:goto L615577;
case 0x61557d:c.instructions+=2;goto B61557d;
case 0x615581:c.instructions+=1;goto B615581;
case 0x615583:goto L615583;
case 0x615586:c.instructions+=1;goto B615586;
case 0x61558a:goto L61558a;
case 0x61558c:c.instructions+=1;goto B61558c;
case 0x615591:goto L615591;
case 0x615593:c.instructions+=3;goto B615593;
case 0x615596:c.instructions+=2;goto B615596;
case 0x615598:c.instructions+=1;goto B615598;
case 0x61559e:goto L61559e;
case 0x6155a1:c.instructions+=7;goto B6155a1;
case 0x6155a4:c.instructions+=6;goto B6155a4;
case 0x6155aa:c.instructions+=5;goto B6155aa;
case 0x6155af:c.instructions+=4;goto B6155af;
case 0x6155b1:c.instructions+=3;goto B6155b1;
case 0x6155b3:c.instructions+=2;goto B6155b3;
case 0x6155b9:c.instructions+=1;goto B6155b9;
case 0x6155bb:goto L6155bb;
case 0x6155c1:goto L6155c1;
case 0x6155c2:c.instructions+=2;goto B6155c2;
case 0x6155c3:c.instructions+=1;goto B6155c3;
case 0x6155c8:goto L6155c8;
case 0x6155cc:c.instructions+=15;goto B6155cc;
case 0x6155ce:c.instructions+=14;goto B6155ce;
case 0x6155d1:c.instructions+=13;goto B6155d1;
case 0x6155d4:c.instructions+=12;goto B6155d4;
case 0x6155d7:c.instructions+=11;goto B6155d7;
case 0x6155d8:c.instructions+=10;goto B6155d8;
case 0x6155db:c.instructions+=9;goto B6155db;
case 0x6155de:c.instructions+=8;goto B6155de;
case 0x6155e2:c.instructions+=7;goto B6155e2;
case 0x6155e3:c.instructions+=6;goto B6155e3;
case 0x6155e6:c.instructions+=5;goto B6155e6;
case 0x6155ea:c.instructions+=4;goto B6155ea;
case 0x6155eb:c.instructions+=3;goto B6155eb;
case 0x6155ee:c.instructions+=2;goto B6155ee;
case 0x6155f5:c.instructions+=1;goto B6155f5;
case 0x6155fa:goto L6155fa;
case 0x6155fc:c.instructions+=1;goto B6155fc;
case 0x6155fe:goto L6155fe;
case 0x615604:c.instructions+=2;goto B615604;
case 0x615606:c.instructions+=1;goto B615606;
case 0x615608:goto L615608;
case 0x61560e:c.instructions+=6;goto B61560e;
case 0x615611:c.instructions+=5;goto B615611;
case 0x615612:c.instructions+=4;goto B615612;
case 0x615613:c.instructions+=3;goto B615613;
case 0x615614:c.instructions+=2;goto B615614;
case 0x615616:c.instructions+=1;goto B615616;
case 0x61561b:goto L61561b;
case 0x61561d:c.instructions+=2;goto B61561d;
case 0x615623:c.instructions+=1;goto B615623;
case 0x615629:goto L615629;
case 0x61562a:c.instructions+=5;goto B61562a;
case 0x61562b:c.instructions+=4;goto B61562b;
case 0x61562c:c.instructions+=3;goto B61562c;
case 0x61562e:c.instructions+=2;goto B61562e;
case 0x61562f:c.instructions+=1;goto B61562f;
case 0x615630:goto L615630;
case 0x615631:c.instructions+=14;goto B615631;
case 0x615633:c.instructions+=13;goto B615633;
case 0x615636:c.instructions+=12;goto B615636;
case 0x615639:c.instructions+=11;goto B615639;
case 0x61563b:c.instructions+=10;goto B61563b;
case 0x61563c:c.instructions+=9;goto B61563c;
case 0x61563d:c.instructions+=8;goto B61563d;
case 0x61563e:c.instructions+=7;goto B61563e;
case 0x615644:c.instructions+=6;goto B615644;
case 0x615648:c.instructions+=5;goto B615648;
case 0x61564e:c.instructions+=4;goto B61564e;
case 0x615652:c.instructions+=3;goto B615652;
case 0x615655:c.instructions+=2;goto B615655;
case 0x615657:c.instructions+=1;goto B615657;
case 0x615659:goto L615659;
case 0x61565e:c.instructions+=9;goto B61565e;
case 0x615661:c.instructions+=8;goto B615661;
case 0x61566b:c.instructions+=7;goto B61566b;
case 0x615670:c.instructions+=6;goto B615670;
case 0x615671:c.instructions+=5;goto B615671;
case 0x615672:c.instructions+=4;goto B615672;
case 0x615673:c.instructions+=3;goto B615673;
case 0x615675:c.instructions+=2;goto B615675;
case 0x615676:c.instructions+=1;goto B615676;
case 0x615679:goto L615679;
case 0x61567b:c.instructions+=2;goto B61567b;
case 0x615680:c.instructions+=1;goto B615680;
case 0x615686:goto L615686;
case 0x615689:c.instructions+=3;goto B615689;
case 0x61568a:c.instructions+=2;goto B61568a;
case 0x61568b:c.instructions+=1;goto B61568b;
case 0x615690:goto L615690;
case 0x615693:c.instructions+=13;goto B615693;
case 0x615695:c.instructions+=12;goto B615695;
case 0x615698:c.instructions+=11;goto B615698;
case 0x61569b:c.instructions+=10;goto B61569b;
case 0x61569e:c.instructions+=9;goto B61569e;
case 0x6156a1:c.instructions+=8;goto B6156a1;
case 0x6156a4:c.instructions+=7;goto B6156a4;
case 0x6156a7:c.instructions+=6;goto B6156a7;
case 0x6156ac:c.instructions+=5;goto B6156ac;
case 0x6156ad:c.instructions+=4;goto B6156ad;
case 0x6156af:c.instructions+=3;goto B6156af;
case 0x6156b2:c.instructions+=2;goto B6156b2;
case 0x6156b9:c.instructions+=1;goto B6156b9;
case 0x6156be:goto L6156be;
case 0x6156c0:c.instructions+=2;goto B6156c0;
case 0x6156c4:c.instructions+=1;goto B6156c4;
case 0x6156c9:goto L6156c9;
case 0x6156cc:c.instructions+=1;goto B6156cc;
case 0x6156ce:goto L6156ce;
case 0x6156d2:c.instructions+=2;goto B6156d2;
case 0x6156d8:c.instructions+=1;goto B6156d8;
case 0x6156dd:goto L6156dd;
case 0x6156df:goto L6156df;
case 0x6156e2:c.instructions+=1;goto B6156e2;
case 0x6156e8:goto L6156e8;
case 0x6156ec:c.instructions+=7;goto B6156ec;
case 0x6156ed:c.instructions+=6;goto B6156ed;
case 0x6156f0:c.instructions+=5;goto B6156f0;
case 0x6156f1:c.instructions+=4;goto B6156f1;
case 0x6156f4:c.instructions+=3;goto B6156f4;
case 0x6156f5:c.instructions+=2;goto B6156f5;
case 0x6156f7:c.instructions+=1;goto B6156f7;
case 0x6156fc:goto L6156fc;
case 0x6156fe:c.instructions+=1;goto B6156fe;
case 0x615704:goto L615704;
case 0x615708:c.instructions+=3;goto B615708;
case 0x61570a:c.instructions+=2;goto B61570a;
case 0x615712:c.instructions+=1;goto B615712;
case 0x615714:goto L615714;
case 0x615717:c.instructions+=2;goto B615717;
case 0x61571b:c.instructions+=1;goto B61571b;
case 0x61571d:goto L61571d;
case 0x615723:c.instructions+=1;goto B615723;
case 0x615725:goto L615725;
case 0x61572a:c.instructions+=2;goto B61572a;
case 0x615730:c.instructions+=1;goto B615730;
case 0x615734:goto L615734;
case 0x615738:c.instructions+=10;goto B615738;
case 0x61573c:c.instructions+=9;goto B61573c;
case 0x61573e:c.instructions+=8;goto B61573e;
case 0x615742:c.instructions+=7;goto B615742;
case 0x615746:c.instructions+=6;goto B615746;
case 0x61574b:c.instructions+=5;goto B61574b;
case 0x61574d:c.instructions+=4;goto B61574d;
case 0x615750:c.instructions+=3;goto B615750;
case 0x615754:c.instructions+=2;goto B615754;
case 0x61575c:c.instructions+=1;goto B61575c;
case 0x61575e:goto L61575e;
case 0x615761:goto L615761;
case 0x615767:c.instructions+=2;goto B615767;
case 0x615769:c.instructions+=1;goto B615769;
case 0x61576b:goto L61576b;
case 0x61576e:goto L61576e;
case 0x615774:c.instructions+=2;goto B615774;
case 0x615776:c.instructions+=1;goto B615776;
case 0x615778:goto L615778;
case 0x61577b:goto L61577b;
case 0x61577d:c.instructions+=1;goto B61577d;
case 0x61577f:goto L61577f;
case 0x615781:c.instructions+=1;goto B615781;
case 0x615783:goto L615783;
case 0x61578b:c.instructions+=2;goto B61578b;
case 0x615793:c.instructions+=1;goto B615793;
case 0x615795:goto L615795;
case 0x615797:c.instructions+=1;goto B615797;
case 0x615799:goto L615799;
case 0x61579f:c.instructions+=2;goto B61579f;
case 0x6157a1:c.instructions+=1;goto B6157a1;
case 0x6157a3:goto L6157a3;
case 0x6157a7:c.instructions+=3;goto B6157a7;
case 0x6157ad:c.instructions+=2;goto B6157ad;
case 0x6157b1:c.instructions+=1;goto B6157b1;
case 0x6157b5:goto L6157b5;
case 0x6157b7:c.instructions+=1;goto B6157b7;
case 0x6157b9:goto L6157b9;
case 0x6157bf:c.instructions+=4;goto B6157bf;
case 0x6157c7:c.instructions+=3;goto B6157c7;
case 0x6157cb:c.instructions+=2;goto B6157cb;
case 0x6157cf:c.instructions+=1;goto B6157cf;
case 0x6157d1:goto L6157d1;
case 0x6157d3:c.instructions+=1;goto B6157d3;
case 0x6157d5:goto L6157d5;
case 0x6157db:c.instructions+=2;goto B6157db;
case 0x6157dd:c.instructions+=1;goto B6157dd;
case 0x6157df:goto L6157df;
case 0x6157e5:c.instructions+=6;goto B6157e5;
case 0x6157e9:c.instructions+=5;goto B6157e9;
case 0x6157ef:c.instructions+=4;goto B6157ef;
case 0x6157f1:c.instructions+=3;goto B6157f1;
case 0x6157f5:c.instructions+=2;goto B6157f5;
case 0x6157f9:c.instructions+=1;goto B6157f9;
case 0x6157fb:goto L6157fb;
case 0x6157fd:goto L6157fd;
case 0x615800:c.instructions+=3;goto B615800;
case 0x615806:c.instructions+=2;goto B615806;
case 0x615808:c.instructions+=1;goto B615808;
case 0x61580a:goto L61580a;
case 0x61580d:c.instructions+=3;goto B61580d;
case 0x615810:c.instructions+=2;goto B615810;
case 0x615812:c.instructions+=1;goto B615812;
case 0x615814:goto L615814;
case 0x615816:c.instructions+=2;goto B615816;
case 0x615817:c.instructions+=1;goto B615817;
case 0x61581c:goto L61581c;
case 0x61581f:c.instructions+=2;goto B61581f;
case 0x615821:c.instructions+=1;goto B615821;
case 0x615823:goto L615823;
case 0x61582b:goto L61582b;
case 0x61582d:c.instructions+=1;goto B61582d;
case 0x61582f:goto L61582f;
case 0x615835:c.instructions+=1;goto B615835;
case 0x615837:goto L615837;
case 0x615839:goto L615839;
case 0x61583b:c.instructions+=1;goto B61583b;
case 0x61583d:goto L61583d;
case 0x615841:c.instructions+=2;goto B615841;
case 0x615845:c.instructions+=1;goto B615845;
case 0x615847:goto L615847;
case 0x61584f:goto L61584f;
case 0x615855:c.instructions+=3;goto B615855;
case 0x615857:c.instructions+=2;goto B615857;
case 0x615859:c.instructions+=1;goto B615859;
case 0x61585f:goto L61585f;
case 0x615860:goto L615860;
case 0x615863:c.instructions+=6;goto B615863;
case 0x615865:c.instructions+=5;goto B615865;
case 0x615867:c.instructions+=4;goto B615867;
case 0x615869:c.instructions+=3;goto B615869;
case 0x61586e:c.instructions+=2;goto B61586e;
case 0x615872:c.instructions+=1;goto B615872;
case 0x615874:goto L615874;
case 0x615878:c.instructions+=2;goto B615878;
case 0x61587a:c.instructions+=1;goto B61587a;
case 0x61587c:goto L61587c;
case 0x615882:c.instructions+=2;goto B615882;
case 0x615884:c.instructions+=1;goto B615884;
case 0x61588a:goto L61588a;
case 0x61588e:c.instructions+=5;goto B61588e;
case 0x615892:c.instructions+=4;goto B615892;
case 0x615898:c.instructions+=3;goto B615898;
case 0x61589c:c.instructions+=2;goto B61589c;
case 0x6158a1:c.instructions+=1;goto B6158a1;
case 0x6158a3:goto L6158a3;
case 0x6158a8:c.instructions+=1;goto B6158a8;
case 0x6158aa:goto L6158aa;
case 0x6158ae:c.instructions+=2;goto B6158ae;
case 0x6158b0:c.instructions+=1;goto B6158b0;
case 0x6158b2:goto L6158b2;
case 0x6158b8:c.instructions+=2;goto B6158b8;
case 0x6158ba:c.instructions+=1;goto B6158ba;
case 0x6158c0:goto L6158c0;
case 0x6158c4:c.instructions+=5;goto B6158c4;
case 0x6158c8:c.instructions+=4;goto B6158c8;
case 0x6158cc:c.instructions+=3;goto B6158cc;
case 0x6158d2:c.instructions+=2;goto B6158d2;
case 0x6158d7:c.instructions+=1;goto B6158d7;
case 0x6158d9:goto L6158d9;
case 0x6158de:c.instructions+=1;goto B6158de;
case 0x6158e0:goto L6158e0;
case 0x6158e4:c.instructions+=1;goto B6158e4;
case 0x6158e6:goto L6158e6;
case 0x6158eb:c.instructions+=1;goto B6158eb;
case 0x6158ed:goto L6158ed;
case 0x6158f1:c.instructions+=1;goto B6158f1;
case 0x6158f3:goto L6158f3;
case 0x6158f8:c.instructions+=1;goto B6158f8;
case 0x6158fa:goto L6158fa;
case 0x6158fe:goto L6158fe;
case 0x615902:c.instructions+=1;goto B615902;
case 0x615907:goto L615907;
case 0x61590b:c.instructions+=2;goto B61590b;
case 0x61590e:c.instructions+=1;goto B61590e;
case 0x615910:goto L615910;
case 0x615912:c.instructions+=1;goto B615912;
case 0x615914:goto L615914;
case 0x615919:goto L615919;
case 0x61591c:c.instructions+=1;goto B61591c;
case 0x61591e:goto L61591e;
case 0x615920:c.instructions+=1;goto B615920;
case 0x615926:goto L615926;
case 0x61592a:c.instructions+=4;goto B61592a;
case 0x615930:c.instructions+=3;goto B615930;
case 0x615932:c.instructions+=2;goto B615932;
case 0x615935:c.instructions+=1;goto B615935;
case 0x61593b:goto L61593b;
case 0x61593f:c.instructions+=4;goto B61593f;
case 0x615945:c.instructions+=3;goto B615945;
case 0x615947:c.instructions+=2;goto B615947;
case 0x61594a:c.instructions+=1;goto B61594a;
case 0x61594c:goto L61594c;
case 0x615954:goto L615954;
case 0x615957:c.instructions+=4;goto B615957;
case 0x61595d:c.instructions+=3;goto B61595d;
case 0x61595f:c.instructions+=2;goto B61595f;
case 0x615962:c.instructions+=1;goto B615962;
case 0x615964:goto L615964;
case 0x615968:c.instructions+=2;goto B615968;
case 0x61596b:c.instructions+=1;goto B61596b;
case 0x61596f:goto L61596f;
case 0x615972:c.instructions+=2;goto B615972;
case 0x615974:c.instructions+=1;goto B615974;
case 0x615976:goto L615976;
case 0x615979:c.instructions+=10;goto B615979;
case 0x61597a:c.instructions+=9;goto B61597a;
case 0x61597e:c.instructions+=8;goto B61597e;
case 0x615980:c.instructions+=7;goto B615980;
case 0x615982:c.instructions+=6;goto B615982;
case 0x615984:c.instructions+=5;goto B615984;
case 0x615985:c.instructions+=4;goto B615985;
case 0x615986:c.instructions+=3;goto B615986;
case 0x615987:c.instructions+=2;goto B615987;
case 0x615988:c.instructions+=1;goto B615988;
case 0x61598a:goto L61598a;
case 0x61598e:c.instructions+=2;goto B61598e;
case 0x615990:c.instructions+=1;goto B615990;
case 0x615992:goto L615992;
case 0x615999:c.instructions+=1;goto B615999;
case 0x61599b:goto L61599b;
case 0x61599c:c.instructions+=4;goto B61599c;
case 0x61599e:c.instructions+=3;goto B61599e;
case 0x6159a0:c.instructions+=2;goto B6159a0;
case 0x6159a2:c.instructions+=1;goto B6159a2;
case 0x6159a4:goto L6159a4;
case 0x6159a7:c.instructions+=18;goto B6159a7;
case 0x6159a8:c.instructions+=17;goto B6159a8;
case 0x6159ab:c.instructions+=16;goto B6159ab;
case 0x6159ae:c.instructions+=15;goto B6159ae;
case 0x6159b0:c.instructions+=14;goto B6159b0;
case 0x6159b2:c.instructions+=13;goto B6159b2;
case 0x6159b5:c.instructions+=12;goto B6159b5;
case 0x6159b7:c.instructions+=11;goto B6159b7;
case 0x6159ba:c.instructions+=10;goto B6159ba;
case 0x6159bc:c.instructions+=9;goto B6159bc;
case 0x6159be:c.instructions+=8;goto B6159be;
case 0x6159c1:c.instructions+=7;goto B6159c1;
case 0x6159c3:c.instructions+=6;goto B6159c3;
case 0x6159c6:c.instructions+=5;goto B6159c6;
case 0x6159ca:c.instructions+=4;goto B6159ca;
case 0x6159ce:c.instructions+=3;goto B6159ce;
case 0x6159cf:c.instructions+=2;goto B6159cf;
case 0x6159d1:c.instructions+=1;goto B6159d1;
case 0x6159d3:goto L6159d3;
case 0x6159d7:c.instructions+=5;goto B6159d7;
case 0x6159da:c.instructions+=4;goto B6159da;
case 0x6159db:c.instructions+=3;goto B6159db;
case 0x6159dc:c.instructions+=2;goto B6159dc;
case 0x6159dd:c.instructions+=1;goto B6159dd;
case 0x6159de:goto L6159de;
case 0x6159e3:goto L6159e3;
case 0x6159e6:goto L6159e6;
case 0x6159ea:c.instructions+=4;goto B6159ea;
case 0x6159ec:c.instructions+=3;goto B6159ec;
case 0x6159f1:c.instructions+=2;goto B6159f1;
case 0x6159f3:c.instructions+=1;goto B6159f3;
case 0x6159f9:goto L6159f9;
case 0x6159fa:c.instructions+=5;goto B6159fa;
case 0x6159fb:c.instructions+=4;goto B6159fb;
case 0x6159fc:c.instructions+=3;goto B6159fc;
case 0x6159fe:c.instructions+=2;goto B6159fe;
case 0x6159ff:c.instructions+=1;goto B6159ff;
case 0x615a10:goto L615a10;
case 0x615a13:c.instructions+=7;goto B615a13;
case 0x615a14:c.instructions+=6;goto B615a14;
case 0x615a16:c.instructions+=5;goto B615a16;
case 0x615a17:c.instructions+=4;goto B615a17;
case 0x615a1a:c.instructions+=3;goto B615a1a;
case 0x615a1c:c.instructions+=2;goto B615a1c;
case 0x615a20:c.instructions+=1;goto B615a20;
case 0x615a26:goto L615a26;
case 0x615a2c:c.instructions+=2;goto B615a2c;
case 0x615a2e:c.instructions+=1;goto B615a2e;
case 0x615a30:goto L615a30;
case 0x615a35:c.instructions+=1;goto B615a35;
case 0x615a37:goto L615a37;
case 0x615a3a:c.instructions+=4;goto B615a3a;
case 0x615a40:c.instructions+=3;goto B615a40;
case 0x615a42:c.instructions+=2;goto B615a42;
case 0x615a43:c.instructions+=1;goto B615a43;
case 0x615a48:goto L615a48;
case 0x615a4b:goto L615a4b;
case 0x615a4d:c.instructions+=6;goto B615a4d;
case 0x615a50:c.instructions+=5;goto B615a50;
case 0x615a56:c.instructions+=4;goto B615a56;
case 0x615a59:c.instructions+=3;goto B615a59;
case 0x615a5b:c.instructions+=2;goto B615a5b;
case 0x615a5f:c.instructions+=1;goto B615a5f;
case 0x615a61:goto L615a61;
case 0x615a66:c.instructions+=1;goto B615a66;
case 0x615a68:goto L615a68;
case 0x615a6b:c.instructions+=4;goto B615a6b;
case 0x615a71:c.instructions+=3;goto B615a71;
case 0x615a73:c.instructions+=2;goto B615a73;
case 0x615a74:c.instructions+=1;goto B615a74;
case 0x615a79:goto L615a79;
case 0x615a7c:goto L615a7c;
case 0x615a7e:c.instructions+=11;goto B615a7e;
case 0x615a81:c.instructions+=10;goto B615a81;
case 0x615a87:c.instructions+=9;goto B615a87;
case 0x615a8b:c.instructions+=8;goto B615a8b;
case 0x615a8e:c.instructions+=7;goto B615a8e;
case 0x615a90:c.instructions+=6;goto B615a90;
case 0x615a91:c.instructions+=5;goto B615a91;
case 0x615a95:c.instructions+=4;goto B615a95;
case 0x615a96:c.instructions+=3;goto B615a96;
case 0x615a9a:c.instructions+=2;goto B615a9a;
case 0x615a9e:c.instructions+=1;goto B615a9e;
case 0x615aa0:goto L615aa0;
case 0x615aa5:c.instructions+=14;goto B615aa5;
case 0x615aab:c.instructions+=13;goto B615aab;
case 0x615ab0:c.instructions+=12;goto B615ab0;
case 0x615ab2:c.instructions+=11;goto B615ab2;
case 0x615ab3:c.instructions+=10;goto B615ab3;
case 0x615ab9:c.instructions+=9;goto B615ab9;
case 0x615aba:c.instructions+=8;goto B615aba;
case 0x615ac0:c.instructions+=7;goto B615ac0;
case 0x615ac1:c.instructions+=6;goto B615ac1;
case 0x615ac2:c.instructions+=5;goto B615ac2;
case 0x615ac3:c.instructions+=4;goto B615ac3;
case 0x615ac4:c.instructions+=3;goto B615ac4;
case 0x615ac5:c.instructions+=2;goto B615ac5;
case 0x615ac7:c.instructions+=1;goto B615ac7;
case 0x615acc:goto L615acc;
case 0x615ad0:c.instructions+=3;goto B615ad0;
case 0x615ad6:c.instructions+=2;goto B615ad6;
case 0x615ad8:c.instructions+=1;goto B615ad8;
case 0x615ade:goto L615ade;
case 0x615ae2:c.instructions+=2;goto B615ae2;
case 0x615ae4:c.instructions+=1;goto B615ae4;
case 0x615aea:goto L615aea;
case 0x615af0:c.instructions+=6;goto B615af0;
case 0x615af3:c.instructions+=5;goto B615af3;
case 0x615af9:c.instructions+=4;goto B615af9;
case 0x615afb:c.instructions+=3;goto B615afb;
case 0x615afd:c.instructions+=2;goto B615afd;
case 0x615afe:c.instructions+=1;goto B615afe;
case 0x615b03:goto L615b03;
case 0x615b07:c.instructions+=17;goto B615b07;
case 0x615b0b:c.instructions+=16;goto B615b0b;
case 0x615b11:c.instructions+=15;goto B615b11;
case 0x615b14:c.instructions+=14;goto B615b14;
case 0x615b15:c.instructions+=13;goto B615b15;
case 0x615b1b:c.instructions+=12;goto B615b1b;
case 0x615b1d:c.instructions+=11;goto B615b1d;
case 0x615b1e:c.instructions+=10;goto B615b1e;
case 0x615b1f:c.instructions+=9;goto B615b1f;
case 0x615b25:c.instructions+=8;goto B615b25;
case 0x615b26:c.instructions+=7;goto B615b26;
case 0x615b2c:c.instructions+=6;goto B615b2c;
case 0x615b2d:c.instructions+=5;goto B615b2d;
case 0x615b2e:c.instructions+=4;goto B615b2e;
case 0x615b2f:c.instructions+=3;goto B615b2f;
case 0x615b30:c.instructions+=2;goto B615b30;
case 0x615b32:c.instructions+=1;goto B615b32;
case 0x615b37:goto L615b37;
case 0x615b3d:c.instructions+=11;goto B615b3d;
case 0x615b41:c.instructions+=10;goto B615b41;
case 0x615b47:c.instructions+=9;goto B615b47;
case 0x615b4e:c.instructions+=8;goto B615b4e;
case 0x615b4f:c.instructions+=7;goto B615b4f;
case 0x615b51:c.instructions+=6;goto B615b51;
case 0x615b52:c.instructions+=5;goto B615b52;
case 0x615b56:c.instructions+=4;goto B615b56;
case 0x615b59:c.instructions+=3;goto B615b59;
case 0x615b5d:c.instructions+=2;goto B615b5d;
case 0x615b63:c.instructions+=1;goto B615b63;
case 0x615b68:goto L615b68;
case 0x615b6e:c.instructions+=13;goto B615b6e;
case 0x615b74:c.instructions+=12;goto B615b74;
case 0x615b77:c.instructions+=11;goto B615b77;
case 0x615b7d:c.instructions+=10;goto B615b7d;
case 0x615b7f:c.instructions+=9;goto B615b7f;
case 0x615b80:c.instructions+=8;goto B615b80;
case 0x615b86:c.instructions+=7;goto B615b86;
case 0x615b87:c.instructions+=6;goto B615b87;
case 0x615b88:c.instructions+=5;goto B615b88;
case 0x615b89:c.instructions+=4;goto B615b89;
case 0x615b8a:c.instructions+=3;goto B615b8a;
case 0x615b8b:c.instructions+=2;goto B615b8b;
case 0x615b8d:c.instructions+=1;goto B615b8d;
case 0x615b92:goto L615b92;
case 0x615b96:c.instructions+=3;goto B615b96;
case 0x615b9c:c.instructions+=2;goto B615b9c;
case 0x615b9e:c.instructions+=1;goto B615b9e;
case 0x615ba0:goto L615ba0;
case 0x615ba6:c.instructions+=14;goto B615ba6;
case 0x615bac:c.instructions+=13;goto B615bac;
case 0x615bb1:c.instructions+=12;goto B615bb1;
case 0x615bb3:c.instructions+=11;goto B615bb3;
case 0x615bb4:c.instructions+=10;goto B615bb4;
case 0x615bba:c.instructions+=9;goto B615bba;
case 0x615bbb:c.instructions+=8;goto B615bbb;
case 0x615bc1:c.instructions+=7;goto B615bc1;
case 0x615bc2:c.instructions+=6;goto B615bc2;
case 0x615bc3:c.instructions+=5;goto B615bc3;
case 0x615bc4:c.instructions+=4;goto B615bc4;
case 0x615bc5:c.instructions+=3;goto B615bc5;
case 0x615bc6:c.instructions+=2;goto B615bc6;
case 0x615bc8:c.instructions+=1;goto B615bc8;
case 0x615bcd:goto L615bcd;
case 0x615bd1:c.instructions+=3;goto B615bd1;
case 0x615bd7:c.instructions+=2;goto B615bd7;
case 0x615bd9:c.instructions+=1;goto B615bd9;
case 0x615bdf:goto L615bdf;
case 0x615be3:c.instructions+=2;goto B615be3;
case 0x615be5:c.instructions+=1;goto B615be5;
case 0x615be7:goto L615be7;
case 0x615bed:c.instructions+=2;goto B615bed;
case 0x615bef:c.instructions+=1;goto B615bef;
case 0x615bf1:goto L615bf1;
case 0x615bf8:c.instructions+=1;goto B615bf8;
case 0x615bfe:goto L615bfe;
case 0x615c00:c.instructions+=2;goto B615c00;
case 0x615c08:c.instructions+=1;goto B615c08;
case 0x615c0a:goto L615c0a;
case 0x615c10:c.instructions+=6;goto B615c10;
case 0x615c13:c.instructions+=5;goto B615c13;
case 0x615c19:c.instructions+=4;goto B615c19;
case 0x615c1b:c.instructions+=3;goto B615c1b;
case 0x615c1d:c.instructions+=2;goto B615c1d;
case 0x615c1e:c.instructions+=1;goto B615c1e;
case 0x615c23:goto L615c23;
case 0x615c27:c.instructions+=1;goto B615c27;
case 0x615c2a:goto L615c2a;
case 0x615c2e:c.instructions+=15;goto B615c2e;
case 0x615c34:c.instructions+=14;goto B615c34;
case 0x615c35:c.instructions+=13;goto B615c35;
case 0x615c3b:c.instructions+=12;goto B615c3b;
case 0x615c3d:c.instructions+=11;goto B615c3d;
case 0x615c3e:c.instructions+=10;goto B615c3e;
case 0x615c44:c.instructions+=9;goto B615c44;
case 0x615c45:c.instructions+=8;goto B615c45;
case 0x615c4b:c.instructions+=7;goto B615c4b;
case 0x615c4c:c.instructions+=6;goto B615c4c;
case 0x615c4d:c.instructions+=5;goto B615c4d;
case 0x615c4e:c.instructions+=4;goto B615c4e;
case 0x615c4f:c.instructions+=3;goto B615c4f;
case 0x615c50:c.instructions+=2;goto B615c50;
case 0x615c52:c.instructions+=1;goto B615c52;
case 0x615c57:goto L615c57;
case 0x615c5d:c.instructions+=11;goto B615c5d;
case 0x615c61:c.instructions+=10;goto B615c61;
case 0x615c67:c.instructions+=9;goto B615c67;
case 0x615c68:c.instructions+=8;goto B615c68;
case 0x615c6a:c.instructions+=7;goto B615c6a;
case 0x615c6b:c.instructions+=6;goto B615c6b;
case 0x615c72:c.instructions+=5;goto B615c72;
case 0x615c75:c.instructions+=4;goto B615c75;
case 0x615c79:c.instructions+=3;goto B615c79;
case 0x615c7d:c.instructions+=2;goto B615c7d;
case 0x615c83:c.instructions+=1;goto B615c83;
case 0x615c88:goto L615c88;
case 0x615c8e:c.instructions+=13;goto B615c8e;
case 0x615c91:c.instructions+=12;goto B615c91;
case 0x615c97:c.instructions+=11;goto B615c97;
case 0x615c99:c.instructions+=10;goto B615c99;
case 0x615c9a:c.instructions+=9;goto B615c9a;
case 0x615ca0:c.instructions+=8;goto B615ca0;
case 0x615ca1:c.instructions+=7;goto B615ca1;
case 0x615ca7:c.instructions+=6;goto B615ca7;
case 0x615ca8:c.instructions+=5;goto B615ca8;
case 0x615ca9:c.instructions+=4;goto B615ca9;
case 0x615caa:c.instructions+=3;goto B615caa;
case 0x615cab:c.instructions+=2;goto B615cab;
case 0x615cad:c.instructions+=1;goto B615cad;
case 0x615cb2:goto L615cb2;
case 0x615cb3:c.instructions+=1;goto B615cb3;
case 0x615cb4:goto L615cb4;
case 0x615cb5:c.instructions+=3;goto B615cb5;
case 0x615cb6:c.instructions+=2;goto B615cb6;
case 0x615cb9:c.instructions+=1;goto B615cb9;
case 0x615cc0:goto L615cc0;
case 0x615cc1:c.instructions+=12;goto B615cc1;
case 0x615cc3:c.instructions+=11;goto B615cc3;
case 0x615cc6:c.instructions+=10;goto B615cc6;
case 0x615ccc:c.instructions+=9;goto B615ccc;
case 0x615ccf:c.instructions+=8;goto B615ccf;
case 0x615cd0:c.instructions+=7;goto B615cd0;
case 0x615cd6:c.instructions+=6;goto B615cd6;
case 0x615cd7:c.instructions+=5;goto B615cd7;
case 0x615cd8:c.instructions+=4;goto B615cd8;
case 0x615cdf:c.instructions+=3;goto B615cdf;
case 0x615ce1:c.instructions+=2;goto B615ce1;
case 0x615ce4:c.instructions+=1;goto B615ce4;
case 0x615cea:goto L615cea;
case 0x615ced:c.instructions+=4;goto B615ced;
case 0x615cf0:c.instructions+=3;goto B615cf0;
case 0x615cf3:c.instructions+=2;goto B615cf3;
case 0x615cf5:c.instructions+=1;goto B615cf5;
case 0x615cfb:goto L615cfb;
case 0x615cfe:c.instructions+=3;goto B615cfe;
case 0x615d05:c.instructions+=2;goto B615d05;
case 0x615d0c:c.instructions+=1;goto B615d0c;
case 0x615d0e:goto L615d0e;
case 0x615d11:c.instructions+=1;goto B615d11;
case 0x615d13:goto L615d13;
case 0x615d19:c.instructions+=2;goto B615d19;
case 0x615d1b:c.instructions+=1;goto B615d1b;
case 0x615d1d:goto L615d1d;
case 0x615d20:c.instructions+=4;goto B615d20;
case 0x615d23:c.instructions+=3;goto B615d23;
case 0x615d29:c.instructions+=2;goto B615d29;
case 0x615d2b:c.instructions+=1;goto B615d2b;
case 0x615d32:goto L615d32;
case 0x615d35:c.instructions+=4;goto B615d35;
case 0x615d36:c.instructions+=3;goto B615d36;
case 0x615d3a:c.instructions+=2;goto B615d3a;
case 0x615d3b:c.instructions+=1;goto B615d3b;
case 0x615d40:goto L615d40;
case 0x615d43:c.instructions+=11;goto B615d43;
case 0x615d46:c.instructions+=10;goto B615d46;
case 0x615d48:c.instructions+=9;goto B615d48;
case 0x615d4a:c.instructions+=8;goto B615d4a;
case 0x615d51:c.instructions+=7;goto B615d51;
case 0x615d54:c.instructions+=6;goto B615d54;
case 0x615d57:c.instructions+=5;goto B615d57;
case 0x615d5e:c.instructions+=4;goto B615d5e;
case 0x615d60:c.instructions+=3;goto B615d60;
case 0x615d67:c.instructions+=2;goto B615d67;
case 0x615d72:c.instructions+=1;goto B615d72;
case 0x615d77:goto L615d77;
case 0x615d79:c.instructions+=2;goto B615d79;
case 0x615d80:c.instructions+=1;goto B615d80;
case 0x615d86:goto L615d86;
case 0x615d90:goto L615d90;
case 0x615d93:c.instructions+=4;goto B615d93;
case 0x615d94:c.instructions+=3;goto B615d94;
case 0x615d9b:c.instructions+=2;goto B615d9b;
case 0x615d9c:c.instructions+=1;goto B615d9c;
case 0x615da1:goto L615da1;
case 0x615da4:c.instructions+=8;goto B615da4;
case 0x615da7:c.instructions+=7;goto B615da7;
case 0x615dae:c.instructions+=6;goto B615dae;
case 0x615db1:c.instructions+=5;goto B615db1;
case 0x615db4:c.instructions+=4;goto B615db4;
case 0x615db6:c.instructions+=3;goto B615db6;
case 0x615dbd:c.instructions+=2;goto B615dbd;
case 0x615dc4:c.instructions+=1;goto B615dc4;
case 0x615dc6:goto L615dc6;
case 0x615dcd:c.instructions+=2;goto B615dcd;
case 0x615dd4:c.instructions+=1;goto B615dd4;
case 0x615dd6:goto L615dd6;
case 0x615dd8:c.instructions+=2;goto B615dd8;
case 0x615dda:c.instructions+=1;goto B615dda;
case 0x615de0:goto L615de0;
case 0x615de3:c.instructions+=8;goto B615de3;
case 0x615de5:c.instructions+=7;goto B615de5;
case 0x615dec:c.instructions+=6;goto B615dec;
case 0x615df0:c.instructions+=5;goto B615df0;
case 0x615df7:c.instructions+=4;goto B615df7;
case 0x615df8:c.instructions+=3;goto B615df8;
case 0x615dfc:c.instructions+=2;goto B615dfc;
case 0x615dfd:c.instructions+=1;goto B615dfd;
case 0x615e02:goto L615e02;
case 0x615e05:c.instructions+=3;goto B615e05;
case 0x615e08:c.instructions+=2;goto B615e08;
case 0x615e0a:c.instructions+=1;goto B615e0a;
case 0x615e0c:goto L615e0c;
case 0x615e0f:c.instructions+=4;goto B615e0f;
case 0x615e12:c.instructions+=3;goto B615e12;
case 0x615e15:c.instructions+=2;goto B615e15;
case 0x615e19:c.instructions+=1;goto B615e19;
case 0x615e1b:goto L615e1b;
case 0x615e1e:c.instructions+=14;goto B615e1e;
case 0x615e21:c.instructions+=13;goto B615e21;
case 0x615e23:c.instructions+=12;goto B615e23;
case 0x615e26:c.instructions+=11;goto B615e26;
case 0x615e2d:c.instructions+=10;goto B615e2d;
case 0x615e34:c.instructions+=9;goto B615e34;
case 0x615e37:c.instructions+=8;goto B615e37;
case 0x615e3e:c.instructions+=7;goto B615e3e;
case 0x615e40:c.instructions+=6;goto B615e40;
case 0x615e47:c.instructions+=5;goto B615e47;
case 0x615e4a:c.instructions+=4;goto B615e4a;
case 0x615e4c:c.instructions+=3;goto B615e4c;
case 0x615e50:c.instructions+=2;goto B615e50;
case 0x615e57:c.instructions+=1;goto B615e57;
case 0x615e5a:goto L615e5a;
case 0x615e5e:c.instructions+=11;goto B615e5e;
case 0x615e62:c.instructions+=10;goto B615e62;
case 0x615e64:c.instructions+=9;goto B615e64;
case 0x615e68:c.instructions+=8;goto B615e68;
case 0x615e6b:c.instructions+=7;goto B615e6b;
case 0x615e6f:c.instructions+=6;goto B615e6f;
case 0x615e71:c.instructions+=5;goto B615e71;
case 0x615e73:c.instructions+=4;goto B615e73;
case 0x615e77:c.instructions+=3;goto B615e77;
case 0x615e7f:c.instructions+=2;goto B615e7f;
case 0x615e86:c.instructions+=1;goto B615e86;
case 0x615e88:goto L615e88;
case 0x615e8c:c.instructions+=8;goto B615e8c;
case 0x615e92:c.instructions+=7;goto B615e92;
case 0x615e96:c.instructions+=6;goto B615e96;
case 0x615e9a:c.instructions+=5;goto B615e9a;
case 0x615ea0:c.instructions+=4;goto B615ea0;
case 0x615ea4:c.instructions+=3;goto B615ea4;
case 0x615ea8:c.instructions+=2;goto B615ea8;
case 0x615eae:c.instructions+=1;goto B615eae;
case 0x615eb2:goto L615eb2;
case 0x615eb5:c.instructions+=3;goto B615eb5;
case 0x615eb7:c.instructions+=2;goto B615eb7;
case 0x615ebe:c.instructions+=1;goto B615ebe;
case 0x615ec0:goto L615ec0;
case 0x615ec4:c.instructions+=8;goto B615ec4;
case 0x615eca:c.instructions+=7;goto B615eca;
case 0x615ece:c.instructions+=6;goto B615ece;
case 0x615ed2:c.instructions+=5;goto B615ed2;
case 0x615ed8:c.instructions+=4;goto B615ed8;
case 0x615edc:c.instructions+=3;goto B615edc;
case 0x615ee0:c.instructions+=2;goto B615ee0;
case 0x615ee6:c.instructions+=1;goto B615ee6;
case 0x615eea:goto L615eea;
case 0x615eed:c.instructions+=4;goto B615eed;
case 0x615eef:c.instructions+=3;goto B615eef;
case 0x615ef1:c.instructions+=2;goto B615ef1;
case 0x615ef8:c.instructions+=1;goto B615ef8;
case 0x615efa:goto L615efa;
case 0x615efe:c.instructions+=8;goto B615efe;
case 0x615f04:c.instructions+=7;goto B615f04;
case 0x615f08:c.instructions+=6;goto B615f08;
case 0x615f0c:c.instructions+=5;goto B615f0c;
case 0x615f12:c.instructions+=4;goto B615f12;
case 0x615f16:c.instructions+=3;goto B615f16;
case 0x615f1a:c.instructions+=2;goto B615f1a;
case 0x615f20:c.instructions+=1;goto B615f20;
case 0x615f24:goto L615f24;
case 0x615f28:c.instructions+=51;goto B615f28;
case 0x615f2f:c.instructions+=50;goto B615f2f;
case 0x615f36:c.instructions+=49;goto B615f36;
case 0x615f3a:c.instructions+=48;goto B615f3a;
case 0x615f3c:c.instructions+=47;goto B615f3c;
case 0x615f40:c.instructions+=46;goto B615f40;
case 0x615f44:c.instructions+=45;goto B615f44;
case 0x615f46:c.instructions+=44;goto B615f46;
case 0x615f4a:c.instructions+=43;goto B615f4a;
case 0x615f4e:c.instructions+=42;goto B615f4e;
case 0x615f50:c.instructions+=41;goto B615f50;
case 0x615f57:c.instructions+=40;goto B615f57;
case 0x615f5b:c.instructions+=39;goto B615f5b;
case 0x615f62:c.instructions+=38;goto B615f62;
case 0x615f69:c.instructions+=37;goto B615f69;
case 0x615f6d:c.instructions+=36;goto B615f6d;
case 0x615f6f:c.instructions+=35;goto B615f6f;
case 0x615f73:c.instructions+=34;goto B615f73;
case 0x615f77:c.instructions+=33;goto B615f77;
case 0x615f79:c.instructions+=32;goto B615f79;
case 0x615f7d:c.instructions+=31;goto B615f7d;
case 0x615f81:c.instructions+=30;goto B615f81;
case 0x615f83:c.instructions+=29;goto B615f83;
case 0x615f8a:c.instructions+=28;goto B615f8a;
case 0x615f91:c.instructions+=27;goto B615f91;
case 0x615f95:c.instructions+=26;goto B615f95;
case 0x615f99:c.instructions+=25;goto B615f99;
case 0x615f9d:c.instructions+=24;goto B615f9d;
case 0x615f9f:c.instructions+=23;goto B615f9f;
case 0x615fa3:c.instructions+=22;goto B615fa3;
case 0x615fa7:c.instructions+=21;goto B615fa7;
case 0x615fa9:c.instructions+=20;goto B615fa9;
case 0x615fad:c.instructions+=19;goto B615fad;
case 0x615fb4:c.instructions+=18;goto B615fb4;
case 0x615fb6:c.instructions+=17;goto B615fb6;
case 0x615fbd:c.instructions+=16;goto B615fbd;
case 0x615fc4:c.instructions+=15;goto B615fc4;
case 0x615fc8:c.instructions+=14;goto B615fc8;
case 0x615fcc:c.instructions+=13;goto B615fcc;
case 0x615fd0:c.instructions+=12;goto B615fd0;
case 0x615fd2:c.instructions+=11;goto B615fd2;
case 0x615fd6:c.instructions+=10;goto B615fd6;
case 0x615fda:c.instructions+=9;goto B615fda;
case 0x615fdc:c.instructions+=8;goto B615fdc;
case 0x615fe0:c.instructions+=7;goto B615fe0;
case 0x615fe7:c.instructions+=6;goto B615fe7;
case 0x615feb:c.instructions+=5;goto B615feb;
case 0x615ff2:c.instructions+=4;goto B615ff2;
case 0x615ff9:c.instructions+=3;goto B615ff9;
case 0x615ffd:c.instructions+=2;goto B615ffd;
case 0x615fff:c.instructions+=1;goto B615fff;
default:missing_instruction(c.pc);}
B615000:L615000:{c.instructions+=2;NFSU2_TR(0x615000);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B615007:{NFSU2_TR(0x615007);
{goto L615010;}
}
B615010:L615010:{c.instructions+=7;NFSU2_TR(0x615010);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615013:{NFSU2_TR(0x615013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615016:{NFSU2_TR(0x615016);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61501d:{NFSU2_TR(0x61501d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61501e:{NFSU2_TR(0x61501e);
u8 U[16];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B615025:{NFSU2_TR(0x615025);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615029:{NFSU2_TR(0x615029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61502eull));
TAIL_STATIC(0x403d60u,403);
}
B61502e:L61502e:{c.instructions+=3;NFSU2_TR(0x61502e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615031:{NFSU2_TR(0x615031);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615033:{NFSU2_TR(0x615033);
if(r1(R+518)){{goto L615047;}}
}
B615035:L615035:{c.instructions+=3;NFSU2_TR(0x615035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615038:{NFSU2_TR(0x615038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615039:{NFSU2_TR(0x615039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61503eull));
TAIL_STATIC(0x50d510u,50d);
}
B61503e:L61503e:{c.instructions+=3;NFSU2_TR(0x61503e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615042:{NFSU2_TR(0x615042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615045:{NFSU2_TR(0x615045);
{goto L61506f;}
}
B615047:L615047:{c.instructions+=3;NFSU2_TR(0x615047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61504a:{NFSU2_TR(0x61504a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61504b:{NFSU2_TR(0x61504b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615050ull));
TAIL_STATIC(0x403d80u,403);
}
B615050:L615050:{c.instructions+=3;NFSU2_TR(0x615050);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615053:{NFSU2_TR(0x615053);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615055:{NFSU2_TR(0x615055);
if(r1(R+518)){{goto L615069;}}
}
B615057:L615057:{c.instructions+=3;NFSU2_TR(0x615057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61505a:{NFSU2_TR(0x61505a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61505b:{NFSU2_TR(0x61505b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615060ull));
TAIL_STATIC(0x403da0u,403);
}
B615060:L615060:{c.instructions+=3;NFSU2_TR(0x615060);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615064:{NFSU2_TR(0x615064);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615067:{NFSU2_TR(0x615067);
{goto L61506f;}
}
B615069:L615069:{c.instructions+=1;NFSU2_TR(0x615069);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61506f:L61506f:{c.instructions+=12;NFSU2_TR(0x61506f);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B615076:{NFSU2_TR(0x615076);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B615078:{NFSU2_TR(0x615078);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B61507a:{NFSU2_TR(0x61507a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61507e:{NFSU2_TR(0x61507e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615082:{NFSU2_TR(0x615082);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615084:{NFSU2_TR(0x615084);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61508b:{NFSU2_TR(0x61508b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61508f:{NFSU2_TR(0x61508f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B615095:{NFSU2_TR(0x615095);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B615097:{NFSU2_TR(0x615097);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61509a:{NFSU2_TR(0x61509a);
if(r1(R+514)){{goto L6150ab;}}
}
B61509c:L61509c:{c.instructions+=3;NFSU2_TR(0x61509c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6150a2:{NFSU2_TR(0x6150a2);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6150a9:{NFSU2_TR(0x6150a9);
{goto L6150ad;}
}
B6150ab:L6150ab:{c.instructions+=1;NFSU2_TR(0x6150ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6150ad:L6150ad:{c.instructions+=5;NFSU2_TR(0x6150ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6150b0:{NFSU2_TR(0x6150b0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6150b1:{NFSU2_TR(0x6150b1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B6150b4:{NFSU2_TR(0x6150b4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6150b6:{NFSU2_TR(0x6150b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x615010u);}goto L615010;}}
}
B6150bc:L6150bc:{c.instructions+=3;NFSU2_TR(0x6150bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6150bf:{NFSU2_TR(0x6150bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6150c1:{NFSU2_TR(0x6150c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L615138;}}
}
B6150c7:L6150c7:{c.instructions+=4;NFSU2_TR(0x6150c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6150ca:{NFSU2_TR(0x6150ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6150cb:{NFSU2_TR(0x6150cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6150cf:{NFSU2_TR(0x6150cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6150d3:L6150d3:{c.instructions+=4;NFSU2_TR(0x6150d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6150d7:{NFSU2_TR(0x6150d7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6150d9:{NFSU2_TR(0x6150d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6150db:{NFSU2_TR(0x6150db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L615132;}}
}
B6150dd:L6150dd:{c.instructions+=1;NFSU2_TR(0x6150dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B6150e0:L6150e0:{c.instructions+=5;NFSU2_TR(0x6150e0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6150e7:{NFSU2_TR(0x6150e7);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6150ee:{NFSU2_TR(0x6150ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6150f0:{NFSU2_TR(0x6150f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6150f3:{NFSU2_TR(0x6150f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61512d;}}
}
B6150f5:L6150f5:{c.instructions+=8;NFSU2_TR(0x6150f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6150fc:{NFSU2_TR(0x6150fc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615103:{NFSU2_TR(0x615103);
u8 U[16];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B61510a:{NFSU2_TR(0x61510a);
u8 U[16];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B615111:{NFSU2_TR(0x615111);
u8 U[16];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B615118:{NFSU2_TR(0x615118);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61511f:{NFSU2_TR(0x61511f);
u8 U[16];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B615126:{NFSU2_TR(0x615126);
u8 U[16];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61512d:L61512d:{c.instructions+=3;NFSU2_TR(0x61512d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61512e:{NFSU2_TR(0x61512e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B615130:{NFSU2_TR(0x615130);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6150e0u);}goto L6150e0;}}
}
B615132:L615132:{c.instructions+=2;NFSU2_TR(0x615132);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615136:{NFSU2_TR(0x615136);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6150d3u);}goto L6150d3;}}
}
B615138:L615138:{c.instructions+=4;NFSU2_TR(0x615138);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61513b:{NFSU2_TR(0x61513b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61513d:{NFSU2_TR(0x61513d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61513f:{NFSU2_TR(0x61513f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61518b;}}
}
B615141:L615141:{c.instructions+=2;NFSU2_TR(0x615141);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B615144:{NFSU2_TR(0x615144);
{goto L615150;}
}
B615150:L615150:{c.instructions+=3;NFSU2_TR(0x615150);
u8 U[16];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B615157:{NFSU2_TR(0x615157);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61515a:{NFSU2_TR(0x61515a);
w4(R+4,u32(0xcull));
}
B61515f:L61515f:{c.instructions+=1;NFSU2_TR(0x61515f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L615161;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61515fu);}goto L61515f;}
}
B615161:L615161:{c.instructions+=4;NFSU2_TR(0x615161);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B615164:{NFSU2_TR(0x615164);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B61516b:{NFSU2_TR(0x61516b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61516d:{NFSU2_TR(0x61516d);
if(r1(R+518)){{goto L615180;}}
}
B61516f:L61516f:{c.instructions+=3;NFSU2_TR(0x61516f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B615171:{NFSU2_TR(0x615171);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615173:{NFSU2_TR(0x615173);
if(r1(R+518)){{goto L615180;}}
}
B615175:L615175:{c.instructions+=2;NFSU2_TR(0x615175);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B615178:{NFSU2_TR(0x615178);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615180;}}
}
B61517a:L61517a:{c.instructions+=1;NFSU2_TR(0x61517a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B615180:L615180:{c.instructions+=5;NFSU2_TR(0x615180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615183:{NFSU2_TR(0x615183);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B615184:{NFSU2_TR(0x615184);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B615187:{NFSU2_TR(0x615187);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B615189:{NFSU2_TR(0x615189);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x615150u);}goto L615150;}}
}
B61518b:L61518b:{c.instructions+=7;NFSU2_TR(0x61518b);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615190:{NFSU2_TR(0x615190);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615192:{NFSU2_TR(0x615192);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615194:{NFSU2_TR(0x615194);
u8 U[4];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61519b:{NFSU2_TR(0x61519b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61519c:{NFSU2_TR(0x61519c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4bcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6151a7:{NFSU2_TR(0x6151a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6151acull));
TAIL_STATIC(0x75c401u,75c);
}
B6151ac:L6151ac:{c.instructions+=8;NFSU2_TR(0x6151ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6151b3:{NFSU2_TR(0x6151b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6151b4:{NFSU2_TR(0x6151b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6151b5:{NFSU2_TR(0x6151b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6151bc:{NFSU2_TR(0x6151bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6151bd:{NFSU2_TR(0x6151bd);
__builtin_memmove((R+16),(R+20),4);
}
B6151bf:{NFSU2_TR(0x6151bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6151c0:{NFSU2_TR(0x6151c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6151d0:L6151d0:{c.instructions+=15;NFSU2_TR(0x6151d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6151d3:{NFSU2_TR(0x6151d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6151d5:{NFSU2_TR(0x6151d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6151d9:{NFSU2_TR(0x6151d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6151dd:{NFSU2_TR(0x6151dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6151e1:{NFSU2_TR(0x6151e1);
__builtin_memmove((R+4),(R+0),4);
}
B6151e3:{NFSU2_TR(0x6151e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6151e5:{NFSU2_TR(0x6151e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6151e9:{NFSU2_TR(0x6151e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6151ec:{NFSU2_TR(0x6151ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6151f0:{NFSU2_TR(0x6151f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6151f3:{NFSU2_TR(0x6151f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6151f7:{NFSU2_TR(0x6151f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6151fa:{NFSU2_TR(0x6151fa);
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
B6151fd:{NFSU2_TR(0x6151fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615200:L615200:{c.instructions+=15;NFSU2_TR(0x615200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B615203:{NFSU2_TR(0x615203);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615206:{NFSU2_TR(0x615206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61520a:{NFSU2_TR(0x61520a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61520e:{NFSU2_TR(0x61520e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615212:{NFSU2_TR(0x615212);
__builtin_memmove((R+4),(R+0),4);
}
B615214:{NFSU2_TR(0x615214);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B615216:{NFSU2_TR(0x615216);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61521a:{NFSU2_TR(0x61521a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61521d:{NFSU2_TR(0x61521d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615221:{NFSU2_TR(0x615221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615224:{NFSU2_TR(0x615224);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615228:{NFSU2_TR(0x615228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61522b:{NFSU2_TR(0x61522b);
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
B61522e:{NFSU2_TR(0x61522e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615240:L615240:{c.instructions+=3;NFSU2_TR(0x615240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615244:{NFSU2_TR(0x615244);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B615246:{NFSU2_TR(0x615246);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61527a;}}
}
B615248:L615248:{c.instructions+=2;NFSU2_TR(0x615248);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61524b:{NFSU2_TR(0x61524b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61527a;}}
}
B61524d:L61524d:{c.instructions+=7;NFSU2_TR(0x61524d);
__builtin_memmove((R+8),(R+0),4);
}
B61524f:{NFSU2_TR(0x61524f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B615252:{NFSU2_TR(0x615252);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615253:{NFSU2_TR(0x615253);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x803698ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B615259:{NFSU2_TR(0x615259);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61525b:{NFSU2_TR(0x61525b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61525c:{NFSU2_TR(0x61525c);
if(r1(R+518)){{goto L61527a;}}
}
B61525e:L61525e:{c.instructions+=5;NFSU2_TR(0x61525e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615265:{NFSU2_TR(0x615265);
{u32 ea_=u32(u32(8403252u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61526b:{NFSU2_TR(0x61526b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61526d:{NFSU2_TR(0x61526d);
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
B615270:{NFSU2_TR(0x615270);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61527a;}}
}
B615272:L615272:{c.instructions+=2;NFSU2_TR(0x615272);
w4(R+0,u32(0x1ull));
}
B615277:{NFSU2_TR(0x615277);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61527a:L61527a:{c.instructions+=2;NFSU2_TR(0x61527a);
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
B61527c:{NFSU2_TR(0x61527c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615280:L615280:{c.instructions+=9;NFSU2_TR(0x615280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615281:{NFSU2_TR(0x615281);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615282:{NFSU2_TR(0x615282);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615283:{NFSU2_TR(0x615283);
__builtin_memmove((R+12),(R+4),4);
}
B615285:{NFSU2_TR(0x615285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B615287:{NFSU2_TR(0x615287);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615288:{NFSU2_TR(0x615288);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61528a:{NFSU2_TR(0x61528a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61528c:{NFSU2_TR(0x61528c);
if(r1(R+518)){{goto L61529b;}}
}
B61528e:L61528e:{c.instructions+=4;NFSU2_TR(0x61528e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615294:{NFSU2_TR(0x615294);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615298:{NFSU2_TR(0x615298);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615299:{NFSU2_TR(0x615299);
{goto L6152a8;}
}
B61529b:L61529b:{c.instructions+=4;NFSU2_TR(0x61529b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61529f:{NFSU2_TR(0x61529f);
__builtin_memmove((R+0),(R+28),4);
}
B6152a1:{NFSU2_TR(0x6152a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6152a2:{NFSU2_TR(0x6152a2);
{goto L6152a8;}
}
B6152a4:L6152a4:{c.instructions+=1;NFSU2_TR(0x6152a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6152a8:L6152a8:{c.instructions+=3;NFSU2_TR(0x6152a8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6152aa:{NFSU2_TR(0x6152aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6152ac:{NFSU2_TR(0x6152ac);
if(r1(R+518)){{goto L6152bd;}}
}
B6152ae:L6152ae:{c.instructions+=4;NFSU2_TR(0x6152ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6152b4:{NFSU2_TR(0x6152b4);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6152b8:{NFSU2_TR(0x6152b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B6152ba:{NFSU2_TR(0x6152ba);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B6152bd:L6152bd:{c.instructions+=8;NFSU2_TR(0x6152bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802740ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6152c4:{NFSU2_TR(0x6152c4);
__builtin_memmove((R+0),(R+28),4);
}
B6152c6:{NFSU2_TR(0x6152c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6152c9:{NFSU2_TR(0x6152c9);
u8 U[16];
w4(U+0,u32(u32(u32(0x70cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6152d0:{NFSU2_TR(0x6152d0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6152d2:{NFSU2_TR(0x6152d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6152d4:{NFSU2_TR(0x6152d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802740ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6152db:{NFSU2_TR(0x6152db);
if(r1(R+518)){{goto L6152ee;}}
}
B6152dd:L6152dd:{c.instructions+=4;NFSU2_TR(0x6152dd);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B6152e0:{NFSU2_TR(0x6152e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6152e6:{NFSU2_TR(0x6152e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x710ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6152ec:{NFSU2_TR(0x6152ec);
{goto L6152f1;}
}
B6152ee:L6152ee:{c.instructions+=1;NFSU2_TR(0x6152ee);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B6152f1:L6152f1:{c.instructions+=3;NFSU2_TR(0x6152f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802750ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6152f8:{NFSU2_TR(0x6152f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6152fe:{NFSU2_TR(0x6152fe);
if(r1(R+518)){{goto L61530c;}}
}
B615300:L615300:{c.instructions+=2;NFSU2_TR(0x615300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615306:{NFSU2_TR(0x615306);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x780ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61530c:L61530c:{c.instructions+=2;NFSU2_TR(0x61530c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61530f:{NFSU2_TR(0x61530f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615336;}}
}
B615311:L615311:{c.instructions+=3;NFSU2_TR(0x615311);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615313:{NFSU2_TR(0x615313);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x76cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615319:{NFSU2_TR(0x615319);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L615321;}}
}
B61531b:L61531b:{c.instructions+=3;NFSU2_TR(0x61531b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61531d:{NFSU2_TR(0x61531d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61531f:{NFSU2_TR(0x61531f);
{goto L615328;}
}
B615321:L615321:{c.instructions+=2;NFSU2_TR(0x615321);
w4(R+0,u32(0xd195be56ull));
}
B615326:{NFSU2_TR(0x615326);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615328:L615328:{c.instructions+=1;NFSU2_TR(0x615328);
if(r1(R+518)){{goto L615336;}}
}
B61532a:L61532a:{c.instructions+=2;NFSU2_TR(0x61532a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x76cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615330:{NFSU2_TR(0x615330);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x770ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615336:L615336:{c.instructions+=3;NFSU2_TR(0x615336);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B615337:{NFSU2_TR(0x615337);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61533a:{NFSU2_TR(0x61533a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6152a4u);}goto L6152a4;}}
}
B615340:L615340:{c.instructions+=5;NFSU2_TR(0x615340);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xac8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615346:{NFSU2_TR(0x615346);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x638ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61534c:{NFSU2_TR(0x61534c);
w4(R+4,u32(0x124ull));
}
B615351:{NFSU2_TR(0x615351);
__builtin_memmove((R+24),(R+20),4);
}
B615353:{NFSU2_TR(0x615353);
__builtin_memmove((R+28),(R+0),4);
}
B615355:L615355:{c.instructions+=1;NFSU2_TR(0x615355);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L615357;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x615355u);}goto L615355;}
}
B615357:L615357:{c.instructions+=6;NFSU2_TR(0x615357);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61535d:{NFSU2_TR(0x61535d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3fcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615367:{NFSU2_TR(0x615367);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61536a:{NFSU2_TR(0x61536a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B61536d:{NFSU2_TR(0x61536d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61536f:{NFSU2_TR(0x61536f);
if(r1(R+518)){{goto L615377;}}
}
B615371:L615371:{c.instructions+=2;NFSU2_TR(0x615371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615374:{NFSU2_TR(0x615374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615377:L615377:{c.instructions+=3;NFSU2_TR(0x615377);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61537d:{NFSU2_TR(0x61537d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xadcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B615383:{NFSU2_TR(0x615383);
if(r1(R+518)){{goto L615391;}}
}
B615385:L615385:{c.instructions+=2;NFSU2_TR(0x615385);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xadcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61538b:{NFSU2_TR(0x61538b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xae0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615391:L615391:{c.instructions+=3;NFSU2_TR(0x615391);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615397:{NFSU2_TR(0x615397);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61539d:{NFSU2_TR(0x61539d);
if(r1(R+518)){{goto L6153ab;}}
}
B61539f:L61539f:{c.instructions+=2;NFSU2_TR(0x61539f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153a5:{NFSU2_TR(0x6153a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153ab:L6153ab:{c.instructions+=2;NFSU2_TR(0x6153ab);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6153b0:{NFSU2_TR(0x6153b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6153b5ull));
TAIL_STATIC(0x43db50u,43d);
}
B6153b5:L6153b5:{c.instructions+=4;NFSU2_TR(0x6153b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xafcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6153bb:{NFSU2_TR(0x6153bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6153be:{NFSU2_TR(0x6153be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6153c0:{NFSU2_TR(0x6153c0);
if(r1(R+518)){{goto L6153ce;}}
}
B6153c2:L6153c2:{c.instructions+=2;NFSU2_TR(0x6153c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xafcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153c8:{NFSU2_TR(0x6153c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb00ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153ce:L6153ce:{c.instructions+=2;NFSU2_TR(0x6153ce);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6153d3:{NFSU2_TR(0x6153d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6153d8ull));
TAIL_STATIC(0x43db50u,43d);
}
B6153d8:L6153d8:{c.instructions+=4;NFSU2_TR(0x6153d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6153de:{NFSU2_TR(0x6153de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6153e1:{NFSU2_TR(0x6153e1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6153e3:{NFSU2_TR(0x6153e3);
if(r1(R+518)){{goto L6153f1;}}
}
B6153e5:L6153e5:{c.instructions+=2;NFSU2_TR(0x6153e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153eb:{NFSU2_TR(0x6153eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6153f1:L6153f1:{c.instructions+=4;NFSU2_TR(0x6153f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6153f7:{NFSU2_TR(0x6153f7);
__builtin_memmove((R+24),(R+20),4);
}
B6153f9:{NFSU2_TR(0x6153f9);
w4(R+4,u32(0x124ull));
}
B6153fe:{NFSU2_TR(0x6153fe);
__builtin_memmove((R+28),(R+0),4);
}
B615400:L615400:{c.instructions+=1;NFSU2_TR(0x615400);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L615402;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x615400u);}goto L615400;}
}
B615402:L615402:{c.instructions+=6;NFSU2_TR(0x615402);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615408:{NFSU2_TR(0x615408);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61540b:{NFSU2_TR(0x61540b);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B61540e:{NFSU2_TR(0x61540e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615410:{NFSU2_TR(0x615410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B615411:{NFSU2_TR(0x615411);
if(r1(R+518)){{goto L615419;}}
}
B615413:L615413:{c.instructions+=2;NFSU2_TR(0x615413);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615416:{NFSU2_TR(0x615416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615419:L615419:{c.instructions+=3;NFSU2_TR(0x615419);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61541f:{NFSU2_TR(0x61541f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B615425:{NFSU2_TR(0x615425);
if(r1(R+518)){{goto L615433;}}
}
B615427:L615427:{c.instructions+=2;NFSU2_TR(0x615427);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61542d:{NFSU2_TR(0x61542d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615433:L615433:{c.instructions+=3;NFSU2_TR(0x615433);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615439:{NFSU2_TR(0x615439);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61543f:{NFSU2_TR(0x61543f);
if(r1(R+518)){{goto L61544d;}}
}
B615441:L615441:{c.instructions+=2;NFSU2_TR(0x615441);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615447:{NFSU2_TR(0x615447);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61544d:L61544d:{c.instructions+=2;NFSU2_TR(0x61544d);
u8 U[4];
w4(U+0,u32(0x7a8520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615452:{NFSU2_TR(0x615452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615457ull));
TAIL_STATIC(0x43db50u,43d);
}
B615457:L615457:{c.instructions+=4;NFSU2_TR(0x615457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61545d:{NFSU2_TR(0x61545d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615460:{NFSU2_TR(0x615460);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615462:{NFSU2_TR(0x615462);
if(r1(R+518)){{goto L615470;}}
}
B615464:L615464:{c.instructions+=2;NFSU2_TR(0x615464);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61546a:{NFSU2_TR(0x61546a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615470:L615470:{c.instructions+=3;NFSU2_TR(0x615470);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615476:{NFSU2_TR(0x615476);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf9cull))));
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
B61547c:{NFSU2_TR(0x61547c);
if(r1(R+518)){{goto L61548a;}}
}
B61547e:L61547e:{c.instructions+=2;NFSU2_TR(0x61547e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615484:{NFSU2_TR(0x615484);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfa0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61548a:L61548a:{c.instructions+=5;NFSU2_TR(0x61548a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61548b:{NFSU2_TR(0x61548b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61548c:{NFSU2_TR(0x61548c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61548d:{NFSU2_TR(0x61548d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61548e:{NFSU2_TR(0x61548e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615490:L615490:{c.instructions+=10;NFSU2_TR(0x615490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615491:{NFSU2_TR(0x615491);
__builtin_memmove((R+20),(R+16),4);
}
B615493:{NFSU2_TR(0x615493);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B615496:{NFSU2_TR(0x615496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B615499:{NFSU2_TR(0x615499);
__builtin_memmove((R+0),gp(0x890080),4);
}
B61549e:{NFSU2_TR(0x61549e);
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
B6154a0:{NFSU2_TR(0x6154a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6154a1:{NFSU2_TR(0x6154a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6154a2:{NFSU2_TR(0x6154a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6154a3:{NFSU2_TR(0x6154a3);
if(r1(R+518)){{goto L615629;}}
}
B6154a9:L6154a9:{c.instructions+=3;NFSU2_TR(0x6154a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6154ab:{NFSU2_TR(0x6154ab);
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
B6154ad:{NFSU2_TR(0x6154ad);
if(r1(R+518)){{goto L615629;}}
}
B6154b3:L6154b3:{c.instructions+=1;NFSU2_TR(0x6154b3);
{goto L6154c0;}
}
B6154c0:L6154c0:{c.instructions+=3;NFSU2_TR(0x6154c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6154c6:{NFSU2_TR(0x6154c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6154c8:{NFSU2_TR(0x6154c8);
if(r1(R+518)){{goto L61561b;}}
}
B6154ce:L6154ce:{c.instructions+=4;NFSU2_TR(0x6154ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6154d1:{NFSU2_TR(0x6154d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6154d2:{NFSU2_TR(0x6154d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6154d3:{NFSU2_TR(0x6154d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6154d8ull));
TAIL_STATIC(0x60d4f0u,60d);
}
B6154d8:L6154d8:{c.instructions+=3;NFSU2_TR(0x6154d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6154db:{NFSU2_TR(0x6154db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6154dd:{NFSU2_TR(0x6154dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61561b;}}
}
B6154e3:L6154e3:{c.instructions+=5;NFSU2_TR(0x6154e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6154e6:{NFSU2_TR(0x6154e6);
w4(R+0,u32(0x1ull));
}
B6154eb:{NFSU2_TR(0x6154eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6154ed:{NFSU2_TR(0x6154ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6154f3:{NFSU2_TR(0x6154f3);
if(r1(R+518)){{goto L61561b;}}
}
B6154f9:L6154f9:{c.instructions+=28;NFSU2_TR(0x6154f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6154ff:{NFSU2_TR(0x6154ff);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615505:{NFSU2_TR(0x615505);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615508:{NFSU2_TR(0x615508);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61550b:{NFSU2_TR(0x61550b);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615511:{NFSU2_TR(0x615511);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615514:{NFSU2_TR(0x615514);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61551a:{NFSU2_TR(0x61551a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61551e:{NFSU2_TR(0x61551e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615522:{NFSU2_TR(0x615522);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B615524:{NFSU2_TR(0x615524);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615528:{NFSU2_TR(0x615528);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61552c:{NFSU2_TR(0x61552c);
__builtin_memmove((R+4),gp(0x802904),4);
}
B615532:{NFSU2_TR(0x615532);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615534:{NFSU2_TR(0x615534);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615538:{NFSU2_TR(0x615538);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61553e:{NFSU2_TR(0x61553e);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615541:{NFSU2_TR(0x615541);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615544:{NFSU2_TR(0x615544);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61554a:{NFSU2_TR(0x61554a);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61554d:{NFSU2_TR(0x61554d);
{u32 ea_=u32(u32(8399112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615553:{NFSU2_TR(0x615553);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615557:{NFSU2_TR(0x615557);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61555b:{NFSU2_TR(0x61555b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61555d:{NFSU2_TR(0x61555d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615561:{NFSU2_TR(0x615561);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615565:{NFSU2_TR(0x615565);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615569:{NFSU2_TR(0x615569);
if(r1(R+518)){{goto L61561b;}}
}
B61556f:L61556f:{c.instructions+=2;NFSU2_TR(0x61556f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B615575:{NFSU2_TR(0x615575);
if(r1(R+518)){{goto L615583;}}
}
B615577:L615577:{c.instructions+=3;NFSU2_TR(0x615577);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61557d:{NFSU2_TR(0x61557d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615581:{NFSU2_TR(0x615581);
{goto L61558a;}
}
B615583:L615583:{c.instructions+=2;NFSU2_TR(0x615583);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B615586:{NFSU2_TR(0x615586);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61558a:L61558a:{c.instructions+=2;NFSU2_TR(0x61558a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61558c:{NFSU2_TR(0x61558c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615591ull));
TAIL_STATIC(0x401e80u,401);
}
B615591:L615591:{c.instructions+=4;NFSU2_TR(0x615591);
__builtin_memmove((R+24),(R+0),4);
}
B615593:{NFSU2_TR(0x615593);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B615596:{NFSU2_TR(0x615596);
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
B615598:{NFSU2_TR(0x615598);
if(r1(R+518)){{goto L615629;}}
}
B61559e:L61559e:{c.instructions+=8;NFSU2_TR(0x61559e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6155a1:{NFSU2_TR(0x6155a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6155a4:{NFSU2_TR(0x6155a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6155aa:{NFSU2_TR(0x6155aa);
w4(R+8,u32(0x1ull));
}
B6155af:{NFSU2_TR(0x6155af);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6155b1:{NFSU2_TR(0x6155b1);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6155b3:{NFSU2_TR(0x6155b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x560ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6155b9:{NFSU2_TR(0x6155b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6155c1;}}
}
B6155bb:L6155bb:{c.instructions+=1;NFSU2_TR(0x6155bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6155c1:L6155c1:{c.instructions+=3;NFSU2_TR(0x6155c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6155c2:{NFSU2_TR(0x6155c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6155c3:{NFSU2_TR(0x6155c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6155c8ull));
TAIL_STATIC(0x4012b0u,401);
}
B6155c8:L6155c8:{c.instructions+=16;NFSU2_TR(0x6155c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6155cc:{NFSU2_TR(0x6155cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6155ce:{NFSU2_TR(0x6155ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6155d1:{NFSU2_TR(0x6155d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6155d4:{NFSU2_TR(0x6155d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6155d7:{NFSU2_TR(0x6155d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6155d8:{NFSU2_TR(0x6155d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6155db:{NFSU2_TR(0x6155db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6155de:{NFSU2_TR(0x6155de);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6155e2:{NFSU2_TR(0x6155e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6155e3:{NFSU2_TR(0x6155e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6155e6:{NFSU2_TR(0x6155e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6155ea:{NFSU2_TR(0x6155ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6155eb:{NFSU2_TR(0x6155eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6155ee:{NFSU2_TR(0x6155ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6155f5:{NFSU2_TR(0x6155f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6155faull));
TAIL_STATIC(0x48ac60u,48a);
}
B6155fa:L6155fa:{c.instructions+=2;NFSU2_TR(0x6155fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6155fc:{NFSU2_TR(0x6155fc);
if(r1(R+518)){{goto L61561b;}}
}
B6155fe:L6155fe:{c.instructions+=3;NFSU2_TR(0x6155fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x93dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B615604:{NFSU2_TR(0x615604);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615606:{NFSU2_TR(0x615606);
if(r1(R+518)){{goto L61561b;}}
}
B615608:L615608:{c.instructions+=7;NFSU2_TR(0x615608);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61560e:{NFSU2_TR(0x61560e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615611:{NFSU2_TR(0x615611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615612:{NFSU2_TR(0x615612);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615613:{NFSU2_TR(0x615613);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615614:{NFSU2_TR(0x615614);
__builtin_memmove((R+4),(R+12),4);
}
B615616:{NFSU2_TR(0x615616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61561bull));
TAIL_STATIC(0x60d5d0u,60d);
}
B61561b:L61561b:{c.instructions+=3;NFSU2_TR(0x61561b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61561d:{NFSU2_TR(0x61561d);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B615623:{NFSU2_TR(0x615623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6154c0u);}goto L6154c0;}}
}
B615629:L615629:{c.instructions+=6;NFSU2_TR(0x615629);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61562a:{NFSU2_TR(0x61562a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61562b:{NFSU2_TR(0x61562b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61562c:{NFSU2_TR(0x61562c);
__builtin_memmove((R+16),(R+20),4);
}
B61562e:{NFSU2_TR(0x61562e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61562f:{NFSU2_TR(0x61562f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615630:L615630:{c.instructions+=15;NFSU2_TR(0x615630);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615631:{NFSU2_TR(0x615631);
__builtin_memmove((R+20),(R+16),4);
}
B615633:{NFSU2_TR(0x615633);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B615636:{NFSU2_TR(0x615636);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B615639:{NFSU2_TR(0x615639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61563b:{NFSU2_TR(0x61563b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61563c:{NFSU2_TR(0x61563c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61563d:{NFSU2_TR(0x61563d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61563e:{NFSU2_TR(0x61563e);
__builtin_memmove((R+28),gp(0x82da5c),4);
}
B615644:{NFSU2_TR(0x615644);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615648:{NFSU2_TR(0x615648);
__builtin_memmove((R+4),gp(0x82da60),4);
}
B61564e:{NFSU2_TR(0x61564e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615652:{NFSU2_TR(0x615652);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615655:{NFSU2_TR(0x615655);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B615657:{NFSU2_TR(0x615657);
if(r1(R+512)){{goto L615679;}}
}
B615659:L615659:{c.instructions+=10;NFSU2_TR(0x615659);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B61565e:{NFSU2_TR(0x61565e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B615661:{NFSU2_TR(0x615661);
s4(0x82da6c,u32(0x1ull));
}
B61566b:{NFSU2_TR(0x61566b);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B615670:{NFSU2_TR(0x615670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B615671:{NFSU2_TR(0x615671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B615672:{NFSU2_TR(0x615672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B615673:{NFSU2_TR(0x615673);
__builtin_memmove((R+16),(R+20),4);
}
B615675:{NFSU2_TR(0x615675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B615676:{NFSU2_TR(0x615676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615679:L615679:{c.instructions+=3;NFSU2_TR(0x615679);
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
B61567b:{NFSU2_TR(0x61567b);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B615680:{NFSU2_TR(0x615680);
if(r1(R+518)){{goto L6159f9;}}
}
B615686:L615686:{c.instructions+=4;NFSU2_TR(0x615686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615689:{NFSU2_TR(0x615689);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61568a:{NFSU2_TR(0x61568a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61568b:{NFSU2_TR(0x61568b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615690ull));
TAIL_STATIC(0x4012b0u,401);
}
B615690:L615690:{c.instructions+=14;NFSU2_TR(0x615690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615693:{NFSU2_TR(0x615693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B615695:{NFSU2_TR(0x615695);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B615698:{NFSU2_TR(0x615698);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61569b:{NFSU2_TR(0x61569b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61569e:{NFSU2_TR(0x61569e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6156a1:{NFSU2_TR(0x6156a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6156a4:{NFSU2_TR(0x6156a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6156a7:{NFSU2_TR(0x6156a7);
u8 U[4];
w4(U+0,u32(0x40400000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6156ac:{NFSU2_TR(0x6156ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6156ad:{NFSU2_TR(0x6156ad);
__builtin_memmove((R+4),(R+12),4);
}
B6156af:{NFSU2_TR(0x6156af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6156b2:{NFSU2_TR(0x6156b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6156b9:{NFSU2_TR(0x6156b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6156beull));
TAIL_STATIC(0x48acb0u,48a);
}
B6156be:L6156be:{c.instructions+=3;NFSU2_TR(0x6156be);
__builtin_memmove((R+24),(R+0),4);
}
B6156c0:{NFSU2_TR(0x6156c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6156c4:{NFSU2_TR(0x6156c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6156c9ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B6156c9:L6156c9:{c.instructions+=2;NFSU2_TR(0x6156c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6156cc:{NFSU2_TR(0x6156cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6156df;}}
}
B6156ce:L6156ce:{c.instructions+=3;NFSU2_TR(0x6156ce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6156d2:{NFSU2_TR(0x6156d2);
{u32 ea_=u32(u32(8021760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6156d8:{NFSU2_TR(0x6156d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6156ddull));
TAIL_STATIC(0x75bed4u,75b);
}
B6156dd:L6156dd:{c.instructions+=1;NFSU2_TR(0x6156dd);
__builtin_memmove((R+24),(R+0),4);
}
B6156df:L6156df:{c.instructions+=2;NFSU2_TR(0x6156df);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6156e2:{NFSU2_TR(0x6156e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6159f9;}}
}
B6156e8:L6156e8:{c.instructions+=8;NFSU2_TR(0x6156e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6156ec:{NFSU2_TR(0x6156ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6156ed:{NFSU2_TR(0x6156ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6156f0:{NFSU2_TR(0x6156f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6156f1:{NFSU2_TR(0x6156f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6156f4:{NFSU2_TR(0x6156f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6156f5:{NFSU2_TR(0x6156f5);
__builtin_memmove((R+4),(R+12),4);
}
B6156f7:{NFSU2_TR(0x6156f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6156fcull));
TAIL_STATIC(0x48ac60u,48a);
}
B6156fc:L6156fc:{c.instructions+=2;NFSU2_TR(0x6156fc);
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
B6156fe:{NFSU2_TR(0x6156fe);
if(r1(R+518)){{goto L6159f9;}}
}
B615704:L615704:{c.instructions+=4;NFSU2_TR(0x615704);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615708:{NFSU2_TR(0x615708);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61570a:{NFSU2_TR(0x61570a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615712:{NFSU2_TR(0x615712);
if(r1(R+518)){{goto L615725;}}
}
B615714:L615714:{c.instructions+=3;NFSU2_TR(0x615714);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615717:{NFSU2_TR(0x615717);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61571b:{NFSU2_TR(0x61571b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615725;}}
}
B61571d:L61571d:{c.instructions+=2;NFSU2_TR(0x61571d);
{u32 ea_=u32(u32(8021640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615723:{NFSU2_TR(0x615723);
{goto L615734;}
}
B615725:L615725:{c.instructions+=3;NFSU2_TR(0x615725);
__builtin_memmove((R+0),gp(0x7a6680),4);
}
B61572a:{NFSU2_TR(0x61572a);
{u32 ea_=u32(u32(8021636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615730:{NFSU2_TR(0x615730);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615734:L615734:{c.instructions+=11;NFSU2_TR(0x615734);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615738:{NFSU2_TR(0x615738);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61573c:{NFSU2_TR(0x61573c);
__builtin_memmove((R+0),(R+8),4);
}
B61573e:{NFSU2_TR(0x61573e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B615742:{NFSU2_TR(0x615742);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615746:{NFSU2_TR(0x615746);
__builtin_memmove((R+0),gp(0x8a1bf0),4);
}
B61574b:{NFSU2_TR(0x61574b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61574d:{NFSU2_TR(0x61574d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615750:{NFSU2_TR(0x615750);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615754:{NFSU2_TR(0x615754);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61575c:{NFSU2_TR(0x61575c);
if(r1(R+518)){{goto L615761;}}
}
B61575e:L61575e:{c.instructions+=1;NFSU2_TR(0x61575e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B615761:L615761:{c.instructions+=3;NFSU2_TR(0x615761);
__builtin_memmove((R+8),gp(0x8a1bf4),4);
}
B615767:{NFSU2_TR(0x615767);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615769:{NFSU2_TR(0x615769);
if(r1(R+518)){{goto L61576e;}}
}
B61576b:L61576b:{c.instructions+=1;NFSU2_TR(0x61576b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B61576e:L61576e:{c.instructions+=3;NFSU2_TR(0x61576e);
__builtin_memmove((R+8),gp(0x8a1bf8),4);
}
B615774:{NFSU2_TR(0x615774);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615776:{NFSU2_TR(0x615776);
if(r1(R+518)){{goto L61577b;}}
}
B615778:L615778:{c.instructions+=1;NFSU2_TR(0x615778);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B61577b:L61577b:{c.instructions+=2;NFSU2_TR(0x61577b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61577d:{NFSU2_TR(0x61577d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6157a3;}}
}
B61577f:L61577f:{c.instructions+=2;NFSU2_TR(0x61577f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615781:{NFSU2_TR(0x615781);
if(r1(R+518)){{goto L615795;}}
}
B615783:L615783:{c.instructions+=3;NFSU2_TR(0x615783);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61578b:{NFSU2_TR(0x61578b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615793:{NFSU2_TR(0x615793);
{goto L6157b5;}
}
B615795:L615795:{c.instructions+=2;NFSU2_TR(0x615795);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615797:{NFSU2_TR(0x615797);
if(r1(R+518)){{goto L6157b5;}}
}
B615799:L615799:{c.instructions+=3;NFSU2_TR(0x615799);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x93dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61579f:{NFSU2_TR(0x61579f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6157a1:{NFSU2_TR(0x6157a1);
if(r1(R+518)){{goto L6157b5;}}
}
B6157a3:L6157a3:{c.instructions+=4;NFSU2_TR(0x6157a3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6157a7:{NFSU2_TR(0x6157a7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6157ad:{NFSU2_TR(0x6157ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6157b1:{NFSU2_TR(0x6157b1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6157b5:L6157b5:{c.instructions+=2;NFSU2_TR(0x6157b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6157b7:{NFSU2_TR(0x6157b7);
if(r1(R+518)){{goto L6157d1;}}
}
B6157b9:L6157b9:{c.instructions+=5;NFSU2_TR(0x6157b9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6157bf:{NFSU2_TR(0x6157bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6157c7:{NFSU2_TR(0x6157c7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6157cb:{NFSU2_TR(0x6157cb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6157cf:{NFSU2_TR(0x6157cf);
{goto L6157fd;}
}
B6157d1:L6157d1:{c.instructions+=2;NFSU2_TR(0x6157d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6157d3:{NFSU2_TR(0x6157d3);
if(r1(R+518)){{goto L6157fb;}}
}
B6157d5:L6157d5:{c.instructions+=3;NFSU2_TR(0x6157d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x944ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6157db:{NFSU2_TR(0x6157db);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6157dd:{NFSU2_TR(0x6157dd);
if(r1(R+518)){{goto L6157fb;}}
}
B6157df:L6157df:{c.instructions+=7;NFSU2_TR(0x6157df);
{u32 ea_=u32(u32(8021652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6157e5:{NFSU2_TR(0x6157e5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6157e9:{NFSU2_TR(0x6157e9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6157ef:{NFSU2_TR(0x6157ef);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6157f1:{NFSU2_TR(0x6157f1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6157f5:{NFSU2_TR(0x6157f5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6157f9:{NFSU2_TR(0x6157f9);
{goto L6157fd;}
}
B6157fb:L6157fb:{c.instructions+=1;NFSU2_TR(0x6157fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6157fd:L6157fd:{c.instructions+=4;NFSU2_TR(0x6157fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615800:{NFSU2_TR(0x615800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615806:{NFSU2_TR(0x615806);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615808:{NFSU2_TR(0x615808);
if(r1(R+518)){{goto L61582b;}}
}
B61580a:L61580a:{c.instructions+=4;NFSU2_TR(0x61580a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61580d:{NFSU2_TR(0x61580d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B615810:{NFSU2_TR(0x615810);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615812:{NFSU2_TR(0x615812);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61582b;}}
}
B615814:L615814:{c.instructions+=3;NFSU2_TR(0x615814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B615816:{NFSU2_TR(0x615816);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615817:{NFSU2_TR(0x615817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61581cull));
TAIL_STATIC(0x60c8a0u,60c);
}
B61581c:L61581c:{c.instructions+=3;NFSU2_TR(0x61581c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61581f:{NFSU2_TR(0x61581f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615821:{NFSU2_TR(0x615821);
if(r1(R+518)){{goto L61582b;}}
}
B615823:L615823:{c.instructions+=1;NFSU2_TR(0x615823);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61582b:L61582b:{c.instructions+=2;NFSU2_TR(0x61582b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61582d:{NFSU2_TR(0x61582d);
if(r1(R+518)){{goto L615837;}}
}
B61582f:L61582f:{c.instructions+=2;NFSU2_TR(0x61582f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615835:{NFSU2_TR(0x615835);
{goto L615839;}
}
B615837:L615837:{c.instructions+=1;NFSU2_TR(0x615837);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B615839:L615839:{c.instructions+=2;NFSU2_TR(0x615839);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61583b:{NFSU2_TR(0x61583b);
if(r1(R+518)){{goto L615847;}}
}
B61583d:L61583d:{c.instructions+=3;NFSU2_TR(0x61583d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B615841:{NFSU2_TR(0x615841);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615845:{NFSU2_TR(0x615845);
{goto L61584f;}
}
B615847:L615847:{c.instructions+=1;NFSU2_TR(0x615847);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61584f:L61584f:{c.instructions+=4;NFSU2_TR(0x61584f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615855:{NFSU2_TR(0x615855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B615857:{NFSU2_TR(0x615857);
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
B615859:{NFSU2_TR(0x615859);
if(r1(R+518)){{goto L6159f9;}}
}
B61585f:L61585f:{c.instructions+=1;NFSU2_TR(0x61585f);
}
B615860:L615860:{c.instructions+=7;NFSU2_TR(0x615860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615863:{NFSU2_TR(0x615863);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B615865:{NFSU2_TR(0x615865);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B615867:{NFSU2_TR(0x615867);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B615869:{NFSU2_TR(0x615869);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9db90133ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61586e:{NFSU2_TR(0x61586e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615872:{NFSU2_TR(0x615872);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6158a3;}}
}
B615874:L615874:{c.instructions+=3;NFSU2_TR(0x615874);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615878:{NFSU2_TR(0x615878);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61587a:{NFSU2_TR(0x61587a);
if(r1(R+518)){{goto L61588a;}}
}
B61587c:L61587c:{c.instructions+=3;NFSU2_TR(0x61587c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x93dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B615882:{NFSU2_TR(0x615882);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615884:{NFSU2_TR(0x615884);
if(r1(R+518)){{goto L6159e6;}}
}
B61588a:L61588a:{c.instructions+=6;NFSU2_TR(0x61588a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61588e:{NFSU2_TR(0x61588e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615892:{NFSU2_TR(0x615892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615898:{NFSU2_TR(0x615898);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61589c:{NFSU2_TR(0x61589c);
w4(R+8,u32(0x1ull));
}
B6158a1:{NFSU2_TR(0x6158a1);
{goto L615907;}
}
B6158a3:L6158a3:{c.instructions+=2;NFSU2_TR(0x6158a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd09091c6ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6158a8:{NFSU2_TR(0x6158a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6158d9;}}
}
B6158aa:L6158aa:{c.instructions+=3;NFSU2_TR(0x6158aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6158ae:{NFSU2_TR(0x6158ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6158b0:{NFSU2_TR(0x6158b0);
if(r1(R+518)){{goto L6158c0;}}
}
B6158b2:L6158b2:{c.instructions+=3;NFSU2_TR(0x6158b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x93dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6158b8:{NFSU2_TR(0x6158b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6158ba:{NFSU2_TR(0x6158ba);
if(r1(R+518)){{goto L6159e6;}}
}
B6158c0:L6158c0:{c.instructions+=6;NFSU2_TR(0x6158c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6158c4:{NFSU2_TR(0x6158c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6158c8:{NFSU2_TR(0x6158c8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6158cc:{NFSU2_TR(0x6158cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6158d2:{NFSU2_TR(0x6158d2);
w4(R+8,u32(0x1ull));
}
B6158d7:{NFSU2_TR(0x6158d7);
{goto L615907;}
}
B6158d9:L6158d9:{c.instructions+=2;NFSU2_TR(0x6158d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x31a66786ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6158de:{NFSU2_TR(0x6158de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6158e6;}}
}
B6158e0:L6158e0:{c.instructions+=2;NFSU2_TR(0x6158e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6158e4:{NFSU2_TR(0x6158e4);
{goto L6158fe;}
}
B6158e6:L6158e6:{c.instructions+=2;NFSU2_TR(0x6158e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa2a2fc7cull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6158eb:{NFSU2_TR(0x6158eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6158f3;}}
}
B6158ed:L6158ed:{c.instructions+=2;NFSU2_TR(0x6158ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6158f1:{NFSU2_TR(0x6158f1);
{goto L6158fe;}
}
B6158f3:L6158f3:{c.instructions+=2;NFSU2_TR(0x6158f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbf700a79ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6158f8:{NFSU2_TR(0x6158f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615907;}}
}
B6158fa:L6158fa:{c.instructions+=1;NFSU2_TR(0x6158fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6158fe:L6158fe:{c.instructions+=2;NFSU2_TR(0x6158fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615902:{NFSU2_TR(0x615902);
w4(R+12,u32(0x1ull));
}
B615907:L615907:{c.instructions+=3;NFSU2_TR(0x615907);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61590b:{NFSU2_TR(0x61590b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61590e:{NFSU2_TR(0x61590e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615919;}}
}
B615910:L615910:{c.instructions+=2;NFSU2_TR(0x615910);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615912:{NFSU2_TR(0x615912);
if(r1(R+518)){{goto L615926;}}
}
B615914:L615914:{c.instructions+=1;NFSU2_TR(0x615914);
{goto L6159e6;}
}
B615919:L615919:{c.instructions+=2;NFSU2_TR(0x615919);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61591c:{NFSU2_TR(0x61591c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615926;}}
}
B61591e:L61591e:{c.instructions+=2;NFSU2_TR(0x61591e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615920:{NFSU2_TR(0x615920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6159e6;}}
}
B615926:L615926:{c.instructions+=5;NFSU2_TR(0x615926);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61592a:{NFSU2_TR(0x61592a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B615930:{NFSU2_TR(0x615930);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B615932:{NFSU2_TR(0x615932);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615935:{NFSU2_TR(0x615935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6159e6;}}
}
B61593b:L61593b:{c.instructions+=5;NFSU2_TR(0x61593b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61593f:{NFSU2_TR(0x61593f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B615945:{NFSU2_TR(0x615945);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B615947:{NFSU2_TR(0x615947);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61594a:{NFSU2_TR(0x61594a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615954;}}
}
B61594c:L61594c:{c.instructions+=1;NFSU2_TR(0x61594c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615954:L615954:{c.instructions+=5;NFSU2_TR(0x615954);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615957:{NFSU2_TR(0x615957);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61595d:{NFSU2_TR(0x61595d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61595f:{NFSU2_TR(0x61595f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B615962:{NFSU2_TR(0x615962);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61596f;}}
}
B615964:L615964:{c.instructions+=3;NFSU2_TR(0x615964);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615968:{NFSU2_TR(0x615968);
{u32 ea_=u32(r4(R+20)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61596b:{NFSU2_TR(0x61596b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61596f:L61596f:{c.instructions+=3;NFSU2_TR(0x61596f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615972:{NFSU2_TR(0x615972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615974:{NFSU2_TR(0x615974);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61598a;}}
}
B615976:L615976:{c.instructions+=11;NFSU2_TR(0x615976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615979:{NFSU2_TR(0x615979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61597a:{NFSU2_TR(0x61597a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61597e:{NFSU2_TR(0x61597e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615980:{NFSU2_TR(0x615980);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615982:{NFSU2_TR(0x615982);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615984:{NFSU2_TR(0x615984);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615985:{NFSU2_TR(0x615985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615986:{NFSU2_TR(0x615986);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615987:{NFSU2_TR(0x615987);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615988:{NFSU2_TR(0x615988);
{goto L6159de;}
}
B61598a:L61598a:{c.instructions+=3;NFSU2_TR(0x61598a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61598e:{NFSU2_TR(0x61598e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615990:{NFSU2_TR(0x615990);
if(r1(R+518)){{goto L6159a4;}}
}
B615992:L615992:{c.instructions+=2;NFSU2_TR(0x615992);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B615999:{NFSU2_TR(0x615999);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6159a4;}}
}
B61599b:L61599b:{c.instructions+=5;NFSU2_TR(0x61599b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61599c:{NFSU2_TR(0x61599c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61599e:{NFSU2_TR(0x61599e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159a0:{NFSU2_TR(0x6159a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159a2:{NFSU2_TR(0x6159a2);
{goto L6159d3;}
}
B6159a4:L6159a4:{c.instructions+=19;NFSU2_TR(0x6159a4);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6159a7:{NFSU2_TR(0x6159a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159a8:{NFSU2_TR(0x6159a8);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6159ab:{NFSU2_TR(0x6159ab);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6159ae:{NFSU2_TR(0x6159ae);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6159b0:{NFSU2_TR(0x6159b0);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B6159b2:{NFSU2_TR(0x6159b2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6159b5:{NFSU2_TR(0x6159b5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6159b7:{NFSU2_TR(0x6159b7);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6159ba:{NFSU2_TR(0x6159ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6159bc:{NFSU2_TR(0x6159bc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6159be:{NFSU2_TR(0x6159be);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6159c1:{NFSU2_TR(0x6159c1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6159c3:{NFSU2_TR(0x6159c3);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6159c6:{NFSU2_TR(0x6159c6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6159ca:{NFSU2_TR(0x6159ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6159ce:{NFSU2_TR(0x6159ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159cf:{NFSU2_TR(0x6159cf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159d1:{NFSU2_TR(0x6159d1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159d3:L6159d3:{c.instructions+=6;NFSU2_TR(0x6159d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6159d7:{NFSU2_TR(0x6159d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6159da:{NFSU2_TR(0x6159da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159db:{NFSU2_TR(0x6159db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159dc:{NFSU2_TR(0x6159dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159dd:{NFSU2_TR(0x6159dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6159de:L6159de:{c.instructions+=1;NFSU2_TR(0x6159de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6159e3ull));
TAIL_STATIC(0x490920u,490);
}
B6159e3:L6159e3:{c.instructions+=1;NFSU2_TR(0x6159e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6159e6:L6159e6:{c.instructions+=5;NFSU2_TR(0x6159e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6159ea:{NFSU2_TR(0x6159ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6159ec:{NFSU2_TR(0x6159ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3f0ull))));
}
B6159f1:{NFSU2_TR(0x6159f1);
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
B6159f3:{NFSU2_TR(0x6159f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x615860u);}goto L615860;}}
}
B6159f9:L6159f9:{c.instructions+=6;NFSU2_TR(0x6159f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6159fa:{NFSU2_TR(0x6159fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6159fb:{NFSU2_TR(0x6159fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6159fc:{NFSU2_TR(0x6159fc);
__builtin_memmove((R+16),(R+20),4);
}
B6159fe:{NFSU2_TR(0x6159fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6159ff:{NFSU2_TR(0x6159ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615a10:L615a10:{c.instructions+=8;NFSU2_TR(0x615a10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B615a13:{NFSU2_TR(0x615a13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a14:{NFSU2_TR(0x615a14);
__builtin_memmove((R+24),(R+4),4);
}
B615a16:{NFSU2_TR(0x615a16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a17:{NFSU2_TR(0x615a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B615a1a:{NFSU2_TR(0x615a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615a1c:{NFSU2_TR(0x615a1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615a20:{NFSU2_TR(0x615a20);
if(r1(R+518)){{goto L615cb4;}}
}
B615a26:L615a26:{c.instructions+=3;NFSU2_TR(0x615a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615a2c:{NFSU2_TR(0x615a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615a2e:{NFSU2_TR(0x615a2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615a37;}}
}
B615a30:L615a30:{c.instructions+=2;NFSU2_TR(0x615a30);
w4(R+0,u32(0x1ull));
}
B615a35:{NFSU2_TR(0x615a35);
{goto L615a4b;}
}
B615a37:L615a37:{c.instructions+=5;NFSU2_TR(0x615a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615a3a:{NFSU2_TR(0x615a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615a40:{NFSU2_TR(0x615a40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a42:{NFSU2_TR(0x615a42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a43:{NFSU2_TR(0x615a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615a48ull));
TAIL_STATIC(0x433cd0u,433);
}
B615a48:L615a48:{c.instructions+=1;NFSU2_TR(0x615a48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B615a4b:L615a4b:{c.instructions+=7;NFSU2_TR(0x615a4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B615a4d:{NFSU2_TR(0x615a4d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615a50:{NFSU2_TR(0x615a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615a56:{NFSU2_TR(0x615a56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B615a59:{NFSU2_TR(0x615a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615a5b:{NFSU2_TR(0x615a5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615a5f:{NFSU2_TR(0x615a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615a68;}}
}
B615a61:L615a61:{c.instructions+=2;NFSU2_TR(0x615a61);
w4(R+0,u32(0x1ull));
}
B615a66:{NFSU2_TR(0x615a66);
{goto L615a7c;}
}
B615a68:L615a68:{c.instructions+=5;NFSU2_TR(0x615a68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615a6b:{NFSU2_TR(0x615a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615a71:{NFSU2_TR(0x615a71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a73:{NFSU2_TR(0x615a73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a74:{NFSU2_TR(0x615a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615a79ull));
TAIL_STATIC(0x433cd0u,433);
}
B615a79:L615a79:{c.instructions+=1;NFSU2_TR(0x615a79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B615a7c:L615a7c:{c.instructions+=12;NFSU2_TR(0x615a7c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B615a7e:{NFSU2_TR(0x615a7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615a81:{NFSU2_TR(0x615a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615a87:{NFSU2_TR(0x615a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B615a8b:{NFSU2_TR(0x615a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B615a8e:{NFSU2_TR(0x615a8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615a90:{NFSU2_TR(0x615a90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a91:{NFSU2_TR(0x615a91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B615a95:{NFSU2_TR(0x615a95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615a96:{NFSU2_TR(0x615a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B615a9a:{NFSU2_TR(0x615a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615a9e:{NFSU2_TR(0x615a9e);
if(r1(R+518)){{goto L615acc;}}
}
B615aa0:L615aa0:{c.instructions+=15;NFSU2_TR(0x615aa0);
__builtin_memmove((R+0),gp(0x7a6734),4);
}
B615aa5:{NFSU2_TR(0x615aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615aab:{NFSU2_TR(0x615aab);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ab0:{NFSU2_TR(0x615ab0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ab2:{NFSU2_TR(0x615ab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ab3:{NFSU2_TR(0x615ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615ab9:{NFSU2_TR(0x615ab9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615aba:{NFSU2_TR(0x615aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B615ac0:{NFSU2_TR(0x615ac0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ac1:{NFSU2_TR(0x615ac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ac2:{NFSU2_TR(0x615ac2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ac3:{NFSU2_TR(0x615ac3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ac4:{NFSU2_TR(0x615ac4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ac5:{NFSU2_TR(0x615ac5);
__builtin_memmove((R+4),(R+24),4);
}
B615ac7:{NFSU2_TR(0x615ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615accull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615acc:L615acc:{c.instructions+=4;NFSU2_TR(0x615acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615ad0:{NFSU2_TR(0x615ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615ad6:{NFSU2_TR(0x615ad6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615ad8:{NFSU2_TR(0x615ad8);
if(r1(R+518)){{goto L615b92;}}
}
B615ade:L615ade:{c.instructions+=3;NFSU2_TR(0x615ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615ae2:{NFSU2_TR(0x615ae2);
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
B615ae4:{NFSU2_TR(0x615ae4);
if(r1(R+518)){{goto L615b92;}}
}
B615aea:L615aea:{c.instructions+=7;NFSU2_TR(0x615aea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615af0:{NFSU2_TR(0x615af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615af3:{NFSU2_TR(0x615af3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615af9:{NFSU2_TR(0x615af9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615afb:{NFSU2_TR(0x615afb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615afd:{NFSU2_TR(0x615afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615afe:{NFSU2_TR(0x615afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615b03ull));
TAIL_STATIC(0x434610u,434);
}
B615b03:L615b03:{c.instructions+=18;NFSU2_TR(0x615b03);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615b07:{NFSU2_TR(0x615b07);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615b0b:{NFSU2_TR(0x615b0b);
__builtin_memmove((R+4),gp(0x7a6738),4);
}
B615b11:{NFSU2_TR(0x615b11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B615b14:{NFSU2_TR(0x615b14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b15:{NFSU2_TR(0x615b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615b1b:{NFSU2_TR(0x615b1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b1d:{NFSU2_TR(0x615b1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b1e:{NFSU2_TR(0x615b1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b1f:{NFSU2_TR(0x615b1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615b25:{NFSU2_TR(0x615b25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b26:{NFSU2_TR(0x615b26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615b2c:{NFSU2_TR(0x615b2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b2d:{NFSU2_TR(0x615b2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b2e:{NFSU2_TR(0x615b2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b2f:{NFSU2_TR(0x615b2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b30:{NFSU2_TR(0x615b30);
__builtin_memmove((R+4),(R+24),4);
}
B615b32:{NFSU2_TR(0x615b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615b37ull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615b37:L615b37:{c.instructions+=12;NFSU2_TR(0x615b37);
{u32 ea_=u32(u32(8021496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615b3d:{NFSU2_TR(0x615b3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615b41:{NFSU2_TR(0x615b41);
{u32 ea_=u32(u32(8021816u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615b47:{NFSU2_TR(0x615b47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x367ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B615b4e:{NFSU2_TR(0x615b4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b4f:{NFSU2_TR(0x615b4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b51:{NFSU2_TR(0x615b51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b52:{NFSU2_TR(0x615b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615b56:{NFSU2_TR(0x615b56);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615b59:{NFSU2_TR(0x615b59);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B615b5d:{NFSU2_TR(0x615b5d);
{u32 ea_=u32(u32(8021500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615b63:{NFSU2_TR(0x615b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615b68ull));
TAIL_STATIC(0x75bed4u,75b);
}
B615b68:L615b68:{c.instructions+=14;NFSU2_TR(0x615b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615b6e:{NFSU2_TR(0x615b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615b74:{NFSU2_TR(0x615b74);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B615b77:{NFSU2_TR(0x615b77);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffull))));
}
B615b7d:{NFSU2_TR(0x615b7d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B615b7f:{NFSU2_TR(0x615b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b80:{NFSU2_TR(0x615b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615b86:{NFSU2_TR(0x615b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b87:{NFSU2_TR(0x615b87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b88:{NFSU2_TR(0x615b88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b89:{NFSU2_TR(0x615b89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b8a:{NFSU2_TR(0x615b8a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615b8b:{NFSU2_TR(0x615b8b);
__builtin_memmove((R+4),(R+24),4);
}
B615b8d:{NFSU2_TR(0x615b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615b92ull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615b92:L615b92:{c.instructions+=4;NFSU2_TR(0x615b92);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615b96:{NFSU2_TR(0x615b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x800ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615b9c:{NFSU2_TR(0x615b9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615b9e:{NFSU2_TR(0x615b9e);
if(r1(R+518)){{goto L615bcd;}}
}
B615ba0:L615ba0:{c.instructions+=15;NFSU2_TR(0x615ba0);
__builtin_memmove((R+4),gp(0x7a673c),4);
}
B615ba6:{NFSU2_TR(0x615ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615bac:{NFSU2_TR(0x615bac);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bb1:{NFSU2_TR(0x615bb1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bb3:{NFSU2_TR(0x615bb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bb4:{NFSU2_TR(0x615bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615bba:{NFSU2_TR(0x615bba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bbb:{NFSU2_TR(0x615bbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615bc1:{NFSU2_TR(0x615bc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bc2:{NFSU2_TR(0x615bc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bc3:{NFSU2_TR(0x615bc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bc4:{NFSU2_TR(0x615bc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bc5:{NFSU2_TR(0x615bc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615bc6:{NFSU2_TR(0x615bc6);
__builtin_memmove((R+4),(R+24),4);
}
B615bc8:{NFSU2_TR(0x615bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615bcdull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615bcd:L615bcd:{c.instructions+=4;NFSU2_TR(0x615bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615bd1:{NFSU2_TR(0x615bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x804ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615bd7:{NFSU2_TR(0x615bd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615bd9:{NFSU2_TR(0x615bd9);
if(r1(R+518)){{goto L615cb2;}}
}
B615bdf:L615bdf:{c.instructions+=3;NFSU2_TR(0x615bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615be3:{NFSU2_TR(0x615be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615be5:{NFSU2_TR(0x615be5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615bfe;}}
}
B615be7:L615be7:{c.instructions+=3;NFSU2_TR(0x615be7);
__builtin_memmove((R+4),gp(0x8a1bec),4);
}
B615bed:{NFSU2_TR(0x615bed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615bef:{NFSU2_TR(0x615bef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615bfe;}}
}
B615bf1:L615bf1:{c.instructions+=2;NFSU2_TR(0x615bf1);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B615bf8:{NFSU2_TR(0x615bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L615cb2;}}
}
B615bfe:L615bfe:{c.instructions+=3;NFSU2_TR(0x615bfe);
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
B615c00:{NFSU2_TR(0x615c00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615c08:{NFSU2_TR(0x615c08);
if(r1(R+518)){{goto L615c2a;}}
}
B615c0a:L615c0a:{c.instructions+=7;NFSU2_TR(0x615c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615c10:{NFSU2_TR(0x615c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615c13:{NFSU2_TR(0x615c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615c19:{NFSU2_TR(0x615c19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c1b:{NFSU2_TR(0x615c1b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c1d:{NFSU2_TR(0x615c1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c1e:{NFSU2_TR(0x615c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615c23ull));
TAIL_STATIC(0x434610u,434);
}
B615c23:L615c23:{c.instructions+=2;NFSU2_TR(0x615c23);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615c27:{NFSU2_TR(0x615c27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B615c2a:L615c2a:{c.instructions+=16;NFSU2_TR(0x615c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615c2e:{NFSU2_TR(0x615c2e);
__builtin_memmove((R+8),gp(0x7a6740),4);
}
B615c34:{NFSU2_TR(0x615c34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c35:{NFSU2_TR(0x615c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615c3b:{NFSU2_TR(0x615c3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c3d:{NFSU2_TR(0x615c3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c3e:{NFSU2_TR(0x615c3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615c44:{NFSU2_TR(0x615c44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c45:{NFSU2_TR(0x615c45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B615c4b:{NFSU2_TR(0x615c4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c4c:{NFSU2_TR(0x615c4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c4d:{NFSU2_TR(0x615c4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c4e:{NFSU2_TR(0x615c4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c4f:{NFSU2_TR(0x615c4f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c50:{NFSU2_TR(0x615c50);
__builtin_memmove((R+4),(R+24),4);
}
B615c52:{NFSU2_TR(0x615c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615c57ull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615c57:L615c57:{c.instructions+=12;NFSU2_TR(0x615c57);
{u32 ea_=u32(u32(8021480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615c5d:{NFSU2_TR(0x615c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615c61:{NFSU2_TR(0x615c61);
{u32 ea_=u32(u32(8021824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615c67:{NFSU2_TR(0x615c67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c68:{NFSU2_TR(0x615c68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c6a:{NFSU2_TR(0x615c6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c6b:{NFSU2_TR(0x615c6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B615c72:{NFSU2_TR(0x615c72);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615c75:{NFSU2_TR(0x615c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615c79:{NFSU2_TR(0x615c79);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B615c7d:{NFSU2_TR(0x615c7d);
{u32 ea_=u32(u32(8021484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615c83:{NFSU2_TR(0x615c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615c88ull));
TAIL_STATIC(0x75bed4u,75b);
}
B615c88:L615c88:{c.instructions+=14;NFSU2_TR(0x615c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x37cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615c8e:{NFSU2_TR(0x615c8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B615c91:{NFSU2_TR(0x615c91);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffull))));
}
B615c97:{NFSU2_TR(0x615c97);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B615c99:{NFSU2_TR(0x615c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615c9a:{NFSU2_TR(0x615c9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B615ca0:{NFSU2_TR(0x615ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ca1:{NFSU2_TR(0x615ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615ca7:{NFSU2_TR(0x615ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ca8:{NFSU2_TR(0x615ca8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615ca9:{NFSU2_TR(0x615ca9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615caa:{NFSU2_TR(0x615caa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615cab:{NFSU2_TR(0x615cab);
__builtin_memmove((R+4),(R+24),4);
}
B615cad:{NFSU2_TR(0x615cad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615cb2ull));
TAIL_STATIC(0x60d7f0u,60d);
}
B615cb2:L615cb2:{c.instructions+=2;NFSU2_TR(0x615cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B615cb3:{NFSU2_TR(0x615cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B615cb4:L615cb4:{c.instructions+=4;NFSU2_TR(0x615cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B615cb5:{NFSU2_TR(0x615cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B615cb6:{NFSU2_TR(0x615cb6);
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
B615cb9:{NFSU2_TR(0x615cb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B615cc0:L615cc0:{c.instructions+=13;NFSU2_TR(0x615cc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615cc1:{NFSU2_TR(0x615cc1);
__builtin_memmove((R+20),(R+16),4);
}
B615cc3:{NFSU2_TR(0x615cc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B615cc6:{NFSU2_TR(0x615cc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x184ull))));
}
B615ccc:{NFSU2_TR(0x615ccc);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ccf:{NFSU2_TR(0x615ccf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615cd0:{NFSU2_TR(0x615cd0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B615cd6:{NFSU2_TR(0x615cd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615cd7:{NFSU2_TR(0x615cd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615cd8:{NFSU2_TR(0x615cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615cdf:{NFSU2_TR(0x615cdf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B615ce1:{NFSU2_TR(0x615ce1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B615ce4:{NFSU2_TR(0x615ce4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x6162d3u,616);}
}
B615cea:L615cea:{c.instructions+=5;NFSU2_TR(0x615cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B615ced:{NFSU2_TR(0x615ced);
__builtin_memmove((R+4),(R+4),4);
}
B615cf0:{NFSU2_TR(0x615cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615cf3:{NFSU2_TR(0x615cf3);
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
B615cf5:{NFSU2_TR(0x615cf5);
if(r1(R+518)){TAIL_STATIC(0x6162d3u,616);}
}
B615cfb:L615cfb:{c.instructions+=4;NFSU2_TR(0x615cfb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B615cfe:{NFSU2_TR(0x615cfe);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615d05:{NFSU2_TR(0x615d05);
u8 U[12];
w4(U+0,u32(u32(u32(0x458ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B615d0c:{NFSU2_TR(0x615d0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L615d32;}}
}
B615d0e:L615d0e:{c.instructions+=2;NFSU2_TR(0x615d0e);
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
B615d11:{NFSU2_TR(0x615d11);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L615d32;}}
}
B615d13:L615d13:{c.instructions+=3;NFSU2_TR(0x615d13);
__builtin_memmove((R+4),gp(0x883e68),4);
}
B615d19:{NFSU2_TR(0x615d19);
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
B615d1b:{NFSU2_TR(0x615d1b);
if(r1(R+518)){{goto L615d32;}}
}
B615d1d:L615d1d:{c.instructions+=5;NFSU2_TR(0x615d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615d20:{NFSU2_TR(0x615d20);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1dull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B615d23:{NFSU2_TR(0x615d23);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B615d29:{NFSU2_TR(0x615d29);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B615d2b:{NFSU2_TR(0x615d2b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B615d32:L615d32:{c.instructions+=5;NFSU2_TR(0x615d32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615d35:{NFSU2_TR(0x615d35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615d36:{NFSU2_TR(0x615d36);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B615d3a:{NFSU2_TR(0x615d3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615d3b:{NFSU2_TR(0x615d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615d40ull));
TAIL_STATIC(0x4012b0u,401);
}
B615d40:L615d40:{c.instructions+=12;NFSU2_TR(0x615d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615d43:{NFSU2_TR(0x615d43);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615d46:{NFSU2_TR(0x615d46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B615d48:{NFSU2_TR(0x615d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B615d4a:{NFSU2_TR(0x615d4a);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615d51:{NFSU2_TR(0x615d51);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615d54:{NFSU2_TR(0x615d54);
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
B615d57:{NFSU2_TR(0x615d57);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615d5e:{NFSU2_TR(0x615d5e);
__builtin_memmove((R+4),(R+28),4);
}
B615d60:{NFSU2_TR(0x615d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615d67:{NFSU2_TR(0x615d67);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615d72:{NFSU2_TR(0x615d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615d77ull));
TAIL_STATIC(0x502fd0u,502);
}
B615d77:L615d77:{c.instructions+=3;NFSU2_TR(0x615d77);
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
B615d79:{NFSU2_TR(0x615d79);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615d80:{NFSU2_TR(0x615d80);
if(r1(R+518)){TAIL_STATIC(0x6162c1u,616);}
}
B615d86:L615d86:{c.instructions+=1;NFSU2_TR(0x615d86);
{goto L615d90;}
}
B615d90:L615d90:{c.instructions+=5;NFSU2_TR(0x615d90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B615d93:{NFSU2_TR(0x615d93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615d94:{NFSU2_TR(0x615d94);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B615d9b:{NFSU2_TR(0x615d9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615d9c:{NFSU2_TR(0x615d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615da1ull));
TAIL_STATIC(0x4012b0u,401);
}
B615da1:L615da1:{c.instructions+=9;NFSU2_TR(0x615da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615da4:{NFSU2_TR(0x615da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615da7:{NFSU2_TR(0x615da7);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615dae:{NFSU2_TR(0x615dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615db1:{NFSU2_TR(0x615db1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B615db4:{NFSU2_TR(0x615db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615db6:{NFSU2_TR(0x615db6);
u8 U[12];
w4(U+0,u32(u32(u32(0x548ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B615dbd:{NFSU2_TR(0x615dbd);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615dc4:{NFSU2_TR(0x615dc4);
if(r1(R+518)){{goto L615dd6;}}
}
B615dc6:L615dc6:{c.instructions+=3;NFSU2_TR(0x615dc6);
u8 U[12];
w4(U+0,u32(u32(u32(0x548ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B615dcd:{NFSU2_TR(0x615dcd);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615dd4:{NFSU2_TR(0x615dd4);
__builtin_memmove((R+0),(R+4),4);
}
B615dd6:L615dd6:{c.instructions+=3;NFSU2_TR(0x615dd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B615dd8:{NFSU2_TR(0x615dd8);
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
B615dda:{NFSU2_TR(0x615dda);
if(r1(R+518)){TAIL_STATIC(0x61629cu,616);}
}
B615de0:L615de0:{c.instructions+=9;NFSU2_TR(0x615de0);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615de3:{NFSU2_TR(0x615de3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B615de5:{NFSU2_TR(0x615de5);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615dec:{NFSU2_TR(0x615dec);
__builtin_memmove((R+16),(R+16),4);
}
B615df0:{NFSU2_TR(0x615df0);
u8 U[4];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B615df7:{NFSU2_TR(0x615df7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615df8:{NFSU2_TR(0x615df8);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B615dfc:{NFSU2_TR(0x615dfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B615dfd:{NFSU2_TR(0x615dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x615e02ull));
TAIL_STATIC(0x4012b0u,401);
}
B615e02:L615e02:{c.instructions+=4;NFSU2_TR(0x615e02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615e05:{NFSU2_TR(0x615e05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B615e08:{NFSU2_TR(0x615e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B615e0a:{NFSU2_TR(0x615e0a);
if(r1(R+518)){{goto L615e1b;}}
}
B615e0c:L615e0c:{c.instructions+=5;NFSU2_TR(0x615e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615e0f:{NFSU2_TR(0x615e0f);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615e12:{NFSU2_TR(0x615e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615e15:{NFSU2_TR(0x615e15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e19:{NFSU2_TR(0x615e19);
{goto L615e5a;}
}
B615e1b:L615e1b:{c.instructions+=15;NFSU2_TR(0x615e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615e1e:{NFSU2_TR(0x615e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615e21:{NFSU2_TR(0x615e21);
__builtin_memmove((R+4),(R+0),4);
}
B615e23:{NFSU2_TR(0x615e23);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B615e26:{NFSU2_TR(0x615e26);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e2d:{NFSU2_TR(0x615e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e34:{NFSU2_TR(0x615e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615e37:{NFSU2_TR(0x615e37);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615e3e:{NFSU2_TR(0x615e3e);
__builtin_memmove((R+0),(R+8),4);
}
B615e40:{NFSU2_TR(0x615e40);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e47:{NFSU2_TR(0x615e47);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B615e4a:{NFSU2_TR(0x615e4a);
__builtin_memmove((R+8),(R+4),4);
}
B615e4c:{NFSU2_TR(0x615e4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e50:{NFSU2_TR(0x615e50);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e57:{NFSU2_TR(0x615e57);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B615e5a:L615e5a:{c.instructions+=12;NFSU2_TR(0x615e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615e5e:{NFSU2_TR(0x615e5e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B615e62:{NFSU2_TR(0x615e62);
__builtin_memmove((R+4),(R+8),4);
}
B615e64:{NFSU2_TR(0x615e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e68:{NFSU2_TR(0x615e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B615e6b:{NFSU2_TR(0x615e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e6f:{NFSU2_TR(0x615e6f);
__builtin_memmove((R+0),(R+8),1);
}
B615e71:{NFSU2_TR(0x615e71);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615e73:{NFSU2_TR(0x615e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e77:{NFSU2_TR(0x615e77);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B615e7f:{NFSU2_TR(0x615e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615e86:{NFSU2_TR(0x615e86);
if(r1(R+518)){{goto L615eb2;}}
}
B615e88:L615e88:{c.instructions+=9;NFSU2_TR(0x615e88);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615e8c:{NFSU2_TR(0x615e8c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615e92:{NFSU2_TR(0x615e92);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615e96:{NFSU2_TR(0x615e96);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615e9a:{NFSU2_TR(0x615e9a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615ea0:{NFSU2_TR(0x615ea0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615ea4:{NFSU2_TR(0x615ea4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ea8:{NFSU2_TR(0x615ea8);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615eae:{NFSU2_TR(0x615eae);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615eb2:L615eb2:{c.instructions+=4;NFSU2_TR(0x615eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B615eb5:{NFSU2_TR(0x615eb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B615eb7:{NFSU2_TR(0x615eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615ebe:{NFSU2_TR(0x615ebe);
if(r1(R+518)){{goto L615eea;}}
}
B615ec0:L615ec0:{c.instructions+=9;NFSU2_TR(0x615ec0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ec4:{NFSU2_TR(0x615ec4);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615eca:{NFSU2_TR(0x615eca);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615ece:{NFSU2_TR(0x615ece);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ed2:{NFSU2_TR(0x615ed2);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615ed8:{NFSU2_TR(0x615ed8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615edc:{NFSU2_TR(0x615edc);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ee0:{NFSU2_TR(0x615ee0);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615ee6:{NFSU2_TR(0x615ee6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615eea:L615eea:{c.instructions+=5;NFSU2_TR(0x615eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B615eed:{NFSU2_TR(0x615eed);
__builtin_memmove((R+0),(R+4),1);
}
B615eef:{NFSU2_TR(0x615eef);
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
B615ef1:{NFSU2_TR(0x615ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B615ef8:{NFSU2_TR(0x615ef8);
if(r1(R+518)){{goto L615f24;}}
}
B615efa:L615efa:{c.instructions+=9;NFSU2_TR(0x615efa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615efe:{NFSU2_TR(0x615efe);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f04:{NFSU2_TR(0x615f04);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615f08:{NFSU2_TR(0x615f08);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f0c:{NFSU2_TR(0x615f0c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f12:{NFSU2_TR(0x615f12);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615f16:{NFSU2_TR(0x615f16);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f1a:{NFSU2_TR(0x615f1a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f20:{NFSU2_TR(0x615f20);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615f24:L615f24:{c.instructions+=52;NFSU2_TR(0x615f24);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f28:{NFSU2_TR(0x615f28);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f2f:{NFSU2_TR(0x615f2f);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f36:{NFSU2_TR(0x615f36);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f3a:{NFSU2_TR(0x615f3a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f3c:{NFSU2_TR(0x615f3c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f40:{NFSU2_TR(0x615f40);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f44:{NFSU2_TR(0x615f44);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f46:{NFSU2_TR(0x615f46);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f4a:{NFSU2_TR(0x615f4a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f4e:{NFSU2_TR(0x615f4e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f50:{NFSU2_TR(0x615f50);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615f57:{NFSU2_TR(0x615f57);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f5b:{NFSU2_TR(0x615f5b);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f62:{NFSU2_TR(0x615f62);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f69:{NFSU2_TR(0x615f69);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f6d:{NFSU2_TR(0x615f6d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f6f:{NFSU2_TR(0x615f6f);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f73:{NFSU2_TR(0x615f73);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f77:{NFSU2_TR(0x615f77);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f79:{NFSU2_TR(0x615f79);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f7d:{NFSU2_TR(0x615f7d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f81:{NFSU2_TR(0x615f81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f83:{NFSU2_TR(0x615f83);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615f8a:{NFSU2_TR(0x615f8a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f91:{NFSU2_TR(0x615f91);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f95:{NFSU2_TR(0x615f95);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615f99:{NFSU2_TR(0x615f99);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615f9d:{NFSU2_TR(0x615f9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615f9f:{NFSU2_TR(0x615f9f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615fa3:{NFSU2_TR(0x615fa3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615fa7:{NFSU2_TR(0x615fa7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615fa9:{NFSU2_TR(0x615fa9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615fad:{NFSU2_TR(0x615fad);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615fb4:{NFSU2_TR(0x615fb4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615fb6:{NFSU2_TR(0x615fb6);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615fbd:{NFSU2_TR(0x615fbd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615fc4:{NFSU2_TR(0x615fc4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615fc8:{NFSU2_TR(0x615fc8);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615fcc:{NFSU2_TR(0x615fcc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615fd0:{NFSU2_TR(0x615fd0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615fd2:{NFSU2_TR(0x615fd2);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615fd6:{NFSU2_TR(0x615fd6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615fda:{NFSU2_TR(0x615fda);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615fdc:{NFSU2_TR(0x615fdc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B615fe0:{NFSU2_TR(0x615fe0);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B615fe7:{NFSU2_TR(0x615fe7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615feb:{NFSU2_TR(0x615feb);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615ff2:{NFSU2_TR(0x615ff2);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B615ff9:{NFSU2_TR(0x615ff9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B615ffd:{NFSU2_TR(0x615ffd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B615fff:{NFSU2_TR(0x615fff);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x616003u,616);
}
XIT:NFSU2_TR_EXIT(0x615,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
