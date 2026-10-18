#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_462(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x475,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x475,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_475(u8* __restrict R,Cpu& c);
u32 page_475(Cpu& c){return body_475(c.regs.data(),c);}
__attribute__((noinline)) u32 body_475(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x475010:goto L475010;
case 0x475011:c.instructions+=6;goto B475011;
case 0x475015:c.instructions+=5;goto B475015;
case 0x475017:c.instructions+=4;goto B475017;
case 0x475018:c.instructions+=3;goto B475018;
case 0x47501a:c.instructions+=2;goto B47501a;
case 0x47501c:c.instructions+=1;goto B47501c;
case 0x47501f:goto L47501f;
case 0x475025:c.instructions+=1;goto B475025;
case 0x475027:goto L475027;
case 0x47502c:c.instructions+=2;goto B47502c;
case 0x47502e:c.instructions+=1;goto B47502e;
case 0x475033:goto L475033;
case 0x475036:c.instructions+=3;goto B475036;
case 0x475037:c.instructions+=2;goto B475037;
case 0x475038:c.instructions+=1;goto B475038;
case 0x47503b:goto L47503b;
case 0x475041:c.instructions+=3;goto B475041;
case 0x475042:c.instructions+=2;goto B475042;
case 0x475043:c.instructions+=1;goto B475043;
case 0x475050:goto L475050;
case 0x475051:c.instructions+=2;goto B475051;
case 0x475053:c.instructions+=1;goto B475053;
case 0x475058:goto L475058;
case 0x47505a:c.instructions+=9;goto B47505a;
case 0x475060:c.instructions+=8;goto B475060;
case 0x475066:c.instructions+=7;goto B475066;
case 0x47506c:c.instructions+=6;goto B47506c;
case 0x475072:c.instructions+=5;goto B475072;
case 0x475076:c.instructions+=4;goto B475076;
case 0x47507c:c.instructions+=3;goto B47507c;
case 0x47507e:c.instructions+=2;goto B47507e;
case 0x47507f:c.instructions+=1;goto B47507f;
case 0x475080:goto L475080;
case 0x475086:c.instructions+=5;goto B475086;
case 0x47508b:c.instructions+=4;goto B47508b;
case 0x475091:c.instructions+=3;goto B475091;
case 0x475093:c.instructions+=2;goto B475093;
case 0x475095:c.instructions+=1;goto B475095;
case 0x475097:goto L475097;
case 0x47509d:c.instructions+=1;goto B47509d;
case 0x4750a3:goto L4750a3;
case 0x4750a9:c.instructions+=1;goto B4750a9;
case 0x4750b0:goto L4750b0;
case 0x4750b5:c.instructions+=3;goto B4750b5;
case 0x4750bb:c.instructions+=2;goto B4750bb;
case 0x4750bd:c.instructions+=1;goto B4750bd;
case 0x4750bf:goto L4750bf;
case 0x4750c6:c.instructions+=1;goto B4750c6;
case 0x4750cc:goto L4750cc;
case 0x4750d0:goto L4750d0;
case 0x4750d1:c.instructions+=2;goto B4750d1;
case 0x4750d3:c.instructions+=1;goto B4750d3;
case 0x4750d8:goto L4750d8;
case 0x4750da:c.instructions+=9;goto B4750da;
case 0x4750e0:c.instructions+=8;goto B4750e0;
case 0x4750e6:c.instructions+=7;goto B4750e6;
case 0x4750ec:c.instructions+=6;goto B4750ec;
case 0x4750f2:c.instructions+=5;goto B4750f2;
case 0x4750f6:c.instructions+=4;goto B4750f6;
case 0x4750fc:c.instructions+=3;goto B4750fc;
case 0x4750fe:c.instructions+=2;goto B4750fe;
case 0x4750ff:c.instructions+=1;goto B4750ff;
case 0x475100:goto L475100;
case 0x475105:c.instructions+=3;goto B475105;
case 0x47510b:c.instructions+=2;goto B47510b;
case 0x47510d:c.instructions+=1;goto B47510d;
case 0x47510f:goto L47510f;
case 0x475116:c.instructions+=1;goto B475116;
case 0x47511c:goto L47511c;
case 0x475120:goto L475120;
case 0x475121:c.instructions+=2;goto B475121;
case 0x475123:c.instructions+=1;goto B475123;
case 0x475128:goto L475128;
case 0x47512a:c.instructions+=9;goto B47512a;
case 0x475130:c.instructions+=8;goto B475130;
case 0x475136:c.instructions+=7;goto B475136;
case 0x47513c:c.instructions+=6;goto B47513c;
case 0x475142:c.instructions+=5;goto B475142;
case 0x475146:c.instructions+=4;goto B475146;
case 0x47514c:c.instructions+=3;goto B47514c;
case 0x47514e:c.instructions+=2;goto B47514e;
case 0x47514f:c.instructions+=1;goto B47514f;
case 0x475150:goto L475150;
case 0x475156:c.instructions+=3;goto B475156;
case 0x47515b:c.instructions+=2;goto B47515b;
case 0x47515d:c.instructions+=1;goto B47515d;
case 0x47515f:goto L47515f;
case 0x475162:c.instructions+=2;goto B475162;
case 0x475164:c.instructions+=1;goto B475164;
case 0x475166:goto L475166;
case 0x47516a:c.instructions+=1;goto B47516a;
case 0x475171:goto L475171;
case 0x475177:c.instructions+=1;goto B475177;
case 0x475180:goto L475180;
case 0x475185:c.instructions+=2;goto B475185;
case 0x475187:c.instructions+=1;goto B475187;
case 0x475189:goto L475189;
case 0x47518c:c.instructions+=2;goto B47518c;
case 0x47518e:c.instructions+=1;goto B47518e;
case 0x475190:goto L475190;
case 0x475194:c.instructions+=1;goto B475194;
case 0x475197:goto L475197;
case 0x4751a0:goto L4751a0;
case 0x4751a5:c.instructions+=6;goto B4751a5;
case 0x4751a8:c.instructions+=5;goto B4751a8;
case 0x4751a9:c.instructions+=4;goto B4751a9;
case 0x4751ab:c.instructions+=3;goto B4751ab;
case 0x4751ae:c.instructions+=2;goto B4751ae;
case 0x4751b0:c.instructions+=1;goto B4751b0;
case 0x4751b2:goto L4751b2;
case 0x4751b5:c.instructions+=2;goto B4751b5;
case 0x4751b8:c.instructions+=1;goto B4751b8;
case 0x4751bd:goto L4751bd;
case 0x4751c3:c.instructions+=4;goto B4751c3;
case 0x4751c6:c.instructions+=3;goto B4751c6;
case 0x4751c8:c.instructions+=2;goto B4751c8;
case 0x4751cd:c.instructions+=1;goto B4751cd;
case 0x4751cf:goto L4751cf;
case 0x4751d2:c.instructions+=1;goto B4751d2;
case 0x4751d4:goto L4751d4;
case 0x4751d6:c.instructions+=1;goto B4751d6;
case 0x4751d8:goto L4751d8;
case 0x4751df:c.instructions+=1;goto B4751df;
case 0x4751e1:goto L4751e1;
case 0x4751e4:c.instructions+=2;goto B4751e4;
case 0x4751e5:c.instructions+=1;goto B4751e5;
case 0x4751e8:goto L4751e8;
case 0x4751eb:c.instructions+=2;goto B4751eb;
case 0x4751ec:c.instructions+=1;goto B4751ec;
case 0x4751ef:goto L4751ef;
case 0x4751f6:c.instructions+=3;goto B4751f6;
case 0x4751fd:c.instructions+=2;goto B4751fd;
case 0x4751fe:c.instructions+=1;goto B4751fe;
case 0x475210:goto L475210;
case 0x475211:c.instructions+=2;goto B475211;
case 0x475213:c.instructions+=1;goto B475213;
case 0x475218:goto L475218;
case 0x47521a:c.instructions+=9;goto B47521a;
case 0x475220:c.instructions+=8;goto B475220;
case 0x475226:c.instructions+=7;goto B475226;
case 0x47522c:c.instructions+=6;goto B47522c;
case 0x475232:c.instructions+=5;goto B475232;
case 0x475236:c.instructions+=4;goto B475236;
case 0x47523c:c.instructions+=3;goto B47523c;
case 0x47523e:c.instructions+=2;goto B47523e;
case 0x47523f:c.instructions+=1;goto B47523f;
case 0x475240:goto L475240;
case 0x475246:c.instructions+=1;goto B475246;
case 0x475250:goto L475250;
case 0x475251:c.instructions+=2;goto B475251;
case 0x475253:c.instructions+=1;goto B475253;
case 0x475258:goto L475258;
case 0x47525a:c.instructions+=15;goto B47525a;
case 0x475260:c.instructions+=14;goto B475260;
case 0x475266:c.instructions+=13;goto B475266;
case 0x47526c:c.instructions+=12;goto B47526c;
case 0x475272:c.instructions+=11;goto B475272;
case 0x475278:c.instructions+=10;goto B475278;
case 0x47527a:c.instructions+=9;goto B47527a;
case 0x47527d:c.instructions+=8;goto B47527d;
case 0x475283:c.instructions+=7;goto B475283;
case 0x475288:c.instructions+=6;goto B475288;
case 0x47528d:c.instructions+=5;goto B47528d;
case 0x475292:c.instructions+=4;goto B475292;
case 0x475298:c.instructions+=3;goto B475298;
case 0x47529a:c.instructions+=2;goto B47529a;
case 0x47529b:c.instructions+=1;goto B47529b;
case 0x4752a0:goto L4752a0;
case 0x4752a6:c.instructions+=4;goto B4752a6;
case 0x4752ab:c.instructions+=3;goto B4752ab;
case 0x4752ae:c.instructions+=2;goto B4752ae;
case 0x4752b0:c.instructions+=1;goto B4752b0;
case 0x4752b2:goto L4752b2;
case 0x4752b6:c.instructions+=1;goto B4752b6;
case 0x4752bd:goto L4752bd;
case 0x4752c3:c.instructions+=1;goto B4752c3;
case 0x4752d0:goto L4752d0;
case 0x4752d1:c.instructions+=10;goto B4752d1;
case 0x4752d3:c.instructions+=9;goto B4752d3;
case 0x4752d9:c.instructions+=8;goto B4752d9;
case 0x4752df:c.instructions+=7;goto B4752df;
case 0x4752e5:c.instructions+=6;goto B4752e5;
case 0x4752eb:c.instructions+=5;goto B4752eb;
case 0x4752f2:c.instructions+=4;goto B4752f2;
case 0x4752f8:c.instructions+=3;goto B4752f8;
case 0x4752fb:c.instructions+=2;goto B4752fb;
case 0x4752fd:c.instructions+=1;goto B4752fd;
case 0x4752ff:goto L4752ff;
case 0x475303:c.instructions+=2;goto B475303;
case 0x475306:c.instructions+=1;goto B475306;
case 0x47530c:goto L47530c;
case 0x475311:c.instructions+=2;goto B475311;
case 0x475318:c.instructions+=1;goto B475318;
case 0x47531a:goto L47531a;
case 0x47531d:c.instructions+=2;goto B47531d;
case 0x47531f:c.instructions+=1;goto B47531f;
case 0x475321:goto L475321;
case 0x475324:c.instructions+=2;goto B475324;
case 0x475327:c.instructions+=1;goto B475327;
case 0x47532a:goto L47532a;
case 0x47532b:c.instructions+=1;goto B47532b;
case 0x475330:goto L475330;
case 0x475331:c.instructions+=6;goto B475331;
case 0x475332:c.instructions+=5;goto B475332;
case 0x475334:c.instructions+=4;goto B475334;
case 0x47533a:c.instructions+=3;goto B47533a;
case 0x47533c:c.instructions+=2;goto B47533c;
case 0x47533e:c.instructions+=1;goto B47533e;
case 0x475340:goto L475340;
case 0x475346:c.instructions+=1;goto B475346;
case 0x475348:goto L475348;
case 0x47534d:c.instructions+=3;goto B47534d;
case 0x475350:c.instructions+=2;goto B475350;
case 0x475352:c.instructions+=1;goto B475352;
case 0x475357:goto L475357;
case 0x475359:c.instructions+=1;goto B475359;
case 0x47535b:goto L47535b;
case 0x475361:c.instructions+=6;goto B475361;
case 0x475367:c.instructions+=5;goto B475367;
case 0x47536d:c.instructions+=4;goto B47536d;
case 0x475373:c.instructions+=3;goto B475373;
case 0x475376:c.instructions+=2;goto B475376;
case 0x47537a:c.instructions+=1;goto B47537a;
case 0x47537c:goto L47537c;
case 0x475381:goto L475381;
case 0x475387:c.instructions+=3;goto B475387;
case 0x47538c:c.instructions+=2;goto B47538c;
case 0x47538d:c.instructions+=1;goto B47538d;
case 0x475392:goto L475392;
case 0x475394:goto L475394;
case 0x47539a:c.instructions+=1;goto B47539a;
case 0x47539c:goto L47539c;
case 0x4753a2:c.instructions+=1;goto B4753a2;
case 0x4753a4:goto L4753a4;
case 0x4753a9:c.instructions+=3;goto B4753a9;
case 0x4753ac:c.instructions+=2;goto B4753ac;
case 0x4753ae:c.instructions+=1;goto B4753ae;
case 0x4753b3:goto L4753b3;
case 0x4753b5:c.instructions+=1;goto B4753b5;
case 0x4753b7:goto L4753b7;
case 0x4753bd:c.instructions+=3;goto B4753bd;
case 0x4753c2:c.instructions+=2;goto B4753c2;
case 0x4753c3:c.instructions+=1;goto B4753c3;
case 0x4753c8:goto L4753c8;
case 0x4753ce:c.instructions+=1;goto B4753ce;
case 0x4753d4:goto L4753d4;
case 0x4753d7:goto L4753d7;
case 0x4753dd:c.instructions+=2;goto B4753dd;
case 0x4753df:c.instructions+=1;goto B4753df;
case 0x4753e5:goto L4753e5;
case 0x4753e8:c.instructions+=5;goto B4753e8;
case 0x4753ee:c.instructions+=4;goto B4753ee;
case 0x4753f4:c.instructions+=3;goto B4753f4;
case 0x4753f6:c.instructions+=2;goto B4753f6;
case 0x4753f9:c.instructions+=1;goto B4753f9;
case 0x4753fb:goto L4753fb;
case 0x475401:c.instructions+=1;goto B475401;
case 0x475403:goto L475403;
case 0x475406:c.instructions+=1;goto B475406;
case 0x475408:goto L475408;
case 0x47540e:c.instructions+=4;goto B47540e;
case 0x475410:c.instructions+=3;goto B475410;
case 0x475413:c.instructions+=2;goto B475413;
case 0x475416:c.instructions+=1;goto B475416;
case 0x475418:goto L475418;
case 0x47541b:c.instructions+=3;goto B47541b;
case 0x47541e:c.instructions+=2;goto B47541e;
case 0x475421:c.instructions+=1;goto B475421;
case 0x475426:goto L475426;
case 0x475428:c.instructions+=1;goto B475428;
case 0x47542a:goto L47542a;
case 0x47542f:c.instructions+=1;goto B47542f;
case 0x475431:goto L475431;
case 0x475437:c.instructions+=3;goto B475437;
case 0x475439:c.instructions+=2;goto B475439;
case 0x47543c:c.instructions+=1;goto B47543c;
case 0x47543e:goto L47543e;
case 0x475444:c.instructions+=1;goto B475444;
case 0x475446:goto L475446;
case 0x47544c:c.instructions+=3;goto B47544c;
case 0x47544f:c.instructions+=2;goto B47544f;
case 0x475452:c.instructions+=1;goto B475452;
case 0x475454:goto L475454;
case 0x475459:goto L475459;
case 0x47545e:c.instructions+=2;goto B47545e;
case 0x47545f:c.instructions+=1;goto B47545f;
case 0x475464:goto L475464;
case 0x47546a:c.instructions+=3;goto B47546a;
case 0x47546d:c.instructions+=2;goto B47546d;
case 0x475470:c.instructions+=1;goto B475470;
case 0x475475:goto L475475;
case 0x47547c:goto L47547c;
case 0x475482:goto L475482;
case 0x475484:c.instructions+=1;goto B475484;
case 0x475486:goto L475486;
case 0x475489:c.instructions+=1;goto B475489;
case 0x47548b:goto L47548b;
case 0x475492:c.instructions+=1;goto B475492;
case 0x475494:goto L475494;
case 0x475497:goto L475497;
case 0x47549c:c.instructions+=2;goto B47549c;
case 0x47549e:c.instructions+=1;goto B47549e;
case 0x4754a0:goto L4754a0;
case 0x4754a3:c.instructions+=1;goto B4754a3;
case 0x4754a5:goto L4754a5;
case 0x4754ac:c.instructions+=3;goto B4754ac;
case 0x4754ad:c.instructions+=2;goto B4754ad;
case 0x4754ae:c.instructions+=1;goto B4754ae;
case 0x4754b1:goto L4754b1;
case 0x4754b4:c.instructions+=3;goto B4754b4;
case 0x4754b5:c.instructions+=2;goto B4754b5;
case 0x4754b6:c.instructions+=1;goto B4754b6;
case 0x4754c0:goto L4754c0;
case 0x4754c1:c.instructions+=6;goto B4754c1;
case 0x4754c3:c.instructions+=5;goto B4754c3;
case 0x4754c9:c.instructions+=4;goto B4754c9;
case 0x4754cc:c.instructions+=3;goto B4754cc;
case 0x4754cf:c.instructions+=2;goto B4754cf;
case 0x4754d1:c.instructions+=1;goto B4754d1;
case 0x4754d3:goto L4754d3;
case 0x4754d6:c.instructions+=3;goto B4754d6;
case 0x4754d9:c.instructions+=2;goto B4754d9;
case 0x4754dc:c.instructions+=1;goto B4754dc;
case 0x4754e1:goto L4754e1;
case 0x4754e3:c.instructions+=1;goto B4754e3;
case 0x4754e5:goto L4754e5;
case 0x4754eb:c.instructions+=3;goto B4754eb;
case 0x4754f0:c.instructions+=2;goto B4754f0;
case 0x4754f1:c.instructions+=1;goto B4754f1;
case 0x4754f6:goto L4754f6;
case 0x4754fc:c.instructions+=3;goto B4754fc;
case 0x4754ff:c.instructions+=2;goto B4754ff;
case 0x475502:c.instructions+=1;goto B475502;
case 0x475507:goto L475507;
case 0x47550e:goto L47550e;
case 0x475512:c.instructions+=3;goto B475512;
case 0x475514:c.instructions+=2;goto B475514;
case 0x475515:c.instructions+=1;goto B475515;
case 0x475517:goto L475517;
case 0x47551c:c.instructions+=4;goto B47551c;
case 0x47551f:c.instructions+=3;goto B47551f;
case 0x475522:c.instructions+=2;goto B475522;
case 0x475524:c.instructions+=1;goto B475524;
case 0x475526:goto L475526;
case 0x47552b:goto L47552b;
case 0x475530:goto L475530;
case 0x475535:c.instructions+=3;goto B475535;
case 0x47553a:c.instructions+=2;goto B47553a;
case 0x47553b:c.instructions+=1;goto B47553b;
case 0x475540:goto L475540;
case 0x475543:c.instructions+=3;goto B475543;
case 0x47554a:c.instructions+=2;goto B47554a;
case 0x475551:c.instructions+=1;goto B475551;
case 0x475560:goto L475560;
case 0x475561:c.instructions+=2;goto B475561;
case 0x475563:c.instructions+=1;goto B475563;
case 0x475568:goto L475568;
case 0x47556a:c.instructions+=9;goto B47556a;
case 0x475570:c.instructions+=8;goto B475570;
case 0x475576:c.instructions+=7;goto B475576;
case 0x47557c:c.instructions+=6;goto B47557c;
case 0x475582:c.instructions+=5;goto B475582;
case 0x475586:c.instructions+=4;goto B475586;
case 0x47558c:c.instructions+=3;goto B47558c;
case 0x47558e:c.instructions+=2;goto B47558e;
case 0x47558f:c.instructions+=1;goto B47558f;
case 0x475590:goto L475590;
case 0x475596:c.instructions+=5;goto B475596;
case 0x47559b:c.instructions+=4;goto B47559b;
case 0x47559d:c.instructions+=3;goto B47559d;
case 0x4755a0:c.instructions+=2;goto B4755a0;
case 0x4755a2:c.instructions+=1;goto B4755a2;
case 0x4755a4:goto L4755a4;
case 0x4755ae:goto L4755ae;
case 0x4755b1:c.instructions+=2;goto B4755b1;
case 0x4755b3:c.instructions+=1;goto B4755b3;
case 0x4755b5:goto L4755b5;
case 0x4755bc:goto L4755bc;
case 0x4755c2:c.instructions+=1;goto B4755c2;
case 0x4755d0:goto L4755d0;
case 0x4755d5:c.instructions+=4;goto B4755d5;
case 0x4755d7:c.instructions+=3;goto B4755d7;
case 0x4755da:c.instructions+=2;goto B4755da;
case 0x4755dc:c.instructions+=1;goto B4755dc;
case 0x4755de:goto L4755de;
case 0x4755e4:goto L4755e4;
case 0x4755e7:c.instructions+=2;goto B4755e7;
case 0x4755e9:c.instructions+=1;goto B4755e9;
case 0x4755eb:goto L4755eb;
case 0x4755ee:goto L4755ee;
case 0x4755f0:goto L4755f0;
case 0x4755f1:c.instructions+=11;goto B4755f1;
case 0x4755f3:c.instructions+=10;goto B4755f3;
case 0x4755f6:c.instructions+=9;goto B4755f6;
case 0x4755f9:c.instructions+=8;goto B4755f9;
case 0x4755fe:c.instructions+=7;goto B4755fe;
case 0x4755ff:c.instructions+=6;goto B4755ff;
case 0x475600:c.instructions+=5;goto B475600;
case 0x475601:c.instructions+=4;goto B475601;
case 0x475604:c.instructions+=3;goto B475604;
case 0x475606:c.instructions+=2;goto B475606;
case 0x475608:c.instructions+=1;goto B475608;
case 0x47560a:goto L47560a;
case 0x475610:c.instructions+=2;goto B475610;
case 0x475613:c.instructions+=1;goto B475613;
case 0x475616:goto L475616;
case 0x475618:c.instructions+=2;goto B475618;
case 0x47561a:c.instructions+=1;goto B47561a;
case 0x47561c:goto L47561c;
case 0x47561f:c.instructions+=2;goto B47561f;
case 0x475623:c.instructions+=1;goto B475623;
case 0x475625:goto L475625;
case 0x47562c:c.instructions+=1;goto B47562c;
case 0x47562e:goto L47562e;
case 0x475631:c.instructions+=24;goto B475631;
case 0x475634:c.instructions+=23;goto B475634;
case 0x475637:c.instructions+=22;goto B475637;
case 0x47563b:c.instructions+=21;goto B47563b;
case 0x47563d:c.instructions+=20;goto B47563d;
case 0x47563f:c.instructions+=19;goto B47563f;
case 0x475643:c.instructions+=18;goto B475643;
case 0x475646:c.instructions+=17;goto B475646;
case 0x475649:c.instructions+=16;goto B475649;
case 0x47564d:c.instructions+=15;goto B47564d;
case 0x47564f:c.instructions+=14;goto B47564f;
case 0x475651:c.instructions+=13;goto B475651;
case 0x475655:c.instructions+=12;goto B475655;
case 0x475659:c.instructions+=11;goto B475659;
case 0x47565b:c.instructions+=10;goto B47565b;
case 0x47565d:c.instructions+=9;goto B47565d;
case 0x47565f:c.instructions+=8;goto B47565f;
case 0x475661:c.instructions+=7;goto B475661;
case 0x475663:c.instructions+=6;goto B475663;
case 0x475665:c.instructions+=5;goto B475665;
case 0x475667:c.instructions+=4;goto B475667;
case 0x47566a:c.instructions+=3;goto B47566a;
case 0x47566c:c.instructions+=2;goto B47566c;
case 0x47566f:c.instructions+=1;goto B47566f;
case 0x475671:goto L475671;
case 0x475672:c.instructions+=3;goto B475672;
case 0x475675:c.instructions+=2;goto B475675;
case 0x475677:c.instructions+=1;goto B475677;
case 0x475679:goto L475679;
case 0x47567b:c.instructions+=6;goto B47567b;
case 0x47567c:c.instructions+=5;goto B47567c;
case 0x47567d:c.instructions+=4;goto B47567d;
case 0x47567e:c.instructions+=3;goto B47567e;
case 0x475680:c.instructions+=2;goto B475680;
case 0x475681:c.instructions+=1;goto B475681;
case 0x475682:goto L475682;
case 0x475683:c.instructions+=6;goto B475683;
case 0x475684:c.instructions+=5;goto B475684;
case 0x475686:c.instructions+=4;goto B475686;
case 0x475687:c.instructions+=3;goto B475687;
case 0x475689:c.instructions+=2;goto B475689;
case 0x47568a:c.instructions+=1;goto B47568a;
case 0x475690:goto L475690;
case 0x475695:c.instructions+=6;goto B475695;
case 0x475696:c.instructions+=5;goto B475696;
case 0x475697:c.instructions+=4;goto B475697;
case 0x47569a:c.instructions+=3;goto B47569a;
case 0x47569c:c.instructions+=2;goto B47569c;
case 0x47569e:c.instructions+=1;goto B47569e;
case 0x4756a0:goto L4756a0;
case 0x4756a6:c.instructions+=2;goto B4756a6;
case 0x4756a9:c.instructions+=1;goto B4756a9;
case 0x4756b0:goto L4756b0;
case 0x4756b2:c.instructions+=3;goto B4756b2;
case 0x4756b5:c.instructions+=2;goto B4756b5;
case 0x4756b9:c.instructions+=1;goto B4756b9;
case 0x4756bb:goto L4756bb;
case 0x4756c2:c.instructions+=1;goto B4756c2;
case 0x4756c4:goto L4756c4;
case 0x4756c5:c.instructions+=3;goto B4756c5;
case 0x4756c8:c.instructions+=2;goto B4756c8;
case 0x4756ca:c.instructions+=1;goto B4756ca;
case 0x4756cc:goto L4756cc;
case 0x4756cd:c.instructions+=3;goto B4756cd;
case 0x4756ce:c.instructions+=2;goto B4756ce;
case 0x4756d0:c.instructions+=1;goto B4756d0;
case 0x4756d1:goto L4756d1;
case 0x4756d7:c.instructions+=4;goto B4756d7;
case 0x4756db:c.instructions+=3;goto B4756db;
case 0x4756dd:c.instructions+=2;goto B4756dd;
case 0x4756e0:c.instructions+=1;goto B4756e0;
case 0x4756e2:goto L4756e2;
case 0x4756e3:c.instructions+=3;goto B4756e3;
case 0x4756e4:c.instructions+=2;goto B4756e4;
case 0x4756e9:c.instructions+=1;goto B4756e9;
case 0x4756ea:goto L4756ea;
case 0x4756eb:c.instructions+=3;goto B4756eb;
case 0x4756ec:c.instructions+=2;goto B4756ec;
case 0x4756ee:c.instructions+=1;goto B4756ee;
case 0x4756f0:goto L4756f0;
case 0x4756f1:c.instructions+=2;goto B4756f1;
case 0x4756f3:c.instructions+=1;goto B4756f3;
case 0x4756f8:goto L4756f8;
case 0x4756fa:c.instructions+=12;goto B4756fa;
case 0x475700:c.instructions+=11;goto B475700;
case 0x475706:c.instructions+=10;goto B475706;
case 0x47570c:c.instructions+=9;goto B47570c;
case 0x475712:c.instructions+=8;goto B475712;
case 0x475718:c.instructions+=7;goto B475718;
case 0x47571e:c.instructions+=6;goto B47571e;
case 0x475724:c.instructions+=5;goto B475724;
case 0x475728:c.instructions+=4;goto B475728;
case 0x47572e:c.instructions+=3;goto B47572e;
case 0x475730:c.instructions+=2;goto B475730;
case 0x475731:c.instructions+=1;goto B475731;
case 0x475740:goto L475740;
case 0x475742:c.instructions+=11;goto B475742;
case 0x475747:c.instructions+=10;goto B475747;
case 0x47574d:c.instructions+=9;goto B47574d;
case 0x47574e:c.instructions+=8;goto B47574e;
case 0x475755:c.instructions+=7;goto B475755;
case 0x475756:c.instructions+=6;goto B475756;
case 0x475757:c.instructions+=5;goto B475757;
case 0x475759:c.instructions+=4;goto B475759;
case 0x47575d:c.instructions+=3;goto B47575d;
case 0x475763:c.instructions+=2;goto B475763;
case 0x47576b:c.instructions+=1;goto B47576b;
case 0x475770:goto L475770;
case 0x475774:c.instructions+=5;goto B475774;
case 0x47577a:c.instructions+=4;goto B47577a;
case 0x47577b:c.instructions+=3;goto B47577b;
case 0x475782:c.instructions+=2;goto B475782;
case 0x475785:c.instructions+=1;goto B475785;
case 0x475790:goto L475790;
case 0x475791:c.instructions+=6;goto B475791;
case 0x475792:c.instructions+=5;goto B475792;
case 0x475794:c.instructions+=4;goto B475794;
case 0x475795:c.instructions+=3;goto B475795;
case 0x47579b:c.instructions+=2;goto B47579b;
case 0x47579d:c.instructions+=1;goto B47579d;
case 0x47579f:goto L47579f;
case 0x4757a1:c.instructions+=2;goto B4757a1;
case 0x4757a3:c.instructions+=1;goto B4757a3;
case 0x4757a5:goto L4757a5;
case 0x4757aa:goto L4757aa;
case 0x4757ae:c.instructions+=2;goto B4757ae;
case 0x4757af:c.instructions+=1;goto B4757af;
case 0x4757b4:goto L4757b4;
case 0x4757b7:c.instructions+=1;goto B4757b7;
case 0x4757bc:goto L4757bc;
case 0x4757c0:c.instructions+=4;goto B4757c0;
case 0x4757c2:c.instructions+=3;goto B4757c2;
case 0x4757c4:c.instructions+=2;goto B4757c4;
case 0x4757c5:c.instructions+=1;goto B4757c5;
case 0x4757c8:goto L4757c8;
case 0x4757cd:goto L4757cd;
case 0x4757d3:c.instructions+=4;goto B4757d3;
case 0x4757dd:c.instructions+=3;goto B4757dd;
case 0x4757df:c.instructions+=2;goto B4757df;
case 0x4757e1:c.instructions+=1;goto B4757e1;
case 0x4757e4:goto L4757e4;
case 0x4757ea:c.instructions+=3;goto B4757ea;
case 0x4757ec:c.instructions+=2;goto B4757ec;
case 0x4757ee:c.instructions+=1;goto B4757ee;
case 0x4757f1:goto L4757f1;
case 0x4757f2:c.instructions+=3;goto B4757f2;
case 0x4757f3:c.instructions+=2;goto B4757f3;
case 0x4757f4:c.instructions+=1;goto B4757f4;
case 0x475800:goto L475800;
case 0x475801:c.instructions+=2;goto B475801;
case 0x475803:c.instructions+=1;goto B475803;
case 0x475808:goto L475808;
case 0x47580e:c.instructions+=3;goto B47580e;
case 0x475810:c.instructions+=2;goto B475810;
case 0x475811:c.instructions+=1;goto B475811;
case 0x475820:goto L475820;
case 0x475821:c.instructions+=2;goto B475821;
case 0x475823:c.instructions+=1;goto B475823;
case 0x475828:goto L475828;
case 0x47582e:c.instructions+=18;goto B47582e;
case 0x475830:c.instructions+=17;goto B475830;
case 0x475836:c.instructions+=16;goto B475836;
case 0x47583c:c.instructions+=15;goto B47583c;
case 0x475842:c.instructions+=14;goto B475842;
case 0x475848:c.instructions+=13;goto B475848;
case 0x47584e:c.instructions+=12;goto B47584e;
case 0x475850:c.instructions+=11;goto B475850;
case 0x475853:c.instructions+=10;goto B475853;
case 0x475854:c.instructions+=9;goto B475854;
case 0x47585a:c.instructions+=8;goto B47585a;
case 0x475860:c.instructions+=7;goto B475860;
case 0x475866:c.instructions+=6;goto B475866;
case 0x47586c:c.instructions+=5;goto B47586c;
case 0x475872:c.instructions+=4;goto B475872;
case 0x475878:c.instructions+=3;goto B475878;
case 0x47587e:c.instructions+=2;goto B47587e;
case 0x475884:c.instructions+=1;goto B475884;
case 0x475886:goto L475886;
case 0x475887:c.instructions+=2;goto B475887;
case 0x47588a:c.instructions+=1;goto B47588a;
case 0x47588b:goto L47588b;
case 0x475891:c.instructions+=20;goto B475891;
case 0x475897:c.instructions+=19;goto B475897;
case 0x47589d:c.instructions+=18;goto B47589d;
case 0x4758a3:c.instructions+=17;goto B4758a3;
case 0x4758a9:c.instructions+=16;goto B4758a9;
case 0x4758af:c.instructions+=15;goto B4758af;
case 0x4758b4:c.instructions+=14;goto B4758b4;
case 0x4758ba:c.instructions+=13;goto B4758ba;
case 0x4758c0:c.instructions+=12;goto B4758c0;
case 0x4758c6:c.instructions+=11;goto B4758c6;
case 0x4758d0:c.instructions+=10;goto B4758d0;
case 0x4758d6:c.instructions+=9;goto B4758d6;
case 0x4758dc:c.instructions+=8;goto B4758dc;
case 0x4758e2:c.instructions+=7;goto B4758e2;
case 0x4758e8:c.instructions+=6;goto B4758e8;
case 0x4758f2:c.instructions+=5;goto B4758f2;
case 0x4758f8:c.instructions+=4;goto B4758f8;
case 0x4758fa:c.instructions+=3;goto B4758fa;
case 0x475900:c.instructions+=2;goto B475900;
case 0x475901:c.instructions+=1;goto B475901;
case 0x475910:goto L475910;
case 0x475920:goto L475920;
case 0x475930:goto L475930;
case 0x475931:c.instructions+=6;goto B475931;
case 0x475935:c.instructions+=5;goto B475935;
case 0x475937:c.instructions+=4;goto B475937;
case 0x475938:c.instructions+=3;goto B475938;
case 0x47593a:c.instructions+=2;goto B47593a;
case 0x47593c:c.instructions+=1;goto B47593c;
case 0x47593f:goto L47593f;
case 0x475945:c.instructions+=1;goto B475945;
case 0x475947:goto L475947;
case 0x47594c:c.instructions+=2;goto B47594c;
case 0x47594e:c.instructions+=1;goto B47594e;
case 0x475953:goto L475953;
case 0x475956:c.instructions+=3;goto B475956;
case 0x475957:c.instructions+=2;goto B475957;
case 0x475958:c.instructions+=1;goto B475958;
case 0x47595b:goto L47595b;
case 0x475961:c.instructions+=3;goto B475961;
case 0x475962:c.instructions+=2;goto B475962;
case 0x475963:c.instructions+=1;goto B475963;
case 0x475970:goto L475970;
case 0x475976:c.instructions+=3;goto B475976;
case 0x475978:c.instructions+=2;goto B475978;
case 0x47597a:c.instructions+=1;goto B47597a;
case 0x47597c:goto L47597c;
case 0x475982:c.instructions+=1;goto B475982;
case 0x475984:goto L475984;
case 0x47598b:c.instructions+=8;goto B47598b;
case 0x475990:c.instructions+=7;goto B475990;
case 0x47599a:c.instructions+=6;goto B47599a;
case 0x4759a0:c.instructions+=5;goto B4759a0;
case 0x4759a6:c.instructions+=4;goto B4759a6;
case 0x4759ac:c.instructions+=3;goto B4759ac;
case 0x4759b2:c.instructions+=2;goto B4759b2;
case 0x4759b8:c.instructions+=1;goto B4759b8;
case 0x4759be:goto L4759be;
case 0x4759c0:goto L4759c0;
case 0x4759c6:c.instructions+=13;goto B4759c6;
case 0x4759c8:c.instructions+=12;goto B4759c8;
case 0x4759cd:c.instructions+=11;goto B4759cd;
case 0x4759ce:c.instructions+=10;goto B4759ce;
case 0x4759d5:c.instructions+=9;goto B4759d5;
case 0x4759d8:c.instructions+=8;goto B4759d8;
case 0x4759d9:c.instructions+=7;goto B4759d9;
case 0x4759da:c.instructions+=6;goto B4759da;
case 0x4759dc:c.instructions+=5;goto B4759dc;
case 0x4759dd:c.instructions+=4;goto B4759dd;
case 0x4759e3:c.instructions+=3;goto B4759e3;
case 0x4759e5:c.instructions+=2;goto B4759e5;
case 0x4759e7:c.instructions+=1;goto B4759e7;
case 0x4759e9:goto L4759e9;
case 0x4759eb:c.instructions+=2;goto B4759eb;
case 0x4759ed:c.instructions+=1;goto B4759ed;
case 0x4759ef:goto L4759ef;
case 0x4759f4:goto L4759f4;
case 0x4759f8:c.instructions+=2;goto B4759f8;
case 0x4759f9:c.instructions+=1;goto B4759f9;
case 0x4759fe:goto L4759fe;
case 0x475a01:c.instructions+=1;goto B475a01;
case 0x475a06:goto L475a06;
case 0x475a0a:c.instructions+=4;goto B475a0a;
case 0x475a0c:c.instructions+=3;goto B475a0c;
case 0x475a0d:c.instructions+=2;goto B475a0d;
case 0x475a0e:c.instructions+=1;goto B475a0e;
case 0x475a11:goto L475a11;
case 0x475a16:goto L475a16;
case 0x475a1a:c.instructions+=4;goto B475a1a;
case 0x475a20:c.instructions+=3;goto B475a20;
case 0x475a21:c.instructions+=2;goto B475a21;
case 0x475a2b:c.instructions+=1;goto B475a2b;
case 0x475a30:goto L475a30;
case 0x475a33:c.instructions+=1;goto B475a33;
case 0x475a38:goto L475a38;
case 0x475a3c:c.instructions+=8;goto B475a3c;
case 0x475a40:c.instructions+=7;goto B475a40;
case 0x475a41:c.instructions+=6;goto B475a41;
case 0x475a45:c.instructions+=5;goto B475a45;
case 0x475a49:c.instructions+=4;goto B475a49;
case 0x475a4d:c.instructions+=3;goto B475a4d;
case 0x475a4f:c.instructions+=2;goto B475a4f;
case 0x475a51:c.instructions+=1;goto B475a51;
case 0x475a53:goto L475a53;
case 0x475a55:c.instructions+=1;goto B475a55;
case 0x475a5a:goto L475a5a;
case 0x475a5e:c.instructions+=3;goto B475a5e;
case 0x475a60:c.instructions+=2;goto B475a60;
case 0x475a64:c.instructions+=1;goto B475a64;
case 0x475a66:goto L475a66;
case 0x475a6a:c.instructions+=2;goto B475a6a;
case 0x475a6c:c.instructions+=1;goto B475a6c;
case 0x475a6e:goto L475a6e;
case 0x475a70:c.instructions+=1;goto B475a70;
case 0x475a72:goto L475a72;
case 0x475a75:c.instructions+=1;goto B475a75;
case 0x475a77:goto L475a77;
case 0x475a7c:goto L475a7c;
case 0x475a7d:c.instructions+=10;goto B475a7d;
case 0x475a80:c.instructions+=9;goto B475a80;
case 0x475a81:c.instructions+=8;goto B475a81;
case 0x475a82:c.instructions+=7;goto B475a82;
case 0x475a87:c.instructions+=6;goto B475a87;
case 0x475a8a:c.instructions+=5;goto B475a8a;
case 0x475a8d:c.instructions+=4;goto B475a8d;
case 0x475a90:c.instructions+=3;goto B475a90;
case 0x475a93:c.instructions+=2;goto B475a93;
case 0x475a96:c.instructions+=1;goto B475a96;
case 0x475a9b:goto L475a9b;
case 0x475a9e:c.instructions+=2;goto B475a9e;
case 0x475aa0:c.instructions+=1;goto B475aa0;
case 0x475aa2:goto L475aa2;
case 0x475aa7:c.instructions+=2;goto B475aa7;
case 0x475aac:c.instructions+=1;goto B475aac;
case 0x475ab1:goto L475ab1;
case 0x475ab2:c.instructions+=3;goto B475ab2;
case 0x475ab3:c.instructions+=2;goto B475ab3;
case 0x475ab8:c.instructions+=1;goto B475ab8;
case 0x475abd:goto L475abd;
case 0x475ac0:goto L475ac0;
case 0x475ac1:c.instructions+=1;goto B475ac1;
case 0x475ac3:goto L475ac3;
case 0x475ac5:goto L475ac5;
case 0x475ac8:c.instructions+=22;goto B475ac8;
case 0x475ace:c.instructions+=21;goto B475ace;
case 0x475ad1:c.instructions+=20;goto B475ad1;
case 0x475ad5:c.instructions+=19;goto B475ad5;
case 0x475adb:c.instructions+=18;goto B475adb;
case 0x475ade:c.instructions+=17;goto B475ade;
case 0x475ae1:c.instructions+=16;goto B475ae1;
case 0x475ae6:c.instructions+=15;goto B475ae6;
case 0x475aec:c.instructions+=14;goto B475aec;
case 0x475af2:c.instructions+=13;goto B475af2;
case 0x475af8:c.instructions+=12;goto B475af8;
case 0x475afe:c.instructions+=11;goto B475afe;
case 0x475b08:c.instructions+=10;goto B475b08;
case 0x475b0e:c.instructions+=9;goto B475b0e;
case 0x475b14:c.instructions+=8;goto B475b14;
case 0x475b1a:c.instructions+=7;goto B475b1a;
case 0x475b20:c.instructions+=6;goto B475b20;
case 0x475b21:c.instructions+=5;goto B475b21;
case 0x475b22:c.instructions+=4;goto B475b22;
case 0x475b23:c.instructions+=3;goto B475b23;
case 0x475b2a:c.instructions+=2;goto B475b2a;
case 0x475b2d:c.instructions+=1;goto B475b2d;
case 0x475b30:goto L475b30;
case 0x475b31:c.instructions+=11;goto B475b31;
case 0x475b33:c.instructions+=10;goto B475b33;
case 0x475b36:c.instructions+=9;goto B475b36;
case 0x475b39:c.instructions+=8;goto B475b39;
case 0x475b3a:c.instructions+=7;goto B475b3a;
case 0x475b3b:c.instructions+=6;goto B475b3b;
case 0x475b3d:c.instructions+=5;goto B475b3d;
case 0x475b40:c.instructions+=4;goto B475b40;
case 0x475b43:c.instructions+=3;goto B475b43;
case 0x475b46:c.instructions+=2;goto B475b46;
case 0x475b47:c.instructions+=1;goto B475b47;
case 0x475b4c:goto L475b4c;
case 0x475b4f:c.instructions+=35;goto B475b4f;
case 0x475b51:c.instructions+=34;goto B475b51;
case 0x475b54:c.instructions+=33;goto B475b54;
case 0x475b57:c.instructions+=32;goto B475b57;
case 0x475b5a:c.instructions+=31;goto B475b5a;
case 0x475b5d:c.instructions+=30;goto B475b5d;
case 0x475b60:c.instructions+=29;goto B475b60;
case 0x475b63:c.instructions+=28;goto B475b63;
case 0x475b67:c.instructions+=27;goto B475b67;
case 0x475b69:c.instructions+=26;goto B475b69;
case 0x475b6c:c.instructions+=25;goto B475b6c;
case 0x475b70:c.instructions+=24;goto B475b70;
case 0x475b73:c.instructions+=23;goto B475b73;
case 0x475b77:c.instructions+=22;goto B475b77;
case 0x475b79:c.instructions+=21;goto B475b79;
case 0x475b7b:c.instructions+=20;goto B475b7b;
case 0x475b7f:c.instructions+=19;goto B475b7f;
case 0x475b81:c.instructions+=18;goto B475b81;
case 0x475b85:c.instructions+=17;goto B475b85;
case 0x475b89:c.instructions+=16;goto B475b89;
case 0x475b8d:c.instructions+=15;goto B475b8d;
case 0x475b91:c.instructions+=14;goto B475b91;
case 0x475b95:c.instructions+=13;goto B475b95;
case 0x475b99:c.instructions+=12;goto B475b99;
case 0x475b9d:c.instructions+=11;goto B475b9d;
case 0x475ba1:c.instructions+=10;goto B475ba1;
case 0x475ba3:c.instructions+=9;goto B475ba3;
case 0x475ba5:c.instructions+=8;goto B475ba5;
case 0x475ba7:c.instructions+=7;goto B475ba7;
case 0x475ba9:c.instructions+=6;goto B475ba9;
case 0x475bab:c.instructions+=5;goto B475bab;
case 0x475bad:c.instructions+=4;goto B475bad;
case 0x475bb3:c.instructions+=3;goto B475bb3;
case 0x475bb5:c.instructions+=2;goto B475bb5;
case 0x475bb8:c.instructions+=1;goto B475bb8;
case 0x475bbe:goto L475bbe;
case 0x475bc2:c.instructions+=5;goto B475bc2;
case 0x475bc3:c.instructions+=4;goto B475bc3;
case 0x475bc7:c.instructions+=3;goto B475bc7;
case 0x475bc8:c.instructions+=2;goto B475bc8;
case 0x475bd0:c.instructions+=1;goto B475bd0;
case 0x475bd5:goto L475bd5;
case 0x475bd9:c.instructions+=21;goto B475bd9;
case 0x475bdd:c.instructions+=20;goto B475bdd;
case 0x475be1:c.instructions+=19;goto B475be1;
case 0x475be4:c.instructions+=18;goto B475be4;
case 0x475be6:c.instructions+=17;goto B475be6;
case 0x475bea:c.instructions+=16;goto B475bea;
case 0x475bec:c.instructions+=15;goto B475bec;
case 0x475bf0:c.instructions+=14;goto B475bf0;
case 0x475bf4:c.instructions+=13;goto B475bf4;
case 0x475bf7:c.instructions+=12;goto B475bf7;
case 0x475bfa:c.instructions+=11;goto B475bfa;
case 0x475bfd:c.instructions+=10;goto B475bfd;
case 0x475c01:c.instructions+=9;goto B475c01;
case 0x475c03:c.instructions+=8;goto B475c03;
case 0x475c07:c.instructions+=7;goto B475c07;
case 0x475c0b:c.instructions+=6;goto B475c0b;
case 0x475c0c:c.instructions+=5;goto B475c0c;
case 0x475c10:c.instructions+=4;goto B475c10;
case 0x475c11:c.instructions+=3;goto B475c11;
case 0x475c15:c.instructions+=2;goto B475c15;
case 0x475c1d:c.instructions+=1;goto B475c1d;
case 0x475c22:goto L475c22;
case 0x475c26:c.instructions+=21;goto B475c26;
case 0x475c2a:c.instructions+=20;goto B475c2a;
case 0x475c2e:c.instructions+=19;goto B475c2e;
case 0x475c33:c.instructions+=18;goto B475c33;
case 0x475c35:c.instructions+=17;goto B475c35;
case 0x475c39:c.instructions+=16;goto B475c39;
case 0x475c3b:c.instructions+=15;goto B475c3b;
case 0x475c3f:c.instructions+=14;goto B475c3f;
case 0x475c43:c.instructions+=13;goto B475c43;
case 0x475c46:c.instructions+=12;goto B475c46;
case 0x475c48:c.instructions+=11;goto B475c48;
case 0x475c4c:c.instructions+=10;goto B475c4c;
case 0x475c50:c.instructions+=9;goto B475c50;
case 0x475c54:c.instructions+=8;goto B475c54;
case 0x475c58:c.instructions+=7;goto B475c58;
case 0x475c5c:c.instructions+=6;goto B475c5c;
case 0x475c5e:c.instructions+=5;goto B475c5e;
case 0x475c62:c.instructions+=4;goto B475c62;
case 0x475c66:c.instructions+=3;goto B475c66;
case 0x475c68:c.instructions+=2;goto B475c68;
case 0x475c6c:c.instructions+=1;goto B475c6c;
case 0x475c6e:goto L475c6e;
case 0x475c73:c.instructions+=2;goto B475c73;
case 0x475c75:c.instructions+=1;goto B475c75;
case 0x475c77:goto L475c77;
case 0x475c7c:c.instructions+=1;goto B475c7c;
case 0x475c81:goto L475c81;
case 0x475c85:c.instructions+=4;goto B475c85;
case 0x475c88:c.instructions+=3;goto B475c88;
case 0x475c8a:c.instructions+=2;goto B475c8a;
case 0x475c8d:c.instructions+=1;goto B475c8d;
case 0x475c8f:goto L475c8f;
case 0x475c91:c.instructions+=5;goto B475c91;
case 0x475c92:c.instructions+=4;goto B475c92;
case 0x475c93:c.instructions+=3;goto B475c93;
case 0x475c95:c.instructions+=2;goto B475c95;
case 0x475c96:c.instructions+=1;goto B475c96;
case 0x475c97:goto L475c97;
case 0x475c9c:c.instructions+=1;goto B475c9c;
case 0x475ca1:goto L475ca1;
case 0x475ca5:c.instructions+=4;goto B475ca5;
case 0x475ca8:c.instructions+=3;goto B475ca8;
case 0x475caa:c.instructions+=2;goto B475caa;
case 0x475cad:c.instructions+=1;goto B475cad;
case 0x475caf:goto L475caf;
case 0x475cb5:c.instructions+=11;goto B475cb5;
case 0x475cbb:c.instructions+=10;goto B475cbb;
case 0x475cc1:c.instructions+=9;goto B475cc1;
case 0x475cc5:c.instructions+=8;goto B475cc5;
case 0x475cc7:c.instructions+=7;goto B475cc7;
case 0x475cc8:c.instructions+=6;goto B475cc8;
case 0x475ccc:c.instructions+=5;goto B475ccc;
case 0x475cd0:c.instructions+=4;goto B475cd0;
case 0x475cd1:c.instructions+=3;goto B475cd1;
case 0x475cd5:c.instructions+=2;goto B475cd5;
case 0x475cd9:c.instructions+=1;goto B475cd9;
case 0x475cde:goto L475cde;
case 0x475ce2:c.instructions+=21;goto B475ce2;
case 0x475ce6:c.instructions+=20;goto B475ce6;
case 0x475cea:c.instructions+=19;goto B475cea;
case 0x475cec:c.instructions+=18;goto B475cec;
case 0x475cee:c.instructions+=17;goto B475cee;
case 0x475cf2:c.instructions+=16;goto B475cf2;
case 0x475cf6:c.instructions+=15;goto B475cf6;
case 0x475cfa:c.instructions+=14;goto B475cfa;
case 0x475cff:c.instructions+=13;goto B475cff;
case 0x475d03:c.instructions+=12;goto B475d03;
case 0x475d07:c.instructions+=11;goto B475d07;
case 0x475d0a:c.instructions+=10;goto B475d0a;
case 0x475d0c:c.instructions+=9;goto B475d0c;
case 0x475d10:c.instructions+=8;goto B475d10;
case 0x475d14:c.instructions+=7;goto B475d14;
case 0x475d18:c.instructions+=6;goto B475d18;
case 0x475d1a:c.instructions+=5;goto B475d1a;
case 0x475d1e:c.instructions+=4;goto B475d1e;
case 0x475d22:c.instructions+=3;goto B475d22;
case 0x475d24:c.instructions+=2;goto B475d24;
case 0x475d28:c.instructions+=1;goto B475d28;
case 0x475d2a:goto L475d2a;
case 0x475d2f:c.instructions+=2;goto B475d2f;
case 0x475d31:c.instructions+=1;goto B475d31;
case 0x475d33:goto L475d33;
case 0x475d38:c.instructions+=1;goto B475d38;
case 0x475d3d:goto L475d3d;
case 0x475d41:c.instructions+=4;goto B475d41;
case 0x475d44:c.instructions+=3;goto B475d44;
case 0x475d46:c.instructions+=2;goto B475d46;
case 0x475d49:c.instructions+=1;goto B475d49;
case 0x475d4f:goto L475d4f;
case 0x475d50:c.instructions+=5;goto B475d50;
case 0x475d52:c.instructions+=4;goto B475d52;
case 0x475d53:c.instructions+=3;goto B475d53;
case 0x475d55:c.instructions+=2;goto B475d55;
case 0x475d56:c.instructions+=1;goto B475d56;
case 0x475d60:goto L475d60;
case 0x475d61:c.instructions+=2;goto B475d61;
case 0x475d63:c.instructions+=1;goto B475d63;
case 0x475d68:goto L475d68;
case 0x475d6a:c.instructions+=12;goto B475d6a;
case 0x475d70:c.instructions+=11;goto B475d70;
case 0x475d76:c.instructions+=10;goto B475d76;
case 0x475d7c:c.instructions+=9;goto B475d7c;
case 0x475d82:c.instructions+=8;goto B475d82;
case 0x475d88:c.instructions+=7;goto B475d88;
case 0x475d8e:c.instructions+=6;goto B475d8e;
case 0x475d94:c.instructions+=5;goto B475d94;
case 0x475d98:c.instructions+=4;goto B475d98;
case 0x475d9e:c.instructions+=3;goto B475d9e;
case 0x475da0:c.instructions+=2;goto B475da0;
case 0x475da1:c.instructions+=1;goto B475da1;
case 0x475db0:goto L475db0;
case 0x475db2:c.instructions+=13;goto B475db2;
case 0x475db7:c.instructions+=12;goto B475db7;
case 0x475dbd:c.instructions+=11;goto B475dbd;
case 0x475dbe:c.instructions+=10;goto B475dbe;
case 0x475dc5:c.instructions+=9;goto B475dc5;
case 0x475dc6:c.instructions+=8;goto B475dc6;
case 0x475dc7:c.instructions+=7;goto B475dc7;
case 0x475dc9:c.instructions+=6;goto B475dc9;
case 0x475dcd:c.instructions+=5;goto B475dcd;
case 0x475dd3:c.instructions+=4;goto B475dd3;
case 0x475dd9:c.instructions+=3;goto B475dd9;
case 0x475ddb:c.instructions+=2;goto B475ddb;
case 0x475de3:c.instructions+=1;goto B475de3;
case 0x475de5:goto L475de5;
case 0x475de7:c.instructions+=2;goto B475de7;
case 0x475de9:c.instructions+=1;goto B475de9;
case 0x475deb:goto L475deb;
case 0x475def:c.instructions+=6;goto B475def;
case 0x475df9:c.instructions+=5;goto B475df9;
case 0x475dff:c.instructions+=4;goto B475dff;
case 0x475e00:c.instructions+=3;goto B475e00;
case 0x475e07:c.instructions+=2;goto B475e07;
case 0x475e0a:c.instructions+=1;goto B475e0a;
case 0x475e10:goto L475e10;
case 0x475e13:c.instructions+=8;goto B475e13;
case 0x475e14:c.instructions+=7;goto B475e14;
case 0x475e15:c.instructions+=6;goto B475e15;
case 0x475e17:c.instructions+=5;goto B475e17;
case 0x475e1a:c.instructions+=4;goto B475e1a;
case 0x475e1d:c.instructions+=3;goto B475e1d;
case 0x475e1f:c.instructions+=2;goto B475e1f;
case 0x475e21:c.instructions+=1;goto B475e21;
case 0x475e27:goto L475e27;
case 0x475e2d:c.instructions+=1;goto B475e2d;
case 0x475e33:goto L475e33;
case 0x475e36:c.instructions+=2;goto B475e36;
case 0x475e3c:c.instructions+=1;goto B475e3c;
case 0x475e42:goto L475e42;
case 0x475e45:c.instructions+=3;goto B475e45;
case 0x475e4a:c.instructions+=2;goto B475e4a;
case 0x475e4b:c.instructions+=1;goto B475e4b;
case 0x475e50:goto L475e50;
case 0x475e53:c.instructions+=2;goto B475e53;
case 0x475e55:c.instructions+=1;goto B475e55;
case 0x475e5b:goto L475e5b;
case 0x475e5d:c.instructions+=1;goto B475e5d;
case 0x475e62:goto L475e62;
case 0x475e66:c.instructions+=4;goto B475e66;
case 0x475e6c:c.instructions+=3;goto B475e6c;
case 0x475e6e:c.instructions+=2;goto B475e6e;
case 0x475e71:c.instructions+=1;goto B475e71;
case 0x475e77:goto L475e77;
case 0x475e7d:c.instructions+=7;goto B475e7d;
case 0x475e80:c.instructions+=6;goto B475e80;
case 0x475e86:c.instructions+=5;goto B475e86;
case 0x475e89:c.instructions+=4;goto B475e89;
case 0x475e8b:c.instructions+=3;goto B475e8b;
case 0x475e8d:c.instructions+=2;goto B475e8d;
case 0x475e90:c.instructions+=1;goto B475e90;
case 0x475e96:goto L475e96;
case 0x475e9b:c.instructions+=20;goto B475e9b;
case 0x475e9f:c.instructions+=19;goto B475e9f;
case 0x475ea5:c.instructions+=18;goto B475ea5;
case 0x475ea6:c.instructions+=17;goto B475ea6;
case 0x475eac:c.instructions+=16;goto B475eac;
case 0x475eb1:c.instructions+=15;goto B475eb1;
case 0x475eb7:c.instructions+=14;goto B475eb7;
case 0x475eb9:c.instructions+=13;goto B475eb9;
case 0x475ebb:c.instructions+=12;goto B475ebb;
case 0x475ebc:c.instructions+=11;goto B475ebc;
case 0x475ebd:c.instructions+=10;goto B475ebd;
case 0x475ec2:c.instructions+=9;goto B475ec2;
case 0x475ec3:c.instructions+=8;goto B475ec3;
case 0x475ec8:c.instructions+=7;goto B475ec8;
case 0x475ec9:c.instructions+=6;goto B475ec9;
case 0x475ece:c.instructions+=5;goto B475ece;
case 0x475ecf:c.instructions+=4;goto B475ecf;
case 0x475ed0:c.instructions+=3;goto B475ed0;
case 0x475ed2:c.instructions+=2;goto B475ed2;
case 0x475ed5:c.instructions+=1;goto B475ed5;
case 0x475eda:goto L475eda;
case 0x475edd:c.instructions+=2;goto B475edd;
case 0x475ee0:c.instructions+=1;goto B475ee0;
case 0x475ee5:goto L475ee5;
case 0x475eeb:c.instructions+=3;goto B475eeb;
case 0x475eee:c.instructions+=2;goto B475eee;
case 0x475ef1:c.instructions+=1;goto B475ef1;
case 0x475ef6:goto L475ef6;
case 0x475efc:c.instructions+=2;goto B475efc;
case 0x475eff:c.instructions+=1;goto B475eff;
case 0x475f04:goto L475f04;
case 0x475f07:c.instructions+=11;goto B475f07;
case 0x475f0c:c.instructions+=10;goto B475f0c;
case 0x475f12:c.instructions+=9;goto B475f12;
case 0x475f14:c.instructions+=8;goto B475f14;
case 0x475f16:c.instructions+=7;goto B475f16;
case 0x475f18:c.instructions+=6;goto B475f18;
case 0x475f1b:c.instructions+=5;goto B475f1b;
case 0x475f1c:c.instructions+=4;goto B475f1c;
case 0x475f1d:c.instructions+=3;goto B475f1d;
case 0x475f1f:c.instructions+=2;goto B475f1f;
case 0x475f25:c.instructions+=1;goto B475f25;
case 0x475f2a:goto L475f2a;
case 0x475f2f:c.instructions+=3;goto B475f2f;
case 0x475f31:c.instructions+=2;goto B475f31;
case 0x475f33:c.instructions+=1;goto B475f33;
case 0x475f38:goto L475f38;
case 0x475f3b:c.instructions+=2;goto B475f3b;
case 0x475f3d:c.instructions+=1;goto B475f3d;
case 0x475f3f:goto L475f3f;
case 0x475f40:c.instructions+=2;goto B475f40;
case 0x475f42:c.instructions+=1;goto B475f42;
case 0x475f47:goto L475f47;
case 0x475f49:goto L475f49;
case 0x475f4b:goto L475f4b;
case 0x475f4f:c.instructions+=9;goto B475f4f;
case 0x475f50:c.instructions+=8;goto B475f50;
case 0x475f52:c.instructions+=7;goto B475f52;
case 0x475f58:c.instructions+=6;goto B475f58;
case 0x475f5c:c.instructions+=5;goto B475f5c;
case 0x475f60:c.instructions+=4;goto B475f60;
case 0x475f64:c.instructions+=3;goto B475f64;
case 0x475f68:c.instructions+=2;goto B475f68;
case 0x475f6c:c.instructions+=1;goto B475f6c;
case 0x475f71:goto L475f71;
case 0x475f74:c.instructions+=5;goto B475f74;
case 0x475f77:c.instructions+=4;goto B475f77;
case 0x475f78:c.instructions+=3;goto B475f78;
case 0x475f7e:c.instructions+=2;goto B475f7e;
case 0x475f85:c.instructions+=1;goto B475f85;
case 0x475f86:goto L475f86;
case 0x475f87:c.instructions+=3;goto B475f87;
case 0x475f88:c.instructions+=2;goto B475f88;
case 0x475f8b:c.instructions+=1;goto B475f8b;
case 0x475f90:goto L475f90;
case 0x475f91:c.instructions+=2;goto B475f91;
case 0x475f93:c.instructions+=1;goto B475f93;
case 0x475f98:goto L475f98;
case 0x475f9a:c.instructions+=18;goto B475f9a;
case 0x475f9c:c.instructions+=17;goto B475f9c;
case 0x475fa2:c.instructions+=16;goto B475fa2;
case 0x475fa8:c.instructions+=15;goto B475fa8;
case 0x475fae:c.instructions+=14;goto B475fae;
case 0x475fb4:c.instructions+=13;goto B475fb4;
case 0x475fba:c.instructions+=12;goto B475fba;
case 0x475fc0:c.instructions+=11;goto B475fc0;
case 0x475fc6:c.instructions+=10;goto B475fc6;
case 0x475fcc:c.instructions+=9;goto B475fcc;
case 0x475fd2:c.instructions+=8;goto B475fd2;
case 0x475fd8:c.instructions+=7;goto B475fd8;
case 0x475fdb:c.instructions+=6;goto B475fdb;
case 0x475fe1:c.instructions+=5;goto B475fe1;
case 0x475fe7:c.instructions+=4;goto B475fe7;
case 0x475fed:c.instructions+=3;goto B475fed;
case 0x475fef:c.instructions+=2;goto B475fef;
case 0x475ff0:c.instructions+=1;goto B475ff0;
default:missing_instruction(c.pc);}
B475010:L475010:{c.instructions+=7;NFSU2_TR(0x475010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475011:{NFSU2_TR(0x475011);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B475015:{NFSU2_TR(0x475015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B475017:{NFSU2_TR(0x475017);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475018:{NFSU2_TR(0x475018);
__builtin_memmove((R+28),(R+4),4);
}
B47501a:{NFSU2_TR(0x47501a);
__builtin_memmove((R+4),(R+24),4);
}
B47501c:{NFSU2_TR(0x47501c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47501full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47501f:L47501f:{c.instructions+=2;NFSU2_TR(0x47501f);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(u32(0xfff0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B475025:{NFSU2_TR(0x475025);
if(r1(R+518)){{goto L47503b;}}
}
B475027:L475027:{c.instructions+=3;NFSU2_TR(0x475027);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47502c:{NFSU2_TR(0x47502c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47502e:{NFSU2_TR(0x47502e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475033ull));
TAIL_STATIC(0x4691c0u,469);
}
B475033:L475033:{c.instructions+=4;NFSU2_TR(0x475033);
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
B475036:{NFSU2_TR(0x475036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475037:{NFSU2_TR(0x475037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475038:{NFSU2_TR(0x475038);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47503b:L47503b:{c.instructions+=4;NFSU2_TR(0x47503b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475041:{NFSU2_TR(0x475041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475042:{NFSU2_TR(0x475042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475043:{NFSU2_TR(0x475043);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475050:L475050:{c.instructions+=3;NFSU2_TR(0x475050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475051:{NFSU2_TR(0x475051);
__builtin_memmove((R+24),(R+4),4);
}
B475053:{NFSU2_TR(0x475053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475058ull));
TAIL_STATIC(0x45e350u,45e);
}
B475058:L475058:{c.instructions+=10;NFSU2_TR(0x475058);
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
B47505a:{NFSU2_TR(0x47505a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475060:{NFSU2_TR(0x475060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475066:{NFSU2_TR(0x475066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47506c:{NFSU2_TR(0x47506c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475072:{NFSU2_TR(0x475072);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475076:{NFSU2_TR(0x475076);
u8 U[4];
w4(U+0,u32(0x78b110ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47507c:{NFSU2_TR(0x47507c);
__builtin_memmove((R+0),(R+24),4);
}
B47507e:{NFSU2_TR(0x47507e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47507f:{NFSU2_TR(0x47507f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475080:L475080:{c.instructions+=6;NFSU2_TR(0x475080);
u8 U[4];
w4(U+0,u32(0x78b110ull));
s4(u32(r4(R+4)),r4(U+0));
}
B475086:{NFSU2_TR(0x475086);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47508b:{NFSU2_TR(0x47508b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475091:{NFSU2_TR(0x475091);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B475093:{NFSU2_TR(0x475093);
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
B475095:{NFSU2_TR(0x475095);
if(r1(R+518)){{goto L4750a3;}}
}
B475097:L475097:{c.instructions+=2;NFSU2_TR(0x475097);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47509d:{NFSU2_TR(0x47509d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4750a3:L4750a3:{c.instructions+=2;NFSU2_TR(0x4750a3);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4750a9:{NFSU2_TR(0x4750a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4750b0:L4750b0:{c.instructions+=4;NFSU2_TR(0x4750b0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4750b5:{NFSU2_TR(0x4750b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4750bb:{NFSU2_TR(0x4750bb);
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
B4750bd:{NFSU2_TR(0x4750bd);
if(r1(R+518)){{goto L4750cc;}}
}
B4750bf:L4750bf:{c.instructions+=2;NFSU2_TR(0x4750bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4750c6:{NFSU2_TR(0x4750c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4750cc:L4750cc:{c.instructions+=1;NFSU2_TR(0x4750cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4750d0:L4750d0:{c.instructions+=3;NFSU2_TR(0x4750d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4750d1:{NFSU2_TR(0x4750d1);
__builtin_memmove((R+24),(R+4),4);
}
B4750d3:{NFSU2_TR(0x4750d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4750d8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4750d8:L4750d8:{c.instructions+=10;NFSU2_TR(0x4750d8);
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
B4750da:{NFSU2_TR(0x4750da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4750e0:{NFSU2_TR(0x4750e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4750e6:{NFSU2_TR(0x4750e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4750ec:{NFSU2_TR(0x4750ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4750f2:{NFSU2_TR(0x4750f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4750f6:{NFSU2_TR(0x4750f6);
u8 U[4];
w4(U+0,u32(0x78b158ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4750fc:{NFSU2_TR(0x4750fc);
__builtin_memmove((R+0),(R+24),4);
}
B4750fe:{NFSU2_TR(0x4750fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4750ff:{NFSU2_TR(0x4750ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475100:L475100:{c.instructions+=4;NFSU2_TR(0x475100);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B475105:{NFSU2_TR(0x475105);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47510b:{NFSU2_TR(0x47510b);
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
B47510d:{NFSU2_TR(0x47510d);
if(r1(R+518)){{goto L47511c;}}
}
B47510f:L47510f:{c.instructions+=2;NFSU2_TR(0x47510f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475116:{NFSU2_TR(0x475116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47511c:L47511c:{c.instructions+=1;NFSU2_TR(0x47511c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475120:L475120:{c.instructions+=3;NFSU2_TR(0x475120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475121:{NFSU2_TR(0x475121);
__builtin_memmove((R+24),(R+4),4);
}
B475123:{NFSU2_TR(0x475123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475128ull));
TAIL_STATIC(0x45e350u,45e);
}
B475128:L475128:{c.instructions+=10;NFSU2_TR(0x475128);
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
B47512a:{NFSU2_TR(0x47512a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475130:{NFSU2_TR(0x475130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475136:{NFSU2_TR(0x475136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47513c:{NFSU2_TR(0x47513c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475142:{NFSU2_TR(0x475142);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475146:{NFSU2_TR(0x475146);
u8 U[4];
w4(U+0,u32(0x78b1a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47514c:{NFSU2_TR(0x47514c);
__builtin_memmove((R+0),(R+24),4);
}
B47514e:{NFSU2_TR(0x47514e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47514f:{NFSU2_TR(0x47514f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475150:L475150:{c.instructions+=4;NFSU2_TR(0x475150);
u8 U[4];
w4(U+0,u32(0x78b1a0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B475156:{NFSU2_TR(0x475156);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B47515b:{NFSU2_TR(0x47515b);
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
B47515d:{NFSU2_TR(0x47515d);
if(r1(R+518)){{goto L475171;}}
}
B47515f:L47515f:{c.instructions+=3;NFSU2_TR(0x47515f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475162:{NFSU2_TR(0x475162);
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
B475164:{NFSU2_TR(0x475164);
if(r1(R+518)){{goto L475171;}}
}
B475166:L475166:{c.instructions+=2;NFSU2_TR(0x475166);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47516a:{NFSU2_TR(0x47516a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475171:L475171:{c.instructions+=2;NFSU2_TR(0x475171);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B475177:{NFSU2_TR(0x475177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475180:L475180:{c.instructions+=3;NFSU2_TR(0x475180);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B475185:{NFSU2_TR(0x475185);
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
B475187:{NFSU2_TR(0x475187);
if(r1(R+518)){{goto L475197;}}
}
B475189:L475189:{c.instructions+=3;NFSU2_TR(0x475189);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47518c:{NFSU2_TR(0x47518c);
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
B47518e:{NFSU2_TR(0x47518e);
if(r1(R+518)){{goto L475197;}}
}
B475190:L475190:{c.instructions+=2;NFSU2_TR(0x475190);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475194:{NFSU2_TR(0x475194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475197:L475197:{c.instructions+=1;NFSU2_TR(0x475197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4751a0:L4751a0:{c.instructions+=7;NFSU2_TR(0x4751a0);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B4751a5:{NFSU2_TR(0x4751a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4751a8:{NFSU2_TR(0x4751a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4751a9:{NFSU2_TR(0x4751a9);
__builtin_memmove((R+24),(R+4),4);
}
B4751ab:{NFSU2_TR(0x4751ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4751ae:{NFSU2_TR(0x4751ae);
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
B4751b0:{NFSU2_TR(0x4751b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4751ef;}}
}
B4751b2:L4751b2:{c.instructions+=3;NFSU2_TR(0x4751b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4751b5:{NFSU2_TR(0x4751b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4751b8:{NFSU2_TR(0x4751b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4751bdull));
TAIL_STATIC(0x45a550u,45a);
}
B4751bd:L4751bd:{c.instructions+=5;NFSU2_TR(0x4751bd);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4751c3:{NFSU2_TR(0x4751c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4751c6:{NFSU2_TR(0x4751c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4751c8:{NFSU2_TR(0x4751c8);
w4(R+8,u32(0x1ull));
}
B4751cd:{NFSU2_TR(0x4751cd);
if(r1(R+518)){{goto L4751d4;}}
}
B4751cf:L4751cf:{c.instructions+=2;NFSU2_TR(0x4751cf);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+8))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+8)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4751d2:{NFSU2_TR(0x4751d2);
if(r1(R+518)){{goto L4751ef;}}
}
B4751d4:L4751d4:{c.instructions+=2;NFSU2_TR(0x4751d4);
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
B4751d6:{NFSU2_TR(0x4751d6);
if(r1(R+518)){{goto L4751ef;}}
}
B4751d8:L4751d8:{c.instructions+=2;NFSU2_TR(0x4751d8);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B4751df:{NFSU2_TR(0x4751df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4751e8;}}
}
B4751e1:L4751e1:{c.instructions+=3;NFSU2_TR(0x4751e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4751e4:{NFSU2_TR(0x4751e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4751e5:{NFSU2_TR(0x4751e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4751e8:L4751e8:{c.instructions+=3;NFSU2_TR(0x4751e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4751eb:{NFSU2_TR(0x4751eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4751ec:{NFSU2_TR(0x4751ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4751ef:L4751ef:{c.instructions+=4;NFSU2_TR(0x4751ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4751f6:{NFSU2_TR(0x4751f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4751fd:{NFSU2_TR(0x4751fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4751fe:{NFSU2_TR(0x4751fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475210:L475210:{c.instructions+=3;NFSU2_TR(0x475210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475211:{NFSU2_TR(0x475211);
__builtin_memmove((R+24),(R+4),4);
}
B475213:{NFSU2_TR(0x475213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475218ull));
TAIL_STATIC(0x45e350u,45e);
}
B475218:L475218:{c.instructions+=10;NFSU2_TR(0x475218);
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
B47521a:{NFSU2_TR(0x47521a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475220:{NFSU2_TR(0x475220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475226:{NFSU2_TR(0x475226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47522c:{NFSU2_TR(0x47522c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475232:{NFSU2_TR(0x475232);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475236:{NFSU2_TR(0x475236);
u8 U[4];
w4(U+0,u32(0x78b1e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47523c:{NFSU2_TR(0x47523c);
__builtin_memmove((R+0),(R+24),4);
}
B47523e:{NFSU2_TR(0x47523e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47523f:{NFSU2_TR(0x47523f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475240:L475240:{c.instructions+=2;NFSU2_TR(0x475240);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B475246:{NFSU2_TR(0x475246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475250:L475250:{c.instructions+=3;NFSU2_TR(0x475250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475251:{NFSU2_TR(0x475251);
__builtin_memmove((R+24),(R+4),4);
}
B475253:{NFSU2_TR(0x475253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475258ull));
TAIL_STATIC(0x45e350u,45e);
}
B475258:L475258:{c.instructions+=16;NFSU2_TR(0x475258);
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
B47525a:{NFSU2_TR(0x47525a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475260:{NFSU2_TR(0x475260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475266:{NFSU2_TR(0x475266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47526c:{NFSU2_TR(0x47526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475272:{NFSU2_TR(0x475272);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475278:{NFSU2_TR(0x475278);
w1(R+4,u8(0x1ull));
}
B47527a:{NFSU2_TR(0x47527a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47527d:{NFSU2_TR(0x47527d);
u8 U[4];
w4(U+0,u32(0x78b230ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475283:{NFSU2_TR(0x475283);
__builtin_memmove(gp(0x82bc49),(R+0),1);
}
B475288:{NFSU2_TR(0x475288);
__builtin_memmove(gp(0x82bc48),(R+0),1);
}
B47528d:{NFSU2_TR(0x47528d);
__builtin_memmove(gp(0x82bc4a),(R+0),1);
}
B475292:{NFSU2_TR(0x475292);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475298:{NFSU2_TR(0x475298);
__builtin_memmove((R+0),(R+24),4);
}
B47529a:{NFSU2_TR(0x47529a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47529b:{NFSU2_TR(0x47529b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4752a0:L4752a0:{c.instructions+=5;NFSU2_TR(0x4752a0);
u8 U[4];
w4(U+0,u32(0x78b230ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4752a6:{NFSU2_TR(0x4752a6);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B4752ab:{NFSU2_TR(0x4752ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4752ae:{NFSU2_TR(0x4752ae);
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
B4752b0:{NFSU2_TR(0x4752b0);
if(r1(R+518)){{goto L4752bd;}}
}
B4752b2:L4752b2:{c.instructions+=2;NFSU2_TR(0x4752b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4752b6:{NFSU2_TR(0x4752b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4752bd:L4752bd:{c.instructions+=2;NFSU2_TR(0x4752bd);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4752c3:{NFSU2_TR(0x4752c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4752d0:L4752d0:{c.instructions+=11;NFSU2_TR(0x4752d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4752d1:{NFSU2_TR(0x4752d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4752d3:{NFSU2_TR(0x4752d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4752d9:{NFSU2_TR(0x4752d9);
__builtin_memmove(gp(0x82bc49),(R+12),1);
}
B4752df:{NFSU2_TR(0x4752df);
__builtin_memmove(gp(0x82bc48),(R+12),1);
}
B4752e5:{NFSU2_TR(0x4752e5);
__builtin_memmove(gp(0x82bc4a),(R+12),1);
}
B4752eb:{NFSU2_TR(0x4752eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4752f2:{NFSU2_TR(0x4752f2);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B4752f8:{NFSU2_TR(0x4752f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4752fb:{NFSU2_TR(0x4752fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4752fd:{NFSU2_TR(0x4752fd);
if(r1(R+518)){{goto L47530c;}}
}
B4752ff:L4752ff:{c.instructions+=3;NFSU2_TR(0x4752ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475303:{NFSU2_TR(0x475303);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475306:{NFSU2_TR(0x475306);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B47530c:L47530c:{c.instructions+=3;NFSU2_TR(0x47530c);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B475311:{NFSU2_TR(0x475311);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B475318:{NFSU2_TR(0x475318);
if(r1(R+518)){{goto L47532a;}}
}
B47531a:L47531a:{c.instructions+=3;NFSU2_TR(0x47531a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47531d:{NFSU2_TR(0x47531d);
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
B47531f:{NFSU2_TR(0x47531f);
if(r1(R+518)){{goto L47532a;}}
}
B475321:L475321:{c.instructions+=3;NFSU2_TR(0x475321);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475324:{NFSU2_TR(0x475324);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B475327:{NFSU2_TR(0x475327);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47532a:L47532a:{c.instructions+=2;NFSU2_TR(0x47532a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47532b:{NFSU2_TR(0x47532b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475330:L475330:{c.instructions+=7;NFSU2_TR(0x475330);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475331:{NFSU2_TR(0x475331);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475332:{NFSU2_TR(0x475332);
__builtin_memmove((R+24),(R+4),4);
}
B475334:{NFSU2_TR(0x475334);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47533a:{NFSU2_TR(0x47533a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47533c:{NFSU2_TR(0x47533c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47533e:{NFSU2_TR(0x47533e);
if(r1(R+518)){{goto L475394;}}
}
B475340:L475340:{c.instructions+=2;NFSU2_TR(0x475340);
u8 U[2];
__builtin_memmove((U+0),gp(0x82bc48),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B475346:{NFSU2_TR(0x475346);
if(r1(R+518)){{goto L475394;}}
}
B475348:L475348:{c.instructions+=4;NFSU2_TR(0x475348);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B47534d:{NFSU2_TR(0x47534d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475350:{NFSU2_TR(0x475350);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475352:{NFSU2_TR(0x475352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475357ull));
TAIL_STATIC(0x45ad40u,45a);
}
B475357:L475357:{c.instructions+=2;NFSU2_TR(0x475357);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475359:{NFSU2_TR(0x475359);
if(r1(R+518)){{goto L4753d7;}}
}
B47535b:L47535b:{c.instructions+=7;NFSU2_TR(0x47535b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475361:{NFSU2_TR(0x475361);
__builtin_memmove(gp(0x82bc48),(R+12),1);
}
B475367:{NFSU2_TR(0x475367);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47536d:{NFSU2_TR(0x47536d);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B475373:{NFSU2_TR(0x475373);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475376:{NFSU2_TR(0x475376);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47537a:{NFSU2_TR(0x47537a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4753d7;}}
}
B47537c:L47537c:{c.instructions+=1;NFSU2_TR(0x47537c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475381ull));
TAIL_STATIC(0x46cd20u,46c);
}
B475381:L475381:{c.instructions+=4;NFSU2_TR(0x475381);
__builtin_memmove((R+8),gp(0x82bc4c),4);
}
B475387:{NFSU2_TR(0x475387);
u8 U[4];
w4(U+0,u32(0x78b300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47538c:{NFSU2_TR(0x47538c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47538d:{NFSU2_TR(0x47538d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475392ull));
TAIL_STATIC(0x4691c0u,469);
}
B475392:L475392:{c.instructions+=1;NFSU2_TR(0x475392);
{goto L4753d4;}
}
B475394:L475394:{c.instructions+=2;NFSU2_TR(0x475394);
u8 U[2];
__builtin_memmove((U+0),gp(0x82bc49),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47539a:{NFSU2_TR(0x47539a);
if(r1(R+518)){{goto L4753d7;}}
}
B47539c:L47539c:{c.instructions+=2;NFSU2_TR(0x47539c);
u8 U[2];
__builtin_memmove((U+0),gp(0x82bc4a),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4753a2:{NFSU2_TR(0x4753a2);
if(r1(R+518)){{goto L4753d7;}}
}
B4753a4:L4753a4:{c.instructions+=4;NFSU2_TR(0x4753a4);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B4753a9:{NFSU2_TR(0x4753a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4753ac:{NFSU2_TR(0x4753ac);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4753ae:{NFSU2_TR(0x4753ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4753b3ull));
TAIL_STATIC(0x45ad40u,45a);
}
B4753b3:L4753b3:{c.instructions+=2;NFSU2_TR(0x4753b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4753b5:{NFSU2_TR(0x4753b5);
if(r1(R+518)){{goto L4753d7;}}
}
B4753b7:L4753b7:{c.instructions+=4;NFSU2_TR(0x4753b7);
__builtin_memmove((R+4),gp(0x82bc4c),4);
}
B4753bd:{NFSU2_TR(0x4753bd);
u8 U[4];
w4(U+0,u32(0x78b2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4753c2:{NFSU2_TR(0x4753c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4753c3:{NFSU2_TR(0x4753c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4753c8ull));
TAIL_STATIC(0x4691c0u,469);
}
B4753c8:L4753c8:{c.instructions+=2;NFSU2_TR(0x4753c8);
__builtin_memmove(gp(0x82bc49),(R+12),1);
}
B4753ce:{NFSU2_TR(0x4753ce);
__builtin_memmove(gp(0x82bc4a),(R+12),1);
}
B4753d4:L4753d4:{c.instructions+=1;NFSU2_TR(0x4753d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4753d7:L4753d7:{c.instructions+=3;NFSU2_TR(0x4753d7);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4753dd:{NFSU2_TR(0x4753dd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4753df:{NFSU2_TR(0x4753df);
if(r1(R+518)){{goto L475494;}}
}
B4753e5:L4753e5:{c.instructions+=6;NFSU2_TR(0x4753e5);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4753e8:{NFSU2_TR(0x4753e8);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4753ee:{NFSU2_TR(0x4753ee);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4753f4:{NFSU2_TR(0x4753f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4753f6:{NFSU2_TR(0x4753f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4753f9:{NFSU2_TR(0x4753f9);
if(r1(R+514)){{goto L475431;}}
}
B4753fb:L4753fb:{c.instructions+=2;NFSU2_TR(0x4753fb);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B475401:{NFSU2_TR(0x475401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475431;}}
}
B475403:L475403:{c.instructions+=2;NFSU2_TR(0x475403);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B475406:{NFSU2_TR(0x475406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475431;}}
}
B475408:L475408:{c.instructions+=5;NFSU2_TR(0x475408);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B47540e:{NFSU2_TR(0x47540e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B475410:{NFSU2_TR(0x475410);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475413:{NFSU2_TR(0x475413);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B475416:{NFSU2_TR(0x475416);
if(r1(R+518)){{goto L475482;}}
}
B475418:L475418:{c.instructions+=4;NFSU2_TR(0x475418);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47541b:{NFSU2_TR(0x47541b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47541e:{NFSU2_TR(0x47541e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B475421:{NFSU2_TR(0x475421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475426ull));
TAIL_STATIC(0x45a550u,45a);
}
B475426:L475426:{c.instructions+=2;NFSU2_TR(0x475426);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475428:{NFSU2_TR(0x475428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47547c;}}
}
B47542a:L47542a:{c.instructions+=2;NFSU2_TR(0x47542a);
u8 U[4];
w4(U+0,u32(0x78b2b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47542f:{NFSU2_TR(0x47542f);
{goto L475459;}
}
B475431:L475431:{c.instructions+=4;NFSU2_TR(0x475431);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475437:{NFSU2_TR(0x475437);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475439:{NFSU2_TR(0x475439);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47543c:{NFSU2_TR(0x47543c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475482;}}
}
B47543e:L47543e:{c.instructions+=2;NFSU2_TR(0x47543e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B475444:{NFSU2_TR(0x475444);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475482;}}
}
B475446:L475446:{c.instructions+=4;NFSU2_TR(0x475446);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B47544c:{NFSU2_TR(0x47544c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47544f:{NFSU2_TR(0x47544f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B475452:{NFSU2_TR(0x475452);
if(r1(R+518)){{goto L475482;}}
}
B475454:L475454:{c.instructions+=1;NFSU2_TR(0x475454);
u8 U[4];
w4(U+0,u32(0x78b28cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475459:L475459:{c.instructions+=3;NFSU2_TR(0x475459);
__builtin_memmove((R+0),gp(0x82bc4c),4);
}
B47545e:{NFSU2_TR(0x47545e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47545f:{NFSU2_TR(0x47545f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475464ull));
TAIL_STATIC(0x4691c0u,469);
}
B475464:L475464:{c.instructions+=4;NFSU2_TR(0x475464);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B47546a:{NFSU2_TR(0x47546a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47546d:{NFSU2_TR(0x47546d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475470:{NFSU2_TR(0x475470);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475475ull));
TAIL_STATIC(0x46ca10u,46c);
}
B475475:L475475:{c.instructions+=1;NFSU2_TR(0x475475);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47547c:L47547c:{c.instructions+=1;NFSU2_TR(0x47547c);
__builtin_memmove((R+4),gp(0x890118),4);
}
B475482:L475482:{c.instructions+=2;NFSU2_TR(0x475482);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B475484:{NFSU2_TR(0x475484);
if(r1(R+518)){{goto L475494;}}
}
B475486:L475486:{c.instructions+=2;NFSU2_TR(0x475486);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B475489:{NFSU2_TR(0x475489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475494;}}
}
B47548b:L47548b:{c.instructions+=2;NFSU2_TR(0x47548b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475492:{NFSU2_TR(0x475492);
{goto L475497;}
}
B475494:L475494:{c.instructions+=1;NFSU2_TR(0x475494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475497:L475497:{c.instructions+=3;NFSU2_TR(0x475497);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B47549c:{NFSU2_TR(0x47549c);
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
B47549e:{NFSU2_TR(0x47549e);
if(r1(R+518)){{goto L4754b1;}}
}
B4754a0:L4754a0:{c.instructions+=2;NFSU2_TR(0x4754a0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x7ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4754a3:{NFSU2_TR(0x4754a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4754b1;}}
}
B4754a5:L4754a5:{c.instructions+=4;NFSU2_TR(0x4754a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4754ac:{NFSU2_TR(0x4754ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4754ad:{NFSU2_TR(0x4754ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4754ae:{NFSU2_TR(0x4754ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4754b1:L4754b1:{c.instructions+=4;NFSU2_TR(0x4754b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4754b4:{NFSU2_TR(0x4754b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4754b5:{NFSU2_TR(0x4754b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4754b6:{NFSU2_TR(0x4754b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4754c0:L4754c0:{c.instructions+=7;NFSU2_TR(0x4754c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4754c1:{NFSU2_TR(0x4754c1);
__builtin_memmove((R+24),(R+4),4);
}
B4754c3:{NFSU2_TR(0x4754c3);
__builtin_memmove((R+4),gp(0x82ba30),4);
}
B4754c9:{NFSU2_TR(0x4754c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4754cc:{NFSU2_TR(0x4754cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4754cf:{NFSU2_TR(0x4754cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4754d1:{NFSU2_TR(0x4754d1);
if(r1(R+518)){{goto L47550e;}}
}
B4754d3:L4754d3:{c.instructions+=4;NFSU2_TR(0x4754d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4754d6:{NFSU2_TR(0x4754d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4754d9:{NFSU2_TR(0x4754d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4754dc:{NFSU2_TR(0x4754dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4754e1ull));
TAIL_STATIC(0x45a550u,45a);
}
B4754e1:L4754e1:{c.instructions+=2;NFSU2_TR(0x4754e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4754e3:{NFSU2_TR(0x4754e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47550e;}}
}
B4754e5:L4754e5:{c.instructions+=4;NFSU2_TR(0x4754e5);
__builtin_memmove((R+4),gp(0x82bc4c),4);
}
B4754eb:{NFSU2_TR(0x4754eb);
u8 U[4];
w4(U+0,u32(0x78b318ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4754f0:{NFSU2_TR(0x4754f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4754f1:{NFSU2_TR(0x4754f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4754f6ull));
TAIL_STATIC(0x4691c0u,469);
}
B4754f6:L4754f6:{c.instructions+=4;NFSU2_TR(0x4754f6);
__builtin_memmove((R+8),gp(0x82ba30),4);
}
B4754fc:{NFSU2_TR(0x4754fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4754ff:{NFSU2_TR(0x4754ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475502:{NFSU2_TR(0x475502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475507ull));
TAIL_STATIC(0x46ca10u,46c);
}
B475507:L475507:{c.instructions+=1;NFSU2_TR(0x475507);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47550e:L47550e:{c.instructions+=4;NFSU2_TR(0x47550e);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B475512:{NFSU2_TR(0x475512);
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
B475514:{NFSU2_TR(0x475514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475515:{NFSU2_TR(0x475515);
if(r1(R+518)){{goto L47552b;}}
}
B475517:L475517:{c.instructions+=5;NFSU2_TR(0x475517);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B47551c:{NFSU2_TR(0x47551c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47551f:{NFSU2_TR(0x47551f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475522:{NFSU2_TR(0x475522);
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
B475524:{NFSU2_TR(0x475524);
if(r1(R+518)){{goto L47552b;}}
}
B475526:L475526:{c.instructions+=1;NFSU2_TR(0x475526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47552bull));
TAIL_STATIC(0x46c9d0u,46c);
}
B47552b:L47552b:{c.instructions+=1;NFSU2_TR(0x47552b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475530:L475530:{c.instructions+=4;NFSU2_TR(0x475530);
__builtin_memmove((R+0),gp(0x82bc4c),4);
}
B475535:{NFSU2_TR(0x475535);
u8 U[4];
w4(U+0,u32(0x78b340ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47553a:{NFSU2_TR(0x47553a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47553b:{NFSU2_TR(0x47553b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475540ull));
TAIL_STATIC(0x4691c0u,469);
}
B475540:L475540:{c.instructions+=4;NFSU2_TR(0x475540);
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
B475543:{NFSU2_TR(0x475543);
s1(0x82bc4a,u8(0x0ull));
}
B47554a:{NFSU2_TR(0x47554a);
s1(0x82bc48,u8(0x1ull));
}
B475551:{NFSU2_TR(0x475551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475560:L475560:{c.instructions+=3;NFSU2_TR(0x475560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475561:{NFSU2_TR(0x475561);
__builtin_memmove((R+24),(R+4),4);
}
B475563:{NFSU2_TR(0x475563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475568ull));
TAIL_STATIC(0x45e350u,45e);
}
B475568:L475568:{c.instructions+=10;NFSU2_TR(0x475568);
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
B47556a:{NFSU2_TR(0x47556a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475570:{NFSU2_TR(0x475570);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475576:{NFSU2_TR(0x475576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47557c:{NFSU2_TR(0x47557c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475582:{NFSU2_TR(0x475582);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475586:{NFSU2_TR(0x475586);
u8 U[4];
w4(U+0,u32(0x78b360ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47558c:{NFSU2_TR(0x47558c);
__builtin_memmove((R+0),(R+24),4);
}
B47558e:{NFSU2_TR(0x47558e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47558f:{NFSU2_TR(0x47558f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475590:L475590:{c.instructions+=6;NFSU2_TR(0x475590);
u8 U[4];
w4(U+0,u32(0x78b360ull));
s4(u32(r4(R+4)),r4(U+0));
}
B475596:{NFSU2_TR(0x475596);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47559b:{NFSU2_TR(0x47559b);
__builtin_memmove((R+8),(R+0),4);
}
B47559d:{NFSU2_TR(0x47559d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4755a0:{NFSU2_TR(0x4755a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4755a2:{NFSU2_TR(0x4755a2);
if(r1(R+518)){{goto L4755ae;}}
}
B4755a4:L4755a4:{c.instructions+=1;NFSU2_TR(0x4755a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4755ae:L4755ae:{c.instructions+=3;NFSU2_TR(0x4755ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4755b1:{NFSU2_TR(0x4755b1);
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
B4755b3:{NFSU2_TR(0x4755b3);
if(r1(R+518)){{goto L4755bc;}}
}
B4755b5:L4755b5:{c.instructions+=1;NFSU2_TR(0x4755b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4755bc:L4755bc:{c.instructions+=2;NFSU2_TR(0x4755bc);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4755c2:{NFSU2_TR(0x4755c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4755d0:L4755d0:{c.instructions+=5;NFSU2_TR(0x4755d0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4755d5:{NFSU2_TR(0x4755d5);
__builtin_memmove((R+8),(R+0),4);
}
B4755d7:{NFSU2_TR(0x4755d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4755da:{NFSU2_TR(0x4755da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4755dc:{NFSU2_TR(0x4755dc);
if(r1(R+518)){{goto L4755e4;}}
}
B4755de:L4755de:{c.instructions+=1;NFSU2_TR(0x4755de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4755e4:L4755e4:{c.instructions+=3;NFSU2_TR(0x4755e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4755e7:{NFSU2_TR(0x4755e7);
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
B4755e9:{NFSU2_TR(0x4755e9);
if(r1(R+518)){{goto L4755ee;}}
}
B4755eb:L4755eb:{c.instructions+=1;NFSU2_TR(0x4755eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4755ee:L4755ee:{c.instructions+=1;NFSU2_TR(0x4755ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4755f0:L4755f0:{c.instructions+=12;NFSU2_TR(0x4755f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4755f1:{NFSU2_TR(0x4755f1);
__builtin_memmove((R+20),(R+16),4);
}
B4755f3:{NFSU2_TR(0x4755f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4755f6:{NFSU2_TR(0x4755f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4755f9:{NFSU2_TR(0x4755f9);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4755fe:{NFSU2_TR(0x4755fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4755ff:{NFSU2_TR(0x4755ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475600:{NFSU2_TR(0x475600);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475601:{NFSU2_TR(0x475601);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B475604:{NFSU2_TR(0x475604);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B475606:{NFSU2_TR(0x475606);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B475608:{NFSU2_TR(0x475608);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L475679;}}
}
B47560a:L47560a:{c.instructions+=3;NFSU2_TR(0x47560a);
__builtin_memmove((R+8),gp(0x890080),4);
}
B475610:{NFSU2_TR(0x475610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B475613:{NFSU2_TR(0x475613);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B475616:L475616:{c.instructions+=3;NFSU2_TR(0x475616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B475618:{NFSU2_TR(0x475618);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47561a:{NFSU2_TR(0x47561a);
if(r1(R+518)){{goto L475671;}}
}
B47561c:L47561c:{c.instructions+=3;NFSU2_TR(0x47561c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47561f:{NFSU2_TR(0x47561f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B475623:{NFSU2_TR(0x475623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475671;}}
}
B475625:L475625:{c.instructions+=2;NFSU2_TR(0x475625);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47562c:{NFSU2_TR(0x47562c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475671;}}
}
B47562e:L47562e:{c.instructions+=25;NFSU2_TR(0x47562e);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475631:{NFSU2_TR(0x475631);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475634:{NFSU2_TR(0x475634);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475637:{NFSU2_TR(0x475637);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47563b:{NFSU2_TR(0x47563b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47563d:{NFSU2_TR(0x47563d);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47563f:{NFSU2_TR(0x47563f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475643:{NFSU2_TR(0x475643);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B475646:{NFSU2_TR(0x475646);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475649:{NFSU2_TR(0x475649);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B47564d:{NFSU2_TR(0x47564d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B47564f:{NFSU2_TR(0x47564f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B475651:{NFSU2_TR(0x475651);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475655:{NFSU2_TR(0x475655);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475659:{NFSU2_TR(0x475659);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B47565b:{NFSU2_TR(0x47565b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B47565d:{NFSU2_TR(0x47565d);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B47565f:{NFSU2_TR(0x47565f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475661:{NFSU2_TR(0x475661);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B475663:{NFSU2_TR(0x475663);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B475665:{NFSU2_TR(0x475665);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B475667:{NFSU2_TR(0x475667);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47566a:{NFSU2_TR(0x47566a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47566c:{NFSU2_TR(0x47566c);
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
B47566f:{NFSU2_TR(0x47566f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L475682;}}
}
B475671:L475671:{c.instructions+=4;NFSU2_TR(0x475671);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B475672:{NFSU2_TR(0x475672);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B475675:{NFSU2_TR(0x475675);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B475677:{NFSU2_TR(0x475677);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x475616u);}goto L475616;}}
}
B475679:L475679:{c.instructions+=7;NFSU2_TR(0x475679);
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
B47567b:{NFSU2_TR(0x47567b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47567c:{NFSU2_TR(0x47567c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47567d:{NFSU2_TR(0x47567d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47567e:{NFSU2_TR(0x47567e);
__builtin_memmove((R+16),(R+20),4);
}
B475680:{NFSU2_TR(0x475680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475681:{NFSU2_TR(0x475681);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475682:L475682:{c.instructions+=7;NFSU2_TR(0x475682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475683:{NFSU2_TR(0x475683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475684:{NFSU2_TR(0x475684);
__builtin_memmove((R+0),(R+4),4);
}
B475686:{NFSU2_TR(0x475686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B475687:{NFSU2_TR(0x475687);
__builtin_memmove((R+16),(R+20),4);
}
B475689:{NFSU2_TR(0x475689);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47568a:{NFSU2_TR(0x47568a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475690:L475690:{c.instructions+=7;NFSU2_TR(0x475690);
__builtin_memmove((R+0),gp(0x890118),4);
}
B475695:{NFSU2_TR(0x475695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475696:{NFSU2_TR(0x475696);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475697:{NFSU2_TR(0x475697);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47569a:{NFSU2_TR(0x47569a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47569c:{NFSU2_TR(0x47569c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47569e:{NFSU2_TR(0x47569e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4756cc;}}
}
B4756a0:L4756a0:{c.instructions+=3;NFSU2_TR(0x4756a0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4756a6:{NFSU2_TR(0x4756a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B4756a9:{NFSU2_TR(0x4756a9);
__builtin_memmove((R+16),(R+16),4);
}
B4756b0:L4756b0:{c.instructions+=4;NFSU2_TR(0x4756b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4756b2:{NFSU2_TR(0x4756b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4756b5:{NFSU2_TR(0x4756b5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4756b9:{NFSU2_TR(0x4756b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4756c4;}}
}
B4756bb:L4756bb:{c.instructions+=2;NFSU2_TR(0x4756bb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4756c2:{NFSU2_TR(0x4756c2);
if(r1(R+518)){{goto L4756d1;}}
}
B4756c4:L4756c4:{c.instructions+=4;NFSU2_TR(0x4756c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4756c5:{NFSU2_TR(0x4756c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4756c8:{NFSU2_TR(0x4756c8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4756ca:{NFSU2_TR(0x4756ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4756b0u);}goto L4756b0;}}
}
B4756cc:L4756cc:{c.instructions+=4;NFSU2_TR(0x4756cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4756cd:{NFSU2_TR(0x4756cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4756ce:{NFSU2_TR(0x4756ce);
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
B4756d0:{NFSU2_TR(0x4756d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4756d1:L4756d1:{c.instructions+=5;NFSU2_TR(0x4756d1);
{u32 ea_=u32(r4(R+8)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4756d7:{NFSU2_TR(0x4756d7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4756db:{NFSU2_TR(0x4756db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4756dd:{NFSU2_TR(0x4756dd);
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
B4756e0:{NFSU2_TR(0x4756e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4756ea;}}
}
B4756e2:L4756e2:{c.instructions+=4;NFSU2_TR(0x4756e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4756e3:{NFSU2_TR(0x4756e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4756e4:{NFSU2_TR(0x4756e4);
w4(R+0,u32(0x1ull));
}
B4756e9:{NFSU2_TR(0x4756e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4756ea:L4756ea:{c.instructions+=4;NFSU2_TR(0x4756ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4756eb:{NFSU2_TR(0x4756eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4756ec:{NFSU2_TR(0x4756ec);
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
B4756ee:{NFSU2_TR(0x4756ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4756f0:L4756f0:{c.instructions+=3;NFSU2_TR(0x4756f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4756f1:{NFSU2_TR(0x4756f1);
__builtin_memmove((R+24),(R+4),4);
}
B4756f3:{NFSU2_TR(0x4756f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4756f8ull));
TAIL_STATIC(0x45e350u,45e);
}
B4756f8:L4756f8:{c.instructions+=13;NFSU2_TR(0x4756f8);
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
B4756fa:{NFSU2_TR(0x4756fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475700:{NFSU2_TR(0x475700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475706:{NFSU2_TR(0x475706);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47570c:{NFSU2_TR(0x47570c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475712:{NFSU2_TR(0x475712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475718:{NFSU2_TR(0x475718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47571e:{NFSU2_TR(0x47571e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475724:{NFSU2_TR(0x475724);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475728:{NFSU2_TR(0x475728);
u8 U[4];
w4(U+0,u32(0x78b3a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47572e:{NFSU2_TR(0x47572e);
__builtin_memmove((R+0),(R+24),4);
}
B475730:{NFSU2_TR(0x475730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475731:{NFSU2_TR(0x475731);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475740:L475740:{c.instructions+=12;NFSU2_TR(0x475740);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475742:{NFSU2_TR(0x475742);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475747:{NFSU2_TR(0x475747);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47574d:{NFSU2_TR(0x47574d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47574e:{NFSU2_TR(0x47574e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475755:{NFSU2_TR(0x475755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475756:{NFSU2_TR(0x475756);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475757:{NFSU2_TR(0x475757);
__builtin_memmove((R+24),(R+4),4);
}
B475759:{NFSU2_TR(0x475759);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47575d:{NFSU2_TR(0x47575d);
u8 U[4];
w4(U+0,u32(0x78b3a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475763:{NFSU2_TR(0x475763);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47576b:{NFSU2_TR(0x47576b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475770ull));
TAIL_STATIC(0x4621f0u,462);
}
B475770:L475770:{c.instructions+=6;NFSU2_TR(0x475770);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475774:{NFSU2_TR(0x475774);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47577a:{NFSU2_TR(0x47577a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47577b:{NFSU2_TR(0x47577b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475782:{NFSU2_TR(0x475782);
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
B475785:{NFSU2_TR(0x475785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475790:L475790:{c.instructions+=7;NFSU2_TR(0x475790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475791:{NFSU2_TR(0x475791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475792:{NFSU2_TR(0x475792);
__builtin_memmove((R+24),(R+4),4);
}
B475794:{NFSU2_TR(0x475794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475795:{NFSU2_TR(0x475795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47579b:{NFSU2_TR(0x47579b);
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
B47579d:{NFSU2_TR(0x47579d);
if(r1(R+518)){{goto L4757cd;}}
}
B47579f:L47579f:{c.instructions+=3;NFSU2_TR(0x47579f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4757a1:{NFSU2_TR(0x4757a1);
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
B4757a3:{NFSU2_TR(0x4757a3);
if(r1(R+518)){{goto L4757aa;}}
}
B4757a5:L4757a5:{c.instructions+=1;NFSU2_TR(0x4757a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757aaull));
TAIL_STATIC(0x735550u,735);
}
B4757aa:L4757aa:{c.instructions+=3;NFSU2_TR(0x4757aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4757ae:{NFSU2_TR(0x4757ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4757af:{NFSU2_TR(0x4757af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757b4ull));
TAIL_STATIC(0x734df0u,734);
}
B4757b4:L4757b4:{c.instructions+=2;NFSU2_TR(0x4757b4);
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
B4757b7:{NFSU2_TR(0x4757b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757bcull));
TAIL_STATIC(0x734e40u,734);
}
B4757bc:L4757bc:{c.instructions+=5;NFSU2_TR(0x4757bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4757c0:{NFSU2_TR(0x4757c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4757c2:{NFSU2_TR(0x4757c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4757c4:{NFSU2_TR(0x4757c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4757c5:{NFSU2_TR(0x4757c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4757c8:L4757c8:{c.instructions+=1;NFSU2_TR(0x4757c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757cdull));
TAIL_STATIC(0x734e60u,734);
}
B4757cd:L4757cd:{c.instructions+=5;NFSU2_TR(0x4757cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4757d3:{NFSU2_TR(0x4757d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4757dd:{NFSU2_TR(0x4757dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4757df:{NFSU2_TR(0x4757df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4757e1:{NFSU2_TR(0x4757e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4757e4:L4757e4:{c.instructions+=4;NFSU2_TR(0x4757e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4757ea:{NFSU2_TR(0x4757ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4757ec:{NFSU2_TR(0x4757ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4757ee:{NFSU2_TR(0x4757ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4757f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4757f1:L4757f1:{c.instructions+=4;NFSU2_TR(0x4757f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4757f2:{NFSU2_TR(0x4757f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4757f3:{NFSU2_TR(0x4757f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4757f4:{NFSU2_TR(0x4757f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475800:L475800:{c.instructions+=3;NFSU2_TR(0x475800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475801:{NFSU2_TR(0x475801);
__builtin_memmove((R+24),(R+4),4);
}
B475803:{NFSU2_TR(0x475803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475808ull));
TAIL_STATIC(0x45dd60u,45d);
}
B475808:L475808:{c.instructions+=4;NFSU2_TR(0x475808);
u8 U[4];
w4(U+0,u32(0x78b3ecull));
s4(u32(r4(R+24)),r4(U+0));
}
B47580e:{NFSU2_TR(0x47580e);
__builtin_memmove((R+0),(R+24),4);
}
B475810:{NFSU2_TR(0x475810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475811:{NFSU2_TR(0x475811);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475820:L475820:{c.instructions+=3;NFSU2_TR(0x475820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475821:{NFSU2_TR(0x475821);
__builtin_memmove((R+24),(R+4),4);
}
B475823:{NFSU2_TR(0x475823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475828ull));
TAIL_STATIC(0x45e350u,45e);
}
B475828:L475828:{c.instructions+=19;NFSU2_TR(0x475828);
__builtin_memmove((R+8),gp(0x82cb64),4);
}
B47582e:{NFSU2_TR(0x47582e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B475830:{NFSU2_TR(0x475830);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475836:{NFSU2_TR(0x475836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47583c:{NFSU2_TR(0x47583c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475842:{NFSU2_TR(0x475842);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475848:{NFSU2_TR(0x475848);
u8 U[4];
w4(U+0,u32(0x78b428ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47584e:{NFSU2_TR(0x47584e);
w1(R+4,u8(0x1ull));
}
B475850:{NFSU2_TR(0x475850);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475853:{NFSU2_TR(0x475853);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B475854:{NFSU2_TR(0x475854);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47585a:{NFSU2_TR(0x47585a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475860:{NFSU2_TR(0x475860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475866:{NFSU2_TR(0x475866);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47586c:{NFSU2_TR(0x47586c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475872:{NFSU2_TR(0x475872);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475878:{NFSU2_TR(0x475878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47587e:{NFSU2_TR(0x47587e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475884:{NFSU2_TR(0x475884);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47588b;}}
}
B475886:L475886:{c.instructions+=3;NFSU2_TR(0x475886);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B475887:{NFSU2_TR(0x475887);
w1(R+512,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B47588a:{NFSU2_TR(0x47588a);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47588b:L47588b:{c.instructions+=21;NFSU2_TR(0x47588b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475891:{NFSU2_TR(0x475891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475897:{NFSU2_TR(0x475897);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47589d:{NFSU2_TR(0x47589d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4758a3:{NFSU2_TR(0x4758a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4758a9:{NFSU2_TR(0x4758a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4758af:{NFSU2_TR(0x4758af);
w4(R+4,u32(0x3f800000ull));
}
B4758b4:{NFSU2_TR(0x4758b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758ba:{NFSU2_TR(0x4758ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4758c0:{NFSU2_TR(0x4758c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758c6:{NFSU2_TR(0x4758c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B4758d0:{NFSU2_TR(0x4758d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758d6:{NFSU2_TR(0x4758d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758dc:{NFSU2_TR(0x4758dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758e2:{NFSU2_TR(0x4758e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758e8:{NFSU2_TR(0x4758e8);
s4(0x82bc50,u32(0x0ull));
}
B4758f2:{NFSU2_TR(0x4758f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4758f8:{NFSU2_TR(0x4758f8);
__builtin_memmove((R+0),(R+24),4);
}
B4758fa:{NFSU2_TR(0x4758fa);
__builtin_memmove(gp(0x82cb64),(R+8),4);
}
B475900:{NFSU2_TR(0x475900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475901:{NFSU2_TR(0x475901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475910:L475910:{c.instructions+=1;NFSU2_TR(0x475910);
TAIL_STATIC(0x4624e0u,462);
}
B475920:L475920:{c.instructions+=1;NFSU2_TR(0x475920);
TAIL_STATIC(0x462550u,462);
}
B475930:L475930:{c.instructions+=7;NFSU2_TR(0x475930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475931:{NFSU2_TR(0x475931);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B475935:{NFSU2_TR(0x475935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B475937:{NFSU2_TR(0x475937);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475938:{NFSU2_TR(0x475938);
__builtin_memmove((R+28),(R+4),4);
}
B47593a:{NFSU2_TR(0x47593a);
__builtin_memmove((R+4),(R+24),4);
}
B47593c:{NFSU2_TR(0x47593c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47593full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47593f:L47593f:{c.instructions+=2;NFSU2_TR(0x47593f);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(u32(0xfff0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B475945:{NFSU2_TR(0x475945);
if(r1(R+518)){{goto L47595b;}}
}
B475947:L475947:{c.instructions+=3;NFSU2_TR(0x475947);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47594c:{NFSU2_TR(0x47594c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47594e:{NFSU2_TR(0x47594e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475953ull));
TAIL_STATIC(0x4691c0u,469);
}
B475953:L475953:{c.instructions+=4;NFSU2_TR(0x475953);
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
B475956:{NFSU2_TR(0x475956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475957:{NFSU2_TR(0x475957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475958:{NFSU2_TR(0x475958);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47595b:L47595b:{c.instructions+=4;NFSU2_TR(0x47595b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475961:{NFSU2_TR(0x475961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475962:{NFSU2_TR(0x475962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475963:{NFSU2_TR(0x475963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475970:L475970:{c.instructions+=4;NFSU2_TR(0x475970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B475976:{NFSU2_TR(0x475976);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B475978:{NFSU2_TR(0x475978);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47597a:{NFSU2_TR(0x47597a);
if(r1(R+518)){{goto L4759be;}}
}
B47597c:L47597c:{c.instructions+=2;NFSU2_TR(0x47597c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+0)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B475982:{NFSU2_TR(0x475982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4759be;}}
}
B475984:L475984:{c.instructions+=9;NFSU2_TR(0x475984);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47598b:{NFSU2_TR(0x47598b);
w4(R+8,u32(0x3f800000ull));
}
B475990:{NFSU2_TR(0x475990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w4(U+4,u32(0x3e19999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B47599a:{NFSU2_TR(0x47599a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759a0:{NFSU2_TR(0x4759a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759a6:{NFSU2_TR(0x4759a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759ac:{NFSU2_TR(0x4759ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4759b2:{NFSU2_TR(0x4759b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759b8:{NFSU2_TR(0x4759b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759be:L4759be:{c.instructions+=1;NFSU2_TR(0x4759be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4759c0:L4759c0:{c.instructions+=14;NFSU2_TR(0x4759c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4759c6:{NFSU2_TR(0x4759c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759c8:{NFSU2_TR(0x4759c8);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759cd:{NFSU2_TR(0x4759cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759ce:{NFSU2_TR(0x4759ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4759d5:{NFSU2_TR(0x4759d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4759d8:{NFSU2_TR(0x4759d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759d9:{NFSU2_TR(0x4759d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759da:{NFSU2_TR(0x4759da);
__builtin_memmove((R+24),(R+4),4);
}
B4759dc:{NFSU2_TR(0x4759dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759dd:{NFSU2_TR(0x4759dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4759e3:{NFSU2_TR(0x4759e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4759e5:{NFSU2_TR(0x4759e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4759e7:{NFSU2_TR(0x4759e7);
if(r1(R+518)){{goto L475a16;}}
}
B4759e9:L4759e9:{c.instructions+=3;NFSU2_TR(0x4759e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4759eb:{NFSU2_TR(0x4759eb);
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
B4759ed:{NFSU2_TR(0x4759ed);
if(r1(R+518)){{goto L4759f4;}}
}
B4759ef:L4759ef:{c.instructions+=1;NFSU2_TR(0x4759ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4759f4ull));
TAIL_STATIC(0x735550u,735);
}
B4759f4:L4759f4:{c.instructions+=3;NFSU2_TR(0x4759f4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4759f8:{NFSU2_TR(0x4759f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4759f9:{NFSU2_TR(0x4759f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4759feull));
TAIL_STATIC(0x734df0u,734);
}
B4759fe:L4759fe:{c.instructions+=2;NFSU2_TR(0x4759fe);
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
B475a01:{NFSU2_TR(0x475a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a06ull));
TAIL_STATIC(0x734e40u,734);
}
B475a06:L475a06:{c.instructions+=5;NFSU2_TR(0x475a06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475a0a:{NFSU2_TR(0x475a0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B475a0c:{NFSU2_TR(0x475a0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a0d:{NFSU2_TR(0x475a0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a0e:{NFSU2_TR(0x475a0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B475a11:L475a11:{c.instructions+=1;NFSU2_TR(0x475a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a16ull));
TAIL_STATIC(0x734e60u,734);
}
B475a16:L475a16:{c.instructions+=5;NFSU2_TR(0x475a16);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B475a1a:{NFSU2_TR(0x475a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a20:{NFSU2_TR(0x475a20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a21:{NFSU2_TR(0x475a21);
s4(0x7ec844,u32(0x78b478ull));
}
B475a2b:{NFSU2_TR(0x475a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a30ull));
TAIL_STATIC(0x734df0u,734);
}
B475a30:L475a30:{c.instructions+=2;NFSU2_TR(0x475a30);
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
B475a33:{NFSU2_TR(0x475a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a38ull));
TAIL_STATIC(0x734e40u,734);
}
B475a38:L475a38:{c.instructions+=9;NFSU2_TR(0x475a38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475a3c:{NFSU2_TR(0x475a3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B475a40:{NFSU2_TR(0x475a40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a41:{NFSU2_TR(0x475a41);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a45:{NFSU2_TR(0x475a45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a49:{NFSU2_TR(0x475a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a4d:{NFSU2_TR(0x475a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B475a4f:{NFSU2_TR(0x475a4f);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a51:{NFSU2_TR(0x475a51);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a53ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B475a53:L475a53:{c.instructions+=2;NFSU2_TR(0x475a53);
__builtin_memmove((R+28),(R+0),4);
}
B475a55:{NFSU2_TR(0x475a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a5aull));
TAIL_STATIC(0x734e60u,734);
}
B475a5a:L475a5a:{c.instructions+=4;NFSU2_TR(0x475a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a5e:{NFSU2_TR(0x475a5e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B475a60:{NFSU2_TR(0x475a60);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a64:{NFSU2_TR(0x475a64);
if(r1(R+518)){{goto L475ac3;}}
}
B475a66:L475a66:{c.instructions+=3;NFSU2_TR(0x475a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475a6a:{NFSU2_TR(0x475a6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B475a6c:{NFSU2_TR(0x475a6c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L475a72;}}
}
B475a6e:L475a6e:{c.instructions+=2;NFSU2_TR(0x475a6e);
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
B475a70:{NFSU2_TR(0x475a70);
{goto L475a7c;}
}
B475a72:L475a72:{c.instructions+=2;NFSU2_TR(0x475a72);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B475a75:{NFSU2_TR(0x475a75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L475a7c;}}
}
B475a77:L475a77:{c.instructions+=1;NFSU2_TR(0x475a77);
w4(R+0,u32(0x32ull));
}
B475a7c:L475a7c:{c.instructions+=11;NFSU2_TR(0x475a7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a7d:{NFSU2_TR(0x475a7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475a80:{NFSU2_TR(0x475a80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a81:{NFSU2_TR(0x475a81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a82:{NFSU2_TR(0x475a82);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475a87:{NFSU2_TR(0x475a87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B475a8a:{NFSU2_TR(0x475a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a8d:{NFSU2_TR(0x475a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a90:{NFSU2_TR(0x475a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a93:{NFSU2_TR(0x475a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475a96:{NFSU2_TR(0x475a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475a9bull));
TAIL_STATIC(0x7358c0u,735);
}
B475a9b:L475a9b:{c.instructions+=3;NFSU2_TR(0x475a9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B475a9e:{NFSU2_TR(0x475a9e);
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
B475aa0:{NFSU2_TR(0x475aa0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L475ac0;}}
}
B475aa2:L475aa2:{c.instructions+=3;NFSU2_TR(0x475aa2);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475aa7:{NFSU2_TR(0x475aa7);
w4(R+4,u32(0x82c510ull));
}
B475aac:{NFSU2_TR(0x475aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475ab1ull));
TAIL_STATIC(0x735840u,735);
}
B475ab1:L475ab1:{c.instructions+=4;NFSU2_TR(0x475ab1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ab2:{NFSU2_TR(0x475ab2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ab3:{NFSU2_TR(0x475ab3);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ab8:{NFSU2_TR(0x475ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475abdull));
TAIL_STATIC(0x7358c0u,735);
}
B475abd:L475abd:{c.instructions+=1;NFSU2_TR(0x475abd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B475ac0:L475ac0:{c.instructions+=2;NFSU2_TR(0x475ac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475ac1:{NFSU2_TR(0x475ac1);
{goto L475ac5;}
}
B475ac3:L475ac3:{c.instructions+=1;NFSU2_TR(0x475ac3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B475ac5:L475ac5:{c.instructions+=23;NFSU2_TR(0x475ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475ac8:{NFSU2_TR(0x475ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475ace:{NFSU2_TR(0x475ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B475ad1:{NFSU2_TR(0x475ad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475ad5:{NFSU2_TR(0x475ad5);
__builtin_memmove(gp(0x82bc50),(R+8),4);
}
B475adb:{NFSU2_TR(0x475adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475ade:{NFSU2_TR(0x475ade);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475ae1:{NFSU2_TR(0x475ae1);
w4(R+0,u32(0x3f800000ull));
}
B475ae6:{NFSU2_TR(0x475ae6);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475aec:{NFSU2_TR(0x475aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475af2:{NFSU2_TR(0x475af2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475af8:{NFSU2_TR(0x475af8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475afe:{NFSU2_TR(0x475afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B475b08:{NFSU2_TR(0x475b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475b0e:{NFSU2_TR(0x475b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475b14:{NFSU2_TR(0x475b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475b1a:{NFSU2_TR(0x475b1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475b20:{NFSU2_TR(0x475b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475b21:{NFSU2_TR(0x475b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475b22:{NFSU2_TR(0x475b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B475b23:{NFSU2_TR(0x475b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475b2a:{NFSU2_TR(0x475b2a);
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
B475b2d:{NFSU2_TR(0x475b2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475b30:L475b30:{c.instructions+=12;NFSU2_TR(0x475b30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475b31:{NFSU2_TR(0x475b31);
__builtin_memmove((R+20),(R+16),4);
}
B475b33:{NFSU2_TR(0x475b33);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B475b36:{NFSU2_TR(0x475b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B475b39:{NFSU2_TR(0x475b39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475b3a:{NFSU2_TR(0x475b3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475b3b:{NFSU2_TR(0x475b3b);
__builtin_memmove((R+28),(R+4),4);
}
B475b3d:{NFSU2_TR(0x475b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475b40:{NFSU2_TR(0x475b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475b43:{NFSU2_TR(0x475b43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B475b46:{NFSU2_TR(0x475b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475b47:{NFSU2_TR(0x475b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475b4cull));
TAIL_STATIC(0x459a50u,459);
}
B475b4c:L475b4c:{c.instructions+=36;NFSU2_TR(0x475b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475b4f:{NFSU2_TR(0x475b4f);
__builtin_memmove((R+24),(R+0),4);
}
B475b51:{NFSU2_TR(0x475b51);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b54:{NFSU2_TR(0x475b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475b57:{NFSU2_TR(0x475b57);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b5a:{NFSU2_TR(0x475b5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B475b5d:{NFSU2_TR(0x475b5d);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b60:{NFSU2_TR(0x475b60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B475b63:{NFSU2_TR(0x475b63);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475b67:{NFSU2_TR(0x475b67);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b69:{NFSU2_TR(0x475b69);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b6c:{NFSU2_TR(0x475b6c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475b70:{NFSU2_TR(0x475b70);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b73:{NFSU2_TR(0x475b73);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475b77:{NFSU2_TR(0x475b77);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B475b79:{NFSU2_TR(0x475b79);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B475b7b:{NFSU2_TR(0x475b7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475b7f:{NFSU2_TR(0x475b7f);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B475b81:{NFSU2_TR(0x475b81);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B475b85:{NFSU2_TR(0x475b85);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475b89:{NFSU2_TR(0x475b89);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b8d:{NFSU2_TR(0x475b8d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B475b91:{NFSU2_TR(0x475b91);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b95:{NFSU2_TR(0x475b95);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475b99:{NFSU2_TR(0x475b99);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475b9d:{NFSU2_TR(0x475b9d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475ba1:{NFSU2_TR(0x475ba1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475ba3:{NFSU2_TR(0x475ba3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B475ba5:{NFSU2_TR(0x475ba5);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B475ba7:{NFSU2_TR(0x475ba7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475ba9:{NFSU2_TR(0x475ba9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B475bab:{NFSU2_TR(0x475bab);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B475bad:{NFSU2_TR(0x475bad);
{u32 ea_=u32(u32(7899244u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475bb3:{NFSU2_TR(0x475bb3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475bb5:{NFSU2_TR(0x475bb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475bb8:{NFSU2_TR(0x475bb8);
if(r1(R+518)){{goto L475c8f;}}
}
B475bbe:L475bbe:{c.instructions+=6;NFSU2_TR(0x475bbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B475bc2:{NFSU2_TR(0x475bc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475bc3:{NFSU2_TR(0x475bc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B475bc7:{NFSU2_TR(0x475bc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475bc8:{NFSU2_TR(0x475bc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475bd0:{NFSU2_TR(0x475bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475bd5ull));
TAIL_STATIC(0x43cf10u,43c);
}
B475bd5:L475bd5:{c.instructions+=22;NFSU2_TR(0x475bd5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475bd9:{NFSU2_TR(0x475bd9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475bdd:{NFSU2_TR(0x475bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475be1:{NFSU2_TR(0x475be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475be4:{NFSU2_TR(0x475be4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B475be6:{NFSU2_TR(0x475be6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475bea:{NFSU2_TR(0x475bea);
__builtin_memmove((R+8),(R+4),4);
}
B475bec:{NFSU2_TR(0x475bec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475bf0:{NFSU2_TR(0x475bf0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475bf4:{NFSU2_TR(0x475bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475bf7:{NFSU2_TR(0x475bf7);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475bfa:{NFSU2_TR(0x475bfa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B475bfd:{NFSU2_TR(0x475bfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475c01:{NFSU2_TR(0x475c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B475c03:{NFSU2_TR(0x475c03);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475c07:{NFSU2_TR(0x475c07);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B475c0b:{NFSU2_TR(0x475c0b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475c0c:{NFSU2_TR(0x475c0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B475c10:{NFSU2_TR(0x475c10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475c11:{NFSU2_TR(0x475c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475c15:{NFSU2_TR(0x475c15);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475c1d:{NFSU2_TR(0x475c1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475c22ull));
TAIL_STATIC(0x43cf10u,43c);
}
B475c22:L475c22:{c.instructions+=22;NFSU2_TR(0x475c22);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475c26:{NFSU2_TR(0x475c26);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475c2a:{NFSU2_TR(0x475c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475c2e:{NFSU2_TR(0x475c2e);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B475c33:{NFSU2_TR(0x475c33);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B475c35:{NFSU2_TR(0x475c35);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475c39:{NFSU2_TR(0x475c39);
__builtin_memmove((R+8),(R+4),4);
}
B475c3b:{NFSU2_TR(0x475c3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475c3f:{NFSU2_TR(0x475c3f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475c43:{NFSU2_TR(0x475c43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B475c46:{NFSU2_TR(0x475c46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475c48:{NFSU2_TR(0x475c48);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475c4c:{NFSU2_TR(0x475c4c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475c50:{NFSU2_TR(0x475c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475c54:{NFSU2_TR(0x475c54);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475c58:{NFSU2_TR(0x475c58);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475c5c:{NFSU2_TR(0x475c5c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475c5e:{NFSU2_TR(0x475c5e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475c62:{NFSU2_TR(0x475c62);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475c66:{NFSU2_TR(0x475c66);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475c68:{NFSU2_TR(0x475c68);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475c6c:{NFSU2_TR(0x475c6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475c77;}}
}
B475c6e:L475c6e:{c.instructions+=3;NFSU2_TR(0x475c6e);
__builtin_memmove((R+0),gp(0x890108),4);
}
B475c73:{NFSU2_TR(0x475c73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B475c75:{NFSU2_TR(0x475c75);
if(r1(R+518)){{goto L475c97;}}
}
B475c77:L475c77:{c.instructions+=2;NFSU2_TR(0x475c77);
u8 U[4];
w4(U+0,u32(0x4064fcb9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475c7c:{NFSU2_TR(0x475c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475c81ull));
TAIL_STATIC(0x43c350u,43c);
}
B475c81:L475c81:{c.instructions+=5;NFSU2_TR(0x475c81);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475c85:{NFSU2_TR(0x475c85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B475c88:{NFSU2_TR(0x475c88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475c8a:{NFSU2_TR(0x475c8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475c8d:{NFSU2_TR(0x475c8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475caf;}}
}
B475c8f:L475c8f:{c.instructions+=6;NFSU2_TR(0x475c8f);
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
B475c91:{NFSU2_TR(0x475c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475c92:{NFSU2_TR(0x475c92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475c93:{NFSU2_TR(0x475c93);
__builtin_memmove((R+16),(R+20),4);
}
B475c95:{NFSU2_TR(0x475c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475c96:{NFSU2_TR(0x475c96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475c97:L475c97:{c.instructions+=2;NFSU2_TR(0x475c97);
u8 U[4];
w4(U+0,u32(0x4011361eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475c9c:{NFSU2_TR(0x475c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475ca1ull));
TAIL_STATIC(0x43c350u,43c);
}
B475ca1:L475ca1:{c.instructions+=5;NFSU2_TR(0x475ca1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475ca5:{NFSU2_TR(0x475ca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B475ca8:{NFSU2_TR(0x475ca8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475caa:{NFSU2_TR(0x475caa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475cad:{NFSU2_TR(0x475cad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x475c8fu);}goto L475c8f;}}
}
B475caf:L475caf:{c.instructions+=12;NFSU2_TR(0x475caf);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475cb5:{NFSU2_TR(0x475cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475cbb:{NFSU2_TR(0x475cbb);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475cc1:{NFSU2_TR(0x475cc1);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B475cc5:{NFSU2_TR(0x475cc5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B475cc7:{NFSU2_TR(0x475cc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475cc8:{NFSU2_TR(0x475cc8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475ccc:{NFSU2_TR(0x475ccc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B475cd0:{NFSU2_TR(0x475cd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475cd1:{NFSU2_TR(0x475cd1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475cd5:{NFSU2_TR(0x475cd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475cd9:{NFSU2_TR(0x475cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475cdeull));
TAIL_STATIC(0x43cf10u,43c);
}
B475cde:L475cde:{c.instructions+=22;NFSU2_TR(0x475cde);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475ce2:{NFSU2_TR(0x475ce2);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475ce6:{NFSU2_TR(0x475ce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475cea:{NFSU2_TR(0x475cea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B475cec:{NFSU2_TR(0x475cec);
__builtin_memmove((R+4),(R+0),4);
}
B475cee:{NFSU2_TR(0x475cee);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475cf2:{NFSU2_TR(0x475cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475cf6:{NFSU2_TR(0x475cf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475cfa:{NFSU2_TR(0x475cfa);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B475cff:{NFSU2_TR(0x475cff);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475d03:{NFSU2_TR(0x475d03);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475d07:{NFSU2_TR(0x475d07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475d0a:{NFSU2_TR(0x475d0a);
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
B475d0c:{NFSU2_TR(0x475d0c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475d10:{NFSU2_TR(0x475d10);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475d14:{NFSU2_TR(0x475d14);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475d18:{NFSU2_TR(0x475d18);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475d1a:{NFSU2_TR(0x475d1a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475d1e:{NFSU2_TR(0x475d1e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475d22:{NFSU2_TR(0x475d22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B475d24:{NFSU2_TR(0x475d24);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475d28:{NFSU2_TR(0x475d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475d4f;}}
}
B475d2a:L475d2a:{c.instructions+=3;NFSU2_TR(0x475d2a);
__builtin_memmove((R+0),gp(0x890108),4);
}
B475d2f:{NFSU2_TR(0x475d2f);
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
B475d31:{NFSU2_TR(0x475d31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475d4f;}}
}
B475d33:L475d33:{c.instructions+=2;NFSU2_TR(0x475d33);
u8 U[4];
w4(U+0,u32(0x3ff5be0bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475d38:{NFSU2_TR(0x475d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475d3dull));
TAIL_STATIC(0x43c350u,43c);
}
B475d3d:L475d3d:{c.instructions+=5;NFSU2_TR(0x475d3d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475d41:{NFSU2_TR(0x475d41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B475d44:{NFSU2_TR(0x475d44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475d46:{NFSU2_TR(0x475d46);
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
B475d49:{NFSU2_TR(0x475d49);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x475c8fu);}goto L475c8f;}}
}
B475d4f:L475d4f:{c.instructions+=6;NFSU2_TR(0x475d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475d50:{NFSU2_TR(0x475d50);
w1(R+0,u8(0x1ull));
}
B475d52:{NFSU2_TR(0x475d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475d53:{NFSU2_TR(0x475d53);
__builtin_memmove((R+16),(R+20),4);
}
B475d55:{NFSU2_TR(0x475d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475d56:{NFSU2_TR(0x475d56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475d60:L475d60:{c.instructions+=3;NFSU2_TR(0x475d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475d61:{NFSU2_TR(0x475d61);
__builtin_memmove((R+24),(R+4),4);
}
B475d63:{NFSU2_TR(0x475d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475d68ull));
TAIL_STATIC(0x45e350u,45e);
}
B475d68:L475d68:{c.instructions+=13;NFSU2_TR(0x475d68);
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
B475d6a:{NFSU2_TR(0x475d6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475d70:{NFSU2_TR(0x475d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d76:{NFSU2_TR(0x475d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d7c:{NFSU2_TR(0x475d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d82:{NFSU2_TR(0x475d82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d88:{NFSU2_TR(0x475d88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d8e:{NFSU2_TR(0x475d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475d94:{NFSU2_TR(0x475d94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B475d98:{NFSU2_TR(0x475d98);
u8 U[4];
w4(U+0,u32(0x78b490ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475d9e:{NFSU2_TR(0x475d9e);
__builtin_memmove((R+0),(R+24),4);
}
B475da0:{NFSU2_TR(0x475da0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475da1:{NFSU2_TR(0x475da1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475db0:L475db0:{c.instructions+=14;NFSU2_TR(0x475db0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475db2:{NFSU2_TR(0x475db2);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475db7:{NFSU2_TR(0x475db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475dbd:{NFSU2_TR(0x475dbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475dbe:{NFSU2_TR(0x475dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475dc5:{NFSU2_TR(0x475dc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475dc6:{NFSU2_TR(0x475dc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475dc7:{NFSU2_TR(0x475dc7);
__builtin_memmove((R+24),(R+4),4);
}
B475dc9:{NFSU2_TR(0x475dc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475dcd:{NFSU2_TR(0x475dcd);
u8 U[4];
w4(U+0,u32(0x78b490ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475dd3:{NFSU2_TR(0x475dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475dd9:{NFSU2_TR(0x475dd9);
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
B475ddb:{NFSU2_TR(0x475ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475de3:{NFSU2_TR(0x475de3);
if(r1(R+518)){{goto L475deb;}}
}
B475de5:L475de5:{c.instructions+=3;NFSU2_TR(0x475de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B475de7:{NFSU2_TR(0x475de7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475de9:{NFSU2_TR(0x475de9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475debull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B475deb:L475deb:{c.instructions+=7;NFSU2_TR(0x475deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475def:{NFSU2_TR(0x475def);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475df9:{NFSU2_TR(0x475df9);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475dff:{NFSU2_TR(0x475dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475e00:{NFSU2_TR(0x475e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475e07:{NFSU2_TR(0x475e07);
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
B475e0a:{NFSU2_TR(0x475e0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475e10:L475e10:{c.instructions+=9;NFSU2_TR(0x475e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B475e13:{NFSU2_TR(0x475e13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475e14:{NFSU2_TR(0x475e14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475e15:{NFSU2_TR(0x475e15);
__builtin_memmove((R+20),(R+4),4);
}
B475e17:{NFSU2_TR(0x475e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475e1a:{NFSU2_TR(0x475e1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B475e1d:{NFSU2_TR(0x475e1d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B475e1f:{NFSU2_TR(0x475e1f);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B475e21:{NFSU2_TR(0x475e21);
if(r1(R+518)){{goto L475f86;}}
}
B475e27:L475e27:{c.instructions+=2;NFSU2_TR(0x475e27);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B475e2d:{NFSU2_TR(0x475e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475f86;}}
}
B475e33:L475e33:{c.instructions+=3;NFSU2_TR(0x475e33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475e36:{NFSU2_TR(0x475e36);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B475e3c:{NFSU2_TR(0x475e3c);
if(r1(R+518)){{goto L475f86;}}
}
B475e42:L475e42:{c.instructions+=4;NFSU2_TR(0x475e42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B475e45:{NFSU2_TR(0x475e45);
u8 U[4];
w4(U+0,u32(0x40a00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475e4a:{NFSU2_TR(0x475e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475e4b:{NFSU2_TR(0x475e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475e50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4755f0u);}goto L4755f0;}
}
B475e50:L475e50:{c.instructions+=3;NFSU2_TR(0x475e50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475e53:{NFSU2_TR(0x475e53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B475e55:{NFSU2_TR(0x475e55);
if(r1(R+518)){{goto L475f86;}}
}
B475e5b:L475e5b:{c.instructions+=2;NFSU2_TR(0x475e5b);
__builtin_memmove((R+4),(R+20),4);
}
B475e5d:{NFSU2_TR(0x475e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475e62ull));
TAIL_STATIC(0x462670u,462);
}
B475e62:L475e62:{c.instructions+=5;NFSU2_TR(0x475e62);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B475e66:{NFSU2_TR(0x475e66);
{u32 ea_=u32(u32(7899248u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B475e6c:{NFSU2_TR(0x475e6c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475e6e:{NFSU2_TR(0x475e6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B475e71:{NFSU2_TR(0x475e71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L475f86;}}
}
B475e77:L475e77:{c.instructions+=8;NFSU2_TR(0x475e77);
{u32 ea_=u32(r4(R+20)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475e7d:{NFSU2_TR(0x475e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B475e80:{NFSU2_TR(0x475e80);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B475e86:{NFSU2_TR(0x475e86);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475e89:{NFSU2_TR(0x475e89);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B475e8b:{NFSU2_TR(0x475e8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B475e8d:{NFSU2_TR(0x475e8d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B475e90:{NFSU2_TR(0x475e90);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L475f86;}}
}
B475e96:L475e96:{c.instructions+=21;NFSU2_TR(0x475e96);
__builtin_memmove((R+0),gp(0x82cb68),4);
}
B475e9b:{NFSU2_TR(0x475e9b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475e9f:{NFSU2_TR(0x475e9f);
{u32 ea_=u32(u32(7899248u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B475ea5:{NFSU2_TR(0x475ea5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B475ea6:{NFSU2_TR(0x475ea6);
{u32 ea_=u32(u32(7899252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475eac:{NFSU2_TR(0x475eac);
w4(R+4,u32(0x6ull));
}
B475eb1:{NFSU2_TR(0x475eb1);
{u32 ea_=u32(u32(7899248u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B475eb7:{NFSU2_TR(0x475eb7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x475eb7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x475eb7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B475eb9:{NFSU2_TR(0x475eb9);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B475ebb:{NFSU2_TR(0x475ebb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ebc:{NFSU2_TR(0x475ebc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ebd:{NFSU2_TR(0x475ebd);
u8 U[4];
w4(U+0,u32(0x42fe0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ec2:{NFSU2_TR(0x475ec2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ec3:{NFSU2_TR(0x475ec3);
u8 U[4];
w4(U+0,u32(0x3f7d70a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ec8:{NFSU2_TR(0x475ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ec9:{NFSU2_TR(0x475ec9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ece:{NFSU2_TR(0x475ece);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ecf:{NFSU2_TR(0x475ecf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475ed0:{NFSU2_TR(0x475ed0);
__builtin_memmove((R+28),(R+8),4);
}
B475ed2:{NFSU2_TR(0x475ed2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475ed5:{NFSU2_TR(0x475ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475edaull));
TAIL_STATIC(0x401090u,401);
}
B475eda:L475eda:{c.instructions+=3;NFSU2_TR(0x475eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475edd:{NFSU2_TR(0x475edd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475ee0:{NFSU2_TR(0x475ee0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475ee5ull));
TAIL_STATIC(0x401090u,401);
}
B475ee5:L475ee5:{c.instructions+=4;NFSU2_TR(0x475ee5);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475eeb:{NFSU2_TR(0x475eeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475eee:{NFSU2_TR(0x475eee);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475ef1:{NFSU2_TR(0x475ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475ef6ull));
TAIL_STATIC(0x401090u,401);
}
B475ef6:L475ef6:{c.instructions+=3;NFSU2_TR(0x475ef6);
{u32 ea_=u32(u32(7909488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B475efc:{NFSU2_TR(0x475efc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B475eff:{NFSU2_TR(0x475eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f04ull));
TAIL_STATIC(0x75bed4u,75b);
}
B475f04:L475f04:{c.instructions+=12;NFSU2_TR(0x475f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B475f07:{NFSU2_TR(0x475f07);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B475f0c:{NFSU2_TR(0x475f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B475f12:{NFSU2_TR(0x475f12);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B475f14:{NFSU2_TR(0x475f14);
__builtin_memmove((R+24),(R+28),4);
}
B475f16:{NFSU2_TR(0x475f16);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B475f18:{NFSU2_TR(0x475f18);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x9ull))));
}
B475f1b:{NFSU2_TR(0x475f1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f1c:{NFSU2_TR(0x475f1c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B475f1d:{NFSU2_TR(0x475f1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f1f:{NFSU2_TR(0x475f1f);
__builtin_memmove(gp(0x82cb68),(R+28),4);
}
B475f25:{NFSU2_TR(0x475f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f2aull));
TAIL_STATIC(0x46cd60u,46c);
}
B475f2a:L475f2a:{c.instructions+=4;NFSU2_TR(0x475f2a);
u8 U[4];
w4(U+0,u32(0x78b4d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f2f:{NFSU2_TR(0x475f2f);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f31:{NFSU2_TR(0x475f31);
__builtin_memmove((R+28),(R+0),4);
}
B475f33:{NFSU2_TR(0x475f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f38ull));
TAIL_STATIC(0x457aa0u,457);
}
B475f38:L475f38:{c.instructions+=3;NFSU2_TR(0x475f38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B475f3b:{NFSU2_TR(0x475f3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B475f3d:{NFSU2_TR(0x475f3d);
if(r1(R+518)){{goto L475f49;}}
}
B475f3f:L475f3f:{c.instructions+=3;NFSU2_TR(0x475f3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f40:{NFSU2_TR(0x475f40);
__builtin_memmove((R+4),(R+0),4);
}
B475f42:{NFSU2_TR(0x475f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f47ull));
TAIL_STATIC(0x45b1f0u,45b);
}
B475f47:L475f47:{c.instructions+=1;NFSU2_TR(0x475f47);
{goto L475f4b;}
}
B475f49:L475f49:{c.instructions+=1;NFSU2_TR(0x475f49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B475f4b:L475f4b:{c.instructions+=10;NFSU2_TR(0x475f4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B475f4f:{NFSU2_TR(0x475f4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f50:{NFSU2_TR(0x475f50);
__builtin_memmove((R+4),(R+0),4);
}
B475f52:{NFSU2_TR(0x475f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f58:{NFSU2_TR(0x475f58);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f5c:{NFSU2_TR(0x475f5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f60:{NFSU2_TR(0x475f60);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f64:{NFSU2_TR(0x475f64);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f68:{NFSU2_TR(0x475f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475f6c:{NFSU2_TR(0x475f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f71ull));
TAIL_STATIC(0x46cdd0u,46c);
}
B475f71:L475f71:{c.instructions+=6;NFSU2_TR(0x475f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B475f74:{NFSU2_TR(0x475f74);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B475f77:{NFSU2_TR(0x475f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B475f78:{NFSU2_TR(0x475f78);
{u32 ea_=u32(r4(R+20)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B475f7e:{NFSU2_TR(0x475f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B475f85:{NFSU2_TR(0x475f85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475f86:L475f86:{c.instructions+=4;NFSU2_TR(0x475f86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B475f87:{NFSU2_TR(0x475f87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B475f88:{NFSU2_TR(0x475f88);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B475f8b:{NFSU2_TR(0x475f8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B475f90:L475f90:{c.instructions+=3;NFSU2_TR(0x475f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B475f91:{NFSU2_TR(0x475f91);
__builtin_memmove((R+24),(R+4),4);
}
B475f93:{NFSU2_TR(0x475f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x475f98ull));
TAIL_STATIC(0x45e350u,45e);
}
B475f98:L475f98:{c.instructions+=19;NFSU2_TR(0x475f98);
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
B475f9a:{NFSU2_TR(0x475f9a);
w1(R+4,u8(0x1ull));
}
B475f9c:{NFSU2_TR(0x475f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475fa2:{NFSU2_TR(0x475fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fa8:{NFSU2_TR(0x475fa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fae:{NFSU2_TR(0x475fae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fb4:{NFSU2_TR(0x475fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fba:{NFSU2_TR(0x475fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fc0:{NFSU2_TR(0x475fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fc6:{NFSU2_TR(0x475fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fcc:{NFSU2_TR(0x475fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B475fd2:{NFSU2_TR(0x475fd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475fd8:{NFSU2_TR(0x475fd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475fdb:{NFSU2_TR(0x475fdb);
u8 U[4];
w4(U+0,u32(0x78b4e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B475fe1:{NFSU2_TR(0x475fe1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475fe7:{NFSU2_TR(0x475fe7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B475fed:{NFSU2_TR(0x475fed);
__builtin_memmove((R+0),(R+24),4);
}
B475fef:{NFSU2_TR(0x475fef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B475ff0:{NFSU2_TR(0x475ff0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x475,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
