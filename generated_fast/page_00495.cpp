#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_554(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x495,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x495,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_495(u8* __restrict R,Cpu& c);
u32 page_495(Cpu& c){return body_495(c.regs.data(),c);}
__attribute__((noinline)) u32 body_495(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x495000:goto L495000;
case 0x495001:c.instructions+=5;goto B495001;
case 0x495006:c.instructions+=4;goto B495006;
case 0x495007:c.instructions+=3;goto B495007;
case 0x49500a:c.instructions+=2;goto B49500a;
case 0x49500b:c.instructions+=1;goto B49500b;
case 0x49500c:goto L49500c;
case 0x49500e:c.instructions+=3;goto B49500e;
case 0x495010:c.instructions+=2;goto B495010;
case 0x495013:c.instructions+=1;goto B495013;
case 0x495018:goto L495018;
case 0x495019:c.instructions+=6;goto B495019;
case 0x49501a:c.instructions+=5;goto B49501a;
case 0x49501f:c.instructions+=4;goto B49501f;
case 0x495020:c.instructions+=3;goto B495020;
case 0x495023:c.instructions+=2;goto B495023;
case 0x495024:c.instructions+=1;goto B495024;
case 0x495025:goto L495025;
case 0x495026:c.instructions+=6;goto B495026;
case 0x49502b:c.instructions+=5;goto B49502b;
case 0x49502c:c.instructions+=4;goto B49502c;
case 0x495033:c.instructions+=3;goto B495033;
case 0x495036:c.instructions+=2;goto B495036;
case 0x495037:c.instructions+=1;goto B495037;
case 0x495038:goto L495038;
case 0x495039:c.instructions+=4;goto B495039;
case 0x49503a:c.instructions+=3;goto B49503a;
case 0x49503c:c.instructions+=2;goto B49503c;
case 0x49503d:c.instructions+=1;goto B49503d;
case 0x495040:goto L495040;
case 0x495044:c.instructions+=4;goto B495044;
case 0x495046:c.instructions+=3;goto B495046;
case 0x49504c:c.instructions+=2;goto B49504c;
case 0x49504d:c.instructions+=1;goto B49504d;
case 0x49504f:goto L49504f;
case 0x495052:c.instructions+=5;goto B495052;
case 0x495053:c.instructions+=4;goto B495053;
case 0x495056:c.instructions+=3;goto B495056;
case 0x49505a:c.instructions+=2;goto B49505a;
case 0x49505c:c.instructions+=1;goto B49505c;
case 0x49505e:goto L49505e;
case 0x495060:goto L495060;
case 0x495066:c.instructions+=1;goto B495066;
case 0x495068:goto L495068;
case 0x495069:c.instructions+=1;goto B495069;
case 0x49506e:goto L49506e;
case 0x495071:c.instructions+=1;goto B495071;
case 0x49507b:goto L49507b;
case 0x49507e:c.instructions+=3;goto B49507e;
case 0x495082:c.instructions+=2;goto B495082;
case 0x495084:c.instructions+=1;goto B495084;
case 0x495086:goto L495086;
case 0x495087:c.instructions+=3;goto B495087;
case 0x49508c:c.instructions+=2;goto B49508c;
case 0x49508d:c.instructions+=1;goto B49508d;
case 0x49508e:goto L49508e;
case 0x495094:c.instructions+=1;goto B495094;
case 0x495096:goto L495096;
case 0x49509c:c.instructions+=1;goto B49509c;
case 0x49509e:goto L49509e;
case 0x4950a2:c.instructions+=1;goto B4950a2;
case 0x4950a4:goto L4950a4;
case 0x4950a7:c.instructions+=2;goto B4950a7;
case 0x4950a9:c.instructions+=1;goto B4950a9;
case 0x4950ab:goto L4950ab;
case 0x4950ad:c.instructions+=1;goto B4950ad;
case 0x4950b2:goto L4950b2;
case 0x4950b7:c.instructions+=3;goto B4950b7;
case 0x4950b8:c.instructions+=2;goto B4950b8;
case 0x4950b9:c.instructions+=1;goto B4950b9;
case 0x4950be:goto L4950be;
case 0x4950c1:goto L4950c1;
case 0x4950c6:c.instructions+=2;goto B4950c6;
case 0x4950c7:c.instructions+=1;goto B4950c7;
case 0x4950c8:goto L4950c8;
case 0x4950ca:c.instructions+=2;goto B4950ca;
case 0x4950cb:c.instructions+=1;goto B4950cb;
case 0x4950d0:goto L4950d0;
case 0x4950d4:c.instructions+=3;goto B4950d4;
case 0x4950da:c.instructions+=2;goto B4950da;
case 0x4950de:c.instructions+=1;goto B4950de;
case 0x4950f0:goto L4950f0;
case 0x4950f1:c.instructions+=5;goto B4950f1;
case 0x4950f2:c.instructions+=4;goto B4950f2;
case 0x4950f4:c.instructions+=3;goto B4950f4;
case 0x4950f6:c.instructions+=2;goto B4950f6;
case 0x4950f8:c.instructions+=1;goto B4950f8;
case 0x4950fa:goto L4950fa;
case 0x495100:goto L495100;
case 0x495103:c.instructions+=5;goto B495103;
case 0x495105:c.instructions+=4;goto B495105;
case 0x495107:c.instructions+=3;goto B495107;
case 0x49510a:c.instructions+=2;goto B49510a;
case 0x49510c:c.instructions+=1;goto B49510c;
case 0x495111:goto L495111;
case 0x495112:c.instructions+=1;goto B495112;
case 0x495117:goto L495117;
case 0x495119:c.instructions+=3;goto B495119;
case 0x49511c:c.instructions+=2;goto B49511c;
case 0x49511e:c.instructions+=1;goto B49511e;
case 0x495120:goto L495120;
case 0x495121:c.instructions+=2;goto B495121;
case 0x495122:c.instructions+=1;goto B495122;
case 0x495130:goto L495130;
case 0x495131:c.instructions+=4;goto B495131;
case 0x495133:c.instructions+=3;goto B495133;
case 0x495135:c.instructions+=2;goto B495135;
case 0x495137:c.instructions+=1;goto B495137;
case 0x495139:goto L495139;
case 0x49513a:c.instructions+=1;goto B49513a;
case 0x495140:goto L495140;
case 0x495142:c.instructions+=6;goto B495142;
case 0x495145:c.instructions+=5;goto B495145;
case 0x495148:c.instructions+=4;goto B495148;
case 0x49514a:c.instructions+=3;goto B49514a;
case 0x49514c:c.instructions+=2;goto B49514c;
case 0x49514f:c.instructions+=1;goto B49514f;
case 0x495151:goto L495151;
case 0x495153:c.instructions+=1;goto B495153;
case 0x495158:goto L495158;
case 0x495159:c.instructions+=1;goto B495159;
case 0x49515e:goto L49515e;
case 0x495161:goto L495161;
case 0x495163:c.instructions+=2;goto B495163;
case 0x495165:c.instructions+=1;goto B495165;
case 0x495167:goto L495167;
case 0x495168:goto L495168;
case 0x495169:c.instructions+=1;goto B495169;
case 0x495170:goto L495170;
case 0x495171:c.instructions+=5;goto B495171;
case 0x495172:c.instructions+=4;goto B495172;
case 0x495174:c.instructions+=3;goto B495174;
case 0x495176:c.instructions+=2;goto B495176;
case 0x495178:c.instructions+=1;goto B495178;
case 0x49517a:goto L49517a;
case 0x495180:goto L495180;
case 0x495183:c.instructions+=5;goto B495183;
case 0x495185:c.instructions+=4;goto B495185;
case 0x495187:c.instructions+=3;goto B495187;
case 0x49518a:c.instructions+=2;goto B49518a;
case 0x49518c:c.instructions+=1;goto B49518c;
case 0x495191:goto L495191;
case 0x495192:c.instructions+=1;goto B495192;
case 0x495197:goto L495197;
case 0x495199:c.instructions+=3;goto B495199;
case 0x49519c:c.instructions+=2;goto B49519c;
case 0x49519e:c.instructions+=1;goto B49519e;
case 0x4951a0:goto L4951a0;
case 0x4951a1:c.instructions+=2;goto B4951a1;
case 0x4951a2:c.instructions+=1;goto B4951a2;
case 0x4951b0:goto L4951b0;
case 0x4951b4:c.instructions+=4;goto B4951b4;
case 0x4951b7:c.instructions+=3;goto B4951b7;
case 0x4951b8:c.instructions+=2;goto B4951b8;
case 0x4951b9:c.instructions+=1;goto B4951b9;
case 0x4951be:goto L4951be;
case 0x4951d0:goto L4951d0;
case 0x4951d2:c.instructions+=7;goto B4951d2;
case 0x4951d4:c.instructions+=6;goto B4951d4;
case 0x4951d6:c.instructions+=5;goto B4951d6;
case 0x4951d9:c.instructions+=4;goto B4951d9;
case 0x4951dc:c.instructions+=3;goto B4951dc;
case 0x4951df:c.instructions+=2;goto B4951df;
case 0x4951e2:c.instructions+=1;goto B4951e2;
case 0x4951f0:goto L4951f0;
case 0x4951f2:c.instructions+=2;goto B4951f2;
case 0x4951f7:c.instructions+=1;goto B4951f7;
case 0x4951fc:goto L4951fc;
case 0x495200:goto L495200;
case 0x495204:c.instructions+=5;goto B495204;
case 0x495206:c.instructions+=4;goto B495206;
case 0x495207:c.instructions+=3;goto B495207;
case 0x49520a:c.instructions+=2;goto B49520a;
case 0x49520b:c.instructions+=1;goto B49520b;
case 0x495210:goto L495210;
case 0x495213:c.instructions+=1;goto B495213;
case 0x495220:goto L495220;
case 0x495224:c.instructions+=5;goto B495224;
case 0x495226:c.instructions+=4;goto B495226;
case 0x495227:c.instructions+=3;goto B495227;
case 0x49522a:c.instructions+=2;goto B49522a;
case 0x49522b:c.instructions+=1;goto B49522b;
case 0x495230:goto L495230;
case 0x495233:c.instructions+=1;goto B495233;
case 0x495240:goto L495240;
case 0x495244:c.instructions+=2;goto B495244;
case 0x495246:c.instructions+=1;goto B495246;
case 0x495248:goto L495248;
case 0x49524b:c.instructions+=1;goto B49524b;
case 0x49524d:goto L49524d;
case 0x495253:c.instructions+=2;goto B495253;
case 0x49525a:c.instructions+=1;goto B49525a;
case 0x49525d:goto L49525d;
case 0x49525f:c.instructions+=1;goto B49525f;
case 0x495270:goto L495270;
case 0x495276:c.instructions+=2;goto B495276;
case 0x495278:c.instructions+=1;goto B495278;
case 0x49527a:goto L49527a;
case 0x495280:c.instructions+=1;goto B495280;
case 0x495281:goto L495281;
case 0x495283:c.instructions+=1;goto B495283;
case 0x495290:goto L495290;
case 0x495296:c.instructions+=2;goto B495296;
case 0x495298:c.instructions+=1;goto B495298;
case 0x49529a:goto L49529a;
case 0x4952a0:c.instructions+=1;goto B4952a0;
case 0x4952a1:goto L4952a1;
case 0x4952a3:c.instructions+=1;goto B4952a3;
case 0x4952b0:goto L4952b0;
case 0x4952b5:goto L4952b5;
case 0x4952b8:c.instructions+=4;goto B4952b8;
case 0x4952ba:c.instructions+=3;goto B4952ba;
case 0x4952bc:c.instructions+=2;goto B4952bc;
case 0x4952bd:c.instructions+=1;goto B4952bd;
case 0x4952c0:goto L4952c0;
case 0x4952c4:c.instructions+=18;goto B4952c4;
case 0x4952c8:c.instructions+=17;goto B4952c8;
case 0x4952c9:c.instructions+=16;goto B4952c9;
case 0x4952ca:c.instructions+=15;goto B4952ca;
case 0x4952cc:c.instructions+=14;goto B4952cc;
case 0x4952d0:c.instructions+=13;goto B4952d0;
case 0x4952d3:c.instructions+=12;goto B4952d3;
case 0x4952d7:c.instructions+=11;goto B4952d7;
case 0x4952da:c.instructions+=10;goto B4952da;
case 0x4952de:c.instructions+=9;goto B4952de;
case 0x4952e1:c.instructions+=8;goto B4952e1;
case 0x4952e5:c.instructions+=7;goto B4952e5;
case 0x4952e8:c.instructions+=6;goto B4952e8;
case 0x4952ec:c.instructions+=5;goto B4952ec;
case 0x4952ee:c.instructions+=4;goto B4952ee;
case 0x4952f0:c.instructions+=3;goto B4952f0;
case 0x4952f3:c.instructions+=2;goto B4952f3;
case 0x4952f6:c.instructions+=1;goto B4952f6;
case 0x4952f8:goto L4952f8;
case 0x4952fd:goto L4952fd;
case 0x4952ff:c.instructions+=3;goto B4952ff;
case 0x495300:c.instructions+=2;goto B495300;
case 0x495301:c.instructions+=1;goto B495301;
case 0x495306:goto L495306;
case 0x49530a:c.instructions+=4;goto B49530a;
case 0x49530d:c.instructions+=3;goto B49530d;
case 0x49530f:c.instructions+=2;goto B49530f;
case 0x495312:c.instructions+=1;goto B495312;
case 0x495314:goto L495314;
case 0x495319:goto L495319;
case 0x49531b:c.instructions+=4;goto B49531b;
case 0x49531c:c.instructions+=3;goto B49531c;
case 0x49531f:c.instructions+=2;goto B49531f;
case 0x495320:c.instructions+=1;goto B495320;
case 0x495325:goto L495325;
case 0x495329:c.instructions+=4;goto B495329;
case 0x49532c:c.instructions+=3;goto B49532c;
case 0x49532e:c.instructions+=2;goto B49532e;
case 0x495331:c.instructions+=1;goto B495331;
case 0x495333:goto L495333;
case 0x495338:goto L495338;
case 0x49533a:c.instructions+=4;goto B49533a;
case 0x49533b:c.instructions+=3;goto B49533b;
case 0x49533e:c.instructions+=2;goto B49533e;
case 0x49533f:c.instructions+=1;goto B49533f;
case 0x495344:goto L495344;
case 0x495348:c.instructions+=4;goto B495348;
case 0x49534b:c.instructions+=3;goto B49534b;
case 0x49534d:c.instructions+=2;goto B49534d;
case 0x495350:c.instructions+=1;goto B495350;
case 0x495352:goto L495352;
case 0x495357:goto L495357;
case 0x495359:c.instructions+=4;goto B495359;
case 0x49535a:c.instructions+=3;goto B49535a;
case 0x49535d:c.instructions+=2;goto B49535d;
case 0x49535e:c.instructions+=1;goto B49535e;
case 0x495363:goto L495363;
case 0x495366:c.instructions+=5;goto B495366;
case 0x49536c:c.instructions+=4;goto B49536c;
case 0x49536e:c.instructions+=3;goto B49536e;
case 0x49536f:c.instructions+=2;goto B49536f;
case 0x495370:c.instructions+=1;goto B495370;
case 0x495380:goto L495380;
case 0x495383:c.instructions+=2;goto B495383;
case 0x495385:c.instructions+=1;goto B495385;
case 0x495387:goto L495387;
case 0x495388:goto L495388;
case 0x495389:c.instructions+=1;goto B495389;
case 0x49538e:goto L49538e;
case 0x495391:c.instructions+=1;goto B495391;
case 0x4953a0:goto L4953a0;
case 0x4953a4:c.instructions+=2;goto B4953a4;
case 0x4953a5:c.instructions+=1;goto B4953a5;
case 0x4953aa:goto L4953aa;
case 0x4953ad:c.instructions+=2;goto B4953ad;
case 0x4953b1:c.instructions+=1;goto B4953b1;
case 0x4953c0:goto L4953c0;
case 0x4953c4:c.instructions+=2;goto B4953c4;
case 0x4953c5:c.instructions+=1;goto B4953c5;
case 0x4953ca:goto L4953ca;
case 0x4953cd:c.instructions+=2;goto B4953cd;
case 0x4953d1:c.instructions+=1;goto B4953d1;
case 0x4953e0:goto L4953e0;
case 0x4953e4:c.instructions+=2;goto B4953e4;
case 0x4953e5:c.instructions+=1;goto B4953e5;
case 0x4953ea:goto L4953ea;
case 0x4953ed:c.instructions+=2;goto B4953ed;
case 0x4953f1:c.instructions+=1;goto B4953f1;
case 0x495400:goto L495400;
case 0x495404:c.instructions+=4;goto B495404;
case 0x495408:c.instructions+=3;goto B495408;
case 0x495409:c.instructions+=2;goto B495409;
case 0x49540a:c.instructions+=1;goto B49540a;
case 0x49540f:goto L49540f;
case 0x495413:c.instructions+=3;goto B495413;
case 0x495414:c.instructions+=2;goto B495414;
case 0x495415:c.instructions+=1;goto B495415;
case 0x49541a:goto L49541a;
case 0x49541d:c.instructions+=2;goto B49541d;
case 0x49541e:c.instructions+=1;goto B49541e;
case 0x495423:goto L495423;
case 0x495426:c.instructions+=1;goto B495426;
case 0x495430:goto L495430;
case 0x495434:c.instructions+=6;goto B495434;
case 0x495438:c.instructions+=5;goto B495438;
case 0x49543c:c.instructions+=4;goto B49543c;
case 0x49543d:c.instructions+=3;goto B49543d;
case 0x49543e:c.instructions+=2;goto B49543e;
case 0x49543f:c.instructions+=1;goto B49543f;
case 0x495444:goto L495444;
case 0x495447:c.instructions+=2;goto B495447;
case 0x495448:c.instructions+=1;goto B495448;
case 0x49544d:goto L49544d;
case 0x495450:c.instructions+=1;goto B495450;
case 0x495460:goto L495460;
case 0x495464:c.instructions+=6;goto B495464;
case 0x495468:c.instructions+=5;goto B495468;
case 0x49546c:c.instructions+=4;goto B49546c;
case 0x49546d:c.instructions+=3;goto B49546d;
case 0x49546e:c.instructions+=2;goto B49546e;
case 0x49546f:c.instructions+=1;goto B49546f;
case 0x495474:goto L495474;
case 0x495477:c.instructions+=2;goto B495477;
case 0x495478:c.instructions+=1;goto B495478;
case 0x49547d:goto L49547d;
case 0x495480:c.instructions+=1;goto B495480;
case 0x495490:goto L495490;
case 0x495494:c.instructions+=4;goto B495494;
case 0x495498:c.instructions+=3;goto B495498;
case 0x495499:c.instructions+=2;goto B495499;
case 0x49549a:c.instructions+=1;goto B49549a;
case 0x49549f:goto L49549f;
case 0x4954a3:c.instructions+=3;goto B4954a3;
case 0x4954a4:c.instructions+=2;goto B4954a4;
case 0x4954a5:c.instructions+=1;goto B4954a5;
case 0x4954aa:goto L4954aa;
case 0x4954ad:c.instructions+=2;goto B4954ad;
case 0x4954ae:c.instructions+=1;goto B4954ae;
case 0x4954b3:goto L4954b3;
case 0x4954b6:c.instructions+=1;goto B4954b6;
case 0x4954c0:goto L4954c0;
case 0x4954c4:c.instructions+=2;goto B4954c4;
case 0x4954c5:c.instructions+=1;goto B4954c5;
case 0x4954ca:goto L4954ca;
case 0x4954ce:c.instructions+=3;goto B4954ce;
case 0x4954cf:c.instructions+=2;goto B4954cf;
case 0x4954d0:c.instructions+=1;goto B4954d0;
case 0x4954d5:goto L4954d5;
case 0x4954d6:c.instructions+=1;goto B4954d6;
case 0x4954db:goto L4954db;
case 0x4954de:c.instructions+=1;goto B4954de;
case 0x4954e0:goto L4954e0;
case 0x4954e4:c.instructions+=4;goto B4954e4;
case 0x4954e8:c.instructions+=3;goto B4954e8;
case 0x4954e9:c.instructions+=2;goto B4954e9;
case 0x4954ea:c.instructions+=1;goto B4954ea;
case 0x4954ef:goto L4954ef;
case 0x4954f0:c.instructions+=1;goto B4954f0;
case 0x4954f5:goto L4954f5;
case 0x4954f8:c.instructions+=1;goto B4954f8;
case 0x495500:goto L495500;
case 0x495504:c.instructions+=2;goto B495504;
case 0x495505:c.instructions+=1;goto B495505;
case 0x49550a:goto L49550a;
case 0x49550e:c.instructions+=3;goto B49550e;
case 0x49550f:c.instructions+=2;goto B49550f;
case 0x495510:c.instructions+=1;goto B495510;
case 0x495515:goto L495515;
case 0x495516:c.instructions+=1;goto B495516;
case 0x49551b:goto L49551b;
case 0x49551e:c.instructions+=1;goto B49551e;
case 0x495520:goto L495520;
case 0x495524:c.instructions+=4;goto B495524;
case 0x495528:c.instructions+=3;goto B495528;
case 0x495529:c.instructions+=2;goto B495529;
case 0x49552a:c.instructions+=1;goto B49552a;
case 0x49552f:goto L49552f;
case 0x495530:c.instructions+=1;goto B495530;
case 0x495535:goto L495535;
case 0x495538:c.instructions+=1;goto B495538;
case 0x495540:goto L495540;
case 0x495543:c.instructions+=8;goto B495543;
case 0x495544:c.instructions+=7;goto B495544;
case 0x495548:c.instructions+=6;goto B495548;
case 0x49554c:c.instructions+=5;goto B49554c;
case 0x49554d:c.instructions+=4;goto B49554d;
case 0x495551:c.instructions+=3;goto B495551;
case 0x495552:c.instructions+=2;goto B495552;
case 0x495553:c.instructions+=1;goto B495553;
case 0x495558:goto L495558;
case 0x49555c:c.instructions+=5;goto B49555c;
case 0x495560:c.instructions+=4;goto B495560;
case 0x495561:c.instructions+=3;goto B495561;
case 0x495562:c.instructions+=2;goto B495562;
case 0x495563:c.instructions+=1;goto B495563;
case 0x495568:goto L495568;
case 0x49556b:c.instructions+=3;goto B49556b;
case 0x49556c:c.instructions+=2;goto B49556c;
case 0x49556f:c.instructions+=1;goto B49556f;
case 0x495570:goto L495570;
case 0x495574:c.instructions+=5;goto B495574;
case 0x495577:c.instructions+=4;goto B495577;
case 0x495578:c.instructions+=3;goto B495578;
case 0x49557c:c.instructions+=2;goto B49557c;
case 0x49557d:c.instructions+=1;goto B49557d;
case 0x495582:goto L495582;
case 0x495585:c.instructions+=2;goto B495585;
case 0x495587:c.instructions+=1;goto B495587;
case 0x49558c:goto L49558c;
case 0x49558f:c.instructions+=1;goto B49558f;
case 0x495590:goto L495590;
case 0x495593:c.instructions+=8;goto B495593;
case 0x495594:c.instructions+=7;goto B495594;
case 0x495598:c.instructions+=6;goto B495598;
case 0x49559c:c.instructions+=5;goto B49559c;
case 0x49559d:c.instructions+=4;goto B49559d;
case 0x4955a1:c.instructions+=3;goto B4955a1;
case 0x4955a2:c.instructions+=2;goto B4955a2;
case 0x4955a3:c.instructions+=1;goto B4955a3;
case 0x4955a8:goto L4955a8;
case 0x4955ac:c.instructions+=5;goto B4955ac;
case 0x4955b0:c.instructions+=4;goto B4955b0;
case 0x4955b1:c.instructions+=3;goto B4955b1;
case 0x4955b2:c.instructions+=2;goto B4955b2;
case 0x4955b3:c.instructions+=1;goto B4955b3;
case 0x4955b8:goto L4955b8;
case 0x4955bb:c.instructions+=3;goto B4955bb;
case 0x4955bc:c.instructions+=2;goto B4955bc;
case 0x4955bf:c.instructions+=1;goto B4955bf;
case 0x4955c0:goto L4955c0;
case 0x4955c4:c.instructions+=6;goto B4955c4;
case 0x4955c8:c.instructions+=5;goto B4955c8;
case 0x4955cc:c.instructions+=4;goto B4955cc;
case 0x4955cd:c.instructions+=3;goto B4955cd;
case 0x4955ce:c.instructions+=2;goto B4955ce;
case 0x4955cf:c.instructions+=1;goto B4955cf;
case 0x4955d4:goto L4955d4;
case 0x4955d7:c.instructions+=2;goto B4955d7;
case 0x4955d8:c.instructions+=1;goto B4955d8;
case 0x4955dd:goto L4955dd;
case 0x4955e0:c.instructions+=1;goto B4955e0;
case 0x4955f0:goto L4955f0;
case 0x4955f2:c.instructions+=10;goto B4955f2;
case 0x4955f6:c.instructions+=9;goto B4955f6;
case 0x4955f8:c.instructions+=8;goto B4955f8;
case 0x4955fa:c.instructions+=7;goto B4955fa;
case 0x4955fd:c.instructions+=6;goto B4955fd;
case 0x495600:c.instructions+=5;goto B495600;
case 0x495603:c.instructions+=4;goto B495603;
case 0x495606:c.instructions+=3;goto B495606;
case 0x495609:c.instructions+=2;goto B495609;
case 0x49560c:c.instructions+=1;goto B49560c;
case 0x495610:goto L495610;
case 0x495614:c.instructions+=5;goto B495614;
case 0x495617:c.instructions+=4;goto B495617;
case 0x49561a:c.instructions+=3;goto B49561a;
case 0x49561b:c.instructions+=2;goto B49561b;
case 0x49561c:c.instructions+=1;goto B49561c;
case 0x495621:goto L495621;
case 0x495630:goto L495630;
case 0x495632:c.instructions+=10;goto B495632;
case 0x495637:c.instructions+=9;goto B495637;
case 0x49563d:c.instructions+=8;goto B49563d;
case 0x49563e:c.instructions+=7;goto B49563e;
case 0x495645:c.instructions+=6;goto B495645;
case 0x495646:c.instructions+=5;goto B495646;
case 0x495647:c.instructions+=4;goto B495647;
case 0x495649:c.instructions+=3;goto B495649;
case 0x49564a:c.instructions+=2;goto B49564a;
case 0x49564e:c.instructions+=1;goto B49564e;
case 0x495653:goto L495653;
case 0x495655:c.instructions+=6;goto B495655;
case 0x495658:c.instructions+=5;goto B495658;
case 0x49565c:c.instructions+=4;goto B49565c;
case 0x495662:c.instructions+=3;goto B495662;
case 0x495665:c.instructions+=2;goto B495665;
case 0x49566c:c.instructions+=1;goto B49566c;
case 0x495671:goto L495671;
case 0x495675:c.instructions+=10;goto B495675;
case 0x495678:c.instructions+=9;goto B495678;
case 0x49567b:c.instructions+=8;goto B49567b;
case 0x49567e:c.instructions+=7;goto B49567e;
case 0x495685:c.instructions+=6;goto B495685;
case 0x495686:c.instructions+=5;goto B495686;
case 0x495688:c.instructions+=4;goto B495688;
case 0x495689:c.instructions+=3;goto B495689;
case 0x495690:c.instructions+=2;goto B495690;
case 0x495693:c.instructions+=1;goto B495693;
case 0x4956a0:goto L4956a0;
case 0x4956a2:c.instructions+=13;goto B4956a2;
case 0x4956a7:c.instructions+=12;goto B4956a7;
case 0x4956ad:c.instructions+=11;goto B4956ad;
case 0x4956ae:c.instructions+=10;goto B4956ae;
case 0x4956b5:c.instructions+=9;goto B4956b5;
case 0x4956b6:c.instructions+=8;goto B4956b6;
case 0x4956b7:c.instructions+=7;goto B4956b7;
case 0x4956b9:c.instructions+=6;goto B4956b9;
case 0x4956bd:c.instructions+=5;goto B4956bd;
case 0x4956c3:c.instructions+=4;goto B4956c3;
case 0x4956c6:c.instructions+=3;goto B4956c6;
case 0x4956c7:c.instructions+=2;goto B4956c7;
case 0x4956cf:c.instructions+=1;goto B4956cf;
case 0x4956d4:goto L4956d4;
case 0x4956d7:c.instructions+=3;goto B4956d7;
case 0x4956da:c.instructions+=2;goto B4956da;
case 0x4956df:c.instructions+=1;goto B4956df;
case 0x4956e4:goto L4956e4;
case 0x4956e6:c.instructions+=2;goto B4956e6;
case 0x4956ee:c.instructions+=1;goto B4956ee;
case 0x4956f3:goto L4956f3;
case 0x4956f7:c.instructions+=4;goto B4956f7;
case 0x4956f8:c.instructions+=3;goto B4956f8;
case 0x4956ff:c.instructions+=2;goto B4956ff;
case 0x495702:c.instructions+=1;goto B495702;
case 0x495710:goto L495710;
case 0x495712:c.instructions+=9;goto B495712;
case 0x495717:c.instructions+=8;goto B495717;
case 0x49571d:c.instructions+=7;goto B49571d;
case 0x49571e:c.instructions+=6;goto B49571e;
case 0x495725:c.instructions+=5;goto B495725;
case 0x495726:c.instructions+=4;goto B495726;
case 0x495727:c.instructions+=3;goto B495727;
case 0x495729:c.instructions+=2;goto B495729;
case 0x49572b:c.instructions+=1;goto B49572b;
case 0x495730:goto L495730;
case 0x495733:c.instructions+=4;goto B495733;
case 0x495737:c.instructions+=3;goto B495737;
case 0x495739:c.instructions+=2;goto B495739;
case 0x495741:c.instructions+=1;goto B495741;
case 0x495743:goto L495743;
case 0x495747:c.instructions+=4;goto B495747;
case 0x495748:c.instructions+=3;goto B495748;
case 0x495749:c.instructions+=2;goto B495749;
case 0x49574b:c.instructions+=1;goto B49574b;
case 0x495750:goto L495750;
case 0x495751:c.instructions+=4;goto B495751;
case 0x495755:c.instructions+=3;goto B495755;
case 0x49575c:c.instructions+=2;goto B49575c;
case 0x49575f:c.instructions+=1;goto B49575f;
case 0x495762:goto L495762;
case 0x495766:c.instructions+=5;goto B495766;
case 0x495768:c.instructions+=4;goto B495768;
case 0x495769:c.instructions+=3;goto B495769;
case 0x495770:c.instructions+=2;goto B495770;
case 0x495773:c.instructions+=1;goto B495773;
case 0x495780:goto L495780;
case 0x495781:c.instructions+=2;goto B495781;
case 0x495783:c.instructions+=1;goto B495783;
case 0x495788:goto L495788;
case 0x49578d:c.instructions+=1;goto B49578d;
case 0x49578f:goto L49578f;
case 0x495790:c.instructions+=1;goto B495790;
case 0x495795:goto L495795;
case 0x495798:goto L495798;
case 0x49579a:c.instructions+=2;goto B49579a;
case 0x49579b:c.instructions+=1;goto B49579b;
case 0x4957a0:goto L4957a0;
case 0x4957a6:c.instructions+=1;goto B4957a6;
case 0x4957b0:goto L4957b0;
case 0x4957b5:c.instructions+=4;goto B4957b5;
case 0x4957b6:c.instructions+=3;goto B4957b6;
case 0x4957b8:c.instructions+=2;goto B4957b8;
case 0x4957be:c.instructions+=1;goto B4957be;
case 0x4957c0:goto L4957c0;
case 0x4957c1:c.instructions+=1;goto B4957c1;
case 0x4957c6:goto L4957c6;
case 0x4957c9:goto L4957c9;
case 0x4957cb:c.instructions+=2;goto B4957cb;
case 0x4957cc:c.instructions+=1;goto B4957cc;
case 0x4957d0:goto L4957d0;
case 0x4957d4:c.instructions+=5;goto B4957d4;
case 0x4957d9:c.instructions+=4;goto B4957d9;
case 0x4957da:c.instructions+=3;goto B4957da;
case 0x4957dd:c.instructions+=2;goto B4957dd;
case 0x4957de:c.instructions+=1;goto B4957de;
case 0x4957e3:goto L4957e3;
case 0x4957e6:c.instructions+=1;goto B4957e6;
case 0x4957f0:goto L4957f0;
case 0x4957f4:c.instructions+=6;goto B4957f4;
case 0x4957f8:c.instructions+=5;goto B4957f8;
case 0x4957fb:c.instructions+=4;goto B4957fb;
case 0x4957ff:c.instructions+=3;goto B4957ff;
case 0x495802:c.instructions+=2;goto B495802;
case 0x495805:c.instructions+=1;goto B495805;
case 0x49580a:goto L49580a;
case 0x495810:goto L495810;
case 0x495811:c.instructions+=4;goto B495811;
case 0x495813:c.instructions+=3;goto B495813;
case 0x495816:c.instructions+=2;goto B495816;
case 0x495818:c.instructions+=1;goto B495818;
case 0x49581a:goto L49581a;
case 0x49581f:c.instructions+=2;goto B49581f;
case 0x495820:c.instructions+=1;goto B495820;
case 0x495825:goto L495825;
case 0x495828:c.instructions+=2;goto B495828;
case 0x49582a:c.instructions+=1;goto B49582a;
case 0x49582c:goto L49582c;
case 0x49582f:c.instructions+=4;goto B49582f;
case 0x495831:c.instructions+=3;goto B495831;
case 0x495836:c.instructions+=2;goto B495836;
case 0x495837:c.instructions+=1;goto B495837;
case 0x49583c:goto L49583c;
case 0x49583f:goto L49583f;
case 0x495840:c.instructions+=1;goto B495840;
case 0x495850:goto L495850;
case 0x495851:c.instructions+=4;goto B495851;
case 0x495853:c.instructions+=3;goto B495853;
case 0x495856:c.instructions+=2;goto B495856;
case 0x495858:c.instructions+=1;goto B495858;
case 0x49585a:goto L49585a;
case 0x49585f:c.instructions+=2;goto B49585f;
case 0x495860:c.instructions+=1;goto B495860;
case 0x495865:goto L495865;
case 0x495868:c.instructions+=2;goto B495868;
case 0x49586a:c.instructions+=1;goto B49586a;
case 0x49586c:goto L49586c;
case 0x49586f:c.instructions+=4;goto B49586f;
case 0x495871:c.instructions+=3;goto B495871;
case 0x495876:c.instructions+=2;goto B495876;
case 0x495877:c.instructions+=1;goto B495877;
case 0x49587c:goto L49587c;
case 0x49587f:goto L49587f;
case 0x495880:c.instructions+=1;goto B495880;
case 0x495890:goto L495890;
case 0x495891:c.instructions+=4;goto B495891;
case 0x495893:c.instructions+=3;goto B495893;
case 0x495898:c.instructions+=2;goto B495898;
case 0x49589a:c.instructions+=1;goto B49589a;
case 0x49589f:goto L49589f;
case 0x4958a3:c.instructions+=2;goto B4958a3;
case 0x4958a4:c.instructions+=1;goto B4958a4;
case 0x4958b0:goto L4958b0;
case 0x4958b3:c.instructions+=2;goto B4958b3;
case 0x4958b5:c.instructions+=1;goto B4958b5;
case 0x4958b7:goto L4958b7;
case 0x4958ba:c.instructions+=3;goto B4958ba;
case 0x4958bf:c.instructions+=2;goto B4958bf;
case 0x4958c0:c.instructions+=1;goto B4958c0;
case 0x4958c5:goto L4958c5;
case 0x4958d0:goto L4958d0;
case 0x4958d3:c.instructions+=2;goto B4958d3;
case 0x4958d5:c.instructions+=1;goto B4958d5;
case 0x4958d7:goto L4958d7;
case 0x4958da:c.instructions+=3;goto B4958da;
case 0x4958df:c.instructions+=2;goto B4958df;
case 0x4958e0:c.instructions+=1;goto B4958e0;
case 0x4958e5:goto L4958e5;
case 0x4958f0:goto L4958f0;
case 0x4958f2:c.instructions+=1;goto B4958f2;
case 0x4958f7:goto L4958f7;
case 0x495900:goto L495900;
case 0x495902:c.instructions+=1;goto B495902;
case 0x495907:goto L495907;
case 0x495910:goto L495910;
case 0x495913:c.instructions+=2;goto B495913;
case 0x495915:c.instructions+=1;goto B495915;
case 0x495917:goto L495917;
case 0x495918:c.instructions+=1;goto B495918;
case 0x49591d:goto L49591d;
case 0x49591e:goto L49591e;
case 0x495920:c.instructions+=1;goto B495920;
case 0x495930:goto L495930;
case 0x495936:c.instructions+=1;goto B495936;
case 0x495940:goto L495940;
case 0x495941:c.instructions+=2;goto B495941;
case 0x495943:c.instructions+=1;goto B495943;
case 0x495948:goto L495948;
case 0x49594d:c.instructions+=1;goto B49594d;
case 0x49594f:goto L49594f;
case 0x495950:c.instructions+=1;goto B495950;
case 0x495955:goto L495955;
case 0x495958:goto L495958;
case 0x49595a:c.instructions+=2;goto B49595a;
case 0x49595b:c.instructions+=1;goto B49595b;
case 0x495960:goto L495960;
case 0x495963:c.instructions+=1;goto B495963;
case 0x495965:goto L495965;
case 0x495968:c.instructions+=2;goto B495968;
case 0x49596a:c.instructions+=1;goto B49596a;
case 0x49596c:goto L49596c;
case 0x49596f:c.instructions+=2;goto B49596f;
case 0x495971:c.instructions+=1;goto B495971;
case 0x495973:goto L495973;
case 0x495979:c.instructions+=2;goto B495979;
case 0x49597b:c.instructions+=1;goto B49597b;
case 0x49597d:goto L49597d;
case 0x49597f:c.instructions+=1;goto B49597f;
case 0x495980:goto L495980;
case 0x495982:c.instructions+=1;goto B495982;
case 0x495990:goto L495990;
case 0x495992:c.instructions+=4;goto B495992;
case 0x495993:c.instructions+=3;goto B495993;
case 0x495995:c.instructions+=2;goto B495995;
case 0x49599a:c.instructions+=1;goto B49599a;
case 0x49599c:goto L49599c;
case 0x49599e:goto L49599e;
case 0x4959a3:c.instructions+=1;goto B4959a3;
case 0x4959a6:goto L4959a6;
case 0x4959a8:goto L4959a8;
case 0x4959ad:c.instructions+=1;goto B4959ad;
case 0x4959b0:goto L4959b0;
case 0x4959b2:goto L4959b2;
case 0x4959b7:c.instructions+=1;goto B4959b7;
case 0x4959bd:goto L4959bd;
case 0x4959bf:goto L4959bf;
case 0x4959c4:c.instructions+=1;goto B4959c4;
case 0x4959ca:goto L4959ca;
case 0x4959cc:goto L4959cc;
case 0x4959d1:c.instructions+=1;goto B4959d1;
case 0x4959d7:goto L4959d7;
case 0x4959d9:goto L4959d9;
case 0x4959df:c.instructions+=7;goto B4959df;
case 0x4959e5:c.instructions+=6;goto B4959e5;
case 0x4959eb:c.instructions+=5;goto B4959eb;
case 0x4959f1:c.instructions+=4;goto B4959f1;
case 0x4959f7:c.instructions+=3;goto B4959f7;
case 0x4959fd:c.instructions+=2;goto B4959fd;
case 0x4959fe:c.instructions+=1;goto B4959fe;
case 0x495a00:goto L495a00;
case 0x495a02:c.instructions+=14;goto B495a02;
case 0x495a05:c.instructions+=13;goto B495a05;
case 0x495a08:c.instructions+=12;goto B495a08;
case 0x495a0b:c.instructions+=11;goto B495a0b;
case 0x495a0d:c.instructions+=10;goto B495a0d;
case 0x495a14:c.instructions+=9;goto B495a14;
case 0x495a17:c.instructions+=8;goto B495a17;
case 0x495a1a:c.instructions+=7;goto B495a1a;
case 0x495a1d:c.instructions+=6;goto B495a1d;
case 0x495a20:c.instructions+=5;goto B495a20;
case 0x495a23:c.instructions+=4;goto B495a23;
case 0x495a26:c.instructions+=3;goto B495a26;
case 0x495a29:c.instructions+=2;goto B495a29;
case 0x495a2c:c.instructions+=1;goto B495a2c;
case 0x495a30:goto L495a30;
case 0x495a31:c.instructions+=5;goto B495a31;
case 0x495a33:c.instructions+=4;goto B495a33;
case 0x495a38:c.instructions+=3;goto B495a38;
case 0x495a3d:c.instructions+=2;goto B495a3d;
case 0x495a47:c.instructions+=1;goto B495a47;
case 0x495a4c:goto L495a4c;
case 0x495a4e:c.instructions+=1;goto B495a4e;
case 0x495a50:goto L495a50;
case 0x495a52:c.instructions+=4;goto B495a52;
case 0x495a57:c.instructions+=3;goto B495a57;
case 0x495a5c:c.instructions+=2;goto B495a5c;
case 0x495a63:c.instructions+=1;goto B495a63;
case 0x495a68:goto L495a68;
case 0x495a6b:c.instructions+=2;goto B495a6b;
case 0x495a6c:c.instructions+=1;goto B495a6c;
case 0x495a6d:goto L495a6d;
case 0x495a72:c.instructions+=2;goto B495a72;
case 0x495a74:c.instructions+=1;goto B495a74;
case 0x495a76:goto L495a76;
case 0x495a79:c.instructions+=2;goto B495a79;
case 0x495a7a:c.instructions+=1;goto B495a7a;
case 0x495a7f:goto L495a7f;
case 0x495a84:c.instructions+=2;goto B495a84;
case 0x495a89:c.instructions+=1;goto B495a89;
case 0x495a8e:goto L495a8e;
case 0x495a91:c.instructions+=2;goto B495a91;
case 0x495a92:c.instructions+=1;goto B495a92;
case 0x495a93:goto L495a93;
case 0x495a96:c.instructions+=2;goto B495a96;
case 0x495a97:c.instructions+=1;goto B495a97;
case 0x495a9c:goto L495a9c;
case 0x495a9f:c.instructions+=4;goto B495a9f;
case 0x495aa4:c.instructions+=3;goto B495aa4;
case 0x495aa9:c.instructions+=2;goto B495aa9;
case 0x495aae:c.instructions+=1;goto B495aae;
case 0x495ab3:goto L495ab3;
case 0x495ab5:c.instructions+=6;goto B495ab5;
case 0x495aba:c.instructions+=5;goto B495aba;
case 0x495abc:c.instructions+=4;goto B495abc;
case 0x495abe:c.instructions+=3;goto B495abe;
case 0x495ac3:c.instructions+=2;goto B495ac3;
case 0x495ac4:c.instructions+=1;goto B495ac4;
case 0x495ac9:goto L495ac9;
case 0x495aca:c.instructions+=2;goto B495aca;
case 0x495acf:c.instructions+=1;goto B495acf;
case 0x495ad4:goto L495ad4;
case 0x495adb:c.instructions+=2;goto B495adb;
case 0x495adc:c.instructions+=1;goto B495adc;
case 0x495af0:goto L495af0;
case 0x495af3:c.instructions+=3;goto B495af3;
case 0x495af5:c.instructions+=2;goto B495af5;
case 0x495af6:c.instructions+=1;goto B495af6;
case 0x495afb:goto L495afb;
case 0x495b01:c.instructions+=4;goto B495b01;
case 0x495b03:c.instructions+=3;goto B495b03;
case 0x495b04:c.instructions+=2;goto B495b04;
case 0x495b06:c.instructions+=1;goto B495b06;
case 0x495b0b:goto L495b0b;
case 0x495b0e:c.instructions+=1;goto B495b0e;
case 0x495b10:goto L495b10;
case 0x495b11:c.instructions+=5;goto B495b11;
case 0x495b12:c.instructions+=4;goto B495b12;
case 0x495b16:c.instructions+=3;goto B495b16;
case 0x495b1c:c.instructions+=2;goto B495b1c;
case 0x495b1e:c.instructions+=1;goto B495b1e;
case 0x495b20:goto L495b20;
case 0x495b23:c.instructions+=3;goto B495b23;
case 0x495b26:c.instructions+=2;goto B495b26;
case 0x495b28:c.instructions+=1;goto B495b28;
case 0x495b2e:goto L495b2e;
case 0x495b32:c.instructions+=8;goto B495b32;
case 0x495b36:c.instructions+=7;goto B495b36;
case 0x495b3a:c.instructions+=6;goto B495b3a;
case 0x495b3b:c.instructions+=5;goto B495b3b;
case 0x495b3c:c.instructions+=4;goto B495b3c;
case 0x495b3d:c.instructions+=3;goto B495b3d;
case 0x495b3e:c.instructions+=2;goto B495b3e;
case 0x495b40:c.instructions+=1;goto B495b40;
case 0x495b45:goto L495b45;
case 0x495b4b:c.instructions+=1;goto B495b4b;
case 0x495b51:goto L495b51;
case 0x495b57:c.instructions+=1;goto B495b57;
case 0x495b59:goto L495b59;
case 0x495b5f:c.instructions+=1;goto B495b5f;
case 0x495b65:goto L495b65;
case 0x495b6f:c.instructions+=1;goto B495b6f;
case 0x495b75:goto L495b75;
case 0x495b77:c.instructions+=5;goto B495b77;
case 0x495b7e:c.instructions+=4;goto B495b7e;
case 0x495b81:c.instructions+=3;goto B495b81;
case 0x495b86:c.instructions+=2;goto B495b86;
case 0x495b87:c.instructions+=1;goto B495b87;
case 0x495b8c:goto L495b8c;
case 0x495b8f:c.instructions+=3;goto B495b8f;
case 0x495b90:c.instructions+=2;goto B495b90;
case 0x495b91:c.instructions+=1;goto B495b91;
case 0x495b94:goto L495b94;
case 0x495b99:goto L495b99;
case 0x495b9b:c.instructions+=1;goto B495b9b;
case 0x495b9d:goto L495b9d;
case 0x495ba0:c.instructions+=4;goto B495ba0;
case 0x495ba2:c.instructions+=3;goto B495ba2;
case 0x495ba7:c.instructions+=2;goto B495ba7;
case 0x495ba8:c.instructions+=1;goto B495ba8;
case 0x495bad:goto L495bad;
case 0x495bb0:c.instructions+=3;goto B495bb0;
case 0x495bb1:c.instructions+=2;goto B495bb1;
case 0x495bb2:c.instructions+=1;goto B495bb2;
case 0x495bb5:goto L495bb5;
case 0x495bb8:c.instructions+=4;goto B495bb8;
case 0x495bbd:c.instructions+=3;goto B495bbd;
case 0x495bc2:c.instructions+=2;goto B495bc2;
case 0x495bc3:c.instructions+=1;goto B495bc3;
case 0x495bc8:goto L495bc8;
case 0x495bcb:c.instructions+=2;goto B495bcb;
case 0x495bcd:c.instructions+=1;goto B495bcd;
case 0x495bcf:goto L495bcf;
case 0x495bd2:c.instructions+=3;goto B495bd2;
case 0x495bd4:c.instructions+=2;goto B495bd4;
case 0x495bd5:c.instructions+=1;goto B495bd5;
case 0x495bda:goto L495bda;
case 0x495bdd:c.instructions+=5;goto B495bdd;
case 0x495bdf:c.instructions+=4;goto B495bdf;
case 0x495be4:c.instructions+=3;goto B495be4;
case 0x495be9:c.instructions+=2;goto B495be9;
case 0x495bea:c.instructions+=1;goto B495bea;
case 0x495bef:goto L495bef;
case 0x495bf2:c.instructions+=3;goto B495bf2;
case 0x495bf3:c.instructions+=2;goto B495bf3;
case 0x495bf4:c.instructions+=1;goto B495bf4;
case 0x495bf7:goto L495bf7;
case 0x495bfa:c.instructions+=4;goto B495bfa;
case 0x495bff:c.instructions+=3;goto B495bff;
case 0x495c04:c.instructions+=2;goto B495c04;
case 0x495c05:c.instructions+=1;goto B495c05;
case 0x495c0a:goto L495c0a;
case 0x495c0d:c.instructions+=2;goto B495c0d;
case 0x495c0f:c.instructions+=1;goto B495c0f;
case 0x495c11:goto L495c11;
case 0x495c14:c.instructions+=3;goto B495c14;
case 0x495c16:c.instructions+=2;goto B495c16;
case 0x495c17:c.instructions+=1;goto B495c17;
case 0x495c1c:goto L495c1c;
case 0x495c1f:c.instructions+=5;goto B495c1f;
case 0x495c21:c.instructions+=4;goto B495c21;
case 0x495c26:c.instructions+=3;goto B495c26;
case 0x495c2b:c.instructions+=2;goto B495c2b;
case 0x495c2c:c.instructions+=1;goto B495c2c;
case 0x495c31:goto L495c31;
case 0x495c34:goto L495c34;
case 0x495c35:c.instructions+=2;goto B495c35;
case 0x495c36:c.instructions+=1;goto B495c36;
case 0x495c40:goto L495c40;
case 0x495c44:c.instructions+=12;goto B495c44;
case 0x495c48:c.instructions+=11;goto B495c48;
case 0x495c49:c.instructions+=10;goto B495c49;
case 0x495c4a:c.instructions+=9;goto B495c4a;
case 0x495c4e:c.instructions+=8;goto B495c4e;
case 0x495c50:c.instructions+=7;goto B495c50;
case 0x495c54:c.instructions+=6;goto B495c54;
case 0x495c55:c.instructions+=5;goto B495c55;
case 0x495c56:c.instructions+=4;goto B495c56;
case 0x495c57:c.instructions+=3;goto B495c57;
case 0x495c58:c.instructions+=2;goto B495c58;
case 0x495c5a:c.instructions+=1;goto B495c5a;
case 0x495c5f:goto L495c5f;
case 0x495c60:c.instructions+=2;goto B495c60;
case 0x495c66:c.instructions+=1;goto B495c66;
case 0x495c6b:goto L495c6b;
case 0x495c71:c.instructions+=1;goto B495c71;
case 0x495c73:goto L495c73;
case 0x495c79:c.instructions+=1;goto B495c79;
case 0x495c7f:goto L495c7f;
case 0x495c89:c.instructions+=1;goto B495c89;
case 0x495c8f:goto L495c8f;
case 0x495c94:c.instructions+=3;goto B495c94;
case 0x495c96:c.instructions+=2;goto B495c96;
case 0x495c98:c.instructions+=1;goto B495c98;
case 0x495c9a:goto L495c9a;
case 0x495c9d:c.instructions+=3;goto B495c9d;
case 0x495ca2:c.instructions+=2;goto B495ca2;
case 0x495ca3:c.instructions+=1;goto B495ca3;
case 0x495ca8:goto L495ca8;
case 0x495caf:c.instructions+=1;goto B495caf;
case 0x495cb1:goto L495cb1;
case 0x495cb4:c.instructions+=3;goto B495cb4;
case 0x495cb9:c.instructions+=2;goto B495cb9;
case 0x495cba:c.instructions+=1;goto B495cba;
case 0x495cbf:goto L495cbf;
case 0x495cc2:c.instructions+=5;goto B495cc2;
case 0x495cc5:c.instructions+=4;goto B495cc5;
case 0x495cc8:c.instructions+=3;goto B495cc8;
case 0x495ccb:c.instructions+=2;goto B495ccb;
case 0x495ccc:c.instructions+=1;goto B495ccc;
case 0x495cd1:goto L495cd1;
case 0x495cd4:c.instructions+=3;goto B495cd4;
case 0x495cd5:c.instructions+=2;goto B495cd5;
case 0x495cd7:c.instructions+=1;goto B495cd7;
case 0x495cda:goto L495cda;
case 0x495cdb:c.instructions+=2;goto B495cdb;
case 0x495cdc:c.instructions+=1;goto B495cdc;
case 0x495cdf:goto L495cdf;
case 0x495ce2:c.instructions+=4;goto B495ce2;
case 0x495ce7:c.instructions+=3;goto B495ce7;
case 0x495cec:c.instructions+=2;goto B495cec;
case 0x495ced:c.instructions+=1;goto B495ced;
case 0x495cf2:goto L495cf2;
case 0x495cf5:c.instructions+=2;goto B495cf5;
case 0x495cf7:c.instructions+=1;goto B495cf7;
case 0x495cf9:goto L495cf9;
case 0x495cfc:c.instructions+=3;goto B495cfc;
case 0x495cfe:c.instructions+=2;goto B495cfe;
case 0x495cff:c.instructions+=1;goto B495cff;
case 0x495d04:goto L495d04;
case 0x495d07:c.instructions+=5;goto B495d07;
case 0x495d09:c.instructions+=4;goto B495d09;
case 0x495d0e:c.instructions+=3;goto B495d0e;
case 0x495d13:c.instructions+=2;goto B495d13;
case 0x495d14:c.instructions+=1;goto B495d14;
case 0x495d19:goto L495d19;
case 0x495d1c:goto L495d1c;
case 0x495d1d:c.instructions+=2;goto B495d1d;
case 0x495d1e:c.instructions+=1;goto B495d1e;
case 0x495d30:goto L495d30;
case 0x495d36:c.instructions+=5;goto B495d36;
case 0x495d37:c.instructions+=4;goto B495d37;
case 0x495d38:c.instructions+=3;goto B495d38;
case 0x495d39:c.instructions+=2;goto B495d39;
case 0x495d3b:c.instructions+=1;goto B495d3b;
case 0x495d40:goto L495d40;
case 0x495d43:c.instructions+=5;goto B495d43;
case 0x495d46:c.instructions+=4;goto B495d46;
case 0x495d49:c.instructions+=3;goto B495d49;
case 0x495d4b:c.instructions+=2;goto B495d4b;
case 0x495d50:c.instructions+=1;goto B495d50;
case 0x495d55:goto L495d55;
case 0x495d58:c.instructions+=4;goto B495d58;
case 0x495d59:c.instructions+=3;goto B495d59;
case 0x495d5e:c.instructions+=2;goto B495d5e;
case 0x495d5f:c.instructions+=1;goto B495d5f;
case 0x495d64:goto L495d64;
case 0x495d67:c.instructions+=3;goto B495d67;
case 0x495d6c:c.instructions+=2;goto B495d6c;
case 0x495d6d:c.instructions+=1;goto B495d6d;
case 0x495d72:goto L495d72;
case 0x495d75:c.instructions+=3;goto B495d75;
case 0x495d77:c.instructions+=2;goto B495d77;
case 0x495d7d:c.instructions+=1;goto B495d7d;
case 0x495d82:goto L495d82;
case 0x495d83:c.instructions+=5;goto B495d83;
case 0x495d88:c.instructions+=4;goto B495d88;
case 0x495d8c:c.instructions+=3;goto B495d8c;
case 0x495d8e:c.instructions+=2;goto B495d8e;
case 0x495d8f:c.instructions+=1;goto B495d8f;
case 0x495d94:goto L495d94;
case 0x495d98:c.instructions+=2;goto B495d98;
case 0x495d99:c.instructions+=1;goto B495d99;
case 0x495d9e:goto L495d9e;
case 0x495da0:c.instructions+=4;goto B495da0;
case 0x495da2:c.instructions+=3;goto B495da2;
case 0x495da4:c.instructions+=2;goto B495da4;
case 0x495da5:c.instructions+=1;goto B495da5;
case 0x495daa:goto L495daa;
case 0x495dad:c.instructions+=2;goto B495dad;
case 0x495daf:c.instructions+=1;goto B495daf;
case 0x495db1:goto L495db1;
case 0x495db7:c.instructions+=3;goto B495db7;
case 0x495db8:c.instructions+=2;goto B495db8;
case 0x495db9:c.instructions+=1;goto B495db9;
case 0x495dbe:goto L495dbe;
case 0x495dc1:goto L495dc1;
case 0x495dc4:c.instructions+=3;goto B495dc4;
case 0x495dc6:c.instructions+=2;goto B495dc6;
case 0x495dd0:c.instructions+=1;goto B495dd0;
case 0x495dd5:goto L495dd5;
case 0x495dd6:c.instructions+=1;goto B495dd6;
case 0x495ddb:goto L495ddb;
case 0x495ddc:c.instructions+=4;goto B495ddc;
case 0x495de1:c.instructions+=3;goto B495de1;
case 0x495de6:c.instructions+=2;goto B495de6;
case 0x495de7:c.instructions+=1;goto B495de7;
case 0x495dec:goto L495dec;
case 0x495df1:c.instructions+=1;goto B495df1;
case 0x495df6:goto L495df6;
case 0x495df9:c.instructions+=3;goto B495df9;
case 0x495dfb:c.instructions+=2;goto B495dfb;
case 0x495dfd:c.instructions+=1;goto B495dfd;
case 0x495e02:goto L495e02;
case 0x495e03:c.instructions+=2;goto B495e03;
case 0x495e08:c.instructions+=1;goto B495e08;
case 0x495e0d:goto L495e0d;
case 0x495e0e:c.instructions+=3;goto B495e0e;
case 0x495e13:c.instructions+=2;goto B495e13;
case 0x495e14:c.instructions+=1;goto B495e14;
case 0x495e19:goto L495e19;
case 0x495e1a:c.instructions+=4;goto B495e1a;
case 0x495e1e:c.instructions+=3;goto B495e1e;
case 0x495e23:c.instructions+=2;goto B495e23;
case 0x495e24:c.instructions+=1;goto B495e24;
case 0x495e29:goto L495e29;
case 0x495e2a:c.instructions+=1;goto B495e2a;
case 0x495e2f:goto L495e2f;
case 0x495e32:c.instructions+=4;goto B495e32;
case 0x495e36:c.instructions+=3;goto B495e36;
case 0x495e37:c.instructions+=2;goto B495e37;
case 0x495e3d:c.instructions+=1;goto B495e3d;
case 0x495e42:goto L495e42;
case 0x495e48:c.instructions+=8;goto B495e48;
case 0x495e4e:c.instructions+=7;goto B495e4e;
case 0x495e54:c.instructions+=6;goto B495e54;
case 0x495e55:c.instructions+=5;goto B495e55;
case 0x495e56:c.instructions+=4;goto B495e56;
case 0x495e57:c.instructions+=3;goto B495e57;
case 0x495e58:c.instructions+=2;goto B495e58;
case 0x495e5e:c.instructions+=1;goto B495e5e;
case 0x495e63:goto L495e63;
case 0x495e67:c.instructions+=6;goto B495e67;
case 0x495e6a:c.instructions+=5;goto B495e6a;
case 0x495e6b:c.instructions+=4;goto B495e6b;
case 0x495e70:c.instructions+=3;goto B495e70;
case 0x495e75:c.instructions+=2;goto B495e75;
case 0x495e76:c.instructions+=1;goto B495e76;
case 0x495e7b:goto L495e7b;
case 0x495e81:c.instructions+=5;goto B495e81;
case 0x495e84:c.instructions+=4;goto B495e84;
case 0x495e87:c.instructions+=3;goto B495e87;
case 0x495e88:c.instructions+=2;goto B495e88;
case 0x495e8d:c.instructions+=1;goto B495e8d;
case 0x495e92:goto L495e92;
case 0x495e93:c.instructions+=4;goto B495e93;
case 0x495e98:c.instructions+=3;goto B495e98;
case 0x495e9d:c.instructions+=2;goto B495e9d;
case 0x495e9e:c.instructions+=1;goto B495e9e;
case 0x495ea3:goto L495ea3;
case 0x495ea7:c.instructions+=6;goto B495ea7;
case 0x495eaa:c.instructions+=5;goto B495eaa;
case 0x495eab:c.instructions+=4;goto B495eab;
case 0x495eb0:c.instructions+=3;goto B495eb0;
case 0x495eb5:c.instructions+=2;goto B495eb5;
case 0x495eb6:c.instructions+=1;goto B495eb6;
case 0x495ebb:goto L495ebb;
case 0x495ebe:c.instructions+=3;goto B495ebe;
case 0x495ec1:c.instructions+=2;goto B495ec1;
case 0x495ec3:c.instructions+=1;goto B495ec3;
case 0x495ec8:goto L495ec8;
case 0x495ec9:c.instructions+=2;goto B495ec9;
case 0x495ece:c.instructions+=1;goto B495ece;
case 0x495ed3:goto L495ed3;
case 0x495ed6:c.instructions+=4;goto B495ed6;
case 0x495ed7:c.instructions+=3;goto B495ed7;
case 0x495edc:c.instructions+=2;goto B495edc;
case 0x495edd:c.instructions+=1;goto B495edd;
case 0x495ee2:goto L495ee2;
case 0x495ee5:c.instructions+=2;goto B495ee5;
case 0x495ee6:c.instructions+=1;goto B495ee6;
case 0x495eeb:goto L495eeb;
case 0x495eee:c.instructions+=5;goto B495eee;
case 0x495eef:c.instructions+=4;goto B495eef;
case 0x495ef0:c.instructions+=3;goto B495ef0;
case 0x495ef1:c.instructions+=2;goto B495ef1;
case 0x495ef7:c.instructions+=1;goto B495ef7;
case 0x495f00:goto L495f00;
case 0x495f04:c.instructions+=3;goto B495f04;
case 0x495f05:c.instructions+=2;goto B495f05;
case 0x495f08:c.instructions+=1;goto B495f08;
case 0x495f0a:goto L495f0a;
case 0x495f11:goto L495f11;
case 0x495f14:c.instructions+=2;goto B495f14;
case 0x495f16:c.instructions+=1;goto B495f16;
case 0x495f18:goto L495f18;
case 0x495f1d:c.instructions+=1;goto B495f1d;
case 0x495f20:goto L495f20;
case 0x495f23:c.instructions+=2;goto B495f23;
case 0x495f26:c.instructions+=1;goto B495f26;
case 0x495f28:goto L495f28;
case 0x495f2d:c.instructions+=1;goto B495f2d;
case 0x495f30:goto L495f30;
case 0x495f32:goto L495f32;
case 0x495f37:c.instructions+=1;goto B495f37;
case 0x495f3a:goto L495f3a;
case 0x495f3f:c.instructions+=1;goto B495f3f;
case 0x495f42:goto L495f42;
case 0x495f47:c.instructions+=1;goto B495f47;
case 0x495f4a:goto L495f4a;
case 0x495f4f:c.instructions+=1;goto B495f4f;
case 0x495f70:goto L495f70;
case 0x495f71:c.instructions+=5;goto B495f71;
case 0x495f73:c.instructions+=4;goto B495f73;
case 0x495f79:c.instructions+=3;goto B495f79;
case 0x495f7b:c.instructions+=2;goto B495f7b;
case 0x495f7c:c.instructions+=1;goto B495f7c;
case 0x495f7e:goto L495f7e;
case 0x495f81:c.instructions+=1;goto B495f81;
case 0x495f83:goto L495f83;
case 0x495f89:c.instructions+=3;goto B495f89;
case 0x495f8e:c.instructions+=2;goto B495f8e;
case 0x495f90:c.instructions+=1;goto B495f90;
case 0x495f92:goto L495f92;
case 0x495f94:goto L495f94;
case 0x495f96:c.instructions+=3;goto B495f96;
case 0x495f98:c.instructions+=2;goto B495f98;
case 0x495f9a:c.instructions+=1;goto B495f9a;
case 0x495f9f:goto L495f9f;
case 0x495fa1:c.instructions+=1;goto B495fa1;
case 0x495fa3:goto L495fa3;
case 0x495fa9:c.instructions+=2;goto B495fa9;
case 0x495fab:c.instructions+=1;goto B495fab;
case 0x495fad:goto L495fad;
case 0x495fb0:c.instructions+=3;goto B495fb0;
case 0x495fb6:c.instructions+=2;goto B495fb6;
case 0x495fb8:c.instructions+=1;goto B495fb8;
case 0x495fba:goto L495fba;
case 0x495fbd:goto L495fbd;
case 0x495fbe:c.instructions+=3;goto B495fbe;
case 0x495fc0:c.instructions+=2;goto B495fc0;
case 0x495fc2:c.instructions+=1;goto B495fc2;
case 0x495fc7:goto L495fc7;
case 0x495fc9:c.instructions+=1;goto B495fc9;
case 0x495fcb:goto L495fcb;
case 0x495fcc:c.instructions+=2;goto B495fcc;
case 0x495fcd:c.instructions+=1;goto B495fcd;
case 0x495fd0:goto L495fd0;
case 0x495fd6:c.instructions+=6;goto B495fd6;
case 0x495fd8:c.instructions+=5;goto B495fd8;
case 0x495fd9:c.instructions+=4;goto B495fd9;
case 0x495fda:c.instructions+=3;goto B495fda;
case 0x495fdb:c.instructions+=2;goto B495fdb;
case 0x495fdc:c.instructions+=1;goto B495fdc;
case 0x495fde:goto L495fde;
case 0x495fe1:c.instructions+=1;goto B495fe1;
case 0x495fe3:goto L495fe3;
case 0x495fe9:c.instructions+=3;goto B495fe9;
case 0x495fee:c.instructions+=2;goto B495fee;
case 0x495ff0:c.instructions+=1;goto B495ff0;
case 0x495ff2:goto L495ff2;
case 0x495ff4:goto L495ff4;
case 0x495ff6:c.instructions+=3;goto B495ff6;
case 0x495ff8:c.instructions+=2;goto B495ff8;
case 0x495ffa:c.instructions+=1;goto B495ffa;
case 0x495fff:goto L495fff;
default:missing_instruction(c.pc);}
B495000:L495000:{c.instructions+=6;NFSU2_TR(0x495000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495001:{NFSU2_TR(0x495001);
w4(R+0,u32(0x1ull));
}
B495006:{NFSU2_TR(0x495006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495007:{NFSU2_TR(0x495007);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49500a:{NFSU2_TR(0x49500a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49500b:{NFSU2_TR(0x49500b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49500c:L49500c:{c.instructions+=4;NFSU2_TR(0x49500c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49500e:{NFSU2_TR(0x49500e);
__builtin_memmove((R+4),(R+0),4);
}
B495010:{NFSU2_TR(0x495010);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495013:{NFSU2_TR(0x495013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495018ull));
TAIL_STATIC(0x48ff40u,48f);
}
B495018:L495018:{c.instructions+=7;NFSU2_TR(0x495018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B495019:{NFSU2_TR(0x495019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49501a:{NFSU2_TR(0x49501a);
w4(R+0,u32(0x1ull));
}
B49501f:{NFSU2_TR(0x49501f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495020:{NFSU2_TR(0x495020);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495023:{NFSU2_TR(0x495023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B495024:{NFSU2_TR(0x495024);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495025:L495025:{c.instructions+=7;NFSU2_TR(0x495025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495026:{NFSU2_TR(0x495026);
w4(R+0,u32(0x1ull));
}
B49502b:{NFSU2_TR(0x49502b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49502c:{NFSU2_TR(0x49502c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B495033:{NFSU2_TR(0x495033);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495036:{NFSU2_TR(0x495036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B495037:{NFSU2_TR(0x495037);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495038:L495038:{c.instructions+=5;NFSU2_TR(0x495038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495039:{NFSU2_TR(0x495039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49503a:{NFSU2_TR(0x49503a);
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
B49503c:{NFSU2_TR(0x49503c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49503d:{NFSU2_TR(0x49503d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495040:L495040:{c.instructions+=5;NFSU2_TR(0x495040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495044:{NFSU2_TR(0x495044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B495046:{NFSU2_TR(0x495046);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb3300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49504c:{NFSU2_TR(0x49504c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49504d:{NFSU2_TR(0x49504d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49508e;}}
}
B49504f:L49504f:{c.instructions+=6;NFSU2_TR(0x49504f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495052:{NFSU2_TR(0x495052);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495053:{NFSU2_TR(0x495053);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495056:{NFSU2_TR(0x495056);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B49505a:{NFSU2_TR(0x49505a);
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
B49505c:{NFSU2_TR(0x49505c);
if(r1(R+518)){{goto L495086;}}
}
B49505e:L49505e:{c.instructions+=1;NFSU2_TR(0x49505e);
__builtin_memmove((R+28),(R+28),4);
}
B495060:L495060:{c.instructions+=2;NFSU2_TR(0x495060);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xb3310000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B495066:{NFSU2_TR(0x495066);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49507b;}}
}
B495068:L495068:{c.instructions+=2;NFSU2_TR(0x495068);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495069:{NFSU2_TR(0x495069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49506eull));
TAIL_STATIC(0x494dd0u,494);
}
B49506e:L49506e:{c.instructions+=2;NFSU2_TR(0x49506e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B495071:{NFSU2_TR(0x495071);
s4(0x82db10,u32(0x0ull));
}
B49507b:L49507b:{c.instructions+=4;NFSU2_TR(0x49507b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49507e:{NFSU2_TR(0x49507e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B495082:{NFSU2_TR(0x495082);
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
B495084:{NFSU2_TR(0x495084);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495060u);}goto L495060;}}
}
B495086:L495086:{c.instructions+=4;NFSU2_TR(0x495086);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495087:{NFSU2_TR(0x495087);
w4(R+0,u32(0x1ull));
}
B49508c:{NFSU2_TR(0x49508c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49508d:{NFSU2_TR(0x49508d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49508e:L49508e:{c.instructions+=2;NFSU2_TR(0x49508e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb3320000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb3320000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb3320000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B495094:{NFSU2_TR(0x495094);
if(r1(R+518)){{goto L4950c1;}}
}
B495096:L495096:{c.instructions+=2;NFSU2_TR(0x495096);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb0300100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49509c:{NFSU2_TR(0x49509c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4950c8;}}
}
B49509e:L49509e:{c.instructions+=2;NFSU2_TR(0x49509e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B4950a2:{NFSU2_TR(0x4950a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4950c1;}}
}
B4950a4:L4950a4:{c.instructions+=3;NFSU2_TR(0x4950a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4950a7:{NFSU2_TR(0x4950a7);
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
B4950a9:{NFSU2_TR(0x4950a9);
if(r1(R+518)){{goto L4950c1;}}
}
B4950ab:L4950ab:{c.instructions+=2;NFSU2_TR(0x4950ab);
__builtin_memmove((R+4),(R+24),4);
}
B4950ad:{NFSU2_TR(0x4950ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4950b2ull));
TAIL_STATIC(0x48fed0u,48f);
}
B4950b2:L4950b2:{c.instructions+=4;NFSU2_TR(0x4950b2);
__builtin_memmove((R+0),gp(0x82db0c),4);
}
B4950b7:{NFSU2_TR(0x4950b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4950b8:{NFSU2_TR(0x4950b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4950b9:{NFSU2_TR(0x4950b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4950beull));
TAIL_STATIC(0x43f920u,43f);
}
B4950be:L4950be:{c.instructions+=1;NFSU2_TR(0x4950be);
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
B4950c1:L4950c1:{c.instructions+=3;NFSU2_TR(0x4950c1);
w4(R+0,u32(0x1ull));
}
B4950c6:{NFSU2_TR(0x4950c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4950c7:{NFSU2_TR(0x4950c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4950c8:L4950c8:{c.instructions+=3;NFSU2_TR(0x4950c8);
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
B4950ca:{NFSU2_TR(0x4950ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4950cb:{NFSU2_TR(0x4950cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4950d0:L4950d0:{c.instructions+=4;NFSU2_TR(0x4950d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4950d4:{NFSU2_TR(0x4950d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4950da:{NFSU2_TR(0x4950da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4950de:{NFSU2_TR(0x4950de);
TAIL_STATIC(0x494dd0u,494);
}
B4950f0:L4950f0:{c.instructions+=6;NFSU2_TR(0x4950f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4950f1:{NFSU2_TR(0x4950f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4950f2:{NFSU2_TR(0x4950f2);
__builtin_memmove((R+28),(R+4),4);
}
B4950f4:{NFSU2_TR(0x4950f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4950f6:{NFSU2_TR(0x4950f6);
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
B4950f8:{NFSU2_TR(0x4950f8);
if(r1(R+518)){{goto L495120;}}
}
B4950fa:L4950fa:{c.instructions+=1;NFSU2_TR(0x4950fa);
__builtin_memmove((R+12),(R+12),4);
}
B495100:L495100:{c.instructions+=6;NFSU2_TR(0x495100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495103:{NFSU2_TR(0x495103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B495105:{NFSU2_TR(0x495105);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B495107:{NFSU2_TR(0x495107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49510a:{NFSU2_TR(0x49510a);
__builtin_memmove((R+4),(R+24),4);
}
B49510c:{NFSU2_TR(0x49510c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495111ull));
TAIL_STATIC(0x494980u,494);
}
B495111:L495111:{c.instructions+=2;NFSU2_TR(0x495111);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495112:{NFSU2_TR(0x495112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495117ull));
TAIL_STATIC(0x575630u,575);
}
B495117:L495117:{c.instructions+=4;NFSU2_TR(0x495117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B495119:{NFSU2_TR(0x495119);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49511c:{NFSU2_TR(0x49511c);
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
B49511e:{NFSU2_TR(0x49511e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495100u);}goto L495100;}}
}
B495120:L495120:{c.instructions+=3;NFSU2_TR(0x495120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495121:{NFSU2_TR(0x495121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495122:{NFSU2_TR(0x495122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495130:L495130:{c.instructions+=5;NFSU2_TR(0x495130);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495131:{NFSU2_TR(0x495131);
__builtin_memmove((R+28),(R+4),4);
}
B495133:{NFSU2_TR(0x495133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B495135:{NFSU2_TR(0x495135);
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
B495137:{NFSU2_TR(0x495137);
if(r1(R+518)){{goto L495168;}}
}
B495139:L495139:{c.instructions+=2;NFSU2_TR(0x495139);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49513a:{NFSU2_TR(0x49513a);
__builtin_memmove((R+12),(R+12),4);
}
B495140:L495140:{c.instructions+=7;NFSU2_TR(0x495140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B495142:{NFSU2_TR(0x495142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495145:{NFSU2_TR(0x495145);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B495148:{NFSU2_TR(0x495148);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49514a:{NFSU2_TR(0x49514a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B49514c:{NFSU2_TR(0x49514c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49514f:{NFSU2_TR(0x49514f);
if(r1(R+518)){{goto L495161;}}
}
B495151:L495151:{c.instructions+=2;NFSU2_TR(0x495151);
__builtin_memmove((R+4),(R+24),4);
}
B495153:{NFSU2_TR(0x495153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495158ull));
TAIL_STATIC(0x4945b0u,494);
}
B495158:L495158:{c.instructions+=2;NFSU2_TR(0x495158);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495159:{NFSU2_TR(0x495159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49515eull));
TAIL_STATIC(0x575630u,575);
}
B49515e:L49515e:{c.instructions+=1;NFSU2_TR(0x49515e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B495161:L495161:{c.instructions+=3;NFSU2_TR(0x495161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B495163:{NFSU2_TR(0x495163);
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
B495165:{NFSU2_TR(0x495165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495140u);}goto L495140;}}
}
B495167:L495167:{c.instructions+=1;NFSU2_TR(0x495167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495168:L495168:{c.instructions+=2;NFSU2_TR(0x495168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495169:{NFSU2_TR(0x495169);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495170:L495170:{c.instructions+=6;NFSU2_TR(0x495170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495171:{NFSU2_TR(0x495171);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495172:{NFSU2_TR(0x495172);
__builtin_memmove((R+28),(R+4),4);
}
B495174:{NFSU2_TR(0x495174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B495176:{NFSU2_TR(0x495176);
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
B495178:{NFSU2_TR(0x495178);
if(r1(R+518)){{goto L4951a0;}}
}
B49517a:L49517a:{c.instructions+=1;NFSU2_TR(0x49517a);
__builtin_memmove((R+12),(R+12),4);
}
B495180:L495180:{c.instructions+=6;NFSU2_TR(0x495180);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495183:{NFSU2_TR(0x495183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B495185:{NFSU2_TR(0x495185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B495187:{NFSU2_TR(0x495187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49518a:{NFSU2_TR(0x49518a);
__builtin_memmove((R+4),(R+24),4);
}
B49518c:{NFSU2_TR(0x49518c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495191ull));
TAIL_STATIC(0x437ad0u,437);
}
B495191:L495191:{c.instructions+=2;NFSU2_TR(0x495191);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495192:{NFSU2_TR(0x495192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495197ull));
TAIL_STATIC(0x575630u,575);
}
B495197:L495197:{c.instructions+=4;NFSU2_TR(0x495197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B495199:{NFSU2_TR(0x495199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49519c:{NFSU2_TR(0x49519c);
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
B49519e:{NFSU2_TR(0x49519e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495180u);}goto L495180;}}
}
B4951a0:L4951a0:{c.instructions+=3;NFSU2_TR(0x4951a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4951a1:{NFSU2_TR(0x4951a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4951a2:{NFSU2_TR(0x4951a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4951b0:L4951b0:{c.instructions+=5;NFSU2_TR(0x4951b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4951b4:{NFSU2_TR(0x4951b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4951b7:{NFSU2_TR(0x4951b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4951b8:{NFSU2_TR(0x4951b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4951b9:{NFSU2_TR(0x4951b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4951beull));
TAIL_STATIC(0x5053b0u,505);
}
B4951be:L4951be:{c.instructions+=1;NFSU2_TR(0x4951be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4951d0:L4951d0:{c.instructions+=8;NFSU2_TR(0x4951d0);
__builtin_memmove((R+0),(R+4),4);
}
B4951d2:{NFSU2_TR(0x4951d2);
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
B4951d4:{NFSU2_TR(0x4951d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4951d6:{NFSU2_TR(0x4951d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4951d9:{NFSU2_TR(0x4951d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4951dc:{NFSU2_TR(0x4951dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4951df:{NFSU2_TR(0x4951df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4951e2:{NFSU2_TR(0x4951e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4951f0:L4951f0:{c.instructions+=3;NFSU2_TR(0x4951f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4951f2:{NFSU2_TR(0x4951f2);
u8 U[4];
w4(U+0,u32(0x10c98090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4951f7:{NFSU2_TR(0x4951f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4951fcull));
TAIL_STATIC(0x61b500u,61b);
}
B4951fc:L4951fc:{c.instructions+=1;NFSU2_TR(0x4951fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495200:L495200:{c.instructions+=6;NFSU2_TR(0x495200);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495204:{NFSU2_TR(0x495204);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495206:{NFSU2_TR(0x495206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495207:{NFSU2_TR(0x495207);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B49520a:{NFSU2_TR(0x49520a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49520b:{NFSU2_TR(0x49520b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495210ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495210:L495210:{c.instructions+=2;NFSU2_TR(0x495210);
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
B495213:{NFSU2_TR(0x495213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495220:L495220:{c.instructions+=6;NFSU2_TR(0x495220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495224:{NFSU2_TR(0x495224);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495226:{NFSU2_TR(0x495226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495227:{NFSU2_TR(0x495227);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x29ull))));
}
B49522a:{NFSU2_TR(0x49522a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49522b:{NFSU2_TR(0x49522b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495230ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495230:L495230:{c.instructions+=2;NFSU2_TR(0x495230);
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
B495233:{NFSU2_TR(0x495233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495240:L495240:{c.instructions+=3;NFSU2_TR(0x495240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495244:{NFSU2_TR(0x495244);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B495246:{NFSU2_TR(0x495246);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L49525d;}}
}
B495248:L495248:{c.instructions+=2;NFSU2_TR(0x495248);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49524b:{NFSU2_TR(0x49524b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L49525d;}}
}
B49524d:L49524d:{c.instructions+=3;NFSU2_TR(0x49524d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0xab4cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B495253:{NFSU2_TR(0x495253);
u8 U[12];
w4(U+0,u32(u32(u32(0x3c0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B49525a:{NFSU2_TR(0x49525a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49525d:L49525d:{c.instructions+=2;NFSU2_TR(0x49525d);
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
B49525f:{NFSU2_TR(0x49525f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495270:L495270:{c.instructions+=3;NFSU2_TR(0x495270);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495276:{NFSU2_TR(0x495276);
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
B495278:{NFSU2_TR(0x495278);
if(r1(R+518)){{goto L495281;}}
}
B49527a:L49527a:{c.instructions+=2;NFSU2_TR(0x49527a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495280:{NFSU2_TR(0x495280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495281:L495281:{c.instructions+=2;NFSU2_TR(0x495281);
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
B495283:{NFSU2_TR(0x495283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495290:L495290:{c.instructions+=3;NFSU2_TR(0x495290);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495296:{NFSU2_TR(0x495296);
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
B495298:{NFSU2_TR(0x495298);
if(r1(R+518)){{goto L4952a1;}}
}
B49529a:L49529a:{c.instructions+=2;NFSU2_TR(0x49529a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8714ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4952a0:{NFSU2_TR(0x4952a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4952a1:L4952a1:{c.instructions+=2;NFSU2_TR(0x4952a1);
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
B4952a3:{NFSU2_TR(0x4952a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4952b0:L4952b0:{c.instructions+=1;NFSU2_TR(0x4952b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4952b5ull));
TAIL_STATIC(0x501100u,501);
}
B4952b5:L4952b5:{c.instructions+=5;NFSU2_TR(0x4952b5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B4952b8:{NFSU2_TR(0x4952b8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4952ba:{NFSU2_TR(0x4952ba);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4952bc:{NFSU2_TR(0x4952bc);
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
B4952bd:{NFSU2_TR(0x4952bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4952c0:L4952c0:{c.instructions+=19;NFSU2_TR(0x4952c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4952c4:{NFSU2_TR(0x4952c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4952c8:{NFSU2_TR(0x4952c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4952c9:{NFSU2_TR(0x4952c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4952ca:{NFSU2_TR(0x4952ca);
__builtin_memmove((R+24),(R+4),4);
}
B4952cc:{NFSU2_TR(0x4952cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4952d0:{NFSU2_TR(0x4952d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4952d3:{NFSU2_TR(0x4952d3);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4952d7:{NFSU2_TR(0x4952d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4952da:{NFSU2_TR(0x4952da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4952de:{NFSU2_TR(0x4952de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4952e1:{NFSU2_TR(0x4952e1);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4952e5:{NFSU2_TR(0x4952e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4952e8:{NFSU2_TR(0x4952e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4952ec:{NFSU2_TR(0x4952ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4952ee:{NFSU2_TR(0x4952ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4952f0:{NFSU2_TR(0x4952f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4952f3:{NFSU2_TR(0x4952f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4952f6:{NFSU2_TR(0x4952f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4952fd;}}
}
B4952f8:L4952f8:{c.instructions+=1;NFSU2_TR(0x4952f8);
w4(R+0,u32(0x783fe5ull));
}
B4952fd:L4952fd:{c.instructions+=4;NFSU2_TR(0x4952fd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4952ff:{NFSU2_TR(0x4952ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495300:{NFSU2_TR(0x495300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495301:{NFSU2_TR(0x495301);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495306ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495306:L495306:{c.instructions+=5;NFSU2_TR(0x495306);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49530a:{NFSU2_TR(0x49530a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49530d:{NFSU2_TR(0x49530d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49530f:{NFSU2_TR(0x49530f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495312:{NFSU2_TR(0x495312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495319;}}
}
B495314:L495314:{c.instructions+=1;NFSU2_TR(0x495314);
w4(R+0,u32(0x783fe5ull));
}
B495319:L495319:{c.instructions+=5;NFSU2_TR(0x495319);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49531b:{NFSU2_TR(0x49531b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49531c:{NFSU2_TR(0x49531c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49531f:{NFSU2_TR(0x49531f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495320:{NFSU2_TR(0x495320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495325ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495325:L495325:{c.instructions+=5;NFSU2_TR(0x495325);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495329:{NFSU2_TR(0x495329);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49532c:{NFSU2_TR(0x49532c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49532e:{NFSU2_TR(0x49532e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495331:{NFSU2_TR(0x495331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495338;}}
}
B495333:L495333:{c.instructions+=1;NFSU2_TR(0x495333);
w4(R+0,u32(0x783fe5ull));
}
B495338:L495338:{c.instructions+=5;NFSU2_TR(0x495338);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49533a:{NFSU2_TR(0x49533a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49533b:{NFSU2_TR(0x49533b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49533e:{NFSU2_TR(0x49533e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49533f:{NFSU2_TR(0x49533f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495344ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495344:L495344:{c.instructions+=5;NFSU2_TR(0x495344);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495348:{NFSU2_TR(0x495348);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49534b:{NFSU2_TR(0x49534b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49534d:{NFSU2_TR(0x49534d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495350:{NFSU2_TR(0x495350);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495357;}}
}
B495352:L495352:{c.instructions+=1;NFSU2_TR(0x495352);
w4(R+0,u32(0x783fe5ull));
}
B495357:L495357:{c.instructions+=5;NFSU2_TR(0x495357);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495359:{NFSU2_TR(0x495359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49535a:{NFSU2_TR(0x49535a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bull))));
__builtin_memmove((R+8),(U+0),4);
}
B49535d:{NFSU2_TR(0x49535d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49535e:{NFSU2_TR(0x49535e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495363ull));
TAIL_STATIC(0x43dc00u,43d);
}
B495363:L495363:{c.instructions+=6;NFSU2_TR(0x495363);
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
B495366:{NFSU2_TR(0x495366);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49536c:{NFSU2_TR(0x49536c);
__builtin_memmove((R+0),(R+24),4);
}
B49536e:{NFSU2_TR(0x49536e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49536f:{NFSU2_TR(0x49536f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B495370:{NFSU2_TR(0x495370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495380:L495380:{c.instructions+=3;NFSU2_TR(0x495380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495383:{NFSU2_TR(0x495383);
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
B495385:{NFSU2_TR(0x495385);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495388;}}
}
B495387:L495387:{c.instructions+=1;NFSU2_TR(0x495387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495388:L495388:{c.instructions+=2;NFSU2_TR(0x495388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495389:{NFSU2_TR(0x495389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49538eull));
TAIL_STATIC(0x73d8d0u,73d);
}
B49538e:L49538e:{c.instructions+=2;NFSU2_TR(0x49538e);
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
B495391:{NFSU2_TR(0x495391);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4953a0:L4953a0:{c.instructions+=3;NFSU2_TR(0x4953a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4953a4:{NFSU2_TR(0x4953a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4953a5:{NFSU2_TR(0x4953a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4953aaull));
TAIL_STATIC(0x505450u,505);
}
B4953aa:L4953aa:{c.instructions+=3;NFSU2_TR(0x4953aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4953ad:{NFSU2_TR(0x4953ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4953b1:{NFSU2_TR(0x4953b1);
TAIL_STATIC(0x5379c0u,537);
}
B4953c0:L4953c0:{c.instructions+=3;NFSU2_TR(0x4953c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4953c4:{NFSU2_TR(0x4953c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4953c5:{NFSU2_TR(0x4953c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4953caull));
TAIL_STATIC(0x505450u,505);
}
B4953ca:L4953ca:{c.instructions+=3;NFSU2_TR(0x4953ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4953cd:{NFSU2_TR(0x4953cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4953d1:{NFSU2_TR(0x4953d1);
TAIL_STATIC(0x537a10u,537);
}
B4953e0:L4953e0:{c.instructions+=3;NFSU2_TR(0x4953e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4953e4:{NFSU2_TR(0x4953e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4953e5:{NFSU2_TR(0x4953e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4953eaull));
TAIL_STATIC(0x505450u,505);
}
B4953ea:L4953ea:{c.instructions+=3;NFSU2_TR(0x4953ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4953ed:{NFSU2_TR(0x4953ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4953f1:{NFSU2_TR(0x4953f1);
TAIL_STATIC(0x537a60u,537);
}
B495400:L495400:{c.instructions+=5;NFSU2_TR(0x495400);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495404:{NFSU2_TR(0x495404);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495408:{NFSU2_TR(0x495408);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495409:{NFSU2_TR(0x495409);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49540a:{NFSU2_TR(0x49540a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49540full));
TAIL_STATIC(0x505450u,505);
}
B49540f:L49540f:{c.instructions+=4;NFSU2_TR(0x49540f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495413:{NFSU2_TR(0x495413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495414:{NFSU2_TR(0x495414);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495415:{NFSU2_TR(0x495415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49541aull));
TAIL_STATIC(0x537a60u,537);
}
B49541a:L49541a:{c.instructions+=3;NFSU2_TR(0x49541a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49541d:{NFSU2_TR(0x49541d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49541e:{NFSU2_TR(0x49541e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495423ull));
TAIL_STATIC(0x50c990u,50c);
}
B495423:L495423:{c.instructions+=2;NFSU2_TR(0x495423);
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
B495426:{NFSU2_TR(0x495426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495430:L495430:{c.instructions+=7;NFSU2_TR(0x495430);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495434:{NFSU2_TR(0x495434);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495438:{NFSU2_TR(0x495438);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49543c:{NFSU2_TR(0x49543c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49543d:{NFSU2_TR(0x49543d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49543e:{NFSU2_TR(0x49543e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49543f:{NFSU2_TR(0x49543f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495444ull));
TAIL_STATIC(0x537a60u,537);
}
B495444:L495444:{c.instructions+=3;NFSU2_TR(0x495444);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495447:{NFSU2_TR(0x495447);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495448:{NFSU2_TR(0x495448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49544dull));
TAIL_STATIC(0x50c990u,50c);
}
B49544d:L49544d:{c.instructions+=2;NFSU2_TR(0x49544d);
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
B495450:{NFSU2_TR(0x495450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495460:L495460:{c.instructions+=7;NFSU2_TR(0x495460);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495464:{NFSU2_TR(0x495464);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495468:{NFSU2_TR(0x495468);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49546c:{NFSU2_TR(0x49546c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49546d:{NFSU2_TR(0x49546d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49546e:{NFSU2_TR(0x49546e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49546f:{NFSU2_TR(0x49546f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495474ull));
TAIL_STATIC(0x537a10u,537);
}
B495474:L495474:{c.instructions+=3;NFSU2_TR(0x495474);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495477:{NFSU2_TR(0x495477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495478:{NFSU2_TR(0x495478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49547dull));
TAIL_STATIC(0x50c900u,50c);
}
B49547d:L49547d:{c.instructions+=2;NFSU2_TR(0x49547d);
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
B495480:{NFSU2_TR(0x495480);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495490:L495490:{c.instructions+=5;NFSU2_TR(0x495490);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495494:{NFSU2_TR(0x495494);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495498:{NFSU2_TR(0x495498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495499:{NFSU2_TR(0x495499);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49549a:{NFSU2_TR(0x49549a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49549full));
TAIL_STATIC(0x505450u,505);
}
B49549f:L49549f:{c.instructions+=4;NFSU2_TR(0x49549f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4954a3:{NFSU2_TR(0x4954a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954a4:{NFSU2_TR(0x4954a4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954a5:{NFSU2_TR(0x4954a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954aaull));
TAIL_STATIC(0x537a10u,537);
}
B4954aa:L4954aa:{c.instructions+=3;NFSU2_TR(0x4954aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4954ad:{NFSU2_TR(0x4954ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954ae:{NFSU2_TR(0x4954ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954b3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4954b3:L4954b3:{c.instructions+=2;NFSU2_TR(0x4954b3);
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
B4954b6:{NFSU2_TR(0x4954b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4954c0:L4954c0:{c.instructions+=3;NFSU2_TR(0x4954c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4954c4:{NFSU2_TR(0x4954c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954c5:{NFSU2_TR(0x4954c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954caull));
TAIL_STATIC(0x505450u,505);
}
B4954ca:L4954ca:{c.instructions+=4;NFSU2_TR(0x4954ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4954ce:{NFSU2_TR(0x4954ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954cf:{NFSU2_TR(0x4954cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954d0:{NFSU2_TR(0x4954d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954d5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4954d5:L4954d5:{c.instructions+=2;NFSU2_TR(0x4954d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954d6:{NFSU2_TR(0x4954d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954dbull));
TAIL_STATIC(0x50ca00u,50c);
}
B4954db:L4954db:{c.instructions+=2;NFSU2_TR(0x4954db);
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
B4954de:{NFSU2_TR(0x4954de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4954e0:L4954e0:{c.instructions+=5;NFSU2_TR(0x4954e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4954e4:{NFSU2_TR(0x4954e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4954e8:{NFSU2_TR(0x4954e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954e9:{NFSU2_TR(0x4954e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954ea:{NFSU2_TR(0x4954ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954efull));
TAIL_STATIC(0x5379c0u,537);
}
B4954ef:L4954ef:{c.instructions+=2;NFSU2_TR(0x4954ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4954f0:{NFSU2_TR(0x4954f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4954f5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4954f5:L4954f5:{c.instructions+=2;NFSU2_TR(0x4954f5);
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
B4954f8:{NFSU2_TR(0x4954f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495500:L495500:{c.instructions+=3;NFSU2_TR(0x495500);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495504:{NFSU2_TR(0x495504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495505:{NFSU2_TR(0x495505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49550aull));
TAIL_STATIC(0x505450u,505);
}
B49550a:L49550a:{c.instructions+=4;NFSU2_TR(0x49550a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49550e:{NFSU2_TR(0x49550e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49550f:{NFSU2_TR(0x49550f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495510:{NFSU2_TR(0x495510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495515ull));
TAIL_STATIC(0x5379c0u,537);
}
B495515:L495515:{c.instructions+=2;NFSU2_TR(0x495515);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495516:{NFSU2_TR(0x495516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49551bull));
TAIL_STATIC(0x50ca50u,50c);
}
B49551b:L49551b:{c.instructions+=2;NFSU2_TR(0x49551b);
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
B49551e:{NFSU2_TR(0x49551e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495520:L495520:{c.instructions+=5;NFSU2_TR(0x495520);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495524:{NFSU2_TR(0x495524);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495528:{NFSU2_TR(0x495528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495529:{NFSU2_TR(0x495529);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49552a:{NFSU2_TR(0x49552a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49552full));
TAIL_STATIC(0x5379c0u,537);
}
B49552f:L49552f:{c.instructions+=2;NFSU2_TR(0x49552f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495530:{NFSU2_TR(0x495530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495535ull));
TAIL_STATIC(0x50ca50u,50c);
}
B495535:L495535:{c.instructions+=2;NFSU2_TR(0x495535);
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
B495538:{NFSU2_TR(0x495538);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495540:L495540:{c.instructions+=9;NFSU2_TR(0x495540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B495543:{NFSU2_TR(0x495543);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495544:{NFSU2_TR(0x495544);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B495548:{NFSU2_TR(0x495548);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49554c:{NFSU2_TR(0x49554c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49554d:{NFSU2_TR(0x49554d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B495551:{NFSU2_TR(0x495551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495552:{NFSU2_TR(0x495552);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495553:{NFSU2_TR(0x495553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495558ull));
TAIL_STATIC(0x51d070u,51d);
}
B495558:L495558:{c.instructions+=6;NFSU2_TR(0x495558);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49555c:{NFSU2_TR(0x49555c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495560:{NFSU2_TR(0x495560);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495561:{NFSU2_TR(0x495561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495562:{NFSU2_TR(0x495562);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495563:{NFSU2_TR(0x495563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495568ull));
TAIL_STATIC(0x51d380u,51d);
}
B495568:L495568:{c.instructions+=4;NFSU2_TR(0x495568);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B49556b:{NFSU2_TR(0x49556b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49556c:{NFSU2_TR(0x49556c);
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
B49556f:{NFSU2_TR(0x49556f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495570:L495570:{c.instructions+=6;NFSU2_TR(0x495570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495574:{NFSU2_TR(0x495574);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B495577:{NFSU2_TR(0x495577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495578:{NFSU2_TR(0x495578);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49557c:{NFSU2_TR(0x49557c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49557d:{NFSU2_TR(0x49557d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495582ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B495582:L495582:{c.instructions+=3;NFSU2_TR(0x495582);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495585:{NFSU2_TR(0x495585);
__builtin_memmove((R+4),(R+0),4);
}
B495587:{NFSU2_TR(0x495587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49558cull));
TAIL_STATIC(0x5054d0u,505);
}
B49558c:L49558c:{c.instructions+=2;NFSU2_TR(0x49558c);
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
B49558f:{NFSU2_TR(0x49558f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495590:L495590:{c.instructions+=9;NFSU2_TR(0x495590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B495593:{NFSU2_TR(0x495593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495594:{NFSU2_TR(0x495594);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B495598:{NFSU2_TR(0x495598);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49559c:{NFSU2_TR(0x49559c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49559d:{NFSU2_TR(0x49559d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4955a1:{NFSU2_TR(0x4955a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955a2:{NFSU2_TR(0x4955a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955a3:{NFSU2_TR(0x4955a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4955a8ull));
TAIL_STATIC(0x51d730u,51d);
}
B4955a8:L4955a8:{c.instructions+=6;NFSU2_TR(0x4955a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4955ac:{NFSU2_TR(0x4955ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4955b0:{NFSU2_TR(0x4955b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955b1:{NFSU2_TR(0x4955b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955b2:{NFSU2_TR(0x4955b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955b3:{NFSU2_TR(0x4955b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4955b8ull));
TAIL_STATIC(0x50cb00u,50c);
}
B4955b8:L4955b8:{c.instructions+=4;NFSU2_TR(0x4955b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4955bb:{NFSU2_TR(0x4955bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4955bc:{NFSU2_TR(0x4955bc);
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
B4955bf:{NFSU2_TR(0x4955bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4955c0:L4955c0:{c.instructions+=7;NFSU2_TR(0x4955c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4955c4:{NFSU2_TR(0x4955c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4955c8:{NFSU2_TR(0x4955c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4955cc:{NFSU2_TR(0x4955cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955cd:{NFSU2_TR(0x4955cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955ce:{NFSU2_TR(0x4955ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955cf:{NFSU2_TR(0x4955cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4955d4ull));
TAIL_STATIC(0x5379c0u,537);
}
B4955d4:L4955d4:{c.instructions+=3;NFSU2_TR(0x4955d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4955d7:{NFSU2_TR(0x4955d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4955d8:{NFSU2_TR(0x4955d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4955ddull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4955dd:L4955dd:{c.instructions+=2;NFSU2_TR(0x4955dd);
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
B4955e0:{NFSU2_TR(0x4955e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4955f0:L4955f0:{c.instructions+=11;NFSU2_TR(0x4955f0);
__builtin_memmove((R+0),(R+4),4);
}
B4955f2:{NFSU2_TR(0x4955f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4955f6:{NFSU2_TR(0x4955f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4955f8:{NFSU2_TR(0x4955f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4955fa:{NFSU2_TR(0x4955fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4955fd:{NFSU2_TR(0x4955fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495600:{NFSU2_TR(0x495600);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495603:{NFSU2_TR(0x495603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495606:{NFSU2_TR(0x495606);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495609:{NFSU2_TR(0x495609);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49560c:{NFSU2_TR(0x49560c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495610:L495610:{c.instructions+=6;NFSU2_TR(0x495610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495614:{NFSU2_TR(0x495614);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495617:{NFSU2_TR(0x495617);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B49561a:{NFSU2_TR(0x49561a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49561b:{NFSU2_TR(0x49561b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49561c:{NFSU2_TR(0x49561c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495621ull));
TAIL_STATIC(0x5053b0u,505);
}
B495621:L495621:{c.instructions+=1;NFSU2_TR(0x495621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495630:L495630:{c.instructions+=11;NFSU2_TR(0x495630);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495632:{NFSU2_TR(0x495632);
u8 U[4];
w4(U+0,u32(0x772888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495637:{NFSU2_TR(0x495637);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49563d:{NFSU2_TR(0x49563d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49563e:{NFSU2_TR(0x49563e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495645:{NFSU2_TR(0x495645);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495646:{NFSU2_TR(0x495646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495647:{NFSU2_TR(0x495647);
__builtin_memmove((R+24),(R+4),4);
}
B495649:{NFSU2_TR(0x495649);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49564a:{NFSU2_TR(0x49564a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49564e:{NFSU2_TR(0x49564e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495653ull));
TAIL_STATIC(0x52af20u,52a);
}
B495653:L495653:{c.instructions+=7;NFSU2_TR(0x495653);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B495655:{NFSU2_TR(0x495655);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B495658:{NFSU2_TR(0x495658);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49565c:{NFSU2_TR(0x49565c);
u8 U[4];
w4(U+0,u32(0x78f53cull));
s4(u32(r4(R+24)),r4(U+0));
}
B495662:{NFSU2_TR(0x495662);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495665:{NFSU2_TR(0x495665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49566c:{NFSU2_TR(0x49566c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495671ull));
TAIL_STATIC(0x51de80u,51d);
}
B495671:L495671:{c.instructions+=11;NFSU2_TR(0x495671);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495675:{NFSU2_TR(0x495675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495678:{NFSU2_TR(0x495678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49567b:{NFSU2_TR(0x49567b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49567e:{NFSU2_TR(0x49567e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B495685:{NFSU2_TR(0x495685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495686:{NFSU2_TR(0x495686);
__builtin_memmove((R+0),(R+24),4);
}
B495688:{NFSU2_TR(0x495688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495689:{NFSU2_TR(0x495689);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495690:{NFSU2_TR(0x495690);
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
B495693:{NFSU2_TR(0x495693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4956a0:L4956a0:{c.instructions+=14;NFSU2_TR(0x4956a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956a2:{NFSU2_TR(0x4956a2);
u8 U[4];
w4(U+0,u32(0x7728b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956a7:{NFSU2_TR(0x4956a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4956ad:{NFSU2_TR(0x4956ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956ae:{NFSU2_TR(0x4956ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4956b5:{NFSU2_TR(0x4956b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956b6:{NFSU2_TR(0x4956b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956b7:{NFSU2_TR(0x4956b7);
__builtin_memmove((R+24),(R+4),4);
}
B4956b9:{NFSU2_TR(0x4956b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4956bd:{NFSU2_TR(0x4956bd);
u8 U[4];
w4(U+0,u32(0x78f53cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4956c3:{NFSU2_TR(0x4956c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4956c6:{NFSU2_TR(0x4956c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4956c7:{NFSU2_TR(0x4956c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4956cf:{NFSU2_TR(0x4956cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4956d4ull));
TAIL_STATIC(0x575630u,575);
}
B4956d4:L4956d4:{c.instructions+=4;NFSU2_TR(0x4956d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4956d7:{NFSU2_TR(0x4956d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4956da:{NFSU2_TR(0x4956da);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4956df:{NFSU2_TR(0x4956df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4956e4ull));
TAIL_STATIC(0x50d390u,50d);
}
B4956e4:L4956e4:{c.instructions+=3;NFSU2_TR(0x4956e4);
__builtin_memmove((R+4),(R+24),4);
}
B4956e6:{NFSU2_TR(0x4956e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4956ee:{NFSU2_TR(0x4956ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4956f3ull));
TAIL_STATIC(0x52af90u,52a);
}
B4956f3:L4956f3:{c.instructions+=5;NFSU2_TR(0x4956f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4956f7:{NFSU2_TR(0x4956f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4956f8:{NFSU2_TR(0x4956f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4956ff:{NFSU2_TR(0x4956ff);
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
B495702:{NFSU2_TR(0x495702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495710:L495710:{c.instructions+=10;NFSU2_TR(0x495710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495712:{NFSU2_TR(0x495712);
u8 U[4];
w4(U+0,u32(0x7728cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495717:{NFSU2_TR(0x495717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49571d:{NFSU2_TR(0x49571d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49571e:{NFSU2_TR(0x49571e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495725:{NFSU2_TR(0x495725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495726:{NFSU2_TR(0x495726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495727:{NFSU2_TR(0x495727);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495729:{NFSU2_TR(0x495729);
__builtin_memmove((R+24),(R+4),4);
}
B49572b:{NFSU2_TR(0x49572b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495730ull));
TAIL_STATIC(0x575620u,575);
}
B495730:L495730:{c.instructions+=5;NFSU2_TR(0x495730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B495733:{NFSU2_TR(0x495733);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495737:{NFSU2_TR(0x495737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B495739:{NFSU2_TR(0x495739);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B495741:{NFSU2_TR(0x495741);
if(r1(R+518)){{goto L495762;}}
}
B495743:L495743:{c.instructions+=5;NFSU2_TR(0x495743);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495747:{NFSU2_TR(0x495747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495748:{NFSU2_TR(0x495748);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495749:{NFSU2_TR(0x495749);
__builtin_memmove((R+4),(R+0),4);
}
B49574b:{NFSU2_TR(0x49574b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495750ull));
TAIL_STATIC(0x554970u,554);
}
B495750:L495750:{c.instructions+=5;NFSU2_TR(0x495750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495751:{NFSU2_TR(0x495751);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495755:{NFSU2_TR(0x495755);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49575c:{NFSU2_TR(0x49575c);
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
B49575f:{NFSU2_TR(0x49575f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495762:L495762:{c.instructions+=6;NFSU2_TR(0x495762);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495766:{NFSU2_TR(0x495766);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B495768:{NFSU2_TR(0x495768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495769:{NFSU2_TR(0x495769);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495770:{NFSU2_TR(0x495770);
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
B495773:{NFSU2_TR(0x495773);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495780:L495780:{c.instructions+=3;NFSU2_TR(0x495780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495781:{NFSU2_TR(0x495781);
__builtin_memmove((R+24),(R+4),4);
}
B495783:{NFSU2_TR(0x495783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495788ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4956a0u);}goto L4956a0;}
}
B495788:L495788:{c.instructions+=2;NFSU2_TR(0x495788);
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
B49578d:{NFSU2_TR(0x49578d);
if(r1(R+518)){{goto L495798;}}
}
B49578f:L49578f:{c.instructions+=2;NFSU2_TR(0x49578f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495790:{NFSU2_TR(0x495790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495795ull));
TAIL_STATIC(0x575630u,575);
}
B495795:L495795:{c.instructions+=1;NFSU2_TR(0x495795);
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
B495798:L495798:{c.instructions+=3;NFSU2_TR(0x495798);
__builtin_memmove((R+0),(R+24),4);
}
B49579a:{NFSU2_TR(0x49579a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49579b:{NFSU2_TR(0x49579b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4957a0:L4957a0:{c.instructions+=2;NFSU2_TR(0x4957a0);
u8 U[4];
w4(U+0,u32(0x78f544ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4957a6:{NFSU2_TR(0x4957a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4957b0:L4957b0:{c.instructions+=5;NFSU2_TR(0x4957b0);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B4957b5:{NFSU2_TR(0x4957b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4957b6:{NFSU2_TR(0x4957b6);
__builtin_memmove((R+24),(R+4),4);
}
B4957b8:{NFSU2_TR(0x4957b8);
u8 U[4];
w4(U+0,u32(0x78f544ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4957be:{NFSU2_TR(0x4957be);
if(r1(R+518)){{goto L4957c9;}}
}
B4957c0:L4957c0:{c.instructions+=2;NFSU2_TR(0x4957c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4957c1:{NFSU2_TR(0x4957c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4957c6ull));
TAIL_STATIC(0x575630u,575);
}
B4957c6:L4957c6:{c.instructions+=1;NFSU2_TR(0x4957c6);
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
B4957c9:L4957c9:{c.instructions+=3;NFSU2_TR(0x4957c9);
__builtin_memmove((R+0),(R+24),4);
}
B4957cb:{NFSU2_TR(0x4957cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4957cc:{NFSU2_TR(0x4957cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4957d0:L4957d0:{c.instructions+=6;NFSU2_TR(0x4957d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4957d4:{NFSU2_TR(0x4957d4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4957d9:{NFSU2_TR(0x4957d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4957da:{NFSU2_TR(0x4957da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B4957dd:{NFSU2_TR(0x4957dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4957de:{NFSU2_TR(0x4957de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4957e3ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4957e3:L4957e3:{c.instructions+=2;NFSU2_TR(0x4957e3);
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
B4957e6:{NFSU2_TR(0x4957e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4957f0:L4957f0:{c.instructions+=7;NFSU2_TR(0x4957f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4957f4:{NFSU2_TR(0x4957f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4957f8:{NFSU2_TR(0x4957f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4957fb:{NFSU2_TR(0x4957fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4957ff:{NFSU2_TR(0x4957ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495802:{NFSU2_TR(0x495802);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495805:{NFSU2_TR(0x495805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49580aull));
TAIL_STATIC(0x538060u,538);
}
B49580a:L49580a:{c.instructions+=1;NFSU2_TR(0x49580a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495810:L495810:{c.instructions+=5;NFSU2_TR(0x495810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495811:{NFSU2_TR(0x495811);
__builtin_memmove((R+24),(R+4),4);
}
B495813:{NFSU2_TR(0x495813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495816:{NFSU2_TR(0x495816);
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
B495818:{NFSU2_TR(0x495818);
if(r1(R+518)){{goto L49583f;}}
}
B49581a:L49581a:{c.instructions+=3;NFSU2_TR(0x49581a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49581f:{NFSU2_TR(0x49581f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495820:{NFSU2_TR(0x495820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495825ull));
TAIL_STATIC(0x51d040u,51d);
}
B495825:L495825:{c.instructions+=3;NFSU2_TR(0x495825);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495828:{NFSU2_TR(0x495828);
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
B49582a:{NFSU2_TR(0x49582a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49583f;}}
}
B49582c:L49582c:{c.instructions+=5;NFSU2_TR(0x49582c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49582f:{NFSU2_TR(0x49582f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495831:{NFSU2_TR(0x495831);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495836:{NFSU2_TR(0x495836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495837:{NFSU2_TR(0x495837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49583cull));
TAIL_STATIC(0x51cf70u,51c);
}
B49583c:L49583c:{c.instructions+=1;NFSU2_TR(0x49583c);
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
B49583f:L49583f:{c.instructions+=2;NFSU2_TR(0x49583f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495840:{NFSU2_TR(0x495840);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495850:L495850:{c.instructions+=5;NFSU2_TR(0x495850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495851:{NFSU2_TR(0x495851);
__builtin_memmove((R+24),(R+4),4);
}
B495853:{NFSU2_TR(0x495853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495856:{NFSU2_TR(0x495856);
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
B495858:{NFSU2_TR(0x495858);
if(r1(R+518)){{goto L49587f;}}
}
B49585a:L49585a:{c.instructions+=3;NFSU2_TR(0x49585a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49585f:{NFSU2_TR(0x49585f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495860:{NFSU2_TR(0x495860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495865ull));
TAIL_STATIC(0x51d040u,51d);
}
B495865:L495865:{c.instructions+=3;NFSU2_TR(0x495865);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495868:{NFSU2_TR(0x495868);
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
B49586a:{NFSU2_TR(0x49586a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49587f;}}
}
B49586c:L49586c:{c.instructions+=5;NFSU2_TR(0x49586c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49586f:{NFSU2_TR(0x49586f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495871:{NFSU2_TR(0x495871);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495876:{NFSU2_TR(0x495876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495877:{NFSU2_TR(0x495877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49587cull));
TAIL_STATIC(0x51cf70u,51c);
}
B49587c:L49587c:{c.instructions+=1;NFSU2_TR(0x49587c);
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
B49587f:L49587f:{c.instructions+=2;NFSU2_TR(0x49587f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495880:{NFSU2_TR(0x495880);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495890:L495890:{c.instructions+=5;NFSU2_TR(0x495890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495891:{NFSU2_TR(0x495891);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495893:{NFSU2_TR(0x495893);
u8 U[4];
w4(U+0,u32(0x78f570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495898:{NFSU2_TR(0x495898);
__builtin_memmove((R+24),(R+4),4);
}
B49589a:{NFSU2_TR(0x49589a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49589full));
TAIL_STATIC(0x51ee80u,51e);
}
B49589f:L49589f:{c.instructions+=3;NFSU2_TR(0x49589f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4958a3:{NFSU2_TR(0x4958a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4958a4:{NFSU2_TR(0x4958a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4958b0:L4958b0:{c.instructions+=3;NFSU2_TR(0x4958b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4958b3:{NFSU2_TR(0x4958b3);
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
B4958b5:{NFSU2_TR(0x4958b5);
if(r1(R+518)){{goto L4958c5;}}
}
B4958b7:L4958b7:{c.instructions+=4;NFSU2_TR(0x4958b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4958ba:{NFSU2_TR(0x4958ba);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4958bf:{NFSU2_TR(0x4958bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4958c0:{NFSU2_TR(0x4958c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4958c5ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4958c5:L4958c5:{c.instructions+=1;NFSU2_TR(0x4958c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4958d0:L4958d0:{c.instructions+=3;NFSU2_TR(0x4958d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4958d3:{NFSU2_TR(0x4958d3);
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
B4958d5:{NFSU2_TR(0x4958d5);
if(r1(R+518)){{goto L4958e5;}}
}
B4958d7:L4958d7:{c.instructions+=4;NFSU2_TR(0x4958d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4958da:{NFSU2_TR(0x4958da);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4958df:{NFSU2_TR(0x4958df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4958e0:{NFSU2_TR(0x4958e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4958e5ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4958e5:L4958e5:{c.instructions+=1;NFSU2_TR(0x4958e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4958f0:L4958f0:{c.instructions+=2;NFSU2_TR(0x4958f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4958f2:{NFSU2_TR(0x4958f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4958f7ull));
TAIL_STATIC(0x5437c0u,543);
}
B4958f7:L4958f7:{c.instructions+=1;NFSU2_TR(0x4958f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495900:L495900:{c.instructions+=2;NFSU2_TR(0x495900);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495902:{NFSU2_TR(0x495902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495907ull));
TAIL_STATIC(0x5437c0u,543);
}
B495907:L495907:{c.instructions+=1;NFSU2_TR(0x495907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495910:L495910:{c.instructions+=3;NFSU2_TR(0x495910);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495913:{NFSU2_TR(0x495913);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B495915:{NFSU2_TR(0x495915);
if(r1(R+518)){{goto L49591e;}}
}
B495917:L495917:{c.instructions+=2;NFSU2_TR(0x495917);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495918:{NFSU2_TR(0x495918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49591dull));
TAIL_STATIC(0x51f820u,51f);
}
B49591d:L49591d:{c.instructions+=1;NFSU2_TR(0x49591d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49591e:L49591e:{c.instructions+=2;NFSU2_TR(0x49591e);
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
B495920:{NFSU2_TR(0x495920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495930:L495930:{c.instructions+=2;NFSU2_TR(0x495930);
u8 U[4];
w4(U+0,u32(0x78f578ull));
s4(u32(r4(R+4)),r4(U+0));
}
B495936:{NFSU2_TR(0x495936);
TAIL_STATIC(0x510d40u,510);
}
B495940:L495940:{c.instructions+=3;NFSU2_TR(0x495940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495941:{NFSU2_TR(0x495941);
__builtin_memmove((R+24),(R+4),4);
}
B495943:{NFSU2_TR(0x495943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495948ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495930u);}goto L495930;}
}
B495948:L495948:{c.instructions+=2;NFSU2_TR(0x495948);
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
B49594d:{NFSU2_TR(0x49594d);
if(r1(R+518)){{goto L495958;}}
}
B49594f:L49594f:{c.instructions+=2;NFSU2_TR(0x49594f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495950:{NFSU2_TR(0x495950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495955ull));
TAIL_STATIC(0x575630u,575);
}
B495955:L495955:{c.instructions+=1;NFSU2_TR(0x495955);
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
B495958:L495958:{c.instructions+=3;NFSU2_TR(0x495958);
__builtin_memmove((R+0),(R+24),4);
}
B49595a:{NFSU2_TR(0x49595a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49595b:{NFSU2_TR(0x49595b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495960:L495960:{c.instructions+=2;NFSU2_TR(0x495960);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B495963:{NFSU2_TR(0x495963);
if(r1(R+518)){{goto L495980;}}
}
B495965:L495965:{c.instructions+=3;NFSU2_TR(0x495965);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B495968:{NFSU2_TR(0x495968);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49596a:{NFSU2_TR(0x49596a);
if(r1(R+518)){{goto L495980;}}
}
B49596c:L49596c:{c.instructions+=3;NFSU2_TR(0x49596c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49596f:{NFSU2_TR(0x49596f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495971:{NFSU2_TR(0x495971);
if(r1(R+518)){{goto L495980;}}
}
B495973:L495973:{c.instructions+=3;NFSU2_TR(0x495973);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B495979:{NFSU2_TR(0x495979);
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
B49597b:{NFSU2_TR(0x49597b);
if(r1(R+518)){{goto L495980;}}
}
B49597d:L49597d:{c.instructions+=2;NFSU2_TR(0x49597d);
w1(R+0,u8(0x1ull));
}
B49597f:{NFSU2_TR(0x49597f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495980:L495980:{c.instructions+=2;NFSU2_TR(0x495980);
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
B495982:{NFSU2_TR(0x495982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495990:L495990:{c.instructions+=5;NFSU2_TR(0x495990);
__builtin_memmove((R+8),(R+4),4);
}
B495992:{NFSU2_TR(0x495992);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495993:{NFSU2_TR(0x495993);
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
B495995:{NFSU2_TR(0x495995);
w4(R+4,u32(0x10ull));
}
B49599a:{NFSU2_TR(0x49599a);
__builtin_memmove((R+28),(R+8),4);
}
B49599c:L49599c:{c.instructions+=1;NFSU2_TR(0x49599c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49599e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49599cu);}goto L49599c;}
}
B49599e:L49599e:{c.instructions+=2;NFSU2_TR(0x49599e);
w4(R+4,u32(0x8ull));
}
B4959a3:{NFSU2_TR(0x4959a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959a6:L4959a6:{c.instructions+=1;NFSU2_TR(0x4959a6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4959a8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4959a6u);}goto L4959a6;}
}
B4959a8:L4959a8:{c.instructions+=2;NFSU2_TR(0x4959a8);
w4(R+4,u32(0x8ull));
}
B4959ad:{NFSU2_TR(0x4959ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959b0:L4959b0:{c.instructions+=1;NFSU2_TR(0x4959b0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4959b2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4959b0u);}goto L4959b0;}
}
B4959b2:L4959b2:{c.instructions+=2;NFSU2_TR(0x4959b2);
w4(R+4,u32(0x10ull));
}
B4959b7:{NFSU2_TR(0x4959b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959bd:L4959bd:{c.instructions+=1;NFSU2_TR(0x4959bd);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4959bf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4959bdu);}goto L4959bd;}
}
B4959bf:L4959bf:{c.instructions+=2;NFSU2_TR(0x4959bf);
w4(R+4,u32(0x10ull));
}
B4959c4:{NFSU2_TR(0x4959c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959ca:L4959ca:{c.instructions+=1;NFSU2_TR(0x4959ca);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4959cc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4959cau);}goto L4959ca;}
}
B4959cc:L4959cc:{c.instructions+=2;NFSU2_TR(0x4959cc);
w4(R+4,u32(0x8ull));
}
B4959d1:{NFSU2_TR(0x4959d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959d7:L4959d7:{c.instructions+=1;NFSU2_TR(0x4959d7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4959d9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4959d7u);}goto L4959d7;}
}
B4959d9:L4959d9:{c.instructions+=8;NFSU2_TR(0x4959d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4959df:{NFSU2_TR(0x4959df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4959e5:{NFSU2_TR(0x4959e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4959eb:{NFSU2_TR(0x4959eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4959f1:{NFSU2_TR(0x4959f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4959f7:{NFSU2_TR(0x4959f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4959fd:{NFSU2_TR(0x4959fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4959fe:{NFSU2_TR(0x4959fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495a00:L495a00:{c.instructions+=15;NFSU2_TR(0x495a00);
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
B495a02:{NFSU2_TR(0x495a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495a05:{NFSU2_TR(0x495a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495a08:{NFSU2_TR(0x495a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495a0b:{NFSU2_TR(0x495a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B495a0d:{NFSU2_TR(0x495a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B495a14:{NFSU2_TR(0x495a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495a17:{NFSU2_TR(0x495a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495a1a:{NFSU2_TR(0x495a1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a1d:{NFSU2_TR(0x495a1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a20:{NFSU2_TR(0x495a20);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a23:{NFSU2_TR(0x495a23);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a26:{NFSU2_TR(0x495a26);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a29:{NFSU2_TR(0x495a29);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B495a2c:{NFSU2_TR(0x495a2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495a30:L495a30:{c.instructions+=6;NFSU2_TR(0x495a30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a31:{NFSU2_TR(0x495a31);
__builtin_memmove((R+20),(R+16),4);
}
B495a33:{NFSU2_TR(0x495a33);
u8 U[4];
w4(U+0,u32(0xdd60e403ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a38:{NFSU2_TR(0x495a38);
w4(R+4,u32(0x85ad40ull));
}
B495a3d:{NFSU2_TR(0x495a3d);
s4(0x850078,u32(0x1ull));
}
B495a47:{NFSU2_TR(0x495a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495a4cull));
TAIL_STATIC(0x500b80u,500);
}
B495a4c:L495a4c:{c.instructions+=2;NFSU2_TR(0x495a4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495a4e:{NFSU2_TR(0x495a4e);
if(r1(R+518)){{goto L495a6d;}}
}
B495a50:L495a50:{c.instructions+=5;NFSU2_TR(0x495a50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a52:{NFSU2_TR(0x495a52);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a57:{NFSU2_TR(0x495a57);
u8 U[4];
w4(U+0,u32(0x78f590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a5c:{NFSU2_TR(0x495a5c);
s1(0x836324,u8(0x1ull));
}
B495a63:{NFSU2_TR(0x495a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495a68ull));
TAIL_STATIC(0x537980u,537);
}
B495a68:L495a68:{c.instructions+=3;NFSU2_TR(0x495a68);
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
B495a6b:{NFSU2_TR(0x495a6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B495a6c:{NFSU2_TR(0x495a6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495a6d:L495a6d:{c.instructions+=3;NFSU2_TR(0x495a6d);
__builtin_memmove((R+0),gp(0x86347c),1);
}
B495a72:{NFSU2_TR(0x495a72);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495a74:{NFSU2_TR(0x495a74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495a93;}}
}
B495a76:L495a76:{c.instructions+=3;NFSU2_TR(0x495a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495a79:{NFSU2_TR(0x495a79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a7a:{NFSU2_TR(0x495a7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495a7full));
TAIL_STATIC(0x50d2a0u,50d);
}
B495a7f:L495a7f:{c.instructions+=3;NFSU2_TR(0x495a7f);
u8 U[4];
w4(U+0,u32(0x78f590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a84:{NFSU2_TR(0x495a84);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B495a89:{NFSU2_TR(0x495a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495a8eull));
TAIL_STATIC(0x53d710u,53d);
}
B495a8e:L495a8e:{c.instructions+=3;NFSU2_TR(0x495a8e);
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
B495a91:{NFSU2_TR(0x495a91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B495a92:{NFSU2_TR(0x495a92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495a93:L495a93:{c.instructions+=3;NFSU2_TR(0x495a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495a96:{NFSU2_TR(0x495a96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495a97:{NFSU2_TR(0x495a97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495a9cull));
TAIL_STATIC(0x50d2a0u,50d);
}
B495a9c:L495a9c:{c.instructions+=5;NFSU2_TR(0x495a9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B495a9f:{NFSU2_TR(0x495a9f);
u8 U[4];
w4(U+0,u32(0xdd60e402ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495aa4:{NFSU2_TR(0x495aa4);
w4(R+4,u32(0x85ad40ull));
}
B495aa9:{NFSU2_TR(0x495aa9);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B495aae:{NFSU2_TR(0x495aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ab3ull));
TAIL_STATIC(0x500b80u,500);
}
B495ab3:L495ab3:{c.instructions+=7;NFSU2_TR(0x495ab3);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B495ab5:{NFSU2_TR(0x495ab5);
w4(R+4,u32(0x85ad40ull));
}
B495aba:{NFSU2_TR(0x495aba);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B495abc:{NFSU2_TR(0x495abc);
w4(R+0,u32(0-u32(r4(R+0))));
}
B495abe:{NFSU2_TR(0x495abe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdd60e402ull))));
}
B495ac3:{NFSU2_TR(0x495ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ac4:{NFSU2_TR(0x495ac4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ac9ull));
TAIL_STATIC(0x5003f0u,500);
}
B495ac9:L495ac9:{c.instructions+=3;NFSU2_TR(0x495ac9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495aca:{NFSU2_TR(0x495aca);
w4(R+4,u32(0x85ad40ull));
}
B495acf:{NFSU2_TR(0x495acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ad4ull));
TAIL_STATIC(0x5410e0u,541);
}
B495ad4:L495ad4:{c.instructions+=3;NFSU2_TR(0x495ad4);
s1(0x863484,u8(0x1ull));
}
B495adb:{NFSU2_TR(0x495adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B495adc:{NFSU2_TR(0x495adc);
TAIL_STATIC(0x5404a0u,540);
}
B495af0:L495af0:{c.instructions+=4;NFSU2_TR(0x495af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495af3:{NFSU2_TR(0x495af3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495af5:{NFSU2_TR(0x495af5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495af6:{NFSU2_TR(0x495af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495afbull));
TAIL_STATIC(0x50b8c0u,50b);
}
B495afb:L495afb:{c.instructions+=5;NFSU2_TR(0x495afb);
__builtin_memmove((R+4),gp(0x863480),4);
}
B495b01:{NFSU2_TR(0x495b01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b03:{NFSU2_TR(0x495b03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b04:{NFSU2_TR(0x495b04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b06:{NFSU2_TR(0x495b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495b0bull));
TAIL_STATIC(0x5309e0u,530);
}
B495b0b:L495b0b:{c.instructions+=2;NFSU2_TR(0x495b0b);
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
B495b0e:{NFSU2_TR(0x495b0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495b10:L495b10:{c.instructions+=6;NFSU2_TR(0x495b10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b11:{NFSU2_TR(0x495b11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b12:{NFSU2_TR(0x495b12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B495b16:{NFSU2_TR(0x495b16);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B495b1c:{NFSU2_TR(0x495b1c);
__builtin_memmove((R+24),(R+4),4);
}
B495b1e:{NFSU2_TR(0x495b1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495b2e;}}
}
B495b20:L495b20:{c.instructions+=4;NFSU2_TR(0x495b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495b23:{NFSU2_TR(0x495b23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B495b26:{NFSU2_TR(0x495b26);
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
B495b28:{NFSU2_TR(0x495b28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495c34;}}
}
B495b2e:L495b2e:{c.instructions+=9;NFSU2_TR(0x495b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495b32:{NFSU2_TR(0x495b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495b36:{NFSU2_TR(0x495b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495b3a:{NFSU2_TR(0x495b3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b3b:{NFSU2_TR(0x495b3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b3c:{NFSU2_TR(0x495b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b3d:{NFSU2_TR(0x495b3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b3e:{NFSU2_TR(0x495b3e);
__builtin_memmove((R+4),(R+24),4);
}
B495b40:{NFSU2_TR(0x495b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495b45ull));
TAIL_STATIC(0x543d40u,543);
}
B495b45:L495b45:{c.instructions+=2;NFSU2_TR(0x495b45);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B495b4b:{NFSU2_TR(0x495b4b);
if(r1(R+518)){{goto L495bf7;}}
}
B495b51:L495b51:{c.instructions+=2;NFSU2_TR(0x495b51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B495b57:{NFSU2_TR(0x495b57);
if(r1(R+518)){{goto L495b94;}}
}
B495b59:L495b59:{c.instructions+=2;NFSU2_TR(0x495b59);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B495b5f:{NFSU2_TR(0x495b5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495c34;}}
}
B495b65:L495b65:{c.instructions+=2;NFSU2_TR(0x495b65);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B495b6f:{NFSU2_TR(0x495b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495c34;}}
}
B495b75:L495b75:{c.instructions+=6;NFSU2_TR(0x495b75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b77:{NFSU2_TR(0x495b77);
s1(0x836327,u8(0x0ull));
}
B495b7e:{NFSU2_TR(0x495b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495b81:{NFSU2_TR(0x495b81);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b86:{NFSU2_TR(0x495b86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495b87:{NFSU2_TR(0x495b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495b8cull));
TAIL_STATIC(0x537980u,537);
}
B495b8c:L495b8c:{c.instructions+=4;NFSU2_TR(0x495b8c);
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
B495b8f:{NFSU2_TR(0x495b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495b90:{NFSU2_TR(0x495b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495b91:{NFSU2_TR(0x495b91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495b94:L495b94:{c.instructions+=1;NFSU2_TR(0x495b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495b99ull));
TAIL_STATIC(0x404800u,404);
}
B495b99:L495b99:{c.instructions+=2;NFSU2_TR(0x495b99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495b9b:{NFSU2_TR(0x495b9b);
if(r1(R+518)){{goto L495bb5;}}
}
B495b9d:L495b9d:{c.instructions+=5;NFSU2_TR(0x495b9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495ba0:{NFSU2_TR(0x495ba0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ba2:{NFSU2_TR(0x495ba2);
u8 U[4];
w4(U+0,u32(0x78f530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ba7:{NFSU2_TR(0x495ba7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ba8:{NFSU2_TR(0x495ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495badull));
TAIL_STATIC(0x537980u,537);
}
B495bad:L495bad:{c.instructions+=4;NFSU2_TR(0x495bad);
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
B495bb0:{NFSU2_TR(0x495bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495bb1:{NFSU2_TR(0x495bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495bb2:{NFSU2_TR(0x495bb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495bb5:L495bb5:{c.instructions+=5;NFSU2_TR(0x495bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495bb8:{NFSU2_TR(0x495bb8);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bbd:{NFSU2_TR(0x495bbd);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bc2:{NFSU2_TR(0x495bc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bc3:{NFSU2_TR(0x495bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495bc8ull));
TAIL_STATIC(0x537cc0u,537);
}
B495bc8:L495bc8:{c.instructions+=3;NFSU2_TR(0x495bc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B495bcb:{NFSU2_TR(0x495bcb);
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
B495bcd:{NFSU2_TR(0x495bcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495c34;}}
}
B495bcf:L495bcf:{c.instructions+=4;NFSU2_TR(0x495bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495bd2:{NFSU2_TR(0x495bd2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bd4:{NFSU2_TR(0x495bd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bd5:{NFSU2_TR(0x495bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495bdaull));
TAIL_STATIC(0x50b8c0u,50b);
}
B495bda:L495bda:{c.instructions+=6;NFSU2_TR(0x495bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495bdd:{NFSU2_TR(0x495bdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bdf:{NFSU2_TR(0x495bdf);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495be4:{NFSU2_TR(0x495be4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495be9:{NFSU2_TR(0x495be9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bea:{NFSU2_TR(0x495bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495befull));
TAIL_STATIC(0x537c00u,537);
}
B495bef:L495bef:{c.instructions+=4;NFSU2_TR(0x495bef);
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
B495bf2:{NFSU2_TR(0x495bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495bf3:{NFSU2_TR(0x495bf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495bf4:{NFSU2_TR(0x495bf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495bf7:L495bf7:{c.instructions+=5;NFSU2_TR(0x495bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495bfa:{NFSU2_TR(0x495bfa);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495bff:{NFSU2_TR(0x495bff);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c04:{NFSU2_TR(0x495c04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c05:{NFSU2_TR(0x495c05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495c0aull));
TAIL_STATIC(0x537cc0u,537);
}
B495c0a:L495c0a:{c.instructions+=3;NFSU2_TR(0x495c0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B495c0d:{NFSU2_TR(0x495c0d);
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
B495c0f:{NFSU2_TR(0x495c0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495c34;}}
}
B495c11:L495c11:{c.instructions+=4;NFSU2_TR(0x495c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495c14:{NFSU2_TR(0x495c14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c16:{NFSU2_TR(0x495c16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c17:{NFSU2_TR(0x495c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495c1cull));
TAIL_STATIC(0x50b8c0u,50b);
}
B495c1c:L495c1c:{c.instructions+=6;NFSU2_TR(0x495c1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495c1f:{NFSU2_TR(0x495c1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c21:{NFSU2_TR(0x495c21);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c26:{NFSU2_TR(0x495c26);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c2b:{NFSU2_TR(0x495c2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c2c:{NFSU2_TR(0x495c2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495c31ull));
TAIL_STATIC(0x537c00u,537);
}
B495c31:L495c31:{c.instructions+=1;NFSU2_TR(0x495c31);
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
B495c34:L495c34:{c.instructions+=3;NFSU2_TR(0x495c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495c35:{NFSU2_TR(0x495c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495c36:{NFSU2_TR(0x495c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495c40:L495c40:{c.instructions+=13;NFSU2_TR(0x495c40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495c44:{NFSU2_TR(0x495c44);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495c48:{NFSU2_TR(0x495c48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c49:{NFSU2_TR(0x495c49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c4a:{NFSU2_TR(0x495c4a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B495c4e:{NFSU2_TR(0x495c4e);
__builtin_memmove((R+24),(R+4),4);
}
B495c50:{NFSU2_TR(0x495c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495c54:{NFSU2_TR(0x495c54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c55:{NFSU2_TR(0x495c55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c56:{NFSU2_TR(0x495c56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c57:{NFSU2_TR(0x495c57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c58:{NFSU2_TR(0x495c58);
__builtin_memmove((R+4),(R+24),4);
}
B495c5a:{NFSU2_TR(0x495c5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495c5full));
TAIL_STATIC(0x543d40u,543);
}
B495c5f:L495c5f:{c.instructions+=3;NFSU2_TR(0x495c5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c60:{NFSU2_TR(0x495c60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B495c66:{NFSU2_TR(0x495c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495c6bull));
TAIL_STATIC(0x5448f0u,544);
}
B495c6b:L495c6b:{c.instructions+=2;NFSU2_TR(0x495c6b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B495c71:{NFSU2_TR(0x495c71);
if(r1(R+518)){{goto L495cdf;}}
}
B495c73:L495c73:{c.instructions+=2;NFSU2_TR(0x495c73);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B495c79:{NFSU2_TR(0x495c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495d1c;}}
}
B495c7f:L495c7f:{c.instructions+=2;NFSU2_TR(0x495c7f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B495c89:{NFSU2_TR(0x495c89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495d1c;}}
}
B495c8f:L495c8f:{c.instructions+=4;NFSU2_TR(0x495c8f);
__builtin_memmove((R+0),gp(0x836326),1);
}
B495c94:{NFSU2_TR(0x495c94);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495c96:{NFSU2_TR(0x495c96);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495c98:{NFSU2_TR(0x495c98);
if(r1(R+518)){{goto L495cb1;}}
}
B495c9a:L495c9a:{c.instructions+=4;NFSU2_TR(0x495c9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495c9d:{NFSU2_TR(0x495c9d);
u8 U[4];
w4(U+0,u32(0x78f5a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ca2:{NFSU2_TR(0x495ca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ca3:{NFSU2_TR(0x495ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ca8ull));
TAIL_STATIC(0x537980u,537);
}
B495ca8:L495ca8:{c.instructions+=2;NFSU2_TR(0x495ca8);
s1(0x836326,u8(0x0ull));
}
B495caf:{NFSU2_TR(0x495caf);
{goto L495cbf;}
}
B495cb1:L495cb1:{c.instructions+=4;NFSU2_TR(0x495cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495cb4:{NFSU2_TR(0x495cb4);
u8 U[4];
w4(U+0,u32(0x78f5d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cb9:{NFSU2_TR(0x495cb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cba:{NFSU2_TR(0x495cba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495cbfull));
TAIL_STATIC(0x537980u,537);
}
B495cbf:L495cbf:{c.instructions+=6;NFSU2_TR(0x495cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495cc2:{NFSU2_TR(0x495cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B495cc5:{NFSU2_TR(0x495cc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B495cc8:{NFSU2_TR(0x495cc8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B495ccb:{NFSU2_TR(0x495ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ccc:{NFSU2_TR(0x495ccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495cd1ull));
TAIL_STATIC(0x50b8a0u,50b);
}
B495cd1:L495cd1:{c.instructions+=4;NFSU2_TR(0x495cd1);
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
B495cd4:{NFSU2_TR(0x495cd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cd5:{NFSU2_TR(0x495cd5);
__builtin_memmove((R+4),(R+24),4);
}
B495cd7:{NFSU2_TR(0x495cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495cdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B495cda:L495cda:{c.instructions+=3;NFSU2_TR(0x495cda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495cdb:{NFSU2_TR(0x495cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495cdc:{NFSU2_TR(0x495cdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495cdf:L495cdf:{c.instructions+=5;NFSU2_TR(0x495cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495ce2:{NFSU2_TR(0x495ce2);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ce7:{NFSU2_TR(0x495ce7);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cec:{NFSU2_TR(0x495cec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ced:{NFSU2_TR(0x495ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495cf2ull));
TAIL_STATIC(0x537d40u,537);
}
B495cf2:L495cf2:{c.instructions+=3;NFSU2_TR(0x495cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B495cf5:{NFSU2_TR(0x495cf5);
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
B495cf7:{NFSU2_TR(0x495cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495d1c;}}
}
B495cf9:L495cf9:{c.instructions+=4;NFSU2_TR(0x495cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495cfc:{NFSU2_TR(0x495cfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cfe:{NFSU2_TR(0x495cfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495cff:{NFSU2_TR(0x495cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d04ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B495d04:L495d04:{c.instructions+=6;NFSU2_TR(0x495d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495d07:{NFSU2_TR(0x495d07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d09:{NFSU2_TR(0x495d09);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d0e:{NFSU2_TR(0x495d0e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d13:{NFSU2_TR(0x495d13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d14:{NFSU2_TR(0x495d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d19ull));
TAIL_STATIC(0x537c60u,537);
}
B495d19:L495d19:{c.instructions+=1;NFSU2_TR(0x495d19);
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
B495d1c:L495d1c:{c.instructions+=3;NFSU2_TR(0x495d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495d1d:{NFSU2_TR(0x495d1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495d1e:{NFSU2_TR(0x495d1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495d30:L495d30:{c.instructions+=6;NFSU2_TR(0x495d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc28ull))));
}
B495d36:{NFSU2_TR(0x495d36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d37:{NFSU2_TR(0x495d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d38:{NFSU2_TR(0x495d38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d39:{NFSU2_TR(0x495d39);
__builtin_memmove((R+24),(R+4),4);
}
B495d3b:{NFSU2_TR(0x495d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d40ull));
TAIL_STATIC(0x50da50u,50d);
}
B495d40:L495d40:{c.instructions+=6;NFSU2_TR(0x495d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495d43:{NFSU2_TR(0x495d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B495d46:{NFSU2_TR(0x495d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B495d49:{NFSU2_TR(0x495d49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d4b:{NFSU2_TR(0x495d4b);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d50:{NFSU2_TR(0x495d50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d55ull));
TAIL_STATIC(0x43db50u,43d);
}
B495d55:L495d55:{c.instructions+=5;NFSU2_TR(0x495d55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B495d58:{NFSU2_TR(0x495d58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d59:{NFSU2_TR(0x495d59);
u8 U[4];
w4(U+0,u32(0xb04669e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d5e:{NFSU2_TR(0x495d5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d5f:{NFSU2_TR(0x495d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d64ull));
TAIL_STATIC(0x537c60u,537);
}
B495d64:L495d64:{c.instructions+=4;NFSU2_TR(0x495d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495d67:{NFSU2_TR(0x495d67);
u8 U[4];
w4(U+0,u32(0xb04669e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d6c:{NFSU2_TR(0x495d6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d6d:{NFSU2_TR(0x495d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d72ull));
TAIL_STATIC(0x537a60u,537);
}
B495d72:L495d72:{c.instructions+=4;NFSU2_TR(0x495d72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B495d75:{NFSU2_TR(0x495d75);
__builtin_memmove((R+4),(R+28),4);
}
B495d77:{NFSU2_TR(0x495d77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B495d7d:{NFSU2_TR(0x495d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d82ull));
TAIL_STATIC(0x500180u,500);
}
B495d82:L495d82:{c.instructions+=6;NFSU2_TR(0x495d82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d83:{NFSU2_TR(0x495d83);
u8 U[4];
w4(U+0,u32(0x78f604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d88:{NFSU2_TR(0x495d88);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B495d8c:{NFSU2_TR(0x495d8c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d8e:{NFSU2_TR(0x495d8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d8f:{NFSU2_TR(0x495d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d94ull));
TAIL_STATIC(0x50c960u,50c);
}
B495d94:L495d94:{c.instructions+=3;NFSU2_TR(0x495d94);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B495d98:{NFSU2_TR(0x495d98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495d99:{NFSU2_TR(0x495d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495d9eull));
TAIL_STATIC(0x505450u,505);
}
B495d9e:L495d9e:{c.instructions+=5;NFSU2_TR(0x495d9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495da0:{NFSU2_TR(0x495da0);
__builtin_memmove((R+12),(R+0),4);
}
B495da2:{NFSU2_TR(0x495da2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495da4:{NFSU2_TR(0x495da4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495da5:{NFSU2_TR(0x495da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495daaull));
TAIL_STATIC(0x4901d0u,490);
}
B495daa:L495daa:{c.instructions+=3;NFSU2_TR(0x495daa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B495dad:{NFSU2_TR(0x495dad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B495daf:{NFSU2_TR(0x495daf);
if(r1(R+518)){{goto L495dc1;}}
}
B495db1:L495db1:{c.instructions+=4;NFSU2_TR(0x495db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495db7:{NFSU2_TR(0x495db7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495db8:{NFSU2_TR(0x495db8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495db9:{NFSU2_TR(0x495db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495dbeull));
TAIL_STATIC(0x50c990u,50c);
}
B495dbe:L495dbe:{c.instructions+=1;NFSU2_TR(0x495dbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495dc1:L495dc1:{c.instructions+=4;NFSU2_TR(0x495dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B495dc4:{NFSU2_TR(0x495dc4);
__builtin_memmove((R+4),(R+28),4);
}
B495dc6:{NFSU2_TR(0x495dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
w4(U+4,u32(0x42f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B495dd0:{NFSU2_TR(0x495dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495dd5ull));
TAIL_STATIC(0x5129f0u,512);
}
B495dd5:L495dd5:{c.instructions+=2;NFSU2_TR(0x495dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495dd6:{NFSU2_TR(0x495dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ddbull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B495ddb:L495ddb:{c.instructions+=5;NFSU2_TR(0x495ddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ddc:{NFSU2_TR(0x495ddc);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495de1:{NFSU2_TR(0x495de1);
u8 U[4];
w4(U+0,u32(0xf13f76b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495de6:{NFSU2_TR(0x495de6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495de7:{NFSU2_TR(0x495de7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495decull));
TAIL_STATIC(0x537b80u,537);
}
B495dec:L495dec:{c.instructions+=2;NFSU2_TR(0x495dec);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495df1:{NFSU2_TR(0x495df1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495df6ull));
TAIL_STATIC(0x575620u,575);
}
B495df6:L495df6:{c.instructions+=4;NFSU2_TR(0x495df6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B495df9:{NFSU2_TR(0x495df9);
__builtin_memmove((R+4),(R+28),4);
}
B495dfb:{NFSU2_TR(0x495dfb);
__builtin_memmove((R+12),(R+0),4);
}
B495dfd:{NFSU2_TR(0x495dfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e02ull));
TAIL_STATIC(0x500180u,500);
}
B495e02:L495e02:{c.instructions+=3;NFSU2_TR(0x495e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e03:{NFSU2_TR(0x495e03);
u8 U[4];
w4(U+0,u32(0x78f5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e08:{NFSU2_TR(0x495e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e0dull));
TAIL_STATIC(0x50b990u,50b);
}
B495e0d:L495e0d:{c.instructions+=4;NFSU2_TR(0x495e0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e0e:{NFSU2_TR(0x495e0e);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e13:{NFSU2_TR(0x495e13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e14:{NFSU2_TR(0x495e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e19ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B495e19:L495e19:{c.instructions+=5;NFSU2_TR(0x495e19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e1a:{NFSU2_TR(0x495e1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B495e1e:{NFSU2_TR(0x495e1e);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e23:{NFSU2_TR(0x495e23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e24:{NFSU2_TR(0x495e24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e29ull));
TAIL_STATIC(0x512530u,512);
}
B495e29:L495e29:{c.instructions+=2;NFSU2_TR(0x495e29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e2a:{NFSU2_TR(0x495e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e2full));
TAIL_STATIC(0x575630u,575);
}
B495e2f:L495e2f:{c.instructions+=5;NFSU2_TR(0x495e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B495e32:{NFSU2_TR(0x495e32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B495e36:{NFSU2_TR(0x495e36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e37:{NFSU2_TR(0x495e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B495e3d:{NFSU2_TR(0x495e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e42ull));
TAIL_STATIC(0x5446f0u,544);
}
B495e42:L495e42:{c.instructions+=9;NFSU2_TR(0x495e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495e48:{NFSU2_TR(0x495e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495e4e:{NFSU2_TR(0x495e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B495e54:{NFSU2_TR(0x495e54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B495e55:{NFSU2_TR(0x495e55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e56:{NFSU2_TR(0x495e56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e57:{NFSU2_TR(0x495e57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e58:{NFSU2_TR(0x495e58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B495e5e:{NFSU2_TR(0x495e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e63ull));
TAIL_STATIC(0x538080u,538);
}
B495e63:L495e63:{c.instructions+=7;NFSU2_TR(0x495e63);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B495e67:{NFSU2_TR(0x495e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495e6a:{NFSU2_TR(0x495e6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e6b:{NFSU2_TR(0x495e6b);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e70:{NFSU2_TR(0x495e70);
u8 U[4];
w4(U+0,u32(0xf25b6bbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e75:{NFSU2_TR(0x495e75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e76:{NFSU2_TR(0x495e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e7bull));
TAIL_STATIC(0x537b80u,537);
}
B495e7b:L495e7b:{c.instructions+=6;NFSU2_TR(0x495e7b);
__builtin_memmove((R+8),gp(0x862838),4);
}
B495e81:{NFSU2_TR(0x495e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B495e84:{NFSU2_TR(0x495e84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B495e87:{NFSU2_TR(0x495e87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e88:{NFSU2_TR(0x495e88);
w4(R+4,u32(0x85ad40ull));
}
B495e8d:{NFSU2_TR(0x495e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495e92ull));
TAIL_STATIC(0x500a40u,500);
}
B495e92:L495e92:{c.instructions+=5;NFSU2_TR(0x495e92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e93:{NFSU2_TR(0x495e93);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e98:{NFSU2_TR(0x495e98);
u8 U[4];
w4(U+0,u32(0x7d8e1791ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e9d:{NFSU2_TR(0x495e9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495e9e:{NFSU2_TR(0x495e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ea3ull));
TAIL_STATIC(0x537b80u,537);
}
B495ea3:L495ea3:{c.instructions+=7;NFSU2_TR(0x495ea3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B495ea7:{NFSU2_TR(0x495ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495eaa:{NFSU2_TR(0x495eaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495eab:{NFSU2_TR(0x495eab);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495eb0:{NFSU2_TR(0x495eb0);
u8 U[4];
w4(U+0,u32(0x195d8d22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495eb5:{NFSU2_TR(0x495eb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495eb6:{NFSU2_TR(0x495eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ebbull));
TAIL_STATIC(0x537b80u,537);
}
B495ebb:L495ebb:{c.instructions+=4;NFSU2_TR(0x495ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B495ebe:{NFSU2_TR(0x495ebe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B495ec1:{NFSU2_TR(0x495ec1);
__builtin_memmove((R+4),(R+28),4);
}
B495ec3:{NFSU2_TR(0x495ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ec8ull));
TAIL_STATIC(0x500180u,500);
}
B495ec8:L495ec8:{c.instructions+=3;NFSU2_TR(0x495ec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ec9:{NFSU2_TR(0x495ec9);
u8 U[4];
w4(U+0,u32(0x78f5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ece:{NFSU2_TR(0x495ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ed3ull));
TAIL_STATIC(0x50b990u,50b);
}
B495ed3:L495ed3:{c.instructions+=5;NFSU2_TR(0x495ed3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495ed6:{NFSU2_TR(0x495ed6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ed7:{NFSU2_TR(0x495ed7);
u8 U[4];
w4(U+0,u32(0xf13cef3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495edc:{NFSU2_TR(0x495edc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495edd:{NFSU2_TR(0x495edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495ee2ull));
TAIL_STATIC(0x537a10u,537);
}
B495ee2:L495ee2:{c.instructions+=3;NFSU2_TR(0x495ee2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495ee5:{NFSU2_TR(0x495ee5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ee6:{NFSU2_TR(0x495ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495eebull));
TAIL_STATIC(0x50c900u,50c);
}
B495eeb:L495eeb:{c.instructions+=6;NFSU2_TR(0x495eeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B495eee:{NFSU2_TR(0x495eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495eef:{NFSU2_TR(0x495eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495ef0:{NFSU2_TR(0x495ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B495ef1:{NFSU2_TR(0x495ef1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xc28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xc28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xc28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B495ef7:{NFSU2_TR(0x495ef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f00:L495f00:{c.instructions+=4;NFSU2_TR(0x495f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495f04:{NFSU2_TR(0x495f04);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B495f05:{NFSU2_TR(0x495f05);
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
B495f08:{NFSU2_TR(0x495f08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L495f4a;}}
}
B495f0a:L495f0a:{c.instructions+=1;NFSU2_TR(0x495f0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x495f54ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B495f11:L495f11:{c.instructions+=3;NFSU2_TR(0x495f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495f14:{NFSU2_TR(0x495f14);
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
B495f16:{NFSU2_TR(0x495f16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L495f20;}}
}
B495f18:L495f18:{c.instructions+=2;NFSU2_TR(0x495f18);
w4(R+0,u32(0x2ull));
}
B495f1d:{NFSU2_TR(0x495f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f20:L495f20:{c.instructions+=3;NFSU2_TR(0x495f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B495f23:{NFSU2_TR(0x495f23);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B495f26:{NFSU2_TR(0x495f26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495f30;}}
}
B495f28:L495f28:{c.instructions+=2;NFSU2_TR(0x495f28);
w4(R+0,u32(0x3ull));
}
B495f2d:{NFSU2_TR(0x495f2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f30:L495f30:{c.instructions+=1;NFSU2_TR(0x495f30);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L495f4a;}}
}
B495f32:L495f32:{c.instructions+=2;NFSU2_TR(0x495f32);
w4(R+0,u32(0x4ull));
}
B495f37:{NFSU2_TR(0x495f37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f3a:L495f3a:{c.instructions+=2;NFSU2_TR(0x495f3a);
w4(R+0,u32(0x5ull));
}
B495f3f:{NFSU2_TR(0x495f3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f42:L495f42:{c.instructions+=2;NFSU2_TR(0x495f42);
w4(R+0,u32(0x6ull));
}
B495f47:{NFSU2_TR(0x495f47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f4a:L495f4a:{c.instructions+=2;NFSU2_TR(0x495f4a);
w4(R+0,u32(0x1ull));
}
B495f4f:{NFSU2_TR(0x495f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495f70:L495f70:{c.instructions+=6;NFSU2_TR(0x495f70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495f71:{NFSU2_TR(0x495f71);
__builtin_memmove((R+24),(R+4),4);
}
B495f73:{NFSU2_TR(0x495f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495f79:{NFSU2_TR(0x495f79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B495f7b:{NFSU2_TR(0x495f7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495f7c:{NFSU2_TR(0x495f7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L495f92;}}
}
B495f7e:L495f7e:{c.instructions+=2;NFSU2_TR(0x495f7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B495f81:{NFSU2_TR(0x495f81);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L495f92;}}
}
B495f83:L495f83:{c.instructions+=4;NFSU2_TR(0x495f83);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B495f89:{NFSU2_TR(0x495f89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B495f8e:{NFSU2_TR(0x495f8e);
__builtin_memmove((R+28),(R+0),4);
}
B495f90:{NFSU2_TR(0x495f90);
{goto L495f94;}
}
B495f92:L495f92:{c.instructions+=1;NFSU2_TR(0x495f92);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B495f94:L495f94:{c.instructions+=4;NFSU2_TR(0x495f94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495f96:{NFSU2_TR(0x495f96);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495f98:{NFSU2_TR(0x495f98);
__builtin_memmove((R+4),(R+28),4);
}
B495f9a:{NFSU2_TR(0x495f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495f9full));
TAIL_STATIC(0x5162d0u,516);
}
B495f9f:L495f9f:{c.instructions+=2;NFSU2_TR(0x495f9f);
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
B495fa1:{NFSU2_TR(0x495fa1);
if(r1(R+518)){{goto L495fcb;}}
}
B495fa3:L495fa3:{c.instructions+=3;NFSU2_TR(0x495fa3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B495fa9:{NFSU2_TR(0x495fa9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495fab:{NFSU2_TR(0x495fab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495fbd;}}
}
B495fad:L495fad:{c.instructions+=4;NFSU2_TR(0x495fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B495fb0:{NFSU2_TR(0x495fb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B495fb6:{NFSU2_TR(0x495fb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B495fb8:{NFSU2_TR(0x495fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L495fbd;}}
}
B495fba:L495fba:{c.instructions+=1;NFSU2_TR(0x495fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B495fbd:L495fbd:{c.instructions+=4;NFSU2_TR(0x495fbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fbe:{NFSU2_TR(0x495fbe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fc0:{NFSU2_TR(0x495fc0);
__builtin_memmove((R+4),(R+28),4);
}
B495fc2:{NFSU2_TR(0x495fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495fc7ull));
TAIL_STATIC(0x5162d0u,516);
}
B495fc7:L495fc7:{c.instructions+=2;NFSU2_TR(0x495fc7);
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
B495fc9:{NFSU2_TR(0x495fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x495fa3u);}goto L495fa3;}}
}
B495fcb:L495fcb:{c.instructions+=3;NFSU2_TR(0x495fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B495fcc:{NFSU2_TR(0x495fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B495fcd:{NFSU2_TR(0x495fcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B495fd0:L495fd0:{c.instructions+=7;NFSU2_TR(0x495fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B495fd6:{NFSU2_TR(0x495fd6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B495fd8:{NFSU2_TR(0x495fd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fd9:{NFSU2_TR(0x495fd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fda:{NFSU2_TR(0x495fda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fdb:{NFSU2_TR(0x495fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495fdc:{NFSU2_TR(0x495fdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L495ff2;}}
}
B495fde:L495fde:{c.instructions+=2;NFSU2_TR(0x495fde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B495fe1:{NFSU2_TR(0x495fe1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L495ff2;}}
}
B495fe3:L495fe3:{c.instructions+=4;NFSU2_TR(0x495fe3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B495fe9:{NFSU2_TR(0x495fe9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B495fee:{NFSU2_TR(0x495fee);
__builtin_memmove((R+28),(R+0),4);
}
B495ff0:{NFSU2_TR(0x495ff0);
{goto L495ff4;}
}
B495ff2:L495ff2:{c.instructions+=1;NFSU2_TR(0x495ff2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B495ff4:L495ff4:{c.instructions+=4;NFSU2_TR(0x495ff4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ff6:{NFSU2_TR(0x495ff6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B495ff8:{NFSU2_TR(0x495ff8);
__builtin_memmove((R+4),(R+28),4);
}
B495ffa:{NFSU2_TR(0x495ffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x495fffull));
TAIL_STATIC(0x5162d0u,516);
}
B495fff:L495fff:{c.instructions+=1;NFSU2_TR(0x495fff);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
TAIL_STATIC(0x496001u,496);
}
XIT:NFSU2_TR_EXIT(0x495,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
