#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_466(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x467,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x467,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_467(u8* __restrict R,Cpu& c);
u32 page_467(Cpu& c){return body_467(c.regs.data(),c);}
__attribute__((noinline)) u32 body_467(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x467002:goto L467002;
case 0x467003:c.instructions+=1;goto B467003;
case 0x467008:goto L467008;
case 0x46700c:c.instructions+=9;goto B46700c;
case 0x46700f:c.instructions+=8;goto B46700f;
case 0x467013:c.instructions+=7;goto B467013;
case 0x467017:c.instructions+=6;goto B467017;
case 0x467019:c.instructions+=5;goto B467019;
case 0x46701b:c.instructions+=4;goto B46701b;
case 0x467021:c.instructions+=3;goto B467021;
case 0x467029:c.instructions+=2;goto B467029;
case 0x46702d:c.instructions+=1;goto B46702d;
case 0x46702f:goto L46702f;
case 0x467033:c.instructions+=2;goto B467033;
case 0x467035:c.instructions+=1;goto B467035;
case 0x467037:goto L467037;
case 0x46703a:c.instructions+=21;goto B46703a;
case 0x46703e:c.instructions+=20;goto B46703e;
case 0x467040:c.instructions+=19;goto B467040;
case 0x467044:c.instructions+=18;goto B467044;
case 0x467048:c.instructions+=17;goto B467048;
case 0x46704c:c.instructions+=16;goto B46704c;
case 0x467050:c.instructions+=15;goto B467050;
case 0x467054:c.instructions+=14;goto B467054;
case 0x467058:c.instructions+=13;goto B467058;
case 0x46705c:c.instructions+=12;goto B46705c;
case 0x467060:c.instructions+=11;goto B467060;
case 0x467065:c.instructions+=10;goto B467065;
case 0x467069:c.instructions+=9;goto B467069;
case 0x46706d:c.instructions+=8;goto B46706d;
case 0x467070:c.instructions+=7;goto B467070;
case 0x467074:c.instructions+=6;goto B467074;
case 0x467077:c.instructions+=5;goto B467077;
case 0x467078:c.instructions+=4;goto B467078;
case 0x46707c:c.instructions+=3;goto B46707c;
case 0x46707f:c.instructions+=2;goto B46707f;
case 0x467081:c.instructions+=1;goto B467081;
case 0x467083:goto L467083;
case 0x467086:c.instructions+=12;goto B467086;
case 0x467089:c.instructions+=11;goto B467089;
case 0x46708c:c.instructions+=10;goto B46708c;
case 0x467090:c.instructions+=9;goto B467090;
case 0x467093:c.instructions+=8;goto B467093;
case 0x467096:c.instructions+=7;goto B467096;
case 0x467098:c.instructions+=6;goto B467098;
case 0x46709b:c.instructions+=5;goto B46709b;
case 0x46709f:c.instructions+=4;goto B46709f;
case 0x4670a2:c.instructions+=3;goto B4670a2;
case 0x4670a4:c.instructions+=2;goto B4670a4;
case 0x4670a6:c.instructions+=1;goto B4670a6;
case 0x4670a8:goto L4670a8;
case 0x4670af:c.instructions+=7;goto B4670af;
case 0x4670b2:c.instructions+=6;goto B4670b2;
case 0x4670b5:c.instructions+=5;goto B4670b5;
case 0x4670b6:c.instructions+=4;goto B4670b6;
case 0x4670b7:c.instructions+=3;goto B4670b7;
case 0x4670b8:c.instructions+=2;goto B4670b8;
case 0x4670bb:c.instructions+=1;goto B4670bb;
case 0x4670c0:goto L4670c0;
case 0x4670c4:c.instructions+=7;goto B4670c4;
case 0x4670c7:c.instructions+=6;goto B4670c7;
case 0x4670ca:c.instructions+=5;goto B4670ca;
case 0x4670cc:c.instructions+=4;goto B4670cc;
case 0x4670cf:c.instructions+=3;goto B4670cf;
case 0x4670d3:c.instructions+=2;goto B4670d3;
case 0x4670d6:c.instructions+=1;goto B4670d6;
case 0x4670da:goto L4670da;
case 0x4670dd:c.instructions+=11;goto B4670dd;
case 0x4670e1:c.instructions+=10;goto B4670e1;
case 0x4670e5:c.instructions+=9;goto B4670e5;
case 0x4670e9:c.instructions+=8;goto B4670e9;
case 0x4670ed:c.instructions+=7;goto B4670ed;
case 0x4670f1:c.instructions+=6;goto B4670f1;
case 0x4670f5:c.instructions+=5;goto B4670f5;
case 0x4670f8:c.instructions+=4;goto B4670f8;
case 0x4670fc:c.instructions+=3;goto B4670fc;
case 0x4670ff:c.instructions+=2;goto B4670ff;
case 0x467102:c.instructions+=1;goto B467102;
case 0x467104:goto L467104;
case 0x467105:c.instructions+=1;goto B467105;
case 0x467108:goto L467108;
case 0x46710c:c.instructions+=8;goto B46710c;
case 0x467113:c.instructions+=7;goto B467113;
case 0x467115:c.instructions+=6;goto B467115;
case 0x467117:c.instructions+=5;goto B467117;
case 0x46711d:c.instructions+=4;goto B46711d;
case 0x46711f:c.instructions+=3;goto B46711f;
case 0x467123:c.instructions+=2;goto B467123;
case 0x467127:c.instructions+=1;goto B467127;
case 0x46712c:goto L46712c;
case 0x467130:c.instructions+=5;goto B467130;
case 0x467133:c.instructions+=4;goto B467133;
case 0x467137:c.instructions+=3;goto B467137;
case 0x467138:c.instructions+=2;goto B467138;
case 0x467139:c.instructions+=1;goto B467139;
case 0x46713e:goto L46713e;
case 0x467141:c.instructions+=1;goto B467141;
case 0x467146:goto L467146;
case 0x467147:c.instructions+=4;goto B467147;
case 0x467148:c.instructions+=3;goto B467148;
case 0x467149:c.instructions+=2;goto B467149;
case 0x46714f:c.instructions+=1;goto B46714f;
case 0x467160:goto L467160;
case 0x467163:c.instructions+=6;goto B467163;
case 0x467167:c.instructions+=5;goto B467167;
case 0x46716b:c.instructions+=4;goto B46716b;
case 0x46716e:c.instructions+=3;goto B46716e;
case 0x467170:c.instructions+=2;goto B467170;
case 0x467174:c.instructions+=1;goto B467174;
case 0x467176:goto L467176;
case 0x467179:c.instructions+=2;goto B467179;
case 0x46717b:c.instructions+=1;goto B46717b;
case 0x46717d:goto L46717d;
case 0x46717f:c.instructions+=1;goto B46717f;
case 0x467181:goto L467181;
case 0x467183:c.instructions+=2;goto B467183;
case 0x467186:c.instructions+=1;goto B467186;
case 0x467189:goto L467189;
case 0x46718d:c.instructions+=24;goto B46718d;
case 0x46718e:c.instructions+=23;goto B46718e;
case 0x46718f:c.instructions+=22;goto B46718f;
case 0x467193:c.instructions+=21;goto B467193;
case 0x467199:c.instructions+=20;goto B467199;
case 0x46719d:c.instructions+=19;goto B46719d;
case 0x4671a1:c.instructions+=18;goto B4671a1;
case 0x4671a5:c.instructions+=17;goto B4671a5;
case 0x4671a9:c.instructions+=16;goto B4671a9;
case 0x4671af:c.instructions+=15;goto B4671af;
case 0x4671b3:c.instructions+=14;goto B4671b3;
case 0x4671b7:c.instructions+=13;goto B4671b7;
case 0x4671bb:c.instructions+=12;goto B4671bb;
case 0x4671bf:c.instructions+=11;goto B4671bf;
case 0x4671c5:c.instructions+=10;goto B4671c5;
case 0x4671c9:c.instructions+=9;goto B4671c9;
case 0x4671cd:c.instructions+=8;goto B4671cd;
case 0x4671d1:c.instructions+=7;goto B4671d1;
case 0x4671d5:c.instructions+=6;goto B4671d5;
case 0x4671d9:c.instructions+=5;goto B4671d9;
case 0x4671dd:c.instructions+=4;goto B4671dd;
case 0x4671e0:c.instructions+=3;goto B4671e0;
case 0x4671e3:c.instructions+=2;goto B4671e3;
case 0x4671e5:c.instructions+=1;goto B4671e5;
case 0x4671e7:goto L4671e7;
case 0x4671e8:c.instructions+=4;goto B4671e8;
case 0x4671ea:c.instructions+=3;goto B4671ea;
case 0x4671eb:c.instructions+=2;goto B4671eb;
case 0x4671ee:c.instructions+=1;goto B4671ee;
case 0x4671f1:goto L4671f1;
case 0x4671f6:goto L4671f6;
case 0x4671fa:c.instructions+=10;goto B4671fa;
case 0x4671fe:c.instructions+=9;goto B4671fe;
case 0x467201:c.instructions+=8;goto B467201;
case 0x467205:c.instructions+=7;goto B467205;
case 0x467208:c.instructions+=6;goto B467208;
case 0x46720c:c.instructions+=5;goto B46720c;
case 0x46720f:c.instructions+=4;goto B46720f;
case 0x467213:c.instructions+=3;goto B467213;
case 0x467217:c.instructions+=2;goto B467217;
case 0x46721a:c.instructions+=1;goto B46721a;
case 0x46721f:goto L46721f;
case 0x467220:c.instructions+=4;goto B467220;
case 0x467222:c.instructions+=3;goto B467222;
case 0x467223:c.instructions+=2;goto B467223;
case 0x467226:c.instructions+=1;goto B467226;
case 0x467230:goto L467230;
case 0x467233:c.instructions+=6;goto B467233;
case 0x467237:c.instructions+=5;goto B467237;
case 0x467238:c.instructions+=4;goto B467238;
case 0x46723c:c.instructions+=3;goto B46723c;
case 0x46723f:c.instructions+=2;goto B46723f;
case 0x467240:c.instructions+=1;goto B467240;
case 0x467245:goto L467245;
case 0x467247:c.instructions+=1;goto B467247;
case 0x46724c:goto L46724c;
case 0x467252:c.instructions+=16;goto B467252;
case 0x467258:c.instructions+=15;goto B467258;
case 0x46725c:c.instructions+=14;goto B46725c;
case 0x46725f:c.instructions+=13;goto B46725f;
case 0x467263:c.instructions+=12;goto B467263;
case 0x467267:c.instructions+=11;goto B467267;
case 0x46726b:c.instructions+=10;goto B46726b;
case 0x46726f:c.instructions+=9;goto B46726f;
case 0x467273:c.instructions+=8;goto B467273;
case 0x467277:c.instructions+=7;goto B467277;
case 0x46727b:c.instructions+=6;goto B46727b;
case 0x46727f:c.instructions+=5;goto B46727f;
case 0x467282:c.instructions+=4;goto B467282;
case 0x467286:c.instructions+=3;goto B467286;
case 0x46728a:c.instructions+=2;goto B46728a;
case 0x46728d:c.instructions+=1;goto B46728d;
case 0x467292:goto L467292;
case 0x467294:c.instructions+=3;goto B467294;
case 0x467295:c.instructions+=2;goto B467295;
case 0x467298:c.instructions+=1;goto B467298;
case 0x4672a0:goto L4672a0;
case 0x4672a3:c.instructions+=7;goto B4672a3;
case 0x4672a8:c.instructions+=6;goto B4672a8;
case 0x4672ae:c.instructions+=5;goto B4672ae;
case 0x4672b3:c.instructions+=4;goto B4672b3;
case 0x4672b5:c.instructions+=3;goto B4672b5;
case 0x4672ba:c.instructions+=2;goto B4672ba;
case 0x4672be:c.instructions+=1;goto B4672be;
case 0x4672c4:goto L4672c4;
case 0x4672c5:c.instructions+=3;goto B4672c5;
case 0x4672c6:c.instructions+=2;goto B4672c6;
case 0x4672c7:c.instructions+=1;goto B4672c7;
case 0x4672c8:goto L4672c8;
case 0x4672ca:c.instructions+=13;goto B4672ca;
case 0x4672cd:c.instructions+=12;goto B4672cd;
case 0x4672cf:c.instructions+=11;goto B4672cf;
case 0x4672d2:c.instructions+=10;goto B4672d2;
case 0x4672d6:c.instructions+=9;goto B4672d6;
case 0x4672da:c.instructions+=8;goto B4672da;
case 0x4672dd:c.instructions+=7;goto B4672dd;
case 0x4672e0:c.instructions+=6;goto B4672e0;
case 0x4672e3:c.instructions+=5;goto B4672e3;
case 0x4672e6:c.instructions+=4;goto B4672e6;
case 0x4672ea:c.instructions+=3;goto B4672ea;
case 0x4672ed:c.instructions+=2;goto B4672ed;
case 0x4672ef:c.instructions+=1;goto B4672ef;
case 0x4672f1:goto L4672f1;
case 0x4672f4:c.instructions+=3;goto B4672f4;
case 0x4672f7:c.instructions+=2;goto B4672f7;
case 0x4672f9:c.instructions+=1;goto B4672f9;
case 0x4672fb:goto L4672fb;
case 0x4672fe:c.instructions+=4;goto B4672fe;
case 0x467300:c.instructions+=3;goto B467300;
case 0x467302:c.instructions+=2;goto B467302;
case 0x467306:c.instructions+=1;goto B467306;
case 0x467308:goto L467308;
case 0x46730b:c.instructions+=2;goto B46730b;
case 0x46730d:c.instructions+=1;goto B46730d;
case 0x467310:goto L467310;
case 0x467313:c.instructions+=12;goto B467313;
case 0x467316:c.instructions+=11;goto B467316;
case 0x467319:c.instructions+=10;goto B467319;
case 0x46731d:c.instructions+=9;goto B46731d;
case 0x467320:c.instructions+=8;goto B467320;
case 0x467326:c.instructions+=7;goto B467326;
case 0x467329:c.instructions+=6;goto B467329;
case 0x46732c:c.instructions+=5;goto B46732c;
case 0x46732f:c.instructions+=4;goto B46732f;
case 0x467333:c.instructions+=3;goto B467333;
case 0x467334:c.instructions+=2;goto B467334;
case 0x467336:c.instructions+=1;goto B467336;
case 0x467338:goto L467338;
case 0x46733b:c.instructions+=1;goto B46733b;
case 0x46733d:goto L46733d;
case 0x46733e:c.instructions+=3;goto B46733e;
case 0x46733f:c.instructions+=2;goto B46733f;
case 0x467340:c.instructions+=1;goto B467340;
case 0x467341:goto L467341;
case 0x467344:c.instructions+=1;goto B467344;
case 0x467350:goto L467350;
case 0x467356:c.instructions+=20;goto B467356;
case 0x46735b:c.instructions+=19;goto B46735b;
case 0x46735c:c.instructions+=18;goto B46735c;
case 0x46735d:c.instructions+=17;goto B46735d;
case 0x46735f:c.instructions+=16;goto B46735f;
case 0x467365:c.instructions+=15;goto B467365;
case 0x467367:c.instructions+=14;goto B467367;
case 0x467369:c.instructions+=13;goto B467369;
case 0x46736f:c.instructions+=12;goto B46736f;
case 0x467370:c.instructions+=11;goto B467370;
case 0x467376:c.instructions+=10;goto B467376;
case 0x467379:c.instructions+=9;goto B467379;
case 0x46737c:c.instructions+=8;goto B46737c;
case 0x46737f:c.instructions+=7;goto B46737f;
case 0x467383:c.instructions+=6;goto B467383;
case 0x467386:c.instructions+=5;goto B467386;
case 0x467389:c.instructions+=4;goto B467389;
case 0x46738c:c.instructions+=3;goto B46738c;
case 0x46738f:c.instructions+=2;goto B46738f;
case 0x467391:c.instructions+=1;goto B467391;
case 0x467393:goto L467393;
case 0x467396:c.instructions+=3;goto B467396;
case 0x467399:c.instructions+=2;goto B467399;
case 0x46739b:c.instructions+=1;goto B46739b;
case 0x46739d:goto L46739d;
case 0x4673a0:c.instructions+=2;goto B4673a0;
case 0x4673a2:c.instructions+=1;goto B4673a2;
case 0x4673a4:goto L4673a4;
case 0x4673a7:c.instructions+=5;goto B4673a7;
case 0x4673a9:c.instructions+=4;goto B4673a9;
case 0x4673ac:c.instructions+=3;goto B4673ac;
case 0x4673af:c.instructions+=2;goto B4673af;
case 0x4673b1:c.instructions+=1;goto B4673b1;
case 0x4673b3:goto L4673b3;
case 0x4673b6:c.instructions+=8;goto B4673b6;
case 0x4673b9:c.instructions+=7;goto B4673b9;
case 0x4673bc:c.instructions+=6;goto B4673bc;
case 0x4673be:c.instructions+=5;goto B4673be;
case 0x4673c1:c.instructions+=4;goto B4673c1;
case 0x4673c4:c.instructions+=3;goto B4673c4;
case 0x4673c6:c.instructions+=2;goto B4673c6;
case 0x4673c8:c.instructions+=1;goto B4673c8;
case 0x4673ca:goto L4673ca;
case 0x4673d0:goto L4673d0;
case 0x4673d2:c.instructions+=4;goto B4673d2;
case 0x4673d5:c.instructions+=3;goto B4673d5;
case 0x4673d8:c.instructions+=2;goto B4673d8;
case 0x4673da:c.instructions+=1;goto B4673da;
case 0x4673dc:goto L4673dc;
case 0x4673df:c.instructions+=3;goto B4673df;
case 0x4673e0:c.instructions+=2;goto B4673e0;
case 0x4673e2:c.instructions+=1;goto B4673e2;
case 0x4673e4:goto L4673e4;
case 0x4673e5:c.instructions+=3;goto B4673e5;
case 0x4673e6:c.instructions+=2;goto B4673e6;
case 0x4673e7:c.instructions+=1;goto B4673e7;
case 0x4673e8:goto L4673e8;
case 0x4673ea:c.instructions+=3;goto B4673ea;
case 0x4673f0:c.instructions+=2;goto B4673f0;
case 0x4673f2:c.instructions+=1;goto B4673f2;
case 0x4673f4:goto L4673f4;
case 0x4673f5:c.instructions+=3;goto B4673f5;
case 0x4673f6:c.instructions+=2;goto B4673f6;
case 0x4673f7:c.instructions+=1;goto B4673f7;
case 0x467400:goto L467400;
case 0x467404:c.instructions+=2;goto B467404;
case 0x467407:c.instructions+=1;goto B467407;
case 0x467410:goto L467410;
case 0x467413:c.instructions+=1;goto B467413;
case 0x467420:goto L467420;
case 0x467427:c.instructions+=1;goto B467427;
case 0x467430:goto L467430;
case 0x467437:c.instructions+=2;goto B467437;
case 0x46743d:c.instructions+=1;goto B46743d;
case 0x467440:goto L467440;
case 0x467443:c.instructions+=2;goto B467443;
case 0x467446:c.instructions+=1;goto B467446;
case 0x467448:goto L467448;
case 0x46744b:c.instructions+=5;goto B46744b;
case 0x46744c:c.instructions+=4;goto B46744c;
case 0x467450:c.instructions+=3;goto B467450;
case 0x467453:c.instructions+=2;goto B467453;
case 0x467456:c.instructions+=1;goto B467456;
case 0x467457:goto L467457;
case 0x467460:goto L467460;
case 0x467465:c.instructions+=3;goto B467465;
case 0x467468:c.instructions+=2;goto B467468;
case 0x46746a:c.instructions+=1;goto B46746a;
case 0x46746c:goto L46746c;
case 0x467473:c.instructions+=1;goto B467473;
case 0x467474:goto L467474;
case 0x467477:c.instructions+=5;goto B467477;
case 0x46747a:c.instructions+=4;goto B46747a;
case 0x46747d:c.instructions+=3;goto B46747d;
case 0x46747f:c.instructions+=2;goto B46747f;
case 0x467481:c.instructions+=1;goto B467481;
case 0x467483:goto L467483;
case 0x467486:c.instructions+=1;goto B467486;
case 0x467487:goto L467487;
case 0x467489:c.instructions+=7;goto B467489;
case 0x46748b:c.instructions+=6;goto B46748b;
case 0x46748e:c.instructions+=5;goto B46748e;
case 0x467491:c.instructions+=4;goto B467491;
case 0x467492:c.instructions+=3;goto B467492;
case 0x467495:c.instructions+=2;goto B467495;
case 0x467497:c.instructions+=1;goto B467497;
case 0x467499:goto L467499;
case 0x46749a:goto L46749a;
case 0x46749d:c.instructions+=2;goto B46749d;
case 0x4674a0:c.instructions+=1;goto B4674a0;
case 0x4674a2:goto L4674a2;
case 0x4674a5:goto L4674a5;
case 0x4674a8:c.instructions+=2;goto B4674a8;
case 0x4674ab:c.instructions+=1;goto B4674ab;
case 0x4674ad:goto L4674ad;
case 0x4674b0:goto L4674b0;
case 0x4674c0:goto L4674c0;
case 0x4674c3:c.instructions+=1;goto B4674c3;
case 0x4674d0:goto L4674d0;
case 0x4674d4:c.instructions+=2;goto B4674d4;
case 0x4674d7:c.instructions+=1;goto B4674d7;
case 0x4674e0:goto L4674e0;
case 0x4674e4:c.instructions+=11;goto B4674e4;
case 0x4674e8:c.instructions+=10;goto B4674e8;
case 0x4674eb:c.instructions+=9;goto B4674eb;
case 0x4674ed:c.instructions+=8;goto B4674ed;
case 0x4674f0:c.instructions+=7;goto B4674f0;
case 0x4674f3:c.instructions+=6;goto B4674f3;
case 0x4674f6:c.instructions+=5;goto B4674f6;
case 0x4674f9:c.instructions+=4;goto B4674f9;
case 0x4674fb:c.instructions+=3;goto B4674fb;
case 0x4674fe:c.instructions+=2;goto B4674fe;
case 0x467501:c.instructions+=1;goto B467501;
case 0x467510:goto L467510;
case 0x467515:c.instructions+=6;goto B467515;
case 0x467516:c.instructions+=5;goto B467516;
case 0x467517:c.instructions+=4;goto B467517;
case 0x467519:c.instructions+=3;goto B467519;
case 0x46751b:c.instructions+=2;goto B46751b;
case 0x46751d:c.instructions+=1;goto B46751d;
case 0x46751f:goto L46751f;
case 0x467520:c.instructions+=1;goto B467520;
case 0x467525:goto L467525;
case 0x467528:goto L467528;
case 0x46752d:c.instructions+=2;goto B46752d;
case 0x46752f:c.instructions+=1;goto B46752f;
case 0x467531:goto L467531;
case 0x467532:c.instructions+=1;goto B467532;
case 0x467537:goto L467537;
case 0x46753a:goto L46753a;
case 0x46753f:c.instructions+=2;goto B46753f;
case 0x467541:c.instructions+=1;goto B467541;
case 0x467543:goto L467543;
case 0x467544:c.instructions+=1;goto B467544;
case 0x467549:goto L467549;
case 0x46754c:goto L46754c;
case 0x467551:c.instructions+=2;goto B467551;
case 0x467553:c.instructions+=1;goto B467553;
case 0x467555:goto L467555;
case 0x467556:c.instructions+=1;goto B467556;
case 0x46755b:goto L46755b;
case 0x46755e:goto L46755e;
case 0x467563:c.instructions+=2;goto B467563;
case 0x467565:c.instructions+=1;goto B467565;
case 0x467567:goto L467567;
case 0x467568:c.instructions+=1;goto B467568;
case 0x46756d:goto L46756d;
case 0x467570:goto L467570;
case 0x467575:c.instructions+=2;goto B467575;
case 0x467577:c.instructions+=1;goto B467577;
case 0x467579:goto L467579;
case 0x46757a:c.instructions+=1;goto B46757a;
case 0x46757f:goto L46757f;
case 0x467582:goto L467582;
case 0x467587:c.instructions+=2;goto B467587;
case 0x467589:c.instructions+=1;goto B467589;
case 0x46758b:goto L46758b;
case 0x46758c:c.instructions+=1;goto B46758c;
case 0x467591:goto L467591;
case 0x467594:goto L467594;
case 0x467597:c.instructions+=2;goto B467597;
case 0x467598:c.instructions+=1;goto B467598;
case 0x46759d:goto L46759d;
case 0x4675a0:c.instructions+=2;goto B4675a0;
case 0x4675a1:c.instructions+=1;goto B4675a1;
case 0x4675a6:goto L4675a6;
case 0x4675ac:c.instructions+=2;goto B4675ac;
case 0x4675ad:c.instructions+=1;goto B4675ad;
case 0x4675b2:goto L4675b2;
case 0x4675b8:c.instructions+=2;goto B4675b8;
case 0x4675b9:c.instructions+=1;goto B4675b9;
case 0x4675be:goto L4675be;
case 0x4675c4:c.instructions+=2;goto B4675c4;
case 0x4675c5:c.instructions+=1;goto B4675c5;
case 0x4675ca:goto L4675ca;
case 0x4675d0:c.instructions+=2;goto B4675d0;
case 0x4675d1:c.instructions+=1;goto B4675d1;
case 0x4675d6:goto L4675d6;
case 0x4675dc:c.instructions+=2;goto B4675dc;
case 0x4675dd:c.instructions+=1;goto B4675dd;
case 0x4675e2:goto L4675e2;
case 0x4675e5:c.instructions+=11;goto B4675e5;
case 0x4675e8:c.instructions+=10;goto B4675e8;
case 0x4675eb:c.instructions+=9;goto B4675eb;
case 0x4675f1:c.instructions+=8;goto B4675f1;
case 0x4675f7:c.instructions+=7;goto B4675f7;
case 0x4675fd:c.instructions+=6;goto B4675fd;
case 0x467603:c.instructions+=5;goto B467603;
case 0x467609:c.instructions+=4;goto B467609;
case 0x46760c:c.instructions+=3;goto B46760c;
case 0x46760d:c.instructions+=2;goto B46760d;
case 0x46760e:c.instructions+=1;goto B46760e;
case 0x467610:goto L467610;
case 0x467613:c.instructions+=32;goto B467613;
case 0x467615:c.instructions+=31;goto B467615;
case 0x467616:c.instructions+=30;goto B467616;
case 0x467617:c.instructions+=29;goto B467617;
case 0x46761a:c.instructions+=28;goto B46761a;
case 0x46761b:c.instructions+=27;goto B46761b;
case 0x46761c:c.instructions+=26;goto B46761c;
case 0x46761f:c.instructions+=25;goto B46761f;
case 0x467622:c.instructions+=24;goto B467622;
case 0x467625:c.instructions+=23;goto B467625;
case 0x467628:c.instructions+=22;goto B467628;
case 0x46762b:c.instructions+=21;goto B46762b;
case 0x46762e:c.instructions+=20;goto B46762e;
case 0x467631:c.instructions+=19;goto B467631;
case 0x467634:c.instructions+=18;goto B467634;
case 0x46763a:c.instructions+=17;goto B46763a;
case 0x467640:c.instructions+=16;goto B467640;
case 0x467646:c.instructions+=15;goto B467646;
case 0x46764c:c.instructions+=14;goto B46764c;
case 0x467652:c.instructions+=13;goto B467652;
case 0x467658:c.instructions+=12;goto B467658;
case 0x46765e:c.instructions+=11;goto B46765e;
case 0x467661:c.instructions+=10;goto B467661;
case 0x467664:c.instructions+=9;goto B467664;
case 0x467667:c.instructions+=8;goto B467667;
case 0x46766a:c.instructions+=7;goto B46766a;
case 0x46766d:c.instructions+=6;goto B46766d;
case 0x46766f:c.instructions+=5;goto B46766f;
case 0x467671:c.instructions+=4;goto B467671;
case 0x467673:c.instructions+=3;goto B467673;
case 0x467677:c.instructions+=2;goto B467677;
case 0x46767b:c.instructions+=1;goto B46767b;
case 0x46767d:goto L46767d;
case 0x467682:c.instructions+=4;goto B467682;
case 0x467684:c.instructions+=3;goto B467684;
case 0x467687:c.instructions+=2;goto B467687;
case 0x46768b:c.instructions+=1;goto B46768b;
case 0x46768d:goto L46768d;
case 0x467691:goto L467691;
case 0x467693:c.instructions+=2;goto B467693;
case 0x467696:c.instructions+=1;goto B467696;
case 0x467698:goto L467698;
case 0x46769e:c.instructions+=4;goto B46769e;
case 0x4676a0:c.instructions+=3;goto B4676a0;
case 0x4676a3:c.instructions+=2;goto B4676a3;
case 0x4676a5:c.instructions+=1;goto B4676a5;
case 0x4676a7:goto L4676a7;
case 0x4676aa:c.instructions+=2;goto B4676aa;
case 0x4676ac:c.instructions+=1;goto B4676ac;
case 0x4676ae:goto L4676ae;
case 0x4676b4:goto L4676b4;
case 0x4676b6:goto L4676b6;
case 0x4676b9:c.instructions+=4;goto B4676b9;
case 0x4676ba:c.instructions+=3;goto B4676ba;
case 0x4676bd:c.instructions+=2;goto B4676bd;
case 0x4676bf:c.instructions+=1;goto B4676bf;
case 0x4676c1:goto L4676c1;
case 0x4676c4:c.instructions+=2;goto B4676c4;
case 0x4676c8:c.instructions+=1;goto B4676c8;
case 0x4676ce:goto L4676ce;
case 0x4676d1:goto L4676d1;
case 0x4676d3:c.instructions+=2;goto B4676d3;
case 0x4676d6:c.instructions+=1;goto B4676d6;
case 0x4676dc:goto L4676dc;
case 0x4676de:c.instructions+=7;goto B4676de;
case 0x4676e1:c.instructions+=6;goto B4676e1;
case 0x4676e3:c.instructions+=5;goto B4676e3;
case 0x4676e5:c.instructions+=4;goto B4676e5;
case 0x4676e8:c.instructions+=3;goto B4676e8;
case 0x4676eb:c.instructions+=2;goto B4676eb;
case 0x4676ee:c.instructions+=1;goto B4676ee;
case 0x4676f0:goto L4676f0;
case 0x4676f2:c.instructions+=9;goto B4676f2;
case 0x4676f6:c.instructions+=8;goto B4676f6;
case 0x4676f9:c.instructions+=7;goto B4676f9;
case 0x4676fb:c.instructions+=6;goto B4676fb;
case 0x4676fe:c.instructions+=5;goto B4676fe;
case 0x467701:c.instructions+=4;goto B467701;
case 0x467705:c.instructions+=3;goto B467705;
case 0x467708:c.instructions+=2;goto B467708;
case 0x46770a:c.instructions+=1;goto B46770a;
case 0x46770d:goto L46770d;
case 0x467710:c.instructions+=2;goto B467710;
case 0x467713:c.instructions+=1;goto B467713;
case 0x467715:goto L467715;
case 0x467718:c.instructions+=7;goto B467718;
case 0x46771b:c.instructions+=6;goto B46771b;
case 0x46771e:c.instructions+=5;goto B46771e;
case 0x467722:c.instructions+=4;goto B467722;
case 0x467725:c.instructions+=3;goto B467725;
case 0x467727:c.instructions+=2;goto B467727;
case 0x467729:c.instructions+=1;goto B467729;
case 0x46772b:goto L46772b;
case 0x46772d:c.instructions+=1;goto B46772d;
case 0x467730:goto L467730;
case 0x467732:c.instructions+=7;goto B467732;
case 0x467735:c.instructions+=6;goto B467735;
case 0x467738:c.instructions+=5;goto B467738;
case 0x46773a:c.instructions+=4;goto B46773a;
case 0x46773b:c.instructions+=3;goto B46773b;
case 0x46773e:c.instructions+=2;goto B46773e;
case 0x467741:c.instructions+=1;goto B467741;
case 0x467743:goto L467743;
case 0x467746:goto L467746;
case 0x467749:c.instructions+=2;goto B467749;
case 0x46774c:c.instructions+=1;goto B46774c;
case 0x46774e:goto L46774e;
case 0x467751:c.instructions+=2;goto B467751;
case 0x467754:c.instructions+=1;goto B467754;
case 0x467757:goto L467757;
case 0x46775a:c.instructions+=2;goto B46775a;
case 0x46775d:c.instructions+=1;goto B46775d;
case 0x467763:goto L467763;
case 0x467766:c.instructions+=6;goto B467766;
case 0x467769:c.instructions+=5;goto B467769;
case 0x46776c:c.instructions+=4;goto B46776c;
case 0x467770:c.instructions+=3;goto B467770;
case 0x467774:c.instructions+=2;goto B467774;
case 0x46777c:c.instructions+=1;goto B46777c;
case 0x46777e:goto L46777e;
case 0x467780:goto L467780;
case 0x467782:c.instructions+=6;goto B467782;
case 0x467785:c.instructions+=5;goto B467785;
case 0x467788:c.instructions+=4;goto B467788;
case 0x46778a:c.instructions+=3;goto B46778a;
case 0x467790:c.instructions+=2;goto B467790;
case 0x467792:c.instructions+=1;goto B467792;
case 0x467794:goto L467794;
case 0x467798:c.instructions+=1;goto B467798;
case 0x4677a0:goto L4677a0;
case 0x4677a2:c.instructions+=4;goto B4677a2;
case 0x4677a5:c.instructions+=3;goto B4677a5;
case 0x4677ab:c.instructions+=2;goto B4677ab;
case 0x4677af:c.instructions+=1;goto B4677af;
case 0x4677b1:goto L4677b1;
case 0x4677b5:c.instructions+=1;goto B4677b5;
case 0x4677b7:goto L4677b7;
case 0x4677b8:goto L4677b8;
case 0x4677bc:c.instructions+=4;goto B4677bc;
case 0x4677bf:c.instructions+=3;goto B4677bf;
case 0x4677c0:c.instructions+=2;goto B4677c0;
case 0x4677c4:c.instructions+=1;goto B4677c4;
case 0x4677c6:goto L4677c6;
case 0x4677c8:c.instructions+=10;goto B4677c8;
case 0x4677cb:c.instructions+=9;goto B4677cb;
case 0x4677ce:c.instructions+=8;goto B4677ce;
case 0x4677d0:c.instructions+=7;goto B4677d0;
case 0x4677d4:c.instructions+=6;goto B4677d4;
case 0x4677d7:c.instructions+=5;goto B4677d7;
case 0x4677da:c.instructions+=4;goto B4677da;
case 0x4677db:c.instructions+=3;goto B4677db;
case 0x4677dd:c.instructions+=2;goto B4677dd;
case 0x4677e1:c.instructions+=1;goto B4677e1;
case 0x4677e3:goto L4677e3;
case 0x4677e6:c.instructions+=2;goto B4677e6;
case 0x4677e9:c.instructions+=1;goto B4677e9;
case 0x4677ef:goto L4677ef;
case 0x4677f1:c.instructions+=15;goto B4677f1;
case 0x4677f5:c.instructions+=14;goto B4677f5;
case 0x4677f8:c.instructions+=13;goto B4677f8;
case 0x4677f9:c.instructions+=12;goto B4677f9;
case 0x4677fc:c.instructions+=11;goto B4677fc;
case 0x4677fe:c.instructions+=10;goto B4677fe;
case 0x467801:c.instructions+=9;goto B467801;
case 0x467804:c.instructions+=8;goto B467804;
case 0x467807:c.instructions+=7;goto B467807;
case 0x46780a:c.instructions+=6;goto B46780a;
case 0x46780c:c.instructions+=5;goto B46780c;
case 0x46780f:c.instructions+=4;goto B46780f;
case 0x467813:c.instructions+=3;goto B467813;
case 0x467817:c.instructions+=2;goto B467817;
case 0x46781f:c.instructions+=1;goto B46781f;
case 0x467821:goto L467821;
case 0x467823:c.instructions+=6;goto B467823;
case 0x467826:c.instructions+=5;goto B467826;
case 0x467829:c.instructions+=4;goto B467829;
case 0x46782b:c.instructions+=3;goto B46782b;
case 0x467831:c.instructions+=2;goto B467831;
case 0x467833:c.instructions+=1;goto B467833;
case 0x467835:goto L467835;
case 0x467839:c.instructions+=1;goto B467839;
case 0x467840:goto L467840;
case 0x467842:c.instructions+=4;goto B467842;
case 0x467845:c.instructions+=3;goto B467845;
case 0x46784b:c.instructions+=2;goto B46784b;
case 0x46784f:c.instructions+=1;goto B46784f;
case 0x467851:goto L467851;
case 0x467855:c.instructions+=1;goto B467855;
case 0x467857:goto L467857;
case 0x467858:goto L467858;
case 0x46785c:c.instructions+=4;goto B46785c;
case 0x46785f:c.instructions+=3;goto B46785f;
case 0x467860:c.instructions+=2;goto B467860;
case 0x467864:c.instructions+=1;goto B467864;
case 0x467866:goto L467866;
case 0x467868:c.instructions+=10;goto B467868;
case 0x46786b:c.instructions+=9;goto B46786b;
case 0x46786e:c.instructions+=8;goto B46786e;
case 0x467870:c.instructions+=7;goto B467870;
case 0x467874:c.instructions+=6;goto B467874;
case 0x467877:c.instructions+=5;goto B467877;
case 0x46787a:c.instructions+=4;goto B46787a;
case 0x46787b:c.instructions+=3;goto B46787b;
case 0x46787d:c.instructions+=2;goto B46787d;
case 0x467881:c.instructions+=1;goto B467881;
case 0x467883:goto L467883;
case 0x467887:c.instructions+=1;goto B467887;
case 0x46788b:goto L46788b;
case 0x46788f:c.instructions+=8;goto B46788f;
case 0x467892:c.instructions+=7;goto B467892;
case 0x467895:c.instructions+=6;goto B467895;
case 0x467896:c.instructions+=5;goto B467896;
case 0x467899:c.instructions+=4;goto B467899;
case 0x46789b:c.instructions+=3;goto B46789b;
case 0x46789f:c.instructions+=2;goto B46789f;
case 0x4678a3:c.instructions+=1;goto B4678a3;
case 0x4678a9:goto L4678a9;
case 0x4678aa:c.instructions+=5;goto B4678aa;
case 0x4678ab:c.instructions+=4;goto B4678ab;
case 0x4678ac:c.instructions+=3;goto B4678ac;
case 0x4678ad:c.instructions+=2;goto B4678ad;
case 0x4678b0:c.instructions+=1;goto B4678b0;
case 0x4678c0:goto L4678c0;
case 0x4678c5:c.instructions+=10;goto B4678c5;
case 0x4678c6:c.instructions+=9;goto B4678c6;
case 0x4678c7:c.instructions+=8;goto B4678c7;
case 0x4678c8:c.instructions+=7;goto B4678c8;
case 0x4678c9:c.instructions+=6;goto B4678c9;
case 0x4678cb:c.instructions+=5;goto B4678cb;
case 0x4678ce:c.instructions+=4;goto B4678ce;
case 0x4678d3:c.instructions+=3;goto B4678d3;
case 0x4678d4:c.instructions+=2;goto B4678d4;
case 0x4678d6:c.instructions+=1;goto B4678d6;
case 0x4678db:goto L4678db;
case 0x4678e1:c.instructions+=7;goto B4678e1;
case 0x4678e2:c.instructions+=6;goto B4678e2;
case 0x4678e7:c.instructions+=5;goto B4678e7;
case 0x4678ea:c.instructions+=4;goto B4678ea;
case 0x4678ef:c.instructions+=3;goto B4678ef;
case 0x4678f0:c.instructions+=2;goto B4678f0;
case 0x4678f2:c.instructions+=1;goto B4678f2;
case 0x4678f7:goto L4678f7;
case 0x4678fd:c.instructions+=7;goto B4678fd;
case 0x4678fe:c.instructions+=6;goto B4678fe;
case 0x467903:c.instructions+=5;goto B467903;
case 0x467906:c.instructions+=4;goto B467906;
case 0x46790b:c.instructions+=3;goto B46790b;
case 0x46790c:c.instructions+=2;goto B46790c;
case 0x46790e:c.instructions+=1;goto B46790e;
case 0x467913:goto L467913;
case 0x467918:c.instructions+=7;goto B467918;
case 0x46791d:c.instructions+=6;goto B46791d;
case 0x467920:c.instructions+=5;goto B467920;
case 0x467921:c.instructions+=4;goto B467921;
case 0x467926:c.instructions+=3;goto B467926;
case 0x467927:c.instructions+=2;goto B467927;
case 0x467929:c.instructions+=1;goto B467929;
case 0x46792e:goto L46792e;
case 0x467934:c.instructions+=8;goto B467934;
case 0x467937:c.instructions+=7;goto B467937;
case 0x467938:c.instructions+=6;goto B467938;
case 0x46793d:c.instructions+=5;goto B46793d;
case 0x467940:c.instructions+=4;goto B467940;
case 0x467945:c.instructions+=3;goto B467945;
case 0x467946:c.instructions+=2;goto B467946;
case 0x467948:c.instructions+=1;goto B467948;
case 0x46794d:goto L46794d;
case 0x467953:c.instructions+=7;goto B467953;
case 0x467954:c.instructions+=6;goto B467954;
case 0x467959:c.instructions+=5;goto B467959;
case 0x46795c:c.instructions+=4;goto B46795c;
case 0x467961:c.instructions+=3;goto B467961;
case 0x467962:c.instructions+=2;goto B467962;
case 0x467964:c.instructions+=1;goto B467964;
case 0x467969:goto L467969;
case 0x46796e:c.instructions+=7;goto B46796e;
case 0x467973:c.instructions+=6;goto B467973;
case 0x467976:c.instructions+=5;goto B467976;
case 0x467977:c.instructions+=4;goto B467977;
case 0x46797c:c.instructions+=3;goto B46797c;
case 0x46797d:c.instructions+=2;goto B46797d;
case 0x46797f:c.instructions+=1;goto B46797f;
case 0x467984:goto L467984;
case 0x467989:c.instructions+=9;goto B467989;
case 0x46798c:c.instructions+=8;goto B46798c;
case 0x46798f:c.instructions+=7;goto B46798f;
case 0x467992:c.instructions+=6;goto B467992;
case 0x467995:c.instructions+=5;goto B467995;
case 0x46799b:c.instructions+=4;goto B46799b;
case 0x46799c:c.instructions+=3;goto B46799c;
case 0x46799f:c.instructions+=2;goto B46799f;
case 0x4679a1:c.instructions+=1;goto B4679a1;
case 0x4679a6:goto L4679a6;
case 0x4679ac:c.instructions+=3;goto B4679ac;
case 0x4679af:c.instructions+=2;goto B4679af;
case 0x4679b1:c.instructions+=1;goto B4679b1;
case 0x4679b3:goto L4679b3;
case 0x4679b8:c.instructions+=5;goto B4679b8;
case 0x4679bb:c.instructions+=4;goto B4679bb;
case 0x4679c0:c.instructions+=3;goto B4679c0;
case 0x4679c1:c.instructions+=2;goto B4679c1;
case 0x4679c2:c.instructions+=1;goto B4679c2;
case 0x4679c7:goto L4679c7;
case 0x4679ca:c.instructions+=1;goto B4679ca;
case 0x4679cc:goto L4679cc;
case 0x4679cf:c.instructions+=6;goto B4679cf;
case 0x4679d2:c.instructions+=5;goto B4679d2;
case 0x4679d8:c.instructions+=4;goto B4679d8;
case 0x4679d9:c.instructions+=3;goto B4679d9;
case 0x4679dc:c.instructions+=2;goto B4679dc;
case 0x4679de:c.instructions+=1;goto B4679de;
case 0x4679e3:goto L4679e3;
case 0x4679e9:c.instructions+=3;goto B4679e9;
case 0x4679ec:c.instructions+=2;goto B4679ec;
case 0x4679ee:c.instructions+=1;goto B4679ee;
case 0x4679f0:goto L4679f0;
case 0x4679f5:c.instructions+=5;goto B4679f5;
case 0x4679f8:c.instructions+=4;goto B4679f8;
case 0x4679fd:c.instructions+=3;goto B4679fd;
case 0x4679fe:c.instructions+=2;goto B4679fe;
case 0x4679ff:c.instructions+=1;goto B4679ff;
case 0x467a04:goto L467a04;
case 0x467a07:c.instructions+=1;goto B467a07;
case 0x467a09:goto L467a09;
case 0x467a0c:c.instructions+=6;goto B467a0c;
case 0x467a0f:c.instructions+=5;goto B467a0f;
case 0x467a15:c.instructions+=4;goto B467a15;
case 0x467a16:c.instructions+=3;goto B467a16;
case 0x467a19:c.instructions+=2;goto B467a19;
case 0x467a1b:c.instructions+=1;goto B467a1b;
case 0x467a20:goto L467a20;
case 0x467a26:c.instructions+=3;goto B467a26;
case 0x467a29:c.instructions+=2;goto B467a29;
case 0x467a2b:c.instructions+=1;goto B467a2b;
case 0x467a2d:goto L467a2d;
case 0x467a32:c.instructions+=5;goto B467a32;
case 0x467a35:c.instructions+=4;goto B467a35;
case 0x467a3a:c.instructions+=3;goto B467a3a;
case 0x467a3b:c.instructions+=2;goto B467a3b;
case 0x467a3c:c.instructions+=1;goto B467a3c;
case 0x467a41:goto L467a41;
case 0x467a44:c.instructions+=1;goto B467a44;
case 0x467a46:goto L467a46;
case 0x467a49:c.instructions+=6;goto B467a49;
case 0x467a4f:c.instructions+=5;goto B467a4f;
case 0x467a55:c.instructions+=4;goto B467a55;
case 0x467a56:c.instructions+=3;goto B467a56;
case 0x467a59:c.instructions+=2;goto B467a59;
case 0x467a5b:c.instructions+=1;goto B467a5b;
case 0x467a60:goto L467a60;
case 0x467a66:c.instructions+=3;goto B467a66;
case 0x467a69:c.instructions+=2;goto B467a69;
case 0x467a6b:c.instructions+=1;goto B467a6b;
case 0x467a6d:goto L467a6d;
case 0x467a72:c.instructions+=5;goto B467a72;
case 0x467a75:c.instructions+=4;goto B467a75;
case 0x467a7a:c.instructions+=3;goto B467a7a;
case 0x467a7b:c.instructions+=2;goto B467a7b;
case 0x467a7c:c.instructions+=1;goto B467a7c;
case 0x467a81:goto L467a81;
case 0x467a84:c.instructions+=1;goto B467a84;
case 0x467a86:goto L467a86;
case 0x467a89:c.instructions+=6;goto B467a89;
case 0x467a8f:c.instructions+=5;goto B467a8f;
case 0x467a95:c.instructions+=4;goto B467a95;
case 0x467a96:c.instructions+=3;goto B467a96;
case 0x467a99:c.instructions+=2;goto B467a99;
case 0x467a9b:c.instructions+=1;goto B467a9b;
case 0x467aa0:goto L467aa0;
case 0x467aa6:c.instructions+=3;goto B467aa6;
case 0x467aa9:c.instructions+=2;goto B467aa9;
case 0x467aab:c.instructions+=1;goto B467aab;
case 0x467aad:goto L467aad;
case 0x467ab2:c.instructions+=5;goto B467ab2;
case 0x467ab5:c.instructions+=4;goto B467ab5;
case 0x467aba:c.instructions+=3;goto B467aba;
case 0x467abb:c.instructions+=2;goto B467abb;
case 0x467abc:c.instructions+=1;goto B467abc;
case 0x467ac1:goto L467ac1;
case 0x467ac4:c.instructions+=1;goto B467ac4;
case 0x467ac6:goto L467ac6;
case 0x467ac9:c.instructions+=6;goto B467ac9;
case 0x467acf:c.instructions+=5;goto B467acf;
case 0x467ad5:c.instructions+=4;goto B467ad5;
case 0x467ad6:c.instructions+=3;goto B467ad6;
case 0x467ad9:c.instructions+=2;goto B467ad9;
case 0x467adb:c.instructions+=1;goto B467adb;
case 0x467ae0:goto L467ae0;
case 0x467ae6:c.instructions+=3;goto B467ae6;
case 0x467ae9:c.instructions+=2;goto B467ae9;
case 0x467aeb:c.instructions+=1;goto B467aeb;
case 0x467aed:goto L467aed;
case 0x467af2:c.instructions+=5;goto B467af2;
case 0x467af5:c.instructions+=4;goto B467af5;
case 0x467afa:c.instructions+=3;goto B467afa;
case 0x467afb:c.instructions+=2;goto B467afb;
case 0x467afc:c.instructions+=1;goto B467afc;
case 0x467b01:goto L467b01;
case 0x467b04:c.instructions+=1;goto B467b04;
case 0x467b06:goto L467b06;
case 0x467b09:c.instructions+=6;goto B467b09;
case 0x467b0f:c.instructions+=5;goto B467b0f;
case 0x467b15:c.instructions+=4;goto B467b15;
case 0x467b16:c.instructions+=3;goto B467b16;
case 0x467b19:c.instructions+=2;goto B467b19;
case 0x467b1b:c.instructions+=1;goto B467b1b;
case 0x467b20:goto L467b20;
case 0x467b26:c.instructions+=3;goto B467b26;
case 0x467b29:c.instructions+=2;goto B467b29;
case 0x467b2b:c.instructions+=1;goto B467b2b;
case 0x467b2d:goto L467b2d;
case 0x467b32:c.instructions+=5;goto B467b32;
case 0x467b35:c.instructions+=4;goto B467b35;
case 0x467b3a:c.instructions+=3;goto B467b3a;
case 0x467b3b:c.instructions+=2;goto B467b3b;
case 0x467b3c:c.instructions+=1;goto B467b3c;
case 0x467b41:goto L467b41;
case 0x467b44:c.instructions+=5;goto B467b44;
case 0x467b45:c.instructions+=4;goto B467b45;
case 0x467b4b:c.instructions+=3;goto B467b4b;
case 0x467b4c:c.instructions+=2;goto B467b4c;
case 0x467b4d:c.instructions+=1;goto B467b4d;
case 0x467b4e:goto L467b4e;
case 0x467b4f:c.instructions+=4;goto B467b4f;
case 0x467b55:c.instructions+=3;goto B467b55;
case 0x467b56:c.instructions+=2;goto B467b56;
case 0x467b57:c.instructions+=1;goto B467b57;
case 0x467b60:goto L467b60;
case 0x467b64:c.instructions+=11;goto B467b64;
case 0x467b68:c.instructions+=10;goto B467b68;
case 0x467b69:c.instructions+=9;goto B467b69;
case 0x467b6b:c.instructions+=8;goto B467b6b;
case 0x467b6f:c.instructions+=7;goto B467b6f;
case 0x467b72:c.instructions+=6;goto B467b72;
case 0x467b76:c.instructions+=5;goto B467b76;
case 0x467b78:c.instructions+=4;goto B467b78;
case 0x467b7b:c.instructions+=3;goto B467b7b;
case 0x467b7e:c.instructions+=2;goto B467b7e;
case 0x467b81:c.instructions+=1;goto B467b81;
case 0x467b83:goto L467b83;
case 0x467b84:c.instructions+=6;goto B467b84;
case 0x467b85:c.instructions+=5;goto B467b85;
case 0x467b8c:c.instructions+=4;goto B467b8c;
case 0x467b92:c.instructions+=3;goto B467b92;
case 0x467b93:c.instructions+=2;goto B467b93;
case 0x467b95:c.instructions+=1;goto B467b95;
case 0x467b9a:goto L467b9a;
case 0x467ba0:c.instructions+=3;goto B467ba0;
case 0x467ba3:c.instructions+=2;goto B467ba3;
case 0x467ba5:c.instructions+=1;goto B467ba5;
case 0x467ba7:goto L467ba7;
case 0x467bac:c.instructions+=5;goto B467bac;
case 0x467baf:c.instructions+=4;goto B467baf;
case 0x467bb4:c.instructions+=3;goto B467bb4;
case 0x467bb5:c.instructions+=2;goto B467bb5;
case 0x467bb6:c.instructions+=1;goto B467bb6;
case 0x467bbb:goto L467bbb;
case 0x467bbe:c.instructions+=1;goto B467bbe;
case 0x467bc0:goto L467bc0;
case 0x467bc1:c.instructions+=6;goto B467bc1;
case 0x467bc4:c.instructions+=5;goto B467bc4;
case 0x467bc5:c.instructions+=4;goto B467bc5;
case 0x467bcc:c.instructions+=3;goto B467bcc;
case 0x467bd3:c.instructions+=2;goto B467bd3;
case 0x467bd4:c.instructions+=1;goto B467bd4;
case 0x467bd7:goto L467bd7;
case 0x467bdc:c.instructions+=6;goto B467bdc;
case 0x467bdf:c.instructions+=5;goto B467bdf;
case 0x467be2:c.instructions+=4;goto B467be2;
case 0x467be5:c.instructions+=3;goto B467be5;
case 0x467be8:c.instructions+=2;goto B467be8;
case 0x467be9:c.instructions+=1;goto B467be9;
case 0x467bf0:goto L467bf0;
case 0x467bf1:c.instructions+=8;goto B467bf1;
case 0x467bf5:c.instructions+=7;goto B467bf5;
case 0x467bf6:c.instructions+=6;goto B467bf6;
case 0x467bf8:c.instructions+=5;goto B467bf8;
case 0x467bfb:c.instructions+=4;goto B467bfb;
case 0x467bfc:c.instructions+=3;goto B467bfc;
case 0x467bfe:c.instructions+=2;goto B467bfe;
case 0x467c00:c.instructions+=1;goto B467c00;
case 0x467c02:goto L467c02;
case 0x467c05:c.instructions+=3;goto B467c05;
case 0x467c08:c.instructions+=2;goto B467c08;
case 0x467c0a:c.instructions+=1;goto B467c0a;
case 0x467c0d:goto L467c0d;
case 0x467c0f:c.instructions+=1;goto B467c0f;
case 0x467c11:goto L467c11;
case 0x467c14:c.instructions+=3;goto B467c14;
case 0x467c15:c.instructions+=2;goto B467c15;
case 0x467c17:c.instructions+=1;goto B467c17;
case 0x467c19:goto L467c19;
case 0x467c1c:c.instructions+=6;goto B467c1c;
case 0x467c1d:c.instructions+=5;goto B467c1d;
case 0x467c23:c.instructions+=4;goto B467c23;
case 0x467c26:c.instructions+=3;goto B467c26;
case 0x467c27:c.instructions+=2;goto B467c27;
case 0x467c28:c.instructions+=1;goto B467c28;
case 0x467c2b:goto L467c2b;
case 0x467c2e:c.instructions+=5;goto B467c2e;
case 0x467c31:c.instructions+=4;goto B467c31;
case 0x467c32:c.instructions+=3;goto B467c32;
case 0x467c33:c.instructions+=2;goto B467c33;
case 0x467c34:c.instructions+=1;goto B467c34;
case 0x467c40:goto L467c40;
case 0x467c41:c.instructions+=6;goto B467c41;
case 0x467c42:c.instructions+=5;goto B467c42;
case 0x467c44:c.instructions+=4;goto B467c44;
case 0x467c47:c.instructions+=3;goto B467c47;
case 0x467c49:c.instructions+=2;goto B467c49;
case 0x467c4b:c.instructions+=1;goto B467c4b;
case 0x467c4d:goto L467c4d;
case 0x467c50:goto L467c50;
case 0x467c53:c.instructions+=3;goto B467c53;
case 0x467c56:c.instructions+=2;goto B467c56;
case 0x467c58:c.instructions+=1;goto B467c58;
case 0x467c5b:goto L467c5b;
case 0x467c5e:c.instructions+=5;goto B467c5e;
case 0x467c61:c.instructions+=4;goto B467c61;
case 0x467c67:c.instructions+=3;goto B467c67;
case 0x467c68:c.instructions+=2;goto B467c68;
case 0x467c69:c.instructions+=1;goto B467c69;
case 0x467c6e:goto L467c6e;
case 0x467c71:c.instructions+=6;goto B467c71;
case 0x467c74:c.instructions+=5;goto B467c74;
case 0x467c7b:c.instructions+=4;goto B467c7b;
case 0x467c7e:c.instructions+=3;goto B467c7e;
case 0x467c7f:c.instructions+=2;goto B467c7f;
case 0x467c81:c.instructions+=1;goto B467c81;
case 0x467c83:goto L467c83;
case 0x467c84:c.instructions+=2;goto B467c84;
case 0x467c85:c.instructions+=1;goto B467c85;
case 0x467c90:goto L467c90;
case 0x467c91:c.instructions+=6;goto B467c91;
case 0x467c93:c.instructions+=5;goto B467c93;
case 0x467c96:c.instructions+=4;goto B467c96;
case 0x467c97:c.instructions+=3;goto B467c97;
case 0x467c99:c.instructions+=2;goto B467c99;
case 0x467c9b:c.instructions+=1;goto B467c9b;
case 0x467c9d:goto L467c9d;
case 0x467ca0:goto L467ca0;
case 0x467ca3:c.instructions+=5;goto B467ca3;
case 0x467ca6:c.instructions+=4;goto B467ca6;
case 0x467cac:c.instructions+=3;goto B467cac;
case 0x467cad:c.instructions+=2;goto B467cad;
case 0x467cae:c.instructions+=1;goto B467cae;
case 0x467cb3:goto L467cb3;
case 0x467cb6:c.instructions+=6;goto B467cb6;
case 0x467cb9:c.instructions+=5;goto B467cb9;
case 0x467cc0:c.instructions+=4;goto B467cc0;
case 0x467cc3:c.instructions+=3;goto B467cc3;
case 0x467cc4:c.instructions+=2;goto B467cc4;
case 0x467cc6:c.instructions+=1;goto B467cc6;
case 0x467cc8:goto L467cc8;
case 0x467ccb:c.instructions+=3;goto B467ccb;
case 0x467ccd:c.instructions+=2;goto B467ccd;
case 0x467ccf:c.instructions+=1;goto B467ccf;
case 0x467cd1:goto L467cd1;
case 0x467cd4:c.instructions+=5;goto B467cd4;
case 0x467cd7:c.instructions+=4;goto B467cd7;
case 0x467cdc:c.instructions+=3;goto B467cdc;
case 0x467cdd:c.instructions+=2;goto B467cdd;
case 0x467cde:c.instructions+=1;goto B467cde;
case 0x467ce3:goto L467ce3;
case 0x467ce6:c.instructions+=6;goto B467ce6;
case 0x467ce9:c.instructions+=5;goto B467ce9;
case 0x467cf0:c.instructions+=4;goto B467cf0;
case 0x467cf3:c.instructions+=3;goto B467cf3;
case 0x467cf4:c.instructions+=2;goto B467cf4;
case 0x467cf6:c.instructions+=1;goto B467cf6;
case 0x467cf8:goto L467cf8;
case 0x467cfb:c.instructions+=2;goto B467cfb;
case 0x467cfd:c.instructions+=1;goto B467cfd;
case 0x467cff:goto L467cff;
case 0x467d00:c.instructions+=1;goto B467d00;
case 0x467d05:goto L467d05;
case 0x467d08:goto L467d08;
case 0x467d0b:c.instructions+=2;goto B467d0b;
case 0x467d0d:c.instructions+=1;goto B467d0d;
case 0x467d0f:goto L467d0f;
case 0x467d10:c.instructions+=1;goto B467d10;
case 0x467d15:goto L467d15;
case 0x467d18:goto L467d18;
case 0x467d19:c.instructions+=2;goto B467d19;
case 0x467d1a:c.instructions+=1;goto B467d1a;
case 0x467d20:goto L467d20;
case 0x467d21:c.instructions+=6;goto B467d21;
case 0x467d22:c.instructions+=5;goto B467d22;
case 0x467d24:c.instructions+=4;goto B467d24;
case 0x467d27:c.instructions+=3;goto B467d27;
case 0x467d29:c.instructions+=2;goto B467d29;
case 0x467d2b:c.instructions+=1;goto B467d2b;
case 0x467d2d:goto L467d2d;
case 0x467d30:goto L467d30;
case 0x467d33:c.instructions+=3;goto B467d33;
case 0x467d36:c.instructions+=2;goto B467d36;
case 0x467d38:c.instructions+=1;goto B467d38;
case 0x467d3b:goto L467d3b;
case 0x467d3e:c.instructions+=5;goto B467d3e;
case 0x467d41:c.instructions+=4;goto B467d41;
case 0x467d47:c.instructions+=3;goto B467d47;
case 0x467d48:c.instructions+=2;goto B467d48;
case 0x467d49:c.instructions+=1;goto B467d49;
case 0x467d4e:goto L467d4e;
case 0x467d51:c.instructions+=6;goto B467d51;
case 0x467d54:c.instructions+=5;goto B467d54;
case 0x467d5b:c.instructions+=4;goto B467d5b;
case 0x467d5e:c.instructions+=3;goto B467d5e;
case 0x467d5f:c.instructions+=2;goto B467d5f;
case 0x467d61:c.instructions+=1;goto B467d61;
case 0x467d63:goto L467d63;
case 0x467d64:c.instructions+=2;goto B467d64;
case 0x467d65:c.instructions+=1;goto B467d65;
case 0x467d70:goto L467d70;
case 0x467d71:c.instructions+=6;goto B467d71;
case 0x467d72:c.instructions+=5;goto B467d72;
case 0x467d74:c.instructions+=4;goto B467d74;
case 0x467d77:c.instructions+=3;goto B467d77;
case 0x467d79:c.instructions+=2;goto B467d79;
case 0x467d7b:c.instructions+=1;goto B467d7b;
case 0x467d7d:goto L467d7d;
case 0x467d80:goto L467d80;
case 0x467d83:c.instructions+=3;goto B467d83;
case 0x467d86:c.instructions+=2;goto B467d86;
case 0x467d88:c.instructions+=1;goto B467d88;
case 0x467d8b:goto L467d8b;
case 0x467d8e:c.instructions+=5;goto B467d8e;
case 0x467d91:c.instructions+=4;goto B467d91;
case 0x467d97:c.instructions+=3;goto B467d97;
case 0x467d98:c.instructions+=2;goto B467d98;
case 0x467d99:c.instructions+=1;goto B467d99;
case 0x467d9e:goto L467d9e;
case 0x467da1:c.instructions+=6;goto B467da1;
case 0x467da4:c.instructions+=5;goto B467da4;
case 0x467dab:c.instructions+=4;goto B467dab;
case 0x467dae:c.instructions+=3;goto B467dae;
case 0x467daf:c.instructions+=2;goto B467daf;
case 0x467db1:c.instructions+=1;goto B467db1;
case 0x467db3:goto L467db3;
case 0x467db4:c.instructions+=2;goto B467db4;
case 0x467db5:c.instructions+=1;goto B467db5;
case 0x467dc0:goto L467dc0;
case 0x467dc3:c.instructions+=9;goto B467dc3;
case 0x467dc4:c.instructions+=8;goto B467dc4;
case 0x467dc5:c.instructions+=7;goto B467dc5;
case 0x467dc8:c.instructions+=6;goto B467dc8;
case 0x467dca:c.instructions+=5;goto B467dca;
case 0x467dcc:c.instructions+=4;goto B467dcc;
case 0x467dce:c.instructions+=3;goto B467dce;
case 0x467dd2:c.instructions+=2;goto B467dd2;
case 0x467dd6:c.instructions+=1;goto B467dd6;
case 0x467dd8:goto L467dd8;
case 0x467ddb:c.instructions+=4;goto B467ddb;
case 0x467ddf:c.instructions+=3;goto B467ddf;
case 0x467de0:c.instructions+=2;goto B467de0;
case 0x467de4:c.instructions+=1;goto B467de4;
case 0x467de5:goto L467de5;
case 0x467de7:c.instructions+=2;goto B467de7;
case 0x467de9:c.instructions+=1;goto B467de9;
case 0x467deb:goto L467deb;
case 0x467dee:c.instructions+=2;goto B467dee;
case 0x467df0:c.instructions+=1;goto B467df0;
case 0x467df2:goto L467df2;
case 0x467df4:c.instructions+=5;goto B467df4;
case 0x467df7:c.instructions+=4;goto B467df7;
case 0x467df9:c.instructions+=3;goto B467df9;
case 0x467dff:c.instructions+=2;goto B467dff;
case 0x467e02:c.instructions+=1;goto B467e02;
case 0x467e04:goto L467e04;
case 0x467e06:c.instructions+=4;goto B467e06;
case 0x467e09:c.instructions+=3;goto B467e09;
case 0x467e0c:c.instructions+=2;goto B467e0c;
case 0x467e0f:c.instructions+=1;goto B467e0f;
case 0x467e11:goto L467e11;
case 0x467e15:goto L467e15;
case 0x467e18:c.instructions+=2;goto B467e18;
case 0x467e19:c.instructions+=1;goto B467e19;
case 0x467e1b:goto L467e1b;
case 0x467e1f:goto L467e1f;
case 0x467e23:c.instructions+=5;goto B467e23;
case 0x467e24:c.instructions+=4;goto B467e24;
case 0x467e27:c.instructions+=3;goto B467e27;
case 0x467e29:c.instructions+=2;goto B467e29;
case 0x467e2d:c.instructions+=1;goto B467e2d;
case 0x467e2f:goto L467e2f;
case 0x467e33:c.instructions+=2;goto B467e33;
case 0x467e34:c.instructions+=1;goto B467e34;
case 0x467e35:goto L467e35;
case 0x467e36:c.instructions+=3;goto B467e36;
case 0x467e37:c.instructions+=2;goto B467e37;
case 0x467e3a:c.instructions+=1;goto B467e3a;
case 0x467e40:goto L467e40;
case 0x467e41:c.instructions+=5;goto B467e41;
case 0x467e42:c.instructions+=4;goto B467e42;
case 0x467e44:c.instructions+=3;goto B467e44;
case 0x467e47:c.instructions+=2;goto B467e47;
case 0x467e49:c.instructions+=1;goto B467e49;
case 0x467e4b:goto L467e4b;
case 0x467e50:goto L467e50;
case 0x467e52:c.instructions+=1;goto B467e52;
case 0x467e57:goto L467e57;
case 0x467e59:c.instructions+=1;goto B467e59;
case 0x467e5b:goto L467e5b;
case 0x467e5d:c.instructions+=3;goto B467e5d;
case 0x467e60:c.instructions+=2;goto B467e60;
case 0x467e62:c.instructions+=1;goto B467e62;
case 0x467e64:goto L467e64;
case 0x467e66:c.instructions+=3;goto B467e66;
case 0x467e67:c.instructions+=2;goto B467e67;
case 0x467e68:c.instructions+=1;goto B467e68;
case 0x467e69:goto L467e69;
case 0x467e6c:c.instructions+=3;goto B467e6c;
case 0x467e6d:c.instructions+=2;goto B467e6d;
case 0x467e6e:c.instructions+=1;goto B467e6e;
case 0x467e70:goto L467e70;
case 0x467e71:c.instructions+=6;goto B467e71;
case 0x467e73:c.instructions+=5;goto B467e73;
case 0x467e76:c.instructions+=4;goto B467e76;
case 0x467e77:c.instructions+=3;goto B467e77;
case 0x467e79:c.instructions+=2;goto B467e79;
case 0x467e7b:c.instructions+=1;goto B467e7b;
case 0x467e7d:goto L467e7d;
case 0x467e80:goto L467e80;
case 0x467e83:c.instructions+=3;goto B467e83;
case 0x467e86:c.instructions+=2;goto B467e86;
case 0x467e88:c.instructions+=1;goto B467e88;
case 0x467e8b:goto L467e8b;
case 0x467e8e:c.instructions+=3;goto B467e8e;
case 0x467e8f:c.instructions+=2;goto B467e8f;
case 0x467e91:c.instructions+=1;goto B467e91;
case 0x467e93:goto L467e93;
case 0x467e96:c.instructions+=3;goto B467e96;
case 0x467e98:c.instructions+=2;goto B467e98;
case 0x467e9a:c.instructions+=1;goto B467e9a;
case 0x467e9c:goto L467e9c;
case 0x467ea0:goto L467ea0;
case 0x467ea3:c.instructions+=3;goto B467ea3;
case 0x467ea6:c.instructions+=2;goto B467ea6;
case 0x467ea8:c.instructions+=1;goto B467ea8;
case 0x467eab:goto L467eab;
case 0x467eae:c.instructions+=3;goto B467eae;
case 0x467eaf:c.instructions+=2;goto B467eaf;
case 0x467eb1:c.instructions+=1;goto B467eb1;
case 0x467eb3:goto L467eb3;
case 0x467eb6:c.instructions+=4;goto B467eb6;
case 0x467eb8:c.instructions+=3;goto B467eb8;
case 0x467eba:c.instructions+=2;goto B467eba;
case 0x467ebb:c.instructions+=1;goto B467ebb;
case 0x467ebd:goto L467ebd;
case 0x467ec1:goto L467ec1;
case 0x467ec4:c.instructions+=4;goto B467ec4;
case 0x467ec7:c.instructions+=3;goto B467ec7;
case 0x467ec9:c.instructions+=2;goto B467ec9;
case 0x467eca:c.instructions+=1;goto B467eca;
case 0x467ecd:goto L467ecd;
case 0x467ed0:c.instructions+=3;goto B467ed0;
case 0x467ed1:c.instructions+=2;goto B467ed1;
case 0x467ed3:c.instructions+=1;goto B467ed3;
case 0x467ed5:goto L467ed5;
case 0x467ed8:c.instructions+=3;goto B467ed8;
case 0x467eda:c.instructions+=2;goto B467eda;
case 0x467edc:c.instructions+=1;goto B467edc;
case 0x467ede:goto L467ede;
case 0x467ee0:goto L467ee0;
case 0x467ee3:c.instructions+=3;goto B467ee3;
case 0x467ee6:c.instructions+=2;goto B467ee6;
case 0x467ee8:c.instructions+=1;goto B467ee8;
case 0x467eeb:goto L467eeb;
case 0x467eee:c.instructions+=3;goto B467eee;
case 0x467eef:c.instructions+=2;goto B467eef;
case 0x467ef1:c.instructions+=1;goto B467ef1;
case 0x467ef3:goto L467ef3;
case 0x467ef6:c.instructions+=3;goto B467ef6;
case 0x467ef8:c.instructions+=2;goto B467ef8;
case 0x467efa:c.instructions+=1;goto B467efa;
case 0x467efc:goto L467efc;
case 0x467f01:c.instructions+=1;goto B467f01;
case 0x467f02:goto L467f02;
case 0x467f08:c.instructions+=5;goto B467f08;
case 0x467f0b:c.instructions+=4;goto B467f0b;
case 0x467f0d:c.instructions+=3;goto B467f0d;
case 0x467f10:c.instructions+=2;goto B467f10;
case 0x467f13:c.instructions+=1;goto B467f13;
case 0x467f15:goto L467f15;
case 0x467f18:c.instructions+=1;goto B467f18;
case 0x467f1a:goto L467f1a;
case 0x467f1d:c.instructions+=5;goto B467f1d;
case 0x467f20:c.instructions+=4;goto B467f20;
case 0x467f23:c.instructions+=3;goto B467f23;
case 0x467f25:c.instructions+=2;goto B467f25;
case 0x467f27:c.instructions+=1;goto B467f27;
case 0x467f29:goto L467f29;
case 0x467f2c:c.instructions+=1;goto B467f2c;
case 0x467f30:goto L467f30;
case 0x467f32:c.instructions+=7;goto B467f32;
case 0x467f35:c.instructions+=6;goto B467f35;
case 0x467f38:c.instructions+=5;goto B467f38;
case 0x467f3b:c.instructions+=4;goto B467f3b;
case 0x467f3c:c.instructions+=3;goto B467f3c;
case 0x467f3f:c.instructions+=2;goto B467f3f;
case 0x467f41:c.instructions+=1;goto B467f41;
case 0x467f43:goto L467f43;
case 0x467f46:c.instructions+=2;goto B467f46;
case 0x467f49:c.instructions+=1;goto B467f49;
case 0x467f4b:goto L467f4b;
case 0x467f4e:goto L467f4e;
case 0x467f51:c.instructions+=2;goto B467f51;
case 0x467f54:c.instructions+=1;goto B467f54;
case 0x467f56:goto L467f56;
case 0x467f59:goto L467f59;
case 0x467f5c:c.instructions+=3;goto B467f5c;
case 0x467f5d:c.instructions+=2;goto B467f5d;
case 0x467f5f:c.instructions+=1;goto B467f5f;
case 0x467f61:goto L467f61;
case 0x467f62:goto L467f62;
case 0x467f65:c.instructions+=4;goto B467f65;
case 0x467f67:c.instructions+=3;goto B467f67;
case 0x467f69:c.instructions+=2;goto B467f69;
case 0x467f6a:c.instructions+=1;goto B467f6a;
case 0x467f6c:goto L467f6c;
case 0x467f70:goto L467f70;
case 0x467f73:c.instructions+=3;goto B467f73;
case 0x467f76:c.instructions+=2;goto B467f76;
case 0x467f78:c.instructions+=1;goto B467f78;
case 0x467f7b:goto L467f7b;
case 0x467f7e:c.instructions+=3;goto B467f7e;
case 0x467f7f:c.instructions+=2;goto B467f7f;
case 0x467f81:c.instructions+=1;goto B467f81;
case 0x467f83:goto L467f83;
case 0x467f84:c.instructions+=2;goto B467f84;
case 0x467f85:c.instructions+=1;goto B467f85;
case 0x467f90:goto L467f90;
case 0x467f92:c.instructions+=13;goto B467f92;
case 0x467f97:c.instructions+=12;goto B467f97;
case 0x467f9d:c.instructions+=11;goto B467f9d;
case 0x467f9e:c.instructions+=10;goto B467f9e;
case 0x467fa5:c.instructions+=9;goto B467fa5;
case 0x467fa6:c.instructions+=8;goto B467fa6;
case 0x467fa7:c.instructions+=7;goto B467fa7;
case 0x467fa9:c.instructions+=6;goto B467fa9;
case 0x467fad:c.instructions+=5;goto B467fad;
case 0x467fb3:c.instructions+=4;goto B467fb3;
case 0x467fb6:c.instructions+=3;goto B467fb6;
case 0x467fb8:c.instructions+=2;goto B467fb8;
case 0x467fc0:c.instructions+=1;goto B467fc0;
case 0x467fc2:goto L467fc2;
case 0x467fc4:c.instructions+=2;goto B467fc4;
case 0x467fc6:c.instructions+=1;goto B467fc6;
case 0x467fc8:goto L467fc8;
case 0x467fcf:goto L467fcf;
case 0x467fd3:c.instructions+=5;goto B467fd3;
case 0x467fd9:c.instructions+=4;goto B467fd9;
case 0x467fda:c.instructions+=3;goto B467fda;
case 0x467fe1:c.instructions+=2;goto B467fe1;
case 0x467fe4:c.instructions+=1;goto B467fe4;
case 0x467ff0:goto L467ff0;
case 0x467ff1:c.instructions+=3;goto B467ff1;
case 0x467ff5:c.instructions+=2;goto B467ff5;
case 0x467ff7:c.instructions+=1;goto B467ff7;
case 0x467ff9:goto L467ff9;
case 0x467ffe:c.instructions+=2;goto B467ffe;
case 0x467fff:c.instructions+=1;goto B467fff;
default:missing_instruction(c.pc);}
B467002:L467002:{c.instructions+=2;NFSU2_TR(0x467002);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467003:{NFSU2_TR(0x467003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467008ull));
TAIL_STATIC(0x466c60u,466);
}
B467008:L467008:{c.instructions+=10;NFSU2_TR(0x467008);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46700c:{NFSU2_TR(0x46700c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46700f:{NFSU2_TR(0x46700f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467013:{NFSU2_TR(0x467013);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B467017:{NFSU2_TR(0x467017);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467019:{NFSU2_TR(0x467019);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46701b:{NFSU2_TR(0x46701b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B467021:{NFSU2_TR(0x467021);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467029:{NFSU2_TR(0x467029);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46702d:{NFSU2_TR(0x46702d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467083;}}
}
B46702f:L46702f:{c.instructions+=3;NFSU2_TR(0x46702f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B467033:{NFSU2_TR(0x467033);
__builtin_memmove((R+0),(R+28),4);
}
B467035:{NFSU2_TR(0x467035);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B467037:L467037:{c.instructions+=22;NFSU2_TR(0x467037);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B46703a:{NFSU2_TR(0x46703a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B46703e:{NFSU2_TR(0x46703e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B467040:{NFSU2_TR(0x467040);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467044:{NFSU2_TR(0x467044);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467048:{NFSU2_TR(0x467048);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46704c:{NFSU2_TR(0x46704c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B467050:{NFSU2_TR(0x467050);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B467054:{NFSU2_TR(0x467054);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B467058:{NFSU2_TR(0x467058);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46705c:{NFSU2_TR(0x46705c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B467060:{NFSU2_TR(0x467060);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B467065:{NFSU2_TR(0x467065);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B467069:{NFSU2_TR(0x467069);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46706d:{NFSU2_TR(0x46706d);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B467070:{NFSU2_TR(0x467070);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467074:{NFSU2_TR(0x467074);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467077:{NFSU2_TR(0x467077);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B467078:{NFSU2_TR(0x467078);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46707c:{NFSU2_TR(0x46707c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B46707f:{NFSU2_TR(0x46707f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467081:{NFSU2_TR(0x467081);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467037u);}goto L467037;}}
}
B467083:L467083:{c.instructions+=13;NFSU2_TR(0x467083);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467086:{NFSU2_TR(0x467086);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B467089:{NFSU2_TR(0x467089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B46708c:{NFSU2_TR(0x46708c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467090:{NFSU2_TR(0x467090);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467093:{NFSU2_TR(0x467093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467096:{NFSU2_TR(0x467096);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B467098:{NFSU2_TR(0x467098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46709b:{NFSU2_TR(0x46709b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46709f:{NFSU2_TR(0x46709f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4670a2:{NFSU2_TR(0x4670a2);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B4670a4:{NFSU2_TR(0x4670a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4670a6:{NFSU2_TR(0x4670a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4670da;}}
}
B4670a8:L4670a8:{c.instructions+=8;NFSU2_TR(0x4670a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4670af:{NFSU2_TR(0x4670af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4670b2:{NFSU2_TR(0x4670b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4670b5:{NFSU2_TR(0x4670b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4670b6:{NFSU2_TR(0x4670b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4670b7:{NFSU2_TR(0x4670b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4670b8:{NFSU2_TR(0x4670b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4670bb:{NFSU2_TR(0x4670bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4670c0ull));
TAIL_STATIC(0x466c60u,466);
}
B4670c0:L4670c0:{c.instructions+=8;NFSU2_TR(0x4670c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4670c4:{NFSU2_TR(0x4670c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4670c7:{NFSU2_TR(0x4670c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4670ca:{NFSU2_TR(0x4670ca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B4670cc:{NFSU2_TR(0x4670cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4670cf:{NFSU2_TR(0x4670cf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4670d3:{NFSU2_TR(0x4670d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B4670d6:{NFSU2_TR(0x4670d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4670da:L4670da:{c.instructions+=12;NFSU2_TR(0x4670da);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4670dd:{NFSU2_TR(0x4670dd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4670e1:{NFSU2_TR(0x4670e1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4670e5:{NFSU2_TR(0x4670e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4670e9:{NFSU2_TR(0x4670e9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4670ed:{NFSU2_TR(0x4670ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4670f1:{NFSU2_TR(0x4670f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4670f5:{NFSU2_TR(0x4670f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4670f8:{NFSU2_TR(0x4670f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4670fc:{NFSU2_TR(0x4670fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4670ff:{NFSU2_TR(0x4670ff);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467102:{NFSU2_TR(0x467102);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467108;}}
}
B467104:L467104:{c.instructions+=2;NFSU2_TR(0x467104);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B467105:{NFSU2_TR(0x467105);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467108:L467108:{c.instructions+=9;NFSU2_TR(0x467108);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46710c:{NFSU2_TR(0x46710c);
u8 U[8];
w4(U+0,u32(u32(u32(0x264ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467113:{NFSU2_TR(0x467113);
__builtin_memmove((R+4),(R+0),4);
}
B467115:{NFSU2_TR(0x467115);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B467117:{NFSU2_TR(0x467117);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B46711d:{NFSU2_TR(0x46711d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46711f:{NFSU2_TR(0x46711f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467123:{NFSU2_TR(0x467123);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467127:{NFSU2_TR(0x467127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46712cull));
TAIL_STATIC(0x721f99u,721);
}
B46712c:L46712c:{c.instructions+=6;NFSU2_TR(0x46712c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467130:{NFSU2_TR(0x467130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467133:{NFSU2_TR(0x467133);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B467137:{NFSU2_TR(0x467137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467138:{NFSU2_TR(0x467138);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467139:{NFSU2_TR(0x467139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46713eull));
TAIL_STATIC(0x723515u,723);
}
B46713e:L46713e:{c.instructions+=2;NFSU2_TR(0x46713e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467141:{NFSU2_TR(0x467141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467146ull));
TAIL_STATIC(0x721fa7u,721);
}
B467146:L467146:{c.instructions+=5;NFSU2_TR(0x467146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467147:{NFSU2_TR(0x467147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467148:{NFSU2_TR(0x467148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467149:{NFSU2_TR(0x467149);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x254ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x254ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x254ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46714f:{NFSU2_TR(0x46714f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467160:L467160:{c.instructions+=7;NFSU2_TR(0x467160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B467163:{NFSU2_TR(0x467163);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467167:{NFSU2_TR(0x467167);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B46716b:{NFSU2_TR(0x46716b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46716e:{NFSU2_TR(0x46716e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467170:{NFSU2_TR(0x467170);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467174:{NFSU2_TR(0x467174);
if(r1(R+518)){{goto L467181;}}
}
B467176:L467176:{c.instructions+=3;NFSU2_TR(0x467176);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467179:{NFSU2_TR(0x467179);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46717b:{NFSU2_TR(0x46717b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467189;}}
}
B46717d:L46717d:{c.instructions+=2;NFSU2_TR(0x46717d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46717f:{NFSU2_TR(0x46717f);
if(r1(R+518)){{goto L467189;}}
}
B467181:L467181:{c.instructions+=3;NFSU2_TR(0x467181);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B467183:{NFSU2_TR(0x467183);
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
B467186:{NFSU2_TR(0x467186);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467189:L467189:{c.instructions+=25;NFSU2_TR(0x467189);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46718d:{NFSU2_TR(0x46718d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46718e:{NFSU2_TR(0x46718e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46718f:{NFSU2_TR(0x46718f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B467193:{NFSU2_TR(0x467193);
{u32 ea_=u32(u32(7899280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B467199:{NFSU2_TR(0x467199);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46719d:{NFSU2_TR(0x46719d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4671a1:{NFSU2_TR(0x4671a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4671a5:{NFSU2_TR(0x4671a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4671a9:{NFSU2_TR(0x4671a9);
{u32 ea_=u32(u32(7899284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4671af:{NFSU2_TR(0x4671af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4671b3:{NFSU2_TR(0x4671b3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4671b7:{NFSU2_TR(0x4671b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4671bb:{NFSU2_TR(0x4671bb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4671bf:{NFSU2_TR(0x4671bf);
{u32 ea_=u32(u32(7899288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4671c5:{NFSU2_TR(0x4671c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4671c9:{NFSU2_TR(0x4671c9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4671cd:{NFSU2_TR(0x4671cd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B4671d1:{NFSU2_TR(0x4671d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4671d5:{NFSU2_TR(0x4671d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4671d9:{NFSU2_TR(0x4671d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4671dd:{NFSU2_TR(0x4671dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4671e0:{NFSU2_TR(0x4671e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4671e3:{NFSU2_TR(0x4671e3);
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
B4671e5:{NFSU2_TR(0x4671e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4671f1;}}
}
B4671e7:L4671e7:{c.instructions+=5;NFSU2_TR(0x4671e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4671e8:{NFSU2_TR(0x4671e8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4671ea:{NFSU2_TR(0x4671ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4671eb:{NFSU2_TR(0x4671eb);
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
B4671ee:{NFSU2_TR(0x4671ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4671f1:L4671f1:{c.instructions+=1;NFSU2_TR(0x4671f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4671f6ull));
TAIL_STATIC(0x721f99u,721);
}
B4671f6:L4671f6:{c.instructions+=11;NFSU2_TR(0x4671f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4671fa:{NFSU2_TR(0x4671fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4671fe:{NFSU2_TR(0x4671fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467201:{NFSU2_TR(0x467201);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467205:{NFSU2_TR(0x467205);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467208:{NFSU2_TR(0x467208);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46720c:{NFSU2_TR(0x46720c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46720f:{NFSU2_TR(0x46720f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467213:{NFSU2_TR(0x467213);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467217:{NFSU2_TR(0x467217);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46721a:{NFSU2_TR(0x46721a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46721full));
TAIL_STATIC(0x721fa7u,721);
}
B46721f:L46721f:{c.instructions+=5;NFSU2_TR(0x46721f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467220:{NFSU2_TR(0x467220);
w1(R+0,u8(0x1ull));
}
B467222:{NFSU2_TR(0x467222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467223:{NFSU2_TR(0x467223);
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
B467226:{NFSU2_TR(0x467226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467230:L467230:{c.instructions+=7;NFSU2_TR(0x467230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B467233:{NFSU2_TR(0x467233);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467237:{NFSU2_TR(0x467237);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467238:{NFSU2_TR(0x467238);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46723c:{NFSU2_TR(0x46723c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46723f:{NFSU2_TR(0x46723f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467240:{NFSU2_TR(0x467240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467245ull));
TAIL_STATIC(0x466840u,466);
}
B467245:L467245:{c.instructions+=2;NFSU2_TR(0x467245);
__builtin_memmove((R+24),(R+0),4);
}
B467247:{NFSU2_TR(0x467247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46724cull));
TAIL_STATIC(0x721f99u,721);
}
B46724c:L46724c:{c.instructions+=17;NFSU2_TR(0x46724c);
{u32 ea_=u32(u32(7899284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B467252:{NFSU2_TR(0x467252);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B467258:{NFSU2_TR(0x467258);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46725c:{NFSU2_TR(0x46725c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46725f:{NFSU2_TR(0x46725f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B467263:{NFSU2_TR(0x467263);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B467267:{NFSU2_TR(0x467267);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46726b:{NFSU2_TR(0x46726b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B46726f:{NFSU2_TR(0x46726f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B467273:{NFSU2_TR(0x467273);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B467277:{NFSU2_TR(0x467277);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46727b:{NFSU2_TR(0x46727b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46727f:{NFSU2_TR(0x46727f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B467282:{NFSU2_TR(0x467282);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B467286:{NFSU2_TR(0x467286);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46728a:{NFSU2_TR(0x46728a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46728d:{NFSU2_TR(0x46728d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467292ull));
TAIL_STATIC(0x721fa7u,721);
}
B467292:L467292:{c.instructions+=4;NFSU2_TR(0x467292);
w1(R+0,u8(0x1ull));
}
B467294:{NFSU2_TR(0x467294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467295:{NFSU2_TR(0x467295);
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
B467298:{NFSU2_TR(0x467298);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4672a0:L4672a0:{c.instructions+=8;NFSU2_TR(0x4672a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4672a3:{NFSU2_TR(0x4672a3);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4672a8:{NFSU2_TR(0x4672a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4672ae:{NFSU2_TR(0x4672ae);
__builtin_memmove((R+0),gp(0x82b61c),4);
}
B4672b3:{NFSU2_TR(0x4672b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4672b5:{NFSU2_TR(0x4672b5);
w4(R+8,u32(0x82b61cull));
}
B4672ba:{NFSU2_TR(0x4672ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4672be:{NFSU2_TR(0x4672be);
if(r1(R+518)){{goto L467341;}}
}
B4672c4:L4672c4:{c.instructions+=4;NFSU2_TR(0x4672c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4672c5:{NFSU2_TR(0x4672c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4672c6:{NFSU2_TR(0x4672c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4672c7:{NFSU2_TR(0x4672c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4672c8:L4672c8:{c.instructions+=14;NFSU2_TR(0x4672c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4672ca:{NFSU2_TR(0x4672ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4672cd:{NFSU2_TR(0x4672cd);
__builtin_memmove((R+0),(R+4),4);
}
B4672cf:{NFSU2_TR(0x4672cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B4672d2:{NFSU2_TR(0x4672d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4672d6:{NFSU2_TR(0x4672d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4672da:{NFSU2_TR(0x4672da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4672dd:{NFSU2_TR(0x4672dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4672e0:{NFSU2_TR(0x4672e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4672e3:{NFSU2_TR(0x4672e3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B4672e6:{NFSU2_TR(0x4672e6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B4672ea:{NFSU2_TR(0x4672ea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4672ed:{NFSU2_TR(0x4672ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4672ef:{NFSU2_TR(0x4672ef);
if(r1(R+518)){{goto L467338;}}
}
B4672f1:L4672f1:{c.instructions+=4;NFSU2_TR(0x4672f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4672f4:{NFSU2_TR(0x4672f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4672f7:{NFSU2_TR(0x4672f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4672f9:{NFSU2_TR(0x4672f9);
if(r1(R+518)){{goto L467338;}}
}
B4672fb:L4672fb:{c.instructions+=5;NFSU2_TR(0x4672fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4672fe:{NFSU2_TR(0x4672fe);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B467300:{NFSU2_TR(0x467300);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467302:{NFSU2_TR(0x467302);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467306:{NFSU2_TR(0x467306);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467338;}}
}
B467308:L467308:{c.instructions+=3;NFSU2_TR(0x467308);
w4(R+28,u32(s32(s16(r2(R+12)))));
}
B46730b:{NFSU2_TR(0x46730b);
w4(R+28,u32(0-u32(r4(R+28))));
}
B46730d:{NFSU2_TR(0x46730d);
__builtin_memmove((R+4),(R+4),4);
}
B467310:L467310:{c.instructions+=13;NFSU2_TR(0x467310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467313:{NFSU2_TR(0x467313);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467316:{NFSU2_TR(0x467316);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467319:{NFSU2_TR(0x467319);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46731d:{NFSU2_TR(0x46731d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467320:{NFSU2_TR(0x467320);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffd8f0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B467326:{NFSU2_TR(0x467326);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467329:{NFSU2_TR(0x467329);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46732c:{NFSU2_TR(0x46732c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46732f:{NFSU2_TR(0x46732f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467333:{NFSU2_TR(0x467333);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B467334:{NFSU2_TR(0x467334);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467336:{NFSU2_TR(0x467336);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467310u);}goto L467310;}}
}
B467338:L467338:{c.instructions+=2;NFSU2_TR(0x467338);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46733b:{NFSU2_TR(0x46733b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4672c8u);}goto L4672c8;}}
}
B46733d:L46733d:{c.instructions+=4;NFSU2_TR(0x46733d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46733e:{NFSU2_TR(0x46733e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46733f:{NFSU2_TR(0x46733f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B467340:{NFSU2_TR(0x467340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467341:L467341:{c.instructions+=2;NFSU2_TR(0x467341);
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
B467344:{NFSU2_TR(0x467344);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467350:L467350:{c.instructions+=21;NFSU2_TR(0x467350);
__builtin_memmove((R+8),gp(0x82b620),4);
}
B467356:{NFSU2_TR(0x467356);
__builtin_memmove((R+0),gp(0x82b61c),4);
}
B46735b:{NFSU2_TR(0x46735b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46735c:{NFSU2_TR(0x46735c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46735d:{NFSU2_TR(0x46735d);
__builtin_memmove((R+24),(R+8),4);
}
B46735f:{NFSU2_TR(0x46735f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B467365:{NFSU2_TR(0x467365);
__builtin_memmove((R+4),(R+0),4);
}
B467367:{NFSU2_TR(0x467367);
__builtin_memmove((R+20),(R+8),4);
}
B467369:{NFSU2_TR(0x467369);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B46736f:{NFSU2_TR(0x46736f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467370:{NFSU2_TR(0x467370);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467376:{NFSU2_TR(0x467376);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467379:{NFSU2_TR(0x467379);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B46737c:{NFSU2_TR(0x46737c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B46737f:{NFSU2_TR(0x46737f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B467383:{NFSU2_TR(0x467383);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B467386:{NFSU2_TR(0x467386);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B467389:{NFSU2_TR(0x467389);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B46738c:{NFSU2_TR(0x46738c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B46738f:{NFSU2_TR(0x46738f);
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
B467391:{NFSU2_TR(0x467391);
if(r1(R+518)){{goto L4673f4;}}
}
B467393:L467393:{c.instructions+=4;NFSU2_TR(0x467393);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467396:{NFSU2_TR(0x467396);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467399:{NFSU2_TR(0x467399);
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
B46739b:{NFSU2_TR(0x46739b);
if(r1(R+518)){{goto L4673f4;}}
}
B46739d:L46739d:{c.instructions+=3;NFSU2_TR(0x46739d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4673a0:{NFSU2_TR(0x4673a0);
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
B4673a2:{NFSU2_TR(0x4673a2);
if(r1(R+518)){{goto L4673f4;}}
}
B4673a4:L4673a4:{c.instructions+=6;NFSU2_TR(0x4673a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4673a7:{NFSU2_TR(0x4673a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4673a9:{NFSU2_TR(0x4673a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4673ac:{NFSU2_TR(0x4673ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4673af:{NFSU2_TR(0x4673af);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4673b1:{NFSU2_TR(0x4673b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4673f4;}}
}
B4673b3:L4673b3:{c.instructions+=9;NFSU2_TR(0x4673b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4673b6:{NFSU2_TR(0x4673b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4673b9:{NFSU2_TR(0x4673b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4673bc:{NFSU2_TR(0x4673bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4673be:{NFSU2_TR(0x4673be);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B4673c1:{NFSU2_TR(0x4673c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4673c4:{NFSU2_TR(0x4673c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4673c6:{NFSU2_TR(0x4673c6);
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
B4673c8:{NFSU2_TR(0x4673c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4673f4;}}
}
B4673ca:L4673ca:{c.instructions+=1;NFSU2_TR(0x4673ca);
__builtin_memmove((R+12),(R+12),4);
}
B4673d0:L4673d0:{c.instructions+=5;NFSU2_TR(0x4673d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4673d2:{NFSU2_TR(0x4673d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4673d5:{NFSU2_TR(0x4673d5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B4673d8:{NFSU2_TR(0x4673d8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4673da:{NFSU2_TR(0x4673da);
if(r1(R+518)){{goto L4673e8;}}
}
B4673dc:L4673dc:{c.instructions+=4;NFSU2_TR(0x4673dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4673df:{NFSU2_TR(0x4673df);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4673e0:{NFSU2_TR(0x4673e0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4673e2:{NFSU2_TR(0x4673e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4673d0u);}goto L4673d0;}}
}
B4673e4:L4673e4:{c.instructions+=4;NFSU2_TR(0x4673e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4673e5:{NFSU2_TR(0x4673e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4673e6:{NFSU2_TR(0x4673e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4673e7:{NFSU2_TR(0x4673e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4673e8:L4673e8:{c.instructions+=4;NFSU2_TR(0x4673e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4673ea:{NFSU2_TR(0x4673ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff0000ull))));
}
B4673f0:{NFSU2_TR(0x4673f0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4673f2:{NFSU2_TR(0x4673f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4673f4:L4673f4:{c.instructions+=4;NFSU2_TR(0x4673f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4673f5:{NFSU2_TR(0x4673f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4673f6:{NFSU2_TR(0x4673f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4673f7:{NFSU2_TR(0x4673f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467400:L467400:{c.instructions+=3;NFSU2_TR(0x467400);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467404:{NFSU2_TR(0x467404);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467407:{NFSU2_TR(0x467407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467410:L467410:{c.instructions+=2;NFSU2_TR(0x467410);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467413:{NFSU2_TR(0x467413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467420:L467420:{c.instructions+=2;NFSU2_TR(0x467420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467427:{NFSU2_TR(0x467427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467430:L467430:{c.instructions+=3;NFSU2_TR(0x467430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467437:{NFSU2_TR(0x467437);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B46743d:{NFSU2_TR(0x46743d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467440:L467440:{c.instructions+=3;NFSU2_TR(0x467440);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467443:{NFSU2_TR(0x467443);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B467446:{NFSU2_TR(0x467446);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L467457;}}
}
B467448:L467448:{c.instructions+=6;NFSU2_TR(0x467448);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46744b:{NFSU2_TR(0x46744b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46744c:{NFSU2_TR(0x46744c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467450:{NFSU2_TR(0x467450);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B467453:{NFSU2_TR(0x467453);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B467456:{NFSU2_TR(0x467456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467457:L467457:{c.instructions+=1;NFSU2_TR(0x467457);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467460:L467460:{c.instructions+=4;NFSU2_TR(0x467460);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B467465:{NFSU2_TR(0x467465);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467468:{NFSU2_TR(0x467468);
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
B46746a:{NFSU2_TR(0x46746a);
if(r1(R+518)){{goto L467474;}}
}
B46746c:L46746c:{c.instructions+=2;NFSU2_TR(0x46746c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffd8f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467473:{NFSU2_TR(0x467473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467474:L467474:{c.instructions+=6;NFSU2_TR(0x467474);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467477:{NFSU2_TR(0x467477);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46747a:{NFSU2_TR(0x46747a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46747d:{NFSU2_TR(0x46747d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46747f:{NFSU2_TR(0x46747f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467481:{NFSU2_TR(0x467481);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46749a;}}
}
B467483:L467483:{c.instructions+=2;NFSU2_TR(0x467483);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467486:{NFSU2_TR(0x467486);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467487:L467487:{c.instructions+=8;NFSU2_TR(0x467487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B467489:{NFSU2_TR(0x467489);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46748b:{NFSU2_TR(0x46748b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B46748e:{NFSU2_TR(0x46748e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467491:{NFSU2_TR(0x467491);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B467492:{NFSU2_TR(0x467492);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B467495:{NFSU2_TR(0x467495);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467497:{NFSU2_TR(0x467497);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467487u);}goto L467487;}}
}
B467499:L467499:{c.instructions+=1;NFSU2_TR(0x467499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46749a:L46749a:{c.instructions+=3;NFSU2_TR(0x46749a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46749d:{NFSU2_TR(0x46749d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4674a0:{NFSU2_TR(0x4674a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4674a5;}}
}
B4674a2:L4674a2:{c.instructions+=1;NFSU2_TR(0x4674a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674a5:L4674a5:{c.instructions+=3;NFSU2_TR(0x4674a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4674a8:{NFSU2_TR(0x4674a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4674ab:{NFSU2_TR(0x4674ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4674b0;}}
}
B4674ad:L4674ad:{c.instructions+=1;NFSU2_TR(0x4674ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674b0:L4674b0:{c.instructions+=1;NFSU2_TR(0x4674b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4674c0:L4674c0:{c.instructions+=2;NFSU2_TR(0x4674c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4674c3:{NFSU2_TR(0x4674c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4674d0:L4674d0:{c.instructions+=3;NFSU2_TR(0x4674d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4674d4:{NFSU2_TR(0x4674d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674d7:{NFSU2_TR(0x4674d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4674e0:L4674e0:{c.instructions+=12;NFSU2_TR(0x4674e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4674e4:{NFSU2_TR(0x4674e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4674e8:{NFSU2_TR(0x4674e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674eb:{NFSU2_TR(0x4674eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4674ed:{NFSU2_TR(0x4674ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674f0:{NFSU2_TR(0x4674f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B4674f3:{NFSU2_TR(0x4674f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B4674f6:{NFSU2_TR(0x4674f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674f9:{NFSU2_TR(0x4674f9);
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
B4674fb:{NFSU2_TR(0x4674fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4674fe:{NFSU2_TR(0x4674fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467501:{NFSU2_TR(0x467501);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467510:L467510:{c.instructions+=7;NFSU2_TR(0x467510);
__builtin_memmove((R+0),gp(0x82af4c),4);
}
B467515:{NFSU2_TR(0x467515);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467516:{NFSU2_TR(0x467516);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467517:{NFSU2_TR(0x467517);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467519:{NFSU2_TR(0x467519);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46751b:{NFSU2_TR(0x46751b);
__builtin_memmove((R+24),(R+4),4);
}
B46751d:{NFSU2_TR(0x46751d);
if(r1(R+518)){{goto L467528;}}
}
B46751f:L46751f:{c.instructions+=2;NFSU2_TR(0x46751f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467520:{NFSU2_TR(0x467520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467525ull));
TAIL_STATIC(0x440e40u,440);
}
B467525:L467525:{c.instructions+=1;NFSU2_TR(0x467525);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467528:L467528:{c.instructions+=3;NFSU2_TR(0x467528);
__builtin_memmove((R+0),gp(0x82af48),4);
}
B46752d:{NFSU2_TR(0x46752d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46752f:{NFSU2_TR(0x46752f);
if(r1(R+518)){{goto L46753a;}}
}
B467531:L467531:{c.instructions+=2;NFSU2_TR(0x467531);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467532:{NFSU2_TR(0x467532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467537ull));
TAIL_STATIC(0x440e40u,440);
}
B467537:L467537:{c.instructions+=1;NFSU2_TR(0x467537);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46753a:L46753a:{c.instructions+=3;NFSU2_TR(0x46753a);
__builtin_memmove((R+0),gp(0x82af44),4);
}
B46753f:{NFSU2_TR(0x46753f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467541:{NFSU2_TR(0x467541);
if(r1(R+518)){{goto L46754c;}}
}
B467543:L467543:{c.instructions+=2;NFSU2_TR(0x467543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467544:{NFSU2_TR(0x467544);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467549ull));
TAIL_STATIC(0x440e40u,440);
}
B467549:L467549:{c.instructions+=1;NFSU2_TR(0x467549);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46754c:L46754c:{c.instructions+=3;NFSU2_TR(0x46754c);
__builtin_memmove((R+0),gp(0x82af40),4);
}
B467551:{NFSU2_TR(0x467551);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467553:{NFSU2_TR(0x467553);
if(r1(R+518)){{goto L46755e;}}
}
B467555:L467555:{c.instructions+=2;NFSU2_TR(0x467555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467556:{NFSU2_TR(0x467556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46755bull));
TAIL_STATIC(0x440e40u,440);
}
B46755b:L46755b:{c.instructions+=1;NFSU2_TR(0x46755b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46755e:L46755e:{c.instructions+=3;NFSU2_TR(0x46755e);
__builtin_memmove((R+0),gp(0x82af3c),4);
}
B467563:{NFSU2_TR(0x467563);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467565:{NFSU2_TR(0x467565);
if(r1(R+518)){{goto L467570;}}
}
B467567:L467567:{c.instructions+=2;NFSU2_TR(0x467567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467568:{NFSU2_TR(0x467568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46756dull));
TAIL_STATIC(0x440e40u,440);
}
B46756d:L46756d:{c.instructions+=1;NFSU2_TR(0x46756d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467570:L467570:{c.instructions+=3;NFSU2_TR(0x467570);
__builtin_memmove((R+0),gp(0x82af38),4);
}
B467575:{NFSU2_TR(0x467575);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467577:{NFSU2_TR(0x467577);
if(r1(R+518)){{goto L467582;}}
}
B467579:L467579:{c.instructions+=2;NFSU2_TR(0x467579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46757a:{NFSU2_TR(0x46757a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46757full));
TAIL_STATIC(0x440e40u,440);
}
B46757f:L46757f:{c.instructions+=1;NFSU2_TR(0x46757f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467582:L467582:{c.instructions+=3;NFSU2_TR(0x467582);
__builtin_memmove((R+0),gp(0x82af34),4);
}
B467587:{NFSU2_TR(0x467587);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467589:{NFSU2_TR(0x467589);
if(r1(R+518)){{goto L467594;}}
}
B46758b:L46758b:{c.instructions+=2;NFSU2_TR(0x46758b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46758c:{NFSU2_TR(0x46758c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467591ull));
TAIL_STATIC(0x440e40u,440);
}
B467591:L467591:{c.instructions+=1;NFSU2_TR(0x467591);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467594:L467594:{c.instructions+=3;NFSU2_TR(0x467594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467597:{NFSU2_TR(0x467597);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467598:{NFSU2_TR(0x467598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46759dull));
TAIL_STATIC(0x440540u,440);
}
B46759d:L46759d:{c.instructions+=3;NFSU2_TR(0x46759d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4675a0:{NFSU2_TR(0x4675a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675a1:{NFSU2_TR(0x4675a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675a6ull));
TAIL_STATIC(0x440540u,440);
}
B4675a6:L4675a6:{c.instructions+=3;NFSU2_TR(0x4675a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4675ac:{NFSU2_TR(0x4675ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675ad:{NFSU2_TR(0x4675ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675b2ull));
TAIL_STATIC(0x440540u,440);
}
B4675b2:L4675b2:{c.instructions+=3;NFSU2_TR(0x4675b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4675b8:{NFSU2_TR(0x4675b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675b9:{NFSU2_TR(0x4675b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675beull));
TAIL_STATIC(0x440540u,440);
}
B4675be:L4675be:{c.instructions+=3;NFSU2_TR(0x4675be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4675c4:{NFSU2_TR(0x4675c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675c5:{NFSU2_TR(0x4675c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675caull));
TAIL_STATIC(0x440540u,440);
}
B4675ca:L4675ca:{c.instructions+=3;NFSU2_TR(0x4675ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4675d0:{NFSU2_TR(0x4675d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675d1:{NFSU2_TR(0x4675d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675d6ull));
TAIL_STATIC(0x440540u,440);
}
B4675d6:L4675d6:{c.instructions+=3;NFSU2_TR(0x4675d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4675dc:{NFSU2_TR(0x4675dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4675dd:{NFSU2_TR(0x4675dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4675e2ull));
TAIL_STATIC(0x440540u,440);
}
B4675e2:L4675e2:{c.instructions+=12;NFSU2_TR(0x4675e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4675e5:{NFSU2_TR(0x4675e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4675e8:{NFSU2_TR(0x4675e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4675eb:{NFSU2_TR(0x4675eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4675f1:{NFSU2_TR(0x4675f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4675f7:{NFSU2_TR(0x4675f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4675fd:{NFSU2_TR(0x4675fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467603:{NFSU2_TR(0x467603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467609:{NFSU2_TR(0x467609);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46760c:{NFSU2_TR(0x46760c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46760d:{NFSU2_TR(0x46760d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46760e:{NFSU2_TR(0x46760e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467610:L467610:{c.instructions+=33;NFSU2_TR(0x467610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B467613:{NFSU2_TR(0x467613);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467615:{NFSU2_TR(0x467615);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467616:{NFSU2_TR(0x467616);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467617:{NFSU2_TR(0x467617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46761a:{NFSU2_TR(0x46761a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46761b:{NFSU2_TR(0x46761b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46761c:{NFSU2_TR(0x46761c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46761f:{NFSU2_TR(0x46761f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467622:{NFSU2_TR(0x467622);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467625:{NFSU2_TR(0x467625);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467628:{NFSU2_TR(0x467628);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46762b:{NFSU2_TR(0x46762b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46762e:{NFSU2_TR(0x46762e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467631:{NFSU2_TR(0x467631);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467634:{NFSU2_TR(0x467634);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46763a:{NFSU2_TR(0x46763a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467640:{NFSU2_TR(0x467640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467646:{NFSU2_TR(0x467646);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46764c:{NFSU2_TR(0x46764c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467652:{NFSU2_TR(0x467652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467658:{NFSU2_TR(0x467658);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46765e:{NFSU2_TR(0x46765e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467661:{NFSU2_TR(0x467661);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467664:{NFSU2_TR(0x467664);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467667:{NFSU2_TR(0x467667);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46766a:{NFSU2_TR(0x46766a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46766d:{NFSU2_TR(0x46766d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B46766f:{NFSU2_TR(0x46766f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B467671:{NFSU2_TR(0x467671);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467673:{NFSU2_TR(0x467673);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467677:{NFSU2_TR(0x467677);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46767b:{NFSU2_TR(0x46767b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4676c1;}}
}
B46767d:L46767d:{c.instructions+=5;NFSU2_TR(0x46767d);
w4(R+12,u32(0xa4ull));
}
B467682:{NFSU2_TR(0x467682);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B467684:{NFSU2_TR(0x467684);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B467687:{NFSU2_TR(0x467687);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46768b:{NFSU2_TR(0x46768b);
{goto L467691;}
}
B46768d:L46768d:{c.instructions+=1;NFSU2_TR(0x46768d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B467691:L467691:{c.instructions+=3;NFSU2_TR(0x467691);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B467693:{NFSU2_TR(0x467693);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B467696:{NFSU2_TR(0x467696);
if(r1(R+518)){{goto L4676b6;}}
}
B467698:L467698:{c.instructions+=5;NFSU2_TR(0x467698);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B46769e:{NFSU2_TR(0x46769e);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B4676a0:{NFSU2_TR(0x4676a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4676a3:{NFSU2_TR(0x4676a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4676a5:{NFSU2_TR(0x4676a5);
if(r1(R+518)){{goto L4676ae;}}
}
B4676a7:L4676a7:{c.instructions+=3;NFSU2_TR(0x4676a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4676aa:{NFSU2_TR(0x4676aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4676ac:{NFSU2_TR(0x4676ac);
{goto L4676b4;}
}
B4676ae:L4676ae:{c.instructions+=1;NFSU2_TR(0x4676ae);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4676b4:L4676b4:{c.instructions+=1;NFSU2_TR(0x4676b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4676b6:L4676b6:{c.instructions+=5;NFSU2_TR(0x4676b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4676b9:{NFSU2_TR(0x4676b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4676ba:{NFSU2_TR(0x4676ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4676bd:{NFSU2_TR(0x4676bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4676bf:{NFSU2_TR(0x4676bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46768du);}goto L46768d;}}
}
B4676c1:L4676c1:{c.instructions+=3;NFSU2_TR(0x4676c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4676c4:{NFSU2_TR(0x4676c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4676c8:{NFSU2_TR(0x4676c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4678a9;}}
}
B4676ce:L4676ce:{c.instructions+=1;NFSU2_TR(0x4676ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4676d1:L4676d1:{c.instructions+=3;NFSU2_TR(0x4676d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4676d3:{NFSU2_TR(0x4676d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4676d6:{NFSU2_TR(0x4676d6);
if(r1(R+518)){{goto L46788b;}}
}
B4676dc:L4676dc:{c.instructions+=8;NFSU2_TR(0x4676dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4676de:{NFSU2_TR(0x4676de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4676e1:{NFSU2_TR(0x4676e1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B4676e3:{NFSU2_TR(0x4676e3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B4676e5:{NFSU2_TR(0x4676e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4676e8:{NFSU2_TR(0x4676e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4676eb:{NFSU2_TR(0x4676eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4676ee:{NFSU2_TR(0x4676ee);
if(r1(R+518)){{goto L46770d;}}
}
B4676f0:L4676f0:{c.instructions+=10;NFSU2_TR(0x4676f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4676f2:{NFSU2_TR(0x4676f2);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w8(U+12,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+20,u64(s64(s32(r4(U+8)))));
w8(U+28,u64(u64(r8(U+12))*u64(r8(U+20))));
w4(R+24,u32(r8(U+28)));
}
B4676f6:{NFSU2_TR(0x4676f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4676f9:{NFSU2_TR(0x4676f9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B4676fb:{NFSU2_TR(0x4676fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4676fe:{NFSU2_TR(0x4676fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467701:{NFSU2_TR(0x467701);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B467705:{NFSU2_TR(0x467705);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+8,u32(r8(U+20)));
}
B467708:{NFSU2_TR(0x467708);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46770a:{NFSU2_TR(0x46770a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46770d:L46770d:{c.instructions+=3;NFSU2_TR(0x46770d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467710:{NFSU2_TR(0x467710);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467713:{NFSU2_TR(0x467713);
if(r1(R+518)){{goto L467746;}}
}
B467715:L467715:{c.instructions+=8;NFSU2_TR(0x467715);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B467718:{NFSU2_TR(0x467718);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+24,u32(r8(U+20)));
}
B46771b:{NFSU2_TR(0x46771b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B46771e:{NFSU2_TR(0x46771e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B467722:{NFSU2_TR(0x467722);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B467725:{NFSU2_TR(0x467725);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467727:{NFSU2_TR(0x467727);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467729:{NFSU2_TR(0x467729);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467743;}}
}
B46772b:L46772b:{c.instructions+=2;NFSU2_TR(0x46772b);
__builtin_memmove((R+20),(R+8),4);
}
B46772d:{NFSU2_TR(0x46772d);
__builtin_memmove((R+4),(R+4),4);
}
B467730:L467730:{c.instructions+=8;NFSU2_TR(0x467730);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467732:{NFSU2_TR(0x467732);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467735:{NFSU2_TR(0x467735);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B467738:{NFSU2_TR(0x467738);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B46773a:{NFSU2_TR(0x46773a);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B46773b:{NFSU2_TR(0x46773b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B46773e:{NFSU2_TR(0x46773e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B467741:{NFSU2_TR(0x467741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467730u);}goto L467730;}}
}
B467743:L467743:{c.instructions+=1;NFSU2_TR(0x467743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B467746:L467746:{c.instructions+=3;NFSU2_TR(0x467746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467749:{NFSU2_TR(0x467749);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46774c:{NFSU2_TR(0x46774c);
if(r1(R+518)){{goto L467757;}}
}
B46774e:L46774e:{c.instructions+=3;NFSU2_TR(0x46774e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B467751:{NFSU2_TR(0x467751);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+8,u32(r8(U+20)));
}
B467754:{NFSU2_TR(0x467754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B467757:L467757:{c.instructions+=3;NFSU2_TR(0x467757);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46775a:{NFSU2_TR(0x46775a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46775d:{NFSU2_TR(0x46775d);
if(r1(R+518)){{goto L4677e3;}}
}
B467763:L467763:{c.instructions+=7;NFSU2_TR(0x467763);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B467766:{NFSU2_TR(0x467766);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+8,u32(r8(U+20)));
}
B467769:{NFSU2_TR(0x467769);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B46776c:{NFSU2_TR(0x46776c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),u32(0x0ull)));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B467770:{NFSU2_TR(0x467770);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B467774:{NFSU2_TR(0x467774);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46777c:{NFSU2_TR(0x46777c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4677e3;}}
}
B46777e:L46777e:{c.instructions+=1;NFSU2_TR(0x46777e);
__builtin_memmove((R+28),(R+28),4);
}
B467780:L467780:{c.instructions+=7;NFSU2_TR(0x467780);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467782:{NFSU2_TR(0x467782);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467785:{NFSU2_TR(0x467785);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B467788:{NFSU2_TR(0x467788);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46778a:{NFSU2_TR(0x46778a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B467790:{NFSU2_TR(0x467790);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467792:{NFSU2_TR(0x467792);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4677c6;}}
}
B467794:L467794:{c.instructions+=2;NFSU2_TR(0x467794);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467798:{NFSU2_TR(0x467798);
{goto L4677a0;}
}
B4677a0:L4677a0:{c.instructions+=5;NFSU2_TR(0x4677a0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4677a2:{NFSU2_TR(0x4677a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4677a5:{NFSU2_TR(0x4677a5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B4677ab:{NFSU2_TR(0x4677ab);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4677af:{NFSU2_TR(0x4677af);
if(r1(R+518)){{goto L4677b7;}}
}
B4677b1:L4677b1:{c.instructions+=2;NFSU2_TR(0x4677b1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+12))));
}
B4677b5:{NFSU2_TR(0x4677b5);
{goto L4677b8;}
}
B4677b7:L4677b7:{c.instructions+=1;NFSU2_TR(0x4677b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4677b8:L4677b8:{c.instructions+=5;NFSU2_TR(0x4677b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4677bc:{NFSU2_TR(0x4677bc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4677bf:{NFSU2_TR(0x4677bf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4677c0:{NFSU2_TR(0x4677c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4677c4:{NFSU2_TR(0x4677c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4677a0u);}goto L4677a0;}}
}
B4677c6:L4677c6:{c.instructions+=11;NFSU2_TR(0x4677c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4677c8:{NFSU2_TR(0x4677c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4677cb:{NFSU2_TR(0x4677cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4677ce:{NFSU2_TR(0x4677ce);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B4677d0:{NFSU2_TR(0x4677d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4677d4:{NFSU2_TR(0x4677d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4677d7:{NFSU2_TR(0x4677d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4677da:{NFSU2_TR(0x4677da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4677db:{NFSU2_TR(0x4677db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4677dd:{NFSU2_TR(0x4677dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4677e1:{NFSU2_TR(0x4677e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467780u);}goto L467780;}}
}
B4677e3:L4677e3:{c.instructions+=3;NFSU2_TR(0x4677e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4677e6:{NFSU2_TR(0x4677e6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4677e9:{NFSU2_TR(0x4677e9);
if(r1(R+518)){{goto L467883;}}
}
B4677ef:L4677ef:{c.instructions+=16;NFSU2_TR(0x4677ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4677f1:{NFSU2_TR(0x4677f1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B4677f5:{NFSU2_TR(0x4677f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4677f8:{NFSU2_TR(0x4677f8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4677f9:{NFSU2_TR(0x4677f9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B4677fc:{NFSU2_TR(0x4677fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B4677fe:{NFSU2_TR(0x4677fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467801:{NFSU2_TR(0x467801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467804:{NFSU2_TR(0x467804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B467807:{NFSU2_TR(0x467807);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+8,u32(r8(U+20)));
}
B46780a:{NFSU2_TR(0x46780a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46780c:{NFSU2_TR(0x46780c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46780f:{NFSU2_TR(0x46780f);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),u32(0x0ull)));
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B467813:{NFSU2_TR(0x467813);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B467817:{NFSU2_TR(0x467817);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46781f:{NFSU2_TR(0x46781f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467883;}}
}
B467821:L467821:{c.instructions+=7;NFSU2_TR(0x467821);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467823:{NFSU2_TR(0x467823);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467826:{NFSU2_TR(0x467826);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B467829:{NFSU2_TR(0x467829);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46782b:{NFSU2_TR(0x46782b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B467831:{NFSU2_TR(0x467831);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467833:{NFSU2_TR(0x467833);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467866;}}
}
B467835:L467835:{c.instructions+=2;NFSU2_TR(0x467835);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467839:{NFSU2_TR(0x467839);
__builtin_memmove((R+16),(R+16),4);
}
B467840:L467840:{c.instructions+=5;NFSU2_TR(0x467840);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B467842:{NFSU2_TR(0x467842);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467845:{NFSU2_TR(0x467845);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B46784b:{NFSU2_TR(0x46784b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46784f:{NFSU2_TR(0x46784f);
if(r1(R+518)){{goto L467857;}}
}
B467851:L467851:{c.instructions+=2;NFSU2_TR(0x467851);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+12))));
}
B467855:{NFSU2_TR(0x467855);
{goto L467858;}
}
B467857:L467857:{c.instructions+=1;NFSU2_TR(0x467857);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467858:L467858:{c.instructions+=5;NFSU2_TR(0x467858);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46785c:{NFSU2_TR(0x46785c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B46785f:{NFSU2_TR(0x46785f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B467860:{NFSU2_TR(0x467860);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467864:{NFSU2_TR(0x467864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467840u);}goto L467840;}}
}
B467866:L467866:{c.instructions+=11;NFSU2_TR(0x467866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467868:{NFSU2_TR(0x467868);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B46786b:{NFSU2_TR(0x46786b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46786e:{NFSU2_TR(0x46786e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B467870:{NFSU2_TR(0x467870);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467874:{NFSU2_TR(0x467874);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467877:{NFSU2_TR(0x467877);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B46787a:{NFSU2_TR(0x46787a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46787b:{NFSU2_TR(0x46787b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46787d:{NFSU2_TR(0x46787d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467881:{NFSU2_TR(0x467881);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467821u);}goto L467821;}}
}
B467883:L467883:{c.instructions+=2;NFSU2_TR(0x467883);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B467887:{NFSU2_TR(0x467887);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46788b:L46788b:{c.instructions+=9;NFSU2_TR(0x46788b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46788f:{NFSU2_TR(0x46788f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467892:{NFSU2_TR(0x467892);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B467895:{NFSU2_TR(0x467895);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B467896:{NFSU2_TR(0x467896);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B467899:{NFSU2_TR(0x467899);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46789b:{NFSU2_TR(0x46789b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46789f:{NFSU2_TR(0x46789f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4678a3:{NFSU2_TR(0x4678a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4676d1u);}goto L4676d1;}}
}
B4678a9:L4678a9:{c.instructions+=6;NFSU2_TR(0x4678a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4678aa:{NFSU2_TR(0x4678aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4678ab:{NFSU2_TR(0x4678ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4678ac:{NFSU2_TR(0x4678ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4678ad:{NFSU2_TR(0x4678ad);
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
B4678b0:{NFSU2_TR(0x4678b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4678c0:L4678c0:{c.instructions+=11;NFSU2_TR(0x4678c0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4678c5:{NFSU2_TR(0x4678c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678c6:{NFSU2_TR(0x4678c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678c7:{NFSU2_TR(0x4678c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678c8:{NFSU2_TR(0x4678c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678c9:{NFSU2_TR(0x4678c9);
__builtin_memmove((R+24),(R+4),4);
}
B4678cb:{NFSU2_TR(0x4678cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4678ce:{NFSU2_TR(0x4678ce);
u8 U[4];
w4(U+0,u32(0x78a6a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678d3:{NFSU2_TR(0x4678d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678d4:{NFSU2_TR(0x4678d4);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678d6:{NFSU2_TR(0x4678d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4678dbull));
TAIL_STATIC(0x440df0u,440);
}
B4678db:L4678db:{c.instructions+=8;NFSU2_TR(0x4678db);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B4678e1:{NFSU2_TR(0x4678e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678e2:{NFSU2_TR(0x4678e2);
__builtin_memmove(gp(0x82af34),(R+0),4);
}
B4678e7:{NFSU2_TR(0x4678e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4678ea:{NFSU2_TR(0x4678ea);
u8 U[4];
w4(U+0,u32(0x78a68cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678ef:{NFSU2_TR(0x4678ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678f0:{NFSU2_TR(0x4678f0);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678f2:{NFSU2_TR(0x4678f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4678f7ull));
TAIL_STATIC(0x440df0u,440);
}
B4678f7:L4678f7:{c.instructions+=8;NFSU2_TR(0x4678f7);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4678fd:{NFSU2_TR(0x4678fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4678fe:{NFSU2_TR(0x4678fe);
__builtin_memmove(gp(0x82af38),(R+0),4);
}
B467903:{NFSU2_TR(0x467903);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467906:{NFSU2_TR(0x467906);
u8 U[4];
w4(U+0,u32(0x78a674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46790b:{NFSU2_TR(0x46790b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46790c:{NFSU2_TR(0x46790c);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46790e:{NFSU2_TR(0x46790e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467913ull));
TAIL_STATIC(0x440df0u,440);
}
B467913:L467913:{c.instructions+=8;NFSU2_TR(0x467913);
__builtin_memmove(gp(0x82af3c),(R+0),4);
}
B467918:{NFSU2_TR(0x467918);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46791d:{NFSU2_TR(0x46791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467920:{NFSU2_TR(0x467920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467921:{NFSU2_TR(0x467921);
u8 U[4];
w4(U+0,u32(0x78a65cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467926:{NFSU2_TR(0x467926);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467927:{NFSU2_TR(0x467927);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467929:{NFSU2_TR(0x467929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46792eull));
TAIL_STATIC(0x440df0u,440);
}
B46792e:L46792e:{c.instructions+=9;NFSU2_TR(0x46792e);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B467934:{NFSU2_TR(0x467934);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B467937:{NFSU2_TR(0x467937);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467938:{NFSU2_TR(0x467938);
__builtin_memmove(gp(0x82af40),(R+0),4);
}
B46793d:{NFSU2_TR(0x46793d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467940:{NFSU2_TR(0x467940);
u8 U[4];
w4(U+0,u32(0x78a640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467945:{NFSU2_TR(0x467945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467946:{NFSU2_TR(0x467946);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467948:{NFSU2_TR(0x467948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46794dull));
TAIL_STATIC(0x440df0u,440);
}
B46794d:L46794d:{c.instructions+=8;NFSU2_TR(0x46794d);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467953:{NFSU2_TR(0x467953);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467954:{NFSU2_TR(0x467954);
__builtin_memmove(gp(0x82af44),(R+0),4);
}
B467959:{NFSU2_TR(0x467959);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46795c:{NFSU2_TR(0x46795c);
u8 U[4];
w4(U+0,u32(0x78a628ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467961:{NFSU2_TR(0x467961);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467962:{NFSU2_TR(0x467962);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467964:{NFSU2_TR(0x467964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467969ull));
TAIL_STATIC(0x440df0u,440);
}
B467969:L467969:{c.instructions+=8;NFSU2_TR(0x467969);
__builtin_memmove(gp(0x82af48),(R+0),4);
}
B46796e:{NFSU2_TR(0x46796e);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467973:{NFSU2_TR(0x467973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467976:{NFSU2_TR(0x467976);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467977:{NFSU2_TR(0x467977);
u8 U[4];
w4(U+0,u32(0x78a610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46797c:{NFSU2_TR(0x46797c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46797d:{NFSU2_TR(0x46797d);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46797f:{NFSU2_TR(0x46797f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467984ull));
TAIL_STATIC(0x440df0u,440);
}
B467984:L467984:{c.instructions+=10;NFSU2_TR(0x467984);
__builtin_memmove(gp(0x82af4c),(R+0),4);
}
B467989:{NFSU2_TR(0x467989);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46798c:{NFSU2_TR(0x46798c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46798f:{NFSU2_TR(0x46798f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467992:{NFSU2_TR(0x467992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467995:{NFSU2_TR(0x467995);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46799b:{NFSU2_TR(0x46799b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46799c:{NFSU2_TR(0x46799c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B46799f:{NFSU2_TR(0x46799f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4679a1:{NFSU2_TR(0x4679a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4679a6ull));
TAIL_STATIC(0x43e910u,43e);
}
B4679a6:L4679a6:{c.instructions+=4;NFSU2_TR(0x4679a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4679ac:{NFSU2_TR(0x4679ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4679af:{NFSU2_TR(0x4679af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4679b1:{NFSU2_TR(0x4679b1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4679cc;}}
}
B4679b3:L4679b3:{c.instructions+=6;NFSU2_TR(0x4679b3);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4679b8:{NFSU2_TR(0x4679b8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4679bb:{NFSU2_TR(0x4679bb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4679c0:{NFSU2_TR(0x4679c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4679c1:{NFSU2_TR(0x4679c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4679c2:{NFSU2_TR(0x4679c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4679c7ull));
TAIL_STATIC(0x440820u,440);
}
B4679c7:L4679c7:{c.instructions+=2;NFSU2_TR(0x4679c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4679ca:{NFSU2_TR(0x4679ca);
__builtin_memmove((R+12),(R+0),4);
}
B4679cc:L4679cc:{c.instructions+=7;NFSU2_TR(0x4679cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4679cf:{NFSU2_TR(0x4679cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4679d2:{NFSU2_TR(0x4679d2);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4679d8:{NFSU2_TR(0x4679d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4679d9:{NFSU2_TR(0x4679d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B4679dc:{NFSU2_TR(0x4679dc);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4679de:{NFSU2_TR(0x4679de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4679e3ull));
TAIL_STATIC(0x43e910u,43e);
}
B4679e3:L4679e3:{c.instructions+=4;NFSU2_TR(0x4679e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4679e9:{NFSU2_TR(0x4679e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4679ec:{NFSU2_TR(0x4679ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4679ee:{NFSU2_TR(0x4679ee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467a09;}}
}
B4679f0:L4679f0:{c.instructions+=6;NFSU2_TR(0x4679f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4679f5:{NFSU2_TR(0x4679f5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B4679f8:{NFSU2_TR(0x4679f8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B4679fd:{NFSU2_TR(0x4679fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4679fe:{NFSU2_TR(0x4679fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4679ff:{NFSU2_TR(0x4679ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467a04ull));
TAIL_STATIC(0x440820u,440);
}
B467a04:L467a04:{c.instructions+=2;NFSU2_TR(0x467a04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467a07:{NFSU2_TR(0x467a07);
__builtin_memmove((R+12),(R+0),4);
}
B467a09:L467a09:{c.instructions+=7;NFSU2_TR(0x467a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467a0c:{NFSU2_TR(0x467a0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467a0f:{NFSU2_TR(0x467a0f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467a15:{NFSU2_TR(0x467a15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a16:{NFSU2_TR(0x467a16);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B467a19:{NFSU2_TR(0x467a19);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467a1b:{NFSU2_TR(0x467a1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467a20ull));
TAIL_STATIC(0x43e910u,43e);
}
B467a20:L467a20:{c.instructions+=4;NFSU2_TR(0x467a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467a26:{NFSU2_TR(0x467a26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467a29:{NFSU2_TR(0x467a29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467a2b:{NFSU2_TR(0x467a2b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467a46;}}
}
B467a2d:L467a2d:{c.instructions+=6;NFSU2_TR(0x467a2d);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467a32:{NFSU2_TR(0x467a32);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467a35:{NFSU2_TR(0x467a35);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467a3a:{NFSU2_TR(0x467a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a3b:{NFSU2_TR(0x467a3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a3c:{NFSU2_TR(0x467a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467a41ull));
TAIL_STATIC(0x440820u,440);
}
B467a41:L467a41:{c.instructions+=2;NFSU2_TR(0x467a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467a44:{NFSU2_TR(0x467a44);
__builtin_memmove((R+12),(R+0),4);
}
B467a46:L467a46:{c.instructions+=7;NFSU2_TR(0x467a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467a49:{NFSU2_TR(0x467a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467a4f:{NFSU2_TR(0x467a4f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467a55:{NFSU2_TR(0x467a55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a56:{NFSU2_TR(0x467a56);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B467a59:{NFSU2_TR(0x467a59);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467a5b:{NFSU2_TR(0x467a5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467a60ull));
TAIL_STATIC(0x43e910u,43e);
}
B467a60:L467a60:{c.instructions+=4;NFSU2_TR(0x467a60);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467a66:{NFSU2_TR(0x467a66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467a69:{NFSU2_TR(0x467a69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467a6b:{NFSU2_TR(0x467a6b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467a86;}}
}
B467a6d:L467a6d:{c.instructions+=6;NFSU2_TR(0x467a6d);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467a72:{NFSU2_TR(0x467a72);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467a75:{NFSU2_TR(0x467a75);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467a7a:{NFSU2_TR(0x467a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a7b:{NFSU2_TR(0x467a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a7c:{NFSU2_TR(0x467a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467a81ull));
TAIL_STATIC(0x440820u,440);
}
B467a81:L467a81:{c.instructions+=2;NFSU2_TR(0x467a81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467a84:{NFSU2_TR(0x467a84);
__builtin_memmove((R+12),(R+0),4);
}
B467a86:L467a86:{c.instructions+=7;NFSU2_TR(0x467a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467a89:{NFSU2_TR(0x467a89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467a8f:{NFSU2_TR(0x467a8f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467a95:{NFSU2_TR(0x467a95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467a96:{NFSU2_TR(0x467a96);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B467a99:{NFSU2_TR(0x467a99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467a9b:{NFSU2_TR(0x467a9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467aa0ull));
TAIL_STATIC(0x43e910u,43e);
}
B467aa0:L467aa0:{c.instructions+=4;NFSU2_TR(0x467aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467aa6:{NFSU2_TR(0x467aa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467aa9:{NFSU2_TR(0x467aa9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467aab:{NFSU2_TR(0x467aab);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467ac6;}}
}
B467aad:L467aad:{c.instructions+=6;NFSU2_TR(0x467aad);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467ab2:{NFSU2_TR(0x467ab2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467ab5:{NFSU2_TR(0x467ab5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467aba:{NFSU2_TR(0x467aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467abb:{NFSU2_TR(0x467abb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467abc:{NFSU2_TR(0x467abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467ac1ull));
TAIL_STATIC(0x440820u,440);
}
B467ac1:L467ac1:{c.instructions+=2;NFSU2_TR(0x467ac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467ac4:{NFSU2_TR(0x467ac4);
__builtin_memmove((R+12),(R+0),4);
}
B467ac6:L467ac6:{c.instructions+=7;NFSU2_TR(0x467ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467ac9:{NFSU2_TR(0x467ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467acf:{NFSU2_TR(0x467acf);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467ad5:{NFSU2_TR(0x467ad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467ad6:{NFSU2_TR(0x467ad6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B467ad9:{NFSU2_TR(0x467ad9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467adb:{NFSU2_TR(0x467adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467ae0ull));
TAIL_STATIC(0x43e910u,43e);
}
B467ae0:L467ae0:{c.instructions+=4;NFSU2_TR(0x467ae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467ae6:{NFSU2_TR(0x467ae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467ae9:{NFSU2_TR(0x467ae9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B467aeb:{NFSU2_TR(0x467aeb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467b06;}}
}
B467aed:L467aed:{c.instructions+=6;NFSU2_TR(0x467aed);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467af2:{NFSU2_TR(0x467af2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467af5:{NFSU2_TR(0x467af5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467afa:{NFSU2_TR(0x467afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467afb:{NFSU2_TR(0x467afb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467afc:{NFSU2_TR(0x467afc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467b01ull));
TAIL_STATIC(0x440820u,440);
}
B467b01:L467b01:{c.instructions+=2;NFSU2_TR(0x467b01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467b04:{NFSU2_TR(0x467b04);
__builtin_memmove((R+12),(R+0),4);
}
B467b06:L467b06:{c.instructions+=7;NFSU2_TR(0x467b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467b09:{NFSU2_TR(0x467b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b0f:{NFSU2_TR(0x467b0f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467b15:{NFSU2_TR(0x467b15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b16:{NFSU2_TR(0x467b16);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B467b19:{NFSU2_TR(0x467b19);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467b1b:{NFSU2_TR(0x467b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467b20ull));
TAIL_STATIC(0x43e910u,43e);
}
B467b20:L467b20:{c.instructions+=4;NFSU2_TR(0x467b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467b26:{NFSU2_TR(0x467b26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467b29:{NFSU2_TR(0x467b29);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B467b2b:{NFSU2_TR(0x467b2b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467b4e;}}
}
B467b2d:L467b2d:{c.instructions+=6;NFSU2_TR(0x467b2d);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467b32:{NFSU2_TR(0x467b32);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467b35:{NFSU2_TR(0x467b35);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467b3a:{NFSU2_TR(0x467b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b3b:{NFSU2_TR(0x467b3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b3c:{NFSU2_TR(0x467b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467b41ull));
TAIL_STATIC(0x440820u,440);
}
B467b41:L467b41:{c.instructions+=6;NFSU2_TR(0x467b41);
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
B467b44:{NFSU2_TR(0x467b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467b45:{NFSU2_TR(0x467b45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b4b:{NFSU2_TR(0x467b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467b4c:{NFSU2_TR(0x467b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467b4d:{NFSU2_TR(0x467b4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467b4e:L467b4e:{c.instructions+=5;NFSU2_TR(0x467b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467b4f:{NFSU2_TR(0x467b4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b55:{NFSU2_TR(0x467b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467b56:{NFSU2_TR(0x467b56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467b57:{NFSU2_TR(0x467b57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467b60:L467b60:{c.instructions+=12;NFSU2_TR(0x467b60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467b64:{NFSU2_TR(0x467b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467b68:{NFSU2_TR(0x467b68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b69:{NFSU2_TR(0x467b69);
__builtin_memmove((R+24),(R+4),4);
}
B467b6b:{NFSU2_TR(0x467b6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467b6f:{NFSU2_TR(0x467b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b72:{NFSU2_TR(0x467b72);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467b76:{NFSU2_TR(0x467b76);
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
B467b78:{NFSU2_TR(0x467b78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b7b:{NFSU2_TR(0x467b7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b7e:{NFSU2_TR(0x467b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467b81:{NFSU2_TR(0x467b81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L467bd7;}}
}
B467b83:L467b83:{c.instructions+=7;NFSU2_TR(0x467b83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b84:{NFSU2_TR(0x467b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b85:{NFSU2_TR(0x467b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B467b8c:{NFSU2_TR(0x467b8c);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B467b92:{NFSU2_TR(0x467b92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467b93:{NFSU2_TR(0x467b93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B467b95:{NFSU2_TR(0x467b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467b9aull));
TAIL_STATIC(0x43e910u,43e);
}
B467b9a:L467b9a:{c.instructions+=4;NFSU2_TR(0x467b9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B467ba0:{NFSU2_TR(0x467ba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467ba3:{NFSU2_TR(0x467ba3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B467ba5:{NFSU2_TR(0x467ba5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L467bc0;}}
}
B467ba7:L467ba7:{c.instructions+=6;NFSU2_TR(0x467ba7);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B467bac:{NFSU2_TR(0x467bac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B467baf:{NFSU2_TR(0x467baf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B467bb4:{NFSU2_TR(0x467bb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467bb5:{NFSU2_TR(0x467bb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467bb6:{NFSU2_TR(0x467bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467bbbull));
TAIL_STATIC(0x440820u,440);
}
B467bbb:L467bbb:{c.instructions+=2;NFSU2_TR(0x467bbb);
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
B467bbe:{NFSU2_TR(0x467bbe);
__builtin_memmove((R+12),(R+0),4);
}
B467bc0:L467bc0:{c.instructions+=7;NFSU2_TR(0x467bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467bc1:{NFSU2_TR(0x467bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467bc4:{NFSU2_TR(0x467bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467bc5:{NFSU2_TR(0x467bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467bcc:{NFSU2_TR(0x467bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467bd3:{NFSU2_TR(0x467bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467bd4:{NFSU2_TR(0x467bd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467bd7:L467bd7:{c.instructions+=7;NFSU2_TR(0x467bd7);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B467bdc:{NFSU2_TR(0x467bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467bdf:{NFSU2_TR(0x467bdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467be2:{NFSU2_TR(0x467be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467be5:{NFSU2_TR(0x467be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467be8:{NFSU2_TR(0x467be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467be9:{NFSU2_TR(0x467be9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467bf0:L467bf0:{c.instructions+=9;NFSU2_TR(0x467bf0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467bf1:{NFSU2_TR(0x467bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B467bf5:{NFSU2_TR(0x467bf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467bf6:{NFSU2_TR(0x467bf6);
__builtin_memmove((R+24),(R+4),4);
}
B467bf8:{NFSU2_TR(0x467bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467bfb:{NFSU2_TR(0x467bfb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467bfc:{NFSU2_TR(0x467bfc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467bfe:{NFSU2_TR(0x467bfe);
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
B467c00:{NFSU2_TR(0x467c00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467c19;}}
}
B467c02:L467c02:{c.instructions+=4;NFSU2_TR(0x467c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c05:{NFSU2_TR(0x467c05);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467c08:{NFSU2_TR(0x467c08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467c0a:{NFSU2_TR(0x467c0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467c0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467c0d:L467c0d:{c.instructions+=2;NFSU2_TR(0x467c0d);
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
B467c0f:{NFSU2_TR(0x467c0f);
if(r1(R+518)){{goto L467c2b;}}
}
B467c11:L467c11:{c.instructions+=4;NFSU2_TR(0x467c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c14:{NFSU2_TR(0x467c14);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467c15:{NFSU2_TR(0x467c15);
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
B467c17:{NFSU2_TR(0x467c17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467c02u);}goto L467c02;}}
}
B467c19:L467c19:{c.instructions+=7;NFSU2_TR(0x467c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467c1c:{NFSU2_TR(0x467c1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467c1d:{NFSU2_TR(0x467c1d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B467c23:{NFSU2_TR(0x467c23);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467c26:{NFSU2_TR(0x467c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467c27:{NFSU2_TR(0x467c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467c28:{NFSU2_TR(0x467c28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467c2b:L467c2b:{c.instructions+=6;NFSU2_TR(0x467c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c2e:{NFSU2_TR(0x467c2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467c31:{NFSU2_TR(0x467c31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467c32:{NFSU2_TR(0x467c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467c33:{NFSU2_TR(0x467c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467c34:{NFSU2_TR(0x467c34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467c40:L467c40:{c.instructions+=7;NFSU2_TR(0x467c40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c41:{NFSU2_TR(0x467c41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c42:{NFSU2_TR(0x467c42);
__builtin_memmove((R+28),(R+4),4);
}
B467c44:{NFSU2_TR(0x467c44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c47:{NFSU2_TR(0x467c47);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B467c49:{NFSU2_TR(0x467c49);
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
B467c4b:{NFSU2_TR(0x467c4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467c83;}}
}
B467c4d:L467c4d:{c.instructions+=1;NFSU2_TR(0x467c4d);
__builtin_memmove((R+4),(R+4),4);
}
B467c50:L467c50:{c.instructions+=4;NFSU2_TR(0x467c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c53:{NFSU2_TR(0x467c53);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467c56:{NFSU2_TR(0x467c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467c58:{NFSU2_TR(0x467c58);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467c5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467c5b:L467c5b:{c.instructions+=6;NFSU2_TR(0x467c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c5e:{NFSU2_TR(0x467c5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467c61:{NFSU2_TR(0x467c61);
__builtin_memmove((R+8),gp(0x82af3c),4);
}
B467c67:{NFSU2_TR(0x467c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c68:{NFSU2_TR(0x467c68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c69:{NFSU2_TR(0x467c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467c6eull));
TAIL_STATIC(0x43f920u,43f);
}
B467c6e:L467c6e:{c.instructions+=7;NFSU2_TR(0x467c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c71:{NFSU2_TR(0x467c71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467c74:{NFSU2_TR(0x467c74);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B467c7b:{NFSU2_TR(0x467c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c7e:{NFSU2_TR(0x467c7e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B467c7f:{NFSU2_TR(0x467c7f);
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
B467c81:{NFSU2_TR(0x467c81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467c50u);}goto L467c50;}}
}
B467c83:L467c83:{c.instructions+=3;NFSU2_TR(0x467c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467c84:{NFSU2_TR(0x467c84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467c85:{NFSU2_TR(0x467c85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467c90:L467c90:{c.instructions+=7;NFSU2_TR(0x467c90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c91:{NFSU2_TR(0x467c91);
__builtin_memmove((R+24),(R+4),4);
}
B467c93:{NFSU2_TR(0x467c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467c96:{NFSU2_TR(0x467c96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467c97:{NFSU2_TR(0x467c97);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467c99:{NFSU2_TR(0x467c99);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467c9b:{NFSU2_TR(0x467c9b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467cc8;}}
}
B467c9d:L467c9d:{c.instructions+=1;NFSU2_TR(0x467c9d);
__builtin_memmove((R+4),(R+4),4);
}
B467ca0:L467ca0:{c.instructions+=6;NFSU2_TR(0x467ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ca3:{NFSU2_TR(0x467ca3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467ca6:{NFSU2_TR(0x467ca6);
__builtin_memmove((R+8),gp(0x82af34),4);
}
B467cac:{NFSU2_TR(0x467cac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467cad:{NFSU2_TR(0x467cad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467cae:{NFSU2_TR(0x467cae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467cb3ull));
TAIL_STATIC(0x43f920u,43f);
}
B467cb3:L467cb3:{c.instructions+=7;NFSU2_TR(0x467cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467cb6:{NFSU2_TR(0x467cb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467cb9:{NFSU2_TR(0x467cb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B467cc0:{NFSU2_TR(0x467cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467cc3:{NFSU2_TR(0x467cc3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467cc4:{NFSU2_TR(0x467cc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467cc6:{NFSU2_TR(0x467cc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467ca0u);}goto L467ca0;}}
}
B467cc8:L467cc8:{c.instructions+=4;NFSU2_TR(0x467cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ccb:{NFSU2_TR(0x467ccb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467ccd:{NFSU2_TR(0x467ccd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467ccf:{NFSU2_TR(0x467ccf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467cf8;}}
}
B467cd1:L467cd1:{c.instructions+=6;NFSU2_TR(0x467cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467cd4:{NFSU2_TR(0x467cd4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B467cd7:{NFSU2_TR(0x467cd7);
__builtin_memmove((R+0),gp(0x82af38),4);
}
B467cdc:{NFSU2_TR(0x467cdc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467cdd:{NFSU2_TR(0x467cdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467cde:{NFSU2_TR(0x467cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467ce3ull));
TAIL_STATIC(0x43f920u,43f);
}
B467ce3:L467ce3:{c.instructions+=7;NFSU2_TR(0x467ce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467ce6:{NFSU2_TR(0x467ce6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467ce9:{NFSU2_TR(0x467ce9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B467cf0:{NFSU2_TR(0x467cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467cf3:{NFSU2_TR(0x467cf3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467cf4:{NFSU2_TR(0x467cf4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467cf6:{NFSU2_TR(0x467cf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467cd1u);}goto L467cd1;}}
}
B467cf8:L467cf8:{c.instructions+=3;NFSU2_TR(0x467cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467cfb:{NFSU2_TR(0x467cfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467cfd:{NFSU2_TR(0x467cfd);
if(r1(R+518)){{goto L467d08;}}
}
B467cff:L467cff:{c.instructions+=2;NFSU2_TR(0x467cff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d00:{NFSU2_TR(0x467d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d05ull));
TAIL_STATIC(0x440540u,440);
}
B467d05:L467d05:{c.instructions+=1;NFSU2_TR(0x467d05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B467d08:L467d08:{c.instructions+=3;NFSU2_TR(0x467d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467d0b:{NFSU2_TR(0x467d0b);
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
B467d0d:{NFSU2_TR(0x467d0d);
if(r1(R+518)){{goto L467d18;}}
}
B467d0f:L467d0f:{c.instructions+=2;NFSU2_TR(0x467d0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d10:{NFSU2_TR(0x467d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d15ull));
TAIL_STATIC(0x440540u,440);
}
B467d15:L467d15:{c.instructions+=1;NFSU2_TR(0x467d15);
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
B467d18:L467d18:{c.instructions+=3;NFSU2_TR(0x467d18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467d19:{NFSU2_TR(0x467d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467d1a:{NFSU2_TR(0x467d1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467d20:L467d20:{c.instructions+=7;NFSU2_TR(0x467d20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d21:{NFSU2_TR(0x467d21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d22:{NFSU2_TR(0x467d22);
__builtin_memmove((R+28),(R+4),4);
}
B467d24:{NFSU2_TR(0x467d24);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d27:{NFSU2_TR(0x467d27);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B467d29:{NFSU2_TR(0x467d29);
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
B467d2b:{NFSU2_TR(0x467d2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467d63;}}
}
B467d2d:L467d2d:{c.instructions+=1;NFSU2_TR(0x467d2d);
__builtin_memmove((R+4),(R+4),4);
}
B467d30:L467d30:{c.instructions+=4;NFSU2_TR(0x467d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d33:{NFSU2_TR(0x467d33);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467d36:{NFSU2_TR(0x467d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467d38:{NFSU2_TR(0x467d38);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d3bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467d3b:L467d3b:{c.instructions+=6;NFSU2_TR(0x467d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d3e:{NFSU2_TR(0x467d3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467d41:{NFSU2_TR(0x467d41);
__builtin_memmove((R+8),gp(0x82af40),4);
}
B467d47:{NFSU2_TR(0x467d47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d48:{NFSU2_TR(0x467d48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d49:{NFSU2_TR(0x467d49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d4eull));
TAIL_STATIC(0x43f920u,43f);
}
B467d4e:L467d4e:{c.instructions+=7;NFSU2_TR(0x467d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d51:{NFSU2_TR(0x467d51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467d54:{NFSU2_TR(0x467d54);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B467d5b:{NFSU2_TR(0x467d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d5e:{NFSU2_TR(0x467d5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B467d5f:{NFSU2_TR(0x467d5f);
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
B467d61:{NFSU2_TR(0x467d61);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467d30u);}goto L467d30;}}
}
B467d63:L467d63:{c.instructions+=3;NFSU2_TR(0x467d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467d64:{NFSU2_TR(0x467d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467d65:{NFSU2_TR(0x467d65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467d70:L467d70:{c.instructions+=7;NFSU2_TR(0x467d70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d71:{NFSU2_TR(0x467d71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d72:{NFSU2_TR(0x467d72);
__builtin_memmove((R+28),(R+4),4);
}
B467d74:{NFSU2_TR(0x467d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d77:{NFSU2_TR(0x467d77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B467d79:{NFSU2_TR(0x467d79);
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
B467d7b:{NFSU2_TR(0x467d7b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467db3;}}
}
B467d7d:L467d7d:{c.instructions+=1;NFSU2_TR(0x467d7d);
__builtin_memmove((R+4),(R+4),4);
}
B467d80:L467d80:{c.instructions+=4;NFSU2_TR(0x467d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d83:{NFSU2_TR(0x467d83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467d86:{NFSU2_TR(0x467d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467d88:{NFSU2_TR(0x467d88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467d8b:L467d8b:{c.instructions+=6;NFSU2_TR(0x467d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467d8e:{NFSU2_TR(0x467d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467d91:{NFSU2_TR(0x467d91);
__builtin_memmove((R+8),gp(0x82af44),4);
}
B467d97:{NFSU2_TR(0x467d97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d98:{NFSU2_TR(0x467d98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467d99:{NFSU2_TR(0x467d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467d9eull));
TAIL_STATIC(0x43f920u,43f);
}
B467d9e:L467d9e:{c.instructions+=7;NFSU2_TR(0x467d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467da1:{NFSU2_TR(0x467da1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B467da4:{NFSU2_TR(0x467da4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B467dab:{NFSU2_TR(0x467dab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467dae:{NFSU2_TR(0x467dae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B467daf:{NFSU2_TR(0x467daf);
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
B467db1:{NFSU2_TR(0x467db1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467d80u);}goto L467d80;}}
}
B467db3:L467db3:{c.instructions+=3;NFSU2_TR(0x467db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467db4:{NFSU2_TR(0x467db4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467db5:{NFSU2_TR(0x467db5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467dc0:L467dc0:{c.instructions+=10;NFSU2_TR(0x467dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B467dc3:{NFSU2_TR(0x467dc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467dc4:{NFSU2_TR(0x467dc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467dc5:{NFSU2_TR(0x467dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467dc8:{NFSU2_TR(0x467dc8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B467dca:{NFSU2_TR(0x467dca);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B467dcc:{NFSU2_TR(0x467dcc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467dce:{NFSU2_TR(0x467dce);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467dd2:{NFSU2_TR(0x467dd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467dd6:{NFSU2_TR(0x467dd6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467e35;}}
}
B467dd8:L467dd8:{c.instructions+=5;NFSU2_TR(0x467dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467ddb:{NFSU2_TR(0x467ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ddf:{NFSU2_TR(0x467ddf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467de0:{NFSU2_TR(0x467de0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467de4:{NFSU2_TR(0x467de4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467de5:L467de5:{c.instructions+=3;NFSU2_TR(0x467de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467de7:{NFSU2_TR(0x467de7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467de9:{NFSU2_TR(0x467de9);
if(r1(R+518)){{goto L467e1f;}}
}
B467deb:L467deb:{c.instructions+=3;NFSU2_TR(0x467deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467dee:{NFSU2_TR(0x467dee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467df0:{NFSU2_TR(0x467df0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467e1f;}}
}
B467df2:L467df2:{c.instructions+=6;NFSU2_TR(0x467df2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B467df4:{NFSU2_TR(0x467df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467df7:{NFSU2_TR(0x467df7);
__builtin_memmove((R+4),(R+20),4);
}
B467df9:{NFSU2_TR(0x467df9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B467dff:{NFSU2_TR(0x467dff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B467e02:{NFSU2_TR(0x467e02);
__builtin_memmove((R+12),(R+24),4);
}
B467e04:L467e04:{c.instructions+=5;NFSU2_TR(0x467e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B467e06:{NFSU2_TR(0x467e06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467e09:{NFSU2_TR(0x467e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B467e0c:{NFSU2_TR(0x467e0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B467e0f:{NFSU2_TR(0x467e0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L467e15;}}
}
B467e11:L467e11:{c.instructions+=1;NFSU2_TR(0x467e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467e15:L467e15:{c.instructions+=3;NFSU2_TR(0x467e15);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B467e18:{NFSU2_TR(0x467e18);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B467e19:{NFSU2_TR(0x467e19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467e04u);}goto L467e04;}}
}
B467e1b:L467e1b:{c.instructions+=1;NFSU2_TR(0x467e1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B467e1f:L467e1f:{c.instructions+=6;NFSU2_TR(0x467e1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467e23:{NFSU2_TR(0x467e23);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B467e24:{NFSU2_TR(0x467e24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B467e27:{NFSU2_TR(0x467e27);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467e29:{NFSU2_TR(0x467e29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467e2d:{NFSU2_TR(0x467e2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467de5u);}goto L467de5;}}
}
B467e2f:L467e2f:{c.instructions+=3;NFSU2_TR(0x467e2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e33:{NFSU2_TR(0x467e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467e34:{NFSU2_TR(0x467e34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467e35:L467e35:{c.instructions+=4;NFSU2_TR(0x467e35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467e36:{NFSU2_TR(0x467e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B467e37:{NFSU2_TR(0x467e37);
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
B467e3a:{NFSU2_TR(0x467e3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467e40:L467e40:{c.instructions+=6;NFSU2_TR(0x467e40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467e41:{NFSU2_TR(0x467e41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467e42:{NFSU2_TR(0x467e42);
__builtin_memmove((R+28),(R+4),4);
}
B467e44:{NFSU2_TR(0x467e44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467e47:{NFSU2_TR(0x467e47);
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
B467e49:{NFSU2_TR(0x467e49);
if(r1(R+518)){{goto L467e64;}}
}
B467e4b:L467e4b:{c.instructions+=1;NFSU2_TR(0x467e4b);
{goto L467e50;}
}
B467e50:L467e50:{c.instructions+=2;NFSU2_TR(0x467e50);
__builtin_memmove((R+4),(R+24),4);
}
B467e52:{NFSU2_TR(0x467e52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467e57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467e40u);}goto L467e40;}
}
B467e57:L467e57:{c.instructions+=2;NFSU2_TR(0x467e57);
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
B467e59:{NFSU2_TR(0x467e59);
if(r1(R+518)){{goto L467e69;}}
}
B467e5b:L467e5b:{c.instructions+=4;NFSU2_TR(0x467e5b);
__builtin_memmove((R+28),(R+24),4);
}
B467e5d:{NFSU2_TR(0x467e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467e60:{NFSU2_TR(0x467e60);
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
B467e62:{NFSU2_TR(0x467e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467e50u);}goto L467e50;}}
}
B467e64:L467e64:{c.instructions+=4;NFSU2_TR(0x467e64);
__builtin_memmove((R+0),(R+28),4);
}
B467e66:{NFSU2_TR(0x467e66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467e67:{NFSU2_TR(0x467e67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467e68:{NFSU2_TR(0x467e68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467e69:L467e69:{c.instructions+=4;NFSU2_TR(0x467e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e6c:{NFSU2_TR(0x467e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467e6d:{NFSU2_TR(0x467e6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467e6e:{NFSU2_TR(0x467e6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467e70:L467e70:{c.instructions+=7;NFSU2_TR(0x467e70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467e71:{NFSU2_TR(0x467e71);
__builtin_memmove((R+24),(R+4),4);
}
B467e73:{NFSU2_TR(0x467e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e76:{NFSU2_TR(0x467e76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467e77:{NFSU2_TR(0x467e77);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467e79:{NFSU2_TR(0x467e79);
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
B467e7b:{NFSU2_TR(0x467e7b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467e93;}}
}
B467e7d:L467e7d:{c.instructions+=1;NFSU2_TR(0x467e7d);
__builtin_memmove((R+4),(R+4),4);
}
B467e80:L467e80:{c.instructions+=4;NFSU2_TR(0x467e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e83:{NFSU2_TR(0x467e83);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467e86:{NFSU2_TR(0x467e86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467e88:{NFSU2_TR(0x467e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467e8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467e8b:L467e8b:{c.instructions+=4;NFSU2_TR(0x467e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e8e:{NFSU2_TR(0x467e8e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467e8f:{NFSU2_TR(0x467e8f);
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
B467e91:{NFSU2_TR(0x467e91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467e80u);}goto L467e80;}}
}
B467e93:L467e93:{c.instructions+=4;NFSU2_TR(0x467e93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467e96:{NFSU2_TR(0x467e96);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467e98:{NFSU2_TR(0x467e98);
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
B467e9a:{NFSU2_TR(0x467e9a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467eb3;}}
}
B467e9c:L467e9c:{c.instructions+=1;NFSU2_TR(0x467e9c);
__builtin_memmove((R+16),(R+16),4);
}
B467ea0:L467ea0:{c.instructions+=4;NFSU2_TR(0x467ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ea3:{NFSU2_TR(0x467ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467ea6:{NFSU2_TR(0x467ea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467ea8:{NFSU2_TR(0x467ea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467eabull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467eab:L467eab:{c.instructions+=4;NFSU2_TR(0x467eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467eae:{NFSU2_TR(0x467eae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467eaf:{NFSU2_TR(0x467eaf);
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
B467eb1:{NFSU2_TR(0x467eb1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467ea0u);}goto L467ea0;}}
}
B467eb3:L467eb3:{c.instructions+=5;NFSU2_TR(0x467eb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467eb6:{NFSU2_TR(0x467eb6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467eb8:{NFSU2_TR(0x467eb8);
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
B467eba:{NFSU2_TR(0x467eba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467ebb:{NFSU2_TR(0x467ebb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467ed5;}}
}
B467ebd:L467ebd:{c.instructions+=1;NFSU2_TR(0x467ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B467ec1:L467ec1:{c.instructions+=5;NFSU2_TR(0x467ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ec4:{NFSU2_TR(0x467ec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467ec7:{NFSU2_TR(0x467ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467ec9:{NFSU2_TR(0x467ec9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467eca:{NFSU2_TR(0x467eca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467ecdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467ecd:L467ecd:{c.instructions+=4;NFSU2_TR(0x467ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ed0:{NFSU2_TR(0x467ed0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467ed1:{NFSU2_TR(0x467ed1);
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
B467ed3:{NFSU2_TR(0x467ed3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467ec1u);}goto L467ec1;}}
}
B467ed5:L467ed5:{c.instructions+=4;NFSU2_TR(0x467ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ed8:{NFSU2_TR(0x467ed8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467eda:{NFSU2_TR(0x467eda);
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
B467edc:{NFSU2_TR(0x467edc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467ef3;}}
}
B467ede:L467ede:{c.instructions+=1;NFSU2_TR(0x467ede);
__builtin_memmove((R+28),(R+28),4);
}
B467ee0:L467ee0:{c.instructions+=4;NFSU2_TR(0x467ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ee3:{NFSU2_TR(0x467ee3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467ee6:{NFSU2_TR(0x467ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467ee8:{NFSU2_TR(0x467ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467eebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467eeb:L467eeb:{c.instructions+=4;NFSU2_TR(0x467eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467eee:{NFSU2_TR(0x467eee);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467eef:{NFSU2_TR(0x467eef);
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
B467ef1:{NFSU2_TR(0x467ef1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467ee0u);}goto L467ee0;}}
}
B467ef3:L467ef3:{c.instructions+=4;NFSU2_TR(0x467ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467ef6:{NFSU2_TR(0x467ef6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467ef8:{NFSU2_TR(0x467ef8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467efa:{NFSU2_TR(0x467efa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467f62;}}
}
B467efc:L467efc:{c.instructions+=2;NFSU2_TR(0x467efc);
w4(R+12,u32(0xffffd8f0ull));
}
B467f01:{NFSU2_TR(0x467f01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467f02:L467f02:{c.instructions+=6;NFSU2_TR(0x467f02);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B467f08:{NFSU2_TR(0x467f08);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B467f0b:{NFSU2_TR(0x467f0b);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B467f0d:{NFSU2_TR(0x467f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f10:{NFSU2_TR(0x467f10);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B467f13:{NFSU2_TR(0x467f13);
if(r1(R+518)){{goto L467f1a;}}
}
B467f15:L467f15:{c.instructions+=2;NFSU2_TR(0x467f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467f18:{NFSU2_TR(0x467f18);
{goto L467f59;}
}
B467f1a:L467f1a:{c.instructions+=6;NFSU2_TR(0x467f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467f1d:{NFSU2_TR(0x467f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467f20:{NFSU2_TR(0x467f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467f23:{NFSU2_TR(0x467f23);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B467f25:{NFSU2_TR(0x467f25);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B467f27:{NFSU2_TR(0x467f27);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467f43;}}
}
B467f29:L467f29:{c.instructions+=2;NFSU2_TR(0x467f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B467f2c:{NFSU2_TR(0x467f2c);
__builtin_memmove((R+16),(R+16),4);
}
B467f30:L467f30:{c.instructions+=8;NFSU2_TR(0x467f30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B467f32:{NFSU2_TR(0x467f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+20),(U+0),4);
}
B467f35:{NFSU2_TR(0x467f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+20))));
s4(u32(r4(U+0)),r4(U+4));
}
B467f38:{NFSU2_TR(0x467f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B467f3b:{NFSU2_TR(0x467f3b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B467f3c:{NFSU2_TR(0x467f3c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B467f3f:{NFSU2_TR(0x467f3f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467f41:{NFSU2_TR(0x467f41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467f30u);}goto L467f30;}}
}
B467f43:L467f43:{c.instructions+=3;NFSU2_TR(0x467f43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467f46:{NFSU2_TR(0x467f46);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B467f49:{NFSU2_TR(0x467f49);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467f4e;}}
}
B467f4b:L467f4b:{c.instructions+=1;NFSU2_TR(0x467f4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467f4e:L467f4e:{c.instructions+=3;NFSU2_TR(0x467f4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467f51:{NFSU2_TR(0x467f51);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B467f54:{NFSU2_TR(0x467f54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L467f59;}}
}
B467f56:L467f56:{c.instructions+=1;NFSU2_TR(0x467f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467f59:L467f59:{c.instructions+=4;NFSU2_TR(0x467f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f5c:{NFSU2_TR(0x467f5c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467f5d:{NFSU2_TR(0x467f5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B467f5f:{NFSU2_TR(0x467f5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467f02u);}goto L467f02;}}
}
B467f61:L467f61:{c.instructions+=1;NFSU2_TR(0x467f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B467f62:L467f62:{c.instructions+=5;NFSU2_TR(0x467f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f65:{NFSU2_TR(0x467f65);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B467f67:{NFSU2_TR(0x467f67);
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
B467f69:{NFSU2_TR(0x467f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B467f6a:{NFSU2_TR(0x467f6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L467f83;}}
}
B467f6c:L467f6c:{c.instructions+=1;NFSU2_TR(0x467f6c);
__builtin_memmove((R+16),(R+16),4);
}
B467f70:L467f70:{c.instructions+=4;NFSU2_TR(0x467f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f73:{NFSU2_TR(0x467f73);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B467f76:{NFSU2_TR(0x467f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B467f78:{NFSU2_TR(0x467f78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467f7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B467f7b:L467f7b:{c.instructions+=4;NFSU2_TR(0x467f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f7e:{NFSU2_TR(0x467f7e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B467f7f:{NFSU2_TR(0x467f7f);
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
B467f81:{NFSU2_TR(0x467f81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x467f70u);}goto L467f70;}}
}
B467f83:L467f83:{c.instructions+=3;NFSU2_TR(0x467f83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B467f84:{NFSU2_TR(0x467f84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467f85:{NFSU2_TR(0x467f85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467f90:L467f90:{c.instructions+=14;NFSU2_TR(0x467f90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467f92:{NFSU2_TR(0x467f92);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467f97:{NFSU2_TR(0x467f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B467f9d:{NFSU2_TR(0x467f9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467f9e:{NFSU2_TR(0x467f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467fa5:{NFSU2_TR(0x467fa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467fa6:{NFSU2_TR(0x467fa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467fa7:{NFSU2_TR(0x467fa7);
__builtin_memmove((R+24),(R+4),4);
}
B467fa9:{NFSU2_TR(0x467fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467fad:{NFSU2_TR(0x467fad);
u8 U[4];
w4(U+0,u32(0x78a6c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B467fb3:{NFSU2_TR(0x467fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467fb6:{NFSU2_TR(0x467fb6);
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
B467fb8:{NFSU2_TR(0x467fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467fc0:{NFSU2_TR(0x467fc0);
if(r1(R+518)){{goto L467fcf;}}
}
B467fc2:L467fc2:{c.instructions+=3;NFSU2_TR(0x467fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B467fc4:{NFSU2_TR(0x467fc4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467fc6:{NFSU2_TR(0x467fc6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x467fc8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B467fc8:L467fc8:{c.instructions+=1;NFSU2_TR(0x467fc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B467fcf:L467fcf:{c.instructions+=6;NFSU2_TR(0x467fcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B467fd3:{NFSU2_TR(0x467fd3);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B467fd9:{NFSU2_TR(0x467fd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467fda:{NFSU2_TR(0x467fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B467fe1:{NFSU2_TR(0x467fe1);
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
B467fe4:{NFSU2_TR(0x467fe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B467ff0:L467ff0:{c.instructions+=4;NFSU2_TR(0x467ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B467ff1:{NFSU2_TR(0x467ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B467ff5:{NFSU2_TR(0x467ff5);
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
B467ff7:{NFSU2_TR(0x467ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x468000u,468);}
}
B467ff9:L467ff9:{c.instructions+=3;NFSU2_TR(0x467ff9);
w4(R+0,u32(0x7fffull));
}
B467ffe:{NFSU2_TR(0x467ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B467fff:{NFSU2_TR(0x467fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x467,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
