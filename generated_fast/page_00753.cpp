#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_752(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x753,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x753,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_753(u8* __restrict R,Cpu& c);
u32 page_753(Cpu& c){return body_753(c.regs.data(),c);}
__attribute__((noinline)) u32 body_753(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x753000:goto L753000;
case 0x753006:c.instructions+=8;goto B753006;
case 0x75300b:c.instructions+=7;goto B75300b;
case 0x75300c:c.instructions+=6;goto B75300c;
case 0x75300e:c.instructions+=5;goto B75300e;
case 0x753014:c.instructions+=4;goto B753014;
case 0x75301b:c.instructions+=3;goto B75301b;
case 0x753021:c.instructions+=2;goto B753021;
case 0x753023:c.instructions+=1;goto B753023;
case 0x753025:goto L753025;
case 0x75302b:c.instructions+=2;goto B75302b;
case 0x75302d:c.instructions+=1;goto B75302d;
case 0x75302f:goto L75302f;
case 0x753035:c.instructions+=11;goto B753035;
case 0x753036:c.instructions+=10;goto B753036;
case 0x753037:c.instructions+=9;goto B753037;
case 0x75303d:c.instructions+=8;goto B75303d;
case 0x75303f:c.instructions+=7;goto B75303f;
case 0x753041:c.instructions+=6;goto B753041;
case 0x753043:c.instructions+=5;goto B753043;
case 0x753044:c.instructions+=4;goto B753044;
case 0x753046:c.instructions+=3;goto B753046;
case 0x753048:c.instructions+=2;goto B753048;
case 0x75304e:c.instructions+=1;goto B75304e;
case 0x753053:goto L753053;
case 0x753054:c.instructions+=4;goto B753054;
case 0x753055:c.instructions+=3;goto B753055;
case 0x753056:c.instructions+=2;goto B753056;
case 0x75305d:c.instructions+=1;goto B75305d;
case 0x753062:goto L753062;
case 0x753068:c.instructions+=1;goto B753068;
case 0x753069:goto L753069;
case 0x75306f:c.instructions+=8;goto B75306f;
case 0x753073:c.instructions+=7;goto B753073;
case 0x753079:c.instructions+=6;goto B753079;
case 0x75307f:c.instructions+=5;goto B75307f;
case 0x753080:c.instructions+=4;goto B753080;
case 0x753084:c.instructions+=3;goto B753084;
case 0x753088:c.instructions+=2;goto B753088;
case 0x753090:c.instructions+=1;goto B753090;
case 0x753095:goto L753095;
case 0x75309c:c.instructions+=2;goto B75309c;
case 0x75309d:c.instructions+=1;goto B75309d;
case 0x7530a2:goto L7530a2;
case 0x7530a8:c.instructions+=1;goto B7530a8;
case 0x7530b0:goto L7530b0;
case 0x7530b6:c.instructions+=22;goto B7530b6;
case 0x7530bb:c.instructions+=21;goto B7530bb;
case 0x7530c2:c.instructions+=20;goto B7530c2;
case 0x7530c4:c.instructions+=19;goto B7530c4;
case 0x7530c8:c.instructions+=18;goto B7530c8;
case 0x7530c9:c.instructions+=17;goto B7530c9;
case 0x7530cd:c.instructions+=16;goto B7530cd;
case 0x7530ce:c.instructions+=15;goto B7530ce;
case 0x7530d2:c.instructions+=14;goto B7530d2;
case 0x7530d4:c.instructions+=13;goto B7530d4;
case 0x7530d5:c.instructions+=12;goto B7530d5;
case 0x7530d9:c.instructions+=11;goto B7530d9;
case 0x7530de:c.instructions+=10;goto B7530de;
case 0x7530e0:c.instructions+=9;goto B7530e0;
case 0x7530e2:c.instructions+=8;goto B7530e2;
case 0x7530e3:c.instructions+=7;goto B7530e3;
case 0x7530e7:c.instructions+=6;goto B7530e7;
case 0x7530eb:c.instructions+=5;goto B7530eb;
case 0x7530f5:c.instructions+=4;goto B7530f5;
case 0x7530f9:c.instructions+=3;goto B7530f9;
case 0x7530fb:c.instructions+=2;goto B7530fb;
case 0x753100:c.instructions+=1;goto B753100;
case 0x753106:goto L753106;
case 0x753109:c.instructions+=2;goto B753109;
case 0x75310b:c.instructions+=1;goto B75310b;
case 0x75310d:goto L75310d;
case 0x75310f:c.instructions+=1;goto B75310f;
case 0x753111:goto L753111;
case 0x753113:c.instructions+=10;goto B753113;
case 0x753117:c.instructions+=9;goto B753117;
case 0x753118:c.instructions+=8;goto B753118;
case 0x75311c:c.instructions+=7;goto B75311c;
case 0x75311d:c.instructions+=6;goto B75311d;
case 0x75311e:c.instructions+=5;goto B75311e;
case 0x753123:c.instructions+=4;goto B753123;
case 0x753128:c.instructions+=3;goto B753128;
case 0x753129:c.instructions+=2;goto B753129;
case 0x75312d:c.instructions+=1;goto B75312d;
case 0x753132:goto L753132;
case 0x753135:c.instructions+=3;goto B753135;
case 0x753137:c.instructions+=2;goto B753137;
case 0x75313b:c.instructions+=1;goto B75313b;
case 0x75313d:goto L75313d;
case 0x753142:goto L753142;
case 0x753145:c.instructions+=2;goto B753145;
case 0x753147:c.instructions+=1;goto B753147;
case 0x753149:goto L753149;
case 0x75314b:goto L75314b;
case 0x75314e:c.instructions+=15;goto B75314e;
case 0x753153:c.instructions+=14;goto B753153;
case 0x753157:c.instructions+=13;goto B753157;
case 0x75315a:c.instructions+=12;goto B75315a;
case 0x75315d:c.instructions+=11;goto B75315d;
case 0x753162:c.instructions+=10;goto B753162;
case 0x753165:c.instructions+=9;goto B753165;
case 0x753167:c.instructions+=8;goto B753167;
case 0x75316c:c.instructions+=7;goto B75316c;
case 0x75316f:c.instructions+=6;goto B75316f;
case 0x753171:c.instructions+=5;goto B753171;
case 0x753176:c.instructions+=4;goto B753176;
case 0x753179:c.instructions+=3;goto B753179;
case 0x75317b:c.instructions+=2;goto B75317b;
case 0x753181:c.instructions+=1;goto B753181;
case 0x753189:goto L753189;
case 0x75318d:goto L75318d;
case 0x75318f:c.instructions+=4;goto B75318f;
case 0x753191:c.instructions+=3;goto B753191;
case 0x753196:c.instructions+=2;goto B753196;
case 0x75319b:c.instructions+=1;goto B75319b;
case 0x7531a1:goto L7531a1;
case 0x7531a6:goto L7531a6;
case 0x7531a8:c.instructions+=4;goto B7531a8;
case 0x7531ac:c.instructions+=3;goto B7531ac;
case 0x7531b1:c.instructions+=2;goto B7531b1;
case 0x7531b8:c.instructions+=1;goto B7531b8;
case 0x7531ba:goto L7531ba;
case 0x7531be:c.instructions+=2;goto B7531be;
case 0x7531c1:c.instructions+=1;goto B7531c1;
case 0x7531c3:goto L7531c3;
case 0x7531ca:c.instructions+=1;goto B7531ca;
case 0x7531cc:goto L7531cc;
case 0x7531ce:c.instructions+=1;goto B7531ce;
case 0x7531d0:goto L7531d0;
case 0x7531d7:c.instructions+=1;goto B7531d7;
case 0x7531d9:goto L7531d9;
case 0x7531df:c.instructions+=2;goto B7531df;
case 0x7531e5:c.instructions+=1;goto B7531e5;
case 0x7531e7:goto L7531e7;
case 0x7531eb:c.instructions+=1;goto B7531eb;
case 0x7531ed:goto L7531ed;
case 0x7531ef:goto L7531ef;
case 0x7531f5:goto L7531f5;
case 0x7531fb:c.instructions+=2;goto B7531fb;
case 0x7531fe:c.instructions+=1;goto B7531fe;
case 0x753204:goto L753204;
case 0x753207:c.instructions+=1;goto B753207;
case 0x75320d:goto L75320d;
case 0x753211:c.instructions+=2;goto B753211;
case 0x753214:c.instructions+=1;goto B753214;
case 0x75321a:goto L75321a;
case 0x75321e:c.instructions+=4;goto B75321e;
case 0x75321f:c.instructions+=3;goto B75321f;
case 0x753222:c.instructions+=2;goto B753222;
case 0x753223:c.instructions+=1;goto B753223;
case 0x753228:goto L753228;
case 0x75322b:c.instructions+=2;goto B75322b;
case 0x75322d:c.instructions+=1;goto B75322d;
case 0x753233:goto L753233;
case 0x753238:c.instructions+=9;goto B753238;
case 0x75323b:c.instructions+=8;goto B75323b;
case 0x75323e:c.instructions+=7;goto B75323e;
case 0x753240:c.instructions+=6;goto B753240;
case 0x753241:c.instructions+=5;goto B753241;
case 0x753244:c.instructions+=4;goto B753244;
case 0x753247:c.instructions+=3;goto B753247;
case 0x75324d:c.instructions+=2;goto B75324d;
case 0x753250:c.instructions+=1;goto B753250;
case 0x753256:goto L753256;
case 0x753259:c.instructions+=1;goto B753259;
case 0x75325f:goto L75325f;
case 0x753262:c.instructions+=1;goto B753262;
case 0x753268:goto L753268;
case 0x75326e:c.instructions+=1;goto B75326e;
case 0x753274:goto L753274;
case 0x753276:c.instructions+=2;goto B753276;
case 0x75327c:c.instructions+=1;goto B75327c;
case 0x75327e:goto L75327e;
case 0x753284:c.instructions+=3;goto B753284;
case 0x753289:c.instructions+=2;goto B753289;
case 0x75328b:c.instructions+=1;goto B75328b;
case 0x753290:goto L753290;
case 0x753295:goto L753295;
case 0x75329b:c.instructions+=1;goto B75329b;
case 0x7532a1:goto L7532a1;
case 0x7532a7:c.instructions+=13;goto B7532a7;
case 0x7532ab:c.instructions+=12;goto B7532ab;
case 0x7532ad:c.instructions+=11;goto B7532ad;
case 0x7532b0:c.instructions+=10;goto B7532b0;
case 0x7532b6:c.instructions+=9;goto B7532b6;
case 0x7532b8:c.instructions+=8;goto B7532b8;
case 0x7532ba:c.instructions+=7;goto B7532ba;
case 0x7532c0:c.instructions+=6;goto B7532c0;
case 0x7532c6:c.instructions+=5;goto B7532c6;
case 0x7532cc:c.instructions+=4;goto B7532cc;
case 0x7532d2:c.instructions+=3;goto B7532d2;
case 0x7532d6:c.instructions+=2;goto B7532d6;
case 0x7532dc:c.instructions+=1;goto B7532dc;
case 0x7532e2:goto L7532e2;
case 0x7532e6:c.instructions+=3;goto B7532e6;
case 0x7532e8:c.instructions+=2;goto B7532e8;
case 0x7532ed:c.instructions+=1;goto B7532ed;
case 0x7532ef:goto L7532ef;
case 0x7532f0:c.instructions+=3;goto B7532f0;
case 0x7532f5:c.instructions+=2;goto B7532f5;
case 0x7532fc:c.instructions+=1;goto B7532fc;
case 0x7532fe:goto L7532fe;
case 0x753300:goto L753300;
case 0x753302:c.instructions+=6;goto B753302;
case 0x753308:c.instructions+=5;goto B753308;
case 0x75330d:c.instructions+=4;goto B75330d;
case 0x753313:c.instructions+=3;goto B753313;
case 0x753315:c.instructions+=2;goto B753315;
case 0x753318:c.instructions+=1;goto B753318;
case 0x75331d:goto L75331d;
case 0x75331f:goto L75331f;
case 0x753321:c.instructions+=1;goto B753321;
case 0x753324:goto L753324;
case 0x753326:goto L753326;
case 0x75332b:c.instructions+=2;goto B75332b;
case 0x75332d:c.instructions+=1;goto B75332d;
case 0x753332:goto L753332;
case 0x753337:c.instructions+=2;goto B753337;
case 0x753339:c.instructions+=1;goto B753339;
case 0x75333e:goto L75333e;
case 0x753341:c.instructions+=2;goto B753341;
case 0x753343:c.instructions+=1;goto B753343;
case 0x753345:goto L753345;
case 0x75334d:c.instructions+=1;goto B75334d;
case 0x75334f:goto L75334f;
case 0x753353:c.instructions+=2;goto B753353;
case 0x753355:c.instructions+=1;goto B753355;
case 0x753357:goto L753357;
case 0x75335d:c.instructions+=2;goto B75335d;
case 0x753361:c.instructions+=1;goto B753361;
case 0x753363:goto L753363;
case 0x753367:goto L753367;
case 0x75336d:c.instructions+=6;goto B75336d;
case 0x753371:c.instructions+=5;goto B753371;
case 0x753372:c.instructions+=4;goto B753372;
case 0x753373:c.instructions+=3;goto B753373;
case 0x753379:c.instructions+=2;goto B753379;
case 0x75337d:c.instructions+=1;goto B75337d;
case 0x753383:goto L753383;
case 0x75338a:c.instructions+=1;goto B75338a;
case 0x75338c:goto L75338c;
case 0x753392:c.instructions+=3;goto B753392;
case 0x753397:c.instructions+=2;goto B753397;
case 0x753399:c.instructions+=1;goto B753399;
case 0x75339e:goto L75339e;
case 0x7533a3:c.instructions+=2;goto B7533a3;
case 0x7533a5:c.instructions+=1;goto B7533a5;
case 0x7533aa:goto L7533aa;
case 0x7533ad:c.instructions+=1;goto B7533ad;
case 0x7533af:goto L7533af;
case 0x7533b3:c.instructions+=3;goto B7533b3;
case 0x7533b8:c.instructions+=2;goto B7533b8;
case 0x7533ba:c.instructions+=1;goto B7533ba;
case 0x7533bf:goto L7533bf;
case 0x7533c1:c.instructions+=1;goto B7533c1;
case 0x7533c6:goto L7533c6;
case 0x7533d0:goto L7533d0;
case 0x7533d7:c.instructions+=1;goto B7533d7;
case 0x7533dd:goto L7533dd;
case 0x7533e3:c.instructions+=4;goto B7533e3;
case 0x7533e5:c.instructions+=3;goto B7533e5;
case 0x7533e7:c.instructions+=2;goto B7533e7;
case 0x7533ed:c.instructions+=1;goto B7533ed;
case 0x7533ef:goto L7533ef;
case 0x7533f5:c.instructions+=13;goto B7533f5;
case 0x7533f7:c.instructions+=12;goto B7533f7;
case 0x7533fa:c.instructions+=11;goto B7533fa;
case 0x7533fb:c.instructions+=10;goto B7533fb;
case 0x7533fc:c.instructions+=9;goto B7533fc;
case 0x7533fe:c.instructions+=8;goto B7533fe;
case 0x753402:c.instructions+=7;goto B753402;
case 0x753406:c.instructions+=6;goto B753406;
case 0x753409:c.instructions+=5;goto B753409;
case 0x75340a:c.instructions+=4;goto B75340a;
case 0x75340b:c.instructions+=3;goto B75340b;
case 0x75340f:c.instructions+=2;goto B75340f;
case 0x753417:c.instructions+=1;goto B753417;
case 0x75341c:goto L75341c;
case 0x75341f:c.instructions+=2;goto B75341f;
case 0x753422:c.instructions+=1;goto B753422;
case 0x753424:goto L753424;
case 0x753429:goto L753429;
case 0x75342c:c.instructions+=9;goto B75342c;
case 0x75342f:c.instructions+=8;goto B75342f;
case 0x753432:c.instructions+=7;goto B753432;
case 0x753438:c.instructions+=6;goto B753438;
case 0x75343c:c.instructions+=5;goto B75343c;
case 0x75343d:c.instructions+=4;goto B75343d;
case 0x753440:c.instructions+=3;goto B753440;
case 0x753443:c.instructions+=2;goto B753443;
case 0x753446:c.instructions+=1;goto B753446;
case 0x753448:goto L753448;
case 0x75344e:c.instructions+=1;goto B75344e;
case 0x753450:goto L753450;
case 0x753456:goto L753456;
case 0x75345c:c.instructions+=1;goto B75345c;
case 0x75345e:goto L75345e;
case 0x753464:c.instructions+=2;goto B753464;
case 0x75346a:c.instructions+=1;goto B75346a;
case 0x75346c:goto L75346c;
case 0x75346e:c.instructions+=1;goto B75346e;
case 0x753473:goto L753473;
case 0x753475:c.instructions+=1;goto B753475;
case 0x75347a:goto L75347a;
case 0x753480:c.instructions+=1;goto B753480;
case 0x753482:goto L753482;
case 0x753488:c.instructions+=4;goto B753488;
case 0x75348a:c.instructions+=3;goto B75348a;
case 0x75348c:c.instructions+=2;goto B75348c;
case 0x753492:c.instructions+=1;goto B753492;
case 0x753494:goto L753494;
case 0x75349a:c.instructions+=4;goto B75349a;
case 0x75349c:c.instructions+=3;goto B75349c;
case 0x75349e:c.instructions+=2;goto B75349e;
case 0x7534a3:c.instructions+=1;goto B7534a3;
case 0x7534a5:goto L7534a5;
case 0x7534a7:c.instructions+=1;goto B7534a7;
case 0x7534ac:goto L7534ac;
case 0x7534b3:c.instructions+=1;goto B7534b3;
case 0x7534b9:goto L7534b9;
case 0x7534be:c.instructions+=2;goto B7534be;
case 0x7534c1:c.instructions+=1;goto B7534c1;
case 0x7534c7:goto L7534c7;
case 0x7534cd:c.instructions+=3;goto B7534cd;
case 0x7534d3:c.instructions+=2;goto B7534d3;
case 0x7534d5:c.instructions+=1;goto B7534d5;
case 0x7534d7:goto L7534d7;
case 0x7534da:c.instructions+=12;goto B7534da;
case 0x7534e0:c.instructions+=11;goto B7534e0;
case 0x7534e2:c.instructions+=10;goto B7534e2;
case 0x7534e3:c.instructions+=9;goto B7534e3;
case 0x7534e4:c.instructions+=8;goto B7534e4;
case 0x7534e6:c.instructions+=7;goto B7534e6;
case 0x7534ed:c.instructions+=6;goto B7534ed;
case 0x7534ee:c.instructions+=5;goto B7534ee;
case 0x7534ef:c.instructions+=4;goto B7534ef;
case 0x7534f6:c.instructions+=3;goto B7534f6;
case 0x753501:c.instructions+=2;goto B753501;
case 0x753508:c.instructions+=1;goto B753508;
case 0x75350d:goto L75350d;
case 0x753510:c.instructions+=2;goto B753510;
case 0x753513:c.instructions+=1;goto B753513;
case 0x753515:goto L753515;
case 0x75351a:goto L75351a;
case 0x75351d:c.instructions+=9;goto B75351d;
case 0x753520:c.instructions+=8;goto B753520;
case 0x753523:c.instructions+=7;goto B753523;
case 0x753529:c.instructions+=6;goto B753529;
case 0x753530:c.instructions+=5;goto B753530;
case 0x753531:c.instructions+=4;goto B753531;
case 0x753534:c.instructions+=3;goto B753534;
case 0x753537:c.instructions+=2;goto B753537;
case 0x75353a:c.instructions+=1;goto B75353a;
case 0x75353c:goto L75353c;
case 0x753542:c.instructions+=1;goto B753542;
case 0x753544:goto L753544;
case 0x75354a:goto L75354a;
case 0x753550:c.instructions+=1;goto B753550;
case 0x753552:goto L753552;
case 0x753558:c.instructions+=3;goto B753558;
case 0x75355e:c.instructions+=2;goto B75355e;
case 0x753560:c.instructions+=1;goto B753560;
case 0x753562:goto L753562;
case 0x753568:c.instructions+=1;goto B753568;
case 0x75356e:goto L75356e;
case 0x753574:c.instructions+=1;goto B753574;
case 0x753576:goto L753576;
case 0x75357c:c.instructions+=2;goto B75357c;
case 0x75357e:c.instructions+=1;goto B75357e;
case 0x753580:goto L753580;
case 0x753586:c.instructions+=5;goto B753586;
case 0x753587:c.instructions+=4;goto B753587;
case 0x75358d:c.instructions+=3;goto B75358d;
case 0x753593:c.instructions+=2;goto B753593;
case 0x753595:c.instructions+=1;goto B753595;
case 0x753597:goto L753597;
case 0x753598:c.instructions+=2;goto B753598;
case 0x753599:c.instructions+=1;goto B753599;
case 0x75359b:goto L75359b;
case 0x75359e:goto L75359e;
case 0x7535a4:c.instructions+=4;goto B7535a4;
case 0x7535a5:c.instructions+=3;goto B7535a5;
case 0x7535ab:c.instructions+=2;goto B7535ab;
case 0x7535b1:c.instructions+=1;goto B7535b1;
case 0x7535b6:goto L7535b6;
case 0x7535b8:goto L7535b8;
case 0x7535be:c.instructions+=1;goto B7535be;
case 0x7535c0:goto L7535c0;
case 0x7535c6:c.instructions+=2;goto B7535c6;
case 0x7535cc:c.instructions+=1;goto B7535cc;
case 0x7535ce:goto L7535ce;
case 0x7535d4:c.instructions+=3;goto B7535d4;
case 0x7535d6:c.instructions+=2;goto B7535d6;
case 0x7535d9:c.instructions+=1;goto B7535d9;
case 0x7535db:goto L7535db;
case 0x7535e1:c.instructions+=2;goto B7535e1;
case 0x7535e7:c.instructions+=1;goto B7535e7;
case 0x7535e9:goto L7535e9;
case 0x7535ef:c.instructions+=1;goto B7535ef;
case 0x7535f1:goto L7535f1;
case 0x7535f6:c.instructions+=1;goto B7535f6;
case 0x7535f8:goto L7535f8;
case 0x753602:c.instructions+=1;goto B753602;
case 0x753604:goto L753604;
case 0x753606:c.instructions+=2;goto B753606;
case 0x75360c:c.instructions+=1;goto B75360c;
case 0x753611:goto L753611;
case 0x753614:c.instructions+=2;goto B753614;
case 0x753616:c.instructions+=1;goto B753616;
case 0x75361c:goto L75361c;
case 0x753621:c.instructions+=2;goto B753621;
case 0x753625:c.instructions+=1;goto B753625;
case 0x75362a:goto L75362a;
case 0x753630:c.instructions+=1;goto B753630;
case 0x753632:goto L753632;
case 0x753639:c.instructions+=1;goto B753639;
case 0x75363b:goto L75363b;
case 0x75363f:c.instructions+=2;goto B75363f;
case 0x753642:c.instructions+=1;goto B753642;
case 0x753644:goto L753644;
case 0x753646:c.instructions+=1;goto B753646;
case 0x753648:goto L753648;
case 0x75364e:c.instructions+=1;goto B75364e;
case 0x753650:goto L753650;
case 0x753656:c.instructions+=1;goto B753656;
case 0x753658:goto L753658;
case 0x75365c:c.instructions+=1;goto B75365c;
case 0x75365e:goto L75365e;
case 0x753664:c.instructions+=1;goto B753664;
case 0x753666:goto L753666;
case 0x753669:c.instructions+=1;goto B753669;
case 0x75366b:goto L75366b;
case 0x75366e:c.instructions+=2;goto B75366e;
case 0x753670:c.instructions+=1;goto B753670;
case 0x753672:goto L753672;
case 0x753674:goto L753674;
case 0x753677:c.instructions+=7;goto B753677;
case 0x753679:c.instructions+=6;goto B753679;
case 0x75367d:c.instructions+=5;goto B75367d;
case 0x753680:c.instructions+=4;goto B753680;
case 0x753684:c.instructions+=3;goto B753684;
case 0x753687:c.instructions+=2;goto B753687;
case 0x75368b:c.instructions+=1;goto B75368b;
case 0x75368e:goto L75368e;
case 0x753692:c.instructions+=2;goto B753692;
case 0x753694:c.instructions+=1;goto B753694;
case 0x753696:goto L753696;
case 0x75369c:c.instructions+=1;goto B75369c;
case 0x75369e:goto L75369e;
case 0x7536a4:c.instructions+=2;goto B7536a4;
case 0x7536aa:c.instructions+=1;goto B7536aa;
case 0x7536ac:goto L7536ac;
case 0x7536b0:c.instructions+=12;goto B7536b0;
case 0x7536b3:c.instructions+=11;goto B7536b3;
case 0x7536b5:c.instructions+=10;goto B7536b5;
case 0x7536b9:c.instructions+=9;goto B7536b9;
case 0x7536bc:c.instructions+=8;goto B7536bc;
case 0x7536c0:c.instructions+=7;goto B7536c0;
case 0x7536c3:c.instructions+=6;goto B7536c3;
case 0x7536c7:c.instructions+=5;goto B7536c7;
case 0x7536cb:c.instructions+=4;goto B7536cb;
case 0x7536d0:c.instructions+=3;goto B7536d0;
case 0x7536d3:c.instructions+=2;goto B7536d3;
case 0x7536dd:c.instructions+=1;goto B7536dd;
case 0x7536e2:goto L7536e2;
case 0x7536e9:c.instructions+=6;goto B7536e9;
case 0x7536ed:c.instructions+=5;goto B7536ed;
case 0x7536ee:c.instructions+=4;goto B7536ee;
case 0x7536ef:c.instructions+=3;goto B7536ef;
case 0x7536f0:c.instructions+=2;goto B7536f0;
case 0x7536f1:c.instructions+=1;goto B7536f1;
case 0x7536f6:goto L7536f6;
case 0x7536fc:c.instructions+=1;goto B7536fc;
case 0x753700:goto L753700;
case 0x753705:c.instructions+=1;goto B753705;
case 0x75370a:goto L75370a;
case 0x75370d:c.instructions+=2;goto B75370d;
case 0x75370f:c.instructions+=1;goto B75370f;
case 0x753711:goto L753711;
case 0x753712:c.instructions+=1;goto B753712;
case 0x753717:goto L753717;
case 0x753719:c.instructions+=1;goto B753719;
case 0x753720:goto L753720;
case 0x753721:c.instructions+=1;goto B753721;
case 0x753726:goto L753726;
case 0x753729:c.instructions+=2;goto B753729;
case 0x75372b:c.instructions+=1;goto B75372b;
case 0x75372d:goto L75372d;
case 0x753732:c.instructions+=2;goto B753732;
case 0x75373c:c.instructions+=1;goto B75373c;
case 0x753741:goto L753741;
case 0x753744:c.instructions+=3;goto B753744;
case 0x753745:c.instructions+=2;goto B753745;
case 0x753747:c.instructions+=1;goto B753747;
case 0x753748:goto L753748;
case 0x75374e:c.instructions+=2;goto B75374e;
case 0x753750:c.instructions+=1;goto B753750;
case 0x753760:goto L753760;
case 0x753765:c.instructions+=2;goto B753765;
case 0x753767:c.instructions+=1;goto B753767;
case 0x753769:goto L753769;
case 0x75376e:c.instructions+=1;goto B75376e;
case 0x753773:goto L753773;
case 0x753776:c.instructions+=1;goto B753776;
case 0x753780:goto L753780;
case 0x753785:c.instructions+=1;goto B753785;
case 0x75378a:goto L75378a;
case 0x75378f:c.instructions+=4;goto B75378f;
case 0x753792:c.instructions+=3;goto B753792;
case 0x753797:c.instructions+=2;goto B753797;
case 0x75379d:c.instructions+=1;goto B75379d;
case 0x7537a2:goto L7537a2;
case 0x7537a5:c.instructions+=1;goto B7537a5;
case 0x7537b0:goto L7537b0;
case 0x7537b5:c.instructions+=1;goto B7537b5;
case 0x7537ba:goto L7537ba;
case 0x7537bf:c.instructions+=4;goto B7537bf;
case 0x7537c2:c.instructions+=3;goto B7537c2;
case 0x7537c4:c.instructions+=2;goto B7537c4;
case 0x7537c9:c.instructions+=1;goto B7537c9;
case 0x7537cb:goto L7537cb;
case 0x7537d0:goto L7537d0;
case 0x7537d3:c.instructions+=3;goto B7537d3;
case 0x7537d5:c.instructions+=2;goto B7537d5;
case 0x7537d7:c.instructions+=1;goto B7537d7;
case 0x7537d9:goto L7537d9;
case 0x7537dc:c.instructions+=3;goto B7537dc;
case 0x7537e1:c.instructions+=2;goto B7537e1;
case 0x7537e3:c.instructions+=1;goto B7537e3;
case 0x7537e8:goto L7537e8;
case 0x7537ed:c.instructions+=3;goto B7537ed;
case 0x7537f0:c.instructions+=2;goto B7537f0;
case 0x7537f2:c.instructions+=1;goto B7537f2;
case 0x7537f4:goto L7537f4;
case 0x7537f9:c.instructions+=1;goto B7537f9;
case 0x7537fe:goto L7537fe;
case 0x7537ff:goto L7537ff;
case 0x753800:goto L753800;
case 0x753801:c.instructions+=2;goto B753801;
case 0x753805:c.instructions+=1;goto B753805;
case 0x75380a:goto L75380a;
case 0x753811:c.instructions+=1;goto B753811;
case 0x753813:goto L753813;
case 0x753815:c.instructions+=1;goto B753815;
case 0x75381a:goto L75381a;
case 0x75381d:c.instructions+=2;goto B75381d;
case 0x75381f:c.instructions+=1;goto B75381f;
case 0x753821:goto L753821;
case 0x753826:c.instructions+=2;goto B753826;
case 0x753828:c.instructions+=1;goto B753828;
case 0x75382a:goto L75382a;
case 0x753830:goto L753830;
case 0x753833:c.instructions+=1;goto B753833;
case 0x753835:goto L753835;
case 0x753838:c.instructions+=2;goto B753838;
case 0x75383a:c.instructions+=1;goto B75383a;
case 0x75383c:goto L75383c;
case 0x75383d:c.instructions+=1;goto B75383d;
case 0x753842:goto L753842;
case 0x753845:c.instructions+=1;goto B753845;
case 0x75384c:goto L75384c;
case 0x753852:c.instructions+=2;goto B753852;
case 0x753853:c.instructions+=1;goto B753853;
case 0x753858:goto L753858;
case 0x75385e:c.instructions+=2;goto B75385e;
case 0x75385f:c.instructions+=1;goto B75385f;
case 0x753864:goto L753864;
case 0x75386a:c.instructions+=2;goto B75386a;
case 0x75386b:c.instructions+=1;goto B75386b;
case 0x753870:goto L753870;
case 0x753871:c.instructions+=1;goto B753871;
case 0x753876:goto L753876;
case 0x753879:c.instructions+=2;goto B753879;
case 0x75387a:c.instructions+=1;goto B75387a;
case 0x753880:goto L753880;
case 0x753881:c.instructions+=5;goto B753881;
case 0x753885:c.instructions+=4;goto B753885;
case 0x753886:c.instructions+=3;goto B753886;
case 0x75388c:c.instructions+=2;goto B75388c;
case 0x75388d:c.instructions+=1;goto B75388d;
case 0x753892:goto L753892;
case 0x753898:c.instructions+=6;goto B753898;
case 0x75389c:c.instructions+=5;goto B75389c;
case 0x75389f:c.instructions+=4;goto B75389f;
case 0x7538a0:c.instructions+=3;goto B7538a0;
case 0x7538a6:c.instructions+=2;goto B7538a6;
case 0x7538ac:c.instructions+=1;goto B7538ac;
case 0x7538b1:goto L7538b1;
case 0x7538b4:c.instructions+=3;goto B7538b4;
case 0x7538b5:c.instructions+=2;goto B7538b5;
case 0x7538b6:c.instructions+=1;goto B7538b6;
case 0x7538c0:goto L7538c0;
case 0x7538c3:c.instructions+=6;goto B7538c3;
case 0x7538c8:c.instructions+=5;goto B7538c8;
case 0x7538c9:c.instructions+=4;goto B7538c9;
case 0x7538cb:c.instructions+=3;goto B7538cb;
case 0x7538cf:c.instructions+=2;goto B7538cf;
case 0x7538d6:c.instructions+=1;goto B7538d6;
case 0x7538d8:goto L7538d8;
case 0x7538d9:c.instructions+=1;goto B7538d9;
case 0x7538de:goto L7538de;
case 0x7538e1:c.instructions+=4;goto B7538e1;
case 0x7538e6:c.instructions+=3;goto B7538e6;
case 0x7538e7:c.instructions+=2;goto B7538e7;
case 0x7538eb:c.instructions+=1;goto B7538eb;
case 0x7538f0:goto L7538f0;
case 0x7538f3:c.instructions+=1;goto B7538f3;
case 0x7538f4:goto L7538f4;
case 0x7538f5:c.instructions+=2;goto B7538f5;
case 0x7538fc:c.instructions+=1;goto B7538fc;
case 0x753901:goto L753901;
case 0x753903:c.instructions+=13;goto B753903;
case 0x753906:c.instructions+=12;goto B753906;
case 0x753908:c.instructions+=11;goto B753908;
case 0x75390a:c.instructions+=10;goto B75390a;
case 0x75390d:c.instructions+=9;goto B75390d;
case 0x753911:c.instructions+=8;goto B753911;
case 0x753914:c.instructions+=7;goto B753914;
case 0x753918:c.instructions+=6;goto B753918;
case 0x75391b:c.instructions+=5;goto B75391b;
case 0x753921:c.instructions+=4;goto B753921;
case 0x753923:c.instructions+=3;goto B753923;
case 0x753927:c.instructions+=2;goto B753927;
case 0x75392b:c.instructions+=1;goto B75392b;
case 0x75392d:goto L75392d;
case 0x753930:goto L753930;
case 0x753932:c.instructions+=1;goto B753932;
case 0x753934:goto L753934;
case 0x753937:c.instructions+=2;goto B753937;
case 0x753939:c.instructions+=1;goto B753939;
case 0x75393b:goto L75393b;
case 0x75393d:c.instructions+=5;goto B75393d;
case 0x753941:c.instructions+=4;goto B753941;
case 0x753942:c.instructions+=3;goto B753942;
case 0x753947:c.instructions+=2;goto B753947;
case 0x753948:c.instructions+=1;goto B753948;
case 0x75394d:goto L75394d;
case 0x753950:c.instructions+=2;goto B753950;
case 0x753952:c.instructions+=1;goto B753952;
case 0x753954:goto L753954;
case 0x753958:c.instructions+=4;goto B753958;
case 0x75395c:c.instructions+=3;goto B75395c;
case 0x75395d:c.instructions+=2;goto B75395d;
case 0x75395e:c.instructions+=1;goto B75395e;
case 0x753963:goto L753963;
case 0x753966:c.instructions+=2;goto B753966;
case 0x753968:c.instructions+=1;goto B753968;
case 0x75396a:goto L75396a;
case 0x75396d:c.instructions+=2;goto B75396d;
case 0x75396f:c.instructions+=1;goto B75396f;
case 0x753971:goto L753971;
case 0x753975:c.instructions+=4;goto B753975;
case 0x753977:c.instructions+=3;goto B753977;
case 0x753978:c.instructions+=2;goto B753978;
case 0x753979:c.instructions+=1;goto B753979;
case 0x75397e:goto L75397e;
case 0x753981:c.instructions+=2;goto B753981;
case 0x753983:c.instructions+=1;goto B753983;
case 0x753985:goto L753985;
case 0x753986:c.instructions+=2;goto B753986;
case 0x753990:c.instructions+=1;goto B753990;
case 0x753995:goto L753995;
case 0x753998:c.instructions+=5;goto B753998;
case 0x753999:c.instructions+=4;goto B753999;
case 0x75399e:c.instructions+=3;goto B75399e;
case 0x75399f:c.instructions+=2;goto B75399f;
case 0x7539a3:c.instructions+=1;goto B7539a3;
case 0x7539a8:goto L7539a8;
case 0x7539ab:c.instructions+=1;goto B7539ab;
case 0x7539ac:goto L7539ac;
case 0x7539af:c.instructions+=3;goto B7539af;
case 0x7539b0:c.instructions+=2;goto B7539b0;
case 0x7539b3:c.instructions+=1;goto B7539b3;
case 0x7539b8:goto L7539b8;
case 0x7539bb:c.instructions+=1;goto B7539bb;
case 0x7539bd:goto L7539bd;
case 0x7539c2:c.instructions+=6;goto B7539c2;
case 0x7539c4:c.instructions+=5;goto B7539c4;
case 0x7539c6:c.instructions+=4;goto B7539c6;
case 0x7539c8:c.instructions+=3;goto B7539c8;
case 0x7539c9:c.instructions+=2;goto B7539c9;
case 0x7539cc:c.instructions+=1;goto B7539cc;
case 0x7539d1:goto L7539d1;
case 0x7539d4:goto L7539d4;
case 0x7539d8:c.instructions+=5;goto B7539d8;
case 0x7539d9:c.instructions+=4;goto B7539d9;
case 0x7539e3:c.instructions+=3;goto B7539e3;
case 0x7539e5:c.instructions+=2;goto B7539e5;
case 0x7539e6:c.instructions+=1;goto B7539e6;
case 0x7539eb:goto L7539eb;
case 0x7539ee:c.instructions+=1;goto B7539ee;
case 0x7539f0:goto L7539f0;
case 0x7539f1:c.instructions+=3;goto B7539f1;
case 0x7539f3:c.instructions+=2;goto B7539f3;
case 0x7539fa:c.instructions+=1;goto B7539fa;
case 0x7539fc:goto L7539fc;
case 0x7539fd:c.instructions+=1;goto B7539fd;
case 0x753a02:goto L753a02;
case 0x753a05:c.instructions+=3;goto B753a05;
case 0x753a0a:c.instructions+=2;goto B753a0a;
case 0x753a0b:c.instructions+=1;goto B753a0b;
case 0x753a0c:goto L753a0c;
case 0x753a13:c.instructions+=1;goto B753a13;
case 0x753a18:goto L753a18;
case 0x753a1a:c.instructions+=15;goto B753a1a;
case 0x753a1d:c.instructions+=14;goto B753a1d;
case 0x753a1f:c.instructions+=13;goto B753a1f;
case 0x753a22:c.instructions+=12;goto B753a22;
case 0x753a27:c.instructions+=11;goto B753a27;
case 0x753a2a:c.instructions+=10;goto B753a2a;
case 0x753a2d:c.instructions+=9;goto B753a2d;
case 0x753a2f:c.instructions+=8;goto B753a2f;
case 0x753a31:c.instructions+=7;goto B753a31;
case 0x753a34:c.instructions+=6;goto B753a34;
case 0x753a37:c.instructions+=5;goto B753a37;
case 0x753a39:c.instructions+=4;goto B753a39;
case 0x753a3a:c.instructions+=3;goto B753a3a;
case 0x753a3d:c.instructions+=2;goto B753a3d;
case 0x753a40:c.instructions+=1;goto B753a40;
case 0x753a45:goto L753a45;
case 0x753a48:c.instructions+=4;goto B753a48;
case 0x753a52:c.instructions+=3;goto B753a52;
case 0x753a54:c.instructions+=2;goto B753a54;
case 0x753a55:c.instructions+=1;goto B753a55;
case 0x753a60:goto L753a60;
case 0x753a61:c.instructions+=3;goto B753a61;
case 0x753a65:c.instructions+=2;goto B753a65;
case 0x753a6c:c.instructions+=1;goto B753a6c;
case 0x753a6e:goto L753a6e;
case 0x753a75:goto L753a75;
case 0x753a78:c.instructions+=2;goto B753a78;
case 0x753a7a:c.instructions+=1;goto B753a7a;
case 0x753a7c:goto L753a7c;
case 0x753a7e:c.instructions+=1;goto B753a7e;
case 0x753a83:goto L753a83;
case 0x753a86:c.instructions+=2;goto B753a86;
case 0x753a87:c.instructions+=1;goto B753a87;
case 0x753a8c:goto L753a8c;
case 0x753a8f:goto L753a8f;
case 0x753a96:c.instructions+=4;goto B753a96;
case 0x753aa0:c.instructions+=3;goto B753aa0;
case 0x753aa2:c.instructions+=2;goto B753aa2;
case 0x753aa3:c.instructions+=1;goto B753aa3;
case 0x753ab0:goto L753ab0;
case 0x753ab4:c.instructions+=3;goto B753ab4;
case 0x753aba:c.instructions+=2;goto B753aba;
case 0x753abd:c.instructions+=1;goto B753abd;
case 0x753abf:goto L753abf;
case 0x753ac2:c.instructions+=1;goto B753ac2;
case 0x753ac4:goto L753ac4;
case 0x753ac7:c.instructions+=1;goto B753ac7;
case 0x753ac9:goto L753ac9;
case 0x753acc:c.instructions+=1;goto B753acc;
case 0x753ace:goto L753ace;
case 0x753ad0:c.instructions+=5;goto B753ad0;
case 0x753ad3:c.instructions+=4;goto B753ad3;
case 0x753ad6:c.instructions+=3;goto B753ad6;
case 0x753ad9:c.instructions+=2;goto B753ad9;
case 0x753adb:c.instructions+=1;goto B753adb;
case 0x753adc:goto L753adc;
case 0x753ae1:c.instructions+=1;goto B753ae1;
case 0x753ae2:goto L753ae2;
case 0x753ae7:c.instructions+=1;goto B753ae7;
case 0x753af0:goto L753af0;
case 0x753af1:c.instructions+=3;goto B753af1;
case 0x753af5:c.instructions+=2;goto B753af5;
case 0x753afc:c.instructions+=1;goto B753afc;
case 0x753afe:goto L753afe;
case 0x753b03:c.instructions+=2;goto B753b03;
case 0x753b04:c.instructions+=1;goto B753b04;
case 0x753b05:goto L753b05;
case 0x753b06:c.instructions+=11;goto B753b06;
case 0x753b0c:c.instructions+=10;goto B753b0c;
case 0x753b0d:c.instructions+=9;goto B753b0d;
case 0x753b13:c.instructions+=8;goto B753b13;
case 0x753b16:c.instructions+=7;goto B753b16;
case 0x753b17:c.instructions+=6;goto B753b17;
case 0x753b1d:c.instructions+=5;goto B753b1d;
case 0x753b1e:c.instructions+=4;goto B753b1e;
case 0x753b20:c.instructions+=3;goto B753b20;
case 0x753b26:c.instructions+=2;goto B753b26;
case 0x753b28:c.instructions+=1;goto B753b28;
case 0x753b2a:goto L753b2a;
case 0x753b2b:c.instructions+=5;goto B753b2b;
case 0x753b2c:c.instructions+=4;goto B753b2c;
case 0x753b2d:c.instructions+=3;goto B753b2d;
case 0x753b2f:c.instructions+=2;goto B753b2f;
case 0x753b30:c.instructions+=1;goto B753b30;
case 0x753b31:goto L753b31;
case 0x753b35:c.instructions+=3;goto B753b35;
case 0x753b38:c.instructions+=2;goto B753b38;
case 0x753b3a:c.instructions+=1;goto B753b3a;
case 0x753b3c:goto L753b3c;
case 0x753b3d:c.instructions+=5;goto B753b3d;
case 0x753b3e:c.instructions+=4;goto B753b3e;
case 0x753b3f:c.instructions+=3;goto B753b3f;
case 0x753b44:c.instructions+=2;goto B753b44;
case 0x753b45:c.instructions+=1;goto B753b45;
case 0x753b46:goto L753b46;
case 0x753b48:c.instructions+=1;goto B753b48;
case 0x753b4a:goto L753b4a;
case 0x753b4c:c.instructions+=13;goto B753b4c;
case 0x753b4e:c.instructions+=12;goto B753b4e;
case 0x753b50:c.instructions+=11;goto B753b50;
case 0x753b51:c.instructions+=10;goto B753b51;
case 0x753b53:c.instructions+=9;goto B753b53;
case 0x753b54:c.instructions+=8;goto B753b54;
case 0x753b55:c.instructions+=7;goto B753b55;
case 0x753b57:c.instructions+=6;goto B753b57;
case 0x753b58:c.instructions+=5;goto B753b58;
case 0x753b5a:c.instructions+=4;goto B753b5a;
case 0x753b5b:c.instructions+=3;goto B753b5b;
case 0x753b5c:c.instructions+=2;goto B753b5c;
case 0x753b5d:c.instructions+=1;goto B753b5d;
case 0x753b5e:goto L753b5e;
case 0x753b64:c.instructions+=6;goto B753b64;
case 0x753b66:c.instructions+=5;goto B753b66;
case 0x753b6a:c.instructions+=4;goto B753b6a;
case 0x753b6c:c.instructions+=3;goto B753b6c;
case 0x753b6f:c.instructions+=2;goto B753b6f;
case 0x753b72:c.instructions+=1;goto B753b72;
case 0x753b75:goto L753b75;
case 0x753b77:goto L753b77;
case 0x753b79:c.instructions+=1;goto B753b79;
case 0x753b7c:goto L753b7c;
case 0x753b7e:goto L753b7e;
case 0x753b83:goto L753b83;
case 0x753b86:c.instructions+=2;goto B753b86;
case 0x753b8b:c.instructions+=1;goto B753b8b;
case 0x753b8d:goto L753b8d;
case 0x753b92:c.instructions+=1;goto B753b92;
case 0x753b97:goto L753b97;
case 0x753b9e:c.instructions+=6;goto B753b9e;
case 0x753ba4:c.instructions+=5;goto B753ba4;
case 0x753ba5:c.instructions+=4;goto B753ba5;
case 0x753ba7:c.instructions+=3;goto B753ba7;
case 0x753ba9:c.instructions+=2;goto B753ba9;
case 0x753bac:c.instructions+=1;goto B753bac;
case 0x753bb1:goto L753bb1;
case 0x753bb6:c.instructions+=1;goto B753bb6;
case 0x753bbb:goto L753bbb;
case 0x753bbe:c.instructions+=6;goto B753bbe;
case 0x753bbf:c.instructions+=5;goto B753bbf;
case 0x753bc0:c.instructions+=4;goto B753bc0;
case 0x753bc1:c.instructions+=3;goto B753bc1;
case 0x753bc6:c.instructions+=2;goto B753bc6;
case 0x753bc7:c.instructions+=1;goto B753bc7;
case 0x753bc8:goto L753bc8;
case 0x753bce:c.instructions+=26;goto B753bce;
case 0x753bd1:c.instructions+=25;goto B753bd1;
case 0x753bd7:c.instructions+=24;goto B753bd7;
case 0x753bdd:c.instructions+=23;goto B753bdd;
case 0x753bde:c.instructions+=22;goto B753bde;
case 0x753bdf:c.instructions+=21;goto B753bdf;
case 0x753be5:c.instructions+=20;goto B753be5;
case 0x753be8:c.instructions+=19;goto B753be8;
case 0x753bee:c.instructions+=18;goto B753bee;
case 0x753bf4:c.instructions+=17;goto B753bf4;
case 0x753bfa:c.instructions+=16;goto B753bfa;
case 0x753bfc:c.instructions+=15;goto B753bfc;
case 0x753bfd:c.instructions+=14;goto B753bfd;
case 0x753bff:c.instructions+=13;goto B753bff;
case 0x753c05:c.instructions+=12;goto B753c05;
case 0x753c07:c.instructions+=11;goto B753c07;
case 0x753c09:c.instructions+=10;goto B753c09;
case 0x753c0b:c.instructions+=9;goto B753c0b;
case 0x753c11:c.instructions+=8;goto B753c11;
case 0x753c12:c.instructions+=7;goto B753c12;
case 0x753c14:c.instructions+=6;goto B753c14;
case 0x753c16:c.instructions+=5;goto B753c16;
case 0x753c17:c.instructions+=4;goto B753c17;
case 0x753c19:c.instructions+=3;goto B753c19;
case 0x753c1b:c.instructions+=2;goto B753c1b;
case 0x753c1e:c.instructions+=1;goto B753c1e;
case 0x753c20:goto L753c20;
case 0x753c25:c.instructions+=1;goto B753c25;
case 0x753c2a:goto L753c2a;
case 0x753c2d:c.instructions+=1;goto B753c2d;
case 0x753c32:goto L753c32;
case 0x753c37:c.instructions+=2;goto B753c37;
case 0x753c39:c.instructions+=1;goto B753c39;
case 0x753c3b:goto L753c3b;
case 0x753c40:goto L753c40;
case 0x753c42:goto L753c42;
case 0x753c43:c.instructions+=1;goto B753c43;
case 0x753c48:goto L753c48;
case 0x753c4b:c.instructions+=2;goto B753c4b;
case 0x753c4d:c.instructions+=1;goto B753c4d;
case 0x753c4f:goto L753c4f;
case 0x753c59:goto L753c59;
case 0x753c5e:c.instructions+=1;goto B753c5e;
case 0x753c63:goto L753c63;
case 0x753c66:goto L753c66;
case 0x753c68:c.instructions+=2;goto B753c68;
case 0x753c6a:c.instructions+=1;goto B753c6a;
case 0x753c6c:goto L753c6c;
case 0x753c71:goto L753c71;
case 0x753c72:c.instructions+=4;goto B753c72;
case 0x753c73:c.instructions+=3;goto B753c73;
case 0x753c74:c.instructions+=2;goto B753c74;
case 0x753c75:c.instructions+=1;goto B753c75;
case 0x753c80:goto L753c80;
case 0x753c81:c.instructions+=4;goto B753c81;
case 0x753c85:c.instructions+=3;goto B753c85;
case 0x753c8b:c.instructions+=2;goto B753c8b;
case 0x753c91:c.instructions+=1;goto B753c91;
case 0x753c93:goto L753c93;
case 0x753c94:c.instructions+=3;goto B753c94;
case 0x753c96:c.instructions+=2;goto B753c96;
case 0x753c98:c.instructions+=1;goto B753c98;
case 0x753c9d:goto L753c9d;
case 0x753ca0:goto L753ca0;
case 0x753ca6:c.instructions+=2;goto B753ca6;
case 0x753cac:c.instructions+=1;goto B753cac;
case 0x753cae:goto L753cae;
case 0x753cb3:c.instructions+=2;goto B753cb3;
case 0x753cb4:c.instructions+=1;goto B753cb4;
case 0x753cb5:goto L753cb5;
case 0x753cbb:c.instructions+=5;goto B753cbb;
case 0x753cbf:c.instructions+=4;goto B753cbf;
case 0x753cc1:c.instructions+=3;goto B753cc1;
case 0x753cc3:c.instructions+=2;goto B753cc3;
case 0x753cc5:c.instructions+=1;goto B753cc5;
case 0x753cc7:goto L753cc7;
case 0x753cc9:goto L753cc9;
case 0x753ccb:c.instructions+=4;goto B753ccb;
case 0x753cce:c.instructions+=3;goto B753cce;
case 0x753ccf:c.instructions+=2;goto B753ccf;
case 0x753cd3:c.instructions+=1;goto B753cd3;
case 0x753cd6:goto L753cd6;
case 0x753cd8:goto L753cd8;
case 0x753cda:c.instructions+=1;goto B753cda;
case 0x753cdd:goto L753cdd;
case 0x753cdf:goto L753cdf;
case 0x753ce3:c.instructions+=3;goto B753ce3;
case 0x753ce5:c.instructions+=2;goto B753ce5;
case 0x753ce6:c.instructions+=1;goto B753ce6;
case 0x753ce8:goto L753ce8;
case 0x753ceb:c.instructions+=1;goto B753ceb;
case 0x753ced:goto L753ced;
case 0x753cef:c.instructions+=2;goto B753cef;
case 0x753cf0:c.instructions+=1;goto B753cf0;
case 0x753d00:goto L753d00;
case 0x753d04:c.instructions+=9;goto B753d04;
case 0x753d08:c.instructions+=8;goto B753d08;
case 0x753d0c:c.instructions+=7;goto B753d0c;
case 0x753d0d:c.instructions+=6;goto B753d0d;
case 0x753d11:c.instructions+=5;goto B753d11;
case 0x753d12:c.instructions+=4;goto B753d12;
case 0x753d13:c.instructions+=3;goto B753d13;
case 0x753d14:c.instructions+=2;goto B753d14;
case 0x753d15:c.instructions+=1;goto B753d15;
case 0x753d1a:goto L753d1a;
case 0x753d1c:c.instructions+=3;goto B753d1c;
case 0x753d1f:c.instructions+=2;goto B753d1f;
case 0x753d21:c.instructions+=1;goto B753d21;
case 0x753d23:goto L753d23;
case 0x753d29:c.instructions+=5;goto B753d29;
case 0x753d2f:c.instructions+=4;goto B753d2f;
case 0x753d31:c.instructions+=3;goto B753d31;
case 0x753d32:c.instructions+=2;goto B753d32;
case 0x753d38:c.instructions+=1;goto B753d38;
case 0x753d3e:goto L753d3e;
case 0x753d40:c.instructions+=2;goto B753d40;
case 0x753d41:c.instructions+=1;goto B753d41;
case 0x753d50:goto L753d50;
case 0x753d53:c.instructions+=19;goto B753d53;
case 0x753d58:c.instructions+=18;goto B753d58;
case 0x753d59:c.instructions+=17;goto B753d59;
case 0x753d5d:c.instructions+=16;goto B753d5d;
case 0x753d5e:c.instructions+=15;goto B753d5e;
case 0x753d62:c.instructions+=14;goto B753d62;
case 0x753d63:c.instructions+=13;goto B753d63;
case 0x753d67:c.instructions+=12;goto B753d67;
case 0x753d68:c.instructions+=11;goto B753d68;
case 0x753d6c:c.instructions+=10;goto B753d6c;
case 0x753d6e:c.instructions+=9;goto B753d6e;
case 0x753d6f:c.instructions+=8;goto B753d6f;
case 0x753d73:c.instructions+=7;goto B753d73;
case 0x753d74:c.instructions+=6;goto B753d74;
case 0x753d7b:c.instructions+=5;goto B753d7b;
case 0x753d80:c.instructions+=4;goto B753d80;
case 0x753d84:c.instructions+=3;goto B753d84;
case 0x753d88:c.instructions+=2;goto B753d88;
case 0x753d8c:c.instructions+=1;goto B753d8c;
case 0x753d91:goto L753d91;
case 0x753d94:c.instructions+=2;goto B753d94;
case 0x753d96:c.instructions+=1;goto B753d96;
case 0x753d98:goto L753d98;
case 0x753d99:c.instructions+=4;goto B753d99;
case 0x753d9e:c.instructions+=3;goto B753d9e;
case 0x753d9f:c.instructions+=2;goto B753d9f;
case 0x753da3:c.instructions+=1;goto B753da3;
case 0x753da8:goto L753da8;
case 0x753dab:c.instructions+=1;goto B753dab;
case 0x753dac:goto L753dac;
case 0x753db0:c.instructions+=8;goto B753db0;
case 0x753db1:c.instructions+=7;goto B753db1;
case 0x753db3:c.instructions+=6;goto B753db3;
case 0x753db6:c.instructions+=5;goto B753db6;
case 0x753db8:c.instructions+=4;goto B753db8;
case 0x753dba:c.instructions+=3;goto B753dba;
case 0x753dbe:c.instructions+=2;goto B753dbe;
case 0x753dc2:c.instructions+=1;goto B753dc2;
case 0x753dc7:goto L753dc7;
case 0x753dca:c.instructions+=2;goto B753dca;
case 0x753dcc:c.instructions+=1;goto B753dcc;
case 0x753dce:goto L753dce;
case 0x753dcf:c.instructions+=4;goto B753dcf;
case 0x753dd4:c.instructions+=3;goto B753dd4;
case 0x753dd5:c.instructions+=2;goto B753dd5;
case 0x753dd9:c.instructions+=1;goto B753dd9;
case 0x753dde:goto L753dde;
case 0x753de1:c.instructions+=1;goto B753de1;
case 0x753de2:goto L753de2;
case 0x753de3:c.instructions+=7;goto B753de3;
case 0x753de4:c.instructions+=6;goto B753de4;
case 0x753de8:c.instructions+=5;goto B753de8;
case 0x753dec:c.instructions+=4;goto B753dec;
case 0x753ded:c.instructions+=3;goto B753ded;
case 0x753def:c.instructions+=2;goto B753def;
case 0x753df1:c.instructions+=1;goto B753df1;
case 0x753df6:goto L753df6;
case 0x753df8:c.instructions+=3;goto B753df8;
case 0x753df9:c.instructions+=2;goto B753df9;
case 0x753dfb:c.instructions+=1;goto B753dfb;
case 0x753e00:goto L753e00;
case 0x753e03:c.instructions+=2;goto B753e03;
case 0x753e05:c.instructions+=1;goto B753e05;
case 0x753e07:goto L753e07;
case 0x753e0b:c.instructions+=2;goto B753e0b;
case 0x753e0d:c.instructions+=1;goto B753e0d;
case 0x753e0f:goto L753e0f;
case 0x753e13:c.instructions+=2;goto B753e13;
case 0x753e15:c.instructions+=1;goto B753e15;
case 0x753e17:goto L753e17;
case 0x753e1b:c.instructions+=1;goto B753e1b;
case 0x753e1c:goto L753e1c;
case 0x753e22:c.instructions+=15;goto B753e22;
case 0x753e28:c.instructions+=14;goto B753e28;
case 0x753e2b:c.instructions+=13;goto B753e2b;
case 0x753e31:c.instructions+=12;goto B753e31;
case 0x753e34:c.instructions+=11;goto B753e34;
case 0x753e3a:c.instructions+=10;goto B753e3a;
case 0x753e3d:c.instructions+=9;goto B753e3d;
case 0x753e43:c.instructions+=8;goto B753e43;
case 0x753e45:c.instructions+=7;goto B753e45;
case 0x753e49:c.instructions+=6;goto B753e49;
case 0x753e4c:c.instructions+=5;goto B753e4c;
case 0x753e52:c.instructions+=4;goto B753e52;
case 0x753e58:c.instructions+=3;goto B753e58;
case 0x753e5e:c.instructions+=2;goto B753e5e;
case 0x753e61:c.instructions+=1;goto B753e61;
case 0x753e64:goto L753e64;
case 0x753e68:c.instructions+=7;goto B753e68;
case 0x753e6e:c.instructions+=6;goto B753e6e;
case 0x753e6f:c.instructions+=5;goto B753e6f;
case 0x753e71:c.instructions+=4;goto B753e71;
case 0x753e72:c.instructions+=3;goto B753e72;
case 0x753e73:c.instructions+=2;goto B753e73;
case 0x753e74:c.instructions+=1;goto B753e74;
case 0x753e79:goto L753e79;
case 0x753e7c:c.instructions+=1;goto B753e7c;
case 0x753e80:goto L753e80;
case 0x753e83:c.instructions+=26;goto B753e83;
case 0x753e88:c.instructions+=25;goto B753e88;
case 0x753e89:c.instructions+=24;goto B753e89;
case 0x753e8a:c.instructions+=23;goto B753e8a;
case 0x753e8e:c.instructions+=22;goto B753e8e;
case 0x753e8f:c.instructions+=21;goto B753e8f;
case 0x753e93:c.instructions+=20;goto B753e93;
case 0x753e95:c.instructions+=19;goto B753e95;
case 0x753e96:c.instructions+=18;goto B753e96;
case 0x753e9a:c.instructions+=17;goto B753e9a;
case 0x753e9b:c.instructions+=16;goto B753e9b;
case 0x753e9f:c.instructions+=15;goto B753e9f;
case 0x753ea0:c.instructions+=14;goto B753ea0;
case 0x753ea4:c.instructions+=13;goto B753ea4;
case 0x753ea9:c.instructions+=12;goto B753ea9;
case 0x753eaa:c.instructions+=11;goto B753eaa;
case 0x753eaf:c.instructions+=10;goto B753eaf;
case 0x753eb4:c.instructions+=9;goto B753eb4;
case 0x753eb8:c.instructions+=8;goto B753eb8;
case 0x753ebc:c.instructions+=7;goto B753ebc;
case 0x753ec0:c.instructions+=6;goto B753ec0;
case 0x753ec5:c.instructions+=5;goto B753ec5;
case 0x753eca:c.instructions+=4;goto B753eca;
case 0x753ece:c.instructions+=3;goto B753ece;
case 0x753ed2:c.instructions+=2;goto B753ed2;
case 0x753ed6:c.instructions+=1;goto B753ed6;
case 0x753edb:goto L753edb;
case 0x753ede:c.instructions+=3;goto B753ede;
case 0x753ee1:c.instructions+=2;goto B753ee1;
case 0x753ee3:c.instructions+=1;goto B753ee3;
case 0x753ee5:goto L753ee5;
case 0x753ee6:c.instructions+=5;goto B753ee6;
case 0x753ee7:c.instructions+=4;goto B753ee7;
case 0x753eec:c.instructions+=3;goto B753eec;
case 0x753eed:c.instructions+=2;goto B753eed;
case 0x753ef1:c.instructions+=1;goto B753ef1;
case 0x753ef6:goto L753ef6;
case 0x753ef9:c.instructions+=1;goto B753ef9;
case 0x753efa:goto L753efa;
case 0x753efe:c.instructions+=1;goto B753efe;
case 0x753f00:goto L753f00;
case 0x753f04:c.instructions+=3;goto B753f04;
case 0x753f08:c.instructions+=2;goto B753f08;
case 0x753f09:c.instructions+=1;goto B753f09;
case 0x753f0d:goto L753f0d;
case 0x753f0e:c.instructions+=4;goto B753f0e;
case 0x753f12:c.instructions+=3;goto B753f12;
case 0x753f13:c.instructions+=2;goto B753f13;
case 0x753f15:c.instructions+=1;goto B753f15;
case 0x753f1a:goto L753f1a;
case 0x753f1b:c.instructions+=3;goto B753f1b;
case 0x753f1c:c.instructions+=2;goto B753f1c;
case 0x753f1d:c.instructions+=1;goto B753f1d;
case 0x753f22:goto L753f22;
case 0x753f24:c.instructions+=3;goto B753f24;
case 0x753f27:c.instructions+=2;goto B753f27;
case 0x753f29:c.instructions+=1;goto B753f29;
case 0x753f2b:goto L753f2b;
case 0x753f2c:c.instructions+=6;goto B753f2c;
case 0x753f2d:c.instructions+=5;goto B753f2d;
case 0x753f2e:c.instructions+=4;goto B753f2e;
case 0x753f33:c.instructions+=3;goto B753f33;
case 0x753f34:c.instructions+=2;goto B753f34;
case 0x753f38:c.instructions+=1;goto B753f38;
case 0x753f3d:goto L753f3d;
case 0x753f40:c.instructions+=1;goto B753f40;
case 0x753f41:goto L753f41;
case 0x753f45:c.instructions+=9;goto B753f45;
case 0x753f47:c.instructions+=8;goto B753f47;
case 0x753f4b:c.instructions+=7;goto B753f4b;
case 0x753f4d:c.instructions+=6;goto B753f4d;
case 0x753f4e:c.instructions+=5;goto B753f4e;
case 0x753f51:c.instructions+=4;goto B753f51;
case 0x753f52:c.instructions+=3;goto B753f52;
case 0x753f56:c.instructions+=2;goto B753f56;
case 0x753f5a:c.instructions+=1;goto B753f5a;
case 0x753f5f:goto L753f5f;
case 0x753f62:c.instructions+=2;goto B753f62;
case 0x753f64:c.instructions+=1;goto B753f64;
case 0x753f66:goto L753f66;
case 0x753f68:c.instructions+=6;goto B753f68;
case 0x753f6c:c.instructions+=5;goto B753f6c;
case 0x753f6d:c.instructions+=4;goto B753f6d;
case 0x753f6e:c.instructions+=3;goto B753f6e;
case 0x753f72:c.instructions+=2;goto B753f72;
case 0x753f76:c.instructions+=1;goto B753f76;
case 0x753f7b:goto L753f7b;
case 0x753f7e:c.instructions+=2;goto B753f7e;
case 0x753f80:c.instructions+=1;goto B753f80;
case 0x753f82:goto L753f82;
case 0x753f83:c.instructions+=1;goto B753f83;
case 0x753f88:goto L753f88;
case 0x753f8b:c.instructions+=7;goto B753f8b;
case 0x753f8c:c.instructions+=6;goto B753f8c;
case 0x753f8d:c.instructions+=5;goto B753f8d;
case 0x753f8e:c.instructions+=4;goto B753f8e;
case 0x753f93:c.instructions+=3;goto B753f93;
case 0x753f94:c.instructions+=2;goto B753f94;
case 0x753f98:c.instructions+=1;goto B753f98;
case 0x753f9d:goto L753f9d;
case 0x753fa0:c.instructions+=1;goto B753fa0;
case 0x753fa1:goto L753fa1;
case 0x753fa5:c.instructions+=17;goto B753fa5;
case 0x753fa9:c.instructions+=16;goto B753fa9;
case 0x753fac:c.instructions+=15;goto B753fac;
case 0x753fb0:c.instructions+=14;goto B753fb0;
case 0x753fb3:c.instructions+=13;goto B753fb3;
case 0x753fb7:c.instructions+=12;goto B753fb7;
case 0x753fba:c.instructions+=11;goto B753fba;
case 0x753fbe:c.instructions+=10;goto B753fbe;
case 0x753fc2:c.instructions+=9;goto B753fc2;
case 0x753fc4:c.instructions+=8;goto B753fc4;
case 0x753fc7:c.instructions+=7;goto B753fc7;
case 0x753fcb:c.instructions+=6;goto B753fcb;
case 0x753fd1:c.instructions+=5;goto B753fd1;
case 0x753fd5:c.instructions+=4;goto B753fd5;
case 0x753fd7:c.instructions+=3;goto B753fd7;
case 0x753fd9:c.instructions+=2;goto B753fd9;
case 0x753fdd:c.instructions+=1;goto B753fdd;
case 0x753fe2:goto L753fe2;
case 0x753fe6:c.instructions+=5;goto B753fe6;
case 0x753fe7:c.instructions+=4;goto B753fe7;
case 0x753fe8:c.instructions+=3;goto B753fe8;
case 0x753fe9:c.instructions+=2;goto B753fe9;
case 0x753fea:c.instructions+=1;goto B753fea;
case 0x753fef:goto L753fef;
case 0x753ff2:c.instructions+=1;goto B753ff2;
default:missing_instruction(c.pc);}
B753000:L753000:{c.instructions+=9;NFSU2_TR(0x753000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x22cull))));
}
B753006:{NFSU2_TR(0x753006);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75300b:{NFSU2_TR(0x75300b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75300c:{NFSU2_TR(0x75300c);
__builtin_memmove((R+24),(R+4),4);
}
B75300e:{NFSU2_TR(0x75300e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753014:{NFSU2_TR(0x753014);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75301b:{NFSU2_TR(0x75301b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753021:{NFSU2_TR(0x753021);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753023:{NFSU2_TR(0x753023);
if(r1(R+518)){{goto L753069;}}
}
B753025:L753025:{c.instructions+=3;NFSU2_TR(0x753025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75302b:{NFSU2_TR(0x75302b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75302d:{NFSU2_TR(0x75302d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753069;}}
}
B75302f:L75302f:{c.instructions+=12;NFSU2_TR(0x75302f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753035:{NFSU2_TR(0x753035);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753036:{NFSU2_TR(0x753036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753037:{NFSU2_TR(0x753037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75303d:{NFSU2_TR(0x75303d);
__builtin_memmove((R+0),(R+4),4);
}
B75303f:{NFSU2_TR(0x75303f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B753041:{NFSU2_TR(0x753041);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B753043:{NFSU2_TR(0x753043);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753044:{NFSU2_TR(0x753044);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753044);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753044);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753046:{NFSU2_TR(0x753046);
__builtin_memmove((R+12),(R+24),4);
}
B753048:{NFSU2_TR(0x753048);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75304e:{NFSU2_TR(0x75304e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753053ull));
TAIL_STATIC(0x752ab0u,752);
}
B753053:L753053:{c.instructions+=5;NFSU2_TR(0x753053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753054:{NFSU2_TR(0x753054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753055:{NFSU2_TR(0x753055);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753056:{NFSU2_TR(0x753056);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75305d:{NFSU2_TR(0x75305d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753062ull));
TAIL_STATIC(0x76115eu,761);
}
B753062:L753062:{c.instructions+=2;NFSU2_TR(0x753062);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753068:{NFSU2_TR(0x753068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753069:L753069:{c.instructions+=9;NFSU2_TR(0x753069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75306f:{NFSU2_TR(0x75306f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753073:{NFSU2_TR(0x753073);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753079:{NFSU2_TR(0x753079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75307f:{NFSU2_TR(0x75307f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B753080:{NFSU2_TR(0x753080);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753084:{NFSU2_TR(0x753084);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B753088:{NFSU2_TR(0x753088);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753090:{NFSU2_TR(0x753090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753095ull));
TAIL_STATIC(0x752940u,752);
}
B753095:L753095:{c.instructions+=3;NFSU2_TR(0x753095);
u8 U[8];
w4(U+0,u32(u32(u32(0x22cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75309c:{NFSU2_TR(0x75309c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75309d:{NFSU2_TR(0x75309d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7530a2ull));
TAIL_STATIC(0x76115eu,761);
}
B7530a2:L7530a2:{c.instructions+=2;NFSU2_TR(0x7530a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x22cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x22cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x22cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7530a8:{NFSU2_TR(0x7530a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7530b0:L7530b0:{c.instructions+=23;NFSU2_TR(0x7530b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x47cull))));
}
B7530b6:{NFSU2_TR(0x7530b6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7530bb:{NFSU2_TR(0x7530bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x478ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530c2:{NFSU2_TR(0x7530c2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7530c4:{NFSU2_TR(0x7530c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530c8:{NFSU2_TR(0x7530c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7530c9:{NFSU2_TR(0x7530c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530cd:{NFSU2_TR(0x7530cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7530ce:{NFSU2_TR(0x7530ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530d2:{NFSU2_TR(0x7530d2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7530d4:{NFSU2_TR(0x7530d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7530d5:{NFSU2_TR(0x7530d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530d9:{NFSU2_TR(0x7530d9);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B7530de:{NFSU2_TR(0x7530de);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7530e0:{NFSU2_TR(0x7530e0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7530e2:{NFSU2_TR(0x7530e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7530e3:{NFSU2_TR(0x7530e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530e7:{NFSU2_TR(0x7530e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530eb:{NFSU2_TR(0x7530eb);
s4(0x8b8060,u32(0xffffffffull));
}
B7530f5:{NFSU2_TR(0x7530f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7530f9:{NFSU2_TR(0x7530f9);
__builtin_memmove((R+28),(R+0),4);
}
B7530fb:{NFSU2_TR(0x7530fb);
w4(R+20,u32(0x10ull));
}
B753100:{NFSU2_TR(0x753100);
if(r1(R+518)){{goto L75318d;}}
}
B753106:L753106:{c.instructions+=3;NFSU2_TR(0x753106);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753109:{NFSU2_TR(0x753109);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75310b:{NFSU2_TR(0x75310b);
if(r1(R+518)){{goto L753142;}}
}
B75310d:L75310d:{c.instructions+=2;NFSU2_TR(0x75310d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75310f:{NFSU2_TR(0x75310f);
if(r1(R+518)){{goto L753142;}}
}
B753111:L753111:{c.instructions+=11;NFSU2_TR(0x753111);
__builtin_memmove((R+24),(R+4),4);
}
B753113:{NFSU2_TR(0x753113);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B753117:{NFSU2_TR(0x753117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753118:{NFSU2_TR(0x753118);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75311c:{NFSU2_TR(0x75311c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75311d:{NFSU2_TR(0x75311d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75311e:{NFSU2_TR(0x75311e);
u8 U[4];
w4(U+0,u32(0x220ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753123:{NFSU2_TR(0x753123);
u8 U[4];
w4(U+0,u32(0x8b8068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753128:{NFSU2_TR(0x753128);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753129:{NFSU2_TR(0x753129);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75312d:{NFSU2_TR(0x75312d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753132ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B753132:L753132:{c.instructions+=4;NFSU2_TR(0x753132);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B753135:{NFSU2_TR(0x753135);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753137:{NFSU2_TR(0x753137);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75313b:{NFSU2_TR(0x75313b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75314b;}}
}
B75313d:L75313d:{c.instructions+=1;NFSU2_TR(0x75313d);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B753142:L753142:{c.instructions+=3;NFSU2_TR(0x753142);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B753145:{NFSU2_TR(0x753145);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753147:{NFSU2_TR(0x753147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753106u);}goto L753106;}}
}
B753149:L753149:{c.instructions+=1;NFSU2_TR(0x753149);
{goto L753189;}
}
B75314b:L75314b:{c.instructions+=16;NFSU2_TR(0x75314b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B75314e:{NFSU2_TR(0x75314e);
__builtin_memmove(gp(0x8b8060),(R+0),4);
}
B753153:{NFSU2_TR(0x753153);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753157:{NFSU2_TR(0x753157);
w4(R+4,u32(r1(R+0)));
}
B75315a:{NFSU2_TR(0x75315a);
w4(R+8,u32(r1(R+1)));
}
B75315d:{NFSU2_TR(0x75315d);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B753162:{NFSU2_TR(0x753162);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B753165:{NFSU2_TR(0x753165);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B753167:{NFSU2_TR(0x753167);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75316c:{NFSU2_TR(0x75316c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75316f:{NFSU2_TR(0x75316f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B753171:{NFSU2_TR(0x753171);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B753176:{NFSU2_TR(0x753176);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B753179:{NFSU2_TR(0x753179);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75317b:{NFSU2_TR(0x75317b);
__builtin_memmove(gp(0x8b8064),(R+4),4);
}
B753181:{NFSU2_TR(0x753181);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753189:L753189:{c.instructions+=1;NFSU2_TR(0x753189);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75318d:L75318d:{c.instructions+=5;NFSU2_TR(0x75318d);
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
B75318f:{NFSU2_TR(0x75318f);
__builtin_memmove((R+20),(R+0),4);
}
B753191:{NFSU2_TR(0x753191);
w4(R+4,u32(0x2ull));
}
B753196:{NFSU2_TR(0x753196);
w4(R+28,u32(0x4ull));
}
B75319b:{NFSU2_TR(0x75319b);
if(r1(R+518)){{goto L75362a;}}
}
B7531a1:L7531a1:{c.instructions+=1;NFSU2_TR(0x7531a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7531a6ull));
TAIL_STATIC(0x74b730u,74b);
}
B7531a6:L7531a6:{c.instructions+=5;NFSU2_TR(0x7531a6);
__builtin_memmove((R+24),(R+0),4);
}
B7531a8:{NFSU2_TR(0x7531a8);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7531ac:{NFSU2_TR(0x7531ac);
__builtin_memmove((R+0),gp(0x8b8060),4);
}
B7531b1:{NFSU2_TR(0x7531b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x490ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7531b8:{NFSU2_TR(0x7531b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531ed;}}
}
B7531ba:L7531ba:{c.instructions+=3;NFSU2_TR(0x7531ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7531be:{NFSU2_TR(0x7531be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7531c1:{NFSU2_TR(0x7531c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531ed;}}
}
B7531c3:L7531c3:{c.instructions+=2;NFSU2_TR(0x7531c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7531ca:{NFSU2_TR(0x7531ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531ed;}}
}
B7531cc:L7531cc:{c.instructions+=2;NFSU2_TR(0x7531cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7531ce:{NFSU2_TR(0x7531ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531ef;}}
}
B7531d0:L7531d0:{c.instructions+=2;NFSU2_TR(0x7531d0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8068),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7531d7:{NFSU2_TR(0x7531d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531f5;}}
}
B7531d9:L7531d9:{c.instructions+=3;NFSU2_TR(0x7531d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7531df:{NFSU2_TR(0x7531df);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b806c),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7531e5:{NFSU2_TR(0x7531e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7531f5;}}
}
B7531e7:L7531e7:{c.instructions+=2;NFSU2_TR(0x7531e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7531eb:{NFSU2_TR(0x7531eb);
{goto L7531f5;}
}
B7531ed:L7531ed:{c.instructions+=1;NFSU2_TR(0x7531ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7531ef:L7531ef:{c.instructions+=1;NFSU2_TR(0x7531ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7533d0;}}
}
B7531f5:L7531f5:{c.instructions+=3;NFSU2_TR(0x7531f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7531fb:{NFSU2_TR(0x7531fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7531fe:{NFSU2_TR(0x7531fe);
if(r1(R+518)){{goto L7533d0;}}
}
B753204:L753204:{c.instructions+=2;NFSU2_TR(0x753204);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753207:{NFSU2_TR(0x753207);
if(r1(R+518)){{goto L7533d0;}}
}
B75320d:L75320d:{c.instructions+=3;NFSU2_TR(0x75320d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753211:{NFSU2_TR(0x753211);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753214:{NFSU2_TR(0x753214);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7533d0;}}
}
B75321a:L75321a:{c.instructions+=5;NFSU2_TR(0x75321a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75321e:{NFSU2_TR(0x75321e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75321f:{NFSU2_TR(0x75321f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B753222:{NFSU2_TR(0x753222);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753223:{NFSU2_TR(0x753223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753228ull));
TAIL_STATIC(0x742e90u,742);
}
B753228:L753228:{c.instructions+=3;NFSU2_TR(0x753228);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75322b:{NFSU2_TR(0x75322b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75322d:{NFSU2_TR(0x75322d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7533d0;}}
}
B753233:L753233:{c.instructions+=10;NFSU2_TR(0x753233);
__builtin_memmove((R+0),gp(0x8b8060),4);
}
B753238:{NFSU2_TR(0x753238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75323b:{NFSU2_TR(0x75323b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75323e:{NFSU2_TR(0x75323e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B753240:{NFSU2_TR(0x753240);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B753241:{NFSU2_TR(0x753241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753244:{NFSU2_TR(0x753244);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753247:{NFSU2_TR(0x753247);
__builtin_memmove((R+8),gp(0x8b8068),4);
}
B75324d:{NFSU2_TR(0x75324d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753250:{NFSU2_TR(0x753250);
if(r1(R+518)){{goto L7533af;}}
}
B753256:L753256:{c.instructions+=2;NFSU2_TR(0x753256);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753259:{NFSU2_TR(0x753259);
if(r1(R+518)){{goto L7533af;}}
}
B75325f:L75325f:{c.instructions+=2;NFSU2_TR(0x75325f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753262:{NFSU2_TR(0x753262);
if(r1(R+518)){{goto L7533af;}}
}
B753268:L753268:{c.instructions+=2;NFSU2_TR(0x753268);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75326e:{NFSU2_TR(0x75326e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7533c6;}}
}
B753274:L753274:{c.instructions+=3;NFSU2_TR(0x753274);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753276:{NFSU2_TR(0x753276);
__builtin_memmove((R+4),gp(0x8b8064),4);
}
B75327c:{NFSU2_TR(0x75327c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753295;}}
}
B75327e:L75327e:{c.instructions+=4;NFSU2_TR(0x75327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753284:{NFSU2_TR(0x753284);
w4(R+0,u32(0x8b8060ull));
}
B753289:{NFSU2_TR(0x753289);
__builtin_memmove((R+4),(R+20),4);
}
B75328b:{NFSU2_TR(0x75328b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753290ull));
TAIL_STATIC(0x752e20u,752);
}
B753290:L753290:{c.instructions+=1;NFSU2_TR(0x753290);
{goto L7533c6;}
}
B753295:L753295:{c.instructions+=2;NFSU2_TR(0x753295);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75329b:{NFSU2_TR(0x75329b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75338c;}}
}
B7532a1:L7532a1:{c.instructions+=14;NFSU2_TR(0x7532a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7532a7:{NFSU2_TR(0x7532a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7532ab:{NFSU2_TR(0x7532ab);
__builtin_memmove((R+0),(R+8),4);
}
B7532ad:{NFSU2_TR(0x7532ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B7532b0:{NFSU2_TR(0x7532b0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffull))));
}
B7532b6:{NFSU2_TR(0x7532b6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7532b8:{NFSU2_TR(0x7532b8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7532ba:{NFSU2_TR(0x7532ba);
__builtin_memmove(gp(0x8b7e40),(R+8),4);
}
B7532c0:{NFSU2_TR(0x7532c0);
__builtin_memmove((R+8),gp(0x8b806c),4);
}
B7532c6:{NFSU2_TR(0x7532c6);
__builtin_memmove(gp(0x8b7e3c),(R+4),4);
}
B7532cc:{NFSU2_TR(0x7532cc);
__builtin_memmove(gp(0x8b7e44),(R+8),4);
}
B7532d2:{NFSU2_TR(0x7532d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7532d6:{NFSU2_TR(0x7532d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7532dc:{NFSU2_TR(0x7532dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7533c6;}}
}
B7532e2:L7532e2:{c.instructions+=4;NFSU2_TR(0x7532e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7532e6:{NFSU2_TR(0x7532e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7532e8:{NFSU2_TR(0x7532e8);
__builtin_memmove((R+0),gp(0x8b8060),4);
}
B7532ed:{NFSU2_TR(0x7532ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7532fe;}}
}
B7532ef:L7532ef:{c.instructions+=4;NFSU2_TR(0x7532ef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B7532f0:{NFSU2_TR(0x7532f0);
__builtin_memmove(gp(0x8b8060),(R+0),4);
}
B7532f5:{NFSU2_TR(0x7532f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b8070ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B7532fc:{NFSU2_TR(0x7532fc);
{goto L753300;}
}
B7532fe:L7532fe:{c.instructions+=1;NFSU2_TR(0x7532fe);
__builtin_memmove((R+4),(R+0),4);
}
B753300:L753300:{c.instructions+=7;NFSU2_TR(0x753300);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B753302:{NFSU2_TR(0x753302);
__builtin_memmove(gp(0x8b7e38),(R+4),4);
}
B753308:{NFSU2_TR(0x753308);
__builtin_memmove(gp(0x8b8060),(R+0),4);
}
B75330d:{NFSU2_TR(0x75330d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8b8070ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753313:{NFSU2_TR(0x753313);
__builtin_memmove((R+0),(R+4),4);
}
B753315:{NFSU2_TR(0x753315);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B753318:{NFSU2_TR(0x753318);
w4(R+28,u32(0x8b7e48ull));
}
B75331d:L75331d:{c.instructions+=1;NFSU2_TR(0x75331d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75331f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75331du);}goto L75331d;}
}
B75331f:L75331f:{c.instructions+=2;NFSU2_TR(0x75331f);
__builtin_memmove((R+4),(R+0),4);
}
B753321:{NFSU2_TR(0x753321);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B753324:L753324:{c.instructions+=1;NFSU2_TR(0x753324);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L753326;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753324u);}goto L753324;}
}
B753326:L753326:{c.instructions+=3;NFSU2_TR(0x753326);
w4(R+0,u32(0x8b7e38ull));
}
B75332b:{NFSU2_TR(0x75332b);
__builtin_memmove((R+4),(R+20),4);
}
B75332d:{NFSU2_TR(0x75332d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753332ull));
TAIL_STATIC(0x752e20u,752);
}
B753332:L753332:{c.instructions+=3;NFSU2_TR(0x753332);
u8 U[4];
w4(U+0,u32(0x8b7e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753337:{NFSU2_TR(0x753337);
__builtin_memmove((R+12),(R+20),4);
}
B753339:{NFSU2_TR(0x753339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75333eull));
TAIL_STATIC(0x752ec0u,752);
}
B75333e:L75333e:{c.instructions+=3;NFSU2_TR(0x75333e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753341:{NFSU2_TR(0x753341);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B753343:{NFSU2_TR(0x753343);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75334f;}}
}
B753345:L753345:{c.instructions+=2;NFSU2_TR(0x753345);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75334d:{NFSU2_TR(0x75334d);
{goto L753367;}
}
B75334f:L75334f:{c.instructions+=3;NFSU2_TR(0x75334f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753353:{NFSU2_TR(0x753353);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753355:{NFSU2_TR(0x753355);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L753367;}}
}
B753357:L753357:{c.instructions+=3;NFSU2_TR(0x753357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75335d:{NFSU2_TR(0x75335d);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753361:{NFSU2_TR(0x753361);
if(r1(R+518)){{goto L753367;}}
}
B753363:L753363:{c.instructions+=1;NFSU2_TR(0x753363);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753367:L753367:{c.instructions+=7;NFSU2_TR(0x753367);
__builtin_memmove((R+4),gp(0x8b7e40),4);
}
B75336d:{NFSU2_TR(0x75336d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753371:{NFSU2_TR(0x753371);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B753372:{NFSU2_TR(0x753372);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B753373:{NFSU2_TR(0x753373);
__builtin_memmove(gp(0x8b7e40),(R+4),4);
}
B753379:{NFSU2_TR(0x753379);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75337d:{NFSU2_TR(0x75337d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7532e2u);}goto L7532e2;}}
}
B753383:L753383:{c.instructions+=2;NFSU2_TR(0x753383);
u8 U[8];
w4(U+0,u32(u32(u32(0x490ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75338a:{NFSU2_TR(0x75338a);
{goto L7533bf;}
}
B75338c:L75338c:{c.instructions+=4;NFSU2_TR(0x75338c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753392:{NFSU2_TR(0x753392);
w4(R+0,u32(0x8b8060ull));
}
B753397:{NFSU2_TR(0x753397);
__builtin_memmove((R+4),(R+20),4);
}
B753399:{NFSU2_TR(0x753399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75339eull));
TAIL_STATIC(0x752e20u,752);
}
B75339e:L75339e:{c.instructions+=3;NFSU2_TR(0x75339e);
u8 U[4];
w4(U+0,u32(0x8b8060ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7533a3:{NFSU2_TR(0x7533a3);
__builtin_memmove((R+12),(R+20),4);
}
B7533a5:{NFSU2_TR(0x7533a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7533aaull));
TAIL_STATIC(0x752ec0u,752);
}
B7533aa:L7533aa:{c.instructions+=2;NFSU2_TR(0x7533aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7533ad:{NFSU2_TR(0x7533ad);
{goto L7533bf;}
}
B7533af:L7533af:{c.instructions+=4;NFSU2_TR(0x7533af);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B7533b3:{NFSU2_TR(0x7533b3);
w4(R+28,u32(0x8b8060ull));
}
B7533b8:{NFSU2_TR(0x7533b8);
__builtin_memmove((R+0),(R+20),4);
}
B7533ba:{NFSU2_TR(0x7533ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7533bfull));
TAIL_STATIC(0x752a20u,752);
}
B7533bf:L7533bf:{c.instructions+=2;NFSU2_TR(0x7533bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B7533c1:{NFSU2_TR(0x7533c1);
w4(R+28,u32(0x4ull));
}
B7533c6:L7533c6:{c.instructions+=1;NFSU2_TR(0x7533c6);
s4(0x8b8060,u32(0xffffffffull));
}
B7533d0:L7533d0:{c.instructions+=2;NFSU2_TR(0x7533d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7533d7:{NFSU2_TR(0x7533d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753456;}}
}
B7533dd:L7533dd:{c.instructions+=5;NFSU2_TR(0x7533dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7533e3:{NFSU2_TR(0x7533e3);
__builtin_memmove((R+8),(R+24),4);
}
B7533e5:{NFSU2_TR(0x7533e5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B7533e7:{NFSU2_TR(0x7533e7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3e8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7533ed:{NFSU2_TR(0x7533ed);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L753456;}}
}
B7533ef:L7533ef:{c.instructions+=14;NFSU2_TR(0x7533ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7533f5:{NFSU2_TR(0x7533f5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7533f7:{NFSU2_TR(0x7533f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7533fa:{NFSU2_TR(0x7533fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7533fb:{NFSU2_TR(0x7533fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7533fc:{NFSU2_TR(0x7533fc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7533fe:{NFSU2_TR(0x7533fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B753402:{NFSU2_TR(0x753402);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753406:{NFSU2_TR(0x753406);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753409:{NFSU2_TR(0x753409);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75340a:{NFSU2_TR(0x75340a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75340b:{NFSU2_TR(0x75340b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75340f:{NFSU2_TR(0x75340f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753417:{NFSU2_TR(0x753417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75341cull));
TAIL_STATIC(0x74a5c0u,74a);
}
B75341c:L75341c:{c.instructions+=3;NFSU2_TR(0x75341c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B75341f:{NFSU2_TR(0x75341f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B753422:{NFSU2_TR(0x753422);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753450;}}
}
B753424:L753424:{c.instructions+=1;NFSU2_TR(0x753424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753429ull));
TAIL_STATIC(0x74b730u,74b);
}
B753429:L753429:{c.instructions+=10;NFSU2_TR(0x753429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75342c:{NFSU2_TR(0x75342c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75342f:{NFSU2_TR(0x75342f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B753432:{NFSU2_TR(0x753432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753438:{NFSU2_TR(0x753438);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75343c:{NFSU2_TR(0x75343c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75343d:{NFSU2_TR(0x75343d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753440:{NFSU2_TR(0x753440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753443:{NFSU2_TR(0x753443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753446:{NFSU2_TR(0x753446);
if(r1(R+518)){{goto L753456;}}
}
B753448:L753448:{c.instructions+=2;NFSU2_TR(0x753448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75344e:{NFSU2_TR(0x75344e);
{goto L753456;}
}
B753450:L753450:{c.instructions+=1;NFSU2_TR(0x753450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753456:L753456:{c.instructions+=2;NFSU2_TR(0x753456);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75345c:{NFSU2_TR(0x75345c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7534ac;}}
}
B75345e:L75345e:{c.instructions+=3;NFSU2_TR(0x75345e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753464:{NFSU2_TR(0x753464);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75346a:{NFSU2_TR(0x75346a);
if(r1(R+518)){{goto L75347a;}}
}
B75346c:L75346c:{c.instructions+=2;NFSU2_TR(0x75346c);
__builtin_memmove((R+12),(R+20),4);
}
B75346e:{NFSU2_TR(0x75346e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753473ull));
TAIL_STATIC(0x752ab0u,752);
}
B753473:L753473:{c.instructions+=2;NFSU2_TR(0x753473);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B753475:{NFSU2_TR(0x753475);
w4(R+28,u32(0x4ull));
}
B75347a:L75347a:{c.instructions+=2;NFSU2_TR(0x75347a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753480:{NFSU2_TR(0x753480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7534ac;}}
}
B753482:L753482:{c.instructions+=5;NFSU2_TR(0x753482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753488:{NFSU2_TR(0x753488);
__builtin_memmove((R+8),(R+24),4);
}
B75348a:{NFSU2_TR(0x75348a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B75348c:{NFSU2_TR(0x75348c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x1d4c0ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1d4c0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753492:{NFSU2_TR(0x753492);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7534ac;}}
}
B753494:L753494:{c.instructions+=5;NFSU2_TR(0x753494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75349a:{NFSU2_TR(0x75349a);
__builtin_memmove((R+0),(R+24),4);
}
B75349c:{NFSU2_TR(0x75349c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75349e:{NFSU2_TR(0x75349e);
w1(R+512,u8((r4(R+0))<(u32(0x7d0ull))));
}
B7534a3:{NFSU2_TR(0x7534a3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L7534ac;}}
}
B7534a5:L7534a5:{c.instructions+=2;NFSU2_TR(0x7534a5);
__builtin_memmove((R+4),(R+20),4);
}
B7534a7:{NFSU2_TR(0x7534a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7534acull));
TAIL_STATIC(0x7529b0u,752);
}
B7534ac:L7534ac:{c.instructions+=2;NFSU2_TR(0x7534ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7534b3:{NFSU2_TR(0x7534b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75354a;}}
}
B7534b9:L7534b9:{c.instructions+=3;NFSU2_TR(0x7534b9);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x2ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B7534be:{NFSU2_TR(0x7534be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B7534c1:{NFSU2_TR(0x7534c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75354a;}}
}
B7534c7:L7534c7:{c.instructions+=4;NFSU2_TR(0x7534c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7534cd:{NFSU2_TR(0x7534cd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3e8ull))));
}
B7534d3:{NFSU2_TR(0x7534d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7534d5:{NFSU2_TR(0x7534d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75354a;}}
}
B7534d7:L7534d7:{c.instructions+=13;NFSU2_TR(0x7534d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7534da:{NFSU2_TR(0x7534da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7534e0:{NFSU2_TR(0x7534e0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534e2:{NFSU2_TR(0x7534e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534e3:{NFSU2_TR(0x7534e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534e4:{NFSU2_TR(0x7534e4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534e6:{NFSU2_TR(0x7534e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B7534ed:{NFSU2_TR(0x7534ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534ee:{NFSU2_TR(0x7534ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7534ef:{NFSU2_TR(0x7534ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7534f6:{NFSU2_TR(0x7534f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x280ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753501:{NFSU2_TR(0x753501);
u8 U[8];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753508:{NFSU2_TR(0x753508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75350dull));
TAIL_STATIC(0x74a5c0u,74a);
}
B75350d:L75350d:{c.instructions+=3;NFSU2_TR(0x75350d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B753510:{NFSU2_TR(0x753510);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B753513:{NFSU2_TR(0x753513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753544;}}
}
B753515:L753515:{c.instructions+=1;NFSU2_TR(0x753515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75351aull));
TAIL_STATIC(0x74b730u,74b);
}
B75351a:L75351a:{c.instructions+=10;NFSU2_TR(0x75351a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75351d:{NFSU2_TR(0x75351d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753520:{NFSU2_TR(0x753520);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B753523:{NFSU2_TR(0x753523);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753529:{NFSU2_TR(0x753529);
u8 U[8];
w4(U+0,u32(u32(u32(0x268ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753530:{NFSU2_TR(0x753530);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B753531:{NFSU2_TR(0x753531);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753534:{NFSU2_TR(0x753534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753537:{NFSU2_TR(0x753537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75353a:{NFSU2_TR(0x75353a);
if(r1(R+518)){{goto L75354a;}}
}
B75353c:L75353c:{c.instructions+=2;NFSU2_TR(0x75353c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753542:{NFSU2_TR(0x753542);
{goto L75354a;}
}
B753544:L753544:{c.instructions+=1;NFSU2_TR(0x753544);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75354a:L75354a:{c.instructions+=2;NFSU2_TR(0x75354a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753550:{NFSU2_TR(0x753550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75356e;}}
}
B753552:L753552:{c.instructions+=4;NFSU2_TR(0x753552);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753558:{NFSU2_TR(0x753558);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfaull))));
}
B75355e:{NFSU2_TR(0x75355e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753560:{NFSU2_TR(0x753560);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75356e;}}
}
B753562:L753562:{c.instructions+=2;NFSU2_TR(0x753562);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753568:{NFSU2_TR(0x753568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75356e:L75356e:{c.instructions+=2;NFSU2_TR(0x75356e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753574:{NFSU2_TR(0x753574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7535b8;}}
}
B753576:L753576:{c.instructions+=3;NFSU2_TR(0x753576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75357c:{NFSU2_TR(0x75357c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75357e:{NFSU2_TR(0x75357e);
if(r1(R+518)){{goto L7535b8;}}
}
B753580:L753580:{c.instructions+=6;NFSU2_TR(0x753580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753586:{NFSU2_TR(0x753586);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B753587:{NFSU2_TR(0x753587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75358d:{NFSU2_TR(0x75358d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753593:{NFSU2_TR(0x753593);
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
B753595:{NFSU2_TR(0x753595);
if(r1(R+518)){{goto L75359e;}}
}
B753597:L753597:{c.instructions+=3;NFSU2_TR(0x753597);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753598:{NFSU2_TR(0x753598);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753599:{NFSU2_TR(0x753599);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75359bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75359b:L75359b:{c.instructions+=1;NFSU2_TR(0x75359b);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75359e:L75359e:{c.instructions+=5;NFSU2_TR(0x75359e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7535a4:{NFSU2_TR(0x7535a4);
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
B7535a5:{NFSU2_TR(0x7535a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7535ab:{NFSU2_TR(0x7535ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7535b1:{NFSU2_TR(0x7535b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7535b6ull));
TAIL_STATIC(0x74b730u,74b);
}
B7535b6:L7535b6:{c.instructions+=1;NFSU2_TR(0x7535b6);
__builtin_memmove((R+24),(R+0),4);
}
B7535b8:L7535b8:{c.instructions+=2;NFSU2_TR(0x7535b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7535be:{NFSU2_TR(0x7535be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753611;}}
}
B7535c0:L7535c0:{c.instructions+=3;NFSU2_TR(0x7535c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7535c6:{NFSU2_TR(0x7535c6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7535cc:{NFSU2_TR(0x7535cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753611;}}
}
B7535ce:L7535ce:{c.instructions+=4;NFSU2_TR(0x7535ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B7535d4:{NFSU2_TR(0x7535d4);
__builtin_memmove((R+0),(R+24),4);
}
B7535d6:{NFSU2_TR(0x7535d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x64ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7535d9:{NFSU2_TR(0x7535d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7535f1;}}
}
B7535db:L7535db:{c.instructions+=3;NFSU2_TR(0x7535db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7535e1:{NFSU2_TR(0x7535e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7535e7:{NFSU2_TR(0x7535e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753604;}}
}
B7535e9:L7535e9:{c.instructions+=2;NFSU2_TR(0x7535e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7535ef:{NFSU2_TR(0x7535ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753604;}}
}
B7535f1:L7535f1:{c.instructions+=2;NFSU2_TR(0x7535f1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9c4ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9c4ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7535f6:{NFSU2_TR(0x7535f6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L753604;}}
}
B7535f8:L7535f8:{c.instructions+=2;NFSU2_TR(0x7535f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x800ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B753602:{NFSU2_TR(0x753602);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L753611;}}
}
B753604:L753604:{c.instructions+=3;NFSU2_TR(0x753604);
__builtin_memmove((R+4),(R+20),4);
}
B753606:{NFSU2_TR(0x753606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75360c:{NFSU2_TR(0x75360c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753611ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753000u);}goto L753000;}
}
B753611:L753611:{c.instructions+=3;NFSU2_TR(0x753611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B753614:{NFSU2_TR(0x753614);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753616:{NFSU2_TR(0x753616);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7531a1u);}goto L7531a1;}}
}
B75361c:L75361c:{c.instructions+=3;NFSU2_TR(0x75361c);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B753621:{NFSU2_TR(0x753621);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753625:{NFSU2_TR(0x753625);
w4(R+4,u32(0x2ull));
}
B75362a:L75362a:{c.instructions+=2;NFSU2_TR(0x75362a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8060),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B753630:{NFSU2_TR(0x753630);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75368e;}}
}
B753632:L753632:{c.instructions+=2;NFSU2_TR(0x753632);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8068),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753639:{NFSU2_TR(0x753639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75368e;}}
}
B75363b:L75363b:{c.instructions+=3;NFSU2_TR(0x75363b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75363f:{NFSU2_TR(0x75363f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+28))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B753642:{NFSU2_TR(0x753642);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75368e;}}
}
B753644:L753644:{c.instructions+=2;NFSU2_TR(0x753644);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753646:{NFSU2_TR(0x753646);
if(r1(R+518)){{goto L75368e;}}
}
B753648:L753648:{c.instructions+=2;NFSU2_TR(0x753648);
__builtin_memmove((R+8),gp(0x8b806c),4);
}
B75364e:{NFSU2_TR(0x75364e);
__builtin_memmove((R+28),(R+28),4);
}
B753650:L753650:{c.instructions+=2;NFSU2_TR(0x753650);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753656:{NFSU2_TR(0x753656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75366b;}}
}
B753658:L753658:{c.instructions+=2;NFSU2_TR(0x753658);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B75365c:{NFSU2_TR(0x75365c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75366b;}}
}
B75365e:L75365e:{c.instructions+=2;NFSU2_TR(0x75365e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753664:{NFSU2_TR(0x753664);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75366b;}}
}
B753666:L753666:{c.instructions+=2;NFSU2_TR(0x753666);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753669:{NFSU2_TR(0x753669);
if(r1(R+518)){{goto L753674;}}
}
B75366b:L75366b:{c.instructions+=3;NFSU2_TR(0x75366b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75366e:{NFSU2_TR(0x75366e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753670:{NFSU2_TR(0x753670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753650u);}goto L753650;}}
}
B753672:L753672:{c.instructions+=1;NFSU2_TR(0x753672);
{goto L75368e;}
}
B753674:L753674:{c.instructions+=8;NFSU2_TR(0x753674);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
}
B753677:{NFSU2_TR(0x753677);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B753679:{NFSU2_TR(0x753679);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75367d:{NFSU2_TR(0x75367d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753680:{NFSU2_TR(0x753680);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753684:{NFSU2_TR(0x753684);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753687:{NFSU2_TR(0x753687);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75368b:{NFSU2_TR(0x75368b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75368e:L75368e:{c.instructions+=3;NFSU2_TR(0x75368e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753692:{NFSU2_TR(0x753692);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753694:{NFSU2_TR(0x753694);
if(r1(R+518)){{goto L7536e2;}}
}
B753696:L753696:{c.instructions+=2;NFSU2_TR(0x753696);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8060),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75369c:{NFSU2_TR(0x75369c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7536e2;}}
}
B75369e:L75369e:{c.instructions+=3;NFSU2_TR(0x75369e);
__builtin_memmove((R+8),gp(0x8b806c),4);
}
B7536a4:{NFSU2_TR(0x7536a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7536aa:{NFSU2_TR(0x7536aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7536e2;}}
}
B7536ac:L7536ac:{c.instructions+=13;NFSU2_TR(0x7536ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7536b0:{NFSU2_TR(0x7536b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B7536b3:{NFSU2_TR(0x7536b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7536b5:{NFSU2_TR(0x7536b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7536b9:{NFSU2_TR(0x7536b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7536bc:{NFSU2_TR(0x7536bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7536c0:{NFSU2_TR(0x7536c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7536c3:{NFSU2_TR(0x7536c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7536c7:{NFSU2_TR(0x7536c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B7536cb:{NFSU2_TR(0x7536cb);
w4(R+28,u32(0x8b8060ull));
}
B7536d0:{NFSU2_TR(0x7536d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7536d3:{NFSU2_TR(0x7536d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7536dd:{NFSU2_TR(0x7536dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7536e2ull));
TAIL_STATIC(0x752a20u,752);
}
B7536e2:L7536e2:{c.instructions+=7;NFSU2_TR(0x7536e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x488ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7536e9:{NFSU2_TR(0x7536e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7536ed:{NFSU2_TR(0x7536ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7536ee:{NFSU2_TR(0x7536ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7536ef:{NFSU2_TR(0x7536ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7536f0:{NFSU2_TR(0x7536f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7536f1:{NFSU2_TR(0x7536f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7536f6ull));
TAIL_STATIC(0x76115eu,761);
}
B7536f6:L7536f6:{c.instructions+=2;NFSU2_TR(0x7536f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x47cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x47cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x47cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7536fc:{NFSU2_TR(0x7536fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753700:L753700:{c.instructions+=2;NFSU2_TR(0x753700);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753705:{NFSU2_TR(0x753705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75370aull));
TAIL_STATIC(0x74b790u,74b);
}
B75370a:L75370a:{c.instructions+=3;NFSU2_TR(0x75370a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75370d:{NFSU2_TR(0x75370d);
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
B75370f:{NFSU2_TR(0x75370f);
if(r1(R+518)){{goto L753748;}}
}
B753711:L753711:{c.instructions+=2;NFSU2_TR(0x753711);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753712:{NFSU2_TR(0x753712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753717ull));
TAIL_STATIC(0x74b730u,74b);
}
B753717:L753717:{c.instructions+=2;NFSU2_TR(0x753717);
__builtin_memmove((R+24),(R+0),4);
}
B753719:{NFSU2_TR(0x753719);
__builtin_memmove((R+16),(R+16),4);
}
B753720:L753720:{c.instructions+=2;NFSU2_TR(0x753720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753721:{NFSU2_TR(0x753721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753726ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7530b0u);}goto L7530b0;}
}
B753726:L753726:{c.instructions+=3;NFSU2_TR(0x753726);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753729:{NFSU2_TR(0x753729);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75372b:{NFSU2_TR(0x75372b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753720u);}goto L753720;}}
}
B75372d:L75372d:{c.instructions+=3;NFSU2_TR(0x75372d);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753732:{NFSU2_TR(0x753732);
s4(0x8b7e30,u32(0x0ull));
}
B75373c:{NFSU2_TR(0x75373c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753741ull));
TAIL_STATIC(0x74b870u,74b);
}
B753741:L753741:{c.instructions+=4;NFSU2_TR(0x753741);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753744:{NFSU2_TR(0x753744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753745:{NFSU2_TR(0x753745);
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
B753747:{NFSU2_TR(0x753747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753748:L753748:{c.instructions+=3;NFSU2_TR(0x753748);
s4(0x8b7e30,u32(u32(m4(0x8b7e30))+u32(u32(0x1ull))));
}
B75374e:{NFSU2_TR(0x75374e);
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
B753750:{NFSU2_TR(0x753750);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753760:L753760:{c.instructions+=3;NFSU2_TR(0x753760);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B753765:{NFSU2_TR(0x753765);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753767:{NFSU2_TR(0x753767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753780;}}
}
B753769:L753769:{c.instructions+=2;NFSU2_TR(0x753769);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75376e:{NFSU2_TR(0x75376e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753773ull));
TAIL_STATIC(0x74b740u,74b);
}
B753773:L753773:{c.instructions+=2;NFSU2_TR(0x753773);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753776:{NFSU2_TR(0x753776);
s4(0x8b7e30,u32(0x0ull));
}
B753780:L753780:{c.instructions+=2;NFSU2_TR(0x753780);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753785:{NFSU2_TR(0x753785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75378aull));
TAIL_STATIC(0x74b7e0u,74b);
}
B75378a:L75378a:{c.instructions+=5;NFSU2_TR(0x75378a);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B75378f:{NFSU2_TR(0x75378f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753792:{NFSU2_TR(0x753792);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753797:{NFSU2_TR(0x753797);
__builtin_memmove(gp(0x8b82ac),(R+24),4);
}
B75379d:{NFSU2_TR(0x75379d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7537a2ull));
TAIL_STATIC(0x74b870u,74b);
}
B7537a2:L7537a2:{c.instructions+=2;NFSU2_TR(0x7537a2);
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
B7537a5:{NFSU2_TR(0x7537a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7537b0:L7537b0:{c.instructions+=2;NFSU2_TR(0x7537b0);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7537b5:{NFSU2_TR(0x7537b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7537baull));
TAIL_STATIC(0x74b7e0u,74b);
}
B7537ba:L7537ba:{c.instructions+=5;NFSU2_TR(0x7537ba);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B7537bf:{NFSU2_TR(0x7537bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7537c2:{NFSU2_TR(0x7537c2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7537c4:{NFSU2_TR(0x7537c4);
w4(R+4,u32(0x8b82acull));
}
B7537c9:{NFSU2_TR(0x7537c9);
if(r1(R+518)){{goto L7537d9;}}
}
B7537cb:L7537cb:{c.instructions+=1;NFSU2_TR(0x7537cb);
{goto L7537d0;}
}
B7537d0:L7537d0:{c.instructions+=4;NFSU2_TR(0x7537d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7537d3:{NFSU2_TR(0x7537d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7537d5:{NFSU2_TR(0x7537d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7537d7:{NFSU2_TR(0x7537d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7537d0u);}goto L7537d0;}}
}
B7537d9:L7537d9:{c.instructions+=4;NFSU2_TR(0x7537d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7537dc:{NFSU2_TR(0x7537dc);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7537e1:{NFSU2_TR(0x7537e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B7537e3:{NFSU2_TR(0x7537e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7537e8ull));
TAIL_STATIC(0x74b870u,74b);
}
B7537e8:L7537e8:{c.instructions+=4;NFSU2_TR(0x7537e8);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B7537ed:{NFSU2_TR(0x7537ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7537f0:{NFSU2_TR(0x7537f0);
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
B7537f2:{NFSU2_TR(0x7537f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7537ff;}}
}
B7537f4:L7537f4:{c.instructions+=2;NFSU2_TR(0x7537f4);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7537f9:{NFSU2_TR(0x7537f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7537feull));
TAIL_STATIC(0x74b770u,74b);
}
B7537fe:L7537fe:{c.instructions+=1;NFSU2_TR(0x7537fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7537ff:L7537ff:{c.instructions+=1;NFSU2_TR(0x7537ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753800:L753800:{c.instructions+=3;NFSU2_TR(0x753800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753801:{NFSU2_TR(0x753801);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753805:{NFSU2_TR(0x753805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75380aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7537b0u);}goto L7537b0;}
}
B75380a:L75380a:{c.instructions+=2;NFSU2_TR(0x75380a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753811:{NFSU2_TR(0x753811);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75381a;}}
}
B753813:L753813:{c.instructions+=2;NFSU2_TR(0x753813);
__builtin_memmove((R+4),(R+24),4);
}
B753815:{NFSU2_TR(0x753815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75381aull));
TAIL_STATIC(0x7529b0u,752);
}
B75381a:L75381a:{c.instructions+=3;NFSU2_TR(0x75381a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75381d:{NFSU2_TR(0x75381d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75381f:{NFSU2_TR(0x75381f);
if(r1(R+518)){{goto L75384c;}}
}
B753821:L753821:{c.instructions+=3;NFSU2_TR(0x753821);
__builtin_memmove((R+0),gp(0x8b82ac),4);
}
B753826:{NFSU2_TR(0x753826);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753828:{NFSU2_TR(0x753828);
if(r1(R+518)){{goto L75383c;}}
}
B75382a:L75382a:{c.instructions+=1;NFSU2_TR(0x75382a);
__builtin_memmove((R+12),(R+12),4);
}
B753830:L753830:{c.instructions+=2;NFSU2_TR(0x753830);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753833:{NFSU2_TR(0x753833);
if(r1(R+518)){{goto L75384c;}}
}
B753835:L753835:{c.instructions+=3;NFSU2_TR(0x753835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753838:{NFSU2_TR(0x753838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75383a:{NFSU2_TR(0x75383a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753830u);}goto L753830;}}
}
B75383c:L75383c:{c.instructions+=2;NFSU2_TR(0x75383c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75383d:{NFSU2_TR(0x75383d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753842ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B753842:L753842:{c.instructions+=2;NFSU2_TR(0x753842);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753845:{NFSU2_TR(0x753845);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75384c:L75384c:{c.instructions+=3;NFSU2_TR(0x75384c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B753852:{NFSU2_TR(0x753852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753853:{NFSU2_TR(0x753853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753858ull));
TAIL_STATIC(0x74b770u,74b);
}
B753858:L753858:{c.instructions+=3;NFSU2_TR(0x753858);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75385e:{NFSU2_TR(0x75385e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75385f:{NFSU2_TR(0x75385f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753864ull));
TAIL_STATIC(0x598ec0u,598);
}
B753864:L753864:{c.instructions+=3;NFSU2_TR(0x753864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75386a:{NFSU2_TR(0x75386a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75386b:{NFSU2_TR(0x75386b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753870ull));
TAIL_STATIC(0x598ec0u,598);
}
B753870:L753870:{c.instructions+=2;NFSU2_TR(0x753870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753871:{NFSU2_TR(0x753871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753876ull));
TAIL_STATIC(0x598ec0u,598);
}
B753876:L753876:{c.instructions+=3;NFSU2_TR(0x753876);
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
B753879:{NFSU2_TR(0x753879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75387a:{NFSU2_TR(0x75387a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753880:L753880:{c.instructions+=6;NFSU2_TR(0x753880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753881:{NFSU2_TR(0x753881);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753885:{NFSU2_TR(0x753885);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753886:{NFSU2_TR(0x753886);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75388c:{NFSU2_TR(0x75388c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75388d:{NFSU2_TR(0x75388d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753892ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B753892:L753892:{c.instructions+=7;NFSU2_TR(0x753892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753898:{NFSU2_TR(0x753898);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75389c:{NFSU2_TR(0x75389c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2ull))));
}
B75389f:{NFSU2_TR(0x75389f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7538a0:{NFSU2_TR(0x7538a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7538a6:{NFSU2_TR(0x7538a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7538ac:{NFSU2_TR(0x7538ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7538b1ull));
TAIL_STATIC(0x74b870u,74b);
}
B7538b1:L7538b1:{c.instructions+=4;NFSU2_TR(0x7538b1);
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
B7538b4:{NFSU2_TR(0x7538b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7538b5:{NFSU2_TR(0x7538b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7538b6:{NFSU2_TR(0x7538b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7538c0:L7538c0:{c.instructions+=7;NFSU2_TR(0x7538c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B7538c3:{NFSU2_TR(0x7538c3);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B7538c8:{NFSU2_TR(0x7538c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7538c9:{NFSU2_TR(0x7538c9);
__builtin_memmove((R+24),(R+4),4);
}
B7538cb:{NFSU2_TR(0x7538cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7538cf:{NFSU2_TR(0x7538cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7538d6:{NFSU2_TR(0x7538d6);
if(r1(R+518)){{goto L7538f4;}}
}
B7538d8:L7538d8:{c.instructions+=2;NFSU2_TR(0x7538d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7538d9:{NFSU2_TR(0x7538d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7538deull));
TAIL_STATIC(0x74a2d0u,74a);
}
B7538de:L7538de:{c.instructions+=5;NFSU2_TR(0x7538de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7538e1:{NFSU2_TR(0x7538e1);
w4(R+0,u32(0xfffffffeull));
}
B7538e6:{NFSU2_TR(0x7538e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7538e7:{NFSU2_TR(0x7538e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7538eb:{NFSU2_TR(0x7538eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7538f0ull));
TAIL_STATIC(0x76115eu,761);
}
B7538f0:L7538f0:{c.instructions+=2;NFSU2_TR(0x7538f0);
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
B7538f3:{NFSU2_TR(0x7538f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7538f4:L7538f4:{c.instructions+=3;NFSU2_TR(0x7538f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7538f5:{NFSU2_TR(0x7538f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7538fc:{NFSU2_TR(0x7538fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753901ull));
TAIL_STATIC(0x7528e0u,752);
}
B753901:L753901:{c.instructions+=14;NFSU2_TR(0x753901);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B753903:{NFSU2_TR(0x753903);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+8),(U+0),4);
}
B753906:{NFSU2_TR(0x753906);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B753908:{NFSU2_TR(0x753908);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75390a:{NFSU2_TR(0x75390a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75390d:{NFSU2_TR(0x75390d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753911:{NFSU2_TR(0x753911);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753914:{NFSU2_TR(0x753914);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753918:{NFSU2_TR(0x753918);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75391b:{NFSU2_TR(0x75391b);
__builtin_memmove((R+28),gp(0x8b82ac),4);
}
B753921:{NFSU2_TR(0x753921);
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
B753923:{NFSU2_TR(0x753923);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753927:{NFSU2_TR(0x753927);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75392b:{NFSU2_TR(0x75392b);
if(r1(R+518)){{goto L753971;}}
}
B75392d:L75392d:{c.instructions+=1;NFSU2_TR(0x75392d);
__builtin_memmove((R+4),(R+4),4);
}
B753930:L753930:{c.instructions+=2;NFSU2_TR(0x753930);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753932:{NFSU2_TR(0x753932);
if(r1(R+518)){{goto L75396a;}}
}
B753934:L753934:{c.instructions+=3;NFSU2_TR(0x753934);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753937:{NFSU2_TR(0x753937);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753939:{NFSU2_TR(0x753939);
if(r1(R+518)){{goto L75396a;}}
}
B75393b:L75393b:{c.instructions+=6;NFSU2_TR(0x75393b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75393d:{NFSU2_TR(0x75393d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B753941:{NFSU2_TR(0x753941);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753942:{NFSU2_TR(0x753942);
u8 U[4];
w4(U+0,u32(0x62696e64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753947:{NFSU2_TR(0x753947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753948:{NFSU2_TR(0x753948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75394dull));
TAIL_STATIC(0x74a760u,74a);
}
B75394d:L75394d:{c.instructions+=3;NFSU2_TR(0x75394d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B753950:{NFSU2_TR(0x753950);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B753952:{NFSU2_TR(0x753952);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75396a;}}
}
B753954:L753954:{c.instructions+=5;NFSU2_TR(0x753954);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753958:{NFSU2_TR(0x753958);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75395c:{NFSU2_TR(0x75395c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75395d:{NFSU2_TR(0x75395d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75395e:{NFSU2_TR(0x75395e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753963ull));
TAIL_STATIC(0x742e90u,742);
}
B753963:L753963:{c.instructions+=3;NFSU2_TR(0x753963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B753966:{NFSU2_TR(0x753966);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753968:{NFSU2_TR(0x753968);
if(r1(R+518)){{goto L7539ac;}}
}
B75396a:L75396a:{c.instructions+=3;NFSU2_TR(0x75396a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75396d:{NFSU2_TR(0x75396d);
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
B75396f:{NFSU2_TR(0x75396f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753930u);}goto L753930;}}
}
B753971:L753971:{c.instructions+=5;NFSU2_TR(0x753971);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753975:{NFSU2_TR(0x753975);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753977:{NFSU2_TR(0x753977);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753978:{NFSU2_TR(0x753978);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753979:{NFSU2_TR(0x753979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75397eull));
TAIL_STATIC(0x74a380u,74a);
}
B75397e:L75397e:{c.instructions+=3;NFSU2_TR(0x75397e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B753981:{NFSU2_TR(0x753981);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B753983:{NFSU2_TR(0x753983);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7539bd;}}
}
B753985:L753985:{c.instructions+=3;NFSU2_TR(0x753985);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753986:{NFSU2_TR(0x753986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753990:{NFSU2_TR(0x753990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753995ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B753995:L753995:{c.instructions+=6;NFSU2_TR(0x753995);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753998:{NFSU2_TR(0x753998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753999:{NFSU2_TR(0x753999);
w4(R+0,u32(0xfffffffbull));
}
B75399e:{NFSU2_TR(0x75399e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75399f:{NFSU2_TR(0x75399f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7539a3:{NFSU2_TR(0x7539a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7539a8ull));
TAIL_STATIC(0x76115eu,761);
}
B7539a8:L7539a8:{c.instructions+=2;NFSU2_TR(0x7539a8);
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
B7539ab:{NFSU2_TR(0x7539ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7539ac:L7539ac:{c.instructions+=4;NFSU2_TR(0x7539ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7539af:{NFSU2_TR(0x7539af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539b0:{NFSU2_TR(0x7539b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7539b3:{NFSU2_TR(0x7539b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7539b8ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B7539b8:L7539b8:{c.instructions+=2;NFSU2_TR(0x7539b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7539bb:{NFSU2_TR(0x7539bb);
{goto L7539d4;}
}
B7539bd:L7539bd:{c.instructions+=7;NFSU2_TR(0x7539bd);
u8 U[4];
w4(U+0,u32(0x753700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539c2:{NFSU2_TR(0x7539c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539c4:{NFSU2_TR(0x7539c4);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539c6:{NFSU2_TR(0x7539c6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539c8:{NFSU2_TR(0x7539c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539c9:{NFSU2_TR(0x7539c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7539cc:{NFSU2_TR(0x7539cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7539d1ull));
TAIL_STATIC(0x74a960u,74a);
}
B7539d1:L7539d1:{c.instructions+=1;NFSU2_TR(0x7539d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7539d4:L7539d4:{c.instructions+=6;NFSU2_TR(0x7539d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7539d8:{NFSU2_TR(0x7539d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7539d9:{NFSU2_TR(0x7539d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7539e3:{NFSU2_TR(0x7539e3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7539e5:{NFSU2_TR(0x7539e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7539e6:{NFSU2_TR(0x7539e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7539ebull));
TAIL_STATIC(0x76115eu,761);
}
B7539eb:L7539eb:{c.instructions+=2;NFSU2_TR(0x7539eb);
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
B7539ee:{NFSU2_TR(0x7539ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7539f0:L7539f0:{c.instructions+=4;NFSU2_TR(0x7539f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539f1:{NFSU2_TR(0x7539f1);
__builtin_memmove((R+24),(R+0),4);
}
B7539f3:{NFSU2_TR(0x7539f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7539fa:{NFSU2_TR(0x7539fa);
if(r1(R+518)){{goto L753a0c;}}
}
B7539fc:L7539fc:{c.instructions+=2;NFSU2_TR(0x7539fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7539fd:{NFSU2_TR(0x7539fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753a02ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B753a02:L753a02:{c.instructions+=4;NFSU2_TR(0x753a02);
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
B753a05:{NFSU2_TR(0x753a05);
w4(R+0,u32(0xfffffffeull));
}
B753a0a:{NFSU2_TR(0x753a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753a0b:{NFSU2_TR(0x753a0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753a0c:L753a0c:{c.instructions+=2;NFSU2_TR(0x753a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753a13:{NFSU2_TR(0x753a13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753a18ull));
TAIL_STATIC(0x7528e0u,752);
}
B753a18:L753a18:{c.instructions+=16;NFSU2_TR(0x753a18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B753a1a:{NFSU2_TR(0x753a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B753a1d:{NFSU2_TR(0x753a1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B753a1f:{NFSU2_TR(0x753a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753a22:{NFSU2_TR(0x753a22);
u8 U[4];
w4(U+0,u32(0x753700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a27:{NFSU2_TR(0x753a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753a2a:{NFSU2_TR(0x753a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753a2d:{NFSU2_TR(0x753a2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a2f:{NFSU2_TR(0x753a2f);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a31:{NFSU2_TR(0x753a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753a34:{NFSU2_TR(0x753a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753a37:{NFSU2_TR(0x753a37);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a39:{NFSU2_TR(0x753a39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a3a:{NFSU2_TR(0x753a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753a3d:{NFSU2_TR(0x753a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753a40:{NFSU2_TR(0x753a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753a45ull));
TAIL_STATIC(0x74a960u,74a);
}
B753a45:L753a45:{c.instructions+=5;NFSU2_TR(0x753a45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B753a48:{NFSU2_TR(0x753a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753a52:{NFSU2_TR(0x753a52);
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
B753a54:{NFSU2_TR(0x753a54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753a55:{NFSU2_TR(0x753a55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753a60:L753a60:{c.instructions+=4;NFSU2_TR(0x753a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a61:{NFSU2_TR(0x753a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753a65:{NFSU2_TR(0x753a65);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753a6c:{NFSU2_TR(0x753a6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753a75;}}
}
B753a6e:L753a6e:{c.instructions+=1;NFSU2_TR(0x753a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753a75:L753a75:{c.instructions+=3;NFSU2_TR(0x753a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753a78:{NFSU2_TR(0x753a78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753a7a:{NFSU2_TR(0x753a7a);
if(r1(R+518)){{goto L753a8f;}}
}
B753a7c:L753a7c:{c.instructions+=2;NFSU2_TR(0x753a7c);
__builtin_memmove((R+4),(R+24),4);
}
B753a7e:{NFSU2_TR(0x753a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753a83ull));
TAIL_STATIC(0x7529b0u,752);
}
B753a83:L753a83:{c.instructions+=3;NFSU2_TR(0x753a83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753a86:{NFSU2_TR(0x753a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753a87:{NFSU2_TR(0x753a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753a8cull));
TAIL_STATIC(0x74a2d0u,74a);
}
B753a8c:L753a8c:{c.instructions+=1;NFSU2_TR(0x753a8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753a8f:L753a8f:{c.instructions+=5;NFSU2_TR(0x753a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753a96:{NFSU2_TR(0x753a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753aa0:{NFSU2_TR(0x753aa0);
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
B753aa2:{NFSU2_TR(0x753aa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753aa3:{NFSU2_TR(0x753aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753ab0:L753ab0:{c.instructions+=4;NFSU2_TR(0x753ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753ab4:{NFSU2_TR(0x753ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753aba:{NFSU2_TR(0x753aba);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B753abd:{NFSU2_TR(0x753abd);
if(r1(R+518)){{goto L753ae2;}}
}
B753abf:L753abf:{c.instructions+=2;NFSU2_TR(0x753abf);
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
B753ac2:{NFSU2_TR(0x753ac2);
if(r1(R+518)){{goto L753ae2;}}
}
B753ac4:L753ac4:{c.instructions+=2;NFSU2_TR(0x753ac4);
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
B753ac7:{NFSU2_TR(0x753ac7);
if(r1(R+518)){{goto L753adc;}}
}
B753ac9:L753ac9:{c.instructions+=2;NFSU2_TR(0x753ac9);
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
B753acc:{NFSU2_TR(0x753acc);
if(r1(R+518)){{goto L753adc;}}
}
B753ace:L753ace:{c.instructions+=6;NFSU2_TR(0x753ace);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B753ad0:{NFSU2_TR(0x753ad0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753ad3:{NFSU2_TR(0x753ad3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B753ad6:{NFSU2_TR(0x753ad6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x3ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x3ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753ad9:{NFSU2_TR(0x753ad9);
__builtin_memmove((R+0),(R+4),4);
}
B753adb:{NFSU2_TR(0x753adb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753adc:L753adc:{c.instructions+=2;NFSU2_TR(0x753adc);
w4(R+0,u32(0x1ull));
}
B753ae1:{NFSU2_TR(0x753ae1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753ae2:L753ae2:{c.instructions+=2;NFSU2_TR(0x753ae2);
w4(R+0,u32(0x2ull));
}
B753ae7:{NFSU2_TR(0x753ae7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753af0:L753af0:{c.instructions+=4;NFSU2_TR(0x753af0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753af1:{NFSU2_TR(0x753af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B753af5:{NFSU2_TR(0x753af5);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B753afc:{NFSU2_TR(0x753afc);
if(r1(R+518)){{goto L753b05;}}
}
B753afe:L753afe:{c.instructions+=3;NFSU2_TR(0x753afe);
w4(R+0,u32(0xfffffffeull));
}
B753b03:{NFSU2_TR(0x753b03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753b04:{NFSU2_TR(0x753b04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753b05:L753b05:{c.instructions+=12;NFSU2_TR(0x753b05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753b06:{NFSU2_TR(0x753b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B753b0c:{NFSU2_TR(0x753b0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753b0d:{NFSU2_TR(0x753b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753b13:{NFSU2_TR(0x753b13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B753b16:{NFSU2_TR(0x753b16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753b17:{NFSU2_TR(0x753b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B753b1d:{NFSU2_TR(0x753b1d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753b1e:{NFSU2_TR(0x753b1e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b1e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b1e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753b20:{NFSU2_TR(0x753b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753b26:{NFSU2_TR(0x753b26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753b28:{NFSU2_TR(0x753b28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753b31;}}
}
B753b2a:L753b2a:{c.instructions+=6;NFSU2_TR(0x753b2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753b2b:{NFSU2_TR(0x753b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753b2c:{NFSU2_TR(0x753b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753b2d:{NFSU2_TR(0x753b2d);
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
B753b2f:{NFSU2_TR(0x753b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753b30:{NFSU2_TR(0x753b30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753b31:L753b31:{c.instructions+=4;NFSU2_TR(0x753b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753b35:{NFSU2_TR(0x753b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B753b38:{NFSU2_TR(0x753b38);
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
B753b3a:{NFSU2_TR(0x753b3a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L753b46;}}
}
B753b3c:L753b3c:{c.instructions+=6;NFSU2_TR(0x753b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753b3d:{NFSU2_TR(0x753b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753b3e:{NFSU2_TR(0x753b3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753b3f:{NFSU2_TR(0x753b3f);
w4(R+0,u32(0xfffffffaull));
}
B753b44:{NFSU2_TR(0x753b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753b45:{NFSU2_TR(0x753b45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753b46:L753b46:{c.instructions+=2;NFSU2_TR(0x753b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753b48:{NFSU2_TR(0x753b48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753b5e;}}
}
B753b4a:L753b4a:{c.instructions+=14;NFSU2_TR(0x753b4a);
__builtin_memmove((R+0),(R+28),4);
}
B753b4c:{NFSU2_TR(0x753b4c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B753b4e:{NFSU2_TR(0x753b4e);
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B753b50:{NFSU2_TR(0x753b50);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753b51:{NFSU2_TR(0x753b51);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b51);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b51);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753b53:{NFSU2_TR(0x753b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753b54:{NFSU2_TR(0x753b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753b55:{NFSU2_TR(0x753b55);
__builtin_memmove((R+0),(R+8),4);
}
B753b57:{NFSU2_TR(0x753b57);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753b58:{NFSU2_TR(0x753b58);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b58);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753b58);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753b5a:{NFSU2_TR(0x753b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753b5b:{NFSU2_TR(0x753b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753b5c:{NFSU2_TR(0x753b5c);
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
B753b5d:{NFSU2_TR(0x753b5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753b5e:L753b5e:{c.instructions+=7;NFSU2_TR(0x753b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B753b64:{NFSU2_TR(0x753b64);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+24))));
}
B753b66:{NFSU2_TR(0x753b66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753b6a:{NFSU2_TR(0x753b6a);
__builtin_memmove((R+4),(R+0),4);
}
B753b6c:{NFSU2_TR(0x753b6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B753b6f:{NFSU2_TR(0x753b6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B753b72:{NFSU2_TR(0x753b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753b75:L753b75:{c.instructions+=1;NFSU2_TR(0x753b75);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L753b77;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753b75u);}goto L753b75;}
}
B753b77:L753b77:{c.instructions+=2;NFSU2_TR(0x753b77);
__builtin_memmove((R+4),(R+0),4);
}
B753b79:{NFSU2_TR(0x753b79);
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
B753b7c:L753b7c:{c.instructions+=1;NFSU2_TR(0x753b7c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L753b7e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753b7cu);}goto L753b7c;}
}
B753b7e:L753b7e:{c.instructions+=1;NFSU2_TR(0x753b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753b83ull));
TAIL_STATIC(0x74b730u,74b);
}
B753b83:L753b83:{c.instructions+=3;NFSU2_TR(0x753b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753b86:{NFSU2_TR(0x753b86);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B753b8b:{NFSU2_TR(0x753b8b);
if(r1(R+518)){{goto L753bc8;}}
}
B753b8d:L753b8d:{c.instructions+=2;NFSU2_TR(0x753b8d);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753b92:{NFSU2_TR(0x753b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753b97ull));
TAIL_STATIC(0x74b7e0u,74b);
}
B753b97:L753b97:{c.instructions+=7;NFSU2_TR(0x753b97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B753b9e:{NFSU2_TR(0x753b9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753ba4:{NFSU2_TR(0x753ba4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B753ba5:{NFSU2_TR(0x753ba5);
__builtin_memmove((R+0),(R+20),4);
}
B753ba7:{NFSU2_TR(0x753ba7);
__builtin_memmove((R+24),(R+12),4);
}
B753ba9:{NFSU2_TR(0x753ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753bac:{NFSU2_TR(0x753bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753bb1ull));
TAIL_STATIC(0x752940u,752);
}
B753bb1:L753bb1:{c.instructions+=2;NFSU2_TR(0x753bb1);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753bb6:{NFSU2_TR(0x753bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753bbbull));
TAIL_STATIC(0x74b870u,74b);
}
B753bbb:L753bbb:{c.instructions+=7;NFSU2_TR(0x753bbb);
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
B753bbe:{NFSU2_TR(0x753bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753bbf:{NFSU2_TR(0x753bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753bc0:{NFSU2_TR(0x753bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753bc1:{NFSU2_TR(0x753bc1);
w4(R+0,u32(0x1ull));
}
B753bc6:{NFSU2_TR(0x753bc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753bc7:{NFSU2_TR(0x753bc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753bc8:L753bc8:{c.instructions+=27;NFSU2_TR(0x753bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753bce:{NFSU2_TR(0x753bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753bd1:{NFSU2_TR(0x753bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753bd7:{NFSU2_TR(0x753bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753bdd:{NFSU2_TR(0x753bdd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B753bde:{NFSU2_TR(0x753bde);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B753bdf:{NFSU2_TR(0x753bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753be5:{NFSU2_TR(0x753be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753be8:{NFSU2_TR(0x753be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753bee:{NFSU2_TR(0x753bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753bf4:{NFSU2_TR(0x753bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753bfa:{NFSU2_TR(0x753bfa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B753bfc:{NFSU2_TR(0x753bfc);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753bfd:{NFSU2_TR(0x753bfd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753bfd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753bfd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753bff:{NFSU2_TR(0x753bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B753c05:{NFSU2_TR(0x753c05);
__builtin_memmove((R+0),(R+8),4);
}
B753c07:{NFSU2_TR(0x753c07);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B753c09:{NFSU2_TR(0x753c09);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B753c0b:{NFSU2_TR(0x753c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753c11:{NFSU2_TR(0x753c11);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753c12:{NFSU2_TR(0x753c12);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753c12);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753c12);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753c14:{NFSU2_TR(0x753c14);
__builtin_memmove((R+0),(R+8),4);
}
B753c16:{NFSU2_TR(0x753c16);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753c17:{NFSU2_TR(0x753c17);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753c17);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753c17);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B753c19:{NFSU2_TR(0x753c19);
__builtin_memmove((R+24),(R+0),4);
}
B753c1b:{NFSU2_TR(0x753c1b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B753c1e:{NFSU2_TR(0x753c1e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L753c66;}}
}
B753c20:L753c20:{c.instructions+=2;NFSU2_TR(0x753c20);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c25:{NFSU2_TR(0x753c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c2aull));
TAIL_STATIC(0x74b7e0u,74b);
}
B753c2a:L753c2a:{c.instructions+=2;NFSU2_TR(0x753c2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753c2d:{NFSU2_TR(0x753c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c32ull));
TAIL_STATIC(0x752ab0u,752);
}
B753c32:L753c32:{c.instructions+=3;NFSU2_TR(0x753c32);
__builtin_memmove((R+0),gp(0x8b7e30),4);
}
B753c37:{NFSU2_TR(0x753c37);
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
B753c39:{NFSU2_TR(0x753c39);
if(r1(R+518)){{goto L753c59;}}
}
B753c3b:L753c3b:{c.instructions+=1;NFSU2_TR(0x753c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c40ull));
TAIL_STATIC(0x74b730u,74b);
}
B753c40:L753c40:{c.instructions+=1;NFSU2_TR(0x753c40);
__builtin_memmove((R+28),(R+0),4);
}
B753c42:L753c42:{c.instructions+=2;NFSU2_TR(0x753c42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c43:{NFSU2_TR(0x753c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c48ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7530b0u);}goto L7530b0;}
}
B753c48:L753c48:{c.instructions+=3;NFSU2_TR(0x753c48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753c4b:{NFSU2_TR(0x753c4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B753c4d:{NFSU2_TR(0x753c4d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753c42u);}goto L753c42;}}
}
B753c4f:L753c4f:{c.instructions+=1;NFSU2_TR(0x753c4f);
s4(0x8b7e30,u32(0x0ull));
}
B753c59:L753c59:{c.instructions+=2;NFSU2_TR(0x753c59);
u8 U[4];
w4(U+0,u32(0x8b8288ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c5e:{NFSU2_TR(0x753c5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c63ull));
TAIL_STATIC(0x74b870u,74b);
}
B753c63:L753c63:{c.instructions+=1;NFSU2_TR(0x753c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753c66:L753c66:{c.instructions+=3;NFSU2_TR(0x753c66);
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
B753c68:{NFSU2_TR(0x753c68);
__builtin_memmove((R+0),(R+24),4);
}
B753c6a:{NFSU2_TR(0x753c6a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L753c71;}}
}
B753c6c:L753c6c:{c.instructions+=1;NFSU2_TR(0x753c6c);
w4(R+0,u32(0x1ull));
}
B753c71:L753c71:{c.instructions+=5;NFSU2_TR(0x753c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753c72:{NFSU2_TR(0x753c72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753c73:{NFSU2_TR(0x753c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753c74:{NFSU2_TR(0x753c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753c75:{NFSU2_TR(0x753c75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753c80:L753c80:{c.instructions+=5;NFSU2_TR(0x753c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c81:{NFSU2_TR(0x753c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753c85:{NFSU2_TR(0x753c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753c8b:{NFSU2_TR(0x753c8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753c91:{NFSU2_TR(0x753c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753ca0;}}
}
B753c93:L753c93:{c.instructions+=4;NFSU2_TR(0x753c93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c94:{NFSU2_TR(0x753c94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c96:{NFSU2_TR(0x753c96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753c98:{NFSU2_TR(0x753c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753c9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753700u);}goto L753700;}
}
B753c9d:L753c9d:{c.instructions+=1;NFSU2_TR(0x753c9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B753ca0:L753ca0:{c.instructions+=3;NFSU2_TR(0x753ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753ca6:{NFSU2_TR(0x753ca6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B753cac:{NFSU2_TR(0x753cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753cb5;}}
}
B753cae:L753cae:{c.instructions+=3;NFSU2_TR(0x753cae);
w4(R+0,u32(0xfffffff9ull));
}
B753cb3:{NFSU2_TR(0x753cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753cb4:{NFSU2_TR(0x753cb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753cb5:L753cb5:{c.instructions+=6;NFSU2_TR(0x753cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753cbb:{NFSU2_TR(0x753cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753cbf:{NFSU2_TR(0x753cbf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B753cc1:{NFSU2_TR(0x753cc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B753cc3:{NFSU2_TR(0x753cc3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B753cc5:{NFSU2_TR(0x753cc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L753cc9;}}
}
B753cc7:L753cc7:{c.instructions+=1;NFSU2_TR(0x753cc7);
__builtin_memmove((R+4),(R+8),4);
}
B753cc9:L753cc9:{c.instructions+=5;NFSU2_TR(0x753cc9);
__builtin_memmove((R+8),(R+4),4);
}
B753ccb:{NFSU2_TR(0x753ccb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B753cce:{NFSU2_TR(0x753cce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753ccf:{NFSU2_TR(0x753ccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B753cd3:{NFSU2_TR(0x753cd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753cd6:L753cd6:{c.instructions+=1;NFSU2_TR(0x753cd6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L753cd8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753cd6u);}goto L753cd6;}
}
B753cd8:L753cd8:{c.instructions+=2;NFSU2_TR(0x753cd8);
__builtin_memmove((R+4),(R+8),4);
}
B753cda:{NFSU2_TR(0x753cda);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B753cdd:L753cdd:{c.instructions+=1;NFSU2_TR(0x753cdd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L753cdf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753cddu);}goto L753cdd;}
}
B753cdf:L753cdf:{c.instructions+=4;NFSU2_TR(0x753cdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753ce3:{NFSU2_TR(0x753ce3);
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
B753ce5:{NFSU2_TR(0x753ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753ce6:{NFSU2_TR(0x753ce6);
if(r1(R+518)){{goto L753ced;}}
}
B753ce8:L753ce8:{c.instructions+=2;NFSU2_TR(0x753ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753ceb:{NFSU2_TR(0x753ceb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B753ced:L753ced:{c.instructions+=3;NFSU2_TR(0x753ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B753cef:{NFSU2_TR(0x753cef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753cf0:{NFSU2_TR(0x753cf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753d00:L753d00:{c.instructions+=10;NFSU2_TR(0x753d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753d04:{NFSU2_TR(0x753d04);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753d08:{NFSU2_TR(0x753d08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753d0c:{NFSU2_TR(0x753d0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d0d:{NFSU2_TR(0x753d0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753d11:{NFSU2_TR(0x753d11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d12:{NFSU2_TR(0x753d12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d13:{NFSU2_TR(0x753d13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d14:{NFSU2_TR(0x753d14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d15:{NFSU2_TR(0x753d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753d1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x753c80u);}goto L753c80;}
}
B753d1a:L753d1a:{c.instructions+=4;NFSU2_TR(0x753d1a);
__builtin_memmove((R+4),(R+0),4);
}
B753d1c:{NFSU2_TR(0x753d1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B753d1f:{NFSU2_TR(0x753d1f);
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
B753d21:{NFSU2_TR(0x753d21);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L753d3e;}}
}
B753d23:L753d23:{c.instructions+=6;NFSU2_TR(0x753d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B753d29:{NFSU2_TR(0x753d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753d2f:{NFSU2_TR(0x753d2f);
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
B753d31:{NFSU2_TR(0x753d31);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B753d32:{NFSU2_TR(0x753d32);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753d32);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x753d32);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B753d38:{NFSU2_TR(0x753d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753d3e:L753d3e:{c.instructions+=3;NFSU2_TR(0x753d3e);
__builtin_memmove((R+0),(R+4),4);
}
B753d40:{NFSU2_TR(0x753d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753d41:{NFSU2_TR(0x753d41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753d50:L753d50:{c.instructions+=20;NFSU2_TR(0x753d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B753d53:{NFSU2_TR(0x753d53);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B753d58:{NFSU2_TR(0x753d58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d59:{NFSU2_TR(0x753d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B753d5d:{NFSU2_TR(0x753d5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d5e:{NFSU2_TR(0x753d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753d62:{NFSU2_TR(0x753d62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d63:{NFSU2_TR(0x753d63);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B753d67:{NFSU2_TR(0x753d67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d68:{NFSU2_TR(0x753d68);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B753d6c:{NFSU2_TR(0x753d6c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B753d6e:{NFSU2_TR(0x753d6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d6f:{NFSU2_TR(0x753d6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B753d73:{NFSU2_TR(0x753d73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753d74:{NFSU2_TR(0x753d74);
u8 U[6];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B753d7b:{NFSU2_TR(0x753d7b);
u8 U[6];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753d80:{NFSU2_TR(0x753d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753d84:{NFSU2_TR(0x753d84);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753d88:{NFSU2_TR(0x753d88);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753d8c:{NFSU2_TR(0x753d8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753d91ull));
TAIL_STATIC(0x7431e0u,743);
}
B753d91:L753d91:{c.instructions+=3;NFSU2_TR(0x753d91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B753d94:{NFSU2_TR(0x753d94);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B753d96:{NFSU2_TR(0x753d96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753dac;}}
}
B753d98:L753d98:{c.instructions+=5;NFSU2_TR(0x753d98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753d99:{NFSU2_TR(0x753d99);
w4(R+0,u32(0xfffffffdull));
}
B753d9e:{NFSU2_TR(0x753d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753d9f:{NFSU2_TR(0x753d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753da3:{NFSU2_TR(0x753da3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753da8ull));
TAIL_STATIC(0x76115eu,761);
}
B753da8:L753da8:{c.instructions+=2;NFSU2_TR(0x753da8);
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
B753dab:{NFSU2_TR(0x753dab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753dac:L753dac:{c.instructions+=9;NFSU2_TR(0x753dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753db0:{NFSU2_TR(0x753db0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753db1:{NFSU2_TR(0x753db1);
__builtin_memmove((R+4),(R+0),4);
}
B753db3:{NFSU2_TR(0x753db3);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B753db6:{NFSU2_TR(0x753db6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753db8:{NFSU2_TR(0x753db8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753dba:{NFSU2_TR(0x753dba);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753dbe:{NFSU2_TR(0x753dbe);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753dc2:{NFSU2_TR(0x753dc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753dc7ull));
TAIL_STATIC(0x74a220u,74a);
}
B753dc7:L753dc7:{c.instructions+=3;NFSU2_TR(0x753dc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B753dca:{NFSU2_TR(0x753dca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753dcc:{NFSU2_TR(0x753dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753de2;}}
}
B753dce:L753dce:{c.instructions+=5;NFSU2_TR(0x753dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753dcf:{NFSU2_TR(0x753dcf);
w4(R+0,u32(0xfffffffcull));
}
B753dd4:{NFSU2_TR(0x753dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753dd5:{NFSU2_TR(0x753dd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753dd9:{NFSU2_TR(0x753dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753ddeull));
TAIL_STATIC(0x76115eu,761);
}
B753dde:L753dde:{c.instructions+=2;NFSU2_TR(0x753dde);
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
B753de1:{NFSU2_TR(0x753de1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753de2:L753de2:{c.instructions+=8;NFSU2_TR(0x753de2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753de3:{NFSU2_TR(0x753de3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753de4:{NFSU2_TR(0x753de4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753de8:{NFSU2_TR(0x753de8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B753dec:{NFSU2_TR(0x753dec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753ded:{NFSU2_TR(0x753ded);
__builtin_memmove((R+12),(R+0),4);
}
B753def:{NFSU2_TR(0x753def);
__builtin_memmove((R+4),(R+24),4);
}
B753df1:{NFSU2_TR(0x753df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753df6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7538c0u);}goto L7538c0;}
}
B753df6:L753df6:{c.instructions+=4;NFSU2_TR(0x753df6);
__builtin_memmove((R+12),(R+0),4);
}
B753df8:{NFSU2_TR(0x753df8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753df9:{NFSU2_TR(0x753df9);
__builtin_memmove((R+0),(R+20),4);
}
B753dfb:{NFSU2_TR(0x753dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753e00ull));
TAIL_STATIC(0x7528a0u,752);
}
B753e00:L753e00:{c.instructions+=3;NFSU2_TR(0x753e00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B753e03:{NFSU2_TR(0x753e03);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753e05:{NFSU2_TR(0x753e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753e64;}}
}
B753e07:L753e07:{c.instructions+=3;NFSU2_TR(0x753e07);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753e0b:{NFSU2_TR(0x753e0b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753e0d:{NFSU2_TR(0x753e0d);
if(r1(R+518)){{goto L753e64;}}
}
B753e0f:L753e0f:{c.instructions+=3;NFSU2_TR(0x753e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753e13:{NFSU2_TR(0x753e13);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B753e15:{NFSU2_TR(0x753e15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753e1c;}}
}
B753e17:L753e17:{c.instructions+=2;NFSU2_TR(0x753e17);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753e1b:{NFSU2_TR(0x753e1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B753e1c:L753e1c:{c.instructions+=16;NFSU2_TR(0x753e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753e22:{NFSU2_TR(0x753e22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x83ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e28:{NFSU2_TR(0x753e28);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753e2b:{NFSU2_TR(0x753e2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e31:{NFSU2_TR(0x753e31);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753e34:{NFSU2_TR(0x753e34);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e3a:{NFSU2_TR(0x753e3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753e3d:{NFSU2_TR(0x753e3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e43:{NFSU2_TR(0x753e43);
__builtin_memmove((R+0),(R+4),4);
}
B753e45:{NFSU2_TR(0x753e45);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753e49:{NFSU2_TR(0x753e49);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B753e4c:{NFSU2_TR(0x753e4c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B753e52:{NFSU2_TR(0x753e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753e58:{NFSU2_TR(0x753e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753e5e:{NFSU2_TR(0x753e5e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e61:{NFSU2_TR(0x753e61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753e64:L753e64:{c.instructions+=8;NFSU2_TR(0x753e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753e68:{NFSU2_TR(0x753e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753e6e:{NFSU2_TR(0x753e6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753e6f:{NFSU2_TR(0x753e6f);
__builtin_memmove((R+0),(R+12),4);
}
B753e71:{NFSU2_TR(0x753e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753e72:{NFSU2_TR(0x753e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753e73:{NFSU2_TR(0x753e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753e74:{NFSU2_TR(0x753e74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753e79ull));
TAIL_STATIC(0x76115eu,761);
}
B753e79:L753e79:{c.instructions+=2;NFSU2_TR(0x753e79);
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
B753e7c:{NFSU2_TR(0x753e7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753e80:L753e80:{c.instructions+=27;NFSU2_TR(0x753e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B753e83:{NFSU2_TR(0x753e83);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B753e88:{NFSU2_TR(0x753e88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753e89:{NFSU2_TR(0x753e89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753e8a:{NFSU2_TR(0x753e8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B753e8e:{NFSU2_TR(0x753e8e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753e8f:{NFSU2_TR(0x753e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753e93:{NFSU2_TR(0x753e93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B753e95:{NFSU2_TR(0x753e95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753e96:{NFSU2_TR(0x753e96);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B753e9a:{NFSU2_TR(0x753e9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753e9b:{NFSU2_TR(0x753e9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B753e9f:{NFSU2_TR(0x753e9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753ea0:{NFSU2_TR(0x753ea0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B753ea4:{NFSU2_TR(0x753ea4);
w4(R+28,u32(0x2ull));
}
B753ea9:{NFSU2_TR(0x753ea9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753eaa:{NFSU2_TR(0x753eaa);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753eaf:{NFSU2_TR(0x753eaf);
u8 U[6];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753eb4:{NFSU2_TR(0x753eb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753eb8:{NFSU2_TR(0x753eb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753ebc:{NFSU2_TR(0x753ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753ec0:{NFSU2_TR(0x753ec0);
u8 U[6];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753ec5:{NFSU2_TR(0x753ec5);
u8 U[6];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B753eca:{NFSU2_TR(0x753eca);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753ece:{NFSU2_TR(0x753ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753ed2:{NFSU2_TR(0x753ed2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753ed6:{NFSU2_TR(0x753ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753edbull));
TAIL_STATIC(0x7431e0u,743);
}
B753edb:L753edb:{c.instructions+=4;NFSU2_TR(0x753edb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B753ede:{NFSU2_TR(0x753ede);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B753ee1:{NFSU2_TR(0x753ee1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B753ee3:{NFSU2_TR(0x753ee3);
if(r1(R+518)){{goto L753efa;}}
}
B753ee5:L753ee5:{c.instructions+=6;NFSU2_TR(0x753ee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753ee6:{NFSU2_TR(0x753ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753ee7:{NFSU2_TR(0x753ee7);
w4(R+0,u32(0xfffffffdull));
}
B753eec:{NFSU2_TR(0x753eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753eed:{NFSU2_TR(0x753eed);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753ef1:{NFSU2_TR(0x753ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753ef6ull));
TAIL_STATIC(0x76115eu,761);
}
B753ef6:L753ef6:{c.instructions+=2;NFSU2_TR(0x753ef6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753ef9:{NFSU2_TR(0x753ef9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753efa:L753efa:{c.instructions+=2;NFSU2_TR(0x753efa);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B753efe:{NFSU2_TR(0x753efe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753f0d;}}
}
B753f00:L753f00:{c.instructions+=4;NFSU2_TR(0x753f00);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753f04:{NFSU2_TR(0x753f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753f08:{NFSU2_TR(0x753f08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B753f09:{NFSU2_TR(0x753f09);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753f0d:L753f0d:{c.instructions+=5;NFSU2_TR(0x753f0d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f0e:{NFSU2_TR(0x753f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B753f12:{NFSU2_TR(0x753f12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f13:{NFSU2_TR(0x753f13);
__builtin_memmove((R+0),(R+24),4);
}
B753f15:{NFSU2_TR(0x753f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f1aull));
TAIL_STATIC(0x7528a0u,752);
}
B753f1a:L753f1a:{c.instructions+=4;NFSU2_TR(0x753f1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f1b:{NFSU2_TR(0x753f1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f1c:{NFSU2_TR(0x753f1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f1d:{NFSU2_TR(0x753f1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f22ull));
TAIL_STATIC(0x74a220u,74a);
}
B753f22:L753f22:{c.instructions+=4;NFSU2_TR(0x753f22);
__builtin_memmove((R+24),(R+0),4);
}
B753f24:{NFSU2_TR(0x753f24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B753f27:{NFSU2_TR(0x753f27);
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
B753f29:{NFSU2_TR(0x753f29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L753f41;}}
}
B753f2b:L753f2b:{c.instructions+=7;NFSU2_TR(0x753f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753f2c:{NFSU2_TR(0x753f2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753f2d:{NFSU2_TR(0x753f2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753f2e:{NFSU2_TR(0x753f2e);
w4(R+0,u32(0xfffffffcull));
}
B753f33:{NFSU2_TR(0x753f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753f34:{NFSU2_TR(0x753f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753f38:{NFSU2_TR(0x753f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f3dull));
TAIL_STATIC(0x76115eu,761);
}
B753f3d:L753f3d:{c.instructions+=2;NFSU2_TR(0x753f3d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753f40:{NFSU2_TR(0x753f40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753f41:L753f41:{c.instructions+=10;NFSU2_TR(0x753f41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753f45:{NFSU2_TR(0x753f45);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f47:{NFSU2_TR(0x753f47);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B753f4b:{NFSU2_TR(0x753f4b);
__builtin_memmove((R+4),(R+0),4);
}
B753f4d:{NFSU2_TR(0x753f4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f4e:{NFSU2_TR(0x753f4e);
u8 U[47];
w4(U+39,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B753f51:{NFSU2_TR(0x753f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f52:{NFSU2_TR(0x753f52);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753f56:{NFSU2_TR(0x753f56);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753f5a:{NFSU2_TR(0x753f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f5full));
TAIL_STATIC(0x74a380u,74a);
}
B753f5f:L753f5f:{c.instructions+=3;NFSU2_TR(0x753f5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B753f62:{NFSU2_TR(0x753f62);
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
B753f64:{NFSU2_TR(0x753f64);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L753fa1;}}
}
B753f66:L753f66:{c.instructions+=7;NFSU2_TR(0x753f66);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f68:{NFSU2_TR(0x753f68);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B753f6c:{NFSU2_TR(0x753f6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f6d:{NFSU2_TR(0x753f6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f6e:{NFSU2_TR(0x753f6e);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753f72:{NFSU2_TR(0x753f72);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753f76:{NFSU2_TR(0x753f76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f7bull));
TAIL_STATIC(0x74a380u,74a);
}
B753f7b:L753f7b:{c.instructions+=3;NFSU2_TR(0x753f7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B753f7e:{NFSU2_TR(0x753f7e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B753f80:{NFSU2_TR(0x753f80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L753fa1;}}
}
B753f82:L753f82:{c.instructions+=2;NFSU2_TR(0x753f82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B753f83:{NFSU2_TR(0x753f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f88ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B753f88:L753f88:{c.instructions+=8;NFSU2_TR(0x753f88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B753f8b:{NFSU2_TR(0x753f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753f8c:{NFSU2_TR(0x753f8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753f8d:{NFSU2_TR(0x753f8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753f8e:{NFSU2_TR(0x753f8e);
w4(R+0,u32(0xfffffffbull));
}
B753f93:{NFSU2_TR(0x753f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753f94:{NFSU2_TR(0x753f94);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753f98:{NFSU2_TR(0x753f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753f9dull));
TAIL_STATIC(0x76115eu,761);
}
B753f9d:L753f9d:{c.instructions+=2;NFSU2_TR(0x753f9d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753fa0:{NFSU2_TR(0x753fa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B753fa1:L753fa1:{c.instructions+=18;NFSU2_TR(0x753fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753fa5:{NFSU2_TR(0x753fa5);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fa9:{NFSU2_TR(0x753fa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753fac:{NFSU2_TR(0x753fac);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fb0:{NFSU2_TR(0x753fb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753fb3:{NFSU2_TR(0x753fb3);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fb7:{NFSU2_TR(0x753fb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B753fba:{NFSU2_TR(0x753fba);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fbe:{NFSU2_TR(0x753fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B753fc2:{NFSU2_TR(0x753fc2);
__builtin_memmove((R+4),(R+0),4);
}
B753fc4:{NFSU2_TR(0x753fc4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B753fc7:{NFSU2_TR(0x753fc7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fcb:{NFSU2_TR(0x753fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B753fd1:{NFSU2_TR(0x753fd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B753fd5:{NFSU2_TR(0x753fd5);
__builtin_memmove((R+12),(R+24),4);
}
B753fd7:{NFSU2_TR(0x753fd7);
__builtin_memmove((R+0),(R+20),4);
}
B753fd9:{NFSU2_TR(0x753fd9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B753fdd:{NFSU2_TR(0x753fdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753fe2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7539f0u);}goto L7539f0;}
}
B753fe2:L753fe2:{c.instructions+=6;NFSU2_TR(0x753fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B753fe6:{NFSU2_TR(0x753fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B753fe7:{NFSU2_TR(0x753fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B753fe8:{NFSU2_TR(0x753fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B753fe9:{NFSU2_TR(0x753fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B753fea:{NFSU2_TR(0x753fea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x753fefull));
TAIL_STATIC(0x76115eu,761);
}
B753fef:L753fef:{c.instructions+=2;NFSU2_TR(0x753fef);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B753ff2:{NFSU2_TR(0x753ff2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x753,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
