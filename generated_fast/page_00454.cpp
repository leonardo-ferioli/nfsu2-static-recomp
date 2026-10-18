#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44b(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_451(u8* __restrict R,Cpu& c);
u32 body_452(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x454,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x454,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_454(u8* __restrict R,Cpu& c);
u32 page_454(Cpu& c){return body_454(c.regs.data(),c);}
__attribute__((noinline)) u32 body_454(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x454000:goto L454000;
case 0x454006:c.instructions+=5;goto B454006;
case 0x45400c:c.instructions+=4;goto B45400c;
case 0x454011:c.instructions+=3;goto B454011;
case 0x454013:c.instructions+=2;goto B454013;
case 0x454019:c.instructions+=1;goto B454019;
case 0x45401b:goto L45401b;
case 0x454022:c.instructions+=1;goto B454022;
case 0x454024:goto L454024;
case 0x454026:c.instructions+=1;goto B454026;
case 0x454028:goto L454028;
case 0x45402d:goto L45402d;
case 0x45402e:c.instructions+=3;goto B45402e;
case 0x45402f:c.instructions+=2;goto B45402f;
case 0x454031:c.instructions+=1;goto B454031;
case 0x454036:goto L454036;
case 0x45403d:c.instructions+=2;goto B45403d;
case 0x45403e:c.instructions+=1;goto B45403e;
case 0x454043:goto L454043;
case 0x454046:c.instructions+=4;goto B454046;
case 0x45404b:c.instructions+=3;goto B45404b;
case 0x45404e:c.instructions+=2;goto B45404e;
case 0x454050:c.instructions+=1;goto B454050;
case 0x454052:goto L454052;
case 0x454055:c.instructions+=1;goto B454055;
case 0x454057:goto L454057;
case 0x454059:c.instructions+=2;goto B454059;
case 0x45405e:c.instructions+=1;goto B45405e;
case 0x454063:goto L454063;
case 0x454065:c.instructions+=1;goto B454065;
case 0x45406b:goto L45406b;
case 0x45406c:c.instructions+=2;goto B45406c;
case 0x454071:c.instructions+=1;goto B454071;
case 0x454076:goto L454076;
case 0x454078:c.instructions+=1;goto B454078;
case 0x45407e:goto L45407e;
case 0x454083:c.instructions+=4;goto B454083;
case 0x454084:c.instructions+=3;goto B454084;
case 0x45408b:c.instructions+=2;goto B45408b;
case 0x45408c:c.instructions+=1;goto B45408c;
case 0x454091:goto L454091;
case 0x454094:goto L454094;
case 0x45409a:c.instructions+=2;goto B45409a;
case 0x45409c:c.instructions+=1;goto B45409c;
case 0x45409e:goto L45409e;
case 0x4540a1:c.instructions+=2;goto B4540a1;
case 0x4540a2:c.instructions+=1;goto B4540a2;
case 0x4540a7:goto L4540a7;
case 0x4540a9:goto L4540a9;
case 0x4540ac:c.instructions+=3;goto B4540ac;
case 0x4540ad:c.instructions+=2;goto B4540ad;
case 0x4540b2:c.instructions+=1;goto B4540b2;
case 0x4540b7:goto L4540b7;
case 0x4540bb:c.instructions+=14;goto B4540bb;
case 0x4540be:c.instructions+=13;goto B4540be;
case 0x4540c2:c.instructions+=12;goto B4540c2;
case 0x4540c6:c.instructions+=11;goto B4540c6;
case 0x4540c9:c.instructions+=10;goto B4540c9;
case 0x4540cf:c.instructions+=9;goto B4540cf;
case 0x4540d2:c.instructions+=8;goto B4540d2;
case 0x4540d3:c.instructions+=7;goto B4540d3;
case 0x4540d6:c.instructions+=6;goto B4540d6;
case 0x4540d7:c.instructions+=5;goto B4540d7;
case 0x4540d8:c.instructions+=4;goto B4540d8;
case 0x4540da:c.instructions+=3;goto B4540da;
case 0x4540df:c.instructions+=2;goto B4540df;
case 0x4540e3:c.instructions+=1;goto B4540e3;
case 0x4540e8:goto L4540e8;
case 0x4540ec:c.instructions+=3;goto B4540ec;
case 0x4540ef:c.instructions+=2;goto B4540ef;
case 0x4540f0:c.instructions+=1;goto B4540f0;
case 0x4540f5:goto L4540f5;
case 0x4540f8:c.instructions+=4;goto B4540f8;
case 0x4540fe:c.instructions+=3;goto B4540fe;
case 0x4540ff:c.instructions+=2;goto B4540ff;
case 0x454101:c.instructions+=1;goto B454101;
case 0x454106:goto L454106;
case 0x45410c:c.instructions+=1;goto B45410c;
case 0x45410e:goto L45410e;
case 0x454111:c.instructions+=1;goto B454111;
case 0x454118:goto L454118;
case 0x454119:c.instructions+=4;goto B454119;
case 0x45411d:c.instructions+=3;goto B45411d;
case 0x45411e:c.instructions+=2;goto B45411e;
case 0x454120:c.instructions+=1;goto B454120;
case 0x454125:goto L454125;
case 0x454126:c.instructions+=4;goto B454126;
case 0x45412a:c.instructions+=3;goto B45412a;
case 0x45412b:c.instructions+=2;goto B45412b;
case 0x45412d:c.instructions+=1;goto B45412d;
case 0x454132:goto L454132;
case 0x454135:c.instructions+=2;goto B454135;
case 0x454137:c.instructions+=1;goto B454137;
case 0x454139:goto L454139;
case 0x45413c:c.instructions+=1;goto B45413c;
case 0x45413e:goto L45413e;
case 0x454141:c.instructions+=7;goto B454141;
case 0x454144:c.instructions+=6;goto B454144;
case 0x454145:c.instructions+=5;goto B454145;
case 0x45414b:c.instructions+=4;goto B45414b;
case 0x45414c:c.instructions+=3;goto B45414c;
case 0x454153:c.instructions+=2;goto B454153;
case 0x454154:c.instructions+=1;goto B454154;
case 0x454156:goto L454156;
case 0x454159:c.instructions+=6;goto B454159;
case 0x45415c:c.instructions+=5;goto B45415c;
case 0x45415d:c.instructions+=4;goto B45415d;
case 0x454162:c.instructions+=3;goto B454162;
case 0x454163:c.instructions+=2;goto B454163;
case 0x45416a:c.instructions+=1;goto B45416a;
case 0x45416b:goto L45416b;
case 0x454170:goto L454170;
case 0x454173:c.instructions+=3;goto B454173;
case 0x454176:c.instructions+=2;goto B454176;
case 0x454178:c.instructions+=1;goto B454178;
case 0x45417a:goto L45417a;
case 0x45417d:c.instructions+=1;goto B45417d;
case 0x45417f:goto L45417f;
case 0x454180:c.instructions+=1;goto B454180;
case 0x454182:goto L454182;
case 0x454189:c.instructions+=1;goto B454189;
case 0x45418b:goto L45418b;
case 0x45418e:c.instructions+=15;goto B45418e;
case 0x454191:c.instructions+=14;goto B454191;
case 0x454194:c.instructions+=13;goto B454194;
case 0x454197:c.instructions+=12;goto B454197;
case 0x45419b:c.instructions+=11;goto B45419b;
case 0x45419d:c.instructions+=10;goto B45419d;
case 0x4541a1:c.instructions+=9;goto B4541a1;
case 0x4541a5:c.instructions+=8;goto B4541a5;
case 0x4541a7:c.instructions+=7;goto B4541a7;
case 0x4541ab:c.instructions+=6;goto B4541ab;
case 0x4541af:c.instructions+=5;goto B4541af;
case 0x4541b1:c.instructions+=4;goto B4541b1;
case 0x4541b5:c.instructions+=3;goto B4541b5;
case 0x4541b7:c.instructions+=2;goto B4541b7;
case 0x4541b9:c.instructions+=1;goto B4541b9;
case 0x4541bb:goto L4541bb;
case 0x4541c2:goto L4541c2;
case 0x4541c6:c.instructions+=5;goto B4541c6;
case 0x4541c7:c.instructions+=4;goto B4541c7;
case 0x4541cb:c.instructions+=3;goto B4541cb;
case 0x4541cc:c.instructions+=2;goto B4541cc;
case 0x4541cd:c.instructions+=1;goto B4541cd;
case 0x4541d2:goto L4541d2;
case 0x4541d5:goto L4541d5;
case 0x4541d8:c.instructions+=2;goto B4541d8;
case 0x4541da:c.instructions+=1;goto B4541da;
case 0x4541dc:goto L4541dc;
case 0x4541df:c.instructions+=1;goto B4541df;
case 0x4541e1:goto L4541e1;
case 0x4541e2:c.instructions+=1;goto B4541e2;
case 0x4541e4:goto L4541e4;
case 0x4541eb:c.instructions+=1;goto B4541eb;
case 0x4541ed:goto L4541ed;
case 0x4541f0:c.instructions+=15;goto B4541f0;
case 0x4541f3:c.instructions+=14;goto B4541f3;
case 0x4541f6:c.instructions+=13;goto B4541f6;
case 0x4541f9:c.instructions+=12;goto B4541f9;
case 0x4541fd:c.instructions+=11;goto B4541fd;
case 0x4541ff:c.instructions+=10;goto B4541ff;
case 0x454203:c.instructions+=9;goto B454203;
case 0x454207:c.instructions+=8;goto B454207;
case 0x454209:c.instructions+=7;goto B454209;
case 0x45420d:c.instructions+=6;goto B45420d;
case 0x454211:c.instructions+=5;goto B454211;
case 0x454213:c.instructions+=4;goto B454213;
case 0x454217:c.instructions+=3;goto B454217;
case 0x454219:c.instructions+=2;goto B454219;
case 0x45421b:c.instructions+=1;goto B45421b;
case 0x45421d:goto L45421d;
case 0x454224:goto L454224;
case 0x454228:c.instructions+=5;goto B454228;
case 0x454229:c.instructions+=4;goto B454229;
case 0x45422d:c.instructions+=3;goto B45422d;
case 0x45422e:c.instructions+=2;goto B45422e;
case 0x45422f:c.instructions+=1;goto B45422f;
case 0x454234:goto L454234;
case 0x454237:goto L454237;
case 0x45423a:c.instructions+=2;goto B45423a;
case 0x45423c:c.instructions+=1;goto B45423c;
case 0x454242:goto L454242;
case 0x454245:c.instructions+=1;goto B454245;
case 0x45424b:goto L45424b;
case 0x45424e:c.instructions+=4;goto B45424e;
case 0x454254:c.instructions+=3;goto B454254;
case 0x454255:c.instructions+=2;goto B454255;
case 0x454258:c.instructions+=1;goto B454258;
case 0x45425d:goto L45425d;
case 0x454260:c.instructions+=4;goto B454260;
case 0x454263:c.instructions+=3;goto B454263;
case 0x454266:c.instructions+=2;goto B454266;
case 0x454267:c.instructions+=1;goto B454267;
case 0x45426c:goto L45426c;
case 0x454271:c.instructions+=5;goto B454271;
case 0x454274:c.instructions+=4;goto B454274;
case 0x454275:c.instructions+=3;goto B454275;
case 0x454276:c.instructions+=2;goto B454276;
case 0x454277:c.instructions+=1;goto B454277;
case 0x45427c:goto L45427c;
case 0x454280:c.instructions+=3;goto B454280;
case 0x454281:c.instructions+=2;goto B454281;
case 0x454284:c.instructions+=1;goto B454284;
case 0x454289:goto L454289;
case 0x45428d:c.instructions+=13;goto B45428d;
case 0x454293:c.instructions+=12;goto B454293;
case 0x454298:c.instructions+=11;goto B454298;
case 0x45429c:c.instructions+=10;goto B45429c;
case 0x4542a1:c.instructions+=9;goto B4542a1;
case 0x4542a5:c.instructions+=8;goto B4542a5;
case 0x4542ab:c.instructions+=7;goto B4542ab;
case 0x4542ac:c.instructions+=6;goto B4542ac;
case 0x4542b0:c.instructions+=5;goto B4542b0;
case 0x4542b4:c.instructions+=4;goto B4542b4;
case 0x4542ba:c.instructions+=3;goto B4542ba;
case 0x4542be:c.instructions+=2;goto B4542be;
case 0x4542c2:c.instructions+=1;goto B4542c2;
case 0x4542c7:goto L4542c7;
case 0x4542cb:c.instructions+=18;goto B4542cb;
case 0x4542cf:c.instructions+=17;goto B4542cf;
case 0x4542d2:c.instructions+=16;goto B4542d2;
case 0x4542d6:c.instructions+=15;goto B4542d6;
case 0x4542da:c.instructions+=14;goto B4542da;
case 0x4542de:c.instructions+=13;goto B4542de;
case 0x4542e2:c.instructions+=12;goto B4542e2;
case 0x4542e6:c.instructions+=11;goto B4542e6;
case 0x4542ea:c.instructions+=10;goto B4542ea;
case 0x4542ee:c.instructions+=9;goto B4542ee;
case 0x4542f2:c.instructions+=8;goto B4542f2;
case 0x4542f6:c.instructions+=7;goto B4542f6;
case 0x4542fa:c.instructions+=6;goto B4542fa;
case 0x4542fe:c.instructions+=5;goto B4542fe;
case 0x454302:c.instructions+=4;goto B454302;
case 0x454306:c.instructions+=3;goto B454306;
case 0x45430a:c.instructions+=2;goto B45430a;
case 0x45430e:c.instructions+=1;goto B45430e;
case 0x454312:goto L454312;
case 0x454316:c.instructions+=11;goto B454316;
case 0x454317:c.instructions+=10;goto B454317;
case 0x45431b:c.instructions+=9;goto B45431b;
case 0x45431c:c.instructions+=8;goto B45431c;
case 0x454320:c.instructions+=7;goto B454320;
case 0x454321:c.instructions+=6;goto B454321;
case 0x454328:c.instructions+=5;goto B454328;
case 0x454329:c.instructions+=4;goto B454329;
case 0x454331:c.instructions+=3;goto B454331;
case 0x454339:c.instructions+=2;goto B454339;
case 0x454341:c.instructions+=1;goto B454341;
case 0x454346:goto L454346;
case 0x45434c:c.instructions+=5;goto B45434c;
case 0x45434f:c.instructions+=4;goto B45434f;
case 0x454353:c.instructions+=3;goto B454353;
case 0x454356:c.instructions+=2;goto B454356;
case 0x454357:c.instructions+=1;goto B454357;
case 0x45435c:goto L45435c;
case 0x454362:c.instructions+=4;goto B454362;
case 0x454368:c.instructions+=3;goto B454368;
case 0x45436a:c.instructions+=2;goto B45436a;
case 0x45436e:c.instructions+=1;goto B45436e;
case 0x454370:goto L454370;
case 0x454375:c.instructions+=1;goto B454375;
case 0x45437a:goto L45437a;
case 0x45437c:c.instructions+=1;goto B45437c;
case 0x45437e:goto L45437e;
case 0x454381:c.instructions+=1;goto B454381;
case 0x454383:goto L454383;
case 0x45438b:goto L45438b;
case 0x45438f:c.instructions+=3;goto B45438f;
case 0x454392:c.instructions+=2;goto B454392;
case 0x454393:c.instructions+=1;goto B454393;
case 0x454398:goto L454398;
case 0x45439e:c.instructions+=34;goto B45439e;
case 0x4543a1:c.instructions+=33;goto B4543a1;
case 0x4543a7:c.instructions+=32;goto B4543a7;
case 0x4543ab:c.instructions+=31;goto B4543ab;
case 0x4543b1:c.instructions+=30;goto B4543b1;
case 0x4543b3:c.instructions+=29;goto B4543b3;
case 0x4543b9:c.instructions+=28;goto B4543b9;
case 0x4543bf:c.instructions+=27;goto B4543bf;
case 0x4543c1:c.instructions+=26;goto B4543c1;
case 0x4543c7:c.instructions+=25;goto B4543c7;
case 0x4543ca:c.instructions+=24;goto B4543ca;
case 0x4543cd:c.instructions+=23;goto B4543cd;
case 0x4543d0:c.instructions+=22;goto B4543d0;
case 0x4543d3:c.instructions+=21;goto B4543d3;
case 0x4543d9:c.instructions+=20;goto B4543d9;
case 0x4543de:c.instructions+=19;goto B4543de;
case 0x4543df:c.instructions+=18;goto B4543df;
case 0x4543e6:c.instructions+=17;goto B4543e6;
case 0x4543e9:c.instructions+=16;goto B4543e9;
case 0x4543ec:c.instructions+=15;goto B4543ec;
case 0x4543f2:c.instructions+=14;goto B4543f2;
case 0x4543f8:c.instructions+=13;goto B4543f8;
case 0x4543fe:c.instructions+=12;goto B4543fe;
case 0x454404:c.instructions+=11;goto B454404;
case 0x454407:c.instructions+=10;goto B454407;
case 0x45440d:c.instructions+=9;goto B45440d;
case 0x454413:c.instructions+=8;goto B454413;
case 0x454419:c.instructions+=7;goto B454419;
case 0x45441f:c.instructions+=6;goto B45441f;
case 0x454425:c.instructions+=5;goto B454425;
case 0x454428:c.instructions+=4;goto B454428;
case 0x45442e:c.instructions+=3;goto B45442e;
case 0x454431:c.instructions+=2;goto B454431;
case 0x454432:c.instructions+=1;goto B454432;
case 0x454437:goto L454437;
case 0x45443d:c.instructions+=2;goto B45443d;
case 0x45443f:c.instructions+=1;goto B45443f;
case 0x454445:goto L454445;
case 0x454448:c.instructions+=2;goto B454448;
case 0x45444a:c.instructions+=1;goto B45444a;
case 0x45444c:goto L45444c;
case 0x454450:c.instructions+=1;goto B454450;
case 0x454452:goto L454452;
case 0x454455:c.instructions+=6;goto B454455;
case 0x454456:c.instructions+=5;goto B454456;
case 0x454457:c.instructions+=4;goto B454457;
case 0x45445e:c.instructions+=3;goto B45445e;
case 0x45445f:c.instructions+=2;goto B45445f;
case 0x454461:c.instructions+=1;goto B454461;
case 0x454466:goto L454466;
case 0x454469:c.instructions+=6;goto B454469;
case 0x45446a:c.instructions+=5;goto B45446a;
case 0x454470:c.instructions+=4;goto B454470;
case 0x454471:c.instructions+=3;goto B454471;
case 0x454478:c.instructions+=2;goto B454478;
case 0x454479:c.instructions+=1;goto B454479;
case 0x45447e:goto L45447e;
case 0x454480:c.instructions+=1;goto B454480;
case 0x454482:goto L454482;
case 0x454485:c.instructions+=2;goto B454485;
case 0x454487:c.instructions+=1;goto B454487;
case 0x454489:goto L454489;
case 0x45448d:c.instructions+=1;goto B45448d;
case 0x45448f:goto L45448f;
case 0x454492:c.instructions+=2;goto B454492;
case 0x454494:c.instructions+=1;goto B454494;
case 0x454496:goto L454496;
case 0x454499:c.instructions+=1;goto B454499;
case 0x45449b:goto L45449b;
case 0x4544a0:c.instructions+=1;goto B4544a0;
case 0x4544a2:goto L4544a2;
case 0x4544a6:c.instructions+=6;goto B4544a6;
case 0x4544a7:c.instructions+=5;goto B4544a7;
case 0x4544a8:c.instructions+=4;goto B4544a8;
case 0x4544af:c.instructions+=3;goto B4544af;
case 0x4544b0:c.instructions+=2;goto B4544b0;
case 0x4544b2:c.instructions+=1;goto B4544b2;
case 0x4544b7:goto L4544b7;
case 0x4544ba:c.instructions+=5;goto B4544ba;
case 0x4544bb:c.instructions+=4;goto B4544bb;
case 0x4544bc:c.instructions+=3;goto B4544bc;
case 0x4544c3:c.instructions+=2;goto B4544c3;
case 0x4544c4:c.instructions+=1;goto B4544c4;
case 0x4544c6:goto L4544c6;
case 0x4544c9:c.instructions+=2;goto B4544c9;
case 0x4544cb:c.instructions+=1;goto B4544cb;
case 0x4544cd:goto L4544cd;
case 0x4544d0:c.instructions+=1;goto B4544d0;
case 0x4544d2:goto L4544d2;
case 0x4544d7:c.instructions+=1;goto B4544d7;
case 0x4544d9:goto L4544d9;
case 0x4544dd:c.instructions+=6;goto B4544dd;
case 0x4544de:c.instructions+=5;goto B4544de;
case 0x4544df:c.instructions+=4;goto B4544df;
case 0x4544e6:c.instructions+=3;goto B4544e6;
case 0x4544e7:c.instructions+=2;goto B4544e7;
case 0x4544e9:c.instructions+=1;goto B4544e9;
case 0x4544ee:goto L4544ee;
case 0x4544f1:c.instructions+=2;goto B4544f1;
case 0x4544f3:c.instructions+=1;goto B4544f3;
case 0x4544f5:goto L4544f5;
case 0x4544f8:c.instructions+=1;goto B4544f8;
case 0x4544fa:goto L4544fa;
case 0x4544ff:c.instructions+=1;goto B4544ff;
case 0x454501:goto L454501;
case 0x454504:c.instructions+=4;goto B454504;
case 0x454505:c.instructions+=3;goto B454505;
case 0x454506:c.instructions+=2;goto B454506;
case 0x45450d:c.instructions+=1;goto B45450d;
case 0x45450e:goto L45450e;
case 0x454510:c.instructions+=1;goto B454510;
case 0x454515:goto L454515;
case 0x454519:c.instructions+=4;goto B454519;
case 0x45451a:c.instructions+=3;goto B45451a;
case 0x45451e:c.instructions+=2;goto B45451e;
case 0x45451f:c.instructions+=1;goto B45451f;
case 0x454524:goto L454524;
case 0x454529:c.instructions+=3;goto B454529;
case 0x45452c:c.instructions+=2;goto B45452c;
case 0x45452e:c.instructions+=1;goto B45452e;
case 0x454530:goto L454530;
case 0x454533:c.instructions+=2;goto B454533;
case 0x454539:c.instructions+=1;goto B454539;
case 0x45453b:goto L45453b;
case 0x45453d:goto L45453d;
case 0x454542:c.instructions+=5;goto B454542;
case 0x454543:c.instructions+=4;goto B454543;
case 0x45454a:c.instructions+=3;goto B45454a;
case 0x45454b:c.instructions+=2;goto B45454b;
case 0x45454e:c.instructions+=1;goto B45454e;
case 0x454553:goto L454553;
case 0x454556:c.instructions+=2;goto B454556;
case 0x454557:c.instructions+=1;goto B454557;
case 0x45455c:goto L45455c;
case 0x454562:c.instructions+=6;goto B454562;
case 0x454565:c.instructions+=5;goto B454565;
case 0x454566:c.instructions+=4;goto B454566;
case 0x45456c:c.instructions+=3;goto B45456c;
case 0x454572:c.instructions+=2;goto B454572;
case 0x454575:c.instructions+=1;goto B454575;
case 0x45457a:goto L45457a;
case 0x45457e:c.instructions+=4;goto B45457e;
case 0x454584:c.instructions+=3;goto B454584;
case 0x454586:c.instructions+=2;goto B454586;
case 0x454589:c.instructions+=1;goto B454589;
case 0x45458f:goto L45458f;
case 0x454592:c.instructions+=2;goto B454592;
case 0x454593:c.instructions+=1;goto B454593;
case 0x454598:goto L454598;
case 0x45459e:c.instructions+=3;goto B45459e;
case 0x4545a0:c.instructions+=2;goto B4545a0;
case 0x4545a3:c.instructions+=1;goto B4545a3;
case 0x4545a5:goto L4545a5;
case 0x4545a7:c.instructions+=1;goto B4545a7;
case 0x4545ad:goto L4545ad;
case 0x4545b3:c.instructions+=4;goto B4545b3;
case 0x4545b4:c.instructions+=3;goto B4545b4;
case 0x4545b6:c.instructions+=2;goto B4545b6;
case 0x4545ba:c.instructions+=1;goto B4545ba;
case 0x4545bf:goto L4545bf;
case 0x4545c0:c.instructions+=1;goto B4545c0;
case 0x4545c5:goto L4545c5;
case 0x4545c9:c.instructions+=5;goto B4545c9;
case 0x4545cd:c.instructions+=4;goto B4545cd;
case 0x4545d1:c.instructions+=3;goto B4545d1;
case 0x4545d2:c.instructions+=2;goto B4545d2;
case 0x4545d6:c.instructions+=1;goto B4545d6;
case 0x4545db:goto L4545db;
case 0x4545e1:c.instructions+=21;goto B4545e1;
case 0x4545e4:c.instructions+=20;goto B4545e4;
case 0x4545e8:c.instructions+=19;goto B4545e8;
case 0x4545ec:c.instructions+=18;goto B4545ec;
case 0x4545f0:c.instructions+=17;goto B4545f0;
case 0x4545f2:c.instructions+=16;goto B4545f2;
case 0x4545f6:c.instructions+=15;goto B4545f6;
case 0x4545fa:c.instructions+=14;goto B4545fa;
case 0x4545fe:c.instructions+=13;goto B4545fe;
case 0x454600:c.instructions+=12;goto B454600;
case 0x454604:c.instructions+=11;goto B454604;
case 0x45460c:c.instructions+=10;goto B45460c;
case 0x45460e:c.instructions+=9;goto B45460e;
case 0x454610:c.instructions+=8;goto B454610;
case 0x454614:c.instructions+=7;goto B454614;
case 0x45461a:c.instructions+=6;goto B45461a;
case 0x45461e:c.instructions+=5;goto B45461e;
case 0x454622:c.instructions+=4;goto B454622;
case 0x454628:c.instructions+=3;goto B454628;
case 0x45462a:c.instructions+=2;goto B45462a;
case 0x45462d:c.instructions+=1;goto B45462d;
case 0x45462f:goto L45462f;
case 0x454633:c.instructions+=3;goto B454633;
case 0x454635:c.instructions+=2;goto B454635;
case 0x45463b:c.instructions+=1;goto B45463b;
case 0x45463f:goto L45463f;
case 0x454644:c.instructions+=3;goto B454644;
case 0x454646:c.instructions+=2;goto B454646;
case 0x454648:c.instructions+=1;goto B454648;
case 0x45464a:goto L45464a;
case 0x45464e:c.instructions+=7;goto B45464e;
case 0x454651:c.instructions+=6;goto B454651;
case 0x454655:c.instructions+=5;goto B454655;
case 0x45465b:c.instructions+=4;goto B45465b;
case 0x454661:c.instructions+=3;goto B454661;
case 0x454666:c.instructions+=2;goto B454666;
case 0x454668:c.instructions+=1;goto B454668;
case 0x45466a:goto L45466a;
case 0x45466e:c.instructions+=4;goto B45466e;
case 0x454671:c.instructions+=3;goto B454671;
case 0x454675:c.instructions+=2;goto B454675;
case 0x45467b:c.instructions+=1;goto B45467b;
case 0x45467d:goto L45467d;
case 0x454683:c.instructions+=1;goto B454683;
case 0x454685:goto L454685;
case 0x454688:c.instructions+=3;goto B454688;
case 0x45468e:c.instructions+=2;goto B45468e;
case 0x454694:c.instructions+=1;goto B454694;
case 0x454696:goto L454696;
case 0x454699:c.instructions+=1;goto B454699;
case 0x45469f:goto L45469f;
case 0x4546a2:c.instructions+=2;goto B4546a2;
case 0x4546a3:c.instructions+=1;goto B4546a3;
case 0x4546a8:goto L4546a8;
case 0x4546ae:c.instructions+=3;goto B4546ae;
case 0x4546b0:c.instructions+=2;goto B4546b0;
case 0x4546b3:c.instructions+=1;goto B4546b3;
case 0x4546b9:goto L4546b9;
case 0x4546bc:c.instructions+=2;goto B4546bc;
case 0x4546bd:c.instructions+=1;goto B4546bd;
case 0x4546c2:goto L4546c2;
case 0x4546c5:c.instructions+=7;goto B4546c5;
case 0x4546c7:c.instructions+=6;goto B4546c7;
case 0x4546cb:c.instructions+=5;goto B4546cb;
case 0x4546cc:c.instructions+=4;goto B4546cc;
case 0x4546d0:c.instructions+=3;goto B4546d0;
case 0x4546d1:c.instructions+=2;goto B4546d1;
case 0x4546d4:c.instructions+=1;goto B4546d4;
case 0x4546d9:goto L4546d9;
case 0x4546dd:c.instructions+=9;goto B4546dd;
case 0x4546e1:c.instructions+=8;goto B4546e1;
case 0x4546e5:c.instructions+=7;goto B4546e5;
case 0x4546ec:c.instructions+=6;goto B4546ec;
case 0x4546f0:c.instructions+=5;goto B4546f0;
case 0x4546f7:c.instructions+=4;goto B4546f7;
case 0x4546fa:c.instructions+=3;goto B4546fa;
case 0x4546fb:c.instructions+=2;goto B4546fb;
case 0x454702:c.instructions+=1;goto B454702;
case 0x454707:goto L454707;
case 0x45470d:c.instructions+=7;goto B45470d;
case 0x454711:c.instructions+=6;goto B454711;
case 0x454712:c.instructions+=5;goto B454712;
case 0x454716:c.instructions+=4;goto B454716;
case 0x45471d:c.instructions+=3;goto B45471d;
case 0x45471e:c.instructions+=2;goto B45471e;
case 0x454721:c.instructions+=1;goto B454721;
case 0x454726:goto L454726;
case 0x45472a:c.instructions+=6;goto B45472a;
case 0x454730:c.instructions+=5;goto B454730;
case 0x454731:c.instructions+=4;goto B454731;
case 0x454733:c.instructions+=3;goto B454733;
case 0x454735:c.instructions+=2;goto B454735;
case 0x454738:c.instructions+=1;goto B454738;
case 0x45473a:goto L45473a;
case 0x45473e:c.instructions+=8;goto B45473e;
case 0x454745:c.instructions+=7;goto B454745;
case 0x45474b:c.instructions+=6;goto B45474b;
case 0x45474c:c.instructions+=5;goto B45474c;
case 0x454757:c.instructions+=4;goto B454757;
case 0x454759:c.instructions+=3;goto B454759;
case 0x454760:c.instructions+=2;goto B454760;
case 0x454763:c.instructions+=1;goto B454763;
case 0x454768:goto L454768;
case 0x454769:c.instructions+=5;goto B454769;
case 0x45476a:c.instructions+=4;goto B45476a;
case 0x45476b:c.instructions+=3;goto B45476b;
case 0x45476d:c.instructions+=2;goto B45476d;
case 0x45476e:c.instructions+=1;goto B45476e;
case 0x45476f:goto L45476f;
case 0x454772:c.instructions+=4;goto B454772;
case 0x454779:c.instructions+=3;goto B454779;
case 0x45477a:c.instructions+=2;goto B45477a;
case 0x45477b:c.instructions+=1;goto B45477b;
case 0x454780:goto L454780;
case 0x454781:c.instructions+=5;goto B454781;
case 0x454782:c.instructions+=4;goto B454782;
case 0x454783:c.instructions+=3;goto B454783;
case 0x454785:c.instructions+=2;goto B454785;
case 0x454786:c.instructions+=1;goto B454786;
case 0x454790:goto L454790;
case 0x454794:c.instructions+=10;goto B454794;
case 0x454798:c.instructions+=9;goto B454798;
case 0x45479e:c.instructions+=8;goto B45479e;
case 0x45479f:c.instructions+=7;goto B45479f;
case 0x4547a0:c.instructions+=6;goto B4547a0;
case 0x4547a1:c.instructions+=5;goto B4547a1;
case 0x4547a3:c.instructions+=4;goto B4547a3;
case 0x4547a4:c.instructions+=3;goto B4547a4;
case 0x4547aa:c.instructions+=2;goto B4547aa;
case 0x4547ad:c.instructions+=1;goto B4547ad;
case 0x4547b2:goto L4547b2;
case 0x4547b5:c.instructions+=5;goto B4547b5;
case 0x4547b8:c.instructions+=4;goto B4547b8;
case 0x4547bb:c.instructions+=3;goto B4547bb;
case 0x4547bd:c.instructions+=2;goto B4547bd;
case 0x4547be:c.instructions+=1;goto B4547be;
case 0x4547c3:goto L4547c3;
case 0x4547c7:c.instructions+=5;goto B4547c7;
case 0x4547c9:c.instructions+=4;goto B4547c9;
case 0x4547cf:c.instructions+=3;goto B4547cf;
case 0x4547d2:c.instructions+=2;goto B4547d2;
case 0x4547d4:c.instructions+=1;goto B4547d4;
case 0x4547d6:goto L4547d6;
case 0x4547dd:c.instructions+=2;goto B4547dd;
case 0x4547e0:c.instructions+=1;goto B4547e0;
case 0x4547e2:goto L4547e2;
case 0x4547e5:c.instructions+=3;goto B4547e5;
case 0x4547e8:c.instructions+=2;goto B4547e8;
case 0x4547eb:c.instructions+=1;goto B4547eb;
case 0x4547ee:goto L4547ee;
case 0x4547f1:c.instructions+=3;goto B4547f1;
case 0x4547f4:c.instructions+=2;goto B4547f4;
case 0x4547fc:c.instructions+=1;goto B4547fc;
case 0x454801:goto L454801;
case 0x454803:c.instructions+=2;goto B454803;
case 0x454806:c.instructions+=1;goto B454806;
case 0x45480b:goto L45480b;
case 0x45480d:c.instructions+=2;goto B45480d;
case 0x45480f:c.instructions+=1;goto B45480f;
case 0x454814:goto L454814;
case 0x454816:c.instructions+=1;goto B454816;
case 0x454818:goto L454818;
case 0x45481a:c.instructions+=1;goto B45481a;
case 0x45481c:goto L45481c;
case 0x45481e:c.instructions+=8;goto B45481e;
case 0x45481f:c.instructions+=7;goto B45481f;
case 0x454822:c.instructions+=6;goto B454822;
case 0x454823:c.instructions+=5;goto B454823;
case 0x454824:c.instructions+=4;goto B454824;
case 0x454825:c.instructions+=3;goto B454825;
case 0x454826:c.instructions+=2;goto B454826;
case 0x454828:c.instructions+=1;goto B454828;
case 0x45482d:goto L45482d;
case 0x454831:c.instructions+=3;goto B454831;
case 0x454833:c.instructions+=2;goto B454833;
case 0x454836:c.instructions+=1;goto B454836;
case 0x454838:goto L454838;
case 0x45483a:c.instructions+=2;goto B45483a;
case 0x45483b:c.instructions+=1;goto B45483b;
case 0x454840:goto L454840;
case 0x454843:c.instructions+=8;goto B454843;
case 0x454844:c.instructions+=7;goto B454844;
case 0x45484a:c.instructions+=6;goto B45484a;
case 0x454851:c.instructions+=5;goto B454851;
case 0x454853:c.instructions+=4;goto B454853;
case 0x454854:c.instructions+=3;goto B454854;
case 0x454855:c.instructions+=2;goto B454855;
case 0x454856:c.instructions+=1;goto B454856;
case 0x454859:goto L454859;
case 0x45485d:c.instructions+=8;goto B45485d;
case 0x45485f:c.instructions+=7;goto B45485f;
case 0x454861:c.instructions+=6;goto B454861;
case 0x454862:c.instructions+=5;goto B454862;
case 0x454863:c.instructions+=4;goto B454863;
case 0x454866:c.instructions+=3;goto B454866;
case 0x454867:c.instructions+=2;goto B454867;
case 0x454869:c.instructions+=1;goto B454869;
case 0x45486e:goto L45486e;
case 0x454870:c.instructions+=1;goto B454870;
case 0x454872:goto L454872;
case 0x454874:c.instructions+=23;goto B454874;
case 0x454877:c.instructions+=22;goto B454877;
case 0x45487b:c.instructions+=21;goto B45487b;
case 0x45487f:c.instructions+=20;goto B45487f;
case 0x454883:c.instructions+=19;goto B454883;
case 0x454887:c.instructions+=18;goto B454887;
case 0x45488b:c.instructions+=17;goto B45488b;
case 0x454891:c.instructions+=16;goto B454891;
case 0x454895:c.instructions+=15;goto B454895;
case 0x45489b:c.instructions+=14;goto B45489b;
case 0x45489d:c.instructions+=13;goto B45489d;
case 0x45489f:c.instructions+=12;goto B45489f;
case 0x4548a1:c.instructions+=11;goto B4548a1;
case 0x4548a4:c.instructions+=10;goto B4548a4;
case 0x4548a9:c.instructions+=9;goto B4548a9;
case 0x4548ac:c.instructions+=8;goto B4548ac;
case 0x4548af:c.instructions+=7;goto B4548af;
case 0x4548b1:c.instructions+=6;goto B4548b1;
case 0x4548b3:c.instructions+=5;goto B4548b3;
case 0x4548b5:c.instructions+=4;goto B4548b5;
case 0x4548b8:c.instructions+=3;goto B4548b8;
case 0x4548ba:c.instructions+=2;goto B4548ba;
case 0x4548bc:c.instructions+=1;goto B4548bc;
case 0x4548be:goto L4548be;
case 0x4548c3:goto L4548c3;
case 0x4548c7:c.instructions+=5;goto B4548c7;
case 0x4548c8:c.instructions+=4;goto B4548c8;
case 0x4548c9:c.instructions+=3;goto B4548c9;
case 0x4548ca:c.instructions+=2;goto B4548ca;
case 0x4548cc:c.instructions+=1;goto B4548cc;
case 0x4548d1:goto L4548d1;
case 0x4548d5:c.instructions+=5;goto B4548d5;
case 0x4548d9:c.instructions+=4;goto B4548d9;
case 0x4548dc:c.instructions+=3;goto B4548dc;
case 0x4548de:c.instructions+=2;goto B4548de;
case 0x4548e1:c.instructions+=1;goto B4548e1;
case 0x4548e3:goto L4548e3;
case 0x4548e5:c.instructions+=3;goto B4548e5;
case 0x4548e9:c.instructions+=2;goto B4548e9;
case 0x4548eb:c.instructions+=1;goto B4548eb;
case 0x4548ed:goto L4548ed;
case 0x4548f0:c.instructions+=4;goto B4548f0;
case 0x4548f1:c.instructions+=3;goto B4548f1;
case 0x4548f4:c.instructions+=2;goto B4548f4;
case 0x4548f6:c.instructions+=1;goto B4548f6;
case 0x4548f8:goto L4548f8;
case 0x4548fc:c.instructions+=8;goto B4548fc;
case 0x4548ff:c.instructions+=7;goto B4548ff;
case 0x454900:c.instructions+=6;goto B454900;
case 0x454903:c.instructions+=5;goto B454903;
case 0x454905:c.instructions+=4;goto B454905;
case 0x454906:c.instructions+=3;goto B454906;
case 0x454907:c.instructions+=2;goto B454907;
case 0x454908:c.instructions+=1;goto B454908;
case 0x454910:goto L454910;
case 0x454911:c.instructions+=3;goto B454911;
case 0x454912:c.instructions+=2;goto B454912;
case 0x454914:c.instructions+=1;goto B454914;
case 0x454919:goto L454919;
case 0x45491b:c.instructions+=2;goto B45491b;
case 0x45491d:c.instructions+=1;goto B45491d;
case 0x45491f:goto L45491f;
case 0x454925:c.instructions+=5;goto B454925;
case 0x454926:c.instructions+=4;goto B454926;
case 0x454929:c.instructions+=3;goto B454929;
case 0x45492a:c.instructions+=2;goto B45492a;
case 0x45492c:c.instructions+=1;goto B45492c;
case 0x454931:goto L454931;
case 0x454933:c.instructions+=2;goto B454933;
case 0x454934:c.instructions+=1;goto B454934;
case 0x454936:goto L454936;
case 0x454938:c.instructions+=1;goto B454938;
case 0x45493a:goto L45493a;
case 0x45493c:c.instructions+=5;goto B45493c;
case 0x45493f:c.instructions+=4;goto B45493f;
case 0x454941:c.instructions+=3;goto B454941;
case 0x454944:c.instructions+=2;goto B454944;
case 0x454947:c.instructions+=1;goto B454947;
case 0x454949:goto L454949;
case 0x45494b:c.instructions+=1;goto B45494b;
case 0x454950:goto L454950;
case 0x454953:c.instructions+=3;goto B454953;
case 0x454959:c.instructions+=2;goto B454959;
case 0x45495b:c.instructions+=1;goto B45495b;
case 0x45495d:goto L45495d;
case 0x45495f:goto L45495f;
case 0x454965:goto L454965;
case 0x454966:c.instructions+=2;goto B454966;
case 0x454967:c.instructions+=1;goto B454967;
case 0x454970:goto L454970;
case 0x454971:c.instructions+=5;goto B454971;
case 0x454973:c.instructions+=4;goto B454973;
case 0x454979:c.instructions+=3;goto B454979;
case 0x45497c:c.instructions+=2;goto B45497c;
case 0x45497f:c.instructions+=1;goto B45497f;
case 0x454985:goto L454985;
case 0x454986:c.instructions+=3;goto B454986;
case 0x454987:c.instructions+=2;goto B454987;
case 0x454988:c.instructions+=1;goto B454988;
case 0x45498f:goto L45498f;
case 0x454993:c.instructions+=3;goto B454993;
case 0x454998:c.instructions+=2;goto B454998;
case 0x45499b:c.instructions+=1;goto B45499b;
case 0x4549a1:goto L4549a1;
case 0x4549a8:c.instructions+=1;goto B4549a8;
case 0x4549af:goto L4549af;
case 0x4549b4:c.instructions+=7;goto B4549b4;
case 0x4549b8:c.instructions+=6;goto B4549b8;
case 0x4549b9:c.instructions+=5;goto B4549b9;
case 0x4549bd:c.instructions+=4;goto B4549bd;
case 0x4549c2:c.instructions+=3;goto B4549c2;
case 0x4549c8:c.instructions+=2;goto B4549c8;
case 0x4549cb:c.instructions+=1;goto B4549cb;
case 0x4549d0:goto L4549d0;
case 0x4549d1:c.instructions+=5;goto B4549d1;
case 0x4549d7:c.instructions+=4;goto B4549d7;
case 0x4549d8:c.instructions+=3;goto B4549d8;
case 0x4549d9:c.instructions+=2;goto B4549d9;
case 0x4549da:c.instructions+=1;goto B4549da;
case 0x4549dd:goto L4549dd;
case 0x4549e2:c.instructions+=7;goto B4549e2;
case 0x4549e6:c.instructions+=6;goto B4549e6;
case 0x4549e7:c.instructions+=5;goto B4549e7;
case 0x4549eb:c.instructions+=4;goto B4549eb;
case 0x4549f0:c.instructions+=3;goto B4549f0;
case 0x4549f6:c.instructions+=2;goto B4549f6;
case 0x4549f9:c.instructions+=1;goto B4549f9;
case 0x4549fe:goto L4549fe;
case 0x454a04:c.instructions+=6;goto B454a04;
case 0x454a0a:c.instructions+=5;goto B454a0a;
case 0x454a10:c.instructions+=4;goto B454a10;
case 0x454a16:c.instructions+=3;goto B454a16;
case 0x454a18:c.instructions+=2;goto B454a18;
case 0x454a1b:c.instructions+=1;goto B454a1b;
case 0x454a1d:goto L454a1d;
case 0x454a1e:c.instructions+=5;goto B454a1e;
case 0x454a1f:c.instructions+=4;goto B454a1f;
case 0x454a20:c.instructions+=3;goto B454a20;
case 0x454a2a:c.instructions+=2;goto B454a2a;
case 0x454a2b:c.instructions+=1;goto B454a2b;
case 0x454a2e:goto L454a2e;
case 0x454a34:c.instructions+=4;goto B454a34;
case 0x454a3a:c.instructions+=3;goto B454a3a;
case 0x454a3c:c.instructions+=2;goto B454a3c;
case 0x454a3f:c.instructions+=1;goto B454a3f;
case 0x454a45:goto L454a45;
case 0x454a46:c.instructions+=5;goto B454a46;
case 0x454a47:c.instructions+=4;goto B454a47;
case 0x454a48:c.instructions+=3;goto B454a48;
case 0x454a52:c.instructions+=2;goto B454a52;
case 0x454a53:c.instructions+=1;goto B454a53;
case 0x454a56:goto L454a56;
case 0x454a5a:c.instructions+=2;goto B454a5a;
case 0x454a5c:c.instructions+=1;goto B454a5c;
case 0x454a62:goto L454a62;
case 0x454a64:c.instructions+=2;goto B454a64;
case 0x454a66:c.instructions+=1;goto B454a66;
case 0x454a6b:goto L454a6b;
case 0x454a6c:c.instructions+=4;goto B454a6c;
case 0x454a6d:c.instructions+=3;goto B454a6d;
case 0x454a6e:c.instructions+=2;goto B454a6e;
case 0x454a6f:c.instructions+=1;goto B454a6f;
case 0x454a72:goto L454a72;
case 0x454a76:c.instructions+=2;goto B454a76;
case 0x454a78:c.instructions+=1;goto B454a78;
case 0x454a7e:goto L454a7e;
case 0x454a80:c.instructions+=2;goto B454a80;
case 0x454a82:c.instructions+=1;goto B454a82;
case 0x454a87:goto L454a87;
case 0x454a88:c.instructions+=4;goto B454a88;
case 0x454a89:c.instructions+=3;goto B454a89;
case 0x454a8a:c.instructions+=2;goto B454a8a;
case 0x454a8b:c.instructions+=1;goto B454a8b;
case 0x454a8e:goto L454a8e;
case 0x454a94:c.instructions+=4;goto B454a94;
case 0x454a96:c.instructions+=3;goto B454a96;
case 0x454a97:c.instructions+=2;goto B454a97;
case 0x454a99:c.instructions+=1;goto B454a99;
case 0x454a9e:goto L454a9e;
case 0x454a9f:c.instructions+=4;goto B454a9f;
case 0x454aa0:c.instructions+=3;goto B454aa0;
case 0x454aa1:c.instructions+=2;goto B454aa1;
case 0x454aa2:c.instructions+=1;goto B454aa2;
case 0x454aa5:goto L454aa5;
case 0x454aab:c.instructions+=4;goto B454aab;
case 0x454aad:c.instructions+=3;goto B454aad;
case 0x454aae:c.instructions+=2;goto B454aae;
case 0x454ab0:c.instructions+=1;goto B454ab0;
case 0x454ab5:goto L454ab5;
case 0x454ab6:c.instructions+=4;goto B454ab6;
case 0x454ab7:c.instructions+=3;goto B454ab7;
case 0x454ab8:c.instructions+=2;goto B454ab8;
case 0x454ab9:c.instructions+=1;goto B454ab9;
case 0x454abc:goto L454abc;
case 0x454abe:c.instructions+=2;goto B454abe;
case 0x454ac0:c.instructions+=1;goto B454ac0;
case 0x454ac5:goto L454ac5;
case 0x454ac6:c.instructions+=4;goto B454ac6;
case 0x454ac7:c.instructions+=3;goto B454ac7;
case 0x454ac8:c.instructions+=2;goto B454ac8;
case 0x454ac9:c.instructions+=1;goto B454ac9;
case 0x454acc:goto L454acc;
case 0x454ad2:c.instructions+=8;goto B454ad2;
case 0x454ad8:c.instructions+=7;goto B454ad8;
case 0x454ada:c.instructions+=6;goto B454ada;
case 0x454adc:c.instructions+=5;goto B454adc;
case 0x454adf:c.instructions+=4;goto B454adf;
case 0x454ae2:c.instructions+=3;goto B454ae2;
case 0x454ae3:c.instructions+=2;goto B454ae3;
case 0x454ae5:c.instructions+=1;goto B454ae5;
case 0x454aea:goto L454aea;
case 0x454aeb:c.instructions+=4;goto B454aeb;
case 0x454aec:c.instructions+=3;goto B454aec;
case 0x454aed:c.instructions+=2;goto B454aed;
case 0x454aee:c.instructions+=1;goto B454aee;
case 0x454af1:goto L454af1;
case 0x454af7:c.instructions+=3;goto B454af7;
case 0x454af8:c.instructions+=2;goto B454af8;
case 0x454afa:c.instructions+=1;goto B454afa;
case 0x454aff:goto L454aff;
case 0x454b00:c.instructions+=4;goto B454b00;
case 0x454b01:c.instructions+=3;goto B454b01;
case 0x454b02:c.instructions+=2;goto B454b02;
case 0x454b03:c.instructions+=1;goto B454b03;
case 0x454b06:goto L454b06;
case 0x454b0c:c.instructions+=7;goto B454b0c;
case 0x454b10:c.instructions+=6;goto B454b10;
case 0x454b14:c.instructions+=5;goto B454b14;
case 0x454b15:c.instructions+=4;goto B454b15;
case 0x454b17:c.instructions+=3;goto B454b17;
case 0x454b1c:c.instructions+=2;goto B454b1c;
case 0x454b23:c.instructions+=1;goto B454b23;
case 0x454b28:goto L454b28;
case 0x454b2e:c.instructions+=5;goto B454b2e;
case 0x454b34:c.instructions+=4;goto B454b34;
case 0x454b3b:c.instructions+=3;goto B454b3b;
case 0x454b3c:c.instructions+=2;goto B454b3c;
case 0x454b3e:c.instructions+=1;goto B454b3e;
case 0x454b43:goto L454b43;
case 0x454b49:c.instructions+=3;goto B454b49;
case 0x454b4a:c.instructions+=2;goto B454b4a;
case 0x454b4c:c.instructions+=1;goto B454b4c;
case 0x454b51:goto L454b51;
case 0x454b52:c.instructions+=4;goto B454b52;
case 0x454b53:c.instructions+=3;goto B454b53;
case 0x454b54:c.instructions+=2;goto B454b54;
case 0x454b55:c.instructions+=1;goto B454b55;
case 0x454b58:goto L454b58;
case 0x454b5a:c.instructions+=2;goto B454b5a;
case 0x454b5c:c.instructions+=1;goto B454b5c;
case 0x454b61:goto L454b61;
case 0x454b62:c.instructions+=4;goto B454b62;
case 0x454b63:c.instructions+=3;goto B454b63;
case 0x454b64:c.instructions+=2;goto B454b64;
case 0x454b65:c.instructions+=1;goto B454b65;
case 0x454b68:goto L454b68;
case 0x454b6a:c.instructions+=5;goto B454b6a;
case 0x454b6c:c.instructions+=4;goto B454b6c;
case 0x454b6e:c.instructions+=3;goto B454b6e;
case 0x454b74:c.instructions+=2;goto B454b74;
case 0x454b7a:c.instructions+=1;goto B454b7a;
case 0x454b7f:goto L454b7f;
case 0x454b80:c.instructions+=4;goto B454b80;
case 0x454b81:c.instructions+=3;goto B454b81;
case 0x454b82:c.instructions+=2;goto B454b82;
case 0x454b83:c.instructions+=1;goto B454b83;
case 0x454b86:goto L454b86;
case 0x454b8c:c.instructions+=8;goto B454b8c;
case 0x454b8d:c.instructions+=7;goto B454b8d;
case 0x454b8f:c.instructions+=6;goto B454b8f;
case 0x454b90:c.instructions+=5;goto B454b90;
case 0x454b93:c.instructions+=4;goto B454b93;
case 0x454b94:c.instructions+=3;goto B454b94;
case 0x454b9a:c.instructions+=2;goto B454b9a;
case 0x454b9b:c.instructions+=1;goto B454b9b;
case 0x454b9e:goto L454b9e;
case 0x454ba0:c.instructions+=1;goto B454ba0;
case 0x454ba5:goto L454ba5;
case 0x454ba6:c.instructions+=4;goto B454ba6;
case 0x454ba7:c.instructions+=3;goto B454ba7;
case 0x454ba8:c.instructions+=2;goto B454ba8;
case 0x454ba9:c.instructions+=1;goto B454ba9;
case 0x454bac:goto L454bac;
case 0x454bb0:c.instructions+=3;goto B454bb0;
case 0x454bb2:c.instructions+=2;goto B454bb2;
case 0x454bb4:c.instructions+=1;goto B454bb4;
case 0x454bba:goto L454bba;
case 0x454bbe:c.instructions+=3;goto B454bbe;
case 0x454bc3:c.instructions+=2;goto B454bc3;
case 0x454bc6:c.instructions+=1;goto B454bc6;
case 0x454bcc:goto L454bcc;
case 0x454bd3:c.instructions+=1;goto B454bd3;
case 0x454bda:goto L454bda;
case 0x454be0:c.instructions+=1;goto B454be0;
case 0x454be6:goto L454be6;
case 0x454be7:c.instructions+=5;goto B454be7;
case 0x454be8:c.instructions+=4;goto B454be8;
case 0x454be9:c.instructions+=3;goto B454be9;
case 0x454bf3:c.instructions+=2;goto B454bf3;
case 0x454bf4:c.instructions+=1;goto B454bf4;
case 0x454bf7:goto L454bf7;
case 0x454bfd:c.instructions+=5;goto B454bfd;
case 0x454bfe:c.instructions+=4;goto B454bfe;
case 0x454c00:c.instructions+=3;goto B454c00;
case 0x454c03:c.instructions+=2;goto B454c03;
case 0x454c09:c.instructions+=1;goto B454c09;
case 0x454c0f:goto L454c0f;
case 0x454c10:c.instructions+=5;goto B454c10;
case 0x454c11:c.instructions+=4;goto B454c11;
case 0x454c17:c.instructions+=3;goto B454c17;
case 0x454c18:c.instructions+=2;goto B454c18;
case 0x454c19:c.instructions+=1;goto B454c19;
case 0x454c1c:goto L454c1c;
case 0x454c22:c.instructions+=2;goto B454c22;
case 0x454c24:c.instructions+=1;goto B454c24;
case 0x454c26:goto L454c26;
case 0x454c27:c.instructions+=1;goto B454c27;
case 0x454c2d:goto L454c2d;
case 0x454c2f:c.instructions+=1;goto B454c2f;
case 0x454c34:goto L454c34;
case 0x454c36:c.instructions+=1;goto B454c36;
case 0x454c3b:goto L454c3b;
case 0x454c3d:c.instructions+=2;goto B454c3d;
case 0x454c3f:c.instructions+=1;goto B454c3f;
case 0x454c44:goto L454c44;
case 0x454c45:c.instructions+=4;goto B454c45;
case 0x454c46:c.instructions+=3;goto B454c46;
case 0x454c47:c.instructions+=2;goto B454c47;
case 0x454c48:c.instructions+=1;goto B454c48;
case 0x454c4b:goto L454c4b;
case 0x454c4f:c.instructions+=3;goto B454c4f;
case 0x454c51:c.instructions+=2;goto B454c51;
case 0x454c53:c.instructions+=1;goto B454c53;
case 0x454c59:goto L454c59;
case 0x454c5d:c.instructions+=3;goto B454c5d;
case 0x454c62:c.instructions+=2;goto B454c62;
case 0x454c65:c.instructions+=1;goto B454c65;
case 0x454c6b:goto L454c6b;
case 0x454c72:c.instructions+=1;goto B454c72;
case 0x454c79:goto L454c79;
case 0x454c7f:c.instructions+=1;goto B454c7f;
case 0x454c85:goto L454c85;
case 0x454c86:c.instructions+=5;goto B454c86;
case 0x454c87:c.instructions+=4;goto B454c87;
case 0x454c88:c.instructions+=3;goto B454c88;
case 0x454c92:c.instructions+=2;goto B454c92;
case 0x454c93:c.instructions+=1;goto B454c93;
case 0x454c96:goto L454c96;
case 0x454c9c:c.instructions+=5;goto B454c9c;
case 0x454c9d:c.instructions+=4;goto B454c9d;
case 0x454c9f:c.instructions+=3;goto B454c9f;
case 0x454ca2:c.instructions+=2;goto B454ca2;
case 0x454ca8:c.instructions+=1;goto B454ca8;
case 0x454cae:goto L454cae;
case 0x454caf:c.instructions+=5;goto B454caf;
case 0x454cb0:c.instructions+=4;goto B454cb0;
case 0x454cb6:c.instructions+=3;goto B454cb6;
case 0x454cb7:c.instructions+=2;goto B454cb7;
case 0x454cb8:c.instructions+=1;goto B454cb8;
case 0x454cbb:goto L454cbb;
case 0x454cc1:c.instructions+=2;goto B454cc1;
case 0x454cc3:c.instructions+=1;goto B454cc3;
case 0x454cc5:goto L454cc5;
case 0x454cc6:c.instructions+=1;goto B454cc6;
case 0x454ccc:goto L454ccc;
case 0x454ccd:c.instructions+=1;goto B454ccd;
case 0x454cd3:goto L454cd3;
case 0x454cd5:c.instructions+=1;goto B454cd5;
case 0x454cda:goto L454cda;
case 0x454cdc:c.instructions+=2;goto B454cdc;
case 0x454cde:c.instructions+=1;goto B454cde;
case 0x454ce3:goto L454ce3;
case 0x454ce4:c.instructions+=4;goto B454ce4;
case 0x454ce5:c.instructions+=3;goto B454ce5;
case 0x454ce6:c.instructions+=2;goto B454ce6;
case 0x454ce7:c.instructions+=1;goto B454ce7;
case 0x454cea:goto L454cea;
case 0x454cec:c.instructions+=1;goto B454cec;
case 0x454cf1:goto L454cf1;
case 0x454cf3:c.instructions+=2;goto B454cf3;
case 0x454cf5:c.instructions+=1;goto B454cf5;
case 0x454cfa:goto L454cfa;
case 0x454cfb:c.instructions+=4;goto B454cfb;
case 0x454cfc:c.instructions+=3;goto B454cfc;
case 0x454cfd:c.instructions+=2;goto B454cfd;
case 0x454cfe:c.instructions+=1;goto B454cfe;
case 0x454d01:goto L454d01;
case 0x454d05:c.instructions+=3;goto B454d05;
case 0x454d07:c.instructions+=2;goto B454d07;
case 0x454d09:c.instructions+=1;goto B454d09;
case 0x454d0f:goto L454d0f;
case 0x454d13:c.instructions+=3;goto B454d13;
case 0x454d18:c.instructions+=2;goto B454d18;
case 0x454d1b:c.instructions+=1;goto B454d1b;
case 0x454d21:goto L454d21;
case 0x454d28:c.instructions+=1;goto B454d28;
case 0x454d2f:goto L454d2f;
case 0x454d35:c.instructions+=1;goto B454d35;
case 0x454d3b:goto L454d3b;
case 0x454d3c:c.instructions+=5;goto B454d3c;
case 0x454d3d:c.instructions+=4;goto B454d3d;
case 0x454d3e:c.instructions+=3;goto B454d3e;
case 0x454d48:c.instructions+=2;goto B454d48;
case 0x454d49:c.instructions+=1;goto B454d49;
case 0x454d4c:goto L454d4c;
case 0x454d52:c.instructions+=5;goto B454d52;
case 0x454d53:c.instructions+=4;goto B454d53;
case 0x454d55:c.instructions+=3;goto B454d55;
case 0x454d58:c.instructions+=2;goto B454d58;
case 0x454d5e:c.instructions+=1;goto B454d5e;
case 0x454d64:goto L454d64;
case 0x454d65:c.instructions+=5;goto B454d65;
case 0x454d66:c.instructions+=4;goto B454d66;
case 0x454d6c:c.instructions+=3;goto B454d6c;
case 0x454d6d:c.instructions+=2;goto B454d6d;
case 0x454d6e:c.instructions+=1;goto B454d6e;
case 0x454d71:goto L454d71;
case 0x454d77:c.instructions+=5;goto B454d77;
case 0x454d7d:c.instructions+=4;goto B454d7d;
case 0x454d7e:c.instructions+=3;goto B454d7e;
case 0x454d7f:c.instructions+=2;goto B454d7f;
case 0x454d81:c.instructions+=1;goto B454d81;
case 0x454d86:goto L454d86;
case 0x454d88:c.instructions+=2;goto B454d88;
case 0x454d8a:c.instructions+=1;goto B454d8a;
case 0x454d8f:goto L454d8f;
case 0x454d90:c.instructions+=4;goto B454d90;
case 0x454d91:c.instructions+=3;goto B454d91;
case 0x454d92:c.instructions+=2;goto B454d92;
case 0x454d93:c.instructions+=1;goto B454d93;
case 0x454d96:goto L454d96;
case 0x454d9a:c.instructions+=3;goto B454d9a;
case 0x454d9c:c.instructions+=2;goto B454d9c;
case 0x454d9e:c.instructions+=1;goto B454d9e;
case 0x454da4:goto L454da4;
case 0x454da8:c.instructions+=3;goto B454da8;
case 0x454dae:c.instructions+=2;goto B454dae;
case 0x454db1:c.instructions+=1;goto B454db1;
case 0x454db7:goto L454db7;
case 0x454dbe:c.instructions+=1;goto B454dbe;
case 0x454dc5:goto L454dc5;
case 0x454dcb:c.instructions+=8;goto B454dcb;
case 0x454dcd:c.instructions+=7;goto B454dcd;
case 0x454dd2:c.instructions+=6;goto B454dd2;
case 0x454dd5:c.instructions+=5;goto B454dd5;
case 0x454dd7:c.instructions+=4;goto B454dd7;
case 0x454ddb:c.instructions+=3;goto B454ddb;
case 0x454ddd:c.instructions+=2;goto B454ddd;
case 0x454dde:c.instructions+=1;goto B454dde;
case 0x454de3:goto L454de3;
case 0x454de6:c.instructions+=6;goto B454de6;
case 0x454de7:c.instructions+=5;goto B454de7;
case 0x454de8:c.instructions+=4;goto B454de8;
case 0x454de9:c.instructions+=3;goto B454de9;
case 0x454def:c.instructions+=2;goto B454def;
case 0x454df0:c.instructions+=1;goto B454df0;
case 0x454df3:goto L454df3;
case 0x454df5:c.instructions+=7;goto B454df5;
case 0x454dfa:c.instructions+=6;goto B454dfa;
case 0x454e00:c.instructions+=5;goto B454e00;
case 0x454e03:c.instructions+=4;goto B454e03;
case 0x454e05:c.instructions+=3;goto B454e05;
case 0x454e09:c.instructions+=2;goto B454e09;
case 0x454e0b:c.instructions+=1;goto B454e0b;
case 0x454e0d:goto L454e0d;
case 0x454e0e:c.instructions+=1;goto B454e0e;
case 0x454e10:goto L454e10;
case 0x454e11:c.instructions+=1;goto B454e11;
case 0x454e17:goto L454e17;
case 0x454e19:c.instructions+=1;goto B454e19;
case 0x454e1e:goto L454e1e;
case 0x454e20:c.instructions+=1;goto B454e20;
case 0x454e22:goto L454e22;
case 0x454e25:c.instructions+=1;goto B454e25;
case 0x454e27:goto L454e27;
case 0x454e29:goto L454e29;
case 0x454e2b:c.instructions+=1;goto B454e2b;
case 0x454e31:goto L454e31;
case 0x454e37:c.instructions+=5;goto B454e37;
case 0x454e38:c.instructions+=4;goto B454e38;
case 0x454e39:c.instructions+=3;goto B454e39;
case 0x454e3b:c.instructions+=2;goto B454e3b;
case 0x454e3c:c.instructions+=1;goto B454e3c;
case 0x454e41:goto L454e41;
case 0x454e44:c.instructions+=3;goto B454e44;
case 0x454e46:c.instructions+=2;goto B454e46;
case 0x454e4c:c.instructions+=1;goto B454e4c;
case 0x454e51:goto L454e51;
case 0x454e52:c.instructions+=4;goto B454e52;
case 0x454e53:c.instructions+=3;goto B454e53;
case 0x454e54:c.instructions+=2;goto B454e54;
case 0x454e55:c.instructions+=1;goto B454e55;
case 0x454e58:goto L454e58;
case 0x454e5e:c.instructions+=3;goto B454e5e;
case 0x454e5f:c.instructions+=2;goto B454e5f;
case 0x454e61:c.instructions+=1;goto B454e61;
case 0x454e66:goto L454e66;
case 0x454e68:c.instructions+=2;goto B454e68;
case 0x454e6e:c.instructions+=1;goto B454e6e;
case 0x454e74:goto L454e74;
case 0x454e76:c.instructions+=2;goto B454e76;
case 0x454e7c:c.instructions+=1;goto B454e7c;
case 0x454e81:goto L454e81;
case 0x454e82:c.instructions+=4;goto B454e82;
case 0x454e83:c.instructions+=3;goto B454e83;
case 0x454e84:c.instructions+=2;goto B454e84;
case 0x454e85:c.instructions+=1;goto B454e85;
case 0x454e88:goto L454e88;
case 0x454e8e:c.instructions+=4;goto B454e8e;
case 0x454e90:c.instructions+=3;goto B454e90;
case 0x454e92:c.instructions+=2;goto B454e92;
case 0x454e93:c.instructions+=1;goto B454e93;
case 0x454e98:goto L454e98;
case 0x454e9b:c.instructions+=3;goto B454e9b;
case 0x454e9e:c.instructions+=2;goto B454e9e;
case 0x454ea4:c.instructions+=1;goto B454ea4;
case 0x454ea6:goto L454ea6;
case 0x454ea8:c.instructions+=1;goto B454ea8;
case 0x454ead:goto L454ead;
case 0x454eaf:c.instructions+=1;goto B454eaf;
case 0x454eb4:goto L454eb4;
case 0x454eb5:c.instructions+=4;goto B454eb5;
case 0x454eb6:c.instructions+=3;goto B454eb6;
case 0x454eb7:c.instructions+=2;goto B454eb7;
case 0x454eb8:c.instructions+=1;goto B454eb8;
case 0x454ebb:goto L454ebb;
case 0x454ebd:c.instructions+=3;goto B454ebd;
case 0x454ec3:c.instructions+=2;goto B454ec3;
case 0x454ec9:c.instructions+=1;goto B454ec9;
case 0x454ece:goto L454ece;
case 0x454ecf:c.instructions+=4;goto B454ecf;
case 0x454ed0:c.instructions+=3;goto B454ed0;
case 0x454ed1:c.instructions+=2;goto B454ed1;
case 0x454ed2:c.instructions+=1;goto B454ed2;
case 0x454ed5:goto L454ed5;
case 0x454edb:c.instructions+=3;goto B454edb;
case 0x454ede:c.instructions+=2;goto B454ede;
case 0x454ee0:c.instructions+=1;goto B454ee0;
case 0x454ee6:goto L454ee6;
case 0x454ee7:c.instructions+=1;goto B454ee7;
case 0x454eed:goto L454eed;
case 0x454ef7:c.instructions+=2;goto B454ef7;
case 0x454efd:c.instructions+=1;goto B454efd;
case 0x454f02:goto L454f02;
case 0x454f04:c.instructions+=2;goto B454f04;
case 0x454f06:c.instructions+=1;goto B454f06;
case 0x454f0c:goto L454f0c;
case 0x454f12:c.instructions+=2;goto B454f12;
case 0x454f14:c.instructions+=1;goto B454f14;
case 0x454f1a:goto L454f1a;
case 0x454f1b:c.instructions+=1;goto B454f1b;
case 0x454f1d:goto L454f1d;
case 0x454f1e:c.instructions+=1;goto B454f1e;
case 0x454f24:goto L454f24;
case 0x454f26:c.instructions+=1;goto B454f26;
case 0x454f2b:goto L454f2b;
case 0x454f2d:c.instructions+=2;goto B454f2d;
case 0x454f2e:c.instructions+=1;goto B454f2e;
case 0x454f33:goto L454f33;
case 0x454f39:c.instructions+=6;goto B454f39;
case 0x454f3b:c.instructions+=5;goto B454f3b;
case 0x454f3e:c.instructions+=4;goto B454f3e;
case 0x454f3f:c.instructions+=3;goto B454f3f;
case 0x454f40:c.instructions+=2;goto B454f40;
case 0x454f42:c.instructions+=1;goto B454f42;
case 0x454f47:goto L454f47;
case 0x454f49:c.instructions+=1;goto B454f49;
case 0x454f4f:goto L454f4f;
case 0x454f51:c.instructions+=2;goto B454f51;
case 0x454f5b:c.instructions+=1;goto B454f5b;
case 0x454f60:goto L454f60;
case 0x454f62:c.instructions+=1;goto B454f62;
case 0x454f64:goto L454f64;
case 0x454f67:c.instructions+=1;goto B454f67;
case 0x454f6d:goto L454f6d;
case 0x454f73:c.instructions+=7;goto B454f73;
case 0x454f75:c.instructions+=6;goto B454f75;
case 0x454f7b:c.instructions+=5;goto B454f7b;
case 0x454f7d:c.instructions+=4;goto B454f7d;
case 0x454f83:c.instructions+=3;goto B454f83;
case 0x454f89:c.instructions+=2;goto B454f89;
case 0x454f8f:c.instructions+=1;goto B454f8f;
case 0x454f94:goto L454f94;
case 0x454f95:c.instructions+=4;goto B454f95;
case 0x454f96:c.instructions+=3;goto B454f96;
case 0x454f97:c.instructions+=2;goto B454f97;
case 0x454f98:c.instructions+=1;goto B454f98;
case 0x454f9b:goto L454f9b;
case 0x454f9d:c.instructions+=1;goto B454f9d;
case 0x454fa2:goto L454fa2;
case 0x454fa5:c.instructions+=2;goto B454fa5;
case 0x454fa7:c.instructions+=1;goto B454fa7;
case 0x454fa9:goto L454fa9;
case 0x454fb0:c.instructions+=1;goto B454fb0;
case 0x454fb2:goto L454fb2;
case 0x454fb4:goto L454fb4;
case 0x454fb6:c.instructions+=2;goto B454fb6;
case 0x454fbc:c.instructions+=1;goto B454fbc;
case 0x454fbe:goto L454fbe;
case 0x454fc1:c.instructions+=5;goto B454fc1;
case 0x454fc3:c.instructions+=4;goto B454fc3;
case 0x454fc6:c.instructions+=3;goto B454fc6;
case 0x454fca:c.instructions+=2;goto B454fca;
case 0x454fce:c.instructions+=1;goto B454fce;
case 0x454fd0:goto L454fd0;
case 0x454fd6:c.instructions+=3;goto B454fd6;
case 0x454fd9:c.instructions+=2;goto B454fd9;
case 0x454fdc:c.instructions+=1;goto B454fdc;
case 0x454fe1:goto L454fe1;
case 0x454fe7:c.instructions+=5;goto B454fe7;
case 0x454fea:c.instructions+=4;goto B454fea;
case 0x454feb:c.instructions+=3;goto B454feb;
case 0x454fec:c.instructions+=2;goto B454fec;
case 0x454fee:c.instructions+=1;goto B454fee;
case 0x454ff3:goto L454ff3;
case 0x454ff9:c.instructions+=2;goto B454ff9;
case 0x454ffc:c.instructions+=1;goto B454ffc;
default:missing_instruction(c.pc);}
B454000:L454000:{c.instructions+=6;NFSU2_TR(0x454000);
__builtin_memmove(gp(0x828649),(R+12),1);
}
B454006:{NFSU2_TR(0x454006);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45400c:{NFSU2_TR(0x45400c);
__builtin_memmove((R+0),gp(0x82879b),1);
}
B454011:{NFSU2_TR(0x454011);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B454013:{NFSU2_TR(0x454013);
__builtin_memmove(gp(0x82879b),(R+12),1);
}
B454019:{NFSU2_TR(0x454019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454028;}}
}
B45401b:L45401b:{c.instructions+=2;NFSU2_TR(0x45401b);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a3a4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454022:{NFSU2_TR(0x454022);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L454028;}}
}
B454024:L454024:{c.instructions+=2;NFSU2_TR(0x454024);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B454026:{NFSU2_TR(0x454026);
{goto L45402d;}
}
B454028:L454028:{c.instructions+=1;NFSU2_TR(0x454028);
w4(R+0,u32(0x1ull));
}
B45402d:L45402d:{c.instructions+=4;NFSU2_TR(0x45402d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45402e:{NFSU2_TR(0x45402e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45402f:{NFSU2_TR(0x45402f);
__builtin_memmove((R+4),(R+24),4);
}
B454031:{NFSU2_TR(0x454031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454036ull));
TAIL_STATIC(0x451b70u,451);
}
B454036:L454036:{c.instructions+=3;NFSU2_TR(0x454036);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45403d:{NFSU2_TR(0x45403d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45403e:{NFSU2_TR(0x45403e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454043ull));
TAIL_STATIC(0x43c780u,43c);
}
B454043:L454043:{c.instructions+=5;NFSU2_TR(0x454043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454046:{NFSU2_TR(0x454046);
w4(R+0,u32(0x3ull));
}
B45404b:{NFSU2_TR(0x45404b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45404e:{NFSU2_TR(0x45404e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454050:{NFSU2_TR(0x454050);
if(r1(R+518)){{goto L454057;}}
}
B454052:L454052:{c.instructions+=2;NFSU2_TR(0x454052);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B454055:{NFSU2_TR(0x454055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454094;}}
}
B454057:L454057:{c.instructions+=3;NFSU2_TR(0x454057);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454059:{NFSU2_TR(0x454059);
w4(R+4,u32(0x827b88ull));
}
B45405e:{NFSU2_TR(0x45405e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454063ull));
TAIL_STATIC(0x4324d0u,432);
}
B454063:L454063:{c.instructions+=2;NFSU2_TR(0x454063);
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
B454065:{NFSU2_TR(0x454065);
if(r1(R+518)){{goto L454780;}}
}
B45406b:L45406b:{c.instructions+=3;NFSU2_TR(0x45406b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45406c:{NFSU2_TR(0x45406c);
w4(R+4,u32(0x827b88ull));
}
B454071:{NFSU2_TR(0x454071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454076ull));
TAIL_STATIC(0x432490u,432);
}
B454076:L454076:{c.instructions+=2;NFSU2_TR(0x454076);
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
B454078:{NFSU2_TR(0x454078);
if(r1(R+518)){{goto L454780;}}
}
B45407e:L45407e:{c.instructions+=5;NFSU2_TR(0x45407e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xe0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xe0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454083:{NFSU2_TR(0x454083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454084:{NFSU2_TR(0x454084);
u8 U[4];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45408b:{NFSU2_TR(0x45408b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45408c:{NFSU2_TR(0x45408c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454091ull));
TAIL_STATIC(0x4012b0u,401);
}
B454091:L454091:{c.instructions+=1;NFSU2_TR(0x454091);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B454094:L454094:{c.instructions+=3;NFSU2_TR(0x454094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45409a:{NFSU2_TR(0x45409a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45409c:{NFSU2_TR(0x45409c);
if(r1(R+518)){{goto L4540a9;}}
}
B45409e:L45409e:{c.instructions+=3;NFSU2_TR(0x45409e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4540a1:{NFSU2_TR(0x4540a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540a2:{NFSU2_TR(0x4540a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4540a7ull));
TAIL_STATIC(0x442b70u,442);
}
B4540a7:L4540a7:{c.instructions+=1;NFSU2_TR(0x4540a7);
{goto L4540b7;}
}
B4540a9:L4540a9:{c.instructions+=4;NFSU2_TR(0x4540a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4540ac:{NFSU2_TR(0x4540ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540ad:{NFSU2_TR(0x4540ad);
w4(R+4,u32(0x828770ull));
}
B4540b2:{NFSU2_TR(0x4540b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4540b7ull));
TAIL_STATIC(0x442c80u,442);
}
B4540b7:L4540b7:{c.instructions+=15;NFSU2_TR(0x4540b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4540bb:{NFSU2_TR(0x4540bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4540be:{NFSU2_TR(0x4540be);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4540c2:{NFSU2_TR(0x4540c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4540c6:{NFSU2_TR(0x4540c6);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4540c9:{NFSU2_TR(0x4540c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4540cf:{NFSU2_TR(0x4540cf);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4540d2:{NFSU2_TR(0x4540d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540d3:{NFSU2_TR(0x4540d3);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4540d6:{NFSU2_TR(0x4540d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540d7:{NFSU2_TR(0x4540d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540d8:{NFSU2_TR(0x4540d8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4540da:{NFSU2_TR(0x4540da);
w4(R+4,u32(0x828770ull));
}
B4540df:{NFSU2_TR(0x4540df);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4540e3:{NFSU2_TR(0x4540e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4540e8ull));
TAIL_STATIC(0x4438c0u,443);
}
B4540e8:L4540e8:{c.instructions+=4;NFSU2_TR(0x4540e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4540ec:{NFSU2_TR(0x4540ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4540ef:{NFSU2_TR(0x4540ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540f0:{NFSU2_TR(0x4540f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4540f5ull));
TAIL_STATIC(0x574870u,574);
}
B4540f5:L4540f5:{c.instructions+=5;NFSU2_TR(0x4540f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4540f8:{NFSU2_TR(0x4540f8);
{u32 ea_=u32(r4(R+4)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4540fe:{NFSU2_TR(0x4540fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4540ff:{NFSU2_TR(0x4540ff);
__builtin_memmove((R+4),(R+24),4);
}
B454101:{NFSU2_TR(0x454101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454106ull));
TAIL_STATIC(0x4462a0u,446);
}
B454106:L454106:{c.instructions+=2;NFSU2_TR(0x454106);
u8 U[8];
__builtin_memmove((U+0),gp(0x828640),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45410c:{NFSU2_TR(0x45410c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454118;}}
}
B45410e:L45410e:{c.instructions+=2;NFSU2_TR(0x45410e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454111:{NFSU2_TR(0x454111);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B454118:L454118:{c.instructions+=5;NFSU2_TR(0x454118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454119:{NFSU2_TR(0x454119);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45411d:{NFSU2_TR(0x45411d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45411e:{NFSU2_TR(0x45411e);
__builtin_memmove((R+4),(R+24),4);
}
B454120:{NFSU2_TR(0x454120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454125ull));
TAIL_STATIC(0x446180u,446);
}
B454125:L454125:{c.instructions+=5;NFSU2_TR(0x454125);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454126:{NFSU2_TR(0x454126);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45412a:{NFSU2_TR(0x45412a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45412b:{NFSU2_TR(0x45412b);
__builtin_memmove((R+4),(R+24),4);
}
B45412d:{NFSU2_TR(0x45412d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454132ull));
TAIL_STATIC(0x446210u,446);
}
B454132:L454132:{c.instructions+=3;NFSU2_TR(0x454132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454135:{NFSU2_TR(0x454135);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454137:{NFSU2_TR(0x454137);
if(r1(R+518)){{goto L454156;}}
}
B454139:L454139:{c.instructions+=2;NFSU2_TR(0x454139);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B45413c:{NFSU2_TR(0x45413c);
if(r1(R+518)){{goto L454156;}}
}
B45413e:L45413e:{c.instructions+=8;NFSU2_TR(0x45413e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454141:{NFSU2_TR(0x454141);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x60ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454144:{NFSU2_TR(0x454144);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454145:{NFSU2_TR(0x454145);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45414b:{NFSU2_TR(0x45414b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45414c:{NFSU2_TR(0x45414c);
u8 U[4];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B454153:{NFSU2_TR(0x454153);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454154:{NFSU2_TR(0x454154);
{goto L45416b;}
}
B454156:L454156:{c.instructions+=7;NFSU2_TR(0x454156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454159:{NFSU2_TR(0x454159);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45415c:{NFSU2_TR(0x45415c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45415d:{NFSU2_TR(0x45415d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454162:{NFSU2_TR(0x454162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454163:{NFSU2_TR(0x454163);
u8 U[4];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45416a:{NFSU2_TR(0x45416a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45416b:L45416b:{c.instructions+=1;NFSU2_TR(0x45416b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454170ull));
TAIL_STATIC(0x401340u,401);
}
B454170:L454170:{c.instructions+=4;NFSU2_TR(0x454170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454173:{NFSU2_TR(0x454173);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B454176:{NFSU2_TR(0x454176);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454178:{NFSU2_TR(0x454178);
if(r1(R+518)){{goto L4541bb;}}
}
B45417a:L45417a:{c.instructions+=2;NFSU2_TR(0x45417a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45417d:{NFSU2_TR(0x45417d);
if(r1(R+518)){{goto L45418b;}}
}
B45417f:L45417f:{c.instructions+=2;NFSU2_TR(0x45417f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454180:{NFSU2_TR(0x454180);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4541d5;}}
}
B454182:L454182:{c.instructions+=2;NFSU2_TR(0x454182);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B454189:{NFSU2_TR(0x454189);
{goto L4541c2;}
}
B45418b:L45418b:{c.instructions+=16;NFSU2_TR(0x45418b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45418e:{NFSU2_TR(0x45418e);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454191:{NFSU2_TR(0x454191);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B454194:{NFSU2_TR(0x454194);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454197:{NFSU2_TR(0x454197);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45419b:{NFSU2_TR(0x45419b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45419d:{NFSU2_TR(0x45419d);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4541a1:{NFSU2_TR(0x4541a1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4541a5:{NFSU2_TR(0x4541a5);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4541a7:{NFSU2_TR(0x4541a7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4541ab:{NFSU2_TR(0x4541ab);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4541af:{NFSU2_TR(0x4541af);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4541b1:{NFSU2_TR(0x4541b1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4541b5:{NFSU2_TR(0x4541b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4541b7:{NFSU2_TR(0x4541b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4541b9:{NFSU2_TR(0x4541b9);
{goto L4541d5;}
}
B4541bb:L4541bb:{c.instructions+=1;NFSU2_TR(0x4541bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4541c2:L4541c2:{c.instructions+=6;NFSU2_TR(0x4541c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4541c6:{NFSU2_TR(0x4541c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4541c7:{NFSU2_TR(0x4541c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4541cb:{NFSU2_TR(0x4541cb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4541cc:{NFSU2_TR(0x4541cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4541cd:{NFSU2_TR(0x4541cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4541d2ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B4541d2:L4541d2:{c.instructions+=1;NFSU2_TR(0x4541d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4541d5:L4541d5:{c.instructions+=3;NFSU2_TR(0x4541d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4541d8:{NFSU2_TR(0x4541d8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4541da:{NFSU2_TR(0x4541da);
if(r1(R+518)){{goto L45421d;}}
}
B4541dc:L4541dc:{c.instructions+=2;NFSU2_TR(0x4541dc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4541df:{NFSU2_TR(0x4541df);
if(r1(R+518)){{goto L4541ed;}}
}
B4541e1:L4541e1:{c.instructions+=2;NFSU2_TR(0x4541e1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4541e2:{NFSU2_TR(0x4541e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454237;}}
}
B4541e4:L4541e4:{c.instructions+=2;NFSU2_TR(0x4541e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4541eb:{NFSU2_TR(0x4541eb);
{goto L454224;}
}
B4541ed:L4541ed:{c.instructions+=16;NFSU2_TR(0x4541ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4541f0:{NFSU2_TR(0x4541f0);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4541f3:{NFSU2_TR(0x4541f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4541f6:{NFSU2_TR(0x4541f6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4541f9:{NFSU2_TR(0x4541f9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4541fd:{NFSU2_TR(0x4541fd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4541ff:{NFSU2_TR(0x4541ff);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454203:{NFSU2_TR(0x454203);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454207:{NFSU2_TR(0x454207);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B454209:{NFSU2_TR(0x454209);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45420d:{NFSU2_TR(0x45420d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454211:{NFSU2_TR(0x454211);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B454213:{NFSU2_TR(0x454213);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454217:{NFSU2_TR(0x454217);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B454219:{NFSU2_TR(0x454219);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45421b:{NFSU2_TR(0x45421b);
{goto L454237;}
}
B45421d:L45421d:{c.instructions+=1;NFSU2_TR(0x45421d);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B454224:L454224:{c.instructions+=6;NFSU2_TR(0x454224);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B454228:{NFSU2_TR(0x454228);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454229:{NFSU2_TR(0x454229);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45422d:{NFSU2_TR(0x45422d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45422e:{NFSU2_TR(0x45422e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45422f:{NFSU2_TR(0x45422f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454234ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B454234:L454234:{c.instructions+=1;NFSU2_TR(0x454234);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B454237:L454237:{c.instructions+=3;NFSU2_TR(0x454237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45423a:{NFSU2_TR(0x45423a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45423c:{NFSU2_TR(0x45423c);
if(r1(R+518)){{goto L454312;}}
}
B454242:L454242:{c.instructions+=2;NFSU2_TR(0x454242);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B454245:{NFSU2_TR(0x454245);
if(r1(R+518)){{goto L454312;}}
}
B45424b:L45424b:{c.instructions+=5;NFSU2_TR(0x45424b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45424e:{NFSU2_TR(0x45424e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B454254:{NFSU2_TR(0x454254);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454255:{NFSU2_TR(0x454255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454258:{NFSU2_TR(0x454258);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45425dull));
TAIL_STATIC(0x446f10u,446);
}
B45425d:L45425d:{c.instructions+=5;NFSU2_TR(0x45425d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454260:{NFSU2_TR(0x454260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454263:{NFSU2_TR(0x454263);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B454266:{NFSU2_TR(0x454266);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454267:{NFSU2_TR(0x454267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45426cull));
TAIL_STATIC(0x574cd0u,574);
}
B45426c:L45426c:{c.instructions+=6;NFSU2_TR(0x45426c);
__builtin_memmove((R+0),gp(0x865154),4);
}
B454271:{NFSU2_TR(0x454271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454274:{NFSU2_TR(0x454274);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454275:{NFSU2_TR(0x454275);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454276:{NFSU2_TR(0x454276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454277:{NFSU2_TR(0x454277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45427cull));
TAIL_STATIC(0x574df0u,574);
}
B45427c:L45427c:{c.instructions+=4;NFSU2_TR(0x45427c);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B454280:{NFSU2_TR(0x454280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454281:{NFSU2_TR(0x454281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454284:{NFSU2_TR(0x454284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454289ull));
TAIL_STATIC(0x574d30u,574);
}
B454289:L454289:{c.instructions+=14;NFSU2_TR(0x454289);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45428d:{NFSU2_TR(0x45428d);
{u32 ea_=u32(u32(8308624u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B454293:{NFSU2_TR(0x454293);
u8 U[4];
w4(U+0,u32(0x7ec780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454298:{NFSU2_TR(0x454298);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45429c:{NFSU2_TR(0x45429c);
u8 U[4];
w4(U+0,u32(0x7ec770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4542a1:{NFSU2_TR(0x4542a1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542a5:{NFSU2_TR(0x4542a5);
{u32 ea_=u32(u32(8308628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542ab:{NFSU2_TR(0x4542ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4542ac:{NFSU2_TR(0x4542ac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4542b0:{NFSU2_TR(0x4542b0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542b4:{NFSU2_TR(0x4542b4);
{u32 ea_=u32(u32(8308632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542ba:{NFSU2_TR(0x4542ba);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4542be:{NFSU2_TR(0x4542be);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542c2:{NFSU2_TR(0x4542c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4542c7ull));
TAIL_STATIC(0x443f70u,443);
}
B4542c7:L4542c7:{c.instructions+=19;NFSU2_TR(0x4542c7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542cb:{NFSU2_TR(0x4542cb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4542cf:{NFSU2_TR(0x4542cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4542d2:{NFSU2_TR(0x4542d2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542d6:{NFSU2_TR(0x4542d6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542da:{NFSU2_TR(0x4542da);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4542de:{NFSU2_TR(0x4542de);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542e2:{NFSU2_TR(0x4542e2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542e6:{NFSU2_TR(0x4542e6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4542ea:{NFSU2_TR(0x4542ea);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542ee:{NFSU2_TR(0x4542ee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542f2:{NFSU2_TR(0x4542f2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4542f6:{NFSU2_TR(0x4542f6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4542fa:{NFSU2_TR(0x4542fa);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4542fe:{NFSU2_TR(0x4542fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B454302:{NFSU2_TR(0x454302);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454306:{NFSU2_TR(0x454306);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45430a:{NFSU2_TR(0x45430a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45430e:{NFSU2_TR(0x45430e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454312:L454312:{c.instructions+=12;NFSU2_TR(0x454312);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B454316:{NFSU2_TR(0x454316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454317:{NFSU2_TR(0x454317);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45431b:{NFSU2_TR(0x45431b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45431c:{NFSU2_TR(0x45431c);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B454320:{NFSU2_TR(0x454320);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454321:{NFSU2_TR(0x454321);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B454328:{NFSU2_TR(0x454328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454329:{NFSU2_TR(0x454329);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454331:{NFSU2_TR(0x454331);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454339:{NFSU2_TR(0x454339);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454341:{NFSU2_TR(0x454341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454346ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B454346:L454346:{c.instructions+=6;NFSU2_TR(0x454346);
__builtin_memmove((R+4),gp(0x82a3a4),4);
}
B45434c:{NFSU2_TR(0x45434c);
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
B45434f:{NFSU2_TR(0x45434f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454353:{NFSU2_TR(0x454353);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454356:{NFSU2_TR(0x454356);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454357:{NFSU2_TR(0x454357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45435cull));
TAIL_STATIC(0x574870u,574);
}
B45435c:L45435c:{c.instructions+=5;NFSU2_TR(0x45435c);
{u32 ea_=u32(u32(7892860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B454362:{NFSU2_TR(0x454362);
__builtin_memmove((R+28),gp(0x82a3a4),4);
}
B454368:{NFSU2_TR(0x454368);
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
B45436a:{NFSU2_TR(0x45436a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45436e:{NFSU2_TR(0x45436e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45438b;}}
}
B454370:L454370:{c.instructions+=2;NFSU2_TR(0x454370);
w4(R+4,u32(0x828770ull));
}
B454375:{NFSU2_TR(0x454375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45437aull));
TAIL_STATIC(0x441920u,441);
}
B45437a:L45437a:{c.instructions+=2;NFSU2_TR(0x45437a);
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
B45437c:{NFSU2_TR(0x45437c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45438b;}}
}
B45437e:L45437e:{c.instructions+=2;NFSU2_TR(0x45437e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B454381:{NFSU2_TR(0x454381);
if(r1(R+518)){{goto L45438b;}}
}
B454383:L454383:{c.instructions+=1;NFSU2_TR(0x454383);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45438b:L45438b:{c.instructions+=4;NFSU2_TR(0x45438b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45438f:{NFSU2_TR(0x45438f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454392:{NFSU2_TR(0x454392);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454393:{NFSU2_TR(0x454393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454398ull));
TAIL_STATIC(0x574870u,574);
}
B454398:L454398:{c.instructions+=35;NFSU2_TR(0x454398);
{u32 ea_=u32(u32(7892864u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45439e:{NFSU2_TR(0x45439e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4543a1:{NFSU2_TR(0x4543a1);
{u32 ea_=u32(u32(7897436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4543a7:{NFSU2_TR(0x4543a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4543ab:{NFSU2_TR(0x4543ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543b1:{NFSU2_TR(0x4543b1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4543b3:{NFSU2_TR(0x4543b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543b9:{NFSU2_TR(0x4543b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543bf:{NFSU2_TR(0x4543bf);
__builtin_memmove((R+4),(R+8),4);
}
B4543c1:{NFSU2_TR(0x4543c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543c7:{NFSU2_TR(0x4543c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4543ca:{NFSU2_TR(0x4543ca);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4543cd:{NFSU2_TR(0x4543cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543d0:{NFSU2_TR(0x4543d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543d3:{NFSU2_TR(0x4543d3);
{u32 ea_=u32(u32(7897432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4543d9:{NFSU2_TR(0x4543d9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4543de:{NFSU2_TR(0x4543de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4543df:{NFSU2_TR(0x4543df);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4543e6:{NFSU2_TR(0x4543e6);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4543e9:{NFSU2_TR(0x4543e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4543ec:{NFSU2_TR(0x4543ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543f2:{NFSU2_TR(0x4543f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543f8:{NFSU2_TR(0x4543f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4543fe:{NFSU2_TR(0x4543fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454404:{NFSU2_TR(0x454404);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454407:{NFSU2_TR(0x454407);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45440d:{NFSU2_TR(0x45440d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454413:{NFSU2_TR(0x454413);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454419:{NFSU2_TR(0x454419);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45441f:{NFSU2_TR(0x45441f);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B454425:{NFSU2_TR(0x454425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454428:{NFSU2_TR(0x454428);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45442e:{NFSU2_TR(0x45442e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454431:{NFSU2_TR(0x454431);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454432:{NFSU2_TR(0x454432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454437ull));
TAIL_STATIC(0x441340u,441);
}
B454437:L454437:{c.instructions+=3;NFSU2_TR(0x454437);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45443d:{NFSU2_TR(0x45443d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45443f:{NFSU2_TR(0x45443f);
if(r1(R+518)){{goto L4544c6;}}
}
B454445:L454445:{c.instructions+=3;NFSU2_TR(0x454445);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454448:{NFSU2_TR(0x454448);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45444a:{NFSU2_TR(0x45444a);
if(r1(R+518)){{goto L45447e;}}
}
B45444c:L45444c:{c.instructions+=2;NFSU2_TR(0x45444c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B454450:{NFSU2_TR(0x454450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45447e;}}
}
B454452:L454452:{c.instructions+=7;NFSU2_TR(0x454452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454455:{NFSU2_TR(0x454455);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454456:{NFSU2_TR(0x454456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454457:{NFSU2_TR(0x454457);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45445e:{NFSU2_TR(0x45445e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45445f:{NFSU2_TR(0x45445f);
__builtin_memmove((R+4),(R+24),4);
}
B454461:{NFSU2_TR(0x454461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454466ull));
TAIL_STATIC(0x444530u,444);
}
B454466:L454466:{c.instructions+=7;NFSU2_TR(0x454466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454469:{NFSU2_TR(0x454469);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45446a:{NFSU2_TR(0x45446a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B454470:{NFSU2_TR(0x454470);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454471:{NFSU2_TR(0x454471);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B454478:{NFSU2_TR(0x454478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454479:{NFSU2_TR(0x454479);
{goto L45450e;}
}
B45447e:L45447e:{c.instructions+=2;NFSU2_TR(0x45447e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454480:{NFSU2_TR(0x454480);
if(r1(R+518)){{goto L4544c6;}}
}
B454482:L454482:{c.instructions+=3;NFSU2_TR(0x454482);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454485:{NFSU2_TR(0x454485);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454487:{NFSU2_TR(0x454487);
if(r1(R+518)){{goto L4544c6;}}
}
B454489:L454489:{c.instructions+=2;NFSU2_TR(0x454489);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45448d:{NFSU2_TR(0x45448d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4544c6;}}
}
B45448f:L45448f:{c.instructions+=3;NFSU2_TR(0x45448f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454492:{NFSU2_TR(0x454492);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454494:{NFSU2_TR(0x454494);
if(r1(R+518)){{goto L4544b7;}}
}
B454496:L454496:{c.instructions+=2;NFSU2_TR(0x454496);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B454499:{NFSU2_TR(0x454499);
if(r1(R+518)){{goto L4544b7;}}
}
B45449b:L45449b:{c.instructions+=2;NFSU2_TR(0x45449b);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xbull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4544a0:{NFSU2_TR(0x4544a0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4544b7;}}
}
B4544a2:L4544a2:{c.instructions+=7;NFSU2_TR(0x4544a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4544a6:{NFSU2_TR(0x4544a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544a7:{NFSU2_TR(0x4544a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544a8:{NFSU2_TR(0x4544a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4544af:{NFSU2_TR(0x4544af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544b0:{NFSU2_TR(0x4544b0);
__builtin_memmove((R+4),(R+24),4);
}
B4544b2:{NFSU2_TR(0x4544b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4544b7ull));
TAIL_STATIC(0x444530u,444);
}
B4544b7:L4544b7:{c.instructions+=6;NFSU2_TR(0x4544b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4544ba:{NFSU2_TR(0x4544ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544bb:{NFSU2_TR(0x4544bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544bc:{NFSU2_TR(0x4544bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4544c3:{NFSU2_TR(0x4544c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544c4:{NFSU2_TR(0x4544c4);
{goto L45450e;}
}
B4544c6:L4544c6:{c.instructions+=3;NFSU2_TR(0x4544c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4544c9:{NFSU2_TR(0x4544c9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4544cb:{NFSU2_TR(0x4544cb);
if(r1(R+518)){{goto L4544ee;}}
}
B4544cd:L4544cd:{c.instructions+=2;NFSU2_TR(0x4544cd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4544d0:{NFSU2_TR(0x4544d0);
if(r1(R+518)){{goto L4544ee;}}
}
B4544d2:L4544d2:{c.instructions+=2;NFSU2_TR(0x4544d2);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xbull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4544d7:{NFSU2_TR(0x4544d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4544ee;}}
}
B4544d9:L4544d9:{c.instructions+=7;NFSU2_TR(0x4544d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4544dd:{NFSU2_TR(0x4544dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544de:{NFSU2_TR(0x4544de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544df:{NFSU2_TR(0x4544df);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4544e6:{NFSU2_TR(0x4544e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4544e7:{NFSU2_TR(0x4544e7);
__builtin_memmove((R+4),(R+24),4);
}
B4544e9:{NFSU2_TR(0x4544e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4544eeull));
TAIL_STATIC(0x444530u,444);
}
B4544ee:L4544ee:{c.instructions+=3;NFSU2_TR(0x4544ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4544f1:{NFSU2_TR(0x4544f1);
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
B4544f3:{NFSU2_TR(0x4544f3);
if(r1(R+518)){{goto L454515;}}
}
B4544f5:L4544f5:{c.instructions+=2;NFSU2_TR(0x4544f5);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
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
B4544f8:{NFSU2_TR(0x4544f8);
if(r1(R+518)){{goto L454515;}}
}
B4544fa:L4544fa:{c.instructions+=2;NFSU2_TR(0x4544fa);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4544ff:{NFSU2_TR(0x4544ff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L454515;}}
}
B454501:L454501:{c.instructions+=5;NFSU2_TR(0x454501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454504:{NFSU2_TR(0x454504);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454505:{NFSU2_TR(0x454505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454506:{NFSU2_TR(0x454506);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B45450d:{NFSU2_TR(0x45450d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45450e:L45450e:{c.instructions+=2;NFSU2_TR(0x45450e);
__builtin_memmove((R+4),(R+24),4);
}
B454510:{NFSU2_TR(0x454510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454515ull));
TAIL_STATIC(0x44b040u,44b);
}
B454515:L454515:{c.instructions+=5;NFSU2_TR(0x454515);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B454519:{NFSU2_TR(0x454519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45451a:{NFSU2_TR(0x45451a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45451e:{NFSU2_TR(0x45451e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45451f:{NFSU2_TR(0x45451f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454524ull));
TAIL_STATIC(0x43ce10u,43c);
}
B454524:L454524:{c.instructions+=4;NFSU2_TR(0x454524);
__builtin_memmove((R+0),gp(0x828640),4);
}
B454529:{NFSU2_TR(0x454529);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45452c:{NFSU2_TR(0x45452c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45452e:{NFSU2_TR(0x45452e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45453b;}}
}
B454530:L454530:{c.instructions+=3;NFSU2_TR(0x454530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454533:{NFSU2_TR(0x454533);
{u32 ea_=u32(r4(R+8)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454539:{NFSU2_TR(0x454539);
{goto L45453d;}
}
B45453b:L45453b:{c.instructions+=1;NFSU2_TR(0x45453b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45453d:L45453d:{c.instructions+=6;NFSU2_TR(0x45453d);
__builtin_memmove((R+0),gp(0x865154),4);
}
B454542:{NFSU2_TR(0x454542);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454543:{NFSU2_TR(0x454543);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45454a:{NFSU2_TR(0x45454a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45454b:{NFSU2_TR(0x45454b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45454e:{NFSU2_TR(0x45454e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454553ull));
TAIL_STATIC(0x447280u,447);
}
B454553:L454553:{c.instructions+=3;NFSU2_TR(0x454553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454556:{NFSU2_TR(0x454556);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454557:{NFSU2_TR(0x454557);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45455cull));
TAIL_STATIC(0x574870u,574);
}
B45455c:L45455c:{c.instructions+=7;NFSU2_TR(0x45455c);
{u32 ea_=u32(u32(7893156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B454562:{NFSU2_TR(0x454562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454565:{NFSU2_TR(0x454565);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454566:{NFSU2_TR(0x454566);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45456c:{NFSU2_TR(0x45456c);
{u32 ea_=u32(r4(R+8)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454572:{NFSU2_TR(0x454572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454575:{NFSU2_TR(0x454575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45457aull));
TAIL_STATIC(0x574870u,574);
}
B45457a:L45457a:{c.instructions+=5;NFSU2_TR(0x45457a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45457e:{NFSU2_TR(0x45457e);
{u32 ea_=u32(u32(7897428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B454584:{NFSU2_TR(0x454584);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B454586:{NFSU2_TR(0x454586);
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
B454589:{NFSU2_TR(0x454589);
if(r1(R+514)){{goto L45467d;}}
}
B45458f:L45458f:{c.instructions+=3;NFSU2_TR(0x45458f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454592:{NFSU2_TR(0x454592);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454593:{NFSU2_TR(0x454593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454598ull));
TAIL_STATIC(0x574870u,574);
}
B454598:L454598:{c.instructions+=4;NFSU2_TR(0x454598);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B45459e:{NFSU2_TR(0x45459e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4545a0:{NFSU2_TR(0x4545a0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4545a3:{NFSU2_TR(0x4545a3);
if(r1(R+514)){{goto L4545ad;}}
}
B4545a5:L4545a5:{c.instructions+=2;NFSU2_TR(0x4545a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4545a7:{NFSU2_TR(0x4545a7);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4545ad:L4545ad:{c.instructions+=5;NFSU2_TR(0x4545ad);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4545b3:{NFSU2_TR(0x4545b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4545b4:{NFSU2_TR(0x4545b4);
__builtin_memmove((R+4),(R+24),4);
}
B4545b6:{NFSU2_TR(0x4545b6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4545ba:{NFSU2_TR(0x4545ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4545bfull));
TAIL_STATIC(0x4462a0u,446);
}
B4545bf:L4545bf:{c.instructions+=2;NFSU2_TR(0x4545bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4545c0:{NFSU2_TR(0x4545c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4545c5ull));
TAIL_STATIC(0x443d50u,443);
}
B4545c5:L4545c5:{c.instructions+=6;NFSU2_TR(0x4545c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4545c9:{NFSU2_TR(0x4545c9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4545cd:{NFSU2_TR(0x4545cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4545d1:{NFSU2_TR(0x4545d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4545d2:{NFSU2_TR(0x4545d2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4545d6:{NFSU2_TR(0x4545d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4545dbull));
TAIL_STATIC(0x443df0u,443);
}
B4545db:L4545db:{c.instructions+=22;NFSU2_TR(0x4545db);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4545e1:{NFSU2_TR(0x4545e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4545e4:{NFSU2_TR(0x4545e4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4545e8:{NFSU2_TR(0x4545e8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4545ec:{NFSU2_TR(0x4545ec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4545f0:{NFSU2_TR(0x4545f0);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B4545f2:{NFSU2_TR(0x4545f2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4545f6:{NFSU2_TR(0x4545f6);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4545fa:{NFSU2_TR(0x4545fa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4545fe:{NFSU2_TR(0x4545fe);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B454600:{NFSU2_TR(0x454600);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454604:{NFSU2_TR(0x454604);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c35000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45460c:{NFSU2_TR(0x45460c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B45460e:{NFSU2_TR(0x45460e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B454610:{NFSU2_TR(0x454610);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B454614:{NFSU2_TR(0x454614);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45461a:{NFSU2_TR(0x45461a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45461e:{NFSU2_TR(0x45461e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B454622:{NFSU2_TR(0x454622);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B454628:{NFSU2_TR(0x454628);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45462a:{NFSU2_TR(0x45462a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45462d:{NFSU2_TR(0x45462d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45463f;}}
}
B45462f:L45462f:{c.instructions+=4;NFSU2_TR(0x45462f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454633:{NFSU2_TR(0x454633);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B454635:{NFSU2_TR(0x454635);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45463b:{NFSU2_TR(0x45463b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45463f:L45463f:{c.instructions+=4;NFSU2_TR(0x45463f);
__builtin_memmove((R+0),gp(0x828640),4);
}
B454644:{NFSU2_TR(0x454644);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B454646:{NFSU2_TR(0x454646);
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
B454648:{NFSU2_TR(0x454648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45469f;}}
}
B45464a:L45464a:{c.instructions+=8;NFSU2_TR(0x45464a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45464e:{NFSU2_TR(0x45464e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454651:{NFSU2_TR(0x454651);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B454655:{NFSU2_TR(0x454655);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45465b:{NFSU2_TR(0x45465b);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454661:{NFSU2_TR(0x454661);
__builtin_memmove((R+0),gp(0x828640),4);
}
B454666:{NFSU2_TR(0x454666);
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
B454668:{NFSU2_TR(0x454668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45469f;}}
}
B45466a:L45466a:{c.instructions+=5;NFSU2_TR(0x45466a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45466e:{NFSU2_TR(0x45466e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454671:{NFSU2_TR(0x454671);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B454675:{NFSU2_TR(0x454675);
{u32 ea_=u32(r4(R+8)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45467b:{NFSU2_TR(0x45467b);
{goto L45469f;}
}
B45467d:L45467d:{c.instructions+=2;NFSU2_TR(0x45467d);
u8 U[14];
__builtin_memmove((U+6),gp(0x828640),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454683:{NFSU2_TR(0x454683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45469f;}}
}
B454685:L454685:{c.instructions+=4;NFSU2_TR(0x454685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454688:{NFSU2_TR(0x454688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45468e:{NFSU2_TR(0x45468e);
u8 U[14];
__builtin_memmove((U+6),gp(0x828640),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454694:{NFSU2_TR(0x454694);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45469f;}}
}
B454696:L454696:{c.instructions+=2;NFSU2_TR(0x454696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454699:{NFSU2_TR(0x454699);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45469f:L45469f:{c.instructions+=3;NFSU2_TR(0x45469f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4546a2:{NFSU2_TR(0x4546a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4546a3:{NFSU2_TR(0x4546a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4546a8ull));
TAIL_STATIC(0x574870u,574);
}
B4546a8:L4546a8:{c.instructions+=4;NFSU2_TR(0x4546a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4546ae:{NFSU2_TR(0x4546ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4546b0:{NFSU2_TR(0x4546b0);
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
B4546b3:{NFSU2_TR(0x4546b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454780;}}
}
B4546b9:L4546b9:{c.instructions+=3;NFSU2_TR(0x4546b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4546bc:{NFSU2_TR(0x4546bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4546bd:{NFSU2_TR(0x4546bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4546c2ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4546c2:L4546c2:{c.instructions+=8;NFSU2_TR(0x4546c2);
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
B4546c5:{NFSU2_TR(0x4546c5);
__builtin_memmove((R+28),(R+0),4);
}
B4546c7:{NFSU2_TR(0x4546c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4546cb:{NFSU2_TR(0x4546cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4546cc:{NFSU2_TR(0x4546cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4546d0:{NFSU2_TR(0x4546d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4546d1:{NFSU2_TR(0x4546d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4546d4:{NFSU2_TR(0x4546d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4546d9ull));
TAIL_STATIC(0x574d70u,574);
}
B4546d9:L4546d9:{c.instructions+=10;NFSU2_TR(0x4546d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4546dd:{NFSU2_TR(0x4546dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4546e1:{NFSU2_TR(0x4546e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4546e5:{NFSU2_TR(0x4546e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4546ec:{NFSU2_TR(0x4546ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4546f0:{NFSU2_TR(0x4546f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4546f7:{NFSU2_TR(0x4546f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4546fa:{NFSU2_TR(0x4546fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4546fb:{NFSU2_TR(0x4546fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454702:{NFSU2_TR(0x454702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454707ull));
TAIL_STATIC(0x574870u,574);
}
B454707:L454707:{c.instructions+=8;NFSU2_TR(0x454707);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45470d:{NFSU2_TR(0x45470d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454711:{NFSU2_TR(0x454711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454712:{NFSU2_TR(0x454712);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B454716:{NFSU2_TR(0x454716);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45471d:{NFSU2_TR(0x45471d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45471e:{NFSU2_TR(0x45471e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454721:{NFSU2_TR(0x454721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454726ull));
TAIL_STATIC(0x574c30u,574);
}
B454726:L454726:{c.instructions+=7;NFSU2_TR(0x454726);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45472a:{NFSU2_TR(0x45472a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B454730:{NFSU2_TR(0x454730);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454731:{NFSU2_TR(0x454731);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454733:{NFSU2_TR(0x454733);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B454735:{NFSU2_TR(0x454735);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B454738:{NFSU2_TR(0x454738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45476f;}}
}
B45473a:L45473a:{c.instructions+=9;NFSU2_TR(0x45473a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45473e:{NFSU2_TR(0x45473e);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B454745:{NFSU2_TR(0x454745);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45474b:{NFSU2_TR(0x45474b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45474c:{NFSU2_TR(0x45474c);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454757:{NFSU2_TR(0x454757);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454759:{NFSU2_TR(0x454759);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454760:{NFSU2_TR(0x454760);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454763:{NFSU2_TR(0x454763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454768ull));
TAIL_STATIC(0x5d75e0u,5d7);
}
B454768:L454768:{c.instructions+=6;NFSU2_TR(0x454768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454769:{NFSU2_TR(0x454769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45476a:{NFSU2_TR(0x45476a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45476b:{NFSU2_TR(0x45476b);
__builtin_memmove((R+16),(R+20),4);
}
B45476d:{NFSU2_TR(0x45476d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45476e:{NFSU2_TR(0x45476e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45476f:L45476f:{c.instructions+=5;NFSU2_TR(0x45476f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454772:{NFSU2_TR(0x454772);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B454779:{NFSU2_TR(0x454779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45477a:{NFSU2_TR(0x45477a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45477b:{NFSU2_TR(0x45477b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454780ull));
TAIL_STATIC(0x5d75e0u,5d7);
}
B454780:L454780:{c.instructions+=6;NFSU2_TR(0x454780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454781:{NFSU2_TR(0x454781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454782:{NFSU2_TR(0x454782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454783:{NFSU2_TR(0x454783);
__builtin_memmove((R+16),(R+20),4);
}
B454785:{NFSU2_TR(0x454785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454786:{NFSU2_TR(0x454786);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454790:L454790:{c.instructions+=11;NFSU2_TR(0x454790);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454794:{NFSU2_TR(0x454794);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454798:{NFSU2_TR(0x454798);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45479e:{NFSU2_TR(0x45479e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45479f:{NFSU2_TR(0x45479f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4547a0:{NFSU2_TR(0x4547a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4547a1:{NFSU2_TR(0x4547a1);
__builtin_memmove((R+24),(R+4),4);
}
B4547a3:{NFSU2_TR(0x4547a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4547a4:{NFSU2_TR(0x4547a4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4547aa:{NFSU2_TR(0x4547aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4547ad:{NFSU2_TR(0x4547ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4547b2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4547b2:L4547b2:{c.instructions+=6;NFSU2_TR(0x4547b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4547b5:{NFSU2_TR(0x4547b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4547b8:{NFSU2_TR(0x4547b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4547bb:{NFSU2_TR(0x4547bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4547bd:{NFSU2_TR(0x4547bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4547be:{NFSU2_TR(0x4547be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4547c3ull));
TAIL_STATIC(0x440820u,440);
}
B4547c3:L4547c3:{c.instructions+=6;NFSU2_TR(0x4547c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4547c7:{NFSU2_TR(0x4547c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4547c9:{NFSU2_TR(0x4547c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8d8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4547cf:{NFSU2_TR(0x4547cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4547d2:{NFSU2_TR(0x4547d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4547d4:{NFSU2_TR(0x4547d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4547e2;}}
}
B4547d6:L4547d6:{c.instructions+=3;NFSU2_TR(0x4547d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4547dd:{NFSU2_TR(0x4547dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4547e0:{NFSU2_TR(0x4547e0);
{goto L4547ee;}
}
B4547e2:L4547e2:{c.instructions+=4;NFSU2_TR(0x4547e2);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4547e5:{NFSU2_TR(0x4547e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4547e8:{NFSU2_TR(0x4547e8);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4547eb:{NFSU2_TR(0x4547eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4547ee:L4547ee:{c.instructions+=4;NFSU2_TR(0x4547ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4547f1:{NFSU2_TR(0x4547f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4547f4:{NFSU2_TR(0x4547f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4547fc:{NFSU2_TR(0x4547fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454801ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B454801:L454801:{c.instructions+=3;NFSU2_TR(0x454801);
__builtin_memmove((R+4),(R+28),4);
}
B454803:{NFSU2_TR(0x454803);
w4(R+12,u32(s32(s8(r1(R+0)))));
}
B454806:{NFSU2_TR(0x454806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45480bull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B45480b:L45480b:{c.instructions+=3;NFSU2_TR(0x45480b);
__builtin_memmove((R+4),(R+28),4);
}
B45480d:{NFSU2_TR(0x45480d);
__builtin_memmove((R+20),(R+0),4);
}
B45480f:{NFSU2_TR(0x45480f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454814ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B454814:L454814:{c.instructions+=2;NFSU2_TR(0x454814);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B454816:{NFSU2_TR(0x454816);
if(r1(R+518)){{goto L454859;}}
}
B454818:L454818:{c.instructions+=2;NFSU2_TR(0x454818);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45481a:{NFSU2_TR(0x45481a);
if(r1(R+518)){{goto L454859;}}
}
B45481c:L45481c:{c.instructions+=9;NFSU2_TR(0x45481c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45481e:{NFSU2_TR(0x45481e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45481f:{NFSU2_TR(0x45481f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
}
B454822:{NFSU2_TR(0x454822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454823:{NFSU2_TR(0x454823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454824:{NFSU2_TR(0x454824);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454825:{NFSU2_TR(0x454825);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454826:{NFSU2_TR(0x454826);
__builtin_memmove((R+4),(R+24),4);
}
B454828:{NFSU2_TR(0x454828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45482dull));
TAIL_STATIC(0x446bc0u,446);
}
B45482d:L45482d:{c.instructions+=4;NFSU2_TR(0x45482d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B454831:{NFSU2_TR(0x454831);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B454833:{NFSU2_TR(0x454833);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B454836:{NFSU2_TR(0x454836);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L454872;}}
}
B454838:L454838:{c.instructions+=3;NFSU2_TR(0x454838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45483a:{NFSU2_TR(0x45483a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45483b:{NFSU2_TR(0x45483b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454840ull));
TAIL_STATIC(0x440540u,440);
}
B454840:L454840:{c.instructions+=9;NFSU2_TR(0x454840);
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
B454843:{NFSU2_TR(0x454843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454844:{NFSU2_TR(0x454844);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45484a:{NFSU2_TR(0x45484a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454851:{NFSU2_TR(0x454851);
__builtin_memmove((R+0),(R+24),4);
}
B454853:{NFSU2_TR(0x454853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454854:{NFSU2_TR(0x454854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454855:{NFSU2_TR(0x454855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454856:{NFSU2_TR(0x454856);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454859:L454859:{c.instructions+=9;NFSU2_TR(0x454859);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45485d:{NFSU2_TR(0x45485d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45485f:{NFSU2_TR(0x45485f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454861:{NFSU2_TR(0x454861);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454862:{NFSU2_TR(0x454862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454863:{NFSU2_TR(0x454863);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
}
B454866:{NFSU2_TR(0x454866);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454867:{NFSU2_TR(0x454867);
__builtin_memmove((R+4),(R+24),4);
}
B454869:{NFSU2_TR(0x454869);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45486eull));
TAIL_STATIC(0x44f480u,44f);
}
B45486e:L45486e:{c.instructions+=2;NFSU2_TR(0x45486e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B454870:{NFSU2_TR(0x454870);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x454838u);}goto L454838;}}
}
B454872:L454872:{c.instructions+=24;NFSU2_TR(0x454872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B454874:{NFSU2_TR(0x454874);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454877:{NFSU2_TR(0x454877);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B45487b:{NFSU2_TR(0x45487b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B45487f:{NFSU2_TR(0x45487f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454883:{NFSU2_TR(0x454883);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B454887:{NFSU2_TR(0x454887);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45488b:{NFSU2_TR(0x45488b);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B454891:{NFSU2_TR(0x454891);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B454895:{NFSU2_TR(0x454895);
{u32 ea_=u32(u32(8554292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45489b:{NFSU2_TR(0x45489b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45489d:{NFSU2_TR(0x45489d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45489f:{NFSU2_TR(0x45489f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4548a1:{NFSU2_TR(0x4548a1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4548a4:{NFSU2_TR(0x4548a4);
w4(R+28,u32(0x1ull));
}
B4548a9:{NFSU2_TR(0x4548a9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4548ac:{NFSU2_TR(0x4548ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4548af:{NFSU2_TR(0x4548af);
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
B4548b1:{NFSU2_TR(0x4548b1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4548b3:{NFSU2_TR(0x4548b3);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4548b5:{NFSU2_TR(0x4548b5);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4548b8:{NFSU2_TR(0x4548b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4548ba:{NFSU2_TR(0x4548ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4548bc:{NFSU2_TR(0x4548bc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4548f8;}}
}
B4548be:L4548be:{c.instructions+=1;NFSU2_TR(0x4548be);
w4(R+20,u32(0x18ull));
}
B4548c3:L4548c3:{c.instructions+=6;NFSU2_TR(0x4548c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4548c7:{NFSU2_TR(0x4548c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4548c8:{NFSU2_TR(0x4548c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4548c9:{NFSU2_TR(0x4548c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4548ca:{NFSU2_TR(0x4548ca);
__builtin_memmove((R+4),(R+24),4);
}
B4548cc:{NFSU2_TR(0x4548cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4548d1ull));
TAIL_STATIC(0x452a00u,452);
}
B4548d1:L4548d1:{c.instructions+=6;NFSU2_TR(0x4548d1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4548d5:{NFSU2_TR(0x4548d5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4548d9:{NFSU2_TR(0x4548d9);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4548dc:{NFSU2_TR(0x4548dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4548de:{NFSU2_TR(0x4548de);
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
B4548e1:{NFSU2_TR(0x4548e1);
if(r1(R+518)){{goto L4548f8;}}
}
B4548e3:L4548e3:{c.instructions+=4;NFSU2_TR(0x4548e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4548e5:{NFSU2_TR(0x4548e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4548e9:{NFSU2_TR(0x4548e9);
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
B4548eb:{NFSU2_TR(0x4548eb);
if(r1(R+518)){{goto L4548f8;}}
}
B4548ed:L4548ed:{c.instructions+=5;NFSU2_TR(0x4548ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4548f0:{NFSU2_TR(0x4548f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4548f1:{NFSU2_TR(0x4548f1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x18ull))));
}
B4548f4:{NFSU2_TR(0x4548f4);
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
B4548f6:{NFSU2_TR(0x4548f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4548c3u);}goto L4548c3;}}
}
B4548f8:L4548f8:{c.instructions+=9;NFSU2_TR(0x4548f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4548fc:{NFSU2_TR(0x4548fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4548ff:{NFSU2_TR(0x4548ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454900:{NFSU2_TR(0x454900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454903:{NFSU2_TR(0x454903);
__builtin_memmove((R+0),(R+24),4);
}
B454905:{NFSU2_TR(0x454905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454906:{NFSU2_TR(0x454906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454907:{NFSU2_TR(0x454907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454908:{NFSU2_TR(0x454908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454910:L454910:{c.instructions+=4;NFSU2_TR(0x454910);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454911:{NFSU2_TR(0x454911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454912:{NFSU2_TR(0x454912);
__builtin_memmove((R+12),(R+4),4);
}
B454914:{NFSU2_TR(0x454914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454919ull));
TAIL_STATIC(0x442a10u,442);
}
B454919:L454919:{c.instructions+=3;NFSU2_TR(0x454919);
__builtin_memmove((R+24),(R+0),4);
}
B45491b:{NFSU2_TR(0x45491b);
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
B45491d:{NFSU2_TR(0x45491d);
if(r1(R+518)){{goto L454965;}}
}
B45491f:L45491f:{c.instructions+=6;NFSU2_TR(0x45491f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454925:{NFSU2_TR(0x454925);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454926:{NFSU2_TR(0x454926);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B454929:{NFSU2_TR(0x454929);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45492a:{NFSU2_TR(0x45492a);
__builtin_memmove((R+4),(R+28),4);
}
B45492c:{NFSU2_TR(0x45492c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454931ull));
TAIL_STATIC(0x43be60u,43b);
}
B454931:L454931:{c.instructions+=3;NFSU2_TR(0x454931);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454933:{NFSU2_TR(0x454933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454934:{NFSU2_TR(0x454934);
if(r1(R+518)){{goto L454949;}}
}
B454936:L454936:{c.instructions+=2;NFSU2_TR(0x454936);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B454938:{NFSU2_TR(0x454938);
if(r1(R+518)){{goto L454949;}}
}
B45493a:L45493a:{c.instructions+=6;NFSU2_TR(0x45493a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B45493c:{NFSU2_TR(0x45493c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45493f:{NFSU2_TR(0x45493f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B454941:{NFSU2_TR(0x454941);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454944:{NFSU2_TR(0x454944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B454947:{NFSU2_TR(0x454947);
{goto L454950;}
}
B454949:L454949:{c.instructions+=2;NFSU2_TR(0x454949);
__builtin_memmove((R+4),(R+24),4);
}
B45494b:{NFSU2_TR(0x45494b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454950ull));
TAIL_STATIC(0x452bf0u,452);
}
B454950:L454950:{c.instructions+=4;NFSU2_TR(0x454950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B454953:{NFSU2_TR(0x454953);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454959:{NFSU2_TR(0x454959);
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
B45495b:{NFSU2_TR(0x45495b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45495f;}}
}
B45495d:L45495d:{c.instructions+=1;NFSU2_TR(0x45495d);
__builtin_memmove((R+0),(R+24),4);
}
B45495f:L45495f:{c.instructions+=1;NFSU2_TR(0x45495f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454965:L454965:{c.instructions+=3;NFSU2_TR(0x454965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454966:{NFSU2_TR(0x454966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454967:{NFSU2_TR(0x454967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454970:L454970:{c.instructions+=6;NFSU2_TR(0x454970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454971:{NFSU2_TR(0x454971);
__builtin_memmove((R+24),(R+4),4);
}
B454973:{NFSU2_TR(0x454973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454979:{NFSU2_TR(0x454979);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B45497c:{NFSU2_TR(0x45497c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45497f:{NFSU2_TR(0x45497f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f4u,455);}
}
B454985:L454985:{c.instructions+=4;NFSU2_TR(0x454985);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454986:{NFSU2_TR(0x454986);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454987:{NFSU2_TR(0x454987);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454988:{NFSU2_TR(0x454988);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4558f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45498f:L45498f:{c.instructions+=4;NFSU2_TR(0x45498f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454993:{NFSU2_TR(0x454993);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2dull))));
}
B454998:{NFSU2_TR(0x454998);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x25ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x25ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x25ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45499b:{NFSU2_TR(0x45499b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f1u,455);}
}
B4549a1:L4549a1:{c.instructions+=2;NFSU2_TR(0x4549a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x455970ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4549a8:{NFSU2_TR(0x4549a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455934ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4549af:L4549af:{c.instructions+=8;NFSU2_TR(0x4549af);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4549b4:{NFSU2_TR(0x4549b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4549b8:{NFSU2_TR(0x4549b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4549b9:{NFSU2_TR(0x4549b9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4549bd:{NFSU2_TR(0x4549bd);
w4(R+4,u32(0x7ec3f0ull));
}
B4549c2:{NFSU2_TR(0x4549c2);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4549c8:{NFSU2_TR(0x4549c8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4549cb:{NFSU2_TR(0x4549cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4549d0ull));
TAIL_STATIC(0x4132c0u,413);
}
B4549d0:L4549d0:{c.instructions+=6;NFSU2_TR(0x4549d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4549d1:{NFSU2_TR(0x4549d1);
{u32 ea_=u32(r4(R+24)+u32(7316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4549d7:{NFSU2_TR(0x4549d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4549d8:{NFSU2_TR(0x4549d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4549d9:{NFSU2_TR(0x4549d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4549da:{NFSU2_TR(0x4549da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4549dd:L4549dd:{c.instructions+=8;NFSU2_TR(0x4549dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4549e2:{NFSU2_TR(0x4549e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4549e6:{NFSU2_TR(0x4549e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4549e7:{NFSU2_TR(0x4549e7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4549eb:{NFSU2_TR(0x4549eb);
w4(R+4,u32(0x7ec3f0ull));
}
B4549f0:{NFSU2_TR(0x4549f0);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4549f6:{NFSU2_TR(0x4549f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4549f9:{NFSU2_TR(0x4549f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4549feull));
TAIL_STATIC(0x4132c0u,413);
}
B4549fe:L4549fe:{c.instructions+=7;NFSU2_TR(0x4549fe);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B454a04:{NFSU2_TR(0x454a04);
{u32 ea_=u32(u32(8303732u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B454a0a:{NFSU2_TR(0x454a0a);
{u32 ea_=u32(u32(8303732u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B454a10:{NFSU2_TR(0x454a10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B454a16:{NFSU2_TR(0x454a16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B454a18:{NFSU2_TR(0x454a18);
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
B454a1b:{NFSU2_TR(0x454a1b);
if(r1(R+514)){{goto L454a2e;}}
}
B454a1d:L454a1d:{c.instructions+=6;NFSU2_TR(0x454a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454a1e:{NFSU2_TR(0x454a1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454a1f:{NFSU2_TR(0x454a1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454a20:{NFSU2_TR(0x454a20);
s4(0x7eb474,u32(0x3f800000ull));
}
B454a2a:{NFSU2_TR(0x454a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454a2b:{NFSU2_TR(0x454a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454a2e:L454a2e:{c.instructions+=5;NFSU2_TR(0x454a2e);
{u32 ea_=u32(u32(8303732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454a34:{NFSU2_TR(0x454a34);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B454a3a:{NFSU2_TR(0x454a3a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B454a3c:{NFSU2_TR(0x454a3c);
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
B454a3f:{NFSU2_TR(0x454a3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454a45:L454a45:{c.instructions+=6;NFSU2_TR(0x454a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454a46:{NFSU2_TR(0x454a46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454a47:{NFSU2_TR(0x454a47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454a48:{NFSU2_TR(0x454a48);
s4(0x7eb474,u32(0x41a00000ull));
}
B454a52:{NFSU2_TR(0x454a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454a53:{NFSU2_TR(0x454a53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454a56:L454a56:{c.instructions+=3;NFSU2_TR(0x454a56);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454a5a:{NFSU2_TR(0x454a5a);
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
B454a5c:{NFSU2_TR(0x454a5c);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454a62:L454a62:{c.instructions+=3;NFSU2_TR(0x454a62);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454a64:{NFSU2_TR(0x454a64);
__builtin_memmove((R+4),(R+24),4);
}
B454a66:{NFSU2_TR(0x454a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454a6bull));
TAIL_STATIC(0x455c80u,455);
}
B454a6b:L454a6b:{c.instructions+=5;NFSU2_TR(0x454a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454a6c:{NFSU2_TR(0x454a6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454a6d:{NFSU2_TR(0x454a6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454a6e:{NFSU2_TR(0x454a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454a6f:{NFSU2_TR(0x454a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454a72:L454a72:{c.instructions+=3;NFSU2_TR(0x454a72);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454a76:{NFSU2_TR(0x454a76);
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
B454a78:{NFSU2_TR(0x454a78);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454a7e:L454a7e:{c.instructions+=3;NFSU2_TR(0x454a7e);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454a80:{NFSU2_TR(0x454a80);
__builtin_memmove((R+4),(R+24),4);
}
B454a82:{NFSU2_TR(0x454a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454a87ull));
TAIL_STATIC(0x455c80u,455);
}
B454a87:L454a87:{c.instructions+=5;NFSU2_TR(0x454a87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454a88:{NFSU2_TR(0x454a88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454a89:{NFSU2_TR(0x454a89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454a8a:{NFSU2_TR(0x454a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454a8b:{NFSU2_TR(0x454a8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454a8e:L454a8e:{c.instructions+=5;NFSU2_TR(0x454a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454a94:{NFSU2_TR(0x454a94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454a96:{NFSU2_TR(0x454a96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454a97:{NFSU2_TR(0x454a97);
__builtin_memmove((R+4),(R+24),4);
}
B454a99:{NFSU2_TR(0x454a99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454a9eull));
TAIL_STATIC(0x448820u,448);
}
B454a9e:L454a9e:{c.instructions+=5;NFSU2_TR(0x454a9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454a9f:{NFSU2_TR(0x454a9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454aa0:{NFSU2_TR(0x454aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454aa1:{NFSU2_TR(0x454aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454aa2:{NFSU2_TR(0x454aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454aa5:L454aa5:{c.instructions+=5;NFSU2_TR(0x454aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454aab:{NFSU2_TR(0x454aab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454aad:{NFSU2_TR(0x454aad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454aae:{NFSU2_TR(0x454aae);
__builtin_memmove((R+4),(R+24),4);
}
B454ab0:{NFSU2_TR(0x454ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454ab5ull));
TAIL_STATIC(0x450790u,450);
}
B454ab5:L454ab5:{c.instructions+=5;NFSU2_TR(0x454ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454ab6:{NFSU2_TR(0x454ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454ab7:{NFSU2_TR(0x454ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454ab8:{NFSU2_TR(0x454ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454ab9:{NFSU2_TR(0x454ab9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454abc:L454abc:{c.instructions+=3;NFSU2_TR(0x454abc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454abe:{NFSU2_TR(0x454abe);
__builtin_memmove((R+4),(R+24),4);
}
B454ac0:{NFSU2_TR(0x454ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454ac5ull));
TAIL_STATIC(0x455c80u,455);
}
B454ac5:L454ac5:{c.instructions+=5;NFSU2_TR(0x454ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454ac6:{NFSU2_TR(0x454ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454ac7:{NFSU2_TR(0x454ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454ac8:{NFSU2_TR(0x454ac8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454ac9:{NFSU2_TR(0x454ac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454acc:L454acc:{c.instructions+=9;NFSU2_TR(0x454acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454ad2:{NFSU2_TR(0x454ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B454ad8:{NFSU2_TR(0x454ad8);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B454ada:{NFSU2_TR(0x454ada);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B454adc:{NFSU2_TR(0x454adc);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B454adf:{NFSU2_TR(0x454adf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B454ae2:{NFSU2_TR(0x454ae2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454ae3:{NFSU2_TR(0x454ae3);
__builtin_memmove((R+4),(R+24),4);
}
B454ae5:{NFSU2_TR(0x454ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454aeaull));
TAIL_STATIC(0x455c80u,455);
}
B454aea:L454aea:{c.instructions+=5;NFSU2_TR(0x454aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454aeb:{NFSU2_TR(0x454aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454aec:{NFSU2_TR(0x454aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454aed:{NFSU2_TR(0x454aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454aee:{NFSU2_TR(0x454aee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454af1:L454af1:{c.instructions+=4;NFSU2_TR(0x454af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454af7:{NFSU2_TR(0x454af7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454af8:{NFSU2_TR(0x454af8);
__builtin_memmove((R+4),(R+24),4);
}
B454afa:{NFSU2_TR(0x454afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454affull));
TAIL_STATIC(0x442fa0u,442);
}
B454aff:L454aff:{c.instructions+=5;NFSU2_TR(0x454aff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454b00:{NFSU2_TR(0x454b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454b01:{NFSU2_TR(0x454b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454b02:{NFSU2_TR(0x454b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454b03:{NFSU2_TR(0x454b03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454b06:L454b06:{c.instructions+=8;NFSU2_TR(0x454b06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B454b0c:{NFSU2_TR(0x454b0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B454b10:{NFSU2_TR(0x454b10);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B454b14:{NFSU2_TR(0x454b14);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454b15:{NFSU2_TR(0x454b15);
__builtin_memmove((R+4),(R+24),4);
}
B454b17:{NFSU2_TR(0x454b17);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B454b1c:{NFSU2_TR(0x454b1c);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x8cull));
s2(u32(r4(U+0)),r2(U+4));
}
B454b23:{NFSU2_TR(0x454b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454b28ull));
TAIL_STATIC(0x447970u,447);
}
B454b28:L454b28:{c.instructions+=6;NFSU2_TR(0x454b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454b2e:{NFSU2_TR(0x454b2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B454b34:{NFSU2_TR(0x454b34);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B454b3b:{NFSU2_TR(0x454b3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454b3c:{NFSU2_TR(0x454b3c);
__builtin_memmove((R+4),(R+24),4);
}
B454b3e:{NFSU2_TR(0x454b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454b43ull));
TAIL_STATIC(0x4479d0u,447);
}
B454b43:L454b43:{c.instructions+=4;NFSU2_TR(0x454b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454b49:{NFSU2_TR(0x454b49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454b4a:{NFSU2_TR(0x454b4a);
__builtin_memmove((R+4),(R+24),4);
}
B454b4c:{NFSU2_TR(0x454b4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454b51ull));
TAIL_STATIC(0x442fd0u,442);
}
B454b51:L454b51:{c.instructions+=5;NFSU2_TR(0x454b51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454b52:{NFSU2_TR(0x454b52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454b53:{NFSU2_TR(0x454b53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454b54:{NFSU2_TR(0x454b54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454b55:{NFSU2_TR(0x454b55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454b58:L454b58:{c.instructions+=3;NFSU2_TR(0x454b58);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454b5a:{NFSU2_TR(0x454b5a);
__builtin_memmove((R+4),(R+24),4);
}
B454b5c:{NFSU2_TR(0x454b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454b61ull));
TAIL_STATIC(0x455c80u,455);
}
B454b61:L454b61:{c.instructions+=5;NFSU2_TR(0x454b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454b62:{NFSU2_TR(0x454b62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454b63:{NFSU2_TR(0x454b63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454b64:{NFSU2_TR(0x454b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454b65:{NFSU2_TR(0x454b65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454b68:L454b68:{c.instructions+=6;NFSU2_TR(0x454b68);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B454b6a:{NFSU2_TR(0x454b6a);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454b6c:{NFSU2_TR(0x454b6c);
__builtin_memmove((R+4),(R+24),4);
}
B454b6e:{NFSU2_TR(0x454b6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B454b74:{NFSU2_TR(0x454b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454b7a:{NFSU2_TR(0x454b7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454b7full));
TAIL_STATIC(0x455c80u,455);
}
B454b7f:L454b7f:{c.instructions+=5;NFSU2_TR(0x454b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454b80:{NFSU2_TR(0x454b80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454b81:{NFSU2_TR(0x454b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454b82:{NFSU2_TR(0x454b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454b83:{NFSU2_TR(0x454b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454b86:L454b86:{c.instructions+=9;NFSU2_TR(0x454b86);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454b8c:{NFSU2_TR(0x454b8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454b8d:{NFSU2_TR(0x454b8d);
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
B454b8f:{NFSU2_TR(0x454b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454b90:{NFSU2_TR(0x454b90);
__builtin_memmove((R+0),(R+518),1);
}
B454b93:{NFSU2_TR(0x454b93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454b94:{NFSU2_TR(0x454b94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B454b9a:{NFSU2_TR(0x454b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454b9b:{NFSU2_TR(0x454b9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454b9e:L454b9e:{c.instructions+=2;NFSU2_TR(0x454b9e);
__builtin_memmove((R+4),(R+24),4);
}
B454ba0:{NFSU2_TR(0x454ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454ba5ull));
TAIL_STATIC(0x450c90u,450);
}
B454ba5:L454ba5:{c.instructions+=5;NFSU2_TR(0x454ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454ba6:{NFSU2_TR(0x454ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454ba7:{NFSU2_TR(0x454ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454ba8:{NFSU2_TR(0x454ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454ba9:{NFSU2_TR(0x454ba9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454bac:L454bac:{c.instructions+=4;NFSU2_TR(0x454bac);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454bb0:{NFSU2_TR(0x454bb0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B454bb2:{NFSU2_TR(0x454bb2);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B454bb4:{NFSU2_TR(0x454bb4);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454bba:L454bba:{c.instructions+=4;NFSU2_TR(0x454bba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454bbe:{NFSU2_TR(0x454bbe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2bull))));
}
B454bc3:{NFSU2_TR(0x454bc3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454bc6:{NFSU2_TR(0x454bc6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f1u,455);}
}
B454bcc:L454bcc:{c.instructions+=2;NFSU2_TR(0x454bcc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4559acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B454bd3:{NFSU2_TR(0x454bd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455998ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B454bda:L454bda:{c.instructions+=2;NFSU2_TR(0x454bda);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
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
B454be0:{NFSU2_TR(0x454be0);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454be6:L454be6:{c.instructions+=6;NFSU2_TR(0x454be6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454be7:{NFSU2_TR(0x454be7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454be8:{NFSU2_TR(0x454be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454be9:{NFSU2_TR(0x454be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454bf3:{NFSU2_TR(0x454bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454bf4:{NFSU2_TR(0x454bf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454bf7:L454bf7:{c.instructions+=6;NFSU2_TR(0x454bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454bfd:{NFSU2_TR(0x454bfd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B454bfe:{NFSU2_TR(0x454bfe);
__builtin_memmove((R+0),(R+4),4);
}
B454c00:{NFSU2_TR(0x454c00);
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
B454c03:{NFSU2_TR(0x454c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454c09:{NFSU2_TR(0x454c09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454c0f:L454c0f:{c.instructions+=6;NFSU2_TR(0x454c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454c10:{NFSU2_TR(0x454c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454c11:{NFSU2_TR(0x454c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454c17:{NFSU2_TR(0x454c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454c18:{NFSU2_TR(0x454c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454c19:{NFSU2_TR(0x454c19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454c1c:L454c1c:{c.instructions+=3;NFSU2_TR(0x454c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454c22:{NFSU2_TR(0x454c22);
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454c24:{NFSU2_TR(0x454c24);
if(r1(R+518)){{goto L454c3b;}}
}
B454c26:L454c26:{c.instructions+=2;NFSU2_TR(0x454c26);
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
B454c27:{NFSU2_TR(0x454c27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454c2d:L454c2d:{c.instructions+=2;NFSU2_TR(0x454c2d);
__builtin_memmove((R+4),(R+24),4);
}
B454c2f:{NFSU2_TR(0x454c2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454c34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x454910u);}goto L454910;}
}
B454c34:L454c34:{c.instructions+=2;NFSU2_TR(0x454c34);
__builtin_memmove((R+4),(R+24),4);
}
B454c36:{NFSU2_TR(0x454c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454c3bull));
TAIL_STATIC(0x44a4d0u,44a);
}
B454c3b:L454c3b:{c.instructions+=3;NFSU2_TR(0x454c3b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454c3d:{NFSU2_TR(0x454c3d);
__builtin_memmove((R+4),(R+24),4);
}
B454c3f:{NFSU2_TR(0x454c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454c44ull));
TAIL_STATIC(0x455c80u,455);
}
B454c44:L454c44:{c.instructions+=5;NFSU2_TR(0x454c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454c45:{NFSU2_TR(0x454c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454c46:{NFSU2_TR(0x454c46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454c47:{NFSU2_TR(0x454c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454c48:{NFSU2_TR(0x454c48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454c4b:L454c4b:{c.instructions+=4;NFSU2_TR(0x454c4b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454c4f:{NFSU2_TR(0x454c4f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B454c51:{NFSU2_TR(0x454c51);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B454c53:{NFSU2_TR(0x454c53);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454c59:L454c59:{c.instructions+=4;NFSU2_TR(0x454c59);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454c5d:{NFSU2_TR(0x454c5d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2bull))));
}
B454c62:{NFSU2_TR(0x454c62);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454c65:{NFSU2_TR(0x454c65);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f1u,455);}
}
B454c6b:L454c6b:{c.instructions+=2;NFSU2_TR(0x454c6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4559d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B454c72:{NFSU2_TR(0x454c72);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4559bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B454c79:L454c79:{c.instructions+=2;NFSU2_TR(0x454c79);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
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
B454c7f:{NFSU2_TR(0x454c7f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454c85:L454c85:{c.instructions+=6;NFSU2_TR(0x454c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454c86:{NFSU2_TR(0x454c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454c87:{NFSU2_TR(0x454c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454c88:{NFSU2_TR(0x454c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454c92:{NFSU2_TR(0x454c92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454c93:{NFSU2_TR(0x454c93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454c96:L454c96:{c.instructions+=6;NFSU2_TR(0x454c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454c9c:{NFSU2_TR(0x454c9c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B454c9d:{NFSU2_TR(0x454c9d);
__builtin_memmove((R+0),(R+4),4);
}
B454c9f:{NFSU2_TR(0x454c9f);
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
B454ca2:{NFSU2_TR(0x454ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454ca8:{NFSU2_TR(0x454ca8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454cae:L454cae:{c.instructions+=6;NFSU2_TR(0x454cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454caf:{NFSU2_TR(0x454caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454cb0:{NFSU2_TR(0x454cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454cb6:{NFSU2_TR(0x454cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454cb7:{NFSU2_TR(0x454cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454cb8:{NFSU2_TR(0x454cb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454cbb:L454cbb:{c.instructions+=3;NFSU2_TR(0x454cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454cc1:{NFSU2_TR(0x454cc1);
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454cc3:{NFSU2_TR(0x454cc3);
if(r1(R+518)){{goto L454cea;}}
}
B454cc5:L454cc5:{c.instructions+=2;NFSU2_TR(0x454cc5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454cc6:{NFSU2_TR(0x454cc6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x454c34u);}goto L454c34;}}
}
B454ccc:L454ccc:{c.instructions+=2;NFSU2_TR(0x454ccc);
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
B454ccd:{NFSU2_TR(0x454ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454cd3:L454cd3:{c.instructions+=2;NFSU2_TR(0x454cd3);
__builtin_memmove((R+4),(R+24),4);
}
B454cd5:{NFSU2_TR(0x454cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454cdaull));
TAIL_STATIC(0x442950u,442);
}
B454cda:L454cda:{c.instructions+=3;NFSU2_TR(0x454cda);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454cdc:{NFSU2_TR(0x454cdc);
__builtin_memmove((R+4),(R+24),4);
}
B454cde:{NFSU2_TR(0x454cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454ce3ull));
TAIL_STATIC(0x455c80u,455);
}
B454ce3:L454ce3:{c.instructions+=5;NFSU2_TR(0x454ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454ce4:{NFSU2_TR(0x454ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454ce5:{NFSU2_TR(0x454ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454ce6:{NFSU2_TR(0x454ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454ce7:{NFSU2_TR(0x454ce7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454cea:L454cea:{c.instructions+=2;NFSU2_TR(0x454cea);
__builtin_memmove((R+4),(R+24),4);
}
B454cec:{NFSU2_TR(0x454cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454cf1ull));
TAIL_STATIC(0x450ed0u,450);
}
B454cf1:L454cf1:{c.instructions+=3;NFSU2_TR(0x454cf1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454cf3:{NFSU2_TR(0x454cf3);
__builtin_memmove((R+4),(R+24),4);
}
B454cf5:{NFSU2_TR(0x454cf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454cfaull));
TAIL_STATIC(0x455c80u,455);
}
B454cfa:L454cfa:{c.instructions+=5;NFSU2_TR(0x454cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454cfb:{NFSU2_TR(0x454cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454cfc:{NFSU2_TR(0x454cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454cfd:{NFSU2_TR(0x454cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454cfe:{NFSU2_TR(0x454cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454d01:L454d01:{c.instructions+=4;NFSU2_TR(0x454d01);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454d05:{NFSU2_TR(0x454d05);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B454d07:{NFSU2_TR(0x454d07);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B454d09:{NFSU2_TR(0x454d09);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454d0f:L454d0f:{c.instructions+=4;NFSU2_TR(0x454d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454d13:{NFSU2_TR(0x454d13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2bull))));
}
B454d18:{NFSU2_TR(0x454d18);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454d1b:{NFSU2_TR(0x454d1b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f1u,455);}
}
B454d21:L454d21:{c.instructions+=2;NFSU2_TR(0x454d21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4559f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B454d28:{NFSU2_TR(0x454d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4559e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B454d2f:L454d2f:{c.instructions+=2;NFSU2_TR(0x454d2f);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
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
B454d35:{NFSU2_TR(0x454d35);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454d3b:L454d3b:{c.instructions+=6;NFSU2_TR(0x454d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454d3c:{NFSU2_TR(0x454d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454d3d:{NFSU2_TR(0x454d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454d3e:{NFSU2_TR(0x454d3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454d48:{NFSU2_TR(0x454d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454d49:{NFSU2_TR(0x454d49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454d4c:L454d4c:{c.instructions+=6;NFSU2_TR(0x454d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454d52:{NFSU2_TR(0x454d52);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B454d53:{NFSU2_TR(0x454d53);
__builtin_memmove((R+0),(R+4),4);
}
B454d55:{NFSU2_TR(0x454d55);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454d58:{NFSU2_TR(0x454d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454d5e:{NFSU2_TR(0x454d5e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454d64:L454d64:{c.instructions+=6;NFSU2_TR(0x454d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454d65:{NFSU2_TR(0x454d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454d66:{NFSU2_TR(0x454d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454d6c:{NFSU2_TR(0x454d6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454d6d:{NFSU2_TR(0x454d6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454d6e:{NFSU2_TR(0x454d6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454d71:L454d71:{c.instructions+=6;NFSU2_TR(0x454d71);
__builtin_memmove((R+4),gp(0x82a594),4);
}
B454d77:{NFSU2_TR(0x454d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454d7d:{NFSU2_TR(0x454d7d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454d7e:{NFSU2_TR(0x454d7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454d7f:{NFSU2_TR(0x454d7f);
__builtin_memmove((R+4),(R+24),4);
}
B454d81:{NFSU2_TR(0x454d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454d86ull));
TAIL_STATIC(0x448a40u,448);
}
B454d86:L454d86:{c.instructions+=3;NFSU2_TR(0x454d86);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454d88:{NFSU2_TR(0x454d88);
__builtin_memmove((R+4),(R+24),4);
}
B454d8a:{NFSU2_TR(0x454d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454d8full));
TAIL_STATIC(0x455c80u,455);
}
B454d8f:L454d8f:{c.instructions+=5;NFSU2_TR(0x454d8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454d90:{NFSU2_TR(0x454d90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454d91:{NFSU2_TR(0x454d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454d92:{NFSU2_TR(0x454d92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454d93:{NFSU2_TR(0x454d93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454d96:L454d96:{c.instructions+=4;NFSU2_TR(0x454d96);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B454d9a:{NFSU2_TR(0x454d9a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B454d9c:{NFSU2_TR(0x454d9c);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B454d9e:{NFSU2_TR(0x454d9e);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454da4:L454da4:{c.instructions+=4;NFSU2_TR(0x454da4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454da8:{NFSU2_TR(0x454da8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffff2bull))));
__builtin_memmove((R+4),(U+0),4);
}
B454dae:{NFSU2_TR(0x454dae);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B454db1:{NFSU2_TR(0x454db1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4558f1u,455);}
}
B454db7:L454db7:{c.instructions+=2;NFSU2_TR(0x454db7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x455a14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B454dbe:{NFSU2_TR(0x454dbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455a04ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B454dc5:L454dc5:{c.instructions+=9;NFSU2_TR(0x454dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B454dcb:{NFSU2_TR(0x454dcb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B454dcd:{NFSU2_TR(0x454dcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B454dd2:{NFSU2_TR(0x454dd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B454dd5:{NFSU2_TR(0x454dd5);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454dd7:{NFSU2_TR(0x454dd7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B454ddb:{NFSU2_TR(0x454ddb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B454ddd:{NFSU2_TR(0x454ddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454dde:{NFSU2_TR(0x454dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454de3ull));
TAIL_STATIC(0x43c280u,43c);
}
B454de3:L454de3:{c.instructions+=7;NFSU2_TR(0x454de3);
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
B454de6:{NFSU2_TR(0x454de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454de7:{NFSU2_TR(0x454de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454de8:{NFSU2_TR(0x454de8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454de9:{NFSU2_TR(0x454de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454def:{NFSU2_TR(0x454def);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454df0:{NFSU2_TR(0x454df0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454df3:L454df3:{c.instructions+=8;NFSU2_TR(0x454df3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B454df5:{NFSU2_TR(0x454df5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B454dfa:{NFSU2_TR(0x454dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454e00:{NFSU2_TR(0x454e00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B454e03:{NFSU2_TR(0x454e03);
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454e05:{NFSU2_TR(0x454e05);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B454e09:{NFSU2_TR(0x454e09);
__builtin_memmove((R+28),(R+4),4);
}
B454e0b:{NFSU2_TR(0x454e0b);
if(r1(R+518)){{goto L454e88;}}
}
B454e0d:L454e0d:{c.instructions+=2;NFSU2_TR(0x454e0d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454e0e:{NFSU2_TR(0x454e0e);
if(r1(R+518)){{goto L454e58;}}
}
B454e10:L454e10:{c.instructions+=2;NFSU2_TR(0x454e10);
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
B454e11:{NFSU2_TR(0x454e11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454e17:L454e17:{c.instructions+=2;NFSU2_TR(0x454e17);
__builtin_memmove((R+4),(R+24),4);
}
B454e19:{NFSU2_TR(0x454e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e1eull));
TAIL_STATIC(0x442a10u,442);
}
B454e1e:L454e1e:{c.instructions+=2;NFSU2_TR(0x454e1e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454e20:{NFSU2_TR(0x454e20);
if(r1(R+518)){{goto L454e27;}}
}
B454e22:L454e22:{c.instructions+=2;NFSU2_TR(0x454e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454e25:{NFSU2_TR(0x454e25);
{goto L454e29;}
}
B454e27:L454e27:{c.instructions+=1;NFSU2_TR(0x454e27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B454e29:L454e29:{c.instructions+=2;NFSU2_TR(0x454e29);
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
B454e2b:{NFSU2_TR(0x454e2b);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454e31:L454e31:{c.instructions+=6;NFSU2_TR(0x454e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454e37:{NFSU2_TR(0x454e37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B454e38:{NFSU2_TR(0x454e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454e39:{NFSU2_TR(0x454e39);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B454e3b:{NFSU2_TR(0x454e3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454e3c:{NFSU2_TR(0x454e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e41ull));
TAIL_STATIC(0x43c280u,43c);
}
B454e41:L454e41:{c.instructions+=4;NFSU2_TR(0x454e41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B454e44:{NFSU2_TR(0x454e44);
__builtin_memmove((R+4),(R+24),4);
}
B454e46:{NFSU2_TR(0x454e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454e4c:{NFSU2_TR(0x454e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e51ull));
TAIL_STATIC(0x44a4d0u,44a);
}
B454e51:L454e51:{c.instructions+=5;NFSU2_TR(0x454e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454e52:{NFSU2_TR(0x454e52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454e53:{NFSU2_TR(0x454e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454e54:{NFSU2_TR(0x454e54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454e55:{NFSU2_TR(0x454e55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454e58:L454e58:{c.instructions+=4;NFSU2_TR(0x454e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B454e5e:{NFSU2_TR(0x454e5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454e5f:{NFSU2_TR(0x454e5f);
__builtin_memmove((R+4),(R+24),4);
}
B454e61:{NFSU2_TR(0x454e61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e66ull));
TAIL_STATIC(0x44a530u,44a);
}
B454e66:L454e66:{c.instructions+=3;NFSU2_TR(0x454e66);
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
B454e68:{NFSU2_TR(0x454e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454e6e:{NFSU2_TR(0x454e6e);
if(r1(R+518)){TAIL_STATIC(0x4558f1u,455);}
}
B454e74:L454e74:{c.instructions+=3;NFSU2_TR(0x454e74);
__builtin_memmove((R+4),(R+24),4);
}
B454e76:{NFSU2_TR(0x454e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454e7c:{NFSU2_TR(0x454e7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e81ull));
TAIL_STATIC(0x44a4d0u,44a);
}
B454e81:L454e81:{c.instructions+=5;NFSU2_TR(0x454e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454e82:{NFSU2_TR(0x454e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454e83:{NFSU2_TR(0x454e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454e84:{NFSU2_TR(0x454e84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454e85:{NFSU2_TR(0x454e85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454e88:L454e88:{c.instructions+=5;NFSU2_TR(0x454e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454e8e:{NFSU2_TR(0x454e8e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B454e90:{NFSU2_TR(0x454e90);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454e92:{NFSU2_TR(0x454e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454e93:{NFSU2_TR(0x454e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454e98ull));
TAIL_STATIC(0x43c280u,43c);
}
B454e98:L454e98:{c.instructions+=4;NFSU2_TR(0x454e98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B454e9b:{NFSU2_TR(0x454e9b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454e9e:{NFSU2_TR(0x454e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454ea4:{NFSU2_TR(0x454ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L454ebb;}}
}
B454ea6:L454ea6:{c.instructions+=2;NFSU2_TR(0x454ea6);
__builtin_memmove((R+4),(R+24),4);
}
B454ea8:{NFSU2_TR(0x454ea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454eadull));
TAIL_STATIC(0x44a450u,44a);
}
B454ead:L454ead:{c.instructions+=2;NFSU2_TR(0x454ead);
__builtin_memmove((R+4),(R+24),4);
}
B454eaf:{NFSU2_TR(0x454eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454eb4ull));
TAIL_STATIC(0x44a4d0u,44a);
}
B454eb4:L454eb4:{c.instructions+=5;NFSU2_TR(0x454eb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454eb5:{NFSU2_TR(0x454eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454eb6:{NFSU2_TR(0x454eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454eb7:{NFSU2_TR(0x454eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454eb8:{NFSU2_TR(0x454eb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454ebb:L454ebb:{c.instructions+=4;NFSU2_TR(0x454ebb);
__builtin_memmove((R+4),(R+24),4);
}
B454ebd:{NFSU2_TR(0x454ebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454ec3:{NFSU2_TR(0x454ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454ec9:{NFSU2_TR(0x454ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454eceull));
TAIL_STATIC(0x44a4d0u,44a);
}
B454ece:L454ece:{c.instructions+=5;NFSU2_TR(0x454ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454ecf:{NFSU2_TR(0x454ecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454ed0:{NFSU2_TR(0x454ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454ed1:{NFSU2_TR(0x454ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454ed2:{NFSU2_TR(0x454ed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454ed5:L454ed5:{c.instructions+=4;NFSU2_TR(0x454ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454edb:{NFSU2_TR(0x454edb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454ede:{NFSU2_TR(0x454ede);
__builtin_memmove((R+4),(R+24),4);
}
B454ee0:{NFSU2_TR(0x454ee0);
if(r1(R+518)){TAIL_STATIC(0x455079u,455);}
}
B454ee6:L454ee6:{c.instructions+=2;NFSU2_TR(0x454ee6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454ee7:{NFSU2_TR(0x454ee7);
if(r1(R+518)){TAIL_STATIC(0x45506du,455);}
}
B454eed:L454eed:{c.instructions+=3;NFSU2_TR(0x454eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cccull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454ef7:{NFSU2_TR(0x454ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454efd:{NFSU2_TR(0x454efd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f02ull));
TAIL_STATIC(0x442a10u,442);
}
B454f02:L454f02:{c.instructions+=3;NFSU2_TR(0x454f02);
__builtin_memmove((R+28),(R+0),4);
}
B454f04:{NFSU2_TR(0x454f04);
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
B454f06:{NFSU2_TR(0x454f06);
if(r1(R+518)){TAIL_STATIC(0x45503du,455);}
}
B454f0c:L454f0c:{c.instructions+=3;NFSU2_TR(0x454f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454f12:{NFSU2_TR(0x454f12);
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454f14:{NFSU2_TR(0x454f14);
if(r1(R+518)){TAIL_STATIC(0x45504eu,455);}
}
B454f1a:L454f1a:{c.instructions+=2;NFSU2_TR(0x454f1a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B454f1b:{NFSU2_TR(0x454f1b);
if(r1(R+518)){{goto L454f9b;}}
}
B454f1d:L454f1d:{c.instructions+=2;NFSU2_TR(0x454f1d);
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
B454f1e:{NFSU2_TR(0x454f1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454f24:L454f24:{c.instructions+=2;NFSU2_TR(0x454f24);
__builtin_memmove((R+4),(R+24),4);
}
B454f26:{NFSU2_TR(0x454f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f2bull));
TAIL_STATIC(0x443750u,443);
}
B454f2b:L454f2b:{c.instructions+=3;NFSU2_TR(0x454f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B454f2d:{NFSU2_TR(0x454f2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454f2e:{NFSU2_TR(0x454f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f33ull));
TAIL_STATIC(0x441fa0u,441);
}
B454f33:L454f33:{c.instructions+=7;NFSU2_TR(0x454f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454f39:{NFSU2_TR(0x454f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B454f3b:{NFSU2_TR(0x454f3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B454f3e:{NFSU2_TR(0x454f3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454f3f:{NFSU2_TR(0x454f3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454f40:{NFSU2_TR(0x454f40);
__builtin_memmove((R+4),(R+24),4);
}
B454f42:{NFSU2_TR(0x454f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f47ull));
TAIL_STATIC(0x4436f0u,443);
}
B454f47:L454f47:{c.instructions+=2;NFSU2_TR(0x454f47);
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
B454f49:{NFSU2_TR(0x454f49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4558f1u,455);}
}
B454f4f:L454f4f:{c.instructions+=3;NFSU2_TR(0x454f4f);
__builtin_memmove((R+4),(R+24),4);
}
B454f51:{NFSU2_TR(0x454f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c70ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B454f5b:{NFSU2_TR(0x454f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f60ull));
TAIL_STATIC(0x448030u,448);
}
B454f60:L454f60:{c.instructions+=2;NFSU2_TR(0x454f60);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B454f62:{NFSU2_TR(0x454f62);
if(r1(R+518)){{goto L454f6d;}}
}
B454f64:L454f64:{c.instructions+=2;NFSU2_TR(0x454f64);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454f67:{NFSU2_TR(0x454f67);
{u32 ea_=u32(r4(R+24)+u32(7280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454f6d:L454f6d:{c.instructions+=8;NFSU2_TR(0x454f6d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454f73:{NFSU2_TR(0x454f73);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454f75:{NFSU2_TR(0x454f75);
{u32 ea_=u32(r4(R+24)+u32(7280u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B454f7b:{NFSU2_TR(0x454f7b);
__builtin_memmove((R+4),(R+24),4);
}
B454f7d:{NFSU2_TR(0x454f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454f83:{NFSU2_TR(0x454f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454f89:{NFSU2_TR(0x454f89);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B454f8f:{NFSU2_TR(0x454f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454f94ull));
TAIL_STATIC(0x455c80u,455);
}
B454f94:L454f94:{c.instructions+=5;NFSU2_TR(0x454f94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B454f95:{NFSU2_TR(0x454f95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B454f96:{NFSU2_TR(0x454f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B454f97:{NFSU2_TR(0x454f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B454f98:{NFSU2_TR(0x454f98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B454f9b:L454f9b:{c.instructions+=2;NFSU2_TR(0x454f9b);
__builtin_memmove((R+4),(R+24),4);
}
B454f9d:{NFSU2_TR(0x454f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454fa2ull));
TAIL_STATIC(0x443750u,443);
}
B454fa2:L454fa2:{c.instructions+=3;NFSU2_TR(0x454fa2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B454fa5:{NFSU2_TR(0x454fa5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B454fa7:{NFSU2_TR(0x454fa7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L454fb2;}}
}
B454fa9:L454fa9:{c.instructions+=2;NFSU2_TR(0x454fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B454fb0:{NFSU2_TR(0x454fb0);
{goto L454fb4;}
}
B454fb2:L454fb2:{c.instructions+=1;NFSU2_TR(0x454fb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B454fb4:L454fb4:{c.instructions+=3;NFSU2_TR(0x454fb4);
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
B454fb6:{NFSU2_TR(0x454fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B454fbc:{NFSU2_TR(0x454fbc);
if(r1(R+518)){TAIL_STATIC(0x45503du,455);}
}
B454fbe:L454fbe:{c.instructions+=6;NFSU2_TR(0x454fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B454fc1:{NFSU2_TR(0x454fc1);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B454fc3:{NFSU2_TR(0x454fc3);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B454fc6:{NFSU2_TR(0x454fc6);
w2(R+8,u16(r1(R+4)));
}
B454fca:{NFSU2_TR(0x454fca);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+8))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+8),r2(U+10)));
w2(U+12,u16(u32(r2(R+8))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B454fce:{NFSU2_TR(0x454fce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x45503du,455);}
}
B454fd0:L454fd0:{c.instructions+=4;NFSU2_TR(0x454fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454fd6:{NFSU2_TR(0x454fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454fd9:{NFSU2_TR(0x454fd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B454fdc:{NFSU2_TR(0x454fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454fe1ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B454fe1:L454fe1:{c.instructions+=6;NFSU2_TR(0x454fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B454fe7:{NFSU2_TR(0x454fe7);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B454fea:{NFSU2_TR(0x454fea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454feb:{NFSU2_TR(0x454feb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B454fec:{NFSU2_TR(0x454fec);
__builtin_memmove((R+4),(R+24),4);
}
B454fee:{NFSU2_TR(0x454fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x454ff3ull));
TAIL_STATIC(0x447dc0u,447);
}
B454ff3:L454ff3:{c.instructions+=3;NFSU2_TR(0x454ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B454ff9:{NFSU2_TR(0x454ff9);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B454ffc:{NFSU2_TR(0x454ffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x455002u,455);
}
XIT:NFSU2_TR_EXIT(0x454,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
