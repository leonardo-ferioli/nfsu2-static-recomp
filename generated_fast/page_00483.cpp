#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_46e(u8* __restrict R,Cpu& c);
u32 body_470(u8* __restrict R,Cpu& c);
u32 body_471(u8* __restrict R,Cpu& c);
u32 body_476(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_478(u8* __restrict R,Cpu& c);
u32 body_47c(u8* __restrict R,Cpu& c);
u32 body_47d(u8* __restrict R,Cpu& c);
u32 body_47e(u8* __restrict R,Cpu& c);
u32 body_47f(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_482(u8* __restrict R,Cpu& c);
u32 body_484(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f8(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x483,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x483,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_483(u8* __restrict R,Cpu& c);
u32 page_483(Cpu& c){return body_483(c.regs.data(),c);}
__attribute__((noinline)) u32 body_483(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x483003:goto L483003;
case 0x483008:goto L483008;
case 0x48300b:c.instructions+=5;goto B48300b;
case 0x48300d:c.instructions+=4;goto B48300d;
case 0x48300f:c.instructions+=3;goto B48300f;
case 0x483010:c.instructions+=2;goto B483010;
case 0x483012:c.instructions+=1;goto B483012;
case 0x483015:goto L483015;
case 0x483018:c.instructions+=6;goto B483018;
case 0x48301b:c.instructions+=5;goto B48301b;
case 0x48301d:c.instructions+=4;goto B48301d;
case 0x48301e:c.instructions+=3;goto B48301e;
case 0x483020:c.instructions+=2;goto B483020;
case 0x483023:c.instructions+=1;goto B483023;
case 0x483026:goto L483026;
case 0x483027:c.instructions+=3;goto B483027;
case 0x48302d:c.instructions+=2;goto B48302d;
case 0x483030:c.instructions+=1;goto B483030;
case 0x483035:goto L483035;
case 0x48303a:c.instructions+=7;goto B48303a;
case 0x483040:c.instructions+=6;goto B483040;
case 0x483042:c.instructions+=5;goto B483042;
case 0x483043:c.instructions+=4;goto B483043;
case 0x483045:c.instructions+=3;goto B483045;
case 0x483046:c.instructions+=2;goto B483046;
case 0x48304c:c.instructions+=1;goto B48304c;
case 0x483051:goto L483051;
case 0x483052:c.instructions+=5;goto B483052;
case 0x483053:c.instructions+=4;goto B483053;
case 0x483054:c.instructions+=3;goto B483054;
case 0x483055:c.instructions+=2;goto B483055;
case 0x483056:c.instructions+=1;goto B483056;
case 0x483059:goto L483059;
case 0x48305f:c.instructions+=2;goto B48305f;
case 0x483061:c.instructions+=1;goto B483061;
case 0x483067:goto L483067;
case 0x48306a:c.instructions+=8;goto B48306a;
case 0x48306f:c.instructions+=7;goto B48306f;
case 0x483072:c.instructions+=6;goto B483072;
case 0x483075:c.instructions+=5;goto B483075;
case 0x483078:c.instructions+=4;goto B483078;
case 0x48307b:c.instructions+=3;goto B48307b;
case 0x48307d:c.instructions+=2;goto B48307d;
case 0x483081:c.instructions+=1;goto B483081;
case 0x483084:goto L483084;
case 0x483088:c.instructions+=13;goto B483088;
case 0x48308b:c.instructions+=12;goto B48308b;
case 0x48308e:c.instructions+=11;goto B48308e;
case 0x483091:c.instructions+=10;goto B483091;
case 0x483094:c.instructions+=9;goto B483094;
case 0x483097:c.instructions+=8;goto B483097;
case 0x483098:c.instructions+=7;goto B483098;
case 0x48309d:c.instructions+=6;goto B48309d;
case 0x48309f:c.instructions+=5;goto B48309f;
case 0x4830a1:c.instructions+=4;goto B4830a1;
case 0x4830a2:c.instructions+=3;goto B4830a2;
case 0x4830a5:c.instructions+=2;goto B4830a5;
case 0x4830a9:c.instructions+=1;goto B4830a9;
case 0x4830ae:goto L4830ae;
case 0x4830b1:c.instructions+=1;goto B4830b1;
case 0x4830b6:goto L4830b6;
case 0x4830b8:c.instructions+=5;goto B4830b8;
case 0x4830b9:c.instructions+=4;goto B4830b9;
case 0x4830bd:c.instructions+=3;goto B4830bd;
case 0x4830be:c.instructions+=2;goto B4830be;
case 0x4830c0:c.instructions+=1;goto B4830c0;
case 0x4830c3:goto L4830c3;
case 0x4830c4:c.instructions+=3;goto B4830c4;
case 0x4830ca:c.instructions+=2;goto B4830ca;
case 0x4830cd:c.instructions+=1;goto B4830cd;
case 0x4830d2:goto L4830d2;
case 0x4830d5:c.instructions+=5;goto B4830d5;
case 0x4830d8:c.instructions+=4;goto B4830d8;
case 0x4830da:c.instructions+=3;goto B4830da;
case 0x4830dc:c.instructions+=2;goto B4830dc;
case 0x4830de:c.instructions+=1;goto B4830de;
case 0x4830e1:goto L4830e1;
case 0x4830e2:c.instructions+=4;goto B4830e2;
case 0x4830e5:c.instructions+=3;goto B4830e5;
case 0x4830e7:c.instructions+=2;goto B4830e7;
case 0x4830ed:c.instructions+=1;goto B4830ed;
case 0x4830f2:goto L4830f2;
case 0x4830f3:c.instructions+=5;goto B4830f3;
case 0x4830f4:c.instructions+=4;goto B4830f4;
case 0x4830f5:c.instructions+=3;goto B4830f5;
case 0x4830f6:c.instructions+=2;goto B4830f6;
case 0x4830f7:c.instructions+=1;goto B4830f7;
case 0x4830fa:goto L4830fa;
case 0x483100:c.instructions+=2;goto B483100;
case 0x483102:c.instructions+=1;goto B483102;
case 0x483104:goto L483104;
case 0x483106:c.instructions+=1;goto B483106;
case 0x48310b:goto L48310b;
case 0x48310c:c.instructions+=5;goto B48310c;
case 0x48310d:c.instructions+=4;goto B48310d;
case 0x48310e:c.instructions+=3;goto B48310e;
case 0x48310f:c.instructions+=2;goto B48310f;
case 0x483110:c.instructions+=1;goto B483110;
case 0x483130:goto L483130;
case 0x483131:c.instructions+=5;goto B483131;
case 0x483133:c.instructions+=4;goto B483133;
case 0x483136:c.instructions+=3;goto B483136;
case 0x483138:c.instructions+=2;goto B483138;
case 0x48313a:c.instructions+=1;goto B48313a;
case 0x48313c:goto L48313c;
case 0x483140:c.instructions+=4;goto B483140;
case 0x483144:c.instructions+=3;goto B483144;
case 0x483147:c.instructions+=2;goto B483147;
case 0x48314a:c.instructions+=1;goto B48314a;
case 0x48314d:goto L48314d;
case 0x483150:c.instructions+=8;goto B483150;
case 0x483153:c.instructions+=7;goto B483153;
case 0x483156:c.instructions+=6;goto B483156;
case 0x483159:c.instructions+=5;goto B483159;
case 0x48315c:c.instructions+=4;goto B48315c;
case 0x483162:c.instructions+=3;goto B483162;
case 0x483168:c.instructions+=2;goto B483168;
case 0x48316a:c.instructions+=1;goto B48316a;
case 0x48316c:goto L48316c;
case 0x48316e:c.instructions+=1;goto B48316e;
case 0x483173:goto L483173;
case 0x483177:c.instructions+=3;goto B483177;
case 0x483178:c.instructions+=2;goto B483178;
case 0x48317a:c.instructions+=1;goto B48317a;
case 0x48317f:goto L48317f;
case 0x483180:c.instructions+=1;goto B483180;
case 0x483183:goto L483183;
case 0x483185:goto L483185;
case 0x483187:c.instructions+=1;goto B483187;
case 0x48318c:goto L48318c;
case 0x483190:c.instructions+=3;goto B483190;
case 0x483191:c.instructions+=2;goto B483191;
case 0x483193:c.instructions+=1;goto B483193;
case 0x483198:goto L483198;
case 0x483199:c.instructions+=1;goto B483199;
case 0x4831a0:goto L4831a0;
case 0x4831a1:c.instructions+=4;goto B4831a1;
case 0x4831a3:c.instructions+=3;goto B4831a3;
case 0x4831a6:c.instructions+=2;goto B4831a6;
case 0x4831a8:c.instructions+=1;goto B4831a8;
case 0x4831aa:goto L4831aa;
case 0x4831ae:c.instructions+=4;goto B4831ae;
case 0x4831b2:c.instructions+=3;goto B4831b2;
case 0x4831b5:c.instructions+=2;goto B4831b5;
case 0x4831b8:c.instructions+=1;goto B4831b8;
case 0x4831bb:goto L4831bb;
case 0x4831c1:c.instructions+=8;goto B4831c1;
case 0x4831c4:c.instructions+=7;goto B4831c4;
case 0x4831cb:c.instructions+=6;goto B4831cb;
case 0x4831d1:c.instructions+=5;goto B4831d1;
case 0x4831d4:c.instructions+=4;goto B4831d4;
case 0x4831d6:c.instructions+=3;goto B4831d6;
case 0x4831dc:c.instructions+=2;goto B4831dc;
case 0x4831e3:c.instructions+=1;goto B4831e3;
case 0x4831e5:goto L4831e5;
case 0x4831e7:c.instructions+=2;goto B4831e7;
case 0x4831e9:c.instructions+=1;goto B4831e9;
case 0x4831eb:goto L4831eb;
case 0x4831ed:c.instructions+=1;goto B4831ed;
case 0x4831f2:goto L4831f2;
case 0x4831f4:c.instructions+=2;goto B4831f4;
case 0x4831f6:c.instructions+=1;goto B4831f6;
case 0x4831f8:goto L4831f8;
case 0x4831fd:goto L4831fd;
case 0x4831ff:goto L4831ff;
case 0x483204:goto L483204;
case 0x483206:c.instructions+=1;goto B483206;
case 0x483208:goto L483208;
case 0x48320a:c.instructions+=1;goto B48320a;
case 0x48320f:goto L48320f;
case 0x483215:c.instructions+=2;goto B483215;
case 0x483217:c.instructions+=1;goto B483217;
case 0x483219:goto L483219;
case 0x48321f:c.instructions+=2;goto B48321f;
case 0x483221:c.instructions+=1;goto B483221;
case 0x483223:goto L483223;
case 0x483225:c.instructions+=1;goto B483225;
case 0x48322a:goto L48322a;
case 0x48322c:c.instructions+=1;goto B48322c;
case 0x48322e:goto L48322e;
case 0x483235:goto L483235;
case 0x483239:c.instructions+=3;goto B483239;
case 0x48323a:c.instructions+=2;goto B48323a;
case 0x48323c:c.instructions+=1;goto B48323c;
case 0x483241:goto L483241;
case 0x483242:c.instructions+=1;goto B483242;
case 0x483250:goto L483250;
case 0x483251:c.instructions+=7;goto B483251;
case 0x483252:c.instructions+=6;goto B483252;
case 0x483253:c.instructions+=5;goto B483253;
case 0x483255:c.instructions+=4;goto B483255;
case 0x483258:c.instructions+=3;goto B483258;
case 0x48325a:c.instructions+=2;goto B48325a;
case 0x48325b:c.instructions+=1;goto B48325b;
case 0x48325d:goto L48325d;
case 0x483261:c.instructions+=4;goto B483261;
case 0x483265:c.instructions+=3;goto B483265;
case 0x483268:c.instructions+=2;goto B483268;
case 0x48326b:c.instructions+=1;goto B48326b;
case 0x48326e:goto L48326e;
case 0x483271:c.instructions+=7;goto B483271;
case 0x483274:c.instructions+=6;goto B483274;
case 0x48327a:c.instructions+=5;goto B48327a;
case 0x483280:c.instructions+=4;goto B483280;
case 0x483283:c.instructions+=3;goto B483283;
case 0x483286:c.instructions+=2;goto B483286;
case 0x483288:c.instructions+=1;goto B483288;
case 0x48328a:goto L48328a;
case 0x48328d:c.instructions+=2;goto B48328d;
case 0x48328f:c.instructions+=1;goto B48328f;
case 0x483291:goto L483291;
case 0x483294:c.instructions+=1;goto B483294;
case 0x483296:goto L483296;
case 0x483299:c.instructions+=2;goto B483299;
case 0x48329b:c.instructions+=1;goto B48329b;
case 0x48329d:goto L48329d;
case 0x48329f:goto L48329f;
case 0x4832a1:c.instructions+=1;goto B4832a1;
case 0x4832a3:goto L4832a3;
case 0x4832a5:goto L4832a5;
case 0x4832ac:c.instructions+=1;goto B4832ac;
case 0x4832ae:goto L4832ae;
case 0x4832b0:c.instructions+=1;goto B4832b0;
case 0x4832b2:goto L4832b2;
case 0x4832b5:c.instructions+=2;goto B4832b5;
case 0x4832b7:c.instructions+=1;goto B4832b7;
case 0x4832b9:goto L4832b9;
case 0x4832c0:goto L4832c0;
case 0x4832c3:c.instructions+=1;goto B4832c3;
case 0x4832c5:goto L4832c5;
case 0x4832c8:c.instructions+=2;goto B4832c8;
case 0x4832ca:c.instructions+=1;goto B4832ca;
case 0x4832cc:goto L4832cc;
case 0x4832ce:goto L4832ce;
case 0x4832d1:c.instructions+=7;goto B4832d1;
case 0x4832d4:c.instructions+=6;goto B4832d4;
case 0x4832d7:c.instructions+=5;goto B4832d7;
case 0x4832da:c.instructions+=4;goto B4832da;
case 0x4832dd:c.instructions+=3;goto B4832dd;
case 0x4832e0:c.instructions+=2;goto B4832e0;
case 0x4832e3:c.instructions+=1;goto B4832e3;
case 0x4832e9:goto L4832e9;
case 0x4832ed:c.instructions+=3;goto B4832ed;
case 0x4832ee:c.instructions+=2;goto B4832ee;
case 0x4832f0:c.instructions+=1;goto B4832f0;
case 0x4832f5:goto L4832f5;
case 0x4832f7:c.instructions+=2;goto B4832f7;
case 0x4832fe:c.instructions+=1;goto B4832fe;
case 0x483303:goto L483303;
case 0x483306:c.instructions+=8;goto B483306;
case 0x483307:c.instructions+=7;goto B483307;
case 0x48330a:c.instructions+=6;goto B48330a;
case 0x48330d:c.instructions+=5;goto B48330d;
case 0x48330f:c.instructions+=4;goto B48330f;
case 0x483312:c.instructions+=3;goto B483312;
case 0x483313:c.instructions+=2;goto B483313;
case 0x483318:c.instructions+=1;goto B483318;
case 0x48331d:goto L48331d;
case 0x48331f:c.instructions+=2;goto B48331f;
case 0x483321:c.instructions+=1;goto B483321;
case 0x483323:goto L483323;
case 0x483326:c.instructions+=4;goto B483326;
case 0x48332c:c.instructions+=3;goto B48332c;
case 0x48332e:c.instructions+=2;goto B48332e;
case 0x483331:c.instructions+=1;goto B483331;
case 0x483337:goto L483337;
case 0x48333a:c.instructions+=6;goto B48333a;
case 0x48333d:c.instructions+=5;goto B48333d;
case 0x483340:c.instructions+=4;goto B483340;
case 0x483343:c.instructions+=3;goto B483343;
case 0x483345:c.instructions+=2;goto B483345;
case 0x483348:c.instructions+=1;goto B483348;
case 0x48334a:goto L48334a;
case 0x483350:goto L483350;
case 0x483353:c.instructions+=8;goto B483353;
case 0x483354:c.instructions+=7;goto B483354;
case 0x48335b:c.instructions+=6;goto B48335b;
case 0x48335e:c.instructions+=5;goto B48335e;
case 0x483360:c.instructions+=4;goto B483360;
case 0x483363:c.instructions+=3;goto B483363;
case 0x483364:c.instructions+=2;goto B483364;
case 0x483369:c.instructions+=1;goto B483369;
case 0x48336e:goto L48336e;
case 0x483370:c.instructions+=2;goto B483370;
case 0x483372:c.instructions+=1;goto B483372;
case 0x483374:goto L483374;
case 0x483377:c.instructions+=4;goto B483377;
case 0x48337d:c.instructions+=3;goto B48337d;
case 0x48337f:c.instructions+=2;goto B48337f;
case 0x483382:c.instructions+=1;goto B483382;
case 0x483388:goto L483388;
case 0x48338b:c.instructions+=6;goto B48338b;
case 0x48338e:c.instructions+=5;goto B48338e;
case 0x483391:c.instructions+=4;goto B483391;
case 0x483394:c.instructions+=3;goto B483394;
case 0x483396:c.instructions+=2;goto B483396;
case 0x483399:c.instructions+=1;goto B483399;
case 0x48339b:goto L48339b;
case 0x4833a0:goto L4833a0;
case 0x4833a3:c.instructions+=8;goto B4833a3;
case 0x4833a4:c.instructions+=7;goto B4833a4;
case 0x4833ab:c.instructions+=6;goto B4833ab;
case 0x4833ae:c.instructions+=5;goto B4833ae;
case 0x4833b3:c.instructions+=4;goto B4833b3;
case 0x4833b6:c.instructions+=3;goto B4833b6;
case 0x4833b7:c.instructions+=2;goto B4833b7;
case 0x4833bc:c.instructions+=1;goto B4833bc;
case 0x4833c1:goto L4833c1;
case 0x4833c3:c.instructions+=2;goto B4833c3;
case 0x4833c5:c.instructions+=1;goto B4833c5;
case 0x4833c7:goto L4833c7;
case 0x4833ca:c.instructions+=4;goto B4833ca;
case 0x4833d0:c.instructions+=3;goto B4833d0;
case 0x4833d2:c.instructions+=2;goto B4833d2;
case 0x4833d5:c.instructions+=1;goto B4833d5;
case 0x4833d7:goto L4833d7;
case 0x4833da:c.instructions+=6;goto B4833da;
case 0x4833dd:c.instructions+=5;goto B4833dd;
case 0x4833e0:c.instructions+=4;goto B4833e0;
case 0x4833e3:c.instructions+=3;goto B4833e3;
case 0x4833e5:c.instructions+=2;goto B4833e5;
case 0x4833e8:c.instructions+=1;goto B4833e8;
case 0x4833ea:goto L4833ea;
case 0x4833ec:goto L4833ec;
case 0x4833f1:goto L4833f1;
case 0x4833f4:c.instructions+=8;goto B4833f4;
case 0x4833f5:c.instructions+=7;goto B4833f5;
case 0x4833f8:c.instructions+=6;goto B4833f8;
case 0x4833fb:c.instructions+=5;goto B4833fb;
case 0x483400:c.instructions+=4;goto B483400;
case 0x483403:c.instructions+=3;goto B483403;
case 0x483404:c.instructions+=2;goto B483404;
case 0x483409:c.instructions+=1;goto B483409;
case 0x48340e:goto L48340e;
case 0x483410:c.instructions+=2;goto B483410;
case 0x483412:c.instructions+=1;goto B483412;
case 0x483414:goto L483414;
case 0x483417:c.instructions+=4;goto B483417;
case 0x48341d:c.instructions+=3;goto B48341d;
case 0x48341f:c.instructions+=2;goto B48341f;
case 0x483422:c.instructions+=1;goto B483422;
case 0x483424:goto L483424;
case 0x483427:c.instructions+=6;goto B483427;
case 0x48342a:c.instructions+=5;goto B48342a;
case 0x48342d:c.instructions+=4;goto B48342d;
case 0x483430:c.instructions+=3;goto B483430;
case 0x483432:c.instructions+=2;goto B483432;
case 0x483435:c.instructions+=1;goto B483435;
case 0x483437:goto L483437;
case 0x48343a:c.instructions+=2;goto B48343a;
case 0x48343c:c.instructions+=1;goto B48343c;
case 0x48343e:goto L48343e;
case 0x483441:c.instructions+=3;goto B483441;
case 0x483443:c.instructions+=2;goto B483443;
case 0x483447:c.instructions+=1;goto B483447;
case 0x483449:goto L483449;
case 0x48344b:goto L48344b;
case 0x48344e:c.instructions+=1;goto B48344e;
case 0x483450:goto L483450;
case 0x483455:c.instructions+=1;goto B483455;
case 0x483457:goto L483457;
case 0x48345c:c.instructions+=1;goto B48345c;
case 0x48345e:goto L48345e;
case 0x483460:c.instructions+=1;goto B483460;
case 0x483462:goto L483462;
case 0x483465:c.instructions+=2;goto B483465;
case 0x483467:c.instructions+=1;goto B483467;
case 0x483469:goto L483469;
case 0x48346f:c.instructions+=3;goto B48346f;
case 0x483471:c.instructions+=2;goto B483471;
case 0x483475:c.instructions+=1;goto B483475;
case 0x483477:goto L483477;
case 0x48347d:c.instructions+=3;goto B48347d;
case 0x483484:c.instructions+=2;goto B483484;
case 0x483487:c.instructions+=1;goto B483487;
case 0x483489:goto L483489;
case 0x48348e:goto L48348e;
case 0x483490:c.instructions+=3;goto B483490;
case 0x483492:c.instructions+=2;goto B483492;
case 0x483493:c.instructions+=1;goto B483493;
case 0x483498:goto L483498;
case 0x483499:c.instructions+=2;goto B483499;
case 0x48349b:c.instructions+=1;goto B48349b;
case 0x4834a0:goto L4834a0;
case 0x4834a1:c.instructions+=2;goto B4834a1;
case 0x4834a3:c.instructions+=1;goto B4834a3;
case 0x4834a8:goto L4834a8;
case 0x4834ab:c.instructions+=6;goto B4834ab;
case 0x4834ac:c.instructions+=5;goto B4834ac;
case 0x4834af:c.instructions+=4;goto B4834af;
case 0x4834b0:c.instructions+=3;goto B4834b0;
case 0x4834b1:c.instructions+=2;goto B4834b1;
case 0x4834b2:c.instructions+=1;goto B4834b2;
case 0x4834c0:goto L4834c0;
case 0x4834c1:c.instructions+=2;goto B4834c1;
case 0x4834c3:c.instructions+=1;goto B4834c3;
case 0x4834c8:goto L4834c8;
case 0x4834cd:c.instructions+=1;goto B4834cd;
case 0x4834cf:goto L4834cf;
case 0x4834d0:c.instructions+=1;goto B4834d0;
case 0x4834d5:goto L4834d5;
case 0x4834d8:goto L4834d8;
case 0x4834da:c.instructions+=2;goto B4834da;
case 0x4834db:c.instructions+=1;goto B4834db;
case 0x4834e0:goto L4834e0;
case 0x4834e1:c.instructions+=2;goto B4834e1;
case 0x4834e3:c.instructions+=1;goto B4834e3;
case 0x4834e8:goto L4834e8;
case 0x4834ed:c.instructions+=1;goto B4834ed;
case 0x4834ef:goto L4834ef;
case 0x4834f0:c.instructions+=1;goto B4834f0;
case 0x4834f5:goto L4834f5;
case 0x4834f8:goto L4834f8;
case 0x4834fa:c.instructions+=2;goto B4834fa;
case 0x4834fb:c.instructions+=1;goto B4834fb;
case 0x483500:goto L483500;
case 0x483501:c.instructions+=2;goto B483501;
case 0x483503:c.instructions+=1;goto B483503;
case 0x483508:goto L483508;
case 0x48350d:c.instructions+=1;goto B48350d;
case 0x48350f:goto L48350f;
case 0x483510:c.instructions+=1;goto B483510;
case 0x483515:goto L483515;
case 0x483518:goto L483518;
case 0x48351a:c.instructions+=2;goto B48351a;
case 0x48351b:c.instructions+=1;goto B48351b;
case 0x483520:goto L483520;
case 0x483521:c.instructions+=2;goto B483521;
case 0x483523:c.instructions+=1;goto B483523;
case 0x483528:goto L483528;
case 0x48352d:c.instructions+=1;goto B48352d;
case 0x48352f:goto L48352f;
case 0x483530:c.instructions+=1;goto B483530;
case 0x483535:goto L483535;
case 0x483538:goto L483538;
case 0x48353a:c.instructions+=2;goto B48353a;
case 0x48353b:c.instructions+=1;goto B48353b;
case 0x483540:goto L483540;
case 0x483541:c.instructions+=2;goto B483541;
case 0x483543:c.instructions+=1;goto B483543;
case 0x483548:goto L483548;
case 0x48354d:c.instructions+=1;goto B48354d;
case 0x48354f:goto L48354f;
case 0x483550:c.instructions+=1;goto B483550;
case 0x483555:goto L483555;
case 0x483558:goto L483558;
case 0x48355a:c.instructions+=2;goto B48355a;
case 0x48355b:c.instructions+=1;goto B48355b;
case 0x483560:goto L483560;
case 0x483561:c.instructions+=2;goto B483561;
case 0x483563:c.instructions+=1;goto B483563;
case 0x483568:goto L483568;
case 0x48356d:c.instructions+=1;goto B48356d;
case 0x48356f:goto L48356f;
case 0x483570:c.instructions+=1;goto B483570;
case 0x483575:goto L483575;
case 0x483578:goto L483578;
case 0x48357a:c.instructions+=2;goto B48357a;
case 0x48357b:c.instructions+=1;goto B48357b;
case 0x483580:goto L483580;
case 0x483581:c.instructions+=2;goto B483581;
case 0x483583:c.instructions+=1;goto B483583;
case 0x483588:goto L483588;
case 0x48358d:c.instructions+=1;goto B48358d;
case 0x48358f:goto L48358f;
case 0x483590:c.instructions+=1;goto B483590;
case 0x483595:goto L483595;
case 0x483598:goto L483598;
case 0x48359a:c.instructions+=2;goto B48359a;
case 0x48359b:c.instructions+=1;goto B48359b;
case 0x4835a0:goto L4835a0;
case 0x4835a1:c.instructions+=2;goto B4835a1;
case 0x4835a3:c.instructions+=1;goto B4835a3;
case 0x4835a8:goto L4835a8;
case 0x4835ad:c.instructions+=1;goto B4835ad;
case 0x4835af:goto L4835af;
case 0x4835b0:c.instructions+=1;goto B4835b0;
case 0x4835b5:goto L4835b5;
case 0x4835b8:goto L4835b8;
case 0x4835ba:c.instructions+=2;goto B4835ba;
case 0x4835bb:c.instructions+=1;goto B4835bb;
case 0x4835c0:goto L4835c0;
case 0x4835c1:c.instructions+=4;goto B4835c1;
case 0x4835c3:c.instructions+=3;goto B4835c3;
case 0x4835c5:c.instructions+=2;goto B4835c5;
case 0x4835c7:c.instructions+=1;goto B4835c7;
case 0x4835c9:goto L4835c9;
case 0x4835d0:goto L4835d0;
case 0x4835d2:c.instructions+=5;goto B4835d2;
case 0x4835d5:c.instructions+=4;goto B4835d5;
case 0x4835d7:c.instructions+=3;goto B4835d7;
case 0x4835d8:c.instructions+=2;goto B4835d8;
case 0x4835db:c.instructions+=1;goto B4835db;
case 0x4835e0:goto L4835e0;
case 0x4835e2:c.instructions+=3;goto B4835e2;
case 0x4835e5:c.instructions+=2;goto B4835e5;
case 0x4835e7:c.instructions+=1;goto B4835e7;
case 0x4835e9:goto L4835e9;
case 0x4835ea:c.instructions+=1;goto B4835ea;
case 0x4835f0:goto L4835f0;
case 0x4835f5:c.instructions+=2;goto B4835f5;
case 0x4835fa:c.instructions+=1;goto B4835fa;
case 0x4835fc:goto L4835fc;
case 0x483600:goto L483600;
case 0x483602:c.instructions+=6;goto B483602;
case 0x483604:c.instructions+=5;goto B483604;
case 0x483607:c.instructions+=4;goto B483607;
case 0x483609:c.instructions+=3;goto B483609;
case 0x48360a:c.instructions+=2;goto B48360a;
case 0x48360d:c.instructions+=1;goto B48360d;
case 0x483612:goto L483612;
case 0x483617:c.instructions+=3;goto B483617;
case 0x48361a:c.instructions+=2;goto B48361a;
case 0x48361f:c.instructions+=1;goto B48361f;
case 0x483621:goto L483621;
case 0x483626:c.instructions+=2;goto B483626;
case 0x48362b:c.instructions+=1;goto B48362b;
case 0x48362d:goto L48362d;
case 0x483630:goto L483630;
case 0x483632:c.instructions+=6;goto B483632;
case 0x483634:c.instructions+=5;goto B483634;
case 0x483637:c.instructions+=4;goto B483637;
case 0x483639:c.instructions+=3;goto B483639;
case 0x48363a:c.instructions+=2;goto B48363a;
case 0x48363d:c.instructions+=1;goto B48363d;
case 0x483642:goto L483642;
case 0x483647:c.instructions+=3;goto B483647;
case 0x48364a:c.instructions+=2;goto B48364a;
case 0x48364f:c.instructions+=1;goto B48364f;
case 0x483651:goto L483651;
case 0x483656:c.instructions+=2;goto B483656;
case 0x48365b:c.instructions+=1;goto B48365b;
case 0x48365d:goto L48365d;
case 0x483660:goto L483660;
case 0x483662:c.instructions+=6;goto B483662;
case 0x483664:c.instructions+=5;goto B483664;
case 0x483667:c.instructions+=4;goto B483667;
case 0x483669:c.instructions+=3;goto B483669;
case 0x48366a:c.instructions+=2;goto B48366a;
case 0x48366d:c.instructions+=1;goto B48366d;
case 0x483672:goto L483672;
case 0x483677:c.instructions+=3;goto B483677;
case 0x48367a:c.instructions+=2;goto B48367a;
case 0x48367f:c.instructions+=1;goto B48367f;
case 0x483681:goto L483681;
case 0x483690:goto L483690;
case 0x483691:c.instructions+=3;goto B483691;
case 0x483693:c.instructions+=2;goto B483693;
case 0x483695:c.instructions+=1;goto B483695;
case 0x48369a:goto L48369a;
case 0x48369c:c.instructions+=4;goto B48369c;
case 0x48369e:c.instructions+=3;goto B48369e;
case 0x4836a0:c.instructions+=2;goto B4836a0;
case 0x4836a2:c.instructions+=1;goto B4836a2;
case 0x4836a5:goto L4836a5;
case 0x4836a7:c.instructions+=2;goto B4836a7;
case 0x4836a9:c.instructions+=1;goto B4836a9;
case 0x4836ae:goto L4836ae;
case 0x4836af:c.instructions+=1;goto B4836af;
case 0x4836c0:goto L4836c0;
case 0x4836c5:c.instructions+=2;goto B4836c5;
case 0x4836c6:c.instructions+=1;goto B4836c6;
case 0x4836cb:goto L4836cb;
case 0x4836ce:c.instructions+=2;goto B4836ce;
case 0x4836d3:c.instructions+=1;goto B4836d3;
case 0x4836d5:goto L4836d5;
case 0x4836db:c.instructions+=5;goto B4836db;
case 0x4836de:c.instructions+=4;goto B4836de;
case 0x4836e4:c.instructions+=3;goto B4836e4;
case 0x4836e5:c.instructions+=2;goto B4836e5;
case 0x4836e7:c.instructions+=1;goto B4836e7;
case 0x4836ec:goto L4836ec;
case 0x4836ef:c.instructions+=2;goto B4836ef;
case 0x4836f1:c.instructions+=1;goto B4836f1;
case 0x4836f3:goto L4836f3;
case 0x4836f5:c.instructions+=1;goto B4836f5;
case 0x4836fa:goto L4836fa;
case 0x4836fc:c.instructions+=1;goto B4836fc;
case 0x483700:goto L483700;
case 0x483705:c.instructions+=2;goto B483705;
case 0x483706:c.instructions+=1;goto B483706;
case 0x48370b:goto L48370b;
case 0x48370e:c.instructions+=2;goto B48370e;
case 0x483713:c.instructions+=1;goto B483713;
case 0x483715:goto L483715;
case 0x48371b:c.instructions+=5;goto B48371b;
case 0x48371e:c.instructions+=4;goto B48371e;
case 0x483724:c.instructions+=3;goto B483724;
case 0x483725:c.instructions+=2;goto B483725;
case 0x483727:c.instructions+=1;goto B483727;
case 0x48372c:goto L48372c;
case 0x48372f:c.instructions+=2;goto B48372f;
case 0x483731:c.instructions+=1;goto B483731;
case 0x483733:goto L483733;
case 0x483735:c.instructions+=1;goto B483735;
case 0x48373a:goto L48373a;
case 0x48373c:c.instructions+=1;goto B48373c;
case 0x483740:goto L483740;
case 0x483744:c.instructions+=4;goto B483744;
case 0x483745:c.instructions+=3;goto B483745;
case 0x483747:c.instructions+=2;goto B483747;
case 0x48374a:c.instructions+=1;goto B48374a;
case 0x48374f:goto L48374f;
case 0x483751:c.instructions+=1;goto B483751;
case 0x483756:goto L483756;
case 0x483757:c.instructions+=1;goto B483757;
case 0x483760:goto L483760;
case 0x483764:c.instructions+=2;goto B483764;
case 0x483766:c.instructions+=1;goto B483766;
case 0x483768:goto L483768;
case 0x483769:c.instructions+=3;goto B483769;
case 0x48376b:c.instructions+=2;goto B48376b;
case 0x483771:c.instructions+=1;goto B483771;
case 0x483773:goto L483773;
case 0x483774:c.instructions+=1;goto B483774;
case 0x483779:goto L483779;
case 0x48377c:c.instructions+=3;goto B48377c;
case 0x48377f:c.instructions+=2;goto B48377f;
case 0x483782:c.instructions+=1;goto B483782;
case 0x483784:goto L483784;
case 0x483789:goto L483789;
case 0x48378b:c.instructions+=1;goto B48378b;
case 0x483790:goto L483790;
case 0x483793:c.instructions+=3;goto B483793;
case 0x483796:c.instructions+=2;goto B483796;
case 0x483799:c.instructions+=1;goto B483799;
case 0x48379b:goto L48379b;
case 0x48379e:c.instructions+=2;goto B48379e;
case 0x4837a4:c.instructions+=1;goto B4837a4;
case 0x4837a9:goto L4837a9;
case 0x4837af:c.instructions+=2;goto B4837af;
case 0x4837b1:c.instructions+=1;goto B4837b1;
case 0x4837b3:goto L4837b3;
case 0x4837b5:c.instructions+=2;goto B4837b5;
case 0x4837b6:c.instructions+=1;goto B4837b6;
case 0x4837bb:goto L4837bb;
case 0x4837be:goto L4837be;
case 0x4837bf:goto L4837bf;
case 0x4837c0:goto L4837c0;
case 0x4837c1:c.instructions+=8;goto B4837c1;
case 0x4837c5:c.instructions+=7;goto B4837c5;
case 0x4837c6:c.instructions+=6;goto B4837c6;
case 0x4837c7:c.instructions+=5;goto B4837c7;
case 0x4837c9:c.instructions+=4;goto B4837c9;
case 0x4837cc:c.instructions+=3;goto B4837cc;
case 0x4837ce:c.instructions+=2;goto B4837ce;
case 0x4837cf:c.instructions+=1;goto B4837cf;
case 0x4837d5:goto L4837d5;
case 0x4837da:c.instructions+=5;goto B4837da;
case 0x4837de:c.instructions+=4;goto B4837de;
case 0x4837df:c.instructions+=3;goto B4837df;
case 0x4837e2:c.instructions+=2;goto B4837e2;
case 0x4837e4:c.instructions+=1;goto B4837e4;
case 0x4837e9:goto L4837e9;
case 0x4837ef:c.instructions+=3;goto B4837ef;
case 0x4837f2:c.instructions+=2;goto B4837f2;
case 0x4837f4:c.instructions+=1;goto B4837f4;
case 0x4837f6:goto L4837f6;
case 0x4837fc:c.instructions+=5;goto B4837fc;
case 0x4837ff:c.instructions+=4;goto B4837ff;
case 0x483805:c.instructions+=3;goto B483805;
case 0x483806:c.instructions+=2;goto B483806;
case 0x483807:c.instructions+=1;goto B483807;
case 0x48380c:goto L48380c;
case 0x48380f:c.instructions+=1;goto B48380f;
case 0x483811:goto L483811;
case 0x483814:c.instructions+=3;goto B483814;
case 0x483819:c.instructions+=2;goto B483819;
case 0x48381a:c.instructions+=1;goto B48381a;
case 0x48381f:goto L48381f;
case 0x483822:c.instructions+=2;goto B483822;
case 0x483824:c.instructions+=1;goto B483824;
case 0x483826:goto L483826;
case 0x48382c:c.instructions+=2;goto B48382c;
case 0x48382e:c.instructions+=1;goto B48382e;
case 0x483830:goto L483830;
case 0x483832:goto L483832;
case 0x483836:c.instructions+=12;goto B483836;
case 0x483839:c.instructions+=11;goto B483839;
case 0x48383d:c.instructions+=10;goto B48383d;
case 0x483844:c.instructions+=9;goto B483844;
case 0x483845:c.instructions+=8;goto B483845;
case 0x483848:c.instructions+=7;goto B483848;
case 0x48384b:c.instructions+=6;goto B48384b;
case 0x48384e:c.instructions+=5;goto B48384e;
case 0x483850:c.instructions+=4;goto B483850;
case 0x483851:c.instructions+=3;goto B483851;
case 0x483852:c.instructions+=2;goto B483852;
case 0x483853:c.instructions+=1;goto B483853;
case 0x483856:goto L483856;
case 0x48385e:c.instructions+=1;goto B48385e;
case 0x483860:goto L483860;
case 0x483864:c.instructions+=3;goto B483864;
case 0x48386b:c.instructions+=2;goto B48386b;
case 0x48386f:c.instructions+=1;goto B48386f;
case 0x483871:goto L483871;
case 0x483876:c.instructions+=2;goto B483876;
case 0x483877:c.instructions+=1;goto B483877;
case 0x48387c:goto L48387c;
case 0x48387f:c.instructions+=2;goto B48387f;
case 0x483881:c.instructions+=1;goto B483881;
case 0x483883:goto L483883;
case 0x483889:c.instructions+=1;goto B483889;
case 0x48388b:goto L48388b;
case 0x48388d:goto L48388d;
case 0x483890:c.instructions+=10;goto B483890;
case 0x483893:c.instructions+=9;goto B483893;
case 0x483896:c.instructions+=8;goto B483896;
case 0x483899:c.instructions+=7;goto B483899;
case 0x48389d:c.instructions+=6;goto B48389d;
case 0x48389f:c.instructions+=5;goto B48389f;
case 0x4838a0:c.instructions+=4;goto B4838a0;
case 0x4838a1:c.instructions+=3;goto B4838a1;
case 0x4838a2:c.instructions+=2;goto B4838a2;
case 0x4838a3:c.instructions+=1;goto B4838a3;
case 0x4838a6:goto L4838a6;
case 0x4838a9:c.instructions+=3;goto B4838a9;
case 0x4838ac:c.instructions+=2;goto B4838ac;
case 0x4838ad:c.instructions+=1;goto B4838ad;
case 0x4838b2:goto L4838b2;
case 0x4838b5:c.instructions+=11;goto B4838b5;
case 0x4838b8:c.instructions+=10;goto B4838b8;
case 0x4838bb:c.instructions+=9;goto B4838bb;
case 0x4838be:c.instructions+=8;goto B4838be;
case 0x4838c1:c.instructions+=7;goto B4838c1;
case 0x4838c4:c.instructions+=6;goto B4838c4;
case 0x4838c6:c.instructions+=5;goto B4838c6;
case 0x4838c9:c.instructions+=4;goto B4838c9;
case 0x4838cb:c.instructions+=3;goto B4838cb;
case 0x4838cd:c.instructions+=2;goto B4838cd;
case 0x4838d0:c.instructions+=1;goto B4838d0;
case 0x4838d5:goto L4838d5;
case 0x4838d7:c.instructions+=1;goto B4838d7;
case 0x4838dc:goto L4838dc;
case 0x4838de:c.instructions+=1;goto B4838de;
case 0x4838e3:goto L4838e3;
case 0x4838e5:c.instructions+=1;goto B4838e5;
case 0x4838ea:goto L4838ea;
case 0x4838ec:c.instructions+=1;goto B4838ec;
case 0x4838f1:goto L4838f1;
case 0x4838f5:c.instructions+=5;goto B4838f5;
case 0x4838f6:c.instructions+=4;goto B4838f6;
case 0x4838f7:c.instructions+=3;goto B4838f7;
case 0x4838f8:c.instructions+=2;goto B4838f8;
case 0x4838f9:c.instructions+=1;goto B4838f9;
case 0x483900:goto L483900;
case 0x483901:c.instructions+=7;goto B483901;
case 0x483903:c.instructions+=6;goto B483903;
case 0x483906:c.instructions+=5;goto B483906;
case 0x483909:c.instructions+=4;goto B483909;
case 0x48390a:c.instructions+=3;goto B48390a;
case 0x48390c:c.instructions+=2;goto B48390c;
case 0x48390e:c.instructions+=1;goto B48390e;
case 0x483910:goto L483910;
case 0x483913:c.instructions+=1;goto B483913;
case 0x483914:goto L483914;
case 0x483917:c.instructions+=2;goto B483917;
case 0x483919:c.instructions+=1;goto B483919;
case 0x48391b:goto L48391b;
case 0x48391e:c.instructions+=3;goto B48391e;
case 0x483920:c.instructions+=2;goto B483920;
case 0x483922:c.instructions+=1;goto B483922;
case 0x483924:goto L483924;
case 0x483927:c.instructions+=2;goto B483927;
case 0x48392a:c.instructions+=1;goto B48392a;
case 0x48392f:goto L48392f;
case 0x483932:c.instructions+=4;goto B483932;
case 0x483935:c.instructions+=3;goto B483935;
case 0x483938:c.instructions+=2;goto B483938;
case 0x48393b:c.instructions+=1;goto B48393b;
case 0x483940:goto L483940;
case 0x483943:c.instructions+=5;goto B483943;
case 0x483946:c.instructions+=4;goto B483946;
case 0x483949:c.instructions+=3;goto B483949;
case 0x48394a:c.instructions+=2;goto B48394a;
case 0x48394c:c.instructions+=1;goto B48394c;
case 0x48394e:goto L48394e;
case 0x483951:c.instructions+=4;goto B483951;
case 0x483954:c.instructions+=3;goto B483954;
case 0x483955:c.instructions+=2;goto B483955;
case 0x483957:c.instructions+=1;goto B483957;
case 0x483959:goto L483959;
case 0x48395a:goto L48395a;
case 0x48395b:c.instructions+=2;goto B48395b;
case 0x48395c:c.instructions+=1;goto B48395c;
case 0x483960:goto L483960;
case 0x483961:c.instructions+=11;goto B483961;
case 0x483962:c.instructions+=10;goto B483962;
case 0x483963:c.instructions+=9;goto B483963;
case 0x483965:c.instructions+=8;goto B483965;
case 0x483968:c.instructions+=7;goto B483968;
case 0x48396c:c.instructions+=6;goto B48396c;
case 0x48396d:c.instructions+=5;goto B48396d;
case 0x483970:c.instructions+=4;goto B483970;
case 0x483973:c.instructions+=3;goto B483973;
case 0x483975:c.instructions+=2;goto B483975;
case 0x483977:c.instructions+=1;goto B483977;
case 0x483979:goto L483979;
case 0x48397a:c.instructions+=1;goto B48397a;
case 0x483980:goto L483980;
case 0x483983:c.instructions+=4;goto B483983;
case 0x483986:c.instructions+=3;goto B483986;
case 0x483988:c.instructions+=2;goto B483988;
case 0x48398a:c.instructions+=1;goto B48398a;
case 0x48398d:goto L48398d;
case 0x48398f:c.instructions+=4;goto B48398f;
case 0x483993:c.instructions+=3;goto B483993;
case 0x483994:c.instructions+=2;goto B483994;
case 0x483996:c.instructions+=1;goto B483996;
case 0x48399b:goto L48399b;
case 0x48399c:c.instructions+=3;goto B48399c;
case 0x4839a0:c.instructions+=2;goto B4839a0;
case 0x4839a2:c.instructions+=1;goto B4839a2;
case 0x4839a5:goto L4839a5;
case 0x4839a8:c.instructions+=6;goto B4839a8;
case 0x4839ac:c.instructions+=5;goto B4839ac;
case 0x4839af:c.instructions+=4;goto B4839af;
case 0x4839b2:c.instructions+=3;goto B4839b2;
case 0x4839b3:c.instructions+=2;goto B4839b3;
case 0x4839b5:c.instructions+=1;goto B4839b5;
case 0x4839b7:goto L4839b7;
case 0x4839b8:goto L4839b8;
case 0x4839b9:c.instructions+=4;goto B4839b9;
case 0x4839ba:c.instructions+=3;goto B4839ba;
case 0x4839bb:c.instructions+=2;goto B4839bb;
case 0x4839bc:c.instructions+=1;goto B4839bc;
case 0x4839c0:goto L4839c0;
case 0x4839c5:c.instructions+=7;goto B4839c5;
case 0x4839c6:c.instructions+=6;goto B4839c6;
case 0x4839c7:c.instructions+=5;goto B4839c7;
case 0x4839c8:c.instructions+=4;goto B4839c8;
case 0x4839ca:c.instructions+=3;goto B4839ca;
case 0x4839cd:c.instructions+=2;goto B4839cd;
case 0x4839cf:c.instructions+=1;goto B4839cf;
case 0x4839d1:goto L4839d1;
case 0x4839d6:goto L4839d6;
case 0x4839d8:goto L4839d8;
case 0x4839db:c.instructions+=1;goto B4839db;
case 0x4839dd:goto L4839dd;
case 0x4839df:c.instructions+=1;goto B4839df;
case 0x4839e4:goto L4839e4;
case 0x4839ea:c.instructions+=1;goto B4839ea;
case 0x4839f0:goto L4839f0;
case 0x4839f6:c.instructions+=2;goto B4839f6;
case 0x4839f8:c.instructions+=1;goto B4839f8;
case 0x4839fa:goto L4839fa;
case 0x4839ff:goto L4839ff;
case 0x483a02:c.instructions+=2;goto B483a02;
case 0x483a04:c.instructions+=1;goto B483a04;
case 0x483a06:goto L483a06;
case 0x483a07:c.instructions+=1;goto B483a07;
case 0x483a0c:goto L483a0c;
case 0x483a0f:c.instructions+=1;goto B483a0f;
case 0x483a12:goto L483a12;
case 0x483a15:c.instructions+=2;goto B483a15;
case 0x483a17:c.instructions+=1;goto B483a17;
case 0x483a19:goto L483a19;
case 0x483a1a:c.instructions+=1;goto B483a1a;
case 0x483a1f:goto L483a1f;
case 0x483a22:c.instructions+=1;goto B483a22;
case 0x483a25:goto L483a25;
case 0x483a28:c.instructions+=2;goto B483a28;
case 0x483a2a:c.instructions+=1;goto B483a2a;
case 0x483a2c:goto L483a2c;
case 0x483a2e:c.instructions+=2;goto B483a2e;
case 0x483a30:c.instructions+=1;goto B483a30;
case 0x483a32:goto L483a32;
case 0x483a35:goto L483a35;
case 0x483a38:c.instructions+=2;goto B483a38;
case 0x483a3a:c.instructions+=1;goto B483a3a;
case 0x483a3c:goto L483a3c;
case 0x483a3e:c.instructions+=2;goto B483a3e;
case 0x483a40:c.instructions+=1;goto B483a40;
case 0x483a42:goto L483a42;
case 0x483a45:goto L483a45;
case 0x483a4b:c.instructions+=2;goto B483a4b;
case 0x483a4d:c.instructions+=1;goto B483a4d;
case 0x483a4f:goto L483a4f;
case 0x483a54:goto L483a54;
case 0x483a5a:c.instructions+=2;goto B483a5a;
case 0x483a5c:c.instructions+=1;goto B483a5c;
case 0x483a5e:goto L483a5e;
case 0x483a60:c.instructions+=2;goto B483a60;
case 0x483a62:c.instructions+=1;goto B483a62;
case 0x483a64:goto L483a64;
case 0x483a6a:goto L483a6a;
case 0x483a6d:c.instructions+=2;goto B483a6d;
case 0x483a6f:c.instructions+=1;goto B483a6f;
case 0x483a71:goto L483a71;
case 0x483a73:c.instructions+=1;goto B483a73;
case 0x483a76:goto L483a76;
case 0x483a79:c.instructions+=2;goto B483a79;
case 0x483a7b:c.instructions+=1;goto B483a7b;
case 0x483a7d:goto L483a7d;
case 0x483a7f:c.instructions+=2;goto B483a7f;
case 0x483a81:c.instructions+=1;goto B483a81;
case 0x483a83:goto L483a83;
case 0x483a86:goto L483a86;
case 0x483a8c:c.instructions+=2;goto B483a8c;
case 0x483a8e:c.instructions+=1;goto B483a8e;
case 0x483a90:goto L483a90;
case 0x483a92:c.instructions+=2;goto B483a92;
case 0x483a94:c.instructions+=1;goto B483a94;
case 0x483a96:goto L483a96;
case 0x483a9c:goto L483a9c;
case 0x483aa2:c.instructions+=2;goto B483aa2;
case 0x483aa4:c.instructions+=1;goto B483aa4;
case 0x483aa6:goto L483aa6;
case 0x483aa8:c.instructions+=2;goto B483aa8;
case 0x483aaa:c.instructions+=1;goto B483aaa;
case 0x483aac:goto L483aac;
case 0x483ab2:goto L483ab2;
case 0x483ab5:c.instructions+=2;goto B483ab5;
case 0x483ab7:c.instructions+=1;goto B483ab7;
case 0x483ab9:goto L483ab9;
case 0x483abb:c.instructions+=2;goto B483abb;
case 0x483abd:c.instructions+=1;goto B483abd;
case 0x483abf:goto L483abf;
case 0x483ac2:goto L483ac2;
case 0x483ac8:c.instructions+=2;goto B483ac8;
case 0x483aca:c.instructions+=1;goto B483aca;
case 0x483acc:goto L483acc;
case 0x483ace:c.instructions+=2;goto B483ace;
case 0x483ad0:c.instructions+=1;goto B483ad0;
case 0x483ad2:goto L483ad2;
case 0x483ad8:goto L483ad8;
case 0x483adb:c.instructions+=2;goto B483adb;
case 0x483add:c.instructions+=1;goto B483add;
case 0x483adf:goto L483adf;
case 0x483ae0:c.instructions+=1;goto B483ae0;
case 0x483ae5:goto L483ae5;
case 0x483ae8:c.instructions+=1;goto B483ae8;
case 0x483aeb:goto L483aeb;
case 0x483af1:c.instructions+=2;goto B483af1;
case 0x483af3:c.instructions+=1;goto B483af3;
case 0x483af5:goto L483af5;
case 0x483afa:goto L483afa;
case 0x483afd:c.instructions+=2;goto B483afd;
case 0x483aff:c.instructions+=1;goto B483aff;
case 0x483b01:goto L483b01;
case 0x483b02:c.instructions+=1;goto B483b02;
case 0x483b07:goto L483b07;
case 0x483b0a:c.instructions+=1;goto B483b0a;
case 0x483b0d:goto L483b0d;
case 0x483b10:c.instructions+=2;goto B483b10;
case 0x483b12:c.instructions+=1;goto B483b12;
case 0x483b14:goto L483b14;
case 0x483b15:c.instructions+=1;goto B483b15;
case 0x483b1a:goto L483b1a;
case 0x483b1d:c.instructions+=1;goto B483b1d;
case 0x483b20:goto L483b20;
case 0x483b26:c.instructions+=2;goto B483b26;
case 0x483b28:c.instructions+=1;goto B483b28;
case 0x483b2a:goto L483b2a;
case 0x483b2c:c.instructions+=2;goto B483b2c;
case 0x483b2e:c.instructions+=1;goto B483b2e;
case 0x483b30:goto L483b30;
case 0x483b36:goto L483b36;
case 0x483b37:c.instructions+=3;goto B483b37;
case 0x483b38:c.instructions+=2;goto B483b38;
case 0x483b39:c.instructions+=1;goto B483b39;
case 0x483b40:goto L483b40;
case 0x483b41:c.instructions+=5;goto B483b41;
case 0x483b46:c.instructions+=4;goto B483b46;
case 0x483b48:c.instructions+=3;goto B483b48;
case 0x483b49:c.instructions+=2;goto B483b49;
case 0x483b4b:c.instructions+=1;goto B483b4b;
case 0x483b51:goto L483b51;
case 0x483b56:c.instructions+=3;goto B483b56;
case 0x483b58:c.instructions+=2;goto B483b58;
case 0x483b59:c.instructions+=1;goto B483b59;
case 0x483b5b:goto L483b5b;
case 0x483b61:c.instructions+=2;goto B483b61;
case 0x483b63:c.instructions+=1;goto B483b63;
case 0x483b69:goto L483b69;
case 0x483b6f:c.instructions+=2;goto B483b6f;
case 0x483b72:c.instructions+=1;goto B483b72;
case 0x483b78:goto L483b78;
case 0x483b7e:c.instructions+=4;goto B483b7e;
case 0x483b88:c.instructions+=3;goto B483b88;
case 0x483b8d:c.instructions+=2;goto B483b8d;
case 0x483b8f:c.instructions+=1;goto B483b8f;
case 0x483b95:goto L483b95;
case 0x483b9b:c.instructions+=2;goto B483b9b;
case 0x483b9d:c.instructions+=1;goto B483b9d;
case 0x483ba3:goto L483ba3;
case 0x483ba9:c.instructions+=3;goto B483ba9;
case 0x483bab:c.instructions+=2;goto B483bab;
case 0x483bac:c.instructions+=1;goto B483bac;
case 0x483bb1:goto L483bb1;
case 0x483bb4:c.instructions+=5;goto B483bb4;
case 0x483bbb:c.instructions+=4;goto B483bbb;
case 0x483bbc:c.instructions+=3;goto B483bbc;
case 0x483bbd:c.instructions+=2;goto B483bbd;
case 0x483bbe:c.instructions+=1;goto B483bbe;
case 0x483bc1:goto L483bc1;
case 0x483bc4:c.instructions+=1;goto B483bc4;
case 0x483bc9:goto L483bc9;
case 0x483bcf:c.instructions+=2;goto B483bcf;
case 0x483bd0:c.instructions+=1;goto B483bd0;
case 0x483bd5:goto L483bd5;
case 0x483bdb:c.instructions+=4;goto B483bdb;
case 0x483bde:c.instructions+=3;goto B483bde;
case 0x483be0:c.instructions+=2;goto B483be0;
case 0x483be3:c.instructions+=1;goto B483be3;
case 0x483be9:goto L483be9;
case 0x483bee:goto L483bee;
case 0x483bf4:c.instructions+=4;goto B483bf4;
case 0x483bf9:c.instructions+=3;goto B483bf9;
case 0x483bfb:c.instructions+=2;goto B483bfb;
case 0x483c00:c.instructions+=1;goto B483c00;
case 0x483c02:goto L483c02;
case 0x483c04:c.instructions+=1;goto B483c04;
case 0x483c06:goto L483c06;
case 0x483c0d:c.instructions+=1;goto B483c0d;
case 0x483c12:goto L483c12;
case 0x483c18:c.instructions+=3;goto B483c18;
case 0x483c19:c.instructions+=2;goto B483c19;
case 0x483c1a:c.instructions+=1;goto B483c1a;
case 0x483c1f:goto L483c1f;
case 0x483c21:c.instructions+=2;goto B483c21;
case 0x483c24:c.instructions+=1;goto B483c24;
case 0x483c29:goto L483c29;
case 0x483c2b:goto L483c2b;
case 0x483c2d:c.instructions+=1;goto B483c2d;
case 0x483c2f:goto L483c2f;
case 0x483c34:goto L483c34;
case 0x483c35:c.instructions+=3;goto B483c35;
case 0x483c3a:c.instructions+=2;goto B483c3a;
case 0x483c3b:c.instructions+=1;goto B483c3b;
case 0x483c40:goto L483c40;
case 0x483c42:c.instructions+=2;goto B483c42;
case 0x483c45:c.instructions+=1;goto B483c45;
case 0x483c4a:goto L483c4a;
case 0x483c51:goto L483c51;
case 0x483c56:goto L483c56;
case 0x483c5d:c.instructions+=2;goto B483c5d;
case 0x483c62:c.instructions+=1;goto B483c62;
case 0x483c64:goto L483c64;
case 0x483c66:c.instructions+=1;goto B483c66;
case 0x483c68:goto L483c68;
case 0x483c6f:c.instructions+=1;goto B483c6f;
case 0x483c74:goto L483c74;
case 0x483c79:c.instructions+=1;goto B483c79;
case 0x483c7b:goto L483c7b;
case 0x483c7d:c.instructions+=1;goto B483c7d;
case 0x483c7f:goto L483c7f;
case 0x483c84:goto L483c84;
case 0x483c8a:c.instructions+=3;goto B483c8a;
case 0x483c8b:c.instructions+=2;goto B483c8b;
case 0x483c8c:c.instructions+=1;goto B483c8c;
case 0x483c91:goto L483c91;
case 0x483c93:c.instructions+=2;goto B483c93;
case 0x483c96:c.instructions+=1;goto B483c96;
case 0x483c9d:goto L483c9d;
case 0x483ca4:c.instructions+=4;goto B483ca4;
case 0x483ca7:c.instructions+=3;goto B483ca7;
case 0x483cad:c.instructions+=2;goto B483cad;
case 0x483cb3:c.instructions+=1;goto B483cb3;
case 0x483cb8:goto L483cb8;
case 0x483cbe:c.instructions+=2;goto B483cbe;
case 0x483cc0:c.instructions+=1;goto B483cc0;
case 0x483cc2:goto L483cc2;
case 0x483cc7:goto L483cc7;
case 0x483cca:c.instructions+=2;goto B483cca;
case 0x483ccc:c.instructions+=1;goto B483ccc;
case 0x483cce:goto L483cce;
case 0x483cd0:c.instructions+=2;goto B483cd0;
case 0x483cd2:c.instructions+=1;goto B483cd2;
case 0x483cd5:goto L483cd5;
case 0x483cd9:c.instructions+=8;goto B483cd9;
case 0x483cdd:c.instructions+=7;goto B483cdd;
case 0x483ce0:c.instructions+=6;goto B483ce0;
case 0x483ce4:c.instructions+=5;goto B483ce4;
case 0x483ce7:c.instructions+=4;goto B483ce7;
case 0x483ced:c.instructions+=3;goto B483ced;
case 0x483cf0:c.instructions+=2;goto B483cf0;
case 0x483cf2:c.instructions+=1;goto B483cf2;
case 0x483cf4:goto L483cf4;
case 0x483cfc:goto L483cfc;
case 0x483cfd:c.instructions+=5;goto B483cfd;
case 0x483d03:c.instructions+=4;goto B483d03;
case 0x483d04:c.instructions+=3;goto B483d04;
case 0x483d06:c.instructions+=2;goto B483d06;
case 0x483d0b:c.instructions+=1;goto B483d0b;
case 0x483d10:goto L483d10;
case 0x483d12:c.instructions+=2;goto B483d12;
case 0x483d14:c.instructions+=1;goto B483d14;
case 0x483d16:goto L483d16;
case 0x483d1a:c.instructions+=3;goto B483d1a;
case 0x483d1c:c.instructions+=2;goto B483d1c;
case 0x483d1d:c.instructions+=1;goto B483d1d;
case 0x483d20:goto L483d20;
case 0x483d23:c.instructions+=2;goto B483d23;
case 0x483d24:c.instructions+=1;goto B483d24;
case 0x483d26:goto L483d26;
case 0x483d2c:c.instructions+=2;goto B483d2c;
case 0x483d2e:c.instructions+=1;goto B483d2e;
case 0x483d30:goto L483d30;
case 0x483d33:c.instructions+=2;goto B483d33;
case 0x483d35:c.instructions+=1;goto B483d35;
case 0x483d37:goto L483d37;
case 0x483d3b:c.instructions+=4;goto B483d3b;
case 0x483d3d:c.instructions+=3;goto B483d3d;
case 0x483d3e:c.instructions+=2;goto B483d3e;
case 0x483d40:c.instructions+=1;goto B483d40;
case 0x483d43:goto L483d43;
case 0x483d48:goto L483d48;
case 0x483d4a:c.instructions+=2;goto B483d4a;
case 0x483d4c:c.instructions+=1;goto B483d4c;
case 0x483d4e:goto L483d4e;
case 0x483d50:c.instructions+=1;goto B483d50;
case 0x483d53:goto L483d53;
case 0x483d56:c.instructions+=2;goto B483d56;
case 0x483d57:c.instructions+=1;goto B483d57;
case 0x483d59:goto L483d59;
case 0x483d5c:c.instructions+=4;goto B483d5c;
case 0x483d5e:c.instructions+=3;goto B483d5e;
case 0x483d5f:c.instructions+=2;goto B483d5f;
case 0x483d60:c.instructions+=1;goto B483d60;
case 0x483d62:goto L483d62;
case 0x483d64:c.instructions+=2;goto B483d64;
case 0x483d66:c.instructions+=1;goto B483d66;
case 0x483d69:goto L483d69;
case 0x483d6c:c.instructions+=3;goto B483d6c;
case 0x483d6e:c.instructions+=2;goto B483d6e;
case 0x483d72:c.instructions+=1;goto B483d72;
case 0x483d74:goto L483d74;
case 0x483d76:c.instructions+=2;goto B483d76;
case 0x483d77:c.instructions+=1;goto B483d77;
case 0x483d7a:goto L483d7a;
case 0x483d80:c.instructions+=2;goto B483d80;
case 0x483d82:c.instructions+=1;goto B483d82;
case 0x483d84:goto L483d84;
case 0x483d89:c.instructions+=2;goto B483d89;
case 0x483d8b:c.instructions+=1;goto B483d8b;
case 0x483d8d:goto L483d8d;
case 0x483d8f:c.instructions+=2;goto B483d8f;
case 0x483d92:c.instructions+=1;goto B483d92;
case 0x483d94:goto L483d94;
case 0x483d97:c.instructions+=1;goto B483d97;
case 0x483d99:goto L483d99;
case 0x483d9a:c.instructions+=2;goto B483d9a;
case 0x483d9c:c.instructions+=1;goto B483d9c;
case 0x483d9e:goto L483d9e;
case 0x483d9f:c.instructions+=1;goto B483d9f;
case 0x483da1:goto L483da1;
case 0x483da6:goto L483da6;
case 0x483dab:c.instructions+=5;goto B483dab;
case 0x483db1:c.instructions+=4;goto B483db1;
case 0x483db3:c.instructions+=3;goto B483db3;
case 0x483db5:c.instructions+=2;goto B483db5;
case 0x483dbb:c.instructions+=1;goto B483dbb;
case 0x483dbd:goto L483dbd;
case 0x483dc2:goto L483dc2;
case 0x483dc8:c.instructions+=1;goto B483dc8;
case 0x483dca:goto L483dca;
case 0x483dd0:c.instructions+=1;goto B483dd0;
case 0x483dd2:goto L483dd2;
case 0x483dd3:c.instructions+=2;goto B483dd3;
case 0x483dd5:c.instructions+=1;goto B483dd5;
case 0x483dda:goto L483dda;
case 0x483ddf:c.instructions+=3;goto B483ddf;
case 0x483de1:c.instructions+=2;goto B483de1;
case 0x483de4:c.instructions+=1;goto B483de4;
case 0x483de6:goto L483de6;
case 0x483de7:c.instructions+=1;goto B483de7;
case 0x483de9:goto L483de9;
case 0x483dea:c.instructions+=1;goto B483dea;
case 0x483dec:goto L483dec;
case 0x483ded:c.instructions+=1;goto B483ded;
case 0x483def:goto L483def;
case 0x483df4:goto L483df4;
case 0x483dfe:c.instructions+=1;goto B483dfe;
case 0x483e08:goto L483e08;
case 0x483e0d:goto L483e0d;
case 0x483e0e:goto L483e0e;
case 0x483e0f:c.instructions+=2;goto B483e0f;
case 0x483e10:c.instructions+=1;goto B483e10;
case 0x483e13:goto L483e13;
case 0x483e18:goto L483e18;
case 0x483e20:goto L483e20;
case 0x483e25:c.instructions+=2;goto B483e25;
case 0x483e27:c.instructions+=1;goto B483e27;
case 0x483e29:goto L483e29;
case 0x483e2c:c.instructions+=1;goto B483e2c;
case 0x483e31:goto L483e31;
case 0x483e40:goto L483e40;
case 0x483e45:c.instructions+=2;goto B483e45;
case 0x483e47:c.instructions+=1;goto B483e47;
case 0x483e49:goto L483e49;
case 0x483e4c:c.instructions+=1;goto B483e4c;
case 0x483e51:goto L483e51;
case 0x483e60:goto L483e60;
case 0x483e65:c.instructions+=2;goto B483e65;
case 0x483e66:c.instructions+=1;goto B483e66;
case 0x483e6b:goto L483e6b;
case 0x483e6e:c.instructions+=2;goto B483e6e;
case 0x483e73:c.instructions+=1;goto B483e73;
case 0x483e75:goto L483e75;
case 0x483e7b:c.instructions+=5;goto B483e7b;
case 0x483e7e:c.instructions+=4;goto B483e7e;
case 0x483e84:c.instructions+=3;goto B483e84;
case 0x483e85:c.instructions+=2;goto B483e85;
case 0x483e8a:c.instructions+=1;goto B483e8a;
case 0x483e8f:goto L483e8f;
case 0x483e92:c.instructions+=2;goto B483e92;
case 0x483e94:c.instructions+=1;goto B483e94;
case 0x483e96:goto L483e96;
case 0x483e98:c.instructions+=1;goto B483e98;
case 0x483e9d:goto L483e9d;
case 0x483e9f:c.instructions+=1;goto B483e9f;
case 0x483ea0:goto L483ea0;
case 0x483ea1:c.instructions+=2;goto B483ea1;
case 0x483ea3:c.instructions+=1;goto B483ea3;
case 0x483ea8:goto L483ea8;
case 0x483ead:c.instructions+=1;goto B483ead;
case 0x483eaf:goto L483eaf;
case 0x483eb0:c.instructions+=1;goto B483eb0;
case 0x483eb5:goto L483eb5;
case 0x483eb8:goto L483eb8;
case 0x483eba:c.instructions+=2;goto B483eba;
case 0x483ebb:c.instructions+=1;goto B483ebb;
case 0x483ec0:goto L483ec0;
case 0x483ec5:c.instructions+=2;goto B483ec5;
case 0x483ec6:c.instructions+=1;goto B483ec6;
case 0x483ecb:goto L483ecb;
case 0x483ece:c.instructions+=2;goto B483ece;
case 0x483ed3:c.instructions+=1;goto B483ed3;
case 0x483ed5:goto L483ed5;
case 0x483edb:c.instructions+=5;goto B483edb;
case 0x483ede:c.instructions+=4;goto B483ede;
case 0x483ee4:c.instructions+=3;goto B483ee4;
case 0x483ee5:c.instructions+=2;goto B483ee5;
case 0x483eea:c.instructions+=1;goto B483eea;
case 0x483eef:goto L483eef;
case 0x483ef2:c.instructions+=2;goto B483ef2;
case 0x483ef4:c.instructions+=1;goto B483ef4;
case 0x483ef6:goto L483ef6;
case 0x483ef8:c.instructions+=1;goto B483ef8;
case 0x483efd:goto L483efd;
case 0x483eff:c.instructions+=1;goto B483eff;
case 0x483f00:goto L483f00;
case 0x483f01:c.instructions+=2;goto B483f01;
case 0x483f03:c.instructions+=1;goto B483f03;
case 0x483f08:goto L483f08;
case 0x483f0d:c.instructions+=1;goto B483f0d;
case 0x483f0f:goto L483f0f;
case 0x483f10:c.instructions+=1;goto B483f10;
case 0x483f15:goto L483f15;
case 0x483f18:goto L483f18;
case 0x483f1a:c.instructions+=2;goto B483f1a;
case 0x483f1b:c.instructions+=1;goto B483f1b;
case 0x483f20:goto L483f20;
case 0x483f21:c.instructions+=22;goto B483f21;
case 0x483f23:c.instructions+=21;goto B483f23;
case 0x483f29:c.instructions+=20;goto B483f29;
case 0x483f2c:c.instructions+=19;goto B483f2c;
case 0x483f2e:c.instructions+=18;goto B483f2e;
case 0x483f31:c.instructions+=17;goto B483f31;
case 0x483f34:c.instructions+=16;goto B483f34;
case 0x483f36:c.instructions+=15;goto B483f36;
case 0x483f39:c.instructions+=14;goto B483f39;
case 0x483f3b:c.instructions+=13;goto B483f3b;
case 0x483f3e:c.instructions+=12;goto B483f3e;
case 0x483f41:c.instructions+=11;goto B483f41;
case 0x483f44:c.instructions+=10;goto B483f44;
case 0x483f47:c.instructions+=9;goto B483f47;
case 0x483f4a:c.instructions+=8;goto B483f4a;
case 0x483f4d:c.instructions+=7;goto B483f4d;
case 0x483f50:c.instructions+=6;goto B483f50;
case 0x483f53:c.instructions+=5;goto B483f53;
case 0x483f57:c.instructions+=4;goto B483f57;
case 0x483f5a:c.instructions+=3;goto B483f5a;
case 0x483f5d:c.instructions+=2;goto B483f5d;
case 0x483f60:c.instructions+=1;goto B483f60;
case 0x483f65:goto L483f65;
case 0x483f67:c.instructions+=2;goto B483f67;
case 0x483f68:c.instructions+=1;goto B483f68;
case 0x483f70:goto L483f70;
case 0x483f71:c.instructions+=2;goto B483f71;
case 0x483f73:c.instructions+=1;goto B483f73;
case 0x483f78:goto L483f78;
case 0x483f7d:c.instructions+=1;goto B483f7d;
case 0x483f7f:goto L483f7f;
case 0x483f80:c.instructions+=1;goto B483f80;
case 0x483f85:goto L483f85;
case 0x483f88:goto L483f88;
case 0x483f8a:c.instructions+=2;goto B483f8a;
case 0x483f8b:c.instructions+=1;goto B483f8b;
case 0x483f90:goto L483f90;
case 0x483f91:c.instructions+=6;goto B483f91;
case 0x483f95:c.instructions+=5;goto B483f95;
case 0x483f96:c.instructions+=4;goto B483f96;
case 0x483f99:c.instructions+=3;goto B483f99;
case 0x483fa0:c.instructions+=2;goto B483fa0;
case 0x483fa2:c.instructions+=1;goto B483fa2;
case 0x483fa8:goto L483fa8;
case 0x483fae:c.instructions+=2;goto B483fae;
case 0x483fb0:c.instructions+=1;goto B483fb0;
case 0x483fb6:goto L483fb6;
case 0x483fb7:c.instructions+=2;goto B483fb7;
case 0x483fb8:c.instructions+=1;goto B483fb8;
case 0x483fbd:goto L483fbd;
case 0x483fbf:c.instructions+=13;goto B483fbf;
case 0x483fc2:c.instructions+=12;goto B483fc2;
case 0x483fc8:c.instructions+=11;goto B483fc8;
case 0x483fcd:c.instructions+=10;goto B483fcd;
case 0x483fcf:c.instructions+=9;goto B483fcf;
case 0x483fd5:c.instructions+=8;goto B483fd5;
case 0x483fda:c.instructions+=7;goto B483fda;
case 0x483fdc:c.instructions+=6;goto B483fdc;
case 0x483fdd:c.instructions+=5;goto B483fdd;
case 0x483fe4:c.instructions+=4;goto B483fe4;
case 0x483fe6:c.instructions+=3;goto B483fe6;
case 0x483feb:c.instructions+=2;goto B483feb;
case 0x483ff0:c.instructions+=1;goto B483ff0;
case 0x483ff5:goto L483ff5;
case 0x483ff8:c.instructions+=2;goto B483ff8;
case 0x483ffb:c.instructions+=1;goto B483ffb;
default:missing_instruction(c.pc);}
B483003:L483003:{c.instructions+=1;NFSU2_TR(0x483003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483008ull));
TAIL_STATIC(0x75bed4u,75b);
}
B483008:L483008:{c.instructions+=6;NFSU2_TR(0x483008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48300b:{NFSU2_TR(0x48300b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48300d:{NFSU2_TR(0x48300d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48300f:{NFSU2_TR(0x48300f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483010:{NFSU2_TR(0x483010);
__builtin_memmove((R+4),(R+28),4);
}
B483012:{NFSU2_TR(0x483012);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483015ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483015:L483015:{c.instructions+=7;NFSU2_TR(0x483015);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483018:{NFSU2_TR(0x483018);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B48301b:{NFSU2_TR(0x48301b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48301d:{NFSU2_TR(0x48301d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48301e:{NFSU2_TR(0x48301e);
__builtin_memmove((R+4),(R+28),4);
}
B483020:{NFSU2_TR(0x483020);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B483023:{NFSU2_TR(0x483023);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483026ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483026:L483026:{c.instructions+=4;NFSU2_TR(0x483026);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483027:{NFSU2_TR(0x483027);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48302d:{NFSU2_TR(0x48302d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B483030:{NFSU2_TR(0x483030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483035ull));
TAIL_STATIC(0x459990u,459);
}
B483035:L483035:{c.instructions+=8;NFSU2_TR(0x483035);
__builtin_memmove((R+0),gp(0x7ed2a0),4);
}
B48303a:{NFSU2_TR(0x48303a);
__builtin_memmove((R+4),gp(0x7ed29c),4);
}
B483040:{NFSU2_TR(0x483040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483042:{NFSU2_TR(0x483042);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483043:{NFSU2_TR(0x483043);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483045:{NFSU2_TR(0x483045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483046:{NFSU2_TR(0x483046);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B48304c:{NFSU2_TR(0x48304c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483051ull));
TAIL_STATIC(0x459990u,459);
}
B483051:L483051:{c.instructions+=6;NFSU2_TR(0x483051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B483052:{NFSU2_TR(0x483052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B483053:{NFSU2_TR(0x483053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B483054:{NFSU2_TR(0x483054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483055:{NFSU2_TR(0x483055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B483056:{NFSU2_TR(0x483056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483059:L483059:{c.instructions+=3;NFSU2_TR(0x483059);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48305f:{NFSU2_TR(0x48305f);
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
B483061:{NFSU2_TR(0x483061);
if(r1(R+518)){{goto L48310b;}}
}
B483067:L483067:{c.instructions+=9;NFSU2_TR(0x483067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48306a:{NFSU2_TR(0x48306a);
w4(R+0,u32(0x7ull));
}
B48306f:{NFSU2_TR(0x48306f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483072:{NFSU2_TR(0x483072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483075:{NFSU2_TR(0x483075);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483078:{NFSU2_TR(0x483078);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48307b:{NFSU2_TR(0x48307b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48307d:{NFSU2_TR(0x48307d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483081:{NFSU2_TR(0x483081);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483084ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483084:L483084:{c.instructions+=14;NFSU2_TR(0x483084);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B483088:{NFSU2_TR(0x483088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48308b:{NFSU2_TR(0x48308b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48308e:{NFSU2_TR(0x48308e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483091:{NFSU2_TR(0x483091);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483094:{NFSU2_TR(0x483094);
{u32 ea_=u32(r4(R+0)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B483097:{NFSU2_TR(0x483097);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483098:{NFSU2_TR(0x483098);
u8 U[4];
w4(U+0,u32(0x44480000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48309d:{NFSU2_TR(0x48309d);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B48309f:{NFSU2_TR(0x48309f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830a1:{NFSU2_TR(0x4830a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830a2:{NFSU2_TR(0x4830a2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4830a5:{NFSU2_TR(0x4830a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4830a9:{NFSU2_TR(0x4830a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830aeull));
TAIL_STATIC(0x401090u,401);
}
B4830ae:L4830ae:{c.instructions+=2;NFSU2_TR(0x4830ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4830b1:{NFSU2_TR(0x4830b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830b6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4830b6:L4830b6:{c.instructions+=6;NFSU2_TR(0x4830b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4830b8:{NFSU2_TR(0x4830b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830b9:{NFSU2_TR(0x4830b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4830bd:{NFSU2_TR(0x4830bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830be:{NFSU2_TR(0x4830be);
__builtin_memmove((R+4),(R+28),4);
}
B4830c0:{NFSU2_TR(0x4830c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4830c3:L4830c3:{c.instructions+=4;NFSU2_TR(0x4830c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830c4:{NFSU2_TR(0x4830c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4830ca:{NFSU2_TR(0x4830ca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4830cd:{NFSU2_TR(0x4830cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830d2ull));
TAIL_STATIC(0x459990u,459);
}
B4830d2:L4830d2:{c.instructions+=6;NFSU2_TR(0x4830d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4830d5:{NFSU2_TR(0x4830d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4830d8:{NFSU2_TR(0x4830d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4830da:{NFSU2_TR(0x4830da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830dc:{NFSU2_TR(0x4830dc);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830de:{NFSU2_TR(0x4830de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4830e1:L4830e1:{c.instructions+=5;NFSU2_TR(0x4830e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830e2:{NFSU2_TR(0x4830e2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4830e5:{NFSU2_TR(0x4830e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4830e7:{NFSU2_TR(0x4830e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+4),(U+0),4);
}
B4830ed:{NFSU2_TR(0x4830ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4830f2ull));
TAIL_STATIC(0x459990u,459);
}
B4830f2:L4830f2:{c.instructions+=6;NFSU2_TR(0x4830f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4830f3:{NFSU2_TR(0x4830f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4830f4:{NFSU2_TR(0x4830f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4830f5:{NFSU2_TR(0x4830f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4830f6:{NFSU2_TR(0x4830f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4830f7:{NFSU2_TR(0x4830f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4830fa:L4830fa:{c.instructions+=3;NFSU2_TR(0x4830fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B483100:{NFSU2_TR(0x483100);
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
B483102:{NFSU2_TR(0x483102);
if(r1(R+518)){{goto L48310b;}}
}
B483104:L483104:{c.instructions+=2;NFSU2_TR(0x483104);
__builtin_memmove((R+4),(R+24),4);
}
B483106:{NFSU2_TR(0x483106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48310bull));
TAIL_STATIC(0x45c430u,45c);
}
B48310b:L48310b:{c.instructions+=6;NFSU2_TR(0x48310b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48310c:{NFSU2_TR(0x48310c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48310d:{NFSU2_TR(0x48310d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48310e:{NFSU2_TR(0x48310e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48310f:{NFSU2_TR(0x48310f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B483110:{NFSU2_TR(0x483110);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483130:L483130:{c.instructions+=6;NFSU2_TR(0x483130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483131:{NFSU2_TR(0x483131);
__builtin_memmove((R+24),(R+4),4);
}
B483133:{NFSU2_TR(0x483133);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B483136:{NFSU2_TR(0x483136);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B483138:{NFSU2_TR(0x483138);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B48313a:{NFSU2_TR(0x48313a);
if(r1(R+518)){{goto L48314d;}}
}
B48313c:L48313c:{c.instructions+=5;NFSU2_TR(0x48313c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483140:{NFSU2_TR(0x483140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483144:{NFSU2_TR(0x483144);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B483147:{NFSU2_TR(0x483147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48314a:{NFSU2_TR(0x48314a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48314d:L48314d:{c.instructions+=9;NFSU2_TR(0x48314d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483150:{NFSU2_TR(0x483150);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B483153:{NFSU2_TR(0x483153);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B483156:{NFSU2_TR(0x483156);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B483159:{NFSU2_TR(0x483159);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48315c:{NFSU2_TR(0x48315c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483162:{NFSU2_TR(0x483162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483168:{NFSU2_TR(0x483168);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48316a:{NFSU2_TR(0x48316a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L483183;}}
}
B48316c:L48316c:{c.instructions+=2;NFSU2_TR(0x48316c);
__builtin_memmove((R+4),(R+24),4);
}
B48316e:{NFSU2_TR(0x48316e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483173ull));
TAIL_STATIC(0x46ec70u,46e);
}
B483173:L483173:{c.instructions+=4;NFSU2_TR(0x483173);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483177:{NFSU2_TR(0x483177);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483178:{NFSU2_TR(0x483178);
__builtin_memmove((R+4),(R+24),4);
}
B48317a:{NFSU2_TR(0x48317a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48317full));
TAIL_STATIC(0x482d50u,482);
}
B48317f:L48317f:{c.instructions+=2;NFSU2_TR(0x48317f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483180:{NFSU2_TR(0x483180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483183:L483183:{c.instructions+=1;NFSU2_TR(0x483183);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48318c;}}
}
B483185:L483185:{c.instructions+=2;NFSU2_TR(0x483185);
__builtin_memmove((R+4),(R+24),4);
}
B483187:{NFSU2_TR(0x483187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48318cull));
TAIL_STATIC(0x46ee60u,46e);
}
B48318c:L48318c:{c.instructions+=4;NFSU2_TR(0x48318c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483190:{NFSU2_TR(0x483190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483191:{NFSU2_TR(0x483191);
__builtin_memmove((R+4),(R+24),4);
}
B483193:{NFSU2_TR(0x483193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483198ull));
TAIL_STATIC(0x482d50u,482);
}
B483198:L483198:{c.instructions+=2;NFSU2_TR(0x483198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483199:{NFSU2_TR(0x483199);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4831a0:L4831a0:{c.instructions+=5;NFSU2_TR(0x4831a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4831a1:{NFSU2_TR(0x4831a1);
__builtin_memmove((R+24),(R+4),4);
}
B4831a3:{NFSU2_TR(0x4831a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4831a6:{NFSU2_TR(0x4831a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4831a8:{NFSU2_TR(0x4831a8);
if(r1(R+518)){{goto L4831bb;}}
}
B4831aa:L4831aa:{c.instructions+=5;NFSU2_TR(0x4831aa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4831ae:{NFSU2_TR(0x4831ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4831b2:{NFSU2_TR(0x4831b2);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4831b5:{NFSU2_TR(0x4831b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4831b8:{NFSU2_TR(0x4831b8);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4831bb:L4831bb:{c.instructions+=9;NFSU2_TR(0x4831bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4831c1:{NFSU2_TR(0x4831c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4831c4:{NFSU2_TR(0x4831c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4831cb:{NFSU2_TR(0x4831cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4831d1:{NFSU2_TR(0x4831d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4831d4:{NFSU2_TR(0x4831d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4831d6:{NFSU2_TR(0x4831d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4831dc:{NFSU2_TR(0x4831dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4831e3:{NFSU2_TR(0x4831e3);
if(r1(R+518)){{goto L483219;}}
}
B4831e5:L4831e5:{c.instructions+=3;NFSU2_TR(0x4831e5);
__builtin_memmove((R+0),(R+4),1);
}
B4831e7:{NFSU2_TR(0x4831e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4831e9:{NFSU2_TR(0x4831e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48320f;}}
}
B4831eb:L4831eb:{c.instructions+=2;NFSU2_TR(0x4831eb);
__builtin_memmove((R+4),(R+24),4);
}
B4831ed:{NFSU2_TR(0x4831ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4831f2ull));
TAIL_STATIC(0x45cd30u,45c);
}
B4831f2:L4831f2:{c.instructions+=3;NFSU2_TR(0x4831f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4831f4:{NFSU2_TR(0x4831f4);
__builtin_memmove((R+4),(R+24),4);
}
B4831f6:{NFSU2_TR(0x4831f6);
if(r1(R+518)){{goto L4831ff;}}
}
B4831f8:L4831f8:{c.instructions+=1;NFSU2_TR(0x4831f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4831fdull));
TAIL_STATIC(0x45cc30u,45c);
}
B4831fd:L4831fd:{c.instructions+=1;NFSU2_TR(0x4831fd);
{goto L48320f;}
}
B4831ff:L4831ff:{c.instructions+=1;NFSU2_TR(0x4831ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483204ull));
TAIL_STATIC(0x470030u,470);
}
B483204:L483204:{c.instructions+=2;NFSU2_TR(0x483204);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483206:{NFSU2_TR(0x483206);
if(r1(R+518)){{goto L48320f;}}
}
B483208:L483208:{c.instructions+=2;NFSU2_TR(0x483208);
__builtin_memmove((R+4),(R+24),4);
}
B48320a:{NFSU2_TR(0x48320a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48320full));
TAIL_STATIC(0x45cb70u,45c);
}
B48320f:L48320f:{c.instructions+=3;NFSU2_TR(0x48320f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B483215:{NFSU2_TR(0x483215);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483217:{NFSU2_TR(0x483217);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483235;}}
}
B483219:L483219:{c.instructions+=3;NFSU2_TR(0x483219);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48321f:{NFSU2_TR(0x48321f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483221:{NFSU2_TR(0x483221);
if(r1(R+518)){{goto L483235;}}
}
B483223:L483223:{c.instructions+=2;NFSU2_TR(0x483223);
__builtin_memmove((R+4),(R+24),4);
}
B483225:{NFSU2_TR(0x483225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48322aull));
TAIL_STATIC(0x45cdc0u,45c);
}
B48322a:L48322a:{c.instructions+=2;NFSU2_TR(0x48322a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48322c:{NFSU2_TR(0x48322c);
if(r1(R+518)){{goto L483235;}}
}
B48322e:L48322e:{c.instructions+=1;NFSU2_TR(0x48322e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483235:L483235:{c.instructions+=4;NFSU2_TR(0x483235);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483239:{NFSU2_TR(0x483239);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48323a:{NFSU2_TR(0x48323a);
__builtin_memmove((R+4),(R+24),4);
}
B48323c:{NFSU2_TR(0x48323c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483241ull));
TAIL_STATIC(0x47c290u,47c);
}
B483241:L483241:{c.instructions+=2;NFSU2_TR(0x483241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483242:{NFSU2_TR(0x483242);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483250:L483250:{c.instructions+=8;NFSU2_TR(0x483250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483251:{NFSU2_TR(0x483251);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483252:{NFSU2_TR(0x483252);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483253:{NFSU2_TR(0x483253);
__builtin_memmove((R+24),(R+4),4);
}
B483255:{NFSU2_TR(0x483255);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B483258:{NFSU2_TR(0x483258);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48325a:{NFSU2_TR(0x48325a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48325b:{NFSU2_TR(0x48325b);
if(r1(R+518)){{goto L48326e;}}
}
B48325d:L48325d:{c.instructions+=5;NFSU2_TR(0x48325d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483261:{NFSU2_TR(0x483261);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483265:{NFSU2_TR(0x483265);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B483268:{NFSU2_TR(0x483268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48326b:{NFSU2_TR(0x48326b);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48326e:L48326e:{c.instructions+=8;NFSU2_TR(0x48326e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483271:{NFSU2_TR(0x483271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483274:{NFSU2_TR(0x483274);
__builtin_memmove((R+20),gp(0x82b884),4);
}
B48327a:{NFSU2_TR(0x48327a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483280:{NFSU2_TR(0x483280);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B483283:{NFSU2_TR(0x483283);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
}
B483286:{NFSU2_TR(0x483286);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483288:{NFSU2_TR(0x483288);
if(r1(R+518)){{goto L4832a3;}}
}
B48328a:L48328a:{c.instructions+=3;NFSU2_TR(0x48328a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48328d:{NFSU2_TR(0x48328d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48328f:{NFSU2_TR(0x48328f);
if(r1(R+518)){{goto L48329d;}}
}
B483291:L483291:{c.instructions+=2;NFSU2_TR(0x483291);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B483294:{NFSU2_TR(0x483294);
if(r1(R+518)){{goto L48329f;}}
}
B483296:L483296:{c.instructions+=3;NFSU2_TR(0x483296);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483299:{NFSU2_TR(0x483299);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48329b:{NFSU2_TR(0x48329b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483291u);}goto L483291;}}
}
B48329d:L48329d:{c.instructions+=1;NFSU2_TR(0x48329d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48329f:L48329f:{c.instructions+=2;NFSU2_TR(0x48329f);
__builtin_memmove((R+4),(R+0),4);
}
B4832a1:{NFSU2_TR(0x4832a1);
{goto L4832a5;}
}
B4832a3:L4832a3:{c.instructions+=1;NFSU2_TR(0x4832a3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4832a5:L4832a5:{c.instructions+=2;NFSU2_TR(0x4832a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4832ac:{NFSU2_TR(0x4832ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4832e9;}}
}
B4832ae:L4832ae:{c.instructions+=2;NFSU2_TR(0x4832ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4832b0:{NFSU2_TR(0x4832b0);
if(r1(R+518)){{goto L4832cc;}}
}
B4832b2:L4832b2:{c.instructions+=3;NFSU2_TR(0x4832b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4832b5:{NFSU2_TR(0x4832b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4832b7:{NFSU2_TR(0x4832b7);
if(r1(R+518)){{goto L4832cc;}}
}
B4832b9:L4832b9:{c.instructions+=1;NFSU2_TR(0x4832b9);
__builtin_memmove((R+16),(R+16),4);
}
B4832c0:L4832c0:{c.instructions+=2;NFSU2_TR(0x4832c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4832c3:{NFSU2_TR(0x4832c3);
if(r1(R+518)){{goto L4832ce;}}
}
B4832c5:L4832c5:{c.instructions+=3;NFSU2_TR(0x4832c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4832c8:{NFSU2_TR(0x4832c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4832ca:{NFSU2_TR(0x4832ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4832c0u);}goto L4832c0;}}
}
B4832cc:L4832cc:{c.instructions+=1;NFSU2_TR(0x4832cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4832ce:L4832ce:{c.instructions+=8;NFSU2_TR(0x4832ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4832d1:{NFSU2_TR(0x4832d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4832d4:{NFSU2_TR(0x4832d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4832d7:{NFSU2_TR(0x4832d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4832da:{NFSU2_TR(0x4832da);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4832dd:{NFSU2_TR(0x4832dd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+5)));
w1(U+6,u8(u32(r1(R+4))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4832e0:{NFSU2_TR(0x4832e0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B4832e3:{NFSU2_TR(0x4832e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4832e9:L4832e9:{c.instructions+=4;NFSU2_TR(0x4832e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4832ed:{NFSU2_TR(0x4832ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4832ee:{NFSU2_TR(0x4832ee);
__builtin_memmove((R+4),(R+24),4);
}
B4832f0:{NFSU2_TR(0x4832f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4832f5ull));
TAIL_STATIC(0x471080u,471);
}
B4832f5:L4832f5:{c.instructions+=3;NFSU2_TR(0x4832f5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4832f7:{NFSU2_TR(0x4832f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4832fe:{NFSU2_TR(0x4832fe);
w4(R+20,u32(0x5ull));
}
B483303:L483303:{c.instructions+=9;NFSU2_TR(0x483303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483306:{NFSU2_TR(0x483306);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483307:{NFSU2_TR(0x483307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48330a:{NFSU2_TR(0x48330a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48330d:{NFSU2_TR(0x48330d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48330f:{NFSU2_TR(0x48330f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B483312:{NFSU2_TR(0x483312);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483313:{NFSU2_TR(0x483313);
w4(R+4,u32(0x88f298ull));
}
B483318:{NFSU2_TR(0x483318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48331dull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B48331d:L48331d:{c.instructions+=3;NFSU2_TR(0x48331d);
__builtin_memmove((R+4),(R+0),4);
}
B48331f:{NFSU2_TR(0x48331f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483321:{NFSU2_TR(0x483321);
if(r1(R+518)){{goto L483350;}}
}
B483323:L483323:{c.instructions+=5;NFSU2_TR(0x483323);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483326:{NFSU2_TR(0x483326);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48332c:{NFSU2_TR(0x48332c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48332e:{NFSU2_TR(0x48332e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483331:{NFSU2_TR(0x483331);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L483437;}}
}
B483337:L483337:{c.instructions+=7;NFSU2_TR(0x483337);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48333a:{NFSU2_TR(0x48333a);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48333d:{NFSU2_TR(0x48333d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483340:{NFSU2_TR(0x483340);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B483343:{NFSU2_TR(0x483343);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B483345:{NFSU2_TR(0x483345);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483348:{NFSU2_TR(0x483348);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483303u);}goto L483303;}}
}
B48334a:L48334a:{c.instructions+=1;NFSU2_TR(0x48334a);
{goto L483437;}
}
B483350:L483350:{c.instructions+=9;NFSU2_TR(0x483350);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483353:{NFSU2_TR(0x483353);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483354:{NFSU2_TR(0x483354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48335b:{NFSU2_TR(0x48335b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48335e:{NFSU2_TR(0x48335e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483360:{NFSU2_TR(0x483360);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B483363:{NFSU2_TR(0x483363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483364:{NFSU2_TR(0x483364);
w4(R+4,u32(0x88f298ull));
}
B483369:{NFSU2_TR(0x483369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48336eull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B48336e:L48336e:{c.instructions+=3;NFSU2_TR(0x48336e);
__builtin_memmove((R+4),(R+0),4);
}
B483370:{NFSU2_TR(0x483370);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483372:{NFSU2_TR(0x483372);
if(r1(R+518)){{goto L4833a0;}}
}
B483374:L483374:{c.instructions+=5;NFSU2_TR(0x483374);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483377:{NFSU2_TR(0x483377);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48337d:{NFSU2_TR(0x48337d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48337f:{NFSU2_TR(0x48337f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483382:{NFSU2_TR(0x483382);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L483437;}}
}
B483388:L483388:{c.instructions+=7;NFSU2_TR(0x483388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48338b:{NFSU2_TR(0x48338b);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48338e:{NFSU2_TR(0x48338e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483391:{NFSU2_TR(0x483391);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B483394:{NFSU2_TR(0x483394);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B483396:{NFSU2_TR(0x483396);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483399:{NFSU2_TR(0x483399);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483350u);}goto L483350;}}
}
B48339b:L48339b:{c.instructions+=1;NFSU2_TR(0x48339b);
{goto L483437;}
}
B4833a0:L4833a0:{c.instructions+=9;NFSU2_TR(0x4833a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4833a3:{NFSU2_TR(0x4833a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4833a4:{NFSU2_TR(0x4833a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4833ab:{NFSU2_TR(0x4833ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4833ae:{NFSU2_TR(0x4833ae);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4833b3:{NFSU2_TR(0x4833b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4833b6:{NFSU2_TR(0x4833b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4833b7:{NFSU2_TR(0x4833b7);
w4(R+4,u32(0x88f298ull));
}
B4833bc:{NFSU2_TR(0x4833bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4833c1ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B4833c1:L4833c1:{c.instructions+=3;NFSU2_TR(0x4833c1);
__builtin_memmove((R+4),(R+0),4);
}
B4833c3:{NFSU2_TR(0x4833c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4833c5:{NFSU2_TR(0x4833c5);
if(r1(R+518)){{goto L4833ec;}}
}
B4833c7:L4833c7:{c.instructions+=5;NFSU2_TR(0x4833c7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4833ca:{NFSU2_TR(0x4833ca);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4833d0:{NFSU2_TR(0x4833d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4833d2:{NFSU2_TR(0x4833d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4833d5:{NFSU2_TR(0x4833d5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L483437;}}
}
B4833d7:L4833d7:{c.instructions+=7;NFSU2_TR(0x4833d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4833da:{NFSU2_TR(0x4833da);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4833dd:{NFSU2_TR(0x4833dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4833e0:{NFSU2_TR(0x4833e0);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4833e3:{NFSU2_TR(0x4833e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4833e5:{NFSU2_TR(0x4833e5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4833e8:{NFSU2_TR(0x4833e8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4833a0u);}goto L4833a0;}}
}
B4833ea:L4833ea:{c.instructions+=1;NFSU2_TR(0x4833ea);
{goto L483437;}
}
B4833ec:L4833ec:{c.instructions+=1;NFSU2_TR(0x4833ec);
w4(R+28,u32(0x14ull));
}
B4833f1:L4833f1:{c.instructions+=9;NFSU2_TR(0x4833f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4833f4:{NFSU2_TR(0x4833f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4833f5:{NFSU2_TR(0x4833f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4833f8:{NFSU2_TR(0x4833f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4833fb:{NFSU2_TR(0x4833fb);
u8 U[4];
w4(U+0,u32(0x100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483400:{NFSU2_TR(0x483400);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B483403:{NFSU2_TR(0x483403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483404:{NFSU2_TR(0x483404);
w4(R+4,u32(0x88f298ull));
}
B483409:{NFSU2_TR(0x483409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48340eull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B48340e:L48340e:{c.instructions+=3;NFSU2_TR(0x48340e);
__builtin_memmove((R+4),(R+0),4);
}
B483410:{NFSU2_TR(0x483410);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483412:{NFSU2_TR(0x483412);
if(r1(R+518)){{goto L483462;}}
}
B483414:L483414:{c.instructions+=5;NFSU2_TR(0x483414);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483417:{NFSU2_TR(0x483417);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48341d:{NFSU2_TR(0x48341d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48341f:{NFSU2_TR(0x48341f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483422:{NFSU2_TR(0x483422);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L483437;}}
}
B483424:L483424:{c.instructions+=7;NFSU2_TR(0x483424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483427:{NFSU2_TR(0x483427);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48342a:{NFSU2_TR(0x48342a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48342d:{NFSU2_TR(0x48342d);
{u32 ea_=u32(r4(R+8)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B483430:{NFSU2_TR(0x483430);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B483432:{NFSU2_TR(0x483432);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B483435:{NFSU2_TR(0x483435);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4833f1u);}goto L4833f1;}}
}
B483437:L483437:{c.instructions+=3;NFSU2_TR(0x483437);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48343a:{NFSU2_TR(0x48343a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48343c:{NFSU2_TR(0x48343c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483498;}}
}
B48343e:L48343e:{c.instructions+=4;NFSU2_TR(0x48343e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483441:{NFSU2_TR(0x483441);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483443:{NFSU2_TR(0x483443);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483447:{NFSU2_TR(0x483447);
if(r1(R+518)){{goto L48345e;}}
}
B483449:L483449:{c.instructions+=1;NFSU2_TR(0x483449);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L483457;}}
}
B48344b:L48344b:{c.instructions+=2;NFSU2_TR(0x48344b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48344e:{NFSU2_TR(0x48344e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L483457;}}
}
B483450:L483450:{c.instructions+=2;NFSU2_TR(0x483450);
w4(R+0,u32(0x6ull));
}
B483455:{NFSU2_TR(0x483455);
{goto L48348e;}
}
B483457:L483457:{c.instructions+=2;NFSU2_TR(0x483457);
w4(R+0,u32(0x3ull));
}
B48345c:{NFSU2_TR(0x48345c);
{goto L48348e;}
}
B48345e:L48345e:{c.instructions+=2;NFSU2_TR(0x48345e);
__builtin_memmove((R+0),(R+20),4);
}
B483460:{NFSU2_TR(0x483460);
{goto L48348e;}
}
B483462:L483462:{c.instructions+=3;NFSU2_TR(0x483462);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B483465:{NFSU2_TR(0x483465);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483467:{NFSU2_TR(0x483467);
if(r1(R+518)){{goto L483498;}}
}
B483469:L483469:{c.instructions+=4;NFSU2_TR(0x483469);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48346f:{NFSU2_TR(0x48346f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483471:{NFSU2_TR(0x483471);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483475:{NFSU2_TR(0x483475);
if(r1(R+518)){{goto L483498;}}
}
B483477:L483477:{c.instructions+=4;NFSU2_TR(0x483477);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48347d:{NFSU2_TR(0x48347d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed5d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B483484:{NFSU2_TR(0x483484);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B483487:{NFSU2_TR(0x483487);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48348e;}}
}
B483489:L483489:{c.instructions+=1;NFSU2_TR(0x483489);
w4(R+0,u32(0x9ull));
}
B48348e:L48348e:{c.instructions+=4;NFSU2_TR(0x48348e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483490:{NFSU2_TR(0x483490);
__builtin_memmove((R+4),(R+24),4);
}
B483492:{NFSU2_TR(0x483492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483493:{NFSU2_TR(0x483493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483498ull));
TAIL_STATIC(0x45db90u,45d);
}
B483498:L483498:{c.instructions+=3;NFSU2_TR(0x483498);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483499:{NFSU2_TR(0x483499);
__builtin_memmove((R+4),(R+24),4);
}
B48349b:{NFSU2_TR(0x48349b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834a0ull));
TAIL_STATIC(0x47c6d0u,47c);
}
B4834a0:L4834a0:{c.instructions+=3;NFSU2_TR(0x4834a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4834a1:{NFSU2_TR(0x4834a1);
__builtin_memmove((R+4),(R+24),4);
}
B4834a3:{NFSU2_TR(0x4834a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834a8ull));
TAIL_STATIC(0x4714a0u,471);
}
B4834a8:L4834a8:{c.instructions+=7;NFSU2_TR(0x4834a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4834ab:{NFSU2_TR(0x4834ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4834ac:{NFSU2_TR(0x4834ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4834af:{NFSU2_TR(0x4834af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4834b0:{NFSU2_TR(0x4834b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4834b1:{NFSU2_TR(0x4834b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4834b2:{NFSU2_TR(0x4834b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4834c0:L4834c0:{c.instructions+=3;NFSU2_TR(0x4834c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4834c1:{NFSU2_TR(0x4834c1);
__builtin_memmove((R+24),(R+4),4);
}
B4834c3:{NFSU2_TR(0x4834c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834c8ull));
TAIL_STATIC(0x47c840u,47c);
}
B4834c8:L4834c8:{c.instructions+=2;NFSU2_TR(0x4834c8);
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
B4834cd:{NFSU2_TR(0x4834cd);
if(r1(R+518)){{goto L4834d8;}}
}
B4834cf:L4834cf:{c.instructions+=2;NFSU2_TR(0x4834cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4834d0:{NFSU2_TR(0x4834d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834d5ull));
TAIL_STATIC(0x440540u,440);
}
B4834d5:L4834d5:{c.instructions+=1;NFSU2_TR(0x4834d5);
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
B4834d8:L4834d8:{c.instructions+=3;NFSU2_TR(0x4834d8);
__builtin_memmove((R+0),(R+24),4);
}
B4834da:{NFSU2_TR(0x4834da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4834db:{NFSU2_TR(0x4834db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4834e0:L4834e0:{c.instructions+=3;NFSU2_TR(0x4834e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4834e1:{NFSU2_TR(0x4834e1);
__builtin_memmove((R+24),(R+4),4);
}
B4834e3:{NFSU2_TR(0x4834e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834e8ull));
TAIL_STATIC(0x47cc80u,47c);
}
B4834e8:L4834e8:{c.instructions+=2;NFSU2_TR(0x4834e8);
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
B4834ed:{NFSU2_TR(0x4834ed);
if(r1(R+518)){{goto L4834f8;}}
}
B4834ef:L4834ef:{c.instructions+=2;NFSU2_TR(0x4834ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4834f0:{NFSU2_TR(0x4834f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4834f5ull));
TAIL_STATIC(0x440540u,440);
}
B4834f5:L4834f5:{c.instructions+=1;NFSU2_TR(0x4834f5);
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
B4834f8:L4834f8:{c.instructions+=3;NFSU2_TR(0x4834f8);
__builtin_memmove((R+0),(R+24),4);
}
B4834fa:{NFSU2_TR(0x4834fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4834fb:{NFSU2_TR(0x4834fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483500:L483500:{c.instructions+=3;NFSU2_TR(0x483500);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483501:{NFSU2_TR(0x483501);
__builtin_memmove((R+24),(R+4),4);
}
B483503:{NFSU2_TR(0x483503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483508ull));
TAIL_STATIC(0x47cd40u,47c);
}
B483508:L483508:{c.instructions+=2;NFSU2_TR(0x483508);
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
B48350d:{NFSU2_TR(0x48350d);
if(r1(R+518)){{goto L483518;}}
}
B48350f:L48350f:{c.instructions+=2;NFSU2_TR(0x48350f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483510:{NFSU2_TR(0x483510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483515ull));
TAIL_STATIC(0x440540u,440);
}
B483515:L483515:{c.instructions+=1;NFSU2_TR(0x483515);
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
B483518:L483518:{c.instructions+=3;NFSU2_TR(0x483518);
__builtin_memmove((R+0),(R+24),4);
}
B48351a:{NFSU2_TR(0x48351a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48351b:{NFSU2_TR(0x48351b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483520:L483520:{c.instructions+=3;NFSU2_TR(0x483520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483521:{NFSU2_TR(0x483521);
__builtin_memmove((R+24),(R+4),4);
}
B483523:{NFSU2_TR(0x483523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483528ull));
TAIL_STATIC(0x47d470u,47d);
}
B483528:L483528:{c.instructions+=2;NFSU2_TR(0x483528);
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
B48352d:{NFSU2_TR(0x48352d);
if(r1(R+518)){{goto L483538;}}
}
B48352f:L48352f:{c.instructions+=2;NFSU2_TR(0x48352f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483530:{NFSU2_TR(0x483530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483535ull));
TAIL_STATIC(0x440540u,440);
}
B483535:L483535:{c.instructions+=1;NFSU2_TR(0x483535);
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
B483538:L483538:{c.instructions+=3;NFSU2_TR(0x483538);
__builtin_memmove((R+0),(R+24),4);
}
B48353a:{NFSU2_TR(0x48353a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48353b:{NFSU2_TR(0x48353b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483540:L483540:{c.instructions+=3;NFSU2_TR(0x483540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483541:{NFSU2_TR(0x483541);
__builtin_memmove((R+24),(R+4),4);
}
B483543:{NFSU2_TR(0x483543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483548ull));
TAIL_STATIC(0x47d540u,47d);
}
B483548:L483548:{c.instructions+=2;NFSU2_TR(0x483548);
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
B48354d:{NFSU2_TR(0x48354d);
if(r1(R+518)){{goto L483558;}}
}
B48354f:L48354f:{c.instructions+=2;NFSU2_TR(0x48354f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483550:{NFSU2_TR(0x483550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483555ull));
TAIL_STATIC(0x440540u,440);
}
B483555:L483555:{c.instructions+=1;NFSU2_TR(0x483555);
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
B483558:L483558:{c.instructions+=3;NFSU2_TR(0x483558);
__builtin_memmove((R+0),(R+24),4);
}
B48355a:{NFSU2_TR(0x48355a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48355b:{NFSU2_TR(0x48355b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483560:L483560:{c.instructions+=3;NFSU2_TR(0x483560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483561:{NFSU2_TR(0x483561);
__builtin_memmove((R+24),(R+4),4);
}
B483563:{NFSU2_TR(0x483563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483568ull));
TAIL_STATIC(0x47d610u,47d);
}
B483568:L483568:{c.instructions+=2;NFSU2_TR(0x483568);
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
B48356d:{NFSU2_TR(0x48356d);
if(r1(R+518)){{goto L483578;}}
}
B48356f:L48356f:{c.instructions+=2;NFSU2_TR(0x48356f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483570:{NFSU2_TR(0x483570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483575ull));
TAIL_STATIC(0x440540u,440);
}
B483575:L483575:{c.instructions+=1;NFSU2_TR(0x483575);
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
B483578:L483578:{c.instructions+=3;NFSU2_TR(0x483578);
__builtin_memmove((R+0),(R+24),4);
}
B48357a:{NFSU2_TR(0x48357a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48357b:{NFSU2_TR(0x48357b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483580:L483580:{c.instructions+=3;NFSU2_TR(0x483580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483581:{NFSU2_TR(0x483581);
__builtin_memmove((R+24),(R+4),4);
}
B483583:{NFSU2_TR(0x483583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483588ull));
TAIL_STATIC(0x47db20u,47d);
}
B483588:L483588:{c.instructions+=2;NFSU2_TR(0x483588);
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
B48358d:{NFSU2_TR(0x48358d);
if(r1(R+518)){{goto L483598;}}
}
B48358f:L48358f:{c.instructions+=2;NFSU2_TR(0x48358f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483590:{NFSU2_TR(0x483590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483595ull));
TAIL_STATIC(0x440540u,440);
}
B483595:L483595:{c.instructions+=1;NFSU2_TR(0x483595);
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
B483598:L483598:{c.instructions+=3;NFSU2_TR(0x483598);
__builtin_memmove((R+0),(R+24),4);
}
B48359a:{NFSU2_TR(0x48359a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48359b:{NFSU2_TR(0x48359b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4835a0:L4835a0:{c.instructions+=3;NFSU2_TR(0x4835a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4835a1:{NFSU2_TR(0x4835a1);
__builtin_memmove((R+24),(R+4),4);
}
B4835a3:{NFSU2_TR(0x4835a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4835a8ull));
TAIL_STATIC(0x47e020u,47e);
}
B4835a8:L4835a8:{c.instructions+=2;NFSU2_TR(0x4835a8);
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
B4835ad:{NFSU2_TR(0x4835ad);
if(r1(R+518)){{goto L4835b8;}}
}
B4835af:L4835af:{c.instructions+=2;NFSU2_TR(0x4835af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4835b0:{NFSU2_TR(0x4835b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4835b5ull));
TAIL_STATIC(0x440540u,440);
}
B4835b5:L4835b5:{c.instructions+=1;NFSU2_TR(0x4835b5);
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
B4835b8:L4835b8:{c.instructions+=3;NFSU2_TR(0x4835b8);
__builtin_memmove((R+0),(R+24),4);
}
B4835ba:{NFSU2_TR(0x4835ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4835bb:{NFSU2_TR(0x4835bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4835c0:L4835c0:{c.instructions+=5;NFSU2_TR(0x4835c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4835c1:{NFSU2_TR(0x4835c1);
__builtin_memmove((R+24),(R+4),4);
}
B4835c3:{NFSU2_TR(0x4835c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4835c5:{NFSU2_TR(0x4835c5);
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
B4835c7:{NFSU2_TR(0x4835c7);
if(r1(R+518)){{goto L4835e9;}}
}
B4835c9:L4835c9:{c.instructions+=1;NFSU2_TR(0x4835c9);
__builtin_memmove((R+16),(R+16),4);
}
B4835d0:L4835d0:{c.instructions+=6;NFSU2_TR(0x4835d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4835d2:{NFSU2_TR(0x4835d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4835d5:{NFSU2_TR(0x4835d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4835d7:{NFSU2_TR(0x4835d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4835d8:{NFSU2_TR(0x4835d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4835db:{NFSU2_TR(0x4835db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4835e0ull));
TAIL_STATIC(0x440ef0u,440);
}
B4835e0:L4835e0:{c.instructions+=4;NFSU2_TR(0x4835e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4835e2:{NFSU2_TR(0x4835e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4835e5:{NFSU2_TR(0x4835e5);
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
B4835e7:{NFSU2_TR(0x4835e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4835d0u);}goto L4835d0;}}
}
B4835e9:L4835e9:{c.instructions+=2;NFSU2_TR(0x4835e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4835ea:{NFSU2_TR(0x4835ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4835f0:L4835f0:{c.instructions+=3;NFSU2_TR(0x4835f0);
__builtin_memmove((R+0),gp(0x82bebc),4);
}
B4835f5:{NFSU2_TR(0x4835f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82bebcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4835fa:{NFSU2_TR(0x4835fa);
if(r1(R+518)){{goto L483621;}}
}
B4835fc:L4835fc:{c.instructions+=1;NFSU2_TR(0x4835fc);
__builtin_memmove((R+16),(R+16),4);
}
B483600:L483600:{c.instructions+=7;NFSU2_TR(0x483600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483602:{NFSU2_TR(0x483602);
__builtin_memmove((R+8),(R+0),4);
}
B483604:{NFSU2_TR(0x483604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483607:{NFSU2_TR(0x483607);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B483609:{NFSU2_TR(0x483609);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48360a:{NFSU2_TR(0x48360a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48360d:{NFSU2_TR(0x48360d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483612ull));
TAIL_STATIC(0x440ef0u,440);
}
B483612:L483612:{c.instructions+=4;NFSU2_TR(0x483612);
__builtin_memmove((R+0),gp(0x82bebc),4);
}
B483617:{NFSU2_TR(0x483617);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48361a:{NFSU2_TR(0x48361a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82bebcull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48361f:{NFSU2_TR(0x48361f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483600u);}goto L483600;}}
}
B483621:L483621:{c.instructions+=3;NFSU2_TR(0x483621);
__builtin_memmove((R+0),gp(0x82c6a4),4);
}
B483626:{NFSU2_TR(0x483626);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82c6a4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48362b:{NFSU2_TR(0x48362b);
if(r1(R+518)){{goto L483651;}}
}
B48362d:L48362d:{c.instructions+=1;NFSU2_TR(0x48362d);
__builtin_memmove((R+4),(R+4),4);
}
B483630:L483630:{c.instructions+=7;NFSU2_TR(0x483630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483632:{NFSU2_TR(0x483632);
__builtin_memmove((R+8),(R+0),4);
}
B483634:{NFSU2_TR(0x483634);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483637:{NFSU2_TR(0x483637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B483639:{NFSU2_TR(0x483639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48363a:{NFSU2_TR(0x48363a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48363d:{NFSU2_TR(0x48363d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483642ull));
TAIL_STATIC(0x440ef0u,440);
}
B483642:L483642:{c.instructions+=4;NFSU2_TR(0x483642);
__builtin_memmove((R+0),gp(0x82c6a4),4);
}
B483647:{NFSU2_TR(0x483647);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48364a:{NFSU2_TR(0x48364a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82c6a4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48364f:{NFSU2_TR(0x48364f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483630u);}goto L483630;}}
}
B483651:L483651:{c.instructions+=3;NFSU2_TR(0x483651);
__builtin_memmove((R+0),gp(0x82bec4),4);
}
B483656:{NFSU2_TR(0x483656);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x82bec4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x82bec4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x82bec4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48365b:{NFSU2_TR(0x48365b);
if(r1(R+518)){{goto L483681;}}
}
B48365d:L48365d:{c.instructions+=1;NFSU2_TR(0x48365d);
__builtin_memmove((R+4),(R+4),4);
}
B483660:L483660:{c.instructions+=7;NFSU2_TR(0x483660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483662:{NFSU2_TR(0x483662);
__builtin_memmove((R+8),(R+0),4);
}
B483664:{NFSU2_TR(0x483664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483667:{NFSU2_TR(0x483667);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B483669:{NFSU2_TR(0x483669);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48366a:{NFSU2_TR(0x48366a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48366d:{NFSU2_TR(0x48366d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483672ull));
TAIL_STATIC(0x440ef0u,440);
}
B483672:L483672:{c.instructions+=4;NFSU2_TR(0x483672);
__builtin_memmove((R+0),gp(0x82bec4),4);
}
B483677:{NFSU2_TR(0x483677);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48367a:{NFSU2_TR(0x48367a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x82bec4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x82bec4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x82bec4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48367f:{NFSU2_TR(0x48367f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483660u);}goto L483660;}}
}
B483681:L483681:{c.instructions+=1;NFSU2_TR(0x483681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483690:L483690:{c.instructions+=4;NFSU2_TR(0x483690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483691:{NFSU2_TR(0x483691);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483693:{NFSU2_TR(0x483693);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483695:{NFSU2_TR(0x483695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48369aull));
TAIL_STATIC(0x476990u,476);
}
B48369a:L48369a:{c.instructions+=5;NFSU2_TR(0x48369a);
__builtin_memmove((R+24),(R+0),4);
}
B48369c:{NFSU2_TR(0x48369c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48369e:{NFSU2_TR(0x48369e);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4836a0:{NFSU2_TR(0x4836a0);
__builtin_memmove((R+4),(R+24),4);
}
B4836a2:{NFSU2_TR(0x4836a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4836a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4836a5:L4836a5:{c.instructions+=3;NFSU2_TR(0x4836a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4836a7:{NFSU2_TR(0x4836a7);
__builtin_memmove((R+4),(R+24),4);
}
B4836a9:{NFSU2_TR(0x4836a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4836aeull));
TAIL_STATIC(0x47f6d0u,47f);
}
B4836ae:L4836ae:{c.instructions+=2;NFSU2_TR(0x4836ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4836af:{NFSU2_TR(0x4836af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4836c0:L4836c0:{c.instructions+=3;NFSU2_TR(0x4836c0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4836c5:{NFSU2_TR(0x4836c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4836c6:{NFSU2_TR(0x4836c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4836cbull));
TAIL_STATIC(0x43e910u,43e);
}
B4836cb:L4836cb:{c.instructions+=3;NFSU2_TR(0x4836cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4836ce:{NFSU2_TR(0x4836ce);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x444ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x444ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4836d3:{NFSU2_TR(0x4836d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4836fa;}}
}
B4836d5:L4836d5:{c.instructions+=6;NFSU2_TR(0x4836d5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4836db:{NFSU2_TR(0x4836db);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4836de:{NFSU2_TR(0x4836de);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4836e4:{NFSU2_TR(0x4836e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4836e5:{NFSU2_TR(0x4836e5);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4836e7:{NFSU2_TR(0x4836e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4836ecull));
TAIL_STATIC(0x440820u,440);
}
B4836ec:L4836ec:{c.instructions+=3;NFSU2_TR(0x4836ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4836ef:{NFSU2_TR(0x4836ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4836f1:{NFSU2_TR(0x4836f1);
if(r1(R+518)){{goto L4836fa;}}
}
B4836f3:L4836f3:{c.instructions+=2;NFSU2_TR(0x4836f3);
__builtin_memmove((R+4),(R+0),4);
}
B4836f5:{NFSU2_TR(0x4836f5);
TAIL_STATIC(0x47f580u,47f);
}
B4836fa:L4836fa:{c.instructions+=2;NFSU2_TR(0x4836fa);
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
B4836fc:{NFSU2_TR(0x4836fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483700:L483700:{c.instructions+=3;NFSU2_TR(0x483700);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B483705:{NFSU2_TR(0x483705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483706:{NFSU2_TR(0x483706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48370bull));
TAIL_STATIC(0x43e910u,43e);
}
B48370b:L48370b:{c.instructions+=3;NFSU2_TR(0x48370b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48370e:{NFSU2_TR(0x48370e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x448ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x448ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B483713:{NFSU2_TR(0x483713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L48373a;}}
}
B483715:L483715:{c.instructions+=6;NFSU2_TR(0x483715);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B48371b:{NFSU2_TR(0x48371b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B48371e:{NFSU2_TR(0x48371e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B483724:{NFSU2_TR(0x483724);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483725:{NFSU2_TR(0x483725);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483727:{NFSU2_TR(0x483727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48372cull));
TAIL_STATIC(0x440820u,440);
}
B48372c:L48372c:{c.instructions+=3;NFSU2_TR(0x48372c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48372f:{NFSU2_TR(0x48372f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483731:{NFSU2_TR(0x483731);
if(r1(R+518)){{goto L48373a;}}
}
B483733:L483733:{c.instructions+=2;NFSU2_TR(0x483733);
__builtin_memmove((R+4),(R+0),4);
}
B483735:{NFSU2_TR(0x483735);
TAIL_STATIC(0x47f5c0u,47f);
}
B48373a:L48373a:{c.instructions+=2;NFSU2_TR(0x48373a);
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
B48373c:{NFSU2_TR(0x48373c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483740:L483740:{c.instructions+=5;NFSU2_TR(0x483740);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483744:{NFSU2_TR(0x483744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483745:{NFSU2_TR(0x483745);
__builtin_memmove((R+24),(R+4),4);
}
B483747:{NFSU2_TR(0x483747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48374a:{NFSU2_TR(0x48374a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48374full));
TAIL_STATIC(0x47f660u,47f);
}
B48374f:L48374f:{c.instructions+=2;NFSU2_TR(0x48374f);
__builtin_memmove((R+4),(R+24),4);
}
B483751:{NFSU2_TR(0x483751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483756ull));
TAIL_STATIC(0x47f710u,47f);
}
B483756:L483756:{c.instructions+=2;NFSU2_TR(0x483756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483757:{NFSU2_TR(0x483757);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483760:L483760:{c.instructions+=3;NFSU2_TR(0x483760);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483764:{NFSU2_TR(0x483764);
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
B483766:{NFSU2_TR(0x483766);
if(r1(R+518)){{goto L4837bf;}}
}
B483768:L483768:{c.instructions+=4;NFSU2_TR(0x483768);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483769:{NFSU2_TR(0x483769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48376b:{NFSU2_TR(0x48376b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B483771:{NFSU2_TR(0x483771);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4837be;}}
}
B483773:L483773:{c.instructions+=2;NFSU2_TR(0x483773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483774:{NFSU2_TR(0x483774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483779ull));
TAIL_STATIC(0x47fe80u,47f);
}
B483779:L483779:{c.instructions+=4;NFSU2_TR(0x483779);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48377c:{NFSU2_TR(0x48377c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48377f:{NFSU2_TR(0x48377f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483782:{NFSU2_TR(0x483782);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48379b;}}
}
B483784:L483784:{c.instructions+=1;NFSU2_TR(0x483784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483789ull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B483789:L483789:{c.instructions+=2;NFSU2_TR(0x483789);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48378b:{NFSU2_TR(0x48378b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483790ull));
TAIL_STATIC(0x6f5889u,6f5);
}
B483790:L483790:{c.instructions+=4;NFSU2_TR(0x483790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483793:{NFSU2_TR(0x483793);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483796:{NFSU2_TR(0x483796);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483799:{NFSU2_TR(0x483799);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483784u);}goto L483784;}}
}
B48379b:L48379b:{c.instructions+=3;NFSU2_TR(0x48379b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48379e:{NFSU2_TR(0x48379e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4837a4:{NFSU2_TR(0x4837a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4837a9ull));
TAIL_STATIC(0x6f55d2u,6f5);
}
B4837a9:L4837a9:{c.instructions+=3;NFSU2_TR(0x4837a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4837af:{NFSU2_TR(0x4837af);
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
B4837b1:{NFSU2_TR(0x4837b1);
if(r1(R+518)){{goto L4837be;}}
}
B4837b3:L4837b3:{c.instructions+=3;NFSU2_TR(0x4837b3);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837b5:{NFSU2_TR(0x4837b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837b6:{NFSU2_TR(0x4837b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4837bbull));
TAIL_STATIC(0x6f879au,6f8);
}
B4837bb:L4837bb:{c.instructions+=1;NFSU2_TR(0x4837bb);
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
B4837be:L4837be:{c.instructions+=1;NFSU2_TR(0x4837be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4837bf:L4837bf:{c.instructions+=1;NFSU2_TR(0x4837bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4837c0:L4837c0:{c.instructions+=9;NFSU2_TR(0x4837c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837c1:{NFSU2_TR(0x4837c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4837c5:{NFSU2_TR(0x4837c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837c6:{NFSU2_TR(0x4837c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837c7:{NFSU2_TR(0x4837c7);
__builtin_memmove((R+24),(R+4),4);
}
B4837c9:{NFSU2_TR(0x4837c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4837cc:{NFSU2_TR(0x4837cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4837ce:{NFSU2_TR(0x4837ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837cf:{NFSU2_TR(0x4837cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483860;}}
}
B4837d5:L4837d5:{c.instructions+=6;NFSU2_TR(0x4837d5);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4837da:{NFSU2_TR(0x4837da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4837de:{NFSU2_TR(0x4837de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4837df:{NFSU2_TR(0x4837df);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r4(U+0))));
}
B4837e2:{NFSU2_TR(0x4837e2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4837e4:{NFSU2_TR(0x4837e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4837e9ull));
TAIL_STATIC(0x43e910u,43e);
}
B4837e9:L4837e9:{c.instructions+=4;NFSU2_TR(0x4837e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4837ef:{NFSU2_TR(0x4837ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4837f2:{NFSU2_TR(0x4837f2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4837f4:{NFSU2_TR(0x4837f4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L483811;}}
}
B4837f6:L4837f6:{c.instructions+=6;NFSU2_TR(0x4837f6);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4837fc:{NFSU2_TR(0x4837fc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B4837ff:{NFSU2_TR(0x4837ff);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B483805:{NFSU2_TR(0x483805);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483806:{NFSU2_TR(0x483806);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483807:{NFSU2_TR(0x483807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48380cull));
TAIL_STATIC(0x440820u,440);
}
B48380c:L48380c:{c.instructions+=2;NFSU2_TR(0x48380c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48380f:{NFSU2_TR(0x48380f);
__builtin_memmove((R+28),(R+0),4);
}
B483811:L483811:{c.instructions+=4;NFSU2_TR(0x483811);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483814:{NFSU2_TR(0x483814);
__builtin_memmove((R+0),gp(0x82af48),4);
}
B483819:{NFSU2_TR(0x483819);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48381a:{NFSU2_TR(0x48381a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48381full));
TAIL_STATIC(0x440e50u,440);
}
B48381f:L48381f:{c.instructions+=3;NFSU2_TR(0x48381f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483822:{NFSU2_TR(0x483822);
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
B483824:{NFSU2_TR(0x483824);
if(r1(R+518)){{goto L483830;}}
}
B483826:L483826:{c.instructions+=3;NFSU2_TR(0x483826);
u8 U[4];
w4(U+0,u32(0x78a6bcull));
s4(u32(r4(R+0)),r4(U+0));
}
B48382c:{NFSU2_TR(0x48382c);
__builtin_memmove((R+4),(R+0),4);
}
B48382e:{NFSU2_TR(0x48382e);
{goto L483832;}
}
B483830:L483830:{c.instructions+=1;NFSU2_TR(0x483830);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B483832:L483832:{c.instructions+=13;NFSU2_TR(0x483832);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483836:{NFSU2_TR(0x483836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483839:{NFSU2_TR(0x483839);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48383d:{NFSU2_TR(0x48383d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B483844:{NFSU2_TR(0x483844);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483845:{NFSU2_TR(0x483845);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B483848:{NFSU2_TR(0x483848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48384b:{NFSU2_TR(0x48384b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48384e:{NFSU2_TR(0x48384e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483850:{NFSU2_TR(0x483850);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483851:{NFSU2_TR(0x483851);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483852:{NFSU2_TR(0x483852);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483853:{NFSU2_TR(0x483853);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483856ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483856:L483856:{c.instructions+=2;NFSU2_TR(0x483856);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B48385e:{NFSU2_TR(0x48385e);
{goto L4838a6;}
}
B483860:L483860:{c.instructions+=4;NFSU2_TR(0x483860);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B483864:{NFSU2_TR(0x483864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B48386b:{NFSU2_TR(0x48386b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B48386f:{NFSU2_TR(0x48386f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4838a6;}}
}
B483871:L483871:{c.instructions+=3;NFSU2_TR(0x483871);
__builtin_memmove((R+0),gp(0x82af48),4);
}
B483876:{NFSU2_TR(0x483876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483877:{NFSU2_TR(0x483877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48387cull));
TAIL_STATIC(0x440e50u,440);
}
B48387c:L48387c:{c.instructions+=3;NFSU2_TR(0x48387c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48387f:{NFSU2_TR(0x48387f);
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
B483881:{NFSU2_TR(0x483881);
if(r1(R+518)){{goto L48388b;}}
}
B483883:L483883:{c.instructions+=2;NFSU2_TR(0x483883);
u8 U[4];
w4(U+0,u32(0x78a6bcull));
s4(u32(r4(R+0)),r4(U+0));
}
B483889:{NFSU2_TR(0x483889);
{goto L48388d;}
}
B48388b:L48388b:{c.instructions+=1;NFSU2_TR(0x48388b);
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
B48388d:L48388d:{c.instructions+=11;NFSU2_TR(0x48388d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483890:{NFSU2_TR(0x483890);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B483893:{NFSU2_TR(0x483893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483896:{NFSU2_TR(0x483896);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B483899:{NFSU2_TR(0x483899);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48389d:{NFSU2_TR(0x48389d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48389f:{NFSU2_TR(0x48389f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4838a0:{NFSU2_TR(0x4838a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4838a1:{NFSU2_TR(0x4838a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4838a2:{NFSU2_TR(0x4838a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4838a3:{NFSU2_TR(0x4838a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4838a6:L4838a6:{c.instructions+=4;NFSU2_TR(0x4838a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4838a9:{NFSU2_TR(0x4838a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4838ac:{NFSU2_TR(0x4838ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4838ad:{NFSU2_TR(0x4838ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838b2ull));
TAIL_STATIC(0x477d60u,477);
}
B4838b2:L4838b2:{c.instructions+=12;NFSU2_TR(0x4838b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4838b5:{NFSU2_TR(0x4838b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4838b8:{NFSU2_TR(0x4838b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4838bb:{NFSU2_TR(0x4838bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4838be:{NFSU2_TR(0x4838be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4838c1:{NFSU2_TR(0x4838c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4838c4:{NFSU2_TR(0x4838c4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4838c6:{NFSU2_TR(0x4838c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4838c9:{NFSU2_TR(0x4838c9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4838cb:{NFSU2_TR(0x4838cb);
__builtin_memmove((R+4),(R+12),4);
}
B4838cd:{NFSU2_TR(0x4838cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4838d0:{NFSU2_TR(0x4838d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838d5ull));
TAIL_STATIC(0x477f80u,477);
}
B4838d5:L4838d5:{c.instructions+=2;NFSU2_TR(0x4838d5);
__builtin_memmove((R+4),(R+12),4);
}
B4838d7:{NFSU2_TR(0x4838d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838dcull));
TAIL_STATIC(0x477eb0u,477);
}
B4838dc:L4838dc:{c.instructions+=2;NFSU2_TR(0x4838dc);
__builtin_memmove((R+4),(R+12),4);
}
B4838de:{NFSU2_TR(0x4838de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838e3ull));
TAIL_STATIC(0x477df0u,477);
}
B4838e3:L4838e3:{c.instructions+=2;NFSU2_TR(0x4838e3);
__builtin_memmove((R+4),(R+12),4);
}
B4838e5:{NFSU2_TR(0x4838e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838eaull));
TAIL_STATIC(0x480270u,480);
}
B4838ea:L4838ea:{c.instructions+=2;NFSU2_TR(0x4838ea);
__builtin_memmove((R+4),(R+12),4);
}
B4838ec:{NFSU2_TR(0x4838ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4838f1ull));
TAIL_STATIC(0x480320u,480);
}
B4838f1:L4838f1:{c.instructions+=6;NFSU2_TR(0x4838f1);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w1(R+523,scarry<u32>(r4(U+12),u32(0x1ull)));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+16,u32(u32(r4(U+12))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B4838f5:{NFSU2_TR(0x4838f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4838f6:{NFSU2_TR(0x4838f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4838f7:{NFSU2_TR(0x4838f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4838f8:{NFSU2_TR(0x4838f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4838f9:{NFSU2_TR(0x4838f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483900:L483900:{c.instructions+=8;NFSU2_TR(0x483900);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483901:{NFSU2_TR(0x483901);
__builtin_memmove((R+12),(R+4),4);
}
B483903:{NFSU2_TR(0x483903);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483906:{NFSU2_TR(0x483906);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483909:{NFSU2_TR(0x483909);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48390a:{NFSU2_TR(0x48390a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B48390c:{NFSU2_TR(0x48390c);
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
B48390e:{NFSU2_TR(0x48390e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48395a;}}
}
B483910:L483910:{c.instructions+=2;NFSU2_TR(0x483910);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483913:{NFSU2_TR(0x483913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483914:L483914:{c.instructions+=3;NFSU2_TR(0x483914);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B483917:{NFSU2_TR(0x483917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483919:{NFSU2_TR(0x483919);
if(r1(R+518)){{goto L48394e;}}
}
B48391b:L48391b:{c.instructions+=4;NFSU2_TR(0x48391b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48391e:{NFSU2_TR(0x48391e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B483920:{NFSU2_TR(0x483920);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483922:{NFSU2_TR(0x483922);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48394e;}}
}
B483924:L483924:{c.instructions+=3;NFSU2_TR(0x483924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483927:{NFSU2_TR(0x483927);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48392a:{NFSU2_TR(0x48392a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48392full));
TAIL_STATIC(0x478120u,478);
}
B48392f:L48392f:{c.instructions+=5;NFSU2_TR(0x48392f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483932:{NFSU2_TR(0x483932);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B483935:{NFSU2_TR(0x483935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483938:{NFSU2_TR(0x483938);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B48393b:{NFSU2_TR(0x48393b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483940ull));
TAIL_STATIC(0x480420u,480);
}
B483940:L483940:{c.instructions+=6;NFSU2_TR(0x483940);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483943:{NFSU2_TR(0x483943);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B483946:{NFSU2_TR(0x483946);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483949:{NFSU2_TR(0x483949);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48394a:{NFSU2_TR(0x48394a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48394c:{NFSU2_TR(0x48394c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483924u);}goto L483924;}}
}
B48394e:L48394e:{c.instructions+=5;NFSU2_TR(0x48394e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483951:{NFSU2_TR(0x483951);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483954:{NFSU2_TR(0x483954);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B483955:{NFSU2_TR(0x483955);
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
B483957:{NFSU2_TR(0x483957);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483914u);}goto L483914;}}
}
B483959:L483959:{c.instructions+=1;NFSU2_TR(0x483959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48395a:L48395a:{c.instructions+=3;NFSU2_TR(0x48395a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48395b:{NFSU2_TR(0x48395b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48395c:{NFSU2_TR(0x48395c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483960:L483960:{c.instructions+=12;NFSU2_TR(0x483960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483961:{NFSU2_TR(0x483961);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483962:{NFSU2_TR(0x483962);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483963:{NFSU2_TR(0x483963);
__builtin_memmove((R+20),(R+4),4);
}
B483965:{NFSU2_TR(0x483965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483968:{NFSU2_TR(0x483968);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48396c:{NFSU2_TR(0x48396c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48396d:{NFSU2_TR(0x48396d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B483970:{NFSU2_TR(0x483970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483973:{NFSU2_TR(0x483973);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B483975:{NFSU2_TR(0x483975);
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
B483977:{NFSU2_TR(0x483977);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4839b8;}}
}
B483979:L483979:{c.instructions+=2;NFSU2_TR(0x483979);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48397a:{NFSU2_TR(0x48397a);
__builtin_memmove((R+12),(R+12),4);
}
B483980:L483980:{c.instructions+=5;NFSU2_TR(0x483980);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483983:{NFSU2_TR(0x483983);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B483986:{NFSU2_TR(0x483986);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483988:{NFSU2_TR(0x483988);
__builtin_memmove((R+4),(R+24),4);
}
B48398a:{NFSU2_TR(0x48398a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48398dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48398d:L48398d:{c.instructions+=5;NFSU2_TR(0x48398d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48398f:{NFSU2_TR(0x48398f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483993:{NFSU2_TR(0x483993);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483994:{NFSU2_TR(0x483994);
__builtin_memmove((R+4),(R+28),4);
}
B483996:{NFSU2_TR(0x483996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48399bull));
TAIL_STATIC(0x480910u,480);
}
B48399b:L48399b:{c.instructions+=4;NFSU2_TR(0x48399b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48399c:{NFSU2_TR(0x48399c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4839a0:{NFSU2_TR(0x4839a0);
__builtin_memmove((R+4),(R+24),4);
}
B4839a2:{NFSU2_TR(0x4839a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4839a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4839a5:L4839a5:{c.instructions+=7;NFSU2_TR(0x4839a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4839a8:{NFSU2_TR(0x4839a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4839ac:{NFSU2_TR(0x4839ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4839af:{NFSU2_TR(0x4839af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4839b2:{NFSU2_TR(0x4839b2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4839b3:{NFSU2_TR(0x4839b3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4839b5:{NFSU2_TR(0x4839b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483980u);}goto L483980;}}
}
B4839b7:L4839b7:{c.instructions+=1;NFSU2_TR(0x4839b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4839b8:L4839b8:{c.instructions+=5;NFSU2_TR(0x4839b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4839b9:{NFSU2_TR(0x4839b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4839ba:{NFSU2_TR(0x4839ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4839bb:{NFSU2_TR(0x4839bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4839bc:{NFSU2_TR(0x4839bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4839c0:L4839c0:{c.instructions+=8;NFSU2_TR(0x4839c0);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B4839c5:{NFSU2_TR(0x4839c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4839c6:{NFSU2_TR(0x4839c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4839c7:{NFSU2_TR(0x4839c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4839c8:{NFSU2_TR(0x4839c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4839ca:{NFSU2_TR(0x4839ca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4839cd:{NFSU2_TR(0x4839cd);
__builtin_memmove((R+24),(R+4),4);
}
B4839cf:{NFSU2_TR(0x4839cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4839d8;}}
}
B4839d1:L4839d1:{c.instructions+=1;NFSU2_TR(0x4839d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4839d6ull));
TAIL_STATIC(0x480d20u,480);
}
B4839d6:L4839d6:{c.instructions+=1;NFSU2_TR(0x4839d6);
{goto L4839e4;}
}
B4839d8:L4839d8:{c.instructions+=2;NFSU2_TR(0x4839d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4839db:{NFSU2_TR(0x4839db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4839f0;}}
}
B4839dd:L4839dd:{c.instructions+=2;NFSU2_TR(0x4839dd);
__builtin_memmove((R+4),(R+24),4);
}
B4839df:{NFSU2_TR(0x4839df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4839e4ull));
TAIL_STATIC(0x480eb0u,480);
}
B4839e4:L4839e4:{c.instructions+=2;NFSU2_TR(0x4839e4);
__builtin_memmove(gp(0x82b8a0),(R+28),4);
}
B4839ea:{NFSU2_TR(0x4839ea);
__builtin_memmove(gp(0x82b89c),(R+28),4);
}
B4839f0:L4839f0:{c.instructions+=3;NFSU2_TR(0x4839f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4839f6:{NFSU2_TR(0x4839f6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4839f8:{NFSU2_TR(0x4839f8);
if(r1(R+518)){{goto L483a25;}}
}
B4839fa:L4839fa:{c.instructions+=1;NFSU2_TR(0x4839fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4839ffull));
TAIL_STATIC(0x72191fu,721);
}
B4839ff:L4839ff:{c.instructions+=3;NFSU2_TR(0x4839ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483a02:{NFSU2_TR(0x483a02);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483a04:{NFSU2_TR(0x483a04);
if(r1(R+518)){{goto L483a12;}}
}
B483a06:L483a06:{c.instructions+=2;NFSU2_TR(0x483a06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a07:{NFSU2_TR(0x483a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a0cull));
TAIL_STATIC(0x440540u,440);
}
B483a0c:L483a0c:{c.instructions+=2;NFSU2_TR(0x483a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483a0f:{NFSU2_TR(0x483a0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a12:L483a12:{c.instructions+=3;NFSU2_TR(0x483a12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483a15:{NFSU2_TR(0x483a15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483a17:{NFSU2_TR(0x483a17);
if(r1(R+518)){{goto L483a25;}}
}
B483a19:L483a19:{c.instructions+=2;NFSU2_TR(0x483a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a1a:{NFSU2_TR(0x483a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a1full));
TAIL_STATIC(0x575630u,575);
}
B483a1f:L483a1f:{c.instructions+=2;NFSU2_TR(0x483a1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483a22:{NFSU2_TR(0x483a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a25:L483a25:{c.instructions+=3;NFSU2_TR(0x483a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483a28:{NFSU2_TR(0x483a28);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a2a:{NFSU2_TR(0x483a2a);
if(r1(R+518)){{goto L483a35;}}
}
B483a2c:L483a2c:{c.instructions+=3;NFSU2_TR(0x483a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483a2e:{NFSU2_TR(0x483a2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a30:{NFSU2_TR(0x483a30);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a32ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483a32:L483a32:{c.instructions+=1;NFSU2_TR(0x483a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a35:L483a35:{c.instructions+=3;NFSU2_TR(0x483a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483a38:{NFSU2_TR(0x483a38);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a3a:{NFSU2_TR(0x483a3a);
if(r1(R+518)){{goto L483a45;}}
}
B483a3c:L483a3c:{c.instructions+=3;NFSU2_TR(0x483a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483a3e:{NFSU2_TR(0x483a3e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a40:{NFSU2_TR(0x483a40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a42ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483a42:L483a42:{c.instructions+=1;NFSU2_TR(0x483a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a45:L483a45:{c.instructions+=3;NFSU2_TR(0x483a45);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B483a4b:{NFSU2_TR(0x483a4b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483a4d:{NFSU2_TR(0x483a4d);
if(r1(R+518)){{goto L483a6a;}}
}
B483a4f:L483a4f:{c.instructions+=1;NFSU2_TR(0x483a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a54ull));
TAIL_STATIC(0x46c860u,46c);
}
B483a54:L483a54:{c.instructions+=3;NFSU2_TR(0x483a54);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B483a5a:{NFSU2_TR(0x483a5a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a5c:{NFSU2_TR(0x483a5c);
if(r1(R+518)){{goto L483a64;}}
}
B483a5e:L483a5e:{c.instructions+=3;NFSU2_TR(0x483a5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483a60:{NFSU2_TR(0x483a60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a62:{NFSU2_TR(0x483a62);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a64ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483a64:L483a64:{c.instructions+=1;NFSU2_TR(0x483a64);
__builtin_memmove(gp(0x82ba30),(R+28),4);
}
B483a6a:L483a6a:{c.instructions+=3;NFSU2_TR(0x483a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483a6d:{NFSU2_TR(0x483a6d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a6f:{NFSU2_TR(0x483a6f);
if(r1(R+518)){{goto L483a86;}}
}
B483a71:L483a71:{c.instructions+=2;NFSU2_TR(0x483a71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483a73:{NFSU2_TR(0x483a73);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483a76:L483a76:{c.instructions+=3;NFSU2_TR(0x483a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483a79:{NFSU2_TR(0x483a79);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a7b:{NFSU2_TR(0x483a7b);
if(r1(R+518)){{goto L483a83;}}
}
B483a7d:L483a7d:{c.instructions+=3;NFSU2_TR(0x483a7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483a7f:{NFSU2_TR(0x483a7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a81:{NFSU2_TR(0x483a81);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a83ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483a83:L483a83:{c.instructions+=1;NFSU2_TR(0x483a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a86:L483a86:{c.instructions+=3;NFSU2_TR(0x483a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483a8c:{NFSU2_TR(0x483a8c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483a8e:{NFSU2_TR(0x483a8e);
if(r1(R+518)){{goto L483a9c;}}
}
B483a90:L483a90:{c.instructions+=3;NFSU2_TR(0x483a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483a92:{NFSU2_TR(0x483a92);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483a94:{NFSU2_TR(0x483a94);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483a96ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483a96:L483a96:{c.instructions+=1;NFSU2_TR(0x483a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483a9c:L483a9c:{c.instructions+=3;NFSU2_TR(0x483a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483aa2:{NFSU2_TR(0x483aa2);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483aa4:{NFSU2_TR(0x483aa4);
if(r1(R+518)){{goto L483ab2;}}
}
B483aa6:L483aa6:{c.instructions+=3;NFSU2_TR(0x483aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483aa8:{NFSU2_TR(0x483aa8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483aaa:{NFSU2_TR(0x483aaa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483aacull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483aac:L483aac:{c.instructions+=1;NFSU2_TR(0x483aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483ab2:L483ab2:{c.instructions+=3;NFSU2_TR(0x483ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483ab5:{NFSU2_TR(0x483ab5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483ab7:{NFSU2_TR(0x483ab7);
if(r1(R+518)){{goto L483ac2;}}
}
B483ab9:L483ab9:{c.instructions+=3;NFSU2_TR(0x483ab9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483abb:{NFSU2_TR(0x483abb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483abd:{NFSU2_TR(0x483abd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483abfull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483abf:L483abf:{c.instructions+=1;NFSU2_TR(0x483abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483ac2:L483ac2:{c.instructions+=3;NFSU2_TR(0x483ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483ac8:{NFSU2_TR(0x483ac8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483aca:{NFSU2_TR(0x483aca);
if(r1(R+518)){{goto L483ad8;}}
}
B483acc:L483acc:{c.instructions+=3;NFSU2_TR(0x483acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483ace:{NFSU2_TR(0x483ace);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483ad0:{NFSU2_TR(0x483ad0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ad2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483ad2:L483ad2:{c.instructions+=1;NFSU2_TR(0x483ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483ad8:L483ad8:{c.instructions+=3;NFSU2_TR(0x483ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483adb:{NFSU2_TR(0x483adb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483add:{NFSU2_TR(0x483add);
if(r1(R+518)){{goto L483aeb;}}
}
B483adf:L483adf:{c.instructions+=2;NFSU2_TR(0x483adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483ae0:{NFSU2_TR(0x483ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ae5ull));
TAIL_STATIC(0x575630u,575);
}
B483ae5:L483ae5:{c.instructions+=2;NFSU2_TR(0x483ae5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483ae8:{NFSU2_TR(0x483ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483aeb:L483aeb:{c.instructions+=3;NFSU2_TR(0x483aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B483af1:{NFSU2_TR(0x483af1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483af3:{NFSU2_TR(0x483af3);
if(r1(R+518)){{goto L483b36;}}
}
B483af5:L483af5:{c.instructions+=1;NFSU2_TR(0x483af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483afaull));
TAIL_STATIC(0x72191fu,721);
}
B483afa:L483afa:{c.instructions+=3;NFSU2_TR(0x483afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483afd:{NFSU2_TR(0x483afd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483aff:{NFSU2_TR(0x483aff);
if(r1(R+518)){{goto L483b0d;}}
}
B483b01:L483b01:{c.instructions+=2;NFSU2_TR(0x483b01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b02:{NFSU2_TR(0x483b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483b07ull));
TAIL_STATIC(0x440540u,440);
}
B483b07:L483b07:{c.instructions+=2;NFSU2_TR(0x483b07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483b0a:{NFSU2_TR(0x483b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483b0d:L483b0d:{c.instructions+=3;NFSU2_TR(0x483b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483b10:{NFSU2_TR(0x483b10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483b12:{NFSU2_TR(0x483b12);
if(r1(R+518)){{goto L483b20;}}
}
B483b14:L483b14:{c.instructions+=2;NFSU2_TR(0x483b14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b15:{NFSU2_TR(0x483b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483b1aull));
TAIL_STATIC(0x575630u,575);
}
B483b1a:L483b1a:{c.instructions+=2;NFSU2_TR(0x483b1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483b1d:{NFSU2_TR(0x483b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483b20:L483b20:{c.instructions+=3;NFSU2_TR(0x483b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483b26:{NFSU2_TR(0x483b26);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B483b28:{NFSU2_TR(0x483b28);
if(r1(R+518)){{goto L483b30;}}
}
B483b2a:L483b2a:{c.instructions+=3;NFSU2_TR(0x483b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483b2c:{NFSU2_TR(0x483b2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b2e:{NFSU2_TR(0x483b2e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483b30ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B483b30:L483b30:{c.instructions+=1;NFSU2_TR(0x483b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483b36:L483b36:{c.instructions+=4;NFSU2_TR(0x483b36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B483b37:{NFSU2_TR(0x483b37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483b38:{NFSU2_TR(0x483b38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B483b39:{NFSU2_TR(0x483b39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483b40:L483b40:{c.instructions+=6;NFSU2_TR(0x483b40);
if(mod_hook_table[12]&&!mod_bypass_take(12)){SPILL();c.pc=0x483b40u;mod_hook_table[12](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+8u);TAIL_DYNAMIC(ra_);}}
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b41:{NFSU2_TR(0x483b41);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B483b46:{NFSU2_TR(0x483b46);
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
B483b48:{NFSU2_TR(0x483b48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b49:{NFSU2_TR(0x483b49);
__builtin_memmove((R+12),(R+4),4);
}
B483b4b:{NFSU2_TR(0x483b4b);
if(r1(R+518)){{goto L483e0e;}}
}
B483b51:L483b51:{c.instructions+=4;NFSU2_TR(0x483b51);
__builtin_memmove((R+0),gp(0x82b8dc),4);
}
B483b56:{NFSU2_TR(0x483b56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483b58:{NFSU2_TR(0x483b58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483b59:{NFSU2_TR(0x483b59);
if(r1(R+518)){{goto L483bc1;}}
}
B483b5b:L483b5b:{c.instructions+=3;NFSU2_TR(0x483b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B483b61:{NFSU2_TR(0x483b61);
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
B483b63:{NFSU2_TR(0x483b63);
if(r1(R+518)){{goto L483e0d;}}
}
B483b69:L483b69:{c.instructions+=3;NFSU2_TR(0x483b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483b6f:{NFSU2_TR(0x483b6f);
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
B483b72:{NFSU2_TR(0x483b72);
if(r1(R+518)){{goto L483e0d;}}
}
B483b78:L483b78:{c.instructions+=5;NFSU2_TR(0x483b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483b7e:{NFSU2_TR(0x483b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B483b88:{NFSU2_TR(0x483b88);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B483b8d:{NFSU2_TR(0x483b8d);
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
B483b8f:{NFSU2_TR(0x483b8f);
if(r1(R+518)){{goto L483e0d;}}
}
B483b95:L483b95:{c.instructions+=3;NFSU2_TR(0x483b95);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B483b9b:{NFSU2_TR(0x483b9b);
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
B483b9d:{NFSU2_TR(0x483b9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L483e0d;}}
}
B483ba3:L483ba3:{c.instructions+=4;NFSU2_TR(0x483ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483ba9:{NFSU2_TR(0x483ba9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483bab:{NFSU2_TR(0x483bab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483bac:{NFSU2_TR(0x483bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483bb1ull));
TAIL_STATIC(0x739030u,739);
}
B483bb1:L483bb1:{c.instructions+=6;NFSU2_TR(0x483bb1);
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
B483bb4:{NFSU2_TR(0x483bb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483bbb:{NFSU2_TR(0x483bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483bbc:{NFSU2_TR(0x483bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B483bbd:{NFSU2_TR(0x483bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B483bbe:{NFSU2_TR(0x483bbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483bc1:L483bc1:{c.instructions+=2;NFSU2_TR(0x483bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483bc4:{NFSU2_TR(0x483bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483bc9ull));
TAIL_STATIC(0x458a40u,458);
}
B483bc9:L483bc9:{c.instructions+=3;NFSU2_TR(0x483bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483bcf:{NFSU2_TR(0x483bcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483bd0:{NFSU2_TR(0x483bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483bd5ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B483bd5:L483bd5:{c.instructions+=5;NFSU2_TR(0x483bd5);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B483bdb:{NFSU2_TR(0x483bdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483bde:{NFSU2_TR(0x483bde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B483be0:{NFSU2_TR(0x483be0);
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
B483be3:{NFSU2_TR(0x483be3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483e0d;}}
}
B483be9:L483be9:{c.instructions+=1;NFSU2_TR(0x483be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483beeull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483bee:L483bee:{c.instructions+=5;NFSU2_TR(0x483bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483bf4:{NFSU2_TR(0x483bf4);
__builtin_memmove((R+0),gp(0x82bc5d),1);
}
B483bf9:{NFSU2_TR(0x483bf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483bfb:{NFSU2_TR(0x483bfb);
__builtin_memmove((R+0),gp(0x82b8ea),1);
}
B483c00:{NFSU2_TR(0x483c00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c2b;}}
}
B483c02:L483c02:{c.instructions+=2;NFSU2_TR(0x483c02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483c04:{NFSU2_TR(0x483c04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c56;}}
}
B483c06:L483c06:{c.instructions+=2;NFSU2_TR(0x483c06);
s1(0x82b8ea,u8(0x1ull));
}
B483c0d:{NFSU2_TR(0x483c0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c12ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c12:L483c12:{c.instructions+=4;NFSU2_TR(0x483c12);
__builtin_memmove((R+8),gp(0x82b8f0),4);
}
B483c18:{NFSU2_TR(0x483c18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c19:{NFSU2_TR(0x483c19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c1a:{NFSU2_TR(0x483c1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c1full));
TAIL_STATIC(0x43be20u,43b);
}
B483c1f:L483c1f:{c.instructions+=3;NFSU2_TR(0x483c1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B483c21:{NFSU2_TR(0x483c21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483c24:{NFSU2_TR(0x483c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c29ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c29:L483c29:{c.instructions+=1;NFSU2_TR(0x483c29);
{goto L483c51;}
}
B483c2b:L483c2b:{c.instructions+=2;NFSU2_TR(0x483c2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483c2d:{NFSU2_TR(0x483c2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c56;}}
}
B483c2f:L483c2f:{c.instructions+=1;NFSU2_TR(0x483c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c34ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c34:L483c34:{c.instructions+=4;NFSU2_TR(0x483c34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c35:{NFSU2_TR(0x483c35);
__builtin_memmove((R+0),gp(0x82b8f0),4);
}
B483c3a:{NFSU2_TR(0x483c3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c3b:{NFSU2_TR(0x483c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c40ull));
TAIL_STATIC(0x43be20u,43b);
}
B483c40:L483c40:{c.instructions+=3;NFSU2_TR(0x483c40);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B483c42:{NFSU2_TR(0x483c42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483c45:{NFSU2_TR(0x483c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c4aull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c4a:L483c4a:{c.instructions+=1;NFSU2_TR(0x483c4a);
s1(0x82b8ea,u8(0x0ull));
}
B483c51:L483c51:{c.instructions+=1;NFSU2_TR(0x483c51);
__builtin_memmove(gp(0x82b8f0),(R+0),4);
}
B483c56:L483c56:{c.instructions+=3;NFSU2_TR(0x483c56);
u8 U[2];
__builtin_memmove((U+0),gp(0x82bc64),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B483c5d:{NFSU2_TR(0x483c5d);
__builtin_memmove((R+0),gp(0x82b8e8),1);
}
B483c62:{NFSU2_TR(0x483c62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c7b;}}
}
B483c64:L483c64:{c.instructions+=2;NFSU2_TR(0x483c64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483c66:{NFSU2_TR(0x483c66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c9d;}}
}
B483c68:L483c68:{c.instructions+=2;NFSU2_TR(0x483c68);
s1(0x82b8e8,u8(0x1ull));
}
B483c6f:{NFSU2_TR(0x483c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c74ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c74:L483c74:{c.instructions+=2;NFSU2_TR(0x483c74);
__builtin_memmove(gp(0x82b8ec),(R+0),4);
}
B483c79:{NFSU2_TR(0x483c79);
{goto L483c9d;}
}
B483c7b:L483c7b:{c.instructions+=2;NFSU2_TR(0x483c7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483c7d:{NFSU2_TR(0x483c7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483c9d;}}
}
B483c7f:L483c7f:{c.instructions+=1;NFSU2_TR(0x483c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c84ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B483c84:L483c84:{c.instructions+=4;NFSU2_TR(0x483c84);
__builtin_memmove((R+4),gp(0x82b8ec),4);
}
B483c8a:{NFSU2_TR(0x483c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c8b:{NFSU2_TR(0x483c8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483c8c:{NFSU2_TR(0x483c8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483c91ull));
TAIL_STATIC(0x43be20u,43b);
}
B483c91:L483c91:{c.instructions+=3;NFSU2_TR(0x483c91);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B483c93:{NFSU2_TR(0x483c93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483c96:{NFSU2_TR(0x483c96);
s1(0x82b8e8,u8(0x0ull));
}
B483c9d:L483c9d:{c.instructions+=5;NFSU2_TR(0x483c9d);
u8 U[2];
__builtin_memmove((U+0),gp(0x82bc65),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B483ca4:{NFSU2_TR(0x483ca4);
__builtin_memmove((R+8),(R+518),1);
}
B483ca7:{NFSU2_TR(0x483ca7);
__builtin_memmove(gp(0x82b8e9),(R+8),1);
}
B483cad:{NFSU2_TR(0x483cad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483cb3:{NFSU2_TR(0x483cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483cb8ull));
TAIL_STATIC(0x46d7e0u,46d);
}
B483cb8:L483cb8:{c.instructions+=3;NFSU2_TR(0x483cb8);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B483cbe:{NFSU2_TR(0x483cbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483cc0:{NFSU2_TR(0x483cc0);
if(r1(R+518)){{goto L483cc7;}}
}
B483cc2:L483cc2:{c.instructions+=1;NFSU2_TR(0x483cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483cc7ull));
TAIL_STATIC(0x45abe0u,45a);
}
B483cc7:L483cc7:{c.instructions+=3;NFSU2_TR(0x483cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483cca:{NFSU2_TR(0x483cca);
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
B483ccc:{NFSU2_TR(0x483ccc);
if(r1(R+518)){{goto L483cd5;}}
}
B483cce:L483cce:{c.instructions+=3;NFSU2_TR(0x483cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483cd0:{NFSU2_TR(0x483cd0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483cd2:{NFSU2_TR(0x483cd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483cd5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483cd5:L483cd5:{c.instructions+=9;NFSU2_TR(0x483cd5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B483cd9:{NFSU2_TR(0x483cd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483cdd:{NFSU2_TR(0x483cdd);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B483ce0:{NFSU2_TR(0x483ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483ce4:{NFSU2_TR(0x483ce4);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B483ce7:{NFSU2_TR(0x483ce7);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B483ced:{NFSU2_TR(0x483ced);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B483cf0:{NFSU2_TR(0x483cf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B483cf2:{NFSU2_TR(0x483cf2);
if(r1(R+518)){{goto L483cfc;}}
}
B483cf4:L483cf4:{c.instructions+=1;NFSU2_TR(0x483cf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B483cfc:L483cfc:{c.instructions+=6;NFSU2_TR(0x483cfc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483cfd:{NFSU2_TR(0x483cfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483d03:{NFSU2_TR(0x483d03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d04:{NFSU2_TR(0x483d04);
__builtin_memmove((R+28),(R+24),4);
}
B483d06:{NFSU2_TR(0x483d06);
w4(R+20,u32(0x9ull));
}
B483d0b:{NFSU2_TR(0x483d0b);
{goto L483d10;}
}
B483d10:L483d10:{c.instructions+=3;NFSU2_TR(0x483d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483d12:{NFSU2_TR(0x483d12);
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
B483d14:{NFSU2_TR(0x483d14);
if(r1(R+518)){{goto L483d20;}}
}
B483d16:L483d16:{c.instructions+=4;NFSU2_TR(0x483d16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B483d1a:{NFSU2_TR(0x483d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483d1c:{NFSU2_TR(0x483d1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d1d:{NFSU2_TR(0x483d1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483d20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483d20:L483d20:{c.instructions+=3;NFSU2_TR(0x483d20);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B483d23:{NFSU2_TR(0x483d23);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B483d24:{NFSU2_TR(0x483d24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483d10u);}goto L483d10;}}
}
B483d26:L483d26:{c.instructions+=3;NFSU2_TR(0x483d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483d2c:{NFSU2_TR(0x483d2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483d2e:{NFSU2_TR(0x483d2e);
if(r1(R+518)){{goto L483d43;}}
}
B483d30:L483d30:{c.instructions+=3;NFSU2_TR(0x483d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B483d33:{NFSU2_TR(0x483d33);
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
B483d35:{NFSU2_TR(0x483d35);
if(r1(R+518)){{goto L483d43;}}
}
B483d37:L483d37:{c.instructions+=5;NFSU2_TR(0x483d37);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483d3b:{NFSU2_TR(0x483d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483d3d:{NFSU2_TR(0x483d3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d3e:{NFSU2_TR(0x483d3e);
__builtin_memmove((R+4),(R+0),4);
}
B483d40:{NFSU2_TR(0x483d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483d43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483d43:L483d43:{c.instructions+=1;NFSU2_TR(0x483d43);
w4(R+28,u32(0x9ull));
}
B483d48:L483d48:{c.instructions+=3;NFSU2_TR(0x483d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483d4a:{NFSU2_TR(0x483d4a);
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
B483d4c:{NFSU2_TR(0x483d4c);
if(r1(R+518)){{goto L483d53;}}
}
B483d4e:L483d4e:{c.instructions+=2;NFSU2_TR(0x483d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483d50:{NFSU2_TR(0x483d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483d53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483d53:L483d53:{c.instructions+=3;NFSU2_TR(0x483d53);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B483d56:{NFSU2_TR(0x483d56);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B483d57:{NFSU2_TR(0x483d57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483d48u);}goto L483d48;}}
}
B483d59:L483d59:{c.instructions+=5;NFSU2_TR(0x483d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483d5c:{NFSU2_TR(0x483d5c);
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
B483d5e:{NFSU2_TR(0x483d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B483d5f:{NFSU2_TR(0x483d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B483d60:{NFSU2_TR(0x483d60);
if(r1(R+518)){{goto L483d69;}}
}
B483d62:L483d62:{c.instructions+=3;NFSU2_TR(0x483d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483d64:{NFSU2_TR(0x483d64);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d66:{NFSU2_TR(0x483d66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483d69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483d69:L483d69:{c.instructions+=4;NFSU2_TR(0x483d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483d6c:{NFSU2_TR(0x483d6c);
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
B483d6e:{NFSU2_TR(0x483d6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B483d72:{NFSU2_TR(0x483d72);
if(r1(R+518)){{goto L483d7a;}}
}
B483d74:L483d74:{c.instructions+=3;NFSU2_TR(0x483d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B483d76:{NFSU2_TR(0x483d76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d77:{NFSU2_TR(0x483d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483d7aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B483d7a:L483d7a:{c.instructions+=3;NFSU2_TR(0x483d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483d80:{NFSU2_TR(0x483d80);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483d82:{NFSU2_TR(0x483d82);
if(r1(R+518)){{goto L483dda;}}
}
B483d84:L483d84:{c.instructions+=3;NFSU2_TR(0x483d84);
__builtin_memmove((R+0),gp(0x890118),4);
}
B483d89:{NFSU2_TR(0x483d89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483d8b:{NFSU2_TR(0x483d8b);
if(r1(R+518)){{goto L483dd2;}}
}
B483d8d:L483d8d:{c.instructions+=3;NFSU2_TR(0x483d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483d8f:{NFSU2_TR(0x483d8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483d92:{NFSU2_TR(0x483d92);
if(r1(R+518)){{goto L483d9e;}}
}
B483d94:L483d94:{c.instructions+=2;NFSU2_TR(0x483d94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483d97:{NFSU2_TR(0x483d97);
if(r1(R+518)){{goto L483d9e;}}
}
B483d99:L483d99:{c.instructions+=3;NFSU2_TR(0x483d99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d9a:{NFSU2_TR(0x483d9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d9c:{NFSU2_TR(0x483d9c);
{goto L483da1;}
}
B483d9e:L483d9e:{c.instructions+=2;NFSU2_TR(0x483d9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483d9f:{NFSU2_TR(0x483d9f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483da1:L483da1:{c.instructions+=1;NFSU2_TR(0x483da1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483da6ull));
TAIL_STATIC(0x482350u,482);
}
B483da6:L483da6:{c.instructions+=6;NFSU2_TR(0x483da6);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B483dab:{NFSU2_TR(0x483dab);
__builtin_memmove((R+8),gp(0x890118),4);
}
B483db1:{NFSU2_TR(0x483db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B483db3:{NFSU2_TR(0x483db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B483db5:{NFSU2_TR(0x483db5);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b8d4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483dbb:{NFSU2_TR(0x483dbb);
if(r1(R+518)){{goto L483dc2;}}
}
B483dbd:L483dbd:{c.instructions+=1;NFSU2_TR(0x483dbd);
__builtin_memmove(gp(0x82b8d4),(R+0),4);
}
B483dc2:L483dc2:{c.instructions+=2;NFSU2_TR(0x483dc2);
u8 U[8];
__builtin_memmove((U+0),gp(0x82b8d8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B483dc8:{NFSU2_TR(0x483dc8);
if(r1(R+518)){{goto L483dda;}}
}
B483dca:L483dca:{c.instructions+=2;NFSU2_TR(0x483dca);
__builtin_memmove(gp(0x82b8d8),(R+4),4);
}
B483dd0:{NFSU2_TR(0x483dd0);
{goto L483dda;}
}
B483dd2:L483dd2:{c.instructions+=3;NFSU2_TR(0x483dd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483dd3:{NFSU2_TR(0x483dd3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483dd5:{NFSU2_TR(0x483dd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ddaull));
TAIL_STATIC(0x482350u,482);
}
B483dda:L483dda:{c.instructions+=4;NFSU2_TR(0x483dda);
__builtin_memmove((R+0),gp(0x82bc6c),4);
}
B483ddf:{NFSU2_TR(0x483ddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483de1:{NFSU2_TR(0x483de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483de4:{NFSU2_TR(0x483de4);
if(r1(R+518)){{goto L483e08;}}
}
B483de6:L483de6:{c.instructions+=2;NFSU2_TR(0x483de6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B483de7:{NFSU2_TR(0x483de7);
if(r1(R+518)){{goto L483def;}}
}
B483de9:L483de9:{c.instructions+=2;NFSU2_TR(0x483de9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B483dea:{NFSU2_TR(0x483dea);
if(r1(R+518)){{goto L483e13;}}
}
B483dec:L483dec:{c.instructions+=2;NFSU2_TR(0x483dec);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B483ded:{NFSU2_TR(0x483ded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L483df4;}}
}
B483def:L483def:{c.instructions+=1;NFSU2_TR(0x483def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483df4ull));
TAIL_STATIC(0x4672a0u,467);
}
B483df4:L483df4:{c.instructions+=2;NFSU2_TR(0x483df4);
s4(0x82bc6c,u32(0x0ull));
}
B483dfe:{NFSU2_TR(0x483dfe);
s4(0x82b61c,u32(0x0ull));
}
B483e08:L483e08:{c.instructions+=1;NFSU2_TR(0x483e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483e0dull));
TAIL_STATIC(0x6f56bdu,6f5);
}
B483e0d:L483e0d:{c.instructions+=1;NFSU2_TR(0x483e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483e0e:L483e0e:{c.instructions+=3;NFSU2_TR(0x483e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B483e0f:{NFSU2_TR(0x483e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B483e10:{NFSU2_TR(0x483e10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483e13:L483e13:{c.instructions+=1;NFSU2_TR(0x483e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483e18ull));
TAIL_STATIC(0x467350u,467);
}
B483e18:L483e18:{c.instructions+=1;NFSU2_TR(0x483e18);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x483df4u);}goto L483df4;}
}
B483e20:L483e20:{c.instructions+=3;NFSU2_TR(0x483e20);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B483e25:{NFSU2_TR(0x483e25);
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
B483e27:{NFSU2_TR(0x483e27);
if(r1(R+518)){{goto L483e31;}}
}
B483e29:L483e29:{c.instructions+=2;NFSU2_TR(0x483e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483e2c:{NFSU2_TR(0x483e2c);
TAIL_STATIC(0x481cd0u,481);
}
B483e31:L483e31:{c.instructions+=1;NFSU2_TR(0x483e31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483e40:L483e40:{c.instructions+=3;NFSU2_TR(0x483e40);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B483e45:{NFSU2_TR(0x483e45);
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
B483e47:{NFSU2_TR(0x483e47);
if(r1(R+518)){{goto L483e51;}}
}
B483e49:L483e49:{c.instructions+=2;NFSU2_TR(0x483e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483e4c:{NFSU2_TR(0x483e4c);
TAIL_STATIC(0x481e50u,481);
}
B483e51:L483e51:{c.instructions+=1;NFSU2_TR(0x483e51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483e60:L483e60:{c.instructions+=3;NFSU2_TR(0x483e60);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B483e65:{NFSU2_TR(0x483e65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483e66:{NFSU2_TR(0x483e66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483e6bull));
TAIL_STATIC(0x43e910u,43e);
}
B483e6b:L483e6b:{c.instructions+=3;NFSU2_TR(0x483e6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483e6e:{NFSU2_TR(0x483e6e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B483e73:{NFSU2_TR(0x483e73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L483e9d;}}
}
B483e75:L483e75:{c.instructions+=6;NFSU2_TR(0x483e75);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B483e7b:{NFSU2_TR(0x483e7b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B483e7e:{NFSU2_TR(0x483e7e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B483e84:{NFSU2_TR(0x483e84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483e85:{NFSU2_TR(0x483e85);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483e8a:{NFSU2_TR(0x483e8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483e8full));
TAIL_STATIC(0x440820u,440);
}
B483e8f:L483e8f:{c.instructions+=3;NFSU2_TR(0x483e8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483e92:{NFSU2_TR(0x483e92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483e94:{NFSU2_TR(0x483e94);
if(r1(R+518)){{goto L483e9d;}}
}
B483e96:L483e96:{c.instructions+=2;NFSU2_TR(0x483e96);
__builtin_memmove((R+4),(R+0),4);
}
B483e98:{NFSU2_TR(0x483e98);
TAIL_STATIC(0x481620u,481);
}
B483e9d:L483e9d:{c.instructions+=2;NFSU2_TR(0x483e9d);
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
B483e9f:{NFSU2_TR(0x483e9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483ea0:L483ea0:{c.instructions+=3;NFSU2_TR(0x483ea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483ea1:{NFSU2_TR(0x483ea1);
__builtin_memmove((R+24),(R+4),4);
}
B483ea3:{NFSU2_TR(0x483ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ea8ull));
TAIL_STATIC(0x481680u,481);
}
B483ea8:L483ea8:{c.instructions+=2;NFSU2_TR(0x483ea8);
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
B483ead:{NFSU2_TR(0x483ead);
if(r1(R+518)){{goto L483eb8;}}
}
B483eaf:L483eaf:{c.instructions+=2;NFSU2_TR(0x483eaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483eb0:{NFSU2_TR(0x483eb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483eb5ull));
TAIL_STATIC(0x440540u,440);
}
B483eb5:L483eb5:{c.instructions+=1;NFSU2_TR(0x483eb5);
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
B483eb8:L483eb8:{c.instructions+=3;NFSU2_TR(0x483eb8);
__builtin_memmove((R+0),(R+24),4);
}
B483eba:{NFSU2_TR(0x483eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483ebb:{NFSU2_TR(0x483ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483ec0:L483ec0:{c.instructions+=3;NFSU2_TR(0x483ec0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B483ec5:{NFSU2_TR(0x483ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483ec6:{NFSU2_TR(0x483ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ecbull));
TAIL_STATIC(0x43e910u,43e);
}
B483ecb:L483ecb:{c.instructions+=3;NFSU2_TR(0x483ecb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B483ece:{NFSU2_TR(0x483ece);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x500ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x500ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B483ed3:{NFSU2_TR(0x483ed3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L483efd;}}
}
B483ed5:L483ed5:{c.instructions+=6;NFSU2_TR(0x483ed5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B483edb:{NFSU2_TR(0x483edb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B483ede:{NFSU2_TR(0x483ede);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B483ee4:{NFSU2_TR(0x483ee4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483ee5:{NFSU2_TR(0x483ee5);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483eea:{NFSU2_TR(0x483eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483eefull));
TAIL_STATIC(0x440820u,440);
}
B483eef:L483eef:{c.instructions+=3;NFSU2_TR(0x483eef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483ef2:{NFSU2_TR(0x483ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B483ef4:{NFSU2_TR(0x483ef4);
if(r1(R+518)){{goto L483efd;}}
}
B483ef6:L483ef6:{c.instructions+=2;NFSU2_TR(0x483ef6);
__builtin_memmove((R+4),(R+0),4);
}
B483ef8:{NFSU2_TR(0x483ef8);
TAIL_STATIC(0x481720u,481);
}
B483efd:L483efd:{c.instructions+=2;NFSU2_TR(0x483efd);
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
B483eff:{NFSU2_TR(0x483eff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483f00:L483f00:{c.instructions+=3;NFSU2_TR(0x483f00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f01:{NFSU2_TR(0x483f01);
__builtin_memmove((R+24),(R+4),4);
}
B483f03:{NFSU2_TR(0x483f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483f08ull));
TAIL_STATIC(0x481760u,481);
}
B483f08:L483f08:{c.instructions+=2;NFSU2_TR(0x483f08);
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
B483f0d:{NFSU2_TR(0x483f0d);
if(r1(R+518)){{goto L483f18;}}
}
B483f0f:L483f0f:{c.instructions+=2;NFSU2_TR(0x483f0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f10:{NFSU2_TR(0x483f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483f15ull));
TAIL_STATIC(0x440540u,440);
}
B483f15:L483f15:{c.instructions+=1;NFSU2_TR(0x483f15);
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
B483f18:L483f18:{c.instructions+=3;NFSU2_TR(0x483f18);
__builtin_memmove((R+0),(R+24),4);
}
B483f1a:{NFSU2_TR(0x483f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483f1b:{NFSU2_TR(0x483f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483f20:L483f20:{c.instructions+=23;NFSU2_TR(0x483f20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f21:{NFSU2_TR(0x483f21);
__builtin_memmove((R+24),(R+4),4);
}
B483f23:{NFSU2_TR(0x483f23);
u8 U[4];
w4(U+0,u32(0x78bfe0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B483f29:{NFSU2_TR(0x483f29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B483f2c:{NFSU2_TR(0x483f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B483f2e:{NFSU2_TR(0x483f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f31:{NFSU2_TR(0x483f31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B483f34:{NFSU2_TR(0x483f34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B483f36:{NFSU2_TR(0x483f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f39:{NFSU2_TR(0x483f39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B483f3b:{NFSU2_TR(0x483f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f3e:{NFSU2_TR(0x483f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f41:{NFSU2_TR(0x483f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f44:{NFSU2_TR(0x483f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f47:{NFSU2_TR(0x483f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f4a:{NFSU2_TR(0x483f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f4d:{NFSU2_TR(0x483f4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f50:{NFSU2_TR(0x483f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f53:{NFSU2_TR(0x483f53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483f57:{NFSU2_TR(0x483f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f5a:{NFSU2_TR(0x483f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f5d:{NFSU2_TR(0x483f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B483f60:{NFSU2_TR(0x483f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483f65ull));
TAIL_STATIC(0x469e50u,469);
}
B483f65:L483f65:{c.instructions+=3;NFSU2_TR(0x483f65);
__builtin_memmove((R+0),(R+24),4);
}
B483f67:{NFSU2_TR(0x483f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483f68:{NFSU2_TR(0x483f68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483f70:L483f70:{c.instructions+=3;NFSU2_TR(0x483f70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f71:{NFSU2_TR(0x483f71);
__builtin_memmove((R+24),(R+4),4);
}
B483f73:{NFSU2_TR(0x483f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483f78ull));
TAIL_STATIC(0x4817d0u,481);
}
B483f78:L483f78:{c.instructions+=2;NFSU2_TR(0x483f78);
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
B483f7d:{NFSU2_TR(0x483f7d);
if(r1(R+518)){{goto L483f88;}}
}
B483f7f:L483f7f:{c.instructions+=2;NFSU2_TR(0x483f7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f80:{NFSU2_TR(0x483f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483f85ull));
TAIL_STATIC(0x440540u,440);
}
B483f85:L483f85:{c.instructions+=1;NFSU2_TR(0x483f85);
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
B483f88:L483f88:{c.instructions+=3;NFSU2_TR(0x483f88);
__builtin_memmove((R+0),(R+24),4);
}
B483f8a:{NFSU2_TR(0x483f8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B483f8b:{NFSU2_TR(0x483f8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B483f90:L483f90:{c.instructions+=7;NFSU2_TR(0x483f90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f91:{NFSU2_TR(0x483f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B483f95:{NFSU2_TR(0x483f95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483f96:{NFSU2_TR(0x483f96);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+24),(U+0),4);
}
B483f99:{NFSU2_TR(0x483f99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b994ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B483fa0:{NFSU2_TR(0x483fa0);
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
B483fa2:{NFSU2_TR(0x483fa2);
if(r1(R+518)){TAIL_STATIC(0x48405bu,484);}
}
B483fa8:L483fa8:{c.instructions+=3;NFSU2_TR(0x483fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b9b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B483fae:{NFSU2_TR(0x483fae);
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
B483fb0:{NFSU2_TR(0x483fb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x48405bu,484);}
}
B483fb6:L483fb6:{c.instructions+=3;NFSU2_TR(0x483fb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483fb7:{NFSU2_TR(0x483fb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483fb8:{NFSU2_TR(0x483fb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483fbdull));
TAIL_STATIC(0x73a7c0u,73a);
}
B483fbd:L483fbd:{c.instructions+=14;NFSU2_TR(0x483fbd);
__builtin_memmove((R+28),(R+24),4);
}
B483fbf:{NFSU2_TR(0x483fbf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B483fc2:{NFSU2_TR(0x483fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ecd38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483fc8:{NFSU2_TR(0x483fc8);
w4(R+0,u32(0x1000000ull));
}
B483fcd:{NFSU2_TR(0x483fcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B483fcf:{NFSU2_TR(0x483fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ecd3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B483fd5:{NFSU2_TR(0x483fd5);
w4(R+8,u32(0x1ull));
}
B483fda:{NFSU2_TR(0x483fda);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B483fdc:{NFSU2_TR(0x483fdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B483fdd:{NFSU2_TR(0x483fdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b9b4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B483fe4:{NFSU2_TR(0x483fe4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B483fe6:{NFSU2_TR(0x483fe6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B483feb:{NFSU2_TR(0x483feb);
__builtin_memmove(gp(0x7ecd70),(R+0),4);
}
B483ff0:{NFSU2_TR(0x483ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x483ff5ull));
TAIL_STATIC(0x46b530u,46b);
}
B483ff5:L483ff5:{c.instructions+=3;NFSU2_TR(0x483ff5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B483ff8:{NFSU2_TR(0x483ff8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B483ffb:{NFSU2_TR(0x483ffb);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82b984ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
TAIL_STATIC(0x484002u,484);
}
XIT:NFSU2_TR_EXIT(0x483,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
