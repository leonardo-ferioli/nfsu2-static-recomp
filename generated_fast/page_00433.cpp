#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x433,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x433,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_433(u8* __restrict R,Cpu& c);
u32 page_433(Cpu& c){return body_433(c.regs.data(),c);}
__attribute__((noinline)) u32 body_433(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x433002:goto L433002;
case 0x433007:goto L433007;
case 0x43300a:c.instructions+=2;goto B43300a;
case 0x43300c:c.instructions+=1;goto B43300c;
case 0x43300e:goto L43300e;
case 0x433011:goto L433011;
case 0x433012:c.instructions+=5;goto B433012;
case 0x433013:c.instructions+=4;goto B433013;
case 0x433014:c.instructions+=3;goto B433014;
case 0x433015:c.instructions+=2;goto B433015;
case 0x433018:c.instructions+=1;goto B433018;
case 0x433020:goto L433020;
case 0x433024:c.instructions+=2;goto B433024;
case 0x433025:c.instructions+=1;goto B433025;
case 0x433027:goto L433027;
case 0x43302a:c.instructions+=1;goto B43302a;
case 0x43302c:goto L43302c;
case 0x43302e:c.instructions+=1;goto B43302e;
case 0x433033:goto L433033;
case 0x433035:c.instructions+=3;goto B433035;
case 0x433038:c.instructions+=2;goto B433038;
case 0x43303a:c.instructions+=1;goto B43303a;
case 0x43303c:goto L43303c;
case 0x433042:c.instructions+=6;goto B433042;
case 0x433045:c.instructions+=5;goto B433045;
case 0x433048:c.instructions+=4;goto B433048;
case 0x43304b:c.instructions+=3;goto B43304b;
case 0x43304e:c.instructions+=2;goto B43304e;
case 0x433052:c.instructions+=1;goto B433052;
case 0x433053:goto L433053;
case 0x433055:c.instructions+=1;goto B433055;
case 0x43305a:goto L43305a;
case 0x43305c:c.instructions+=3;goto B43305c;
case 0x43305f:c.instructions+=2;goto B43305f;
case 0x433061:c.instructions+=1;goto B433061;
case 0x433063:goto L433063;
case 0x433065:c.instructions+=1;goto B433065;
case 0x43306a:goto L43306a;
case 0x43306c:c.instructions+=1;goto B43306c;
case 0x433070:goto L433070;
case 0x433071:c.instructions+=1;goto B433071;
case 0x433076:goto L433076;
case 0x43307b:c.instructions+=4;goto B43307b;
case 0x43307e:c.instructions+=3;goto B43307e;
case 0x43307f:c.instructions+=2;goto B43307f;
case 0x433084:c.instructions+=1;goto B433084;
case 0x433090:goto L433090;
case 0x433091:c.instructions+=10;goto B433091;
case 0x433093:c.instructions+=9;goto B433093;
case 0x433096:c.instructions+=8;goto B433096;
case 0x433099:c.instructions+=7;goto B433099;
case 0x43309a:c.instructions+=6;goto B43309a;
case 0x43309b:c.instructions+=5;goto B43309b;
case 0x43309c:c.instructions+=4;goto B43309c;
case 0x43309e:c.instructions+=3;goto B43309e;
case 0x4330a0:c.instructions+=2;goto B4330a0;
case 0x4330a2:c.instructions+=1;goto B4330a2;
case 0x4330a7:goto L4330a7;
case 0x4330aa:c.instructions+=4;goto B4330aa;
case 0x4330ac:c.instructions+=3;goto B4330ac;
case 0x4330af:c.instructions+=2;goto B4330af;
case 0x4330b1:c.instructions+=1;goto B4330b1;
case 0x4330b3:goto L4330b3;
case 0x4330b8:c.instructions+=7;goto B4330b8;
case 0x4330bb:c.instructions+=6;goto B4330bb;
case 0x4330bc:c.instructions+=5;goto B4330bc;
case 0x4330bd:c.instructions+=4;goto B4330bd;
case 0x4330c1:c.instructions+=3;goto B4330c1;
case 0x4330c2:c.instructions+=2;goto B4330c2;
case 0x4330c3:c.instructions+=1;goto B4330c3;
case 0x4330c8:goto L4330c8;
case 0x4330cc:c.instructions+=8;goto B4330cc;
case 0x4330d0:c.instructions+=7;goto B4330d0;
case 0x4330d4:c.instructions+=6;goto B4330d4;
case 0x4330d7:c.instructions+=5;goto B4330d7;
case 0x4330db:c.instructions+=4;goto B4330db;
case 0x4330de:c.instructions+=3;goto B4330de;
case 0x4330e1:c.instructions+=2;goto B4330e1;
case 0x4330e4:c.instructions+=1;goto B4330e4;
case 0x4330e8:goto L4330e8;
case 0x4330ea:c.instructions+=1;goto B4330ea;
case 0x4330f0:goto L4330f0;
case 0x4330f4:c.instructions+=2;goto B4330f4;
case 0x4330f5:c.instructions+=1;goto B4330f5;
case 0x4330fa:goto L4330fa;
case 0x4330fd:c.instructions+=11;goto B4330fd;
case 0x433100:c.instructions+=10;goto B433100;
case 0x433102:c.instructions+=9;goto B433102;
case 0x433106:c.instructions+=8;goto B433106;
case 0x433109:c.instructions+=7;goto B433109;
case 0x43310a:c.instructions+=6;goto B43310a;
case 0x43310e:c.instructions+=5;goto B43310e;
case 0x433112:c.instructions+=4;goto B433112;
case 0x433113:c.instructions+=3;goto B433113;
case 0x433117:c.instructions+=2;goto B433117;
case 0x43311f:c.instructions+=1;goto B43311f;
case 0x433124:goto L433124;
case 0x433128:c.instructions+=12;goto B433128;
case 0x43312e:c.instructions+=11;goto B43312e;
case 0x433130:c.instructions+=10;goto B433130;
case 0x433133:c.instructions+=9;goto B433133;
case 0x433135:c.instructions+=8;goto B433135;
case 0x433139:c.instructions+=7;goto B433139;
case 0x43313d:c.instructions+=6;goto B43313d;
case 0x433143:c.instructions+=5;goto B433143;
case 0x433147:c.instructions+=4;goto B433147;
case 0x43314b:c.instructions+=3;goto B43314b;
case 0x433151:c.instructions+=2;goto B433151;
case 0x433155:c.instructions+=1;goto B433155;
case 0x43315a:goto L43315a;
case 0x43315c:c.instructions+=2;goto B43315c;
case 0x433160:c.instructions+=1;goto B433160;
case 0x433162:goto L433162;
case 0x433166:c.instructions+=4;goto B433166;
case 0x433167:c.instructions+=3;goto B433167;
case 0x43316a:c.instructions+=2;goto B43316a;
case 0x43316b:c.instructions+=1;goto B43316b;
case 0x433170:goto L433170;
case 0x433174:c.instructions+=15;goto B433174;
case 0x433178:c.instructions+=14;goto B433178;
case 0x43317c:c.instructions+=13;goto B43317c;
case 0x433182:c.instructions+=12;goto B433182;
case 0x433185:c.instructions+=11;goto B433185;
case 0x433187:c.instructions+=10;goto B433187;
case 0x43318d:c.instructions+=9;goto B43318d;
case 0x43318e:c.instructions+=8;goto B43318e;
case 0x433194:c.instructions+=7;goto B433194;
case 0x433199:c.instructions+=6;goto B433199;
case 0x43319b:c.instructions+=5;goto B43319b;
case 0x4331a1:c.instructions+=4;goto B4331a1;
case 0x4331a4:c.instructions+=3;goto B4331a4;
case 0x4331a5:c.instructions+=2;goto B4331a5;
case 0x4331af:c.instructions+=1;goto B4331af;
case 0x4331b4:goto L4331b4;
case 0x4331b6:c.instructions+=2;goto B4331b6;
case 0x4331ba:c.instructions+=1;goto B4331ba;
case 0x4331bc:goto L4331bc;
case 0x4331bf:c.instructions+=24;goto B4331bf;
case 0x4331c5:c.instructions+=23;goto B4331c5;
case 0x4331c8:c.instructions+=22;goto B4331c8;
case 0x4331cb:c.instructions+=21;goto B4331cb;
case 0x4331d2:c.instructions+=20;goto B4331d2;
case 0x4331d5:c.instructions+=19;goto B4331d5;
case 0x4331dc:c.instructions+=18;goto B4331dc;
case 0x4331de:c.instructions+=17;goto B4331de;
case 0x4331e1:c.instructions+=16;goto B4331e1;
case 0x4331e4:c.instructions+=15;goto B4331e4;
case 0x4331e7:c.instructions+=14;goto B4331e7;
case 0x4331ea:c.instructions+=13;goto B4331ea;
case 0x4331f0:c.instructions+=12;goto B4331f0;
case 0x4331f1:c.instructions+=11;goto B4331f1;
case 0x4331f4:c.instructions+=10;goto B4331f4;
case 0x4331fa:c.instructions+=9;goto B4331fa;
case 0x4331fd:c.instructions+=8;goto B4331fd;
case 0x433203:c.instructions+=7;goto B433203;
case 0x433204:c.instructions+=6;goto B433204;
case 0x433207:c.instructions+=5;goto B433207;
case 0x43320a:c.instructions+=4;goto B43320a;
case 0x43320b:c.instructions+=3;goto B43320b;
case 0x43320d:c.instructions+=2;goto B43320d;
case 0x43320e:c.instructions+=1;goto B43320e;
case 0x433220:goto L433220;
case 0x433221:c.instructions+=13;goto B433221;
case 0x433223:c.instructions+=12;goto B433223;
case 0x433226:c.instructions+=11;goto B433226;
case 0x433228:c.instructions+=10;goto B433228;
case 0x43322d:c.instructions+=9;goto B43322d;
case 0x433233:c.instructions+=8;goto B433233;
case 0x433234:c.instructions+=7;goto B433234;
case 0x43323b:c.instructions+=6;goto B43323b;
case 0x433241:c.instructions+=5;goto B433241;
case 0x433242:c.instructions+=4;goto B433242;
case 0x433244:c.instructions+=3;goto B433244;
case 0x433247:c.instructions+=2;goto B433247;
case 0x433249:c.instructions+=1;goto B433249;
case 0x43324f:goto L43324f;
case 0x433252:c.instructions+=2;goto B433252;
case 0x433254:c.instructions+=1;goto B433254;
case 0x43325a:goto L43325a;
case 0x43325f:c.instructions+=2;goto B43325f;
case 0x433261:c.instructions+=1;goto B433261;
case 0x433267:goto L433267;
case 0x43326a:c.instructions+=2;goto B43326a;
case 0x43326d:c.instructions+=1;goto B43326d;
case 0x433273:goto L433273;
case 0x433277:c.instructions+=6;goto B433277;
case 0x43327a:c.instructions+=5;goto B43327a;
case 0x433280:c.instructions+=4;goto B433280;
case 0x433281:c.instructions+=3;goto B433281;
case 0x433282:c.instructions+=2;goto B433282;
case 0x433284:c.instructions+=1;goto B433284;
case 0x433289:goto L433289;
case 0x43328c:c.instructions+=7;goto B43328c;
case 0x43328f:c.instructions+=6;goto B43328f;
case 0x433295:c.instructions+=5;goto B433295;
case 0x433299:c.instructions+=4;goto B433299;
case 0x43329a:c.instructions+=3;goto B43329a;
case 0x43329b:c.instructions+=2;goto B43329b;
case 0x43329d:c.instructions+=1;goto B43329d;
case 0x4332a2:goto L4332a2;
case 0x4332a6:c.instructions+=6;goto B4332a6;
case 0x4332aa:c.instructions+=5;goto B4332aa;
case 0x4332b2:c.instructions+=4;goto B4332b2;
case 0x4332ba:c.instructions+=3;goto B4332ba;
case 0x4332bc:c.instructions+=2;goto B4332bc;
case 0x4332bf:c.instructions+=1;goto B4332bf;
case 0x4332c1:goto L4332c1;
case 0x4332c5:c.instructions+=4;goto B4332c5;
case 0x4332c9:c.instructions+=3;goto B4332c9;
case 0x4332cb:c.instructions+=2;goto B4332cb;
case 0x4332ce:c.instructions+=1;goto B4332ce;
case 0x4332d0:goto L4332d0;
case 0x4332d4:c.instructions+=10;goto B4332d4;
case 0x4332d8:c.instructions+=9;goto B4332d8;
case 0x4332dc:c.instructions+=8;goto B4332dc;
case 0x4332dd:c.instructions+=7;goto B4332dd;
case 0x4332e1:c.instructions+=6;goto B4332e1;
case 0x4332e2:c.instructions+=5;goto B4332e2;
case 0x4332e6:c.instructions+=4;goto B4332e6;
case 0x4332ea:c.instructions+=3;goto B4332ea;
case 0x4332ee:c.instructions+=2;goto B4332ee;
case 0x4332f2:c.instructions+=1;goto B4332f2;
case 0x4332f7:goto L4332f7;
case 0x4332fa:goto L4332fa;
case 0x4332fe:c.instructions+=57;goto B4332fe;
case 0x433302:c.instructions+=56;goto B433302;
case 0x433304:c.instructions+=55;goto B433304;
case 0x433308:c.instructions+=54;goto B433308;
case 0x43330c:c.instructions+=53;goto B43330c;
case 0x43330e:c.instructions+=52;goto B43330e;
case 0x433314:c.instructions+=51;goto B433314;
case 0x433318:c.instructions+=50;goto B433318;
case 0x43331e:c.instructions+=49;goto B43331e;
case 0x433322:c.instructions+=48;goto B433322;
case 0x433326:c.instructions+=47;goto B433326;
case 0x433328:c.instructions+=46;goto B433328;
case 0x43332c:c.instructions+=45;goto B43332c;
case 0x433330:c.instructions+=44;goto B433330;
case 0x433334:c.instructions+=43;goto B433334;
case 0x43333a:c.instructions+=42;goto B43333a;
case 0x433340:c.instructions+=41;goto B433340;
case 0x433342:c.instructions+=40;goto B433342;
case 0x433344:c.instructions+=39;goto B433344;
case 0x433348:c.instructions+=38;goto B433348;
case 0x43334a:c.instructions+=37;goto B43334a;
case 0x43334c:c.instructions+=36;goto B43334c;
case 0x43334e:c.instructions+=35;goto B43334e;
case 0x433352:c.instructions+=34;goto B433352;
case 0x433356:c.instructions+=33;goto B433356;
case 0x43335a:c.instructions+=32;goto B43335a;
case 0x43335e:c.instructions+=31;goto B43335e;
case 0x433362:c.instructions+=30;goto B433362;
case 0x433366:c.instructions+=29;goto B433366;
case 0x433368:c.instructions+=28;goto B433368;
case 0x43336a:c.instructions+=27;goto B43336a;
case 0x43336e:c.instructions+=26;goto B43336e;
case 0x433372:c.instructions+=25;goto B433372;
case 0x433376:c.instructions+=24;goto B433376;
case 0x43337a:c.instructions+=23;goto B43337a;
case 0x43337e:c.instructions+=22;goto B43337e;
case 0x433382:c.instructions+=21;goto B433382;
case 0x433386:c.instructions+=20;goto B433386;
case 0x433388:c.instructions+=19;goto B433388;
case 0x43338a:c.instructions+=18;goto B43338a;
case 0x43338e:c.instructions+=17;goto B43338e;
case 0x433390:c.instructions+=16;goto B433390;
case 0x433394:c.instructions+=15;goto B433394;
case 0x433398:c.instructions+=14;goto B433398;
case 0x43339c:c.instructions+=13;goto B43339c;
case 0x4333a0:c.instructions+=12;goto B4333a0;
case 0x4333a4:c.instructions+=11;goto B4333a4;
case 0x4333a8:c.instructions+=10;goto B4333a8;
case 0x4333aa:c.instructions+=9;goto B4333aa;
case 0x4333ae:c.instructions+=8;goto B4333ae;
case 0x4333b2:c.instructions+=7;goto B4333b2;
case 0x4333b6:c.instructions+=6;goto B4333b6;
case 0x4333ba:c.instructions+=5;goto B4333ba;
case 0x4333be:c.instructions+=4;goto B4333be;
case 0x4333c2:c.instructions+=3;goto B4333c2;
case 0x4333c6:c.instructions+=2;goto B4333c6;
case 0x4333ca:c.instructions+=1;goto B4333ca;
case 0x4333cf:goto L4333cf;
case 0x4333d3:c.instructions+=29;goto B4333d3;
case 0x4333d7:c.instructions+=28;goto B4333d7;
case 0x4333db:c.instructions+=27;goto B4333db;
case 0x4333df:c.instructions+=26;goto B4333df;
case 0x4333e3:c.instructions+=25;goto B4333e3;
case 0x4333e5:c.instructions+=24;goto B4333e5;
case 0x4333e9:c.instructions+=23;goto B4333e9;
case 0x4333ed:c.instructions+=22;goto B4333ed;
case 0x4333f1:c.instructions+=21;goto B4333f1;
case 0x4333f5:c.instructions+=20;goto B4333f5;
case 0x4333fc:c.instructions+=19;goto B4333fc;
case 0x433400:c.instructions+=18;goto B433400;
case 0x433404:c.instructions+=17;goto B433404;
case 0x433406:c.instructions+=16;goto B433406;
case 0x43340a:c.instructions+=15;goto B43340a;
case 0x43340e:c.instructions+=14;goto B43340e;
case 0x433412:c.instructions+=13;goto B433412;
case 0x433416:c.instructions+=12;goto B433416;
case 0x433418:c.instructions+=11;goto B433418;
case 0x43341f:c.instructions+=10;goto B43341f;
case 0x433426:c.instructions+=9;goto B433426;
case 0x43342a:c.instructions+=8;goto B43342a;
case 0x43342e:c.instructions+=7;goto B43342e;
case 0x433432:c.instructions+=6;goto B433432;
case 0x433434:c.instructions+=5;goto B433434;
case 0x43343b:c.instructions+=4;goto B43343b;
case 0x433442:c.instructions+=3;goto B433442;
case 0x433449:c.instructions+=2;goto B433449;
case 0x433450:c.instructions+=1;goto B433450;
case 0x433455:goto L433455;
case 0x433457:c.instructions+=7;goto B433457;
case 0x433459:c.instructions+=6;goto B433459;
case 0x43345b:c.instructions+=5;goto B43345b;
case 0x43345f:c.instructions+=4;goto B43345f;
case 0x433460:c.instructions+=3;goto B433460;
case 0x433467:c.instructions+=2;goto B433467;
case 0x433472:c.instructions+=1;goto B433472;
case 0x433477:goto L433477;
case 0x43347d:c.instructions+=8;goto B43347d;
case 0x43347f:c.instructions+=7;goto B43347f;
case 0x433481:c.instructions+=6;goto B433481;
case 0x433483:c.instructions+=5;goto B433483;
case 0x433487:c.instructions+=4;goto B433487;
case 0x43348b:c.instructions+=3;goto B43348b;
case 0x43348c:c.instructions+=2;goto B43348c;
case 0x433493:c.instructions+=1;goto B433493;
case 0x433498:goto L433498;
case 0x43349e:c.instructions+=8;goto B43349e;
case 0x4334a0:c.instructions+=7;goto B4334a0;
case 0x4334a2:c.instructions+=6;goto B4334a2;
case 0x4334a4:c.instructions+=5;goto B4334a4;
case 0x4334ab:c.instructions+=4;goto B4334ab;
case 0x4334b2:c.instructions+=3;goto B4334b2;
case 0x4334b3:c.instructions+=2;goto B4334b3;
case 0x4334ba:c.instructions+=1;goto B4334ba;
case 0x4334bf:goto L4334bf;
case 0x4334c5:c.instructions+=8;goto B4334c5;
case 0x4334c7:c.instructions+=7;goto B4334c7;
case 0x4334c9:c.instructions+=6;goto B4334c9;
case 0x4334cb:c.instructions+=5;goto B4334cb;
case 0x4334d2:c.instructions+=4;goto B4334d2;
case 0x4334d9:c.instructions+=3;goto B4334d9;
case 0x4334da:c.instructions+=2;goto B4334da;
case 0x4334e1:c.instructions+=1;goto B4334e1;
case 0x4334e6:goto L4334e6;
case 0x4334ec:c.instructions+=23;goto B4334ec;
case 0x4334ee:c.instructions+=22;goto B4334ee;
case 0x4334f3:c.instructions+=21;goto B4334f3;
case 0x4334f5:c.instructions+=20;goto B4334f5;
case 0x4334fc:c.instructions+=19;goto B4334fc;
case 0x433503:c.instructions+=18;goto B433503;
case 0x43350a:c.instructions+=17;goto B43350a;
case 0x433511:c.instructions+=16;goto B433511;
case 0x433518:c.instructions+=15;goto B433518;
case 0x43351d:c.instructions+=14;goto B43351d;
case 0x433522:c.instructions+=13;goto B433522;
case 0x433523:c.instructions+=12;goto B433523;
case 0x433527:c.instructions+=11;goto B433527;
case 0x433528:c.instructions+=10;goto B433528;
case 0x43352b:c.instructions+=9;goto B43352b;
case 0x433536:c.instructions+=8;goto B433536;
case 0x433541:c.instructions+=7;goto B433541;
case 0x43354c:c.instructions+=6;goto B43354c;
case 0x433557:c.instructions+=5;goto B433557;
case 0x433562:c.instructions+=4;goto B433562;
case 0x43356d:c.instructions+=3;goto B43356d;
case 0x433578:c.instructions+=2;goto B433578;
case 0x433583:c.instructions+=1;goto B433583;
case 0x433588:goto L433588;
case 0x43358f:c.instructions+=2;goto B43358f;
case 0x43359a:c.instructions+=1;goto B43359a;
case 0x43359f:goto L43359f;
case 0x4335a6:c.instructions+=5;goto B4335a6;
case 0x4335ad:c.instructions+=4;goto B4335ad;
case 0x4335ae:c.instructions+=3;goto B4335ae;
case 0x4335b0:c.instructions+=2;goto B4335b0;
case 0x4335b1:c.instructions+=1;goto B4335b1;
case 0x4335c0:goto L4335c0;
case 0x4335c1:c.instructions+=10;goto B4335c1;
case 0x4335c3:c.instructions+=9;goto B4335c3;
case 0x4335c6:c.instructions+=8;goto B4335c6;
case 0x4335cc:c.instructions+=7;goto B4335cc;
case 0x4335d1:c.instructions+=6;goto B4335d1;
case 0x4335d3:c.instructions+=5;goto B4335d3;
case 0x4335d4:c.instructions+=4;goto B4335d4;
case 0x4335d5:c.instructions+=3;goto B4335d5;
case 0x4335d6:c.instructions+=2;goto B4335d6;
case 0x4335d8:c.instructions+=1;goto B4335d8;
case 0x4335de:goto L4335de;
case 0x4335e2:c.instructions+=1;goto B4335e2;
case 0x4335e8:goto L4335e8;
case 0x4335eb:c.instructions+=4;goto B4335eb;
case 0x4335f1:c.instructions+=3;goto B4335f1;
case 0x4335f3:c.instructions+=2;goto B4335f3;
case 0x4335f6:c.instructions+=1;goto B4335f6;
case 0x4335f8:goto L4335f8;
case 0x4335fa:c.instructions+=1;goto B4335fa;
case 0x4335ff:goto L4335ff;
case 0x433602:c.instructions+=4;goto B433602;
case 0x433606:c.instructions+=3;goto B433606;
case 0x433607:c.instructions+=2;goto B433607;
case 0x433608:c.instructions+=1;goto B433608;
case 0x43360d:goto L43360d;
case 0x433610:c.instructions+=38;goto B433610;
case 0x433613:c.instructions+=37;goto B433613;
case 0x433615:c.instructions+=36;goto B433615;
case 0x433618:c.instructions+=35;goto B433618;
case 0x43361e:c.instructions+=34;goto B43361e;
case 0x433624:c.instructions+=33;goto B433624;
case 0x43362a:c.instructions+=32;goto B43362a;
case 0x43362e:c.instructions+=31;goto B43362e;
case 0x433632:c.instructions+=30;goto B433632;
case 0x433638:c.instructions+=29;goto B433638;
case 0x43363e:c.instructions+=28;goto B43363e;
case 0x433642:c.instructions+=27;goto B433642;
case 0x433646:c.instructions+=26;goto B433646;
case 0x43364c:c.instructions+=25;goto B43364c;
case 0x433652:c.instructions+=24;goto B433652;
case 0x433656:c.instructions+=23;goto B433656;
case 0x43365c:c.instructions+=22;goto B43365c;
case 0x433660:c.instructions+=21;goto B433660;
case 0x433664:c.instructions+=20;goto B433664;
case 0x43366a:c.instructions+=19;goto B43366a;
case 0x43366e:c.instructions+=18;goto B43366e;
case 0x433672:c.instructions+=17;goto B433672;
case 0x433678:c.instructions+=16;goto B433678;
case 0x43367c:c.instructions+=15;goto B43367c;
case 0x433680:c.instructions+=14;goto B433680;
case 0x433686:c.instructions+=13;goto B433686;
case 0x433687:c.instructions+=12;goto B433687;
case 0x43368b:c.instructions+=11;goto B43368b;
case 0x433691:c.instructions+=10;goto B433691;
case 0x433694:c.instructions+=9;goto B433694;
case 0x433697:c.instructions+=8;goto B433697;
case 0x43369d:c.instructions+=7;goto B43369d;
case 0x4336a0:c.instructions+=6;goto B4336a0;
case 0x4336a2:c.instructions+=5;goto B4336a2;
case 0x4336a3:c.instructions+=4;goto B4336a3;
case 0x4336a7:c.instructions+=3;goto B4336a7;
case 0x4336ab:c.instructions+=2;goto B4336ab;
case 0x4336ac:c.instructions+=1;goto B4336ac;
case 0x4336b1:goto L4336b1;
case 0x4336b4:c.instructions+=10;goto B4336b4;
case 0x4336b7:c.instructions+=9;goto B4336b7;
case 0x4336bd:c.instructions+=8;goto B4336bd;
case 0x4336c1:c.instructions+=7;goto B4336c1;
case 0x4336c2:c.instructions+=6;goto B4336c2;
case 0x4336c5:c.instructions+=5;goto B4336c5;
case 0x4336c7:c.instructions+=4;goto B4336c7;
case 0x4336c8:c.instructions+=3;goto B4336c8;
case 0x4336cc:c.instructions+=2;goto B4336cc;
case 0x4336cd:c.instructions+=1;goto B4336cd;
case 0x4336d2:goto L4336d2;
case 0x4336d5:c.instructions+=10;goto B4336d5;
case 0x4336d8:c.instructions+=9;goto B4336d8;
case 0x4336de:c.instructions+=8;goto B4336de;
case 0x4336e2:c.instructions+=7;goto B4336e2;
case 0x4336e3:c.instructions+=6;goto B4336e3;
case 0x4336e6:c.instructions+=5;goto B4336e6;
case 0x4336e8:c.instructions+=4;goto B4336e8;
case 0x4336e9:c.instructions+=3;goto B4336e9;
case 0x4336ed:c.instructions+=2;goto B4336ed;
case 0x4336ee:c.instructions+=1;goto B4336ee;
case 0x4336f3:goto L4336f3;
case 0x4336f6:c.instructions+=10;goto B4336f6;
case 0x4336f9:c.instructions+=9;goto B4336f9;
case 0x4336ff:c.instructions+=8;goto B4336ff;
case 0x433703:c.instructions+=7;goto B433703;
case 0x433706:c.instructions+=6;goto B433706;
case 0x433707:c.instructions+=5;goto B433707;
case 0x433709:c.instructions+=4;goto B433709;
case 0x43370a:c.instructions+=3;goto B43370a;
case 0x43370e:c.instructions+=2;goto B43370e;
case 0x43370f:c.instructions+=1;goto B43370f;
case 0x433714:goto L433714;
case 0x433718:c.instructions+=6;goto B433718;
case 0x433719:c.instructions+=5;goto B433719;
case 0x433720:c.instructions+=4;goto B433720;
case 0x433721:c.instructions+=3;goto B433721;
case 0x433725:c.instructions+=2;goto B433725;
case 0x433726:c.instructions+=1;goto B433726;
case 0x43372b:goto L43372b;
case 0x43372e:c.instructions+=7;goto B43372e;
case 0x433732:c.instructions+=6;goto B433732;
case 0x433733:c.instructions+=5;goto B433733;
case 0x433737:c.instructions+=4;goto B433737;
case 0x433738:c.instructions+=3;goto B433738;
case 0x43373c:c.instructions+=2;goto B43373c;
case 0x43373d:c.instructions+=1;goto B43373d;
case 0x433742:goto L433742;
case 0x433746:c.instructions+=6;goto B433746;
case 0x433747:c.instructions+=5;goto B433747;
case 0x43374e:c.instructions+=4;goto B43374e;
case 0x43374f:c.instructions+=3;goto B43374f;
case 0x433753:c.instructions+=2;goto B433753;
case 0x433754:c.instructions+=1;goto B433754;
case 0x433759:goto L433759;
case 0x43375d:c.instructions+=6;goto B43375d;
case 0x43375e:c.instructions+=5;goto B43375e;
case 0x433765:c.instructions+=4;goto B433765;
case 0x433766:c.instructions+=3;goto B433766;
case 0x43376a:c.instructions+=2;goto B43376a;
case 0x43376b:c.instructions+=1;goto B43376b;
case 0x433770:goto L433770;
case 0x433774:c.instructions+=27;goto B433774;
case 0x433778:c.instructions+=26;goto B433778;
case 0x43377b:c.instructions+=25;goto B43377b;
case 0x43377e:c.instructions+=24;goto B43377e;
case 0x43377f:c.instructions+=23;goto B43377f;
case 0x433783:c.instructions+=22;goto B433783;
case 0x433787:c.instructions+=21;goto B433787;
case 0x43378b:c.instructions+=20;goto B43378b;
case 0x43378f:c.instructions+=19;goto B43378f;
case 0x433790:c.instructions+=18;goto B433790;
case 0x433794:c.instructions+=17;goto B433794;
case 0x433795:c.instructions+=16;goto B433795;
case 0x433799:c.instructions+=15;goto B433799;
case 0x43379d:c.instructions+=14;goto B43379d;
case 0x4337a3:c.instructions+=13;goto B4337a3;
case 0x4337a7:c.instructions+=12;goto B4337a7;
case 0x4337a9:c.instructions+=11;goto B4337a9;
case 0x4337ad:c.instructions+=10;goto B4337ad;
case 0x4337b1:c.instructions+=9;goto B4337b1;
case 0x4337b5:c.instructions+=8;goto B4337b5;
case 0x4337b9:c.instructions+=7;goto B4337b9;
case 0x4337bd:c.instructions+=6;goto B4337bd;
case 0x4337c1:c.instructions+=5;goto B4337c1;
case 0x4337c5:c.instructions+=4;goto B4337c5;
case 0x4337c9:c.instructions+=3;goto B4337c9;
case 0x4337cd:c.instructions+=2;goto B4337cd;
case 0x4337d1:c.instructions+=1;goto B4337d1;
case 0x4337d6:goto L4337d6;
case 0x4337dc:c.instructions+=7;goto B4337dc;
case 0x4337dd:c.instructions+=6;goto B4337dd;
case 0x4337e1:c.instructions+=5;goto B4337e1;
case 0x4337e2:c.instructions+=4;goto B4337e2;
case 0x4337e6:c.instructions+=3;goto B4337e6;
case 0x4337e7:c.instructions+=2;goto B4337e7;
case 0x4337e9:c.instructions+=1;goto B4337e9;
case 0x4337ee:goto L4337ee;
case 0x4337ef:c.instructions+=5;goto B4337ef;
case 0x4337f0:c.instructions+=4;goto B4337f0;
case 0x4337f1:c.instructions+=3;goto B4337f1;
case 0x4337f3:c.instructions+=2;goto B4337f3;
case 0x4337f4:c.instructions+=1;goto B4337f4;
case 0x433800:goto L433800;
case 0x433802:c.instructions+=14;goto B433802;
case 0x433807:c.instructions+=13;goto B433807;
case 0x43380d:c.instructions+=12;goto B43380d;
case 0x43380e:c.instructions+=11;goto B43380e;
case 0x433815:c.instructions+=10;goto B433815;
case 0x433816:c.instructions+=9;goto B433816;
case 0x433817:c.instructions+=8;goto B433817;
case 0x433819:c.instructions+=7;goto B433819;
case 0x43381a:c.instructions+=6;goto B43381a;
case 0x43381e:c.instructions+=5;goto B43381e;
case 0x433824:c.instructions+=4;goto B433824;
case 0x433827:c.instructions+=3;goto B433827;
case 0x433829:c.instructions+=2;goto B433829;
case 0x433831:c.instructions+=1;goto B433831;
case 0x433833:goto L433833;
case 0x433835:c.instructions+=1;goto B433835;
case 0x43383a:goto L43383a;
case 0x43383f:c.instructions+=3;goto B43383f;
case 0x433840:c.instructions+=2;goto B433840;
case 0x433841:c.instructions+=1;goto B433841;
case 0x433846:goto L433846;
case 0x433849:c.instructions+=1;goto B433849;
case 0x433850:goto L433850;
case 0x433853:c.instructions+=2;goto B433853;
case 0x433855:c.instructions+=1;goto B433855;
case 0x433857:goto L433857;
case 0x433858:c.instructions+=1;goto B433858;
case 0x43385d:goto L43385d;
case 0x433860:goto L433860;
case 0x433864:c.instructions+=6;goto B433864;
case 0x43386a:c.instructions+=5;goto B43386a;
case 0x43386b:c.instructions+=4;goto B43386b;
case 0x43386c:c.instructions+=3;goto B43386c;
case 0x433873:c.instructions+=2;goto B433873;
case 0x433876:c.instructions+=1;goto B433876;
case 0x433880:goto L433880;
case 0x433881:c.instructions+=14;goto B433881;
case 0x433883:c.instructions+=13;goto B433883;
case 0x433886:c.instructions+=12;goto B433886;
case 0x433888:c.instructions+=11;goto B433888;
case 0x43388d:c.instructions+=10;goto B43388d;
case 0x433893:c.instructions+=9;goto B433893;
case 0x433894:c.instructions+=8;goto B433894;
case 0x43389b:c.instructions+=7;goto B43389b;
case 0x4338a1:c.instructions+=6;goto B4338a1;
case 0x4338a2:c.instructions+=5;goto B4338a2;
case 0x4338a3:c.instructions+=4;goto B4338a3;
case 0x4338a5:c.instructions+=3;goto B4338a5;
case 0x4338a7:c.instructions+=2;goto B4338a7;
case 0x4338a8:c.instructions+=1;goto B4338a8;
case 0x4338ab:goto L4338ab;
case 0x4338ae:c.instructions+=7;goto B4338ae;
case 0x4338b0:c.instructions+=6;goto B4338b0;
case 0x4338b3:c.instructions+=5;goto B4338b3;
case 0x4338b6:c.instructions+=4;goto B4338b6;
case 0x4338b9:c.instructions+=3;goto B4338b9;
case 0x4338bc:c.instructions+=2;goto B4338bc;
case 0x4338be:c.instructions+=1;goto B4338be;
case 0x4338c3:goto L4338c3;
case 0x4338c6:c.instructions+=5;goto B4338c6;
case 0x4338c9:c.instructions+=4;goto B4338c9;
case 0x4338ca:c.instructions+=3;goto B4338ca;
case 0x4338cc:c.instructions+=2;goto B4338cc;
case 0x4338cf:c.instructions+=1;goto B4338cf;
case 0x4338d4:goto L4338d4;
case 0x4338d7:c.instructions+=8;goto B4338d7;
case 0x4338da:c.instructions+=7;goto B4338da;
case 0x4338e0:c.instructions+=6;goto B4338e0;
case 0x4338e3:c.instructions+=5;goto B4338e3;
case 0x4338e6:c.instructions+=4;goto B4338e6;
case 0x4338e9:c.instructions+=3;goto B4338e9;
case 0x4338ea:c.instructions+=2;goto B4338ea;
case 0x4338eb:c.instructions+=1;goto B4338eb;
case 0x4338f0:goto L4338f0;
case 0x4338f6:c.instructions+=3;goto B4338f6;
case 0x4338f9:c.instructions+=2;goto B4338f9;
case 0x4338fb:c.instructions+=1;goto B4338fb;
case 0x4338fd:goto L4338fd;
case 0x4338ff:c.instructions+=1;goto B4338ff;
case 0x433904:goto L433904;
case 0x43390a:c.instructions+=2;goto B43390a;
case 0x43390b:c.instructions+=1;goto B43390b;
case 0x433910:goto L433910;
case 0x433913:c.instructions+=4;goto B433913;
case 0x433917:c.instructions+=3;goto B433917;
case 0x433919:c.instructions+=2;goto B433919;
case 0x433924:c.instructions+=1;goto B433924;
case 0x433926:goto L433926;
case 0x433929:c.instructions+=6;goto B433929;
case 0x43392b:c.instructions+=5;goto B43392b;
case 0x43392e:c.instructions+=4;goto B43392e;
case 0x43392f:c.instructions+=3;goto B43392f;
case 0x433930:c.instructions+=2;goto B433930;
case 0x433932:c.instructions+=1;goto B433932;
case 0x433937:goto L433937;
case 0x433939:goto L433939;
case 0x43393b:goto L43393b;
case 0x43393e:c.instructions+=5;goto B43393e;
case 0x433941:c.instructions+=4;goto B433941;
case 0x433944:c.instructions+=3;goto B433944;
case 0x433946:c.instructions+=2;goto B433946;
case 0x43394d:c.instructions+=1;goto B43394d;
case 0x43394f:goto L43394f;
case 0x433952:c.instructions+=3;goto B433952;
case 0x433958:c.instructions+=2;goto B433958;
case 0x43395a:c.instructions+=1;goto B43395a;
case 0x43395c:goto L43395c;
case 0x43395e:c.instructions+=1;goto B43395e;
case 0x433963:goto L433963;
case 0x433966:c.instructions+=4;goto B433966;
case 0x43396a:c.instructions+=3;goto B43396a;
case 0x43396b:c.instructions+=2;goto B43396b;
case 0x43396c:c.instructions+=1;goto B43396c;
case 0x433971:goto L433971;
case 0x433974:c.instructions+=2;goto B433974;
case 0x433978:c.instructions+=1;goto B433978;
case 0x43397d:goto L43397d;
case 0x43397f:c.instructions+=7;goto B43397f;
case 0x433981:c.instructions+=6;goto B433981;
case 0x433983:c.instructions+=5;goto B433983;
case 0x433987:c.instructions+=4;goto B433987;
case 0x433988:c.instructions+=3;goto B433988;
case 0x43398c:c.instructions+=2;goto B43398c;
case 0x433997:c.instructions+=1;goto B433997;
case 0x43399c:goto L43399c;
case 0x4339a0:c.instructions+=4;goto B4339a0;
case 0x4339a4:c.instructions+=3;goto B4339a4;
case 0x4339a5:c.instructions+=2;goto B4339a5;
case 0x4339a8:c.instructions+=1;goto B4339a8;
case 0x4339ad:goto L4339ad;
case 0x4339b1:c.instructions+=2;goto B4339b1;
case 0x4339b8:c.instructions+=1;goto B4339b8;
case 0x4339bd:goto L4339bd;
case 0x4339c4:c.instructions+=8;goto B4339c4;
case 0x4339c5:c.instructions+=7;goto B4339c5;
case 0x4339c6:c.instructions+=6;goto B4339c6;
case 0x4339c8:c.instructions+=5;goto B4339c8;
case 0x4339cf:c.instructions+=4;goto B4339cf;
case 0x4339d0:c.instructions+=3;goto B4339d0;
case 0x4339d2:c.instructions+=2;goto B4339d2;
case 0x4339d3:c.instructions+=1;goto B4339d3;
case 0x4339e0:goto L4339e0;
case 0x4339e1:c.instructions+=9;goto B4339e1;
case 0x4339e3:c.instructions+=8;goto B4339e3;
case 0x4339e6:c.instructions+=7;goto B4339e6;
case 0x4339e9:c.instructions+=6;goto B4339e9;
case 0x4339ea:c.instructions+=5;goto B4339ea;
case 0x4339eb:c.instructions+=4;goto B4339eb;
case 0x4339ef:c.instructions+=3;goto B4339ef;
case 0x4339f0:c.instructions+=2;goto B4339f0;
case 0x4339f2:c.instructions+=1;goto B4339f2;
case 0x4339f7:goto L4339f7;
case 0x4339f9:c.instructions+=1;goto B4339f9;
case 0x4339fe:goto L4339fe;
case 0x433a00:c.instructions+=6;goto B433a00;
case 0x433a04:c.instructions+=5;goto B433a04;
case 0x433a05:c.instructions+=4;goto B433a05;
case 0x433a08:c.instructions+=3;goto B433a08;
case 0x433a09:c.instructions+=2;goto B433a09;
case 0x433a0c:c.instructions+=1;goto B433a0c;
case 0x433a11:goto L433a11;
case 0x433a17:c.instructions+=3;goto B433a17;
case 0x433a1a:c.instructions+=2;goto B433a1a;
case 0x433a1c:c.instructions+=1;goto B433a1c;
case 0x433a1e:goto L433a1e;
case 0x433a20:c.instructions+=1;goto B433a20;
case 0x433a25:goto L433a25;
case 0x433a26:c.instructions+=5;goto B433a26;
case 0x433a28:c.instructions+=4;goto B433a28;
case 0x433a29:c.instructions+=3;goto B433a29;
case 0x433a2b:c.instructions+=2;goto B433a2b;
case 0x433a2c:c.instructions+=1;goto B433a2c;
case 0x433a30:goto L433a30;
case 0x433a35:c.instructions+=3;goto B433a35;
case 0x433a37:c.instructions+=2;goto B433a37;
case 0x433a38:c.instructions+=1;goto B433a38;
case 0x433a3a:goto L433a3a;
case 0x433a3d:c.instructions+=1;goto B433a3d;
case 0x433a3f:goto L433a3f;
case 0x433a41:goto L433a41;
case 0x433a46:c.instructions+=1;goto B433a46;
case 0x433a4b:goto L433a4b;
case 0x433a4d:c.instructions+=1;goto B433a4d;
case 0x433a4f:goto L433a4f;
case 0x433a53:goto L433a53;
case 0x433a56:c.instructions+=1;goto B433a56;
case 0x433a58:goto L433a58;
case 0x433a5b:c.instructions+=2;goto B433a5b;
case 0x433a5d:c.instructions+=1;goto B433a5d;
case 0x433a5f:goto L433a5f;
case 0x433a62:c.instructions+=1;goto B433a62;
case 0x433a64:goto L433a64;
case 0x433a66:goto L433a66;
case 0x433a68:c.instructions+=1;goto B433a68;
case 0x433a6a:goto L433a6a;
case 0x433a6c:c.instructions+=2;goto B433a6c;
case 0x433a6d:c.instructions+=1;goto B433a6d;
case 0x433a6e:goto L433a6e;
case 0x433a70:c.instructions+=2;goto B433a70;
case 0x433a71:c.instructions+=1;goto B433a71;
case 0x433a80:goto L433a80;
case 0x433a84:c.instructions+=16;goto B433a84;
case 0x433a86:c.instructions+=15;goto B433a86;
case 0x433a8a:c.instructions+=14;goto B433a8a;
case 0x433a8d:c.instructions+=13;goto B433a8d;
case 0x433a91:c.instructions+=12;goto B433a91;
case 0x433a94:c.instructions+=11;goto B433a94;
case 0x433a9a:c.instructions+=10;goto B433a9a;
case 0x433a9e:c.instructions+=9;goto B433a9e;
case 0x433aa1:c.instructions+=8;goto B433aa1;
case 0x433aa5:c.instructions+=7;goto B433aa5;
case 0x433aab:c.instructions+=6;goto B433aab;
case 0x433ab2:c.instructions+=5;goto B433ab2;
case 0x433ab5:c.instructions+=4;goto B433ab5;
case 0x433ab8:c.instructions+=3;goto B433ab8;
case 0x433abb:c.instructions+=2;goto B433abb;
case 0x433abe:c.instructions+=1;goto B433abe;
case 0x433ad0:goto L433ad0;
case 0x433ad4:c.instructions+=8;goto B433ad4;
case 0x433ad5:c.instructions+=7;goto B433ad5;
case 0x433ad6:c.instructions+=6;goto B433ad6;
case 0x433ad7:c.instructions+=5;goto B433ad7;
case 0x433ad8:c.instructions+=4;goto B433ad8;
case 0x433ada:c.instructions+=3;goto B433ada;
case 0x433add:c.instructions+=2;goto B433add;
case 0x433adf:c.instructions+=1;goto B433adf;
case 0x433ae5:goto L433ae5;
case 0x433aec:goto L433aec;
case 0x433af0:c.instructions+=2;goto B433af0;
case 0x433af2:c.instructions+=1;goto B433af2;
case 0x433af4:goto L433af4;
case 0x433af7:c.instructions+=3;goto B433af7;
case 0x433af8:c.instructions+=2;goto B433af8;
case 0x433afd:c.instructions+=1;goto B433afd;
case 0x433b02:goto L433b02;
case 0x433b05:c.instructions+=1;goto B433b05;
case 0x433b07:goto L433b07;
case 0x433b0a:c.instructions+=3;goto B433b0a;
case 0x433b0b:c.instructions+=2;goto B433b0b;
case 0x433b10:c.instructions+=1;goto B433b10;
case 0x433b15:goto L433b15;
case 0x433b18:c.instructions+=1;goto B433b18;
case 0x433b1a:goto L433b1a;
case 0x433b1d:c.instructions+=3;goto B433b1d;
case 0x433b1e:c.instructions+=2;goto B433b1e;
case 0x433b23:c.instructions+=1;goto B433b23;
case 0x433b28:goto L433b28;
case 0x433b2b:c.instructions+=1;goto B433b2b;
case 0x433b2d:goto L433b2d;
case 0x433b30:c.instructions+=3;goto B433b30;
case 0x433b31:c.instructions+=2;goto B433b31;
case 0x433b36:c.instructions+=1;goto B433b36;
case 0x433b3b:goto L433b3b;
case 0x433b3e:c.instructions+=1;goto B433b3e;
case 0x433b40:goto L433b40;
case 0x433b43:c.instructions+=3;goto B433b43;
case 0x433b44:c.instructions+=2;goto B433b44;
case 0x433b49:c.instructions+=1;goto B433b49;
case 0x433b4e:goto L433b4e;
case 0x433b51:c.instructions+=1;goto B433b51;
case 0x433b57:goto L433b57;
case 0x433b5a:c.instructions+=3;goto B433b5a;
case 0x433b5b:c.instructions+=2;goto B433b5b;
case 0x433b60:c.instructions+=1;goto B433b60;
case 0x433b65:goto L433b65;
case 0x433b68:c.instructions+=3;goto B433b68;
case 0x433b69:c.instructions+=2;goto B433b69;
case 0x433b6e:c.instructions+=1;goto B433b6e;
case 0x433b73:goto L433b73;
case 0x433b77:c.instructions+=2;goto B433b77;
case 0x433b79:c.instructions+=1;goto B433b79;
case 0x433b7b:goto L433b7b;
case 0x433b7e:c.instructions+=3;goto B433b7e;
case 0x433b7f:c.instructions+=2;goto B433b7f;
case 0x433b84:c.instructions+=1;goto B433b84;
case 0x433b89:goto L433b89;
case 0x433b8c:c.instructions+=1;goto B433b8c;
case 0x433b8e:goto L433b8e;
case 0x433b91:c.instructions+=3;goto B433b91;
case 0x433b92:c.instructions+=2;goto B433b92;
case 0x433b97:c.instructions+=1;goto B433b97;
case 0x433b9c:goto L433b9c;
case 0x433b9f:c.instructions+=1;goto B433b9f;
case 0x433ba1:goto L433ba1;
case 0x433ba4:c.instructions+=3;goto B433ba4;
case 0x433ba5:c.instructions+=2;goto B433ba5;
case 0x433baa:c.instructions+=1;goto B433baa;
case 0x433baf:goto L433baf;
case 0x433bb2:c.instructions+=1;goto B433bb2;
case 0x433bb4:goto L433bb4;
case 0x433bb7:c.instructions+=3;goto B433bb7;
case 0x433bb8:c.instructions+=2;goto B433bb8;
case 0x433bbd:c.instructions+=1;goto B433bbd;
case 0x433bc2:goto L433bc2;
case 0x433bc5:c.instructions+=1;goto B433bc5;
case 0x433bc7:goto L433bc7;
case 0x433bca:c.instructions+=3;goto B433bca;
case 0x433bcb:c.instructions+=2;goto B433bcb;
case 0x433bd0:c.instructions+=1;goto B433bd0;
case 0x433bd5:goto L433bd5;
case 0x433bd8:c.instructions+=1;goto B433bd8;
case 0x433bda:goto L433bda;
case 0x433bdd:c.instructions+=3;goto B433bdd;
case 0x433bde:c.instructions+=2;goto B433bde;
case 0x433be3:c.instructions+=1;goto B433be3;
case 0x433be8:goto L433be8;
case 0x433beb:c.instructions+=1;goto B433beb;
case 0x433bf1:goto L433bf1;
case 0x433bf4:c.instructions+=3;goto B433bf4;
case 0x433bf5:c.instructions+=2;goto B433bf5;
case 0x433bfa:c.instructions+=1;goto B433bfa;
case 0x433bfc:goto L433bfc;
case 0x433c00:c.instructions+=2;goto B433c00;
case 0x433c02:c.instructions+=1;goto B433c02;
case 0x433c04:goto L433c04;
case 0x433c07:c.instructions+=3;goto B433c07;
case 0x433c08:c.instructions+=2;goto B433c08;
case 0x433c0d:c.instructions+=1;goto B433c0d;
case 0x433c0f:goto L433c0f;
case 0x433c12:c.instructions+=1;goto B433c12;
case 0x433c14:goto L433c14;
case 0x433c17:c.instructions+=3;goto B433c17;
case 0x433c18:c.instructions+=2;goto B433c18;
case 0x433c1d:c.instructions+=1;goto B433c1d;
case 0x433c1f:goto L433c1f;
case 0x433c22:c.instructions+=1;goto B433c22;
case 0x433c24:goto L433c24;
case 0x433c27:c.instructions+=3;goto B433c27;
case 0x433c28:c.instructions+=2;goto B433c28;
case 0x433c2d:c.instructions+=1;goto B433c2d;
case 0x433c2f:goto L433c2f;
case 0x433c32:c.instructions+=1;goto B433c32;
case 0x433c34:goto L433c34;
case 0x433c37:c.instructions+=3;goto B433c37;
case 0x433c38:c.instructions+=2;goto B433c38;
case 0x433c3d:c.instructions+=1;goto B433c3d;
case 0x433c3f:goto L433c3f;
case 0x433c42:c.instructions+=1;goto B433c42;
case 0x433c44:goto L433c44;
case 0x433c47:c.instructions+=3;goto B433c47;
case 0x433c48:c.instructions+=2;goto B433c48;
case 0x433c4d:c.instructions+=1;goto B433c4d;
case 0x433c4f:goto L433c4f;
case 0x433c52:c.instructions+=1;goto B433c52;
case 0x433c54:goto L433c54;
case 0x433c57:c.instructions+=3;goto B433c57;
case 0x433c58:c.instructions+=2;goto B433c58;
case 0x433c5d:c.instructions+=1;goto B433c5d;
case 0x433c5f:goto L433c5f;
case 0x433c62:c.instructions+=1;goto B433c62;
case 0x433c64:goto L433c64;
case 0x433c67:c.instructions+=2;goto B433c67;
case 0x433c68:c.instructions+=1;goto B433c68;
case 0x433c6d:goto L433c6d;
case 0x433c72:goto L433c72;
case 0x433c75:c.instructions+=1;goto B433c75;
case 0x433c77:goto L433c77;
case 0x433c7a:c.instructions+=4;goto B433c7a;
case 0x433c7c:c.instructions+=3;goto B433c7c;
case 0x433c7e:c.instructions+=2;goto B433c7e;
case 0x433c82:c.instructions+=1;goto B433c82;
case 0x433c87:goto L433c87;
case 0x433c89:c.instructions+=2;goto B433c89;
case 0x433c8b:c.instructions+=1;goto B433c8b;
case 0x433c8d:goto L433c8d;
case 0x433c90:goto L433c90;
case 0x433c93:c.instructions+=3;goto B433c93;
case 0x433c95:c.instructions+=2;goto B433c95;
case 0x433c97:c.instructions+=1;goto B433c97;
case 0x433c9a:goto L433c9a;
case 0x433c9c:c.instructions+=1;goto B433c9c;
case 0x433c9e:goto L433c9e;
case 0x433ca2:goto L433ca2;
case 0x433ca4:c.instructions+=2;goto B433ca4;
case 0x433ca6:c.instructions+=1;goto B433ca6;
case 0x433ca8:goto L433ca8;
case 0x433cac:c.instructions+=5;goto B433cac;
case 0x433cad:c.instructions+=4;goto B433cad;
case 0x433cae:c.instructions+=3;goto B433cae;
case 0x433caf:c.instructions+=2;goto B433caf;
case 0x433cb0:c.instructions+=1;goto B433cb0;
case 0x433cb3:goto L433cb3;
case 0x433cb4:c.instructions+=5;goto B433cb4;
case 0x433cb5:c.instructions+=4;goto B433cb5;
case 0x433cb6:c.instructions+=3;goto B433cb6;
case 0x433cb8:c.instructions+=2;goto B433cb8;
case 0x433cb9:c.instructions+=1;goto B433cb9;
case 0x433cd0:goto L433cd0;
case 0x433cd1:c.instructions+=3;goto B433cd1;
case 0x433cd5:c.instructions+=2;goto B433cd5;
case 0x433cd6:c.instructions+=1;goto B433cd6;
case 0x433cdb:goto L433cdb;
case 0x433cde:c.instructions+=2;goto B433cde;
case 0x433ce0:c.instructions+=1;goto B433ce0;
case 0x433ce2:goto L433ce2;
case 0x433ce5:c.instructions+=3;goto B433ce5;
case 0x433ce7:c.instructions+=2;goto B433ce7;
case 0x433ce9:c.instructions+=1;goto B433ce9;
case 0x433ceb:goto L433ceb;
case 0x433cef:c.instructions+=1;goto B433cef;
case 0x433cf0:goto L433cf0;
case 0x433cf3:c.instructions+=1;goto B433cf3;
case 0x433cf5:goto L433cf5;
case 0x433cf8:c.instructions+=1;goto B433cf8;
case 0x433cfa:goto L433cfa;
case 0x433cfc:c.instructions+=2;goto B433cfc;
case 0x433cfe:c.instructions+=1;goto B433cfe;
case 0x433d00:goto L433d00;
case 0x433d05:c.instructions+=2;goto B433d05;
case 0x433d06:c.instructions+=1;goto B433d06;
case 0x433d07:goto L433d07;
case 0x433d0a:c.instructions+=2;goto B433d0a;
case 0x433d0b:c.instructions+=1;goto B433d0b;
case 0x433d10:goto L433d10;
case 0x433d11:c.instructions+=4;goto B433d11;
case 0x433d15:c.instructions+=3;goto B433d15;
case 0x433d18:c.instructions+=2;goto B433d18;
case 0x433d19:c.instructions+=1;goto B433d19;
case 0x433d1e:goto L433d1e;
case 0x433d21:c.instructions+=5;goto B433d21;
case 0x433d24:c.instructions+=4;goto B433d24;
case 0x433d26:c.instructions+=3;goto B433d26;
case 0x433d27:c.instructions+=2;goto B433d27;
case 0x433d29:c.instructions+=1;goto B433d29;
case 0x433d2e:goto L433d2e;
case 0x433d34:c.instructions+=6;goto B433d34;
case 0x433d3a:c.instructions+=5;goto B433d3a;
case 0x433d3d:c.instructions+=4;goto B433d3d;
case 0x433d3e:c.instructions+=3;goto B433d3e;
case 0x433d41:c.instructions+=2;goto B433d41;
case 0x433d44:c.instructions+=1;goto B433d44;
case 0x433d50:goto L433d50;
case 0x433d54:c.instructions+=5;goto B433d54;
case 0x433d55:c.instructions+=4;goto B433d55;
case 0x433d59:c.instructions+=3;goto B433d59;
case 0x433d5c:c.instructions+=2;goto B433d5c;
case 0x433d5e:c.instructions+=1;goto B433d5e;
case 0x433d64:goto L433d64;
case 0x433d69:c.instructions+=2;goto B433d69;
case 0x433d6b:c.instructions+=1;goto B433d6b;
case 0x433d71:goto L433d71;
case 0x433d78:goto L433d78;
case 0x433d7a:c.instructions+=1;goto B433d7a;
case 0x433d80:goto L433d80;
case 0x433d83:c.instructions+=5;goto B433d83;
case 0x433d89:c.instructions+=4;goto B433d89;
case 0x433d8f:c.instructions+=3;goto B433d8f;
case 0x433d92:c.instructions+=2;goto B433d92;
case 0x433d93:c.instructions+=1;goto B433d93;
case 0x433d94:goto L433d94;
case 0x433d97:c.instructions+=1;goto B433d97;
case 0x433d99:goto L433d99;
case 0x433da0:c.instructions+=5;goto B433da0;
case 0x433da6:c.instructions+=4;goto B433da6;
case 0x433dac:c.instructions+=3;goto B433dac;
case 0x433daf:c.instructions+=2;goto B433daf;
case 0x433db0:c.instructions+=1;goto B433db0;
case 0x433db1:goto L433db1;
case 0x433db3:c.instructions+=1;goto B433db3;
case 0x433db5:goto L433db5;
case 0x433db7:c.instructions+=1;goto B433db7;
case 0x433db9:goto L433db9;
case 0x433dbc:goto L433dbc;
case 0x433dc2:c.instructions+=6;goto B433dc2;
case 0x433dc3:c.instructions+=5;goto B433dc3;
case 0x433dc9:c.instructions+=4;goto B433dc9;
case 0x433dcd:c.instructions+=3;goto B433dcd;
case 0x433dd0:c.instructions+=2;goto B433dd0;
case 0x433dd4:c.instructions+=1;goto B433dd4;
case 0x433dd9:goto L433dd9;
case 0x433ddd:c.instructions+=5;goto B433ddd;
case 0x433de0:c.instructions+=4;goto B433de0;
case 0x433de4:c.instructions+=3;goto B433de4;
case 0x433de7:c.instructions+=2;goto B433de7;
case 0x433de8:c.instructions+=1;goto B433de8;
case 0x433de9:goto L433de9;
case 0x433df0:c.instructions+=2;goto B433df0;
case 0x433df1:c.instructions+=1;goto B433df1;
case 0x433df2:goto L433df2;
case 0x433df3:c.instructions+=1;goto B433df3;
case 0x433df5:goto L433df5;
case 0x433df6:c.instructions+=1;goto B433df6;
case 0x433df8:goto L433df8;
case 0x433dff:c.instructions+=1;goto B433dff;
case 0x433e01:goto L433e01;
case 0x433e08:goto L433e08;
case 0x433e09:c.instructions+=1;goto B433e09;
case 0x433e20:goto L433e20;
case 0x433e21:c.instructions+=3;goto B433e21;
case 0x433e25:c.instructions+=2;goto B433e25;
case 0x433e26:c.instructions+=1;goto B433e26;
case 0x433e2b:goto L433e2b;
case 0x433e2e:c.instructions+=2;goto B433e2e;
case 0x433e30:c.instructions+=1;goto B433e30;
case 0x433e36:goto L433e36;
case 0x433e37:c.instructions+=6;goto B433e37;
case 0x433e3a:c.instructions+=5;goto B433e3a;
case 0x433e3c:c.instructions+=4;goto B433e3c;
case 0x433e3e:c.instructions+=3;goto B433e3e;
case 0x433e3f:c.instructions+=2;goto B433e3f;
case 0x433e43:c.instructions+=1;goto B433e43;
case 0x433e45:goto L433e45;
case 0x433e48:c.instructions+=1;goto B433e48;
case 0x433e4a:goto L433e4a;
case 0x433e4d:c.instructions+=1;goto B433e4d;
case 0x433e4f:goto L433e4f;
case 0x433e51:c.instructions+=2;goto B433e51;
case 0x433e53:c.instructions+=1;goto B433e53;
case 0x433e55:goto L433e55;
case 0x433e56:c.instructions+=4;goto B433e56;
case 0x433e5a:c.instructions+=3;goto B433e5a;
case 0x433e5c:c.instructions+=2;goto B433e5c;
case 0x433e63:c.instructions+=1;goto B433e63;
case 0x433e68:goto L433e68;
case 0x433e6b:c.instructions+=2;goto B433e6b;
case 0x433e6d:c.instructions+=1;goto B433e6d;
case 0x433e73:goto L433e73;
case 0x433e77:c.instructions+=8;goto B433e77;
case 0x433e7b:c.instructions+=7;goto B433e7b;
case 0x433e7c:c.instructions+=6;goto B433e7c;
case 0x433e7d:c.instructions+=5;goto B433e7d;
case 0x433e7e:c.instructions+=4;goto B433e7e;
case 0x433e7f:c.instructions+=3;goto B433e7f;
case 0x433e80:c.instructions+=2;goto B433e80;
case 0x433e82:c.instructions+=1;goto B433e82;
case 0x433e87:goto L433e87;
case 0x433e8a:c.instructions+=9;goto B433e8a;
case 0x433e8b:c.instructions+=8;goto B433e8b;
case 0x433e8d:c.instructions+=7;goto B433e8d;
case 0x433e90:c.instructions+=6;goto B433e90;
case 0x433e91:c.instructions+=5;goto B433e91;
case 0x433e93:c.instructions+=4;goto B433e93;
case 0x433e94:c.instructions+=3;goto B433e94;
case 0x433e97:c.instructions+=2;goto B433e97;
case 0x433e98:c.instructions+=1;goto B433e98;
case 0x433e99:goto L433e99;
case 0x433ea1:c.instructions+=2;goto B433ea1;
case 0x433ea5:c.instructions+=1;goto B433ea5;
case 0x433ea7:goto L433ea7;
case 0x433eae:goto L433eae;
case 0x433eb2:c.instructions+=3;goto B433eb2;
case 0x433eb4:c.instructions+=2;goto B433eb4;
case 0x433eb7:c.instructions+=1;goto B433eb7;
case 0x433eb9:goto L433eb9;
case 0x433ebc:c.instructions+=1;goto B433ebc;
case 0x433ebe:goto L433ebe;
case 0x433ec0:c.instructions+=1;goto B433ec0;
case 0x433ec2:goto L433ec2;
case 0x433ec5:c.instructions+=1;goto B433ec5;
case 0x433ec7:goto L433ec7;
case 0x433eca:goto L433eca;
case 0x433ecc:goto L433ecc;
case 0x433ecf:c.instructions+=6;goto B433ecf;
case 0x433ed3:c.instructions+=5;goto B433ed3;
case 0x433ed6:c.instructions+=4;goto B433ed6;
case 0x433eda:c.instructions+=3;goto B433eda;
case 0x433edd:c.instructions+=2;goto B433edd;
case 0x433edf:c.instructions+=1;goto B433edf;
case 0x433ee1:goto L433ee1;
case 0x433ee4:c.instructions+=1;goto B433ee4;
case 0x433ee6:goto L433ee6;
case 0x433ee9:c.instructions+=1;goto B433ee9;
case 0x433eeb:goto L433eeb;
case 0x433eed:c.instructions+=1;goto B433eed;
case 0x433eef:goto L433eef;
case 0x433ef6:c.instructions+=2;goto B433ef6;
case 0x433ef8:c.instructions+=1;goto B433ef8;
case 0x433efa:goto L433efa;
case 0x433efc:c.instructions+=1;goto B433efc;
case 0x433efe:goto L433efe;
case 0x433f00:c.instructions+=1;goto B433f00;
case 0x433f02:goto L433f02;
case 0x433f09:goto L433f09;
case 0x433f0c:goto L433f0c;
case 0x433f0e:c.instructions+=6;goto B433f0e;
case 0x433f11:c.instructions+=5;goto B433f11;
case 0x433f13:c.instructions+=4;goto B433f13;
case 0x433f16:c.instructions+=3;goto B433f16;
case 0x433f17:c.instructions+=2;goto B433f17;
case 0x433f18:c.instructions+=1;goto B433f18;
case 0x433f1d:goto L433f1d;
case 0x433f20:c.instructions+=4;goto B433f20;
case 0x433f21:c.instructions+=3;goto B433f21;
case 0x433f22:c.instructions+=2;goto B433f22;
case 0x433f23:c.instructions+=1;goto B433f23;
case 0x433f24:goto L433f24;
case 0x433f27:c.instructions+=6;goto B433f27;
case 0x433f29:c.instructions+=5;goto B433f29;
case 0x433f2b:c.instructions+=4;goto B433f2b;
case 0x433f2e:c.instructions+=3;goto B433f2e;
case 0x433f31:c.instructions+=2;goto B433f31;
case 0x433f33:c.instructions+=1;goto B433f33;
case 0x433f34:goto L433f34;
case 0x433f35:c.instructions+=1;goto B433f35;
case 0x433f36:goto L433f36;
case 0x433f37:c.instructions+=1;goto B433f37;
case 0x433f40:goto L433f40;
case 0x433f41:c.instructions+=3;goto B433f41;
case 0x433f47:c.instructions+=2;goto B433f47;
case 0x433f4c:c.instructions+=1;goto B433f4c;
case 0x433f51:goto L433f51;
case 0x433f53:c.instructions+=1;goto B433f53;
case 0x433f55:goto L433f55;
case 0x433f59:c.instructions+=1;goto B433f59;
case 0x433f60:goto L433f60;
case 0x433f63:c.instructions+=2;goto B433f63;
case 0x433f66:c.instructions+=1;goto B433f66;
case 0x433f68:goto L433f68;
case 0x433f6a:c.instructions+=2;goto B433f6a;
case 0x433f6c:c.instructions+=1;goto B433f6c;
case 0x433f6e:goto L433f6e;
case 0x433f70:goto L433f70;
case 0x433f74:c.instructions+=3;goto B433f74;
case 0x433f77:c.instructions+=2;goto B433f77;
case 0x433f78:c.instructions+=1;goto B433f78;
case 0x433f7e:goto L433f7e;
case 0x433f85:goto L433f85;
case 0x433f89:c.instructions+=2;goto B433f89;
case 0x433f8b:c.instructions+=1;goto B433f8b;
case 0x433f8d:goto L433f8d;
case 0x433f91:c.instructions+=4;goto B433f91;
case 0x433f94:c.instructions+=3;goto B433f94;
case 0x433f95:c.instructions+=2;goto B433f95;
case 0x433f96:c.instructions+=1;goto B433f96;
case 0x433f9b:goto L433f9b;
case 0x433f9e:c.instructions+=1;goto B433f9e;
case 0x433f9f:goto L433f9f;
case 0x433fa2:c.instructions+=1;goto B433fa2;
case 0x433fa4:goto L433fa4;
case 0x433fa7:c.instructions+=3;goto B433fa7;
case 0x433fa8:c.instructions+=2;goto B433fa8;
case 0x433fac:c.instructions+=1;goto B433fac;
case 0x433fb1:goto L433fb1;
case 0x433fb2:goto L433fb2;
case 0x433fb5:c.instructions+=1;goto B433fb5;
case 0x433fb7:goto L433fb7;
case 0x433fbd:c.instructions+=3;goto B433fbd;
case 0x433fbe:c.instructions+=2;goto B433fbe;
case 0x433fc2:c.instructions+=1;goto B433fc2;
case 0x433fc7:goto L433fc7;
case 0x433fc8:goto L433fc8;
case 0x433fcb:c.instructions+=1;goto B433fcb;
case 0x433fcd:goto L433fcd;
case 0x433fd3:c.instructions+=3;goto B433fd3;
case 0x433fd4:c.instructions+=2;goto B433fd4;
case 0x433fd8:c.instructions+=1;goto B433fd8;
case 0x433fdd:goto L433fdd;
case 0x433fde:goto L433fde;
case 0x433fe1:c.instructions+=1;goto B433fe1;
case 0x433fe3:goto L433fe3;
case 0x433fe9:c.instructions+=3;goto B433fe9;
case 0x433fea:c.instructions+=2;goto B433fea;
case 0x433fee:c.instructions+=1;goto B433fee;
case 0x433ff3:goto L433ff3;
case 0x433ff4:goto L433ff4;
case 0x433ff7:c.instructions+=1;goto B433ff7;
case 0x433ffd:goto L433ffd;
default:missing_instruction(c.pc);}
B433002:L433002:{c.instructions+=1;NFSU2_TR(0x433002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433007ull));
TAIL_STATIC(0x4306c0u,430);
}
B433007:L433007:{c.instructions+=3;NFSU2_TR(0x433007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B43300a:{NFSU2_TR(0x43300a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43300c:{NFSU2_TR(0x43300c);
if(r1(R+518)){{goto L433011;}}
}
B43300e:L43300e:{c.instructions+=1;NFSU2_TR(0x43300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B433011:L433011:{c.instructions+=6;NFSU2_TR(0x433011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433012:{NFSU2_TR(0x433012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433013:{NFSU2_TR(0x433013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433014:{NFSU2_TR(0x433014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B433015:{NFSU2_TR(0x433015);
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
B433018:{NFSU2_TR(0x433018);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433020:L433020:{c.instructions+=3;NFSU2_TR(0x433020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433024:{NFSU2_TR(0x433024);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B433025:{NFSU2_TR(0x433025);
if(r1(R+518)){{goto L433053;}}
}
B433027:L433027:{c.instructions+=2;NFSU2_TR(0x433027);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43302a:{NFSU2_TR(0x43302a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43306a;}}
}
B43302c:L43302c:{c.instructions+=2;NFSU2_TR(0x43302c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43302e:{NFSU2_TR(0x43302e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433033ull));
TAIL_STATIC(0x575620u,575);
}
B433033:L433033:{c.instructions+=4;NFSU2_TR(0x433033);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B433035:{NFSU2_TR(0x433035);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433038:{NFSU2_TR(0x433038);
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
B43303a:{NFSU2_TR(0x43303a);
if(r1(R+518)){{goto L43306a;}}
}
B43303c:L43303c:{c.instructions+=7;NFSU2_TR(0x43303c);
u8 U[4];
w4(U+0,u32(0x785fd8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B433042:{NFSU2_TR(0x433042);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433045:{NFSU2_TR(0x433045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433048:{NFSU2_TR(0x433048);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43304b:{NFSU2_TR(0x43304b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43304e:{NFSU2_TR(0x43304e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B433052:{NFSU2_TR(0x433052);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433053:L433053:{c.instructions+=2;NFSU2_TR(0x433053);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433055:{NFSU2_TR(0x433055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43305aull));
TAIL_STATIC(0x575620u,575);
}
B43305a:L43305a:{c.instructions+=4;NFSU2_TR(0x43305a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B43305c:{NFSU2_TR(0x43305c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43305f:{NFSU2_TR(0x43305f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433061:{NFSU2_TR(0x433061);
if(r1(R+518)){{goto L43306a;}}
}
B433063:L433063:{c.instructions+=2;NFSU2_TR(0x433063);
__builtin_memmove((R+4),(R+0),4);
}
B433065:{NFSU2_TR(0x433065);
TAIL_STATIC(0x431220u,431);
}
B43306a:L43306a:{c.instructions+=2;NFSU2_TR(0x43306a);
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
B43306c:{NFSU2_TR(0x43306c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433070:L433070:{c.instructions+=2;NFSU2_TR(0x433070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433071:{NFSU2_TR(0x433071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433076ull));
TAIL_STATIC(0x4903e0u,490);
}
B433076:L433076:{c.instructions+=5;NFSU2_TR(0x433076);
__builtin_memmove((R+0),gp(0x82da44),4);
}
B43307b:{NFSU2_TR(0x43307b);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43307e:{NFSU2_TR(0x43307e);
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
B43307f:{NFSU2_TR(0x43307f);
__builtin_memmove(gp(0x82da44),(R+0),4);
}
B433084:{NFSU2_TR(0x433084);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433090:L433090:{c.instructions+=11;NFSU2_TR(0x433090);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433091:{NFSU2_TR(0x433091);
__builtin_memmove((R+20),(R+16),4);
}
B433093:{NFSU2_TR(0x433093);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B433096:{NFSU2_TR(0x433096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B433099:{NFSU2_TR(0x433099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43309a:{NFSU2_TR(0x43309a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43309b:{NFSU2_TR(0x43309b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43309c:{NFSU2_TR(0x43309c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43309e:{NFSU2_TR(0x43309e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330a0:{NFSU2_TR(0x4330a0);
__builtin_memmove((R+12),(R+4),4);
}
B4330a2:{NFSU2_TR(0x4330a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4330a7ull));
TAIL_STATIC(0x48ab20u,48a);
}
B4330a7:L4330a7:{c.instructions+=5;NFSU2_TR(0x4330a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4330aa:{NFSU2_TR(0x4330aa);
__builtin_memmove((R+24),(R+0),4);
}
B4330ac:{NFSU2_TR(0x4330ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4330af:{NFSU2_TR(0x4330af);
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
B4330b1:{NFSU2_TR(0x4330b1);
if(r1(R+518)){{goto L4330e8;}}
}
B4330b3:L4330b3:{c.instructions+=8;NFSU2_TR(0x4330b3);
__builtin_memmove((R+0),gp(0x785bf4),4);
}
B4330b8:{NFSU2_TR(0x4330b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4330bb:{NFSU2_TR(0x4330bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330bc:{NFSU2_TR(0x4330bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330bd:{NFSU2_TR(0x4330bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4330c1:{NFSU2_TR(0x4330c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330c2:{NFSU2_TR(0x4330c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330c3:{NFSU2_TR(0x4330c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4330c8ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B4330c8:L4330c8:{c.instructions+=9;NFSU2_TR(0x4330c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4330cc:{NFSU2_TR(0x4330cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4330d0:{NFSU2_TR(0x4330d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4330d4:{NFSU2_TR(0x4330d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4330d7:{NFSU2_TR(0x4330d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4330db:{NFSU2_TR(0x4330db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4330de:{NFSU2_TR(0x4330de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4330e1:{NFSU2_TR(0x4330e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4330e4:{NFSU2_TR(0x4330e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0xeull));
s1(u32(r4(U+0)),r1(U+4));
}
B4330e8:L4330e8:{c.instructions+=2;NFSU2_TR(0x4330e8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4330ea:{NFSU2_TR(0x4330ea);
if(r1(R+518)){{goto L4331bc;}}
}
B4330f0:L4330f0:{c.instructions+=3;NFSU2_TR(0x4330f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4330f4:{NFSU2_TR(0x4330f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4330f5:{NFSU2_TR(0x4330f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4330faull));
TAIL_STATIC(0x43c780u,43c);
}
B4330fa:L4330fa:{c.instructions+=12;NFSU2_TR(0x4330fa);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4330fd:{NFSU2_TR(0x4330fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433100:{NFSU2_TR(0x433100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B433102:{NFSU2_TR(0x433102);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433106:{NFSU2_TR(0x433106);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433109:{NFSU2_TR(0x433109);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43310a:{NFSU2_TR(0x43310a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43310e:{NFSU2_TR(0x43310e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433112:{NFSU2_TR(0x433112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433113:{NFSU2_TR(0x433113);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433117:{NFSU2_TR(0x433117);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43311f:{NFSU2_TR(0x43311f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433124ull));
TAIL_STATIC(0x43cf10u,43c);
}
B433124:L433124:{c.instructions+=13;NFSU2_TR(0x433124);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433128:{NFSU2_TR(0x433128);
{u32 ea_=u32(u32(7887868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43312e:{NFSU2_TR(0x43312e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B433130:{NFSU2_TR(0x433130);
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
B433133:{NFSU2_TR(0x433133);
__builtin_memmove((R+4),(R+12),4);
}
B433135:{NFSU2_TR(0x433135);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433139:{NFSU2_TR(0x433139);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43313d:{NFSU2_TR(0x43313d);
{u32 ea_=u32(u32(7887868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433143:{NFSU2_TR(0x433143);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433147:{NFSU2_TR(0x433147);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43314b:{NFSU2_TR(0x43314b);
{u32 ea_=u32(u32(7887868u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433151:{NFSU2_TR(0x433151);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433155:{NFSU2_TR(0x433155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43315aull));
TAIL_STATIC(0x502fd0u,502);
}
B43315a:L43315a:{c.instructions+=3;NFSU2_TR(0x43315a);
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
B43315c:{NFSU2_TR(0x43315c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433160:{NFSU2_TR(0x433160);
if(r1(R+518)){{goto L4331bc;}}
}
B433162:L433162:{c.instructions+=5;NFSU2_TR(0x433162);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433166:{NFSU2_TR(0x433166);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433167:{NFSU2_TR(0x433167);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B43316a:{NFSU2_TR(0x43316a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43316b:{NFSU2_TR(0x43316b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433170ull));
TAIL_STATIC(0x4012b0u,401);
}
B433170:L433170:{c.instructions+=16;NFSU2_TR(0x433170);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433174:{NFSU2_TR(0x433174);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433178:{NFSU2_TR(0x433178);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43317c:{NFSU2_TR(0x43317c);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433182:{NFSU2_TR(0x433182);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B433185:{NFSU2_TR(0x433185);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433187:{NFSU2_TR(0x433187);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43318d:{NFSU2_TR(0x43318d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43318e:{NFSU2_TR(0x43318e);
{u32 ea_=u32(u32(7887864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433194:{NFSU2_TR(0x433194);
w4(R+4,u32(0x8357e0ull));
}
B433199:{NFSU2_TR(0x433199);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43319b:{NFSU2_TR(0x43319b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331a1:{NFSU2_TR(0x4331a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4331a4:{NFSU2_TR(0x4331a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4331a5:{NFSU2_TR(0x4331a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4331af:{NFSU2_TR(0x4331af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4331b4ull));
TAIL_STATIC(0x491e50u,491);
}
B4331b4:L4331b4:{c.instructions+=3;NFSU2_TR(0x4331b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4331b6:{NFSU2_TR(0x4331b6);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4331ba:{NFSU2_TR(0x4331ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433162u);}goto L433162;}}
}
B4331bc:L4331bc:{c.instructions+=25;NFSU2_TR(0x4331bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4331bf:{NFSU2_TR(0x4331bf);
__builtin_memmove((R+8),gp(0x785c00),4);
}
B4331c5:{NFSU2_TR(0x4331c5);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x68ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4331c8:{NFSU2_TR(0x4331c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4331cb:{NFSU2_TR(0x4331cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4331d2:{NFSU2_TR(0x4331d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331d5:{NFSU2_TR(0x4331d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x80a991dfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4331dc:{NFSU2_TR(0x4331dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4331de:{NFSU2_TR(0x4331de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331e1:{NFSU2_TR(0x4331e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4331e4:{NFSU2_TR(0x4331e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331e7:{NFSU2_TR(0x4331e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4331ea:{NFSU2_TR(0x4331ea);
__builtin_memmove((R+8),gp(0x785c04),4);
}
B4331f0:{NFSU2_TR(0x4331f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4331f1:{NFSU2_TR(0x4331f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331f4:{NFSU2_TR(0x4331f4);
__builtin_memmove((R+4),gp(0x785c08),4);
}
B4331fa:{NFSU2_TR(0x4331fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4331fd:{NFSU2_TR(0x4331fd);
__builtin_memmove((R+8),gp(0x785c0c),4);
}
B433203:{NFSU2_TR(0x433203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433204:{NFSU2_TR(0x433204);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433207:{NFSU2_TR(0x433207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43320a:{NFSU2_TR(0x43320a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43320b:{NFSU2_TR(0x43320b);
__builtin_memmove((R+16),(R+20),4);
}
B43320d:{NFSU2_TR(0x43320d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43320e:{NFSU2_TR(0x43320e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433220:L433220:{c.instructions+=14;NFSU2_TR(0x433220);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433221:{NFSU2_TR(0x433221);
__builtin_memmove((R+20),(R+16),4);
}
B433223:{NFSU2_TR(0x433223);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B433226:{NFSU2_TR(0x433226);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433228:{NFSU2_TR(0x433228);
u8 U[4];
w4(U+0,u32(0x771cebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43322d:{NFSU2_TR(0x43322d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433233:{NFSU2_TR(0x433233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433234:{NFSU2_TR(0x433234);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43323b:{NFSU2_TR(0x43323b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x400ull))));
}
B433241:{NFSU2_TR(0x433241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433242:{NFSU2_TR(0x433242);
__builtin_memmove((R+24),(R+4),4);
}
B433244:{NFSU2_TR(0x433244);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B433247:{NFSU2_TR(0x433247);
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
B433249:{NFSU2_TR(0x433249);
if(r1(R+518)){{goto L43359f;}}
}
B43324f:L43324f:{c.instructions+=3;NFSU2_TR(0x43324f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433252:{NFSU2_TR(0x433252);
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
B433254:{NFSU2_TR(0x433254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43359f;}}
}
B43325a:L43325a:{c.instructions+=3;NFSU2_TR(0x43325a);
__builtin_memmove((R+0),gp(0x827b24),4);
}
B43325f:{NFSU2_TR(0x43325f);
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
B433261:{NFSU2_TR(0x433261);
if(r1(R+518)){{goto L43359f;}}
}
B433267:L433267:{c.instructions+=3;NFSU2_TR(0x433267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43326a:{NFSU2_TR(0x43326a);
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
B43326d:{NFSU2_TR(0x43326d);
if(r1(R+518)){{goto L43359f;}}
}
B433273:L433273:{c.instructions+=7;NFSU2_TR(0x433273);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433277:{NFSU2_TR(0x433277);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43327a:{NFSU2_TR(0x43327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433280:{NFSU2_TR(0x433280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433281:{NFSU2_TR(0x433281);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433282:{NFSU2_TR(0x433282);
__builtin_memmove((R+4),(R+24),4);
}
B433284:{NFSU2_TR(0x433284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433289ull));
TAIL_STATIC(0x431280u,431);
}
B433289:L433289:{c.instructions+=8;NFSU2_TR(0x433289);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43328c:{NFSU2_TR(0x43328c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B43328f:{NFSU2_TR(0x43328f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ea1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433295:{NFSU2_TR(0x433295);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433299:{NFSU2_TR(0x433299);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43329a:{NFSU2_TR(0x43329a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43329b:{NFSU2_TR(0x43329b);
__builtin_memmove((R+4),(R+24),4);
}
B43329d:{NFSU2_TR(0x43329d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4332a2ull));
TAIL_STATIC(0x431280u,431);
}
B4332a2:L4332a2:{c.instructions+=7;NFSU2_TR(0x4332a2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4332a6:{NFSU2_TR(0x4332a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4332aa:{NFSU2_TR(0x4332aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4332b2:{NFSU2_TR(0x4332b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4332ba:{NFSU2_TR(0x4332ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4332bc:{NFSU2_TR(0x4332bc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4332bf:{NFSU2_TR(0x4332bf);
if(r1(R+514)){{goto L4332d0;}}
}
B4332c1:L4332c1:{c.instructions+=5;NFSU2_TR(0x4332c1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4332c5:{NFSU2_TR(0x4332c5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4332c9:{NFSU2_TR(0x4332c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4332cb:{NFSU2_TR(0x4332cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4332ce:{NFSU2_TR(0x4332ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4332fa;}}
}
B4332d0:L4332d0:{c.instructions+=11;NFSU2_TR(0x4332d0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4332d4:{NFSU2_TR(0x4332d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4332d8:{NFSU2_TR(0x4332d8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4332dc:{NFSU2_TR(0x4332dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4332dd:{NFSU2_TR(0x4332dd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4332e1:{NFSU2_TR(0x4332e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4332e2:{NFSU2_TR(0x4332e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4332e6:{NFSU2_TR(0x4332e6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4332ea:{NFSU2_TR(0x4332ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4332ee:{NFSU2_TR(0x4332ee);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4332f2:{NFSU2_TR(0x4332f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4332f7ull));
TAIL_STATIC(0x43ce50u,43c);
}
B4332f7:L4332f7:{c.instructions+=1;NFSU2_TR(0x4332f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4332fa:L4332fa:{c.instructions+=58;NFSU2_TR(0x4332fa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4332fe:{NFSU2_TR(0x4332fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433302:{NFSU2_TR(0x433302);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B433304:{NFSU2_TR(0x433304);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433308:{NFSU2_TR(0x433308);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43330c:{NFSU2_TR(0x43330c);
__builtin_memmove((R+0),(R+8),4);
}
B43330e:{NFSU2_TR(0x43330e);
{u32 ea_=u32(u32(7887916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433314:{NFSU2_TR(0x433314);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433318:{NFSU2_TR(0x433318);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43331e:{NFSU2_TR(0x43331e);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433322:{NFSU2_TR(0x433322);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433326:{NFSU2_TR(0x433326);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B433328:{NFSU2_TR(0x433328);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43332c:{NFSU2_TR(0x43332c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433330:{NFSU2_TR(0x433330);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433334:{NFSU2_TR(0x433334);
{u32 ea_=u32(u32(7887912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43333a:{NFSU2_TR(0x43333a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433340:{NFSU2_TR(0x433340);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B433342:{NFSU2_TR(0x433342);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B433344:{NFSU2_TR(0x433344);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433348:{NFSU2_TR(0x433348);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43334a:{NFSU2_TR(0x43334a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B43334c:{NFSU2_TR(0x43334c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43334e:{NFSU2_TR(0x43334e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433352:{NFSU2_TR(0x433352);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433356:{NFSU2_TR(0x433356);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43335a:{NFSU2_TR(0x43335a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43335e:{NFSU2_TR(0x43335e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B433362:{NFSU2_TR(0x433362);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433366:{NFSU2_TR(0x433366);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B433368:{NFSU2_TR(0x433368);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B43336a:{NFSU2_TR(0x43336a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43336e:{NFSU2_TR(0x43336e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433372:{NFSU2_TR(0x433372);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433376:{NFSU2_TR(0x433376);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43337a:{NFSU2_TR(0x43337a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43337e:{NFSU2_TR(0x43337e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433382:{NFSU2_TR(0x433382);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433386:{NFSU2_TR(0x433386);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B433388:{NFSU2_TR(0x433388);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B43338a:{NFSU2_TR(0x43338a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43338e:{NFSU2_TR(0x43338e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B433390:{NFSU2_TR(0x433390);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433394:{NFSU2_TR(0x433394);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B433398:{NFSU2_TR(0x433398);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43339c:{NFSU2_TR(0x43339c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333a0:{NFSU2_TR(0x4333a0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4333a4:{NFSU2_TR(0x4333a4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4333a8:{NFSU2_TR(0x4333a8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4333aa:{NFSU2_TR(0x4333aa);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333ae:{NFSU2_TR(0x4333ae);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4333b2:{NFSU2_TR(0x4333b2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4333b6:{NFSU2_TR(0x4333b6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4333ba:{NFSU2_TR(0x4333ba);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333be:{NFSU2_TR(0x4333be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4333c2:{NFSU2_TR(0x4333c2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4333c6:{NFSU2_TR(0x4333c6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333ca:{NFSU2_TR(0x4333ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4333cfull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B4333cf:L4333cf:{c.instructions+=30;NFSU2_TR(0x4333cf);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4333d3:{NFSU2_TR(0x4333d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4333d7:{NFSU2_TR(0x4333d7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4333db:{NFSU2_TR(0x4333db);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4333df:{NFSU2_TR(0x4333df);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4333e3:{NFSU2_TR(0x4333e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4333e5:{NFSU2_TR(0x4333e5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333e9:{NFSU2_TR(0x4333e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4333ed:{NFSU2_TR(0x4333ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4333f1:{NFSU2_TR(0x4333f1);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4333f5:{NFSU2_TR(0x4333f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4333fc:{NFSU2_TR(0x4333fc);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433400:{NFSU2_TR(0x433400);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433404:{NFSU2_TR(0x433404);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B433406:{NFSU2_TR(0x433406);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43340a:{NFSU2_TR(0x43340a);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43340e:{NFSU2_TR(0x43340e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433412:{NFSU2_TR(0x433412);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433416:{NFSU2_TR(0x433416);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B433418:{NFSU2_TR(0x433418);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43341f:{NFSU2_TR(0x43341f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433426:{NFSU2_TR(0x433426);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43342a:{NFSU2_TR(0x43342a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43342e:{NFSU2_TR(0x43342e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433432:{NFSU2_TR(0x433432);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B433434:{NFSU2_TR(0x433434);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43343b:{NFSU2_TR(0x43343b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433442:{NFSU2_TR(0x433442);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433449:{NFSU2_TR(0x433449);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433450:{NFSU2_TR(0x433450);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433455ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B433455:L433455:{c.instructions+=8;NFSU2_TR(0x433455);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433457:{NFSU2_TR(0x433457);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433459:{NFSU2_TR(0x433459);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43345b:{NFSU2_TR(0x43345b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43345f:{NFSU2_TR(0x43345f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433460:{NFSU2_TR(0x433460);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433467:{NFSU2_TR(0x433467);
u8 U[8];
w4(U+0,u32(u32(u32(0x41cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433472:{NFSU2_TR(0x433472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433477ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B433477:L433477:{c.instructions+=9;NFSU2_TR(0x433477);
{u32 ea_=u32(u32(7887908u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43347d:{NFSU2_TR(0x43347d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43347f:{NFSU2_TR(0x43347f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433481:{NFSU2_TR(0x433481);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433483:{NFSU2_TR(0x433483);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433487:{NFSU2_TR(0x433487);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43348b:{NFSU2_TR(0x43348b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43348c:{NFSU2_TR(0x43348c);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433493:{NFSU2_TR(0x433493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433498ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B433498:L433498:{c.instructions+=9;NFSU2_TR(0x433498);
{u32 ea_=u32(u32(7887908u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43349e:{NFSU2_TR(0x43349e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334a0:{NFSU2_TR(0x4334a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334a2:{NFSU2_TR(0x4334a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334a4:{NFSU2_TR(0x4334a4);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4334ab:{NFSU2_TR(0x4334ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4334b2:{NFSU2_TR(0x4334b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334b3:{NFSU2_TR(0x4334b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4334ba:{NFSU2_TR(0x4334ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4334bfull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B4334bf:L4334bf:{c.instructions+=9;NFSU2_TR(0x4334bf);
{u32 ea_=u32(u32(7887908u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4334c5:{NFSU2_TR(0x4334c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334c7:{NFSU2_TR(0x4334c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334c9:{NFSU2_TR(0x4334c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334cb:{NFSU2_TR(0x4334cb);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4334d2:{NFSU2_TR(0x4334d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4334d9:{NFSU2_TR(0x4334d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334da:{NFSU2_TR(0x4334da);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4334e1:{NFSU2_TR(0x4334e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4334e6ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B4334e6:L4334e6:{c.instructions+=24;NFSU2_TR(0x4334e6);
{u32 ea_=u32(u32(7887908u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4334ec:{NFSU2_TR(0x4334ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334ee:{NFSU2_TR(0x4334ee);
w4(R+0,u32(0xff808080ull));
}
B4334f3:{NFSU2_TR(0x4334f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4334f5:{NFSU2_TR(0x4334f5);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4334fc:{NFSU2_TR(0x4334fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433503:{NFSU2_TR(0x433503);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43350a:{NFSU2_TR(0x43350a);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433511:{NFSU2_TR(0x433511);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433518:{NFSU2_TR(0x433518);
__builtin_memmove((R+0),gp(0x827b24),4);
}
B43351d:{NFSU2_TR(0x43351d);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433522:{NFSU2_TR(0x433522);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433523:{NFSU2_TR(0x433523);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433527:{NFSU2_TR(0x433527);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433528:{NFSU2_TR(0x433528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43352b:{NFSU2_TR(0x43352b);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433536:{NFSU2_TR(0x433536);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433541:{NFSU2_TR(0x433541);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43354c:{NFSU2_TR(0x43354c);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433557:{NFSU2_TR(0x433557);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433562:{NFSU2_TR(0x433562);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43356d:{NFSU2_TR(0x43356d);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433578:{NFSU2_TR(0x433578);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433583:{NFSU2_TR(0x433583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433588ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B433588:L433588:{c.instructions+=3;NFSU2_TR(0x433588);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43358f:{NFSU2_TR(0x43358f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43359a:{NFSU2_TR(0x43359a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43359full));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B43359f:L43359f:{c.instructions+=6;NFSU2_TR(0x43359f);
u8 U[8];
w4(U+0,u32(u32(u32(0x404ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4335a6:{NFSU2_TR(0x4335a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4335ad:{NFSU2_TR(0x4335ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4335ae:{NFSU2_TR(0x4335ae);
__builtin_memmove((R+16),(R+20),4);
}
B4335b0:{NFSU2_TR(0x4335b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4335b1:{NFSU2_TR(0x4335b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4335c0:L4335c0:{c.instructions+=11;NFSU2_TR(0x4335c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4335c1:{NFSU2_TR(0x4335c1);
__builtin_memmove((R+20),(R+16),4);
}
B4335c3:{NFSU2_TR(0x4335c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4335c6:{NFSU2_TR(0x4335c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B4335cc:{NFSU2_TR(0x4335cc);
__builtin_memmove((R+0),gp(0x827b28),4);
}
B4335d1:{NFSU2_TR(0x4335d1);
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
B4335d3:{NFSU2_TR(0x4335d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4335d4:{NFSU2_TR(0x4335d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4335d5:{NFSU2_TR(0x4335d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4335d6:{NFSU2_TR(0x4335d6);
__builtin_memmove((R+24),(R+4),4);
}
B4335d8:{NFSU2_TR(0x4335d8);
if(r1(R+518)){{goto L4337ee;}}
}
B4335de:L4335de:{c.instructions+=2;NFSU2_TR(0x4335de);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B4335e2:{NFSU2_TR(0x4335e2);
if(r1(R+518)){{goto L4337ee;}}
}
B4335e8:L4335e8:{c.instructions+=5;NFSU2_TR(0x4335e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4335eb:{NFSU2_TR(0x4335eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4335f1:{NFSU2_TR(0x4335f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4335f3:{NFSU2_TR(0x4335f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4335f6:{NFSU2_TR(0x4335f6);
if(r1(R+518)){{goto L4335ff;}}
}
B4335f8:L4335f8:{c.instructions+=2;NFSU2_TR(0x4335f8);
__builtin_memmove((R+4),(R+28),4);
}
B4335fa:{NFSU2_TR(0x4335fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4335ffull));
TAIL_STATIC(0x60bb10u,60b);
}
B4335ff:L4335ff:{c.instructions+=5;NFSU2_TR(0x4335ff);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433602:{NFSU2_TR(0x433602);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433606:{NFSU2_TR(0x433606);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433607:{NFSU2_TR(0x433607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433608:{NFSU2_TR(0x433608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43360dull));
TAIL_STATIC(0x4012b0u,401);
}
B43360d:L43360d:{c.instructions+=39;NFSU2_TR(0x43360d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433610:{NFSU2_TR(0x433610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B433613:{NFSU2_TR(0x433613);
__builtin_memmove((R+0),(R+12),4);
}
B433615:{NFSU2_TR(0x433615);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B433618:{NFSU2_TR(0x433618);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43361e:{NFSU2_TR(0x43361e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433624:{NFSU2_TR(0x433624);
{u32 ea_=u32(r4(R+0)+u32(8298776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43362a:{NFSU2_TR(0x43362a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43362e:{NFSU2_TR(0x43362e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433632:{NFSU2_TR(0x433632);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433638:{NFSU2_TR(0x433638);
{u32 ea_=u32(r4(R+0)+u32(8298780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43363e:{NFSU2_TR(0x43363e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433642:{NFSU2_TR(0x433642);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433646:{NFSU2_TR(0x433646);
{u32 ea_=u32(r4(R+0)+u32(8298788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43364c:{NFSU2_TR(0x43364c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433652:{NFSU2_TR(0x433652);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433656:{NFSU2_TR(0x433656);
{u32 ea_=u32(r4(R+0)+u32(8298792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43365c:{NFSU2_TR(0x43365c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433660:{NFSU2_TR(0x433660);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433664:{NFSU2_TR(0x433664);
{u32 ea_=u32(r4(R+0)+u32(8298800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43366a:{NFSU2_TR(0x43366a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43366e:{NFSU2_TR(0x43366e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433672:{NFSU2_TR(0x433672);
{u32 ea_=u32(r4(R+0)+u32(8298804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433678:{NFSU2_TR(0x433678);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43367c:{NFSU2_TR(0x43367c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433680:{NFSU2_TR(0x433680);
{u32 ea_=u32(r4(R+0)+u32(8298812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433686:{NFSU2_TR(0x433686);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433687:{NFSU2_TR(0x433687);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43368b:{NFSU2_TR(0x43368b);
{u32 ea_=u32(r4(R+0)+u32(8298816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433691:{NFSU2_TR(0x433691);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433694:{NFSU2_TR(0x433694);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B433697:{NFSU2_TR(0x433697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43369d:{NFSU2_TR(0x43369d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4336a0:{NFSU2_TR(0x4336a0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B4336a2:{NFSU2_TR(0x4336a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336a3:{NFSU2_TR(0x4336a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4336a7:{NFSU2_TR(0x4336a7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4336ab:{NFSU2_TR(0x4336ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336ac:{NFSU2_TR(0x4336ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4336b1ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4336b1:L4336b1:{c.instructions+=11;NFSU2_TR(0x4336b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4336b4:{NFSU2_TR(0x4336b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4336b7:{NFSU2_TR(0x4336b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ea1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4336bd:{NFSU2_TR(0x4336bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4336c1:{NFSU2_TR(0x4336c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336c2:{NFSU2_TR(0x4336c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4336c5:{NFSU2_TR(0x4336c5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B4336c7:{NFSU2_TR(0x4336c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336c8:{NFSU2_TR(0x4336c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4336cc:{NFSU2_TR(0x4336cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336cd:{NFSU2_TR(0x4336cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4336d2ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4336d2:L4336d2:{c.instructions+=11;NFSU2_TR(0x4336d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4336d5:{NFSU2_TR(0x4336d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4336d8:{NFSU2_TR(0x4336d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7ea1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4336de:{NFSU2_TR(0x4336de);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4336e2:{NFSU2_TR(0x4336e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336e3:{NFSU2_TR(0x4336e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4336e6:{NFSU2_TR(0x4336e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4336e8:{NFSU2_TR(0x4336e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336e9:{NFSU2_TR(0x4336e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4336ed:{NFSU2_TR(0x4336ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4336ee:{NFSU2_TR(0x4336ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4336f3ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4336f3:L4336f3:{c.instructions+=11;NFSU2_TR(0x4336f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4336f6:{NFSU2_TR(0x4336f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4336f9:{NFSU2_TR(0x4336f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ea1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4336ff:{NFSU2_TR(0x4336ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B433703:{NFSU2_TR(0x433703);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B433706:{NFSU2_TR(0x433706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433707:{NFSU2_TR(0x433707);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B433709:{NFSU2_TR(0x433709);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43370a:{NFSU2_TR(0x43370a);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43370e:{NFSU2_TR(0x43370e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43370f:{NFSU2_TR(0x43370f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433714ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B433714:L433714:{c.instructions+=7;NFSU2_TR(0x433714);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433718:{NFSU2_TR(0x433718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433719:{NFSU2_TR(0x433719);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433720:{NFSU2_TR(0x433720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433721:{NFSU2_TR(0x433721);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B433725:{NFSU2_TR(0x433725);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433726:{NFSU2_TR(0x433726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43372bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B43372b:L43372b:{c.instructions+=8;NFSU2_TR(0x43372b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B43372e:{NFSU2_TR(0x43372e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433732:{NFSU2_TR(0x433732);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433733:{NFSU2_TR(0x433733);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433737:{NFSU2_TR(0x433737);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433738:{NFSU2_TR(0x433738);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43373c:{NFSU2_TR(0x43373c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43373d:{NFSU2_TR(0x43373d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433742ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B433742:L433742:{c.instructions+=7;NFSU2_TR(0x433742);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433746:{NFSU2_TR(0x433746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433747:{NFSU2_TR(0x433747);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43374e:{NFSU2_TR(0x43374e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43374f:{NFSU2_TR(0x43374f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B433753:{NFSU2_TR(0x433753);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433754:{NFSU2_TR(0x433754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433759ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B433759:L433759:{c.instructions+=7;NFSU2_TR(0x433759);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43375d:{NFSU2_TR(0x43375d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43375e:{NFSU2_TR(0x43375e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433765:{NFSU2_TR(0x433765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433766:{NFSU2_TR(0x433766);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43376a:{NFSU2_TR(0x43376a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43376b:{NFSU2_TR(0x43376b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433770ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B433770:L433770:{c.instructions+=28;NFSU2_TR(0x433770);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433774:{NFSU2_TR(0x433774);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B433778:{NFSU2_TR(0x433778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43377b:{NFSU2_TR(0x43377b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B43377e:{NFSU2_TR(0x43377e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43377f:{NFSU2_TR(0x43377f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433783:{NFSU2_TR(0x433783);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433787:{NFSU2_TR(0x433787);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43378b:{NFSU2_TR(0x43378b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43378f:{NFSU2_TR(0x43378f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433790:{NFSU2_TR(0x433790);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433794:{NFSU2_TR(0x433794);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433795:{NFSU2_TR(0x433795);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433799:{NFSU2_TR(0x433799);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43379d:{NFSU2_TR(0x43379d);
__builtin_memmove((R+4),gp(0x827b28),4);
}
B4337a3:{NFSU2_TR(0x4337a3);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4337a7:{NFSU2_TR(0x4337a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4337a9:{NFSU2_TR(0x4337a9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4337ad:{NFSU2_TR(0x4337ad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4337b1:{NFSU2_TR(0x4337b1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4337b5:{NFSU2_TR(0x4337b5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4337b9:{NFSU2_TR(0x4337b9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4337bd:{NFSU2_TR(0x4337bd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4337c1:{NFSU2_TR(0x4337c1);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4337c5:{NFSU2_TR(0x4337c5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4337c9:{NFSU2_TR(0x4337c9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4337cd:{NFSU2_TR(0x4337cd);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4337d1:{NFSU2_TR(0x4337d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4337d6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433090u);}goto L433090;}
}
B4337d6:L4337d6:{c.instructions+=8;NFSU2_TR(0x4337d6);
__builtin_memmove((R+4),gp(0x827b28),4);
}
B4337dc:{NFSU2_TR(0x4337dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4337dd:{NFSU2_TR(0x4337dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4337e1:{NFSU2_TR(0x4337e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4337e2:{NFSU2_TR(0x4337e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4337e6:{NFSU2_TR(0x4337e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4337e7:{NFSU2_TR(0x4337e7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4337e9:{NFSU2_TR(0x4337e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4337eeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433090u);}goto L433090;}
}
B4337ee:L4337ee:{c.instructions+=6;NFSU2_TR(0x4337ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4337ef:{NFSU2_TR(0x4337ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4337f0:{NFSU2_TR(0x4337f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4337f1:{NFSU2_TR(0x4337f1);
__builtin_memmove((R+16),(R+20),4);
}
B4337f3:{NFSU2_TR(0x4337f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4337f4:{NFSU2_TR(0x4337f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433800:L433800:{c.instructions+=15;NFSU2_TR(0x433800);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433802:{NFSU2_TR(0x433802);
u8 U[4];
w4(U+0,u32(0x771c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433807:{NFSU2_TR(0x433807);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43380d:{NFSU2_TR(0x43380d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43380e:{NFSU2_TR(0x43380e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433815:{NFSU2_TR(0x433815);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433816:{NFSU2_TR(0x433816);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433817:{NFSU2_TR(0x433817);
__builtin_memmove((R+24),(R+4),4);
}
B433819:{NFSU2_TR(0x433819);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43381a:{NFSU2_TR(0x43381a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43381e:{NFSU2_TR(0x43381e);
u8 U[4];
w4(U+0,u32(0x785fd8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B433824:{NFSU2_TR(0x433824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B433827:{NFSU2_TR(0x433827);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433829:{NFSU2_TR(0x433829);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433831:{NFSU2_TR(0x433831);
if(r1(R+518)){{goto L433850;}}
}
B433833:L433833:{c.instructions+=2;NFSU2_TR(0x433833);
__builtin_memmove((R+4),(R+28),4);
}
B433835:{NFSU2_TR(0x433835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43383aull));
TAIL_STATIC(0x633fd0u,633);
}
B43383a:L43383a:{c.instructions+=4;NFSU2_TR(0x43383a);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B43383f:{NFSU2_TR(0x43383f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433840:{NFSU2_TR(0x433840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433841:{NFSU2_TR(0x433841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433846ull));
TAIL_STATIC(0x43f920u,43f);
}
B433846:L433846:{c.instructions+=2;NFSU2_TR(0x433846);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B433849:{NFSU2_TR(0x433849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433850:L433850:{c.instructions+=3;NFSU2_TR(0x433850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433853:{NFSU2_TR(0x433853);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433855:{NFSU2_TR(0x433855);
if(r1(R+518)){{goto L433860;}}
}
B433857:L433857:{c.instructions+=2;NFSU2_TR(0x433857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433858:{NFSU2_TR(0x433858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43385dull));
TAIL_STATIC(0x61f5a0u,61f);
}
B43385d:L43385d:{c.instructions+=1;NFSU2_TR(0x43385d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433860:L433860:{c.instructions+=7;NFSU2_TR(0x433860);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433864:{NFSU2_TR(0x433864);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43386a:{NFSU2_TR(0x43386a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43386b:{NFSU2_TR(0x43386b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43386c:{NFSU2_TR(0x43386c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433873:{NFSU2_TR(0x433873);
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
B433876:{NFSU2_TR(0x433876);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433880:L433880:{c.instructions+=15;NFSU2_TR(0x433880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433881:{NFSU2_TR(0x433881);
__builtin_memmove((R+20),(R+16),4);
}
B433883:{NFSU2_TR(0x433883);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B433886:{NFSU2_TR(0x433886);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433888:{NFSU2_TR(0x433888);
u8 U[4];
w4(U+0,u32(0x771c89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43388d:{NFSU2_TR(0x43388d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433893:{NFSU2_TR(0x433893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433894:{NFSU2_TR(0x433894);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43389b:{NFSU2_TR(0x43389b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x368ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x368ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x368ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4338a1:{NFSU2_TR(0x4338a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338a2:{NFSU2_TR(0x4338a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338a3:{NFSU2_TR(0x4338a3);
__builtin_memmove((R+24),(R+4),4);
}
B4338a5:{NFSU2_TR(0x4338a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4338a7:{NFSU2_TR(0x4338a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338a8:{NFSU2_TR(0x4338a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4338abull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4338ab:L4338ab:{c.instructions+=8;NFSU2_TR(0x4338ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4338ae:{NFSU2_TR(0x4338ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4338b0:{NFSU2_TR(0x4338b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4338b3:{NFSU2_TR(0x4338b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4338b6:{NFSU2_TR(0x4338b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4338b9:{NFSU2_TR(0x4338b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4338bc:{NFSU2_TR(0x4338bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338be:{NFSU2_TR(0x4338be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4338c3ull));
TAIL_STATIC(0x638010u,638);
}
B4338c3:L4338c3:{c.instructions+=6;NFSU2_TR(0x4338c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4338c6:{NFSU2_TR(0x4338c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4338c9:{NFSU2_TR(0x4338c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338ca:{NFSU2_TR(0x4338ca);
__builtin_memmove((R+4),(R+0),4);
}
B4338cc:{NFSU2_TR(0x4338cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4338cf:{NFSU2_TR(0x4338cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4338d4ull));
TAIL_STATIC(0x6345b0u,634);
}
B4338d4:L4338d4:{c.instructions+=9;NFSU2_TR(0x4338d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4338d7:{NFSU2_TR(0x4338d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4338da:{NFSU2_TR(0x4338da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4338e0:{NFSU2_TR(0x4338e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4338e3:{NFSU2_TR(0x4338e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4338e6:{NFSU2_TR(0x4338e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4338e9:{NFSU2_TR(0x4338e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338ea:{NFSU2_TR(0x4338ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4338eb:{NFSU2_TR(0x4338eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4338f0ull));
TAIL_STATIC(0x4012b0u,401);
}
B4338f0:L4338f0:{c.instructions+=4;NFSU2_TR(0x4338f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4338f6:{NFSU2_TR(0x4338f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4338f9:{NFSU2_TR(0x4338f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4338fb:{NFSU2_TR(0x4338fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433904;}}
}
B4338fd:L4338fd:{c.instructions+=2;NFSU2_TR(0x4338fd);
__builtin_memmove((R+4),(R+28),4);
}
B4338ff:{NFSU2_TR(0x4338ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433904ull));
TAIL_STATIC(0x6147e0u,614);
}
B433904:L433904:{c.instructions+=3;NFSU2_TR(0x433904);
__builtin_memmove((R+8),gp(0x8a1d08),4);
}
B43390a:{NFSU2_TR(0x43390a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43390b:{NFSU2_TR(0x43390b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433910ull));
TAIL_STATIC(0x440e50u,440);
}
B433910:L433910:{c.instructions+=5;NFSU2_TR(0x433910);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433913:{NFSU2_TR(0x433913);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433917:{NFSU2_TR(0x433917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433919:{NFSU2_TR(0x433919);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433924:{NFSU2_TR(0x433924);
if(r1(R+518)){{goto L433939;}}
}
B433926:L433926:{c.instructions+=7;NFSU2_TR(0x433926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433929:{NFSU2_TR(0x433929);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43392b:{NFSU2_TR(0x43392b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x50ull))));
}
B43392e:{NFSU2_TR(0x43392e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43392f:{NFSU2_TR(0x43392f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433930:{NFSU2_TR(0x433930);
__builtin_memmove((R+4),(R+0),4);
}
B433932:{NFSU2_TR(0x433932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433937ull));
TAIL_STATIC(0x61d050u,61d);
}
B433937:L433937:{c.instructions+=1;NFSU2_TR(0x433937);
{goto L43393b;}
}
B433939:L433939:{c.instructions+=1;NFSU2_TR(0x433939);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43393b:L43393b:{c.instructions+=6;NFSU2_TR(0x43393b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43393e:{NFSU2_TR(0x43393e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B433941:{NFSU2_TR(0x433941);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B433944:{NFSU2_TR(0x433944);
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
B433946:{NFSU2_TR(0x433946);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43394d:{NFSU2_TR(0x43394d);
if(r1(R+518)){{goto L4339bd;}}
}
B43394f:L43394f:{c.instructions+=4;NFSU2_TR(0x43394f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B433952:{NFSU2_TR(0x433952);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433958:{NFSU2_TR(0x433958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43395a:{NFSU2_TR(0x43395a);
if(r1(R+518)){{goto L433963;}}
}
B43395c:L43395c:{c.instructions+=2;NFSU2_TR(0x43395c);
__builtin_memmove((R+4),(R+28),4);
}
B43395e:{NFSU2_TR(0x43395e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433963ull));
TAIL_STATIC(0x60bb10u,60b);
}
B433963:L433963:{c.instructions+=5;NFSU2_TR(0x433963);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433966:{NFSU2_TR(0x433966);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43396a:{NFSU2_TR(0x43396a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43396b:{NFSU2_TR(0x43396b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43396c:{NFSU2_TR(0x43396c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433971ull));
TAIL_STATIC(0x4012b0u,401);
}
B433971:L433971:{c.instructions+=3;NFSU2_TR(0x433971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B433974:{NFSU2_TR(0x433974);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433978:{NFSU2_TR(0x433978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43397dull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B43397d:L43397d:{c.instructions+=8;NFSU2_TR(0x43397d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43397f:{NFSU2_TR(0x43397f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433981:{NFSU2_TR(0x433981);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433983:{NFSU2_TR(0x433983);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B433987:{NFSU2_TR(0x433987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433988:{NFSU2_TR(0x433988);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43398c:{NFSU2_TR(0x43398c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433997:{NFSU2_TR(0x433997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43399cull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B43399c:L43399c:{c.instructions+=5;NFSU2_TR(0x43399c);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4339a0:{NFSU2_TR(0x4339a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4339a4:{NFSU2_TR(0x4339a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339a5:{NFSU2_TR(0x4339a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4339a8:{NFSU2_TR(0x4339a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4339adull));
TAIL_STATIC(0x61f520u,61f);
}
B4339ad:L4339ad:{c.instructions+=3;NFSU2_TR(0x4339ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4339b1:{NFSU2_TR(0x4339b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x37cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4339b8:{NFSU2_TR(0x4339b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4339bdull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B4339bd:L4339bd:{c.instructions+=9;NFSU2_TR(0x4339bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4339c4:{NFSU2_TR(0x4339c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4339c5:{NFSU2_TR(0x4339c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4339c6:{NFSU2_TR(0x4339c6);
w1(R+0,u8(0x1ull));
}
B4339c8:{NFSU2_TR(0x4339c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4339cf:{NFSU2_TR(0x4339cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4339d0:{NFSU2_TR(0x4339d0);
__builtin_memmove((R+16),(R+20),4);
}
B4339d2:{NFSU2_TR(0x4339d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4339d3:{NFSU2_TR(0x4339d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4339e0:L4339e0:{c.instructions+=10;NFSU2_TR(0x4339e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339e1:{NFSU2_TR(0x4339e1);
__builtin_memmove((R+20),(R+16),4);
}
B4339e3:{NFSU2_TR(0x4339e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4339e6:{NFSU2_TR(0x4339e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B4339e9:{NFSU2_TR(0x4339e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339ea:{NFSU2_TR(0x4339ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339eb:{NFSU2_TR(0x4339eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4339ef:{NFSU2_TR(0x4339ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339f0:{NFSU2_TR(0x4339f0);
__builtin_memmove((R+28),(R+4),4);
}
B4339f2:{NFSU2_TR(0x4339f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4339f7ull));
TAIL_STATIC(0x43c780u,43c);
}
B4339f7:L4339f7:{c.instructions+=2;NFSU2_TR(0x4339f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4339f9:{NFSU2_TR(0x4339f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4339feull));
TAIL_STATIC(0x638010u,638);
}
B4339fe:L4339fe:{c.instructions+=7;NFSU2_TR(0x4339fe);
__builtin_memmove((R+24),(R+0),4);
}
B433a00:{NFSU2_TR(0x433a00);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B433a04:{NFSU2_TR(0x433a04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433a05:{NFSU2_TR(0x433a05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B433a08:{NFSU2_TR(0x433a08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433a09:{NFSU2_TR(0x433a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433a0c:{NFSU2_TR(0x433a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433a11ull));
TAIL_STATIC(0x4012b0u,401);
}
B433a11:L433a11:{c.instructions+=4;NFSU2_TR(0x433a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433a17:{NFSU2_TR(0x433a17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B433a1a:{NFSU2_TR(0x433a1a);
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
B433a1c:{NFSU2_TR(0x433a1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433a25;}}
}
B433a1e:L433a1e:{c.instructions+=2;NFSU2_TR(0x433a1e);
__builtin_memmove((R+4),(R+24),4);
}
B433a20:{NFSU2_TR(0x433a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433a25ull));
TAIL_STATIC(0x6147e0u,614);
}
B433a25:L433a25:{c.instructions+=6;NFSU2_TR(0x433a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433a26:{NFSU2_TR(0x433a26);
w1(R+0,u8(0x1ull));
}
B433a28:{NFSU2_TR(0x433a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433a29:{NFSU2_TR(0x433a29);
__builtin_memmove((R+16),(R+20),4);
}
B433a2b:{NFSU2_TR(0x433a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433a2c:{NFSU2_TR(0x433a2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433a30:L433a30:{c.instructions+=4;NFSU2_TR(0x433a30);
__builtin_memmove((R+0),gp(0x827c9c),4);
}
B433a35:{NFSU2_TR(0x433a35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433a37:{NFSU2_TR(0x433a37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433a38:{NFSU2_TR(0x433a38);
if(r1(R+518)){{goto L433a3f;}}
}
B433a3a:L433a3a:{c.instructions+=2;NFSU2_TR(0x433a3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B433a3d:{NFSU2_TR(0x433a3d);
{goto L433a41;}
}
B433a3f:L433a3f:{c.instructions+=1;NFSU2_TR(0x433a3f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B433a41:L433a41:{c.instructions+=2;NFSU2_TR(0x433a41);
w4(R+4,u32(0x827c9cull));
}
B433a46:{NFSU2_TR(0x433a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433a4bull));
TAIL_STATIC(0x431780u,431);
}
B433a4b:L433a4b:{c.instructions+=2;NFSU2_TR(0x433a4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433a4d:{NFSU2_TR(0x433a4d);
if(r1(R+518)){{goto L433a6a;}}
}
B433a4f:L433a4f:{c.instructions+=1;NFSU2_TR(0x433a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433a53:L433a53:{c.instructions+=2;NFSU2_TR(0x433a53);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
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
B433a56:{NFSU2_TR(0x433a56);
if(r1(R+518)){{goto L433a6e;}}
}
B433a58:L433a58:{c.instructions+=3;NFSU2_TR(0x433a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B433a5b:{NFSU2_TR(0x433a5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433a5d:{NFSU2_TR(0x433a5d);
if(r1(R+518)){{goto L433a64;}}
}
B433a5f:L433a5f:{c.instructions+=2;NFSU2_TR(0x433a5f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B433a62:{NFSU2_TR(0x433a62);
{goto L433a66;}
}
B433a64:L433a64:{c.instructions+=1;NFSU2_TR(0x433a64);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B433a66:L433a66:{c.instructions+=2;NFSU2_TR(0x433a66);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433a68:{NFSU2_TR(0x433a68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433a53u);}goto L433a53;}}
}
B433a6a:L433a6a:{c.instructions+=3;NFSU2_TR(0x433a6a);
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
B433a6c:{NFSU2_TR(0x433a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433a6d:{NFSU2_TR(0x433a6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433a6e:L433a6e:{c.instructions+=3;NFSU2_TR(0x433a6e);
__builtin_memmove((R+0),(R+24),4);
}
B433a70:{NFSU2_TR(0x433a70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433a71:{NFSU2_TR(0x433a71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433a80:L433a80:{c.instructions+=17;NFSU2_TR(0x433a80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433a84:{NFSU2_TR(0x433a84);
__builtin_memmove((R+0),(R+4),4);
}
B433a86:{NFSU2_TR(0x433a86);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433a8a:{NFSU2_TR(0x433a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433a8d:{NFSU2_TR(0x433a8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433a91:{NFSU2_TR(0x433a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433a94:{NFSU2_TR(0x433a94);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B433a9a:{NFSU2_TR(0x433a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433a9e:{NFSU2_TR(0x433a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433aa1:{NFSU2_TR(0x433aa1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B433aa5:{NFSU2_TR(0x433aa5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433aab:{NFSU2_TR(0x433aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433ab2:{NFSU2_TR(0x433ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433ab5:{NFSU2_TR(0x433ab5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B433ab8:{NFSU2_TR(0x433ab8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B433abb:{NFSU2_TR(0x433abb);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433abe:{NFSU2_TR(0x433abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433ad0:L433ad0:{c.instructions+=9;NFSU2_TR(0x433ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433ad4:{NFSU2_TR(0x433ad4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433ad5:{NFSU2_TR(0x433ad5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433ad6:{NFSU2_TR(0x433ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433ad7:{NFSU2_TR(0x433ad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433ad8:{NFSU2_TR(0x433ad8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B433ada:{NFSU2_TR(0x433ada);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433add:{NFSU2_TR(0x433add);
__builtin_memmove((R+24),(R+4),4);
}
B433adf:{NFSU2_TR(0x433adf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L433c77;}}
}
B433ae5:L433ae5:{c.instructions+=1;NFSU2_TR(0x433ae5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x433cbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B433aec:L433aec:{c.instructions+=3;NFSU2_TR(0x433aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433af0:{NFSU2_TR(0x433af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433af2:{NFSU2_TR(0x433af2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b02;}}
}
B433af4:L433af4:{c.instructions+=4;NFSU2_TR(0x433af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433af7:{NFSU2_TR(0x433af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433af8:{NFSU2_TR(0x433af8);
u8 U[4];
w4(U+0,u32(0x7862d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433afd:{NFSU2_TR(0x433afd);
{goto L433c6d;}
}
B433b02:L433b02:{c.instructions+=2;NFSU2_TR(0x433b02);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b05:{NFSU2_TR(0x433b05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b15;}}
}
B433b07:L433b07:{c.instructions+=4;NFSU2_TR(0x433b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433b0a:{NFSU2_TR(0x433b0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b0b:{NFSU2_TR(0x433b0b);
u8 U[4];
w4(U+0,u32(0x7862c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b10:{NFSU2_TR(0x433b10);
{goto L433c6d;}
}
B433b15:L433b15:{c.instructions+=2;NFSU2_TR(0x433b15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b18:{NFSU2_TR(0x433b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b28;}}
}
B433b1a:L433b1a:{c.instructions+=4;NFSU2_TR(0x433b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433b1d:{NFSU2_TR(0x433b1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b1e:{NFSU2_TR(0x433b1e);
u8 U[4];
w4(U+0,u32(0x7862a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b23:{NFSU2_TR(0x433b23);
{goto L433c6d;}
}
B433b28:L433b28:{c.instructions+=2;NFSU2_TR(0x433b28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b2b:{NFSU2_TR(0x433b2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b3b;}}
}
B433b2d:L433b2d:{c.instructions+=4;NFSU2_TR(0x433b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433b30:{NFSU2_TR(0x433b30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b31:{NFSU2_TR(0x433b31);
u8 U[4];
w4(U+0,u32(0x786290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b36:{NFSU2_TR(0x433b36);
{goto L433c6d;}
}
B433b3b:L433b3b:{c.instructions+=2;NFSU2_TR(0x433b3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b3e:{NFSU2_TR(0x433b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b4e;}}
}
B433b40:L433b40:{c.instructions+=4;NFSU2_TR(0x433b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433b43:{NFSU2_TR(0x433b43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b44:{NFSU2_TR(0x433b44);
u8 U[4];
w4(U+0,u32(0x786278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b49:{NFSU2_TR(0x433b49);
{goto L433c6d;}
}
B433b4e:L433b4e:{c.instructions+=2;NFSU2_TR(0x433b4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b51:{NFSU2_TR(0x433b51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c77;}}
}
B433b57:L433b57:{c.instructions+=4;NFSU2_TR(0x433b57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433b5a:{NFSU2_TR(0x433b5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b5b:{NFSU2_TR(0x433b5b);
u8 U[4];
w4(U+0,u32(0x786260ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b60:{NFSU2_TR(0x433b60);
{goto L433c6d;}
}
B433b65:L433b65:{c.instructions+=4;NFSU2_TR(0x433b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433b68:{NFSU2_TR(0x433b68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b69:{NFSU2_TR(0x433b69);
u8 U[4];
w4(U+0,u32(0x786250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b6e:{NFSU2_TR(0x433b6e);
{goto L433c6d;}
}
B433b73:L433b73:{c.instructions+=3;NFSU2_TR(0x433b73);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433b77:{NFSU2_TR(0x433b77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433b79:{NFSU2_TR(0x433b79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b89;}}
}
B433b7b:L433b7b:{c.instructions+=4;NFSU2_TR(0x433b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433b7e:{NFSU2_TR(0x433b7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b7f:{NFSU2_TR(0x433b7f);
u8 U[4];
w4(U+0,u32(0x78623cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b84:{NFSU2_TR(0x433b84);
{goto L433c6d;}
}
B433b89:L433b89:{c.instructions+=2;NFSU2_TR(0x433b89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b8c:{NFSU2_TR(0x433b8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433b9c;}}
}
B433b8e:L433b8e:{c.instructions+=4;NFSU2_TR(0x433b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433b91:{NFSU2_TR(0x433b91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b92:{NFSU2_TR(0x433b92);
u8 U[4];
w4(U+0,u32(0x786224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433b97:{NFSU2_TR(0x433b97);
{goto L433c6d;}
}
B433b9c:L433b9c:{c.instructions+=2;NFSU2_TR(0x433b9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433b9f:{NFSU2_TR(0x433b9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433baf;}}
}
B433ba1:L433ba1:{c.instructions+=4;NFSU2_TR(0x433ba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433ba4:{NFSU2_TR(0x433ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433ba5:{NFSU2_TR(0x433ba5);
u8 U[4];
w4(U+0,u32(0x78620cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433baa:{NFSU2_TR(0x433baa);
{goto L433c6d;}
}
B433baf:L433baf:{c.instructions+=2;NFSU2_TR(0x433baf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433bb2:{NFSU2_TR(0x433bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433bc2;}}
}
B433bb4:L433bb4:{c.instructions+=4;NFSU2_TR(0x433bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433bb7:{NFSU2_TR(0x433bb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bb8:{NFSU2_TR(0x433bb8);
u8 U[4];
w4(U+0,u32(0x7861f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bbd:{NFSU2_TR(0x433bbd);
{goto L433c6d;}
}
B433bc2:L433bc2:{c.instructions+=2;NFSU2_TR(0x433bc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433bc5:{NFSU2_TR(0x433bc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433bd5;}}
}
B433bc7:L433bc7:{c.instructions+=4;NFSU2_TR(0x433bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433bca:{NFSU2_TR(0x433bca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bcb:{NFSU2_TR(0x433bcb);
u8 U[4];
w4(U+0,u32(0x7861dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bd0:{NFSU2_TR(0x433bd0);
{goto L433c6d;}
}
B433bd5:L433bd5:{c.instructions+=2;NFSU2_TR(0x433bd5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433bd8:{NFSU2_TR(0x433bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433be8;}}
}
B433bda:L433bda:{c.instructions+=4;NFSU2_TR(0x433bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433bdd:{NFSU2_TR(0x433bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bde:{NFSU2_TR(0x433bde);
u8 U[4];
w4(U+0,u32(0x7861c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433be3:{NFSU2_TR(0x433be3);
{goto L433c6d;}
}
B433be8:L433be8:{c.instructions+=2;NFSU2_TR(0x433be8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433beb:{NFSU2_TR(0x433beb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c77;}}
}
B433bf1:L433bf1:{c.instructions+=4;NFSU2_TR(0x433bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433bf4:{NFSU2_TR(0x433bf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bf5:{NFSU2_TR(0x433bf5);
u8 U[4];
w4(U+0,u32(0x7861acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433bfa:{NFSU2_TR(0x433bfa);
{goto L433c6d;}
}
B433bfc:L433bfc:{c.instructions+=3;NFSU2_TR(0x433bfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433c00:{NFSU2_TR(0x433c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433c02:{NFSU2_TR(0x433c02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c0f;}}
}
B433c04:L433c04:{c.instructions+=4;NFSU2_TR(0x433c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433c07:{NFSU2_TR(0x433c07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c08:{NFSU2_TR(0x433c08);
u8 U[4];
w4(U+0,u32(0x786198ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c0d:{NFSU2_TR(0x433c0d);
{goto L433c6d;}
}
B433c0f:L433c0f:{c.instructions+=2;NFSU2_TR(0x433c0f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c12:{NFSU2_TR(0x433c12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c1f;}}
}
B433c14:L433c14:{c.instructions+=4;NFSU2_TR(0x433c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433c17:{NFSU2_TR(0x433c17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c18:{NFSU2_TR(0x433c18);
u8 U[4];
w4(U+0,u32(0x786180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c1d:{NFSU2_TR(0x433c1d);
{goto L433c6d;}
}
B433c1f:L433c1f:{c.instructions+=2;NFSU2_TR(0x433c1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c22:{NFSU2_TR(0x433c22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c2f;}}
}
B433c24:L433c24:{c.instructions+=4;NFSU2_TR(0x433c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433c27:{NFSU2_TR(0x433c27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c28:{NFSU2_TR(0x433c28);
u8 U[4];
w4(U+0,u32(0x786168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c2d:{NFSU2_TR(0x433c2d);
{goto L433c6d;}
}
B433c2f:L433c2f:{c.instructions+=2;NFSU2_TR(0x433c2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c32:{NFSU2_TR(0x433c32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c3f;}}
}
B433c34:L433c34:{c.instructions+=4;NFSU2_TR(0x433c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433c37:{NFSU2_TR(0x433c37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c38:{NFSU2_TR(0x433c38);
u8 U[4];
w4(U+0,u32(0x786150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c3d:{NFSU2_TR(0x433c3d);
{goto L433c6d;}
}
B433c3f:L433c3f:{c.instructions+=2;NFSU2_TR(0x433c3f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c42:{NFSU2_TR(0x433c42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c4f;}}
}
B433c44:L433c44:{c.instructions+=4;NFSU2_TR(0x433c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433c47:{NFSU2_TR(0x433c47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c48:{NFSU2_TR(0x433c48);
u8 U[4];
w4(U+0,u32(0x786138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c4d:{NFSU2_TR(0x433c4d);
{goto L433c6d;}
}
B433c4f:L433c4f:{c.instructions+=2;NFSU2_TR(0x433c4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c52:{NFSU2_TR(0x433c52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c5f;}}
}
B433c54:L433c54:{c.instructions+=4;NFSU2_TR(0x433c54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433c57:{NFSU2_TR(0x433c57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c58:{NFSU2_TR(0x433c58);
u8 U[4];
w4(U+0,u32(0x786120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c5d:{NFSU2_TR(0x433c5d);
{goto L433c6d;}
}
B433c5f:L433c5f:{c.instructions+=2;NFSU2_TR(0x433c5f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c62:{NFSU2_TR(0x433c62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433c77;}}
}
B433c64:L433c64:{c.instructions+=3;NFSU2_TR(0x433c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433c67:{NFSU2_TR(0x433c67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c68:{NFSU2_TR(0x433c68);
u8 U[4];
w4(U+0,u32(0x786108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433c6d:L433c6d:{c.instructions+=1;NFSU2_TR(0x433c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433c72ull));
TAIL_STATIC(0x43db80u,43d);
}
B433c72:L433c72:{c.instructions+=2;NFSU2_TR(0x433c72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B433c75:{NFSU2_TR(0x433c75);
__builtin_memmove((R+28),(R+0),4);
}
B433c77:L433c77:{c.instructions+=5;NFSU2_TR(0x433c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B433c7a:{NFSU2_TR(0x433c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B433c7c:{NFSU2_TR(0x433c7c);
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
B433c7e:{NFSU2_TR(0x433c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433c82:{NFSU2_TR(0x433c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433c87ull));
TAIL_STATIC(0x502fd0u,502);
}
B433c87:L433c87:{c.instructions+=3;NFSU2_TR(0x433c87);
__builtin_memmove((R+20),(R+0),4);
}
B433c89:{NFSU2_TR(0x433c89);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B433c8b:{NFSU2_TR(0x433c8b);
if(r1(R+518)){{goto L433cb3;}}
}
B433c8d:L433c8d:{c.instructions+=1;NFSU2_TR(0x433c8d);
__builtin_memmove((R+4),(R+4),4);
}
B433c90:L433c90:{c.instructions+=4;NFSU2_TR(0x433c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B433c93:{NFSU2_TR(0x433c93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B433c95:{NFSU2_TR(0x433c95);
__builtin_memmove((R+4),(R+12),4);
}
B433c97:{NFSU2_TR(0x433c97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433c9aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B433c9a:L433c9a:{c.instructions+=2;NFSU2_TR(0x433c9a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433c9c:{NFSU2_TR(0x433c9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433ca2;}}
}
B433c9e:L433c9e:{c.instructions+=1;NFSU2_TR(0x433c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433ca2:L433ca2:{c.instructions+=3;NFSU2_TR(0x433ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B433ca4:{NFSU2_TR(0x433ca4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B433ca6:{NFSU2_TR(0x433ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433c90u);}goto L433c90;}}
}
B433ca8:L433ca8:{c.instructions+=6;NFSU2_TR(0x433ca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433cac:{NFSU2_TR(0x433cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433cad:{NFSU2_TR(0x433cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433cae:{NFSU2_TR(0x433cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433caf:{NFSU2_TR(0x433caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B433cb0:{NFSU2_TR(0x433cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433cb3:L433cb3:{c.instructions+=6;NFSU2_TR(0x433cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433cb4:{NFSU2_TR(0x433cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433cb5:{NFSU2_TR(0x433cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433cb6:{NFSU2_TR(0x433cb6);
__builtin_memmove((R+0),(R+12),4);
}
B433cb8:{NFSU2_TR(0x433cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B433cb9:{NFSU2_TR(0x433cb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433cd0:L433cd0:{c.instructions+=4;NFSU2_TR(0x433cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433cd1:{NFSU2_TR(0x433cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B433cd5:{NFSU2_TR(0x433cd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433cd6:{NFSU2_TR(0x433cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433cdbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433a30u);}goto L433a30;}
}
B433cdb:L433cdb:{c.instructions+=3;NFSU2_TR(0x433cdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433cde:{NFSU2_TR(0x433cde);
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
B433ce0:{NFSU2_TR(0x433ce0);
if(r1(R+518)){{goto L433d00;}}
}
B433ce2:L433ce2:{c.instructions+=4;NFSU2_TR(0x433ce2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B433ce5:{NFSU2_TR(0x433ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B433ce7:{NFSU2_TR(0x433ce7);
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
B433ce9:{NFSU2_TR(0x433ce9);
if(r1(R+518)){{goto L433d00;}}
}
B433ceb:L433ceb:{c.instructions+=2;NFSU2_TR(0x433ceb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433cef:{NFSU2_TR(0x433cef);
}
B433cf0:L433cf0:{c.instructions+=2;NFSU2_TR(0x433cf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B433cf3:{NFSU2_TR(0x433cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433cfa;}}
}
B433cf5:L433cf5:{c.instructions+=2;NFSU2_TR(0x433cf5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B433cf8:{NFSU2_TR(0x433cf8);
if(r1(R+518)){{goto L433d07;}}
}
B433cfa:L433cfa:{c.instructions+=3;NFSU2_TR(0x433cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B433cfc:{NFSU2_TR(0x433cfc);
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
B433cfe:{NFSU2_TR(0x433cfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433cf0u);}goto L433cf0;}}
}
B433d00:L433d00:{c.instructions+=3;NFSU2_TR(0x433d00);
w4(R+0,u32(0x1ull));
}
B433d05:{NFSU2_TR(0x433d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433d06:{NFSU2_TR(0x433d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433d07:L433d07:{c.instructions+=3;NFSU2_TR(0x433d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433d0a:{NFSU2_TR(0x433d0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433d0b:{NFSU2_TR(0x433d0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433d10:L433d10:{c.instructions+=5;NFSU2_TR(0x433d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433d11:{NFSU2_TR(0x433d11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B433d15:{NFSU2_TR(0x433d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433d18:{NFSU2_TR(0x433d18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433d19:{NFSU2_TR(0x433d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433d1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433a30u);}goto L433a30;}
}
B433d1e:L433d1e:{c.instructions+=6;NFSU2_TR(0x433d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433d21:{NFSU2_TR(0x433d21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433d24:{NFSU2_TR(0x433d24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433d26:{NFSU2_TR(0x433d26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433d27:{NFSU2_TR(0x433d27);
__builtin_memmove((R+4),(R+0),4);
}
B433d29:{NFSU2_TR(0x433d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433d2eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433ad0u);}goto L433ad0;}
}
B433d2e:L433d2e:{c.instructions+=7;NFSU2_TR(0x433d2e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B433d34:{NFSU2_TR(0x433d34);
{u32 ea_=u32(u32(7887832u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B433d3a:{NFSU2_TR(0x433d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433d3d:{NFSU2_TR(0x433d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433d3e:{NFSU2_TR(0x433d3e);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B433d41:{NFSU2_TR(0x433d41);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433d44:{NFSU2_TR(0x433d44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433d50:L433d50:{c.instructions+=6;NFSU2_TR(0x433d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433d54:{NFSU2_TR(0x433d54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433d55:{NFSU2_TR(0x433d55);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B433d59:{NFSU2_TR(0x433d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433d5c:{NFSU2_TR(0x433d5c);
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
B433d5e:{NFSU2_TR(0x433d5e);
if(r1(R+518)){{goto L433e08;}}
}
B433d64:L433d64:{c.instructions+=3;NFSU2_TR(0x433d64);
w4(R+8,u32(0x3ull));
}
B433d69:{NFSU2_TR(0x433d69);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B433d6b:{NFSU2_TR(0x433d6b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L433e08;}}
}
B433d71:L433d71:{c.instructions+=1;NFSU2_TR(0x433d71);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x433e0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B433d78:L433d78:{c.instructions+=2;NFSU2_TR(0x433d78);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B433d7a:{NFSU2_TR(0x433d7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433e08;}}
}
B433d80:L433d80:{c.instructions+=6;NFSU2_TR(0x433d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433d83:{NFSU2_TR(0x433d83);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B433d89:{NFSU2_TR(0x433d89);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433d8f:{NFSU2_TR(0x433d8f);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433d92:{NFSU2_TR(0x433d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433d93:{NFSU2_TR(0x433d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433d94:L433d94:{c.instructions+=2;NFSU2_TR(0x433d94);
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
B433d97:{NFSU2_TR(0x433d97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433e08;}}
}
B433d99:L433d99:{c.instructions+=6;NFSU2_TR(0x433d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433da0:{NFSU2_TR(0x433da0);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B433da6:{NFSU2_TR(0x433da6);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433dac:{NFSU2_TR(0x433dac);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433daf:{NFSU2_TR(0x433daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433db0:{NFSU2_TR(0x433db0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433db1:L433db1:{c.instructions+=2;NFSU2_TR(0x433db1);
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
B433db3:{NFSU2_TR(0x433db3);
if(r1(R+518)){{goto L433de9;}}
}
B433db5:L433db5:{c.instructions+=2;NFSU2_TR(0x433db5);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B433db7:{NFSU2_TR(0x433db7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433e08;}}
}
B433db9:L433db9:{c.instructions+=1;NFSU2_TR(0x433db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433dbc:L433dbc:{c.instructions+=7;NFSU2_TR(0x433dbc);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B433dc2:{NFSU2_TR(0x433dc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433dc3:{NFSU2_TR(0x433dc3);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B433dc9:{NFSU2_TR(0x433dc9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B433dcd:{NFSU2_TR(0x433dcd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B433dd0:{NFSU2_TR(0x433dd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433dd4:{NFSU2_TR(0x433dd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433dd9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433d10u);}goto L433d10;}
}
B433dd9:L433dd9:{c.instructions+=6;NFSU2_TR(0x433dd9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B433ddd:{NFSU2_TR(0x433ddd);
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
B433de0:{NFSU2_TR(0x433de0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B433de4:{NFSU2_TR(0x433de4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B433de7:{NFSU2_TR(0x433de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433de8:{NFSU2_TR(0x433de8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433de9:L433de9:{c.instructions+=3;NFSU2_TR(0x433de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433df0:{NFSU2_TR(0x433df0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433df1:{NFSU2_TR(0x433df1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433df2:L433df2:{c.instructions+=2;NFSU2_TR(0x433df2);
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
B433df3:{NFSU2_TR(0x433df3);
if(r1(R+518)){{goto L433e01;}}
}
B433df5:L433df5:{c.instructions+=2;NFSU2_TR(0x433df5);
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
B433df6:{NFSU2_TR(0x433df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433e08;}}
}
B433df8:L433df8:{c.instructions+=2;NFSU2_TR(0x433df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433dff:{NFSU2_TR(0x433dff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433dbcu);}goto L433dbc;}
}
B433e01:L433e01:{c.instructions+=1;NFSU2_TR(0x433e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B433e08:L433e08:{c.instructions+=2;NFSU2_TR(0x433e08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433e09:{NFSU2_TR(0x433e09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433e20:L433e20:{c.instructions+=4;NFSU2_TR(0x433e20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e21:{NFSU2_TR(0x433e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B433e25:{NFSU2_TR(0x433e25);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e26:{NFSU2_TR(0x433e26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433e2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433a30u);}goto L433a30;}
}
B433e2b:L433e2b:{c.instructions+=3;NFSU2_TR(0x433e2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433e2e:{NFSU2_TR(0x433e2e);
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
B433e30:{NFSU2_TR(0x433e30);
if(r1(R+518)){{goto L433f36;}}
}
B433e36:L433e36:{c.instructions+=7;NFSU2_TR(0x433e36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e37:{NFSU2_TR(0x433e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B433e3a:{NFSU2_TR(0x433e3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B433e3c:{NFSU2_TR(0x433e3c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433e3e:{NFSU2_TR(0x433e3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e3f:{NFSU2_TR(0x433e3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B433e43:{NFSU2_TR(0x433e43);
if(r1(R+518)){{goto L433e55;}}
}
B433e45:L433e45:{c.instructions+=2;NFSU2_TR(0x433e45);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B433e48:{NFSU2_TR(0x433e48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433e4f;}}
}
B433e4a:L433e4a:{c.instructions+=2;NFSU2_TR(0x433e4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B433e4d:{NFSU2_TR(0x433e4d);
if(r1(R+518)){{goto L433e99;}}
}
B433e4f:L433e4f:{c.instructions+=3;NFSU2_TR(0x433e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B433e51:{NFSU2_TR(0x433e51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433e53:{NFSU2_TR(0x433e53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433e45u);}goto L433e45;}}
}
B433e55:L433e55:{c.instructions+=5;NFSU2_TR(0x433e55);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e56:{NFSU2_TR(0x433e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B433e5a:{NFSU2_TR(0x433e5a);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e5c:{NFSU2_TR(0x433e5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ea610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B433e63:{NFSU2_TR(0x433e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433e68ull));
TAIL_STATIC(0x575620u,575);
}
B433e68:L433e68:{c.instructions+=3;NFSU2_TR(0x433e68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B433e6b:{NFSU2_TR(0x433e6b);
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
B433e6d:{NFSU2_TR(0x433e6d);
if(r1(R+518)){{goto L433f24;}}
}
B433e73:L433e73:{c.instructions+=9;NFSU2_TR(0x433e73);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433e77:{NFSU2_TR(0x433e77);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433e7b:{NFSU2_TR(0x433e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e7c:{NFSU2_TR(0x433e7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e7d:{NFSU2_TR(0x433e7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e7e:{NFSU2_TR(0x433e7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e7f:{NFSU2_TR(0x433e7f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433e80:{NFSU2_TR(0x433e80);
__builtin_memmove((R+4),(R+0),4);
}
B433e82:{NFSU2_TR(0x433e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433e87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433a80u);}goto L433a80;}
}
B433e87:L433e87:{c.instructions+=10;NFSU2_TR(0x433e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433e8a:{NFSU2_TR(0x433e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B433e8b:{NFSU2_TR(0x433e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B433e8d:{NFSU2_TR(0x433e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433e90:{NFSU2_TR(0x433e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433e91:{NFSU2_TR(0x433e91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B433e93:{NFSU2_TR(0x433e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433e94:{NFSU2_TR(0x433e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433e97:{NFSU2_TR(0x433e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433e98:{NFSU2_TR(0x433e98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433e99:L433e99:{c.instructions+=3;NFSU2_TR(0x433e99);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ea610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B433ea1:{NFSU2_TR(0x433ea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B433ea5:{NFSU2_TR(0x433ea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433eae;}}
}
B433ea7:L433ea7:{c.instructions+=1;NFSU2_TR(0x433ea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ea610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B433eae:L433eae:{c.instructions+=4;NFSU2_TR(0x433eae);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B433eb2:{NFSU2_TR(0x433eb2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B433eb4:{NFSU2_TR(0x433eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B433eb7:{NFSU2_TR(0x433eb7);
if(r1(R+518)){{goto L433ec2;}}
}
B433eb9:L433eb9:{c.instructions+=2;NFSU2_TR(0x433eb9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433ebc:{NFSU2_TR(0x433ebc);
if(r1(R+518)){{goto L433f34;}}
}
B433ebe:L433ebe:{c.instructions+=2;NFSU2_TR(0x433ebe);
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
B433ec0:{NFSU2_TR(0x433ec0);
{goto L433eca;}
}
B433ec2:L433ec2:{c.instructions+=2;NFSU2_TR(0x433ec2);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433ec5:{NFSU2_TR(0x433ec5);
if(r1(R+518)){{goto L433f34;}}
}
B433ec7:L433ec7:{c.instructions+=1;NFSU2_TR(0x433ec7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B433eca:L433eca:{c.instructions+=1;NFSU2_TR(0x433eca);
if(r1(R+518)){{goto L433f34;}}
}
B433ecc:L433ecc:{c.instructions+=7;NFSU2_TR(0x433ecc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433ecf:{NFSU2_TR(0x433ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433ed3:{NFSU2_TR(0x433ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433ed6:{NFSU2_TR(0x433ed6);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B433eda:{NFSU2_TR(0x433eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B433edd:{NFSU2_TR(0x433edd);
__builtin_memmove((R+8),(R+20),4);
}
B433edf:{NFSU2_TR(0x433edf);
if(r1(R+518)){{goto L433ee6;}}
}
B433ee1:L433ee1:{c.instructions+=2;NFSU2_TR(0x433ee1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433ee4:{NFSU2_TR(0x433ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433f0c;}}
}
B433ee6:L433ee6:{c.instructions+=2;NFSU2_TR(0x433ee6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433ee9:{NFSU2_TR(0x433ee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433efa;}}
}
B433eeb:L433eeb:{c.instructions+=2;NFSU2_TR(0x433eeb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B433eed:{NFSU2_TR(0x433eed);
if(r1(R+518)){{goto L433efa;}}
}
B433eef:L433eef:{c.instructions+=3;NFSU2_TR(0x433eef);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ea610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B433ef6:{NFSU2_TR(0x433ef6);
__builtin_memmove((R+8),(R+20),4);
}
B433ef8:{NFSU2_TR(0x433ef8);
{goto L433f09;}
}
B433efa:L433efa:{c.instructions+=2;NFSU2_TR(0x433efa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433efc:{NFSU2_TR(0x433efc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433f09;}}
}
B433efe:L433efe:{c.instructions+=2;NFSU2_TR(0x433efe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B433f00:{NFSU2_TR(0x433f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433f09;}}
}
B433f02:L433f02:{c.instructions+=1;NFSU2_TR(0x433f02);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ea610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B433f09:L433f09:{c.instructions+=1;NFSU2_TR(0x433f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433f0c:L433f0c:{c.instructions+=7;NFSU2_TR(0x433f0c);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B433f0e:{NFSU2_TR(0x433f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433f11:{NFSU2_TR(0x433f11);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B433f13:{NFSU2_TR(0x433f13);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B433f16:{NFSU2_TR(0x433f16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433f17:{NFSU2_TR(0x433f17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433f18:{NFSU2_TR(0x433f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433f1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433d50u);}goto L433d50;}
}
B433f1d:L433f1d:{c.instructions+=5;NFSU2_TR(0x433f1d);
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
B433f20:{NFSU2_TR(0x433f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433f21:{NFSU2_TR(0x433f21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433f22:{NFSU2_TR(0x433f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433f23:{NFSU2_TR(0x433f23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433f24:L433f24:{c.instructions+=7;NFSU2_TR(0x433f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433f27:{NFSU2_TR(0x433f27);
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
B433f29:{NFSU2_TR(0x433f29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B433f2b:{NFSU2_TR(0x433f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433f2e:{NFSU2_TR(0x433f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B433f31:{NFSU2_TR(0x433f31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B433f33:{NFSU2_TR(0x433f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B433f34:L433f34:{c.instructions+=2;NFSU2_TR(0x433f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B433f35:{NFSU2_TR(0x433f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433f36:L433f36:{c.instructions+=2;NFSU2_TR(0x433f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B433f37:{NFSU2_TR(0x433f37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433f40:L433f40:{c.instructions+=4;NFSU2_TR(0x433f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433f41:{NFSU2_TR(0x433f41);
__builtin_memmove((R+24),gp(0x827ca4),4);
}
B433f47:{NFSU2_TR(0x433f47);
w4(R+4,u32(0x827ca4ull));
}
B433f4c:{NFSU2_TR(0x433f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433f51ull));
TAIL_STATIC(0x502fd0u,502);
}
B433f51:L433f51:{c.instructions+=2;NFSU2_TR(0x433f51);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433f53:{NFSU2_TR(0x433f53);
if(r1(R+518)){{goto L433f6e;}}
}
B433f55:L433f55:{c.instructions+=2;NFSU2_TR(0x433f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B433f59:{NFSU2_TR(0x433f59);
__builtin_memmove((R+16),(R+16),4);
}
B433f60:L433f60:{c.instructions+=3;NFSU2_TR(0x433f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433f63:{NFSU2_TR(0x433f63);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B433f66:{NFSU2_TR(0x433f66);
if(r1(R+518)){{goto L433f70;}}
}
B433f68:L433f68:{c.instructions+=3;NFSU2_TR(0x433f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B433f6a:{NFSU2_TR(0x433f6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433f6c:{NFSU2_TR(0x433f6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x433f60u);}goto L433f60;}}
}
B433f6e:L433f6e:{c.instructions+=1;NFSU2_TR(0x433f6e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B433f70:L433f70:{c.instructions+=4;NFSU2_TR(0x433f70);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433f74:{NFSU2_TR(0x433f74);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433f77:{NFSU2_TR(0x433f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B433f78:{NFSU2_TR(0x433f78);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x434170u,434);}
}
B433f7e:L433f7e:{c.instructions+=1;NFSU2_TR(0x433f7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x434174ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B433f85:L433f85:{c.instructions+=3;NFSU2_TR(0x433f85);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433f89:{NFSU2_TR(0x433f89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B433f8b:{NFSU2_TR(0x433f8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433f9f;}}
}
B433f8d:L433f8d:{c.instructions+=5;NFSU2_TR(0x433f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B433f91:{NFSU2_TR(0x433f91);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433f94:{NFSU2_TR(0x433f94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433f95:{NFSU2_TR(0x433f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433f96:{NFSU2_TR(0x433f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433f9bull));
TAIL_STATIC(0x4012b0u,401);
}
B433f9b:L433f9b:{c.instructions+=2;NFSU2_TR(0x433f9b);
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
B433f9e:{NFSU2_TR(0x433f9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433f9f:L433f9f:{c.instructions+=2;NFSU2_TR(0x433f9f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433fa2:{NFSU2_TR(0x433fa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433fb2;}}
}
B433fa4:L433fa4:{c.instructions+=4;NFSU2_TR(0x433fa4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x50ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433fa7:{NFSU2_TR(0x433fa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433fa8:{NFSU2_TR(0x433fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433fac:{NFSU2_TR(0x433fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433fb1ull));
TAIL_STATIC(0x4013d0u,401);
}
B433fb1:L433fb1:{c.instructions+=1;NFSU2_TR(0x433fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433fb2:L433fb2:{c.instructions+=2;NFSU2_TR(0x433fb2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433fb5:{NFSU2_TR(0x433fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433fc8;}}
}
B433fb7:L433fb7:{c.instructions+=4;NFSU2_TR(0x433fb7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x90ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433fbd:{NFSU2_TR(0x433fbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433fbe:{NFSU2_TR(0x433fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433fc2:{NFSU2_TR(0x433fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433fc7ull));
TAIL_STATIC(0x4013d0u,401);
}
B433fc7:L433fc7:{c.instructions+=1;NFSU2_TR(0x433fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433fc8:L433fc8:{c.instructions+=2;NFSU2_TR(0x433fc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433fcb:{NFSU2_TR(0x433fcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433fde;}}
}
B433fcd:L433fcd:{c.instructions+=4;NFSU2_TR(0x433fcd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xd0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xd0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433fd3:{NFSU2_TR(0x433fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433fd4:{NFSU2_TR(0x433fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433fd8:{NFSU2_TR(0x433fd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433fddull));
TAIL_STATIC(0x4013d0u,401);
}
B433fdd:L433fdd:{c.instructions+=1;NFSU2_TR(0x433fdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433fde:L433fde:{c.instructions+=2;NFSU2_TR(0x433fde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B433fe1:{NFSU2_TR(0x433fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L433ff4;}}
}
B433fe3:L433fe3:{c.instructions+=4;NFSU2_TR(0x433fe3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x110ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B433fe9:{NFSU2_TR(0x433fe9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B433fea:{NFSU2_TR(0x433fea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B433fee:{NFSU2_TR(0x433fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x433ff3ull));
TAIL_STATIC(0x4013d0u,401);
}
B433ff3:L433ff3:{c.instructions+=1;NFSU2_TR(0x433ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B433ff4:L433ff4:{c.instructions+=2;NFSU2_TR(0x433ff4);
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
B433ff7:{NFSU2_TR(0x433ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x434170u,434);}
}
B433ffd:L433ffd:{c.instructions+=1;NFSU2_TR(0x433ffd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x150ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x150ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x434003u,434);
}
XIT:NFSU2_TR_EXIT(0x433,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
