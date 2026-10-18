#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x521,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x521,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_521(u8* __restrict R,Cpu& c);
u32 page_521(Cpu& c){return body_521(c.regs.data(),c);}
__attribute__((noinline)) u32 body_521(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x521001:goto L521001;
case 0x521005:c.instructions+=9;goto B521005;
case 0x521009:c.instructions+=8;goto B521009;
case 0x52100a:c.instructions+=7;goto B52100a;
case 0x52100e:c.instructions+=6;goto B52100e;
case 0x52100f:c.instructions+=5;goto B52100f;
case 0x521013:c.instructions+=4;goto B521013;
case 0x521014:c.instructions+=3;goto B521014;
case 0x521015:c.instructions+=2;goto B521015;
case 0x521017:c.instructions+=1;goto B521017;
case 0x52101c:goto L52101c;
case 0x521020:c.instructions+=4;goto B521020;
case 0x521022:c.instructions+=3;goto B521022;
case 0x521023:c.instructions+=2;goto B521023;
case 0x521025:c.instructions+=1;goto B521025;
case 0x521028:goto L521028;
case 0x521029:c.instructions+=1;goto B521029;
case 0x52102c:goto L52102c;
case 0x52102e:c.instructions+=5;goto B52102e;
case 0x521031:c.instructions+=4;goto B521031;
case 0x521033:c.instructions+=3;goto B521033;
case 0x521034:c.instructions+=2;goto B521034;
case 0x521036:c.instructions+=1;goto B521036;
case 0x521039:goto L521039;
case 0x52103a:c.instructions+=1;goto B52103a;
case 0x521040:goto L521040;
case 0x521041:c.instructions+=5;goto B521041;
case 0x521043:c.instructions+=4;goto B521043;
case 0x521049:c.instructions+=3;goto B521049;
case 0x52104b:c.instructions+=2;goto B52104b;
case 0x52104c:c.instructions+=1;goto B52104c;
case 0x52104f:goto L52104f;
case 0x521050:c.instructions+=1;goto B521050;
case 0x521055:goto L521055;
case 0x521058:c.instructions+=3;goto B521058;
case 0x52105b:c.instructions+=2;goto B52105b;
case 0x52105e:c.instructions+=1;goto B52105e;
case 0x521060:goto L521060;
case 0x521063:c.instructions+=1;goto B521063;
case 0x521065:goto L521065;
case 0x521067:c.instructions+=1;goto B521067;
case 0x521069:goto L521069;
case 0x52106a:c.instructions+=5;goto B52106a;
case 0x52106d:c.instructions+=4;goto B52106d;
case 0x521072:c.instructions+=3;goto B521072;
case 0x521073:c.instructions+=2;goto B521073;
case 0x521074:c.instructions+=1;goto B521074;
case 0x521079:goto L521079;
case 0x52107c:c.instructions+=2;goto B52107c;
case 0x52107f:c.instructions+=1;goto B52107f;
case 0x521081:goto L521081;
case 0x521086:c.instructions+=3;goto B521086;
case 0x521087:c.instructions+=2;goto B521087;
case 0x521089:c.instructions+=1;goto B521089;
case 0x52108e:goto L52108e;
case 0x521091:goto L521091;
case 0x521092:goto L521092;
case 0x521093:c.instructions+=2;goto B521093;
case 0x521094:c.instructions+=1;goto B521094;
case 0x5210a0:goto L5210a0;
case 0x5210a2:c.instructions+=29;goto B5210a2;
case 0x5210a6:c.instructions+=28;goto B5210a6;
case 0x5210a9:c.instructions+=27;goto B5210a9;
case 0x5210ab:c.instructions+=26;goto B5210ab;
case 0x5210ae:c.instructions+=25;goto B5210ae;
case 0x5210b1:c.instructions+=24;goto B5210b1;
case 0x5210b4:c.instructions+=23;goto B5210b4;
case 0x5210b7:c.instructions+=22;goto B5210b7;
case 0x5210ba:c.instructions+=21;goto B5210ba;
case 0x5210bd:c.instructions+=20;goto B5210bd;
case 0x5210c0:c.instructions+=19;goto B5210c0;
case 0x5210c5:c.instructions+=18;goto B5210c5;
case 0x5210c8:c.instructions+=17;goto B5210c8;
case 0x5210cb:c.instructions+=16;goto B5210cb;
case 0x5210ce:c.instructions+=15;goto B5210ce;
case 0x5210d1:c.instructions+=14;goto B5210d1;
case 0x5210d5:c.instructions+=13;goto B5210d5;
case 0x5210d6:c.instructions+=12;goto B5210d6;
case 0x5210da:c.instructions+=11;goto B5210da;
case 0x5210dc:c.instructions+=10;goto B5210dc;
case 0x5210df:c.instructions+=9;goto B5210df;
case 0x5210e3:c.instructions+=8;goto B5210e3;
case 0x5210e6:c.instructions+=7;goto B5210e6;
case 0x5210e9:c.instructions+=6;goto B5210e9;
case 0x5210ec:c.instructions+=5;goto B5210ec;
case 0x5210f2:c.instructions+=4;goto B5210f2;
case 0x5210f5:c.instructions+=3;goto B5210f5;
case 0x5210f8:c.instructions+=2;goto B5210f8;
case 0x5210f9:c.instructions+=1;goto B5210f9;
case 0x521100:goto L521100;
case 0x521102:c.instructions+=10;goto B521102;
case 0x521107:c.instructions+=9;goto B521107;
case 0x52110d:c.instructions+=8;goto B52110d;
case 0x52110e:c.instructions+=7;goto B52110e;
case 0x521115:c.instructions+=6;goto B521115;
case 0x521116:c.instructions+=5;goto B521116;
case 0x521117:c.instructions+=4;goto B521117;
case 0x521119:c.instructions+=3;goto B521119;
case 0x52111f:c.instructions+=2;goto B52111f;
case 0x521121:c.instructions+=1;goto B521121;
case 0x521127:goto L521127;
case 0x52112a:c.instructions+=5;goto B52112a;
case 0x52112c:c.instructions+=4;goto B52112c;
case 0x52112d:c.instructions+=3;goto B52112d;
case 0x52112e:c.instructions+=2;goto B52112e;
case 0x52112f:c.instructions+=1;goto B52112f;
case 0x521132:goto L521132;
case 0x521135:c.instructions+=3;goto B521135;
case 0x521137:c.instructions+=2;goto B521137;
case 0x521139:c.instructions+=1;goto B521139;
case 0x52113b:goto L52113b;
case 0x52113e:c.instructions+=1;goto B52113e;
case 0x521140:goto L521140;
case 0x521146:c.instructions+=2;goto B521146;
case 0x52114c:c.instructions+=1;goto B52114c;
case 0x52114e:goto L52114e;
case 0x521150:goto L521150;
case 0x521151:c.instructions+=1;goto B521151;
case 0x521156:goto L521156;
case 0x52115b:c.instructions+=2;goto B52115b;
case 0x52115d:c.instructions+=1;goto B52115d;
case 0x521162:goto L521162;
case 0x521165:c.instructions+=4;goto B521165;
case 0x521169:c.instructions+=3;goto B521169;
case 0x52116b:c.instructions+=2;goto B52116b;
case 0x52116f:c.instructions+=1;goto B52116f;
case 0x521171:goto L521171;
case 0x521173:c.instructions+=1;goto B521173;
case 0x521178:goto L521178;
case 0x52117a:c.instructions+=1;goto B52117a;
case 0x52117c:goto L52117c;
case 0x52117e:goto L52117e;
case 0x521183:c.instructions+=2;goto B521183;
case 0x52118b:c.instructions+=1;goto B52118b;
case 0x521190:goto L521190;
case 0x521193:c.instructions+=4;goto B521193;
case 0x521197:c.instructions+=3;goto B521197;
case 0x521199:c.instructions+=2;goto B521199;
case 0x5211a1:c.instructions+=1;goto B5211a1;
case 0x5211a3:goto L5211a3;
case 0x5211a5:c.instructions+=1;goto B5211a5;
case 0x5211aa:goto L5211aa;
case 0x5211ac:c.instructions+=2;goto B5211ac;
case 0x5211b0:c.instructions+=1;goto B5211b0;
case 0x5211b2:goto L5211b2;
case 0x5211b6:goto L5211b6;
case 0x5211b9:c.instructions+=7;goto B5211b9;
case 0x5211bc:c.instructions+=6;goto B5211bc;
case 0x5211be:c.instructions+=5;goto B5211be;
case 0x5211bf:c.instructions+=4;goto B5211bf;
case 0x5211c0:c.instructions+=3;goto B5211c0;
case 0x5211c2:c.instructions+=2;goto B5211c2;
case 0x5211ca:c.instructions+=1;goto B5211ca;
case 0x5211cd:goto L5211cd;
case 0x5211d0:c.instructions+=6;goto B5211d0;
case 0x5211d3:c.instructions+=5;goto B5211d3;
case 0x5211d5:c.instructions+=4;goto B5211d5;
case 0x5211d7:c.instructions+=3;goto B5211d7;
case 0x5211d8:c.instructions+=2;goto B5211d8;
case 0x5211d9:c.instructions+=1;goto B5211d9;
case 0x5211dc:goto L5211dc;
case 0x5211e1:goto L5211e1;
case 0x5211e3:c.instructions+=1;goto B5211e3;
case 0x5211e5:goto L5211e5;
case 0x5211e8:c.instructions+=10;goto B5211e8;
case 0x5211ea:c.instructions+=9;goto B5211ea;
case 0x5211ed:c.instructions+=8;goto B5211ed;
case 0x5211f0:c.instructions+=7;goto B5211f0;
case 0x5211f3:c.instructions+=6;goto B5211f3;
case 0x5211f6:c.instructions+=5;goto B5211f6;
case 0x5211fd:c.instructions+=4;goto B5211fd;
case 0x521200:c.instructions+=3;goto B521200;
case 0x521202:c.instructions+=2;goto B521202;
case 0x521204:c.instructions+=1;goto B521204;
case 0x521209:goto L521209;
case 0x52120b:goto L52120b;
case 0x52120e:c.instructions+=3;goto B52120e;
case 0x521211:c.instructions+=2;goto B521211;
case 0x521214:c.instructions+=1;goto B521214;
case 0x52121b:goto L52121b;
case 0x52121d:c.instructions+=1;goto B52121d;
case 0x52121f:goto L52121f;
case 0x521225:c.instructions+=1;goto B521225;
case 0x52122a:goto L52122a;
case 0x52122b:c.instructions+=1;goto B52122b;
case 0x521230:goto L521230;
case 0x521233:goto L521233;
case 0x521237:c.instructions+=5;goto B521237;
case 0x521239:c.instructions+=4;goto B521239;
case 0x52123a:c.instructions+=3;goto B52123a;
case 0x52123b:c.instructions+=2;goto B52123b;
case 0x52123c:c.instructions+=1;goto B52123c;
case 0x52123e:goto L52123e;
case 0x521244:c.instructions+=1;goto B521244;
case 0x521249:goto L521249;
case 0x52124a:c.instructions+=1;goto B52124a;
case 0x52124f:goto L52124f;
case 0x521252:goto L521252;
case 0x521254:c.instructions+=5;goto B521254;
case 0x521255:c.instructions+=4;goto B521255;
case 0x521259:c.instructions+=3;goto B521259;
case 0x521260:c.instructions+=2;goto B521260;
case 0x521263:c.instructions+=1;goto B521263;
case 0x521264:goto L521264;
case 0x521268:c.instructions+=5;goto B521268;
case 0x52126a:c.instructions+=4;goto B52126a;
case 0x52126b:c.instructions+=3;goto B52126b;
case 0x521272:c.instructions+=2;goto B521272;
case 0x521275:c.instructions+=1;goto B521275;
case 0x521280:goto L521280;
case 0x521284:c.instructions+=2;goto B521284;
case 0x521286:c.instructions+=1;goto B521286;
case 0x521288:goto L521288;
case 0x52128b:c.instructions+=2;goto B52128b;
case 0x52128d:c.instructions+=1;goto B52128d;
case 0x52128f:goto L52128f;
case 0x521291:c.instructions+=1;goto B521291;
case 0x521293:goto L521293;
case 0x521299:c.instructions+=2;goto B521299;
case 0x52129b:c.instructions+=1;goto B52129b;
case 0x5212a0:goto L5212a0;
case 0x5212a7:c.instructions+=1;goto B5212a7;
case 0x5212a9:goto L5212a9;
case 0x5212b0:goto L5212b0;
case 0x5212b3:c.instructions+=1;goto B5212b3;
case 0x5212b5:goto L5212b5;
case 0x5212bb:c.instructions+=2;goto B5212bb;
case 0x5212bf:c.instructions+=1;goto B5212bf;
case 0x5212c4:goto L5212c4;
case 0x5212d0:goto L5212d0;
case 0x5212d4:c.instructions+=5;goto B5212d4;
case 0x5212d6:c.instructions+=4;goto B5212d6;
case 0x5212d8:c.instructions+=3;goto B5212d8;
case 0x5212d9:c.instructions+=2;goto B5212d9;
case 0x5212dc:c.instructions+=1;goto B5212dc;
case 0x5212de:goto L5212de;
case 0x5212e5:goto L5212e5;
case 0x5212ea:c.instructions+=1;goto B5212ea;
case 0x5212ec:goto L5212ec;
case 0x5212f1:c.instructions+=1;goto B5212f1;
case 0x5212f3:goto L5212f3;
case 0x5212f8:c.instructions+=1;goto B5212f8;
case 0x5212fa:goto L5212fa;
case 0x5212ff:goto L5212ff;
case 0x521306:c.instructions+=2;goto B521306;
case 0x521309:c.instructions+=1;goto B521309;
case 0x52130b:goto L52130b;
case 0x521311:c.instructions+=2;goto B521311;
case 0x521315:c.instructions+=1;goto B521315;
case 0x52131a:goto L52131a;
case 0x521340:goto L521340;
case 0x521341:c.instructions+=4;goto B521341;
case 0x521345:c.instructions+=3;goto B521345;
case 0x521347:c.instructions+=2;goto B521347;
case 0x52134b:c.instructions+=1;goto B52134b;
case 0x52134d:goto L52134d;
case 0x521353:c.instructions+=1;goto B521353;
case 0x521357:goto L521357;
case 0x521358:c.instructions+=9;goto B521358;
case 0x52135c:c.instructions+=8;goto B52135c;
case 0x52135f:c.instructions+=7;goto B52135f;
case 0x521360:c.instructions+=6;goto B521360;
case 0x521364:c.instructions+=5;goto B521364;
case 0x521365:c.instructions+=4;goto B521365;
case 0x52136b:c.instructions+=3;goto B52136b;
case 0x52136d:c.instructions+=2;goto B52136d;
case 0x52136f:c.instructions+=1;goto B52136f;
case 0x521371:goto L521371;
case 0x521372:c.instructions+=1;goto B521372;
case 0x521375:goto L521375;
case 0x521377:c.instructions+=4;goto B521377;
case 0x521379:c.instructions+=3;goto B521379;
case 0x52137a:c.instructions+=2;goto B52137a;
case 0x52137c:c.instructions+=1;goto B52137c;
case 0x521381:goto L521381;
case 0x521384:c.instructions+=4;goto B521384;
case 0x521385:c.instructions+=3;goto B521385;
case 0x521388:c.instructions+=2;goto B521388;
case 0x52138a:c.instructions+=1;goto B52138a;
case 0x52138c:goto L52138c;
case 0x52138d:goto L52138d;
case 0x521391:c.instructions+=5;goto B521391;
case 0x521393:c.instructions+=4;goto B521393;
case 0x521395:c.instructions+=3;goto B521395;
case 0x521397:c.instructions+=2;goto B521397;
case 0x521399:c.instructions+=1;goto B521399;
case 0x52139e:goto L52139e;
case 0x5213a2:c.instructions+=4;goto B5213a2;
case 0x5213a4:c.instructions+=3;goto B5213a4;
case 0x5213a6:c.instructions+=2;goto B5213a6;
case 0x5213a7:c.instructions+=1;goto B5213a7;
case 0x5213ac:goto L5213ac;
case 0x5213b0:c.instructions+=4;goto B5213b0;
case 0x5213b6:c.instructions+=3;goto B5213b6;
case 0x5213b9:c.instructions+=2;goto B5213b9;
case 0x5213bb:c.instructions+=1;goto B5213bb;
case 0x5213bd:goto L5213bd;
case 0x5213c0:c.instructions+=3;goto B5213c0;
case 0x5213c1:c.instructions+=2;goto B5213c1;
case 0x5213c4:c.instructions+=1;goto B5213c4;
case 0x5213c9:goto L5213c9;
case 0x5213ca:c.instructions+=4;goto B5213ca;
case 0x5213cb:c.instructions+=3;goto B5213cb;
case 0x5213cc:c.instructions+=2;goto B5213cc;
case 0x5213cd:c.instructions+=1;goto B5213cd;
case 0x5213d0:goto L5213d0;
case 0x5213d1:c.instructions+=5;goto B5213d1;
case 0x5213d5:c.instructions+=4;goto B5213d5;
case 0x5213d7:c.instructions+=3;goto B5213d7;
case 0x5213d8:c.instructions+=2;goto B5213d8;
case 0x5213da:c.instructions+=1;goto B5213da;
case 0x5213dc:goto L5213dc;
case 0x5213e2:goto L5213e2;
case 0x5213e6:c.instructions+=5;goto B5213e6;
case 0x5213e8:c.instructions+=4;goto B5213e8;
case 0x5213ea:c.instructions+=3;goto B5213ea;
case 0x5213eb:c.instructions+=2;goto B5213eb;
case 0x5213f1:c.instructions+=1;goto B5213f1;
case 0x5213f6:goto L5213f6;
case 0x5213f8:c.instructions+=5;goto B5213f8;
case 0x5213fa:c.instructions+=4;goto B5213fa;
case 0x5213fc:c.instructions+=3;goto B5213fc;
case 0x5213fe:c.instructions+=2;goto B5213fe;
case 0x521400:c.instructions+=1;goto B521400;
case 0x521405:goto L521405;
case 0x521407:c.instructions+=3;goto B521407;
case 0x521409:c.instructions+=2;goto B521409;
case 0x52140a:c.instructions+=1;goto B52140a;
case 0x52140f:goto L52140f;
case 0x521415:c.instructions+=3;goto B521415;
case 0x521418:c.instructions+=2;goto B521418;
case 0x52141a:c.instructions+=1;goto B52141a;
case 0x52141c:goto L52141c;
case 0x52141f:c.instructions+=3;goto B52141f;
case 0x521420:c.instructions+=2;goto B521420;
case 0x521423:c.instructions+=1;goto B521423;
case 0x521428:goto L521428;
case 0x521429:c.instructions+=2;goto B521429;
case 0x52142a:c.instructions+=1;goto B52142a;
case 0x521430:goto L521430;
case 0x521434:c.instructions+=11;goto B521434;
case 0x521435:c.instructions+=10;goto B521435;
case 0x521436:c.instructions+=9;goto B521436;
case 0x521438:c.instructions+=8;goto B521438;
case 0x52143a:c.instructions+=7;goto B52143a;
case 0x52143c:c.instructions+=6;goto B52143c;
case 0x52143e:c.instructions+=5;goto B52143e;
case 0x521444:c.instructions+=4;goto B521444;
case 0x521446:c.instructions+=3;goto B521446;
case 0x521448:c.instructions+=2;goto B521448;
case 0x521453:c.instructions+=1;goto B521453;
case 0x521458:goto L521458;
case 0x52145a:c.instructions+=3;goto B52145a;
case 0x52145c:c.instructions+=2;goto B52145c;
case 0x52145d:c.instructions+=1;goto B52145d;
case 0x521462:goto L521462;
case 0x521465:c.instructions+=4;goto B521465;
case 0x521468:c.instructions+=3;goto B521468;
case 0x521469:c.instructions+=2;goto B521469;
case 0x52146c:c.instructions+=1;goto B52146c;
case 0x521471:goto L521471;
case 0x521472:c.instructions+=2;goto B521472;
case 0x521473:c.instructions+=1;goto B521473;
case 0x521480:goto L521480;
case 0x521484:c.instructions+=11;goto B521484;
case 0x521485:c.instructions+=10;goto B521485;
case 0x521486:c.instructions+=9;goto B521486;
case 0x521488:c.instructions+=8;goto B521488;
case 0x52148a:c.instructions+=7;goto B52148a;
case 0x52148c:c.instructions+=6;goto B52148c;
case 0x52148e:c.instructions+=5;goto B52148e;
case 0x521494:c.instructions+=4;goto B521494;
case 0x521496:c.instructions+=3;goto B521496;
case 0x521498:c.instructions+=2;goto B521498;
case 0x5214a3:c.instructions+=1;goto B5214a3;
case 0x5214a8:goto L5214a8;
case 0x5214aa:c.instructions+=3;goto B5214aa;
case 0x5214ac:c.instructions+=2;goto B5214ac;
case 0x5214ad:c.instructions+=1;goto B5214ad;
case 0x5214b2:goto L5214b2;
case 0x5214b5:c.instructions+=4;goto B5214b5;
case 0x5214b8:c.instructions+=3;goto B5214b8;
case 0x5214b9:c.instructions+=2;goto B5214b9;
case 0x5214bc:c.instructions+=1;goto B5214bc;
case 0x5214c1:goto L5214c1;
case 0x5214c2:c.instructions+=2;goto B5214c2;
case 0x5214c3:c.instructions+=1;goto B5214c3;
case 0x5214d0:goto L5214d0;
case 0x5214d3:c.instructions+=3;goto B5214d3;
case 0x5214d6:c.instructions+=2;goto B5214d6;
case 0x5214d8:c.instructions+=1;goto B5214d8;
case 0x5214da:goto L5214da;
case 0x5214dc:c.instructions+=1;goto B5214dc;
case 0x5214df:goto L5214df;
case 0x5214e1:c.instructions+=2;goto B5214e1;
case 0x5214e3:c.instructions+=1;goto B5214e3;
case 0x5214e5:goto L5214e5;
case 0x5214e9:c.instructions+=1;goto B5214e9;
case 0x5214f0:goto L5214f0;
case 0x5214f3:c.instructions+=1;goto B5214f3;
case 0x5214f5:goto L5214f5;
case 0x5214f7:c.instructions+=2;goto B5214f7;
case 0x5214f9:c.instructions+=1;goto B5214f9;
case 0x5214fb:goto L5214fb;
case 0x5214fd:c.instructions+=1;goto B5214fd;
case 0x521500:goto L521500;
case 0x521503:c.instructions+=1;goto B521503;
case 0x521510:goto L521510;
case 0x521517:c.instructions+=2;goto B521517;
case 0x52151a:c.instructions+=1;goto B52151a;
case 0x52151c:goto L52151c;
case 0x521522:c.instructions+=2;goto B521522;
case 0x521526:c.instructions+=1;goto B521526;
case 0x52152b:goto L52152b;
case 0x521530:goto L521530;
case 0x521533:c.instructions+=7;goto B521533;
case 0x521534:c.instructions+=6;goto B521534;
case 0x521535:c.instructions+=5;goto B521535;
case 0x521536:c.instructions+=4;goto B521536;
case 0x521539:c.instructions+=3;goto B521539;
case 0x52153b:c.instructions+=2;goto B52153b;
case 0x52153d:c.instructions+=1;goto B52153d;
case 0x52153f:goto L52153f;
case 0x521541:c.instructions+=2;goto B521541;
case 0x521543:c.instructions+=1;goto B521543;
case 0x521545:goto L521545;
case 0x521548:c.instructions+=2;goto B521548;
case 0x52154a:c.instructions+=1;goto B52154a;
case 0x52154c:goto L52154c;
case 0x52154f:c.instructions+=2;goto B52154f;
case 0x521552:c.instructions+=1;goto B521552;
case 0x521554:goto L521554;
case 0x521557:c.instructions+=1;goto B521557;
case 0x521559:goto L521559;
case 0x52155a:c.instructions+=3;goto B52155a;
case 0x52155b:c.instructions+=2;goto B52155b;
case 0x521560:c.instructions+=1;goto B521560;
case 0x521565:goto L521565;
case 0x521567:goto L521567;
case 0x521569:c.instructions+=2;goto B521569;
case 0x52156b:c.instructions+=1;goto B52156b;
case 0x52156d:goto L52156d;
case 0x52156e:c.instructions+=4;goto B52156e;
case 0x52156f:c.instructions+=3;goto B52156f;
case 0x521571:c.instructions+=2;goto B521571;
case 0x521572:c.instructions+=1;goto B521572;
case 0x521580:goto L521580;
case 0x521583:c.instructions+=5;goto B521583;
case 0x521584:c.instructions+=4;goto B521584;
case 0x521585:c.instructions+=3;goto B521585;
case 0x521588:c.instructions+=2;goto B521588;
case 0x52158a:c.instructions+=1;goto B52158a;
case 0x52158c:goto L52158c;
case 0x52158e:c.instructions+=2;goto B52158e;
case 0x521590:c.instructions+=1;goto B521590;
case 0x521592:goto L521592;
case 0x521595:c.instructions+=3;goto B521595;
case 0x521598:c.instructions+=2;goto B521598;
case 0x52159b:c.instructions+=1;goto B52159b;
case 0x52159d:goto L52159d;
case 0x5215a0:c.instructions+=1;goto B5215a0;
case 0x5215a2:goto L5215a2;
case 0x5215a4:c.instructions+=1;goto B5215a4;
case 0x5215a6:goto L5215a6;
case 0x5215a8:c.instructions+=2;goto B5215a8;
case 0x5215ad:c.instructions+=1;goto B5215ad;
case 0x5215b2:goto L5215b2;
case 0x5215b5:c.instructions+=1;goto B5215b5;
case 0x5215b7:goto L5215b7;
case 0x5215b9:c.instructions+=2;goto B5215b9;
case 0x5215bb:c.instructions+=1;goto B5215bb;
case 0x5215bd:goto L5215bd;
case 0x5215be:c.instructions+=3;goto B5215be;
case 0x5215c0:c.instructions+=2;goto B5215c0;
case 0x5215c1:c.instructions+=1;goto B5215c1;
case 0x5215c2:goto L5215c2;
case 0x5215c3:c.instructions+=3;goto B5215c3;
case 0x5215c5:c.instructions+=2;goto B5215c5;
case 0x5215c6:c.instructions+=1;goto B5215c6;
case 0x5215d0:goto L5215d0;
case 0x5215d1:c.instructions+=7;goto B5215d1;
case 0x5215d2:c.instructions+=6;goto B5215d2;
case 0x5215d3:c.instructions+=5;goto B5215d3;
case 0x5215d5:c.instructions+=4;goto B5215d5;
case 0x5215d6:c.instructions+=3;goto B5215d6;
case 0x5215d9:c.instructions+=2;goto B5215d9;
case 0x5215de:c.instructions+=1;goto B5215de;
case 0x5215e4:goto L5215e4;
case 0x5215e5:c.instructions+=2;goto B5215e5;
case 0x5215e7:c.instructions+=1;goto B5215e7;
case 0x5215ec:goto L5215ec;
case 0x5215ee:c.instructions+=1;goto B5215ee;
case 0x5215f0:goto L5215f0;
case 0x5215f2:c.instructions+=3;goto B5215f2;
case 0x5215f7:c.instructions+=2;goto B5215f7;
case 0x5215f9:c.instructions+=1;goto B5215f9;
case 0x5215fe:goto L5215fe;
case 0x521601:c.instructions+=1;goto B521601;
case 0x521603:goto L521603;
case 0x521605:goto L521605;
case 0x521606:c.instructions+=2;goto B521606;
case 0x521609:c.instructions+=1;goto B521609;
case 0x52160b:goto L52160b;
case 0x52160e:c.instructions+=1;goto B52160e;
case 0x521610:goto L521610;
case 0x521612:c.instructions+=1;goto B521612;
case 0x521617:goto L521617;
case 0x521618:c.instructions+=6;goto B521618;
case 0x521619:c.instructions+=5;goto B521619;
case 0x52161b:c.instructions+=4;goto B52161b;
case 0x52161c:c.instructions+=3;goto B52161c;
case 0x52161f:c.instructions+=2;goto B52161f;
case 0x521620:c.instructions+=1;goto B521620;
case 0x521621:goto L521621;
case 0x521624:c.instructions+=3;goto B521624;
case 0x521627:c.instructions+=2;goto B521627;
case 0x521629:c.instructions+=1;goto B521629;
case 0x52162b:goto L52162b;
case 0x521630:goto L521630;
case 0x521633:c.instructions+=2;goto B521633;
case 0x521636:c.instructions+=1;goto B521636;
case 0x521638:goto L521638;
case 0x52163b:c.instructions+=1;goto B52163b;
case 0x52163d:goto L52163d;
case 0x52163f:c.instructions+=1;goto B52163f;
case 0x521641:goto L521641;
case 0x521643:c.instructions+=2;goto B521643;
case 0x521645:c.instructions+=1;goto B521645;
case 0x521647:goto L521647;
case 0x521648:c.instructions+=5;goto B521648;
case 0x521649:c.instructions+=4;goto B521649;
case 0x52164a:c.instructions+=3;goto B52164a;
case 0x52164c:c.instructions+=2;goto B52164c;
case 0x52164d:c.instructions+=1;goto B52164d;
case 0x52164e:goto L52164e;
case 0x521651:c.instructions+=2;goto B521651;
case 0x521653:c.instructions+=1;goto B521653;
case 0x521655:goto L521655;
case 0x521657:c.instructions+=3;goto B521657;
case 0x52165c:c.instructions+=2;goto B52165c;
case 0x52165e:c.instructions+=1;goto B52165e;
case 0x521663:goto L521663;
case 0x521664:c.instructions+=6;goto B521664;
case 0x521665:c.instructions+=5;goto B521665;
case 0x521668:c.instructions+=4;goto B521668;
case 0x521669:c.instructions+=3;goto B521669;
case 0x52166c:c.instructions+=2;goto B52166c;
case 0x52166d:c.instructions+=1;goto B52166d;
case 0x521670:goto L521670;
case 0x521673:c.instructions+=5;goto B521673;
case 0x521676:c.instructions+=4;goto B521676;
case 0x521678:c.instructions+=3;goto B521678;
case 0x521679:c.instructions+=2;goto B521679;
case 0x52167a:c.instructions+=1;goto B52167a;
case 0x52167c:goto L52167c;
case 0x52167e:c.instructions+=2;goto B52167e;
case 0x521680:c.instructions+=1;goto B521680;
case 0x521682:goto L521682;
case 0x521686:c.instructions+=2;goto B521686;
case 0x52168a:c.instructions+=1;goto B52168a;
case 0x521690:goto L521690;
case 0x521693:c.instructions+=2;goto B521693;
case 0x521696:c.instructions+=1;goto B521696;
case 0x521698:goto L521698;
case 0x52169b:c.instructions+=1;goto B52169b;
case 0x52169d:goto L52169d;
case 0x52169f:c.instructions+=1;goto B52169f;
case 0x5216a1:goto L5216a1;
case 0x5216a4:c.instructions+=2;goto B5216a4;
case 0x5216a6:c.instructions+=1;goto B5216a6;
case 0x5216a8:goto L5216a8;
case 0x5216aa:c.instructions+=1;goto B5216aa;
case 0x5216ac:goto L5216ac;
case 0x5216ae:c.instructions+=2;goto B5216ae;
case 0x5216b0:c.instructions+=1;goto B5216b0;
case 0x5216b2:goto L5216b2;
case 0x5216b3:c.instructions+=3;goto B5216b3;
case 0x5216b5:c.instructions+=2;goto B5216b5;
case 0x5216b6:c.instructions+=1;goto B5216b6;
case 0x5216b9:goto L5216b9;
case 0x5216ba:c.instructions+=3;goto B5216ba;
case 0x5216bc:c.instructions+=2;goto B5216bc;
case 0x5216bd:c.instructions+=1;goto B5216bd;
case 0x5216c0:goto L5216c0;
case 0x5216c2:c.instructions+=15;goto B5216c2;
case 0x5216c7:c.instructions+=14;goto B5216c7;
case 0x5216cd:c.instructions+=13;goto B5216cd;
case 0x5216ce:c.instructions+=12;goto B5216ce;
case 0x5216d5:c.instructions+=11;goto B5216d5;
case 0x5216d6:c.instructions+=10;goto B5216d6;
case 0x5216d7:c.instructions+=9;goto B5216d7;
case 0x5216d8:c.instructions+=8;goto B5216d8;
case 0x5216dc:c.instructions+=7;goto B5216dc;
case 0x5216dd:c.instructions+=6;goto B5216dd;
case 0x5216de:c.instructions+=5;goto B5216de;
case 0x5216e0:c.instructions+=4;goto B5216e0;
case 0x5216e2:c.instructions+=3;goto B5216e2;
case 0x5216e3:c.instructions+=2;goto B5216e3;
case 0x5216e7:c.instructions+=1;goto B5216e7;
case 0x5216ec:goto L5216ec;
case 0x5216ee:c.instructions+=1;goto B5216ee;
case 0x5216f0:goto L5216f0;
case 0x5216f3:c.instructions+=3;goto B5216f3;
case 0x5216f6:c.instructions+=2;goto B5216f6;
case 0x5216f8:c.instructions+=1;goto B5216f8;
case 0x5216fe:goto L5216fe;
case 0x521702:goto L521702;
case 0x521704:c.instructions+=1;goto B521704;
case 0x52170a:goto L52170a;
case 0x52170d:c.instructions+=2;goto B52170d;
case 0x52170f:c.instructions+=1;goto B52170f;
case 0x521711:goto L521711;
case 0x521712:c.instructions+=3;goto B521712;
case 0x521713:c.instructions+=2;goto B521713;
case 0x521715:c.instructions+=1;goto B521715;
case 0x52171a:goto L52171a;
case 0x52171c:c.instructions+=1;goto B52171c;
case 0x52171e:goto L52171e;
case 0x521720:c.instructions+=1;goto B521720;
case 0x521722:goto L521722;
case 0x521724:c.instructions+=11;goto B521724;
case 0x521726:c.instructions+=10;goto B521726;
case 0x521729:c.instructions+=9;goto B521729;
case 0x52172b:c.instructions+=8;goto B52172b;
case 0x52172d:c.instructions+=7;goto B52172d;
case 0x521730:c.instructions+=6;goto B521730;
case 0x521733:c.instructions+=5;goto B521733;
case 0x521737:c.instructions+=4;goto B521737;
case 0x521739:c.instructions+=3;goto B521739;
case 0x52173c:c.instructions+=2;goto B52173c;
case 0x52173f:c.instructions+=1;goto B52173f;
case 0x521741:goto L521741;
case 0x521743:c.instructions+=1;goto B521743;
case 0x521745:goto L521745;
case 0x52174a:goto L52174a;
case 0x52174d:c.instructions+=1;goto B52174d;
case 0x521753:goto L521753;
case 0x521756:c.instructions+=1;goto B521756;
case 0x52175c:goto L52175c;
case 0x521762:c.instructions+=3;goto B521762;
case 0x521763:c.instructions+=2;goto B521763;
case 0x521765:c.instructions+=1;goto B521765;
case 0x52176a:goto L52176a;
case 0x52176c:c.instructions+=1;goto B52176c;
case 0x521772:goto L521772;
case 0x521774:c.instructions+=1;goto B521774;
case 0x521779:goto L521779;
case 0x52177b:c.instructions+=6;goto B52177b;
case 0x52177e:c.instructions+=5;goto B52177e;
case 0x521782:c.instructions+=4;goto B521782;
case 0x521784:c.instructions+=3;goto B521784;
case 0x521786:c.instructions+=2;goto B521786;
case 0x52178a:c.instructions+=1;goto B52178a;
case 0x52178c:goto L52178c;
case 0x52178d:c.instructions+=2;goto B52178d;
case 0x52178f:c.instructions+=1;goto B52178f;
case 0x521794:goto L521794;
case 0x521797:c.instructions+=2;goto B521797;
case 0x52179a:c.instructions+=1;goto B52179a;
case 0x52179c:goto L52179c;
case 0x5217a0:c.instructions+=8;goto B5217a0;
case 0x5217a3:c.instructions+=7;goto B5217a3;
case 0x5217a5:c.instructions+=6;goto B5217a5;
case 0x5217a8:c.instructions+=5;goto B5217a8;
case 0x5217b0:c.instructions+=4;goto B5217b0;
case 0x5217b3:c.instructions+=3;goto B5217b3;
case 0x5217b5:c.instructions+=2;goto B5217b5;
case 0x5217ba:c.instructions+=1;goto B5217ba;
case 0x5217c0:goto L5217c0;
case 0x5217c4:c.instructions+=3;goto B5217c4;
case 0x5217c5:c.instructions+=2;goto B5217c5;
case 0x5217c6:c.instructions+=1;goto B5217c6;
case 0x5217cb:goto L5217cb;
case 0x5217cd:c.instructions+=1;goto B5217cd;
case 0x5217cf:goto L5217cf;
case 0x5217d0:c.instructions+=2;goto B5217d0;
case 0x5217d6:c.instructions+=1;goto B5217d6;
case 0x5217db:goto L5217db;
case 0x5217dd:c.instructions+=2;goto B5217dd;
case 0x5217df:c.instructions+=1;goto B5217df;
case 0x5217e1:goto L5217e1;
case 0x5217e3:c.instructions+=1;goto B5217e3;
case 0x5217e8:goto L5217e8;
case 0x5217eb:c.instructions+=2;goto B5217eb;
case 0x5217ed:c.instructions+=1;goto B5217ed;
case 0x5217ef:goto L5217ef;
case 0x5217f2:c.instructions+=2;goto B5217f2;
case 0x5217f5:c.instructions+=1;goto B5217f5;
case 0x5217f7:goto L5217f7;
case 0x5217f9:goto L5217f9;
case 0x5217fc:c.instructions+=4;goto B5217fc;
case 0x5217fe:c.instructions+=3;goto B5217fe;
case 0x521801:c.instructions+=2;goto B521801;
case 0x521804:c.instructions+=1;goto B521804;
case 0x521806:goto L521806;
case 0x521807:c.instructions+=2;goto B521807;
case 0x52180a:c.instructions+=1;goto B52180a;
case 0x52180c:goto L52180c;
case 0x52180e:goto L52180e;
case 0x521810:c.instructions+=1;goto B521810;
case 0x521815:goto L521815;
case 0x521818:c.instructions+=2;goto B521818;
case 0x52181a:c.instructions+=1;goto B52181a;
case 0x52181c:goto L52181c;
case 0x521823:c.instructions+=2;goto B521823;
case 0x521826:c.instructions+=1;goto B521826;
case 0x521828:goto L521828;
case 0x52182a:goto L52182a;
case 0x52182e:c.instructions+=5;goto B52182e;
case 0x521831:c.instructions+=4;goto B521831;
case 0x521833:c.instructions+=3;goto B521833;
case 0x521836:c.instructions+=2;goto B521836;
case 0x521839:c.instructions+=1;goto B521839;
case 0x52183b:goto L52183b;
case 0x52183f:c.instructions+=7;goto B52183f;
case 0x521840:c.instructions+=6;goto B521840;
case 0x521841:c.instructions+=5;goto B521841;
case 0x521842:c.instructions+=4;goto B521842;
case 0x521843:c.instructions+=3;goto B521843;
case 0x52184a:c.instructions+=2;goto B52184a;
case 0x52184d:c.instructions+=1;goto B52184d;
case 0x521850:goto L521850;
case 0x521851:c.instructions+=7;goto B521851;
case 0x521855:c.instructions+=6;goto B521855;
case 0x521858:c.instructions+=5;goto B521858;
case 0x521859:c.instructions+=4;goto B521859;
case 0x52185a:c.instructions+=3;goto B52185a;
case 0x52185b:c.instructions+=2;goto B52185b;
case 0x52185d:c.instructions+=1;goto B52185d;
case 0x52185f:goto L52185f;
case 0x521862:c.instructions+=1;goto B521862;
case 0x521864:goto L521864;
case 0x521867:c.instructions+=3;goto B521867;
case 0x52186a:c.instructions+=2;goto B52186a;
case 0x52186c:c.instructions+=1;goto B52186c;
case 0x52186e:goto L52186e;
case 0x521870:c.instructions+=2;goto B521870;
case 0x521872:c.instructions+=1;goto B521872;
case 0x521874:goto L521874;
case 0x521876:c.instructions+=1;goto B521876;
case 0x52187b:goto L52187b;
case 0x52187d:c.instructions+=1;goto B52187d;
case 0x52187f:goto L52187f;
case 0x521882:c.instructions+=2;goto B521882;
case 0x521885:c.instructions+=1;goto B521885;
case 0x521887:goto L521887;
case 0x52188a:c.instructions+=1;goto B52188a;
case 0x52188c:goto L52188c;
case 0x52188f:c.instructions+=1;goto B52188f;
case 0x521891:goto L521891;
case 0x521893:c.instructions+=2;goto B521893;
case 0x521895:c.instructions+=1;goto B521895;
case 0x521897:goto L521897;
case 0x521898:c.instructions+=5;goto B521898;
case 0x521899:c.instructions+=4;goto B521899;
case 0x52189a:c.instructions+=3;goto B52189a;
case 0x52189c:c.instructions+=2;goto B52189c;
case 0x52189d:c.instructions+=1;goto B52189d;
case 0x5218a0:goto L5218a0;
case 0x5218a3:c.instructions+=5;goto B5218a3;
case 0x5218a4:c.instructions+=4;goto B5218a4;
case 0x5218a5:c.instructions+=3;goto B5218a5;
case 0x5218a6:c.instructions+=2;goto B5218a6;
case 0x5218a7:c.instructions+=1;goto B5218a7;
case 0x5218b0:goto L5218b0;
case 0x5218b1:c.instructions+=6;goto B5218b1;
case 0x5218b2:c.instructions+=5;goto B5218b2;
case 0x5218b3:c.instructions+=4;goto B5218b3;
case 0x5218b7:c.instructions+=3;goto B5218b7;
case 0x5218ba:c.instructions+=2;goto B5218ba;
case 0x5218bc:c.instructions+=1;goto B5218bc;
case 0x5218be:goto L5218be;
case 0x5218c1:c.instructions+=1;goto B5218c1;
case 0x5218c3:goto L5218c3;
case 0x5218c9:c.instructions+=3;goto B5218c9;
case 0x5218cb:c.instructions+=2;goto B5218cb;
case 0x5218cd:c.instructions+=1;goto B5218cd;
case 0x5218d2:goto L5218d2;
case 0x5218d4:c.instructions+=1;goto B5218d4;
case 0x5218d6:goto L5218d6;
case 0x5218d9:c.instructions+=3;goto B5218d9;
case 0x5218dc:c.instructions+=2;goto B5218dc;
case 0x5218de:c.instructions+=1;goto B5218de;
case 0x5218e0:goto L5218e0;
case 0x5218e1:c.instructions+=2;goto B5218e1;
case 0x5218e3:c.instructions+=1;goto B5218e3;
case 0x5218e8:goto L5218e8;
case 0x5218ea:goto L5218ea;
case 0x5218ed:c.instructions+=3;goto B5218ed;
case 0x5218f0:c.instructions+=2;goto B5218f0;
case 0x5218f2:c.instructions+=1;goto B5218f2;
case 0x5218f4:goto L5218f4;
case 0x5218f7:c.instructions+=1;goto B5218f7;
case 0x5218f9:goto L5218f9;
case 0x5218fc:c.instructions+=2;goto B5218fc;
case 0x5218fe:c.instructions+=1;goto B5218fe;
case 0x521900:goto L521900;
case 0x521902:c.instructions+=2;goto B521902;
case 0x521904:c.instructions+=1;goto B521904;
case 0x521906:goto L521906;
case 0x521907:c.instructions+=2;goto B521907;
case 0x521909:c.instructions+=1;goto B521909;
case 0x52190e:goto L52190e;
case 0x521910:c.instructions+=2;goto B521910;
case 0x521912:c.instructions+=1;goto B521912;
case 0x521914:goto L521914;
case 0x521916:c.instructions+=2;goto B521916;
case 0x52191b:c.instructions+=1;goto B52191b;
case 0x521920:goto L521920;
case 0x521923:c.instructions+=3;goto B521923;
case 0x521924:c.instructions+=2;goto B521924;
case 0x521926:c.instructions+=1;goto B521926;
case 0x52192b:goto L52192b;
case 0x52192c:c.instructions+=3;goto B52192c;
case 0x52192d:c.instructions+=2;goto B52192d;
case 0x52192e:c.instructions+=1;goto B52192e;
case 0x521931:goto L521931;
case 0x521932:c.instructions+=4;goto B521932;
case 0x521933:c.instructions+=3;goto B521933;
case 0x521935:c.instructions+=2;goto B521935;
case 0x521936:c.instructions+=1;goto B521936;
case 0x521940:goto L521940;
case 0x521941:c.instructions+=8;goto B521941;
case 0x521943:c.instructions+=7;goto B521943;
case 0x521944:c.instructions+=6;goto B521944;
case 0x521945:c.instructions+=5;goto B521945;
case 0x521948:c.instructions+=4;goto B521948;
case 0x52194b:c.instructions+=3;goto B52194b;
case 0x52194c:c.instructions+=2;goto B52194c;
case 0x52194e:c.instructions+=1;goto B52194e;
case 0x521954:goto L521954;
case 0x521957:c.instructions+=1;goto B521957;
case 0x521959:goto L521959;
case 0x52195b:c.instructions+=2;goto B52195b;
case 0x521961:c.instructions+=1;goto B521961;
case 0x521966:goto L521966;
case 0x521968:c.instructions+=1;goto B521968;
case 0x52196a:goto L52196a;
case 0x52196d:c.instructions+=3;goto B52196d;
case 0x521970:c.instructions+=2;goto B521970;
case 0x521972:c.instructions+=1;goto B521972;
case 0x521974:goto L521974;
case 0x521975:c.instructions+=2;goto B521975;
case 0x521977:c.instructions+=1;goto B521977;
case 0x52197c:goto L52197c;
case 0x52197e:goto L52197e;
case 0x52197f:c.instructions+=1;goto B52197f;
case 0x521984:goto L521984;
case 0x52198a:c.instructions+=4;goto B52198a;
case 0x52198c:c.instructions+=3;goto B52198c;
case 0x52198f:c.instructions+=2;goto B52198f;
case 0x521992:c.instructions+=1;goto B521992;
case 0x521995:goto L521995;
case 0x521997:c.instructions+=6;goto B521997;
case 0x521999:c.instructions+=5;goto B521999;
case 0x52199b:c.instructions+=4;goto B52199b;
case 0x52199c:c.instructions+=3;goto B52199c;
case 0x52199d:c.instructions+=2;goto B52199d;
case 0x5219a2:c.instructions+=1;goto B5219a2;
case 0x5219a7:goto L5219a7;
case 0x5219a9:c.instructions+=2;goto B5219a9;
case 0x5219ae:c.instructions+=1;goto B5219ae;
case 0x5219b0:goto L5219b0;
case 0x5219b4:c.instructions+=2;goto B5219b4;
case 0x5219b7:c.instructions+=1;goto B5219b7;
case 0x5219b9:goto L5219b9;
case 0x5219bc:c.instructions+=1;goto B5219bc;
case 0x5219be:goto L5219be;
case 0x5219bf:goto L5219bf;
case 0x5219c1:c.instructions+=6;goto B5219c1;
case 0x5219c3:c.instructions+=5;goto B5219c3;
case 0x5219c4:c.instructions+=4;goto B5219c4;
case 0x5219c5:c.instructions+=3;goto B5219c5;
case 0x5219c6:c.instructions+=2;goto B5219c6;
case 0x5219cb:c.instructions+=1;goto B5219cb;
case 0x5219d0:goto L5219d0;
case 0x5219d2:c.instructions+=1;goto B5219d2;
case 0x5219d4:goto L5219d4;
case 0x5219d6:goto L5219d6;
case 0x5219d7:c.instructions+=4;goto B5219d7;
case 0x5219d8:c.instructions+=3;goto B5219d8;
case 0x5219d9:c.instructions+=2;goto B5219d9;
case 0x5219da:c.instructions+=1;goto B5219da;
case 0x5219e0:goto L5219e0;
case 0x5219e1:c.instructions+=3;goto B5219e1;
case 0x5219e5:c.instructions+=2;goto B5219e5;
case 0x5219e8:c.instructions+=1;goto B5219e8;
case 0x5219ea:goto L5219ea;
case 0x5219f0:c.instructions+=1;goto B5219f0;
case 0x5219f2:goto L5219f2;
case 0x5219f5:c.instructions+=3;goto B5219f5;
case 0x5219f8:c.instructions+=2;goto B5219f8;
case 0x5219fa:c.instructions+=1;goto B5219fa;
case 0x5219fc:goto L5219fc;
case 0x521a00:goto L521a00;
case 0x521a03:c.instructions+=1;goto B521a03;
case 0x521a05:goto L521a05;
case 0x521a07:c.instructions+=1;goto B521a07;
case 0x521a09:goto L521a09;
case 0x521a0c:c.instructions+=1;goto B521a0c;
case 0x521a0e:goto L521a0e;
case 0x521a10:c.instructions+=2;goto B521a10;
case 0x521a12:c.instructions+=1;goto B521a12;
case 0x521a14:goto L521a14;
case 0x521a16:c.instructions+=2;goto B521a16;
case 0x521a17:c.instructions+=1;goto B521a17;
case 0x521a1a:goto L521a1a;
case 0x521a1c:c.instructions+=2;goto B521a1c;
case 0x521a1d:c.instructions+=1;goto B521a1d;
case 0x521a20:goto L521a20;
case 0x521a23:c.instructions+=9;goto B521a23;
case 0x521a24:c.instructions+=8;goto B521a24;
case 0x521a25:c.instructions+=7;goto B521a25;
case 0x521a26:c.instructions+=6;goto B521a26;
case 0x521a2a:c.instructions+=5;goto B521a2a;
case 0x521a2c:c.instructions+=4;goto B521a2c;
case 0x521a2e:c.instructions+=3;goto B521a2e;
case 0x521a30:c.instructions+=2;goto B521a30;
case 0x521a34:c.instructions+=1;goto B521a34;
case 0x521a36:goto L521a36;
case 0x521a3c:c.instructions+=2;goto B521a3c;
case 0x521a40:c.instructions+=1;goto B521a40;
case 0x521a42:goto L521a42;
case 0x521a48:c.instructions+=2;goto B521a48;
case 0x521a4c:c.instructions+=1;goto B521a4c;
case 0x521a4e:goto L521a4e;
case 0x521a53:c.instructions+=1;goto B521a53;
case 0x521a54:goto L521a54;
case 0x521a58:c.instructions+=2;goto B521a58;
case 0x521a5b:c.instructions+=1;goto B521a5b;
case 0x521a5d:goto L521a5d;
case 0x521a61:c.instructions+=4;goto B521a61;
case 0x521a65:c.instructions+=3;goto B521a65;
case 0x521a67:c.instructions+=2;goto B521a67;
case 0x521a69:c.instructions+=1;goto B521a69;
case 0x521a6b:goto L521a6b;
case 0x521a6f:c.instructions+=1;goto B521a6f;
case 0x521a70:goto L521a70;
case 0x521a74:c.instructions+=5;goto B521a74;
case 0x521a76:c.instructions+=4;goto B521a76;
case 0x521a78:c.instructions+=3;goto B521a78;
case 0x521a79:c.instructions+=2;goto B521a79;
case 0x521a7f:c.instructions+=1;goto B521a7f;
case 0x521a84:goto L521a84;
case 0x521a86:c.instructions+=4;goto B521a86;
case 0x521a87:c.instructions+=3;goto B521a87;
case 0x521a8a:c.instructions+=2;goto B521a8a;
case 0x521a8c:c.instructions+=1;goto B521a8c;
case 0x521a8e:goto L521a8e;
case 0x521a93:c.instructions+=1;goto B521a93;
case 0x521a97:goto L521a97;
case 0x521a9b:c.instructions+=6;goto B521a9b;
case 0x521aa1:c.instructions+=5;goto B521aa1;
case 0x521aa2:c.instructions+=4;goto B521aa2;
case 0x521aa8:c.instructions+=3;goto B521aa8;
case 0x521aaa:c.instructions+=2;goto B521aaa;
case 0x521aae:c.instructions+=1;goto B521aae;
case 0x521ab0:goto L521ab0;
case 0x521ab4:c.instructions+=1;goto B521ab4;
case 0x521ab5:goto L521ab5;
case 0x521ab7:c.instructions+=5;goto B521ab7;
case 0x521ab9:c.instructions+=4;goto B521ab9;
case 0x521abb:c.instructions+=3;goto B521abb;
case 0x521abd:c.instructions+=2;goto B521abd;
case 0x521abf:c.instructions+=1;goto B521abf;
case 0x521ac4:goto L521ac4;
case 0x521ac6:c.instructions+=3;goto B521ac6;
case 0x521ac8:c.instructions+=2;goto B521ac8;
case 0x521ac9:c.instructions+=1;goto B521ac9;
case 0x521ace:goto L521ace;
case 0x521ad4:c.instructions+=3;goto B521ad4;
case 0x521ad7:c.instructions+=2;goto B521ad7;
case 0x521ad9:c.instructions+=1;goto B521ad9;
case 0x521adb:goto L521adb;
case 0x521adf:c.instructions+=2;goto B521adf;
case 0x521ae1:c.instructions+=1;goto B521ae1;
case 0x521ae3:goto L521ae3;
case 0x521ae6:c.instructions+=3;goto B521ae6;
case 0x521ae7:c.instructions+=2;goto B521ae7;
case 0x521aea:c.instructions+=1;goto B521aea;
case 0x521aef:goto L521aef;
case 0x521af0:c.instructions+=4;goto B521af0;
case 0x521af1:c.instructions+=3;goto B521af1;
case 0x521af2:c.instructions+=2;goto B521af2;
case 0x521af5:c.instructions+=1;goto B521af5;
case 0x521b00:goto L521b00;
case 0x521b01:c.instructions+=6;goto B521b01;
case 0x521b03:c.instructions+=5;goto B521b03;
case 0x521b04:c.instructions+=4;goto B521b04;
case 0x521b07:c.instructions+=3;goto B521b07;
case 0x521b09:c.instructions+=2;goto B521b09;
case 0x521b0c:c.instructions+=1;goto B521b0c;
case 0x521b0e:goto L521b0e;
case 0x521b11:c.instructions+=7;goto B521b11;
case 0x521b12:c.instructions+=6;goto B521b12;
case 0x521b14:c.instructions+=5;goto B521b14;
case 0x521b15:c.instructions+=4;goto B521b15;
case 0x521b1c:c.instructions+=3;goto B521b1c;
case 0x521b1e:c.instructions+=2;goto B521b1e;
case 0x521b21:c.instructions+=1;goto B521b21;
case 0x521b23:goto L521b23;
case 0x521b26:c.instructions+=2;goto B521b26;
case 0x521b2c:c.instructions+=1;goto B521b2c;
case 0x521b2e:goto L521b2e;
case 0x521b38:goto L521b38;
case 0x521b3e:c.instructions+=4;goto B521b3e;
case 0x521b3f:c.instructions+=3;goto B521b3f;
case 0x521b40:c.instructions+=2;goto B521b40;
case 0x521b45:c.instructions+=1;goto B521b45;
case 0x521b4a:goto L521b4a;
case 0x521b4d:c.instructions+=5;goto B521b4d;
case 0x521b53:c.instructions+=4;goto B521b53;
case 0x521b54:c.instructions+=3;goto B521b54;
case 0x521b55:c.instructions+=2;goto B521b55;
case 0x521b57:c.instructions+=1;goto B521b57;
case 0x521b5c:goto L521b5c;
case 0x521b62:c.instructions+=5;goto B521b62;
case 0x521b65:c.instructions+=4;goto B521b65;
case 0x521b67:c.instructions+=3;goto B521b67;
case 0x521b6d:c.instructions+=2;goto B521b6d;
case 0x521b70:c.instructions+=1;goto B521b70;
case 0x521b71:goto L521b71;
case 0x521b72:c.instructions+=3;goto B521b72;
case 0x521b79:c.instructions+=2;goto B521b79;
case 0x521b83:c.instructions+=1;goto B521b83;
case 0x521b84:goto L521b84;
case 0x521b86:c.instructions+=2;goto B521b86;
case 0x521b87:c.instructions+=1;goto B521b87;
case 0x521b90:goto L521b90;
case 0x521b91:c.instructions+=5;goto B521b91;
case 0x521b92:c.instructions+=4;goto B521b92;
case 0x521b96:c.instructions+=3;goto B521b96;
case 0x521b98:c.instructions+=2;goto B521b98;
case 0x521b99:c.instructions+=1;goto B521b99;
case 0x521b9b:goto L521b9b;
case 0x521b9e:c.instructions+=3;goto B521b9e;
case 0x521ba0:c.instructions+=2;goto B521ba0;
case 0x521ba2:c.instructions+=1;goto B521ba2;
case 0x521ba4:goto L521ba4;
case 0x521ba6:c.instructions+=2;goto B521ba6;
case 0x521bac:c.instructions+=1;goto B521bac;
case 0x521bb0:goto L521bb0;
case 0x521bb3:c.instructions+=4;goto B521bb3;
case 0x521bb7:c.instructions+=3;goto B521bb7;
case 0x521bb8:c.instructions+=2;goto B521bb8;
case 0x521bba:c.instructions+=1;goto B521bba;
case 0x521bbf:goto L521bbf;
case 0x521bc1:c.instructions+=1;goto B521bc1;
case 0x521bc3:goto L521bc3;
case 0x521bc6:c.instructions+=4;goto B521bc6;
case 0x521bc8:c.instructions+=3;goto B521bc8;
case 0x521bcb:c.instructions+=2;goto B521bcb;
case 0x521bcd:c.instructions+=1;goto B521bcd;
case 0x521bcf:goto L521bcf;
case 0x521bd0:c.instructions+=4;goto B521bd0;
case 0x521bd1:c.instructions+=3;goto B521bd1;
case 0x521bd3:c.instructions+=2;goto B521bd3;
case 0x521bd4:c.instructions+=1;goto B521bd4;
case 0x521bd7:goto L521bd7;
case 0x521bd8:c.instructions+=4;goto B521bd8;
case 0x521bd9:c.instructions+=3;goto B521bd9;
case 0x521bdb:c.instructions+=2;goto B521bdb;
case 0x521bdc:c.instructions+=1;goto B521bdc;
case 0x521be0:goto L521be0;
case 0x521be1:c.instructions+=5;goto B521be1;
case 0x521be3:c.instructions+=4;goto B521be3;
case 0x521be8:c.instructions+=3;goto B521be8;
case 0x521be9:c.instructions+=2;goto B521be9;
case 0x521bee:c.instructions+=1;goto B521bee;
case 0x521bf3:goto L521bf3;
case 0x521bf5:c.instructions+=1;goto B521bf5;
case 0x521bf7:goto L521bf7;
case 0x521bf8:c.instructions+=2;goto B521bf8;
case 0x521bfe:c.instructions+=1;goto B521bfe;
case 0x521c03:goto L521c03;
case 0x521c05:c.instructions+=2;goto B521c05;
case 0x521c06:c.instructions+=1;goto B521c06;
case 0x521c10:goto L521c10;
case 0x521c11:c.instructions+=9;goto B521c11;
case 0x521c12:c.instructions+=8;goto B521c12;
case 0x521c13:c.instructions+=7;goto B521c13;
case 0x521c14:c.instructions+=6;goto B521c14;
case 0x521c18:c.instructions+=5;goto B521c18;
case 0x521c1a:c.instructions+=4;goto B521c1a;
case 0x521c1b:c.instructions+=3;goto B521c1b;
case 0x521c1c:c.instructions+=2;goto B521c1c;
case 0x521c20:c.instructions+=1;goto B521c20;
case 0x521c25:goto L521c25;
case 0x521c28:c.instructions+=5;goto B521c28;
case 0x521c2b:c.instructions+=4;goto B521c2b;
case 0x521c2e:c.instructions+=3;goto B521c2e;
case 0x521c32:c.instructions+=2;goto B521c32;
case 0x521c34:c.instructions+=1;goto B521c34;
case 0x521c36:goto L521c36;
case 0x521c38:c.instructions+=5;goto B521c38;
case 0x521c3a:c.instructions+=4;goto B521c3a;
case 0x521c40:c.instructions+=3;goto B521c40;
case 0x521c42:c.instructions+=2;goto B521c42;
case 0x521c45:c.instructions+=1;goto B521c45;
case 0x521c47:goto L521c47;
case 0x521c4c:goto L521c4c;
case 0x521c4f:c.instructions+=4;goto B521c4f;
case 0x521c55:c.instructions+=3;goto B521c55;
case 0x521c57:c.instructions+=2;goto B521c57;
case 0x521c5a:c.instructions+=1;goto B521c5a;
case 0x521c5c:goto L521c5c;
case 0x521c5d:goto L521c5d;
case 0x521c60:c.instructions+=4;goto B521c60;
case 0x521c66:c.instructions+=3;goto B521c66;
case 0x521c68:c.instructions+=2;goto B521c68;
case 0x521c6b:c.instructions+=1;goto B521c6b;
case 0x521c6d:goto L521c6d;
case 0x521c6e:goto L521c6e;
case 0x521c71:c.instructions+=4;goto B521c71;
case 0x521c77:c.instructions+=3;goto B521c77;
case 0x521c79:c.instructions+=2;goto B521c79;
case 0x521c7c:c.instructions+=1;goto B521c7c;
case 0x521c7e:goto L521c7e;
case 0x521c7f:goto L521c7f;
case 0x521c82:c.instructions+=4;goto B521c82;
case 0x521c88:c.instructions+=3;goto B521c88;
case 0x521c8a:c.instructions+=2;goto B521c8a;
case 0x521c8d:c.instructions+=1;goto B521c8d;
case 0x521c8f:goto L521c8f;
case 0x521c90:goto L521c90;
case 0x521c92:c.instructions+=1;goto B521c92;
case 0x521c94:goto L521c94;
case 0x521c97:c.instructions+=4;goto B521c97;
case 0x521c9b:c.instructions+=3;goto B521c9b;
case 0x521c9c:c.instructions+=2;goto B521c9c;
case 0x521ca2:c.instructions+=1;goto B521ca2;
case 0x521ca7:goto L521ca7;
case 0x521ca9:c.instructions+=1;goto B521ca9;
case 0x521cab:goto L521cab;
case 0x521cac:c.instructions+=2;goto B521cac;
case 0x521caf:c.instructions+=1;goto B521caf;
case 0x521cb1:goto L521cb1;
case 0x521cb5:c.instructions+=2;goto B521cb5;
case 0x521cb6:c.instructions+=1;goto B521cb6;
case 0x521cbb:goto L521cbb;
case 0x521cbe:c.instructions+=12;goto B521cbe;
case 0x521cc2:c.instructions+=11;goto B521cc2;
case 0x521cc5:c.instructions+=10;goto B521cc5;
case 0x521cc6:c.instructions+=9;goto B521cc6;
case 0x521cc8:c.instructions+=8;goto B521cc8;
case 0x521cca:c.instructions+=7;goto B521cca;
case 0x521ccb:c.instructions+=6;goto B521ccb;
case 0x521cce:c.instructions+=5;goto B521cce;
case 0x521ccf:c.instructions+=4;goto B521ccf;
case 0x521cd1:c.instructions+=3;goto B521cd1;
case 0x521cd2:c.instructions+=2;goto B521cd2;
case 0x521cd3:c.instructions+=1;goto B521cd3;
case 0x521cd6:goto L521cd6;
case 0x521cd7:c.instructions+=6;goto B521cd7;
case 0x521cd8:c.instructions+=5;goto B521cd8;
case 0x521cd9:c.instructions+=4;goto B521cd9;
case 0x521cdb:c.instructions+=3;goto B521cdb;
case 0x521cdc:c.instructions+=2;goto B521cdc;
case 0x521cdd:c.instructions+=1;goto B521cdd;
case 0x521ce0:goto L521ce0;
case 0x521ce1:c.instructions+=8;goto B521ce1;
case 0x521ce2:c.instructions+=7;goto B521ce2;
case 0x521ce3:c.instructions+=6;goto B521ce3;
case 0x521ce5:c.instructions+=5;goto B521ce5;
case 0x521ce6:c.instructions+=4;goto B521ce6;
case 0x521ce9:c.instructions+=3;goto B521ce9;
case 0x521ceb:c.instructions+=2;goto B521ceb;
case 0x521ced:c.instructions+=1;goto B521ced;
case 0x521cef:goto L521cef;
case 0x521cf2:c.instructions+=2;goto B521cf2;
case 0x521cf4:c.instructions+=1;goto B521cf4;
case 0x521cf6:goto L521cf6;
case 0x521cfb:c.instructions+=1;goto B521cfb;
case 0x521d00:goto L521d00;
case 0x521d03:c.instructions+=3;goto B521d03;
case 0x521d06:c.instructions+=2;goto B521d06;
case 0x521d08:c.instructions+=1;goto B521d08;
case 0x521d0a:goto L521d0a;
case 0x521d0d:c.instructions+=2;goto B521d0d;
case 0x521d0f:c.instructions+=1;goto B521d0f;
case 0x521d11:goto L521d11;
case 0x521d13:goto L521d13;
case 0x521d15:c.instructions+=1;goto B521d15;
case 0x521d17:goto L521d17;
case 0x521d1a:c.instructions+=1;goto B521d1a;
case 0x521d1c:goto L521d1c;
case 0x521d1e:c.instructions+=2;goto B521d1e;
case 0x521d21:c.instructions+=1;goto B521d21;
case 0x521d26:goto L521d26;
case 0x521d29:c.instructions+=1;goto B521d29;
case 0x521d2c:goto L521d2c;
case 0x521d2f:goto L521d2f;
case 0x521d32:c.instructions+=2;goto B521d32;
case 0x521d34:c.instructions+=1;goto B521d34;
case 0x521d36:goto L521d36;
case 0x521d39:c.instructions+=2;goto B521d39;
case 0x521d3b:c.instructions+=1;goto B521d3b;
case 0x521d3d:goto L521d3d;
case 0x521d40:goto L521d40;
case 0x521d45:c.instructions+=1;goto B521d45;
case 0x521d4a:goto L521d4a;
case 0x521d4d:c.instructions+=3;goto B521d4d;
case 0x521d50:c.instructions+=2;goto B521d50;
case 0x521d52:c.instructions+=1;goto B521d52;
case 0x521d54:goto L521d54;
case 0x521d57:c.instructions+=2;goto B521d57;
case 0x521d59:c.instructions+=1;goto B521d59;
case 0x521d5b:goto L521d5b;
case 0x521d5c:c.instructions+=4;goto B521d5c;
case 0x521d5d:c.instructions+=3;goto B521d5d;
case 0x521d5e:c.instructions+=2;goto B521d5e;
case 0x521d5f:c.instructions+=1;goto B521d5f;
case 0x521d60:goto L521d60;
case 0x521d62:c.instructions+=1;goto B521d62;
case 0x521d64:goto L521d64;
case 0x521d67:c.instructions+=1;goto B521d67;
case 0x521d69:goto L521d69;
case 0x521d6b:c.instructions+=2;goto B521d6b;
case 0x521d6e:c.instructions+=1;goto B521d6e;
case 0x521d73:goto L521d73;
case 0x521d76:c.instructions+=1;goto B521d76;
case 0x521d79:goto L521d79;
case 0x521d7c:goto L521d7c;
case 0x521d7d:c.instructions+=4;goto B521d7d;
case 0x521d7e:c.instructions+=3;goto B521d7e;
case 0x521d7f:c.instructions+=2;goto B521d7f;
case 0x521d80:c.instructions+=1;goto B521d80;
case 0x521d90:goto L521d90;
case 0x521d96:c.instructions+=5;goto B521d96;
case 0x521d98:c.instructions+=4;goto B521d98;
case 0x521d99:c.instructions+=3;goto B521d99;
case 0x521d9a:c.instructions+=2;goto B521d9a;
case 0x521da0:c.instructions+=1;goto B521da0;
case 0x521da2:goto L521da2;
case 0x521da5:c.instructions+=1;goto B521da5;
case 0x521da7:goto L521da7;
case 0x521da9:c.instructions+=1;goto B521da9;
case 0x521db0:goto L521db0;
case 0x521db2:c.instructions+=1;goto B521db2;
case 0x521db4:goto L521db4;
case 0x521db7:c.instructions+=1;goto B521db7;
case 0x521db9:goto L521db9;
case 0x521dbb:goto L521dbb;
case 0x521dbd:c.instructions+=1;goto B521dbd;
case 0x521dbf:goto L521dbf;
case 0x521dc1:c.instructions+=2;goto B521dc1;
case 0x521dc3:c.instructions+=1;goto B521dc3;
case 0x521dc6:goto L521dc6;
case 0x521dc9:c.instructions+=2;goto B521dc9;
case 0x521dcb:c.instructions+=1;goto B521dcb;
case 0x521dcd:goto L521dcd;
case 0x521dd0:c.instructions+=1;goto B521dd0;
case 0x521dd2:goto L521dd2;
case 0x521dd3:c.instructions+=2;goto B521dd3;
case 0x521dd4:c.instructions+=1;goto B521dd4;
case 0x521de0:goto L521de0;
case 0x521de6:c.instructions+=5;goto B521de6;
case 0x521de8:c.instructions+=4;goto B521de8;
case 0x521de9:c.instructions+=3;goto B521de9;
case 0x521dea:c.instructions+=2;goto B521dea;
case 0x521df0:c.instructions+=1;goto B521df0;
case 0x521df2:goto L521df2;
case 0x521df5:c.instructions+=1;goto B521df5;
case 0x521df7:goto L521df7;
case 0x521df9:c.instructions+=1;goto B521df9;
case 0x521e00:goto L521e00;
case 0x521e02:c.instructions+=1;goto B521e02;
case 0x521e04:goto L521e04;
case 0x521e07:c.instructions+=1;goto B521e07;
case 0x521e09:goto L521e09;
case 0x521e0b:goto L521e0b;
case 0x521e0d:c.instructions+=1;goto B521e0d;
case 0x521e0f:goto L521e0f;
case 0x521e12:c.instructions+=2;goto B521e12;
case 0x521e14:c.instructions+=1;goto B521e14;
case 0x521e16:goto L521e16;
case 0x521e18:c.instructions+=1;goto B521e18;
case 0x521e1d:goto L521e1d;
case 0x521e20:c.instructions+=2;goto B521e20;
case 0x521e22:c.instructions+=1;goto B521e22;
case 0x521e24:goto L521e24;
case 0x521e27:c.instructions+=1;goto B521e27;
case 0x521e29:goto L521e29;
case 0x521e2a:c.instructions+=2;goto B521e2a;
case 0x521e2b:c.instructions+=1;goto B521e2b;
case 0x521e30:goto L521e30;
case 0x521e34:c.instructions+=13;goto B521e34;
case 0x521e38:c.instructions+=12;goto B521e38;
case 0x521e39:c.instructions+=11;goto B521e39;
case 0x521e3a:c.instructions+=10;goto B521e3a;
case 0x521e3e:c.instructions+=9;goto B521e3e;
case 0x521e40:c.instructions+=8;goto B521e40;
case 0x521e44:c.instructions+=7;goto B521e44;
case 0x521e45:c.instructions+=6;goto B521e45;
case 0x521e49:c.instructions+=5;goto B521e49;
case 0x521e4a:c.instructions+=4;goto B521e4a;
case 0x521e4b:c.instructions+=3;goto B521e4b;
case 0x521e4c:c.instructions+=2;goto B521e4c;
case 0x521e4e:c.instructions+=1;goto B521e4e;
case 0x521e53:goto L521e53;
case 0x521e57:c.instructions+=12;goto B521e57;
case 0x521e59:c.instructions+=11;goto B521e59;
case 0x521e5c:c.instructions+=10;goto B521e5c;
case 0x521e5f:c.instructions+=9;goto B521e5f;
case 0x521e62:c.instructions+=8;goto B521e62;
case 0x521e65:c.instructions+=7;goto B521e65;
case 0x521e6b:c.instructions+=6;goto B521e6b;
case 0x521e6e:c.instructions+=5;goto B521e6e;
case 0x521e75:c.instructions+=4;goto B521e75;
case 0x521e7c:c.instructions+=3;goto B521e7c;
case 0x521e7e:c.instructions+=2;goto B521e7e;
case 0x521e7f:c.instructions+=1;goto B521e7f;
case 0x521e90:goto L521e90;
case 0x521e94:c.instructions+=6;goto B521e94;
case 0x521e9a:c.instructions+=5;goto B521e9a;
case 0x521e9b:c.instructions+=4;goto B521e9b;
case 0x521e9d:c.instructions+=3;goto B521e9d;
case 0x521ea0:c.instructions+=2;goto B521ea0;
case 0x521ea3:c.instructions+=1;goto B521ea3;
case 0x521ea5:goto L521ea5;
case 0x521ea8:c.instructions+=5;goto B521ea8;
case 0x521ea9:c.instructions+=4;goto B521ea9;
case 0x521eaa:c.instructions+=3;goto B521eaa;
case 0x521eac:c.instructions+=2;goto B521eac;
case 0x521eaf:c.instructions+=1;goto B521eaf;
case 0x521eb1:goto L521eb1;
case 0x521eb3:c.instructions+=4;goto B521eb3;
case 0x521eb4:c.instructions+=3;goto B521eb4;
case 0x521eb6:c.instructions+=2;goto B521eb6;
case 0x521ebd:c.instructions+=1;goto B521ebd;
case 0x521ec0:goto L521ec0;
case 0x521ec2:c.instructions+=2;goto B521ec2;
case 0x521ec4:c.instructions+=1;goto B521ec4;
case 0x521ec7:goto L521ec7;
case 0x521ec8:c.instructions+=1;goto B521ec8;
case 0x521ecb:goto L521ecb;
case 0x521ed1:c.instructions+=1;goto B521ed1;
case 0x521ed3:goto L521ed3;
case 0x521ed6:c.instructions+=1;goto B521ed6;
case 0x521ed8:goto L521ed8;
case 0x521ed9:c.instructions+=1;goto B521ed9;
case 0x521edc:goto L521edc;
case 0x521ede:c.instructions+=3;goto B521ede;
case 0x521edf:c.instructions+=2;goto B521edf;
case 0x521ee1:c.instructions+=1;goto B521ee1;
case 0x521ee4:goto L521ee4;
case 0x521ee6:c.instructions+=2;goto B521ee6;
case 0x521ee8:c.instructions+=1;goto B521ee8;
case 0x521eeb:goto L521eeb;
case 0x521eec:c.instructions+=1;goto B521eec;
case 0x521ef0:goto L521ef0;
case 0x521ef3:c.instructions+=5;goto B521ef3;
case 0x521ef5:c.instructions+=4;goto B521ef5;
case 0x521ef6:c.instructions+=3;goto B521ef6;
case 0x521ef9:c.instructions+=2;goto B521ef9;
case 0x521efa:c.instructions+=1;goto B521efa;
case 0x521efc:goto L521efc;
case 0x521eff:c.instructions+=1;goto B521eff;
case 0x521f01:goto L521f01;
case 0x521f03:goto L521f03;
case 0x521f08:goto L521f08;
case 0x521f0a:c.instructions+=1;goto B521f0a;
case 0x521f0c:goto L521f0c;
case 0x521f0f:c.instructions+=1;goto B521f0f;
case 0x521f11:goto L521f11;
case 0x521f13:goto L521f13;
case 0x521f15:c.instructions+=1;goto B521f15;
case 0x521f17:goto L521f17;
case 0x521f1a:c.instructions+=7;goto B521f1a;
case 0x521f1d:c.instructions+=6;goto B521f1d;
case 0x521f21:c.instructions+=5;goto B521f21;
case 0x521f23:c.instructions+=4;goto B521f23;
case 0x521f26:c.instructions+=3;goto B521f26;
case 0x521f29:c.instructions+=2;goto B521f29;
case 0x521f2b:c.instructions+=1;goto B521f2b;
case 0x521f2d:goto L521f2d;
case 0x521f30:c.instructions+=1;goto B521f30;
case 0x521f32:goto L521f32;
case 0x521f34:c.instructions+=1;goto B521f34;
case 0x521f36:goto L521f36;
case 0x521f37:c.instructions+=2;goto B521f37;
case 0x521f38:c.instructions+=1;goto B521f38;
case 0x521f40:goto L521f40;
case 0x521f44:c.instructions+=31;goto B521f44;
case 0x521f46:c.instructions+=30;goto B521f46;
case 0x521f4a:c.instructions+=29;goto B521f4a;
case 0x521f4d:c.instructions+=28;goto B521f4d;
case 0x521f51:c.instructions+=27;goto B521f51;
case 0x521f54:c.instructions+=26;goto B521f54;
case 0x521f59:c.instructions+=25;goto B521f59;
case 0x521f5c:c.instructions+=24;goto B521f5c;
case 0x521f5e:c.instructions+=23;goto B521f5e;
case 0x521f61:c.instructions+=22;goto B521f61;
case 0x521f64:c.instructions+=21;goto B521f64;
case 0x521f67:c.instructions+=20;goto B521f67;
case 0x521f6a:c.instructions+=19;goto B521f6a;
case 0x521f6e:c.instructions+=18;goto B521f6e;
case 0x521f71:c.instructions+=17;goto B521f71;
case 0x521f74:c.instructions+=16;goto B521f74;
case 0x521f77:c.instructions+=15;goto B521f77;
case 0x521f7a:c.instructions+=14;goto B521f7a;
case 0x521f7d:c.instructions+=13;goto B521f7d;
case 0x521f80:c.instructions+=12;goto B521f80;
case 0x521f83:c.instructions+=11;goto B521f83;
case 0x521f87:c.instructions+=10;goto B521f87;
case 0x521f8a:c.instructions+=9;goto B521f8a;
case 0x521f8e:c.instructions+=8;goto B521f8e;
case 0x521f92:c.instructions+=7;goto B521f92;
case 0x521f96:c.instructions+=6;goto B521f96;
case 0x521f9c:c.instructions+=5;goto B521f9c;
case 0x521f9f:c.instructions+=4;goto B521f9f;
case 0x521fa6:c.instructions+=3;goto B521fa6;
case 0x521fa9:c.instructions+=2;goto B521fa9;
case 0x521fad:c.instructions+=1;goto B521fad;
case 0x521fb0:goto L521fb0;
case 0x521fb3:c.instructions+=2;goto B521fb3;
case 0x521fb5:c.instructions+=1;goto B521fb5;
case 0x521fb7:goto L521fb7;
case 0x521fb9:c.instructions+=3;goto B521fb9;
case 0x521fbe:c.instructions+=2;goto B521fbe;
case 0x521fbf:c.instructions+=1;goto B521fbf;
case 0x521fc4:goto L521fc4;
case 0x521fc7:goto L521fc7;
case 0x521fd0:goto L521fd0;
case 0x521fd3:c.instructions+=2;goto B521fd3;
case 0x521fd5:c.instructions+=1;goto B521fd5;
case 0x521fd7:goto L521fd7;
case 0x521fd9:c.instructions+=3;goto B521fd9;
case 0x521fde:c.instructions+=2;goto B521fde;
case 0x521fdf:c.instructions+=1;goto B521fdf;
case 0x521fe4:goto L521fe4;
case 0x521fe7:goto L521fe7;
case 0x521ff0:goto L521ff0;
case 0x521ff4:c.instructions+=4;goto B521ff4;
case 0x521ff6:c.instructions+=3;goto B521ff6;
case 0x521ffa:c.instructions+=2;goto B521ffa;
case 0x521ffd:c.instructions+=1;goto B521ffd;
default:missing_instruction(c.pc);}
B521001:L521001:{c.instructions+=10;NFSU2_TR(0x521001);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521005:{NFSU2_TR(0x521005);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521009:{NFSU2_TR(0x521009);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52100a:{NFSU2_TR(0x52100a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52100e:{NFSU2_TR(0x52100e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52100f:{NFSU2_TR(0x52100f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521013:{NFSU2_TR(0x521013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521014:{NFSU2_TR(0x521014);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521015:{NFSU2_TR(0x521015);
__builtin_memmove((R+4),(R+0),4);
}
B521017:{NFSU2_TR(0x521017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52101cull));
TAIL_STATIC(0x520f90u,520);
}
B52101c:L52101c:{c.instructions+=5;NFSU2_TR(0x52101c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B521020:{NFSU2_TR(0x521020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521022:{NFSU2_TR(0x521022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521023:{NFSU2_TR(0x521023);
__builtin_memmove((R+4),(R+24),4);
}
B521025:{NFSU2_TR(0x521025);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521028ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521028:L521028:{c.instructions+=2;NFSU2_TR(0x521028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521029:{NFSU2_TR(0x521029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52102c:L52102c:{c.instructions+=6;NFSU2_TR(0x52102c);
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
B52102e:{NFSU2_TR(0x52102e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B521031:{NFSU2_TR(0x521031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521033:{NFSU2_TR(0x521033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521034:{NFSU2_TR(0x521034);
__builtin_memmove((R+4),(R+24),4);
}
B521036:{NFSU2_TR(0x521036);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521039ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521039:L521039:{c.instructions+=2;NFSU2_TR(0x521039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52103a:{NFSU2_TR(0x52103a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521040:L521040:{c.instructions+=6;NFSU2_TR(0x521040);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521041:{NFSU2_TR(0x521041);
__builtin_memmove((R+20),(R+16),4);
}
B521043:{NFSU2_TR(0x521043);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B521049:{NFSU2_TR(0x521049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52104b:{NFSU2_TR(0x52104b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52104c:{NFSU2_TR(0x52104c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52104full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52104f:L52104f:{c.instructions+=2;NFSU2_TR(0x52104f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521050:{NFSU2_TR(0x521050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521055ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B521055:L521055:{c.instructions+=4;NFSU2_TR(0x521055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521058:{NFSU2_TR(0x521058);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52105b:{NFSU2_TR(0x52105b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B52105e:{NFSU2_TR(0x52105e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L521092;}}
}
B521060:L521060:{c.instructions+=2;NFSU2_TR(0x521060);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B521063:{NFSU2_TR(0x521063);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L521092;}}
}
B521065:L521065:{c.instructions+=2;NFSU2_TR(0x521065);
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
B521067:{NFSU2_TR(0x521067);
if(r1(R+518)){{goto L521092;}}
}
B521069:L521069:{c.instructions+=6;NFSU2_TR(0x521069);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52106a:{NFSU2_TR(0x52106a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52106d:{NFSU2_TR(0x52106d);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521072:{NFSU2_TR(0x521072);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521073:{NFSU2_TR(0x521073);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521074:{NFSU2_TR(0x521074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521079ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B521079:L521079:{c.instructions+=3;NFSU2_TR(0x521079);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52107c:{NFSU2_TR(0x52107c);
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
B52107f:{NFSU2_TR(0x52107f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521091;}}
}
B521081:L521081:{c.instructions+=4;NFSU2_TR(0x521081);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521086:{NFSU2_TR(0x521086);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521087:{NFSU2_TR(0x521087);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521089:{NFSU2_TR(0x521089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52108eull));
TAIL_STATIC(0x4c1860u,4c1);
}
B52108e:L52108e:{c.instructions+=1;NFSU2_TR(0x52108e);
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
B521091:L521091:{c.instructions+=1;NFSU2_TR(0x521091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521092:L521092:{c.instructions+=3;NFSU2_TR(0x521092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521093:{NFSU2_TR(0x521093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521094:{NFSU2_TR(0x521094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5210a0:L5210a0:{c.instructions+=30;NFSU2_TR(0x5210a0);
__builtin_memmove((R+0),(R+4),4);
}
B5210a2:{NFSU2_TR(0x5210a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5210a6:{NFSU2_TR(0x5210a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210a9:{NFSU2_TR(0x5210a9);
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
B5210ab:{NFSU2_TR(0x5210ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210ae:{NFSU2_TR(0x5210ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210b1:{NFSU2_TR(0x5210b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210b4:{NFSU2_TR(0x5210b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210b7:{NFSU2_TR(0x5210b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210ba:{NFSU2_TR(0x5210ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210bd:{NFSU2_TR(0x5210bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210c0:{NFSU2_TR(0x5210c0);
w4(R+4,u32(0x3f800000ull));
}
B5210c5:{NFSU2_TR(0x5210c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210c8:{NFSU2_TR(0x5210c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210cb:{NFSU2_TR(0x5210cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210ce:{NFSU2_TR(0x5210ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210d1:{NFSU2_TR(0x5210d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5210d5:{NFSU2_TR(0x5210d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5210d6:{NFSU2_TR(0x5210d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5210da:{NFSU2_TR(0x5210da);
w1(R+8,u8(0x1ull));
}
B5210dc:{NFSU2_TR(0x5210dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210df:{NFSU2_TR(0x5210df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5210e3:{NFSU2_TR(0x5210e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210e6:{NFSU2_TR(0x5210e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210e9:{NFSU2_TR(0x5210e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210ec:{NFSU2_TR(0x5210ec);
u8 U[4];
w4(U+0,u32(0x79b578ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5210f2:{NFSU2_TR(0x5210f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5210f5:{NFSU2_TR(0x5210f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5210f8:{NFSU2_TR(0x5210f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5210f9:{NFSU2_TR(0x5210f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521100:L521100:{c.instructions+=11;NFSU2_TR(0x521100);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521102:{NFSU2_TR(0x521102);
u8 U[4];
w4(U+0,u32(0x777258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521107:{NFSU2_TR(0x521107);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52110d:{NFSU2_TR(0x52110d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52110e:{NFSU2_TR(0x52110e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521115:{NFSU2_TR(0x521115);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521116:{NFSU2_TR(0x521116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521117:{NFSU2_TR(0x521117);
__builtin_memmove((R+24),(R+4),4);
}
B521119:{NFSU2_TR(0x521119);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1242ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52111f:{NFSU2_TR(0x52111f);
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
B521121:{NFSU2_TR(0x521121);
if(r1(R+518)){{goto L521264;}}
}
B521127:L521127:{c.instructions+=6;NFSU2_TR(0x521127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52112a:{NFSU2_TR(0x52112a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52112c:{NFSU2_TR(0x52112c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52112d:{NFSU2_TR(0x52112d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52112e:{NFSU2_TR(0x52112e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52112f:{NFSU2_TR(0x52112f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521132ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521132:L521132:{c.instructions+=4;NFSU2_TR(0x521132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521135:{NFSU2_TR(0x521135);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B521137:{NFSU2_TR(0x521137);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521139:{NFSU2_TR(0x521139);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52114e;}}
}
B52113b:L52113b:{c.instructions+=2;NFSU2_TR(0x52113b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52113e:{NFSU2_TR(0x52113e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52114e;}}
}
B521140:L521140:{c.instructions+=3;NFSU2_TR(0x521140);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B521146:{NFSU2_TR(0x521146);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B52114c:{NFSU2_TR(0x52114c);
{goto L521150;}
}
B52114e:L52114e:{c.instructions+=1;NFSU2_TR(0x52114e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B521150:L521150:{c.instructions+=2;NFSU2_TR(0x521150);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521151:{NFSU2_TR(0x521151);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521156ull));
TAIL_STATIC(0x5034c0u,503);
}
B521156:L521156:{c.instructions+=3;NFSU2_TR(0x521156);
u8 U[4];
w4(U+0,u32(0x8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52115b:{NFSU2_TR(0x52115b);
__builtin_memmove((R+20),(R+0),4);
}
B52115d:{NFSU2_TR(0x52115d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521162ull));
TAIL_STATIC(0x575620u,575);
}
B521162:L521162:{c.instructions+=5;NFSU2_TR(0x521162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521165:{NFSU2_TR(0x521165);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521169:{NFSU2_TR(0x521169);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52116b:{NFSU2_TR(0x52116b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52116f:{NFSU2_TR(0x52116f);
if(r1(R+518)){{goto L52117c;}}
}
B521171:L521171:{c.instructions+=2;NFSU2_TR(0x521171);
__builtin_memmove((R+4),(R+0),4);
}
B521173:{NFSU2_TR(0x521173);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521178ull));
TAIL_STATIC(0x40c910u,40c);
}
B521178:L521178:{c.instructions+=2;NFSU2_TR(0x521178);
__builtin_memmove((R+12),(R+0),4);
}
B52117a:{NFSU2_TR(0x52117a);
{goto L52117e;}
}
B52117c:L52117c:{c.instructions+=1;NFSU2_TR(0x52117c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52117e:L52117e:{c.instructions+=3;NFSU2_TR(0x52117e);
u8 U[4];
w4(U+0,u32(0x8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521183:{NFSU2_TR(0x521183);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52118b:{NFSU2_TR(0x52118b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521190ull));
TAIL_STATIC(0x575620u,575);
}
B521190:L521190:{c.instructions+=5;NFSU2_TR(0x521190);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521193:{NFSU2_TR(0x521193);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521197:{NFSU2_TR(0x521197);
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
B521199:{NFSU2_TR(0x521199);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5211a1:{NFSU2_TR(0x5211a1);
if(r1(R+518)){{goto L5211b2;}}
}
B5211a3:L5211a3:{c.instructions+=2;NFSU2_TR(0x5211a3);
__builtin_memmove((R+4),(R+0),4);
}
B5211a5:{NFSU2_TR(0x5211a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5211aaull));
TAIL_STATIC(0x40c910u,40c);
}
B5211aa:L5211aa:{c.instructions+=3;NFSU2_TR(0x5211aa);
__builtin_memmove((R+28),(R+0),4);
}
B5211ac:{NFSU2_TR(0x5211ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211b0:{NFSU2_TR(0x5211b0);
{goto L5211b6;}
}
B5211b2:L5211b2:{c.instructions+=1;NFSU2_TR(0x5211b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211b6:L5211b6:{c.instructions+=8;NFSU2_TR(0x5211b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5211b9:{NFSU2_TR(0x5211b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5211bc:{NFSU2_TR(0x5211bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211be:{NFSU2_TR(0x5211be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211bf:{NFSU2_TR(0x5211bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211c0:{NFSU2_TR(0x5211c0);
__builtin_memmove((R+4),(R+20),4);
}
B5211c2:{NFSU2_TR(0x5211c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5211ca:{NFSU2_TR(0x5211ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5211cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5211cd:L5211cd:{c.instructions+=7;NFSU2_TR(0x5211cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5211d0:{NFSU2_TR(0x5211d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5211d3:{NFSU2_TR(0x5211d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5211d5:{NFSU2_TR(0x5211d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211d7:{NFSU2_TR(0x5211d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211d8:{NFSU2_TR(0x5211d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5211d9:{NFSU2_TR(0x5211d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5211dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5211dc:L5211dc:{c.instructions+=1;NFSU2_TR(0x5211dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5211e1ull));
TAIL_STATIC(0x50e900u,50e);
}
B5211e1:L5211e1:{c.instructions+=2;NFSU2_TR(0x5211e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5211e3:{NFSU2_TR(0x5211e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52121b;}}
}
B5211e5:L5211e5:{c.instructions+=11;NFSU2_TR(0x5211e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5211e8:{NFSU2_TR(0x5211e8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5211ea:{NFSU2_TR(0x5211ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211ed:{NFSU2_TR(0x5211ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211f0:{NFSU2_TR(0x5211f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211f3:{NFSU2_TR(0x5211f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5211f6:{NFSU2_TR(0x5211f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5211fd:{NFSU2_TR(0x5211fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B521200:{NFSU2_TR(0x521200);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521202:{NFSU2_TR(0x521202);
__builtin_memmove((R+28),(R+8),4);
}
B521204:{NFSU2_TR(0x521204);
w4(R+4,u32(0x106ull));
}
B521209:L521209:{c.instructions+=1;NFSU2_TR(0x521209);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L52120b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521209u);}goto L521209;}
}
B52120b:L52120b:{c.instructions+=4;NFSU2_TR(0x52120b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52120e:{NFSU2_TR(0x52120e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521211:{NFSU2_TR(0x521211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521214:{NFSU2_TR(0x521214);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B52121b:L52121b:{c.instructions+=2;NFSU2_TR(0x52121b);
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
B52121d:{NFSU2_TR(0x52121d);
if(r1(R+518)){{goto L521233;}}
}
B52121f:L52121f:{c.instructions+=2;NFSU2_TR(0x52121f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x384ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521225:{NFSU2_TR(0x521225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52122aull));
TAIL_STATIC(0x4022c0u,402);
}
B52122a:L52122a:{c.instructions+=2;NFSU2_TR(0x52122a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52122b:{NFSU2_TR(0x52122b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521230ull));
TAIL_STATIC(0x575630u,575);
}
B521230:L521230:{c.instructions+=1;NFSU2_TR(0x521230);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521233:L521233:{c.instructions+=6;NFSU2_TR(0x521233);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521237:{NFSU2_TR(0x521237);
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
B521239:{NFSU2_TR(0x521239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52123a:{NFSU2_TR(0x52123a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52123b:{NFSU2_TR(0x52123b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52123c:{NFSU2_TR(0x52123c);
if(r1(R+518)){{goto L521252;}}
}
B52123e:L52123e:{c.instructions+=2;NFSU2_TR(0x52123e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x384ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521244:{NFSU2_TR(0x521244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521249ull));
TAIL_STATIC(0x4022c0u,402);
}
B521249:L521249:{c.instructions+=2;NFSU2_TR(0x521249);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52124a:{NFSU2_TR(0x52124a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52124full));
TAIL_STATIC(0x575630u,575);
}
B52124f:L52124f:{c.instructions+=1;NFSU2_TR(0x52124f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521252:L521252:{c.instructions+=6;NFSU2_TR(0x521252);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B521254:{NFSU2_TR(0x521254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521255:{NFSU2_TR(0x521255);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521259:{NFSU2_TR(0x521259);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521260:{NFSU2_TR(0x521260);
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
B521263:{NFSU2_TR(0x521263);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521264:L521264:{c.instructions+=6;NFSU2_TR(0x521264);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521268:{NFSU2_TR(0x521268);
w1(R+0,u8(0x1ull));
}
B52126a:{NFSU2_TR(0x52126a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52126b:{NFSU2_TR(0x52126b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521272:{NFSU2_TR(0x521272);
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
B521275:{NFSU2_TR(0x521275);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521280:L521280:{c.instructions+=3;NFSU2_TR(0x521280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521284:{NFSU2_TR(0x521284);
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
B521286:{NFSU2_TR(0x521286);
if(r1(R+518)){{goto L5212c4;}}
}
B521288:L521288:{c.instructions+=3;NFSU2_TR(0x521288);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52128b:{NFSU2_TR(0x52128b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52128d:{NFSU2_TR(0x52128d);
if(r1(R+518)){{goto L5212a9;}}
}
B52128f:L52128f:{c.instructions+=2;NFSU2_TR(0x52128f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x36ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B521291:{NFSU2_TR(0x521291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5212a0;}}
}
B521293:L521293:{c.instructions+=3;NFSU2_TR(0x521293);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B521299:{NFSU2_TR(0x521299);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52129b:{NFSU2_TR(0x52129b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5212a0ull));
TAIL_STATIC(0x458520u,458);
}
B5212a0:L5212a0:{c.instructions+=2;NFSU2_TR(0x5212a0);
w4(R+0,u32(s32(s8(m1(0x83813f)))));
}
B5212a7:{NFSU2_TR(0x5212a7);
{goto L5212b0;}
}
B5212a9:L5212a9:{c.instructions+=1;NFSU2_TR(0x5212a9);
w4(R+0,u32(s32(s8(m1(0x838150)))));
}
B5212b0:L5212b0:{c.instructions+=2;NFSU2_TR(0x5212b0);
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
B5212b3:{NFSU2_TR(0x5212b3);
if(r1(R+518)){{goto L5212c4;}}
}
B5212b5:L5212b5:{c.instructions+=3;NFSU2_TR(0x5212b5);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5212bb:{NFSU2_TR(0x5212bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5212bf:{NFSU2_TR(0x5212bf);
TAIL_STATIC(0x458520u,458);
}
B5212c4:L5212c4:{c.instructions+=1;NFSU2_TR(0x5212c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5212d0:L5212d0:{c.instructions+=6;NFSU2_TR(0x5212d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5212d4:{NFSU2_TR(0x5212d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5212d6:{NFSU2_TR(0x5212d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5212d8:{NFSU2_TR(0x5212d8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5212d9:{NFSU2_TR(0x5212d9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5212dc:{NFSU2_TR(0x5212dc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5212ff;}}
}
B5212de:L5212de:{c.instructions+=1;NFSU2_TR(0x5212de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x521320ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5212e5:L5212e5:{c.instructions+=2;NFSU2_TR(0x5212e5);
w4(R+0,u32(0x13ull));
}
B5212ea:{NFSU2_TR(0x5212ea);
{goto L5212ff;}
}
B5212ec:L5212ec:{c.instructions+=2;NFSU2_TR(0x5212ec);
w4(R+0,u32(0x12ull));
}
B5212f1:{NFSU2_TR(0x5212f1);
{goto L5212ff;}
}
B5212f3:L5212f3:{c.instructions+=2;NFSU2_TR(0x5212f3);
w4(R+0,u32(0x14ull));
}
B5212f8:{NFSU2_TR(0x5212f8);
{goto L5212ff;}
}
B5212fa:L5212fa:{c.instructions+=1;NFSU2_TR(0x5212fa);
w4(R+0,u32(0x15ull));
}
B5212ff:L5212ff:{c.instructions+=3;NFSU2_TR(0x5212ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83813full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B521306:{NFSU2_TR(0x521306);
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
B521309:{NFSU2_TR(0x521309);
if(r1(R+518)){{goto L52131a;}}
}
B52130b:L52130b:{c.instructions+=3;NFSU2_TR(0x52130b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B521311:{NFSU2_TR(0x521311);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521315:{NFSU2_TR(0x521315);
TAIL_STATIC(0x458520u,458);
}
B52131a:L52131a:{c.instructions+=1;NFSU2_TR(0x52131a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521340:L521340:{c.instructions+=5;NFSU2_TR(0x521340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521341:{NFSU2_TR(0x521341);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521345:{NFSU2_TR(0x521345);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521347:{NFSU2_TR(0x521347);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B52134b:{NFSU2_TR(0x52134b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521357;}}
}
B52134d:L52134d:{c.instructions+=2;NFSU2_TR(0x52134d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B521353:{NFSU2_TR(0x521353);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521357:L521357:{c.instructions+=10;NFSU2_TR(0x521357);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521358:{NFSU2_TR(0x521358);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52135c:{NFSU2_TR(0x52135c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52135f:{NFSU2_TR(0x52135f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521360:{NFSU2_TR(0x521360);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B521364:{NFSU2_TR(0x521364);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521365:{NFSU2_TR(0x521365);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2f0ull))));
}
B52136b:{NFSU2_TR(0x52136b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52136d:{NFSU2_TR(0x52136d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52136f:{NFSU2_TR(0x52136f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52138d;}}
}
B521371:L521371:{c.instructions+=2;NFSU2_TR(0x521371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521372:{NFSU2_TR(0x521372);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B521375:L521375:{c.instructions+=5;NFSU2_TR(0x521375);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521377:{NFSU2_TR(0x521377);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521379:{NFSU2_TR(0x521379);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52137a:{NFSU2_TR(0x52137a);
__builtin_memmove((R+4),(R+20),4);
}
B52137c:{NFSU2_TR(0x52137c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521381ull));
TAIL_STATIC(0x5a6320u,5a6);
}
B521381:L521381:{c.instructions+=5;NFSU2_TR(0x521381);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521384:{NFSU2_TR(0x521384);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B521385:{NFSU2_TR(0x521385);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B521388:{NFSU2_TR(0x521388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B52138a:{NFSU2_TR(0x52138a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521375u);}goto L521375;}}
}
B52138c:L52138c:{c.instructions+=1;NFSU2_TR(0x52138c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52138d:L52138d:{c.instructions+=6;NFSU2_TR(0x52138d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521391:{NFSU2_TR(0x521391);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521393:{NFSU2_TR(0x521393);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521395:{NFSU2_TR(0x521395);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521397:{NFSU2_TR(0x521397);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521399:{NFSU2_TR(0x521399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52139eull));
TAIL_STATIC(0x639ce0u,639);
}
B52139e:L52139e:{c.instructions+=5;NFSU2_TR(0x52139e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5213a2:{NFSU2_TR(0x5213a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213a4:{NFSU2_TR(0x5213a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213a6:{NFSU2_TR(0x5213a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213a7:{NFSU2_TR(0x5213a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5213acull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5213ac:L5213ac:{c.instructions+=5;NFSU2_TR(0x5213ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5213b0:{NFSU2_TR(0x5213b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5213b6:{NFSU2_TR(0x5213b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5213b9:{NFSU2_TR(0x5213b9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5213bb:{NFSU2_TR(0x5213bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5213c9;}}
}
B5213bd:L5213bd:{c.instructions+=4;NFSU2_TR(0x5213bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5213c0:{NFSU2_TR(0x5213c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213c1:{NFSU2_TR(0x5213c1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5213c4:{NFSU2_TR(0x5213c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5213c9ull));
TAIL_STATIC(0x503950u,503);
}
B5213c9:L5213c9:{c.instructions+=5;NFSU2_TR(0x5213c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5213ca:{NFSU2_TR(0x5213ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5213cb:{NFSU2_TR(0x5213cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5213cc:{NFSU2_TR(0x5213cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5213cd:{NFSU2_TR(0x5213cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5213d0:L5213d0:{c.instructions+=6;NFSU2_TR(0x5213d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213d1:{NFSU2_TR(0x5213d1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5213d5:{NFSU2_TR(0x5213d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5213d7:{NFSU2_TR(0x5213d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213d8:{NFSU2_TR(0x5213d8);
__builtin_memmove((R+28),(R+4),4);
}
B5213da:{NFSU2_TR(0x5213da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5213e2;}}
}
B5213dc:L5213dc:{c.instructions+=1;NFSU2_TR(0x5213dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5213e2:L5213e2:{c.instructions+=6;NFSU2_TR(0x5213e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5213e6:{NFSU2_TR(0x5213e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213e8:{NFSU2_TR(0x5213e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213ea:{NFSU2_TR(0x5213ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213eb:{NFSU2_TR(0x5213eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5213f1:{NFSU2_TR(0x5213f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5213f6ull));
TAIL_STATIC(0x5a6320u,5a6);
}
B5213f6:L5213f6:{c.instructions+=6;NFSU2_TR(0x5213f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213f8:{NFSU2_TR(0x5213f8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213fa:{NFSU2_TR(0x5213fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213fc:{NFSU2_TR(0x5213fc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5213fe:{NFSU2_TR(0x5213fe);
__builtin_memmove((R+4),(R+24),4);
}
B521400:{NFSU2_TR(0x521400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521405ull));
TAIL_STATIC(0x639ce0u,639);
}
B521405:L521405:{c.instructions+=4;NFSU2_TR(0x521405);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521407:{NFSU2_TR(0x521407);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521409:{NFSU2_TR(0x521409);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52140a:{NFSU2_TR(0x52140a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52140full));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B52140f:L52140f:{c.instructions+=4;NFSU2_TR(0x52140f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521415:{NFSU2_TR(0x521415);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B521418:{NFSU2_TR(0x521418);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B52141a:{NFSU2_TR(0x52141a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521428;}}
}
B52141c:L52141c:{c.instructions+=4;NFSU2_TR(0x52141c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52141f:{NFSU2_TR(0x52141f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521420:{NFSU2_TR(0x521420);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B521423:{NFSU2_TR(0x521423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521428ull));
TAIL_STATIC(0x503950u,503);
}
B521428:L521428:{c.instructions+=3;NFSU2_TR(0x521428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521429:{NFSU2_TR(0x521429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52142a:{NFSU2_TR(0x52142a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521430:L521430:{c.instructions+=12;NFSU2_TR(0x521430);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521434:{NFSU2_TR(0x521434);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521435:{NFSU2_TR(0x521435);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521436:{NFSU2_TR(0x521436);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521438:{NFSU2_TR(0x521438);
__builtin_memmove((R+24),(R+4),4);
}
B52143a:{NFSU2_TR(0x52143a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52143c:{NFSU2_TR(0x52143c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52143e:{NFSU2_TR(0x52143e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521444:{NFSU2_TR(0x521444);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521446:{NFSU2_TR(0x521446);
__builtin_memmove((R+4),(R+28),4);
}
B521448:{NFSU2_TR(0x521448);
u8 U[16];
w4(U+0,u32(u32(u32(0xc58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B521453:{NFSU2_TR(0x521453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521458ull));
TAIL_STATIC(0x639ce0u,639);
}
B521458:L521458:{c.instructions+=4;NFSU2_TR(0x521458);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52145a:{NFSU2_TR(0x52145a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52145c:{NFSU2_TR(0x52145c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52145d:{NFSU2_TR(0x52145d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521462ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B521462:L521462:{c.instructions+=5;NFSU2_TR(0x521462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521465:{NFSU2_TR(0x521465);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B521468:{NFSU2_TR(0x521468);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521469:{NFSU2_TR(0x521469);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B52146c:{NFSU2_TR(0x52146c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521471ull));
TAIL_STATIC(0x503950u,503);
}
B521471:L521471:{c.instructions+=3;NFSU2_TR(0x521471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521472:{NFSU2_TR(0x521472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521473:{NFSU2_TR(0x521473);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521480:L521480:{c.instructions+=12;NFSU2_TR(0x521480);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521484:{NFSU2_TR(0x521484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521485:{NFSU2_TR(0x521485);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521486:{NFSU2_TR(0x521486);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521488:{NFSU2_TR(0x521488);
__builtin_memmove((R+24),(R+4),4);
}
B52148a:{NFSU2_TR(0x52148a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52148c:{NFSU2_TR(0x52148c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52148e:{NFSU2_TR(0x52148e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521494:{NFSU2_TR(0x521494);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521496:{NFSU2_TR(0x521496);
__builtin_memmove((R+4),(R+28),4);
}
B521498:{NFSU2_TR(0x521498);
u8 U[16];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5214a3:{NFSU2_TR(0x5214a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5214a8ull));
TAIL_STATIC(0x639ce0u,639);
}
B5214a8:L5214a8:{c.instructions+=4;NFSU2_TR(0x5214a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5214aa:{NFSU2_TR(0x5214aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5214ac:{NFSU2_TR(0x5214ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5214ad:{NFSU2_TR(0x5214ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5214b2ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5214b2:L5214b2:{c.instructions+=5;NFSU2_TR(0x5214b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5214b5:{NFSU2_TR(0x5214b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5214b8:{NFSU2_TR(0x5214b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5214b9:{NFSU2_TR(0x5214b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5214bc:{NFSU2_TR(0x5214bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5214c1ull));
TAIL_STATIC(0x503950u,503);
}
B5214c1:L5214c1:{c.instructions+=3;NFSU2_TR(0x5214c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5214c2:{NFSU2_TR(0x5214c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5214c3:{NFSU2_TR(0x5214c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5214d0:L5214d0:{c.instructions+=4;NFSU2_TR(0x5214d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5214d3:{NFSU2_TR(0x5214d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B5214d6:{NFSU2_TR(0x5214d6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5214d8:{NFSU2_TR(0x5214d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5214df;}}
}
B5214da:L5214da:{c.instructions+=2;NFSU2_TR(0x5214da);
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
B5214dc:{NFSU2_TR(0x5214dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5214df:L5214df:{c.instructions+=3;NFSU2_TR(0x5214df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5214e1:{NFSU2_TR(0x5214e1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5214e3:{NFSU2_TR(0x5214e3);
if(r1(R+518)){{goto L5214fb;}}
}
B5214e5:L5214e5:{c.instructions+=2;NFSU2_TR(0x5214e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5214e9:{NFSU2_TR(0x5214e9);
__builtin_memmove((R+16),(R+16),4);
}
B5214f0:L5214f0:{c.instructions+=2;NFSU2_TR(0x5214f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B5214f3:{NFSU2_TR(0x5214f3);
if(r1(R+518)){{goto L521500;}}
}
B5214f5:L5214f5:{c.instructions+=3;NFSU2_TR(0x5214f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5214f7:{NFSU2_TR(0x5214f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5214f9:{NFSU2_TR(0x5214f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5214f0u);}goto L5214f0;}}
}
B5214fb:L5214fb:{c.instructions+=2;NFSU2_TR(0x5214fb);
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
B5214fd:{NFSU2_TR(0x5214fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521500:L521500:{c.instructions+=2;NFSU2_TR(0x521500);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521503:{NFSU2_TR(0x521503);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521510:L521510:{c.instructions+=3;NFSU2_TR(0x521510);
w4(R+0,u32(s32(s8(m1(0x83813f)))));
}
B521517:{NFSU2_TR(0x521517);
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
B52151a:{NFSU2_TR(0x52151a);
if(r1(R+518)){{goto L52152b;}}
}
B52151c:L52151c:{c.instructions+=3;NFSU2_TR(0x52151c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B521522:{NFSU2_TR(0x521522);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521526:{NFSU2_TR(0x521526);
TAIL_STATIC(0x458520u,458);
}
B52152b:L52152b:{c.instructions+=1;NFSU2_TR(0x52152b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521530:L521530:{c.instructions+=8;NFSU2_TR(0x521530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521533:{NFSU2_TR(0x521533);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521534:{NFSU2_TR(0x521534);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521535:{NFSU2_TR(0x521535);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521536:{NFSU2_TR(0x521536);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521539:{NFSU2_TR(0x521539);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52153b:{NFSU2_TR(0x52153b);
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
B52153d:{NFSU2_TR(0x52153d);
if(r1(R+518)){{goto L52156d;}}
}
B52153f:L52153f:{c.instructions+=3;NFSU2_TR(0x52153f);
__builtin_memmove((R+24),(R+0),4);
}
B521541:{NFSU2_TR(0x521541);
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
B521543:{NFSU2_TR(0x521543);
if(r1(R+518)){{goto L52156d;}}
}
B521545:L521545:{c.instructions+=3;NFSU2_TR(0x521545);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521548:{NFSU2_TR(0x521548);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52154a:{NFSU2_TR(0x52154a);
if(r1(R+518)){{goto L521567;}}
}
B52154c:L52154c:{c.instructions+=3;NFSU2_TR(0x52154c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52154f:{NFSU2_TR(0x52154f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521552:{NFSU2_TR(0x521552);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L521559;}}
}
B521554:L521554:{c.instructions+=2;NFSU2_TR(0x521554);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521557:{NFSU2_TR(0x521557);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L521567;}}
}
B521559:L521559:{c.instructions+=4;NFSU2_TR(0x521559);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52155a:{NFSU2_TR(0x52155a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52155b:{NFSU2_TR(0x52155b);
w4(R+4,u32(0x85ad40ull));
}
B521560:{NFSU2_TR(0x521560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521565ull));
TAIL_STATIC(0x514280u,514);
}
B521565:L521565:{c.instructions+=1;NFSU2_TR(0x521565);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B521567:L521567:{c.instructions+=3;NFSU2_TR(0x521567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B521569:{NFSU2_TR(0x521569);
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
B52156b:{NFSU2_TR(0x52156b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521545u);}goto L521545;}}
}
B52156d:L52156d:{c.instructions+=5;NFSU2_TR(0x52156d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52156e:{NFSU2_TR(0x52156e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52156f:{NFSU2_TR(0x52156f);
__builtin_memmove((R+0),(R+12),4);
}
B521571:{NFSU2_TR(0x521571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521572:{NFSU2_TR(0x521572);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521580:L521580:{c.instructions+=6;NFSU2_TR(0x521580);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521583:{NFSU2_TR(0x521583);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521584:{NFSU2_TR(0x521584);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521585:{NFSU2_TR(0x521585);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521588:{NFSU2_TR(0x521588);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52158a:{NFSU2_TR(0x52158a);
if(r1(R+518)){{goto L5215bd;}}
}
B52158c:L52158c:{c.instructions+=3;NFSU2_TR(0x52158c);
__builtin_memmove((R+24),(R+0),4);
}
B52158e:{NFSU2_TR(0x52158e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521590:{NFSU2_TR(0x521590);
if(r1(R+518)){{goto L5215bd;}}
}
B521592:L521592:{c.instructions+=4;NFSU2_TR(0x521592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521595:{NFSU2_TR(0x521595);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521598:{NFSU2_TR(0x521598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52159b:{NFSU2_TR(0x52159b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5215b7;}}
}
B52159d:L52159d:{c.instructions+=2;NFSU2_TR(0x52159d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5215a0:{NFSU2_TR(0x5215a0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5215b7;}}
}
B5215a2:L5215a2:{c.instructions+=2;NFSU2_TR(0x5215a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5215a4:{NFSU2_TR(0x5215a4);
if(r1(R+518)){{goto L5215b7;}}
}
B5215a6:L5215a6:{c.instructions+=3;NFSU2_TR(0x5215a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215a8:{NFSU2_TR(0x5215a8);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215ad:{NFSU2_TR(0x5215ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5215b2ull));
TAIL_STATIC(0x61b500u,61b);
}
B5215b2:L5215b2:{c.instructions+=2;NFSU2_TR(0x5215b2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5215b5:{NFSU2_TR(0x5215b5);
if(r1(R+518)){{goto L5215c2;}}
}
B5215b7:L5215b7:{c.instructions+=3;NFSU2_TR(0x5215b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5215b9:{NFSU2_TR(0x5215b9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5215bb:{NFSU2_TR(0x5215bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521592u);}goto L521592;}}
}
B5215bd:L5215bd:{c.instructions+=4;NFSU2_TR(0x5215bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5215be:{NFSU2_TR(0x5215be);
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
B5215c0:{NFSU2_TR(0x5215c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5215c1:{NFSU2_TR(0x5215c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5215c2:L5215c2:{c.instructions+=4;NFSU2_TR(0x5215c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5215c3:{NFSU2_TR(0x5215c3);
w1(R+0,u8(0x1ull));
}
B5215c5:{NFSU2_TR(0x5215c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5215c6:{NFSU2_TR(0x5215c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5215d0:L5215d0:{c.instructions+=8;NFSU2_TR(0x5215d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215d1:{NFSU2_TR(0x5215d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215d2:{NFSU2_TR(0x5215d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215d3:{NFSU2_TR(0x5215d3);
__builtin_memmove((R+12),(R+4),4);
}
B5215d5:{NFSU2_TR(0x5215d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215d6:{NFSU2_TR(0x5215d6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5215d9:{NFSU2_TR(0x5215d9);
w4(R+24,u32(0x40ull));
}
B5215de:{NFSU2_TR(0x5215de);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5215e4:L5215e4:{c.instructions+=3;NFSU2_TR(0x5215e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215e5:{NFSU2_TR(0x5215e5);
__builtin_memmove((R+4),(R+28),4);
}
B5215e7:{NFSU2_TR(0x5215e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5215ecull));
TAIL_STATIC(0x6102f0u,610);
}
B5215ec:L5215ec:{c.instructions+=2;NFSU2_TR(0x5215ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5215ee:{NFSU2_TR(0x5215ee);
if(r1(R+518)){{goto L521605;}}
}
B5215f0:L5215f0:{c.instructions+=4;NFSU2_TR(0x5215f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215f2:{NFSU2_TR(0x5215f2);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5215f7:{NFSU2_TR(0x5215f7);
__builtin_memmove((R+4),(R+0),4);
}
B5215f9:{NFSU2_TR(0x5215f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5215feull));
TAIL_STATIC(0x61b500u,61b);
}
B5215fe:L5215fe:{c.instructions+=2;NFSU2_TR(0x5215fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521601:{NFSU2_TR(0x521601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521605;}}
}
B521603:L521603:{c.instructions+=1;NFSU2_TR(0x521603);
__builtin_memmove((R+20),(R+24),4);
}
B521605:L521605:{c.instructions+=3;NFSU2_TR(0x521605);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B521606:{NFSU2_TR(0x521606);
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
B521609:{NFSU2_TR(0x521609);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5215e4u);}goto L5215e4;}}
}
B52160b:L52160b:{c.instructions+=2;NFSU2_TR(0x52160b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52160e:{NFSU2_TR(0x52160e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521621;}}
}
B521610:L521610:{c.instructions+=2;NFSU2_TR(0x521610);
__builtin_memmove((R+4),(R+12),4);
}
B521612:{NFSU2_TR(0x521612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521617ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521580u);}goto L521580;}
}
B521617:L521617:{c.instructions+=7;NFSU2_TR(0x521617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521618:{NFSU2_TR(0x521618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521619:{NFSU2_TR(0x521619);
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
B52161b:{NFSU2_TR(0x52161b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52161c:{NFSU2_TR(0x52161c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B52161f:{NFSU2_TR(0x52161f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521620:{NFSU2_TR(0x521620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521621:L521621:{c.instructions+=4;NFSU2_TR(0x521621);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521624:{NFSU2_TR(0x521624);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B521627:{NFSU2_TR(0x521627);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521629:{NFSU2_TR(0x521629);
if(r1(R+518)){{goto L521647;}}
}
B52162b:L52162b:{c.instructions+=1;NFSU2_TR(0x52162b);
{goto L521630;}
}
B521630:L521630:{c.instructions+=3;NFSU2_TR(0x521630);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521633:{NFSU2_TR(0x521633);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521636:{NFSU2_TR(0x521636);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L521641;}}
}
B521638:L521638:{c.instructions+=2;NFSU2_TR(0x521638);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52163b:{NFSU2_TR(0x52163b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L521641;}}
}
B52163d:L52163d:{c.instructions+=2;NFSU2_TR(0x52163d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52163f:{NFSU2_TR(0x52163f);
if(r1(R+518)){{goto L52164e;}}
}
B521641:L521641:{c.instructions+=3;NFSU2_TR(0x521641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521643:{NFSU2_TR(0x521643);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521645:{NFSU2_TR(0x521645);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521630u);}goto L521630;}}
}
B521647:L521647:{c.instructions+=6;NFSU2_TR(0x521647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521648:{NFSU2_TR(0x521648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521649:{NFSU2_TR(0x521649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52164a:{NFSU2_TR(0x52164a);
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
B52164c:{NFSU2_TR(0x52164c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52164d:{NFSU2_TR(0x52164d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52164e:L52164e:{c.instructions+=3;NFSU2_TR(0x52164e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521651:{NFSU2_TR(0x521651);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521653:{NFSU2_TR(0x521653);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521647u);}goto L521647;}}
}
B521655:L521655:{c.instructions+=4;NFSU2_TR(0x521655);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521657:{NFSU2_TR(0x521657);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52165c:{NFSU2_TR(0x52165c);
__builtin_memmove((R+4),(R+0),4);
}
B52165e:{NFSU2_TR(0x52165e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521663ull));
TAIL_STATIC(0x61b500u,61b);
}
B521663:L521663:{c.instructions+=7;NFSU2_TR(0x521663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521664:{NFSU2_TR(0x521664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521665:{NFSU2_TR(0x521665);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B521668:{NFSU2_TR(0x521668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521669:{NFSU2_TR(0x521669);
__builtin_memmove((R+0),(R+518),1);
}
B52166c:{NFSU2_TR(0x52166c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52166d:{NFSU2_TR(0x52166d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521670:L521670:{c.instructions+=6;NFSU2_TR(0x521670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521673:{NFSU2_TR(0x521673);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B521676:{NFSU2_TR(0x521676);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521678:{NFSU2_TR(0x521678);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521679:{NFSU2_TR(0x521679);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52167a:{NFSU2_TR(0x52167a);
if(r1(R+518)){{goto L5216b2;}}
}
B52167c:L52167c:{c.instructions+=3;NFSU2_TR(0x52167c);
__builtin_memmove((R+4),(R+0),4);
}
B52167e:{NFSU2_TR(0x52167e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521680:{NFSU2_TR(0x521680);
if(r1(R+518)){{goto L5216b2;}}
}
B521682:L521682:{c.instructions+=3;NFSU2_TR(0x521682);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B521686:{NFSU2_TR(0x521686);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52168a:{NFSU2_TR(0x52168a);
__builtin_memmove((R+12),(R+12),4);
}
B521690:L521690:{c.instructions+=3;NFSU2_TR(0x521690);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521693:{NFSU2_TR(0x521693);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521696:{NFSU2_TR(0x521696);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5216ac;}}
}
B521698:L521698:{c.instructions+=2;NFSU2_TR(0x521698);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52169b:{NFSU2_TR(0x52169b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5216ac;}}
}
B52169d:L52169d:{c.instructions+=2;NFSU2_TR(0x52169d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52169f:{NFSU2_TR(0x52169f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5216ac;}}
}
B5216a1:L5216a1:{c.instructions+=3;NFSU2_TR(0x5216a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5216a4:{NFSU2_TR(0x5216a4);
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
B5216a6:{NFSU2_TR(0x5216a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5216b9;}}
}
B5216a8:L5216a8:{c.instructions+=2;NFSU2_TR(0x5216a8);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5216aa:{NFSU2_TR(0x5216aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5216b9;}}
}
B5216ac:L5216ac:{c.instructions+=3;NFSU2_TR(0x5216ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5216ae:{NFSU2_TR(0x5216ae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5216b0:{NFSU2_TR(0x5216b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521690u);}goto L521690;}}
}
B5216b2:L5216b2:{c.instructions+=4;NFSU2_TR(0x5216b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5216b3:{NFSU2_TR(0x5216b3);
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
B5216b5:{NFSU2_TR(0x5216b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5216b6:{NFSU2_TR(0x5216b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5216b9:L5216b9:{c.instructions+=4;NFSU2_TR(0x5216b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5216ba:{NFSU2_TR(0x5216ba);
w1(R+0,u8(0x1ull));
}
B5216bc:{NFSU2_TR(0x5216bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5216bd:{NFSU2_TR(0x5216bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5216c0:L5216c0:{c.instructions+=16;NFSU2_TR(0x5216c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216c2:{NFSU2_TR(0x5216c2);
u8 U[4];
w4(U+0,u32(0x777284ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216c7:{NFSU2_TR(0x5216c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5216cd:{NFSU2_TR(0x5216cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216ce:{NFSU2_TR(0x5216ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5216d5:{NFSU2_TR(0x5216d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216d6:{NFSU2_TR(0x5216d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216d7:{NFSU2_TR(0x5216d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216d8:{NFSU2_TR(0x5216d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5216dc:{NFSU2_TR(0x5216dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216dd:{NFSU2_TR(0x5216dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216de:{NFSU2_TR(0x5216de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216e0:{NFSU2_TR(0x5216e0);
__builtin_memmove((R+24),(R+4),4);
}
B5216e2:{NFSU2_TR(0x5216e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5216e3:{NFSU2_TR(0x5216e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5216e7:{NFSU2_TR(0x5216e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5216ecull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521670u);}goto L521670;}
}
B5216ec:L5216ec:{c.instructions+=2;NFSU2_TR(0x5216ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5216ee:{NFSU2_TR(0x5216ee);
if(r1(R+518)){{goto L52174a;}}
}
B5216f0:L5216f0:{c.instructions+=4;NFSU2_TR(0x5216f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5216f3:{NFSU2_TR(0x5216f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5216f6:{NFSU2_TR(0x5216f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5216f8:{NFSU2_TR(0x5216f8);
if(r1(R+518)){{goto L52183b;}}
}
B5216fe:L5216fe:{c.instructions+=1;NFSU2_TR(0x5216fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521702:L521702:{c.instructions+=2;NFSU2_TR(0x521702);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B521704:{NFSU2_TR(0x521704);
if(r1(R+518)){{goto L52183b;}}
}
B52170a:L52170a:{c.instructions+=3;NFSU2_TR(0x52170a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52170d:{NFSU2_TR(0x52170d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52170f:{NFSU2_TR(0x52170f);
if(r1(R+518)){{goto L521722;}}
}
B521711:L521711:{c.instructions+=4;NFSU2_TR(0x521711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521712:{NFSU2_TR(0x521712);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521713:{NFSU2_TR(0x521713);
__builtin_memmove((R+4),(R+24),4);
}
B521715:{NFSU2_TR(0x521715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52171aull));
TAIL_STATIC(0x50ede0u,50e);
}
B52171a:L52171a:{c.instructions+=2;NFSU2_TR(0x52171a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52171c:{NFSU2_TR(0x52171c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521722;}}
}
B52171e:L52171e:{c.instructions+=2;NFSU2_TR(0x52171e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521720:{NFSU2_TR(0x521720);
{goto L521741;}
}
B521722:L521722:{c.instructions+=12;NFSU2_TR(0x521722);
__builtin_memmove((R+0),(R+8),4);
}
B521724:{NFSU2_TR(0x521724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B521726:{NFSU2_TR(0x521726);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521729:{NFSU2_TR(0x521729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52172b:{NFSU2_TR(0x52172b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52172d:{NFSU2_TR(0x52172d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521730:{NFSU2_TR(0x521730);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521733:{NFSU2_TR(0x521733);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521737:{NFSU2_TR(0x521737);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B521739:{NFSU2_TR(0x521739);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52173c:{NFSU2_TR(0x52173c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52173f:{NFSU2_TR(0x52173f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B521741:L521741:{c.instructions+=2;NFSU2_TR(0x521741);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521743:{NFSU2_TR(0x521743);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521702u);}goto L521702;}}
}
B521745:L521745:{c.instructions+=1;NFSU2_TR(0x521745);
{goto L52183b;}
}
B52174a:L52174a:{c.instructions+=2;NFSU2_TR(0x52174a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52174d:{NFSU2_TR(0x52174d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52180e;}}
}
B521753:L521753:{c.instructions+=2;NFSU2_TR(0x521753);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B521756:{NFSU2_TR(0x521756);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L52180e;}}
}
B52175c:L52175c:{c.instructions+=4;NFSU2_TR(0x52175c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521762:{NFSU2_TR(0x521762);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521763:{NFSU2_TR(0x521763);
__builtin_memmove((R+4),(R+28),4);
}
B521765:{NFSU2_TR(0x521765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52176aull));
TAIL_STATIC(0x6102f0u,610);
}
B52176a:L52176a:{c.instructions+=2;NFSU2_TR(0x52176a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52176c:{NFSU2_TR(0x52176c);
if(r1(R+518)){{goto L52180e;}}
}
B521772:L521772:{c.instructions+=2;NFSU2_TR(0x521772);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521774:{NFSU2_TR(0x521774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521779ull));
TAIL_STATIC(0x575620u,575);
}
B521779:L521779:{c.instructions+=7;NFSU2_TR(0x521779);
__builtin_memmove((R+24),(R+0),4);
}
B52177b:{NFSU2_TR(0x52177b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52177e:{NFSU2_TR(0x52177e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521782:{NFSU2_TR(0x521782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521784:{NFSU2_TR(0x521784);
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
B521786:{NFSU2_TR(0x521786);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52178a:{NFSU2_TR(0x52178a);
if(r1(R+518)){{goto L52179c;}}
}
B52178c:L52178c:{c.instructions+=3;NFSU2_TR(0x52178c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52178d:{NFSU2_TR(0x52178d);
__builtin_memmove((R+4),(R+28),4);
}
B52178f:{NFSU2_TR(0x52178f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521794ull));
TAIL_STATIC(0x6102f0u,610);
}
B521794:L521794:{c.instructions+=3;NFSU2_TR(0x521794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521797:{NFSU2_TR(0x521797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52179a:{NFSU2_TR(0x52179a);
__builtin_memmove((R+0),(R+24),4);
}
B52179c:L52179c:{c.instructions+=9;NFSU2_TR(0x52179c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5217a0:{NFSU2_TR(0x5217a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5217a3:{NFSU2_TR(0x5217a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5217a5:{NFSU2_TR(0x5217a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5217a8:{NFSU2_TR(0x5217a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5217b0:{NFSU2_TR(0x5217b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5217b3:{NFSU2_TR(0x5217b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5217b5:{NFSU2_TR(0x5217b5);
w4(R+24,u32(0x4dull));
}
B5217ba:{NFSU2_TR(0x5217ba);
__builtin_memmove((R+12),(R+12),4);
}
B5217c0:L5217c0:{c.instructions+=4;NFSU2_TR(0x5217c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5217c4:{NFSU2_TR(0x5217c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5217c5:{NFSU2_TR(0x5217c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5217c6:{NFSU2_TR(0x5217c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5217cbull));
TAIL_STATIC(0x50ede0u,50e);
}
B5217cb:L5217cb:{c.instructions+=2;NFSU2_TR(0x5217cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5217cd:{NFSU2_TR(0x5217cd);
if(r1(R+518)){{goto L521806;}}
}
B5217cf:L5217cf:{c.instructions+=3;NFSU2_TR(0x5217cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5217d0:{NFSU2_TR(0x5217d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5217d6:{NFSU2_TR(0x5217d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5217dbull));
TAIL_STATIC(0x6102f0u,610);
}
B5217db:L5217db:{c.instructions+=3;NFSU2_TR(0x5217db);
__builtin_memmove((R+28),(R+0),4);
}
B5217dd:{NFSU2_TR(0x5217dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5217df:{NFSU2_TR(0x5217df);
if(r1(R+518)){{goto L521806;}}
}
B5217e1:L5217e1:{c.instructions+=2;NFSU2_TR(0x5217e1);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5217e3:{NFSU2_TR(0x5217e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5217e8ull));
TAIL_STATIC(0x575620u,575);
}
B5217e8:L5217e8:{c.instructions+=3;NFSU2_TR(0x5217e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5217eb:{NFSU2_TR(0x5217eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5217ed:{NFSU2_TR(0x5217ed);
if(r1(R+518)){{goto L5217f7;}}
}
B5217ef:L5217ef:{c.instructions+=3;NFSU2_TR(0x5217ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5217f2:{NFSU2_TR(0x5217f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5217f5:{NFSU2_TR(0x5217f5);
{goto L5217f9;}
}
B5217f7:L5217f7:{c.instructions+=1;NFSU2_TR(0x5217f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5217f9:L5217f9:{c.instructions+=5;NFSU2_TR(0x5217f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5217fc:{NFSU2_TR(0x5217fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5217fe:{NFSU2_TR(0x5217fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521801:{NFSU2_TR(0x521801);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521804:{NFSU2_TR(0x521804);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B521806:L521806:{c.instructions+=3;NFSU2_TR(0x521806);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B521807:{NFSU2_TR(0x521807);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52180a:{NFSU2_TR(0x52180a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5217c0u);}goto L5217c0;}}
}
B52180c:L52180c:{c.instructions+=1;NFSU2_TR(0x52180c);
{goto L52183b;}
}
B52180e:L52180e:{c.instructions+=2;NFSU2_TR(0x52180e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521810:{NFSU2_TR(0x521810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521815ull));
TAIL_STATIC(0x575620u,575);
}
B521815:L521815:{c.instructions+=3;NFSU2_TR(0x521815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521818:{NFSU2_TR(0x521818);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52181a:{NFSU2_TR(0x52181a);
if(r1(R+518)){{goto L521828;}}
}
B52181c:L52181c:{c.instructions+=3;NFSU2_TR(0x52181c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B521823:{NFSU2_TR(0x521823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521826:{NFSU2_TR(0x521826);
{goto L52182a;}
}
B521828:L521828:{c.instructions+=1;NFSU2_TR(0x521828);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52182a:L52182a:{c.instructions+=6;NFSU2_TR(0x52182a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52182e:{NFSU2_TR(0x52182e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521831:{NFSU2_TR(0x521831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B521833:{NFSU2_TR(0x521833);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521836:{NFSU2_TR(0x521836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521839:{NFSU2_TR(0x521839);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52183b:L52183b:{c.instructions+=8;NFSU2_TR(0x52183b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52183f:{NFSU2_TR(0x52183f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521840:{NFSU2_TR(0x521840);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521841:{NFSU2_TR(0x521841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521842:{NFSU2_TR(0x521842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521843:{NFSU2_TR(0x521843);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52184a:{NFSU2_TR(0x52184a);
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
B52184d:{NFSU2_TR(0x52184d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521850:L521850:{c.instructions+=8;NFSU2_TR(0x521850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521851:{NFSU2_TR(0x521851);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B521855:{NFSU2_TR(0x521855);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521858:{NFSU2_TR(0x521858);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521859:{NFSU2_TR(0x521859);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52185a:{NFSU2_TR(0x52185a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52185b:{NFSU2_TR(0x52185b);
__builtin_memmove((R+20),(R+4),4);
}
B52185d:{NFSU2_TR(0x52185d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L521897;}}
}
B52185f:L52185f:{c.instructions+=2;NFSU2_TR(0x52185f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521862:{NFSU2_TR(0x521862);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L521897;}}
}
B521864:L521864:{c.instructions+=4;NFSU2_TR(0x521864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521867:{NFSU2_TR(0x521867);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52186a:{NFSU2_TR(0x52186a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52186c:{NFSU2_TR(0x52186c);
if(r1(R+518)){{goto L521897;}}
}
B52186e:L52186e:{c.instructions+=3;NFSU2_TR(0x52186e);
__builtin_memmove((R+24),(R+0),4);
}
B521870:{NFSU2_TR(0x521870);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521872:{NFSU2_TR(0x521872);
if(r1(R+518)){{goto L521897;}}
}
B521874:L521874:{c.instructions+=2;NFSU2_TR(0x521874);
__builtin_memmove((R+4),(R+20),4);
}
B521876:{NFSU2_TR(0x521876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52187bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521580u);}goto L521580;}
}
B52187b:L52187b:{c.instructions+=2;NFSU2_TR(0x52187b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52187d:{NFSU2_TR(0x52187d);
if(r1(R+518)){{goto L52188c;}}
}
B52187f:L52187f:{c.instructions+=3;NFSU2_TR(0x52187f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521882:{NFSU2_TR(0x521882);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521885:{NFSU2_TR(0x521885);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52188c;}}
}
B521887:L521887:{c.instructions+=2;NFSU2_TR(0x521887);
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
B52188a:{NFSU2_TR(0x52188a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5218a0;}}
}
B52188c:L52188c:{c.instructions+=2;NFSU2_TR(0x52188c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B52188f:{NFSU2_TR(0x52188f);
if(r1(R+518)){{goto L5218a0;}}
}
B521891:L521891:{c.instructions+=3;NFSU2_TR(0x521891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B521893:{NFSU2_TR(0x521893);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521895:{NFSU2_TR(0x521895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521874u);}goto L521874;}}
}
B521897:L521897:{c.instructions+=6;NFSU2_TR(0x521897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521898:{NFSU2_TR(0x521898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521899:{NFSU2_TR(0x521899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52189a:{NFSU2_TR(0x52189a);
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
B52189c:{NFSU2_TR(0x52189c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52189d:{NFSU2_TR(0x52189d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5218a0:L5218a0:{c.instructions+=6;NFSU2_TR(0x5218a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5218a3:{NFSU2_TR(0x5218a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5218a4:{NFSU2_TR(0x5218a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5218a5:{NFSU2_TR(0x5218a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5218a6:{NFSU2_TR(0x5218a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5218a7:{NFSU2_TR(0x5218a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5218b0:L5218b0:{c.instructions+=7;NFSU2_TR(0x5218b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5218b1:{NFSU2_TR(0x5218b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5218b2:{NFSU2_TR(0x5218b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5218b3:{NFSU2_TR(0x5218b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5218b7:{NFSU2_TR(0x5218b7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5218ba:{NFSU2_TR(0x5218ba);
__builtin_memmove((R+24),(R+4),4);
}
B5218bc:{NFSU2_TR(0x5218bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L521931;}}
}
B5218be:L5218be:{c.instructions+=2;NFSU2_TR(0x5218be);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5218c1:{NFSU2_TR(0x5218c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L521931;}}
}
B5218c3:L5218c3:{c.instructions+=4;NFSU2_TR(0x5218c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5218c9:{NFSU2_TR(0x5218c9);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5218cb:{NFSU2_TR(0x5218cb);
__builtin_memmove((R+4),(R+12),4);
}
B5218cd:{NFSU2_TR(0x5218cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5218d2ull));
TAIL_STATIC(0x6102f0u,610);
}
B5218d2:L5218d2:{c.instructions+=2;NFSU2_TR(0x5218d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5218d4:{NFSU2_TR(0x5218d4);
if(r1(R+518)){{goto L5218ea;}}
}
B5218d6:L5218d6:{c.instructions+=4;NFSU2_TR(0x5218d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5218d9:{NFSU2_TR(0x5218d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B5218dc:{NFSU2_TR(0x5218dc);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5218de:{NFSU2_TR(0x5218de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5218ea;}}
}
B5218e0:L5218e0:{c.instructions+=3;NFSU2_TR(0x5218e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5218e1:{NFSU2_TR(0x5218e1);
__builtin_memmove((R+4),(R+24),4);
}
B5218e3:{NFSU2_TR(0x5218e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5218e8ull));
TAIL_STATIC(0x50f060u,50f);
}
B5218e8:L5218e8:{c.instructions+=1;NFSU2_TR(0x5218e8);
__builtin_memmove((R+28),(R+0),4);
}
B5218ea:L5218ea:{c.instructions+=4;NFSU2_TR(0x5218ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5218ed:{NFSU2_TR(0x5218ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5218f0:{NFSU2_TR(0x5218f0);
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
B5218f2:{NFSU2_TR(0x5218f2);
if(r1(R+518)){{goto L521906;}}
}
B5218f4:L5218f4:{c.instructions+=2;NFSU2_TR(0x5218f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5218f7:{NFSU2_TR(0x5218f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521900;}}
}
B5218f9:L5218f9:{c.instructions+=3;NFSU2_TR(0x5218f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5218fc:{NFSU2_TR(0x5218fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5218fe:{NFSU2_TR(0x5218fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521914;}}
}
B521900:L521900:{c.instructions+=3;NFSU2_TR(0x521900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521902:{NFSU2_TR(0x521902);
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
B521904:{NFSU2_TR(0x521904);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5218f4u);}goto L5218f4;}}
}
B521906:L521906:{c.instructions+=3;NFSU2_TR(0x521906);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521907:{NFSU2_TR(0x521907);
__builtin_memmove((R+4),(R+12),4);
}
B521909:{NFSU2_TR(0x521909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52190eull));
TAIL_STATIC(0x6102f0u,610);
}
B52190e:L52190e:{c.instructions+=3;NFSU2_TR(0x52190e);
__builtin_memmove((R+24),(R+0),4);
}
B521910:{NFSU2_TR(0x521910);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521912:{NFSU2_TR(0x521912);
if(r1(R+518)){{goto L521931;}}
}
B521914:L521914:{c.instructions+=3;NFSU2_TR(0x521914);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521916:{NFSU2_TR(0x521916);
u8 U[4];
w4(U+0,u32(0x79b5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52191b:{NFSU2_TR(0x52191b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521920ull));
TAIL_STATIC(0x43db50u,43d);
}
B521920:L521920:{c.instructions+=4;NFSU2_TR(0x521920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521923:{NFSU2_TR(0x521923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521924:{NFSU2_TR(0x521924);
__builtin_memmove((R+4),(R+24),4);
}
B521926:{NFSU2_TR(0x521926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52192bull));
TAIL_STATIC(0x61b500u,61b);
}
B52192b:L52192b:{c.instructions+=4;NFSU2_TR(0x52192b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52192c:{NFSU2_TR(0x52192c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52192d:{NFSU2_TR(0x52192d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52192e:{NFSU2_TR(0x52192e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521931:L521931:{c.instructions+=5;NFSU2_TR(0x521931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521932:{NFSU2_TR(0x521932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521933:{NFSU2_TR(0x521933);
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
B521935:{NFSU2_TR(0x521935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521936:{NFSU2_TR(0x521936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521940:L521940:{c.instructions+=9;NFSU2_TR(0x521940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521941:{NFSU2_TR(0x521941);
__builtin_memmove((R+20),(R+16),4);
}
B521943:{NFSU2_TR(0x521943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521944:{NFSU2_TR(0x521944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521945:{NFSU2_TR(0x521945);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521948:{NFSU2_TR(0x521948);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52194b:{NFSU2_TR(0x52194b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52194c:{NFSU2_TR(0x52194c);
__builtin_memmove((R+28),(R+4),4);
}
B52194e:{NFSU2_TR(0x52194e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5219d4;}}
}
B521954:L521954:{c.instructions+=2;NFSU2_TR(0x521954);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B521957:{NFSU2_TR(0x521957);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5219d4;}}
}
B521959:L521959:{c.instructions+=3;NFSU2_TR(0x521959);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52195b:{NFSU2_TR(0x52195b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521961:{NFSU2_TR(0x521961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521966ull));
TAIL_STATIC(0x6102f0u,610);
}
B521966:L521966:{c.instructions+=2;NFSU2_TR(0x521966);
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
B521968:{NFSU2_TR(0x521968);
if(r1(R+518)){{goto L52197e;}}
}
B52196a:L52196a:{c.instructions+=4;NFSU2_TR(0x52196a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52196d:{NFSU2_TR(0x52196d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B521970:{NFSU2_TR(0x521970);
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
B521972:{NFSU2_TR(0x521972);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52197e;}}
}
B521974:L521974:{c.instructions+=3;NFSU2_TR(0x521974);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521975:{NFSU2_TR(0x521975);
__builtin_memmove((R+4),(R+28),4);
}
B521977:{NFSU2_TR(0x521977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52197cull));
TAIL_STATIC(0x50f060u,50f);
}
B52197c:L52197c:{c.instructions+=1;NFSU2_TR(0x52197c);
__builtin_memmove((R+24),(R+0),4);
}
B52197e:L52197e:{c.instructions+=2;NFSU2_TR(0x52197e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52197f:{NFSU2_TR(0x52197f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521984ull));
TAIL_STATIC(0x60fee0u,60f);
}
B521984:L521984:{c.instructions+=5;NFSU2_TR(0x521984);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B52198a:{NFSU2_TR(0x52198a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52198c:{NFSU2_TR(0x52198c);
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
B52198f:{NFSU2_TR(0x52198f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521992:{NFSU2_TR(0x521992);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521995ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521995:L521995:{c.instructions+=7;NFSU2_TR(0x521995);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521997:{NFSU2_TR(0x521997);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521999:{NFSU2_TR(0x521999);
__builtin_memmove((R+28),(R+0),4);
}
B52199b:{NFSU2_TR(0x52199b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52199c:{NFSU2_TR(0x52199c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52199d:{NFSU2_TR(0x52199d);
w4(R+4,u32(0x8a2b68ull));
}
B5219a2:{NFSU2_TR(0x5219a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5219a7ull));
TAIL_STATIC(0x61ba30u,61b);
}
B5219a7:L5219a7:{c.instructions+=3;NFSU2_TR(0x5219a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5219a9:{NFSU2_TR(0x5219a9);
w4(R+12,u32(0x1ull));
}
B5219ae:{NFSU2_TR(0x5219ae);
if(r1(R+518)){{goto L5219d4;}}
}
B5219b0:L5219b0:{c.instructions+=3;NFSU2_TR(0x5219b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5219b4:{NFSU2_TR(0x5219b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5219b7:{NFSU2_TR(0x5219b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5219bf;}}
}
B5219b9:L5219b9:{c.instructions+=2;NFSU2_TR(0x5219b9);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B5219bc:{NFSU2_TR(0x5219bc);
if(r1(R+518)){{goto L5219d6;}}
}
B5219be:L5219be:{c.instructions+=1;NFSU2_TR(0x5219be);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5219bf:L5219bf:{c.instructions+=7;NFSU2_TR(0x5219bf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219c1:{NFSU2_TR(0x5219c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219c3:{NFSU2_TR(0x5219c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219c4:{NFSU2_TR(0x5219c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219c5:{NFSU2_TR(0x5219c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219c6:{NFSU2_TR(0x5219c6);
w4(R+4,u32(0x8a2b68ull));
}
B5219cb:{NFSU2_TR(0x5219cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5219d0ull));
TAIL_STATIC(0x61ba50u,61b);
}
B5219d0:L5219d0:{c.instructions+=2;NFSU2_TR(0x5219d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5219d2:{NFSU2_TR(0x5219d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5219b0u);}goto L5219b0;}}
}
B5219d4:L5219d4:{c.instructions+=1;NFSU2_TR(0x5219d4);
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
B5219d6:L5219d6:{c.instructions+=5;NFSU2_TR(0x5219d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5219d7:{NFSU2_TR(0x5219d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5219d8:{NFSU2_TR(0x5219d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5219d9:{NFSU2_TR(0x5219d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5219da:{NFSU2_TR(0x5219da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5219e0:L5219e0:{c.instructions+=4;NFSU2_TR(0x5219e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5219e1:{NFSU2_TR(0x5219e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5219e5:{NFSU2_TR(0x5219e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5219e8:{NFSU2_TR(0x5219e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L521a14;}}
}
B5219ea:L5219ea:{c.instructions+=2;NFSU2_TR(0x5219ea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x98ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5219f0:{NFSU2_TR(0x5219f0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L521a14;}}
}
B5219f2:L5219f2:{c.instructions+=4;NFSU2_TR(0x5219f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5219f5:{NFSU2_TR(0x5219f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B5219f8:{NFSU2_TR(0x5219f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5219fa:{NFSU2_TR(0x5219fa);
if(r1(R+518)){{goto L521a14;}}
}
B5219fc:L5219fc:{c.instructions+=1;NFSU2_TR(0x5219fc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521a00:L521a00:{c.instructions+=2;NFSU2_TR(0x521a00);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B521a03:{NFSU2_TR(0x521a03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521a0e;}}
}
B521a05:L521a05:{c.instructions+=2;NFSU2_TR(0x521a05);
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
B521a07:{NFSU2_TR(0x521a07);
if(r1(R+518)){{goto L521a1a;}}
}
B521a09:L521a09:{c.instructions+=2;NFSU2_TR(0x521a09);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B521a0c:{NFSU2_TR(0x521a0c);
if(r1(R+518)){{goto L521a1a;}}
}
B521a0e:L521a0e:{c.instructions+=3;NFSU2_TR(0x521a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521a10:{NFSU2_TR(0x521a10);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521a12:{NFSU2_TR(0x521a12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521a00u);}goto L521a00;}}
}
B521a14:L521a14:{c.instructions+=3;NFSU2_TR(0x521a14);
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
B521a16:{NFSU2_TR(0x521a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521a17:{NFSU2_TR(0x521a17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521a1a:L521a1a:{c.instructions+=3;NFSU2_TR(0x521a1a);
w1(R+0,u8(0x1ull));
}
B521a1c:{NFSU2_TR(0x521a1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521a1d:{NFSU2_TR(0x521a1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521a20:L521a20:{c.instructions+=10;NFSU2_TR(0x521a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B521a23:{NFSU2_TR(0x521a23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a24:{NFSU2_TR(0x521a24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a25:{NFSU2_TR(0x521a25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a26:{NFSU2_TR(0x521a26);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521a2a:{NFSU2_TR(0x521a2a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B521a2c:{NFSU2_TR(0x521a2c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521a2e:{NFSU2_TR(0x521a2e);
__builtin_memmove((R+24),(R+4),4);
}
B521a30:{NFSU2_TR(0x521a30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521a34:{NFSU2_TR(0x521a34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521a42;}}
}
B521a36:L521a36:{c.instructions+=3;NFSU2_TR(0x521a36);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+0),(U+0),4);
}
B521a3c:{NFSU2_TR(0x521a3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521a40:{NFSU2_TR(0x521a40);
__builtin_memmove((R+28),(R+0),4);
}
B521a42:L521a42:{c.instructions+=3;NFSU2_TR(0x521a42);
u8 U[8];
__builtin_memmove((U+0),gp(0x8383fc),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+20)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521a48:{NFSU2_TR(0x521a48);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521a4c:{NFSU2_TR(0x521a4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L521ab5;}}
}
B521a4e:L521a4e:{c.instructions+=2;NFSU2_TR(0x521a4e);
__builtin_memmove((R+0),gp(0x8383f8),4);
}
B521a53:{NFSU2_TR(0x521a53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a54:L521a54:{c.instructions+=3;NFSU2_TR(0x521a54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521a58:{NFSU2_TR(0x521a58);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B521a5b:{NFSU2_TR(0x521a5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521a97;}}
}
B521a5d:L521a5d:{c.instructions+=5;NFSU2_TR(0x521a5d);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B521a61:{NFSU2_TR(0x521a61);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B521a65:{NFSU2_TR(0x521a65);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B521a67:{NFSU2_TR(0x521a67);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521a69:{NFSU2_TR(0x521a69);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L521a97;}}
}
B521a6b:L521a6b:{c.instructions+=2;NFSU2_TR(0x521a6b);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B521a6f:{NFSU2_TR(0x521a6f);
}
B521a70:L521a70:{c.instructions+=6;NFSU2_TR(0x521a70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521a74:{NFSU2_TR(0x521a74);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a76:{NFSU2_TR(0x521a76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a78:{NFSU2_TR(0x521a78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521a79:{NFSU2_TR(0x521a79);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
}
B521a7f:{NFSU2_TR(0x521a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521a84ull));
TAIL_STATIC(0x5a6320u,5a6);
}
B521a84:L521a84:{c.instructions+=5;NFSU2_TR(0x521a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521a86:{NFSU2_TR(0x521a86);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B521a87:{NFSU2_TR(0x521a87);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B521a8a:{NFSU2_TR(0x521a8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B521a8c:{NFSU2_TR(0x521a8c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521a70u);}goto L521a70;}}
}
B521a8e:L521a8e:{c.instructions+=2;NFSU2_TR(0x521a8e);
__builtin_memmove((R+0),gp(0x8383f8),4);
}
B521a93:{NFSU2_TR(0x521a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521a97:L521a97:{c.instructions+=7;NFSU2_TR(0x521a97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521a9b:{NFSU2_TR(0x521a9b);
__builtin_memmove((R+8),gp(0x8383fc),4);
}
B521aa1:{NFSU2_TR(0x521aa1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521aa2:{NFSU2_TR(0x521aa2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x17cull))));
}
B521aa8:{NFSU2_TR(0x521aa8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521aaa:{NFSU2_TR(0x521aaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521aae:{NFSU2_TR(0x521aae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521a54u);}goto L521a54;}}
}
B521ab0:L521ab0:{c.instructions+=2;NFSU2_TR(0x521ab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521ab4:{NFSU2_TR(0x521ab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521ab5:L521ab5:{c.instructions+=6;NFSU2_TR(0x521ab5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ab7:{NFSU2_TR(0x521ab7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ab9:{NFSU2_TR(0x521ab9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521abb:{NFSU2_TR(0x521abb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521abd:{NFSU2_TR(0x521abd);
__builtin_memmove((R+4),(R+28),4);
}
B521abf:{NFSU2_TR(0x521abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521ac4ull));
TAIL_STATIC(0x639ce0u,639);
}
B521ac4:L521ac4:{c.instructions+=4;NFSU2_TR(0x521ac4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ac6:{NFSU2_TR(0x521ac6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ac8:{NFSU2_TR(0x521ac8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ac9:{NFSU2_TR(0x521ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521aceull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B521ace:L521ace:{c.instructions+=4;NFSU2_TR(0x521ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+8),(U+0),4);
}
B521ad4:{NFSU2_TR(0x521ad4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B521ad7:{NFSU2_TR(0x521ad7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521ad9:{NFSU2_TR(0x521ad9);
if(r1(R+518)){{goto L521ae3;}}
}
B521adb:L521adb:{c.instructions+=3;NFSU2_TR(0x521adb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B521adf:{NFSU2_TR(0x521adf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B521ae1:{NFSU2_TR(0x521ae1);
if(r1(R+518)){{goto L521aef;}}
}
B521ae3:L521ae3:{c.instructions+=4;NFSU2_TR(0x521ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521ae6:{NFSU2_TR(0x521ae6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ae7:{NFSU2_TR(0x521ae7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B521aea:{NFSU2_TR(0x521aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521aefull));
TAIL_STATIC(0x503950u,503);
}
B521aef:L521aef:{c.instructions+=5;NFSU2_TR(0x521aef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521af0:{NFSU2_TR(0x521af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521af1:{NFSU2_TR(0x521af1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521af2:{NFSU2_TR(0x521af2);
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
B521af5:{NFSU2_TR(0x521af5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521b00:L521b00:{c.instructions+=7;NFSU2_TR(0x521b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b01:{NFSU2_TR(0x521b01);
__builtin_memmove((R+20),(R+16),4);
}
B521b03:{NFSU2_TR(0x521b03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b04:{NFSU2_TR(0x521b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521b07:{NFSU2_TR(0x521b07);
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
B521b09:{NFSU2_TR(0x521b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521b0c:{NFSU2_TR(0x521b0c);
if(r1(R+518)){{goto L521b84;}}
}
B521b0e:L521b0e:{c.instructions+=8;NFSU2_TR(0x521b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521b11:{NFSU2_TR(0x521b11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b12:{NFSU2_TR(0x521b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B521b14:{NFSU2_TR(0x521b14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b15:{NFSU2_TR(0x521b15);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B521b1c:{NFSU2_TR(0x521b1c);
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
B521b1e:{NFSU2_TR(0x521b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521b21:{NFSU2_TR(0x521b21);
if(r1(R+518)){{goto L521b71;}}
}
B521b23:L521b23:{c.instructions+=3;NFSU2_TR(0x521b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521b26:{NFSU2_TR(0x521b26);
s4(0x861e74,u32(u32(m4(0x861e74))-u32(r4(R+0))));
w1(R+519,u8(s32(m4(0x861e74))<s32(u32(0x0ull))));
}
B521b2c:{NFSU2_TR(0x521b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L521b38;}}
}
B521b2e:L521b2e:{c.instructions+=1;NFSU2_TR(0x521b2e);
s4(0x861e74,u32(0x0ull));
}
B521b38:L521b38:{c.instructions+=5;NFSU2_TR(0x521b38);
__builtin_memmove((R+4),gp(0x863480),4);
}
B521b3e:{NFSU2_TR(0x521b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b3f:{NFSU2_TR(0x521b3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b40:{NFSU2_TR(0x521b40);
w4(R+4,u32(0x83ad90ull));
}
B521b45:{NFSU2_TR(0x521b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521b4aull));
TAIL_STATIC(0x503680u,503);
}
B521b4a:L521b4a:{c.instructions+=6;NFSU2_TR(0x521b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521b4d:{NFSU2_TR(0x521b4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521b53:{NFSU2_TR(0x521b53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b54:{NFSU2_TR(0x521b54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b55:{NFSU2_TR(0x521b55);
__builtin_memmove((R+4),(R+24),4);
}
B521b57:{NFSU2_TR(0x521b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521b5cull));
TAIL_STATIC(0x503e10u,503);
}
B521b5c:L521b5c:{c.instructions+=6;NFSU2_TR(0x521b5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521b62:{NFSU2_TR(0x521b62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521b65:{NFSU2_TR(0x521b65);
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
B521b67:{NFSU2_TR(0x521b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521b6d:{NFSU2_TR(0x521b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521b70:{NFSU2_TR(0x521b70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521b71:L521b71:{c.instructions+=4;NFSU2_TR(0x521b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521b72:{NFSU2_TR(0x521b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B521b79:{NFSU2_TR(0x521b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1230ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B521b83:{NFSU2_TR(0x521b83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521b84:L521b84:{c.instructions+=3;NFSU2_TR(0x521b84);
__builtin_memmove((R+16),(R+20),4);
}
B521b86:{NFSU2_TR(0x521b86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521b87:{NFSU2_TR(0x521b87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521b90:L521b90:{c.instructions+=6;NFSU2_TR(0x521b90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b91:{NFSU2_TR(0x521b91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b92:{NFSU2_TR(0x521b92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521b96:{NFSU2_TR(0x521b96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521b98:{NFSU2_TR(0x521b98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521b99:{NFSU2_TR(0x521b99);
if(r1(R+518)){{goto L521bd7;}}
}
B521b9b:L521b9b:{c.instructions+=4;NFSU2_TR(0x521b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521b9e:{NFSU2_TR(0x521b9e);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B521ba0:{NFSU2_TR(0x521ba0);
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
B521ba2:{NFSU2_TR(0x521ba2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L521bcf;}}
}
B521ba4:L521ba4:{c.instructions+=3;NFSU2_TR(0x521ba4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521ba6:{NFSU2_TR(0x521ba6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521bac:{NFSU2_TR(0x521bac);
__builtin_memmove((R+16),(R+16),4);
}
B521bb0:L521bb0:{c.instructions+=5;NFSU2_TR(0x521bb0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x5cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B521bb3:{NFSU2_TR(0x521bb3);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B521bb7:{NFSU2_TR(0x521bb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521bb8:{NFSU2_TR(0x521bb8);
__builtin_memmove((R+4),(R+28),4);
}
B521bba:{NFSU2_TR(0x521bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521bbfull));
TAIL_STATIC(0x599610u,599);
}
B521bbf:L521bbf:{c.instructions+=2;NFSU2_TR(0x521bbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B521bc1:{NFSU2_TR(0x521bc1);
if(r1(R+518)){{goto L521bd7;}}
}
B521bc3:L521bc3:{c.instructions+=5;NFSU2_TR(0x521bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521bc6:{NFSU2_TR(0x521bc6);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B521bc8:{NFSU2_TR(0x521bc8);
w4(R+0,u32(r1(R+12)));
}
B521bcb:{NFSU2_TR(0x521bcb);
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
B521bcd:{NFSU2_TR(0x521bcd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521bb0u);}goto L521bb0;}}
}
B521bcf:L521bcf:{c.instructions+=5;NFSU2_TR(0x521bcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521bd0:{NFSU2_TR(0x521bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521bd1:{NFSU2_TR(0x521bd1);
w1(R+0,u8(0x1ull));
}
B521bd3:{NFSU2_TR(0x521bd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521bd4:{NFSU2_TR(0x521bd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521bd7:L521bd7:{c.instructions+=5;NFSU2_TR(0x521bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521bd8:{NFSU2_TR(0x521bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521bd9:{NFSU2_TR(0x521bd9);
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
B521bdb:{NFSU2_TR(0x521bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521bdc:{NFSU2_TR(0x521bdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521be0:L521be0:{c.instructions+=6;NFSU2_TR(0x521be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521be1:{NFSU2_TR(0x521be1);
__builtin_memmove((R+20),(R+16),4);
}
B521be3:{NFSU2_TR(0x521be3);
__builtin_memmove((R+0),gp(0x863480),4);
}
B521be8:{NFSU2_TR(0x521be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521be9:{NFSU2_TR(0x521be9);
w4(R+4,u32(0x83ad90ull));
}
B521bee:{NFSU2_TR(0x521bee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521bf3ull));
TAIL_STATIC(0x503680u,503);
}
B521bf3:L521bf3:{c.instructions+=2;NFSU2_TR(0x521bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521bf5:{NFSU2_TR(0x521bf5);
if(r1(R+518)){{goto L521c03;}}
}
B521bf7:L521bf7:{c.instructions+=3;NFSU2_TR(0x521bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521bf8:{NFSU2_TR(0x521bf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521bfe:{NFSU2_TR(0x521bfe);
TAIL_STATIC(0x503db0u,503);
}
B521c03:L521c03:{c.instructions+=3;NFSU2_TR(0x521c03);
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
B521c05:{NFSU2_TR(0x521c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521c06:{NFSU2_TR(0x521c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521c10:L521c10:{c.instructions+=10;NFSU2_TR(0x521c10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c11:{NFSU2_TR(0x521c11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c12:{NFSU2_TR(0x521c12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c13:{NFSU2_TR(0x521c13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c14:{NFSU2_TR(0x521c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521c18:{NFSU2_TR(0x521c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521c1a:{NFSU2_TR(0x521c1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c1b:{NFSU2_TR(0x521c1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c1c:{NFSU2_TR(0x521c1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521c20:{NFSU2_TR(0x521c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521c25ull));
TAIL_STATIC(0x5000a0u,500);
}
B521c25:L521c25:{c.instructions+=6;NFSU2_TR(0x521c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521c28:{NFSU2_TR(0x521c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521c2b:{NFSU2_TR(0x521c2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521c2e:{NFSU2_TR(0x521c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521c32:{NFSU2_TR(0x521c32);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B521c34:{NFSU2_TR(0x521c34);
__builtin_memmove((R+20),(R+12),4);
}
B521c36:L521c36:{c.instructions+=6;NFSU2_TR(0x521c36);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B521c38:{NFSU2_TR(0x521c38);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B521c3a:{NFSU2_TR(0x521c3a);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B521c40:{NFSU2_TR(0x521c40);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B521c42:{NFSU2_TR(0x521c42);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B521c45:{NFSU2_TR(0x521c45);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L521c4c;}}
}
B521c47:L521c47:{c.instructions+=1;NFSU2_TR(0x521c47);
w4(R+4,u32(0x1ull));
}
B521c4c:L521c4c:{c.instructions+=5;NFSU2_TR(0x521c4c);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B521c4f:{NFSU2_TR(0x521c4f);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B521c55:{NFSU2_TR(0x521c55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B521c57:{NFSU2_TR(0x521c57);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B521c5a:{NFSU2_TR(0x521c5a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L521c5d;}}
}
B521c5c:L521c5c:{c.instructions+=1;NFSU2_TR(0x521c5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521c5d:L521c5d:{c.instructions+=5;NFSU2_TR(0x521c5d);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B521c60:{NFSU2_TR(0x521c60);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B521c66:{NFSU2_TR(0x521c66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B521c68:{NFSU2_TR(0x521c68);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B521c6b:{NFSU2_TR(0x521c6b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L521c6e;}}
}
B521c6d:L521c6d:{c.instructions+=1;NFSU2_TR(0x521c6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521c6e:L521c6e:{c.instructions+=5;NFSU2_TR(0x521c6e);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B521c71:{NFSU2_TR(0x521c71);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B521c77:{NFSU2_TR(0x521c77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B521c79:{NFSU2_TR(0x521c79);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B521c7c:{NFSU2_TR(0x521c7c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L521c7f;}}
}
B521c7e:L521c7e:{c.instructions+=1;NFSU2_TR(0x521c7e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521c7f:L521c7f:{c.instructions+=5;NFSU2_TR(0x521c7f);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B521c82:{NFSU2_TR(0x521c82);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B521c88:{NFSU2_TR(0x521c88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B521c8a:{NFSU2_TR(0x521c8a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B521c8d:{NFSU2_TR(0x521c8d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L521c90;}}
}
B521c8f:L521c8f:{c.instructions+=1;NFSU2_TR(0x521c8f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521c90:L521c90:{c.instructions+=2;NFSU2_TR(0x521c90);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B521c92:{NFSU2_TR(0x521c92);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L521cd6;}}
}
B521c94:L521c94:{c.instructions+=5;NFSU2_TR(0x521c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521c97:{NFSU2_TR(0x521c97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521c9b:{NFSU2_TR(0x521c9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521c9c:{NFSU2_TR(0x521c9c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc30ull))));
}
B521ca2:{NFSU2_TR(0x521ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521ca7ull));
TAIL_STATIC(0x599610u,599);
}
B521ca7:L521ca7:{c.instructions+=2;NFSU2_TR(0x521ca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B521ca9:{NFSU2_TR(0x521ca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521cb1;}}
}
B521cab:L521cab:{c.instructions+=3;NFSU2_TR(0x521cab);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B521cac:{NFSU2_TR(0x521cac);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B521caf:{NFSU2_TR(0x521caf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521c36u);}goto L521c36;}
}
B521cb1:L521cb1:{c.instructions+=3;NFSU2_TR(0x521cb1);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B521cb5:{NFSU2_TR(0x521cb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521cb6:{NFSU2_TR(0x521cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521cbbull));
TAIL_STATIC(0x5000a0u,500);
}
B521cbb:L521cbb:{c.instructions+=13;NFSU2_TR(0x521cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521cbe:{NFSU2_TR(0x521cbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521cc2:{NFSU2_TR(0x521cc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521cc5:{NFSU2_TR(0x521cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521cc6:{NFSU2_TR(0x521cc6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B521cc8:{NFSU2_TR(0x521cc8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B521cca:{NFSU2_TR(0x521cca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521ccb:{NFSU2_TR(0x521ccb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B521cce:{NFSU2_TR(0x521cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521ccf:{NFSU2_TR(0x521ccf);
__builtin_memmove((R+0),(R+4),1);
}
B521cd1:{NFSU2_TR(0x521cd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521cd2:{NFSU2_TR(0x521cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521cd3:{NFSU2_TR(0x521cd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521cd6:L521cd6:{c.instructions+=7;NFSU2_TR(0x521cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521cd7:{NFSU2_TR(0x521cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521cd8:{NFSU2_TR(0x521cd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521cd9:{NFSU2_TR(0x521cd9);
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
B521cdb:{NFSU2_TR(0x521cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521cdc:{NFSU2_TR(0x521cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B521cdd:{NFSU2_TR(0x521cdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521ce0:L521ce0:{c.instructions+=9;NFSU2_TR(0x521ce0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ce1:{NFSU2_TR(0x521ce1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ce2:{NFSU2_TR(0x521ce2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ce3:{NFSU2_TR(0x521ce3);
__builtin_memmove((R+12),(R+4),4);
}
B521ce5:{NFSU2_TR(0x521ce5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ce6:{NFSU2_TR(0x521ce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521ce9:{NFSU2_TR(0x521ce9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B521ceb:{NFSU2_TR(0x521ceb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521ced:{NFSU2_TR(0x521ced);
if(r1(R+518)){{goto L521d2f;}}
}
B521cef:L521cef:{c.instructions+=3;NFSU2_TR(0x521cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521cf2:{NFSU2_TR(0x521cf2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521cf4:{NFSU2_TR(0x521cf4);
if(r1(R+518)){{goto L521d2f;}}
}
B521cf6:L521cf6:{c.instructions+=2;NFSU2_TR(0x521cf6);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521cfb:{NFSU2_TR(0x521cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521d00ull));
TAIL_STATIC(0x505450u,505);
}
B521d00:L521d00:{c.instructions+=4;NFSU2_TR(0x521d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521d03:{NFSU2_TR(0x521d03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521d06:{NFSU2_TR(0x521d06);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521d08:{NFSU2_TR(0x521d08);
if(r1(R+518)){{goto L521d13;}}
}
B521d0a:L521d0a:{c.instructions+=3;NFSU2_TR(0x521d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521d0d:{NFSU2_TR(0x521d0d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521d0f:{NFSU2_TR(0x521d0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521cf6u);}goto L521cf6;}}
}
B521d11:L521d11:{c.instructions+=1;NFSU2_TR(0x521d11);
{goto L521d2f;}
}
B521d13:L521d13:{c.instructions+=2;NFSU2_TR(0x521d13);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521d15:{NFSU2_TR(0x521d15);
if(r1(R+518)){{goto L521d2f;}}
}
B521d17:L521d17:{c.instructions+=2;NFSU2_TR(0x521d17);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B521d1a:{NFSU2_TR(0x521d1a);
if(r1(R+518)){{goto L521d2c;}}
}
B521d1c:L521d1c:{c.instructions+=3;NFSU2_TR(0x521d1c);
__builtin_memmove((R+4),(R+28),4);
}
B521d1e:{NFSU2_TR(0x521d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d21:{NFSU2_TR(0x521d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521d26ull));
TAIL_STATIC(0x517720u,517);
}
B521d26:L521d26:{c.instructions+=2;NFSU2_TR(0x521d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521d29:{NFSU2_TR(0x521d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d2c:L521d2c:{c.instructions+=1;NFSU2_TR(0x521d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d2f:L521d2f:{c.instructions+=3;NFSU2_TR(0x521d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521d32:{NFSU2_TR(0x521d32);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B521d34:{NFSU2_TR(0x521d34);
if(r1(R+518)){{goto L521d7c;}}
}
B521d36:L521d36:{c.instructions+=3;NFSU2_TR(0x521d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521d39:{NFSU2_TR(0x521d39);
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
B521d3b:{NFSU2_TR(0x521d3b);
if(r1(R+518)){{goto L521d7c;}}
}
B521d3d:L521d3d:{c.instructions+=1;NFSU2_TR(0x521d3d);
__builtin_memmove((R+4),(R+4),4);
}
B521d40:L521d40:{c.instructions+=2;NFSU2_TR(0x521d40);
u8 U[4];
w4(U+0,u32(0x79b5f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521d45:{NFSU2_TR(0x521d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521d4aull));
TAIL_STATIC(0x505450u,505);
}
B521d4a:L521d4a:{c.instructions+=4;NFSU2_TR(0x521d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521d4d:{NFSU2_TR(0x521d4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B521d50:{NFSU2_TR(0x521d50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521d52:{NFSU2_TR(0x521d52);
if(r1(R+518)){{goto L521d60;}}
}
B521d54:L521d54:{c.instructions+=3;NFSU2_TR(0x521d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521d57:{NFSU2_TR(0x521d57);
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
B521d59:{NFSU2_TR(0x521d59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521d40u);}goto L521d40;}}
}
B521d5b:L521d5b:{c.instructions+=5;NFSU2_TR(0x521d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521d5c:{NFSU2_TR(0x521d5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521d5d:{NFSU2_TR(0x521d5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521d5e:{NFSU2_TR(0x521d5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521d5f:{NFSU2_TR(0x521d5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521d60:L521d60:{c.instructions+=2;NFSU2_TR(0x521d60);
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
B521d62:{NFSU2_TR(0x521d62);
if(r1(R+518)){{goto L521d7c;}}
}
B521d64:L521d64:{c.instructions+=2;NFSU2_TR(0x521d64);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
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
B521d67:{NFSU2_TR(0x521d67);
if(r1(R+518)){{goto L521d79;}}
}
B521d69:L521d69:{c.instructions+=3;NFSU2_TR(0x521d69);
__builtin_memmove((R+4),(R+28),4);
}
B521d6b:{NFSU2_TR(0x521d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d6e:{NFSU2_TR(0x521d6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521d73ull));
TAIL_STATIC(0x517720u,517);
}
B521d73:L521d73:{c.instructions+=2;NFSU2_TR(0x521d73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521d76:{NFSU2_TR(0x521d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d79:L521d79:{c.instructions+=1;NFSU2_TR(0x521d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521d7c:L521d7c:{c.instructions+=5;NFSU2_TR(0x521d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521d7d:{NFSU2_TR(0x521d7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521d7e:{NFSU2_TR(0x521d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B521d7f:{NFSU2_TR(0x521d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B521d80:{NFSU2_TR(0x521d80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521d90:L521d90:{c.instructions+=6;NFSU2_TR(0x521d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521d96:{NFSU2_TR(0x521d96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521d98:{NFSU2_TR(0x521d98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521d99:{NFSU2_TR(0x521d99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521d9a:{NFSU2_TR(0x521d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521da0:{NFSU2_TR(0x521da0);
if(r1(R+518)){{goto L521da7;}}
}
B521da2:L521da2:{c.instructions+=2;NFSU2_TR(0x521da2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B521da5:{NFSU2_TR(0x521da5);
{goto L521db0;}
}
B521da7:L521da7:{c.instructions+=2;NFSU2_TR(0x521da7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B521da9:{NFSU2_TR(0x521da9);
__builtin_memmove((R+16),(R+16),4);
}
B521db0:L521db0:{c.instructions+=2;NFSU2_TR(0x521db0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521db2:{NFSU2_TR(0x521db2);
if(r1(R+518)){{goto L521db9;}}
}
B521db4:L521db4:{c.instructions+=2;NFSU2_TR(0x521db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B521db7:{NFSU2_TR(0x521db7);
{goto L521dbb;}
}
B521db9:L521db9:{c.instructions+=1;NFSU2_TR(0x521db9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521dbb:L521dbb:{c.instructions+=2;NFSU2_TR(0x521dbb);
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
B521dbd:{NFSU2_TR(0x521dbd);
if(r1(R+518)){{goto L521dd2;}}
}
B521dbf:L521dbf:{c.instructions+=3;NFSU2_TR(0x521dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521dc1:{NFSU2_TR(0x521dc1);
__builtin_memmove((R+4),(R+24),4);
}
B521dc3:{NFSU2_TR(0x521dc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521dc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521dc6:L521dc6:{c.instructions+=3;NFSU2_TR(0x521dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521dc9:{NFSU2_TR(0x521dc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521dcb:{NFSU2_TR(0x521dcb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521da7u);}goto L521da7;}}
}
B521dcd:L521dcd:{c.instructions+=2;NFSU2_TR(0x521dcd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B521dd0:{NFSU2_TR(0x521dd0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521db0u);}goto L521db0;}
}
B521dd2:L521dd2:{c.instructions+=3;NFSU2_TR(0x521dd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521dd3:{NFSU2_TR(0x521dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521dd4:{NFSU2_TR(0x521dd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521de0:L521de0:{c.instructions+=6;NFSU2_TR(0x521de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521de6:{NFSU2_TR(0x521de6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521de8:{NFSU2_TR(0x521de8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521de9:{NFSU2_TR(0x521de9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521dea:{NFSU2_TR(0x521dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521df0:{NFSU2_TR(0x521df0);
if(r1(R+518)){{goto L521df7;}}
}
B521df2:L521df2:{c.instructions+=2;NFSU2_TR(0x521df2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B521df5:{NFSU2_TR(0x521df5);
{goto L521e00;}
}
B521df7:L521df7:{c.instructions+=2;NFSU2_TR(0x521df7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B521df9:{NFSU2_TR(0x521df9);
__builtin_memmove((R+16),(R+16),4);
}
B521e00:L521e00:{c.instructions+=2;NFSU2_TR(0x521e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521e02:{NFSU2_TR(0x521e02);
if(r1(R+518)){{goto L521e09;}}
}
B521e04:L521e04:{c.instructions+=2;NFSU2_TR(0x521e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B521e07:{NFSU2_TR(0x521e07);
{goto L521e0b;}
}
B521e09:L521e09:{c.instructions+=1;NFSU2_TR(0x521e09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521e0b:L521e0b:{c.instructions+=2;NFSU2_TR(0x521e0b);
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
B521e0d:{NFSU2_TR(0x521e0d);
if(r1(R+518)){{goto L521e29;}}
}
B521e0f:L521e0f:{c.instructions+=3;NFSU2_TR(0x521e0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B521e12:{NFSU2_TR(0x521e12);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B521e14:{NFSU2_TR(0x521e14);
if(r1(R+518)){{goto L521e1d;}}
}
B521e16:L521e16:{c.instructions+=2;NFSU2_TR(0x521e16);
__builtin_memmove((R+4),(R+24),4);
}
B521e18:{NFSU2_TR(0x521e18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521e1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521ce0u);}goto L521ce0;}
}
B521e1d:L521e1d:{c.instructions+=3;NFSU2_TR(0x521e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B521e20:{NFSU2_TR(0x521e20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521e22:{NFSU2_TR(0x521e22);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521df7u);}goto L521df7;}}
}
B521e24:L521e24:{c.instructions+=2;NFSU2_TR(0x521e24);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B521e27:{NFSU2_TR(0x521e27);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521e00u);}goto L521e00;}
}
B521e29:L521e29:{c.instructions+=3;NFSU2_TR(0x521e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521e2a:{NFSU2_TR(0x521e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521e2b:{NFSU2_TR(0x521e2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521e30:L521e30:{c.instructions+=14;NFSU2_TR(0x521e30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521e34:{NFSU2_TR(0x521e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521e38:{NFSU2_TR(0x521e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e39:{NFSU2_TR(0x521e39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e3a:{NFSU2_TR(0x521e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521e3e:{NFSU2_TR(0x521e3e);
__builtin_memmove((R+24),(R+4),4);
}
B521e40:{NFSU2_TR(0x521e40);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521e44:{NFSU2_TR(0x521e44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e45:{NFSU2_TR(0x521e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521e49:{NFSU2_TR(0x521e49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e4a:{NFSU2_TR(0x521e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e4b:{NFSU2_TR(0x521e4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e4c:{NFSU2_TR(0x521e4c);
__builtin_memmove((R+4),(R+24),4);
}
B521e4e:{NFSU2_TR(0x521e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521e53ull));
TAIL_STATIC(0x51e1b0u,51e);
}
B521e53:L521e53:{c.instructions+=13;NFSU2_TR(0x521e53);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521e57:{NFSU2_TR(0x521e57);
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
B521e59:{NFSU2_TR(0x521e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521e5c:{NFSU2_TR(0x521e5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521e5f:{NFSU2_TR(0x521e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521e62:{NFSU2_TR(0x521e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521e65:{NFSU2_TR(0x521e65);
u8 U[4];
w4(U+0,u32(0x79b6a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B521e6b:{NFSU2_TR(0x521e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521e6e:{NFSU2_TR(0x521e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xc3680000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B521e75:{NFSU2_TR(0x521e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0xc2800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B521e7c:{NFSU2_TR(0x521e7c);
__builtin_memmove((R+0),(R+24),4);
}
B521e7e:{NFSU2_TR(0x521e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521e7f:{NFSU2_TR(0x521e7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521e90:L521e90:{c.instructions+=7;NFSU2_TR(0x521e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521e94:{NFSU2_TR(0x521e94);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B521e9a:{NFSU2_TR(0x521e9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521e9b:{NFSU2_TR(0x521e9b);
__builtin_memmove((R+24),(R+4),4);
}
B521e9d:{NFSU2_TR(0x521e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521ea0:{NFSU2_TR(0x521ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521ea3:{NFSU2_TR(0x521ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521ecb;}}
}
B521ea5:L521ea5:{c.instructions+=6;NFSU2_TR(0x521ea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521ea8:{NFSU2_TR(0x521ea8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B521ea9:{NFSU2_TR(0x521ea9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B521eaa:{NFSU2_TR(0x521eaa);
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
B521eac:{NFSU2_TR(0x521eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521eaf:{NFSU2_TR(0x521eaf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L521edc;}}
}
B521eb1:L521eb1:{c.instructions+=5;NFSU2_TR(0x521eb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521eb3:{NFSU2_TR(0x521eb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521eb4:{NFSU2_TR(0x521eb4);
__builtin_memmove((R+4),(R+24),4);
}
B521eb6:{NFSU2_TR(0x521eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B521ebd:{NFSU2_TR(0x521ebd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521ec0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521ec0:L521ec0:{c.instructions+=3;NFSU2_TR(0x521ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521ec2:{NFSU2_TR(0x521ec2);
__builtin_memmove((R+4),(R+24),4);
}
B521ec4:{NFSU2_TR(0x521ec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521ec7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521ec7:L521ec7:{c.instructions+=2;NFSU2_TR(0x521ec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521ec8:{NFSU2_TR(0x521ec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521ecb:L521ecb:{c.instructions+=2;NFSU2_TR(0x521ecb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B521ed1:{NFSU2_TR(0x521ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L521edc;}}
}
B521ed3:L521ed3:{c.instructions+=2;NFSU2_TR(0x521ed3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
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
B521ed6:{NFSU2_TR(0x521ed6);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L521edc;}}
}
B521ed8:L521ed8:{c.instructions+=2;NFSU2_TR(0x521ed8);
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
B521ed9:{NFSU2_TR(0x521ed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521edc:L521edc:{c.instructions+=4;NFSU2_TR(0x521edc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B521ede:{NFSU2_TR(0x521ede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521edf:{NFSU2_TR(0x521edf);
__builtin_memmove((R+4),(R+24),4);
}
B521ee1:{NFSU2_TR(0x521ee1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521ee4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521ee4:L521ee4:{c.instructions+=3;NFSU2_TR(0x521ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B521ee6:{NFSU2_TR(0x521ee6);
__builtin_memmove((R+4),(R+24),4);
}
B521ee8:{NFSU2_TR(0x521ee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521eebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B521eeb:L521eeb:{c.instructions+=2;NFSU2_TR(0x521eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521eec:{NFSU2_TR(0x521eec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521ef0:L521ef0:{c.instructions+=6;NFSU2_TR(0x521ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521ef3:{NFSU2_TR(0x521ef3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521ef5:{NFSU2_TR(0x521ef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521ef6:{NFSU2_TR(0x521ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B521ef9:{NFSU2_TR(0x521ef9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521efa:{NFSU2_TR(0x521efa);
if(r1(R+518)){{goto L521f01;}}
}
B521efc:L521efc:{c.instructions+=2;NFSU2_TR(0x521efc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B521eff:{NFSU2_TR(0x521eff);
{goto L521f03;}
}
B521f01:L521f01:{c.instructions+=1;NFSU2_TR(0x521f01);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521f03:L521f03:{c.instructions+=1;NFSU2_TR(0x521f03);
w4(R+8,u32(0x8389b4ull));
}
B521f08:L521f08:{c.instructions+=2;NFSU2_TR(0x521f08);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521f0a:{NFSU2_TR(0x521f0a);
if(r1(R+518)){{goto L521f11;}}
}
B521f0c:L521f0c:{c.instructions+=2;NFSU2_TR(0x521f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B521f0f:{NFSU2_TR(0x521f0f);
{goto L521f13;}
}
B521f11:L521f11:{c.instructions+=1;NFSU2_TR(0x521f11);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B521f13:L521f13:{c.instructions+=2;NFSU2_TR(0x521f13);
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
B521f15:{NFSU2_TR(0x521f15);
if(r1(R+518)){{goto L521f36;}}
}
B521f17:L521f17:{c.instructions+=8;NFSU2_TR(0x521f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521f1a:{NFSU2_TR(0x521f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B521f1d:{NFSU2_TR(0x521f1d);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B521f21:{NFSU2_TR(0x521f21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B521f23:{NFSU2_TR(0x521f23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521f26:{NFSU2_TR(0x521f26);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B521f29:{NFSU2_TR(0x521f29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B521f2b:{NFSU2_TR(0x521f2b);
if(r1(R+518)){{goto L521f32;}}
}
B521f2d:L521f2d:{c.instructions+=2;NFSU2_TR(0x521f2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B521f30:{NFSU2_TR(0x521f30);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521f08u);}goto L521f08;}
}
B521f32:L521f32:{c.instructions+=2;NFSU2_TR(0x521f32);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B521f34:{NFSU2_TR(0x521f34);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x521f08u);}goto L521f08;}
}
B521f36:L521f36:{c.instructions+=3;NFSU2_TR(0x521f36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B521f37:{NFSU2_TR(0x521f37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B521f38:{NFSU2_TR(0x521f38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521f40:L521f40:{c.instructions+=32;NFSU2_TR(0x521f40);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521f44:{NFSU2_TR(0x521f44);
__builtin_memmove((R+0),(R+4),4);
}
B521f46:{NFSU2_TR(0x521f46);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521f4a:{NFSU2_TR(0x521f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f4d:{NFSU2_TR(0x521f4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521f51:{NFSU2_TR(0x521f51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f54:{NFSU2_TR(0x521f54);
w4(R+8,u32(0x3f800000ull));
}
B521f59:{NFSU2_TR(0x521f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f5c:{NFSU2_TR(0x521f5c);
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
B521f5e:{NFSU2_TR(0x521f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f61:{NFSU2_TR(0x521f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f64:{NFSU2_TR(0x521f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f67:{NFSU2_TR(0x521f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f6a:{NFSU2_TR(0x521f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521f6e:{NFSU2_TR(0x521f6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f71:{NFSU2_TR(0x521f71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f74:{NFSU2_TR(0x521f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f77:{NFSU2_TR(0x521f77);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B521f7a:{NFSU2_TR(0x521f7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B521f7d:{NFSU2_TR(0x521f7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B521f80:{NFSU2_TR(0x521f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f83:{NFSU2_TR(0x521f83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521f87:{NFSU2_TR(0x521f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521f8a:{NFSU2_TR(0x521f8a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B521f8e:{NFSU2_TR(0x521f8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B521f92:{NFSU2_TR(0x521f92);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B521f96:{NFSU2_TR(0x521f96);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+0)),r4(U+0));
}
B521f9c:{NFSU2_TR(0x521f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B521f9f:{NFSU2_TR(0x521f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B521fa6:{NFSU2_TR(0x521fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521fa9:{NFSU2_TR(0x521fa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B521fad:{NFSU2_TR(0x521fad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521fb0:L521fb0:{c.instructions+=3;NFSU2_TR(0x521fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521fb3:{NFSU2_TR(0x521fb3);
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
B521fb5:{NFSU2_TR(0x521fb5);
if(r1(R+518)){{goto L521fc7;}}
}
B521fb7:L521fb7:{c.instructions+=4;NFSU2_TR(0x521fb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fb9:{NFSU2_TR(0x521fb9);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fbe:{NFSU2_TR(0x521fbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fbf:{NFSU2_TR(0x521fbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521fc4ull));
TAIL_STATIC(0x51cf70u,51c);
}
B521fc4:L521fc4:{c.instructions+=1;NFSU2_TR(0x521fc4);
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
B521fc7:L521fc7:{c.instructions+=1;NFSU2_TR(0x521fc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521fd0:L521fd0:{c.instructions+=3;NFSU2_TR(0x521fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B521fd3:{NFSU2_TR(0x521fd3);
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
B521fd5:{NFSU2_TR(0x521fd5);
if(r1(R+518)){{goto L521fe7;}}
}
B521fd7:L521fd7:{c.instructions+=4;NFSU2_TR(0x521fd7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fd9:{NFSU2_TR(0x521fd9);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fde:{NFSU2_TR(0x521fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B521fdf:{NFSU2_TR(0x521fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x521fe4ull));
TAIL_STATIC(0x51cf70u,51c);
}
B521fe4:L521fe4:{c.instructions+=1;NFSU2_TR(0x521fe4);
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
B521fe7:L521fe7:{c.instructions+=1;NFSU2_TR(0x521fe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B521ff0:L521ff0:{c.instructions+=5;NFSU2_TR(0x521ff0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B521ff4:{NFSU2_TR(0x521ff4);
__builtin_memmove((R+0),(R+4),4);
}
B521ff6:{NFSU2_TR(0x521ff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B521ffa:{NFSU2_TR(0x521ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B521ffd:{NFSU2_TR(0x521ffd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
TAIL_STATIC(0x522001u,522);
}
XIT:NFSU2_TR_EXIT(0x521,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
