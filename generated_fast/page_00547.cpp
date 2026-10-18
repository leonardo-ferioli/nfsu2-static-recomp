#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x547,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x547,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_547(u8* __restrict R,Cpu& c);
u32 page_547(Cpu& c){return body_547(c.regs.data(),c);}
__attribute__((noinline)) u32 body_547(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x547004:goto L547004;
case 0x547009:goto L547009;
case 0x54700a:c.instructions+=4;goto B54700a;
case 0x54700f:c.instructions+=3;goto B54700f;
case 0x547014:c.instructions+=2;goto B547014;
case 0x547015:c.instructions+=1;goto B547015;
case 0x54701a:goto L54701a;
case 0x54701d:c.instructions+=1;goto B54701d;
case 0x54701f:goto L54701f;
case 0x547022:c.instructions+=4;goto B547022;
case 0x547027:c.instructions+=3;goto B547027;
case 0x54702c:c.instructions+=2;goto B54702c;
case 0x54702d:c.instructions+=1;goto B54702d;
case 0x547032:goto L547032;
case 0x547035:c.instructions+=1;goto B547035;
case 0x547037:goto L547037;
case 0x54703c:goto L54703c;
case 0x54703f:c.instructions+=1;goto B54703f;
case 0x547041:goto L547041;
case 0x547044:c.instructions+=3;goto B547044;
case 0x547049:c.instructions+=2;goto B547049;
case 0x54704a:c.instructions+=1;goto B54704a;
case 0x54704f:goto L54704f;
case 0x547052:c.instructions+=4;goto B547052;
case 0x547057:c.instructions+=3;goto B547057;
case 0x54705c:c.instructions+=2;goto B54705c;
case 0x54705d:c.instructions+=1;goto B54705d;
case 0x547062:goto L547062;
case 0x547065:goto L547065;
case 0x54706a:c.instructions+=1;goto B54706a;
case 0x54706f:goto L54706f;
case 0x547075:c.instructions+=5;goto B547075;
case 0x547076:c.instructions+=4;goto B547076;
case 0x54707b:c.instructions+=3;goto B54707b;
case 0x547080:c.instructions+=2;goto B547080;
case 0x547081:c.instructions+=1;goto B547081;
case 0x547086:goto L547086;
case 0x547089:c.instructions+=3;goto B547089;
case 0x54708a:c.instructions+=2;goto B54708a;
case 0x54708b:c.instructions+=1;goto B54708b;
case 0x547090:goto L547090;
case 0x547094:c.instructions+=3;goto B547094;
case 0x547096:c.instructions+=2;goto B547096;
case 0x54709b:c.instructions+=1;goto B54709b;
case 0x54709d:goto L54709d;
case 0x5470a2:c.instructions+=2;goto B5470a2;
case 0x5470a3:c.instructions+=1;goto B5470a3;
case 0x5470a8:goto L5470a8;
case 0x5470ae:c.instructions+=3;goto B5470ae;
case 0x5470b3:c.instructions+=2;goto B5470b3;
case 0x5470b4:c.instructions+=1;goto B5470b4;
case 0x5470b9:goto L5470b9;
case 0x5470bc:c.instructions+=1;goto B5470bc;
case 0x5470bf:goto L5470bf;
case 0x5470c5:c.instructions+=2;goto B5470c5;
case 0x5470c6:c.instructions+=1;goto B5470c6;
case 0x5470cb:goto L5470cb;
case 0x5470d0:c.instructions+=3;goto B5470d0;
case 0x5470d5:c.instructions+=2;goto B5470d5;
case 0x5470d6:c.instructions+=1;goto B5470d6;
case 0x5470db:goto L5470db;
case 0x5470de:c.instructions+=1;goto B5470de;
case 0x5470f0:goto L5470f0;
case 0x5470f1:c.instructions+=3;goto B5470f1;
case 0x5470f6:c.instructions+=2;goto B5470f6;
case 0x5470f8:c.instructions+=1;goto B5470f8;
case 0x5470fd:goto L5470fd;
case 0x547100:c.instructions+=2;goto B547100;
case 0x547102:c.instructions+=1;goto B547102;
case 0x547108:goto L547108;
case 0x54710b:c.instructions+=5;goto B54710b;
case 0x54710d:c.instructions+=4;goto B54710d;
case 0x547112:c.instructions+=3;goto B547112;
case 0x547117:c.instructions+=2;goto B547117;
case 0x547118:c.instructions+=1;goto B547118;
case 0x54711d:goto L54711d;
case 0x547120:c.instructions+=5;goto B547120;
case 0x547122:c.instructions+=4;goto B547122;
case 0x547127:c.instructions+=3;goto B547127;
case 0x54712c:c.instructions+=2;goto B54712c;
case 0x54712d:c.instructions+=1;goto B54712d;
case 0x547132:goto L547132;
case 0x547135:c.instructions+=5;goto B547135;
case 0x547137:c.instructions+=4;goto B547137;
case 0x54713c:c.instructions+=3;goto B54713c;
case 0x547141:c.instructions+=2;goto B547141;
case 0x547142:c.instructions+=1;goto B547142;
case 0x547147:goto L547147;
case 0x54714a:c.instructions+=3;goto B54714a;
case 0x54714d:c.instructions+=2;goto B54714d;
case 0x54714f:c.instructions+=1;goto B54714f;
case 0x547151:goto L547151;
case 0x547154:c.instructions+=1;goto B547154;
case 0x547156:goto L547156;
case 0x547158:goto L547158;
case 0x54715b:c.instructions+=1;goto B54715b;
case 0x54715d:goto L54715d;
case 0x547160:c.instructions+=3;goto B547160;
case 0x547165:c.instructions+=2;goto B547165;
case 0x547166:c.instructions+=1;goto B547166;
case 0x54716b:goto L54716b;
case 0x54716e:c.instructions+=3;goto B54716e;
case 0x547173:c.instructions+=2;goto B547173;
case 0x547174:c.instructions+=1;goto B547174;
case 0x547176:goto L547176;
case 0x547179:c.instructions+=2;goto B547179;
case 0x54717b:c.instructions+=1;goto B54717b;
case 0x54717d:goto L54717d;
case 0x547180:c.instructions+=1;goto B547180;
case 0x547182:goto L547182;
case 0x547184:goto L547184;
case 0x547187:c.instructions+=2;goto B547187;
case 0x54718c:c.instructions+=1;goto B54718c;
case 0x54718e:goto L54718e;
case 0x547191:c.instructions+=2;goto B547191;
case 0x547192:c.instructions+=1;goto B547192;
case 0x547197:goto L547197;
case 0x54719a:c.instructions+=3;goto B54719a;
case 0x54719f:c.instructions+=2;goto B54719f;
case 0x5471a0:c.instructions+=1;goto B5471a0;
case 0x5471a5:goto L5471a5;
case 0x5471a7:goto L5471a7;
case 0x5471aa:c.instructions+=2;goto B5471aa;
case 0x5471ab:c.instructions+=1;goto B5471ab;
case 0x5471b0:goto L5471b0;
case 0x5471b3:c.instructions+=2;goto B5471b3;
case 0x5471b8:c.instructions+=1;goto B5471b8;
case 0x5471b9:goto L5471b9;
case 0x5471be:goto L5471be;
case 0x5471c1:goto L5471c1;
case 0x5471c2:c.instructions+=3;goto B5471c2;
case 0x5471c5:c.instructions+=2;goto B5471c5;
case 0x5471c7:c.instructions+=1;goto B5471c7;
case 0x5471c9:goto L5471c9;
case 0x5471cc:c.instructions+=2;goto B5471cc;
case 0x5471cf:c.instructions+=1;goto B5471cf;
case 0x5471d1:goto L5471d1;
case 0x5471d4:c.instructions+=1;goto B5471d4;
case 0x5471d6:goto L5471d6;
case 0x5471d9:c.instructions+=4;goto B5471d9;
case 0x5471db:c.instructions+=3;goto B5471db;
case 0x5471de:c.instructions+=2;goto B5471de;
case 0x5471df:c.instructions+=1;goto B5471df;
case 0x5471e1:goto L5471e1;
case 0x5471e2:c.instructions+=1;goto B5471e2;
case 0x5471e7:goto L5471e7;
case 0x5471e9:c.instructions+=1;goto B5471e9;
case 0x5471eb:goto L5471eb;
case 0x5471ed:goto L5471ed;
case 0x5471f0:c.instructions+=1;goto B5471f0;
case 0x5471f5:goto L5471f5;
case 0x5471f7:c.instructions+=1;goto B5471f7;
case 0x5471f9:goto L5471f9;
case 0x5471fe:c.instructions+=1;goto B5471fe;
case 0x547203:goto L547203;
case 0x547204:c.instructions+=5;goto B547204;
case 0x547205:c.instructions+=4;goto B547205;
case 0x547208:c.instructions+=3;goto B547208;
case 0x54720d:c.instructions+=2;goto B54720d;
case 0x54720e:c.instructions+=1;goto B54720e;
case 0x547213:goto L547213;
case 0x547216:c.instructions+=2;goto B547216;
case 0x547217:c.instructions+=1;goto B547217;
case 0x547219:goto L547219;
case 0x54721c:c.instructions+=5;goto B54721c;
case 0x54721f:c.instructions+=4;goto B54721f;
case 0x547220:c.instructions+=3;goto B547220;
case 0x547225:c.instructions+=2;goto B547225;
case 0x547226:c.instructions+=1;goto B547226;
case 0x54722b:goto L54722b;
case 0x54722e:goto L54722e;
case 0x547235:c.instructions+=2;goto B547235;
case 0x547236:c.instructions+=1;goto B547236;
case 0x547238:goto L547238;
case 0x54723b:c.instructions+=4;goto B54723b;
case 0x547240:c.instructions+=3;goto B547240;
case 0x547245:c.instructions+=2;goto B547245;
case 0x547246:c.instructions+=1;goto B547246;
case 0x54724b:goto L54724b;
case 0x54724e:goto L54724e;
case 0x54724f:c.instructions+=1;goto B54724f;
case 0x547250:goto L547250;
case 0x547251:c.instructions+=5;goto B547251;
case 0x547253:c.instructions+=4;goto B547253;
case 0x547256:c.instructions+=3;goto B547256;
case 0x547259:c.instructions+=2;goto B547259;
case 0x54725b:c.instructions+=1;goto B54725b;
case 0x547261:goto L547261;
case 0x547262:c.instructions+=4;goto B547262;
case 0x547263:c.instructions+=3;goto B547263;
case 0x547266:c.instructions+=2;goto B547266;
case 0x547268:c.instructions+=1;goto B547268;
case 0x54726a:goto L54726a;
case 0x54726d:c.instructions+=2;goto B54726d;
case 0x547272:c.instructions+=1;goto B547272;
case 0x547277:goto L547277;
case 0x547279:c.instructions+=2;goto B547279;
case 0x54727c:c.instructions+=1;goto B54727c;
case 0x54727e:goto L54727e;
case 0x547280:c.instructions+=2;goto B547280;
case 0x547285:c.instructions+=1;goto B547285;
case 0x54728a:goto L54728a;
case 0x54728b:c.instructions+=4;goto B54728b;
case 0x54728e:c.instructions+=3;goto B54728e;
case 0x547293:c.instructions+=2;goto B547293;
case 0x547294:c.instructions+=1;goto B547294;
case 0x547299:goto L547299;
case 0x54729b:goto L54729b;
case 0x54729e:c.instructions+=1;goto B54729e;
case 0x5472a3:goto L5472a3;
case 0x5472a4:c.instructions+=3;goto B5472a4;
case 0x5472a9:c.instructions+=2;goto B5472a9;
case 0x5472aa:c.instructions+=1;goto B5472aa;
case 0x5472af:goto L5472af;
case 0x5472b2:goto L5472b2;
case 0x5472b5:c.instructions+=1;goto B5472b5;
case 0x5472ba:goto L5472ba;
case 0x5472c0:c.instructions+=6;goto B5472c0;
case 0x5472c1:c.instructions+=5;goto B5472c1;
case 0x5472c2:c.instructions+=4;goto B5472c2;
case 0x5472c7:c.instructions+=3;goto B5472c7;
case 0x5472c8:c.instructions+=2;goto B5472c8;
case 0x5472ce:c.instructions+=1;goto B5472ce;
case 0x5472d3:goto L5472d3;
case 0x5472d9:c.instructions+=1;goto B5472d9;
case 0x5472db:goto L5472db;
case 0x5472e1:c.instructions+=1;goto B5472e1;
case 0x5472e3:goto L5472e3;
case 0x5472e5:c.instructions+=1;goto B5472e5;
case 0x5472e7:goto L5472e7;
case 0x5472ea:c.instructions+=7;goto B5472ea;
case 0x5472f0:c.instructions+=6;goto B5472f0;
case 0x5472f3:c.instructions+=5;goto B5472f3;
case 0x5472f6:c.instructions+=4;goto B5472f6;
case 0x5472f7:c.instructions+=3;goto B5472f7;
case 0x5472f8:c.instructions+=2;goto B5472f8;
case 0x5472fd:c.instructions+=1;goto B5472fd;
case 0x547302:goto L547302;
case 0x547303:c.instructions+=4;goto B547303;
case 0x547308:c.instructions+=3;goto B547308;
case 0x54730d:c.instructions+=2;goto B54730d;
case 0x54730e:c.instructions+=1;goto B54730e;
case 0x547313:goto L547313;
case 0x547316:c.instructions+=4;goto B547316;
case 0x547317:c.instructions+=3;goto B547317;
case 0x547318:c.instructions+=2;goto B547318;
case 0x547319:c.instructions+=1;goto B547319;
case 0x54731a:goto L54731a;
case 0x54731d:c.instructions+=3;goto B54731d;
case 0x547322:c.instructions+=2;goto B547322;
case 0x547323:c.instructions+=1;goto B547323;
case 0x547328:goto L547328;
case 0x54732b:goto L54732b;
case 0x54732c:c.instructions+=1;goto B54732c;
case 0x54732d:goto L54732d;
case 0x54732e:c.instructions+=1;goto B54732e;
case 0x547330:goto L547330;
case 0x547331:c.instructions+=4;goto B547331;
case 0x547333:c.instructions+=3;goto B547333;
case 0x547334:c.instructions+=2;goto B547334;
case 0x54733a:c.instructions+=1;goto B54733a;
case 0x54733f:goto L54733f;
case 0x547340:c.instructions+=5;goto B547340;
case 0x547346:c.instructions+=4;goto B547346;
case 0x547347:c.instructions+=3;goto B547347;
case 0x547349:c.instructions+=2;goto B547349;
case 0x54734f:c.instructions+=1;goto B54734f;
case 0x547354:goto L547354;
case 0x547357:c.instructions+=5;goto B547357;
case 0x54735a:c.instructions+=4;goto B54735a;
case 0x54735d:c.instructions+=3;goto B54735d;
case 0x547362:c.instructions+=2;goto B547362;
case 0x547364:c.instructions+=1;goto B547364;
case 0x547369:goto L547369;
case 0x54736b:c.instructions+=2;goto B54736b;
case 0x54736d:c.instructions+=1;goto B54736d;
case 0x54736f:goto L54736f;
case 0x547371:c.instructions+=2;goto B547371;
case 0x547376:c.instructions+=1;goto B547376;
case 0x54737b:goto L54737b;
case 0x54737c:c.instructions+=3;goto B54737c;
case 0x547382:c.instructions+=2;goto B547382;
case 0x547383:c.instructions+=1;goto B547383;
case 0x547388:goto L547388;
case 0x54738b:c.instructions+=1;goto B54738b;
case 0x54738d:goto L54738d;
case 0x547392:goto L547392;
case 0x547398:c.instructions+=4;goto B547398;
case 0x547399:c.instructions+=3;goto B547399;
case 0x54739e:c.instructions+=2;goto B54739e;
case 0x54739f:c.instructions+=1;goto B54739f;
case 0x5473a4:goto L5473a4;
case 0x5473a7:goto L5473a7;
case 0x5473ad:c.instructions+=3;goto B5473ad;
case 0x5473b3:c.instructions+=2;goto B5473b3;
case 0x5473b5:c.instructions+=1;goto B5473b5;
case 0x5473bb:goto L5473bb;
case 0x5473c1:c.instructions+=5;goto B5473c1;
case 0x5473c4:c.instructions+=4;goto B5473c4;
case 0x5473c5:c.instructions+=3;goto B5473c5;
case 0x5473ca:c.instructions+=2;goto B5473ca;
case 0x5473cc:c.instructions+=1;goto B5473cc;
case 0x5473d1:goto L5473d1;
case 0x5473d3:c.instructions+=5;goto B5473d3;
case 0x5473d6:c.instructions+=4;goto B5473d6;
case 0x5473d8:c.instructions+=3;goto B5473d8;
case 0x5473da:c.instructions+=2;goto B5473da;
case 0x5473df:c.instructions+=1;goto B5473df;
case 0x5473e1:goto L5473e1;
case 0x5473e6:goto L5473e6;
case 0x5473e9:c.instructions+=5;goto B5473e9;
case 0x5473ea:c.instructions+=4;goto B5473ea;
case 0x5473ec:c.instructions+=3;goto B5473ec;
case 0x5473f1:c.instructions+=2;goto B5473f1;
case 0x5473f3:c.instructions+=1;goto B5473f3;
case 0x5473f8:goto L5473f8;
case 0x5473fa:goto L5473fa;
case 0x5473ff:goto L5473ff;
case 0x547402:c.instructions+=3;goto B547402;
case 0x547403:c.instructions+=2;goto B547403;
case 0x547405:c.instructions+=1;goto B547405;
case 0x54740a:goto L54740a;
case 0x54740b:c.instructions+=4;goto B54740b;
case 0x547410:c.instructions+=3;goto B547410;
case 0x547415:c.instructions+=2;goto B547415;
case 0x547416:c.instructions+=1;goto B547416;
case 0x54741b:goto L54741b;
case 0x547420:c.instructions+=4;goto B547420;
case 0x547423:c.instructions+=3;goto B547423;
case 0x547426:c.instructions+=2;goto B547426;
case 0x547427:c.instructions+=1;goto B547427;
case 0x547429:goto L547429;
case 0x54742c:c.instructions+=4;goto B54742c;
case 0x54742d:c.instructions+=3;goto B54742d;
case 0x54742f:c.instructions+=2;goto B54742f;
case 0x547434:c.instructions+=1;goto B547434;
case 0x547439:goto L547439;
case 0x54743a:c.instructions+=4;goto B54743a;
case 0x54743f:c.instructions+=3;goto B54743f;
case 0x547444:c.instructions+=2;goto B547444;
case 0x547445:c.instructions+=1;goto B547445;
case 0x54744a:goto L54744a;
case 0x54744d:c.instructions+=3;goto B54744d;
case 0x54744e:c.instructions+=2;goto B54744e;
case 0x54744f:c.instructions+=1;goto B54744f;
case 0x547450:goto L547450;
case 0x547453:c.instructions+=3;goto B547453;
case 0x547458:c.instructions+=2;goto B547458;
case 0x547459:c.instructions+=1;goto B547459;
case 0x54745e:goto L54745e;
case 0x547461:goto L547461;
case 0x547462:c.instructions+=2;goto B547462;
case 0x547463:c.instructions+=1;goto B547463;
case 0x547470:goto L547470;
case 0x547471:c.instructions+=7;goto B547471;
case 0x547472:c.instructions+=6;goto B547472;
case 0x547473:c.instructions+=5;goto B547473;
case 0x547474:c.instructions+=4;goto B547474;
case 0x547476:c.instructions+=3;goto B547476;
case 0x547479:c.instructions+=2;goto B547479;
case 0x54747e:c.instructions+=1;goto B54747e;
case 0x547483:goto L547483;
case 0x547484:c.instructions+=2;goto B547484;
case 0x547486:c.instructions+=1;goto B547486;
case 0x54748b:goto L54748b;
case 0x54748c:c.instructions+=3;goto B54748c;
case 0x54748d:c.instructions+=2;goto B54748d;
case 0x54748f:c.instructions+=1;goto B54748f;
case 0x547494:goto L547494;
case 0x547495:c.instructions+=2;goto B547495;
case 0x547496:c.instructions+=1;goto B547496;
case 0x547498:goto L547498;
case 0x547499:c.instructions+=4;goto B547499;
case 0x54749a:c.instructions+=3;goto B54749a;
case 0x54749b:c.instructions+=2;goto B54749b;
case 0x54749c:c.instructions+=1;goto B54749c;
case 0x5474a0:goto L5474a0;
case 0x5474a1:c.instructions+=7;goto B5474a1;
case 0x5474a2:c.instructions+=6;goto B5474a2;
case 0x5474a3:c.instructions+=5;goto B5474a3;
case 0x5474a4:c.instructions+=4;goto B5474a4;
case 0x5474a6:c.instructions+=3;goto B5474a6;
case 0x5474ac:c.instructions+=2;goto B5474ac;
case 0x5474b1:c.instructions+=1;goto B5474b1;
case 0x5474b6:goto L5474b6;
case 0x5474b7:c.instructions+=2;goto B5474b7;
case 0x5474b9:c.instructions+=1;goto B5474b9;
case 0x5474be:goto L5474be;
case 0x5474bf:c.instructions+=3;goto B5474bf;
case 0x5474c0:c.instructions+=2;goto B5474c0;
case 0x5474c2:c.instructions+=1;goto B5474c2;
case 0x5474c7:goto L5474c7;
case 0x5474c8:c.instructions+=2;goto B5474c8;
case 0x5474c9:c.instructions+=1;goto B5474c9;
case 0x5474cb:goto L5474cb;
case 0x5474cc:c.instructions+=4;goto B5474cc;
case 0x5474cd:c.instructions+=3;goto B5474cd;
case 0x5474ce:c.instructions+=2;goto B5474ce;
case 0x5474cf:c.instructions+=1;goto B5474cf;
case 0x5474d0:goto L5474d0;
case 0x5474d1:c.instructions+=3;goto B5474d1;
case 0x5474d5:c.instructions+=2;goto B5474d5;
case 0x5474d7:c.instructions+=1;goto B5474d7;
case 0x5474d9:goto L5474d9;
case 0x5474da:c.instructions+=3;goto B5474da;
case 0x5474de:c.instructions+=2;goto B5474de;
case 0x5474e1:c.instructions+=1;goto B5474e1;
case 0x5474e3:goto L5474e3;
case 0x5474e6:c.instructions+=1;goto B5474e6;
case 0x5474e8:goto L5474e8;
case 0x5474eb:c.instructions+=4;goto B5474eb;
case 0x5474ec:c.instructions+=3;goto B5474ec;
case 0x5474ef:c.instructions+=2;goto B5474ef;
case 0x5474f1:c.instructions+=1;goto B5474f1;
case 0x5474f3:goto L5474f3;
case 0x5474f4:c.instructions+=1;goto B5474f4;
case 0x5474f9:goto L5474f9;
case 0x5474fb:c.instructions+=1;goto B5474fb;
case 0x547500:goto L547500;
case 0x547503:c.instructions+=2;goto B547503;
case 0x547505:c.instructions+=1;goto B547505;
case 0x547507:goto L547507;
case 0x54750a:c.instructions+=10;goto B54750a;
case 0x54750d:c.instructions+=9;goto B54750d;
case 0x547510:c.instructions+=8;goto B547510;
case 0x547512:c.instructions+=7;goto B547512;
case 0x547515:c.instructions+=6;goto B547515;
case 0x547517:c.instructions+=5;goto B547517;
case 0x547518:c.instructions+=4;goto B547518;
case 0x547519:c.instructions+=3;goto B547519;
case 0x54751c:c.instructions+=2;goto B54751c;
case 0x54751d:c.instructions+=1;goto B54751d;
case 0x547520:goto L547520;
case 0x547523:c.instructions+=6;goto B547523;
case 0x547525:c.instructions+=5;goto B547525;
case 0x547527:c.instructions+=4;goto B547527;
case 0x54752a:c.instructions+=3;goto B54752a;
case 0x54752c:c.instructions+=2;goto B54752c;
case 0x54752f:c.instructions+=1;goto B54752f;
case 0x547530:goto L547530;
case 0x547531:goto L547531;
case 0x547532:c.instructions+=1;goto B547532;
case 0x547540:goto L547540;
case 0x547541:c.instructions+=4;goto B547541;
case 0x547542:c.instructions+=3;goto B547542;
case 0x547544:c.instructions+=2;goto B547544;
case 0x547549:c.instructions+=1;goto B547549;
case 0x547550:goto L547550;
case 0x547551:c.instructions+=2;goto B547551;
case 0x547553:c.instructions+=1;goto B547553;
case 0x547558:goto L547558;
case 0x547559:c.instructions+=2;goto B547559;
case 0x54755c:c.instructions+=1;goto B54755c;
case 0x54755e:goto L54755e;
case 0x54755f:c.instructions+=2;goto B54755f;
case 0x547560:c.instructions+=1;goto B547560;
case 0x547570:goto L547570;
case 0x547573:c.instructions+=6;goto B547573;
case 0x547574:c.instructions+=5;goto B547574;
case 0x547575:c.instructions+=4;goto B547575;
case 0x547576:c.instructions+=3;goto B547576;
case 0x547578:c.instructions+=2;goto B547578;
case 0x54757c:c.instructions+=1;goto B54757c;
case 0x547581:goto L547581;
case 0x547583:c.instructions+=1;goto B547583;
case 0x547588:goto L547588;
case 0x54758b:c.instructions+=4;goto B54758b;
case 0x54758e:c.instructions+=3;goto B54758e;
case 0x547590:c.instructions+=2;goto B547590;
case 0x547594:c.instructions+=1;goto B547594;
case 0x54759a:goto L54759a;
case 0x54759c:goto L54759c;
case 0x5475a0:goto L5475a0;
case 0x5475a3:c.instructions+=2;goto B5475a3;
case 0x5475a6:c.instructions+=1;goto B5475a6;
case 0x5475a8:goto L5475a8;
case 0x5475ab:c.instructions+=1;goto B5475ab;
case 0x5475ad:goto L5475ad;
case 0x5475b2:goto L5475b2;
case 0x5475b8:c.instructions+=3;goto B5475b8;
case 0x5475b9:c.instructions+=2;goto B5475b9;
case 0x5475bb:c.instructions+=1;goto B5475bb;
case 0x5475c0:goto L5475c0;
case 0x5475c2:c.instructions+=1;goto B5475c2;
case 0x5475c4:goto L5475c4;
case 0x5475c6:c.instructions+=3;goto B5475c6;
case 0x5475cb:c.instructions+=2;goto B5475cb;
case 0x5475cd:c.instructions+=1;goto B5475cd;
case 0x5475d2:goto L5475d2;
case 0x5475d5:c.instructions+=1;goto B5475d5;
case 0x5475d7:goto L5475d7;
case 0x5475d8:c.instructions+=2;goto B5475d8;
case 0x5475db:c.instructions+=1;goto B5475db;
case 0x5475dd:goto L5475dd;
case 0x5475df:goto L5475df;
case 0x5475e4:goto L5475e4;
case 0x5475e6:c.instructions+=3;goto B5475e6;
case 0x5475e7:c.instructions+=2;goto B5475e7;
case 0x5475e9:c.instructions+=1;goto B5475e9;
case 0x5475ee:goto L5475ee;
case 0x5475ef:c.instructions+=2;goto B5475ef;
case 0x5475f2:c.instructions+=1;goto B5475f2;
case 0x5475f4:goto L5475f4;
case 0x5475f8:goto L5475f8;
case 0x5475fb:c.instructions+=5;goto B5475fb;
case 0x5475fe:c.instructions+=4;goto B5475fe;
case 0x5475ff:c.instructions+=3;goto B5475ff;
case 0x547600:c.instructions+=2;goto B547600;
case 0x547606:c.instructions+=1;goto B547606;
case 0x54760b:goto L54760b;
case 0x547612:c.instructions+=1;goto B547612;
case 0x547618:goto L547618;
case 0x54761b:c.instructions+=4;goto B54761b;
case 0x54761d:c.instructions+=3;goto B54761d;
case 0x547620:c.instructions+=2;goto B547620;
case 0x547624:c.instructions+=1;goto B547624;
case 0x54762a:goto L54762a;
case 0x54762b:c.instructions+=2;goto B54762b;
case 0x54762c:c.instructions+=1;goto B54762c;
case 0x547631:goto L547631;
case 0x547634:c.instructions+=5;goto B547634;
case 0x547637:c.instructions+=4;goto B547637;
case 0x54763a:c.instructions+=3;goto B54763a;
case 0x54763d:c.instructions+=2;goto B54763d;
case 0x547640:c.instructions+=1;goto B547640;
case 0x547642:goto L547642;
case 0x547644:goto L547644;
case 0x547646:goto L547646;
case 0x54764c:c.instructions+=1;goto B54764c;
case 0x54764e:goto L54764e;
case 0x547658:goto L547658;
case 0x54765e:c.instructions+=3;goto B54765e;
case 0x547660:c.instructions+=2;goto B547660;
case 0x547662:c.instructions+=1;goto B547662;
case 0x547664:goto L547664;
case 0x54766a:c.instructions+=2;goto B54766a;
case 0x54766f:c.instructions+=1;goto B54766f;
case 0x547670:goto L547670;
case 0x547672:c.instructions+=1;goto B547672;
case 0x547678:goto L547678;
case 0x547679:c.instructions+=3;goto B547679;
case 0x54767f:c.instructions+=2;goto B54767f;
case 0x547681:c.instructions+=1;goto B547681;
case 0x547683:goto L547683;
case 0x547685:goto L547685;
case 0x547689:c.instructions+=3;goto B547689;
case 0x54768c:c.instructions+=2;goto B54768c;
case 0x54768f:c.instructions+=1;goto B54768f;
case 0x547691:goto L547691;
case 0x547698:c.instructions+=1;goto B547698;
case 0x54769f:goto L54769f;
case 0x5476a1:c.instructions+=1;goto B5476a1;
case 0x5476a3:goto L5476a3;
case 0x5476a6:c.instructions+=1;goto B5476a6;
case 0x5476a8:goto L5476a8;
case 0x5476ad:c.instructions+=1;goto B5476ad;
case 0x5476af:goto L5476af;
case 0x5476b1:c.instructions+=1;goto B5476b1;
case 0x5476b3:goto L5476b3;
case 0x5476b6:c.instructions+=1;goto B5476b6;
case 0x5476b8:goto L5476b8;
case 0x5476be:c.instructions+=4;goto B5476be;
case 0x5476c1:c.instructions+=3;goto B5476c1;
case 0x5476c5:c.instructions+=2;goto B5476c5;
case 0x5476c7:c.instructions+=1;goto B5476c7;
case 0x5476cd:goto L5476cd;
case 0x5476d0:c.instructions+=1;goto B5476d0;
case 0x5476d2:goto L5476d2;
case 0x5476d9:goto L5476d9;
case 0x5476dc:c.instructions+=1;goto B5476dc;
case 0x5476de:goto L5476de;
case 0x5476e1:c.instructions+=1;goto B5476e1;
case 0x5476e3:goto L5476e3;
case 0x5476e6:c.instructions+=1;goto B5476e6;
case 0x5476e8:goto L5476e8;
case 0x5476ea:goto L5476ea;
case 0x5476ee:c.instructions+=2;goto B5476ee;
case 0x5476f1:c.instructions+=1;goto B5476f1;
case 0x5476f7:goto L5476f7;
case 0x5476f9:c.instructions+=1;goto B5476f9;
case 0x5476fe:goto L5476fe;
case 0x547704:c.instructions+=3;goto B547704;
case 0x547709:c.instructions+=2;goto B547709;
case 0x54770b:c.instructions+=1;goto B54770b;
case 0x547710:goto L547710;
case 0x547714:c.instructions+=6;goto B547714;
case 0x547715:c.instructions+=5;goto B547715;
case 0x547716:c.instructions+=4;goto B547716;
case 0x547717:c.instructions+=3;goto B547717;
case 0x54771d:c.instructions+=2;goto B54771d;
case 0x547725:c.instructions+=1;goto B547725;
case 0x54772a:goto L54772a;
case 0x54772e:c.instructions+=8;goto B54772e;
case 0x547733:c.instructions+=7;goto B547733;
case 0x547735:c.instructions+=6;goto B547735;
case 0x547737:c.instructions+=5;goto B547737;
case 0x54773d:c.instructions+=4;goto B54773d;
case 0x54773f:c.instructions+=3;goto B54773f;
case 0x547743:c.instructions+=2;goto B547743;
case 0x547749:c.instructions+=1;goto B547749;
case 0x54774d:goto L54774d;
case 0x54774f:c.instructions+=4;goto B54774f;
case 0x547752:c.instructions+=3;goto B547752;
case 0x547754:c.instructions+=2;goto B547754;
case 0x547758:c.instructions+=1;goto B547758;
case 0x54775e:goto L54775e;
case 0x547764:c.instructions+=3;goto B547764;
case 0x547765:c.instructions+=2;goto B547765;
case 0x547768:c.instructions+=1;goto B547768;
case 0x54776d:goto L54776d;
case 0x54776f:c.instructions+=3;goto B54776f;
case 0x547771:c.instructions+=2;goto B547771;
case 0x547772:c.instructions+=1;goto B547772;
case 0x547777:goto L547777;
case 0x54777a:c.instructions+=4;goto B54777a;
case 0x54777d:c.instructions+=3;goto B54777d;
case 0x54777e:c.instructions+=2;goto B54777e;
case 0x547781:c.instructions+=1;goto B547781;
case 0x547786:goto L547786;
case 0x54778d:c.instructions+=2;goto B54778d;
case 0x547790:c.instructions+=1;goto B547790;
case 0x547792:goto L547792;
case 0x547798:c.instructions+=2;goto B547798;
case 0x547799:c.instructions+=1;goto B547799;
case 0x54779e:goto L54779e;
case 0x5477a0:c.instructions+=2;goto B5477a0;
case 0x5477a2:c.instructions+=1;goto B5477a2;
case 0x5477a4:goto L5477a4;
case 0x5477a6:c.instructions+=5;goto B5477a6;
case 0x5477a9:c.instructions+=4;goto B5477a9;
case 0x5477ab:c.instructions+=3;goto B5477ab;
case 0x5477ac:c.instructions+=2;goto B5477ac;
case 0x5477af:c.instructions+=1;goto B5477af;
case 0x5477b4:goto L5477b4;
case 0x5477b6:c.instructions+=3;goto B5477b6;
case 0x5477b9:c.instructions+=2;goto B5477b9;
case 0x5477bb:c.instructions+=1;goto B5477bb;
case 0x5477bd:goto L5477bd;
case 0x5477be:c.instructions+=4;goto B5477be;
case 0x5477bf:c.instructions+=3;goto B5477bf;
case 0x5477c0:c.instructions+=2;goto B5477c0;
case 0x5477c3:c.instructions+=1;goto B5477c3;
case 0x5477f0:goto L5477f0;
case 0x5477f1:c.instructions+=5;goto B5477f1;
case 0x5477f5:c.instructions+=4;goto B5477f5;
case 0x5477f8:c.instructions+=3;goto B5477f8;
case 0x5477f9:c.instructions+=2;goto B5477f9;
case 0x5477fb:c.instructions+=1;goto B5477fb;
case 0x547801:goto L547801;
case 0x547804:c.instructions+=1;goto B547804;
case 0x54780a:goto L54780a;
case 0x54780b:c.instructions+=5;goto B54780b;
case 0x54780c:c.instructions+=4;goto B54780c;
case 0x547810:c.instructions+=3;goto B547810;
case 0x547815:c.instructions+=2;goto B547815;
case 0x54781b:c.instructions+=1;goto B54781b;
case 0x547820:goto L547820;
case 0x547821:c.instructions+=2;goto B547821;
case 0x547823:c.instructions+=1;goto B547823;
case 0x547828:goto L547828;
case 0x54782a:c.instructions+=1;goto B54782a;
case 0x54782c:goto L54782c;
case 0x54782e:c.instructions+=3;goto B54782e;
case 0x547833:c.instructions+=2;goto B547833;
case 0x547835:c.instructions+=1;goto B547835;
case 0x54783a:goto L54783a;
case 0x54783d:c.instructions+=1;goto B54783d;
case 0x54783f:goto L54783f;
case 0x547840:c.instructions+=2;goto B547840;
case 0x547843:c.instructions+=1;goto B547843;
case 0x547845:goto L547845;
case 0x547847:c.instructions+=1;goto B547847;
case 0x54784c:goto L54784c;
case 0x54784e:c.instructions+=1;goto B54784e;
case 0x547850:goto L547850;
case 0x547852:c.instructions+=4;goto B547852;
case 0x547855:c.instructions+=3;goto B547855;
case 0x547856:c.instructions+=2;goto B547856;
case 0x547858:c.instructions+=1;goto B547858;
case 0x54785d:goto L54785d;
case 0x54785e:c.instructions+=2;goto B54785e;
case 0x547860:c.instructions+=1;goto B547860;
case 0x547865:goto L547865;
case 0x547866:c.instructions+=2;goto B547866;
case 0x547868:c.instructions+=1;goto B547868;
case 0x54786d:goto L54786d;
case 0x54786f:c.instructions+=1;goto B54786f;
case 0x547871:goto L547871;
case 0x547873:c.instructions+=1;goto B547873;
case 0x547878:goto L547878;
case 0x54787b:c.instructions+=2;goto B54787b;
case 0x54787d:c.instructions+=1;goto B54787d;
case 0x54787f:goto L54787f;
case 0x547886:c.instructions+=2;goto B547886;
case 0x547889:c.instructions+=1;goto B547889;
case 0x54788b:goto L54788b;
case 0x547890:c.instructions+=1;goto B547890;
case 0x547893:goto L547893;
case 0x547895:c.instructions+=3;goto B547895;
case 0x547896:c.instructions+=2;goto B547896;
case 0x547898:c.instructions+=1;goto B547898;
case 0x54789d:goto L54789d;
case 0x54789e:c.instructions+=2;goto B54789e;
case 0x5478a0:c.instructions+=1;goto B5478a0;
case 0x5478a5:goto L5478a5;
case 0x5478a7:c.instructions+=1;goto B5478a7;
case 0x5478a9:goto L5478a9;
case 0x5478ad:goto L5478ad;
case 0x5478ae:c.instructions+=2;goto B5478ae;
case 0x5478b1:c.instructions+=1;goto B5478b1;
case 0x5478b3:goto L5478b3;
case 0x5478b8:goto L5478b8;
case 0x5478b9:c.instructions+=2;goto B5478b9;
case 0x5478bb:c.instructions+=1;goto B5478bb;
case 0x5478c0:goto L5478c0;
case 0x5478c1:c.instructions+=2;goto B5478c1;
case 0x5478c4:c.instructions+=1;goto B5478c4;
case 0x5478c6:goto L5478c6;
case 0x5478ca:c.instructions+=2;goto B5478ca;
case 0x5478cd:c.instructions+=1;goto B5478cd;
case 0x5478cf:goto L5478cf;
case 0x5478d2:c.instructions+=1;goto B5478d2;
case 0x5478d4:goto L5478d4;
case 0x5478d6:goto L5478d6;
case 0x5478d8:goto L5478d8;
case 0x5478db:c.instructions+=5;goto B5478db;
case 0x5478de:c.instructions+=4;goto B5478de;
case 0x5478e0:c.instructions+=3;goto B5478e0;
case 0x5478e3:c.instructions+=2;goto B5478e3;
case 0x5478e6:c.instructions+=1;goto B5478e6;
case 0x5478e8:goto L5478e8;
case 0x5478ea:c.instructions+=3;goto B5478ea;
case 0x5478ec:c.instructions+=2;goto B5478ec;
case 0x5478ed:c.instructions+=1;goto B5478ed;
case 0x5478f2:goto L5478f2;
case 0x5478f5:c.instructions+=2;goto B5478f5;
case 0x5478f6:c.instructions+=1;goto B5478f6;
case 0x5478f7:goto L5478f7;
case 0x5478f8:c.instructions+=2;goto B5478f8;
case 0x5478f9:c.instructions+=1;goto B5478f9;
case 0x547900:goto L547900;
case 0x547903:c.instructions+=6;goto B547903;
case 0x547904:c.instructions+=5;goto B547904;
case 0x547908:c.instructions+=4;goto B547908;
case 0x54790a:c.instructions+=3;goto B54790a;
case 0x54790b:c.instructions+=2;goto B54790b;
case 0x54790d:c.instructions+=1;goto B54790d;
case 0x547913:goto L547913;
case 0x547914:c.instructions+=2;goto B547914;
case 0x547916:c.instructions+=1;goto B547916;
case 0x54791b:goto L54791b;
case 0x54791d:c.instructions+=3;goto B54791d;
case 0x547920:c.instructions+=2;goto B547920;
case 0x547922:c.instructions+=1;goto B547922;
case 0x547924:goto L547924;
case 0x547926:c.instructions+=6;goto B547926;
case 0x54792b:c.instructions+=5;goto B54792b;
case 0x547930:c.instructions+=4;goto B547930;
case 0x547935:c.instructions+=3;goto B547935;
case 0x54793a:c.instructions+=2;goto B54793a;
case 0x54793c:c.instructions+=1;goto B54793c;
case 0x547941:goto L547941;
case 0x547947:c.instructions+=2;goto B547947;
case 0x54794a:c.instructions+=1;goto B54794a;
case 0x54794c:goto L54794c;
case 0x54794e:goto L54794e;
case 0x547954:c.instructions+=9;goto B547954;
case 0x547955:c.instructions+=8;goto B547955;
case 0x547957:c.instructions+=7;goto B547957;
case 0x547958:c.instructions+=6;goto B547958;
case 0x54795d:c.instructions+=5;goto B54795d;
case 0x547961:c.instructions+=4;goto B547961;
case 0x547963:c.instructions+=3;goto B547963;
case 0x547964:c.instructions+=2;goto B547964;
case 0x54796a:c.instructions+=1;goto B54796a;
case 0x54796f:goto L54796f;
case 0x547972:c.instructions+=4;goto B547972;
case 0x547976:c.instructions+=3;goto B547976;
case 0x547977:c.instructions+=2;goto B547977;
case 0x547978:c.instructions+=1;goto B547978;
case 0x54797d:goto L54797d;
case 0x54797f:c.instructions+=3;goto B54797f;
case 0x547982:c.instructions+=2;goto B547982;
case 0x547984:c.instructions+=1;goto B547984;
case 0x547986:goto L547986;
case 0x547987:c.instructions+=1;goto B547987;
case 0x54798c:goto L54798c;
case 0x54798f:c.instructions+=1;goto B54798f;
case 0x547992:goto L547992;
case 0x547998:c.instructions+=6;goto B547998;
case 0x547999:c.instructions+=5;goto B547999;
case 0x54799e:c.instructions+=4;goto B54799e;
case 0x5479a2:c.instructions+=3;goto B5479a2;
case 0x5479a4:c.instructions+=2;goto B5479a4;
case 0x5479a5:c.instructions+=1;goto B5479a5;
case 0x5479aa:goto L5479aa;
case 0x5479ad:c.instructions+=4;goto B5479ad;
case 0x5479b1:c.instructions+=3;goto B5479b1;
case 0x5479b2:c.instructions+=2;goto B5479b2;
case 0x5479b3:c.instructions+=1;goto B5479b3;
case 0x5479b8:goto L5479b8;
case 0x5479ba:c.instructions+=3;goto B5479ba;
case 0x5479bd:c.instructions+=2;goto B5479bd;
case 0x5479bf:c.instructions+=1;goto B5479bf;
case 0x5479c1:goto L5479c1;
case 0x5479c2:c.instructions+=1;goto B5479c2;
case 0x5479c7:goto L5479c7;
case 0x5479ca:c.instructions+=1;goto B5479ca;
case 0x5479cd:goto L5479cd;
case 0x5479cf:c.instructions+=2;goto B5479cf;
case 0x5479d1:c.instructions+=1;goto B5479d1;
case 0x5479d4:goto L5479d4;
case 0x5479da:c.instructions+=7;goto B5479da;
case 0x5479dd:c.instructions+=6;goto B5479dd;
case 0x5479e3:c.instructions+=5;goto B5479e3;
case 0x5479e5:c.instructions+=4;goto B5479e5;
case 0x5479e8:c.instructions+=3;goto B5479e8;
case 0x5479eb:c.instructions+=2;goto B5479eb;
case 0x5479ed:c.instructions+=1;goto B5479ed;
case 0x5479ee:goto L5479ee;
case 0x5479ef:c.instructions+=3;goto B5479ef;
case 0x5479f0:c.instructions+=2;goto B5479f0;
case 0x5479f3:c.instructions+=1;goto B5479f3;
case 0x547a00:goto L547a00;
case 0x547a03:c.instructions+=6;goto B547a03;
case 0x547a04:c.instructions+=5;goto B547a04;
case 0x547a06:c.instructions+=4;goto B547a06;
case 0x547a07:c.instructions+=3;goto B547a07;
case 0x547a09:c.instructions+=2;goto B547a09;
case 0x547a0e:c.instructions+=1;goto B547a0e;
case 0x547a12:goto L547a12;
case 0x547a14:goto L547a14;
case 0x547a17:c.instructions+=17;goto B547a17;
case 0x547a19:c.instructions+=16;goto B547a19;
case 0x547a1d:c.instructions+=15;goto B547a1d;
case 0x547a23:c.instructions+=14;goto B547a23;
case 0x547a24:c.instructions+=13;goto B547a24;
case 0x547a26:c.instructions+=12;goto B547a26;
case 0x547a2a:c.instructions+=11;goto B547a2a;
case 0x547a32:c.instructions+=10;goto B547a32;
case 0x547a3a:c.instructions+=9;goto B547a3a;
case 0x547a42:c.instructions+=8;goto B547a42;
case 0x547a4a:c.instructions+=7;goto B547a4a;
case 0x547a52:c.instructions+=6;goto B547a52;
case 0x547a5a:c.instructions+=5;goto B547a5a;
case 0x547a62:c.instructions+=4;goto B547a62;
case 0x547a6a:c.instructions+=3;goto B547a6a;
case 0x547a72:c.instructions+=2;goto B547a72;
case 0x547a7a:c.instructions+=1;goto B547a7a;
case 0x547a7f:goto L547a7f;
case 0x547a84:c.instructions+=1;goto B547a84;
case 0x547a89:goto L547a89;
case 0x547a8c:c.instructions+=3;goto B547a8c;
case 0x547a8d:c.instructions+=2;goto B547a8d;
case 0x547a8e:c.instructions+=1;goto B547a8e;
case 0x547a93:goto L547a93;
case 0x547a96:c.instructions+=14;goto B547a96;
case 0x547a9a:c.instructions+=13;goto B547a9a;
case 0x547a9d:c.instructions+=12;goto B547a9d;
case 0x547aa0:c.instructions+=11;goto B547aa0;
case 0x547aa2:c.instructions+=10;goto B547aa2;
case 0x547aa6:c.instructions+=9;goto B547aa6;
case 0x547aac:c.instructions+=8;goto B547aac;
case 0x547aad:c.instructions+=7;goto B547aad;
case 0x547aaf:c.instructions+=6;goto B547aaf;
case 0x547ab7:c.instructions+=5;goto B547ab7;
case 0x547abf:c.instructions+=4;goto B547abf;
case 0x547ac7:c.instructions+=3;goto B547ac7;
case 0x547acf:c.instructions+=2;goto B547acf;
case 0x547ad7:c.instructions+=1;goto B547ad7;
case 0x547adc:goto L547adc;
case 0x547ae1:c.instructions+=1;goto B547ae1;
case 0x547ae6:goto L547ae6;
case 0x547ae9:c.instructions+=3;goto B547ae9;
case 0x547aea:c.instructions+=2;goto B547aea;
case 0x547aeb:c.instructions+=1;goto B547aeb;
case 0x547af0:goto L547af0;
case 0x547af3:c.instructions+=14;goto B547af3;
case 0x547af5:c.instructions+=13;goto B547af5;
case 0x547af9:c.instructions+=12;goto B547af9;
case 0x547afc:c.instructions+=11;goto B547afc;
case 0x547b00:c.instructions+=10;goto B547b00;
case 0x547b06:c.instructions+=9;goto B547b06;
case 0x547b07:c.instructions+=8;goto B547b07;
case 0x547b09:c.instructions+=7;goto B547b09;
case 0x547b0c:c.instructions+=6;goto B547b0c;
case 0x547b14:c.instructions+=5;goto B547b14;
case 0x547b1c:c.instructions+=4;goto B547b1c;
case 0x547b24:c.instructions+=3;goto B547b24;
case 0x547b2c:c.instructions+=2;goto B547b2c;
case 0x547b34:c.instructions+=1;goto B547b34;
case 0x547b39:goto L547b39;
case 0x547b3e:c.instructions+=1;goto B547b3e;
case 0x547b43:goto L547b43;
case 0x547b46:c.instructions+=3;goto B547b46;
case 0x547b47:c.instructions+=2;goto B547b47;
case 0x547b48:c.instructions+=1;goto B547b48;
case 0x547b4d:goto L547b4d;
case 0x547b50:c.instructions+=7;goto B547b50;
case 0x547b53:c.instructions+=6;goto B547b53;
case 0x547b57:c.instructions+=5;goto B547b57;
case 0x547b58:c.instructions+=4;goto B547b58;
case 0x547b5b:c.instructions+=3;goto B547b5b;
case 0x547b5c:c.instructions+=2;goto B547b5c;
case 0x547b5f:c.instructions+=1;goto B547b5f;
case 0x547b60:goto L547b60;
case 0x547b63:c.instructions+=9;goto B547b63;
case 0x547b64:c.instructions+=8;goto B547b64;
case 0x547b65:c.instructions+=7;goto B547b65;
case 0x547b66:c.instructions+=6;goto B547b66;
case 0x547b6d:c.instructions+=5;goto B547b6d;
case 0x547b6e:c.instructions+=4;goto B547b6e;
case 0x547b72:c.instructions+=3;goto B547b72;
case 0x547b79:c.instructions+=2;goto B547b79;
case 0x547b7e:c.instructions+=1;goto B547b7e;
case 0x547b80:goto L547b80;
case 0x547b84:goto L547b84;
case 0x547b87:c.instructions+=3;goto B547b87;
case 0x547b88:c.instructions+=2;goto B547b88;
case 0x547b8d:c.instructions+=1;goto B547b8d;
case 0x547b92:goto L547b92;
case 0x547b94:c.instructions+=4;goto B547b94;
case 0x547b97:c.instructions+=3;goto B547b97;
case 0x547b99:c.instructions+=2;goto B547b99;
case 0x547b9b:c.instructions+=1;goto B547b9b;
case 0x547b9d:goto L547b9d;
case 0x547b9e:c.instructions+=1;goto B547b9e;
case 0x547ba3:goto L547ba3;
case 0x547ba6:c.instructions+=2;goto B547ba6;
case 0x547ba8:c.instructions+=1;goto B547ba8;
case 0x547baa:goto L547baa;
case 0x547bab:c.instructions+=2;goto B547bab;
case 0x547bad:c.instructions+=1;goto B547bad;
case 0x547bb2:goto L547bb2;
case 0x547bb4:c.instructions+=1;goto B547bb4;
case 0x547bb6:goto L547bb6;
case 0x547bbb:c.instructions+=2;goto B547bbb;
case 0x547bbd:c.instructions+=1;goto B547bbd;
case 0x547bbf:goto L547bbf;
case 0x547bc2:c.instructions+=3;goto B547bc2;
case 0x547bc3:c.instructions+=2;goto B547bc3;
case 0x547bc4:c.instructions+=1;goto B547bc4;
case 0x547bc9:goto L547bc9;
case 0x547bcb:c.instructions+=2;goto B547bcb;
case 0x547bcd:c.instructions+=1;goto B547bcd;
case 0x547bcf:goto L547bcf;
case 0x547bd4:c.instructions+=3;goto B547bd4;
case 0x547bd7:c.instructions+=2;goto B547bd7;
case 0x547bd9:c.instructions+=1;goto B547bd9;
case 0x547be0:goto L547be0;
case 0x547be3:c.instructions+=2;goto B547be3;
case 0x547be5:c.instructions+=1;goto B547be5;
case 0x547be7:goto L547be7;
case 0x547be9:c.instructions+=1;goto B547be9;
case 0x547beb:goto L547beb;
case 0x547bed:goto L547bed;
case 0x547bf0:c.instructions+=5;goto B547bf0;
case 0x547bf2:c.instructions+=4;goto B547bf2;
case 0x547bf5:c.instructions+=3;goto B547bf5;
case 0x547bf6:c.instructions+=2;goto B547bf6;
case 0x547bf8:c.instructions+=1;goto B547bf8;
case 0x547bfa:goto L547bfa;
case 0x547bfd:c.instructions+=2;goto B547bfd;
case 0x547bff:c.instructions+=1;goto B547bff;
case 0x547c01:goto L547c01;
case 0x547c04:c.instructions+=1;goto B547c04;
case 0x547c06:goto L547c06;
case 0x547c09:c.instructions+=2;goto B547c09;
case 0x547c0b:c.instructions+=1;goto B547c0b;
case 0x547c0d:goto L547c0d;
case 0x547c0f:goto L547c0f;
case 0x547c11:c.instructions+=1;goto B547c11;
case 0x547c13:goto L547c13;
case 0x547c16:c.instructions+=1;goto B547c16;
case 0x547c18:goto L547c18;
case 0x547c1a:c.instructions+=2;goto B547c1a;
case 0x547c1d:c.instructions+=1;goto B547c1d;
case 0x547c22:goto L547c22;
case 0x547c25:c.instructions+=1;goto B547c25;
case 0x547c28:goto L547c28;
case 0x547c2b:goto L547c2b;
case 0x547c2c:c.instructions+=2;goto B547c2c;
case 0x547c2f:c.instructions+=1;goto B547c2f;
case 0x547c35:goto L547c35;
case 0x547c39:c.instructions+=2;goto B547c39;
case 0x547c3b:c.instructions+=1;goto B547c3b;
case 0x547c41:goto L547c41;
case 0x547c45:c.instructions+=4;goto B547c45;
case 0x547c4b:c.instructions+=3;goto B547c4b;
case 0x547c51:c.instructions+=2;goto B547c51;
case 0x547c53:c.instructions+=1;goto B547c53;
case 0x547c55:goto L547c55;
case 0x547c57:c.instructions+=6;goto B547c57;
case 0x547c5a:c.instructions+=5;goto B547c5a;
case 0x547c5c:c.instructions+=4;goto B547c5c;
case 0x547c5f:c.instructions+=3;goto B547c5f;
case 0x547c62:c.instructions+=2;goto B547c62;
case 0x547c64:c.instructions+=1;goto B547c64;
case 0x547c66:goto L547c66;
case 0x547c68:c.instructions+=2;goto B547c68;
case 0x547c6a:c.instructions+=1;goto B547c6a;
case 0x547c6c:goto L547c6c;
case 0x547c6e:c.instructions+=2;goto B547c6e;
case 0x547c70:c.instructions+=1;goto B547c70;
case 0x547c72:goto L547c72;
case 0x547c78:c.instructions+=4;goto B547c78;
case 0x547c7b:c.instructions+=3;goto B547c7b;
case 0x547c7e:c.instructions+=2;goto B547c7e;
case 0x547c82:c.instructions+=1;goto B547c82;
case 0x547c86:goto L547c86;
case 0x547c8a:c.instructions+=1;goto B547c8a;
case 0x547c8c:goto L547c8c;
case 0x547c90:c.instructions+=2;goto B547c90;
case 0x547c91:c.instructions+=1;goto B547c91;
case 0x547c96:goto L547c96;
case 0x547c9b:goto L547c9b;
case 0x547c9e:c.instructions+=6;goto B547c9e;
case 0x547c9f:c.instructions+=5;goto B547c9f;
case 0x547ca4:c.instructions+=4;goto B547ca4;
case 0x547ca8:c.instructions+=3;goto B547ca8;
case 0x547caa:c.instructions+=2;goto B547caa;
case 0x547cab:c.instructions+=1;goto B547cab;
case 0x547cb0:goto L547cb0;
case 0x547cb4:c.instructions+=7;goto B547cb4;
case 0x547cb8:c.instructions+=6;goto B547cb8;
case 0x547cbb:c.instructions+=5;goto B547cbb;
case 0x547cbe:c.instructions+=4;goto B547cbe;
case 0x547cc1:c.instructions+=3;goto B547cc1;
case 0x547cc3:c.instructions+=2;goto B547cc3;
case 0x547cc7:c.instructions+=1;goto B547cc7;
case 0x547cc9:goto L547cc9;
case 0x547cd0:goto L547cd0;
case 0x547cd3:c.instructions+=2;goto B547cd3;
case 0x547cd5:c.instructions+=1;goto B547cd5;
case 0x547cd7:goto L547cd7;
case 0x547cd9:c.instructions+=1;goto B547cd9;
case 0x547cdb:goto L547cdb;
case 0x547cdd:goto L547cdd;
case 0x547ce0:c.instructions+=5;goto B547ce0;
case 0x547ce2:c.instructions+=4;goto B547ce2;
case 0x547ce5:c.instructions+=3;goto B547ce5;
case 0x547ce6:c.instructions+=2;goto B547ce6;
case 0x547ce8:c.instructions+=1;goto B547ce8;
case 0x547cea:goto L547cea;
case 0x547cec:c.instructions+=1;goto B547cec;
case 0x547cee:goto L547cee;
case 0x547cef:c.instructions+=1;goto B547cef;
case 0x547cf4:goto L547cf4;
case 0x547cf7:c.instructions+=2;goto B547cf7;
case 0x547cf9:c.instructions+=1;goto B547cf9;
case 0x547cfb:goto L547cfb;
case 0x547cfc:c.instructions+=2;goto B547cfc;
case 0x547cfe:c.instructions+=1;goto B547cfe;
case 0x547d03:goto L547d03;
case 0x547d05:c.instructions+=1;goto B547d05;
case 0x547d07:goto L547d07;
case 0x547d0c:c.instructions+=2;goto B547d0c;
case 0x547d0e:c.instructions+=1;goto B547d0e;
case 0x547d10:goto L547d10;
case 0x547d13:c.instructions+=3;goto B547d13;
case 0x547d14:c.instructions+=2;goto B547d14;
case 0x547d15:c.instructions+=1;goto B547d15;
case 0x547d1a:goto L547d1a;
case 0x547d1c:c.instructions+=1;goto B547d1c;
case 0x547d1e:goto L547d1e;
case 0x547d24:c.instructions+=2;goto B547d24;
case 0x547d26:c.instructions+=1;goto B547d26;
case 0x547d28:goto L547d28;
case 0x547d2c:c.instructions+=1;goto B547d2c;
case 0x547d2e:goto L547d2e;
case 0x547d35:goto L547d35;
case 0x547d39:c.instructions+=1;goto B547d39;
case 0x547d3b:goto L547d3b;
case 0x547d3e:c.instructions+=3;goto B547d3e;
case 0x547d41:c.instructions+=2;goto B547d41;
case 0x547d43:c.instructions+=1;goto B547d43;
case 0x547d45:goto L547d45;
case 0x547d47:goto L547d47;
case 0x547d48:c.instructions+=1;goto B547d48;
case 0x547d4d:goto L547d4d;
case 0x547d50:c.instructions+=3;goto B547d50;
case 0x547d53:c.instructions+=2;goto B547d53;
case 0x547d54:c.instructions+=1;goto B547d54;
case 0x547d56:goto L547d56;
case 0x547d57:c.instructions+=5;goto B547d57;
case 0x547d5c:c.instructions+=4;goto B547d5c;
case 0x547d60:c.instructions+=3;goto B547d60;
case 0x547d62:c.instructions+=2;goto B547d62;
case 0x547d63:c.instructions+=1;goto B547d63;
case 0x547d68:goto L547d68;
case 0x547d6c:c.instructions+=7;goto B547d6c;
case 0x547d70:c.instructions+=6;goto B547d70;
case 0x547d73:c.instructions+=5;goto B547d73;
case 0x547d76:c.instructions+=4;goto B547d76;
case 0x547d79:c.instructions+=3;goto B547d79;
case 0x547d7b:c.instructions+=2;goto B547d7b;
case 0x547d7f:c.instructions+=1;goto B547d7f;
case 0x547d81:goto L547d81;
case 0x547d84:c.instructions+=2;goto B547d84;
case 0x547d86:c.instructions+=1;goto B547d86;
case 0x547d88:goto L547d88;
case 0x547d8a:c.instructions+=1;goto B547d8a;
case 0x547d8c:goto L547d8c;
case 0x547d8e:goto L547d8e;
case 0x547d91:c.instructions+=5;goto B547d91;
case 0x547d93:c.instructions+=4;goto B547d93;
case 0x547d96:c.instructions+=3;goto B547d96;
case 0x547d97:c.instructions+=2;goto B547d97;
case 0x547d99:c.instructions+=1;goto B547d99;
case 0x547d9b:goto L547d9b;
case 0x547d9d:c.instructions+=1;goto B547d9d;
case 0x547d9f:goto L547d9f;
case 0x547da0:c.instructions+=1;goto B547da0;
case 0x547da5:goto L547da5;
case 0x547da8:c.instructions+=2;goto B547da8;
case 0x547daa:c.instructions+=1;goto B547daa;
case 0x547dac:goto L547dac;
case 0x547dad:c.instructions+=2;goto B547dad;
case 0x547daf:c.instructions+=1;goto B547daf;
case 0x547db4:goto L547db4;
case 0x547db6:c.instructions+=1;goto B547db6;
case 0x547db8:goto L547db8;
case 0x547dbd:c.instructions+=2;goto B547dbd;
case 0x547dbf:c.instructions+=1;goto B547dbf;
case 0x547dc1:goto L547dc1;
case 0x547dc4:c.instructions+=3;goto B547dc4;
case 0x547dc5:c.instructions+=2;goto B547dc5;
case 0x547dc6:c.instructions+=1;goto B547dc6;
case 0x547dcb:goto L547dcb;
case 0x547dcd:c.instructions+=1;goto B547dcd;
case 0x547dcf:goto L547dcf;
case 0x547dd5:c.instructions+=2;goto B547dd5;
case 0x547dd7:c.instructions+=1;goto B547dd7;
case 0x547dd9:goto L547dd9;
case 0x547ddd:c.instructions+=1;goto B547ddd;
case 0x547ddf:goto L547ddf;
case 0x547de6:goto L547de6;
case 0x547dea:c.instructions+=1;goto B547dea;
case 0x547dec:goto L547dec;
case 0x547def:c.instructions+=3;goto B547def;
case 0x547df2:c.instructions+=2;goto B547df2;
case 0x547df4:c.instructions+=1;goto B547df4;
case 0x547df6:goto L547df6;
case 0x547df8:goto L547df8;
case 0x547df9:c.instructions+=1;goto B547df9;
case 0x547dfe:goto L547dfe;
case 0x547e01:c.instructions+=3;goto B547e01;
case 0x547e04:c.instructions+=2;goto B547e04;
case 0x547e05:c.instructions+=1;goto B547e05;
case 0x547e07:goto L547e07;
case 0x547e0b:c.instructions+=5;goto B547e0b;
case 0x547e0c:c.instructions+=4;goto B547e0c;
case 0x547e0f:c.instructions+=3;goto B547e0f;
case 0x547e12:c.instructions+=2;goto B547e12;
case 0x547e16:c.instructions+=1;goto B547e16;
case 0x547e1c:goto L547e1c;
case 0x547e1d:c.instructions+=5;goto B547e1d;
case 0x547e1e:c.instructions+=4;goto B547e1e;
case 0x547e1f:c.instructions+=3;goto B547e1f;
case 0x547e20:c.instructions+=2;goto B547e20;
case 0x547e23:c.instructions+=1;goto B547e23;
case 0x547e30:goto L547e30;
case 0x547e33:c.instructions+=7;goto B547e33;
case 0x547e34:c.instructions+=6;goto B547e34;
case 0x547e35:c.instructions+=5;goto B547e35;
case 0x547e37:c.instructions+=4;goto B547e37;
case 0x547e38:c.instructions+=3;goto B547e38;
case 0x547e3a:c.instructions+=2;goto B547e3a;
case 0x547e3f:c.instructions+=1;goto B547e3f;
case 0x547e43:goto L547e43;
case 0x547e45:goto L547e45;
case 0x547e48:c.instructions+=18;goto B547e48;
case 0x547e4a:c.instructions+=17;goto B547e4a;
case 0x547e4b:c.instructions+=16;goto B547e4b;
case 0x547e4f:c.instructions+=15;goto B547e4f;
case 0x547e55:c.instructions+=14;goto B547e55;
case 0x547e56:c.instructions+=13;goto B547e56;
case 0x547e58:c.instructions+=12;goto B547e58;
case 0x547e5c:c.instructions+=11;goto B547e5c;
case 0x547e64:c.instructions+=10;goto B547e64;
case 0x547e68:c.instructions+=9;goto B547e68;
case 0x547e70:c.instructions+=8;goto B547e70;
case 0x547e78:c.instructions+=7;goto B547e78;
case 0x547e80:c.instructions+=6;goto B547e80;
case 0x547e88:c.instructions+=5;goto B547e88;
case 0x547e90:c.instructions+=4;goto B547e90;
case 0x547e94:c.instructions+=3;goto B547e94;
case 0x547e98:c.instructions+=2;goto B547e98;
case 0x547ea0:c.instructions+=1;goto B547ea0;
case 0x547ea5:goto L547ea5;
case 0x547eaa:c.instructions+=1;goto B547eaa;
case 0x547eaf:goto L547eaf;
case 0x547eb2:c.instructions+=3;goto B547eb2;
case 0x547eb3:c.instructions+=2;goto B547eb3;
case 0x547eb4:c.instructions+=1;goto B547eb4;
case 0x547eb9:goto L547eb9;
case 0x547ebc:c.instructions+=14;goto B547ebc;
case 0x547ec0:c.instructions+=13;goto B547ec0;
case 0x547ec3:c.instructions+=12;goto B547ec3;
case 0x547ec6:c.instructions+=11;goto B547ec6;
case 0x547ec7:c.instructions+=10;goto B547ec7;
case 0x547ecb:c.instructions+=9;goto B547ecb;
case 0x547ed1:c.instructions+=8;goto B547ed1;
case 0x547ed2:c.instructions+=7;goto B547ed2;
case 0x547ed4:c.instructions+=6;goto B547ed4;
case 0x547edc:c.instructions+=5;goto B547edc;
case 0x547ee0:c.instructions+=4;goto B547ee0;
case 0x547ee8:c.instructions+=3;goto B547ee8;
case 0x547ef0:c.instructions+=2;goto B547ef0;
case 0x547ef8:c.instructions+=1;goto B547ef8;
case 0x547efd:goto L547efd;
case 0x547f02:c.instructions+=1;goto B547f02;
case 0x547f07:goto L547f07;
case 0x547f0a:c.instructions+=3;goto B547f0a;
case 0x547f0b:c.instructions+=2;goto B547f0b;
case 0x547f0c:c.instructions+=1;goto B547f0c;
case 0x547f11:goto L547f11;
case 0x547f14:c.instructions+=8;goto B547f14;
case 0x547f17:c.instructions+=7;goto B547f17;
case 0x547f1b:c.instructions+=6;goto B547f1b;
case 0x547f1c:c.instructions+=5;goto B547f1c;
case 0x547f1f:c.instructions+=4;goto B547f1f;
case 0x547f20:c.instructions+=3;goto B547f20;
case 0x547f21:c.instructions+=2;goto B547f21;
case 0x547f24:c.instructions+=1;goto B547f24;
case 0x547f30:goto L547f30;
case 0x547f31:c.instructions+=5;goto B547f31;
case 0x547f33:c.instructions+=4;goto B547f33;
case 0x547f36:c.instructions+=3;goto B547f36;
case 0x547f39:c.instructions+=2;goto B547f39;
case 0x547f3b:c.instructions+=1;goto B547f3b;
case 0x547f41:goto L547f41;
case 0x547f42:c.instructions+=4;goto B547f42;
case 0x547f43:c.instructions+=3;goto B547f43;
case 0x547f46:c.instructions+=2;goto B547f46;
case 0x547f48:c.instructions+=1;goto B547f48;
case 0x547f4a:goto L547f4a;
case 0x547f4d:c.instructions+=2;goto B547f4d;
case 0x547f52:c.instructions+=1;goto B547f52;
case 0x547f57:goto L547f57;
case 0x547f59:c.instructions+=3;goto B547f59;
case 0x547f5c:c.instructions+=2;goto B547f5c;
case 0x547f5f:c.instructions+=1;goto B547f5f;
case 0x547f61:goto L547f61;
case 0x547f63:c.instructions+=2;goto B547f63;
case 0x547f68:c.instructions+=1;goto B547f68;
case 0x547f6d:goto L547f6d;
case 0x547f6e:c.instructions+=3;goto B547f6e;
case 0x547f73:c.instructions+=2;goto B547f73;
case 0x547f74:c.instructions+=1;goto B547f74;
case 0x547f79:goto L547f79;
case 0x547f7b:goto L547f7b;
case 0x547f80:goto L547f80;
case 0x547f81:c.instructions+=3;goto B547f81;
case 0x547f86:c.instructions+=2;goto B547f86;
case 0x547f87:c.instructions+=1;goto B547f87;
case 0x547f8c:goto L547f8c;
case 0x547f8f:goto L547f8f;
case 0x547f92:c.instructions+=1;goto B547f92;
case 0x547f97:goto L547f97;
case 0x547f98:c.instructions+=6;goto B547f98;
case 0x547f9e:c.instructions+=5;goto B547f9e;
case 0x547f9f:c.instructions+=4;goto B547f9f;
case 0x547fa4:c.instructions+=3;goto B547fa4;
case 0x547fa5:c.instructions+=2;goto B547fa5;
case 0x547fab:c.instructions+=1;goto B547fab;
case 0x547fb0:goto L547fb0;
case 0x547fb6:c.instructions+=1;goto B547fb6;
case 0x547fb8:goto L547fb8;
case 0x547fbe:c.instructions+=1;goto B547fbe;
case 0x547fc0:goto L547fc0;
case 0x547fc2:c.instructions+=1;goto B547fc2;
case 0x547fc4:goto L547fc4;
case 0x547fc7:c.instructions+=7;goto B547fc7;
case 0x547fcd:c.instructions+=6;goto B547fcd;
case 0x547fd0:c.instructions+=5;goto B547fd0;
case 0x547fd3:c.instructions+=4;goto B547fd3;
case 0x547fd4:c.instructions+=3;goto B547fd4;
case 0x547fd5:c.instructions+=2;goto B547fd5;
case 0x547fda:c.instructions+=1;goto B547fda;
case 0x547fdf:goto L547fdf;
case 0x547fe0:c.instructions+=4;goto B547fe0;
case 0x547fe5:c.instructions+=3;goto B547fe5;
case 0x547fea:c.instructions+=2;goto B547fea;
case 0x547feb:c.instructions+=1;goto B547feb;
case 0x547ff0:goto L547ff0;
case 0x547ff3:c.instructions+=4;goto B547ff3;
case 0x547ff4:c.instructions+=3;goto B547ff4;
case 0x547ff5:c.instructions+=2;goto B547ff5;
case 0x547ff6:c.instructions+=1;goto B547ff6;
case 0x547ff7:goto L547ff7;
case 0x547ffa:c.instructions+=2;goto B547ffa;
case 0x547fff:c.instructions+=1;goto B547fff;
default:missing_instruction(c.pc);}
B547004:L547004:{c.instructions+=1;NFSU2_TR(0x547004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547009ull));
TAIL_STATIC(0x514280u,514);
}
B547009:L547009:{c.instructions+=5;NFSU2_TR(0x547009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54700a:{NFSU2_TR(0x54700a);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54700f:{NFSU2_TR(0x54700f);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547014:{NFSU2_TR(0x547014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547015:{NFSU2_TR(0x547015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54701aull));
TAIL_STATIC(0x537b80u,537);
}
B54701a:L54701a:{c.instructions+=2;NFSU2_TR(0x54701a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54701d:{NFSU2_TR(0x54701d);
{goto L547065;}
}
B54701f:L54701f:{c.instructions+=5;NFSU2_TR(0x54701f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547022:{NFSU2_TR(0x547022);
u8 U[4];
w4(U+0,u32(0x7980ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547027:{NFSU2_TR(0x547027);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54702c:{NFSU2_TR(0x54702c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54702d:{NFSU2_TR(0x54702d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547032ull));
TAIL_STATIC(0x537b80u,537);
}
B547032:L547032:{c.instructions+=2;NFSU2_TR(0x547032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547035:{NFSU2_TR(0x547035);
{goto L547065;}
}
B547037:L547037:{c.instructions+=1;NFSU2_TR(0x547037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54703cull));
TAIL_STATIC(0x4954e0u,495);
}
B54703c:L54703c:{c.instructions+=2;NFSU2_TR(0x54703c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54703f:{NFSU2_TR(0x54703f);
{goto L547065;}
}
B547041:L547041:{c.instructions+=4;NFSU2_TR(0x547041);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547044:{NFSU2_TR(0x547044);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547049:{NFSU2_TR(0x547049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54704a:{NFSU2_TR(0x54704a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54704full));
TAIL_STATIC(0x4954e0u,495);
}
B54704f:L54704f:{c.instructions+=5;NFSU2_TR(0x54704f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547052:{NFSU2_TR(0x547052);
u8 U[4];
w4(U+0,u32(0x2b5abcf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547057:{NFSU2_TR(0x547057);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54705c:{NFSU2_TR(0x54705c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54705d:{NFSU2_TR(0x54705d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547062ull));
TAIL_STATIC(0x495460u,495);
}
B547062:L547062:{c.instructions+=1;NFSU2_TR(0x547062);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B547065:L547065:{c.instructions+=2;NFSU2_TR(0x547065);
w4(R+4,u32(0x838980ull));
}
B54706a:{NFSU2_TR(0x54706a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54706full));
TAIL_STATIC(0x521530u,521);
}
B54706f:L54706f:{c.instructions+=6;NFSU2_TR(0x54706f);
__builtin_memmove((R+8),gp(0x7fa1e0),4);
}
B547075:{NFSU2_TR(0x547075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547076:{NFSU2_TR(0x547076);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54707b:{NFSU2_TR(0x54707b);
u8 U[4];
w4(U+0,u32(0x2f5e7da3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547080:{NFSU2_TR(0x547080);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547081:{NFSU2_TR(0x547081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547086ull));
TAIL_STATIC(0x537b80u,537);
}
B547086:L547086:{c.instructions+=4;NFSU2_TR(0x547086);
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
B547089:{NFSU2_TR(0x547089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54708a:{NFSU2_TR(0x54708a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54708b:{NFSU2_TR(0x54708b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547090:L547090:{c.instructions+=4;NFSU2_TR(0x547090);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547094:{NFSU2_TR(0x547094);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547096:{NFSU2_TR(0x547096);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54709b:{NFSU2_TR(0x54709b);
if(r1(R+518)){{goto L5470bf;}}
}
B54709d:L54709d:{c.instructions+=3;NFSU2_TR(0x54709d);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B5470a2:{NFSU2_TR(0x5470a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470a3:{NFSU2_TR(0x5470a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5470a8ull));
TAIL_STATIC(0x495520u,495);
}
B5470a8:L5470a8:{c.instructions+=4;NFSU2_TR(0x5470a8);
__builtin_memmove((R+4),gp(0x7fa1c0),4);
}
B5470ae:{NFSU2_TR(0x5470ae);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470b3:{NFSU2_TR(0x5470b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470b4:{NFSU2_TR(0x5470b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5470b9ull));
TAIL_STATIC(0x495520u,495);
}
B5470b9:L5470b9:{c.instructions+=2;NFSU2_TR(0x5470b9);
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
B5470bc:{NFSU2_TR(0x5470bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5470bf:L5470bf:{c.instructions+=3;NFSU2_TR(0x5470bf);
__builtin_memmove((R+8),gp(0x7fa1c0),4);
}
B5470c5:{NFSU2_TR(0x5470c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470c6:{NFSU2_TR(0x5470c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5470cbull));
TAIL_STATIC(0x4954e0u,495);
}
B5470cb:L5470cb:{c.instructions+=4;NFSU2_TR(0x5470cb);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B5470d0:{NFSU2_TR(0x5470d0);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470d5:{NFSU2_TR(0x5470d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470d6:{NFSU2_TR(0x5470d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5470dbull));
TAIL_STATIC(0x4954e0u,495);
}
B5470db:L5470db:{c.instructions+=2;NFSU2_TR(0x5470db);
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
B5470de:{NFSU2_TR(0x5470de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5470f0:L5470f0:{c.instructions+=4;NFSU2_TR(0x5470f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470f1:{NFSU2_TR(0x5470f1);
u8 U[4];
w4(U+0,u32(0x790038ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5470f6:{NFSU2_TR(0x5470f6);
__builtin_memmove((R+24),(R+4),4);
}
B5470f8:{NFSU2_TR(0x5470f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5470fdull));
TAIL_STATIC(0x52cf60u,52c);
}
B5470fd:L5470fd:{c.instructions+=3;NFSU2_TR(0x5470fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547100:{NFSU2_TR(0x547100);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547102:{NFSU2_TR(0x547102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5471c1;}}
}
B547108:L547108:{c.instructions+=6;NFSU2_TR(0x547108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54710b:{NFSU2_TR(0x54710b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54710d:{NFSU2_TR(0x54710d);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547112:{NFSU2_TR(0x547112);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547117:{NFSU2_TR(0x547117);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547118:{NFSU2_TR(0x547118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54711dull));
TAIL_STATIC(0x537c00u,537);
}
B54711d:L54711d:{c.instructions+=6;NFSU2_TR(0x54711d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547120:{NFSU2_TR(0x547120);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547122:{NFSU2_TR(0x547122);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547127:{NFSU2_TR(0x547127);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54712c:{NFSU2_TR(0x54712c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54712d:{NFSU2_TR(0x54712d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547132ull));
TAIL_STATIC(0x537c00u,537);
}
B547132:L547132:{c.instructions+=6;NFSU2_TR(0x547132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547135:{NFSU2_TR(0x547135);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547137:{NFSU2_TR(0x547137);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54713c:{NFSU2_TR(0x54713c);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547141:{NFSU2_TR(0x547141);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547142:{NFSU2_TR(0x547142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547147ull));
TAIL_STATIC(0x537c00u,537);
}
B547147:L547147:{c.instructions+=4;NFSU2_TR(0x547147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54714a:{NFSU2_TR(0x54714a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B54714d:{NFSU2_TR(0x54714d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54714f:{NFSU2_TR(0x54714f);
if(r1(R+518)){{goto L547156;}}
}
B547151:L547151:{c.instructions+=2;NFSU2_TR(0x547151);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B547154:{NFSU2_TR(0x547154);
{goto L547158;}
}
B547156:L547156:{c.instructions+=1;NFSU2_TR(0x547156);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547158:L547158:{c.instructions+=2;NFSU2_TR(0x547158);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54715b:{NFSU2_TR(0x54715b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547176;}}
}
B54715d:L54715d:{c.instructions+=4;NFSU2_TR(0x54715d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547160:{NFSU2_TR(0x547160);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547165:{NFSU2_TR(0x547165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547166:{NFSU2_TR(0x547166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54716bull));
TAIL_STATIC(0x4954e0u,495);
}
B54716b:L54716b:{c.instructions+=4;NFSU2_TR(0x54716b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54716e:{NFSU2_TR(0x54716e);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547173:{NFSU2_TR(0x547173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547174:{NFSU2_TR(0x547174);
{goto L5471b9;}
}
B547176:L547176:{c.instructions+=3;NFSU2_TR(0x547176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547179:{NFSU2_TR(0x547179);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54717b:{NFSU2_TR(0x54717b);
if(r1(R+518)){{goto L547182;}}
}
B54717d:L54717d:{c.instructions+=2;NFSU2_TR(0x54717d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B547180:{NFSU2_TR(0x547180);
{goto L547184;}
}
B547182:L547182:{c.instructions+=1;NFSU2_TR(0x547182);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547184:L547184:{c.instructions+=3;NFSU2_TR(0x547184);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B547187:{NFSU2_TR(0x547187);
u8 U[4];
w4(U+0,u32(0x26f1f64bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54718c:{NFSU2_TR(0x54718c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5471a7;}}
}
B54718e:L54718e:{c.instructions+=3;NFSU2_TR(0x54718e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547191:{NFSU2_TR(0x547191);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547192:{NFSU2_TR(0x547192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547197ull));
TAIL_STATIC(0x495520u,495);
}
B547197:L547197:{c.instructions+=4;NFSU2_TR(0x547197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54719a:{NFSU2_TR(0x54719a);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54719f:{NFSU2_TR(0x54719f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471a0:{NFSU2_TR(0x5471a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5471a5ull));
TAIL_STATIC(0x4954e0u,495);
}
B5471a5:L5471a5:{c.instructions+=1;NFSU2_TR(0x5471a5);
{goto L5471be;}
}
B5471a7:L5471a7:{c.instructions+=3;NFSU2_TR(0x5471a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5471aa:{NFSU2_TR(0x5471aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471ab:{NFSU2_TR(0x5471ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5471b0ull));
TAIL_STATIC(0x495520u,495);
}
B5471b0:L5471b0:{c.instructions+=3;NFSU2_TR(0x5471b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5471b3:{NFSU2_TR(0x5471b3);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471b8:{NFSU2_TR(0x5471b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471b9:L5471b9:{c.instructions+=1;NFSU2_TR(0x5471b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5471beull));
TAIL_STATIC(0x495520u,495);
}
B5471be:L5471be:{c.instructions+=1;NFSU2_TR(0x5471be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5471c1:L5471c1:{c.instructions+=4;NFSU2_TR(0x5471c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471c2:{NFSU2_TR(0x5471c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5471c5:{NFSU2_TR(0x5471c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5471c7:{NFSU2_TR(0x5471c7);
if(r1(R+518)){{goto L54722e;}}
}
B5471c9:L5471c9:{c.instructions+=3;NFSU2_TR(0x5471c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5471cc:{NFSU2_TR(0x5471cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x23ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5471cf:{NFSU2_TR(0x5471cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L547219;}}
}
B5471d1:L5471d1:{c.instructions+=2;NFSU2_TR(0x5471d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5471d4:{NFSU2_TR(0x5471d4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L547219;}}
}
B5471d6:L5471d6:{c.instructions+=5;NFSU2_TR(0x5471d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5471d9:{NFSU2_TR(0x5471d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5471db:{NFSU2_TR(0x5471db);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5471de:{NFSU2_TR(0x5471de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471df:{NFSU2_TR(0x5471df);
if(r1(R+518)){{goto L5471eb;}}
}
B5471e1:L5471e1:{c.instructions+=2;NFSU2_TR(0x5471e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5471e2:{NFSU2_TR(0x5471e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5471e7ull));
TAIL_STATIC(0x51f820u,51f);
}
B5471e7:L5471e7:{c.instructions+=2;NFSU2_TR(0x5471e7);
__builtin_memmove((R+12),(R+0),4);
}
B5471e9:{NFSU2_TR(0x5471e9);
{goto L5471ed;}
}
B5471eb:L5471eb:{c.instructions+=1;NFSU2_TR(0x5471eb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5471ed:L5471ed:{c.instructions+=2;NFSU2_TR(0x5471ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5471f0:{NFSU2_TR(0x5471f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5471f5ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5471f5:L5471f5:{c.instructions+=2;NFSU2_TR(0x5471f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5471f7:{NFSU2_TR(0x5471f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547203;}}
}
B5471f9:L5471f9:{c.instructions+=2;NFSU2_TR(0x5471f9);
w4(R+8,u32(0xc01a6f63ull));
}
B5471fe:{NFSU2_TR(0x5471fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547203ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B547203:L547203:{c.instructions+=6;NFSU2_TR(0x547203);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547204:{NFSU2_TR(0x547204);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547205:{NFSU2_TR(0x547205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547208:{NFSU2_TR(0x547208);
u8 U[4];
w4(U+0,u32(0x5e7b09c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54720d:{NFSU2_TR(0x54720d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54720e:{NFSU2_TR(0x54720e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547213ull));
TAIL_STATIC(0x537b80u,537);
}
B547213:L547213:{c.instructions+=3;NFSU2_TR(0x547213);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B547216:{NFSU2_TR(0x547216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547217:{NFSU2_TR(0x547217);
{goto L54722e;}
}
B547219:L547219:{c.instructions+=6;NFSU2_TR(0x547219);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54721c:{NFSU2_TR(0x54721c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54721f:{NFSU2_TR(0x54721f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547220:{NFSU2_TR(0x547220);
u8 U[4];
w4(U+0,u32(0x5e7b09c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547225:{NFSU2_TR(0x547225);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547226:{NFSU2_TR(0x547226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54722bull));
TAIL_STATIC(0x495460u,495);
}
B54722b:L54722b:{c.instructions+=1;NFSU2_TR(0x54722b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54722e:L54722e:{c.instructions+=3;NFSU2_TR(0x54722e);
u8 U[14];
__builtin_memmove((U+6),gp(0x83898c),4);
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
B547235:{NFSU2_TR(0x547235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547236:{NFSU2_TR(0x547236);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54724e;}}
}
B547238:L547238:{c.instructions+=5;NFSU2_TR(0x547238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54723b:{NFSU2_TR(0x54723b);
u8 U[4];
w4(U+0,u32(0xf4b3b4fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547240:{NFSU2_TR(0x547240);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547245:{NFSU2_TR(0x547245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547246:{NFSU2_TR(0x547246);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54724bull));
TAIL_STATIC(0x495460u,495);
}
B54724b:L54724b:{c.instructions+=1;NFSU2_TR(0x54724b);
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
B54724e:L54724e:{c.instructions+=2;NFSU2_TR(0x54724e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54724f:{NFSU2_TR(0x54724f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547250:L547250:{c.instructions+=6;NFSU2_TR(0x547250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547251:{NFSU2_TR(0x547251);
__builtin_memmove((R+24),(R+4),4);
}
B547253:{NFSU2_TR(0x547253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547256:{NFSU2_TR(0x547256);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B547259:{NFSU2_TR(0x547259);
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
B54725b:{NFSU2_TR(0x54725b);
if(r1(R+518)){{goto L54732d;}}
}
B547261:L547261:{c.instructions+=5;NFSU2_TR(0x547261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547262:{NFSU2_TR(0x547262);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547263:{NFSU2_TR(0x547263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547266:{NFSU2_TR(0x547266);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547268:{NFSU2_TR(0x547268);
if(r1(R+518)){{goto L5472b2;}}
}
B54726a:L54726a:{c.instructions+=3;NFSU2_TR(0x54726a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54726d:{NFSU2_TR(0x54726d);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547272:{NFSU2_TR(0x547272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547277ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B547277:L547277:{c.instructions+=3;NFSU2_TR(0x547277);
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
B547279:{NFSU2_TR(0x547279);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54727c:{NFSU2_TR(0x54727c);
if(r1(R+518)){{goto L54729b;}}
}
B54727e:L54727e:{c.instructions+=3;NFSU2_TR(0x54727e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547280:{NFSU2_TR(0x547280);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547285:{NFSU2_TR(0x547285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54728aull));
TAIL_STATIC(0x61b500u,61b);
}
B54728a:L54728a:{c.instructions+=5;NFSU2_TR(0x54728a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54728b:{NFSU2_TR(0x54728b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54728e:{NFSU2_TR(0x54728e);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547293:{NFSU2_TR(0x547293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547294:{NFSU2_TR(0x547294);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547299ull));
TAIL_STATIC(0x495460u,495);
}
B547299:L547299:{c.instructions+=1;NFSU2_TR(0x547299);
{goto L5472af;}
}
B54729b:L54729b:{c.instructions+=2;NFSU2_TR(0x54729b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54729e:{NFSU2_TR(0x54729e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5472a3ull));
TAIL_STATIC(0x610000u,610);
}
B5472a3:L5472a3:{c.instructions+=4;NFSU2_TR(0x5472a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472a4:{NFSU2_TR(0x5472a4);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472a9:{NFSU2_TR(0x5472a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472aa:{NFSU2_TR(0x5472aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5472afull));
TAIL_STATIC(0x537b80u,537);
}
B5472af:L5472af:{c.instructions+=1;NFSU2_TR(0x5472af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5472b2:L5472b2:{c.instructions+=2;NFSU2_TR(0x5472b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5472b5:{NFSU2_TR(0x5472b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5472baull));
TAIL_STATIC(0x51f7e0u,51f);
}
B5472ba:L5472ba:{c.instructions+=7;NFSU2_TR(0x5472ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5472c0:{NFSU2_TR(0x5472c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472c1:{NFSU2_TR(0x5472c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472c2:{NFSU2_TR(0x5472c2);
w4(R+12,u32(0x1ull));
}
B5472c7:{NFSU2_TR(0x5472c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472c8:{NFSU2_TR(0x5472c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5472ce:{NFSU2_TR(0x5472ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5472d3ull));
TAIL_STATIC(0x538080u,538);
}
B5472d3:L5472d3:{c.instructions+=2;NFSU2_TR(0x5472d3);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5472d9:{NFSU2_TR(0x5472d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54731a;}}
}
B5472db:L5472db:{c.instructions+=2;NFSU2_TR(0x5472db);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5472e1:{NFSU2_TR(0x5472e1);
if(r1(R+518)){{goto L54731a;}}
}
B5472e3:L5472e3:{c.instructions+=2;NFSU2_TR(0x5472e3);
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
B5472e5:{NFSU2_TR(0x5472e5);
if(r1(R+518)){{goto L54732b;}}
}
B5472e7:L5472e7:{c.instructions+=8;NFSU2_TR(0x5472e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5472ea:{NFSU2_TR(0x5472ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5472f0:{NFSU2_TR(0x5472f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5472f3:{NFSU2_TR(0x5472f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5472f6:{NFSU2_TR(0x5472f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472f7:{NFSU2_TR(0x5472f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5472f8:{NFSU2_TR(0x5472f8);
w4(R+4,u32(0x85ad40ull));
}
B5472fd:{NFSU2_TR(0x5472fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547302ull));
TAIL_STATIC(0x514280u,514);
}
B547302:L547302:{c.instructions+=5;NFSU2_TR(0x547302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547303:{NFSU2_TR(0x547303);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547308:{NFSU2_TR(0x547308);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54730d:{NFSU2_TR(0x54730d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54730e:{NFSU2_TR(0x54730e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547313ull));
TAIL_STATIC(0x537b80u,537);
}
B547313:L547313:{c.instructions+=5;NFSU2_TR(0x547313);
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
B547316:{NFSU2_TR(0x547316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547317:{NFSU2_TR(0x547317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547318:{NFSU2_TR(0x547318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547319:{NFSU2_TR(0x547319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54731a:L54731a:{c.instructions+=4;NFSU2_TR(0x54731a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54731d:{NFSU2_TR(0x54731d);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547322:{NFSU2_TR(0x547322);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547323:{NFSU2_TR(0x547323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547328ull));
TAIL_STATIC(0x4954e0u,495);
}
B547328:L547328:{c.instructions+=1;NFSU2_TR(0x547328);
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
B54732b:L54732b:{c.instructions+=2;NFSU2_TR(0x54732b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54732c:{NFSU2_TR(0x54732c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54732d:L54732d:{c.instructions+=2;NFSU2_TR(0x54732d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54732e:{NFSU2_TR(0x54732e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547330:L547330:{c.instructions+=5;NFSU2_TR(0x547330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547331:{NFSU2_TR(0x547331);
__builtin_memmove((R+24),(R+4),4);
}
B547333:{NFSU2_TR(0x547333);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547334:{NFSU2_TR(0x547334);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54733a:{NFSU2_TR(0x54733a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54733full));
TAIL_STATIC(0x51f7e0u,51f);
}
B54733f:L54733f:{c.instructions+=6;NFSU2_TR(0x54733f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547340:{NFSU2_TR(0x547340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547346:{NFSU2_TR(0x547346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547347:{NFSU2_TR(0x547347);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547349:{NFSU2_TR(0x547349);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54734f:{NFSU2_TR(0x54734f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547354ull));
TAIL_STATIC(0x538080u,538);
}
B547354:L547354:{c.instructions+=6;NFSU2_TR(0x547354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547357:{NFSU2_TR(0x547357);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54735a:{NFSU2_TR(0x54735a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54735d:{NFSU2_TR(0x54735d);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547362:{NFSU2_TR(0x547362);
__builtin_memmove((R+4),(R+28),4);
}
B547364:{NFSU2_TR(0x547364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547369ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B547369:L547369:{c.instructions+=3;NFSU2_TR(0x547369);
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
B54736b:{NFSU2_TR(0x54736b);
__builtin_memmove((R+4),(R+28),4);
}
B54736d:{NFSU2_TR(0x54736d);
if(r1(R+518)){{goto L54738d;}}
}
B54736f:L54736f:{c.instructions+=3;NFSU2_TR(0x54736f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547371:{NFSU2_TR(0x547371);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547376:{NFSU2_TR(0x547376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54737bull));
TAIL_STATIC(0x61b500u,61b);
}
B54737b:L54737b:{c.instructions+=4;NFSU2_TR(0x54737b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54737c:{NFSU2_TR(0x54737c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547382:{NFSU2_TR(0x547382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547383:{NFSU2_TR(0x547383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547388ull));
TAIL_STATIC(0x50c900u,50c);
}
B547388:L547388:{c.instructions+=2;NFSU2_TR(0x547388);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54738b:{NFSU2_TR(0x54738b);
{goto L5473a7;}
}
B54738d:L54738d:{c.instructions+=1;NFSU2_TR(0x54738d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547392ull));
TAIL_STATIC(0x610000u,610);
}
B547392:L547392:{c.instructions+=5;NFSU2_TR(0x547392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547398:{NFSU2_TR(0x547398);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547399:{NFSU2_TR(0x547399);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54739e:{NFSU2_TR(0x54739e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54739f:{NFSU2_TR(0x54739f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5473a4ull));
TAIL_STATIC(0x537be0u,537);
}
B5473a4:L5473a4:{c.instructions+=1;NFSU2_TR(0x5473a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5473a7:L5473a7:{c.instructions+=4;NFSU2_TR(0x5473a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5473ad:{NFSU2_TR(0x5473ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5473b3:{NFSU2_TR(0x5473b3);
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
B5473b5:{NFSU2_TR(0x5473b5);
if(r1(R+518)){{goto L547461;}}
}
B5473bb:L5473bb:{c.instructions+=6;NFSU2_TR(0x5473bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5473c1:{NFSU2_TR(0x5473c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5473c4:{NFSU2_TR(0x5473c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473c5:{NFSU2_TR(0x5473c5);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473ca:{NFSU2_TR(0x5473ca);
__builtin_memmove((R+4),(R+28),4);
}
B5473cc:{NFSU2_TR(0x5473cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5473d1ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B5473d1:L5473d1:{c.instructions+=6;NFSU2_TR(0x5473d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5473d3:{NFSU2_TR(0x5473d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5473d6:{NFSU2_TR(0x5473d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473d8:{NFSU2_TR(0x5473d8);
__builtin_memmove((R+4),(R+28),4);
}
B5473da:{NFSU2_TR(0x5473da);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473df:{NFSU2_TR(0x5473df);
if(r1(R+518)){{goto L5473fa;}}
}
B5473e1:L5473e1:{c.instructions+=1;NFSU2_TR(0x5473e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5473e6ull));
TAIL_STATIC(0x61b500u,61b);
}
B5473e6:L5473e6:{c.instructions+=6;NFSU2_TR(0x5473e6);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B5473e9:{NFSU2_TR(0x5473e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473ea:{NFSU2_TR(0x5473ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473ec:{NFSU2_TR(0x5473ec);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5473f1:{NFSU2_TR(0x5473f1);
__builtin_memmove((R+4),(R+28),4);
}
B5473f3:{NFSU2_TR(0x5473f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5473f8ull));
TAIL_STATIC(0x61b500u,61b);
}
B5473f8:L5473f8:{c.instructions+=1;NFSU2_TR(0x5473f8);
{goto L54740a;}
}
B5473fa:L5473fa:{c.instructions+=1;NFSU2_TR(0x5473fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5473ffull));
TAIL_STATIC(0x61b500u,61b);
}
B5473ff:L5473ff:{c.instructions+=4;NFSU2_TR(0x5473ff);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B547402:{NFSU2_TR(0x547402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547403:{NFSU2_TR(0x547403);
__builtin_memmove((R+4),(R+28),4);
}
B547405:{NFSU2_TR(0x547405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54740aull));
TAIL_STATIC(0x610000u,610);
}
B54740a:L54740a:{c.instructions+=5;NFSU2_TR(0x54740a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54740b:{NFSU2_TR(0x54740b);
u8 U[4];
w4(U+0,u32(0x79c1c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547410:{NFSU2_TR(0x547410);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547415:{NFSU2_TR(0x547415);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547416:{NFSU2_TR(0x547416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54741bull));
TAIL_STATIC(0x537b80u,537);
}
B54741b:L54741b:{c.instructions+=5;NFSU2_TR(0x54741b);
__builtin_memmove((R+0),gp(0x850078),4);
}
B547420:{NFSU2_TR(0x547420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B547423:{NFSU2_TR(0x547423);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547426:{NFSU2_TR(0x547426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547427:{NFSU2_TR(0x547427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547450;}}
}
B547429:L547429:{c.instructions+=5;NFSU2_TR(0x547429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54742c:{NFSU2_TR(0x54742c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54742d:{NFSU2_TR(0x54742d);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54742f:{NFSU2_TR(0x54742f);
w4(R+4,u32(0x85ad40ull));
}
B547434:{NFSU2_TR(0x547434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547439ull));
TAIL_STATIC(0x514280u,514);
}
B547439:L547439:{c.instructions+=5;NFSU2_TR(0x547439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54743a:{NFSU2_TR(0x54743a);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54743f:{NFSU2_TR(0x54743f);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547444:{NFSU2_TR(0x547444);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547445:{NFSU2_TR(0x547445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54744aull));
TAIL_STATIC(0x537b80u,537);
}
B54744a:L54744a:{c.instructions+=4;NFSU2_TR(0x54744a);
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
B54744d:{NFSU2_TR(0x54744d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54744e:{NFSU2_TR(0x54744e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54744f:{NFSU2_TR(0x54744f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547450:L547450:{c.instructions+=4;NFSU2_TR(0x547450);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547453:{NFSU2_TR(0x547453);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547458:{NFSU2_TR(0x547458);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547459:{NFSU2_TR(0x547459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54745eull));
TAIL_STATIC(0x4954e0u,495);
}
B54745e:L54745e:{c.instructions+=1;NFSU2_TR(0x54745e);
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
B547461:L547461:{c.instructions+=3;NFSU2_TR(0x547461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547462:{NFSU2_TR(0x547462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547463:{NFSU2_TR(0x547463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547470:L547470:{c.instructions+=8;NFSU2_TR(0x547470);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547471:{NFSU2_TR(0x547471);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547472:{NFSU2_TR(0x547472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547473:{NFSU2_TR(0x547473);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547474:{NFSU2_TR(0x547474);
__builtin_memmove((R+28),(R+4),4);
}
B547476:{NFSU2_TR(0x547476);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+20),(U+0),4);
}
B547479:{NFSU2_TR(0x547479);
w4(R+24,u32(0x23ull));
}
B54747e:{NFSU2_TR(0x54747e);
w4(R+12,u32(0xcull));
}
B547483:L547483:{c.instructions+=3;NFSU2_TR(0x547483);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547484:{NFSU2_TR(0x547484);
__builtin_memmove((R+4),(R+28),4);
}
B547486:{NFSU2_TR(0x547486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54748bull));
TAIL_STATIC(0x53aea0u,53a);
}
B54748b:L54748b:{c.instructions+=4;NFSU2_TR(0x54748b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54748c:{NFSU2_TR(0x54748c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54748d:{NFSU2_TR(0x54748d);
__builtin_memmove((R+4),(R+20),4);
}
B54748f:{NFSU2_TR(0x54748f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547494ull));
TAIL_STATIC(0x631d20u,631);
}
B547494:L547494:{c.instructions+=3;NFSU2_TR(0x547494);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B547495:{NFSU2_TR(0x547495);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547496:{NFSU2_TR(0x547496);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547483u);}goto L547483;}}
}
B547498:L547498:{c.instructions+=5;NFSU2_TR(0x547498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547499:{NFSU2_TR(0x547499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54749a:{NFSU2_TR(0x54749a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54749b:{NFSU2_TR(0x54749b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54749c:{NFSU2_TR(0x54749c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5474a0:L5474a0:{c.instructions+=8;NFSU2_TR(0x5474a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474a1:{NFSU2_TR(0x5474a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474a2:{NFSU2_TR(0x5474a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474a3:{NFSU2_TR(0x5474a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474a4:{NFSU2_TR(0x5474a4);
__builtin_memmove((R+28),(R+4),4);
}
B5474a6:{NFSU2_TR(0x5474a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5474ac:{NFSU2_TR(0x5474ac);
w4(R+24,u32(0x23ull));
}
B5474b1:{NFSU2_TR(0x5474b1);
w4(R+12,u32(0xcull));
}
B5474b6:L5474b6:{c.instructions+=3;NFSU2_TR(0x5474b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474b7:{NFSU2_TR(0x5474b7);
__builtin_memmove((R+4),(R+28),4);
}
B5474b9:{NFSU2_TR(0x5474b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5474beull));
TAIL_STATIC(0x53aea0u,53a);
}
B5474be:L5474be:{c.instructions+=4;NFSU2_TR(0x5474be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474bf:{NFSU2_TR(0x5474bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474c0:{NFSU2_TR(0x5474c0);
__builtin_memmove((R+4),(R+20),4);
}
B5474c2:{NFSU2_TR(0x5474c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5474c7ull));
TAIL_STATIC(0x631d20u,631);
}
B5474c7:L5474c7:{c.instructions+=3;NFSU2_TR(0x5474c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5474c8:{NFSU2_TR(0x5474c8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5474c9:{NFSU2_TR(0x5474c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5474b6u);}goto L5474b6;}}
}
B5474cb:L5474cb:{c.instructions+=5;NFSU2_TR(0x5474cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5474cc:{NFSU2_TR(0x5474cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5474cd:{NFSU2_TR(0x5474cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5474ce:{NFSU2_TR(0x5474ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5474cf:{NFSU2_TR(0x5474cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5474d0:L5474d0:{c.instructions+=4;NFSU2_TR(0x5474d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474d1:{NFSU2_TR(0x5474d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5474d5:{NFSU2_TR(0x5474d5);
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
B5474d7:{NFSU2_TR(0x5474d7);
if(r1(R+518)){{goto L547531;}}
}
B5474d9:L5474d9:{c.instructions+=4;NFSU2_TR(0x5474d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474da:{NFSU2_TR(0x5474da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5474de:{NFSU2_TR(0x5474de);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x4dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5474e1:{NFSU2_TR(0x5474e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L547530;}}
}
B5474e3:L5474e3:{c.instructions+=2;NFSU2_TR(0x5474e3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x5cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5474e6:{NFSU2_TR(0x5474e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L547530;}}
}
B5474e8:L5474e8:{c.instructions+=5;NFSU2_TR(0x5474e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5474eb:{NFSU2_TR(0x5474eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474ec:{NFSU2_TR(0x5474ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5474ef:{NFSU2_TR(0x5474ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5474f1:{NFSU2_TR(0x5474f1);
if(r1(R+518)){{goto L5474f9;}}
}
B5474f3:L5474f3:{c.instructions+=2;NFSU2_TR(0x5474f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474f4:{NFSU2_TR(0x5474f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5474f9ull));
TAIL_STATIC(0x53b270u,53b);
}
B5474f9:L5474f9:{c.instructions+=2;NFSU2_TR(0x5474f9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5474fb:{NFSU2_TR(0x5474fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547500ull));
TAIL_STATIC(0x575620u,575);
}
B547500:L547500:{c.instructions+=3;NFSU2_TR(0x547500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547503:{NFSU2_TR(0x547503);
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
B547505:{NFSU2_TR(0x547505);
if(r1(R+518)){{goto L547520;}}
}
B547507:L547507:{c.instructions+=11;NFSU2_TR(0x547507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54750a:{NFSU2_TR(0x54750a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54750d:{NFSU2_TR(0x54750d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547510:{NFSU2_TR(0x547510);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B547512:{NFSU2_TR(0x547512);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547515:{NFSU2_TR(0x547515);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B547517:{NFSU2_TR(0x547517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547518:{NFSU2_TR(0x547518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547519:{NFSU2_TR(0x547519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54751c:{NFSU2_TR(0x54751c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54751d:{NFSU2_TR(0x54751d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547520:L547520:{c.instructions+=7;NFSU2_TR(0x547520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547523:{NFSU2_TR(0x547523);
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
B547525:{NFSU2_TR(0x547525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B547527:{NFSU2_TR(0x547527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54752a:{NFSU2_TR(0x54752a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54752c:{NFSU2_TR(0x54752c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54752f:{NFSU2_TR(0x54752f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547530:L547530:{c.instructions+=1;NFSU2_TR(0x547530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547531:L547531:{c.instructions+=2;NFSU2_TR(0x547531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547532:{NFSU2_TR(0x547532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547540:L547540:{c.instructions+=5;NFSU2_TR(0x547540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547541:{NFSU2_TR(0x547541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547542:{NFSU2_TR(0x547542);
__builtin_memmove((R+28),(R+4),4);
}
B547544:{NFSU2_TR(0x547544);
w4(R+24,u32(0x40ull));
}
B547549:{NFSU2_TR(0x547549);
__builtin_memmove((R+16),(R+16),4);
}
B547550:L547550:{c.instructions+=3;NFSU2_TR(0x547550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547551:{NFSU2_TR(0x547551);
__builtin_memmove((R+4),(R+28),4);
}
B547553:{NFSU2_TR(0x547553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547558ull));
TAIL_STATIC(0x53b0e0u,53b);
}
B547558:L547558:{c.instructions+=3;NFSU2_TR(0x547558);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B547559:{NFSU2_TR(0x547559);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54755c:{NFSU2_TR(0x54755c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547550u);}goto L547550;}}
}
B54755e:L54755e:{c.instructions+=3;NFSU2_TR(0x54755e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54755f:{NFSU2_TR(0x54755f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547560:{NFSU2_TR(0x547560);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547570:L547570:{c.instructions+=7;NFSU2_TR(0x547570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B547573:{NFSU2_TR(0x547573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547574:{NFSU2_TR(0x547574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547575:{NFSU2_TR(0x547575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547576:{NFSU2_TR(0x547576);
__builtin_memmove((R+28),(R+4),4);
}
B547578:{NFSU2_TR(0x547578);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54757c:{NFSU2_TR(0x54757c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547581ull));
TAIL_STATIC(0x53b420u,53b);
}
B547581:L547581:{c.instructions+=2;NFSU2_TR(0x547581);
__builtin_memmove((R+4),(R+28),4);
}
B547583:{NFSU2_TR(0x547583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547588ull));
TAIL_STATIC(0x530160u,530);
}
B547588:L547588:{c.instructions+=5;NFSU2_TR(0x547588);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54758b:{NFSU2_TR(0x54758b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54758e:{NFSU2_TR(0x54758e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547590:{NFSU2_TR(0x547590);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547594:{NFSU2_TR(0x547594);
if(r1(R+518)){{goto L54775e;}}
}
B54759a:L54759a:{c.instructions+=1;NFSU2_TR(0x54759a);
{goto L5475a0;}
}
B54759c:L54759c:{c.instructions+=1;NFSU2_TR(0x54759c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5475a0:L5475a0:{c.instructions+=3;NFSU2_TR(0x5475a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5475a3:{NFSU2_TR(0x5475a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5475a6:{NFSU2_TR(0x5475a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5475f8;}}
}
B5475a8:L5475a8:{c.instructions+=2;NFSU2_TR(0x5475a8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5475ab:{NFSU2_TR(0x5475ab);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5475f8;}}
}
B5475ad:L5475ad:{c.instructions+=1;NFSU2_TR(0x5475ad);
w4(R+24,u32(0x40ull));
}
B5475b2:L5475b2:{c.instructions+=4;NFSU2_TR(0x5475b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5475b8:{NFSU2_TR(0x5475b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475b9:{NFSU2_TR(0x5475b9);
__builtin_memmove((R+4),(R+12),4);
}
B5475bb:{NFSU2_TR(0x5475bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5475c0ull));
TAIL_STATIC(0x6102f0u,610);
}
B5475c0:L5475c0:{c.instructions+=2;NFSU2_TR(0x5475c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5475c2:{NFSU2_TR(0x5475c2);
if(r1(R+518)){{goto L5475d7;}}
}
B5475c4:L5475c4:{c.instructions+=4;NFSU2_TR(0x5475c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475c6:{NFSU2_TR(0x5475c6);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475cb:{NFSU2_TR(0x5475cb);
__builtin_memmove((R+4),(R+0),4);
}
B5475cd:{NFSU2_TR(0x5475cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5475d2ull));
TAIL_STATIC(0x61b500u,61b);
}
B5475d2:L5475d2:{c.instructions+=2;NFSU2_TR(0x5475d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5475d5:{NFSU2_TR(0x5475d5);
if(r1(R+518)){{goto L5475df;}}
}
B5475d7:L5475d7:{c.instructions+=3;NFSU2_TR(0x5475d7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5475d8:{NFSU2_TR(0x5475d8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5475db:{NFSU2_TR(0x5475db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5475b2u);}goto L5475b2;}}
}
B5475dd:L5475dd:{c.instructions+=1;NFSU2_TR(0x5475dd);
{goto L5475f4;}
}
B5475df:L5475df:{c.instructions+=1;NFSU2_TR(0x5475df);
w4(R+24,u32(0x40ull));
}
B5475e4:L5475e4:{c.instructions+=4;NFSU2_TR(0x5475e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475e6:{NFSU2_TR(0x5475e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475e7:{NFSU2_TR(0x5475e7);
__builtin_memmove((R+4),(R+12),4);
}
B5475e9:{NFSU2_TR(0x5475e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5475eeull));
TAIL_STATIC(0x631d20u,631);
}
B5475ee:L5475ee:{c.instructions+=3;NFSU2_TR(0x5475ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5475ef:{NFSU2_TR(0x5475ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5475f2:{NFSU2_TR(0x5475f2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5475e4u);}goto L5475e4;}}
}
B5475f4:L5475f4:{c.instructions+=1;NFSU2_TR(0x5475f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5475f8:L5475f8:{c.instructions+=6;NFSU2_TR(0x5475f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5475fb:{NFSU2_TR(0x5475fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5475fe:{NFSU2_TR(0x5475fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5475ff:{NFSU2_TR(0x5475ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547600:{NFSU2_TR(0x547600);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B547606:{NFSU2_TR(0x547606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54760bull));
TAIL_STATIC(0x631d20u,631);
}
B54760b:L54760b:{c.instructions+=2;NFSU2_TR(0x54760b);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547612:{NFSU2_TR(0x547612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54774d;}}
}
B547618:L547618:{c.instructions+=5;NFSU2_TR(0x547618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54761b:{NFSU2_TR(0x54761b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54761d:{NFSU2_TR(0x54761d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547620:{NFSU2_TR(0x547620);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547624:{NFSU2_TR(0x547624);
if(r1(R+518)){{goto L54774d;}}
}
B54762a:L54762a:{c.instructions+=3;NFSU2_TR(0x54762a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54762b:{NFSU2_TR(0x54762b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54762c:{NFSU2_TR(0x54762c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547631ull));
TAIL_STATIC(0x501d70u,501);
}
B547631:L547631:{c.instructions+=6;NFSU2_TR(0x547631);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B547634:{NFSU2_TR(0x547634);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B547637:{NFSU2_TR(0x547637);
w4(R+4,u32(s32(s8(r1(R+8)))));
}
B54763a:{NFSU2_TR(0x54763a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54763d:{NFSU2_TR(0x54763d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547640:{NFSU2_TR(0x547640);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54769f;}}
}
B547642:L547642:{c.instructions+=1;NFSU2_TR(0x547642);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547644:L547644:{c.instructions+=1;NFSU2_TR(0x547644);
__builtin_memmove((R+28),(R+0),4);
}
B547646:L547646:{c.instructions+=2;NFSU2_TR(0x547646);
s4(0x861e74,u32(u32(m4(0x861e74))-u32(r4(R+28))));
w1(R+519,u8(s32(m4(0x861e74))<s32(u32(0x0ull))));
}
B54764c:{NFSU2_TR(0x54764c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L547658;}}
}
B54764e:L54764e:{c.instructions+=1;NFSU2_TR(0x54764e);
s4(0x861e74,u32(0x0ull));
}
B547658:L547658:{c.instructions+=4;NFSU2_TR(0x547658);
__builtin_memmove((R+8),gp(0x842ebc),4);
}
B54765e:{NFSU2_TR(0x54765e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547660:{NFSU2_TR(0x547660);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547662:{NFSU2_TR(0x547662);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L547683;}}
}
B547664:L547664:{c.instructions+=3;NFSU2_TR(0x547664);
__builtin_memmove((R+24),gp(0x863480),4);
}
B54766a:{NFSU2_TR(0x54766a);
w4(R+4,u32(0x8406ecull));
}
B54766f:{NFSU2_TR(0x54766f);
}
B547670:L547670:{c.instructions+=2;NFSU2_TR(0x547670);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B547672:{NFSU2_TR(0x547672);
if(r1(R+518)){{goto L5476fe;}}
}
B547678:L547678:{c.instructions+=4;NFSU2_TR(0x547678);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B547679:{NFSU2_TR(0x547679);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7f8ull))));
}
B54767f:{NFSU2_TR(0x54767f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B547681:{NFSU2_TR(0x547681);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547670u);}goto L547670;}}
}
B547683:L547683:{c.instructions+=1;NFSU2_TR(0x547683);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B547685:L547685:{c.instructions+=4;NFSU2_TR(0x547685);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547689:{NFSU2_TR(0x547689);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54768c:{NFSU2_TR(0x54768c);
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
B54768f:{NFSU2_TR(0x54768f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L547710;}}
}
B547691:L547691:{c.instructions+=2;NFSU2_TR(0x547691);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5477ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B547698:{NFSU2_TR(0x547698);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5477c4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54769f:L54769f:{c.instructions+=2;NFSU2_TR(0x54769f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5476a1:{NFSU2_TR(0x5476a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5476af;}}
}
B5476a3:L5476a3:{c.instructions+=2;NFSU2_TR(0x5476a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5476a6:{NFSU2_TR(0x5476a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547642u);}goto L547642;}}
}
B5476a8:L5476a8:{c.instructions+=2;NFSU2_TR(0x5476a8);
w4(R+4,u32(0x1ull));
}
B5476ad:{NFSU2_TR(0x5476ad);
{goto L5476b8;}
}
B5476af:L5476af:{c.instructions+=2;NFSU2_TR(0x5476af);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5476b1:{NFSU2_TR(0x5476b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547642u);}goto L547642;}}
}
B5476b3:L5476b3:{c.instructions+=2;NFSU2_TR(0x5476b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x57ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x57ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5476b6:{NFSU2_TR(0x5476b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547642u);}goto L547642;}}
}
B5476b8:L5476b8:{c.instructions+=5;NFSU2_TR(0x5476b8);
__builtin_memmove((R+8),gp(0x83845c),4);
}
B5476be:{NFSU2_TR(0x5476be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5476c1:{NFSU2_TR(0x5476c1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5476c5:{NFSU2_TR(0x5476c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5476c7:{NFSU2_TR(0x5476c7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547642u);}goto L547642;}}
}
B5476cd:L5476cd:{c.instructions+=2;NFSU2_TR(0x5476cd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5476d0:{NFSU2_TR(0x5476d0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5476e8;}}
}
B5476d2:L5476d2:{c.instructions+=1;NFSU2_TR(0x5476d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5477d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5476d9:L5476d9:{c.instructions+=2;NFSU2_TR(0x5476d9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5476dc:{NFSU2_TR(0x5476dc);
{goto L5476ea;}
}
B5476de:L5476de:{c.instructions+=2;NFSU2_TR(0x5476de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5476e1:{NFSU2_TR(0x5476e1);
{goto L5476ea;}
}
B5476e3:L5476e3:{c.instructions+=2;NFSU2_TR(0x5476e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B5476e6:{NFSU2_TR(0x5476e6);
{goto L5476ea;}
}
B5476e8:L5476e8:{c.instructions+=1;NFSU2_TR(0x5476e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5476ea:L5476ea:{c.instructions+=3;NFSU2_TR(0x5476ea);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5476ee:{NFSU2_TR(0x5476ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5476f1:{NFSU2_TR(0x5476f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547644u);}goto L547644;}}
}
B5476f7:L5476f7:{c.instructions+=2;NFSU2_TR(0x5476f7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5476f9:{NFSU2_TR(0x5476f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547646u);}goto L547646;}
}
B5476fe:L5476fe:{c.instructions+=4;NFSU2_TR(0x5476fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x7f8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B547704:{NFSU2_TR(0x547704);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8406e4ull))));
}
B547709:{NFSU2_TR(0x547709);
__builtin_memmove((R+24),(R+0),4);
}
B54770b:{NFSU2_TR(0x54770b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547685u);}goto L547685;}
}
B547710:L547710:{c.instructions+=7;NFSU2_TR(0x547710);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B547714:{NFSU2_TR(0x547714);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547715:{NFSU2_TR(0x547715);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547716:{NFSU2_TR(0x547716);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547717:{NFSU2_TR(0x547717);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54771d:{NFSU2_TR(0x54771d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547725:{NFSU2_TR(0x547725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54772aull));
TAIL_STATIC(0x503b10u,503);
}
B54772a:L54772a:{c.instructions+=9;NFSU2_TR(0x54772a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54772e:{NFSU2_TR(0x54772e);
w4(R+8,u32(0x1ull));
}
B547733:{NFSU2_TR(0x547733);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B547735:{NFSU2_TR(0x547735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B547737:{NFSU2_TR(0x547737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54773d:{NFSU2_TR(0x54773d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B54773f:{NFSU2_TR(0x54773f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547743:{NFSU2_TR(0x547743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547749:{NFSU2_TR(0x547749);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54774d:L54774d:{c.instructions+=5;NFSU2_TR(0x54774d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B54774f:{NFSU2_TR(0x54774f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547752:{NFSU2_TR(0x547752);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547754:{NFSU2_TR(0x547754);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547758:{NFSU2_TR(0x547758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54759cu);}goto L54759c;}}
}
B54775e:L54775e:{c.instructions+=4;NFSU2_TR(0x54775e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547764:{NFSU2_TR(0x547764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547765:{NFSU2_TR(0x547765);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B547768:{NFSU2_TR(0x547768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54776dull));
TAIL_STATIC(0x413440u,413);
}
B54776d:L54776d:{c.instructions+=4;NFSU2_TR(0x54776d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54776f:{NFSU2_TR(0x54776f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547771:{NFSU2_TR(0x547771);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547772:{NFSU2_TR(0x547772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547777ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B547777:L547777:{c.instructions+=5;NFSU2_TR(0x547777);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54777a:{NFSU2_TR(0x54777a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54777d:{NFSU2_TR(0x54777d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54777e:{NFSU2_TR(0x54777e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B547781:{NFSU2_TR(0x547781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547786ull));
TAIL_STATIC(0x503950u,503);
}
B547786:L547786:{c.instructions+=3;NFSU2_TR(0x547786);
w4(R+0,u32(s32(s8(m1(0x838149)))));
}
B54778d:{NFSU2_TR(0x54778d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547790:{NFSU2_TR(0x547790);
if(r1(R+518)){{goto L54779e;}}
}
B547792:L547792:{c.instructions+=3;NFSU2_TR(0x547792);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B547798:{NFSU2_TR(0x547798);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547799:{NFSU2_TR(0x547799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54779eull));
TAIL_STATIC(0x458520u,458);
}
B54779e:L54779e:{c.instructions+=3;NFSU2_TR(0x54779e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5477a0:{NFSU2_TR(0x5477a0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5477a2:{NFSU2_TR(0x5477a2);
if(r1(R+518)){{goto L5477bd;}}
}
B5477a4:L5477a4:{c.instructions+=6;NFSU2_TR(0x5477a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5477a6:{NFSU2_TR(0x5477a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5477a9:{NFSU2_TR(0x5477a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5477ab:{NFSU2_TR(0x5477ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5477ac:{NFSU2_TR(0x5477ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5477af:{NFSU2_TR(0x5477af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5477b4ull));
TAIL_STATIC(0x575630u,575);
}
B5477b4:L5477b4:{c.instructions+=4;NFSU2_TR(0x5477b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5477b6:{NFSU2_TR(0x5477b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5477b9:{NFSU2_TR(0x5477b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5477bb:{NFSU2_TR(0x5477bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5477a4u);}goto L5477a4;}}
}
B5477bd:L5477bd:{c.instructions+=5;NFSU2_TR(0x5477bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5477be:{NFSU2_TR(0x5477be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5477bf:{NFSU2_TR(0x5477bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5477c0:{NFSU2_TR(0x5477c0);
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
B5477c3:{NFSU2_TR(0x5477c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5477f0:L5477f0:{c.instructions+=6;NFSU2_TR(0x5477f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5477f1:{NFSU2_TR(0x5477f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5477f5:{NFSU2_TR(0x5477f5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5477f8:{NFSU2_TR(0x5477f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5477f9:{NFSU2_TR(0x5477f9);
__builtin_memmove((R+28),(R+4),4);
}
B5477fb:{NFSU2_TR(0x5477fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5478f7;}}
}
B547801:L547801:{c.instructions+=2;NFSU2_TR(0x547801);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547804:{NFSU2_TR(0x547804);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5478f7;}}
}
B54780a:L54780a:{c.instructions+=6;NFSU2_TR(0x54780a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54780b:{NFSU2_TR(0x54780b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54780c:{NFSU2_TR(0x54780c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547810:{NFSU2_TR(0x547810);
w4(R+12,u32(0x40ull));
}
B547815:{NFSU2_TR(0x547815);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54781b:{NFSU2_TR(0x54781b);
{goto L547820;}
}
B547820:L547820:{c.instructions+=3;NFSU2_TR(0x547820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547821:{NFSU2_TR(0x547821);
__builtin_memmove((R+4),(R+20),4);
}
B547823:{NFSU2_TR(0x547823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547828ull));
TAIL_STATIC(0x6102f0u,610);
}
B547828:L547828:{c.instructions+=2;NFSU2_TR(0x547828);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54782a:{NFSU2_TR(0x54782a);
if(r1(R+518)){{goto L54783f;}}
}
B54782c:L54782c:{c.instructions+=4;NFSU2_TR(0x54782c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54782e:{NFSU2_TR(0x54782e);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547833:{NFSU2_TR(0x547833);
__builtin_memmove((R+4),(R+0),4);
}
B547835:{NFSU2_TR(0x547835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54783aull));
TAIL_STATIC(0x61b500u,61b);
}
B54783a:L54783a:{c.instructions+=2;NFSU2_TR(0x54783a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54783d:{NFSU2_TR(0x54783d);
if(r1(R+518)){{goto L54788b;}}
}
B54783f:L54783f:{c.instructions+=3;NFSU2_TR(0x54783f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B547840:{NFSU2_TR(0x547840);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547843:{NFSU2_TR(0x547843);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547820u);}goto L547820;}}
}
B547845:L547845:{c.instructions+=2;NFSU2_TR(0x547845);
__builtin_memmove((R+4),(R+28),4);
}
B547847:{NFSU2_TR(0x547847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54784cull));
TAIL_STATIC(0x521580u,521);
}
B54784c:L54784c:{c.instructions+=2;NFSU2_TR(0x54784c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54784e:{NFSU2_TR(0x54784e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54788b;}}
}
B547850:L547850:{c.instructions+=5;NFSU2_TR(0x547850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547852:{NFSU2_TR(0x547852);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547855:{NFSU2_TR(0x547855);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547856:{NFSU2_TR(0x547856);
__builtin_memmove((R+4),(R+12),4);
}
B547858:{NFSU2_TR(0x547858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54785dull));
TAIL_STATIC(0x631d20u,631);
}
B54785d:L54785d:{c.instructions+=3;NFSU2_TR(0x54785d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54785e:{NFSU2_TR(0x54785e);
__builtin_memmove((R+4),(R+28),4);
}
B547860:{NFSU2_TR(0x547860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547865ull));
TAIL_STATIC(0x53b0e0u,53b);
}
B547865:L547865:{c.instructions+=3;NFSU2_TR(0x547865);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547866:{NFSU2_TR(0x547866);
__builtin_memmove((R+4),(R+20),4);
}
B547868:{NFSU2_TR(0x547868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54786dull));
TAIL_STATIC(0x6102f0u,610);
}
B54786d:L54786d:{c.instructions+=2;NFSU2_TR(0x54786d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54786f:{NFSU2_TR(0x54786f);
if(r1(R+518)){{goto L5478e8;}}
}
B547871:L547871:{c.instructions+=2;NFSU2_TR(0x547871);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547873:{NFSU2_TR(0x547873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547878ull));
TAIL_STATIC(0x575620u,575);
}
B547878:L547878:{c.instructions+=3;NFSU2_TR(0x547878);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54787b:{NFSU2_TR(0x54787b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54787d:{NFSU2_TR(0x54787d);
if(r1(R+518)){{goto L5478d6;}}
}
B54787f:L54787f:{c.instructions+=3;NFSU2_TR(0x54787f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547886:{NFSU2_TR(0x547886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547889:{NFSU2_TR(0x547889);
{goto L5478d8;}
}
B54788b:L54788b:{c.instructions+=2;NFSU2_TR(0x54788b);
w4(R+24,u32(0x40ull));
}
B547890:{NFSU2_TR(0x547890);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547893:L547893:{c.instructions+=4;NFSU2_TR(0x547893);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547895:{NFSU2_TR(0x547895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547896:{NFSU2_TR(0x547896);
__builtin_memmove((R+4),(R+12),4);
}
B547898:{NFSU2_TR(0x547898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54789dull));
TAIL_STATIC(0x631d20u,631);
}
B54789d:L54789d:{c.instructions+=3;NFSU2_TR(0x54789d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54789e:{NFSU2_TR(0x54789e);
__builtin_memmove((R+4),(R+28),4);
}
B5478a0:{NFSU2_TR(0x5478a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5478a5ull));
TAIL_STATIC(0x50ee90u,50e);
}
B5478a5:L5478a5:{c.instructions+=2;NFSU2_TR(0x5478a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5478a7:{NFSU2_TR(0x5478a7);
if(r1(R+518)){{goto L5478ad;}}
}
B5478a9:L5478a9:{c.instructions+=1;NFSU2_TR(0x5478a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5478ad:L5478ad:{c.instructions+=3;NFSU2_TR(0x5478ad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5478ae:{NFSU2_TR(0x5478ae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5478b1:{NFSU2_TR(0x5478b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547893u);}goto L547893;}}
}
B5478b3:L5478b3:{c.instructions+=1;NFSU2_TR(0x5478b3);
w4(R+24,u32(0x40ull));
}
B5478b8:L5478b8:{c.instructions+=3;NFSU2_TR(0x5478b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5478b9:{NFSU2_TR(0x5478b9);
__builtin_memmove((R+4),(R+28),4);
}
B5478bb:{NFSU2_TR(0x5478bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5478c0ull));
TAIL_STATIC(0x53b0e0u,53b);
}
B5478c0:L5478c0:{c.instructions+=3;NFSU2_TR(0x5478c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5478c1:{NFSU2_TR(0x5478c1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5478c4:{NFSU2_TR(0x5478c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5478b8u);}goto L5478b8;}}
}
B5478c6:L5478c6:{c.instructions+=3;NFSU2_TR(0x5478c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5478ca:{NFSU2_TR(0x5478ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5478cd:{NFSU2_TR(0x5478cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5478e8;}}
}
B5478cf:L5478cf:{c.instructions+=2;NFSU2_TR(0x5478cf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5478d2:{NFSU2_TR(0x5478d2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5478e8;}}
}
B5478d4:L5478d4:{c.instructions+=1;NFSU2_TR(0x5478d4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547865u);}goto L547865;}
}
B5478d6:L5478d6:{c.instructions+=1;NFSU2_TR(0x5478d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5478d8:L5478d8:{c.instructions+=6;NFSU2_TR(0x5478d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5478db:{NFSU2_TR(0x5478db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5478de:{NFSU2_TR(0x5478de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5478e0:{NFSU2_TR(0x5478e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5478e3:{NFSU2_TR(0x5478e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5478e6:{NFSU2_TR(0x5478e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5478e8:L5478e8:{c.instructions+=4;NFSU2_TR(0x5478e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5478ea:{NFSU2_TR(0x5478ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5478ec:{NFSU2_TR(0x5478ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5478ed:{NFSU2_TR(0x5478ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5478f2ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5478f2:L5478f2:{c.instructions+=3;NFSU2_TR(0x5478f2);
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
B5478f5:{NFSU2_TR(0x5478f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5478f6:{NFSU2_TR(0x5478f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5478f7:L5478f7:{c.instructions+=3;NFSU2_TR(0x5478f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5478f8:{NFSU2_TR(0x5478f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5478f9:{NFSU2_TR(0x5478f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547900:L547900:{c.instructions+=7;NFSU2_TR(0x547900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B547903:{NFSU2_TR(0x547903);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547904:{NFSU2_TR(0x547904);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B547908:{NFSU2_TR(0x547908);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54790a:{NFSU2_TR(0x54790a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54790b:{NFSU2_TR(0x54790b);
__builtin_memmove((R+24),(R+4),4);
}
B54790d:{NFSU2_TR(0x54790d);
if(r1(R+518)){{goto L5479ee;}}
}
B547913:L547913:{c.instructions+=3;NFSU2_TR(0x547913);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547914:{NFSU2_TR(0x547914);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547916:{NFSU2_TR(0x547916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54791bull));
TAIL_STATIC(0x575620u,575);
}
B54791b:L54791b:{c.instructions+=4;NFSU2_TR(0x54791b);
__builtin_memmove((R+28),(R+0),4);
}
B54791d:{NFSU2_TR(0x54791d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547920:{NFSU2_TR(0x547920);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547922:{NFSU2_TR(0x547922);
if(r1(R+518)){{goto L54794c;}}
}
B547924:L547924:{c.instructions+=7;NFSU2_TR(0x547924);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547926:{NFSU2_TR(0x547926);
u8 U[4];
w4(U+0,u32(0x85ad2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54792b:{NFSU2_TR(0x54792b);
u8 U[4];
w4(U+0,u32(0x85ad2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547930:{NFSU2_TR(0x547930);
u8 U[4];
w4(U+0,u32(0x85ad2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547935:{NFSU2_TR(0x547935);
u8 U[4];
w4(U+0,u32(0x85ad2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54793a:{NFSU2_TR(0x54793a);
__builtin_memmove((R+4),(R+28),4);
}
B54793c:{NFSU2_TR(0x54793c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547941ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B547941:L547941:{c.instructions+=3;NFSU2_TR(0x547941);
u8 U[4];
w4(U+0,u32(0x79b5b8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B547947:{NFSU2_TR(0x547947);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54794a:{NFSU2_TR(0x54794a);
{goto L54794e;}
}
B54794c:L54794c:{c.instructions+=1;NFSU2_TR(0x54794c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54794e:L54794e:{c.instructions+=10;NFSU2_TR(0x54794e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547954:{NFSU2_TR(0x547954);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B547955:{NFSU2_TR(0x547955);
__builtin_memmove((R+0),(R+8),4);
}
B547957:{NFSU2_TR(0x547957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547958:{NFSU2_TR(0x547958);
u8 U[4];
w4(U+0,u32(0x79c1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54795d:{NFSU2_TR(0x54795d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B547961:{NFSU2_TR(0x547961);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547963:{NFSU2_TR(0x547963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547964:{NFSU2_TR(0x547964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54796a:{NFSU2_TR(0x54796a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54796full));
TAIL_STATIC(0x50c960u,50c);
}
B54796f:L54796f:{c.instructions+=5;NFSU2_TR(0x54796f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547972:{NFSU2_TR(0x547972);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547976:{NFSU2_TR(0x547976);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547977:{NFSU2_TR(0x547977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547978:{NFSU2_TR(0x547978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54797dull));
TAIL_STATIC(0x4953c0u,495);
}
B54797d:L54797d:{c.instructions+=4;NFSU2_TR(0x54797d);
__builtin_memmove((R+8),(R+0),4);
}
B54797f:{NFSU2_TR(0x54797f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B547982:{NFSU2_TR(0x547982);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547984:{NFSU2_TR(0x547984);
if(r1(R+518)){{goto L547992;}}
}
B547986:L547986:{c.instructions+=2;NFSU2_TR(0x547986);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547987:{NFSU2_TR(0x547987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54798cull));
TAIL_STATIC(0x50ca50u,50c);
}
B54798c:L54798c:{c.instructions+=2;NFSU2_TR(0x54798c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54798f:{NFSU2_TR(0x54798f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547992:L547992:{c.instructions+=7;NFSU2_TR(0x547992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547998:{NFSU2_TR(0x547998);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547999:{NFSU2_TR(0x547999);
u8 U[4];
w4(U+0,u32(0x79c1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54799e:{NFSU2_TR(0x54799e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5479a2:{NFSU2_TR(0x5479a2);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5479a4:{NFSU2_TR(0x5479a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5479a5:{NFSU2_TR(0x5479a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5479aaull));
TAIL_STATIC(0x50c960u,50c);
}
B5479aa:L5479aa:{c.instructions+=5;NFSU2_TR(0x5479aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5479ad:{NFSU2_TR(0x5479ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5479b1:{NFSU2_TR(0x5479b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5479b2:{NFSU2_TR(0x5479b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5479b3:{NFSU2_TR(0x5479b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5479b8ull));
TAIL_STATIC(0x4953c0u,495);
}
B5479b8:L5479b8:{c.instructions+=4;NFSU2_TR(0x5479b8);
__builtin_memmove((R+8),(R+0),4);
}
B5479ba:{NFSU2_TR(0x5479ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5479bd:{NFSU2_TR(0x5479bd);
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
B5479bf:{NFSU2_TR(0x5479bf);
if(r1(R+518)){{goto L5479cd;}}
}
B5479c1:L5479c1:{c.instructions+=2;NFSU2_TR(0x5479c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5479c2:{NFSU2_TR(0x5479c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5479c7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5479c7:L5479c7:{c.instructions+=2;NFSU2_TR(0x5479c7);
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
B5479ca:{NFSU2_TR(0x5479ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5479cd:L5479cd:{c.instructions+=3;NFSU2_TR(0x5479cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5479cf:{NFSU2_TR(0x5479cf);
__builtin_memmove((R+4),(R+28),4);
}
B5479d1:{NFSU2_TR(0x5479d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5479d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5479d4:L5479d4:{c.instructions+=8;NFSU2_TR(0x5479d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5479da:{NFSU2_TR(0x5479da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5479dd:{NFSU2_TR(0x5479dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5479e3:{NFSU2_TR(0x5479e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5479e5:{NFSU2_TR(0x5479e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5479e8:{NFSU2_TR(0x5479e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5479eb:{NFSU2_TR(0x5479eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5479ed:{NFSU2_TR(0x5479ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5479ee:L5479ee:{c.instructions+=4;NFSU2_TR(0x5479ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5479ef:{NFSU2_TR(0x5479ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5479f0:{NFSU2_TR(0x5479f0);
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
B5479f3:{NFSU2_TR(0x5479f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547a00:L547a00:{c.instructions+=7;NFSU2_TR(0x547a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B547a03:{NFSU2_TR(0x547a03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a04:{NFSU2_TR(0x547a04);
__builtin_memmove((R+24),(R+4),4);
}
B547a06:{NFSU2_TR(0x547a06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a07:{NFSU2_TR(0x547a07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547a09:{NFSU2_TR(0x547a09);
w4(R+4,u32(0xeull));
}
B547a0e:{NFSU2_TR(0x547a0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B547a12:L547a12:{c.instructions+=1;NFSU2_TR(0x547a12);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L547a14;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547a12u);}goto L547a12;}
}
B547a14:L547a14:{c.instructions+=18;NFSU2_TR(0x547a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547a17:{NFSU2_TR(0x547a17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a19:{NFSU2_TR(0x547a19);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547a1d:{NFSU2_TR(0x547a1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547a23:{NFSU2_TR(0x547a23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a24:{NFSU2_TR(0x547a24);
__builtin_memmove((R+4),(R+28),4);
}
B547a26:{NFSU2_TR(0x547a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547a2a:{NFSU2_TR(0x547a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c258ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a32:{NFSU2_TR(0x547a32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f694ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a3a:{NFSU2_TR(0x547a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c248ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a42:{NFSU2_TR(0x547a42);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f688ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a4a:{NFSU2_TR(0x547a4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c238ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a52:{NFSU2_TR(0x547a52);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a5a:{NFSU2_TR(0x547a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a62:{NFSU2_TR(0x547a62);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a6a:{NFSU2_TR(0x547a6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a72:{NFSU2_TR(0x547a72);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3e4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B547a7a:{NFSU2_TR(0x547a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547a7full));
TAIL_STATIC(0x540c10u,540);
}
B547a7f:L547a7f:{c.instructions+=2;NFSU2_TR(0x547a7f);
u8 U[4];
w4(U+0,u32(0x79c238ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a84:{NFSU2_TR(0x547a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547a89ull));
TAIL_STATIC(0x505450u,505);
}
B547a89:L547a89:{c.instructions+=4;NFSU2_TR(0x547a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547a8c:{NFSU2_TR(0x547a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a8d:{NFSU2_TR(0x547a8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547a8e:{NFSU2_TR(0x547a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547a93ull));
TAIL_STATIC(0x537a60u,537);
}
B547a93:L547a93:{c.instructions+=15;NFSU2_TR(0x547a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547a96:{NFSU2_TR(0x547a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547a9a:{NFSU2_TR(0x547a9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547a9d:{NFSU2_TR(0x547a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547aa0:{NFSU2_TR(0x547aa0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547aa2:{NFSU2_TR(0x547aa2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547aa6:{NFSU2_TR(0x547aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547aac:{NFSU2_TR(0x547aac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547aad:{NFSU2_TR(0x547aad);
__builtin_memmove((R+4),(R+28),4);
}
B547aaf:{NFSU2_TR(0x547aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ab7:{NFSU2_TR(0x547ab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547abf:{NFSU2_TR(0x547abf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c224ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ac7:{NFSU2_TR(0x547ac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547acf:{NFSU2_TR(0x547acf);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ad7:{NFSU2_TR(0x547ad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547adcull));
TAIL_STATIC(0x540c10u,540);
}
B547adc:L547adc:{c.instructions+=2;NFSU2_TR(0x547adc);
u8 U[4];
w4(U+0,u32(0x79c210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547ae1:{NFSU2_TR(0x547ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547ae6ull));
TAIL_STATIC(0x505450u,505);
}
B547ae6:L547ae6:{c.instructions+=4;NFSU2_TR(0x547ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547ae9:{NFSU2_TR(0x547ae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547aea:{NFSU2_TR(0x547aea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547aeb:{NFSU2_TR(0x547aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547af0ull));
TAIL_STATIC(0x537a60u,537);
}
B547af0:L547af0:{c.instructions+=15;NFSU2_TR(0x547af0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547af3:{NFSU2_TR(0x547af3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547af5:{NFSU2_TR(0x547af5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547af9:{NFSU2_TR(0x547af9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547afc:{NFSU2_TR(0x547afc);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547b00:{NFSU2_TR(0x547b00);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
}
B547b06:{NFSU2_TR(0x547b06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b07:{NFSU2_TR(0x547b07);
__builtin_memmove((R+4),(R+24),4);
}
B547b09:{NFSU2_TR(0x547b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547b0c:{NFSU2_TR(0x547b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f63cull));
s4(u32(r4(U+0)),r4(U+4));
}
B547b14:{NFSU2_TR(0x547b14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f62cull));
s4(u32(r4(U+0)),r4(U+4));
}
B547b1c:{NFSU2_TR(0x547b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c1fcull));
s4(u32(r4(U+0)),r4(U+4));
}
B547b24:{NFSU2_TR(0x547b24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f61cull));
s4(u32(r4(U+0)),r4(U+4));
}
B547b2c:{NFSU2_TR(0x547b2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c1e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547b34:{NFSU2_TR(0x547b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547b39ull));
TAIL_STATIC(0x540c10u,540);
}
B547b39:L547b39:{c.instructions+=2;NFSU2_TR(0x547b39);
u8 U[4];
w4(U+0,u32(0x79c1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b3e:{NFSU2_TR(0x547b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547b43ull));
TAIL_STATIC(0x505450u,505);
}
B547b43:L547b43:{c.instructions+=4;NFSU2_TR(0x547b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547b46:{NFSU2_TR(0x547b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b47:{NFSU2_TR(0x547b47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b48:{NFSU2_TR(0x547b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547b4dull));
TAIL_STATIC(0x537a60u,537);
}
B547b4d:L547b4d:{c.instructions+=8;NFSU2_TR(0x547b4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547b50:{NFSU2_TR(0x547b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547b53:{NFSU2_TR(0x547b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547b57:{NFSU2_TR(0x547b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547b58:{NFSU2_TR(0x547b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547b5b:{NFSU2_TR(0x547b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547b5c:{NFSU2_TR(0x547b5c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547b5f:{NFSU2_TR(0x547b5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547b60:L547b60:{c.instructions+=10;NFSU2_TR(0x547b60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B547b63:{NFSU2_TR(0x547b63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b64:{NFSU2_TR(0x547b64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b65:{NFSU2_TR(0x547b65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b66:{NFSU2_TR(0x547b66);
s1(0x83855d,u8(0x0ull));
}
B547b6d:{NFSU2_TR(0x547b6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b6e:{NFSU2_TR(0x547b6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547b72:{NFSU2_TR(0x547b72);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B547b79:{NFSU2_TR(0x547b79);
w4(R+20,u32(0x1ull));
}
B547b7e:{NFSU2_TR(0x547b7e);
{goto L547b84;}
}
B547b80:L547b80:{c.instructions+=1;NFSU2_TR(0x547b80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547b84:L547b84:{c.instructions+=4;NFSU2_TR(0x547b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B547b87:{NFSU2_TR(0x547b87);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b88:{NFSU2_TR(0x547b88);
u8 U[4];
w4(U+0,u32(0x79c268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b8d:{NFSU2_TR(0x547b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547b92ull));
TAIL_STATIC(0x50b990u,50b);
}
B547b92:L547b92:{c.instructions+=5;NFSU2_TR(0x547b92);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B547b94:{NFSU2_TR(0x547b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B547b97:{NFSU2_TR(0x547b97);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547b99:{NFSU2_TR(0x547b99);
__builtin_memmove((R+28),(R+0),4);
}
B547b9b:{NFSU2_TR(0x547b9b);
if(r1(R+518)){{goto L547bb6;}}
}
B547b9d:L547b9d:{c.instructions+=2;NFSU2_TR(0x547b9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547b9e:{NFSU2_TR(0x547b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547ba3ull));
TAIL_STATIC(0x52cef0u,52c);
}
B547ba3:L547ba3:{c.instructions+=3;NFSU2_TR(0x547ba3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547ba6:{NFSU2_TR(0x547ba6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547ba8:{NFSU2_TR(0x547ba8);
if(r1(R+518)){{goto L547bb6;}}
}
B547baa:L547baa:{c.instructions+=3;NFSU2_TR(0x547baa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547bab:{NFSU2_TR(0x547bab);
__builtin_memmove((R+4),(R+0),4);
}
B547bad:{NFSU2_TR(0x547bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547bb2ull));
TAIL_STATIC(0x517f80u,517);
}
B547bb2:L547bb2:{c.instructions+=2;NFSU2_TR(0x547bb2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547bb4:{NFSU2_TR(0x547bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547bc9;}}
}
B547bb6:L547bb6:{c.instructions+=3;NFSU2_TR(0x547bb6);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B547bbb:{NFSU2_TR(0x547bbb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547bbd:{NFSU2_TR(0x547bbd);
if(r1(R+518)){{goto L547c2b;}}
}
B547bbf:L547bbf:{c.instructions+=4;NFSU2_TR(0x547bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547bc2:{NFSU2_TR(0x547bc2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547bc3:{NFSU2_TR(0x547bc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547bc4:{NFSU2_TR(0x547bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547bc9ull));
TAIL_STATIC(0x52c570u,52c);
}
B547bc9:L547bc9:{c.instructions+=3;NFSU2_TR(0x547bc9);
__builtin_memmove((R+28),(R+0),4);
}
B547bcb:{NFSU2_TR(0x547bcb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547bcd:{NFSU2_TR(0x547bcd);
if(r1(R+518)){{goto L547c2b;}}
}
B547bcf:L547bcf:{c.instructions+=4;NFSU2_TR(0x547bcf);
w4(R+8,u32(0x78fc44ull));
}
B547bd4:{NFSU2_TR(0x547bd4);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B547bd7:{NFSU2_TR(0x547bd7);
w1(R+0,u8(0x48ull));
}
B547bd9:{NFSU2_TR(0x547bd9);
__builtin_memmove((R+16),(R+16),4);
}
B547be0:L547be0:{c.instructions+=3;NFSU2_TR(0x547be0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B547be3:{NFSU2_TR(0x547be3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B547be5:{NFSU2_TR(0x547be5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L547bed;}}
}
B547be7:L547be7:{c.instructions+=2;NFSU2_TR(0x547be7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547be9:{NFSU2_TR(0x547be9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L547bed;}}
}
B547beb:L547beb:{c.instructions+=1;NFSU2_TR(0x547beb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B547bed:L547bed:{c.instructions+=6;NFSU2_TR(0x547bed);
w4(R+0,u32(r1(R+0)));
}
B547bf0:{NFSU2_TR(0x547bf0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B547bf2:{NFSU2_TR(0x547bf2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547bf5:{NFSU2_TR(0x547bf5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B547bf6:{NFSU2_TR(0x547bf6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547bf8:{NFSU2_TR(0x547bf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547be0u);}goto L547be0;}}
}
B547bfa:L547bfa:{c.instructions+=3;NFSU2_TR(0x547bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B547bfd:{NFSU2_TR(0x547bfd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547bff:{NFSU2_TR(0x547bff);
if(r1(R+518)){{goto L547c2b;}}
}
B547c01:L547c01:{c.instructions+=2;NFSU2_TR(0x547c01);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B547c04:{NFSU2_TR(0x547c04);
if(r1(R+518)){{goto L547c0f;}}
}
B547c06:L547c06:{c.instructions+=3;NFSU2_TR(0x547c06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B547c09:{NFSU2_TR(0x547c09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c0b:{NFSU2_TR(0x547c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547c01u);}goto L547c01;}}
}
B547c0d:L547c0d:{c.instructions+=1;NFSU2_TR(0x547c0d);
{goto L547c2b;}
}
B547c0f:L547c0f:{c.instructions+=2;NFSU2_TR(0x547c0f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c11:{NFSU2_TR(0x547c11);
if(r1(R+518)){{goto L547c2b;}}
}
B547c13:L547c13:{c.instructions+=2;NFSU2_TR(0x547c13);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B547c16:{NFSU2_TR(0x547c16);
if(r1(R+518)){{goto L547c28;}}
}
B547c18:L547c18:{c.instructions+=3;NFSU2_TR(0x547c18);
__builtin_memmove((R+4),(R+28),4);
}
B547c1a:{NFSU2_TR(0x547c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c1d:{NFSU2_TR(0x547c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547c22ull));
TAIL_STATIC(0x517720u,517);
}
B547c22:L547c22:{c.instructions+=2;NFSU2_TR(0x547c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547c25:{NFSU2_TR(0x547c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c28:L547c28:{c.instructions+=1;NFSU2_TR(0x547c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c2b:L547c2b:{c.instructions+=3;NFSU2_TR(0x547c2b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B547c2c:{NFSU2_TR(0x547c2c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c2f:{NFSU2_TR(0x547c2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547b80u);}goto L547b80;}}
}
B547c35:L547c35:{c.instructions+=3;NFSU2_TR(0x547c35);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547c39:{NFSU2_TR(0x547c39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c3b:{NFSU2_TR(0x547c3b);
if(r1(R+518)){{goto L547e1c;}}
}
B547c41:L547c41:{c.instructions+=5;NFSU2_TR(0x547c41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B547c45:{NFSU2_TR(0x547c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547c4b:{NFSU2_TR(0x547c4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x150ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547c51:{NFSU2_TR(0x547c51);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c53:{NFSU2_TR(0x547c53);
if(r1(R+518)){{goto L547c72;}}
}
B547c55:L547c55:{c.instructions+=7;NFSU2_TR(0x547c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B547c57:{NFSU2_TR(0x547c57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547c5a:{NFSU2_TR(0x547c5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B547c5c:{NFSU2_TR(0x547c5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c5f:{NFSU2_TR(0x547c5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B547c62:{NFSU2_TR(0x547c62);
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
B547c64:{NFSU2_TR(0x547c64);
if(r1(R+518)){{goto L547c6c;}}
}
B547c66:L547c66:{c.instructions+=3;NFSU2_TR(0x547c66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B547c68:{NFSU2_TR(0x547c68);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547c6a:{NFSU2_TR(0x547c6a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547c6cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B547c6c:L547c6c:{c.instructions+=3;NFSU2_TR(0x547c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B547c6e:{NFSU2_TR(0x547c6e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547c70:{NFSU2_TR(0x547c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547c55u);}goto L547c55;}}
}
B547c72:L547c72:{c.instructions+=5;NFSU2_TR(0x547c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c78:{NFSU2_TR(0x547c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547c7b:{NFSU2_TR(0x547c7b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B547c7e:{NFSU2_TR(0x547c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c82:{NFSU2_TR(0x547c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547c86:L547c86:{c.instructions+=2;NFSU2_TR(0x547c86);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B547c8a:{NFSU2_TR(0x547c8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L547c9b;}}
}
B547c8c:L547c8c:{c.instructions+=3;NFSU2_TR(0x547c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547c90:{NFSU2_TR(0x547c90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547c91:{NFSU2_TR(0x547c91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547c96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547900u);}goto L547900;}
}
B547c96:L547c96:{c.instructions+=1;NFSU2_TR(0x547c96);
{goto L547e07;}
}
B547c9b:L547c9b:{c.instructions+=7;NFSU2_TR(0x547c9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B547c9e:{NFSU2_TR(0x547c9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547c9f:{NFSU2_TR(0x547c9f);
u8 U[4];
w4(U+0,u32(0x79c1dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547ca4:{NFSU2_TR(0x547ca4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547ca8:{NFSU2_TR(0x547ca8);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547caa:{NFSU2_TR(0x547caa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547cab:{NFSU2_TR(0x547cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547cb0ull));
TAIL_STATIC(0x50c960u,50c);
}
B547cb0:L547cb0:{c.instructions+=8;NFSU2_TR(0x547cb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547cb4:{NFSU2_TR(0x547cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547cb8:{NFSU2_TR(0x547cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547cbb:{NFSU2_TR(0x547cbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B547cbe:{NFSU2_TR(0x547cbe);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B547cc1:{NFSU2_TR(0x547cc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547cc3:{NFSU2_TR(0x547cc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547cc7:{NFSU2_TR(0x547cc7);
if(r1(R+518)){{goto L547cea;}}
}
B547cc9:L547cc9:{c.instructions+=1;NFSU2_TR(0x547cc9);
__builtin_memmove((R+16),(R+16),4);
}
B547cd0:L547cd0:{c.instructions+=3;NFSU2_TR(0x547cd0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B547cd3:{NFSU2_TR(0x547cd3);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B547cd5:{NFSU2_TR(0x547cd5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L547cdd;}}
}
B547cd7:L547cd7:{c.instructions+=2;NFSU2_TR(0x547cd7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547cd9:{NFSU2_TR(0x547cd9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L547cdd;}}
}
B547cdb:L547cdb:{c.instructions+=1;NFSU2_TR(0x547cdb);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B547cdd:L547cdd:{c.instructions+=6;NFSU2_TR(0x547cdd);
w4(R+0,u32(r1(R+0)));
}
B547ce0:{NFSU2_TR(0x547ce0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B547ce2:{NFSU2_TR(0x547ce2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547ce5:{NFSU2_TR(0x547ce5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B547ce6:{NFSU2_TR(0x547ce6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547ce8:{NFSU2_TR(0x547ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547cd0u);}goto L547cd0;}}
}
B547cea:L547cea:{c.instructions+=2;NFSU2_TR(0x547cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547cec:{NFSU2_TR(0x547cec);
if(r1(R+518)){{goto L547d07;}}
}
B547cee:L547cee:{c.instructions+=2;NFSU2_TR(0x547cee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547cef:{NFSU2_TR(0x547cef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547cf4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B547cf4:L547cf4:{c.instructions+=3;NFSU2_TR(0x547cf4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547cf7:{NFSU2_TR(0x547cf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547cf9:{NFSU2_TR(0x547cf9);
if(r1(R+518)){{goto L547d07;}}
}
B547cfb:L547cfb:{c.instructions+=3;NFSU2_TR(0x547cfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547cfc:{NFSU2_TR(0x547cfc);
__builtin_memmove((R+4),(R+0),4);
}
B547cfe:{NFSU2_TR(0x547cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547d03ull));
TAIL_STATIC(0x517f80u,517);
}
B547d03:L547d03:{c.instructions+=2;NFSU2_TR(0x547d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d05:{NFSU2_TR(0x547d05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547d1e;}}
}
B547d07:L547d07:{c.instructions+=3;NFSU2_TR(0x547d07);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B547d0c:{NFSU2_TR(0x547d0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d0e:{NFSU2_TR(0x547d0e);
if(r1(R+518)){{goto L547d56;}}
}
B547d10:L547d10:{c.instructions+=4;NFSU2_TR(0x547d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547d13:{NFSU2_TR(0x547d13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d14:{NFSU2_TR(0x547d14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d15:{NFSU2_TR(0x547d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547d1aull));
TAIL_STATIC(0x52c570u,52c);
}
B547d1a:L547d1a:{c.instructions+=2;NFSU2_TR(0x547d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d1c:{NFSU2_TR(0x547d1c);
if(r1(R+518)){{goto L547d56;}}
}
B547d1e:L547d1e:{c.instructions+=3;NFSU2_TR(0x547d1e);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B547d24:{NFSU2_TR(0x547d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d26:{NFSU2_TR(0x547d26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547d2e;}}
}
B547d28:L547d28:{c.instructions+=2;NFSU2_TR(0x547d28);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B547d2c:{NFSU2_TR(0x547d2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547d35;}}
}
B547d2e:L547d2e:{c.instructions+=1;NFSU2_TR(0x547d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B547d35:L547d35:{c.instructions+=2;NFSU2_TR(0x547d35);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B547d39:{NFSU2_TR(0x547d39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547d56;}}
}
B547d3b:L547d3b:{c.instructions+=4;NFSU2_TR(0x547d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547d3e:{NFSU2_TR(0x547d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547d41:{NFSU2_TR(0x547d41);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d43:{NFSU2_TR(0x547d43);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L547d56;}}
}
B547d45:L547d45:{c.instructions+=1;NFSU2_TR(0x547d45);
__builtin_memmove((R+24),(R+0),4);
}
B547d47:L547d47:{c.instructions+=2;NFSU2_TR(0x547d47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d48:{NFSU2_TR(0x547d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547d4dull));
TAIL_STATIC(0x50ca00u,50c);
}
B547d4d:L547d4d:{c.instructions+=4;NFSU2_TR(0x547d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547d50:{NFSU2_TR(0x547d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547d53:{NFSU2_TR(0x547d53);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B547d54:{NFSU2_TR(0x547d54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547d47u);}goto L547d47;}}
}
B547d56:L547d56:{c.instructions+=6;NFSU2_TR(0x547d56);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d57:{NFSU2_TR(0x547d57);
u8 U[4];
w4(U+0,u32(0x79c1ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d5c:{NFSU2_TR(0x547d5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547d60:{NFSU2_TR(0x547d60);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d62:{NFSU2_TR(0x547d62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547d63:{NFSU2_TR(0x547d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547d68ull));
TAIL_STATIC(0x50c960u,50c);
}
B547d68:L547d68:{c.instructions+=8;NFSU2_TR(0x547d68);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547d6c:{NFSU2_TR(0x547d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547d70:{NFSU2_TR(0x547d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547d73:{NFSU2_TR(0x547d73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B547d76:{NFSU2_TR(0x547d76);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B547d79:{NFSU2_TR(0x547d79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547d7b:{NFSU2_TR(0x547d7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547d7f:{NFSU2_TR(0x547d7f);
if(r1(R+518)){{goto L547d9b;}}
}
B547d81:L547d81:{c.instructions+=3;NFSU2_TR(0x547d81);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B547d84:{NFSU2_TR(0x547d84);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B547d86:{NFSU2_TR(0x547d86);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L547d8e;}}
}
B547d88:L547d88:{c.instructions+=2;NFSU2_TR(0x547d88);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547d8a:{NFSU2_TR(0x547d8a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L547d8e;}}
}
B547d8c:L547d8c:{c.instructions+=1;NFSU2_TR(0x547d8c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B547d8e:L547d8e:{c.instructions+=6;NFSU2_TR(0x547d8e);
w4(R+0,u32(r1(R+0)));
}
B547d91:{NFSU2_TR(0x547d91);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B547d93:{NFSU2_TR(0x547d93);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B547d96:{NFSU2_TR(0x547d96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B547d97:{NFSU2_TR(0x547d97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B547d99:{NFSU2_TR(0x547d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547d81u);}goto L547d81;}}
}
B547d9b:L547d9b:{c.instructions+=2;NFSU2_TR(0x547d9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547d9d:{NFSU2_TR(0x547d9d);
if(r1(R+518)){{goto L547db8;}}
}
B547d9f:L547d9f:{c.instructions+=2;NFSU2_TR(0x547d9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547da0:{NFSU2_TR(0x547da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547da5ull));
TAIL_STATIC(0x52cef0u,52c);
}
B547da5:L547da5:{c.instructions+=3;NFSU2_TR(0x547da5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547da8:{NFSU2_TR(0x547da8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547daa:{NFSU2_TR(0x547daa);
if(r1(R+518)){{goto L547db8;}}
}
B547dac:L547dac:{c.instructions+=3;NFSU2_TR(0x547dac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547dad:{NFSU2_TR(0x547dad);
__builtin_memmove((R+4),(R+0),4);
}
B547daf:{NFSU2_TR(0x547daf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547db4ull));
TAIL_STATIC(0x517f80u,517);
}
B547db4:L547db4:{c.instructions+=2;NFSU2_TR(0x547db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547db6:{NFSU2_TR(0x547db6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547dcf;}}
}
B547db8:L547db8:{c.instructions+=3;NFSU2_TR(0x547db8);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B547dbd:{NFSU2_TR(0x547dbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547dbf:{NFSU2_TR(0x547dbf);
if(r1(R+518)){{goto L547e07;}}
}
B547dc1:L547dc1:{c.instructions+=4;NFSU2_TR(0x547dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547dc4:{NFSU2_TR(0x547dc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547dc5:{NFSU2_TR(0x547dc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547dc6:{NFSU2_TR(0x547dc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547dcbull));
TAIL_STATIC(0x52c570u,52c);
}
B547dcb:L547dcb:{c.instructions+=2;NFSU2_TR(0x547dcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547dcd:{NFSU2_TR(0x547dcd);
if(r1(R+518)){{goto L547e07;}}
}
B547dcf:L547dcf:{c.instructions+=3;NFSU2_TR(0x547dcf);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B547dd5:{NFSU2_TR(0x547dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547dd7:{NFSU2_TR(0x547dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547ddf;}}
}
B547dd9:L547dd9:{c.instructions+=2;NFSU2_TR(0x547dd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B547ddd:{NFSU2_TR(0x547ddd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547de6;}}
}
B547ddf:L547ddf:{c.instructions+=1;NFSU2_TR(0x547ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B547de6:L547de6:{c.instructions+=2;NFSU2_TR(0x547de6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B547dea:{NFSU2_TR(0x547dea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547e07;}}
}
B547dec:L547dec:{c.instructions+=4;NFSU2_TR(0x547dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547def:{NFSU2_TR(0x547def);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547df2:{NFSU2_TR(0x547df2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547df4:{NFSU2_TR(0x547df4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L547e07;}}
}
B547df6:L547df6:{c.instructions+=1;NFSU2_TR(0x547df6);
__builtin_memmove((R+24),(R+0),4);
}
B547df8:L547df8:{c.instructions+=2;NFSU2_TR(0x547df8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547df9:{NFSU2_TR(0x547df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547dfeull));
TAIL_STATIC(0x50ca00u,50c);
}
B547dfe:L547dfe:{c.instructions+=4;NFSU2_TR(0x547dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547e01:{NFSU2_TR(0x547e01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B547e04:{NFSU2_TR(0x547e04);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B547e05:{NFSU2_TR(0x547e05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547df8u);}goto L547df8;}}
}
B547e07:L547e07:{c.instructions+=6;NFSU2_TR(0x547e07);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547e0b:{NFSU2_TR(0x547e0b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B547e0c:{NFSU2_TR(0x547e0c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B547e0f:{NFSU2_TR(0x547e0f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B547e12:{NFSU2_TR(0x547e12);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547e16:{NFSU2_TR(0x547e16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547c86u);}goto L547c86;}}
}
B547e1c:L547e1c:{c.instructions+=6;NFSU2_TR(0x547e1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547e1d:{NFSU2_TR(0x547e1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547e1e:{NFSU2_TR(0x547e1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B547e1f:{NFSU2_TR(0x547e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547e20:{NFSU2_TR(0x547e20);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547e23:{NFSU2_TR(0x547e23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547e30:L547e30:{c.instructions+=8;NFSU2_TR(0x547e30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B547e33:{NFSU2_TR(0x547e33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547e34:{NFSU2_TR(0x547e34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547e35:{NFSU2_TR(0x547e35);
__builtin_memmove((R+12),(R+4),4);
}
B547e37:{NFSU2_TR(0x547e37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547e38:{NFSU2_TR(0x547e38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B547e3a:{NFSU2_TR(0x547e3a);
w4(R+4,u32(0xeull));
}
B547e3f:{NFSU2_TR(0x547e3f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B547e43:L547e43:{c.instructions+=1;NFSU2_TR(0x547e43);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L547e45;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x547e43u);}goto L547e43;}
}
B547e45:L547e45:{c.instructions+=19;NFSU2_TR(0x547e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547e48:{NFSU2_TR(0x547e48);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B547e4a:{NFSU2_TR(0x547e4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547e4b:{NFSU2_TR(0x547e4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547e4f:{NFSU2_TR(0x547e4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14cull))));
__builtin_memmove((R+24),(U+0),4);
}
B547e55:{NFSU2_TR(0x547e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547e56:{NFSU2_TR(0x547e56);
__builtin_memmove((R+4),(R+24),4);
}
B547e58:{NFSU2_TR(0x547e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547e5c:{NFSU2_TR(0x547e5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c30cull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e64:{NFSU2_TR(0x547e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547e68:{NFSU2_TR(0x547e68);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c2fcull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e70:{NFSU2_TR(0x547e70);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c2e8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e78:{NFSU2_TR(0x547e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c2d4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e80:{NFSU2_TR(0x547e80);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e88:{NFSU2_TR(0x547e88);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547e90:{NFSU2_TR(0x547e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547e94:{NFSU2_TR(0x547e94);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547e98:{NFSU2_TR(0x547e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3e4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ea0:{NFSU2_TR(0x547ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547ea5ull));
TAIL_STATIC(0x540c10u,540);
}
B547ea5:L547ea5:{c.instructions+=2;NFSU2_TR(0x547ea5);
u8 U[4];
w4(U+0,u32(0x79c2d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547eaa:{NFSU2_TR(0x547eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547eafull));
TAIL_STATIC(0x505450u,505);
}
B547eaf:L547eaf:{c.instructions+=4;NFSU2_TR(0x547eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547eb2:{NFSU2_TR(0x547eb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547eb3:{NFSU2_TR(0x547eb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547eb4:{NFSU2_TR(0x547eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547eb9ull));
TAIL_STATIC(0x537a60u,537);
}
B547eb9:L547eb9:{c.instructions+=15;NFSU2_TR(0x547eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547ebc:{NFSU2_TR(0x547ebc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547ec0:{NFSU2_TR(0x547ec0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547ec3:{NFSU2_TR(0x547ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547ec6:{NFSU2_TR(0x547ec6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547ec7:{NFSU2_TR(0x547ec7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B547ecb:{NFSU2_TR(0x547ecb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x198ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547ed1:{NFSU2_TR(0x547ed1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547ed2:{NFSU2_TR(0x547ed2);
__builtin_memmove((R+4),(R+24),4);
}
B547ed4:{NFSU2_TR(0x547ed4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c2c0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547edc:{NFSU2_TR(0x547edc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547ee0:{NFSU2_TR(0x547ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c2acull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ee8:{NFSU2_TR(0x547ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c294ull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ef0:{NFSU2_TR(0x547ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c27cull));
s4(u32(r4(U+0)),r4(U+4));
}
B547ef8:{NFSU2_TR(0x547ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547efdull));
TAIL_STATIC(0x540c10u,540);
}
B547efd:L547efd:{c.instructions+=2;NFSU2_TR(0x547efd);
u8 U[4];
w4(U+0,u32(0x79c27cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f02:{NFSU2_TR(0x547f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f07ull));
TAIL_STATIC(0x505450u,505);
}
B547f07:L547f07:{c.instructions+=4;NFSU2_TR(0x547f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547f0a:{NFSU2_TR(0x547f0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f0b:{NFSU2_TR(0x547f0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f0c:{NFSU2_TR(0x547f0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f11ull));
TAIL_STATIC(0x537a60u,537);
}
B547f11:L547f11:{c.instructions+=9;NFSU2_TR(0x547f11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547f14:{NFSU2_TR(0x547f14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547f17:{NFSU2_TR(0x547f17);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547f1b:{NFSU2_TR(0x547f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547f1c:{NFSU2_TR(0x547f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B547f1f:{NFSU2_TR(0x547f1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547f20:{NFSU2_TR(0x547f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547f21:{NFSU2_TR(0x547f21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B547f24:{NFSU2_TR(0x547f24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547f30:L547f30:{c.instructions+=6;NFSU2_TR(0x547f30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f31:{NFSU2_TR(0x547f31);
__builtin_memmove((R+24),(R+4),4);
}
B547f33:{NFSU2_TR(0x547f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547f36:{NFSU2_TR(0x547f36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B547f39:{NFSU2_TR(0x547f39);
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
B547f3b:{NFSU2_TR(0x547f3b);
if(r1(R+518)){TAIL_STATIC(0x54800au,548);}
}
B547f41:L547f41:{c.instructions+=5;NFSU2_TR(0x547f41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f42:{NFSU2_TR(0x547f42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f43:{NFSU2_TR(0x547f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B547f46:{NFSU2_TR(0x547f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B547f48:{NFSU2_TR(0x547f48);
if(r1(R+518)){{goto L547f8f;}}
}
B547f4a:L547f4a:{c.instructions+=3;NFSU2_TR(0x547f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547f4d:{NFSU2_TR(0x547f4d);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f52:{NFSU2_TR(0x547f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f57ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B547f57:L547f57:{c.instructions+=4;NFSU2_TR(0x547f57);
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
B547f59:{NFSU2_TR(0x547f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547f5c:{NFSU2_TR(0x547f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B547f5f:{NFSU2_TR(0x547f5f);
if(r1(R+518)){{goto L547f7b;}}
}
B547f61:L547f61:{c.instructions+=3;NFSU2_TR(0x547f61);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f63:{NFSU2_TR(0x547f63);
u8 U[4];
w4(U+0,u32(0x4732da07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f68:{NFSU2_TR(0x547f68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f6dull));
TAIL_STATIC(0x61b500u,61b);
}
B547f6d:L547f6d:{c.instructions+=4;NFSU2_TR(0x547f6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f6e:{NFSU2_TR(0x547f6e);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f73:{NFSU2_TR(0x547f73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f74:{NFSU2_TR(0x547f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f79ull));
TAIL_STATIC(0x495460u,495);
}
B547f79:L547f79:{c.instructions+=1;NFSU2_TR(0x547f79);
{goto L547f8c;}
}
B547f7b:L547f7b:{c.instructions+=1;NFSU2_TR(0x547f7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f80ull));
TAIL_STATIC(0x610000u,610);
}
B547f80:L547f80:{c.instructions+=4;NFSU2_TR(0x547f80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f81:{NFSU2_TR(0x547f81);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f86:{NFSU2_TR(0x547f86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f87:{NFSU2_TR(0x547f87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f8cull));
TAIL_STATIC(0x537b80u,537);
}
B547f8c:L547f8c:{c.instructions+=1;NFSU2_TR(0x547f8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B547f8f:L547f8f:{c.instructions+=2;NFSU2_TR(0x547f8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B547f92:{NFSU2_TR(0x547f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547f97ull));
TAIL_STATIC(0x51f7e0u,51f);
}
B547f97:L547f97:{c.instructions+=7;NFSU2_TR(0x547f97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f98:{NFSU2_TR(0x547f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547f9e:{NFSU2_TR(0x547f9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547f9f:{NFSU2_TR(0x547f9f);
w4(R+12,u32(0x1ull));
}
B547fa4:{NFSU2_TR(0x547fa4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fa5:{NFSU2_TR(0x547fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B547fab:{NFSU2_TR(0x547fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547fb0ull));
TAIL_STATIC(0x538080u,538);
}
B547fb0:L547fb0:{c.instructions+=2;NFSU2_TR(0x547fb0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547fb6:{NFSU2_TR(0x547fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L547ff7;}}
}
B547fb8:L547fb8:{c.instructions+=2;NFSU2_TR(0x547fb8);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B547fbe:{NFSU2_TR(0x547fbe);
if(r1(R+518)){{goto L547ff7;}}
}
B547fc0:L547fc0:{c.instructions+=2;NFSU2_TR(0x547fc0);
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
B547fc2:{NFSU2_TR(0x547fc2);
if(r1(R+518)){TAIL_STATIC(0x548008u,548);}
}
B547fc4:L547fc4:{c.instructions+=8;NFSU2_TR(0x547fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547fc7:{NFSU2_TR(0x547fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B547fcd:{NFSU2_TR(0x547fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B547fd0:{NFSU2_TR(0x547fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B547fd3:{NFSU2_TR(0x547fd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fd4:{NFSU2_TR(0x547fd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fd5:{NFSU2_TR(0x547fd5);
w4(R+4,u32(0x85ad40ull));
}
B547fda:{NFSU2_TR(0x547fda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547fdfull));
TAIL_STATIC(0x514280u,514);
}
B547fdf:L547fdf:{c.instructions+=5;NFSU2_TR(0x547fdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fe0:{NFSU2_TR(0x547fe0);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fe5:{NFSU2_TR(0x547fe5);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fea:{NFSU2_TR(0x547fea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547feb:{NFSU2_TR(0x547feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x547ff0ull));
TAIL_STATIC(0x537b80u,537);
}
B547ff0:L547ff0:{c.instructions+=5;NFSU2_TR(0x547ff0);
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
B547ff3:{NFSU2_TR(0x547ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B547ff4:{NFSU2_TR(0x547ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B547ff5:{NFSU2_TR(0x547ff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B547ff6:{NFSU2_TR(0x547ff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B547ff7:L547ff7:{c.instructions+=3;NFSU2_TR(0x547ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B547ffa:{NFSU2_TR(0x547ffa);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B547fff:{NFSU2_TR(0x547fff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x548000u,548);
}
XIT:NFSU2_TR_EXIT(0x547,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
