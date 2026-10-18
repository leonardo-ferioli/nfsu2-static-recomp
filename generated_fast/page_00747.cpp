#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_744(u8* __restrict R,Cpu& c);
u32 body_745(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x747,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x747,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_747(u8* __restrict R,Cpu& c);
u32 page_747(Cpu& c){return body_747(c.regs.data(),c);}
__attribute__((noinline)) u32 body_747(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x747000:goto L747000;
case 0x747002:c.instructions+=5;goto B747002;
case 0x747006:c.instructions+=4;goto B747006;
case 0x747007:c.instructions+=3;goto B747007;
case 0x74700c:c.instructions+=2;goto B74700c;
case 0x74700d:c.instructions+=1;goto B74700d;
case 0x747012:goto L747012;
case 0x747015:c.instructions+=2;goto B747015;
case 0x747016:c.instructions+=1;goto B747016;
case 0x74701b:goto L74701b;
case 0x74701f:c.instructions+=5;goto B74701f;
case 0x747022:c.instructions+=4;goto B747022;
case 0x747024:c.instructions+=3;goto B747024;
case 0x747029:c.instructions+=2;goto B747029;
case 0x74702a:c.instructions+=1;goto B74702a;
case 0x74702f:goto L74702f;
case 0x747032:c.instructions+=2;goto B747032;
case 0x747033:c.instructions+=1;goto B747033;
case 0x747038:goto L747038;
case 0x747039:c.instructions+=6;goto B747039;
case 0x74703d:c.instructions+=5;goto B74703d;
case 0x74703e:c.instructions+=4;goto B74703e;
case 0x747040:c.instructions+=3;goto B747040;
case 0x747042:c.instructions+=2;goto B747042;
case 0x747044:c.instructions+=1;goto B747044;
case 0x747049:goto L747049;
case 0x74704c:c.instructions+=3;goto B74704c;
case 0x747050:c.instructions+=2;goto B747050;
case 0x747056:c.instructions+=1;goto B747056;
case 0x747058:goto L747058;
case 0x74705c:c.instructions+=9;goto B74705c;
case 0x747060:c.instructions+=8;goto B747060;
case 0x747068:c.instructions+=7;goto B747068;
case 0x747070:c.instructions+=6;goto B747070;
case 0x747078:c.instructions+=5;goto B747078;
case 0x74707c:c.instructions+=4;goto B74707c;
case 0x747080:c.instructions+=3;goto B747080;
case 0x747086:c.instructions+=2;goto B747086;
case 0x74708b:c.instructions+=1;goto B74708b;
case 0x747090:goto L747090;
case 0x747094:c.instructions+=2;goto B747094;
case 0x747097:c.instructions+=1;goto B747097;
case 0x747099:goto L747099;
case 0x74709c:c.instructions+=5;goto B74709c;
case 0x74709d:c.instructions+=4;goto B74709d;
case 0x7470a1:c.instructions+=3;goto B7470a1;
case 0x7470a2:c.instructions+=2;goto B7470a2;
case 0x7470a3:c.instructions+=1;goto B7470a3;
case 0x7470a5:goto L7470a5;
case 0x7470a8:goto L7470a8;
case 0x7470ab:c.instructions+=2;goto B7470ab;
case 0x7470ac:c.instructions+=1;goto B7470ac;
case 0x7470ae:goto L7470ae;
case 0x7470b2:goto L7470b2;
case 0x7470b4:c.instructions+=3;goto B7470b4;
case 0x7470ba:c.instructions+=2;goto B7470ba;
case 0x7470c0:c.instructions+=1;goto B7470c0;
case 0x7470c2:goto L7470c2;
case 0x7470c6:c.instructions+=8;goto B7470c6;
case 0x7470ca:c.instructions+=7;goto B7470ca;
case 0x7470ce:c.instructions+=6;goto B7470ce;
case 0x7470d6:c.instructions+=5;goto B7470d6;
case 0x7470de:c.instructions+=4;goto B7470de;
case 0x7470e2:c.instructions+=3;goto B7470e2;
case 0x7470e6:c.instructions+=2;goto B7470e6;
case 0x7470ec:c.instructions+=1;goto B7470ec;
case 0x7470f1:goto L7470f1;
case 0x7470f5:c.instructions+=2;goto B7470f5;
case 0x7470f8:c.instructions+=1;goto B7470f8;
case 0x7470fa:goto L7470fa;
case 0x7470fd:c.instructions+=5;goto B7470fd;
case 0x7470fe:c.instructions+=4;goto B7470fe;
case 0x747102:c.instructions+=3;goto B747102;
case 0x747103:c.instructions+=2;goto B747103;
case 0x747104:c.instructions+=1;goto B747104;
case 0x747106:goto L747106;
case 0x747109:goto L747109;
case 0x74710c:c.instructions+=2;goto B74710c;
case 0x74710d:c.instructions+=1;goto B74710d;
case 0x74710f:goto L74710f;
case 0x747111:c.instructions+=6;goto B747111;
case 0x747113:c.instructions+=5;goto B747113;
case 0x747115:c.instructions+=4;goto B747115;
case 0x747117:c.instructions+=3;goto B747117;
case 0x747119:c.instructions+=2;goto B747119;
case 0x74711a:c.instructions+=1;goto B74711a;
case 0x74711f:goto L74711f;
case 0x747123:c.instructions+=8;goto B747123;
case 0x747124:c.instructions+=7;goto B747124;
case 0x747126:c.instructions+=6;goto B747126;
case 0x74712a:c.instructions+=5;goto B74712a;
case 0x74712b:c.instructions+=4;goto B74712b;
case 0x74712f:c.instructions+=3;goto B74712f;
case 0x747130:c.instructions+=2;goto B747130;
case 0x747131:c.instructions+=1;goto B747131;
case 0x747136:goto L747136;
case 0x747138:c.instructions+=3;goto B747138;
case 0x74713b:c.instructions+=2;goto B74713b;
case 0x74713d:c.instructions+=1;goto B74713d;
case 0x747143:goto L747143;
case 0x747147:c.instructions+=1;goto B747147;
case 0x74714c:goto L74714c;
case 0x74714f:c.instructions+=3;goto B74714f;
case 0x747151:c.instructions+=2;goto B747151;
case 0x747153:c.instructions+=1;goto B747153;
case 0x747155:goto L747155;
case 0x747157:c.instructions+=1;goto B747157;
case 0x747159:goto L747159;
case 0x74715f:c.instructions+=6;goto B74715f;
case 0x747162:c.instructions+=5;goto B747162;
case 0x747163:c.instructions+=4;goto B747163;
case 0x747168:c.instructions+=3;goto B747168;
case 0x747169:c.instructions+=2;goto B747169;
case 0x74716a:c.instructions+=1;goto B74716a;
case 0x74716f:goto L74716f;
case 0x747172:c.instructions+=2;goto B747172;
case 0x747178:c.instructions+=1;goto B747178;
case 0x74717b:goto L74717b;
case 0x74717c:c.instructions+=7;goto B74717c;
case 0x747180:c.instructions+=6;goto B747180;
case 0x747184:c.instructions+=5;goto B747184;
case 0x74718c:c.instructions+=4;goto B74718c;
case 0x747190:c.instructions+=3;goto B747190;
case 0x747194:c.instructions+=2;goto B747194;
case 0x747198:c.instructions+=1;goto B747198;
case 0x74719d:goto L74719d;
case 0x7471a0:c.instructions+=6;goto B7471a0;
case 0x7471a1:c.instructions+=5;goto B7471a1;
case 0x7471a2:c.instructions+=4;goto B7471a2;
case 0x7471a3:c.instructions+=3;goto B7471a3;
case 0x7471a4:c.instructions+=2;goto B7471a4;
case 0x7471ab:c.instructions+=1;goto B7471ab;
case 0x7471b0:goto L7471b0;
case 0x7471b6:c.instructions+=1;goto B7471b6;
case 0x7471b7:goto L7471b7;
case 0x7471b9:c.instructions+=2;goto B7471b9;
case 0x7471c0:c.instructions+=1;goto B7471c0;
case 0x7471c5:goto L7471c5;
case 0x7471cb:c.instructions+=7;goto B7471cb;
case 0x7471d1:c.instructions+=6;goto B7471d1;
case 0x7471d3:c.instructions+=5;goto B7471d3;
case 0x7471d4:c.instructions+=4;goto B7471d4;
case 0x7471d5:c.instructions+=3;goto B7471d5;
case 0x7471d6:c.instructions+=2;goto B7471d6;
case 0x7471d7:c.instructions+=1;goto B7471d7;
case 0x7471dc:goto L7471dc;
case 0x7471df:c.instructions+=1;goto B7471df;
case 0x7471e4:goto L7471e4;
case 0x7471e6:c.instructions+=4;goto B7471e6;
case 0x7471e7:c.instructions+=3;goto B7471e7;
case 0x7471e8:c.instructions+=2;goto B7471e8;
case 0x7471e9:c.instructions+=1;goto B7471e9;
case 0x7471ee:goto L7471ee;
case 0x7471f5:c.instructions+=7;goto B7471f5;
case 0x7471f8:c.instructions+=6;goto B7471f8;
case 0x7471f9:c.instructions+=5;goto B7471f9;
case 0x7471fa:c.instructions+=4;goto B7471fa;
case 0x7471fb:c.instructions+=3;goto B7471fb;
case 0x747202:c.instructions+=2;goto B747202;
case 0x747203:c.instructions+=1;goto B747203;
case 0x747208:goto L747208;
case 0x74720e:c.instructions+=1;goto B74720e;
case 0x747210:goto L747210;
case 0x747213:c.instructions+=12;goto B747213;
case 0x747215:c.instructions+=11;goto B747215;
case 0x747217:c.instructions+=10;goto B747217;
case 0x74721a:c.instructions+=9;goto B74721a;
case 0x74721d:c.instructions+=8;goto B74721d;
case 0x747220:c.instructions+=7;goto B747220;
case 0x747223:c.instructions+=6;goto B747223;
case 0x747226:c.instructions+=5;goto B747226;
case 0x747229:c.instructions+=4;goto B747229;
case 0x74722c:c.instructions+=3;goto B74722c;
case 0x74722f:c.instructions+=2;goto B74722f;
case 0x747232:c.instructions+=1;goto B747232;
case 0x747234:goto L747234;
case 0x747237:c.instructions+=3;goto B747237;
case 0x747238:c.instructions+=2;goto B747238;
case 0x74723b:c.instructions+=1;goto B74723b;
case 0x74723d:goto L74723d;
case 0x747243:c.instructions+=5;goto B747243;
case 0x747244:c.instructions+=4;goto B747244;
case 0x747245:c.instructions+=3;goto B747245;
case 0x747247:c.instructions+=2;goto B747247;
case 0x747249:c.instructions+=1;goto B747249;
case 0x74724b:goto L74724b;
case 0x74724d:c.instructions+=1;goto B74724d;
case 0x747250:goto L747250;
case 0x747252:c.instructions+=1;goto B747252;
case 0x747254:goto L747254;
case 0x747257:c.instructions+=2;goto B747257;
case 0x74725a:c.instructions+=1;goto B74725a;
case 0x74725c:goto L74725c;
case 0x74725f:c.instructions+=2;goto B74725f;
case 0x747262:c.instructions+=1;goto B747262;
case 0x747264:goto L747264;
case 0x74726b:c.instructions+=3;goto B74726b;
case 0x74726c:c.instructions+=2;goto B74726c;
case 0x74726e:c.instructions+=1;goto B74726e;
case 0x747270:goto L747270;
case 0x747272:c.instructions+=2;goto B747272;
case 0x747275:c.instructions+=1;goto B747275;
case 0x747277:goto L747277;
case 0x74727a:c.instructions+=1;goto B74727a;
case 0x747280:goto L747280;
case 0x747286:c.instructions+=3;goto B747286;
case 0x747288:c.instructions+=2;goto B747288;
case 0x74728a:c.instructions+=1;goto B74728a;
case 0x747290:goto L747290;
case 0x747292:c.instructions+=1;goto B747292;
case 0x747294:goto L747294;
case 0x747297:c.instructions+=2;goto B747297;
case 0x74729a:c.instructions+=1;goto B74729a;
case 0x74729c:goto L74729c;
case 0x74729f:c.instructions+=2;goto B74729f;
case 0x7472a2:c.instructions+=1;goto B7472a2;
case 0x7472a4:goto L7472a4;
case 0x7472ab:c.instructions+=3;goto B7472ab;
case 0x7472ac:c.instructions+=2;goto B7472ac;
case 0x7472ae:c.instructions+=1;goto B7472ae;
case 0x7472b0:goto L7472b0;
case 0x7472b2:goto L7472b2;
case 0x7472b5:c.instructions+=3;goto B7472b5;
case 0x7472b7:c.instructions+=2;goto B7472b7;
case 0x7472ba:c.instructions+=1;goto B7472ba;
case 0x7472bc:goto L7472bc;
case 0x7472c0:goto L7472c0;
case 0x7472c3:c.instructions+=1;goto B7472c3;
case 0x7472c5:goto L7472c5;
case 0x7472c7:c.instructions+=1;goto B7472c7;
case 0x7472c9:goto L7472c9;
case 0x7472cc:c.instructions+=3;goto B7472cc;
case 0x7472cd:c.instructions+=2;goto B7472cd;
case 0x7472d0:c.instructions+=1;goto B7472d0;
case 0x7472d2:goto L7472d2;
case 0x7472d3:goto L7472d3;
case 0x7472d5:c.instructions+=2;goto B7472d5;
case 0x7472d8:c.instructions+=1;goto B7472d8;
case 0x7472da:goto L7472da;
case 0x7472dd:c.instructions+=1;goto B7472dd;
case 0x7472df:goto L7472df;
case 0x7472e0:c.instructions+=1;goto B7472e0;
case 0x7472e2:goto L7472e2;
case 0x7472e5:c.instructions+=3;goto B7472e5;
case 0x7472e7:c.instructions+=2;goto B7472e7;
case 0x7472e9:c.instructions+=1;goto B7472e9;
case 0x7472eb:goto L7472eb;
case 0x7472f0:goto L7472f0;
case 0x7472f3:c.instructions+=1;goto B7472f3;
case 0x7472f5:goto L7472f5;
case 0x7472f8:c.instructions+=1;goto B7472f8;
case 0x7472fa:goto L7472fa;
case 0x7472fd:c.instructions+=3;goto B7472fd;
case 0x7472fe:c.instructions+=2;goto B7472fe;
case 0x747300:c.instructions+=1;goto B747300;
case 0x747302:goto L747302;
case 0x747304:c.instructions+=4;goto B747304;
case 0x747306:c.instructions+=3;goto B747306;
case 0x747308:c.instructions+=2;goto B747308;
case 0x74730b:c.instructions+=1;goto B74730b;
case 0x74730d:goto L74730d;
case 0x747310:goto L747310;
case 0x747313:c.instructions+=1;goto B747313;
case 0x747315:goto L747315;
case 0x747318:c.instructions+=6;goto B747318;
case 0x74731b:c.instructions+=5;goto B74731b;
case 0x74731c:c.instructions+=4;goto B74731c;
case 0x74731f:c.instructions+=3;goto B74731f;
case 0x747321:c.instructions+=2;goto B747321;
case 0x747324:c.instructions+=1;goto B747324;
case 0x747326:goto L747326;
case 0x747328:c.instructions+=1;goto B747328;
case 0x74732a:goto L74732a;
case 0x74732d:goto L74732d;
case 0x747330:c.instructions+=2;goto B747330;
case 0x747332:c.instructions+=1;goto B747332;
case 0x747338:goto L747338;
case 0x74733a:c.instructions+=2;goto B74733a;
case 0x74733d:c.instructions+=1;goto B74733d;
case 0x747343:goto L747343;
case 0x747346:c.instructions+=1;goto B747346;
case 0x74734c:goto L74734c;
case 0x74734f:c.instructions+=3;goto B74734f;
case 0x747351:c.instructions+=2;goto B747351;
case 0x747353:c.instructions+=1;goto B747353;
case 0x747355:goto L747355;
case 0x747358:c.instructions+=1;goto B747358;
case 0x74735a:goto L74735a;
case 0x74735d:c.instructions+=1;goto B74735d;
case 0x74735f:goto L74735f;
case 0x747361:goto L747361;
case 0x747364:c.instructions+=1;goto B747364;
case 0x747366:goto L747366;
case 0x747369:c.instructions+=6;goto B747369;
case 0x74736c:c.instructions+=5;goto B74736c;
case 0x74736d:c.instructions+=4;goto B74736d;
case 0x747370:c.instructions+=3;goto B747370;
case 0x747372:c.instructions+=2;goto B747372;
case 0x747375:c.instructions+=1;goto B747375;
case 0x747377:goto L747377;
case 0x74737a:c.instructions+=2;goto B74737a;
case 0x74737c:c.instructions+=1;goto B74737c;
case 0x74737e:goto L74737e;
case 0x747380:goto L747380;
case 0x747383:c.instructions+=3;goto B747383;
case 0x747384:c.instructions+=2;goto B747384;
case 0x747386:c.instructions+=1;goto B747386;
case 0x747388:goto L747388;
case 0x74738e:c.instructions+=3;goto B74738e;
case 0x747390:c.instructions+=2;goto B747390;
case 0x747392:c.instructions+=1;goto B747392;
case 0x747394:goto L747394;
case 0x747396:goto L747396;
case 0x747398:c.instructions+=1;goto B747398;
case 0x74739a:goto L74739a;
case 0x74739d:c.instructions+=2;goto B74739d;
case 0x7473a0:c.instructions+=1;goto B7473a0;
case 0x7473a2:goto L7473a2;
case 0x7473a5:c.instructions+=2;goto B7473a5;
case 0x7473a8:c.instructions+=1;goto B7473a8;
case 0x7473aa:goto L7473aa;
case 0x7473b1:c.instructions+=3;goto B7473b1;
case 0x7473b2:c.instructions+=2;goto B7473b2;
case 0x7473b4:c.instructions+=1;goto B7473b4;
case 0x7473b6:goto L7473b6;
case 0x7473b8:goto L7473b8;
case 0x7473bb:c.instructions+=3;goto B7473bb;
case 0x7473bd:c.instructions+=2;goto B7473bd;
case 0x7473bf:c.instructions+=1;goto B7473bf;
case 0x7473c1:goto L7473c1;
case 0x7473c4:c.instructions+=1;goto B7473c4;
case 0x7473c6:goto L7473c6;
case 0x7473c9:c.instructions+=3;goto B7473c9;
case 0x7473ca:c.instructions+=2;goto B7473ca;
case 0x7473cc:c.instructions+=1;goto B7473cc;
case 0x7473ce:goto L7473ce;
case 0x7473d0:c.instructions+=2;goto B7473d0;
case 0x7473d3:c.instructions+=1;goto B7473d3;
case 0x7473d5:goto L7473d5;
case 0x7473d8:c.instructions+=1;goto B7473d8;
case 0x7473da:goto L7473da;
case 0x7473dd:c.instructions+=2;goto B7473dd;
case 0x7473df:c.instructions+=1;goto B7473df;
case 0x7473e1:goto L7473e1;
case 0x7473e3:goto L7473e3;
case 0x7473e6:c.instructions+=1;goto B7473e6;
case 0x7473e8:goto L7473e8;
case 0x7473eb:c.instructions+=6;goto B7473eb;
case 0x7473ee:c.instructions+=5;goto B7473ee;
case 0x7473ef:c.instructions+=4;goto B7473ef;
case 0x7473f2:c.instructions+=3;goto B7473f2;
case 0x7473f4:c.instructions+=2;goto B7473f4;
case 0x7473f7:c.instructions+=1;goto B7473f7;
case 0x7473f9:goto L7473f9;
case 0x7473fc:c.instructions+=2;goto B7473fc;
case 0x7473ff:c.instructions+=1;goto B7473ff;
case 0x747401:goto L747401;
case 0x747402:goto L747402;
case 0x747404:c.instructions+=4;goto B747404;
case 0x747406:c.instructions+=3;goto B747406;
case 0x747408:c.instructions+=2;goto B747408;
case 0x74740b:c.instructions+=1;goto B74740b;
case 0x74740d:goto L74740d;
case 0x747410:goto L747410;
case 0x747413:c.instructions+=1;goto B747413;
case 0x747415:goto L747415;
case 0x747418:c.instructions+=6;goto B747418;
case 0x74741b:c.instructions+=5;goto B74741b;
case 0x74741c:c.instructions+=4;goto B74741c;
case 0x74741f:c.instructions+=3;goto B74741f;
case 0x747421:c.instructions+=2;goto B747421;
case 0x747424:c.instructions+=1;goto B747424;
case 0x747426:goto L747426;
case 0x747429:c.instructions+=2;goto B747429;
case 0x74742c:c.instructions+=1;goto B74742c;
case 0x74742e:goto L74742e;
case 0x74742f:goto L74742f;
case 0x747431:c.instructions+=2;goto B747431;
case 0x747433:c.instructions+=1;goto B747433;
case 0x747435:goto L747435;
case 0x747438:c.instructions+=1;goto B747438;
case 0x74743a:goto L74743a;
case 0x74743d:c.instructions+=1;goto B74743d;
case 0x74743f:goto L74743f;
case 0x747442:c.instructions+=3;goto B747442;
case 0x747443:c.instructions+=2;goto B747443;
case 0x747445:c.instructions+=1;goto B747445;
case 0x747447:goto L747447;
case 0x747449:c.instructions+=2;goto B747449;
case 0x74744c:c.instructions+=1;goto B74744c;
case 0x747452:goto L747452;
case 0x747455:c.instructions+=2;goto B747455;
case 0x747457:c.instructions+=1;goto B747457;
case 0x747459:goto L747459;
case 0x74745c:c.instructions+=1;goto B74745c;
case 0x74745e:goto L74745e;
case 0x747461:c.instructions+=1;goto B747461;
case 0x747463:goto L747463;
case 0x747465:goto L747465;
case 0x747468:c.instructions+=1;goto B747468;
case 0x74746a:goto L74746a;
case 0x74746d:c.instructions+=6;goto B74746d;
case 0x747470:c.instructions+=5;goto B747470;
case 0x747471:c.instructions+=4;goto B747471;
case 0x747474:c.instructions+=3;goto B747474;
case 0x747476:c.instructions+=2;goto B747476;
case 0x747479:c.instructions+=1;goto B747479;
case 0x74747b:goto L74747b;
case 0x747481:c.instructions+=1;goto B747481;
case 0x747483:goto L747483;
case 0x747486:c.instructions+=1;goto B747486;
case 0x747488:goto L747488;
case 0x74748e:c.instructions+=1;goto B74748e;
case 0x747490:goto L747490;
case 0x747496:goto L747496;
case 0x747499:c.instructions+=3;goto B747499;
case 0x74749b:c.instructions+=2;goto B74749b;
case 0x74749d:c.instructions+=1;goto B74749d;
case 0x74749f:goto L74749f;
case 0x7474a0:goto L7474a0;
case 0x7474a3:c.instructions+=1;goto B7474a3;
case 0x7474a5:goto L7474a5;
case 0x7474a8:c.instructions+=1;goto B7474a8;
case 0x7474aa:goto L7474aa;
case 0x7474ad:c.instructions+=3;goto B7474ad;
case 0x7474ae:c.instructions+=2;goto B7474ae;
case 0x7474b0:c.instructions+=1;goto B7474b0;
case 0x7474b2:goto L7474b2;
case 0x7474b4:c.instructions+=3;goto B7474b4;
case 0x7474b6:c.instructions+=2;goto B7474b6;
case 0x7474b9:c.instructions+=1;goto B7474b9;
case 0x7474bf:goto L7474bf;
case 0x7474c2:c.instructions+=1;goto B7474c2;
case 0x7474c4:goto L7474c4;
case 0x7474c7:c.instructions+=6;goto B7474c7;
case 0x7474c9:c.instructions+=5;goto B7474c9;
case 0x7474ca:c.instructions+=4;goto B7474ca;
case 0x7474cc:c.instructions+=3;goto B7474cc;
case 0x7474ce:c.instructions+=2;goto B7474ce;
case 0x7474d1:c.instructions+=1;goto B7474d1;
case 0x7474d3:goto L7474d3;
case 0x7474d6:c.instructions+=1;goto B7474d6;
case 0x7474d8:goto L7474d8;
case 0x7474db:c.instructions+=3;goto B7474db;
case 0x7474de:c.instructions+=2;goto B7474de;
case 0x7474e1:c.instructions+=1;goto B7474e1;
case 0x7474e2:goto L7474e2;
case 0x7474e5:c.instructions+=2;goto B7474e5;
case 0x7474e7:c.instructions+=1;goto B7474e7;
case 0x7474e9:goto L7474e9;
case 0x7474ea:goto L7474ea;
case 0x7474ec:c.instructions+=3;goto B7474ec;
case 0x7474ee:c.instructions+=2;goto B7474ee;
case 0x7474f1:c.instructions+=1;goto B7474f1;
case 0x7474f3:goto L7474f3;
case 0x7474f6:c.instructions+=1;goto B7474f6;
case 0x7474f8:goto L7474f8;
case 0x7474fb:c.instructions+=6;goto B7474fb;
case 0x7474fd:c.instructions+=5;goto B7474fd;
case 0x7474fe:c.instructions+=4;goto B7474fe;
case 0x747500:c.instructions+=3;goto B747500;
case 0x747502:c.instructions+=2;goto B747502;
case 0x747505:c.instructions+=1;goto B747505;
case 0x747507:goto L747507;
case 0x74750a:c.instructions+=1;goto B74750a;
case 0x74750c:goto L74750c;
case 0x74750f:c.instructions+=3;goto B74750f;
case 0x747512:c.instructions+=2;goto B747512;
case 0x747515:c.instructions+=1;goto B747515;
case 0x747516:goto L747516;
case 0x747519:c.instructions+=2;goto B747519;
case 0x74751b:c.instructions+=1;goto B74751b;
case 0x74751d:goto L74751d;
case 0x74751e:goto L74751e;
case 0x747520:c.instructions+=3;goto B747520;
case 0x747522:c.instructions+=2;goto B747522;
case 0x747525:c.instructions+=1;goto B747525;
case 0x747527:goto L747527;
case 0x74752a:c.instructions+=1;goto B74752a;
case 0x74752c:goto L74752c;
case 0x74752f:c.instructions+=6;goto B74752f;
case 0x747531:c.instructions+=5;goto B747531;
case 0x747532:c.instructions+=4;goto B747532;
case 0x747534:c.instructions+=3;goto B747534;
case 0x747536:c.instructions+=2;goto B747536;
case 0x747539:c.instructions+=1;goto B747539;
case 0x74753b:goto L74753b;
case 0x74753e:c.instructions+=1;goto B74753e;
case 0x747540:goto L747540;
case 0x747543:c.instructions+=3;goto B747543;
case 0x747546:c.instructions+=2;goto B747546;
case 0x747549:c.instructions+=1;goto B747549;
case 0x74754a:goto L74754a;
case 0x74754c:goto L74754c;
case 0x74754f:c.instructions+=4;goto B74754f;
case 0x747551:c.instructions+=3;goto B747551;
case 0x747552:c.instructions+=2;goto B747552;
case 0x747553:c.instructions+=1;goto B747553;
case 0x747555:goto L747555;
case 0x747557:c.instructions+=2;goto B747557;
case 0x747559:c.instructions+=1;goto B747559;
case 0x74755b:goto L74755b;
case 0x747560:goto L747560;
case 0x747563:c.instructions+=1;goto B747563;
case 0x747565:goto L747565;
case 0x747568:c.instructions+=1;goto B747568;
case 0x74756a:goto L74756a;
case 0x74756d:c.instructions+=3;goto B74756d;
case 0x74756e:c.instructions+=2;goto B74756e;
case 0x747570:c.instructions+=1;goto B747570;
case 0x747572:goto L747572;
case 0x747574:c.instructions+=4;goto B747574;
case 0x747576:c.instructions+=3;goto B747576;
case 0x747578:c.instructions+=2;goto B747578;
case 0x74757b:c.instructions+=1;goto B74757b;
case 0x74757d:goto L74757d;
case 0x747580:goto L747580;
case 0x747583:c.instructions+=1;goto B747583;
case 0x747585:goto L747585;
case 0x747588:c.instructions+=6;goto B747588;
case 0x74758b:c.instructions+=5;goto B74758b;
case 0x74758c:c.instructions+=4;goto B74758c;
case 0x74758f:c.instructions+=3;goto B74758f;
case 0x747591:c.instructions+=2;goto B747591;
case 0x747594:c.instructions+=1;goto B747594;
case 0x747596:goto L747596;
case 0x74759c:c.instructions+=1;goto B74759c;
case 0x74759e:goto L74759e;
case 0x7475a1:goto L7475a1;
case 0x7475a4:c.instructions+=2;goto B7475a4;
case 0x7475a9:c.instructions+=1;goto B7475a9;
case 0x7475ab:goto L7475ab;
case 0x7475b0:c.instructions+=1;goto B7475b0;
case 0x7475b3:goto L7475b3;
case 0x7475b5:c.instructions+=1;goto B7475b5;
case 0x7475c0:goto L7475c0;
case 0x7475c3:c.instructions+=3;goto B7475c3;
case 0x7475c4:c.instructions+=2;goto B7475c4;
case 0x7475c5:c.instructions+=1;goto B7475c5;
case 0x7475c7:goto L7475c7;
case 0x7475c9:c.instructions+=2;goto B7475c9;
case 0x7475cb:c.instructions+=1;goto B7475cb;
case 0x7475d0:goto L7475d0;
case 0x7475d2:goto L7475d2;
case 0x7475d4:c.instructions+=2;goto B7475d4;
case 0x7475d6:c.instructions+=1;goto B7475d6;
case 0x7475d8:goto L7475d8;
case 0x7475db:c.instructions+=2;goto B7475db;
case 0x7475dd:c.instructions+=1;goto B7475dd;
case 0x7475df:goto L7475df;
case 0x7475e2:c.instructions+=2;goto B7475e2;
case 0x7475e4:c.instructions+=1;goto B7475e4;
case 0x7475e6:goto L7475e6;
case 0x7475e7:c.instructions+=1;goto B7475e7;
case 0x7475e9:goto L7475e9;
case 0x7475ec:c.instructions+=4;goto B7475ec;
case 0x7475ed:c.instructions+=3;goto B7475ed;
case 0x7475ee:c.instructions+=2;goto B7475ee;
case 0x7475f0:c.instructions+=1;goto B7475f0;
case 0x7475f2:goto L7475f2;
case 0x7475f4:goto L7475f4;
case 0x7475f5:c.instructions+=2;goto B7475f5;
case 0x7475f6:c.instructions+=1;goto B7475f6;
case 0x747600:goto L747600;
case 0x747602:c.instructions+=2;goto B747602;
case 0x747604:c.instructions+=1;goto B747604;
case 0x747606:goto L747606;
case 0x747608:c.instructions+=2;goto B747608;
case 0x747609:c.instructions+=1;goto B747609;
case 0x74760e:goto L74760e;
case 0x747610:c.instructions+=2;goto B747610;
case 0x747611:c.instructions+=1;goto B747611;
case 0x747616:goto L747616;
case 0x747619:goto L747619;
case 0x74761f:c.instructions+=2;goto B74761f;
case 0x747621:c.instructions+=1;goto B747621;
case 0x747630:goto L747630;
case 0x747631:c.instructions+=4;goto B747631;
case 0x747635:c.instructions+=3;goto B747635;
case 0x747637:c.instructions+=2;goto B747637;
case 0x747639:c.instructions+=1;goto B747639;
case 0x74763b:goto L74763b;
case 0x74763d:c.instructions+=2;goto B74763d;
case 0x74763e:c.instructions+=1;goto B74763e;
case 0x747643:goto L747643;
case 0x747645:c.instructions+=2;goto B747645;
case 0x747646:c.instructions+=1;goto B747646;
case 0x74764b:goto L74764b;
case 0x74764e:goto L74764e;
case 0x747654:c.instructions+=3;goto B747654;
case 0x747655:c.instructions+=2;goto B747655;
case 0x74765b:c.instructions+=1;goto B74765b;
case 0x747660:goto L747660;
case 0x747661:c.instructions+=1;goto B747661;
case 0x747666:goto L747666;
case 0x747669:c.instructions+=2;goto B747669;
case 0x74766a:c.instructions+=1;goto B74766a;
case 0x747670:goto L747670;
case 0x747676:c.instructions+=12;goto B747676;
case 0x74767b:c.instructions+=11;goto B74767b;
case 0x74767c:c.instructions+=10;goto B74767c;
case 0x74767d:c.instructions+=9;goto B74767d;
case 0x74767e:c.instructions+=8;goto B74767e;
case 0x747685:c.instructions+=7;goto B747685;
case 0x74768c:c.instructions+=6;goto B74768c;
case 0x747692:c.instructions+=5;goto B747692;
case 0x747694:c.instructions+=4;goto B747694;
case 0x747697:c.instructions+=3;goto B747697;
case 0x747698:c.instructions+=2;goto B747698;
case 0x74769d:c.instructions+=1;goto B74769d;
case 0x74769f:goto L74769f;
case 0x7476a2:c.instructions+=2;goto B7476a2;
case 0x7476a4:c.instructions+=1;goto B7476a4;
case 0x7476a6:goto L7476a6;
case 0x7476a7:c.instructions+=1;goto B7476a7;
case 0x7476aa:goto L7476aa;
case 0x7476ad:c.instructions+=4;goto B7476ad;
case 0x7476af:c.instructions+=3;goto B7476af;
case 0x7476b2:c.instructions+=2;goto B7476b2;
case 0x7476b3:c.instructions+=1;goto B7476b3;
case 0x7476b5:goto L7476b5;
case 0x7476b8:goto L7476b8;
case 0x7476be:c.instructions+=1;goto B7476be;
case 0x7476c0:goto L7476c0;
case 0x7476c3:goto L7476c3;
case 0x7476c6:c.instructions+=2;goto B7476c6;
case 0x7476c8:c.instructions+=1;goto B7476c8;
case 0x7476ca:goto L7476ca;
case 0x7476cd:c.instructions+=4;goto B7476cd;
case 0x7476d0:c.instructions+=3;goto B7476d0;
case 0x7476d1:c.instructions+=2;goto B7476d1;
case 0x7476d7:c.instructions+=1;goto B7476d7;
case 0x7476da:goto L7476da;
case 0x7476dd:c.instructions+=1;goto B7476dd;
case 0x7476e0:goto L7476e0;
case 0x7476e7:c.instructions+=2;goto B7476e7;
case 0x7476ec:c.instructions+=1;goto B7476ec;
case 0x7476f2:goto L7476f2;
case 0x7476f8:c.instructions+=1;goto B7476f8;
case 0x7476fe:goto L7476fe;
case 0x747700:c.instructions+=2;goto B747700;
case 0x747702:c.instructions+=1;goto B747702;
case 0x747704:goto L747704;
case 0x747705:c.instructions+=2;goto B747705;
case 0x747706:c.instructions+=1;goto B747706;
case 0x74770b:goto L74770b;
case 0x74770d:c.instructions+=2;goto B74770d;
case 0x74770e:c.instructions+=1;goto B74770e;
case 0x747713:goto L747713;
case 0x747716:goto L747716;
case 0x74771c:c.instructions+=5;goto B74771c;
case 0x74771e:c.instructions+=4;goto B74771e;
case 0x747721:c.instructions+=3;goto B747721;
case 0x747723:c.instructions+=2;goto B747723;
case 0x747729:c.instructions+=1;goto B747729;
case 0x74772b:goto L74772b;
case 0x747731:c.instructions+=6;goto B747731;
case 0x747732:c.instructions+=5;goto B747732;
case 0x747733:c.instructions+=4;goto B747733;
case 0x747734:c.instructions+=3;goto B747734;
case 0x747735:c.instructions+=2;goto B747735;
case 0x74773c:c.instructions+=1;goto B74773c;
case 0x747741:goto L747741;
case 0x747747:c.instructions+=1;goto B747747;
case 0x747748:goto L747748;
case 0x747749:c.instructions+=3;goto B747749;
case 0x74774b:c.instructions+=2;goto B74774b;
case 0x74774c:c.instructions+=1;goto B74774c;
case 0x747751:goto L747751;
case 0x747754:c.instructions+=3;goto B747754;
case 0x747756:c.instructions+=2;goto B747756;
case 0x747758:c.instructions+=1;goto B747758;
case 0x74775a:goto L74775a;
case 0x747760:c.instructions+=22;goto B747760;
case 0x747766:c.instructions+=21;goto B747766;
case 0x74776a:c.instructions+=20;goto B74776a;
case 0x74776e:c.instructions+=19;goto B74776e;
case 0x747771:c.instructions+=18;goto B747771;
case 0x747775:c.instructions+=17;goto B747775;
case 0x747778:c.instructions+=16;goto B747778;
case 0x74777b:c.instructions+=15;goto B74777b;
case 0x747780:c.instructions+=14;goto B747780;
case 0x747784:c.instructions+=13;goto B747784;
case 0x747787:c.instructions+=12;goto B747787;
case 0x74778b:c.instructions+=11;goto B74778b;
case 0x74778d:c.instructions+=10;goto B74778d;
case 0x747791:c.instructions+=9;goto B747791;
case 0x747795:c.instructions+=8;goto B747795;
case 0x74779b:c.instructions+=7;goto B74779b;
case 0x74779c:c.instructions+=6;goto B74779c;
case 0x74779d:c.instructions+=5;goto B74779d;
case 0x7477a2:c.instructions+=4;goto B7477a2;
case 0x7477a6:c.instructions+=3;goto B7477a6;
case 0x7477aa:c.instructions+=2;goto B7477aa;
case 0x7477ae:c.instructions+=1;goto B7477ae;
case 0x7477b3:goto L7477b3;
case 0x7477b6:c.instructions+=3;goto B7477b6;
case 0x7477bc:c.instructions+=2;goto B7477bc;
case 0x7477c2:c.instructions+=1;goto B7477c2;
case 0x7477c7:goto L7477c7;
case 0x7477cc:c.instructions+=1;goto B7477cc;
case 0x7477d2:goto L7477d2;
case 0x7477d8:c.instructions+=2;goto B7477d8;
case 0x7477dd:c.instructions+=1;goto B7477dd;
case 0x7477df:goto L7477df;
case 0x7477e1:c.instructions+=5;goto B7477e1;
case 0x7477e2:c.instructions+=4;goto B7477e2;
case 0x7477e3:c.instructions+=3;goto B7477e3;
case 0x7477e8:c.instructions+=2;goto B7477e8;
case 0x7477e9:c.instructions+=1;goto B7477e9;
case 0x7477ee:goto L7477ee;
case 0x7477f1:c.instructions+=2;goto B7477f1;
case 0x7477f3:c.instructions+=1;goto B7477f3;
case 0x7477f5:goto L7477f5;
case 0x7477fb:c.instructions+=1;goto B7477fb;
case 0x7477fd:goto L7477fd;
case 0x747802:goto L747802;
case 0x747808:c.instructions+=1;goto B747808;
case 0x74780a:goto L74780a;
case 0x747814:goto L747814;
case 0x74781a:c.instructions+=2;goto B74781a;
case 0x74781f:c.instructions+=1;goto B74781f;
case 0x747821:goto L747821;
case 0x747827:c.instructions+=3;goto B747827;
case 0x747829:c.instructions+=2;goto B747829;
case 0x74782c:c.instructions+=1;goto B74782c;
case 0x747830:goto L747830;
case 0x747832:c.instructions+=3;goto B747832;
case 0x747833:c.instructions+=2;goto B747833;
case 0x747835:c.instructions+=1;goto B747835;
case 0x747837:goto L747837;
case 0x747839:c.instructions+=8;goto B747839;
case 0x74783a:c.instructions+=7;goto B74783a;
case 0x74783b:c.instructions+=6;goto B74783b;
case 0x74783c:c.instructions+=5;goto B74783c;
case 0x74783e:c.instructions+=4;goto B74783e;
case 0x74783f:c.instructions+=3;goto B74783f;
case 0x747840:c.instructions+=2;goto B747840;
case 0x747841:c.instructions+=1;goto B747841;
case 0x747846:goto L747846;
case 0x747849:c.instructions+=1;goto B747849;
case 0x74784f:goto L74784f;
case 0x747855:c.instructions+=2;goto B747855;
case 0x74785a:c.instructions+=1;goto B74785a;
case 0x74785c:goto L74785c;
case 0x74785e:c.instructions+=9;goto B74785e;
case 0x74785f:c.instructions+=8;goto B74785f;
case 0x747860:c.instructions+=7;goto B747860;
case 0x747861:c.instructions+=6;goto B747861;
case 0x747866:c.instructions+=5;goto B747866;
case 0x747867:c.instructions+=4;goto B747867;
case 0x74786b:c.instructions+=3;goto B74786b;
case 0x74786c:c.instructions+=2;goto B74786c;
case 0x74786d:c.instructions+=1;goto B74786d;
case 0x747872:goto L747872;
case 0x747875:c.instructions+=2;goto B747875;
case 0x747877:c.instructions+=1;goto B747877;
case 0x747879:goto L747879;
case 0x74787f:c.instructions+=4;goto B74787f;
case 0x747883:c.instructions+=3;goto B747883;
case 0x747885:c.instructions+=2;goto B747885;
case 0x74788b:c.instructions+=1;goto B74788b;
case 0x747891:goto L747891;
case 0x747893:goto L747893;
case 0x747894:c.instructions+=6;goto B747894;
case 0x74789a:c.instructions+=5;goto B74789a;
case 0x74789b:c.instructions+=4;goto B74789b;
case 0x74789c:c.instructions+=3;goto B74789c;
case 0x74789d:c.instructions+=2;goto B74789d;
case 0x7478a4:c.instructions+=1;goto B7478a4;
case 0x7478a9:goto L7478a9;
case 0x7478af:c.instructions+=1;goto B7478af;
case 0x7478b0:goto L7478b0;
case 0x7478b6:c.instructions+=1;goto B7478b6;
case 0x7478bc:goto L7478bc;
case 0x7478c2:c.instructions+=12;goto B7478c2;
case 0x7478c8:c.instructions+=11;goto B7478c8;
case 0x7478c9:c.instructions+=10;goto B7478c9;
case 0x7478ca:c.instructions+=9;goto B7478ca;
case 0x7478cc:c.instructions+=8;goto B7478cc;
case 0x7478cd:c.instructions+=7;goto B7478cd;
case 0x7478ce:c.instructions+=6;goto B7478ce;
case 0x7478d4:c.instructions+=5;goto B7478d4;
case 0x7478d6:c.instructions+=4;goto B7478d6;
case 0x7478d8:c.instructions+=3;goto B7478d8;
case 0x7478d9:c.instructions+=2;goto B7478d9;
case 0x7478da:c.instructions+=1;goto B7478da;
case 0x7478df:goto L7478df;
case 0x7478e2:c.instructions+=2;goto B7478e2;
case 0x7478e4:c.instructions+=1;goto B7478e4;
case 0x7478e6:goto L7478e6;
case 0x7478e8:c.instructions+=3;goto B7478e8;
case 0x7478ea:c.instructions+=2;goto B7478ea;
case 0x7478f4:c.instructions+=1;goto B7478f4;
case 0x7478f6:goto L7478f6;
case 0x7478f8:c.instructions+=2;goto B7478f8;
case 0x7478f9:c.instructions+=1;goto B7478f9;
case 0x7478fe:goto L7478fe;
case 0x747900:c.instructions+=2;goto B747900;
case 0x747901:c.instructions+=1;goto B747901;
case 0x747906:goto L747906;
case 0x747909:goto L747909;
case 0x74790a:c.instructions+=6;goto B74790a;
case 0x74790c:c.instructions+=5;goto B74790c;
case 0x74790d:c.instructions+=4;goto B74790d;
case 0x74790e:c.instructions+=3;goto B74790e;
case 0x74790f:c.instructions+=2;goto B74790f;
case 0x747916:c.instructions+=1;goto B747916;
case 0x74791b:goto L74791b;
case 0x747921:c.instructions+=1;goto B747921;
case 0x747922:goto L747922;
case 0x747928:c.instructions+=4;goto B747928;
case 0x74792a:c.instructions+=3;goto B74792a;
case 0x747930:c.instructions+=2;goto B747930;
case 0x747936:c.instructions+=1;goto B747936;
case 0x74793c:goto L74793c;
case 0x74793f:c.instructions+=1;goto B74793f;
case 0x747945:goto L747945;
case 0x74794b:c.instructions+=4;goto B74794b;
case 0x74794d:c.instructions+=3;goto B74794d;
case 0x747951:c.instructions+=2;goto B747951;
case 0x747953:c.instructions+=1;goto B747953;
case 0x747959:goto L747959;
case 0x747960:goto L747960;
case 0x747963:c.instructions+=1;goto B747963;
case 0x747965:goto L747965;
case 0x747967:c.instructions+=2;goto B747967;
case 0x74796a:c.instructions+=1;goto B74796a;
case 0x74796c:goto L74796c;
case 0x747970:c.instructions+=1;goto B747970;
case 0x747972:goto L747972;
case 0x747975:c.instructions+=1;goto B747975;
case 0x747977:goto L747977;
case 0x747978:c.instructions+=2;goto B747978;
case 0x74797a:c.instructions+=1;goto B74797a;
case 0x74797c:goto L74797c;
case 0x74797d:c.instructions+=5;goto B74797d;
case 0x74797e:c.instructions+=4;goto B74797e;
case 0x74797f:c.instructions+=3;goto B74797f;
case 0x747980:c.instructions+=2;goto B747980;
case 0x747987:c.instructions+=1;goto B747987;
case 0x74798c:goto L74798c;
case 0x747992:c.instructions+=1;goto B747992;
case 0x747993:goto L747993;
case 0x747995:c.instructions+=1;goto B747995;
case 0x74799b:goto L74799b;
case 0x74799d:c.instructions+=7;goto B74799d;
case 0x74799f:c.instructions+=6;goto B74799f;
case 0x7479a2:c.instructions+=5;goto B7479a2;
case 0x7479a8:c.instructions+=4;goto B7479a8;
case 0x7479ac:c.instructions+=3;goto B7479ac;
case 0x7479b0:c.instructions+=2;goto B7479b0;
case 0x7479b7:c.instructions+=1;goto B7479b7;
case 0x7479b9:goto L7479b9;
case 0x7479bf:c.instructions+=4;goto B7479bf;
case 0x7479c5:c.instructions+=3;goto B7479c5;
case 0x7479c7:c.instructions+=2;goto B7479c7;
case 0x7479cd:c.instructions+=1;goto B7479cd;
case 0x7479d3:goto L7479d3;
case 0x7479d9:c.instructions+=4;goto B7479d9;
case 0x7479db:c.instructions+=3;goto B7479db;
case 0x7479dd:c.instructions+=2;goto B7479dd;
case 0x7479e0:c.instructions+=1;goto B7479e0;
case 0x7479e6:goto L7479e6;
case 0x7479e9:c.instructions+=3;goto B7479e9;
case 0x7479eb:c.instructions+=2;goto B7479eb;
case 0x7479ed:c.instructions+=1;goto B7479ed;
case 0x7479f3:goto L7479f3;
case 0x7479f6:c.instructions+=1;goto B7479f6;
case 0x7479fc:goto L7479fc;
case 0x747a00:c.instructions+=1;goto B747a00;
case 0x747a06:goto L747a06;
case 0x747a09:c.instructions+=1;goto B747a09;
case 0x747a0b:goto L747a0b;
case 0x747a0e:c.instructions+=3;goto B747a0e;
case 0x747a0f:c.instructions+=2;goto B747a0f;
case 0x747a11:c.instructions+=1;goto B747a11;
case 0x747a13:goto L747a13;
case 0x747a15:goto L747a15;
case 0x747a17:c.instructions+=2;goto B747a17;
case 0x747a19:c.instructions+=1;goto B747a19;
case 0x747a1b:goto L747a1b;
case 0x747a20:goto L747a20;
case 0x747a23:c.instructions+=1;goto B747a23;
case 0x747a25:goto L747a25;
case 0x747a28:c.instructions+=3;goto B747a28;
case 0x747a29:c.instructions+=2;goto B747a29;
case 0x747a2b:c.instructions+=1;goto B747a2b;
case 0x747a2d:goto L747a2d;
case 0x747a37:c.instructions+=3;goto B747a37;
case 0x747a39:c.instructions+=2;goto B747a39;
case 0x747a3c:c.instructions+=1;goto B747a3c;
case 0x747a3e:goto L747a3e;
case 0x747a40:goto L747a40;
case 0x747a43:c.instructions+=1;goto B747a43;
case 0x747a45:goto L747a45;
case 0x747a47:c.instructions+=10;goto B747a47;
case 0x747a49:c.instructions+=9;goto B747a49;
case 0x747a4f:c.instructions+=8;goto B747a4f;
case 0x747a52:c.instructions+=7;goto B747a52;
case 0x747a55:c.instructions+=6;goto B747a55;
case 0x747a58:c.instructions+=5;goto B747a58;
case 0x747a59:c.instructions+=4;goto B747a59;
case 0x747a5f:c.instructions+=3;goto B747a5f;
case 0x747a61:c.instructions+=2;goto B747a61;
case 0x747a64:c.instructions+=1;goto B747a64;
case 0x747a66:goto L747a66;
case 0x747a6b:c.instructions+=3;goto B747a6b;
case 0x747a6d:c.instructions+=2;goto B747a6d;
case 0x747a77:c.instructions+=1;goto B747a77;
case 0x747a7c:goto L747a7c;
case 0x747a7e:c.instructions+=2;goto B747a7e;
case 0x747a80:c.instructions+=1;goto B747a80;
case 0x747a82:goto L747a82;
case 0x747a85:c.instructions+=3;goto B747a85;
case 0x747a86:c.instructions+=2;goto B747a86;
case 0x747a89:c.instructions+=1;goto B747a89;
case 0x747a8b:goto L747a8b;
case 0x747a90:goto L747a90;
case 0x747a93:c.instructions+=1;goto B747a93;
case 0x747a95:goto L747a95;
case 0x747a98:c.instructions+=1;goto B747a98;
case 0x747a9a:goto L747a9a;
case 0x747a9d:c.instructions+=3;goto B747a9d;
case 0x747a9e:c.instructions+=2;goto B747a9e;
case 0x747aa1:c.instructions+=1;goto B747aa1;
case 0x747aa3:goto L747aa3;
case 0x747aa9:c.instructions+=3;goto B747aa9;
case 0x747aab:c.instructions+=2;goto B747aab;
case 0x747aae:c.instructions+=1;goto B747aae;
case 0x747ab0:goto L747ab0;
case 0x747ab3:c.instructions+=1;goto B747ab3;
case 0x747ab5:goto L747ab5;
case 0x747ab7:c.instructions+=10;goto B747ab7;
case 0x747ab9:c.instructions+=9;goto B747ab9;
case 0x747abf:c.instructions+=8;goto B747abf;
case 0x747ac2:c.instructions+=7;goto B747ac2;
case 0x747ac5:c.instructions+=6;goto B747ac5;
case 0x747ac8:c.instructions+=5;goto B747ac8;
case 0x747ac9:c.instructions+=4;goto B747ac9;
case 0x747acf:c.instructions+=3;goto B747acf;
case 0x747ad1:c.instructions+=2;goto B747ad1;
case 0x747ad4:c.instructions+=1;goto B747ad4;
case 0x747ad6:goto L747ad6;
case 0x747adb:c.instructions+=3;goto B747adb;
case 0x747add:c.instructions+=2;goto B747add;
case 0x747ae3:c.instructions+=1;goto B747ae3;
case 0x747ae8:goto L747ae8;
case 0x747aea:c.instructions+=1;goto B747aea;
case 0x747aec:goto L747aec;
case 0x747aef:c.instructions+=2;goto B747aef;
case 0x747af3:c.instructions+=1;goto B747af3;
case 0x747af8:goto L747af8;
case 0x747afa:c.instructions+=2;goto B747afa;
case 0x747afb:c.instructions+=1;goto B747afb;
case 0x747b00:goto L747b00;
case 0x747b03:c.instructions+=1;goto B747b03;
case 0x747b09:goto L747b09;
case 0x747b0f:c.instructions+=3;goto B747b0f;
case 0x747b14:c.instructions+=2;goto B747b14;
case 0x747b16:c.instructions+=1;goto B747b16;
case 0x747b1b:goto L747b1b;
case 0x747b21:c.instructions+=10;goto B747b21;
case 0x747b23:c.instructions+=9;goto B747b23;
case 0x747b25:c.instructions+=8;goto B747b25;
case 0x747b27:c.instructions+=7;goto B747b27;
case 0x747b2d:c.instructions+=6;goto B747b2d;
case 0x747b32:c.instructions+=5;goto B747b32;
case 0x747b38:c.instructions+=4;goto B747b38;
case 0x747b3e:c.instructions+=3;goto B747b3e;
case 0x747b43:c.instructions+=2;goto B747b43;
case 0x747b4a:c.instructions+=1;goto B747b4a;
case 0x747b4c:goto L747b4c;
case 0x747b52:c.instructions+=2;goto B747b52;
case 0x747b54:c.instructions+=1;goto B747b54;
case 0x747b56:goto L747b56;
case 0x747b5c:c.instructions+=1;goto B747b5c;
case 0x747b5e:goto L747b5e;
case 0x747b68:c.instructions+=1;goto B747b68;
case 0x747b6a:goto L747b6a;
case 0x747b6f:goto L747b6f;
case 0x747b70:c.instructions+=6;goto B747b70;
case 0x747b7a:c.instructions+=5;goto B747b7a;
case 0x747b7b:c.instructions+=4;goto B747b7b;
case 0x747b7c:c.instructions+=3;goto B747b7c;
case 0x747b7d:c.instructions+=2;goto B747b7d;
case 0x747b84:c.instructions+=1;goto B747b84;
case 0x747b89:goto L747b89;
case 0x747b8f:c.instructions+=1;goto B747b8f;
case 0x747b90:goto L747b90;
case 0x747b9a:goto L747b9a;
case 0x747ba0:c.instructions+=3;goto B747ba0;
case 0x747ba5:c.instructions+=2;goto B747ba5;
case 0x747ba7:c.instructions+=1;goto B747ba7;
case 0x747bad:goto L747bad;
case 0x747baf:c.instructions+=1;goto B747baf;
case 0x747bb0:goto L747bb0;
case 0x747bb6:c.instructions+=2;goto B747bb6;
case 0x747bb8:c.instructions+=1;goto B747bb8;
case 0x747bba:goto L747bba;
case 0x747bc0:c.instructions+=1;goto B747bc0;
case 0x747bc2:goto L747bc2;
case 0x747bc8:c.instructions+=1;goto B747bc8;
case 0x747bce:goto L747bce;
case 0x747bd4:c.instructions+=4;goto B747bd4;
case 0x747bda:c.instructions+=3;goto B747bda;
case 0x747bdc:c.instructions+=2;goto B747bdc;
case 0x747bde:c.instructions+=1;goto B747bde;
case 0x747be4:goto L747be4;
case 0x747bea:c.instructions+=9;goto B747bea;
case 0x747beb:c.instructions+=8;goto B747beb;
case 0x747bec:c.instructions+=7;goto B747bec;
case 0x747bed:c.instructions+=6;goto B747bed;
case 0x747bee:c.instructions+=5;goto B747bee;
case 0x747bf0:c.instructions+=4;goto B747bf0;
case 0x747bf2:c.instructions+=3;goto B747bf2;
case 0x747bf3:c.instructions+=2;goto B747bf3;
case 0x747bf4:c.instructions+=1;goto B747bf4;
case 0x747bf9:goto L747bf9;
case 0x747bfc:c.instructions+=2;goto B747bfc;
case 0x747bfe:c.instructions+=1;goto B747bfe;
case 0x747c04:goto L747c04;
case 0x747c07:c.instructions+=1;goto B747c07;
case 0x747c0d:goto L747c0d;
case 0x747c0f:c.instructions+=1;goto B747c0f;
case 0x747c15:goto L747c15;
case 0x747c1b:c.instructions+=9;goto B747c1b;
case 0x747c21:c.instructions+=8;goto B747c21;
case 0x747c23:c.instructions+=7;goto B747c23;
case 0x747c25:c.instructions+=6;goto B747c25;
case 0x747c2b:c.instructions+=5;goto B747c2b;
case 0x747c2d:c.instructions+=4;goto B747c2d;
case 0x747c33:c.instructions+=3;goto B747c33;
case 0x747c39:c.instructions+=2;goto B747c39;
case 0x747c3b:c.instructions+=1;goto B747c3b;
case 0x747c3d:goto L747c3d;
case 0x747c3f:c.instructions+=1;goto B747c3f;
case 0x747c45:goto L747c45;
case 0x747c4b:c.instructions+=1;goto B747c4b;
case 0x747c51:goto L747c51;
case 0x747c52:c.instructions+=5;goto B747c52;
case 0x747c53:c.instructions+=4;goto B747c53;
case 0x747c54:c.instructions+=3;goto B747c54;
case 0x747c55:c.instructions+=2;goto B747c55;
case 0x747c5c:c.instructions+=1;goto B747c5c;
case 0x747c61:goto L747c61;
case 0x747c67:c.instructions+=1;goto B747c67;
case 0x747c68:goto L747c68;
case 0x747c6f:c.instructions+=1;goto B747c6f;
case 0x747c71:goto L747c71;
case 0x747c73:c.instructions+=8;goto B747c73;
case 0x747c74:c.instructions+=7;goto B747c74;
case 0x747c75:c.instructions+=6;goto B747c75;
case 0x747c76:c.instructions+=5;goto B747c76;
case 0x747c7b:c.instructions+=4;goto B747c7b;
case 0x747c7f:c.instructions+=3;goto B747c7f;
case 0x747c80:c.instructions+=2;goto B747c80;
case 0x747c81:c.instructions+=1;goto B747c81;
case 0x747c86:goto L747c86;
case 0x747c89:c.instructions+=2;goto B747c89;
case 0x747c8b:c.instructions+=1;goto B747c8b;
case 0x747c8d:goto L747c8d;
case 0x747c8e:c.instructions+=5;goto B747c8e;
case 0x747c8f:c.instructions+=4;goto B747c8f;
case 0x747c90:c.instructions+=3;goto B747c90;
case 0x747c91:c.instructions+=2;goto B747c91;
case 0x747c98:c.instructions+=1;goto B747c98;
case 0x747c9d:goto L747c9d;
case 0x747ca3:c.instructions+=1;goto B747ca3;
case 0x747ca4:goto L747ca4;
case 0x747caa:c.instructions+=2;goto B747caa;
case 0x747cad:c.instructions+=1;goto B747cad;
case 0x747caf:goto L747caf;
case 0x747cb5:c.instructions+=1;goto B747cb5;
case 0x747cb7:goto L747cb7;
case 0x747cbd:c.instructions+=4;goto B747cbd;
case 0x747cc3:c.instructions+=3;goto B747cc3;
case 0x747cc5:c.instructions+=2;goto B747cc5;
case 0x747cc7:c.instructions+=1;goto B747cc7;
case 0x747cc9:goto L747cc9;
case 0x747ccb:c.instructions+=2;goto B747ccb;
case 0x747ccc:c.instructions+=1;goto B747ccc;
case 0x747cd1:goto L747cd1;
case 0x747cd3:c.instructions+=2;goto B747cd3;
case 0x747cd4:c.instructions+=1;goto B747cd4;
case 0x747cd9:goto L747cd9;
case 0x747cdc:goto L747cdc;
case 0x747cde:goto L747cde;
case 0x747ce8:goto L747ce8;
case 0x747ce9:c.instructions+=5;goto B747ce9;
case 0x747cea:c.instructions+=4;goto B747cea;
case 0x747ceb:c.instructions+=3;goto B747ceb;
case 0x747cec:c.instructions+=2;goto B747cec;
case 0x747cf3:c.instructions+=1;goto B747cf3;
case 0x747cf8:goto L747cf8;
case 0x747cfe:c.instructions+=1;goto B747cfe;
case 0x747cff:goto L747cff;
case 0x747d09:c.instructions+=1;goto B747d09;
case 0x747d0e:goto L747d0e;
case 0x747d15:c.instructions+=5;goto B747d15;
case 0x747d16:c.instructions+=4;goto B747d16;
case 0x747d17:c.instructions+=3;goto B747d17;
case 0x747d18:c.instructions+=2;goto B747d18;
case 0x747d19:c.instructions+=1;goto B747d19;
case 0x747d1e:goto L747d1e;
case 0x747d24:c.instructions+=1;goto B747d24;
case 0x747d30:goto L747d30;
case 0x747d34:c.instructions+=2;goto B747d34;
case 0x747d3a:c.instructions+=1;goto B747d3a;
case 0x747d3c:goto L747d3c;
case 0x747d40:c.instructions+=3;goto B747d40;
case 0x747d46:c.instructions+=2;goto B747d46;
case 0x747d49:c.instructions+=1;goto B747d49;
case 0x747d4b:goto L747d4b;
case 0x747d4d:c.instructions+=4;goto B747d4d;
case 0x747d50:c.instructions+=3;goto B747d50;
case 0x747d53:c.instructions+=2;goto B747d53;
case 0x747d55:c.instructions+=1;goto B747d55;
case 0x747d56:goto L747d56;
case 0x747d5c:c.instructions+=1;goto B747d5c;
case 0x747d5e:goto L747d5e;
case 0x747d62:c.instructions+=3;goto B747d62;
case 0x747d68:c.instructions+=2;goto B747d68;
case 0x747d6b:c.instructions+=1;goto B747d6b;
case 0x747d6d:goto L747d6d;
case 0x747d70:c.instructions+=1;goto B747d70;
case 0x747d72:goto L747d72;
case 0x747d75:c.instructions+=1;goto B747d75;
case 0x747d77:goto L747d77;
case 0x747d7c:c.instructions+=1;goto B747d7c;
case 0x747d7d:goto L747d7d;
case 0x747d83:c.instructions+=1;goto B747d83;
case 0x747d85:goto L747d85;
case 0x747d89:c.instructions+=2;goto B747d89;
case 0x747d8f:c.instructions+=1;goto B747d8f;
case 0x747d90:goto L747d90;
case 0x747d94:c.instructions+=3;goto B747d94;
case 0x747d9a:c.instructions+=2;goto B747d9a;
case 0x747d9d:c.instructions+=1;goto B747d9d;
case 0x747d9f:goto L747d9f;
case 0x747da2:c.instructions+=1;goto B747da2;
case 0x747da3:goto L747da3;
case 0x747da6:c.instructions+=1;goto B747da6;
case 0x747da8:goto L747da8;
case 0x747dab:c.instructions+=1;goto B747dab;
case 0x747dad:goto L747dad;
case 0x747db2:c.instructions+=1;goto B747db2;
case 0x747db3:goto L747db3;
case 0x747db9:c.instructions+=1;goto B747db9;
case 0x747dbb:goto L747dbb;
case 0x747dc1:c.instructions+=1;goto B747dc1;
case 0x747dc2:goto L747dc2;
case 0x747dc8:c.instructions+=1;goto B747dc8;
case 0x747dca:goto L747dca;
case 0x747dd0:c.instructions+=1;goto B747dd0;
case 0x747dd1:goto L747dd1;
case 0x747dd7:c.instructions+=1;goto B747dd7;
case 0x747dd9:goto L747dd9;
case 0x747ddf:c.instructions+=1;goto B747ddf;
case 0x747de0:goto L747de0;
case 0x747de6:c.instructions+=1;goto B747de6;
case 0x747de8:goto L747de8;
case 0x747dee:c.instructions+=1;goto B747dee;
case 0x747def:goto L747def;
case 0x747df1:c.instructions+=1;goto B747df1;
case 0x747e00:goto L747e00;
case 0x747e01:c.instructions+=4;goto B747e01;
case 0x747e05:c.instructions+=3;goto B747e05;
case 0x747e0b:c.instructions+=2;goto B747e0b;
case 0x747e0e:c.instructions+=1;goto B747e0e;
case 0x747e10:goto L747e10;
case 0x747e15:c.instructions+=2;goto B747e15;
case 0x747e16:c.instructions+=1;goto B747e16;
case 0x747e17:goto L747e17;
case 0x747e1a:c.instructions+=1;goto B747e1a;
case 0x747e1c:goto L747e1c;
case 0x747e1f:c.instructions+=1;goto B747e1f;
case 0x747e21:goto L747e21;
case 0x747e26:c.instructions+=2;goto B747e26;
case 0x747e27:c.instructions+=1;goto B747e27;
case 0x747e28:goto L747e28;
case 0x747e2f:c.instructions+=1;goto B747e2f;
case 0x747e31:goto L747e31;
case 0x747e36:c.instructions+=2;goto B747e36;
case 0x747e37:c.instructions+=1;goto B747e37;
case 0x747e38:goto L747e38;
case 0x747e3c:c.instructions+=2;goto B747e3c;
case 0x747e3f:c.instructions+=1;goto B747e3f;
case 0x747e41:goto L747e41;
case 0x747e43:c.instructions+=2;goto B747e43;
case 0x747e44:c.instructions+=1;goto B747e44;
case 0x747e45:goto L747e45;
case 0x747e46:c.instructions+=3;goto B747e46;
case 0x747e4a:c.instructions+=2;goto B747e4a;
case 0x747e4d:c.instructions+=1;goto B747e4d;
case 0x747e4f:goto L747e4f;
case 0x747e54:goto L747e54;
case 0x747e56:c.instructions+=1;goto B747e56;
case 0x747e58:goto L747e58;
case 0x747e5c:c.instructions+=1;goto B747e5c;
case 0x747e5e:goto L747e5e;
case 0x747e64:c.instructions+=2;goto B747e64;
case 0x747e66:c.instructions+=1;goto B747e66;
case 0x747e68:goto L747e68;
case 0x747e6a:goto L747e6a;
case 0x747e6c:c.instructions+=1;goto B747e6c;
case 0x747e6e:goto L747e6e;
case 0x747e72:c.instructions+=1;goto B747e72;
case 0x747e74:goto L747e74;
case 0x747e7a:c.instructions+=5;goto B747e7a;
case 0x747e7c:c.instructions+=4;goto B747e7c;
case 0x747e7e:c.instructions+=3;goto B747e7e;
case 0x747e7f:c.instructions+=2;goto B747e7f;
case 0x747e80:c.instructions+=1;goto B747e80;
case 0x747e82:goto L747e82;
case 0x747e88:c.instructions+=5;goto B747e88;
case 0x747e8e:c.instructions+=4;goto B747e8e;
case 0x747e90:c.instructions+=3;goto B747e90;
case 0x747e92:c.instructions+=2;goto B747e92;
case 0x747e95:c.instructions+=1;goto B747e95;
case 0x747e98:goto L747e98;
case 0x747e9a:goto L747e9a;
case 0x747e9c:c.instructions+=1;goto B747e9c;
case 0x747e9f:goto L747e9f;
case 0x747ea1:goto L747ea1;
case 0x747ea7:c.instructions+=6;goto B747ea7;
case 0x747ead:c.instructions+=5;goto B747ead;
case 0x747eaf:c.instructions+=4;goto B747eaf;
case 0x747eb0:c.instructions+=3;goto B747eb0;
case 0x747eb6:c.instructions+=2;goto B747eb6;
case 0x747ec0:c.instructions+=1;goto B747ec0;
case 0x747ec5:goto L747ec5;
case 0x747ec9:c.instructions+=1;goto B747ec9;
case 0x747ecc:goto L747ecc;
case 0x747ed2:c.instructions+=4;goto B747ed2;
case 0x747ed8:c.instructions+=3;goto B747ed8;
case 0x747eda:c.instructions+=2;goto B747eda;
case 0x747edc:c.instructions+=1;goto B747edc;
case 0x747ede:goto L747ede;
case 0x747ee0:goto L747ee0;
case 0x747ee2:c.instructions+=1;goto B747ee2;
case 0x747ee4:goto L747ee4;
case 0x747eeb:c.instructions+=1;goto B747eeb;
case 0x747eed:goto L747eed;
case 0x747eee:c.instructions+=5;goto B747eee;
case 0x747eef:c.instructions+=4;goto B747eef;
case 0x747ef0:c.instructions+=3;goto B747ef0;
case 0x747ef3:c.instructions+=2;goto B747ef3;
case 0x747ef4:c.instructions+=1;goto B747ef4;
case 0x747ef5:goto L747ef5;
case 0x747ef7:c.instructions+=1;goto B747ef7;
case 0x747ef9:goto L747ef9;
case 0x747eff:c.instructions+=2;goto B747eff;
case 0x747f05:c.instructions+=1;goto B747f05;
case 0x747f07:goto L747f07;
case 0x747f08:c.instructions+=5;goto B747f08;
case 0x747f09:c.instructions+=4;goto B747f09;
case 0x747f0a:c.instructions+=3;goto B747f0a;
case 0x747f0c:c.instructions+=2;goto B747f0c;
case 0x747f0d:c.instructions+=1;goto B747f0d;
case 0x747f0e:goto L747f0e;
case 0x747f12:c.instructions+=2;goto B747f12;
case 0x747f14:c.instructions+=1;goto B747f14;
case 0x747f16:goto L747f16;
case 0x747f1c:c.instructions+=4;goto B747f1c;
case 0x747f1e:c.instructions+=3;goto B747f1e;
case 0x747f20:c.instructions+=2;goto B747f20;
case 0x747f22:c.instructions+=1;goto B747f22;
case 0x747f25:goto L747f25;
case 0x747f27:goto L747f27;
case 0x747f29:c.instructions+=1;goto B747f29;
case 0x747f2c:goto L747f2c;
case 0x747f2e:goto L747f2e;
case 0x747f34:c.instructions+=7;goto B747f34;
case 0x747f35:c.instructions+=6;goto B747f35;
case 0x747f36:c.instructions+=5;goto B747f36;
case 0x747f38:c.instructions+=4;goto B747f38;
case 0x747f39:c.instructions+=3;goto B747f39;
case 0x747f3f:c.instructions+=2;goto B747f3f;
case 0x747f40:c.instructions+=1;goto B747f40;
case 0x747f50:goto L747f50;
case 0x747f53:c.instructions+=8;goto B747f53;
case 0x747f54:c.instructions+=7;goto B747f54;
case 0x747f55:c.instructions+=6;goto B747f55;
case 0x747f56:c.instructions+=5;goto B747f56;
case 0x747f58:c.instructions+=4;goto B747f58;
case 0x747f5a:c.instructions+=3;goto B747f5a;
case 0x747f5b:c.instructions+=2;goto B747f5b;
case 0x747f5d:c.instructions+=1;goto B747f5d;
case 0x747f60:goto L747f60;
case 0x747f62:c.instructions+=4;goto B747f62;
case 0x747f68:c.instructions+=3;goto B747f68;
case 0x747f6b:c.instructions+=2;goto B747f6b;
case 0x747f6d:c.instructions+=1;goto B747f6d;
case 0x747f6f:goto L747f6f;
case 0x747f70:c.instructions+=5;goto B747f70;
case 0x747f71:c.instructions+=4;goto B747f71;
case 0x747f76:c.instructions+=3;goto B747f76;
case 0x747f77:c.instructions+=2;goto B747f77;
case 0x747f7a:c.instructions+=1;goto B747f7a;
case 0x747f7b:goto L747f7b;
case 0x747f81:c.instructions+=1;goto B747f81;
case 0x747f83:goto L747f83;
case 0x747f84:c.instructions+=5;goto B747f84;
case 0x747f85:c.instructions+=4;goto B747f85;
case 0x747f88:c.instructions+=3;goto B747f88;
case 0x747f89:c.instructions+=2;goto B747f89;
case 0x747f8c:c.instructions+=1;goto B747f8c;
case 0x747f8d:goto L747f8d;
case 0x747f91:c.instructions+=1;goto B747f91;
case 0x747f93:goto L747f93;
case 0x747f96:c.instructions+=4;goto B747f96;
case 0x747f98:c.instructions+=3;goto B747f98;
case 0x747f9a:c.instructions+=2;goto B747f9a;
case 0x747f9f:c.instructions+=1;goto B747f9f;
case 0x747fa1:goto L747fa1;
case 0x747fa2:c.instructions+=1;goto B747fa2;
case 0x747fa7:goto L747fa7;
case 0x747faa:c.instructions+=5;goto B747faa;
case 0x747fac:c.instructions+=4;goto B747fac;
case 0x747faf:c.instructions+=3;goto B747faf;
case 0x747fb1:c.instructions+=2;goto B747fb1;
case 0x747fb2:c.instructions+=1;goto B747fb2;
case 0x747fb7:goto L747fb7;
case 0x747fba:c.instructions+=8;goto B747fba;
case 0x747fbe:c.instructions+=7;goto B747fbe;
case 0x747fc1:c.instructions+=6;goto B747fc1;
case 0x747fc5:c.instructions+=5;goto B747fc5;
case 0x747fc6:c.instructions+=4;goto B747fc6;
case 0x747fc8:c.instructions+=3;goto B747fc8;
case 0x747fca:c.instructions+=2;goto B747fca;
case 0x747fcb:c.instructions+=1;goto B747fcb;
case 0x747fd0:goto L747fd0;
case 0x747fd4:c.instructions+=13;goto B747fd4;
case 0x747fd9:c.instructions+=12;goto B747fd9;
case 0x747fdd:c.instructions+=11;goto B747fdd;
case 0x747fe1:c.instructions+=10;goto B747fe1;
case 0x747fe5:c.instructions+=9;goto B747fe5;
case 0x747fe7:c.instructions+=8;goto B747fe7;
case 0x747fea:c.instructions+=7;goto B747fea;
case 0x747fed:c.instructions+=6;goto B747fed;
case 0x747ff0:c.instructions+=5;goto B747ff0;
case 0x747ff5:c.instructions+=4;goto B747ff5;
case 0x747ff8:c.instructions+=3;goto B747ff8;
case 0x747ffa:c.instructions+=2;goto B747ffa;
case 0x747ffd:c.instructions+=1;goto B747ffd;
default:missing_instruction(c.pc);}
B747000:L747000:{c.instructions+=6;NFSU2_TR(0x747000);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747002:{NFSU2_TR(0x747002);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B747006:{NFSU2_TR(0x747006);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747007:{NFSU2_TR(0x747007);
u8 U[4];
w4(U+0,u32(0x79ac28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74700c:{NFSU2_TR(0x74700c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74700d:{NFSU2_TR(0x74700d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747012ull));
TAIL_STATIC(0x7414a0u,741);
}
B747012:L747012:{c.instructions+=3;NFSU2_TR(0x747012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B747015:{NFSU2_TR(0x747015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747016:{NFSU2_TR(0x747016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74701bull));
TAIL_STATIC(0x742360u,742);
}
B74701b:L74701b:{c.instructions+=6;NFSU2_TR(0x74701b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74701f:{NFSU2_TR(0x74701f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B747022:{NFSU2_TR(0x747022);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747024:{NFSU2_TR(0x747024);
u8 U[4];
w4(U+0,u32(0x7d29c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747029:{NFSU2_TR(0x747029);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74702a:{NFSU2_TR(0x74702a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74702full));
TAIL_STATIC(0x7414a0u,741);
}
B74702f:L74702f:{c.instructions+=3;NFSU2_TR(0x74702f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B747032:{NFSU2_TR(0x747032);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747033:{NFSU2_TR(0x747033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747038ull));
TAIL_STATIC(0x742100u,742);
}
B747038:L747038:{c.instructions+=7;NFSU2_TR(0x747038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747039:{NFSU2_TR(0x747039);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74703d:{NFSU2_TR(0x74703d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74703e:{NFSU2_TR(0x74703e);
__builtin_memmove((R+0),(R+28),4);
}
B747040:{NFSU2_TR(0x747040);
__builtin_memmove((R+4),(R+24),4);
}
B747042:{NFSU2_TR(0x747042);
__builtin_memmove((R+8),(R+12),4);
}
B747044:{NFSU2_TR(0x747044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747049ull));
TAIL_STATIC(0x744090u,744);
}
B747049:L747049:{c.instructions+=4;NFSU2_TR(0x747049);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74704c:{NFSU2_TR(0x74704c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747050:{NFSU2_TR(0x747050);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2b627564ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747056:{NFSU2_TR(0x747056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7470b2;}}
}
B747058:L747058:{c.instructions+=10;NFSU2_TR(0x747058);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74705c:{NFSU2_TR(0x74705c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747060:{NFSU2_TR(0x747060);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747068:{NFSU2_TR(0x747068);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747070:{NFSU2_TR(0x747070);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x62756464ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747078:{NFSU2_TR(0x747078);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74707c:{NFSU2_TR(0x74707c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747080:{NFSU2_TR(0x747080);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x149cull))));
__builtin_memmove((R+24),(U+0),4);
}
B747086:{NFSU2_TR(0x747086);
w4(R+28,u32(0x20ull));
}
B74708b:{NFSU2_TR(0x74708b);
{goto L747090;}
}
B747090:L747090:{c.instructions+=3;NFSU2_TR(0x747090);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747094:{NFSU2_TR(0x747094);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B747097:{NFSU2_TR(0x747097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7470a8;}}
}
B747099:L747099:{c.instructions+=6;NFSU2_TR(0x747099);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74709c:{NFSU2_TR(0x74709c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74709d:{NFSU2_TR(0x74709d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B7470a1:{NFSU2_TR(0x7470a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7470a2:{NFSU2_TR(0x7470a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7470a3:{NFSU2_TR(0x7470a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7470a5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B7470a5:L7470a5:{c.instructions+=1;NFSU2_TR(0x7470a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7470a8:L7470a8:{c.instructions+=3;NFSU2_TR(0x7470a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B7470ab:{NFSU2_TR(0x7470ab);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B7470ac:{NFSU2_TR(0x7470ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747090u);}goto L747090;}}
}
B7470ae:L7470ae:{c.instructions+=1;NFSU2_TR(0x7470ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7470b2:L7470b2:{c.instructions+=4;NFSU2_TR(0x7470b2);
__builtin_memmove((R+8),(R+4),4);
}
B7470b4:{NFSU2_TR(0x7470b4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
}
B7470ba:{NFSU2_TR(0x7470ba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x24000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7470c0:{NFSU2_TR(0x7470c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74710f;}}
}
B7470c2:L7470c2:{c.instructions+=9;NFSU2_TR(0x7470c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7470c6:{NFSU2_TR(0x7470c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7470ca:{NFSU2_TR(0x7470ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7470ce:{NFSU2_TR(0x7470ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7470d6:{NFSU2_TR(0x7470d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7470de:{NFSU2_TR(0x7470de);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7470e2:{NFSU2_TR(0x7470e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7470e6:{NFSU2_TR(0x7470e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x149cull))));
__builtin_memmove((R+24),(U+0),4);
}
B7470ec:{NFSU2_TR(0x7470ec);
w4(R+28,u32(0x20ull));
}
B7470f1:L7470f1:{c.instructions+=3;NFSU2_TR(0x7470f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7470f5:{NFSU2_TR(0x7470f5);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7470f8:{NFSU2_TR(0x7470f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747109;}}
}
B7470fa:L7470fa:{c.instructions+=6;NFSU2_TR(0x7470fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7470fd:{NFSU2_TR(0x7470fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7470fe:{NFSU2_TR(0x7470fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B747102:{NFSU2_TR(0x747102);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747103:{NFSU2_TR(0x747103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747104:{NFSU2_TR(0x747104);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747106ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B747106:L747106:{c.instructions+=1;NFSU2_TR(0x747106);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747109:L747109:{c.instructions+=3;NFSU2_TR(0x747109);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B74710c:{NFSU2_TR(0x74710c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B74710d:{NFSU2_TR(0x74710d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7470f1u);}goto L7470f1;}}
}
B74710f:L74710f:{c.instructions+=7;NFSU2_TR(0x74710f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B747111:{NFSU2_TR(0x747111);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747113:{NFSU2_TR(0x747113);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747115:{NFSU2_TR(0x747115);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747117:{NFSU2_TR(0x747117);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747119:{NFSU2_TR(0x747119);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74711a:{NFSU2_TR(0x74711a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74711full));
TAIL_STATIC(0x754bd0u,754);
}
B74711f:L74711f:{c.instructions+=9;NFSU2_TR(0x74711f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B747123:{NFSU2_TR(0x747123);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747124:{NFSU2_TR(0x747124);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747126:{NFSU2_TR(0x747126);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74712a:{NFSU2_TR(0x74712a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74712b:{NFSU2_TR(0x74712b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74712f:{NFSU2_TR(0x74712f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747130:{NFSU2_TR(0x747130);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747131:{NFSU2_TR(0x747131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747136ull));
TAIL_STATIC(0x754b10u,754);
}
B747136:L747136:{c.instructions+=4;NFSU2_TR(0x747136);
__builtin_memmove((R+20),(R+0),4);
}
B747138:{NFSU2_TR(0x747138);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74713b:{NFSU2_TR(0x74713b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74713d:{NFSU2_TR(0x74713d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x745710u,745);}
}
B747143:L747143:{c.instructions+=2;NFSU2_TR(0x747143);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B747147:{NFSU2_TR(0x747147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74714cull));
TAIL_STATIC(0x743dd0u,743);
}
B74714c:L74714c:{c.instructions+=4;NFSU2_TR(0x74714c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74714f:{NFSU2_TR(0x74714f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B747151:{NFSU2_TR(0x747151);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747153:{NFSU2_TR(0x747153);
if(r1(R+518)){{goto L74717b;}}
}
B747155:L747155:{c.instructions+=2;NFSU2_TR(0x747155);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B747157:{NFSU2_TR(0x747157);
if(r1(R+512)){{goto L74717b;}}
}
B747159:L747159:{c.instructions+=7;NFSU2_TR(0x747159);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74715f:{NFSU2_TR(0x74715f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747162:{NFSU2_TR(0x747162);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747163:{NFSU2_TR(0x747163);
u8 U[4];
w4(U+0,u32(0x744030ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747168:{NFSU2_TR(0x747168);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747169:{NFSU2_TR(0x747169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74716a:{NFSU2_TR(0x74716a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74716full));
TAIL_STATIC(0x74b2d0u,74b);
}
B74716f:L74716f:{c.instructions+=3;NFSU2_TR(0x74716f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B747172:{NFSU2_TR(0x747172);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7530ull))));
}
B747178:{NFSU2_TR(0x747178);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74717b:L74717b:{c.instructions+=8;NFSU2_TR(0x74717b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74717c:{NFSU2_TR(0x74717c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B747180:{NFSU2_TR(0x747180);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747184:{NFSU2_TR(0x747184);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74718c:{NFSU2_TR(0x74718c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747190:{NFSU2_TR(0x747190);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747194:{NFSU2_TR(0x747194);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747198:{NFSU2_TR(0x747198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74719dull));
TAIL_STATIC(0x743d90u,743);
}
B74719d:L74719d:{c.instructions+=7;NFSU2_TR(0x74719d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7471a0:{NFSU2_TR(0x7471a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7471a1:{NFSU2_TR(0x7471a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7471a2:{NFSU2_TR(0x7471a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7471a3:{NFSU2_TR(0x7471a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7471a4:{NFSU2_TR(0x7471a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7471ab:{NFSU2_TR(0x7471ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7471b0ull));
TAIL_STATIC(0x76115eu,761);
}
B7471b0:L7471b0:{c.instructions+=2;NFSU2_TR(0x7471b0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3b0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3b0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3b0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7471b6:{NFSU2_TR(0x7471b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7471b7:L7471b7:{c.instructions+=3;NFSU2_TR(0x7471b7);
__builtin_memmove((R+0),(R+12),4);
}
B7471b9:{NFSU2_TR(0x7471b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x636f6e6eull));
s4(u32(r4(U+0)),r4(U+4));
}
B7471c0:{NFSU2_TR(0x7471c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7471c5ull));
TAIL_STATIC(0x744070u,744);
}
B7471c5:L7471c5:{c.instructions+=8;NFSU2_TR(0x7471c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7471cb:{NFSU2_TR(0x7471cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7471d1:{NFSU2_TR(0x7471d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7471d3:{NFSU2_TR(0x7471d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471d4:{NFSU2_TR(0x7471d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471d5:{NFSU2_TR(0x7471d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471d6:{NFSU2_TR(0x7471d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471d7:{NFSU2_TR(0x7471d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7471dcull));
TAIL_STATIC(0x754c50u,754);
}
B7471dc:L7471dc:{c.instructions+=2;NFSU2_TR(0x7471dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7471df:{NFSU2_TR(0x7471df);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747143u);}goto L747143;}
}
B7471e4:L7471e4:{c.instructions+=5;NFSU2_TR(0x7471e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7471e6:{NFSU2_TR(0x7471e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471e7:{NFSU2_TR(0x7471e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471e8:{NFSU2_TR(0x7471e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7471e9:{NFSU2_TR(0x7471e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7471eeull));
TAIL_STATIC(0x754430u,754);
}
B7471ee:L7471ee:{c.instructions+=8;NFSU2_TR(0x7471ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x3c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7471f5:{NFSU2_TR(0x7471f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B7471f8:{NFSU2_TR(0x7471f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7471f9:{NFSU2_TR(0x7471f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7471fa:{NFSU2_TR(0x7471fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7471fb:{NFSU2_TR(0x7471fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w4(U+4,u32(0x696e6974ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747202:{NFSU2_TR(0x747202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747203:{NFSU2_TR(0x747203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747208ull));
TAIL_STATIC(0x76115eu,761);
}
B747208:L747208:{c.instructions+=2;NFSU2_TR(0x747208);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3b0ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3b0ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3b0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74720e:{NFSU2_TR(0x74720e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747210:L747210:{c.instructions+=13;NFSU2_TR(0x747210);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B747213:{NFSU2_TR(0x747213);
__builtin_memmove((R+8),(R+28),4);
}
B747215:{NFSU2_TR(0x747215);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B747217:{NFSU2_TR(0x747217);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74721a:{NFSU2_TR(0x74721a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74721d:{NFSU2_TR(0x74721d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747220:{NFSU2_TR(0x747220);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747223:{NFSU2_TR(0x747223);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747226:{NFSU2_TR(0x747226);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747229:{NFSU2_TR(0x747229);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74722c:{NFSU2_TR(0x74722c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74722f:{NFSU2_TR(0x74722f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B747232:{NFSU2_TR(0x747232);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74723d;}}
}
B747234:L747234:{c.instructions+=4;NFSU2_TR(0x747234);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747237:{NFSU2_TR(0x747237);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747238:{NFSU2_TR(0x747238);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74723b:{NFSU2_TR(0x74723b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747234u);}goto L747234;}}
}
B74723d:L74723d:{c.instructions+=6;NFSU2_TR(0x74723d);
__builtin_memmove((R+4),gp(0x819b68),4);
}
B747243:{NFSU2_TR(0x747243);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747244:{NFSU2_TR(0x747244);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747245:{NFSU2_TR(0x747245);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B747247:{NFSU2_TR(0x747247);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747249:{NFSU2_TR(0x747249);
if(r1(R+518)){{goto L747270;}}
}
B74724b:L74724b:{c.instructions+=2;NFSU2_TR(0x74724b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B74724d:{NFSU2_TR(0x74724d);
__builtin_memmove((R+4),(R+4),4);
}
B747250:L747250:{c.instructions+=2;NFSU2_TR(0x747250);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B747252:{NFSU2_TR(0x747252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747264;}}
}
B747254:L747254:{c.instructions+=3;NFSU2_TR(0x747254);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B747257:{NFSU2_TR(0x747257);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74725a:{NFSU2_TR(0x74725a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747264;}}
}
B74725c:L74725c:{c.instructions+=3;NFSU2_TR(0x74725c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74725f:{NFSU2_TR(0x74725f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747262:{NFSU2_TR(0x747262);
if(r1(R+518)){{goto L7472b2;}}
}
B747264:L747264:{c.instructions+=4;NFSU2_TR(0x747264);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819b6cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B74726b:{NFSU2_TR(0x74726b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B74726c:{NFSU2_TR(0x74726c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74726e:{NFSU2_TR(0x74726e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747250u);}goto L747250;}}
}
B747270:L747270:{c.instructions+=3;NFSU2_TR(0x747270);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B747272:{NFSU2_TR(0x747272);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747275:{NFSU2_TR(0x747275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747280;}}
}
B747277:L747277:{c.instructions+=2;NFSU2_TR(0x747277);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74727a:{NFSU2_TR(0x74727a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74732d;}}
}
B747280:L747280:{c.instructions+=4;NFSU2_TR(0x747280);
__builtin_memmove((R+4),gp(0x819b88),4);
}
B747286:{NFSU2_TR(0x747286);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B747288:{NFSU2_TR(0x747288);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74728a:{NFSU2_TR(0x74728a);
if(r1(R+518)){{goto L74732d;}}
}
B747290:L747290:{c.instructions+=2;NFSU2_TR(0x747290);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B747292:{NFSU2_TR(0x747292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7472a4;}}
}
B747294:L747294:{c.instructions+=3;NFSU2_TR(0x747294);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B747297:{NFSU2_TR(0x747297);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74729a:{NFSU2_TR(0x74729a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7472a4;}}
}
B74729c:L74729c:{c.instructions+=3;NFSU2_TR(0x74729c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74729f:{NFSU2_TR(0x74729f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7472a2:{NFSU2_TR(0x7472a2);
if(r1(R+518)){{goto L7472e2;}}
}
B7472a4:L7472a4:{c.instructions+=4;NFSU2_TR(0x7472a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819b8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7472ab:{NFSU2_TR(0x7472ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7472ac:{NFSU2_TR(0x7472ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7472ae:{NFSU2_TR(0x7472ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747290u);}goto L747290;}}
}
B7472b0:L7472b0:{c.instructions+=1;NFSU2_TR(0x7472b0);
{goto L74732d;}
}
B7472b2:L7472b2:{c.instructions+=4;NFSU2_TR(0x7472b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7472b5:{NFSU2_TR(0x7472b5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7472b7:{NFSU2_TR(0x7472b7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472ba:{NFSU2_TR(0x7472ba);
if(r1(R+518)){{goto L7472d3;}}
}
B7472bc:L7472bc:{c.instructions+=1;NFSU2_TR(0x7472bc);
__builtin_memmove((R+16),(R+16),4);
}
B7472c0:L7472c0:{c.instructions+=2;NFSU2_TR(0x7472c0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472c3:{NFSU2_TR(0x7472c3);
if(r1(R+518)){{goto L7472d3;}}
}
B7472c5:L7472c5:{c.instructions+=2;NFSU2_TR(0x7472c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7472c7:{NFSU2_TR(0x7472c7);
if(r1(R+518)){{goto L7472d3;}}
}
B7472c9:L7472c9:{c.instructions+=4;NFSU2_TR(0x7472c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7472cc:{NFSU2_TR(0x7472cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7472cd:{NFSU2_TR(0x7472cd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472d0:{NFSU2_TR(0x7472d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7472c0u);}goto L7472c0;}}
}
B7472d2:L7472d2:{c.instructions+=1;NFSU2_TR(0x7472d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7472d3:L7472d3:{c.instructions+=3;NFSU2_TR(0x7472d3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7472d5:{NFSU2_TR(0x7472d5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472d8:{NFSU2_TR(0x7472d8);
if(r1(R+518)){{goto L7472df;}}
}
B7472da:L7472da:{c.instructions+=2;NFSU2_TR(0x7472da);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472dd:{NFSU2_TR(0x7472dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747270u);}goto L747270;}}
}
B7472df:L7472df:{c.instructions+=2;NFSU2_TR(0x7472df);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7472e0:{NFSU2_TR(0x7472e0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7472d3u);}goto L7472d3;}
}
B7472e2:L7472e2:{c.instructions+=4;NFSU2_TR(0x7472e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7472e5:{NFSU2_TR(0x7472e5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7472e7:{NFSU2_TR(0x7472e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7472e9:{NFSU2_TR(0x7472e9);
if(r1(R+518)){{goto L747302;}}
}
B7472eb:L7472eb:{c.instructions+=1;NFSU2_TR(0x7472eb);
{goto L7472f0;}
}
B7472f0:L7472f0:{c.instructions+=2;NFSU2_TR(0x7472f0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7472f3:{NFSU2_TR(0x7472f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7472fa;}}
}
B7472f5:L7472f5:{c.instructions+=2;NFSU2_TR(0x7472f5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7472f8:{NFSU2_TR(0x7472f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747302;}}
}
B7472fa:L7472fa:{c.instructions+=4;NFSU2_TR(0x7472fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7472fd:{NFSU2_TR(0x7472fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7472fe:{NFSU2_TR(0x7472fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747300:{NFSU2_TR(0x747300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7472f0u);}goto L7472f0;}}
}
B747302:L747302:{c.instructions+=5;NFSU2_TR(0x747302);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747304:{NFSU2_TR(0x747304);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747306:{NFSU2_TR(0x747306);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747308:{NFSU2_TR(0x747308);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74730b:{NFSU2_TR(0x74730b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74732d;}}
}
B74730d:L74730d:{c.instructions+=1;NFSU2_TR(0x74730d);
__builtin_memmove((R+4),(R+4),4);
}
B747310:L747310:{c.instructions+=2;NFSU2_TR(0x747310);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747313:{NFSU2_TR(0x747313);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747326;}}
}
B747315:L747315:{c.instructions+=7;NFSU2_TR(0x747315);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B747318:{NFSU2_TR(0x747318);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74731b:{NFSU2_TR(0x74731b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74731c:{NFSU2_TR(0x74731c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74731f:{NFSU2_TR(0x74731f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747321:{NFSU2_TR(0x747321);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747324:{NFSU2_TR(0x747324);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747310u);}goto L747310;}}
}
B747326:L747326:{c.instructions+=2;NFSU2_TR(0x747326);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747328:{NFSU2_TR(0x747328);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74732d;}}
}
B74732a:L74732a:{c.instructions+=1;NFSU2_TR(0x74732a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74732d:L74732d:{c.instructions+=3;NFSU2_TR(0x74732d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747330:{NFSU2_TR(0x747330);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B747332:{NFSU2_TR(0x747332);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7473ce;}}
}
B747338:L747338:{c.instructions+=3;NFSU2_TR(0x747338);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74733a:{NFSU2_TR(0x74733a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74733d:{NFSU2_TR(0x74733d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74742f;}}
}
B747343:L747343:{c.instructions+=2;NFSU2_TR(0x747343);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747346:{NFSU2_TR(0x747346);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7473ce;}}
}
B74734c:L74734c:{c.instructions+=4;NFSU2_TR(0x74734c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B74734f:{NFSU2_TR(0x74734f);
w1(R+12,u8(0x40ull));
}
B747351:{NFSU2_TR(0x747351);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+0)));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747353:{NFSU2_TR(0x747353);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74735f;}}
}
B747355:L747355:{c.instructions+=2;NFSU2_TR(0x747355);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),r1(R+12)));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747358:{NFSU2_TR(0x747358);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74735f;}}
}
B74735a:L74735a:{c.instructions+=2;NFSU2_TR(0x74735a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(U+5),r1(R+12)));
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74735d:{NFSU2_TR(0x74735d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7473ce;}}
}
B74735f:L74735f:{c.instructions+=1;NFSU2_TR(0x74735f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747361:L747361:{c.instructions+=2;NFSU2_TR(0x747361);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747364:{NFSU2_TR(0x747364);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747377;}}
}
B747366:L747366:{c.instructions+=7;NFSU2_TR(0x747366);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B747369:{NFSU2_TR(0x747369);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74736c:{NFSU2_TR(0x74736c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74736d:{NFSU2_TR(0x74736d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747370:{NFSU2_TR(0x747370);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747372:{NFSU2_TR(0x747372);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747375:{NFSU2_TR(0x747375);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747361u);}goto L747361;}}
}
B747377:L747377:{c.instructions+=3;NFSU2_TR(0x747377);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74737a:{NFSU2_TR(0x74737a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+523,sborrow<u8>(r1(U+1),r1(R+12)));
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+2))<s8(u8(0x0ull))));
}
B74737c:{NFSU2_TR(0x74737c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747388;}}
}
B74737e:L74737e:{c.instructions+=1;NFSU2_TR(0x74737e);
__builtin_memmove((R+28),(R+28),4);
}
B747380:L747380:{c.instructions+=4;NFSU2_TR(0x747380);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747383:{NFSU2_TR(0x747383);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747384:{NFSU2_TR(0x747384);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(R+523,sborrow<u8>(r1(R+4),r1(U+0)));
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747386:{NFSU2_TR(0x747386);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747380u);}goto L747380;}}
}
B747388:L747388:{c.instructions+=4;NFSU2_TR(0x747388);
__builtin_memmove((R+4),gp(0x819b88),4);
}
B74738e:{NFSU2_TR(0x74738e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B747390:{NFSU2_TR(0x747390);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747392:{NFSU2_TR(0x747392);
if(r1(R+518)){{goto L7473ce;}}
}
B747394:L747394:{c.instructions+=1;NFSU2_TR(0x747394);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B747396:L747396:{c.instructions+=2;NFSU2_TR(0x747396);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B747398:{NFSU2_TR(0x747398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7473aa;}}
}
B74739a:L74739a:{c.instructions+=3;NFSU2_TR(0x74739a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B74739d:{NFSU2_TR(0x74739d);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7473a0:{NFSU2_TR(0x7473a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7473aa;}}
}
B7473a2:L7473a2:{c.instructions+=3;NFSU2_TR(0x7473a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7473a5:{NFSU2_TR(0x7473a5);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+12))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7473a8:{NFSU2_TR(0x7473a8);
if(r1(R+518)){{goto L7473b8;}}
}
B7473aa:L7473aa:{c.instructions+=4;NFSU2_TR(0x7473aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819b8cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B7473b1:{NFSU2_TR(0x7473b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7473b2:{NFSU2_TR(0x7473b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7473b4:{NFSU2_TR(0x7473b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747396u);}goto L747396;}}
}
B7473b6:L7473b6:{c.instructions+=1;NFSU2_TR(0x7473b6);
{goto L7473ce;}
}
B7473b8:L7473b8:{c.instructions+=4;NFSU2_TR(0x7473b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7473bb:{NFSU2_TR(0x7473bb);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7473bd:{NFSU2_TR(0x7473bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7473bf:{NFSU2_TR(0x7473bf);
if(r1(R+518)){{goto L7473ce;}}
}
B7473c1:L7473c1:{c.instructions+=2;NFSU2_TR(0x7473c1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7473c4:{NFSU2_TR(0x7473c4);
if(r1(R+518)){{goto L7473ce;}}
}
B7473c6:L7473c6:{c.instructions+=4;NFSU2_TR(0x7473c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7473c9:{NFSU2_TR(0x7473c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7473ca:{NFSU2_TR(0x7473ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7473cc:{NFSU2_TR(0x7473cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7473c1u);}goto L7473c1;}}
}
B7473ce:L7473ce:{c.instructions+=3;NFSU2_TR(0x7473ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7473d0:{NFSU2_TR(0x7473d0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7473d3:{NFSU2_TR(0x7473d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74742f;}}
}
B7473d5:L7473d5:{c.instructions+=2;NFSU2_TR(0x7473d5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7473d8:{NFSU2_TR(0x7473d8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74742f;}}
}
B7473da:L7473da:{c.instructions+=3;NFSU2_TR(0x7473da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7473dd:{NFSU2_TR(0x7473dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B7473df:{NFSU2_TR(0x7473df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74742f;}}
}
B7473e1:L7473e1:{c.instructions+=1;NFSU2_TR(0x7473e1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7473e3:L7473e3:{c.instructions+=2;NFSU2_TR(0x7473e3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7473e6:{NFSU2_TR(0x7473e6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7473f9;}}
}
B7473e8:L7473e8:{c.instructions+=7;NFSU2_TR(0x7473e8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7473eb:{NFSU2_TR(0x7473eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7473ee:{NFSU2_TR(0x7473ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7473ef:{NFSU2_TR(0x7473ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7473f2:{NFSU2_TR(0x7473f2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7473f4:{NFSU2_TR(0x7473f4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7473f7:{NFSU2_TR(0x7473f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7473e3u);}goto L7473e3;}}
}
B7473f9:L7473f9:{c.instructions+=3;NFSU2_TR(0x7473f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7473fc:{NFSU2_TR(0x7473fc);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7473ff:{NFSU2_TR(0x7473ff);
if(r1(R+518)){{goto L747402;}}
}
B747401:L747401:{c.instructions+=1;NFSU2_TR(0x747401);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747402:L747402:{c.instructions+=5;NFSU2_TR(0x747402);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747404:{NFSU2_TR(0x747404);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747406:{NFSU2_TR(0x747406);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747408:{NFSU2_TR(0x747408);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74740b:{NFSU2_TR(0x74740b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747426;}}
}
B74740d:L74740d:{c.instructions+=1;NFSU2_TR(0x74740d);
__builtin_memmove((R+4),(R+4),4);
}
B747410:L747410:{c.instructions+=2;NFSU2_TR(0x747410);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747413:{NFSU2_TR(0x747413);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747426;}}
}
B747415:L747415:{c.instructions+=7;NFSU2_TR(0x747415);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B747418:{NFSU2_TR(0x747418);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74741b:{NFSU2_TR(0x74741b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74741c:{NFSU2_TR(0x74741c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74741f:{NFSU2_TR(0x74741f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747421:{NFSU2_TR(0x747421);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747424:{NFSU2_TR(0x747424);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747410u);}goto L747410;}}
}
B747426:L747426:{c.instructions+=3;NFSU2_TR(0x747426);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747429:{NFSU2_TR(0x747429);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74742c:{NFSU2_TR(0x74742c);
if(r1(R+518)){{goto L747447;}}
}
B74742e:L74742e:{c.instructions+=1;NFSU2_TR(0x74742e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74742f:L74742f:{c.instructions+=3;NFSU2_TR(0x74742f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747431:{NFSU2_TR(0x747431);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747433:{NFSU2_TR(0x747433);
if(r1(R+518)){{goto L747447;}}
}
B747435:L747435:{c.instructions+=2;NFSU2_TR(0x747435);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747438:{NFSU2_TR(0x747438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74743f;}}
}
B74743a:L74743a:{c.instructions+=2;NFSU2_TR(0x74743a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74743d:{NFSU2_TR(0x74743d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747447;}}
}
B74743f:L74743f:{c.instructions+=4;NFSU2_TR(0x74743f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747442:{NFSU2_TR(0x747442);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747443:{NFSU2_TR(0x747443);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747445:{NFSU2_TR(0x747445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747435u);}goto L747435;}}
}
B747447:L747447:{c.instructions+=3;NFSU2_TR(0x747447);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747449:{NFSU2_TR(0x747449);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74744c:{NFSU2_TR(0x74744c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74754c;}}
}
B747452:L747452:{c.instructions+=3;NFSU2_TR(0x747452);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747455:{NFSU2_TR(0x747455);
w1(R+12,u8(0x3aull));
}
B747457:{NFSU2_TR(0x747457);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7474b2;}}
}
B747459:L747459:{c.instructions+=2;NFSU2_TR(0x747459);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74745c:{NFSU2_TR(0x74745c);
if(r1(R+518)){{goto L7474b2;}}
}
B74745e:L74745e:{c.instructions+=2;NFSU2_TR(0x74745e);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747461:{NFSU2_TR(0x747461);
if(r1(R+518)){{goto L7474b2;}}
}
B747463:L747463:{c.instructions+=1;NFSU2_TR(0x747463);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747465:L747465:{c.instructions+=2;NFSU2_TR(0x747465);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747468:{NFSU2_TR(0x747468);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74747b;}}
}
B74746a:L74746a:{c.instructions+=7;NFSU2_TR(0x74746a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B74746d:{NFSU2_TR(0x74746d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747470:{NFSU2_TR(0x747470);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747471:{NFSU2_TR(0x747471);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747474:{NFSU2_TR(0x747474);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747476:{NFSU2_TR(0x747476);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747479:{NFSU2_TR(0x747479);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747465u);}goto L747465;}}
}
B74747b:L74747b:{c.instructions+=2;NFSU2_TR(0x74747b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747481:{NFSU2_TR(0x747481);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747496;}}
}
B747483:L747483:{c.instructions+=2;NFSU2_TR(0x747483);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x32ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747486:{NFSU2_TR(0x747486);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747490;}}
}
B747488:L747488:{c.instructions+=2;NFSU2_TR(0x747488);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x76cull))));
}
B74748e:{NFSU2_TR(0x74748e);
{goto L747496;}
}
B747490:L747490:{c.instructions+=1;NFSU2_TR(0x747490);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7d0ull))));
}
B747496:L747496:{c.instructions+=4;NFSU2_TR(0x747496);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747499:{NFSU2_TR(0x747499);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B74749b:{NFSU2_TR(0x74749b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74749d:{NFSU2_TR(0x74749d);
if(r1(R+518)){{goto L7474b2;}}
}
B74749f:L74749f:{c.instructions+=1;NFSU2_TR(0x74749f);
}
B7474a0:L7474a0:{c.instructions+=2;NFSU2_TR(0x7474a0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7474a3:{NFSU2_TR(0x7474a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7474aa;}}
}
B7474a5:L7474a5:{c.instructions+=2;NFSU2_TR(0x7474a5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7474a8:{NFSU2_TR(0x7474a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7474b2;}}
}
B7474aa:L7474aa:{c.instructions+=4;NFSU2_TR(0x7474aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7474ad:{NFSU2_TR(0x7474ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7474ae:{NFSU2_TR(0x7474ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7474b0:{NFSU2_TR(0x7474b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7474a0u);}goto L7474a0;}}
}
B7474b2:L7474b2:{c.instructions+=4;NFSU2_TR(0x7474b2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7474b4:{NFSU2_TR(0x7474b4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7474b6:{NFSU2_TR(0x7474b6);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7474b9:{NFSU2_TR(0x7474b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74754c;}}
}
B7474bf:L7474bf:{c.instructions+=2;NFSU2_TR(0x7474bf);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7474c2:{NFSU2_TR(0x7474c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7474ea;}}
}
B7474c4:L7474c4:{c.instructions+=7;NFSU2_TR(0x7474c4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7474c7:{NFSU2_TR(0x7474c7);
__builtin_memmove((R+8),(R+4),4);
}
B7474c9:{NFSU2_TR(0x7474c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7474ca:{NFSU2_TR(0x7474ca);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7474cc:{NFSU2_TR(0x7474cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7474ce:{NFSU2_TR(0x7474ce);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7474d1:{NFSU2_TR(0x7474d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7474e2;}}
}
B7474d3:L7474d3:{c.instructions+=2;NFSU2_TR(0x7474d3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7474d6:{NFSU2_TR(0x7474d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7474e2;}}
}
B7474d8:L7474d8:{c.instructions+=4;NFSU2_TR(0x7474d8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7474db:{NFSU2_TR(0x7474db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7474de:{NFSU2_TR(0x7474de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7474e1:{NFSU2_TR(0x7474e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7474e2:L7474e2:{c.instructions+=3;NFSU2_TR(0x7474e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7474e5:{NFSU2_TR(0x7474e5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7474e7:{NFSU2_TR(0x7474e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7474ea;}}
}
B7474e9:L7474e9:{c.instructions+=1;NFSU2_TR(0x7474e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7474ea:L7474ea:{c.instructions+=4;NFSU2_TR(0x7474ea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B7474ec:{NFSU2_TR(0x7474ec);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7474ee:{NFSU2_TR(0x7474ee);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B7474f1:{NFSU2_TR(0x7474f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74754c;}}
}
B7474f3:L7474f3:{c.instructions+=2;NFSU2_TR(0x7474f3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7474f6:{NFSU2_TR(0x7474f6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74751e;}}
}
B7474f8:L7474f8:{c.instructions+=7;NFSU2_TR(0x7474f8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B7474fb:{NFSU2_TR(0x7474fb);
__builtin_memmove((R+8),(R+4),4);
}
B7474fd:{NFSU2_TR(0x7474fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7474fe:{NFSU2_TR(0x7474fe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747500:{NFSU2_TR(0x747500);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747502:{NFSU2_TR(0x747502);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747505:{NFSU2_TR(0x747505);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747516;}}
}
B747507:L747507:{c.instructions+=2;NFSU2_TR(0x747507);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74750a:{NFSU2_TR(0x74750a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747516;}}
}
B74750c:L74750c:{c.instructions+=4;NFSU2_TR(0x74750c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B74750f:{NFSU2_TR(0x74750f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747512:{NFSU2_TR(0x747512);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747515:{NFSU2_TR(0x747515);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747516:L747516:{c.instructions+=3;NFSU2_TR(0x747516);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747519:{NFSU2_TR(0x747519);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+12))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74751b:{NFSU2_TR(0x74751b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74751e;}}
}
B74751d:L74751d:{c.instructions+=1;NFSU2_TR(0x74751d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74751e:L74751e:{c.instructions+=4;NFSU2_TR(0x74751e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747520:{NFSU2_TR(0x747520);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747522:{NFSU2_TR(0x747522);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747525:{NFSU2_TR(0x747525);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74754c;}}
}
B747527:L747527:{c.instructions+=2;NFSU2_TR(0x747527);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74752a:{NFSU2_TR(0x74752a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74754c;}}
}
B74752c:L74752c:{c.instructions+=7;NFSU2_TR(0x74752c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B74752f:{NFSU2_TR(0x74752f);
__builtin_memmove((R+8),(R+4),4);
}
B747531:{NFSU2_TR(0x747531);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747532:{NFSU2_TR(0x747532);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747534:{NFSU2_TR(0x747534);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747536:{NFSU2_TR(0x747536);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747539:{NFSU2_TR(0x747539);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74754a;}}
}
B74753b:L74753b:{c.instructions+=2;NFSU2_TR(0x74753b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B74753e:{NFSU2_TR(0x74753e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74754a;}}
}
B747540:L747540:{c.instructions+=4;NFSU2_TR(0x747540);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B747543:{NFSU2_TR(0x747543);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747546:{NFSU2_TR(0x747546);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747549:{NFSU2_TR(0x747549);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74754a:L74754a:{c.instructions+=1;NFSU2_TR(0x74754a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B74754c:L74754c:{c.instructions+=5;NFSU2_TR(0x74754c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74754f:{NFSU2_TR(0x74754f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B747551:{NFSU2_TR(0x747551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747552:{NFSU2_TR(0x747552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747553:{NFSU2_TR(0x747553);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7475a1;}}
}
B747555:L747555:{c.instructions+=3;NFSU2_TR(0x747555);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747557:{NFSU2_TR(0x747557);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747559:{NFSU2_TR(0x747559);
if(r1(R+518)){{goto L747572;}}
}
B74755b:L74755b:{c.instructions+=1;NFSU2_TR(0x74755b);
{goto L747560;}
}
B747560:L747560:{c.instructions+=2;NFSU2_TR(0x747560);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747563:{NFSU2_TR(0x747563);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747572;}}
}
B747565:L747565:{c.instructions+=2;NFSU2_TR(0x747565);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747568:{NFSU2_TR(0x747568);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747572;}}
}
B74756a:L74756a:{c.instructions+=4;NFSU2_TR(0x74756a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74756d:{NFSU2_TR(0x74756d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74756e:{NFSU2_TR(0x74756e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747570:{NFSU2_TR(0x747570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747560u);}goto L747560;}}
}
B747572:L747572:{c.instructions+=5;NFSU2_TR(0x747572);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747574:{NFSU2_TR(0x747574);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747576:{NFSU2_TR(0x747576);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747578:{NFSU2_TR(0x747578);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B74757b:{NFSU2_TR(0x74757b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7475a1;}}
}
B74757d:L74757d:{c.instructions+=1;NFSU2_TR(0x74757d);
__builtin_memmove((R+4),(R+4),4);
}
B747580:L747580:{c.instructions+=2;NFSU2_TR(0x747580);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747583:{NFSU2_TR(0x747583);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747596;}}
}
B747585:L747585:{c.instructions+=7;NFSU2_TR(0x747585);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B747588:{NFSU2_TR(0x747588);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74758b:{NFSU2_TR(0x74758b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74758c:{NFSU2_TR(0x74758c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B74758f:{NFSU2_TR(0x74758f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747591:{NFSU2_TR(0x747591);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747594:{NFSU2_TR(0x747594);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747580u);}goto L747580;}}
}
B747596:L747596:{c.instructions+=2;NFSU2_TR(0x747596);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74759c:{NFSU2_TR(0x74759c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7475a1;}}
}
B74759e:L74759e:{c.instructions+=1;NFSU2_TR(0x74759e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7475a1:L7475a1:{c.instructions+=3;NFSU2_TR(0x7475a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7475a4:{NFSU2_TR(0x7475a4);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x76cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x76cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7475a9:{NFSU2_TR(0x7475a9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7475b3;}}
}
B7475ab:L7475ab:{c.instructions+=2;NFSU2_TR(0x7475ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffff894ull))));
}
B7475b0:{NFSU2_TR(0x7475b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7475b3:L7475b3:{c.instructions+=2;NFSU2_TR(0x7475b3);
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
B7475b5:{NFSU2_TR(0x7475b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7475c0:L7475c0:{c.instructions+=4;NFSU2_TR(0x7475c0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B7475c3:{NFSU2_TR(0x7475c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7475c4:{NFSU2_TR(0x7475c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7475c5:{NFSU2_TR(0x7475c5);
if(r1(R+518)){{goto L7475f2;}}
}
B7475c7:L7475c7:{c.instructions+=3;NFSU2_TR(0x7475c7);
__builtin_memmove((R+28),(R+0),4);
}
B7475c9:{NFSU2_TR(0x7475c9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B7475cb:{NFSU2_TR(0x7475cb);
{goto L7475d0;}
}
B7475d0:L7475d0:{c.instructions+=1;NFSU2_TR(0x7475d0);
__builtin_memmove((R+24),(R+12),4);
}
B7475d2:L7475d2:{c.instructions+=3;NFSU2_TR(0x7475d2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B7475d4:{NFSU2_TR(0x7475d4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7475d6:{NFSU2_TR(0x7475d6);
if(r1(R+518)){{goto L7475f4;}}
}
B7475d8:L7475d8:{c.instructions+=3;NFSU2_TR(0x7475d8);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B7475db:{NFSU2_TR(0x7475db);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7475dd:{NFSU2_TR(0x7475dd);
if(r1(R+518)){{goto L7475e6;}}
}
B7475df:L7475df:{c.instructions+=3;NFSU2_TR(0x7475df);
w1(R+4,u8(u32(r1(R+4))^u32(u8(0x20ull))));
}
B7475e2:{NFSU2_TR(0x7475e2);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7475e4:{NFSU2_TR(0x7475e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7475e9;}}
}
B7475e6:L7475e6:{c.instructions+=2;NFSU2_TR(0x7475e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7475e7:{NFSU2_TR(0x7475e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7475d2u);}goto L7475d2;}
}
B7475e9:L7475e9:{c.instructions+=5;NFSU2_TR(0x7475e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B7475ec:{NFSU2_TR(0x7475ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B7475ed:{NFSU2_TR(0x7475ed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7475ee:{NFSU2_TR(0x7475ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7475f0:{NFSU2_TR(0x7475f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7475d0u);}goto L7475d0;}}
}
B7475f2:L7475f2:{c.instructions+=1;NFSU2_TR(0x7475f2);
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
B7475f4:L7475f4:{c.instructions+=3;NFSU2_TR(0x7475f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7475f5:{NFSU2_TR(0x7475f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7475f6:{NFSU2_TR(0x7475f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747600:L747600:{c.instructions+=3;NFSU2_TR(0x747600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747602:{NFSU2_TR(0x747602);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747604:{NFSU2_TR(0x747604);
if(r1(R+518)){{goto L747619;}}
}
B747606:L747606:{c.instructions+=3;NFSU2_TR(0x747606);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747608:{NFSU2_TR(0x747608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747609:{NFSU2_TR(0x747609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74760eull));
TAIL_STATIC(0x74a360u,74a);
}
B74760e:L74760e:{c.instructions+=3;NFSU2_TR(0x74760e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747610:{NFSU2_TR(0x747610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747611:{NFSU2_TR(0x747611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747616ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B747616:L747616:{c.instructions+=1;NFSU2_TR(0x747616);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747619:L747619:{c.instructions+=3;NFSU2_TR(0x747619);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B74761f:{NFSU2_TR(0x74761f);
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
B747621:{NFSU2_TR(0x747621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747630:L747630:{c.instructions+=5;NFSU2_TR(0x747630);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747631:{NFSU2_TR(0x747631);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B747635:{NFSU2_TR(0x747635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747637:{NFSU2_TR(0x747637);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747639:{NFSU2_TR(0x747639);
if(r1(R+518)){{goto L74764e;}}
}
B74763b:L74763b:{c.instructions+=3;NFSU2_TR(0x74763b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74763d:{NFSU2_TR(0x74763d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74763e:{NFSU2_TR(0x74763e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747643ull));
TAIL_STATIC(0x74a360u,74a);
}
B747643:L747643:{c.instructions+=3;NFSU2_TR(0x747643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747645:{NFSU2_TR(0x747645);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747646:{NFSU2_TR(0x747646);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74764bull));
TAIL_STATIC(0x74a2d0u,74a);
}
B74764b:L74764b:{c.instructions+=1;NFSU2_TR(0x74764b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74764e:L74764e:{c.instructions+=4;NFSU2_TR(0x74764e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747654:{NFSU2_TR(0x747654);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747655:{NFSU2_TR(0x747655);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B74765b:{NFSU2_TR(0x74765b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747660ull));
TAIL_STATIC(0x598ec0u,598);
}
B747660:L747660:{c.instructions+=2;NFSU2_TR(0x747660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747661:{NFSU2_TR(0x747661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747666ull));
TAIL_STATIC(0x598ec0u,598);
}
B747666:L747666:{c.instructions+=3;NFSU2_TR(0x747666);
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
B747669:{NFSU2_TR(0x747669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74766a:{NFSU2_TR(0x74766a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747670:L747670:{c.instructions+=13;NFSU2_TR(0x747670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x138ull))));
}
B747676:{NFSU2_TR(0x747676);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74767b:{NFSU2_TR(0x74767b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74767c:{NFSU2_TR(0x74767c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74767d:{NFSU2_TR(0x74767d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74767e:{NFSU2_TR(0x74767e);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B747685:{NFSU2_TR(0x747685);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74768c:{NFSU2_TR(0x74768c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747692:{NFSU2_TR(0x747692);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B747694:{NFSU2_TR(0x747694);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747697:{NFSU2_TR(0x747697);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747698:{NFSU2_TR(0x747698);
w4(R+28,u32(0x8ull));
}
B74769d:{NFSU2_TR(0x74769d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7476e0;}}
}
B74769f:L74769f:{c.instructions+=3;NFSU2_TR(0x74769f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7476a2:{NFSU2_TR(0x7476a2);
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
B7476a4:{NFSU2_TR(0x7476a4);
if(r1(R+518)){{goto L7476e0;}}
}
B7476a6:L7476a6:{c.instructions+=2;NFSU2_TR(0x7476a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7476a7:{NFSU2_TR(0x7476a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7476aaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7476aa:L7476aa:{c.instructions+=5;NFSU2_TR(0x7476aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7476ad:{NFSU2_TR(0x7476ad);
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
B7476af:{NFSU2_TR(0x7476af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7476b2:{NFSU2_TR(0x7476b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7476b3:{NFSU2_TR(0x7476b3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7476c0;}}
}
B7476b5:L7476b5:{c.instructions+=1;NFSU2_TR(0x7476b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7476b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7476b8:L7476b8:{c.instructions+=2;NFSU2_TR(0x7476b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7476be:{NFSU2_TR(0x7476be);
{goto L7476da;}
}
B7476c0:L7476c0:{c.instructions+=1;NFSU2_TR(0x7476c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7476c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7476c3:L7476c3:{c.instructions+=3;NFSU2_TR(0x7476c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7476c6:{NFSU2_TR(0x7476c6);
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
B7476c8:{NFSU2_TR(0x7476c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7476e0;}}
}
B7476ca:L7476ca:{c.instructions+=5;NFSU2_TR(0x7476ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7476cd:{NFSU2_TR(0x7476cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7476d0:{NFSU2_TR(0x7476d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7476d1:{NFSU2_TR(0x7476d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7476d7:{NFSU2_TR(0x7476d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7476daull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7476da:L7476da:{c.instructions+=2;NFSU2_TR(0x7476da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7476dd:{NFSU2_TR(0x7476dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7476e0:L7476e0:{c.instructions+=3;NFSU2_TR(0x7476e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7476e7:{NFSU2_TR(0x7476e7);
w4(R+12,u32(0x2ull));
}
B7476ec:{NFSU2_TR(0x7476ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7477d2;}}
}
B7476f2:L7476f2:{c.instructions+=2;NFSU2_TR(0x7476f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7476f8:{NFSU2_TR(0x7476f8);
if(r1(R+518)){{goto L7477d2;}}
}
B7476fe:L7476fe:{c.instructions+=3;NFSU2_TR(0x7476fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747700:{NFSU2_TR(0x747700);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747702:{NFSU2_TR(0x747702);
if(r1(R+518)){{goto L747716;}}
}
B747704:L747704:{c.instructions+=3;NFSU2_TR(0x747704);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747705:{NFSU2_TR(0x747705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747706:{NFSU2_TR(0x747706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74770bull));
TAIL_STATIC(0x74a360u,74a);
}
B74770b:L74770b:{c.instructions+=3;NFSU2_TR(0x74770b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B74770d:{NFSU2_TR(0x74770d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74770e:{NFSU2_TR(0x74770e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747713ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B747713:L747713:{c.instructions+=1;NFSU2_TR(0x747713);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747716:L747716:{c.instructions+=6;NFSU2_TR(0x747716);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74771c:{NFSU2_TR(0x74771c);
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
B74771e:{NFSU2_TR(0x74771e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B747721:{NFSU2_TR(0x747721);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B747723:{NFSU2_TR(0x747723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747729:{NFSU2_TR(0x747729);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747748;}}
}
B74772b:L74772b:{c.instructions+=7;NFSU2_TR(0x74772b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747731:{NFSU2_TR(0x747731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747732:{NFSU2_TR(0x747732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747733:{NFSU2_TR(0x747733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747734:{NFSU2_TR(0x747734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747735:{NFSU2_TR(0x747735);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74773c:{NFSU2_TR(0x74773c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747741ull));
TAIL_STATIC(0x76115eu,761);
}
B747741:L747741:{c.instructions+=2;NFSU2_TR(0x747741);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747747:{NFSU2_TR(0x747747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747748:L747748:{c.instructions+=4;NFSU2_TR(0x747748);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747749:{NFSU2_TR(0x747749);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74774b:{NFSU2_TR(0x74774b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74774c:{NFSU2_TR(0x74774c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747751ull));
TAIL_STATIC(0x74a220u,74a);
}
B747751:L747751:{c.instructions+=4;NFSU2_TR(0x747751);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747754:{NFSU2_TR(0x747754);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747756:{NFSU2_TR(0x747756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B747758:{NFSU2_TR(0x747758);
if(r1(R+518)){{goto L7477d2;}}
}
B74775a:L74775a:{c.instructions+=23;NFSU2_TR(0x74775a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747760:{NFSU2_TR(0x747760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747766:{NFSU2_TR(0x747766);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74776a:{NFSU2_TR(0x74776a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74776e:{NFSU2_TR(0x74776e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B747771:{NFSU2_TR(0x747771);
u8 U[5];
w4(U+0,u32(u32(u32(0x3aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B747775:{NFSU2_TR(0x747775);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B747778:{NFSU2_TR(0x747778);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B74777b:{NFSU2_TR(0x74777b);
u8 U[6];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B747780:{NFSU2_TR(0x747780);
u8 U[5];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B747784:{NFSU2_TR(0x747784);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B747787:{NFSU2_TR(0x747787);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74778b:{NFSU2_TR(0x74778b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74778d:{NFSU2_TR(0x74778d);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B747791:{NFSU2_TR(0x747791);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B747795:{NFSU2_TR(0x747795);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74779b:{NFSU2_TR(0x74779b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74779c:{NFSU2_TR(0x74779c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74779d:{NFSU2_TR(0x74779d);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B7477a2:{NFSU2_TR(0x7477a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477a6:{NFSU2_TR(0x7477a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477aa:{NFSU2_TR(0x7477aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x43ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B7477ae:{NFSU2_TR(0x7477ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7477b3ull));
TAIL_STATIC(0x74a3f0u,74a);
}
B7477b3:L7477b3:{c.instructions+=4;NFSU2_TR(0x7477b3);
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
B7477b6:{NFSU2_TR(0x7477b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477bc:{NFSU2_TR(0x7477bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477c2:{NFSU2_TR(0x7477c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7477c7ull));
TAIL_STATIC(0x74b730u,74b);
}
B7477c7:L7477c7:{c.instructions+=2;NFSU2_TR(0x7477c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7530ull))));
}
B7477cc:{NFSU2_TR(0x7477cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477d2:L7477d2:{c.instructions+=3;NFSU2_TR(0x7477d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7477d8:{NFSU2_TR(0x7477d8);
w4(R+28,u32(0x3ull));
}
B7477dd:{NFSU2_TR(0x7477dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747814;}}
}
B7477df:L7477df:{c.instructions+=6;NFSU2_TR(0x7477df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7477e1:{NFSU2_TR(0x7477e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7477e2:{NFSU2_TR(0x7477e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7477e3:{NFSU2_TR(0x7477e3);
u8 U[4];
w4(U+0,u32(0x73746174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7477e8:{NFSU2_TR(0x7477e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7477e9:{NFSU2_TR(0x7477e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7477eeull));
TAIL_STATIC(0x74a760u,74a);
}
B7477ee:L7477ee:{c.instructions+=3;NFSU2_TR(0x7477ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B7477f1:{NFSU2_TR(0x7477f1);
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
B7477f3:{NFSU2_TR(0x7477f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7477fd;}}
}
B7477f5:L7477f5:{c.instructions+=2;NFSU2_TR(0x7477f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7477fb:{NFSU2_TR(0x7477fb);
{goto L747814;}
}
B7477fd:L7477fd:{c.instructions+=1;NFSU2_TR(0x7477fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747802ull));
TAIL_STATIC(0x74b730u,74b);
}
B747802:L747802:{c.instructions+=2;NFSU2_TR(0x747802);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747808:{NFSU2_TR(0x747808);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L747814;}}
}
B74780a:L74780a:{c.instructions+=1;NFSU2_TR(0x74780a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747814:L747814:{c.instructions+=3;NFSU2_TR(0x747814);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74781a:{NFSU2_TR(0x74781a);
w4(R+12,u32(0x4ull));
}
B74781f:{NFSU2_TR(0x74781f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74784f;}}
}
B747821:L747821:{c.instructions+=4;NFSU2_TR(0x747821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747827:{NFSU2_TR(0x747827);
__builtin_memmove((R+0),(R+8),4);
}
B747829:{NFSU2_TR(0x747829);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74782c:{NFSU2_TR(0x74782c);
__builtin_memmove((R+16),(R+16),4);
}
B747830:L747830:{c.instructions+=4;NFSU2_TR(0x747830);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747832:{NFSU2_TR(0x747832);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747833:{NFSU2_TR(0x747833);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747835:{NFSU2_TR(0x747835);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747830u);}goto L747830;}}
}
B747837:L747837:{c.instructions+=9;NFSU2_TR(0x747837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B747839:{NFSU2_TR(0x747839);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74783a:{NFSU2_TR(0x74783a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74783b:{NFSU2_TR(0x74783b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74783c:{NFSU2_TR(0x74783c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B74783e:{NFSU2_TR(0x74783e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74783f:{NFSU2_TR(0x74783f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747840:{NFSU2_TR(0x747840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747841:{NFSU2_TR(0x747841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747846ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B747846:L747846:{c.instructions+=2;NFSU2_TR(0x747846);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B747849:{NFSU2_TR(0x747849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74784f:L74784f:{c.instructions+=3;NFSU2_TR(0x74784f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747855:{NFSU2_TR(0x747855);
w4(R+28,u32(0x5ull));
}
B74785a:{NFSU2_TR(0x74785a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7478b0;}}
}
B74785c:L74785c:{c.instructions+=10;NFSU2_TR(0x74785c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B74785e:{NFSU2_TR(0x74785e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74785f:{NFSU2_TR(0x74785f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747860:{NFSU2_TR(0x747860);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747861:{NFSU2_TR(0x747861);
w4(R+12,u32(0x1ull));
}
B747866:{NFSU2_TR(0x747866);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747867:{NFSU2_TR(0x747867);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74786b:{NFSU2_TR(0x74786b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74786c:{NFSU2_TR(0x74786c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74786d:{NFSU2_TR(0x74786d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747872ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B747872:L747872:{c.instructions+=3;NFSU2_TR(0x747872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B747875:{NFSU2_TR(0x747875);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747877:{NFSU2_TR(0x747877);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747891;}}
}
B747879:L747879:{c.instructions+=5;NFSU2_TR(0x747879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74787f:{NFSU2_TR(0x74787f);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B747883:{NFSU2_TR(0x747883);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B747885:{NFSU2_TR(0x747885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74788b:{NFSU2_TR(0x74788b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747891:L747891:{c.instructions+=1;NFSU2_TR(0x747891);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7478b0;}}
}
B747893:L747893:{c.instructions+=7;NFSU2_TR(0x747893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747894:{NFSU2_TR(0x747894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74789a:{NFSU2_TR(0x74789a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74789b:{NFSU2_TR(0x74789b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74789c:{NFSU2_TR(0x74789c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74789d:{NFSU2_TR(0x74789d);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7478a4:{NFSU2_TR(0x7478a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7478a9ull));
TAIL_STATIC(0x76115eu,761);
}
B7478a9:L7478a9:{c.instructions+=2;NFSU2_TR(0x7478a9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7478af:{NFSU2_TR(0x7478af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7478b0:L7478b0:{c.instructions+=2;NFSU2_TR(0x7478b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7478b6:{NFSU2_TR(0x7478b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b9a;}}
}
B7478bc:L7478bc:{c.instructions+=13;NFSU2_TR(0x7478bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7478c2:{NFSU2_TR(0x7478c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7478c8:{NFSU2_TR(0x7478c8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478c9:{NFSU2_TR(0x7478c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478ca:{NFSU2_TR(0x7478ca);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B7478cc:{NFSU2_TR(0x7478cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478cd:{NFSU2_TR(0x7478cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478ce:{NFSU2_TR(0x7478ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7478d4:{NFSU2_TR(0x7478d4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7478d6:{NFSU2_TR(0x7478d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7478d8:{NFSU2_TR(0x7478d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478d9:{NFSU2_TR(0x7478d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478da:{NFSU2_TR(0x7478da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7478dfull));
TAIL_STATIC(0x74a6d0u,74a);
}
B7478df:L7478df:{c.instructions+=3;NFSU2_TR(0x7478df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7478e2:{NFSU2_TR(0x7478e2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7478e4:{NFSU2_TR(0x7478e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747922;}}
}
B7478e6:L7478e6:{c.instructions+=4;NFSU2_TR(0x7478e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7478e8:{NFSU2_TR(0x7478e8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7478ea:{NFSU2_TR(0x7478ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7478f4:{NFSU2_TR(0x7478f4);
if(r1(R+518)){{goto L747909;}}
}
B7478f6:L7478f6:{c.instructions+=3;NFSU2_TR(0x7478f6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478f8:{NFSU2_TR(0x7478f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7478f9:{NFSU2_TR(0x7478f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7478feull));
TAIL_STATIC(0x74a360u,74a);
}
B7478fe:L7478fe:{c.instructions+=3;NFSU2_TR(0x7478fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B747900:{NFSU2_TR(0x747900);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747901:{NFSU2_TR(0x747901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747906ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B747906:L747906:{c.instructions+=1;NFSU2_TR(0x747906);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747909:L747909:{c.instructions+=7;NFSU2_TR(0x747909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74790a:{NFSU2_TR(0x74790a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+24)),r4(U+0));
}
B74790c:{NFSU2_TR(0x74790c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74790d:{NFSU2_TR(0x74790d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74790e:{NFSU2_TR(0x74790e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74790f:{NFSU2_TR(0x74790f);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747916:{NFSU2_TR(0x747916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74791bull));
TAIL_STATIC(0x76115eu,761);
}
B74791b:L74791b:{c.instructions+=2;NFSU2_TR(0x74791b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747921:{NFSU2_TR(0x747921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747922:L747922:{c.instructions+=5;NFSU2_TR(0x747922);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747928:{NFSU2_TR(0x747928);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B74792a:{NFSU2_TR(0x74792a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747930:{NFSU2_TR(0x747930);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747936:{NFSU2_TR(0x747936);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b9a;}}
}
B74793c:L74793c:{c.instructions+=2;NFSU2_TR(0x74793c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74793f:{NFSU2_TR(0x74793f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747b9a;}}
}
B747945:L747945:{c.instructions+=5;NFSU2_TR(0x747945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74794b:{NFSU2_TR(0x74794b);
__builtin_memmove((R+0),(R+8),4);
}
B74794d:{NFSU2_TR(0x74794d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B747951:{NFSU2_TR(0x747951);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747953:{NFSU2_TR(0x747953);
if(r1(R+518)){{goto L747ce8;}}
}
B747959:L747959:{c.instructions+=1;NFSU2_TR(0x747959);
__builtin_memmove((R+16),(R+16),4);
}
B747960:L747960:{c.instructions+=2;NFSU2_TR(0x747960);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B747963:{NFSU2_TR(0x747963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747977;}}
}
B747965:L747965:{c.instructions+=3;NFSU2_TR(0x747965);
w1(R+12,u8(0xaull));
}
B747967:{NFSU2_TR(0x747967);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B74796a:{NFSU2_TR(0x74796a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747977;}}
}
B74796c:L74796c:{c.instructions+=2;NFSU2_TR(0x74796c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747970:{NFSU2_TR(0x747970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747977;}}
}
B747972:L747972:{c.instructions+=2;NFSU2_TR(0x747972);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747975:{NFSU2_TR(0x747975);
if(r1(R+518)){{goto L747993;}}
}
B747977:L747977:{c.instructions+=3;NFSU2_TR(0x747977);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747978:{NFSU2_TR(0x747978);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74797a:{NFSU2_TR(0x74797a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747960u);}goto L747960;}}
}
B74797c:L74797c:{c.instructions+=6;NFSU2_TR(0x74797c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74797d:{NFSU2_TR(0x74797d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74797e:{NFSU2_TR(0x74797e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74797f:{NFSU2_TR(0x74797f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747980:{NFSU2_TR(0x747980);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747987:{NFSU2_TR(0x747987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74798cull));
TAIL_STATIC(0x76115eu,761);
}
B74798c:L74798c:{c.instructions+=2;NFSU2_TR(0x74798c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747992:{NFSU2_TR(0x747992);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747993:L747993:{c.instructions+=2;NFSU2_TR(0x747993);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747995:{NFSU2_TR(0x747995);
if(r1(R+518)){{goto L747ce8;}}
}
B74799b:L74799b:{c.instructions+=8;NFSU2_TR(0x74799b);
__builtin_memmove((R+4),(R+0),4);
}
B74799d:{NFSU2_TR(0x74799d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B74799f:{NFSU2_TR(0x74799f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7479a2:{NFSU2_TR(0x7479a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7479a8:{NFSU2_TR(0x7479a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7479ac:{NFSU2_TR(0x7479ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B7479b0:{NFSU2_TR(0x7479b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7479b7:{NFSU2_TR(0x7479b7);
if(r1(R+518)){{goto L7479d3;}}
}
B7479b9:L7479b9:{c.instructions+=5;NFSU2_TR(0x7479b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7479bf:{NFSU2_TR(0x7479bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7479c5:{NFSU2_TR(0x7479c5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B7479c7:{NFSU2_TR(0x7479c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7479cd:{NFSU2_TR(0x7479cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7479d3:L7479d3:{c.instructions+=5;NFSU2_TR(0x7479d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B7479d9:{NFSU2_TR(0x7479d9);
__builtin_memmove((R+0),(R+20),4);
}
B7479db:{NFSU2_TR(0x7479db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B7479dd:{NFSU2_TR(0x7479dd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x48ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7479e0:{NFSU2_TR(0x7479e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b6a;}}
}
B7479e6:L7479e6:{c.instructions+=4;NFSU2_TR(0x7479e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B7479e9:{NFSU2_TR(0x7479e9);
w1(R+8,u8(0x54ull));
}
B7479eb:{NFSU2_TR(0x7479eb);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B7479ed:{NFSU2_TR(0x7479ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b6a;}}
}
B7479f3:L7479f3:{c.instructions+=2;NFSU2_TR(0x7479f3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+8))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B7479f6:{NFSU2_TR(0x7479f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b6a;}}
}
B7479fc:L7479fc:{c.instructions+=2;NFSU2_TR(0x7479fc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x50ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B747a00:{NFSU2_TR(0x747a00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747b6a;}}
}
B747a06:L747a06:{c.instructions+=2;NFSU2_TR(0x747a06);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747a09:{NFSU2_TR(0x747a09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747a15;}}
}
B747a0b:L747a0b:{c.instructions+=4;NFSU2_TR(0x747a0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747a0e:{NFSU2_TR(0x747a0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747a0f:{NFSU2_TR(0x747a0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747a11:{NFSU2_TR(0x747a11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747a06u);}goto L747a06;}}
}
B747a13:L747a13:{c.instructions+=1;NFSU2_TR(0x747a13);
{goto L747a2d;}
}
B747a15:L747a15:{c.instructions+=3;NFSU2_TR(0x747a15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747a17:{NFSU2_TR(0x747a17);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747a19:{NFSU2_TR(0x747a19);
if(r1(R+518)){{goto L747a2d;}}
}
B747a1b:L747a1b:{c.instructions+=1;NFSU2_TR(0x747a1b);
{goto L747a20;}
}
B747a20:L747a20:{c.instructions+=2;NFSU2_TR(0x747a20);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747a23:{NFSU2_TR(0x747a23);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747a2d;}}
}
B747a25:L747a25:{c.instructions+=4;NFSU2_TR(0x747a25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747a28:{NFSU2_TR(0x747a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747a29:{NFSU2_TR(0x747a29);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B747a2b:{NFSU2_TR(0x747a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747a20u);}goto L747a20;}}
}
B747a2d:L747a2d:{c.instructions+=4;NFSU2_TR(0x747a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747a37:{NFSU2_TR(0x747a37);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747a39:{NFSU2_TR(0x747a39);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747a3c:{NFSU2_TR(0x747a3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747a66;}}
}
B747a3e:L747a3e:{c.instructions+=1;NFSU2_TR(0x747a3e);
__builtin_memmove((R+28),(R+28),4);
}
B747a40:L747a40:{c.instructions+=2;NFSU2_TR(0x747a40);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747a43:{NFSU2_TR(0x747a43);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747a66;}}
}
B747a45:L747a45:{c.instructions+=11;NFSU2_TR(0x747a45);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747a47:{NFSU2_TR(0x747a47);
__builtin_memmove((R+8),(R+4),1);
}
B747a49:{NFSU2_TR(0x747a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747a4f:{NFSU2_TR(0x747a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B747a52:{NFSU2_TR(0x747a52);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B747a55:{NFSU2_TR(0x747a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747a58:{NFSU2_TR(0x747a58);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747a59:{NFSU2_TR(0x747a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747a5f:{NFSU2_TR(0x747a5f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747a61:{NFSU2_TR(0x747a61);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747a64:{NFSU2_TR(0x747a64);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747a40u);}goto L747a40;}}
}
B747a66:L747a66:{c.instructions+=4;NFSU2_TR(0x747a66);
w4(R+12,u32(0x7d2af0ull));
}
B747a6b:{NFSU2_TR(0x747a6b);
__builtin_memmove((R+0),(R+20),4);
}
B747a6d:{NFSU2_TR(0x747a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B747a77:{NFSU2_TR(0x747a77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747a7cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7475c0u);}goto L7475c0;}
}
B747a7c:L747a7c:{c.instructions+=3;NFSU2_TR(0x747a7c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B747a7e:{NFSU2_TR(0x747a7e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747a80:{NFSU2_TR(0x747a80);
if(r1(R+518)){{goto L747ad6;}}
}
B747a82:L747a82:{c.instructions+=4;NFSU2_TR(0x747a82);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747a85:{NFSU2_TR(0x747a85);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747a86:{NFSU2_TR(0x747a86);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747a89:{NFSU2_TR(0x747a89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747aa3;}}
}
B747a8b:L747a8b:{c.instructions+=1;NFSU2_TR(0x747a8b);
{goto L747a90;}
}
B747a90:L747a90:{c.instructions+=2;NFSU2_TR(0x747a90);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747a93:{NFSU2_TR(0x747a93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747a9a;}}
}
B747a95:L747a95:{c.instructions+=2;NFSU2_TR(0x747a95);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747a98:{NFSU2_TR(0x747a98);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747aa3;}}
}
B747a9a:L747a9a:{c.instructions+=4;NFSU2_TR(0x747a9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B747a9d:{NFSU2_TR(0x747a9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747a9e:{NFSU2_TR(0x747a9e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x20ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747aa1:{NFSU2_TR(0x747aa1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747a90u);}goto L747a90;}}
}
B747aa3:L747aa3:{c.instructions+=4;NFSU2_TR(0x747aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747aa9:{NFSU2_TR(0x747aa9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747aab:{NFSU2_TR(0x747aab);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747aae:{NFSU2_TR(0x747aae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747ad6;}}
}
B747ab0:L747ab0:{c.instructions+=2;NFSU2_TR(0x747ab0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B747ab3:{NFSU2_TR(0x747ab3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L747ad6;}}
}
B747ab5:L747ab5:{c.instructions+=11;NFSU2_TR(0x747ab5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B747ab7:{NFSU2_TR(0x747ab7);
__builtin_memmove((R+8),(R+4),1);
}
B747ab9:{NFSU2_TR(0x747ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747abf:{NFSU2_TR(0x747abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B747ac2:{NFSU2_TR(0x747ac2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B747ac5:{NFSU2_TR(0x747ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B747ac8:{NFSU2_TR(0x747ac8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B747ac9:{NFSU2_TR(0x747ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747acf:{NFSU2_TR(0x747acf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B747ad1:{NFSU2_TR(0x747ad1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B747ad4:{NFSU2_TR(0x747ad4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747ab0u);}goto L747ab0;}}
}
B747ad6:L747ad6:{c.instructions+=4;NFSU2_TR(0x747ad6);
w4(R+12,u32(0x7d2ae0ull));
}
B747adb:{NFSU2_TR(0x747adb);
__builtin_memmove((R+0),(R+20),4);
}
B747add:{NFSU2_TR(0x747add);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747ae3:{NFSU2_TR(0x747ae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747ae8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7475c0u);}goto L7475c0;}
}
B747ae8:L747ae8:{c.instructions+=2;NFSU2_TR(0x747ae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747aea:{NFSU2_TR(0x747aea);
if(r1(R+518)){{goto L747b09;}}
}
B747aec:L747aec:{c.instructions+=3;NFSU2_TR(0x747aec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfull))));
}
B747aef:{NFSU2_TR(0x747aef);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B747af3:{NFSU2_TR(0x747af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747af8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747210u);}goto L747210;}
}
B747af8:L747af8:{c.instructions+=3;NFSU2_TR(0x747af8);
__builtin_memmove((R+0),(R+28),4);
}
B747afa:{NFSU2_TR(0x747afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747afb:{NFSU2_TR(0x747afb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747b00ull));
TAIL_STATIC(0x76132du,761);
}
B747b00:L747b00:{c.instructions+=2;NFSU2_TR(0x747b00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B747b03:{NFSU2_TR(0x747b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747b09:L747b09:{c.instructions+=4;NFSU2_TR(0x747b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B747b0f:{NFSU2_TR(0x747b0f);
w4(R+12,u32(0x7d2accull));
}
B747b14:{NFSU2_TR(0x747b14);
__builtin_memmove((R+0),(R+28),4);
}
B747b16:{NFSU2_TR(0x747b16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747b1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7475c0u);}goto L7475c0;}
}
B747b1b:L747b1b:{c.instructions+=11;NFSU2_TR(0x747b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747b21:{NFSU2_TR(0x747b21);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B747b23:{NFSU2_TR(0x747b23);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B747b25:{NFSU2_TR(0x747b25);
w4(R+0,u32(0-u32(r4(R+0))));
}
B747b27:{NFSU2_TR(0x747b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747b2d:{NFSU2_TR(0x747b2d);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xdull));
s1(u32(r4(U+8)),r1(U+12));
}
B747b32:{NFSU2_TR(0x747b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747b38:{NFSU2_TR(0x747b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747b3e:{NFSU2_TR(0x747b3e);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0xaull));
s1(u32(r4(U+8)),r1(U+12));
}
B747b43:{NFSU2_TR(0x747b43);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747b4a:{NFSU2_TR(0x747b4a);
if(r1(R+518)){{goto L747b90;}}
}
B747b4c:L747b4c:{c.instructions+=3;NFSU2_TR(0x747b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747b52:{NFSU2_TR(0x747b52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B747b54:{NFSU2_TR(0x747b54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747b5e;}}
}
B747b56:L747b56:{c.instructions+=2;NFSU2_TR(0x747b56);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B747b5c:{NFSU2_TR(0x747b5c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747b90;}}
}
B747b5e:L747b5e:{c.instructions+=2;NFSU2_TR(0x747b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747b68:{NFSU2_TR(0x747b68);
{goto L747b9a;}
}
B747b6a:L747b6a:{c.instructions+=1;NFSU2_TR(0x747b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747b6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747600u);}goto L747600;}
}
B747b6f:L747b6f:{c.instructions+=7;NFSU2_TR(0x747b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747b70:{NFSU2_TR(0x747b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747b7a:{NFSU2_TR(0x747b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747b7b:{NFSU2_TR(0x747b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747b7c:{NFSU2_TR(0x747b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747b7d:{NFSU2_TR(0x747b7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747b84:{NFSU2_TR(0x747b84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747b89ull));
TAIL_STATIC(0x76115eu,761);
}
B747b89:L747b89:{c.instructions+=2;NFSU2_TR(0x747b89);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747b8f:{NFSU2_TR(0x747b8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747b90:L747b90:{c.instructions+=1;NFSU2_TR(0x747b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747b9a:L747b9a:{c.instructions+=4;NFSU2_TR(0x747b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747ba0:{NFSU2_TR(0x747ba0);
w4(R+12,u32(0x6ull));
}
B747ba5:{NFSU2_TR(0x747ba5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747ba7:{NFSU2_TR(0x747ba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747ce8;}}
}
B747bad:L747bad:{c.instructions+=2;NFSU2_TR(0x747bad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B747baf:{NFSU2_TR(0x747baf);
}
B747bb0:L747bb0:{c.instructions+=3;NFSU2_TR(0x747bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747bb6:{NFSU2_TR(0x747bb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747bb8:{NFSU2_TR(0x747bb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747bce;}}
}
B747bba:L747bba:{c.instructions+=2;NFSU2_TR(0x747bba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747bc0:{NFSU2_TR(0x747bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747bce;}}
}
B747bc2:L747bc2:{c.instructions+=2;NFSU2_TR(0x747bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747bc8:{NFSU2_TR(0x747bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747bce:L747bce:{c.instructions+=5;NFSU2_TR(0x747bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747bd4:{NFSU2_TR(0x747bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747bda:{NFSU2_TR(0x747bda);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B747bdc:{NFSU2_TR(0x747bdc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747bde:{NFSU2_TR(0x747bde);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747c68;}}
}
B747be4:L747be4:{c.instructions+=10;NFSU2_TR(0x747be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747bea:{NFSU2_TR(0x747bea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747beb:{NFSU2_TR(0x747beb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747bec:{NFSU2_TR(0x747bec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747bed:{NFSU2_TR(0x747bed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747bee:{NFSU2_TR(0x747bee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747bf0:{NFSU2_TR(0x747bf0);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B747bf2:{NFSU2_TR(0x747bf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747bf3:{NFSU2_TR(0x747bf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747bf4:{NFSU2_TR(0x747bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747bf9ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B747bf9:L747bf9:{c.instructions+=3;NFSU2_TR(0x747bf9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B747bfc:{NFSU2_TR(0x747bfc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747bfe:{NFSU2_TR(0x747bfe);
if(r1(R+518)){{goto L747ce8;}}
}
B747c04:L747c04:{c.instructions+=2;NFSU2_TR(0x747c04);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747c07:{NFSU2_TR(0x747c07);
if(r1(R+518)){{goto L747ca4;}}
}
B747c0d:L747c0d:{c.instructions+=2;NFSU2_TR(0x747c0d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747c0f:{NFSU2_TR(0x747c0f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747cff;}}
}
B747c15:L747c15:{c.instructions+=10;NFSU2_TR(0x747c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747c1b:{NFSU2_TR(0x747c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B747c21:{NFSU2_TR(0x747c21);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B747c23:{NFSU2_TR(0x747c23);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B747c25:{NFSU2_TR(0x747c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747c2b:{NFSU2_TR(0x747c2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747c2d:{NFSU2_TR(0x747c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747c33:{NFSU2_TR(0x747c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747c39:{NFSU2_TR(0x747c39);
__builtin_memmove((R+4),(R+20),4);
}
B747c3b:{NFSU2_TR(0x747c3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L747c45;}}
}
B747c3d:L747c3d:{c.instructions+=2;NFSU2_TR(0x747c3d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747c3f:{NFSU2_TR(0x747c3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747cde;}}
}
B747c45:L747c45:{c.instructions+=2;NFSU2_TR(0x747c45);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747c4b:{NFSU2_TR(0x747c4b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747bb0u);}goto L747bb0;}}
}
B747c51:L747c51:{c.instructions+=6;NFSU2_TR(0x747c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747c52:{NFSU2_TR(0x747c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747c53:{NFSU2_TR(0x747c53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747c54:{NFSU2_TR(0x747c54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747c55:{NFSU2_TR(0x747c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747c5c:{NFSU2_TR(0x747c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747c61ull));
TAIL_STATIC(0x76115eu,761);
}
B747c61:L747c61:{c.instructions+=2;NFSU2_TR(0x747c61);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747c67:{NFSU2_TR(0x747c67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747c68:L747c68:{c.instructions+=2;NFSU2_TR(0x747c68);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747c6f:{NFSU2_TR(0x747c6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747ce8;}}
}
B747c71:L747c71:{c.instructions+=9;NFSU2_TR(0x747c71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B747c73:{NFSU2_TR(0x747c73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c74:{NFSU2_TR(0x747c74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c75:{NFSU2_TR(0x747c75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c76:{NFSU2_TR(0x747c76);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c7b:{NFSU2_TR(0x747c7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B747c7f:{NFSU2_TR(0x747c7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c80:{NFSU2_TR(0x747c80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747c81:{NFSU2_TR(0x747c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747c86ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B747c86:L747c86:{c.instructions+=3;NFSU2_TR(0x747c86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B747c89:{NFSU2_TR(0x747c89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747c8b:{NFSU2_TR(0x747c8b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747c71u);}goto L747c71;}}
}
B747c8d:L747c8d:{c.instructions+=6;NFSU2_TR(0x747c8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747c8e:{NFSU2_TR(0x747c8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747c8f:{NFSU2_TR(0x747c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747c90:{NFSU2_TR(0x747c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747c91:{NFSU2_TR(0x747c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747c98:{NFSU2_TR(0x747c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747c9dull));
TAIL_STATIC(0x76115eu,761);
}
B747c9d:L747c9d:{c.instructions+=2;NFSU2_TR(0x747c9d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747ca3:{NFSU2_TR(0x747ca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747ca4:L747ca4:{c.instructions+=3;NFSU2_TR(0x747ca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747caa:{NFSU2_TR(0x747caa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747cad:{NFSU2_TR(0x747cad);
if(r1(R+518)){{goto L747cb7;}}
}
B747caf:L747caf:{c.instructions+=2;NFSU2_TR(0x747caf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747cb5:{NFSU2_TR(0x747cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747cff;}}
}
B747cb7:L747cb7:{c.instructions+=5;NFSU2_TR(0x747cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747cbd:{NFSU2_TR(0x747cbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747cc3:{NFSU2_TR(0x747cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747cc5:{NFSU2_TR(0x747cc5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747cc7:{NFSU2_TR(0x747cc7);
if(r1(R+518)){{goto L747cdc;}}
}
B747cc9:L747cc9:{c.instructions+=3;NFSU2_TR(0x747cc9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747ccb:{NFSU2_TR(0x747ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747ccc:{NFSU2_TR(0x747ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747cd1ull));
TAIL_STATIC(0x74a360u,74a);
}
B747cd1:L747cd1:{c.instructions+=3;NFSU2_TR(0x747cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B747cd3:{NFSU2_TR(0x747cd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747cd4:{NFSU2_TR(0x747cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747cd9ull));
TAIL_STATIC(0x74a2d0u,74a);
}
B747cd9:L747cd9:{c.instructions+=1;NFSU2_TR(0x747cd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747cdc:L747cdc:{c.instructions+=1;NFSU2_TR(0x747cdc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B747cde:L747cde:{c.instructions+=1;NFSU2_TR(0x747cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747ce8:L747ce8:{c.instructions+=6;NFSU2_TR(0x747ce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747ce9:{NFSU2_TR(0x747ce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747cea:{NFSU2_TR(0x747cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747ceb:{NFSU2_TR(0x747ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747cec:{NFSU2_TR(0x747cec);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747cf3:{NFSU2_TR(0x747cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747cf8ull));
TAIL_STATIC(0x76115eu,761);
}
B747cf8:L747cf8:{c.instructions+=2;NFSU2_TR(0x747cf8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747cfe:{NFSU2_TR(0x747cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747cff:L747cff:{c.instructions+=2;NFSU2_TR(0x747cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747d09:{NFSU2_TR(0x747d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747d0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747600u);}goto L747600;}
}
B747d0e:L747d0e:{c.instructions+=6;NFSU2_TR(0x747d0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747d15:{NFSU2_TR(0x747d15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747d16:{NFSU2_TR(0x747d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747d17:{NFSU2_TR(0x747d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747d18:{NFSU2_TR(0x747d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747d19:{NFSU2_TR(0x747d19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747d1eull));
TAIL_STATIC(0x76115eu,761);
}
B747d1e:L747d1e:{c.instructions+=2;NFSU2_TR(0x747d1e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x138ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x138ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x138ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747d24:{NFSU2_TR(0x747d24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747d30:L747d30:{c.instructions+=3;NFSU2_TR(0x747d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747d34:{NFSU2_TR(0x747d34);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x646f6e65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747d3a:{NFSU2_TR(0x747d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747d56;}}
}
B747d3c:L747d3c:{c.instructions+=4;NFSU2_TR(0x747d3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d40:{NFSU2_TR(0x747d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d46:{NFSU2_TR(0x747d46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747d49:{NFSU2_TR(0x747d49);
if(r1(R+518)){{goto L747d9f;}}
}
B747d4b:L747d4b:{c.instructions+=5;NFSU2_TR(0x747d4b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B747d4d:{NFSU2_TR(0x747d4d);
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
B747d50:{NFSU2_TR(0x747d50);
__builtin_memmove((R+4),(R+518),1);
}
B747d53:{NFSU2_TR(0x747d53);
__builtin_memmove((R+0),(R+4),4);
}
B747d55:{NFSU2_TR(0x747d55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747d56:L747d56:{c.instructions+=2;NFSU2_TR(0x747d56);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64617461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747d5c:{NFSU2_TR(0x747d5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747d7d;}}
}
B747d5e:L747d5e:{c.instructions+=4;NFSU2_TR(0x747d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747d62:{NFSU2_TR(0x747d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d68:{NFSU2_TR(0x747d68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747d6b:{NFSU2_TR(0x747d6b);
if(r1(R+518)){{goto L747d9f;}}
}
B747d6d:L747d6d:{c.instructions+=2;NFSU2_TR(0x747d6d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747d70:{NFSU2_TR(0x747d70);
if(r1(R+518)){{goto L747d77;}}
}
B747d72:L747d72:{c.instructions+=2;NFSU2_TR(0x747d72);
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
B747d75:{NFSU2_TR(0x747d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747def;}}
}
B747d77:L747d77:{c.instructions+=2;NFSU2_TR(0x747d77);
w4(R+0,u32(0x1ull));
}
B747d7c:{NFSU2_TR(0x747d7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747d7d:L747d7d:{c.instructions+=2;NFSU2_TR(0x747d7d);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6d6f6465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6d6f6465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6d6f6465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747d83:{NFSU2_TR(0x747d83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747d90;}}
}
B747d85:L747d85:{c.instructions+=3;NFSU2_TR(0x747d85);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d89:{NFSU2_TR(0x747d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d8f:{NFSU2_TR(0x747d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747d90:L747d90:{c.instructions+=4;NFSU2_TR(0x747d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747d94:{NFSU2_TR(0x747d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747d9a:{NFSU2_TR(0x747d9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747d9d:{NFSU2_TR(0x747d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747da3;}}
}
B747d9f:L747d9f:{c.instructions+=2;NFSU2_TR(0x747d9f);
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
B747da2:{NFSU2_TR(0x747da2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747da3:L747da3:{c.instructions+=2;NFSU2_TR(0x747da3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747da6:{NFSU2_TR(0x747da6);
if(r1(R+518)){{goto L747db3;}}
}
B747da8:L747da8:{c.instructions+=2;NFSU2_TR(0x747da8);
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
B747dab:{NFSU2_TR(0x747dab);
if(r1(R+518)){{goto L747db3;}}
}
B747dad:L747dad:{c.instructions+=2;NFSU2_TR(0x747dad);
w4(R+0,u32(0xfffffffeull));
}
B747db2:{NFSU2_TR(0x747db2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747db3:L747db3:{c.instructions+=2;NFSU2_TR(0x747db3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x68656164ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x68656164ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x68656164ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747db9:{NFSU2_TR(0x747db9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747dc2;}}
}
B747dbb:L747dbb:{c.instructions+=2;NFSU2_TR(0x747dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747dc1:{NFSU2_TR(0x747dc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747dc2:L747dc2:{c.instructions+=2;NFSU2_TR(0x747dc2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x626f6479ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x626f6479ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x626f6479ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747dc8:{NFSU2_TR(0x747dc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747dd1;}}
}
B747dca:L747dca:{c.instructions+=2;NFSU2_TR(0x747dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747dd0:{NFSU2_TR(0x747dd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747dd1:L747dd1:{c.instructions+=2;NFSU2_TR(0x747dd1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x64617465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x64617465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x64617465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747dd7:{NFSU2_TR(0x747dd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747de0;}}
}
B747dd9:L747dd9:{c.instructions+=2;NFSU2_TR(0x747dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747ddf:{NFSU2_TR(0x747ddf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747de0:L747de0:{c.instructions+=2;NFSU2_TR(0x747de0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x636f6465ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x636f6465ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x636f6465ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747de6:{NFSU2_TR(0x747de6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747def;}}
}
B747de8:L747de8:{c.instructions+=2;NFSU2_TR(0x747de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747dee:{NFSU2_TR(0x747dee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747def:L747def:{c.instructions+=2;NFSU2_TR(0x747def);
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
B747df1:{NFSU2_TR(0x747df1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747e00:L747e00:{c.instructions+=5;NFSU2_TR(0x747e00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747e01:{NFSU2_TR(0x747e01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B747e05:{NFSU2_TR(0x747e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747e0b:{NFSU2_TR(0x747e0b);
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
B747e0e:{NFSU2_TR(0x747e0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747e17;}}
}
B747e10:L747e10:{c.instructions+=3;NFSU2_TR(0x747e10);
w4(R+0,u32(0xfffffffeull));
}
B747e15:{NFSU2_TR(0x747e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747e16:{NFSU2_TR(0x747e16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747e17:L747e17:{c.instructions+=2;NFSU2_TR(0x747e17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747e1a:{NFSU2_TR(0x747e1a);
if(r1(R+518)){{goto L747e28;}}
}
B747e1c:L747e1c:{c.instructions+=2;NFSU2_TR(0x747e1c);
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
B747e1f:{NFSU2_TR(0x747e1f);
if(r1(R+518)){{goto L747e28;}}
}
B747e21:L747e21:{c.instructions+=3;NFSU2_TR(0x747e21);
w4(R+0,u32(0xfffffffdull));
}
B747e26:{NFSU2_TR(0x747e26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747e27:{NFSU2_TR(0x747e27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747e28:L747e28:{c.instructions+=2;NFSU2_TR(0x747e28);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
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
B747e2f:{NFSU2_TR(0x747e2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747e38;}}
}
B747e31:L747e31:{c.instructions+=3;NFSU2_TR(0x747e31);
w4(R+0,u32(0xfffffffcull));
}
B747e36:{NFSU2_TR(0x747e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747e37:{NFSU2_TR(0x747e37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747e38:L747e38:{c.instructions+=3;NFSU2_TR(0x747e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747e3c:{NFSU2_TR(0x747e3c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747e3f:{NFSU2_TR(0x747e3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747e45;}}
}
B747e41:L747e41:{c.instructions+=3;NFSU2_TR(0x747e41);
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
B747e43:{NFSU2_TR(0x747e43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747e44:{NFSU2_TR(0x747e44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747e45:L747e45:{c.instructions+=4;NFSU2_TR(0x747e45);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747e46:{NFSU2_TR(0x747e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B747e4a:{NFSU2_TR(0x747e4a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747e4d:{NFSU2_TR(0x747e4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747e54;}}
}
B747e4f:L747e4f:{c.instructions+=1;NFSU2_TR(0x747e4f);
w4(R+20,u32(0x1ull));
}
B747e54:L747e54:{c.instructions+=2;NFSU2_TR(0x747e54);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747e56:{NFSU2_TR(0x747e56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747e5e;}}
}
B747e58:L747e58:{c.instructions+=2;NFSU2_TR(0x747e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747e5c:{NFSU2_TR(0x747e5c);
__builtin_memmove((R+4),(R+20),4);
}
B747e5e:L747e5e:{c.instructions+=3;NFSU2_TR(0x747e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747e64:{NFSU2_TR(0x747e64);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747e66:{NFSU2_TR(0x747e66);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747e6a;}}
}
B747e68:L747e68:{c.instructions+=1;NFSU2_TR(0x747e68);
__builtin_memmove((R+20),(R+0),4);
}
B747e6a:L747e6a:{c.instructions+=2;NFSU2_TR(0x747e6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747e6c:{NFSU2_TR(0x747e6c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747e74;}}
}
B747e6e:L747e6e:{c.instructions+=2;NFSU2_TR(0x747e6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747e72:{NFSU2_TR(0x747e72);
__builtin_memmove((R+4),(R+0),4);
}
B747e74:L747e74:{c.instructions+=6;NFSU2_TR(0x747e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747e7a:{NFSU2_TR(0x747e7a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B747e7c:{NFSU2_TR(0x747e7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747e7e:{NFSU2_TR(0x747e7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747e7f:{NFSU2_TR(0x747e7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747e80:{NFSU2_TR(0x747e80);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747ecc;}}
}
B747e82:L747e82:{c.instructions+=6;NFSU2_TR(0x747e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747e88:{NFSU2_TR(0x747e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B747e8e:{NFSU2_TR(0x747e8e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B747e90:{NFSU2_TR(0x747e90);
__builtin_memmove((R+0),(R+4),4);
}
B747e92:{NFSU2_TR(0x747e92);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B747e95:{NFSU2_TR(0x747e95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B747e98:L747e98:{c.instructions+=1;NFSU2_TR(0x747e98);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L747e9a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747e98u);}goto L747e98;}
}
B747e9a:L747e9a:{c.instructions+=2;NFSU2_TR(0x747e9a);
__builtin_memmove((R+4),(R+0),4);
}
B747e9c:{NFSU2_TR(0x747e9c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B747e9f:L747e9f:{c.instructions+=1;NFSU2_TR(0x747e9f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L747ea1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747e9fu);}goto L747e9f;}
}
B747ea1:L747ea1:{c.instructions+=7;NFSU2_TR(0x747ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747ea7:{NFSU2_TR(0x747ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747ead:{NFSU2_TR(0x747ead);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B747eaf:{NFSU2_TR(0x747eaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747eb0:{NFSU2_TR(0x747eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747eb6:{NFSU2_TR(0x747eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B747ec0:{NFSU2_TR(0x747ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747ec5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747670u);}goto L747670;}
}
B747ec5:L747ec5:{c.instructions+=2;NFSU2_TR(0x747ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747ec9:{NFSU2_TR(0x747ec9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B747ecc:L747ecc:{c.instructions+=5;NFSU2_TR(0x747ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747ed2:{NFSU2_TR(0x747ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747ed8:{NFSU2_TR(0x747ed8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B747eda:{NFSU2_TR(0x747eda);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B747edc:{NFSU2_TR(0x747edc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L747ee0;}}
}
B747ede:L747ede:{c.instructions+=1;NFSU2_TR(0x747ede);
__builtin_memmove((R+0),(R+4),4);
}
B747ee0:L747ee0:{c.instructions+=2;NFSU2_TR(0x747ee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747ee2:{NFSU2_TR(0x747ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747ef5;}}
}
B747ee4:L747ee4:{c.instructions+=2;NFSU2_TR(0x747ee4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747eeb:{NFSU2_TR(0x747eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747ef5;}}
}
B747eed:L747eed:{c.instructions+=6;NFSU2_TR(0x747eed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747eee:{NFSU2_TR(0x747eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747eef:{NFSU2_TR(0x747eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747ef0:{NFSU2_TR(0x747ef0);
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
B747ef3:{NFSU2_TR(0x747ef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747ef4:{NFSU2_TR(0x747ef4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747ef5:L747ef5:{c.instructions+=2;NFSU2_TR(0x747ef5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B747ef7:{NFSU2_TR(0x747ef7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L747f0e;}}
}
B747ef9:L747ef9:{c.instructions+=3;NFSU2_TR(0x747ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747eff:{NFSU2_TR(0x747eff);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B747f05:{NFSU2_TR(0x747f05);
if(r1(R+518)){{goto L747f0e;}}
}
B747f07:L747f07:{c.instructions+=6;NFSU2_TR(0x747f07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747f08:{NFSU2_TR(0x747f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747f09:{NFSU2_TR(0x747f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747f0a:{NFSU2_TR(0x747f0a);
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
B747f0c:{NFSU2_TR(0x747f0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747f0d:{NFSU2_TR(0x747f0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747f0e:L747f0e:{c.instructions+=3;NFSU2_TR(0x747f0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B747f12:{NFSU2_TR(0x747f12);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747f14:{NFSU2_TR(0x747f14);
if(r1(R+518)){{goto L747f2e;}}
}
B747f16:L747f16:{c.instructions+=5;NFSU2_TR(0x747f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B747f1c:{NFSU2_TR(0x747f1c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B747f1e:{NFSU2_TR(0x747f1e);
__builtin_memmove((R+4),(R+0),4);
}
B747f20:{NFSU2_TR(0x747f20);
__builtin_memmove((R+8),(R+4),4);
}
B747f22:{NFSU2_TR(0x747f22);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B747f25:L747f25:{c.instructions+=1;NFSU2_TR(0x747f25);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L747f27;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747f25u);}goto L747f25;}
}
B747f27:L747f27:{c.instructions+=2;NFSU2_TR(0x747f27);
__builtin_memmove((R+4),(R+8),4);
}
B747f29:{NFSU2_TR(0x747f29);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B747f2c:L747f2c:{c.instructions+=1;NFSU2_TR(0x747f2c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L747f2e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x747f2cu);}goto L747f2c;}
}
B747f2e:L747f2e:{c.instructions+=8;NFSU2_TR(0x747f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747f34:{NFSU2_TR(0x747f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747f35:{NFSU2_TR(0x747f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B747f36:{NFSU2_TR(0x747f36);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B747f38:{NFSU2_TR(0x747f38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747f39:{NFSU2_TR(0x747f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747f3f:{NFSU2_TR(0x747f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747f40:{NFSU2_TR(0x747f40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747f50:L747f50:{c.instructions+=9;NFSU2_TR(0x747f50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B747f53:{NFSU2_TR(0x747f53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747f54:{NFSU2_TR(0x747f54);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747f55:{NFSU2_TR(0x747f55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747f56:{NFSU2_TR(0x747f56);
__builtin_memmove((R+28),(R+0),4);
}
B747f58:{NFSU2_TR(0x747f58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B747f5a:{NFSU2_TR(0x747f5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747f5b:{NFSU2_TR(0x747f5b);
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
B747f5d:{NFSU2_TR(0x747f5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747f60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B747f60:L747f60:{c.instructions+=5;NFSU2_TR(0x747f60);
__builtin_memmove((R+20),(R+0),4);
}
B747f62:{NFSU2_TR(0x747f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747f68:{NFSU2_TR(0x747f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B747f6b:{NFSU2_TR(0x747f6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747f6d:{NFSU2_TR(0x747f6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747f7b;}}
}
B747f6f:L747f6f:{c.instructions+=6;NFSU2_TR(0x747f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747f70:{NFSU2_TR(0x747f70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747f71:{NFSU2_TR(0x747f71);
w4(R+0,u32(0x1ull));
}
B747f76:{NFSU2_TR(0x747f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747f77:{NFSU2_TR(0x747f77);
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
B747f7a:{NFSU2_TR(0x747f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747f7b:L747f7b:{c.instructions+=2;NFSU2_TR(0x747f7b);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x200ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x200ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B747f81:{NFSU2_TR(0x747f81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L747f8d;}}
}
B747f83:L747f83:{c.instructions+=6;NFSU2_TR(0x747f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B747f84:{NFSU2_TR(0x747f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B747f85:{NFSU2_TR(0x747f85);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B747f88:{NFSU2_TR(0x747f88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B747f89:{NFSU2_TR(0x747f89);
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
B747f8c:{NFSU2_TR(0x747f8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B747f8d:L747f8d:{c.instructions+=2;NFSU2_TR(0x747f8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B747f91:{NFSU2_TR(0x747f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L747fa1;}}
}
B747f93:L747f93:{c.instructions+=5;NFSU2_TR(0x747f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747f96:{NFSU2_TR(0x747f96);
__builtin_memmove((R+0),(R+20),4);
}
B747f98:{NFSU2_TR(0x747f98);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B747f9a:{NFSU2_TR(0x747f9a);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xfaull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfaull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B747f9f:{NFSU2_TR(0x747f9f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x748002u,748);}
}
B747fa1:L747fa1:{c.instructions+=2;NFSU2_TR(0x747fa1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747fa2:{NFSU2_TR(0x747fa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747fa7ull));
TAIL_STATIC(0x7430c0u,743);
}
B747fa7:L747fa7:{c.instructions+=6;NFSU2_TR(0x747fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747faa:{NFSU2_TR(0x747faa);
__builtin_memmove((R+12),(R+0),4);
}
B747fac:{NFSU2_TR(0x747fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B747faf:{NFSU2_TR(0x747faf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B747fb1:{NFSU2_TR(0x747fb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747fb2:{NFSU2_TR(0x747fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747fb7ull));
TAIL_STATIC(0x7430c0u,743);
}
B747fb7:L747fb7:{c.instructions+=9;NFSU2_TR(0x747fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B747fba:{NFSU2_TR(0x747fba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747fbe:{NFSU2_TR(0x747fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747fc1:{NFSU2_TR(0x747fc1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B747fc5:{NFSU2_TR(0x747fc5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B747fc6:{NFSU2_TR(0x747fc6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B747fc8:{NFSU2_TR(0x747fc8);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B747fca:{NFSU2_TR(0x747fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B747fcb:{NFSU2_TR(0x747fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x747fd0ull));
TAIL_STATIC(0x7430a0u,743);
}
B747fd0:L747fd0:{c.instructions+=14;NFSU2_TR(0x747fd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B747fd4:{NFSU2_TR(0x747fd4);
u8 U[6];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B747fd9:{NFSU2_TR(0x747fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B747fdd:{NFSU2_TR(0x747fdd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B747fe1:{NFSU2_TR(0x747fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B747fe5:{NFSU2_TR(0x747fe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B747fe7:{NFSU2_TR(0x747fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747fea:{NFSU2_TR(0x747fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B747fed:{NFSU2_TR(0x747fed);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B747ff0:{NFSU2_TR(0x747ff0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0xcull))));
s2(u32(r4(U+0)),r2(U+4));
}
B747ff5:{NFSU2_TR(0x747ff5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B747ff8:{NFSU2_TR(0x747ff8);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x40ull))));
}
B747ffa:{NFSU2_TR(0x747ffa);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B747ffd:{NFSU2_TR(0x747ffd);
w4(R+12,u32(0x1ull));
TAIL_STATIC(0x748002u,748);
}
XIT:NFSU2_TR_EXIT(0x747,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
