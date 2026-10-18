#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x643,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x643,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_643(u8* __restrict R,Cpu& c);
u32 page_643(Cpu& c){return body_643(c.regs.data(),c);}
__attribute__((noinline)) u32 body_643(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x643001:goto L643001;
case 0x643007:c.instructions+=7;goto B643007;
case 0x643009:c.instructions+=6;goto B643009;
case 0x64300a:c.instructions+=5;goto B64300a;
case 0x64300b:c.instructions+=4;goto B64300b;
case 0x64300d:c.instructions+=3;goto B64300d;
case 0x64300e:c.instructions+=2;goto B64300e;
case 0x64300f:c.instructions+=1;goto B64300f;
case 0x643012:goto L643012;
case 0x643014:c.instructions+=8;goto B643014;
case 0x643015:c.instructions+=7;goto B643015;
case 0x643017:c.instructions+=6;goto B643017;
case 0x643018:c.instructions+=5;goto B643018;
case 0x64301b:c.instructions+=4;goto B64301b;
case 0x64301c:c.instructions+=3;goto B64301c;
case 0x64301f:c.instructions+=2;goto B64301f;
case 0x643021:c.instructions+=1;goto B643021;
case 0x643026:goto L643026;
case 0x643028:c.instructions+=1;goto B643028;
case 0x64302a:goto L64302a;
case 0x64302d:c.instructions+=2;goto B64302d;
case 0x643033:c.instructions+=1;goto B643033;
case 0x643035:goto L643035;
case 0x643038:c.instructions+=8;goto B643038;
case 0x64303b:c.instructions+=7;goto B64303b;
case 0x64303e:c.instructions+=6;goto B64303e;
case 0x643040:c.instructions+=5;goto B643040;
case 0x643043:c.instructions+=4;goto B643043;
case 0x643046:c.instructions+=3;goto B643046;
case 0x643048:c.instructions+=2;goto B643048;
case 0x64304b:c.instructions+=1;goto B64304b;
case 0x64304d:goto L64304d;
case 0x643050:c.instructions+=2;goto B643050;
case 0x643053:c.instructions+=1;goto B643053;
case 0x643055:goto L643055;
case 0x643058:c.instructions+=3;goto B643058;
case 0x64305b:c.instructions+=2;goto B64305b;
case 0x64305e:c.instructions+=1;goto B64305e;
case 0x643060:goto L643060;
case 0x643061:c.instructions+=9;goto B643061;
case 0x643064:c.instructions+=8;goto B643064;
case 0x643067:c.instructions+=7;goto B643067;
case 0x643069:c.instructions+=6;goto B643069;
case 0x64306c:c.instructions+=5;goto B64306c;
case 0x64306f:c.instructions+=4;goto B64306f;
case 0x643071:c.instructions+=3;goto B643071;
case 0x643074:c.instructions+=2;goto B643074;
case 0x643076:c.instructions+=1;goto B643076;
case 0x643077:goto L643077;
case 0x643078:c.instructions+=2;goto B643078;
case 0x643079:c.instructions+=1;goto B643079;
case 0x64307c:goto L64307c;
case 0x64307e:c.instructions+=4;goto B64307e;
case 0x64307f:c.instructions+=3;goto B64307f;
case 0x643081:c.instructions+=2;goto B643081;
case 0x643086:c.instructions+=1;goto B643086;
case 0x64308b:goto L64308b;
case 0x64308c:c.instructions+=7;goto B64308c;
case 0x64308f:c.instructions+=6;goto B64308f;
case 0x643091:c.instructions+=5;goto B643091;
case 0x643092:c.instructions+=4;goto B643092;
case 0x643093:c.instructions+=3;goto B643093;
case 0x643099:c.instructions+=2;goto B643099;
case 0x64309e:c.instructions+=1;goto B64309e;
case 0x6430a0:goto L6430a0;
case 0x6430a3:c.instructions+=2;goto B6430a3;
case 0x6430a5:c.instructions+=1;goto B6430a5;
case 0x6430a7:goto L6430a7;
case 0x6430a8:c.instructions+=5;goto B6430a8;
case 0x6430ad:c.instructions+=4;goto B6430ad;
case 0x6430af:c.instructions+=3;goto B6430af;
case 0x6430b0:c.instructions+=2;goto B6430b0;
case 0x6430b1:c.instructions+=1;goto B6430b1;
case 0x6430b6:goto L6430b6;
case 0x6430b9:c.instructions+=2;goto B6430b9;
case 0x6430bb:c.instructions+=1;goto B6430bb;
case 0x6430bd:goto L6430bd;
case 0x6430bf:goto L6430bf;
case 0x6430c6:c.instructions+=1;goto B6430c6;
case 0x6430c8:goto L6430c8;
case 0x6430cb:c.instructions+=2;goto B6430cb;
case 0x6430cd:c.instructions+=1;goto B6430cd;
case 0x6430cf:goto L6430cf;
case 0x6430d0:goto L6430d0;
case 0x6430d1:c.instructions+=4;goto B6430d1;
case 0x6430d6:c.instructions+=3;goto B6430d6;
case 0x6430d7:c.instructions+=2;goto B6430d7;
case 0x6430d8:c.instructions+=1;goto B6430d8;
case 0x6430dd:goto L6430dd;
case 0x6430e0:c.instructions+=2;goto B6430e0;
case 0x6430e2:c.instructions+=1;goto B6430e2;
case 0x6430e4:goto L6430e4;
case 0x6430e6:goto L6430e6;
case 0x6430e8:c.instructions+=1;goto B6430e8;
case 0x6430ea:goto L6430ea;
case 0x6430ee:c.instructions+=1;goto B6430ee;
case 0x6430f0:goto L6430f0;
case 0x6430f3:c.instructions+=4;goto B6430f3;
case 0x6430f8:c.instructions+=3;goto B6430f8;
case 0x6430f9:c.instructions+=2;goto B6430f9;
case 0x6430fa:c.instructions+=1;goto B6430fa;
case 0x6430ff:goto L6430ff;
case 0x643102:c.instructions+=2;goto B643102;
case 0x643104:c.instructions+=1;goto B643104;
case 0x643106:goto L643106;
case 0x643108:goto L643108;
case 0x64310a:c.instructions+=1;goto B64310a;
case 0x64310c:goto L64310c;
case 0x64310f:c.instructions+=5;goto B64310f;
case 0x643110:c.instructions+=4;goto B643110;
case 0x643113:c.instructions+=3;goto B643113;
case 0x643114:c.instructions+=2;goto B643114;
case 0x643115:c.instructions+=1;goto B643115;
case 0x64311a:goto L64311a;
case 0x64311d:c.instructions+=2;goto B64311d;
case 0x64311f:c.instructions+=1;goto B64311f;
case 0x643121:goto L643121;
case 0x643123:goto L643123;
case 0x643126:c.instructions+=7;goto B643126;
case 0x643128:c.instructions+=6;goto B643128;
case 0x64312e:c.instructions+=5;goto B64312e;
case 0x643131:c.instructions+=4;goto B643131;
case 0x643135:c.instructions+=3;goto B643135;
case 0x643138:c.instructions+=2;goto B643138;
case 0x643139:c.instructions+=1;goto B643139;
case 0x64313e:goto L64313e;
case 0x64313f:c.instructions+=4;goto B64313f;
case 0x643140:c.instructions+=3;goto B643140;
case 0x643141:c.instructions+=2;goto B643141;
case 0x643142:c.instructions+=1;goto B643142;
case 0x643143:goto L643143;
case 0x643145:c.instructions+=4;goto B643145;
case 0x643146:c.instructions+=3;goto B643146;
case 0x643148:c.instructions+=2;goto B643148;
case 0x64314d:c.instructions+=1;goto B64314d;
case 0x643152:goto L643152;
case 0x643155:c.instructions+=8;goto B643155;
case 0x643156:c.instructions+=7;goto B643156;
case 0x643157:c.instructions+=6;goto B643157;
case 0x64315a:c.instructions+=5;goto B64315a;
case 0x64315b:c.instructions+=4;goto B64315b;
case 0x64315e:c.instructions+=3;goto B64315e;
case 0x643164:c.instructions+=2;goto B643164;
case 0x643169:c.instructions+=1;goto B643169;
case 0x64316e:goto L64316e;
case 0x643170:c.instructions+=1;goto B643170;
case 0x643176:goto L643176;
case 0x643179:c.instructions+=8;goto B643179;
case 0x64317c:c.instructions+=7;goto B64317c;
case 0x64317f:c.instructions+=6;goto B64317f;
case 0x643182:c.instructions+=5;goto B643182;
case 0x643185:c.instructions+=4;goto B643185;
case 0x643188:c.instructions+=3;goto B643188;
case 0x64318b:c.instructions+=2;goto B64318b;
case 0x64318e:c.instructions+=1;goto B64318e;
case 0x643190:goto L643190;
case 0x643193:c.instructions+=3;goto B643193;
case 0x64319a:c.instructions+=2;goto B64319a;
case 0x64319d:c.instructions+=1;goto B64319d;
case 0x64319f:goto L64319f;
case 0x6431a2:c.instructions+=7;goto B6431a2;
case 0x6431a5:c.instructions+=6;goto B6431a5;
case 0x6431a8:c.instructions+=5;goto B6431a8;
case 0x6431ab:c.instructions+=4;goto B6431ab;
case 0x6431ae:c.instructions+=3;goto B6431ae;
case 0x6431b0:c.instructions+=2;goto B6431b0;
case 0x6431b7:c.instructions+=1;goto B6431b7;
case 0x6431bd:goto L6431bd;
case 0x6431bf:c.instructions+=1;goto B6431bf;
case 0x6431c5:goto L6431c5;
case 0x6431c7:c.instructions+=1;goto B6431c7;
case 0x6431cd:goto L6431cd;
case 0x6431d1:c.instructions+=1;goto B6431d1;
case 0x6431d3:goto L6431d3;
case 0x6431d7:c.instructions+=1;goto B6431d7;
case 0x6431dd:goto L6431dd;
case 0x6431e0:c.instructions+=3;goto B6431e0;
case 0x6431e3:c.instructions+=2;goto B6431e3;
case 0x6431e5:c.instructions+=1;goto B6431e5;
case 0x6431e8:goto L6431e8;
case 0x6431e9:c.instructions+=3;goto B6431e9;
case 0x6431ec:c.instructions+=2;goto B6431ec;
case 0x6431ee:c.instructions+=1;goto B6431ee;
case 0x6431f0:goto L6431f0;
case 0x6431f3:c.instructions+=2;goto B6431f3;
case 0x6431f5:c.instructions+=1;goto B6431f5;
case 0x6431f7:goto L6431f7;
case 0x6431f8:c.instructions+=5;goto B6431f8;
case 0x6431fd:c.instructions+=4;goto B6431fd;
case 0x643203:c.instructions+=3;goto B643203;
case 0x643204:c.instructions+=2;goto B643204;
case 0x643205:c.instructions+=1;goto B643205;
case 0x64320a:goto L64320a;
case 0x64320d:c.instructions+=2;goto B64320d;
case 0x64320f:c.instructions+=1;goto B64320f;
case 0x643211:goto L643211;
case 0x643213:goto L643213;
case 0x64321a:c.instructions+=1;goto B64321a;
case 0x64321c:goto L64321c;
case 0x64321f:c.instructions+=2;goto B64321f;
case 0x643221:c.instructions+=1;goto B643221;
case 0x643223:goto L643223;
case 0x643224:goto L643224;
case 0x643225:c.instructions+=4;goto B643225;
case 0x64322a:c.instructions+=3;goto B64322a;
case 0x64322b:c.instructions+=2;goto B64322b;
case 0x64322c:c.instructions+=1;goto B64322c;
case 0x643231:goto L643231;
case 0x643234:c.instructions+=2;goto B643234;
case 0x643236:c.instructions+=1;goto B643236;
case 0x643238:goto L643238;
case 0x64323a:goto L64323a;
case 0x64323c:c.instructions+=1;goto B64323c;
case 0x64323e:goto L64323e;
case 0x643242:c.instructions+=2;goto B643242;
case 0x643243:c.instructions+=1;goto B643243;
case 0x643245:goto L643245;
case 0x643248:c.instructions+=5;goto B643248;
case 0x64324b:c.instructions+=4;goto B64324b;
case 0x643250:c.instructions+=3;goto B643250;
case 0x643251:c.instructions+=2;goto B643251;
case 0x643252:c.instructions+=1;goto B643252;
case 0x643257:goto L643257;
case 0x64325a:c.instructions+=2;goto B64325a;
case 0x64325c:c.instructions+=1;goto B64325c;
case 0x64325e:goto L64325e;
case 0x643260:goto L643260;
case 0x643262:c.instructions+=1;goto B643262;
case 0x643264:goto L643264;
case 0x643267:c.instructions+=5;goto B643267;
case 0x643268:c.instructions+=4;goto B643268;
case 0x64326b:c.instructions+=3;goto B64326b;
case 0x64326c:c.instructions+=2;goto B64326c;
case 0x64326d:c.instructions+=1;goto B64326d;
case 0x643272:goto L643272;
case 0x643275:c.instructions+=2;goto B643275;
case 0x643277:c.instructions+=1;goto B643277;
case 0x643279:goto L643279;
case 0x64327b:goto L64327b;
case 0x64327e:c.instructions+=8;goto B64327e;
case 0x643280:c.instructions+=7;goto B643280;
case 0x643283:c.instructions+=6;goto B643283;
case 0x643286:c.instructions+=5;goto B643286;
case 0x64328a:c.instructions+=4;goto B64328a;
case 0x64328c:c.instructions+=3;goto B64328c;
case 0x643292:c.instructions+=2;goto B643292;
case 0x643293:c.instructions+=1;goto B643293;
case 0x643298:goto L643298;
case 0x64329a:goto L64329a;
case 0x64329c:goto L64329c;
case 0x64329d:c.instructions+=3;goto B64329d;
case 0x64329e:c.instructions+=2;goto B64329e;
case 0x64329f:c.instructions+=1;goto B64329f;
case 0x6432a0:goto L6432a0;
case 0x6432a2:c.instructions+=10;goto B6432a2;
case 0x6432a3:c.instructions+=9;goto B6432a3;
case 0x6432a5:c.instructions+=8;goto B6432a5;
case 0x6432ab:c.instructions+=7;goto B6432ab;
case 0x6432ac:c.instructions+=6;goto B6432ac;
case 0x6432af:c.instructions+=5;goto B6432af;
case 0x6432b1:c.instructions+=4;goto B6432b1;
case 0x6432b4:c.instructions+=3;goto B6432b4;
case 0x6432b5:c.instructions+=2;goto B6432b5;
case 0x6432b7:c.instructions+=1;goto B6432b7;
case 0x6432bd:goto L6432bd;
case 0x6432c4:goto L6432c4;
case 0x6432c9:c.instructions+=1;goto B6432c9;
case 0x6432ce:goto L6432ce;
case 0x6432d1:c.instructions+=2;goto B6432d1;
case 0x6432d2:c.instructions+=1;goto B6432d2;
case 0x6432d4:goto L6432d4;
case 0x6432d7:c.instructions+=2;goto B6432d7;
case 0x6432dc:c.instructions+=1;goto B6432dc;
case 0x6432de:goto L6432de;
case 0x6432e1:c.instructions+=2;goto B6432e1;
case 0x6432e6:c.instructions+=1;goto B6432e6;
case 0x6432e8:goto L6432e8;
case 0x6432eb:c.instructions+=2;goto B6432eb;
case 0x6432f0:c.instructions+=1;goto B6432f0;
case 0x6432f2:goto L6432f2;
case 0x6432f5:c.instructions+=5;goto B6432f5;
case 0x6432f6:c.instructions+=4;goto B6432f6;
case 0x6432f7:c.instructions+=3;goto B6432f7;
case 0x6432fa:c.instructions+=2;goto B6432fa;
case 0x6432ff:c.instructions+=1;goto B6432ff;
case 0x643301:goto L643301;
case 0x643304:c.instructions+=5;goto B643304;
case 0x643305:c.instructions+=4;goto B643305;
case 0x643306:c.instructions+=3;goto B643306;
case 0x643309:c.instructions+=2;goto B643309;
case 0x64330e:c.instructions+=1;goto B64330e;
case 0x643310:goto L643310;
case 0x643313:c.instructions+=5;goto B643313;
case 0x643314:c.instructions+=4;goto B643314;
case 0x643315:c.instructions+=3;goto B643315;
case 0x643318:c.instructions+=2;goto B643318;
case 0x64331d:c.instructions+=1;goto B64331d;
case 0x64331f:goto L64331f;
case 0x643322:c.instructions+=4;goto B643322;
case 0x643323:c.instructions+=3;goto B643323;
case 0x643324:c.instructions+=2;goto B643324;
case 0x643327:c.instructions+=1;goto B643327;
case 0x64332c:goto L64332c;
case 0x643332:c.instructions+=3;goto B643332;
case 0x643337:c.instructions+=2;goto B643337;
case 0x643338:c.instructions+=1;goto B643338;
case 0x64333d:goto L64333d;
case 0x643340:c.instructions+=1;goto B643340;
case 0x643342:goto L643342;
case 0x643345:goto L643345;
case 0x64334a:goto L64334a;
case 0x643350:c.instructions+=3;goto B643350;
case 0x643355:c.instructions+=2;goto B643355;
case 0x643356:c.instructions+=1;goto B643356;
case 0x64335b:goto L64335b;
case 0x64335e:c.instructions+=1;goto B64335e;
case 0x643360:goto L643360;
case 0x643365:c.instructions+=1;goto B643365;
case 0x643367:goto L643367;
case 0x64336c:c.instructions+=1;goto B64336c;
case 0x64336e:goto L64336e;
case 0x643373:c.instructions+=1;goto B643373;
case 0x643375:goto L643375;
case 0x64337a:goto L64337a;
case 0x643380:c.instructions+=3;goto B643380;
case 0x643385:c.instructions+=2;goto B643385;
case 0x643386:c.instructions+=1;goto B643386;
case 0x64338b:goto L64338b;
case 0x64338e:goto L64338e;
case 0x643394:c.instructions+=6;goto B643394;
case 0x643395:c.instructions+=5;goto B643395;
case 0x64339a:c.instructions+=4;goto B64339a;
case 0x64339d:c.instructions+=3;goto B64339d;
case 0x64339e:c.instructions+=2;goto B64339e;
case 0x64339f:c.instructions+=1;goto B64339f;
case 0x6433a4:goto L6433a4;
case 0x6433a7:c.instructions+=4;goto B6433a7;
case 0x6433a8:c.instructions+=3;goto B6433a8;
case 0x6433a9:c.instructions+=2;goto B6433a9;
case 0x6433aa:c.instructions+=1;goto B6433aa;
case 0x6433e5:goto L6433e5;
case 0x6433e7:c.instructions+=9;goto B6433e7;
case 0x6433e8:c.instructions+=8;goto B6433e8;
case 0x6433ea:c.instructions+=7;goto B6433ea;
case 0x6433eb:c.instructions+=6;goto B6433eb;
case 0x6433ef:c.instructions+=5;goto B6433ef;
case 0x6433f0:c.instructions+=4;goto B6433f0;
case 0x6433f2:c.instructions+=3;goto B6433f2;
case 0x6433f4:c.instructions+=2;goto B6433f4;
case 0x6433f7:c.instructions+=1;goto B6433f7;
case 0x6433fd:goto L6433fd;
case 0x6433fe:goto L6433fe;
case 0x643400:c.instructions+=3;goto B643400;
case 0x643402:c.instructions+=2;goto B643402;
case 0x643405:c.instructions+=1;goto B643405;
case 0x643407:goto L643407;
case 0x643408:c.instructions+=3;goto B643408;
case 0x64340b:c.instructions+=2;goto B64340b;
case 0x643412:c.instructions+=1;goto B643412;
case 0x643417:goto L643417;
case 0x64341a:c.instructions+=1;goto B64341a;
case 0x643420:goto L643420;
case 0x643423:c.instructions+=1;goto B643423;
case 0x643425:goto L643425;
case 0x643428:c.instructions+=1;goto B643428;
case 0x64342e:goto L64342e;
case 0x643431:c.instructions+=1;goto B643431;
case 0x643437:goto L643437;
case 0x64343a:c.instructions+=2;goto B64343a;
case 0x64343d:c.instructions+=1;goto B64343d;
case 0x64343f:goto L64343f;
case 0x643441:c.instructions+=1;goto B643441;
case 0x643443:goto L643443;
case 0x643445:c.instructions+=1;goto B643445;
case 0x64344a:goto L64344a;
case 0x64344f:goto L64344f;
case 0x643452:c.instructions+=1;goto B643452;
case 0x643454:goto L643454;
case 0x643457:c.instructions+=3;goto B643457;
case 0x64345a:c.instructions+=2;goto B64345a;
case 0x64345c:c.instructions+=1;goto B64345c;
case 0x64345e:goto L64345e;
case 0x643461:c.instructions+=1;goto B643461;
case 0x643463:goto L643463;
case 0x643466:c.instructions+=3;goto B643466;
case 0x643468:c.instructions+=2;goto B643468;
case 0x64346a:c.instructions+=1;goto B64346a;
case 0x64346c:goto L64346c;
case 0x64346e:c.instructions+=3;goto B64346e;
case 0x643470:c.instructions+=2;goto B643470;
case 0x643473:c.instructions+=1;goto B643473;
case 0x643475:goto L643475;
case 0x643478:c.instructions+=2;goto B643478;
case 0x64347a:c.instructions+=1;goto B64347a;
case 0x64347c:goto L64347c;
case 0x64347f:c.instructions+=1;goto B64347f;
case 0x643481:goto L643481;
case 0x643484:c.instructions+=1;goto B643484;
case 0x643486:goto L643486;
case 0x643489:goto L643489;
case 0x64348a:c.instructions+=3;goto B64348a;
case 0x64348c:c.instructions+=2;goto B64348c;
case 0x64348f:c.instructions+=1;goto B64348f;
case 0x643491:goto L643491;
case 0x643493:c.instructions+=2;goto B643493;
case 0x643495:c.instructions+=1;goto B643495;
case 0x643497:goto L643497;
case 0x64349a:c.instructions+=1;goto B64349a;
case 0x64349c:goto L64349c;
case 0x6434a1:c.instructions+=5;goto B6434a1;
case 0x6434a6:c.instructions+=4;goto B6434a6;
case 0x6434a9:c.instructions+=3;goto B6434a9;
case 0x6434aa:c.instructions+=2;goto B6434aa;
case 0x6434ad:c.instructions+=1;goto B6434ad;
case 0x6434b2:goto L6434b2;
case 0x6434b5:c.instructions+=1;goto B6434b5;
case 0x6434b7:goto L6434b7;
case 0x6434bb:c.instructions+=1;goto B6434bb;
case 0x6434bd:goto L6434bd;
case 0x6434c0:c.instructions+=1;goto B6434c0;
case 0x6434c2:goto L6434c2;
case 0x6434c5:c.instructions+=1;goto B6434c5;
case 0x6434c7:goto L6434c7;
case 0x6434ca:c.instructions+=2;goto B6434ca;
case 0x6434cd:c.instructions+=1;goto B6434cd;
case 0x6434cf:goto L6434cf;
case 0x6434d2:c.instructions+=1;goto B6434d2;
case 0x6434d4:goto L6434d4;
case 0x6434d7:c.instructions+=1;goto B6434d7;
case 0x6434d9:goto L6434d9;
case 0x6434dc:c.instructions+=1;goto B6434dc;
case 0x6434de:goto L6434de;
case 0x6434e1:c.instructions+=2;goto B6434e1;
case 0x6434e4:c.instructions+=1;goto B6434e4;
case 0x6434e6:goto L6434e6;
case 0x6434ea:c.instructions+=1;goto B6434ea;
case 0x6434ec:goto L6434ec;
case 0x6434ef:c.instructions+=1;goto B6434ef;
case 0x6434f1:goto L6434f1;
case 0x6434f4:goto L6434f4;
case 0x6434f7:c.instructions+=1;goto B6434f7;
case 0x6434f9:goto L6434f9;
case 0x6434fa:goto L6434fa;
case 0x6434fc:goto L6434fc;
case 0x6434fe:c.instructions+=2;goto B6434fe;
case 0x643501:c.instructions+=1;goto B643501;
case 0x643507:goto L643507;
case 0x643508:goto L643508;
case 0x64350b:c.instructions+=3;goto B64350b;
case 0x64350c:c.instructions+=2;goto B64350c;
case 0x64350d:c.instructions+=1;goto B64350d;
case 0x64350e:goto L64350e;
case 0x643510:c.instructions+=9;goto B643510;
case 0x643511:c.instructions+=8;goto B643511;
case 0x643513:c.instructions+=7;goto B643513;
case 0x643516:c.instructions+=6;goto B643516;
case 0x643517:c.instructions+=5;goto B643517;
case 0x643518:c.instructions+=4;goto B643518;
case 0x64351a:c.instructions+=3;goto B64351a;
case 0x64351d:c.instructions+=2;goto B64351d;
case 0x643520:c.instructions+=1;goto B643520;
case 0x643526:goto L643526;
case 0x643529:c.instructions+=1;goto B643529;
case 0x64352b:goto L64352b;
case 0x64352f:c.instructions+=1;goto B64352f;
case 0x643531:goto L643531;
case 0x643534:c.instructions+=2;goto B643534;
case 0x643535:c.instructions+=1;goto B643535;
case 0x64353a:goto L64353a;
case 0x64353c:c.instructions+=2;goto B64353c;
case 0x64353d:c.instructions+=1;goto B64353d;
case 0x64353f:goto L64353f;
case 0x643540:c.instructions+=2;goto B643540;
case 0x643542:c.instructions+=1;goto B643542;
case 0x643544:goto L643544;
case 0x643547:c.instructions+=2;goto B643547;
case 0x643548:c.instructions+=1;goto B643548;
case 0x64354d:goto L64354d;
case 0x64354f:c.instructions+=2;goto B64354f;
case 0x643550:c.instructions+=1;goto B643550;
case 0x643552:goto L643552;
case 0x643554:c.instructions+=3;goto B643554;
case 0x643557:c.instructions+=2;goto B643557;
case 0x643559:c.instructions+=1;goto B643559;
case 0x64355b:goto L64355b;
case 0x64355e:c.instructions+=2;goto B64355e;
case 0x643562:c.instructions+=1;goto B643562;
case 0x643564:goto L643564;
case 0x643566:c.instructions+=2;goto B643566;
case 0x643569:c.instructions+=1;goto B643569;
case 0x64356b:goto L64356b;
case 0x64356f:c.instructions+=1;goto B64356f;
case 0x643571:goto L643571;
case 0x643575:goto L643575;
case 0x643576:goto L643576;
case 0x643579:c.instructions+=1;goto B643579;
case 0x64357b:goto L64357b;
case 0x64357e:c.instructions+=2;goto B64357e;
case 0x643580:c.instructions+=1;goto B643580;
case 0x643582:goto L643582;
case 0x643584:goto L643584;
case 0x643587:c.instructions+=3;goto B643587;
case 0x643588:c.instructions+=2;goto B643588;
case 0x64358b:c.instructions+=1;goto B64358b;
case 0x64358d:goto L64358d;
case 0x643592:c.instructions+=5;goto B643592;
case 0x643597:c.instructions+=4;goto B643597;
case 0x64359a:c.instructions+=3;goto B64359a;
case 0x64359b:c.instructions+=2;goto B64359b;
case 0x64359e:c.instructions+=1;goto B64359e;
case 0x6435a3:goto L6435a3;
case 0x6435a6:goto L6435a6;
case 0x6435a8:c.instructions+=1;goto B6435a8;
case 0x6435aa:goto L6435aa;
case 0x6435ac:goto L6435ac;
case 0x6435ad:c.instructions+=3;goto B6435ad;
case 0x6435ae:c.instructions+=2;goto B6435ae;
case 0x6435af:c.instructions+=1;goto B6435af;
case 0x6435b2:goto L6435b2;
case 0x6435b4:c.instructions+=10;goto B6435b4;
case 0x6435b5:c.instructions+=9;goto B6435b5;
case 0x6435b7:c.instructions+=8;goto B6435b7;
case 0x6435b8:c.instructions+=7;goto B6435b8;
case 0x6435b9:c.instructions+=6;goto B6435b9;
case 0x6435bc:c.instructions+=5;goto B6435bc;
case 0x6435bd:c.instructions+=4;goto B6435bd;
case 0x6435c0:c.instructions+=3;goto B6435c0;
case 0x6435c2:c.instructions+=2;goto B6435c2;
case 0x6435c5:c.instructions+=1;goto B6435c5;
case 0x6435c7:goto L6435c7;
case 0x6435ca:c.instructions+=1;goto B6435ca;
case 0x6435cc:goto L6435cc;
case 0x6435cd:c.instructions+=4;goto B6435cd;
case 0x6435cf:c.instructions+=3;goto B6435cf;
case 0x6435d1:c.instructions+=2;goto B6435d1;
case 0x6435d4:c.instructions+=1;goto B6435d4;
case 0x6435d6:goto L6435d6;
case 0x6435d8:c.instructions+=2;goto B6435d8;
case 0x6435db:c.instructions+=1;goto B6435db;
case 0x6435dd:goto L6435dd;
case 0x6435e0:c.instructions+=1;goto B6435e0;
case 0x6435e2:goto L6435e2;
case 0x6435e7:c.instructions+=1;goto B6435e7;
case 0x6435e9:goto L6435e9;
case 0x6435eb:c.instructions+=1;goto B6435eb;
case 0x6435ec:goto L6435ec;
case 0x6435ef:c.instructions+=2;goto B6435ef;
case 0x6435f3:c.instructions+=1;goto B6435f3;
case 0x6435f4:goto L6435f4;
case 0x6435f6:c.instructions+=1;goto B6435f6;
case 0x6435f8:goto L6435f8;
case 0x6435fb:c.instructions+=2;goto B6435fb;
case 0x6435fd:c.instructions+=1;goto B6435fd;
case 0x6435ff:goto L6435ff;
case 0x643601:goto L643601;
case 0x643603:c.instructions+=1;goto B643603;
case 0x643605:goto L643605;
case 0x643608:c.instructions+=6;goto B643608;
case 0x64360d:c.instructions+=5;goto B64360d;
case 0x643612:c.instructions+=4;goto B643612;
case 0x643615:c.instructions+=3;goto B643615;
case 0x643616:c.instructions+=2;goto B643616;
case 0x643619:c.instructions+=1;goto B643619;
case 0x64361e:goto L64361e;
case 0x643621:goto L643621;
case 0x643623:c.instructions+=3;goto B643623;
case 0x643625:c.instructions+=2;goto B643625;
case 0x643626:c.instructions+=1;goto B643626;
case 0x643628:goto L643628;
case 0x64362a:goto L64362a;
case 0x64362b:c.instructions+=3;goto B64362b;
case 0x64362c:c.instructions+=2;goto B64362c;
case 0x64362d:c.instructions+=1;goto B64362d;
case 0x643630:goto L643630;
case 0x643632:c.instructions+=9;goto B643632;
case 0x643633:c.instructions+=8;goto B643633;
case 0x643635:c.instructions+=7;goto B643635;
case 0x643636:c.instructions+=6;goto B643636;
case 0x643637:c.instructions+=5;goto B643637;
case 0x64363a:c.instructions+=4;goto B64363a;
case 0x64363b:c.instructions+=3;goto B64363b;
case 0x64363d:c.instructions+=2;goto B64363d;
case 0x643640:c.instructions+=1;goto B643640;
case 0x643646:goto L643646;
case 0x643649:c.instructions+=2;goto B643649;
case 0x64364a:c.instructions+=1;goto B64364a;
case 0x64364f:goto L64364f;
case 0x643651:c.instructions+=2;goto B643651;
case 0x643652:c.instructions+=1;goto B643652;
case 0x643654:goto L643654;
case 0x643655:c.instructions+=5;goto B643655;
case 0x643657:c.instructions+=4;goto B643657;
case 0x643659:c.instructions+=3;goto B643659;
case 0x64365c:c.instructions+=2;goto B64365c;
case 0x64365f:c.instructions+=1;goto B64365f;
case 0x643661:goto L643661;
case 0x643664:c.instructions+=2;goto B643664;
case 0x643665:c.instructions+=1;goto B643665;
case 0x64366a:goto L64366a;
case 0x64366c:c.instructions+=2;goto B64366c;
case 0x64366d:c.instructions+=1;goto B64366d;
case 0x64366f:goto L64366f;
case 0x643675:c.instructions+=1;goto B643675;
case 0x643677:goto L643677;
case 0x64367e:goto L64367e;
case 0x643681:c.instructions+=5;goto B643681;
case 0x643684:c.instructions+=4;goto B643684;
case 0x643686:c.instructions+=3;goto B643686;
case 0x64368a:c.instructions+=2;goto B64368a;
case 0x64368c:c.instructions+=1;goto B64368c;
case 0x64368e:goto L64368e;
case 0x643695:goto L643695;
case 0x643696:c.instructions+=2;goto B643696;
case 0x643699:c.instructions+=1;goto B643699;
case 0x64369b:goto L64369b;
case 0x64369e:c.instructions+=2;goto B64369e;
case 0x6436a0:c.instructions+=1;goto B6436a0;
case 0x6436a2:goto L6436a2;
case 0x6436a4:goto L6436a4;
case 0x6436a8:c.instructions+=2;goto B6436a8;
case 0x6436a9:c.instructions+=1;goto B6436a9;
case 0x6436ab:goto L6436ab;
case 0x6436b0:c.instructions+=5;goto B6436b0;
case 0x6436b5:c.instructions+=4;goto B6436b5;
case 0x6436b8:c.instructions+=3;goto B6436b8;
case 0x6436b9:c.instructions+=2;goto B6436b9;
case 0x6436bc:c.instructions+=1;goto B6436bc;
case 0x6436c1:goto L6436c1;
case 0x6436c4:goto L6436c4;
case 0x6436c6:c.instructions+=2;goto B6436c6;
case 0x6436c9:c.instructions+=1;goto B6436c9;
case 0x6436cb:goto L6436cb;
case 0x6436cd:goto L6436cd;
case 0x6436ce:c.instructions+=3;goto B6436ce;
case 0x6436cf:c.instructions+=2;goto B6436cf;
case 0x6436d0:c.instructions+=1;goto B6436d0;
case 0x6436d3:goto L6436d3;
case 0x6436d5:c.instructions+=9;goto B6436d5;
case 0x6436d6:c.instructions+=8;goto B6436d6;
case 0x6436d8:c.instructions+=7;goto B6436d8;
case 0x6436d9:c.instructions+=6;goto B6436d9;
case 0x6436db:c.instructions+=5;goto B6436db;
case 0x6436de:c.instructions+=4;goto B6436de;
case 0x6436df:c.instructions+=3;goto B6436df;
case 0x6436e2:c.instructions+=2;goto B6436e2;
case 0x6436e4:c.instructions+=1;goto B6436e4;
case 0x6436e6:goto L6436e6;
case 0x6436e8:c.instructions+=1;goto B6436e8;
case 0x6436ed:goto L6436ed;
case 0x6436ef:c.instructions+=3;goto B6436ef;
case 0x6436f2:c.instructions+=2;goto B6436f2;
case 0x6436f3:c.instructions+=1;goto B6436f3;
case 0x6436f9:goto L6436f9;
case 0x6436fd:c.instructions+=1;goto B6436fd;
case 0x643703:goto L643703;
case 0x643706:c.instructions+=2;goto B643706;
case 0x643708:c.instructions+=1;goto B643708;
case 0x64370a:goto L64370a;
case 0x64370f:c.instructions+=5;goto B64370f;
case 0x643714:c.instructions+=4;goto B643714;
case 0x643717:c.instructions+=3;goto B643717;
case 0x643718:c.instructions+=2;goto B643718;
case 0x64371b:c.instructions+=1;goto B64371b;
case 0x643720:goto L643720;
case 0x643723:goto L643723;
case 0x643725:c.instructions+=3;goto B643725;
case 0x643728:c.instructions+=2;goto B643728;
case 0x64372b:c.instructions+=1;goto B64372b;
case 0x643731:goto L643731;
case 0x643732:c.instructions+=1;goto B643732;
case 0x643738:goto L643738;
case 0x64373b:c.instructions+=1;goto B64373b;
case 0x643741:goto L643741;
case 0x643744:c.instructions+=1;goto B643744;
case 0x64374a:goto L64374a;
case 0x64374d:c.instructions+=1;goto B64374d;
case 0x643753:goto L643753;
case 0x643754:c.instructions+=2;goto B643754;
case 0x643755:c.instructions+=1;goto B643755;
case 0x64375b:goto L64375b;
case 0x64375c:c.instructions+=2;goto B64375c;
case 0x64375d:c.instructions+=1;goto B64375d;
case 0x643763:goto L643763;
case 0x643766:c.instructions+=1;goto B643766;
case 0x643768:goto L643768;
case 0x64376b:c.instructions+=1;goto B64376b;
case 0x64376d:goto L64376d;
case 0x643770:c.instructions+=3;goto B643770;
case 0x643773:c.instructions+=2;goto B643773;
case 0x643775:c.instructions+=1;goto B643775;
case 0x643777:goto L643777;
case 0x643779:goto L643779;
case 0x64377b:c.instructions+=1;goto B64377b;
case 0x64377d:goto L64377d;
case 0x64377f:c.instructions+=2;goto B64377f;
case 0x643781:c.instructions+=1;goto B643781;
case 0x643783:goto L643783;
case 0x643785:c.instructions+=1;goto B643785;
case 0x643787:goto L643787;
case 0x64378a:c.instructions+=2;goto B64378a;
case 0x64378e:c.instructions+=1;goto B64378e;
case 0x64378f:goto L64378f;
case 0x643791:c.instructions+=1;goto B643791;
case 0x643793:goto L643793;
case 0x643796:c.instructions+=2;goto B643796;
case 0x643798:c.instructions+=1;goto B643798;
case 0x64379d:goto L64379d;
case 0x6437a0:c.instructions+=1;goto B6437a0;
case 0x6437a2:goto L6437a2;
case 0x6437a5:c.instructions+=2;goto B6437a5;
case 0x6437a8:c.instructions+=1;goto B6437a8;
case 0x6437aa:goto L6437aa;
case 0x6437ad:c.instructions+=2;goto B6437ad;
case 0x6437ae:c.instructions+=1;goto B6437ae;
case 0x6437b3:goto L6437b3;
case 0x6437b5:c.instructions+=2;goto B6437b5;
case 0x6437b6:c.instructions+=1;goto B6437b6;
case 0x6437b8:goto L6437b8;
case 0x6437ba:c.instructions+=2;goto B6437ba;
case 0x6437bc:c.instructions+=1;goto B6437bc;
case 0x6437be:goto L6437be;
case 0x6437c1:c.instructions+=2;goto B6437c1;
case 0x6437c2:c.instructions+=1;goto B6437c2;
case 0x6437c7:goto L6437c7;
case 0x6437c9:c.instructions+=2;goto B6437c9;
case 0x6437ca:c.instructions+=1;goto B6437ca;
case 0x6437cc:goto L6437cc;
case 0x6437ce:c.instructions+=3;goto B6437ce;
case 0x6437d1:c.instructions+=2;goto B6437d1;
case 0x6437d3:c.instructions+=1;goto B6437d3;
case 0x6437d5:goto L6437d5;
case 0x6437d8:c.instructions+=2;goto B6437d8;
case 0x6437dc:c.instructions+=1;goto B6437dc;
case 0x6437de:goto L6437de;
case 0x6437e0:c.instructions+=2;goto B6437e0;
case 0x6437e3:c.instructions+=1;goto B6437e3;
case 0x6437e5:goto L6437e5;
case 0x6437e9:c.instructions+=1;goto B6437e9;
case 0x6437eb:goto L6437eb;
case 0x6437ef:goto L6437ef;
case 0x6437f0:goto L6437f0;
case 0x6437f3:c.instructions+=1;goto B6437f3;
case 0x6437f5:goto L6437f5;
case 0x6437f8:c.instructions+=3;goto B6437f8;
case 0x6437fa:c.instructions+=2;goto B6437fa;
case 0x6437fd:c.instructions+=1;goto B6437fd;
case 0x6437ff:goto L6437ff;
case 0x643802:goto L643802;
case 0x643805:c.instructions+=2;goto B643805;
case 0x643806:c.instructions+=1;goto B643806;
case 0x643808:goto L643808;
case 0x64380b:c.instructions+=2;goto B64380b;
case 0x643811:c.instructions+=1;goto B643811;
case 0x643813:goto L643813;
case 0x643816:c.instructions+=2;goto B643816;
case 0x64381c:c.instructions+=1;goto B64381c;
case 0x64381e:goto L64381e;
case 0x643821:c.instructions+=2;goto B643821;
case 0x643827:c.instructions+=1;goto B643827;
case 0x643829:goto L643829;
case 0x64382c:c.instructions+=2;goto B64382c;
case 0x643832:c.instructions+=1;goto B643832;
case 0x643834:goto L643834;
case 0x643837:c.instructions+=2;goto B643837;
case 0x64383d:c.instructions+=1;goto B64383d;
case 0x64383f:goto L64383f;
case 0x643842:c.instructions+=1;goto B643842;
case 0x643848:goto L643848;
case 0x643849:c.instructions+=1;goto B643849;
case 0x64384b:goto L64384b;
case 0x64384e:c.instructions+=2;goto B64384e;
case 0x643854:c.instructions+=1;goto B643854;
case 0x643856:goto L643856;
case 0x643859:c.instructions+=1;goto B643859;
case 0x64385c:goto L64385c;
case 0x64385f:c.instructions+=1;goto B64385f;
case 0x643861:goto L643861;
case 0x643863:c.instructions+=2;goto B643863;
case 0x643865:c.instructions+=1;goto B643865;
case 0x643866:goto L643866;
case 0x643867:c.instructions+=3;goto B643867;
case 0x643868:c.instructions+=2;goto B643868;
case 0x643869:c.instructions+=1;goto B643869;
case 0x64386c:goto L64386c;
case 0x64386e:c.instructions+=7;goto B64386e;
case 0x64386f:c.instructions+=6;goto B64386f;
case 0x643871:c.instructions+=5;goto B643871;
case 0x643874:c.instructions+=4;goto B643874;
case 0x643875:c.instructions+=3;goto B643875;
case 0x643877:c.instructions+=2;goto B643877;
case 0x64387b:c.instructions+=1;goto B64387b;
case 0x64387d:goto L64387d;
case 0x64387f:c.instructions+=1;goto B64387f;
case 0x643884:goto L643884;
case 0x643885:c.instructions+=5;goto B643885;
case 0x643888:c.instructions+=4;goto B643888;
case 0x643889:c.instructions+=3;goto B643889;
case 0x64388c:c.instructions+=2;goto B64388c;
case 0x64388f:c.instructions+=1;goto B64388f;
case 0x643895:goto L643895;
case 0x643898:c.instructions+=2;goto B643898;
case 0x643899:c.instructions+=1;goto B643899;
case 0x64389e:goto L64389e;
case 0x6438a0:c.instructions+=2;goto B6438a0;
case 0x6438a1:c.instructions+=1;goto B6438a1;
case 0x6438a7:goto L6438a7;
case 0x6438aa:c.instructions+=2;goto B6438aa;
case 0x6438ab:c.instructions+=1;goto B6438ab;
case 0x6438b0:goto L6438b0;
case 0x6438b2:c.instructions+=2;goto B6438b2;
case 0x6438b3:c.instructions+=1;goto B6438b3;
case 0x6438b9:goto L6438b9;
case 0x6438bc:c.instructions+=2;goto B6438bc;
case 0x6438bf:c.instructions+=1;goto B6438bf;
case 0x6438c5:goto L6438c5;
case 0x6438c8:c.instructions+=1;goto B6438c8;
case 0x6438ce:goto L6438ce;
case 0x6438d1:c.instructions+=5;goto B6438d1;
case 0x6438d2:c.instructions+=4;goto B6438d2;
case 0x6438d3:c.instructions+=3;goto B6438d3;
case 0x6438d4:c.instructions+=2;goto B6438d4;
case 0x6438d6:c.instructions+=1;goto B6438d6;
case 0x6438db:goto L6438db;
case 0x6438dd:c.instructions+=1;goto B6438dd;
case 0x6438e3:goto L6438e3;
case 0x6438ea:c.instructions+=1;goto B6438ea;
case 0x6438ec:goto L6438ec;
case 0x6438ee:c.instructions+=2;goto B6438ee;
case 0x6438f1:c.instructions+=1;goto B6438f1;
case 0x6438f3:goto L6438f3;
case 0x6438f6:c.instructions+=1;goto B6438f6;
case 0x6438f8:goto L6438f8;
case 0x6438fb:c.instructions+=5;goto B6438fb;
case 0x6438fc:c.instructions+=4;goto B6438fc;
case 0x6438fd:c.instructions+=3;goto B6438fd;
case 0x6438fe:c.instructions+=2;goto B6438fe;
case 0x643900:c.instructions+=1;goto B643900;
case 0x643905:goto L643905;
case 0x643907:c.instructions+=1;goto B643907;
case 0x643909:goto L643909;
case 0x64390c:c.instructions+=4;goto B64390c;
case 0x64390d:c.instructions+=3;goto B64390d;
case 0x64390e:c.instructions+=2;goto B64390e;
case 0x643910:c.instructions+=1;goto B643910;
case 0x643915:goto L643915;
case 0x643917:c.instructions+=1;goto B643917;
case 0x643919:goto L643919;
case 0x64391d:goto L64391d;
case 0x643924:c.instructions+=1;goto B643924;
case 0x643926:goto L643926;
case 0x643928:c.instructions+=4;goto B643928;
case 0x64392a:c.instructions+=3;goto B64392a;
case 0x64392c:c.instructions+=2;goto B64392c;
case 0x64392f:c.instructions+=1;goto B64392f;
case 0x643931:goto L643931;
case 0x643933:c.instructions+=3;goto B643933;
case 0x643935:c.instructions+=2;goto B643935;
case 0x643938:c.instructions+=1;goto B643938;
case 0x64393b:goto L64393b;
case 0x64393d:goto L64393d;
case 0x64393f:c.instructions+=5;goto B64393f;
case 0x643942:c.instructions+=4;goto B643942;
case 0x643943:c.instructions+=3;goto B643943;
case 0x643946:c.instructions+=2;goto B643946;
case 0x643948:c.instructions+=1;goto B643948;
case 0x64394b:goto L64394b;
case 0x64394d:goto L64394d;
case 0x64394e:c.instructions+=2;goto B64394e;
case 0x643953:c.instructions+=1;goto B643953;
case 0x643958:goto L643958;
case 0x64395a:c.instructions+=1;goto B64395a;
case 0x64395c:goto L64395c;
case 0x64395f:c.instructions+=4;goto B64395f;
case 0x643962:c.instructions+=3;goto B643962;
case 0x643964:c.instructions+=2;goto B643964;
case 0x643966:c.instructions+=1;goto B643966;
case 0x643968:goto L643968;
case 0x64396a:goto L64396a;
case 0x64396b:c.instructions+=1;goto B64396b;
case 0x64396c:goto L64396c;
case 0x64396d:c.instructions+=2;goto B64396d;
case 0x64396e:c.instructions+=1;goto B64396e;
case 0x643971:goto L643971;
case 0x643973:c.instructions+=9;goto B643973;
case 0x643974:c.instructions+=8;goto B643974;
case 0x643976:c.instructions+=7;goto B643976;
case 0x643977:c.instructions+=6;goto B643977;
case 0x643978:c.instructions+=5;goto B643978;
case 0x643979:c.instructions+=4;goto B643979;
case 0x64397c:c.instructions+=3;goto B64397c;
case 0x64397e:c.instructions+=2;goto B64397e;
case 0x643981:c.instructions+=1;goto B643981;
case 0x643983:goto L643983;
case 0x643986:c.instructions+=1;goto B643986;
case 0x643988:goto L643988;
case 0x64398b:c.instructions+=3;goto B64398b;
case 0x64398e:c.instructions+=2;goto B64398e;
case 0x64398f:c.instructions+=1;goto B64398f;
case 0x643994:goto L643994;
case 0x643996:c.instructions+=1;goto B643996;
case 0x643998:goto L643998;
case 0x64399a:c.instructions+=2;goto B64399a;
case 0x64399d:c.instructions+=1;goto B64399d;
case 0x64399f:goto L64399f;
case 0x6439a2:c.instructions+=1;goto B6439a2;
case 0x6439a4:goto L6439a4;
case 0x6439a6:c.instructions+=3;goto B6439a6;
case 0x6439a8:c.instructions+=2;goto B6439a8;
case 0x6439a9:c.instructions+=1;goto B6439a9;
case 0x6439ab:goto L6439ab;
case 0x6439ad:goto L6439ad;
case 0x6439ae:c.instructions+=4;goto B6439ae;
case 0x6439af:c.instructions+=3;goto B6439af;
case 0x6439b0:c.instructions+=2;goto B6439b0;
case 0x6439b1:c.instructions+=1;goto B6439b1;
case 0x6439b4:goto L6439b4;
case 0x6439b6:c.instructions+=12;goto B6439b6;
case 0x6439b7:c.instructions+=11;goto B6439b7;
case 0x6439b9:c.instructions+=10;goto B6439b9;
case 0x6439ba:c.instructions+=9;goto B6439ba;
case 0x6439bb:c.instructions+=8;goto B6439bb;
case 0x6439bc:c.instructions+=7;goto B6439bc;
case 0x6439bf:c.instructions+=6;goto B6439bf;
case 0x6439c0:c.instructions+=5;goto B6439c0;
case 0x6439c1:c.instructions+=4;goto B6439c1;
case 0x6439c3:c.instructions+=3;goto B6439c3;
case 0x6439c6:c.instructions+=2;goto B6439c6;
case 0x6439c8:c.instructions+=1;goto B6439c8;
case 0x6439ce:goto L6439ce;
case 0x6439d0:c.instructions+=2;goto B6439d0;
case 0x6439d2:c.instructions+=1;goto B6439d2;
case 0x6439d4:goto L6439d4;
case 0x6439d7:c.instructions+=1;goto B6439d7;
case 0x6439d9:goto L6439d9;
case 0x6439db:c.instructions+=1;goto B6439db;
case 0x6439e1:goto L6439e1;
case 0x6439e5:c.instructions+=1;goto B6439e5;
case 0x6439eb:goto L6439eb;
case 0x6439ef:goto L6439ef;
case 0x6439f2:c.instructions+=3;goto B6439f2;
case 0x6439f4:c.instructions+=2;goto B6439f4;
case 0x6439f7:c.instructions+=1;goto B6439f7;
case 0x6439f9:goto L6439f9;
case 0x6439fc:goto L6439fc;
case 0x6439fe:c.instructions+=2;goto B6439fe;
case 0x643a01:c.instructions+=1;goto B643a01;
case 0x643a03:goto L643a03;
case 0x643a05:c.instructions+=1;goto B643a05;
case 0x643a07:goto L643a07;
case 0x643a09:c.instructions+=1;goto B643a09;
case 0x643a0b:goto L643a0b;
case 0x643a0f:c.instructions+=1;goto B643a0f;
case 0x643a11:goto L643a11;
case 0x643a14:c.instructions+=4;goto B643a14;
case 0x643a15:c.instructions+=3;goto B643a15;
case 0x643a16:c.instructions+=2;goto B643a16;
case 0x643a18:c.instructions+=1;goto B643a18;
case 0x643a1a:goto L643a1a;
case 0x643a1c:c.instructions+=2;goto B643a1c;
case 0x643a1e:c.instructions+=1;goto B643a1e;
case 0x643a20:goto L643a20;
case 0x643a22:c.instructions+=1;goto B643a22;
case 0x643a24:goto L643a24;
case 0x643a26:c.instructions+=1;goto B643a26;
case 0x643a28:goto L643a28;
case 0x643a2b:c.instructions+=1;goto B643a2b;
case 0x643a2d:goto L643a2d;
case 0x643a2e:c.instructions+=1;goto B643a2e;
case 0x643a2f:goto L643a2f;
case 0x643a32:goto L643a32;
case 0x643a33:c.instructions+=3;goto B643a33;
case 0x643a34:c.instructions+=2;goto B643a34;
case 0x643a37:c.instructions+=1;goto B643a37;
case 0x643a39:goto L643a39;
case 0x643a3c:c.instructions+=2;goto B643a3c;
case 0x643a3e:c.instructions+=1;goto B643a3e;
case 0x643a40:goto L643a40;
case 0x643a45:c.instructions+=3;goto B643a45;
case 0x643a47:c.instructions+=2;goto B643a47;
case 0x643a4c:c.instructions+=1;goto B643a4c;
case 0x643a4e:goto L643a4e;
case 0x643a51:c.instructions+=1;goto B643a51;
case 0x643a53:goto L643a53;
case 0x643a58:c.instructions+=1;goto B643a58;
case 0x643a5d:goto L643a5d;
case 0x643a60:c.instructions+=3;goto B643a60;
case 0x643a61:c.instructions+=2;goto B643a61;
case 0x643a64:c.instructions+=1;goto B643a64;
case 0x643a69:goto L643a69;
case 0x643a6c:goto L643a6c;
case 0x643a6f:c.instructions+=6;goto B643a6f;
case 0x643a72:c.instructions+=5;goto B643a72;
case 0x643a74:c.instructions+=4;goto B643a74;
case 0x643a76:c.instructions+=3;goto B643a76;
case 0x643a77:c.instructions+=2;goto B643a77;
case 0x643a7a:c.instructions+=1;goto B643a7a;
case 0x643a7f:goto L643a7f;
case 0x643a81:c.instructions+=2;goto B643a81;
case 0x643a83:c.instructions+=1;goto B643a83;
case 0x643a85:goto L643a85;
case 0x643a88:c.instructions+=2;goto B643a88;
case 0x643a8b:c.instructions+=1;goto B643a8b;
case 0x643a8d:goto L643a8d;
case 0x643a90:c.instructions+=2;goto B643a90;
case 0x643a93:c.instructions+=1;goto B643a93;
case 0x643a95:goto L643a95;
case 0x643a97:c.instructions+=1;goto B643a97;
case 0x643a9a:goto L643a9a;
case 0x643a9d:c.instructions+=1;goto B643a9d;
case 0x643a9f:goto L643a9f;
case 0x643aa3:c.instructions+=1;goto B643aa3;
case 0x643aa5:goto L643aa5;
case 0x643aa7:c.instructions+=2;goto B643aa7;
case 0x643aaa:c.instructions+=1;goto B643aaa;
case 0x643aac:goto L643aac;
case 0x643aad:c.instructions+=6;goto B643aad;
case 0x643aae:c.instructions+=5;goto B643aae;
case 0x643aaf:c.instructions+=4;goto B643aaf;
case 0x643ab0:c.instructions+=3;goto B643ab0;
case 0x643ab1:c.instructions+=2;goto B643ab1;
case 0x643ab2:c.instructions+=1;goto B643ab2;
case 0x643ab4:goto L643ab4;
case 0x643ab7:c.instructions+=1;goto B643ab7;
case 0x643ab9:goto L643ab9;
case 0x643abc:c.instructions+=1;goto B643abc;
case 0x643abe:goto L643abe;
case 0x643ac1:c.instructions+=1;goto B643ac1;
case 0x643ac3:goto L643ac3;
case 0x643ac6:c.instructions+=2;goto B643ac6;
case 0x643ac9:c.instructions+=1;goto B643ac9;
case 0x643acc:goto L643acc;
case 0x643acf:c.instructions+=1;goto B643acf;
case 0x643ad1:goto L643ad1;
case 0x643ad4:c.instructions+=1;goto B643ad4;
case 0x643ad6:goto L643ad6;
case 0x643ad9:c.instructions+=4;goto B643ad9;
case 0x643ada:c.instructions+=3;goto B643ada;
case 0x643adb:c.instructions+=2;goto B643adb;
case 0x643add:c.instructions+=1;goto B643add;
case 0x643ae2:goto L643ae2;
case 0x643ae4:c.instructions+=4;goto B643ae4;
case 0x643ae7:c.instructions+=3;goto B643ae7;
case 0x643ae9:c.instructions+=2;goto B643ae9;
case 0x643aea:c.instructions+=1;goto B643aea;
case 0x643aec:goto L643aec;
case 0x643aef:c.instructions+=3;goto B643aef;
case 0x643af2:c.instructions+=2;goto B643af2;
case 0x643af3:c.instructions+=1;goto B643af3;
case 0x643af5:goto L643af5;
case 0x643af7:goto L643af7;
case 0x643af8:c.instructions+=4;goto B643af8;
case 0x643af9:c.instructions+=3;goto B643af9;
case 0x643afa:c.instructions+=2;goto B643afa;
case 0x643afb:c.instructions+=1;goto B643afb;
case 0x643afe:goto L643afe;
case 0x643b00:c.instructions+=15;goto B643b00;
case 0x643b01:c.instructions+=14;goto B643b01;
case 0x643b03:c.instructions+=13;goto B643b03;
case 0x643b06:c.instructions+=12;goto B643b06;
case 0x643b07:c.instructions+=11;goto B643b07;
case 0x643b08:c.instructions+=10;goto B643b08;
case 0x643b0a:c.instructions+=9;goto B643b0a;
case 0x643b0d:c.instructions+=8;goto B643b0d;
case 0x643b10:c.instructions+=7;goto B643b10;
case 0x643b11:c.instructions+=6;goto B643b11;
case 0x643b14:c.instructions+=5;goto B643b14;
case 0x643b17:c.instructions+=4;goto B643b17;
case 0x643b1a:c.instructions+=3;goto B643b1a;
case 0x643b1c:c.instructions+=2;goto B643b1c;
case 0x643b1f:c.instructions+=1;goto B643b1f;
case 0x643b24:goto L643b24;
case 0x643b26:c.instructions+=1;goto B643b26;
case 0x643b28:goto L643b28;
case 0x643b2e:c.instructions+=1;goto B643b2e;
case 0x643b33:goto L643b33;
case 0x643b36:c.instructions+=6;goto B643b36;
case 0x643b39:c.instructions+=5;goto B643b39;
case 0x643b3c:c.instructions+=4;goto B643b3c;
case 0x643b3f:c.instructions+=3;goto B643b3f;
case 0x643b41:c.instructions+=2;goto B643b41;
case 0x643b44:c.instructions+=1;goto B643b44;
case 0x643b46:goto L643b46;
case 0x643b4c:c.instructions+=1;goto B643b4c;
case 0x643b51:goto L643b51;
case 0x643b53:c.instructions+=2;goto B643b53;
case 0x643b56:c.instructions+=1;goto B643b56;
case 0x643b58:goto L643b58;
case 0x643b5b:c.instructions+=1;goto B643b5b;
case 0x643b5d:goto L643b5d;
case 0x643b60:c.instructions+=1;goto B643b60;
case 0x643b62:goto L643b62;
case 0x643b65:c.instructions+=4;goto B643b65;
case 0x643b66:c.instructions+=3;goto B643b66;
case 0x643b67:c.instructions+=2;goto B643b67;
case 0x643b69:c.instructions+=1;goto B643b69;
case 0x643b6e:goto L643b6e;
case 0x643b70:c.instructions+=3;goto B643b70;
case 0x643b72:c.instructions+=2;goto B643b72;
case 0x643b74:c.instructions+=1;goto B643b74;
case 0x643b76:goto L643b76;
case 0x643b7c:c.instructions+=5;goto B643b7c;
case 0x643b7e:c.instructions+=4;goto B643b7e;
case 0x643b7f:c.instructions+=3;goto B643b7f;
case 0x643b81:c.instructions+=2;goto B643b81;
case 0x643b82:c.instructions+=1;goto B643b82;
case 0x643b87:goto L643b87;
case 0x643b89:c.instructions+=1;goto B643b89;
case 0x643b8e:goto L643b8e;
case 0x643b91:c.instructions+=3;goto B643b91;
case 0x643b92:c.instructions+=2;goto B643b92;
case 0x643b94:c.instructions+=1;goto B643b94;
case 0x643b99:goto L643b99;
case 0x643b9b:c.instructions+=3;goto B643b9b;
case 0x643b9d:c.instructions+=2;goto B643b9d;
case 0x643b9f:c.instructions+=1;goto B643b9f;
case 0x643ba1:goto L643ba1;
case 0x643ba4:c.instructions+=3;goto B643ba4;
case 0x643ba5:c.instructions+=2;goto B643ba5;
case 0x643ba7:c.instructions+=1;goto B643ba7;
case 0x643bac:goto L643bac;
case 0x643bae:c.instructions+=3;goto B643bae;
case 0x643bb0:c.instructions+=2;goto B643bb0;
case 0x643bb2:c.instructions+=1;goto B643bb2;
case 0x643bb4:goto L643bb4;
case 0x643bb7:c.instructions+=3;goto B643bb7;
case 0x643bb8:c.instructions+=2;goto B643bb8;
case 0x643bba:c.instructions+=1;goto B643bba;
case 0x643bbf:goto L643bbf;
case 0x643bc1:c.instructions+=2;goto B643bc1;
case 0x643bc3:c.instructions+=1;goto B643bc3;
case 0x643bc9:goto L643bc9;
case 0x643bcb:goto L643bcb;
case 0x643bd1:c.instructions+=5;goto B643bd1;
case 0x643bd3:c.instructions+=4;goto B643bd3;
case 0x643bd5:c.instructions+=3;goto B643bd5;
case 0x643bd6:c.instructions+=2;goto B643bd6;
case 0x643bd7:c.instructions+=1;goto B643bd7;
case 0x643bdc:goto L643bdc;
case 0x643bde:goto L643bde;
case 0x643be1:c.instructions+=1;goto B643be1;
case 0x643be3:goto L643be3;
case 0x643be6:c.instructions+=4;goto B643be6;
case 0x643be7:c.instructions+=3;goto B643be7;
case 0x643be8:c.instructions+=2;goto B643be8;
case 0x643bea:c.instructions+=1;goto B643bea;
case 0x643bef:goto L643bef;
case 0x643bf1:c.instructions+=2;goto B643bf1;
case 0x643bf3:c.instructions+=1;goto B643bf3;
case 0x643bf9:goto L643bf9;
case 0x643bff:c.instructions+=1;goto B643bff;
case 0x643c04:goto L643c04;
case 0x643c07:c.instructions+=1;goto B643c07;
case 0x643c09:goto L643c09;
case 0x643c0c:c.instructions+=4;goto B643c0c;
case 0x643c0d:c.instructions+=3;goto B643c0d;
case 0x643c0e:c.instructions+=2;goto B643c0e;
case 0x643c10:c.instructions+=1;goto B643c10;
case 0x643c15:goto L643c15;
case 0x643c17:c.instructions+=2;goto B643c17;
case 0x643c19:c.instructions+=1;goto B643c19;
case 0x643c1b:goto L643c1b;
case 0x643c21:c.instructions+=1;goto B643c21;
case 0x643c26:goto L643c26;
case 0x643c2a:c.instructions+=1;goto B643c2a;
case 0x643c2c:goto L643c2c;
case 0x643c2f:c.instructions+=1;goto B643c2f;
case 0x643c31:goto L643c31;
case 0x643c34:c.instructions+=4;goto B643c34;
case 0x643c35:c.instructions+=3;goto B643c35;
case 0x643c36:c.instructions+=2;goto B643c36;
case 0x643c38:c.instructions+=1;goto B643c38;
case 0x643c3d:goto L643c3d;
case 0x643c3f:c.instructions+=2;goto B643c3f;
case 0x643c41:c.instructions+=1;goto B643c41;
case 0x643c43:goto L643c43;
case 0x643c49:c.instructions+=1;goto B643c49;
case 0x643c4b:goto L643c4b;
case 0x643c4e:c.instructions+=2;goto B643c4e;
case 0x643c4f:c.instructions+=1;goto B643c4f;
case 0x643c54:goto L643c54;
case 0x643c56:c.instructions+=2;goto B643c56;
case 0x643c57:c.instructions+=1;goto B643c57;
case 0x643c59:goto L643c59;
case 0x643c5b:c.instructions+=2;goto B643c5b;
case 0x643c5e:c.instructions+=1;goto B643c5e;
case 0x643c60:goto L643c60;
case 0x643c64:c.instructions+=1;goto B643c64;
case 0x643c66:goto L643c66;
case 0x643c69:c.instructions+=4;goto B643c69;
case 0x643c6a:c.instructions+=3;goto B643c6a;
case 0x643c6c:c.instructions+=2;goto B643c6c;
case 0x643c6e:c.instructions+=1;goto B643c6e;
case 0x643c73:goto L643c73;
case 0x643c75:c.instructions+=2;goto B643c75;
case 0x643c77:c.instructions+=1;goto B643c77;
case 0x643c79:goto L643c79;
case 0x643c7c:c.instructions+=1;goto B643c7c;
case 0x643c7e:goto L643c7e;
case 0x643c81:c.instructions+=4;goto B643c81;
case 0x643c82:c.instructions+=3;goto B643c82;
case 0x643c84:c.instructions+=2;goto B643c84;
case 0x643c86:c.instructions+=1;goto B643c86;
case 0x643c8b:goto L643c8b;
case 0x643c8d:c.instructions+=2;goto B643c8d;
case 0x643c8f:c.instructions+=1;goto B643c8f;
case 0x643c91:goto L643c91;
case 0x643c97:c.instructions+=1;goto B643c97;
case 0x643c99:goto L643c99;
case 0x643c9c:c.instructions+=4;goto B643c9c;
case 0x643c9d:c.instructions+=3;goto B643c9d;
case 0x643c9f:c.instructions+=2;goto B643c9f;
case 0x643ca1:c.instructions+=1;goto B643ca1;
case 0x643ca6:goto L643ca6;
case 0x643ca8:c.instructions+=1;goto B643ca8;
case 0x643cae:goto L643cae;
case 0x643cb0:c.instructions+=9;goto B643cb0;
case 0x643cb3:c.instructions+=8;goto B643cb3;
case 0x643cb6:c.instructions+=7;goto B643cb6;
case 0x643cb8:c.instructions+=6;goto B643cb8;
case 0x643cb9:c.instructions+=5;goto B643cb9;
case 0x643cba:c.instructions+=4;goto B643cba;
case 0x643cbc:c.instructions+=3;goto B643cbc;
case 0x643cbd:c.instructions+=2;goto B643cbd;
case 0x643cbe:c.instructions+=1;goto B643cbe;
case 0x643cc1:goto L643cc1;
case 0x643cc3:c.instructions+=8;goto B643cc3;
case 0x643cc4:c.instructions+=7;goto B643cc4;
case 0x643cc5:c.instructions+=6;goto B643cc5;
case 0x643cc7:c.instructions+=5;goto B643cc7;
case 0x643cc8:c.instructions+=4;goto B643cc8;
case 0x643cce:c.instructions+=3;goto B643cce;
case 0x643ccf:c.instructions+=2;goto B643ccf;
case 0x643cd4:c.instructions+=1;goto B643cd4;
case 0x643cd6:goto L643cd6;
case 0x643cd7:c.instructions+=1;goto B643cd7;
case 0x643cdd:goto L643cdd;
case 0x643cdf:c.instructions+=3;goto B643cdf;
case 0x643ce0:c.instructions+=2;goto B643ce0;
case 0x643ce1:c.instructions+=1;goto B643ce1;
case 0x643ce3:goto L643ce3;
case 0x643ce5:c.instructions+=1;goto B643ce5;
case 0x643ce7:goto L643ce7;
case 0x643cee:c.instructions+=2;goto B643cee;
case 0x643cf3:c.instructions+=1;goto B643cf3;
case 0x643cf5:goto L643cf5;
case 0x643cf6:c.instructions+=1;goto B643cf6;
case 0x643cfc:goto L643cfc;
case 0x643d02:c.instructions+=3;goto B643d02;
case 0x643d04:c.instructions+=2;goto B643d04;
case 0x643d05:c.instructions+=1;goto B643d05;
case 0x643d0b:goto L643d0b;
case 0x643d0c:c.instructions+=1;goto B643d0c;
case 0x643d12:goto L643d12;
case 0x643d13:c.instructions+=3;goto B643d13;
case 0x643d14:c.instructions+=2;goto B643d14;
case 0x643d15:c.instructions+=1;goto B643d15;
case 0x643d16:goto L643d16;
case 0x643d18:c.instructions+=5;goto B643d18;
case 0x643d19:c.instructions+=4;goto B643d19;
case 0x643d1a:c.instructions+=3;goto B643d1a;
case 0x643d1b:c.instructions+=2;goto B643d1b;
case 0x643d20:c.instructions+=1;goto B643d20;
case 0x643d26:goto L643d26;
case 0x643d2c:c.instructions+=4;goto B643d2c;
case 0x643d2e:c.instructions+=3;goto B643d2e;
case 0x643d2f:c.instructions+=2;goto B643d2f;
case 0x643d34:c.instructions+=1;goto B643d34;
case 0x643d36:goto L643d36;
case 0x643d37:c.instructions+=1;goto B643d37;
case 0x643d3d:goto L643d3d;
case 0x643d3f:c.instructions+=3;goto B643d3f;
case 0x643d40:c.instructions+=2;goto B643d40;
case 0x643d41:c.instructions+=1;goto B643d41;
case 0x643d43:goto L643d43;
case 0x643d45:c.instructions+=1;goto B643d45;
case 0x643d47:goto L643d47;
case 0x643d4d:c.instructions+=1;goto B643d4d;
case 0x643d4f:goto L643d4f;
case 0x643d54:c.instructions+=1;goto B643d54;
case 0x643d5a:goto L643d5a;
case 0x643d5c:c.instructions+=2;goto B643d5c;
case 0x643d5d:c.instructions+=1;goto B643d5d;
case 0x643d63:goto L643d63;
case 0x643d64:c.instructions+=3;goto B643d64;
case 0x643d65:c.instructions+=2;goto B643d65;
case 0x643d66:c.instructions+=1;goto B643d66;
case 0x643d67:goto L643d67;
case 0x643d69:c.instructions+=13;goto B643d69;
case 0x643d6a:c.instructions+=12;goto B643d6a;
case 0x643d6c:c.instructions+=11;goto B643d6c;
case 0x643d6e:c.instructions+=10;goto B643d6e;
case 0x643d71:c.instructions+=9;goto B643d71;
case 0x643d75:c.instructions+=8;goto B643d75;
case 0x643d79:c.instructions+=7;goto B643d79;
case 0x643d7b:c.instructions+=6;goto B643d7b;
case 0x643d7e:c.instructions+=5;goto B643d7e;
case 0x643d81:c.instructions+=4;goto B643d81;
case 0x643d84:c.instructions+=3;goto B643d84;
case 0x643d87:c.instructions+=2;goto B643d87;
case 0x643d88:c.instructions+=1;goto B643d88;
case 0x643d8b:goto L643d8b;
case 0x643d8d:c.instructions+=11;goto B643d8d;
case 0x643d8e:c.instructions+=10;goto B643d8e;
case 0x643d90:c.instructions+=9;goto B643d90;
case 0x643d92:c.instructions+=8;goto B643d92;
case 0x643d95:c.instructions+=7;goto B643d95;
case 0x643d99:c.instructions+=6;goto B643d99;
case 0x643d9d:c.instructions+=5;goto B643d9d;
case 0x643d9f:c.instructions+=4;goto B643d9f;
case 0x643da2:c.instructions+=3;goto B643da2;
case 0x643da5:c.instructions+=2;goto B643da5;
case 0x643da6:c.instructions+=1;goto B643da6;
case 0x643da9:goto L643da9;
case 0x643dab:c.instructions+=4;goto B643dab;
case 0x643dac:c.instructions+=3;goto B643dac;
case 0x643daf:c.instructions+=2;goto B643daf;
case 0x643db1:c.instructions+=1;goto B643db1;
case 0x643db3:goto L643db3;
case 0x643db5:c.instructions+=1;goto B643db5;
case 0x643dba:goto L643dba;
case 0x643dbb:c.instructions+=1;goto B643dbb;
case 0x643dc0:goto L643dc0;
case 0x643dc1:goto L643dc1;
case 0x643dc2:c.instructions+=1;goto B643dc2;
case 0x643dc3:goto L643dc3;
case 0x643dc5:c.instructions+=5;goto B643dc5;
case 0x643dc6:c.instructions+=4;goto B643dc6;
case 0x643dc8:c.instructions+=3;goto B643dc8;
case 0x643dc9:c.instructions+=2;goto B643dc9;
case 0x643dcb:c.instructions+=1;goto B643dcb;
case 0x643dd0:goto L643dd0;
case 0x643dd4:c.instructions+=1;goto B643dd4;
case 0x643dd6:goto L643dd6;
case 0x643dd7:c.instructions+=1;goto B643dd7;
case 0x643ddc:goto L643ddc;
case 0x643ddd:goto L643ddd;
case 0x643ddf:c.instructions+=3;goto B643ddf;
case 0x643de0:c.instructions+=2;goto B643de0;
case 0x643de1:c.instructions+=1;goto B643de1;
case 0x643de4:goto L643de4;
case 0x643de6:c.instructions+=3;goto B643de6;
case 0x643de7:c.instructions+=2;goto B643de7;
case 0x643de9:c.instructions+=1;goto B643de9;
case 0x643dee:goto L643dee;
case 0x643df1:c.instructions+=1;goto B643df1;
case 0x643df6:goto L643df6;
case 0x643df9:c.instructions+=1;goto B643df9;
case 0x643dfe:goto L643dfe;
case 0x643e00:c.instructions+=10;goto B643e00;
case 0x643e03:c.instructions+=9;goto B643e03;
case 0x643e06:c.instructions+=8;goto B643e06;
case 0x643e09:c.instructions+=7;goto B643e09;
case 0x643e0c:c.instructions+=6;goto B643e0c;
case 0x643e0f:c.instructions+=5;goto B643e0f;
case 0x643e12:c.instructions+=4;goto B643e12;
case 0x643e15:c.instructions+=3;goto B643e15;
case 0x643e17:c.instructions+=2;goto B643e17;
case 0x643e18:c.instructions+=1;goto B643e18;
case 0x643e19:goto L643e19;
case 0x643e1b:c.instructions+=5;goto B643e1b;
case 0x643e1c:c.instructions+=4;goto B643e1c;
case 0x643e1e:c.instructions+=3;goto B643e1e;
case 0x643e21:c.instructions+=2;goto B643e21;
case 0x643e23:c.instructions+=1;goto B643e23;
case 0x643e25:goto L643e25;
case 0x643e27:c.instructions+=1;goto B643e27;
case 0x643e2c:goto L643e2c;
case 0x643e2d:c.instructions+=3;goto B643e2d;
case 0x643e30:c.instructions+=2;goto B643e30;
case 0x643e32:c.instructions+=1;goto B643e32;
case 0x643e34:goto L643e34;
case 0x643e36:c.instructions+=1;goto B643e36;
case 0x643e3b:goto L643e3b;
case 0x643e3c:c.instructions+=1;goto B643e3c;
case 0x643e41:goto L643e41;
case 0x643e42:goto L643e42;
case 0x643e46:c.instructions+=2;goto B643e46;
case 0x643e47:c.instructions+=1;goto B643e47;
case 0x643e49:goto L643e49;
case 0x643e4c:c.instructions+=2;goto B643e4c;
case 0x643e4e:c.instructions+=1;goto B643e4e;
case 0x643e50:goto L643e50;
case 0x643e53:c.instructions+=4;goto B643e53;
case 0x643e55:c.instructions+=3;goto B643e55;
case 0x643e56:c.instructions+=2;goto B643e56;
case 0x643e57:c.instructions+=1;goto B643e57;
case 0x643e5a:goto L643e5a;
case 0x643e5d:c.instructions+=1;goto B643e5d;
case 0x643e62:goto L643e62;
case 0x643e65:c.instructions+=1;goto B643e65;
case 0x643e6a:goto L643e6a;
case 0x643e6c:c.instructions+=2;goto B643e6c;
case 0x643e6d:c.instructions+=1;goto B643e6d;
case 0x643e72:goto L643e72;
case 0x643e74:c.instructions+=5;goto B643e74;
case 0x643e75:c.instructions+=4;goto B643e75;
case 0x643e77:c.instructions+=3;goto B643e77;
case 0x643e78:c.instructions+=2;goto B643e78;
case 0x643e7a:c.instructions+=1;goto B643e7a;
case 0x643e7f:goto L643e7f;
case 0x643e83:c.instructions+=1;goto B643e83;
case 0x643e85:goto L643e85;
case 0x643e86:c.instructions+=1;goto B643e86;
case 0x643e8b:goto L643e8b;
case 0x643e8c:goto L643e8c;
case 0x643e8e:c.instructions+=3;goto B643e8e;
case 0x643e8f:c.instructions+=2;goto B643e8f;
case 0x643e90:c.instructions+=1;goto B643e90;
case 0x643e93:goto L643e93;
case 0x643e95:c.instructions+=12;goto B643e95;
case 0x643e96:c.instructions+=11;goto B643e96;
case 0x643e98:c.instructions+=10;goto B643e98;
case 0x643e9e:c.instructions+=9;goto B643e9e;
case 0x643e9f:c.instructions+=8;goto B643e9f;
case 0x643ea0:c.instructions+=7;goto B643ea0;
case 0x643ea3:c.instructions+=6;goto B643ea3;
case 0x643ea4:c.instructions+=5;goto B643ea4;
case 0x643ea6:c.instructions+=4;goto B643ea6;
case 0x643ea9:c.instructions+=3;goto B643ea9;
case 0x643eab:c.instructions+=2;goto B643eab;
case 0x643eae:c.instructions+=1;goto B643eae;
case 0x643eb0:goto L643eb0;
case 0x643eb1:c.instructions+=9;goto B643eb1;
case 0x643eb2:c.instructions+=8;goto B643eb2;
case 0x643eb7:c.instructions+=7;goto B643eb7;
case 0x643ebd:c.instructions+=6;goto B643ebd;
case 0x643ebe:c.instructions+=5;goto B643ebe;
case 0x643ec0:c.instructions+=4;goto B643ec0;
case 0x643ec3:c.instructions+=3;goto B643ec3;
case 0x643ec4:c.instructions+=2;goto B643ec4;
case 0x643ec9:c.instructions+=1;goto B643ec9;
case 0x643ecf:goto L643ecf;
case 0x643ed5:c.instructions+=1;goto B643ed5;
case 0x643ed8:goto L643ed8;
case 0x643eda:c.instructions+=1;goto B643eda;
case 0x643ee0:goto L643ee0;
case 0x643ee3:c.instructions+=1;goto B643ee3;
case 0x643ee6:goto L643ee6;
case 0x643ee8:c.instructions+=3;goto B643ee8;
case 0x643ee9:c.instructions+=2;goto B643ee9;
case 0x643eeb:c.instructions+=1;goto B643eeb;
case 0x643eed:goto L643eed;
case 0x643ef0:c.instructions+=5;goto B643ef0;
case 0x643ef2:c.instructions+=4;goto B643ef2;
case 0x643ef5:c.instructions+=3;goto B643ef5;
case 0x643ef7:c.instructions+=2;goto B643ef7;
case 0x643ef8:c.instructions+=1;goto B643ef8;
case 0x643efd:goto L643efd;
case 0x643eff:c.instructions+=2;goto B643eff;
case 0x643f02:c.instructions+=1;goto B643f02;
case 0x643f08:goto L643f08;
case 0x643f0a:c.instructions+=4;goto B643f0a;
case 0x643f0d:c.instructions+=3;goto B643f0d;
case 0x643f0f:c.instructions+=2;goto B643f0f;
case 0x643f11:c.instructions+=1;goto B643f11;
case 0x643f14:goto L643f14;
case 0x643f16:goto L643f16;
case 0x643f18:c.instructions+=1;goto B643f18;
case 0x643f1b:goto L643f1b;
case 0x643f1d:goto L643f1d;
case 0x643f20:c.instructions+=10;goto B643f20;
case 0x643f22:c.instructions+=9;goto B643f22;
case 0x643f25:c.instructions+=8;goto B643f25;
case 0x643f26:c.instructions+=7;goto B643f26;
case 0x643f29:c.instructions+=6;goto B643f29;
case 0x643f2a:c.instructions+=5;goto B643f2a;
case 0x643f2d:c.instructions+=4;goto B643f2d;
case 0x643f30:c.instructions+=3;goto B643f30;
case 0x643f33:c.instructions+=2;goto B643f33;
case 0x643f34:c.instructions+=1;goto B643f34;
case 0x643f36:goto L643f36;
case 0x643f38:c.instructions+=2;goto B643f38;
case 0x643f3b:c.instructions+=1;goto B643f3b;
case 0x643f41:goto L643f41;
case 0x643f44:c.instructions+=5;goto B643f44;
case 0x643f49:c.instructions+=4;goto B643f49;
case 0x643f4e:c.instructions+=3;goto B643f4e;
case 0x643f51:c.instructions+=2;goto B643f51;
case 0x643f54:c.instructions+=1;goto B643f54;
case 0x643f59:goto L643f59;
case 0x643f5c:c.instructions+=2;goto B643f5c;
case 0x643f5f:c.instructions+=1;goto B643f5f;
case 0x643f64:goto L643f64;
case 0x643f65:c.instructions+=5;goto B643f65;
case 0x643f66:c.instructions+=4;goto B643f66;
case 0x643f67:c.instructions+=3;goto B643f67;
case 0x643f6a:c.instructions+=2;goto B643f6a;
case 0x643f70:c.instructions+=1;goto B643f70;
case 0x643f72:goto L643f72;
case 0x643f75:c.instructions+=6;goto B643f75;
case 0x643f77:c.instructions+=5;goto B643f77;
case 0x643f7a:c.instructions+=4;goto B643f7a;
case 0x643f7c:c.instructions+=3;goto B643f7c;
case 0x643f7d:c.instructions+=2;goto B643f7d;
case 0x643f80:c.instructions+=1;goto B643f80;
case 0x643f85:goto L643f85;
case 0x643f87:c.instructions+=2;goto B643f87;
case 0x643f8a:c.instructions+=1;goto B643f8a;
case 0x643f8c:goto L643f8c;
case 0x643f8f:c.instructions+=3;goto B643f8f;
case 0x643f91:c.instructions+=2;goto B643f91;
case 0x643f94:c.instructions+=1;goto B643f94;
case 0x643f99:goto L643f99;
case 0x643f9b:c.instructions+=2;goto B643f9b;
case 0x643f9e:c.instructions+=1;goto B643f9e;
case 0x643fa0:goto L643fa0;
case 0x643fa5:c.instructions+=1;goto B643fa5;
case 0x643faa:goto L643faa;
case 0x643fad:c.instructions+=5;goto B643fad;
case 0x643fae:c.instructions+=4;goto B643fae;
case 0x643fb1:c.instructions+=3;goto B643fb1;
case 0x643fb2:c.instructions+=2;goto B643fb2;
case 0x643fb5:c.instructions+=1;goto B643fb5;
case 0x643fb7:goto L643fb7;
case 0x643fba:c.instructions+=6;goto B643fba;
case 0x643fbd:c.instructions+=5;goto B643fbd;
case 0x643fc1:c.instructions+=4;goto B643fc1;
case 0x643fc4:c.instructions+=3;goto B643fc4;
case 0x643fc7:c.instructions+=2;goto B643fc7;
case 0x643fc9:c.instructions+=1;goto B643fc9;
case 0x643fcc:goto L643fcc;
case 0x643fce:goto L643fce;
case 0x643fd0:c.instructions+=1;goto B643fd0;
case 0x643fd3:goto L643fd3;
case 0x643fd5:goto L643fd5;
case 0x643fd8:c.instructions+=2;goto B643fd8;
case 0x643fda:c.instructions+=1;goto B643fda;
case 0x643fdc:goto L643fdc;
case 0x643fdf:goto L643fdf;
case 0x643fe1:c.instructions+=3;goto B643fe1;
case 0x643fe4:c.instructions+=2;goto B643fe4;
case 0x643fe7:c.instructions+=1;goto B643fe7;
case 0x643fec:goto L643fec;
case 0x643fee:c.instructions+=2;goto B643fee;
case 0x643ff0:c.instructions+=1;goto B643ff0;
case 0x643ff2:goto L643ff2;
case 0x643ff5:c.instructions+=3;goto B643ff5;
case 0x643ffa:c.instructions+=2;goto B643ffa;
case 0x643fff:c.instructions+=1;goto B643fff;
default:missing_instruction(c.pc);}
B643001:L643001:{c.instructions+=8;NFSU2_TR(0x643001);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B643007:{NFSU2_TR(0x643007);
__builtin_memmove((R+0),(R+28),4);
}
B643009:{NFSU2_TR(0x643009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64300a:{NFSU2_TR(0x64300a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64300b:{NFSU2_TR(0x64300b);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64300d:{NFSU2_TR(0x64300d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64300e:{NFSU2_TR(0x64300e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64300f:{NFSU2_TR(0x64300f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643012:L643012:{c.instructions+=9;NFSU2_TR(0x643012);
__builtin_memmove((R+28),(R+28),4);
}
B643014:{NFSU2_TR(0x643014);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643015:{NFSU2_TR(0x643015);
__builtin_memmove((R+20),(R+16),4);
}
B643017:{NFSU2_TR(0x643017);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643018:{NFSU2_TR(0x643018);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64301b:{NFSU2_TR(0x64301b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64301c:{NFSU2_TR(0x64301c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64301f:{NFSU2_TR(0x64301f);
__builtin_memmove((R+24),(R+4),4);
}
B643021:{NFSU2_TR(0x643021);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643026ull));
TAIL_STATIC(0x6428f1u,642);
}
B643026:L643026:{c.instructions+=2;NFSU2_TR(0x643026);
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
B643028:{NFSU2_TR(0x643028);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643077;}}
}
B64302a:L64302a:{c.instructions+=3;NFSU2_TR(0x64302a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64302d:{NFSU2_TR(0x64302d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B643033:{NFSU2_TR(0x643033);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64304d;}}
}
B643035:L643035:{c.instructions+=9;NFSU2_TR(0x643035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643038:{NFSU2_TR(0x643038);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64303b:{NFSU2_TR(0x64303b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64303e:{NFSU2_TR(0x64303e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B643040:{NFSU2_TR(0x643040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x20ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B643043:{NFSU2_TR(0x643043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B643046:{NFSU2_TR(0x643046);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B643048:{NFSU2_TR(0x643048);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64304b:{NFSU2_TR(0x64304b);
{goto L643077;}
}
B64304d:L64304d:{c.instructions+=3;NFSU2_TR(0x64304d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B643050:{NFSU2_TR(0x643050);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B643053:{NFSU2_TR(0x643053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643060;}}
}
B643055:L643055:{c.instructions+=4;NFSU2_TR(0x643055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643058:{NFSU2_TR(0x643058);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B64305b:{NFSU2_TR(0x64305b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x10ull))));
s4(u32(r4(R+4)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64305e:{NFSU2_TR(0x64305e);
{goto L643077;}
}
B643060:L643060:{c.instructions+=10;NFSU2_TR(0x643060);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643061:{NFSU2_TR(0x643061);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643064:{NFSU2_TR(0x643064);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B643067:{NFSU2_TR(0x643067);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B643069:{NFSU2_TR(0x643069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffff0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B64306c:{NFSU2_TR(0x64306c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64306f:{NFSU2_TR(0x64306f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B643071:{NFSU2_TR(0x643071);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B643074:{NFSU2_TR(0x643074);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+8)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B643076:{NFSU2_TR(0x643076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643077:L643077:{c.instructions+=3;NFSU2_TR(0x643077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643078:{NFSU2_TR(0x643078);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643079:{NFSU2_TR(0x643079);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64307c:L64307c:{c.instructions+=5;NFSU2_TR(0x64307c);
__builtin_memmove((R+28),(R+28),4);
}
B64307e:{NFSU2_TR(0x64307e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64307f:{NFSU2_TR(0x64307f);
__builtin_memmove((R+20),(R+16),4);
}
B643081:{NFSU2_TR(0x643081);
w4(R+0,u32(0x1000ull));
}
B643086:{NFSU2_TR(0x643086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64308bull));
TAIL_STATIC(0x75c4d0u,75c);
}
B64308b:L64308b:{c.instructions+=8;NFSU2_TR(0x64308b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64308c:{NFSU2_TR(0x64308c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64308f:{NFSU2_TR(0x64308f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643091:{NFSU2_TR(0x643091);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643092:{NFSU2_TR(0x643092);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643093:{NFSU2_TR(0x643093);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff000ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643099:{NFSU2_TR(0x643099);
w4(R+28,u32(0xffeull));
}
B64309e:{NFSU2_TR(0x64309e);
if(r1(R+518)){{goto L6430ea;}}
}
B6430a0:L6430a0:{c.instructions+=3;NFSU2_TR(0x6430a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6430a3:{NFSU2_TR(0x6430a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6430a5:{NFSU2_TR(0x6430a5);
if(r1(R+518)){{goto L6430c8;}}
}
B6430a7:L6430a7:{c.instructions+=6;NFSU2_TR(0x6430a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430a8:{NFSU2_TR(0x6430a8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430ad:{NFSU2_TR(0x6430ad);
__builtin_memmove((R+0),(R+24),4);
}
B6430af:{NFSU2_TR(0x6430af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430b0:{NFSU2_TR(0x6430b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430b1:{NFSU2_TR(0x6430b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6430b6ull));
TAIL_STATIC(0x75e081u,75e);
}
B6430b6:L6430b6:{c.instructions+=3;NFSU2_TR(0x6430b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6430b9:{NFSU2_TR(0x6430b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6430bb:{NFSU2_TR(0x6430bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6430bf;}}
}
B6430bd:L6430bd:{c.instructions+=1;NFSU2_TR(0x6430bd);
__builtin_memmove((R+0),(R+28),4);
}
B6430bf:L6430bf:{c.instructions+=2;NFSU2_TR(0x6430bf);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff000ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6430c6:{NFSU2_TR(0x6430c6);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6430c8:L6430c8:{c.instructions+=3;NFSU2_TR(0x6430c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6430cb:{NFSU2_TR(0x6430cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6430cd:{NFSU2_TR(0x6430cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6430d0;}}
}
B6430cf:L6430cf:{c.instructions+=1;NFSU2_TR(0x6430cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6430d0:L6430d0:{c.instructions+=5;NFSU2_TR(0x6430d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430d1:{NFSU2_TR(0x6430d1);
u8 U[4];
w4(U+0,u32(0x7ab500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430d6:{NFSU2_TR(0x6430d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430d7:{NFSU2_TR(0x6430d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430d8:{NFSU2_TR(0x6430d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6430ddull));
TAIL_STATIC(0x75e081u,75e);
}
B6430dd:L6430dd:{c.instructions+=3;NFSU2_TR(0x6430dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6430e0:{NFSU2_TR(0x6430e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6430e2:{NFSU2_TR(0x6430e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6430e6;}}
}
B6430e4:L6430e4:{c.instructions+=1;NFSU2_TR(0x6430e4);
__builtin_memmove((R+0),(R+28),4);
}
B6430e6:L6430e6:{c.instructions+=2;NFSU2_TR(0x6430e6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6430e8:{NFSU2_TR(0x6430e8);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B6430ea:L6430ea:{c.instructions+=2;NFSU2_TR(0x6430ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6430ee:{NFSU2_TR(0x6430ee);
if(r1(R+518)){{goto L64310c;}}
}
B6430f0:L6430f0:{c.instructions+=5;NFSU2_TR(0x6430f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6430f3:{NFSU2_TR(0x6430f3);
u8 U[4];
w4(U+0,u32(0x7ab4f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430f8:{NFSU2_TR(0x6430f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430f9:{NFSU2_TR(0x6430f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6430fa:{NFSU2_TR(0x6430fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6430ffull));
TAIL_STATIC(0x75e081u,75e);
}
B6430ff:L6430ff:{c.instructions+=3;NFSU2_TR(0x6430ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643102:{NFSU2_TR(0x643102);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B643104:{NFSU2_TR(0x643104);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L643108;}}
}
B643106:L643106:{c.instructions+=1;NFSU2_TR(0x643106);
__builtin_memmove((R+0),(R+28),4);
}
B643108:L643108:{c.instructions+=2;NFSU2_TR(0x643108);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B64310a:{NFSU2_TR(0x64310a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B64310c:L64310c:{c.instructions+=6;NFSU2_TR(0x64310c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64310f:{NFSU2_TR(0x64310f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643110:{NFSU2_TR(0x643110);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643113:{NFSU2_TR(0x643113);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643114:{NFSU2_TR(0x643114);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643115:{NFSU2_TR(0x643115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64311aull));
TAIL_STATIC(0x75e02bu,75e);
}
B64311a:L64311a:{c.instructions+=3;NFSU2_TR(0x64311a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64311d:{NFSU2_TR(0x64311d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64311f:{NFSU2_TR(0x64311f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L643123;}}
}
B643121:L643121:{c.instructions+=1;NFSU2_TR(0x643121);
__builtin_memmove((R+0),(R+28),4);
}
B643123:L643123:{c.instructions+=8;NFSU2_TR(0x643123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643126:{NFSU2_TR(0x643126);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B643128:{NFSU2_TR(0x643128);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff000ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64312e:{NFSU2_TR(0x64312e);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+24)),r1(U+0));
}
B643131:{NFSU2_TR(0x643131);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B643135:{NFSU2_TR(0x643135);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B643138:{NFSU2_TR(0x643138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643139:{NFSU2_TR(0x643139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64313eull));
TAIL_STATIC(0x642a77u,642);
}
B64313e:L64313e:{c.instructions+=5;NFSU2_TR(0x64313e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64313f:{NFSU2_TR(0x64313f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643140:{NFSU2_TR(0x643140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643141:{NFSU2_TR(0x643141);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B643142:{NFSU2_TR(0x643142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643143:L643143:{c.instructions+=5;NFSU2_TR(0x643143);
__builtin_memmove((R+28),(R+28),4);
}
B643145:{NFSU2_TR(0x643145);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643146:{NFSU2_TR(0x643146);
__builtin_memmove((R+20),(R+16),4);
}
B643148:{NFSU2_TR(0x643148);
w4(R+0,u32(0x100cull));
}
B64314d:{NFSU2_TR(0x64314d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643152ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B643152:L643152:{c.instructions+=9;NFSU2_TR(0x643152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643155:{NFSU2_TR(0x643155);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643156:{NFSU2_TR(0x643156);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643157:{NFSU2_TR(0x643157);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64315a:{NFSU2_TR(0x64315a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64315b:{NFSU2_TR(0x64315b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64315e:{NFSU2_TR(0x64315e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeff4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643164:{NFSU2_TR(0x643164);
w4(R+28,u32(0xffeull));
}
B643169:{NFSU2_TR(0x643169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64316eull));
TAIL_STATIC(0x6428f1u,642);
}
B64316e:L64316e:{c.instructions+=2;NFSU2_TR(0x64316e);
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
B643170:{NFSU2_TR(0x643170);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64329c;}}
}
B643176:L643176:{c.instructions+=9;NFSU2_TR(0x643176);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643179:{NFSU2_TR(0x643179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64317c:{NFSU2_TR(0x64317c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64317f:{NFSU2_TR(0x64317f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B643182:{NFSU2_TR(0x643182);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B643185:{NFSU2_TR(0x643185);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643188:{NFSU2_TR(0x643188);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B64318b:{NFSU2_TR(0x64318b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64318e:{NFSU2_TR(0x64318e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64319f;}}
}
B643190:L643190:{c.instructions+=4;NFSU2_TR(0x643190);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B643193:{NFSU2_TR(0x643193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x7ab51cull));
s4(u32(r4(U+0)),r4(U+4));
}
B64319a:{NFSU2_TR(0x64319a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64319d:{NFSU2_TR(0x64319d);
{goto L6431e8;}
}
B64319f:L64319f:{c.instructions+=8;NFSU2_TR(0x64319f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6431a2:{NFSU2_TR(0x6431a2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B6431a5:{NFSU2_TR(0x6431a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6431a8:{NFSU2_TR(0x6431a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6431ab:{NFSU2_TR(0x6431ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6431ae:{NFSU2_TR(0x6431ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6431b0:{NFSU2_TR(0x6431b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x7ab514ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6431b7:{NFSU2_TR(0x6431b7);
if(r1(R+518)){{goto L64329a;}}
}
B6431bd:L6431bd:{c.instructions+=2;NFSU2_TR(0x6431bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6431bf:{NFSU2_TR(0x6431bf);
if(r1(R+518)){{goto L64329a;}}
}
B6431c5:L6431c5:{c.instructions+=2;NFSU2_TR(0x6431c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6431c7:{NFSU2_TR(0x6431c7);
if(r1(R+512)){{goto L64329a;}}
}
B6431cd:L6431cd:{c.instructions+=2;NFSU2_TR(0x6431cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6431d1:{NFSU2_TR(0x6431d1);
if(r1(R+518)){{goto L6431dd;}}
}
B6431d3:L6431d3:{c.instructions+=2;NFSU2_TR(0x6431d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6431d7:{NFSU2_TR(0x6431d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64329a;}}
}
B6431dd:L6431dd:{c.instructions+=4;NFSU2_TR(0x6431dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6431e0:{NFSU2_TR(0x6431e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6431e3:{NFSU2_TR(0x6431e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6431e5:{NFSU2_TR(0x6431e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x20ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6431e8:L6431e8:{c.instructions+=4;NFSU2_TR(0x6431e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6431e9:{NFSU2_TR(0x6431e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6431ec:{NFSU2_TR(0x6431ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6431ee:{NFSU2_TR(0x6431ee);
if(r1(R+518)){{goto L64323e;}}
}
B6431f0:L6431f0:{c.instructions+=3;NFSU2_TR(0x6431f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6431f3:{NFSU2_TR(0x6431f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6431f5:{NFSU2_TR(0x6431f5);
if(r1(R+518)){{goto L64321c;}}
}
B6431f7:L6431f7:{c.instructions+=6;NFSU2_TR(0x6431f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6431f8:{NFSU2_TR(0x6431f8);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6431fd:{NFSU2_TR(0x6431fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643203:{NFSU2_TR(0x643203);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643204:{NFSU2_TR(0x643204);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643205:{NFSU2_TR(0x643205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64320aull));
TAIL_STATIC(0x75e081u,75e);
}
B64320a:L64320a:{c.instructions+=3;NFSU2_TR(0x64320a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64320d:{NFSU2_TR(0x64320d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64320f:{NFSU2_TR(0x64320f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L643213;}}
}
B643211:L643211:{c.instructions+=1;NFSU2_TR(0x643211);
__builtin_memmove((R+0),(R+28),4);
}
B643213:L643213:{c.instructions+=2;NFSU2_TR(0x643213);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffeff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B64321a:{NFSU2_TR(0x64321a);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B64321c:L64321c:{c.instructions+=3;NFSU2_TR(0x64321c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64321f:{NFSU2_TR(0x64321f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643221:{NFSU2_TR(0x643221);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643224;}}
}
B643223:L643223:{c.instructions+=1;NFSU2_TR(0x643223);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B643224:L643224:{c.instructions+=5;NFSU2_TR(0x643224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643225:{NFSU2_TR(0x643225);
u8 U[4];
w4(U+0,u32(0x7ab500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64322a:{NFSU2_TR(0x64322a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64322b:{NFSU2_TR(0x64322b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64322c:{NFSU2_TR(0x64322c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643231ull));
TAIL_STATIC(0x75e081u,75e);
}
B643231:L643231:{c.instructions+=3;NFSU2_TR(0x643231);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643234:{NFSU2_TR(0x643234);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B643236:{NFSU2_TR(0x643236);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64323a;}}
}
B643238:L643238:{c.instructions+=1;NFSU2_TR(0x643238);
__builtin_memmove((R+0),(R+28),4);
}
B64323a:L64323a:{c.instructions+=2;NFSU2_TR(0x64323a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B64323c:{NFSU2_TR(0x64323c);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B64323e:L64323e:{c.instructions+=3;NFSU2_TR(0x64323e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B643242:{NFSU2_TR(0x643242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643243:{NFSU2_TR(0x643243);
if(r1(R+518)){{goto L643264;}}
}
B643245:L643245:{c.instructions+=6;NFSU2_TR(0x643245);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643248:{NFSU2_TR(0x643248);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64324b:{NFSU2_TR(0x64324b);
u8 U[4];
w4(U+0,u32(0x7ab508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643250:{NFSU2_TR(0x643250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643251:{NFSU2_TR(0x643251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643252:{NFSU2_TR(0x643252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643257ull));
TAIL_STATIC(0x75e081u,75e);
}
B643257:L643257:{c.instructions+=3;NFSU2_TR(0x643257);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B64325a:{NFSU2_TR(0x64325a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64325c:{NFSU2_TR(0x64325c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L643260;}}
}
B64325e:L64325e:{c.instructions+=1;NFSU2_TR(0x64325e);
__builtin_memmove((R+0),(R+28),4);
}
B643260:L643260:{c.instructions+=2;NFSU2_TR(0x643260);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B643262:{NFSU2_TR(0x643262);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B643264:L643264:{c.instructions+=6;NFSU2_TR(0x643264);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643267:{NFSU2_TR(0x643267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643268:{NFSU2_TR(0x643268);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64326b:{NFSU2_TR(0x64326b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64326c:{NFSU2_TR(0x64326c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64326d:{NFSU2_TR(0x64326d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643272ull));
TAIL_STATIC(0x75e02bu,75e);
}
B643272:L643272:{c.instructions+=3;NFSU2_TR(0x643272);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643275:{NFSU2_TR(0x643275);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B643277:{NFSU2_TR(0x643277);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L64327b;}}
}
B643279:L643279:{c.instructions+=1;NFSU2_TR(0x643279);
__builtin_memmove((R+0),(R+28),4);
}
B64327b:L64327b:{c.instructions+=9;NFSU2_TR(0x64327b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64327e:{NFSU2_TR(0x64327e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B643280:{NFSU2_TR(0x643280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643283:{NFSU2_TR(0x643283);
u8 U[1];
w1(U+0,u8(0xaull));
s1(u32(r4(R+24)),r1(U+0));
}
B643286:{NFSU2_TR(0x643286);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B64328a:{NFSU2_TR(0x64328a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B64328c:{NFSU2_TR(0x64328c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffeff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643292:{NFSU2_TR(0x643292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643293:{NFSU2_TR(0x643293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643298ull));
TAIL_STATIC(0x642a77u,642);
}
B643298:L643298:{c.instructions+=1;NFSU2_TR(0x643298);
{goto L64329c;}
}
B64329a:L64329a:{c.instructions+=1;NFSU2_TR(0x64329a);
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
B64329c:L64329c:{c.instructions+=4;NFSU2_TR(0x64329c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64329d:{NFSU2_TR(0x64329d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64329e:{NFSU2_TR(0x64329e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64329f:{NFSU2_TR(0x64329f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6432a0:L6432a0:{c.instructions+=11;NFSU2_TR(0x6432a0);
__builtin_memmove((R+28),(R+28),4);
}
B6432a2:{NFSU2_TR(0x6432a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432a3:{NFSU2_TR(0x6432a3);
__builtin_memmove((R+20),(R+16),4);
}
B6432a5:{NFSU2_TR(0x6432a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B6432ab:{NFSU2_TR(0x6432ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432ac:{NFSU2_TR(0x6432ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6432af:{NFSU2_TR(0x6432af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6432b1:{NFSU2_TR(0x6432b1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6432b4:{NFSU2_TR(0x6432b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432b5:{NFSU2_TR(0x6432b5);
__builtin_memmove((R+28),(R+4),4);
}
B6432b7:{NFSU2_TR(0x6432b7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L643375;}}
}
B6432bd:L6432bd:{c.instructions+=1;NFSU2_TR(0x6432bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6433adull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6432c4:L6432c4:{c.instructions+=2;NFSU2_TR(0x6432c4);
u8 U[4];
w4(U+0,u32(0x7ab5e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432c9:{NFSU2_TR(0x6432c9);
{goto L64337a;}
}
B6432ce:L6432ce:{c.instructions+=3;NFSU2_TR(0x6432ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6432d1:{NFSU2_TR(0x6432d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432d2:{NFSU2_TR(0x6432d2);
{goto L643345;}
}
B6432d4:L6432d4:{c.instructions+=3;NFSU2_TR(0x6432d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6432d7:{NFSU2_TR(0x6432d7);
u8 U[4];
w4(U+0,u32(0x7ab5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432dc:{NFSU2_TR(0x6432dc);
{goto L64334a;}
}
B6432de:L6432de:{c.instructions+=3;NFSU2_TR(0x6432de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6432e1:{NFSU2_TR(0x6432e1);
u8 U[4];
w4(U+0,u32(0x7ab5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432e6:{NFSU2_TR(0x6432e6);
{goto L64334a;}
}
B6432e8:L6432e8:{c.instructions+=3;NFSU2_TR(0x6432e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6432eb:{NFSU2_TR(0x6432eb);
u8 U[4];
w4(U+0,u32(0x7ab5b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432f0:{NFSU2_TR(0x6432f0);
{goto L64334a;}
}
B6432f2:L6432f2:{c.instructions+=6;NFSU2_TR(0x6432f2);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6432f5:{NFSU2_TR(0x6432f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432f6:{NFSU2_TR(0x6432f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432f7:{NFSU2_TR(0x6432f7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6432fa:{NFSU2_TR(0x6432fa);
u8 U[4];
w4(U+0,u32(0x7ab5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6432ff:{NFSU2_TR(0x6432ff);
{goto L64332c;}
}
B643301:L643301:{c.instructions+=6;NFSU2_TR(0x643301);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B643304:{NFSU2_TR(0x643304);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643305:{NFSU2_TR(0x643305);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643306:{NFSU2_TR(0x643306);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B643309:{NFSU2_TR(0x643309);
u8 U[4];
w4(U+0,u32(0x7ab598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64330e:{NFSU2_TR(0x64330e);
{goto L64332c;}
}
B643310:L643310:{c.instructions+=6;NFSU2_TR(0x643310);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B643313:{NFSU2_TR(0x643313);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643314:{NFSU2_TR(0x643314);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643315:{NFSU2_TR(0x643315);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B643318:{NFSU2_TR(0x643318);
u8 U[4];
w4(U+0,u32(0x7ab58cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64331d:{NFSU2_TR(0x64331d);
{goto L64332c;}
}
B64331f:L64331f:{c.instructions+=5;NFSU2_TR(0x64331f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B643322:{NFSU2_TR(0x643322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643323:{NFSU2_TR(0x643323);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643324:{NFSU2_TR(0x643324);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B643327:{NFSU2_TR(0x643327);
u8 U[4];
w4(U+0,u32(0x7ab580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64332c:L64332c:{c.instructions+=4;NFSU2_TR(0x64332c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643332:{NFSU2_TR(0x643332);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643337:{NFSU2_TR(0x643337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643338:{NFSU2_TR(0x643338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64333dull));
TAIL_STATIC(0x75e081u,75e);
}
B64333d:L64333d:{c.instructions+=2;NFSU2_TR(0x64333d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B643340:{NFSU2_TR(0x643340);
{goto L64338e;}
}
B643342:L643342:{c.instructions+=1;NFSU2_TR(0x643342);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643345:L643345:{c.instructions+=1;NFSU2_TR(0x643345);
u8 U[4];
w4(U+0,u32(0x7ab574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64334a:L64334a:{c.instructions+=4;NFSU2_TR(0x64334a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643350:{NFSU2_TR(0x643350);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643355:{NFSU2_TR(0x643355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643356:{NFSU2_TR(0x643356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64335bull));
TAIL_STATIC(0x75e081u,75e);
}
B64335b:L64335b:{c.instructions+=2;NFSU2_TR(0x64335b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B64335e:{NFSU2_TR(0x64335e);
{goto L64338e;}
}
B643360:L643360:{c.instructions+=2;NFSU2_TR(0x643360);
u8 U[4];
w4(U+0,u32(0x7ab564ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643365:{NFSU2_TR(0x643365);
{goto L64337a;}
}
B643367:L643367:{c.instructions+=2;NFSU2_TR(0x643367);
u8 U[4];
w4(U+0,u32(0x7ab558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64336c:{NFSU2_TR(0x64336c);
{goto L64337a;}
}
B64336e:L64336e:{c.instructions+=2;NFSU2_TR(0x64336e);
u8 U[4];
w4(U+0,u32(0x7ab54cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643373:{NFSU2_TR(0x643373);
{goto L64337a;}
}
B643375:L643375:{c.instructions+=1;NFSU2_TR(0x643375);
u8 U[4];
w4(U+0,u32(0x7ab544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64337a:L64337a:{c.instructions+=4;NFSU2_TR(0x64337a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643380:{NFSU2_TR(0x643380);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643385:{NFSU2_TR(0x643385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643386:{NFSU2_TR(0x643386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64338bull));
TAIL_STATIC(0x75e081u,75e);
}
B64338b:L64338b:{c.instructions+=1;NFSU2_TR(0x64338b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B64338e:L64338e:{c.instructions+=7;NFSU2_TR(0x64338e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643394:{NFSU2_TR(0x643394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643395:{NFSU2_TR(0x643395);
u8 U[4];
w4(U+0,u32(0x7ab524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64339a:{NFSU2_TR(0x64339a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64339d:{NFSU2_TR(0x64339d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64339e:{NFSU2_TR(0x64339e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64339f:{NFSU2_TR(0x64339f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6433a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B6433a4:L6433a4:{c.instructions+=5;NFSU2_TR(0x6433a4);
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
B6433a7:{NFSU2_TR(0x6433a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6433a8:{NFSU2_TR(0x6433a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6433a9:{NFSU2_TR(0x6433a9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6433aa:{NFSU2_TR(0x6433aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6433e5:L6433e5:{c.instructions+=10;NFSU2_TR(0x6433e5);
__builtin_memmove((R+28),(R+28),4);
}
B6433e7:{NFSU2_TR(0x6433e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6433e8:{NFSU2_TR(0x6433e8);
__builtin_memmove((R+20),(R+16),4);
}
B6433ea:{NFSU2_TR(0x6433ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6433eb:{NFSU2_TR(0x6433eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6433ef:{NFSU2_TR(0x6433ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6433f0:{NFSU2_TR(0x6433f0);
__builtin_memmove((R+24),(R+4),4);
}
B6433f2:{NFSU2_TR(0x6433f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6433f4:{NFSU2_TR(0x6433f4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6433f7:{NFSU2_TR(0x6433f7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643508;}}
}
B6433fd:L6433fd:{c.instructions+=1;NFSU2_TR(0x6433fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6433fe:L6433fe:{c.instructions+=4;NFSU2_TR(0x6433fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643400:{NFSU2_TR(0x643400);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B643402:{NFSU2_TR(0x643402);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643405:{NFSU2_TR(0x643405);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643417;}}
}
B643407:L643407:{c.instructions+=4;NFSU2_TR(0x643407);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B643408:{NFSU2_TR(0x643408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64340b:{NFSU2_TR(0x64340b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B643412:{NFSU2_TR(0x643412);
{goto L6434fa;}
}
B643417:L643417:{c.instructions+=2;NFSU2_TR(0x643417);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64341a:{NFSU2_TR(0x64341a);
if(r1(R+518)){{goto L6434f9;}}
}
B643420:L643420:{c.instructions+=2;NFSU2_TR(0x643420);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x9ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B643423:{NFSU2_TR(0x643423);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64342e;}}
}
B643425:L643425:{c.instructions+=2;NFSU2_TR(0x643425);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0xdull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643428:{NFSU2_TR(0x643428);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6434f9;}}
}
B64342e:L64342e:{c.instructions+=2;NFSU2_TR(0x64342e);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643431:{NFSU2_TR(0x643431);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6434b7;}}
}
B643437:L643437:{c.instructions+=3;NFSU2_TR(0x643437);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64343a:{NFSU2_TR(0x64343a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64343d:{NFSU2_TR(0x64343d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64344f;}}
}
B64343f:L64343f:{c.instructions+=2;NFSU2_TR(0x64343f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(r1(R+8))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643441:{NFSU2_TR(0x643441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64344f;}}
}
B643443:L643443:{c.instructions+=2;NFSU2_TR(0x643443);
__builtin_memmove((R+4),(R+24),4);
}
B643445:{NFSU2_TR(0x643445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64344aull));
TAIL_STATIC(0x642bc7u,642);
}
B64344a:L64344a:{c.instructions+=1;NFSU2_TR(0x64344a);
{goto L6434fc;}
}
B64344f:L64344f:{c.instructions+=2;NFSU2_TR(0x64344f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643452:{NFSU2_TR(0x643452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6434b7;}}
}
B643454:L643454:{c.instructions+=4;NFSU2_TR(0x643454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643457:{NFSU2_TR(0x643457);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64345a:{NFSU2_TR(0x64345a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64345c:{NFSU2_TR(0x64345c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6434b7;}}
}
B64345e:L64345e:{c.instructions+=2;NFSU2_TR(0x64345e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643461:{NFSU2_TR(0x643461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6434b7;}}
}
B643463:L643463:{c.instructions+=4;NFSU2_TR(0x643463);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B643466:{NFSU2_TR(0x643466);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B643468:{NFSU2_TR(0x643468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64346a:{NFSU2_TR(0x64346a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643491;}}
}
B64346c:L64346c:{c.instructions+=4;NFSU2_TR(0x64346c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64346e:{NFSU2_TR(0x64346e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B643470:{NFSU2_TR(0x643470);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643473:{NFSU2_TR(0x643473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643481;}}
}
B643475:L643475:{c.instructions+=3;NFSU2_TR(0x643475);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643478:{NFSU2_TR(0x643478);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64347a:{NFSU2_TR(0x64347a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643481;}}
}
B64347c:L64347c:{c.instructions+=2;NFSU2_TR(0x64347c);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64347f:{NFSU2_TR(0x64347f);
if(r1(R+518)){{goto L643491;}}
}
B643481:L643481:{c.instructions+=2;NFSU2_TR(0x643481);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643484:{NFSU2_TR(0x643484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643489;}}
}
B643486:L643486:{c.instructions+=1;NFSU2_TR(0x643486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B643489:L643489:{c.instructions+=4;NFSU2_TR(0x643489);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64348a:{NFSU2_TR(0x64348a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64348c:{NFSU2_TR(0x64348c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64348f:{NFSU2_TR(0x64348f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64346cu);}goto L64346c;}}
}
B643491:L643491:{c.instructions+=3;NFSU2_TR(0x643491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643493:{NFSU2_TR(0x643493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B643495:{NFSU2_TR(0x643495);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64349c;}}
}
B643497:L643497:{c.instructions+=2;NFSU2_TR(0x643497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B64349a:{NFSU2_TR(0x64349a);
{goto L6434fa;}
}
B64349c:L64349c:{c.instructions+=6;NFSU2_TR(0x64349c);
u8 U[4];
w4(U+0,u32(0x7ab5f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6434a1:{NFSU2_TR(0x6434a1);
u8 U[4];
w4(U+0,u32(0x3e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6434a6:{NFSU2_TR(0x6434a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6434a9:{NFSU2_TR(0x6434a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6434aa:{NFSU2_TR(0x6434aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6434ad:{NFSU2_TR(0x6434ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6434b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B6434b2:L6434b2:{c.instructions+=2;NFSU2_TR(0x6434b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6434b5:{NFSU2_TR(0x6434b5);
{goto L6434fc;}
}
B6434b7:L6434b7:{c.instructions+=2;NFSU2_TR(0x6434b7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6434bb:{NFSU2_TR(0x6434bb);
if(r1(R+518)){{goto L6434c2;}}
}
B6434bd:L6434bd:{c.instructions+=2;NFSU2_TR(0x6434bd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3bull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6434c0:{NFSU2_TR(0x6434c0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643443u);}goto L643443;}}
}
B6434c2:L6434c2:{c.instructions+=2;NFSU2_TR(0x6434c2);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x5cull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x5cull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x5cull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6434c5:{NFSU2_TR(0x6434c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643507;}}
}
B6434c7:L6434c7:{c.instructions+=3;NFSU2_TR(0x6434c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6434ca:{NFSU2_TR(0x6434ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6434cd:{NFSU2_TR(0x6434cd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6434d9;}}
}
B6434cf:L6434cf:{c.instructions+=2;NFSU2_TR(0x6434cf);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6434d2:{NFSU2_TR(0x6434d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6434d9;}}
}
B6434d4:L6434d4:{c.instructions+=2;NFSU2_TR(0x6434d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6434d7:{NFSU2_TR(0x6434d7);
{goto L6434f4;}
}
B6434d9:L6434d9:{c.instructions+=2;NFSU2_TR(0x6434d9);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x5cull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x5cull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x5cull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6434dc:{NFSU2_TR(0x6434dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643507;}}
}
B6434de:L6434de:{c.instructions+=3;NFSU2_TR(0x6434de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6434e1:{NFSU2_TR(0x6434e1);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B6434e4:{NFSU2_TR(0x6434e4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643507;}}
}
B6434e6:L6434e6:{c.instructions+=2;NFSU2_TR(0x6434e6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0xdull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0xdull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0xdull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6434ea:{NFSU2_TR(0x6434ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643507;}}
}
B6434ec:L6434ec:{c.instructions+=2;NFSU2_TR(0x6434ec);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0xaull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0xaull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0xaull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6434ef:{NFSU2_TR(0x6434ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643507;}}
}
B6434f1:L6434f1:{c.instructions+=1;NFSU2_TR(0x6434f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6434f4:L6434f4:{c.instructions+=2;NFSU2_TR(0x6434f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6434f7:{NFSU2_TR(0x6434f7);
{goto L6434fa;}
}
B6434f9:L6434f9:{c.instructions+=1;NFSU2_TR(0x6434f9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6434fa:L6434fa:{c.instructions+=1;NFSU2_TR(0x6434fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6434fc:L6434fc:{c.instructions+=3;NFSU2_TR(0x6434fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6434fe:{NFSU2_TR(0x6434fe);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B643501:{NFSU2_TR(0x643501);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6433feu);}goto L6433fe;}}
}
B643507:L643507:{c.instructions+=1;NFSU2_TR(0x643507);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643508:L643508:{c.instructions+=4;NFSU2_TR(0x643508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64350b:{NFSU2_TR(0x64350b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64350c:{NFSU2_TR(0x64350c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64350d:{NFSU2_TR(0x64350d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64350e:L64350e:{c.instructions+=10;NFSU2_TR(0x64350e);
__builtin_memmove((R+28),(R+28),4);
}
B643510:{NFSU2_TR(0x643510);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643511:{NFSU2_TR(0x643511);
__builtin_memmove((R+20),(R+16),4);
}
B643513:{NFSU2_TR(0x643513);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643516:{NFSU2_TR(0x643516);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643517:{NFSU2_TR(0x643517);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643518:{NFSU2_TR(0x643518);
__builtin_memmove((R+12),(R+4),4);
}
B64351a:{NFSU2_TR(0x64351a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64351d:{NFSU2_TR(0x64351d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B643520:{NFSU2_TR(0x643520);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6435aa;}}
}
B643526:L643526:{c.instructions+=2;NFSU2_TR(0x643526);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643529:{NFSU2_TR(0x643529);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6435aa;}}
}
B64352b:L64352b:{c.instructions+=2;NFSU2_TR(0x64352b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x78ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x78ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x78ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B64352f:{NFSU2_TR(0x64352f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6435aa;}}
}
B643531:L643531:{c.instructions+=3;NFSU2_TR(0x643531);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643534:{NFSU2_TR(0x643534);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643535:{NFSU2_TR(0x643535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64353aull));
TAIL_STATIC(0x75df73u,75d);
}
B64353a:L64353a:{c.instructions+=3;NFSU2_TR(0x64353a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64353c:{NFSU2_TR(0x64353c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64353d:{NFSU2_TR(0x64353d);
if(r1(R+518)){{goto L6435aa;}}
}
B64353f:L64353f:{c.instructions+=3;NFSU2_TR(0x64353f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643540:{NFSU2_TR(0x643540);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B643542:{NFSU2_TR(0x643542);
{goto L643576;}
}
B643544:L643544:{c.instructions+=3;NFSU2_TR(0x643544);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643547:{NFSU2_TR(0x643547);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643548:{NFSU2_TR(0x643548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64354dull));
TAIL_STATIC(0x75df73u,75d);
}
B64354d:L64354d:{c.instructions+=3;NFSU2_TR(0x64354d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64354f:{NFSU2_TR(0x64354f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643550:{NFSU2_TR(0x643550);
if(r1(R+518)){{goto L64357b;}}
}
B643552:L643552:{c.instructions+=4;NFSU2_TR(0x643552);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B643554:{NFSU2_TR(0x643554);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B643557:{NFSU2_TR(0x643557);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B643559:{NFSU2_TR(0x643559);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643564;}}
}
B64355b:L64355b:{c.instructions+=3;NFSU2_TR(0x64355b);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B64355e:{NFSU2_TR(0x64355e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B643562:{NFSU2_TR(0x643562);
{goto L643575;}
}
B643564:L643564:{c.instructions+=3;NFSU2_TR(0x643564);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B643566:{NFSU2_TR(0x643566);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B643569:{NFSU2_TR(0x643569);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643571;}}
}
B64356b:L64356b:{c.instructions+=2;NFSU2_TR(0x64356b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc9ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B64356f:{NFSU2_TR(0x64356f);
{goto L643575;}
}
B643571:L643571:{c.instructions+=1;NFSU2_TR(0x643571);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B643575:L643575:{c.instructions+=1;NFSU2_TR(0x643575);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B643576:L643576:{c.instructions+=2;NFSU2_TR(0x643576);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B643579:{NFSU2_TR(0x643579);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643544u);}goto L643544;}}
}
B64357b:L64357b:{c.instructions+=3;NFSU2_TR(0x64357b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64357e:{NFSU2_TR(0x64357e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643580:{NFSU2_TR(0x643580);
if(r1(R+518)){{goto L643584;}}
}
B643582:L643582:{c.instructions+=1;NFSU2_TR(0x643582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643584:L643584:{c.instructions+=4;NFSU2_TR(0x643584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B643587:{NFSU2_TR(0x643587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643588:{NFSU2_TR(0x643588);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64358b:{NFSU2_TR(0x64358b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6435a6;}}
}
B64358d:L64358d:{c.instructions+=6;NFSU2_TR(0x64358d);
u8 U[4];
w4(U+0,u32(0x7ab614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643592:{NFSU2_TR(0x643592);
u8 U[4];
w4(U+0,u32(0x3eaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643597:{NFSU2_TR(0x643597);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64359a:{NFSU2_TR(0x64359a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64359b:{NFSU2_TR(0x64359b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64359e:{NFSU2_TR(0x64359e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6435a3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B6435a3:L6435a3:{c.instructions+=1;NFSU2_TR(0x6435a3);
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
B6435a6:L6435a6:{c.instructions+=2;NFSU2_TR(0x6435a6);
__builtin_memmove((R+0),(R+28),4);
}
B6435a8:{NFSU2_TR(0x6435a8);
{goto L6435ac;}
}
B6435aa:L6435aa:{c.instructions+=1;NFSU2_TR(0x6435aa);
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
B6435ac:L6435ac:{c.instructions+=4;NFSU2_TR(0x6435ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6435ad:{NFSU2_TR(0x6435ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6435ae:{NFSU2_TR(0x6435ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6435af:{NFSU2_TR(0x6435af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6435b2:L6435b2:{c.instructions+=11;NFSU2_TR(0x6435b2);
__builtin_memmove((R+28),(R+28),4);
}
B6435b4:{NFSU2_TR(0x6435b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6435b5:{NFSU2_TR(0x6435b5);
__builtin_memmove((R+20),(R+16),4);
}
B6435b7:{NFSU2_TR(0x6435b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6435b8:{NFSU2_TR(0x6435b8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6435b9:{NFSU2_TR(0x6435b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6435bc:{NFSU2_TR(0x6435bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6435bd:{NFSU2_TR(0x6435bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6435c0:{NFSU2_TR(0x6435c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6435c2:{NFSU2_TR(0x6435c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6435c5:{NFSU2_TR(0x6435c5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643628;}}
}
B6435c7:L6435c7:{c.instructions+=2;NFSU2_TR(0x6435c7);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6435ca:{NFSU2_TR(0x6435ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643628;}}
}
B6435cc:L6435cc:{c.instructions+=5;NFSU2_TR(0x6435cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6435cd:{NFSU2_TR(0x6435cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6435cf:{NFSU2_TR(0x6435cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6435d1:{NFSU2_TR(0x6435d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6435d4:{NFSU2_TR(0x6435d4);
{goto L6435f4;}
}
B6435d6:L6435d6:{c.instructions+=3;NFSU2_TR(0x6435d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6435d8:{NFSU2_TR(0x6435d8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B6435db:{NFSU2_TR(0x6435db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6435f8;}}
}
B6435dd:L6435dd:{c.instructions+=2;NFSU2_TR(0x6435dd);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x37ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x37ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6435e0:{NFSU2_TR(0x6435e0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6435f8;}}
}
B6435e2:L6435e2:{c.instructions+=2;NFSU2_TR(0x6435e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xe0000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6435e7:{NFSU2_TR(0x6435e7);
if(r1(R+518)){{goto L6435ec;}}
}
B6435e9:L6435e9:{c.instructions+=2;NFSU2_TR(0x6435e9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6435eb:{NFSU2_TR(0x6435eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6435ec:L6435ec:{c.instructions+=3;NFSU2_TR(0x6435ec);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B6435ef:{NFSU2_TR(0x6435ef);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6435f3:{NFSU2_TR(0x6435f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6435f4:L6435f4:{c.instructions+=2;NFSU2_TR(0x6435f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6435f6:{NFSU2_TR(0x6435f6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6435d6u);}goto L6435d6;}}
}
B6435f8:L6435f8:{c.instructions+=3;NFSU2_TR(0x6435f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6435fb:{NFSU2_TR(0x6435fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6435fd:{NFSU2_TR(0x6435fd);
if(r1(R+518)){{goto L643601;}}
}
B6435ff:L6435ff:{c.instructions+=1;NFSU2_TR(0x6435ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B643601:L643601:{c.instructions+=2;NFSU2_TR(0x643601);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643603:{NFSU2_TR(0x643603);
if(r1(R+518)){{goto L643621;}}
}
B643605:L643605:{c.instructions+=7;NFSU2_TR(0x643605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643608:{NFSU2_TR(0x643608);
u8 U[4];
w4(U+0,u32(0x7ab634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64360d:{NFSU2_TR(0x64360d);
u8 U[4];
w4(U+0,u32(0x3ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643612:{NFSU2_TR(0x643612);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643615:{NFSU2_TR(0x643615);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643616:{NFSU2_TR(0x643616);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643619:{NFSU2_TR(0x643619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64361eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B64361e:L64361e:{c.instructions+=1;NFSU2_TR(0x64361e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643621:L643621:{c.instructions+=4;NFSU2_TR(0x643621);
__builtin_memmove((R+0),(R+24),4);
}
B643623:{NFSU2_TR(0x643623);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643625:{NFSU2_TR(0x643625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643626:{NFSU2_TR(0x643626);
{goto L64362a;}
}
B643628:L643628:{c.instructions+=1;NFSU2_TR(0x643628);
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
B64362a:L64362a:{c.instructions+=4;NFSU2_TR(0x64362a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64362b:{NFSU2_TR(0x64362b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64362c:{NFSU2_TR(0x64362c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64362d:{NFSU2_TR(0x64362d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643630:L643630:{c.instructions+=10;NFSU2_TR(0x643630);
__builtin_memmove((R+28),(R+28),4);
}
B643632:{NFSU2_TR(0x643632);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643633:{NFSU2_TR(0x643633);
__builtin_memmove((R+20),(R+16),4);
}
B643635:{NFSU2_TR(0x643635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643636:{NFSU2_TR(0x643636);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643637:{NFSU2_TR(0x643637);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64363a:{NFSU2_TR(0x64363a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64363b:{NFSU2_TR(0x64363b);
__builtin_memmove((R+28),(R+4),4);
}
B64363d:{NFSU2_TR(0x64363d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B643640:{NFSU2_TR(0x643640);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6436cb;}}
}
B643646:L643646:{c.instructions+=3;NFSU2_TR(0x643646);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643649:{NFSU2_TR(0x643649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64364a:{NFSU2_TR(0x64364a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64364full));
TAIL_STATIC(0x75df39u,75d);
}
B64364f:L64364f:{c.instructions+=3;NFSU2_TR(0x64364f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643651:{NFSU2_TR(0x643651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643652:{NFSU2_TR(0x643652);
if(r1(R+518)){{goto L6436cb;}}
}
B643654:L643654:{c.instructions+=6;NFSU2_TR(0x643654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643655:{NFSU2_TR(0x643655);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B643657:{NFSU2_TR(0x643657);
__builtin_memmove((R+0),(R+12),4);
}
B643659:{NFSU2_TR(0x643659);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
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
B64365c:{NFSU2_TR(0x64365c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64365f:{NFSU2_TR(0x64365f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64369b;}}
}
B643661:L643661:{c.instructions+=3;NFSU2_TR(0x643661);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643664:{NFSU2_TR(0x643664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643665:{NFSU2_TR(0x643665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64366aull));
TAIL_STATIC(0x75df39u,75d);
}
B64366a:L64366a:{c.instructions+=3;NFSU2_TR(0x64366a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64366c:{NFSU2_TR(0x64366c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64366d:{NFSU2_TR(0x64366d);
if(r1(R+518)){{goto L64369b;}}
}
B64366f:L64366f:{c.instructions+=2;NFSU2_TR(0x64366f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x19999999ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x19999999ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B643675:{NFSU2_TR(0x643675);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64367e;}}
}
B643677:L643677:{c.instructions+=1;NFSU2_TR(0x643677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64367e:L64367e:{c.instructions+=6;NFSU2_TR(0x64367e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B643681:{NFSU2_TR(0x643681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B643684:{NFSU2_TR(0x643684);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B643686:{NFSU2_TR(0x643686);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B64368a:{NFSU2_TR(0x64368a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B64368c:{NFSU2_TR(0x64368c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643695;}}
}
B64368e:L64368e:{c.instructions+=1;NFSU2_TR(0x64368e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B643695:L643695:{c.instructions+=3;NFSU2_TR(0x643695);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B643696:{NFSU2_TR(0x643696);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B643699:{NFSU2_TR(0x643699);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643661u);}goto L643661;}}
}
B64369b:L64369b:{c.instructions+=3;NFSU2_TR(0x64369b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64369e:{NFSU2_TR(0x64369e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6436a0:{NFSU2_TR(0x6436a0);
if(r1(R+518)){{goto L6436a4;}}
}
B6436a2:L6436a2:{c.instructions+=1;NFSU2_TR(0x6436a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6436a4:L6436a4:{c.instructions+=3;NFSU2_TR(0x6436a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6436a8:{NFSU2_TR(0x6436a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6436a9:{NFSU2_TR(0x6436a9);
if(r1(R+518)){{goto L6436c4;}}
}
B6436ab:L6436ab:{c.instructions+=6;NFSU2_TR(0x6436ab);
u8 U[4];
w4(U+0,u32(0x7ab654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436b0:{NFSU2_TR(0x6436b0);
u8 U[4];
w4(U+0,u32(0x3ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436b5:{NFSU2_TR(0x6436b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6436b8:{NFSU2_TR(0x6436b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436b9:{NFSU2_TR(0x6436b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6436bc:{NFSU2_TR(0x6436bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6436c1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B6436c1:L6436c1:{c.instructions+=1;NFSU2_TR(0x6436c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6436c4:L6436c4:{c.instructions+=3;NFSU2_TR(0x6436c4);
__builtin_memmove((R+0),(R+12),4);
}
B6436c6:{NFSU2_TR(0x6436c6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6436c9:{NFSU2_TR(0x6436c9);
{goto L6436cd;}
}
B6436cb:L6436cb:{c.instructions+=1;NFSU2_TR(0x6436cb);
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
B6436cd:L6436cd:{c.instructions+=4;NFSU2_TR(0x6436cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6436ce:{NFSU2_TR(0x6436ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6436cf:{NFSU2_TR(0x6436cf);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6436d0:{NFSU2_TR(0x6436d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6436d3:L6436d3:{c.instructions+=10;NFSU2_TR(0x6436d3);
__builtin_memmove((R+28),(R+28),4);
}
B6436d5:{NFSU2_TR(0x6436d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436d6:{NFSU2_TR(0x6436d6);
__builtin_memmove((R+20),(R+16),4);
}
B6436d8:{NFSU2_TR(0x6436d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436d9:{NFSU2_TR(0x6436d9);
__builtin_memmove((R+12),(R+4),4);
}
B6436db:{NFSU2_TR(0x6436db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6436de:{NFSU2_TR(0x6436de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436df:{NFSU2_TR(0x6436df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6436e2:{NFSU2_TR(0x6436e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6436e4:{NFSU2_TR(0x6436e4);
if(r1(R+512)){{goto L6436ed;}}
}
B6436e6:L6436e6:{c.instructions+=2;NFSU2_TR(0x6436e6);
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
B6436e8:{NFSU2_TR(0x6436e8);
{goto L643866;}
}
B6436ed:L6436ed:{c.instructions+=4;NFSU2_TR(0x6436ed);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6436ef:{NFSU2_TR(0x6436ef);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6436f2:{NFSU2_TR(0x6436f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6436f3:{NFSU2_TR(0x6436f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643856;}}
}
B6436f9:L6436f9:{c.instructions+=2;NFSU2_TR(0x6436f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6436fd:{NFSU2_TR(0x6436fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643856;}}
}
B643703:L643703:{c.instructions+=3;NFSU2_TR(0x643703);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643706:{NFSU2_TR(0x643706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B643708:{NFSU2_TR(0x643708);
if(r1(R+512)){{goto L643723;}}
}
B64370a:L64370a:{c.instructions+=6;NFSU2_TR(0x64370a);
u8 U[4];
w4(U+0,u32(0x7ab678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64370f:{NFSU2_TR(0x64370f);
u8 U[4];
w4(U+0,u32(0x3efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643714:{NFSU2_TR(0x643714);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643717:{NFSU2_TR(0x643717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643718:{NFSU2_TR(0x643718);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64371b:{NFSU2_TR(0x64371b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643720ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B643720:L643720:{c.instructions+=1;NFSU2_TR(0x643720);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643723:L643723:{c.instructions+=4;NFSU2_TR(0x643723);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B643725:{NFSU2_TR(0x643725);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B643728:{NFSU2_TR(0x643728);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x61ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64372b:{NFSU2_TR(0x64372b);
if(r1(R+518)){{goto L64384b;}}
}
B643731:L643731:{c.instructions+=2;NFSU2_TR(0x643731);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B643732:{NFSU2_TR(0x643732);
if(r1(R+518)){{goto L64383f;}}
}
B643738:L643738:{c.instructions+=2;NFSU2_TR(0x643738);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64373b:{NFSU2_TR(0x64373b);
if(r1(R+518)){{goto L643834;}}
}
B643741:L643741:{c.instructions+=2;NFSU2_TR(0x643741);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B643744:{NFSU2_TR(0x643744);
if(r1(R+518)){{goto L643829;}}
}
B64374a:L64374a:{c.instructions+=2;NFSU2_TR(0x64374a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64374d:{NFSU2_TR(0x64374d);
if(r1(R+518)){{goto L64381e;}}
}
B643753:L643753:{c.instructions+=3;NFSU2_TR(0x643753);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B643754:{NFSU2_TR(0x643754);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B643755:{NFSU2_TR(0x643755);
if(r1(R+518)){{goto L643813;}}
}
B64375b:L64375b:{c.instructions+=3;NFSU2_TR(0x64375b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64375c:{NFSU2_TR(0x64375c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64375d:{NFSU2_TR(0x64375d);
if(r1(R+518)){{goto L643808;}}
}
B643763:L643763:{c.instructions+=2;NFSU2_TR(0x643763);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B643766:{NFSU2_TR(0x643766);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64379d;}}
}
B643768:L643768:{c.instructions+=2;NFSU2_TR(0x643768);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x37ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x37ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64376b:{NFSU2_TR(0x64376b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64379d;}}
}
B64376d:L64376d:{c.instructions+=4;NFSU2_TR(0x64376d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B643770:{NFSU2_TR(0x643770);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643773:{NFSU2_TR(0x643773);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B643775:{NFSU2_TR(0x643775);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643779;}}
}
B643777:L643777:{c.instructions+=1;NFSU2_TR(0x643777);
__builtin_memmove((R+12),(R+0),4);
}
B643779:L643779:{c.instructions+=2;NFSU2_TR(0x643779);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64377b:{NFSU2_TR(0x64377b);
{goto L64378f;}
}
B64377d:L64377d:{c.instructions+=3;NFSU2_TR(0x64377d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64377f:{NFSU2_TR(0x64377f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B643781:{NFSU2_TR(0x643781);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643793;}}
}
B643783:L643783:{c.instructions+=2;NFSU2_TR(0x643783);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x37ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x37ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643785:{NFSU2_TR(0x643785);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L643793;}}
}
B643787:L643787:{c.instructions+=3;NFSU2_TR(0x643787);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B64378a:{NFSU2_TR(0x64378a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B64378e:{NFSU2_TR(0x64378e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64378f:L64378f:{c.instructions+=2;NFSU2_TR(0x64378f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B643791:{NFSU2_TR(0x643791);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64377du);}goto L64377d;}}
}
B643793:L643793:{c.instructions+=3;NFSU2_TR(0x643793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643796:{NFSU2_TR(0x643796);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643798:{NFSU2_TR(0x643798);
{goto L643861;}
}
B64379d:L64379d:{c.instructions+=2;NFSU2_TR(0x64379d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6437a0:{NFSU2_TR(0x6437a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643802;}}
}
B6437a2:L6437a2:{c.instructions+=3;NFSU2_TR(0x6437a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6437a5:{NFSU2_TR(0x6437a5);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6437a8:{NFSU2_TR(0x6437a8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6437ff;}}
}
B6437aa:L6437aa:{c.instructions+=3;NFSU2_TR(0x6437aa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6437ad:{NFSU2_TR(0x6437ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6437ae:{NFSU2_TR(0x6437ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6437b3ull));
TAIL_STATIC(0x75df73u,75d);
}
B6437b3:L6437b3:{c.instructions+=3;NFSU2_TR(0x6437b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6437b5:{NFSU2_TR(0x6437b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6437b6:{NFSU2_TR(0x6437b6);
if(r1(R+518)){{goto L6437ff;}}
}
B6437b8:L6437b8:{c.instructions+=3;NFSU2_TR(0x6437b8);
__builtin_memmove((R+24),(R+28),4);
}
B6437ba:{NFSU2_TR(0x6437ba);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6437bc:{NFSU2_TR(0x6437bc);
{goto L6437f0;}
}
B6437be:L6437be:{c.instructions+=3;NFSU2_TR(0x6437be);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6437c1:{NFSU2_TR(0x6437c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6437c2:{NFSU2_TR(0x6437c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6437c7ull));
TAIL_STATIC(0x75df73u,75d);
}
B6437c7:L6437c7:{c.instructions+=3;NFSU2_TR(0x6437c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6437c9:{NFSU2_TR(0x6437c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6437ca:{NFSU2_TR(0x6437ca);
if(r1(R+518)){{goto L6437f5;}}
}
B6437cc:L6437cc:{c.instructions+=4;NFSU2_TR(0x6437cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6437ce:{NFSU2_TR(0x6437ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6437d1:{NFSU2_TR(0x6437d1);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6437d3:{NFSU2_TR(0x6437d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6437de;}}
}
B6437d5:L6437d5:{c.instructions+=3;NFSU2_TR(0x6437d5);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6437d8:{NFSU2_TR(0x6437d8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa9ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6437dc:{NFSU2_TR(0x6437dc);
{goto L6437ef;}
}
B6437de:L6437de:{c.instructions+=3;NFSU2_TR(0x6437de);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6437e0:{NFSU2_TR(0x6437e0);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B6437e3:{NFSU2_TR(0x6437e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6437eb;}}
}
B6437e5:L6437e5:{c.instructions+=2;NFSU2_TR(0x6437e5);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffc9ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6437e9:{NFSU2_TR(0x6437e9);
{goto L6437ef;}
}
B6437eb:L6437eb:{c.instructions+=1;NFSU2_TR(0x6437eb);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6437ef:L6437ef:{c.instructions+=1;NFSU2_TR(0x6437ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6437f0:L6437f0:{c.instructions+=2;NFSU2_TR(0x6437f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
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
B6437f3:{NFSU2_TR(0x6437f3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6437beu);}goto L6437be;}}
}
B6437f5:L6437f5:{c.instructions+=4;NFSU2_TR(0x6437f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6437f8:{NFSU2_TR(0x6437f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6437fa:{NFSU2_TR(0x6437fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6437fd:{NFSU2_TR(0x6437fd);
{goto L643861;}
}
B6437ff:L6437ff:{c.instructions+=1;NFSU2_TR(0x6437ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643802:L643802:{c.instructions+=3;NFSU2_TR(0x643802);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643805:{NFSU2_TR(0x643805);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643806:{NFSU2_TR(0x643806);
{goto L64385c;}
}
B643808:L643808:{c.instructions+=3;NFSU2_TR(0x643808);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64380b:{NFSU2_TR(0x64380b);
u8 U[4];
w4(U+0,u32(0xbull));
s4(u32(r4(R+0)),r4(U+0));
}
B643811:{NFSU2_TR(0x643811);
{goto L643848;}
}
B643813:L643813:{c.instructions+=3;NFSU2_TR(0x643813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643816:{NFSU2_TR(0x643816);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64381c:{NFSU2_TR(0x64381c);
{goto L643848;}
}
B64381e:L64381e:{c.instructions+=3;NFSU2_TR(0x64381e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643821:{NFSU2_TR(0x643821);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+0)),r4(U+0));
}
B643827:{NFSU2_TR(0x643827);
{goto L643848;}
}
B643829:L643829:{c.instructions+=3;NFSU2_TR(0x643829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64382c:{NFSU2_TR(0x64382c);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+0)),r4(U+0));
}
B643832:{NFSU2_TR(0x643832);
{goto L643848;}
}
B643834:L643834:{c.instructions+=3;NFSU2_TR(0x643834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643837:{NFSU2_TR(0x643837);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B64383d:{NFSU2_TR(0x64383d);
{goto L643848;}
}
B64383f:L64383f:{c.instructions+=2;NFSU2_TR(0x64383f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643842:{NFSU2_TR(0x643842);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B643848:L643848:{c.instructions+=2;NFSU2_TR(0x643848);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643849:{NFSU2_TR(0x643849);
{goto L643861;}
}
B64384b:L64384b:{c.instructions+=3;NFSU2_TR(0x64384b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64384e:{NFSU2_TR(0x64384e);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+0)),r4(U+0));
}
B643854:{NFSU2_TR(0x643854);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643848u);}goto L643848;}
}
B643856:L643856:{c.instructions+=2;NFSU2_TR(0x643856);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B643859:{NFSU2_TR(0x643859);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64385c:L64385c:{c.instructions+=2;NFSU2_TR(0x64385c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64385f:{NFSU2_TR(0x64385f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B643861:L643861:{c.instructions+=3;NFSU2_TR(0x643861);
__builtin_memmove((R+0),(R+24),4);
}
B643863:{NFSU2_TR(0x643863);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643865:{NFSU2_TR(0x643865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643866:L643866:{c.instructions+=4;NFSU2_TR(0x643866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643867:{NFSU2_TR(0x643867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643868:{NFSU2_TR(0x643868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643869:{NFSU2_TR(0x643869);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64386c:L64386c:{c.instructions+=8;NFSU2_TR(0x64386c);
__builtin_memmove((R+28),(R+28),4);
}
B64386e:{NFSU2_TR(0x64386e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64386f:{NFSU2_TR(0x64386f);
__builtin_memmove((R+20),(R+16),4);
}
B643871:{NFSU2_TR(0x643871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B643874:{NFSU2_TR(0x643874);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643875:{NFSU2_TR(0x643875);
__builtin_memmove((R+12),(R+4),4);
}
B643877:{NFSU2_TR(0x643877);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B64387b:{NFSU2_TR(0x64387b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643884;}}
}
B64387d:L64387d:{c.instructions+=2;NFSU2_TR(0x64387d);
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
B64387f:{NFSU2_TR(0x64387f);
{goto L64396c;}
}
B643884:L643884:{c.instructions+=6;NFSU2_TR(0x643884);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643885:{NFSU2_TR(0x643885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643888:{NFSU2_TR(0x643888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643889:{NFSU2_TR(0x643889);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64388c:{NFSU2_TR(0x64388c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64388f:{NFSU2_TR(0x64388f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643968;}}
}
B643895:L643895:{c.instructions+=3;NFSU2_TR(0x643895);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B643898:{NFSU2_TR(0x643898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643899:{NFSU2_TR(0x643899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64389eull));
TAIL_STATIC(0x75defau,75d);
}
B64389e:L64389e:{c.instructions+=3;NFSU2_TR(0x64389e);
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
B6438a0:{NFSU2_TR(0x6438a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6438a1:{NFSU2_TR(0x6438a1);
if(r1(R+518)){{goto L643968;}}
}
B6438a7:L6438a7:{c.instructions+=3;NFSU2_TR(0x6438a7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B6438aa:{NFSU2_TR(0x6438aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6438ab:{NFSU2_TR(0x6438ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6438b0ull));
TAIL_STATIC(0x75defau,75d);
}
B6438b0:L6438b0:{c.instructions+=3;NFSU2_TR(0x6438b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6438b2:{NFSU2_TR(0x6438b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6438b3:{NFSU2_TR(0x6438b3);
if(r1(R+518)){{goto L643968;}}
}
B6438b9:L6438b9:{c.instructions+=3;NFSU2_TR(0x6438b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6438bc:{NFSU2_TR(0x6438bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6438bf:{NFSU2_TR(0x6438bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643968;}}
}
B6438c5:L6438c5:{c.instructions+=2;NFSU2_TR(0x6438c5);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6438c8:{NFSU2_TR(0x6438c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643968;}}
}
B6438ce:L6438ce:{c.instructions+=6;NFSU2_TR(0x6438ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6438d1:{NFSU2_TR(0x6438d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6438d2:{NFSU2_TR(0x6438d2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6438d3:{NFSU2_TR(0x6438d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6438d4:{NFSU2_TR(0x6438d4);
__builtin_memmove((R+4),(R+12),4);
}
B6438d6:{NFSU2_TR(0x6438d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6438dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643630u);}goto L643630;}
}
B6438db:L6438db:{c.instructions+=2;NFSU2_TR(0x6438db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6438dd:{NFSU2_TR(0x6438dd);
if(r1(R+518)){{goto L643968;}}
}
B6438e3:L6438e3:{c.instructions+=2;NFSU2_TR(0x6438e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6438ea:{NFSU2_TR(0x6438ea);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L643968;}}
}
B6438ec:L6438ec:{c.instructions+=3;NFSU2_TR(0x6438ec);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6438ee:{NFSU2_TR(0x6438ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6438f1:{NFSU2_TR(0x6438f1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643968;}}
}
B6438f3:L6438f3:{c.instructions+=2;NFSU2_TR(0x6438f3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6438f6:{NFSU2_TR(0x6438f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643968;}}
}
B6438f8:L6438f8:{c.instructions+=6;NFSU2_TR(0x6438f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6438fb:{NFSU2_TR(0x6438fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6438fc:{NFSU2_TR(0x6438fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6438fd:{NFSU2_TR(0x6438fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6438fe:{NFSU2_TR(0x6438fe);
__builtin_memmove((R+4),(R+12),4);
}
B643900:{NFSU2_TR(0x643900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643905ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643630u);}goto L643630;}
}
B643905:L643905:{c.instructions+=2;NFSU2_TR(0x643905);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643907:{NFSU2_TR(0x643907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64391d;}}
}
B643909:L643909:{c.instructions+=5;NFSU2_TR(0x643909);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64390c:{NFSU2_TR(0x64390c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64390d:{NFSU2_TR(0x64390d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64390e:{NFSU2_TR(0x64390e);
__builtin_memmove((R+4),(R+12),4);
}
B643910:{NFSU2_TR(0x643910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643915ull));
TAIL_STATIC(0x642dadu,642);
}
B643915:L643915:{c.instructions+=2;NFSU2_TR(0x643915);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643917:{NFSU2_TR(0x643917);
if(r1(R+518)){{goto L643968;}}
}
B643919:L643919:{c.instructions+=1;NFSU2_TR(0x643919);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64391d:L64391d:{c.instructions+=2;NFSU2_TR(0x64391d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B643924:{NFSU2_TR(0x643924);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L643968;}}
}
B643926:L643926:{c.instructions+=5;NFSU2_TR(0x643926);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B643928:{NFSU2_TR(0x643928);
__builtin_memmove((R+12),(R+28),4);
}
B64392a:{NFSU2_TR(0x64392a);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B64392c:{NFSU2_TR(0x64392c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B64392f:{NFSU2_TR(0x64392f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643968;}}
}
B643931:L643931:{c.instructions+=4;NFSU2_TR(0x643931);
__builtin_memmove((R+4),(R+12),4);
}
B643933:{NFSU2_TR(0x643933);
__builtin_memmove((R+0),(R+4),4);
}
B643935:{NFSU2_TR(0x643935);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B643938:{NFSU2_TR(0x643938);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64393b:L64393b:{c.instructions+=1;NFSU2_TR(0x64393b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64393d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64393bu);}goto L64393b;}
}
B64393d:L64393d:{c.instructions+=6;NFSU2_TR(0x64393d);
__builtin_memmove((R+4),(R+0),4);
}
B64393f:{NFSU2_TR(0x64393f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643942:{NFSU2_TR(0x643942);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643943:{NFSU2_TR(0x643943);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B643946:{NFSU2_TR(0x643946);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643948:{NFSU2_TR(0x643948);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64394b:L64394b:{c.instructions+=1;NFSU2_TR(0x64394b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64394d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64394bu);}goto L64394b;}
}
B64394d:L64394d:{c.instructions+=3;NFSU2_TR(0x64394d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64394e:{NFSU2_TR(0x64394e);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B643953:{NFSU2_TR(0x643953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643958ull));
TAIL_STATIC(0x672277u,672);
}
B643958:L643958:{c.instructions+=2;NFSU2_TR(0x643958);
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
B64395a:{NFSU2_TR(0x64395a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643968;}}
}
B64395c:L64395c:{c.instructions+=5;NFSU2_TR(0x64395c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64395f:{NFSU2_TR(0x64395f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643962:{NFSU2_TR(0x643962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643964:{NFSU2_TR(0x643964);
__builtin_memmove((R+0),(R+12),4);
}
B643966:{NFSU2_TR(0x643966);
{goto L64396a;}
}
B643968:L643968:{c.instructions+=1;NFSU2_TR(0x643968);
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
B64396a:L64396a:{c.instructions+=2;NFSU2_TR(0x64396a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64396b:{NFSU2_TR(0x64396b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64396c:L64396c:{c.instructions+=3;NFSU2_TR(0x64396c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64396d:{NFSU2_TR(0x64396d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64396e:{NFSU2_TR(0x64396e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643971:L643971:{c.instructions+=10;NFSU2_TR(0x643971);
__builtin_memmove((R+28),(R+28),4);
}
B643973:{NFSU2_TR(0x643973);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643974:{NFSU2_TR(0x643974);
__builtin_memmove((R+20),(R+16),4);
}
B643976:{NFSU2_TR(0x643976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643977:{NFSU2_TR(0x643977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643978:{NFSU2_TR(0x643978);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643979:{NFSU2_TR(0x643979);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64397c:{NFSU2_TR(0x64397c);
__builtin_memmove((R+12),(R+4),4);
}
B64397e:{NFSU2_TR(0x64397e);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B643981:{NFSU2_TR(0x643981);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6439ab;}}
}
B643983:L643983:{c.instructions+=2;NFSU2_TR(0x643983);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x27ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643986:{NFSU2_TR(0x643986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6439ab;}}
}
B643988:L643988:{c.instructions+=4;NFSU2_TR(0x643988);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64398b:{NFSU2_TR(0x64398b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64398e:{NFSU2_TR(0x64398e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64398f:{NFSU2_TR(0x64398f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643994ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6436d3u);}goto L6436d3;}
}
B643994:L643994:{c.instructions+=2;NFSU2_TR(0x643994);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643996:{NFSU2_TR(0x643996);
if(r1(R+518)){{goto L6439ab;}}
}
B643998:L643998:{c.instructions+=3;NFSU2_TR(0x643998);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B64399a:{NFSU2_TR(0x64399a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B64399d:{NFSU2_TR(0x64399d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6439ab;}}
}
B64399f:L64399f:{c.instructions+=2;NFSU2_TR(0x64399f);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x27ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6439a2:{NFSU2_TR(0x6439a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6439ab;}}
}
B6439a4:L6439a4:{c.instructions+=4;NFSU2_TR(0x6439a4);
__builtin_memmove((R+0),(R+24),4);
}
B6439a6:{NFSU2_TR(0x6439a6);
w1(R+512,u8((r4(R+0))<(r4(R+28))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6439a8:{NFSU2_TR(0x6439a8);
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
B6439a9:{NFSU2_TR(0x6439a9);
{goto L6439ad;}
}
B6439ab:L6439ab:{c.instructions+=1;NFSU2_TR(0x6439ab);
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
B6439ad:L6439ad:{c.instructions+=5;NFSU2_TR(0x6439ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6439ae:{NFSU2_TR(0x6439ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6439af:{NFSU2_TR(0x6439af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6439b0:{NFSU2_TR(0x6439b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6439b1:{NFSU2_TR(0x6439b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6439b4:L6439b4:{c.instructions+=13;NFSU2_TR(0x6439b4);
__builtin_memmove((R+28),(R+28),4);
}
B6439b6:{NFSU2_TR(0x6439b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439b7:{NFSU2_TR(0x6439b7);
__builtin_memmove((R+20),(R+16),4);
}
B6439b9:{NFSU2_TR(0x6439b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439ba:{NFSU2_TR(0x6439ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439bb:{NFSU2_TR(0x6439bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439bc:{NFSU2_TR(0x6439bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6439bf:{NFSU2_TR(0x6439bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439c0:{NFSU2_TR(0x6439c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6439c1:{NFSU2_TR(0x6439c1);
__builtin_memmove((R+28),(R+4),4);
}
B6439c3:{NFSU2_TR(0x6439c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6439c6:{NFSU2_TR(0x6439c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6439c8:{NFSU2_TR(0x6439c8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643af5;}}
}
B6439ce:L6439ce:{c.instructions+=3;NFSU2_TR(0x6439ce);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6439d0:{NFSU2_TR(0x6439d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6439d2:{NFSU2_TR(0x6439d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6439d9;}}
}
B6439d4:L6439d4:{c.instructions+=2;NFSU2_TR(0x6439d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6439d7:{NFSU2_TR(0x6439d7);
{goto L6439ef;}
}
B6439d9:L6439d9:{c.instructions+=2;NFSU2_TR(0x6439d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6439db:{NFSU2_TR(0x6439db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643af5;}}
}
B6439e1:L6439e1:{c.instructions+=2;NFSU2_TR(0x6439e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6439e5:{NFSU2_TR(0x6439e5);
if(r1(R+518)){{goto L643af5;}}
}
B6439eb:L6439eb:{c.instructions+=1;NFSU2_TR(0x6439eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
w1(U+4,u8(0x3eull));
s1(u32(r4(U+0)),r1(U+4));
}
B6439ef:L6439ef:{c.instructions+=4;NFSU2_TR(0x6439ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6439f2:{NFSU2_TR(0x6439f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6439f4:{NFSU2_TR(0x6439f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6439f7:{NFSU2_TR(0x6439f7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643a39;}}
}
B6439f9:L6439f9:{c.instructions+=1;NFSU2_TR(0x6439f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6439fc:L6439fc:{c.instructions+=3;NFSU2_TR(0x6439fc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6439fe:{NFSU2_TR(0x6439fe);
u8 U[7];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B643a01:{NFSU2_TR(0x643a01);
if(r1(R+518)){{goto L643a39;}}
}
B643a03:L643a03:{c.instructions+=2;NFSU2_TR(0x643a03);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643a05:{NFSU2_TR(0x643a05);
if(r1(R+518)){{goto L643a39;}}
}
B643a07:L643a07:{c.instructions+=2;NFSU2_TR(0x643a07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643a09:{NFSU2_TR(0x643a09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643a32;}}
}
B643a0b:L643a0b:{c.instructions+=2;NFSU2_TR(0x643a0b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B643a0f:{NFSU2_TR(0x643a0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643a32;}}
}
B643a11:L643a11:{c.instructions+=5;NFSU2_TR(0x643a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B643a14:{NFSU2_TR(0x643a14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643a15:{NFSU2_TR(0x643a15);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B643a16:{NFSU2_TR(0x643a16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B643a18:{NFSU2_TR(0x643a18);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643a32;}}
}
B643a1a:L643a1a:{c.instructions+=3;NFSU2_TR(0x643a1a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B643a1c:{NFSU2_TR(0x643a1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643a1e:{NFSU2_TR(0x643a1e);
if(r1(R+518)){{goto L643a2f;}}
}
B643a20:L643a20:{c.instructions+=2;NFSU2_TR(0x643a20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643a22:{NFSU2_TR(0x643a22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643a32;}}
}
B643a24:L643a24:{c.instructions+=2;NFSU2_TR(0x643a24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B643a26:{NFSU2_TR(0x643a26);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643a32;}}
}
B643a28:L643a28:{c.instructions+=2;NFSU2_TR(0x643a28);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643a2b:{NFSU2_TR(0x643a2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643a32;}}
}
B643a2d:L643a2d:{c.instructions+=2;NFSU2_TR(0x643a2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643a2e:{NFSU2_TR(0x643a2e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B643a2f:L643a2f:{c.instructions+=1;NFSU2_TR(0x643a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B643a32:L643a32:{c.instructions+=4;NFSU2_TR(0x643a32);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643a33:{NFSU2_TR(0x643a33);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B643a34:{NFSU2_TR(0x643a34);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B643a37:{NFSU2_TR(0x643a37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6439fcu);}goto L6439fc;}}
}
B643a39:L643a39:{c.instructions+=3;NFSU2_TR(0x643a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643a3c:{NFSU2_TR(0x643a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B643a3e:{NFSU2_TR(0x643a3e);
if(r1(R+512)){{goto L643a4e;}}
}
B643a40:L643a40:{c.instructions+=4;NFSU2_TR(0x643a40);
u8 U[4];
w4(U+0,u32(0x7ab6c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a45:{NFSU2_TR(0x643a45);
__builtin_memmove((R+24),(R+0),4);
}
B643a47:{NFSU2_TR(0x643a47);
u8 U[4];
w4(U+0,u32(0x3eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a4c:{NFSU2_TR(0x643a4c);
{goto L643a5d;}
}
B643a4e:L643a4e:{c.instructions+=2;NFSU2_TR(0x643a4e);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643a51:{NFSU2_TR(0x643a51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643a6c;}}
}
B643a53:L643a53:{c.instructions+=2;NFSU2_TR(0x643a53);
u8 U[4];
w4(U+0,u32(0x7ab6a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a58:{NFSU2_TR(0x643a58);
u8 U[4];
w4(U+0,u32(0x3edull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a5d:L643a5d:{c.instructions+=4;NFSU2_TR(0x643a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643a60:{NFSU2_TR(0x643a60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a61:{NFSU2_TR(0x643a61);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643a64:{NFSU2_TR(0x643a64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643a69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B643a69:L643a69:{c.instructions+=1;NFSU2_TR(0x643a69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B643a6c:L643a6c:{c.instructions+=7;NFSU2_TR(0x643a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643a6f:{NFSU2_TR(0x643a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643a72:{NFSU2_TR(0x643a72);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B643a74:{NFSU2_TR(0x643a74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a76:{NFSU2_TR(0x643a76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643a77:{NFSU2_TR(0x643a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643a7a:{NFSU2_TR(0x643a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643a7full));
TAIL_STATIC(0x671ccbu,671);
}
B643a7f:L643a7f:{c.instructions+=3;NFSU2_TR(0x643a7f);
__builtin_memmove((R+12),(R+0),4);
}
B643a81:{NFSU2_TR(0x643a81);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643a83:{NFSU2_TR(0x643a83);
if(r1(R+518)){{goto L643af5;}}
}
B643a85:L643a85:{c.instructions+=3;NFSU2_TR(0x643a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643a88:{NFSU2_TR(0x643a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643a8b:{NFSU2_TR(0x643a8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643a8d:L643a8d:{c.instructions+=3;NFSU2_TR(0x643a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643a90:{NFSU2_TR(0x643a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B643a93:{NFSU2_TR(0x643a93);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643ad1;}}
}
B643a95:L643a95:{c.instructions+=2;NFSU2_TR(0x643a95);
__builtin_memmove((R+8),(R+0),4);
}
B643a97:{NFSU2_TR(0x643a97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643a9a:L643a9a:{c.instructions+=2;NFSU2_TR(0x643a9a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5cull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643a9d:{NFSU2_TR(0x643a9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643ad1;}}
}
B643a9f:L643a9f:{c.instructions+=2;NFSU2_TR(0x643a9f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B643aa3:{NFSU2_TR(0x643aa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643ad1;}}
}
B643aa5:L643aa5:{c.instructions+=3;NFSU2_TR(0x643aa5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B643aa7:{NFSU2_TR(0x643aa7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643aaa:{NFSU2_TR(0x643aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643ab4;}}
}
B643aac:L643aac:{c.instructions+=7;NFSU2_TR(0x643aac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643aad:{NFSU2_TR(0x643aad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B643aae:{NFSU2_TR(0x643aae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B643aaf:{NFSU2_TR(0x643aaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B643ab0:{NFSU2_TR(0x643ab0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B643ab1:{NFSU2_TR(0x643ab1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B643ab2:{NFSU2_TR(0x643ab2);
{goto L643acc;}
}
B643ab4:L643ab4:{c.instructions+=2;NFSU2_TR(0x643ab4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0xdull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643ab7:{NFSU2_TR(0x643ab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643ad1;}}
}
B643ab9:L643ab9:{c.instructions+=2;NFSU2_TR(0x643ab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B643abc:{NFSU2_TR(0x643abc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643ad1;}}
}
B643abe:L643abe:{c.instructions+=2;NFSU2_TR(0x643abe);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643ac1:{NFSU2_TR(0x643ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643ad1;}}
}
B643ac3:L643ac3:{c.instructions+=3;NFSU2_TR(0x643ac3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B643ac6:{NFSU2_TR(0x643ac6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B643ac9:{NFSU2_TR(0x643ac9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B643acc:L643acc:{c.instructions+=2;NFSU2_TR(0x643acc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B643acf:{NFSU2_TR(0x643acf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643a9au);}goto L643a9a;}}
}
B643ad1:L643ad1:{c.instructions+=2;NFSU2_TR(0x643ad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B643ad4:{NFSU2_TR(0x643ad4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L643aec;}}
}
B643ad6:L643ad6:{c.instructions+=5;NFSU2_TR(0x643ad6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B643ad9:{NFSU2_TR(0x643ad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ada:{NFSU2_TR(0x643ada);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643adb:{NFSU2_TR(0x643adb);
__builtin_memmove((R+4),(R+28),4);
}
B643add:{NFSU2_TR(0x643add);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643ae2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6436d3u);}goto L6436d3;}
}
B643ae2:L643ae2:{c.instructions+=5;NFSU2_TR(0x643ae2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B643ae4:{NFSU2_TR(0x643ae4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B643ae7:{NFSU2_TR(0x643ae7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B643ae9:{NFSU2_TR(0x643ae9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B643aea:{NFSU2_TR(0x643aea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643a8du);}goto L643a8d;}
}
B643aec:L643aec:{c.instructions+=4;NFSU2_TR(0x643aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643aef:{NFSU2_TR(0x643aef);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+12)),r1(U+0));
}
B643af2:{NFSU2_TR(0x643af2);
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
B643af3:{NFSU2_TR(0x643af3);
{goto L643af7;}
}
B643af5:L643af5:{c.instructions+=1;NFSU2_TR(0x643af5);
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
B643af7:L643af7:{c.instructions+=5;NFSU2_TR(0x643af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643af8:{NFSU2_TR(0x643af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643af9:{NFSU2_TR(0x643af9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643afa:{NFSU2_TR(0x643afa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B643afb:{NFSU2_TR(0x643afb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643afe:L643afe:{c.instructions+=16;NFSU2_TR(0x643afe);
__builtin_memmove((R+28),(R+28),4);
}
B643b00:{NFSU2_TR(0x643b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b01:{NFSU2_TR(0x643b01);
__builtin_memmove((R+20),(R+16),4);
}
B643b03:{NFSU2_TR(0x643b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643b06:{NFSU2_TR(0x643b06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b07:{NFSU2_TR(0x643b07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b08:{NFSU2_TR(0x643b08);
__builtin_memmove((R+24),(R+4),4);
}
B643b0a:{NFSU2_TR(0x643b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643b0d:{NFSU2_TR(0x643b0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643b10:{NFSU2_TR(0x643b10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b11:{NFSU2_TR(0x643b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643b14:{NFSU2_TR(0x643b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643b17:{NFSU2_TR(0x643b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643b1a:{NFSU2_TR(0x643b1a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B643b1c:{NFSU2_TR(0x643b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643b1f:{NFSU2_TR(0x643b1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643b24ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6433e5u);}goto L6433e5;}
}
B643b24:L643b24:{c.instructions+=2;NFSU2_TR(0x643b24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643b26:{NFSU2_TR(0x643b26);
if(r1(R+518)){{goto L643b33;}}
}
B643b28:L643b28:{c.instructions+=2;NFSU2_TR(0x643b28);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+28)),r4(U+0));
}
B643b2e:{NFSU2_TR(0x643b2e);
{goto L643cae;}
}
B643b33:L643b33:{c.instructions+=7;NFSU2_TR(0x643b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643b36:{NFSU2_TR(0x643b36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643b39:{NFSU2_TR(0x643b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643b3c:{NFSU2_TR(0x643b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643b3f:{NFSU2_TR(0x643b3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643b41:{NFSU2_TR(0x643b41);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B643b44:{NFSU2_TR(0x643b44);
if(r1(R+512)){{goto L643b51;}}
}
B643b46:L643b46:{c.instructions+=2;NFSU2_TR(0x643b46);
u8 U[4];
w4(U+0,u32(0xdull));
s4(u32(r4(R+28)),r4(U+0));
}
B643b4c:{NFSU2_TR(0x643b4c);
{goto L643cae;}
}
B643b51:L643b51:{c.instructions+=3;NFSU2_TR(0x643b51);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B643b53:{NFSU2_TR(0x643b53);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B643b56:{NFSU2_TR(0x643b56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L643b5d;}}
}
B643b58:L643b58:{c.instructions+=2;NFSU2_TR(0x643b58);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643b5b:{NFSU2_TR(0x643b5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L643b62;}}
}
B643b5d:L643b5d:{c.instructions+=2;NFSU2_TR(0x643b5d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643b60:{NFSU2_TR(0x643b60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643bde;}}
}
B643b62:L643b62:{c.instructions+=5;NFSU2_TR(0x643b62);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643b65:{NFSU2_TR(0x643b65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b66:{NFSU2_TR(0x643b66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b67:{NFSU2_TR(0x643b67);
__builtin_memmove((R+4),(R+24),4);
}
B643b69:{NFSU2_TR(0x643b69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643b6eull));
TAIL_STATIC(0x642c22u,642);
}
B643b6e:L643b6e:{c.instructions+=4;NFSU2_TR(0x643b6e);
__builtin_memmove((R+12),(R+0),4);
}
B643b70:{NFSU2_TR(0x643b70);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643b72:{NFSU2_TR(0x643b72);
__builtin_memmove((R+4),(R+24),4);
}
B643b74:{NFSU2_TR(0x643b74);
if(r1(R+518)){{goto L643b8e;}}
}
B643b76:L643b76:{c.instructions+=6;NFSU2_TR(0x643b76);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+28)),r4(U+0));
}
B643b7c:{NFSU2_TR(0x643b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643b7e:{NFSU2_TR(0x643b7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b7f:{NFSU2_TR(0x643b7f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B643b81:{NFSU2_TR(0x643b81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b82:{NFSU2_TR(0x643b82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643b87ull));
TAIL_STATIC(0x642f3fu,642);
}
B643b87:L643b87:{c.instructions+=2;NFSU2_TR(0x643b87);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B643b89:{NFSU2_TR(0x643b89);
{goto L643cae;}
}
B643b8e:L643b8e:{c.instructions+=4;NFSU2_TR(0x643b8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643b91:{NFSU2_TR(0x643b91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643b92:{NFSU2_TR(0x643b92);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643b94:{NFSU2_TR(0x643b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643b99ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64350eu);}goto L64350e;}
}
B643b99:L643b99:{c.instructions+=4;NFSU2_TR(0x643b99);
__builtin_memmove((R+12),(R+0),4);
}
B643b9b:{NFSU2_TR(0x643b9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643b9d:{NFSU2_TR(0x643b9d);
__builtin_memmove((R+4),(R+24),4);
}
B643b9f:{NFSU2_TR(0x643b9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643bcb;}}
}
B643ba1:L643ba1:{c.instructions+=4;NFSU2_TR(0x643ba1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643ba4:{NFSU2_TR(0x643ba4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ba5:{NFSU2_TR(0x643ba5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643ba7:{NFSU2_TR(0x643ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643bacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6435b2u);}goto L6435b2;}
}
B643bac:L643bac:{c.instructions+=4;NFSU2_TR(0x643bac);
__builtin_memmove((R+12),(R+0),4);
}
B643bae:{NFSU2_TR(0x643bae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643bb0:{NFSU2_TR(0x643bb0);
__builtin_memmove((R+4),(R+24),4);
}
B643bb2:{NFSU2_TR(0x643bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643bcb;}}
}
B643bb4:L643bb4:{c.instructions+=4;NFSU2_TR(0x643bb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643bb7:{NFSU2_TR(0x643bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643bb8:{NFSU2_TR(0x643bb8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643bba:{NFSU2_TR(0x643bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643bbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643630u);}goto L643630;}
}
B643bbf:L643bbf:{c.instructions+=3;NFSU2_TR(0x643bbf);
__builtin_memmove((R+12),(R+0),4);
}
B643bc1:{NFSU2_TR(0x643bc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643bc3:{NFSU2_TR(0x643bc3);
if(r1(R+518)){{goto L643c99;}}
}
B643bc9:L643bc9:{c.instructions+=1;NFSU2_TR(0x643bc9);
__builtin_memmove((R+4),(R+24),4);
}
B643bcb:L643bcb:{c.instructions+=6;NFSU2_TR(0x643bcb);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+28)),r4(U+0));
}
B643bd1:{NFSU2_TR(0x643bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643bd3:{NFSU2_TR(0x643bd3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B643bd5:{NFSU2_TR(0x643bd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643bd6:{NFSU2_TR(0x643bd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643bd7:{NFSU2_TR(0x643bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643bdcull));
TAIL_STATIC(0x642f89u,642);
}
B643bdc:L643bdc:{c.instructions+=1;NFSU2_TR(0x643bdc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643b87u);}goto L643b87;}
}
B643bde:L643bde:{c.instructions+=2;NFSU2_TR(0x643bde);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x27ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643be1:{NFSU2_TR(0x643be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643c04;}}
}
B643be3:L643be3:{c.instructions+=5;NFSU2_TR(0x643be3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643be6:{NFSU2_TR(0x643be6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643be7:{NFSU2_TR(0x643be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643be8:{NFSU2_TR(0x643be8);
__builtin_memmove((R+4),(R+24),4);
}
B643bea:{NFSU2_TR(0x643bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643befull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643971u);}goto L643971;}
}
B643bef:L643bef:{c.instructions+=3;NFSU2_TR(0x643bef);
__builtin_memmove((R+12),(R+0),4);
}
B643bf1:{NFSU2_TR(0x643bf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643bf3:{NFSU2_TR(0x643bf3);
if(r1(R+518)){{goto L643c99;}}
}
B643bf9:L643bf9:{c.instructions+=2;NFSU2_TR(0x643bf9);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+28)),r4(U+0));
}
B643bff:{NFSU2_TR(0x643bff);
{goto L643cae;}
}
B643c04:L643c04:{c.instructions+=2;NFSU2_TR(0x643c04);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x22ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B643c07:{NFSU2_TR(0x643c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643c26;}}
}
B643c09:L643c09:{c.instructions+=5;NFSU2_TR(0x643c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643c0c:{NFSU2_TR(0x643c0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c0d:{NFSU2_TR(0x643c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c0e:{NFSU2_TR(0x643c0e);
__builtin_memmove((R+4),(R+24),4);
}
B643c10:{NFSU2_TR(0x643c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643c15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6439b4u);}goto L6439b4;}
}
B643c15:L643c15:{c.instructions+=3;NFSU2_TR(0x643c15);
__builtin_memmove((R+12),(R+0),4);
}
B643c17:{NFSU2_TR(0x643c17);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643c19:{NFSU2_TR(0x643c19);
if(r1(R+518)){{goto L643c99;}}
}
B643c1b:L643c1b:{c.instructions+=2;NFSU2_TR(0x643c1b);
u8 U[4];
w4(U+0,u32(0xaull));
s4(u32(r4(R+28)),r4(U+0));
}
B643c21:{NFSU2_TR(0x643c21);
{goto L643cae;}
}
B643c26:L643c26:{c.instructions+=2;NFSU2_TR(0x643c26);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B643c2a:{NFSU2_TR(0x643c2a);
if(r1(R+518)){{goto L643c4b;}}
}
B643c2c:L643c2c:{c.instructions+=2;NFSU2_TR(0x643c2c);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x3cull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x3cull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x3cull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B643c2f:{NFSU2_TR(0x643c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643c4b;}}
}
B643c31:L643c31:{c.instructions+=5;NFSU2_TR(0x643c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643c34:{NFSU2_TR(0x643c34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c35:{NFSU2_TR(0x643c35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c36:{NFSU2_TR(0x643c36);
__builtin_memmove((R+4),(R+24),4);
}
B643c38:{NFSU2_TR(0x643c38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643c3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6439b4u);}goto L6439b4;}
}
B643c3d:L643c3d:{c.instructions+=3;NFSU2_TR(0x643c3d);
__builtin_memmove((R+12),(R+0),4);
}
B643c3f:{NFSU2_TR(0x643c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643c41:{NFSU2_TR(0x643c41);
if(r1(R+518)){{goto L643c99;}}
}
B643c43:L643c43:{c.instructions+=2;NFSU2_TR(0x643c43);
u8 U[4];
w4(U+0,u32(0xbull));
s4(u32(r4(R+28)),r4(U+0));
}
B643c49:{NFSU2_TR(0x643c49);
{goto L643cae;}
}
B643c4b:L643c4b:{c.instructions+=3;NFSU2_TR(0x643c4b);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B643c4e:{NFSU2_TR(0x643c4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c4f:{NFSU2_TR(0x643c4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643c54ull));
TAIL_STATIC(0x75defau,75d);
}
B643c54:L643c54:{c.instructions+=3;NFSU2_TR(0x643c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643c56:{NFSU2_TR(0x643c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643c57:{NFSU2_TR(0x643c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643c60;}}
}
B643c59:L643c59:{c.instructions+=3;NFSU2_TR(0x643c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643c5b:{NFSU2_TR(0x643c5b);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5full))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B643c5e:{NFSU2_TR(0x643c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643c99;}}
}
B643c60:L643c60:{c.instructions+=2;NFSU2_TR(0x643c60);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B643c64:{NFSU2_TR(0x643c64);
if(r1(R+518)){{goto L643c7e;}}
}
B643c66:L643c66:{c.instructions+=5;NFSU2_TR(0x643c66);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643c69:{NFSU2_TR(0x643c69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c6a:{NFSU2_TR(0x643c6a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643c6c:{NFSU2_TR(0x643c6c);
__builtin_memmove((R+4),(R+24),4);
}
B643c6e:{NFSU2_TR(0x643c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643c73ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64386cu);}goto L64386c;}
}
B643c73:L643c73:{c.instructions+=3;NFSU2_TR(0x643c73);
__builtin_memmove((R+12),(R+0),4);
}
B643c75:{NFSU2_TR(0x643c75);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643c77:{NFSU2_TR(0x643c77);
if(r1(R+518)){{goto L643c7e;}}
}
B643c79:L643c79:{c.instructions+=2;NFSU2_TR(0x643c79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B643c7c:{NFSU2_TR(0x643c7c);
{goto L643cae;}
}
B643c7e:L643c7e:{c.instructions+=5;NFSU2_TR(0x643c7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643c81:{NFSU2_TR(0x643c81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c82:{NFSU2_TR(0x643c82);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643c84:{NFSU2_TR(0x643c84);
__builtin_memmove((R+4),(R+24),4);
}
B643c86:{NFSU2_TR(0x643c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643c8bull));
TAIL_STATIC(0x642dadu,642);
}
B643c8b:L643c8b:{c.instructions+=3;NFSU2_TR(0x643c8b);
__builtin_memmove((R+12),(R+0),4);
}
B643c8d:{NFSU2_TR(0x643c8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643c8f:{NFSU2_TR(0x643c8f);
if(r1(R+518)){{goto L643c99;}}
}
B643c91:L643c91:{c.instructions+=2;NFSU2_TR(0x643c91);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+28)),r4(U+0));
}
B643c97:{NFSU2_TR(0x643c97);
{goto L643cae;}
}
B643c99:L643c99:{c.instructions+=5;NFSU2_TR(0x643c99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643c9c:{NFSU2_TR(0x643c9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643c9d:{NFSU2_TR(0x643c9d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B643c9f:{NFSU2_TR(0x643c9f);
__builtin_memmove((R+4),(R+24),4);
}
B643ca1:{NFSU2_TR(0x643ca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643ca6ull));
TAIL_STATIC(0x642e31u,642);
}
B643ca6:L643ca6:{c.instructions+=2;NFSU2_TR(0x643ca6);
__builtin_memmove((R+12),(R+0),4);
}
B643ca8:{NFSU2_TR(0x643ca8);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+28)),r4(U+0));
}
B643cae:L643cae:{c.instructions+=10;NFSU2_TR(0x643cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B643cb0:{NFSU2_TR(0x643cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643cb3:{NFSU2_TR(0x643cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643cb6:{NFSU2_TR(0x643cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+24)),r4(U+0));
}
B643cb8:{NFSU2_TR(0x643cb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643cb9:{NFSU2_TR(0x643cb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643cba:{NFSU2_TR(0x643cba);
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
B643cbc:{NFSU2_TR(0x643cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643cbd:{NFSU2_TR(0x643cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643cbe:{NFSU2_TR(0x643cbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643cc1:L643cc1:{c.instructions+=9;NFSU2_TR(0x643cc1);
__builtin_memmove((R+28),(R+28),4);
}
B643cc3:{NFSU2_TR(0x643cc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cc4:{NFSU2_TR(0x643cc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cc5:{NFSU2_TR(0x643cc5);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B643cc7:{NFSU2_TR(0x643cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cc8:{NFSU2_TR(0x643cc8);
__builtin_memmove((R+28),gp(0x7831b4),4);
}
B643cce:{NFSU2_TR(0x643cce);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643ccf:{NFSU2_TR(0x643ccf);
w4(R+24,u32(0x8a510cull));
}
B643cd4:{NFSU2_TR(0x643cd4);
{goto L643cdd;}
}
B643cd6:L643cd6:{c.instructions+=2;NFSU2_TR(0x643cd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cd7:{NFSU2_TR(0x643cd7);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643cddull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643cdd:L643cdd:{c.instructions+=4;NFSU2_TR(0x643cdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cdf:{NFSU2_TR(0x643cdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ce0:{NFSU2_TR(0x643ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ce1:{NFSU2_TR(0x643ce1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643ce3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643ce3:L643ce3:{c.instructions+=2;NFSU2_TR(0x643ce3);
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
B643ce5:{NFSU2_TR(0x643ce5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643cd6u);}goto L643cd6;}}
}
B643ce7:L643ce7:{c.instructions+=3;NFSU2_TR(0x643ce7);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a5108),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643cee:{NFSU2_TR(0x643cee);
w4(R+28,u32(0x8a50f0ull));
}
B643cf3:{NFSU2_TR(0x643cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643cfc;}}
}
B643cf5:L643cf5:{c.instructions+=2;NFSU2_TR(0x643cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643cf6:{NFSU2_TR(0x643cf6);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643cfcull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643cfc:L643cfc:{c.instructions+=4;NFSU2_TR(0x643cfc);
u8 U[6];
w1(R+512,carry<u32>(m4(0x8a5108),r4(R+12)));
w1(R+523,scarry<u32>(m4(0x8a5108),r4(R+12)));
s4(0x8a5108,u32(u32(m4(0x8a5108))+u32(r4(R+12))));
w1(R+519,u8(s32(m4(0x8a5108))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a5108))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a5108))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643d02:{NFSU2_TR(0x643d02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d04:{NFSU2_TR(0x643d04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d05:{NFSU2_TR(0x643d05);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d0bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d0b:L643d0b:{c.instructions+=2;NFSU2_TR(0x643d0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d0c:{NFSU2_TR(0x643d0c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d12ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d12:L643d12:{c.instructions+=4;NFSU2_TR(0x643d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643d13:{NFSU2_TR(0x643d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643d14:{NFSU2_TR(0x643d14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643d15:{NFSU2_TR(0x643d15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643d16:L643d16:{c.instructions+=6;NFSU2_TR(0x643d16);
__builtin_memmove((R+28),(R+28),4);
}
B643d18:{NFSU2_TR(0x643d18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d19:{NFSU2_TR(0x643d19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d1a:{NFSU2_TR(0x643d1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d1b:{NFSU2_TR(0x643d1b);
u8 U[4];
w4(U+0,u32(0x8a50f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d20:{NFSU2_TR(0x643d20);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d26ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d26:L643d26:{c.instructions+=5;NFSU2_TR(0x643d26);
__builtin_memmove((R+28),gp(0x7831b4),4);
}
B643d2c:{NFSU2_TR(0x643d2c);
w1(R+512,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B643d2e:{NFSU2_TR(0x643d2e);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643d2f:{NFSU2_TR(0x643d2f);
w4(R+24,u32(0x8a510cull));
}
B643d34:{NFSU2_TR(0x643d34);
{goto L643d3d;}
}
B643d36:L643d36:{c.instructions+=2;NFSU2_TR(0x643d36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d37:{NFSU2_TR(0x643d37);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d3dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d3d:L643d3d:{c.instructions+=4;NFSU2_TR(0x643d3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d3f:{NFSU2_TR(0x643d3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d40:{NFSU2_TR(0x643d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d41:{NFSU2_TR(0x643d41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d43ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d43:L643d43:{c.instructions+=2;NFSU2_TR(0x643d43);
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
B643d45:{NFSU2_TR(0x643d45);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643d36u);}goto L643d36;}}
}
B643d47:L643d47:{c.instructions+=2;NFSU2_TR(0x643d47);
u8 U[6];
w1(R+512,u8((m4(0x8a5108))<(r4(R+12))));
w1(R+523,sborrow<u32>(m4(0x8a5108),r4(R+12)));
s4(0x8a5108,u32(u32(m4(0x8a5108))-u32(r4(R+12))));
w1(R+519,u8(s32(m4(0x8a5108))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a5108))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a5108))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B643d4d:{NFSU2_TR(0x643d4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643d5a;}}
}
B643d4f:L643d4f:{c.instructions+=2;NFSU2_TR(0x643d4f);
u8 U[4];
w4(U+0,u32(0x8a50f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d54:{NFSU2_TR(0x643d54);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d5aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d5a:L643d5a:{c.instructions+=3;NFSU2_TR(0x643d5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d5c:{NFSU2_TR(0x643d5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d5d:{NFSU2_TR(0x643d5d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643d63ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643d63:L643d63:{c.instructions+=4;NFSU2_TR(0x643d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643d64:{NFSU2_TR(0x643d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643d65:{NFSU2_TR(0x643d65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B643d66:{NFSU2_TR(0x643d66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643d67:L643d67:{c.instructions+=14;NFSU2_TR(0x643d67);
__builtin_memmove((R+28),(R+28),4);
}
B643d69:{NFSU2_TR(0x643d69);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d6a:{NFSU2_TR(0x643d6a);
__builtin_memmove((R+20),(R+16),4);
}
B643d6c:{NFSU2_TR(0x643d6c);
__builtin_memmove((R+0),(R+4),4);
}
B643d6e:{NFSU2_TR(0x643d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643d71:{NFSU2_TR(0x643d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B643d75:{NFSU2_TR(0x643d75);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B643d79:{NFSU2_TR(0x643d79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643d7b:{NFSU2_TR(0x643d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643d7e:{NFSU2_TR(0x643d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643d81:{NFSU2_TR(0x643d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643d84:{NFSU2_TR(0x643d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643d87:{NFSU2_TR(0x643d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643d88:{NFSU2_TR(0x643d88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643d8b:L643d8b:{c.instructions+=12;NFSU2_TR(0x643d8b);
__builtin_memmove((R+28),(R+28),4);
}
B643d8d:{NFSU2_TR(0x643d8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643d8e:{NFSU2_TR(0x643d8e);
__builtin_memmove((R+20),(R+16),4);
}
B643d90:{NFSU2_TR(0x643d90);
__builtin_memmove((R+0),(R+4),4);
}
B643d92:{NFSU2_TR(0x643d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643d95:{NFSU2_TR(0x643d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B643d99:{NFSU2_TR(0x643d99);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B643d9d:{NFSU2_TR(0x643d9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B643d9f:{NFSU2_TR(0x643d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643da2:{NFSU2_TR(0x643da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643da5:{NFSU2_TR(0x643da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643da6:{NFSU2_TR(0x643da6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643da9:L643da9:{c.instructions+=5;NFSU2_TR(0x643da9);
__builtin_memmove((R+28),(R+28),4);
}
B643dab:{NFSU2_TR(0x643dab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643dac:{NFSU2_TR(0x643dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643daf:{NFSU2_TR(0x643daf);
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
B643db1:{NFSU2_TR(0x643db1);
if(r1(R+518)){{goto L643dc1;}}
}
B643db3:L643db3:{c.instructions+=2;NFSU2_TR(0x643db3);
__builtin_memmove((R+4),(R+24),4);
}
B643db5:{NFSU2_TR(0x643db5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643dbaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643da9u);}goto L643da9;}
}
B643dba:L643dba:{c.instructions+=2;NFSU2_TR(0x643dba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643dbb:{NFSU2_TR(0x643dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643dc0ull));
TAIL_STATIC(0x575630u,575);
}
B643dc0:L643dc0:{c.instructions+=1;NFSU2_TR(0x643dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643dc1:L643dc1:{c.instructions+=2;NFSU2_TR(0x643dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643dc2:{NFSU2_TR(0x643dc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643dc3:L643dc3:{c.instructions+=6;NFSU2_TR(0x643dc3);
__builtin_memmove((R+28),(R+28),4);
}
B643dc5:{NFSU2_TR(0x643dc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643dc6:{NFSU2_TR(0x643dc6);
__builtin_memmove((R+20),(R+16),4);
}
B643dc8:{NFSU2_TR(0x643dc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643dc9:{NFSU2_TR(0x643dc9);
__builtin_memmove((R+24),(R+4),4);
}
B643dcb:{NFSU2_TR(0x643dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643dd0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643da9u);}goto L643da9;}
}
B643dd0:L643dd0:{c.instructions+=2;NFSU2_TR(0x643dd0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B643dd4:{NFSU2_TR(0x643dd4);
if(r1(R+518)){{goto L643ddd;}}
}
B643dd6:L643dd6:{c.instructions+=2;NFSU2_TR(0x643dd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643dd7:{NFSU2_TR(0x643dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643ddcull));
TAIL_STATIC(0x575630u,575);
}
B643ddc:L643ddc:{c.instructions+=1;NFSU2_TR(0x643ddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643ddd:L643ddd:{c.instructions+=4;NFSU2_TR(0x643ddd);
__builtin_memmove((R+0),(R+24),4);
}
B643ddf:{NFSU2_TR(0x643ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643de0:{NFSU2_TR(0x643de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643de1:{NFSU2_TR(0x643de1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643de4:L643de4:{c.instructions+=4;NFSU2_TR(0x643de4);
__builtin_memmove((R+28),(R+28),4);
}
B643de6:{NFSU2_TR(0x643de6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643de7:{NFSU2_TR(0x643de7);
__builtin_memmove((R+24),(R+4),4);
}
B643de9:{NFSU2_TR(0x643de9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643deeull));
TAIL_STATIC(0x642b43u,642);
}
B643dee:L643dee:{c.instructions+=2;NFSU2_TR(0x643dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B643df1:{NFSU2_TR(0x643df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643df6ull));
TAIL_STATIC(0x65a8bfu,65a);
}
B643df6:L643df6:{c.instructions+=2;NFSU2_TR(0x643df6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B643df9:{NFSU2_TR(0x643df9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643dfeull));
TAIL_STATIC(0x670f13u,670);
}
B643dfe:L643dfe:{c.instructions+=11;NFSU2_TR(0x643dfe);
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
B643e00:{NFSU2_TR(0x643e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e03:{NFSU2_TR(0x643e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e06:{NFSU2_TR(0x643e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e09:{NFSU2_TR(0x643e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e0c:{NFSU2_TR(0x643e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e0f:{NFSU2_TR(0x643e0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e12:{NFSU2_TR(0x643e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643e15:{NFSU2_TR(0x643e15);
__builtin_memmove((R+0),(R+24),4);
}
B643e17:{NFSU2_TR(0x643e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643e18:{NFSU2_TR(0x643e18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643e19:L643e19:{c.instructions+=6;NFSU2_TR(0x643e19);
__builtin_memmove((R+28),(R+28),4);
}
B643e1b:{NFSU2_TR(0x643e1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e1c:{NFSU2_TR(0x643e1c);
__builtin_memmove((R+24),(R+4),4);
}
B643e1e:{NFSU2_TR(0x643e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643e21:{NFSU2_TR(0x643e21);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643e23:{NFSU2_TR(0x643e23);
if(r1(R+518)){{goto L643e2c;}}
}
B643e25:L643e25:{c.instructions+=2;NFSU2_TR(0x643e25);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e27:{NFSU2_TR(0x643e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e2cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643dc3u);}goto L643dc3;}
}
B643e2c:L643e2c:{c.instructions+=4;NFSU2_TR(0x643e2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e2d:{NFSU2_TR(0x643e2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643e30:{NFSU2_TR(0x643e30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643e32:{NFSU2_TR(0x643e32);
if(r1(R+518)){{goto L643e42;}}
}
B643e34:L643e34:{c.instructions+=2;NFSU2_TR(0x643e34);
__builtin_memmove((R+4),(R+28),4);
}
B643e36:{NFSU2_TR(0x643e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e3bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643e19u);}goto L643e19;}
}
B643e3b:L643e3b:{c.instructions+=2;NFSU2_TR(0x643e3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e3c:{NFSU2_TR(0x643e3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e41ull));
TAIL_STATIC(0x575630u,575);
}
B643e41:L643e41:{c.instructions+=1;NFSU2_TR(0x643e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643e42:L643e42:{c.instructions+=3;NFSU2_TR(0x643e42);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B643e46:{NFSU2_TR(0x643e46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643e47:{NFSU2_TR(0x643e47);
if(r1(R+518)){{goto L643e5a;}}
}
B643e49:L643e49:{c.instructions+=3;NFSU2_TR(0x643e49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643e4c:{NFSU2_TR(0x643e4c);
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
B643e4e:{NFSU2_TR(0x643e4e);
if(r1(R+518)){{goto L643e5a;}}
}
B643e50:L643e50:{c.instructions+=5;NFSU2_TR(0x643e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643e53:{NFSU2_TR(0x643e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B643e55:{NFSU2_TR(0x643e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e56:{NFSU2_TR(0x643e56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e57:{NFSU2_TR(0x643e57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B643e5a:L643e5a:{c.instructions+=2;NFSU2_TR(0x643e5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B643e5d:{NFSU2_TR(0x643e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e62ull));
TAIL_STATIC(0x670f20u,670);
}
B643e62:L643e62:{c.instructions+=2;NFSU2_TR(0x643e62);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B643e65:{NFSU2_TR(0x643e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e6aull));
TAIL_STATIC(0x65aa52u,65a);
}
B643e6a:L643e6a:{c.instructions+=3;NFSU2_TR(0x643e6a);
__builtin_memmove((R+4),(R+24),4);
}
B643e6c:{NFSU2_TR(0x643e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643e6d:{NFSU2_TR(0x643e6d);
TAIL_STATIC(0x6996f4u,699);
}
B643e72:L643e72:{c.instructions+=6;NFSU2_TR(0x643e72);
__builtin_memmove((R+28),(R+28),4);
}
B643e74:{NFSU2_TR(0x643e74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e75:{NFSU2_TR(0x643e75);
__builtin_memmove((R+20),(R+16),4);
}
B643e77:{NFSU2_TR(0x643e77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e78:{NFSU2_TR(0x643e78);
__builtin_memmove((R+24),(R+4),4);
}
B643e7a:{NFSU2_TR(0x643e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e7full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643e19u);}goto L643e19;}
}
B643e7f:L643e7f:{c.instructions+=2;NFSU2_TR(0x643e7f);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B643e83:{NFSU2_TR(0x643e83);
if(r1(R+518)){{goto L643e8c;}}
}
B643e85:L643e85:{c.instructions+=2;NFSU2_TR(0x643e85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e86:{NFSU2_TR(0x643e86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643e8bull));
TAIL_STATIC(0x575630u,575);
}
B643e8b:L643e8b:{c.instructions+=1;NFSU2_TR(0x643e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B643e8c:L643e8c:{c.instructions+=4;NFSU2_TR(0x643e8c);
__builtin_memmove((R+0),(R+24),4);
}
B643e8e:{NFSU2_TR(0x643e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643e8f:{NFSU2_TR(0x643e8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B643e90:{NFSU2_TR(0x643e90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B643e93:L643e93:{c.instructions+=13;NFSU2_TR(0x643e93);
__builtin_memmove((R+28),(R+28),4);
}
B643e95:{NFSU2_TR(0x643e95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e96:{NFSU2_TR(0x643e96);
__builtin_memmove((R+20),(R+16),4);
}
B643e98:{NFSU2_TR(0x643e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B643e9e:{NFSU2_TR(0x643e9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643e9f:{NFSU2_TR(0x643e9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ea0:{NFSU2_TR(0x643ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643ea3:{NFSU2_TR(0x643ea3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ea4:{NFSU2_TR(0x643ea4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B643ea6:{NFSU2_TR(0x643ea6);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B643ea9:{NFSU2_TR(0x643ea9);
__builtin_memmove((R+12),(R+4),4);
}
B643eab:{NFSU2_TR(0x643eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643eae:{NFSU2_TR(0x643eae);
if(r1(R+518)){{goto L643ed8;}}
}
B643eb0:L643eb0:{c.instructions+=10;NFSU2_TR(0x643eb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643eb1:{NFSU2_TR(0x643eb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643eb2:{NFSU2_TR(0x643eb2);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643eb7:{NFSU2_TR(0x643eb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B643ebd:{NFSU2_TR(0x643ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ebe:{NFSU2_TR(0x643ebe);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ec0:{NFSU2_TR(0x643ec0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643ec3:{NFSU2_TR(0x643ec3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ec4:{NFSU2_TR(0x643ec4);
u8 U[4];
w4(U+0,u32(0xfde9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ec9:{NFSU2_TR(0x643ec9);
u8 U[4];
__builtin_memmove((U+0),gp(0x78319c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643ecfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643ecf:L643ecf:{c.instructions+=2;NFSU2_TR(0x643ecf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffefcull))));
__builtin_memmove((R+0),(U+0),4);
}
B643ed5:{NFSU2_TR(0x643ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643ed8:L643ed8:{c.instructions+=2;NFSU2_TR(0x643ed8);
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
B643eda:{NFSU2_TR(0x643eda);
if(r1(R+518)){{goto L643f64;}}
}
B643ee0:L643ee0:{c.instructions+=2;NFSU2_TR(0x643ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643ee3:{NFSU2_TR(0x643ee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643ee6:L643ee6:{c.instructions+=4;NFSU2_TR(0x643ee6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B643ee8:{NFSU2_TR(0x643ee8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B643ee9:{NFSU2_TR(0x643ee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B643eeb:{NFSU2_TR(0x643eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643ee6u);}goto L643ee6;}}
}
B643eed:L643eed:{c.instructions+=6;NFSU2_TR(0x643eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643ef0:{NFSU2_TR(0x643ef0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B643ef2:{NFSU2_TR(0x643ef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643ef5:{NFSU2_TR(0x643ef5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ef7:{NFSU2_TR(0x643ef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ef8:{NFSU2_TR(0x643ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643efdull));
TAIL_STATIC(0x671ccbu,671);
}
B643efd:L643efd:{c.instructions+=3;NFSU2_TR(0x643efd);
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
B643eff:{NFSU2_TR(0x643eff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643f02:{NFSU2_TR(0x643f02);
if(r1(R+518)){{goto L643fa0;}}
}
B643f08:L643f08:{c.instructions+=5;NFSU2_TR(0x643f08);
__builtin_memmove((R+4),(R+24),4);
}
B643f0a:{NFSU2_TR(0x643f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643f0d:{NFSU2_TR(0x643f0d);
__builtin_memmove((R+28),(R+0),4);
}
B643f0f:{NFSU2_TR(0x643f0f);
__builtin_memmove((R+0),(R+4),4);
}
B643f11:{NFSU2_TR(0x643f11);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B643f14:L643f14:{c.instructions+=1;NFSU2_TR(0x643f14);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L643f16;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643f14u);}goto L643f14;}
}
B643f16:L643f16:{c.instructions+=2;NFSU2_TR(0x643f16);
__builtin_memmove((R+4),(R+0),4);
}
B643f18:{NFSU2_TR(0x643f18);
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
B643f1b:L643f1b:{c.instructions+=1;NFSU2_TR(0x643f1b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L643f1d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643f1bu);}goto L643f1b;}
}
B643f1d:L643f1d:{c.instructions+=11;NFSU2_TR(0x643f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643f20:{NFSU2_TR(0x643f20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B643f22:{NFSU2_TR(0x643f22);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B643f25:{NFSU2_TR(0x643f25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f26:{NFSU2_TR(0x643f26);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+24),(U+0),4);
}
B643f29:{NFSU2_TR(0x643f29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f2a:{NFSU2_TR(0x643f2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f2d:{NFSU2_TR(0x643f2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f30:{NFSU2_TR(0x643f30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f33:{NFSU2_TR(0x643f33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f34:{NFSU2_TR(0x643f34);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643f36ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B643f36:L643f36:{c.instructions+=3;NFSU2_TR(0x643f36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B643f38:{NFSU2_TR(0x643f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643f3b:{NFSU2_TR(0x643f3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x644021u,644);}
}
B643f41:L643f41:{c.instructions+=6;NFSU2_TR(0x643f41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f44:{NFSU2_TR(0x643f44);
u8 U[4];
w4(U+0,u32(0x7ab6ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f49:{NFSU2_TR(0x643f49);
u8 U[4];
w4(U+0,u32(0x5e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f4e:{NFSU2_TR(0x643f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f51:{NFSU2_TR(0x643f51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f54:{NFSU2_TR(0x643f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643f59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64307cu);}goto L64307c;}
}
B643f59:L643f59:{c.instructions+=3;NFSU2_TR(0x643f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643f5c:{NFSU2_TR(0x643f5c);
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
B643f5f:{NFSU2_TR(0x643f5f);
TAIL_STATIC(0x64403du,644);
}
B643f64:L643f64:{c.instructions+=6;NFSU2_TR(0x643f64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f65:{NFSU2_TR(0x643f65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f66:{NFSU2_TR(0x643f66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f67:{NFSU2_TR(0x643f67);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f6a:{NFSU2_TR(0x643f6a);
__builtin_memmove((R+28),gp(0x7831c0),4);
}
B643f70:{NFSU2_TR(0x643f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643f72ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643f72:L643f72:{c.instructions+=7;NFSU2_TR(0x643f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643f75:{NFSU2_TR(0x643f75);
__builtin_memmove((R+24),(R+0),4);
}
B643f77:{NFSU2_TR(0x643f77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B643f7a:{NFSU2_TR(0x643f7a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f7c:{NFSU2_TR(0x643f7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f7d:{NFSU2_TR(0x643f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643f80:{NFSU2_TR(0x643f80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643f85ull));
TAIL_STATIC(0x671ccbu,671);
}
B643f85:L643f85:{c.instructions+=3;NFSU2_TR(0x643f85);
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
B643f87:{NFSU2_TR(0x643f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643f8a:{NFSU2_TR(0x643f8a);
if(r1(R+518)){{goto L643fa0;}}
}
B643f8c:L643f8c:{c.instructions+=4;NFSU2_TR(0x643f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643f8f:{NFSU2_TR(0x643f8f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643f91:{NFSU2_TR(0x643f91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643f94:{NFSU2_TR(0x643f94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643f99ull));
TAIL_STATIC(0x671ccbu,671);
}
B643f99:L643f99:{c.instructions+=3;NFSU2_TR(0x643f99);
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
B643f9b:{NFSU2_TR(0x643f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B643f9e:{NFSU2_TR(0x643f9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L643faa;}}
}
B643fa0:L643fa0:{c.instructions+=2;NFSU2_TR(0x643fa0);
w4(R+0,u32(0x8007000eull));
}
B643fa5:{NFSU2_TR(0x643fa5);
TAIL_STATIC(0x64403du,644);
}
B643faa:L643faa:{c.instructions+=6;NFSU2_TR(0x643faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B643fad:{NFSU2_TR(0x643fad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643fae:{NFSU2_TR(0x643fae);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643fb1:{NFSU2_TR(0x643fb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643fb2:{NFSU2_TR(0x643fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643fb5:{NFSU2_TR(0x643fb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643fb7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B643fb7:L643fb7:{c.instructions+=7;NFSU2_TR(0x643fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643fba:{NFSU2_TR(0x643fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B643fbd:{NFSU2_TR(0x643fbd);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B643fc1:{NFSU2_TR(0x643fc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B643fc4:{NFSU2_TR(0x643fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B643fc7:{NFSU2_TR(0x643fc7);
__builtin_memmove((R+0),(R+4),4);
}
B643fc9:{NFSU2_TR(0x643fc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B643fcc:L643fcc:{c.instructions+=1;NFSU2_TR(0x643fcc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L643fce;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643fccu);}goto L643fcc;}
}
B643fce:L643fce:{c.instructions+=2;NFSU2_TR(0x643fce);
__builtin_memmove((R+4),(R+0),4);
}
B643fd0:{NFSU2_TR(0x643fd0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B643fd3:L643fd3:{c.instructions+=1;NFSU2_TR(0x643fd3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L643fd5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x643fd3u);}goto L643fd3;}
}
B643fd5:L643fd5:{c.instructions+=3;NFSU2_TR(0x643fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B643fd8:{NFSU2_TR(0x643fd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B643fda:{NFSU2_TR(0x643fda);
if(r1(R+518)){{goto L643fdf;}}
}
B643fdc:L643fdc:{c.instructions+=1;NFSU2_TR(0x643fdc);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B643fdf:L643fdf:{c.instructions+=4;NFSU2_TR(0x643fdf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643fe1:{NFSU2_TR(0x643fe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643fe4:{NFSU2_TR(0x643fe4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B643fe7:{NFSU2_TR(0x643fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x643fecull));
TAIL_STATIC(0x65a8d1u,65a);
}
B643fec:L643fec:{c.instructions+=3;NFSU2_TR(0x643fec);
__builtin_memmove((R+24),(R+0),4);
}
B643fee:{NFSU2_TR(0x643fee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B643ff0:{NFSU2_TR(0x643ff0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x644011u,644);}
}
B643ff2:L643ff2:{c.instructions+=4;NFSU2_TR(0x643ff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B643ff5:{NFSU2_TR(0x643ff5);
u8 U[4];
w4(U+0,u32(0x7ab6ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643ffa:{NFSU2_TR(0x643ffa);
u8 U[4];
w4(U+0,u32(0x5e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B643fff:{NFSU2_TR(0x643fff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
TAIL_STATIC(0x644002u,644);
}
XIT:NFSU2_TR_EXIT(0x643,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
