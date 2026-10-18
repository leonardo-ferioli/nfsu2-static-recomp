#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_64f(u8* __restrict R,Cpu& c);
u32 body_650(u8* __restrict R,Cpu& c);
u32 body_652(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_655(u8* __restrict R,Cpu& c);
u32 body_657(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x656,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x656,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_656(u8* __restrict R,Cpu& c);
u32 page_656(Cpu& c){return body_656(c.regs.data(),c);}
__attribute__((noinline)) u32 body_656(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x656002:goto L656002;
case 0x656004:c.instructions+=2;goto B656004;
case 0x656005:c.instructions+=1;goto B656005;
case 0x656007:goto L656007;
case 0x656009:goto L656009;
case 0x65600b:goto L65600b;
case 0x656010:c.instructions+=1;goto B656010;
case 0x656015:goto L656015;
case 0x656017:c.instructions+=4;goto B656017;
case 0x65601c:c.instructions+=3;goto B65601c;
case 0x65601e:c.instructions+=2;goto B65601e;
case 0x65601f:c.instructions+=1;goto B65601f;
case 0x656021:goto L656021;
case 0x656023:goto L656023;
case 0x656025:goto L656025;
case 0x65602a:c.instructions+=1;goto B65602a;
case 0x65602f:goto L65602f;
case 0x656031:c.instructions+=4;goto B656031;
case 0x656036:c.instructions+=3;goto B656036;
case 0x656038:c.instructions+=2;goto B656038;
case 0x656039:c.instructions+=1;goto B656039;
case 0x65603b:goto L65603b;
case 0x65603d:goto L65603d;
case 0x65603f:goto L65603f;
case 0x656044:c.instructions+=1;goto B656044;
case 0x656049:goto L656049;
case 0x65604b:c.instructions+=4;goto B65604b;
case 0x656050:c.instructions+=3;goto B656050;
case 0x656052:c.instructions+=2;goto B656052;
case 0x656053:c.instructions+=1;goto B656053;
case 0x656055:goto L656055;
case 0x656057:goto L656057;
case 0x65605d:goto L65605d;
case 0x65605f:c.instructions+=4;goto B65605f;
case 0x656064:c.instructions+=3;goto B656064;
case 0x656066:c.instructions+=2;goto B656066;
case 0x656067:c.instructions+=1;goto B656067;
case 0x656069:goto L656069;
case 0x65606b:goto L65606b;
case 0x656071:goto L656071;
case 0x656073:c.instructions+=4;goto B656073;
case 0x656078:c.instructions+=3;goto B656078;
case 0x65607a:c.instructions+=2;goto B65607a;
case 0x65607b:c.instructions+=1;goto B65607b;
case 0x65607d:goto L65607d;
case 0x65607f:goto L65607f;
case 0x656081:goto L656081;
case 0x656086:c.instructions+=1;goto B656086;
case 0x65608b:goto L65608b;
case 0x65608d:c.instructions+=4;goto B65608d;
case 0x656092:c.instructions+=3;goto B656092;
case 0x656094:c.instructions+=2;goto B656094;
case 0x656095:c.instructions+=1;goto B656095;
case 0x656097:goto L656097;
case 0x656099:goto L656099;
case 0x65609f:goto L65609f;
case 0x6560a1:c.instructions+=4;goto B6560a1;
case 0x6560a6:c.instructions+=3;goto B6560a6;
case 0x6560a8:c.instructions+=2;goto B6560a8;
case 0x6560a9:c.instructions+=1;goto B6560a9;
case 0x6560ab:goto L6560ab;
case 0x6560ad:goto L6560ad;
case 0x6560af:goto L6560af;
case 0x6560b4:c.instructions+=1;goto B6560b4;
case 0x6560b9:goto L6560b9;
case 0x6560bb:c.instructions+=4;goto B6560bb;
case 0x6560c0:c.instructions+=3;goto B6560c0;
case 0x6560c2:c.instructions+=2;goto B6560c2;
case 0x6560c3:c.instructions+=1;goto B6560c3;
case 0x6560c5:goto L6560c5;
case 0x6560c7:goto L6560c7;
case 0x6560cd:goto L6560cd;
case 0x6560d0:c.instructions+=1;goto B6560d0;
case 0x6560d6:goto L6560d6;
case 0x6560d8:c.instructions+=4;goto B6560d8;
case 0x6560da:c.instructions+=3;goto B6560da;
case 0x6560df:c.instructions+=2;goto B6560df;
case 0x6560e0:c.instructions+=1;goto B6560e0;
case 0x6560e2:goto L6560e2;
case 0x6560e4:goto L6560e4;
case 0x6560ea:goto L6560ea;
case 0x6560ef:c.instructions+=1;goto B6560ef;
case 0x6560f4:goto L6560f4;
case 0x6560f6:c.instructions+=4;goto B6560f6;
case 0x6560fb:c.instructions+=3;goto B6560fb;
case 0x6560fd:c.instructions+=2;goto B6560fd;
case 0x6560fe:c.instructions+=1;goto B6560fe;
case 0x656100:goto L656100;
case 0x656102:goto L656102;
case 0x656104:goto L656104;
case 0x656109:c.instructions+=1;goto B656109;
case 0x65610e:goto L65610e;
case 0x656110:c.instructions+=4;goto B656110;
case 0x656115:c.instructions+=3;goto B656115;
case 0x656117:c.instructions+=2;goto B656117;
case 0x656118:c.instructions+=1;goto B656118;
case 0x65611a:goto L65611a;
case 0x65611c:goto L65611c;
case 0x65611e:goto L65611e;
case 0x656120:c.instructions+=4;goto B656120;
case 0x656125:c.instructions+=3;goto B656125;
case 0x656127:c.instructions+=2;goto B656127;
case 0x656128:c.instructions+=1;goto B656128;
case 0x65612a:goto L65612a;
case 0x65612c:goto L65612c;
case 0x65612e:goto L65612e;
case 0x656133:c.instructions+=1;goto B656133;
case 0x656138:goto L656138;
case 0x65613a:c.instructions+=4;goto B65613a;
case 0x65613f:c.instructions+=3;goto B65613f;
case 0x656141:c.instructions+=2;goto B656141;
case 0x656142:c.instructions+=1;goto B656142;
case 0x656144:goto L656144;
case 0x656146:goto L656146;
case 0x656148:goto L656148;
case 0x65614d:c.instructions+=1;goto B65614d;
case 0x656152:goto L656152;
case 0x656154:c.instructions+=4;goto B656154;
case 0x656159:c.instructions+=3;goto B656159;
case 0x65615b:c.instructions+=2;goto B65615b;
case 0x65615c:c.instructions+=1;goto B65615c;
case 0x65615e:goto L65615e;
case 0x656160:goto L656160;
case 0x656162:goto L656162;
case 0x656167:c.instructions+=1;goto B656167;
case 0x65616c:goto L65616c;
case 0x65616e:c.instructions+=4;goto B65616e;
case 0x656173:c.instructions+=3;goto B656173;
case 0x656175:c.instructions+=2;goto B656175;
case 0x656176:c.instructions+=1;goto B656176;
case 0x656178:goto L656178;
case 0x65617a:goto L65617a;
case 0x65617c:goto L65617c;
case 0x656181:c.instructions+=1;goto B656181;
case 0x656186:goto L656186;
case 0x656188:c.instructions+=4;goto B656188;
case 0x65618d:c.instructions+=3;goto B65618d;
case 0x65618f:c.instructions+=2;goto B65618f;
case 0x656190:c.instructions+=1;goto B656190;
case 0x656192:goto L656192;
case 0x656194:goto L656194;
case 0x656196:goto L656196;
case 0x65619b:c.instructions+=1;goto B65619b;
case 0x6561a0:goto L6561a0;
case 0x6561a2:c.instructions+=4;goto B6561a2;
case 0x6561a7:c.instructions+=3;goto B6561a7;
case 0x6561a9:c.instructions+=2;goto B6561a9;
case 0x6561aa:c.instructions+=1;goto B6561aa;
case 0x6561ac:goto L6561ac;
case 0x6561ae:goto L6561ae;
case 0x6561b0:goto L6561b0;
case 0x6561b5:c.instructions+=1;goto B6561b5;
case 0x6561ba:goto L6561ba;
case 0x6561be:c.instructions+=1;goto B6561be;
case 0x6561c4:goto L6561c4;
case 0x6561c6:c.instructions+=4;goto B6561c6;
case 0x6561c8:c.instructions+=3;goto B6561c8;
case 0x6561cd:c.instructions+=2;goto B6561cd;
case 0x6561ce:c.instructions+=1;goto B6561ce;
case 0x6561d0:goto L6561d0;
case 0x6561d2:goto L6561d2;
case 0x6561d8:goto L6561d8;
case 0x6561dd:c.instructions+=1;goto B6561dd;
case 0x6561e2:goto L6561e2;
case 0x6561e4:c.instructions+=4;goto B6561e4;
case 0x6561e6:c.instructions+=3;goto B6561e6;
case 0x6561eb:c.instructions+=2;goto B6561eb;
case 0x6561ec:c.instructions+=1;goto B6561ec;
case 0x6561ee:goto L6561ee;
case 0x6561f0:goto L6561f0;
case 0x6561f6:goto L6561f6;
case 0x6561fb:c.instructions+=1;goto B6561fb;
case 0x656200:goto L656200;
case 0x656205:c.instructions+=2;goto B656205;
case 0x656208:c.instructions+=1;goto B656208;
case 0x65620d:goto L65620d;
case 0x65620f:c.instructions+=3;goto B65620f;
case 0x656210:c.instructions+=2;goto B656210;
case 0x656211:c.instructions+=1;goto B656211;
case 0x656213:goto L656213;
case 0x656218:c.instructions+=1;goto B656218;
case 0x65621d:goto L65621d;
case 0x656222:c.instructions+=2;goto B656222;
case 0x656225:c.instructions+=1;goto B656225;
case 0x65622a:goto L65622a;
case 0x65622c:c.instructions+=3;goto B65622c;
case 0x65622d:c.instructions+=2;goto B65622d;
case 0x65622e:c.instructions+=1;goto B65622e;
case 0x656230:goto L656230;
case 0x656235:c.instructions+=1;goto B656235;
case 0x65623a:goto L65623a;
case 0x65623f:c.instructions+=2;goto B65623f;
case 0x656242:c.instructions+=1;goto B656242;
case 0x656247:goto L656247;
case 0x656249:c.instructions+=3;goto B656249;
case 0x65624a:c.instructions+=2;goto B65624a;
case 0x65624b:c.instructions+=1;goto B65624b;
case 0x65624d:goto L65624d;
case 0x656252:c.instructions+=1;goto B656252;
case 0x656257:goto L656257;
case 0x656259:c.instructions+=11;goto B656259;
case 0x65625a:c.instructions+=10;goto B65625a;
case 0x65625b:c.instructions+=9;goto B65625b;
case 0x65625c:c.instructions+=8;goto B65625c;
case 0x65625f:c.instructions+=7;goto B65625f;
case 0x656262:c.instructions+=6;goto B656262;
case 0x656263:c.instructions+=5;goto B656263;
case 0x656264:c.instructions+=4;goto B656264;
case 0x656265:c.instructions+=3;goto B656265;
case 0x656266:c.instructions+=2;goto B656266;
case 0x656268:c.instructions+=1;goto B656268;
case 0x65626d:goto L65626d;
case 0x65626f:c.instructions+=4;goto B65626f;
case 0x656271:c.instructions+=3;goto B656271;
case 0x656273:c.instructions+=2;goto B656273;
case 0x656278:c.instructions+=1;goto B656278;
case 0x65627d:goto L65627d;
case 0x656282:c.instructions+=1;goto B656282;
case 0x65631b:goto L65631b;
case 0x65631d:c.instructions+=9;goto B65631d;
case 0x65631e:c.instructions+=8;goto B65631e;
case 0x656320:c.instructions+=7;goto B656320;
case 0x656323:c.instructions+=6;goto B656323;
case 0x656327:c.instructions+=5;goto B656327;
case 0x656328:c.instructions+=4;goto B656328;
case 0x656329:c.instructions+=3;goto B656329;
case 0x65632a:c.instructions+=2;goto B65632a;
case 0x65632c:c.instructions+=1;goto B65632c;
case 0x656331:goto L656331;
case 0x656333:c.instructions+=3;goto B656333;
case 0x656336:c.instructions+=2;goto B656336;
case 0x656339:c.instructions+=1;goto B656339;
case 0x65633e:goto L65633e;
case 0x656340:c.instructions+=1;goto B656340;
case 0x656346:goto L656346;
case 0x656349:c.instructions+=2;goto B656349;
case 0x65634b:c.instructions+=1;goto B65634b;
case 0x656351:goto L656351;
case 0x656354:c.instructions+=5;goto B656354;
case 0x656357:c.instructions+=4;goto B656357;
case 0x65635b:c.instructions+=3;goto B65635b;
case 0x65635e:c.instructions+=2;goto B65635e;
case 0x656361:c.instructions+=1;goto B656361;
case 0x656363:goto L656363;
case 0x656366:c.instructions+=5;goto B656366;
case 0x65636b:c.instructions+=4;goto B65636b;
case 0x656370:c.instructions+=3;goto B656370;
case 0x656371:c.instructions+=2;goto B656371;
case 0x656372:c.instructions+=1;goto B656372;
case 0x656377:goto L656377;
case 0x65637a:goto L65637a;
case 0x65637e:c.instructions+=1;goto B65637e;
case 0x656380:goto L656380;
case 0x656383:c.instructions+=5;goto B656383;
case 0x656388:c.instructions+=4;goto B656388;
case 0x65638d:c.instructions+=3;goto B65638d;
case 0x65638e:c.instructions+=2;goto B65638e;
case 0x65638f:c.instructions+=1;goto B65638f;
case 0x656394:goto L656394;
case 0x656397:goto L656397;
case 0x65639a:c.instructions+=2;goto B65639a;
case 0x65639c:c.instructions+=1;goto B65639c;
case 0x6563a1:goto L6563a1;
case 0x6563a3:c.instructions+=1;goto B6563a3;
case 0x6563a5:goto L6563a5;
case 0x6563a8:c.instructions+=5;goto B6563a8;
case 0x6563ad:c.instructions+=4;goto B6563ad;
case 0x6563b2:c.instructions+=3;goto B6563b2;
case 0x6563b3:c.instructions+=2;goto B6563b3;
case 0x6563b4:c.instructions+=1;goto B6563b4;
case 0x6563b9:goto L6563b9;
case 0x6563bc:goto L6563bc;
case 0x6563c0:c.instructions+=2;goto B6563c0;
case 0x6563c3:c.instructions+=1;goto B6563c3;
case 0x6563c5:goto L6563c5;
case 0x6563c8:c.instructions+=2;goto B6563c8;
case 0x6563ca:c.instructions+=1;goto B6563ca;
case 0x6563cc:goto L6563cc;
case 0x6563d0:c.instructions+=1;goto B6563d0;
case 0x6563d2:goto L6563d2;
case 0x6563d5:c.instructions+=2;goto B6563d5;
case 0x6563d7:c.instructions+=1;goto B6563d7;
case 0x6563d9:goto L6563d9;
case 0x6563dc:c.instructions+=2;goto B6563dc;
case 0x6563e0:c.instructions+=1;goto B6563e0;
case 0x6563e2:goto L6563e2;
case 0x6563e9:c.instructions+=2;goto B6563e9;
case 0x6563eb:c.instructions+=1;goto B6563eb;
case 0x6563ed:goto L6563ed;
case 0x6563f1:c.instructions+=1;goto B6563f1;
case 0x6563f3:goto L6563f3;
case 0x6563f6:c.instructions+=7;goto B6563f6;
case 0x6563f9:c.instructions+=6;goto B6563f9;
case 0x6563fc:c.instructions+=5;goto B6563fc;
case 0x656401:c.instructions+=4;goto B656401;
case 0x656406:c.instructions+=3;goto B656406;
case 0x656407:c.instructions+=2;goto B656407;
case 0x656408:c.instructions+=1;goto B656408;
case 0x65640d:goto L65640d;
case 0x656410:goto L656410;
case 0x656413:goto L656413;
case 0x656415:c.instructions+=1;goto B656415;
case 0x656417:goto L656417;
case 0x656419:c.instructions+=1;goto B656419;
case 0x65641e:goto L65641e;
case 0x656420:c.instructions+=1;goto B656420;
case 0x656422:goto L656422;
case 0x656427:c.instructions+=4;goto B656427;
case 0x656428:c.instructions+=3;goto B656428;
case 0x656429:c.instructions+=2;goto B656429;
case 0x65642b:c.instructions+=1;goto B65642b;
case 0x656430:goto L656430;
case 0x656433:c.instructions+=1;goto B656433;
case 0x656435:goto L656435;
case 0x656438:goto L656438;
case 0x65643b:c.instructions+=1;goto B65643b;
case 0x656441:goto L656441;
case 0x656443:c.instructions+=1;goto B656443;
case 0x656448:goto L656448;
case 0x65644a:c.instructions+=1;goto B65644a;
case 0x65644c:goto L65644c;
case 0x65644d:c.instructions+=5;goto B65644d;
case 0x65644e:c.instructions+=4;goto B65644e;
case 0x65644f:c.instructions+=3;goto B65644f;
case 0x656451:c.instructions+=2;goto B656451;
case 0x656453:c.instructions+=1;goto B656453;
case 0x656458:goto L656458;
case 0x65645a:c.instructions+=2;goto B65645a;
case 0x65645d:c.instructions+=1;goto B65645d;
case 0x65645f:goto L65645f;
case 0x656462:c.instructions+=1;goto B656462;
case 0x656464:goto L656464;
case 0x656466:c.instructions+=1;goto B656466;
case 0x65646c:goto L65646c;
case 0x65646f:c.instructions+=3;goto B65646f;
case 0x656472:c.instructions+=2;goto B656472;
case 0x656475:c.instructions+=1;goto B656475;
case 0x65647a:goto L65647a;
case 0x65647c:c.instructions+=2;goto B65647c;
case 0x65647f:c.instructions+=1;goto B65647f;
case 0x656485:goto L656485;
case 0x656487:c.instructions+=1;goto B656487;
case 0x65648c:goto L65648c;
case 0x65648e:c.instructions+=1;goto B65648e;
case 0x656490:goto L656490;
case 0x656492:c.instructions+=1;goto B656492;
case 0x656497:goto L656497;
case 0x656499:c.instructions+=1;goto B656499;
case 0x65649b:goto L65649b;
case 0x65649d:goto L65649d;
case 0x65649f:c.instructions+=1;goto B65649f;
case 0x6564a5:goto L6564a5;
case 0x6564a8:c.instructions+=6;goto B6564a8;
case 0x6564ab:c.instructions+=5;goto B6564ab;
case 0x6564ae:c.instructions+=4;goto B6564ae;
case 0x6564b1:c.instructions+=3;goto B6564b1;
case 0x6564b4:c.instructions+=2;goto B6564b4;
case 0x6564b6:c.instructions+=1;goto B6564b6;
case 0x6564b8:goto L6564b8;
case 0x6564b9:c.instructions+=1;goto B6564b9;
case 0x6564be:goto L6564be;
case 0x6564c0:c.instructions+=2;goto B6564c0;
case 0x6564c3:c.instructions+=1;goto B6564c3;
case 0x6564c9:goto L6564c9;
case 0x6564cd:c.instructions+=1;goto B6564cd;
case 0x6564cf:goto L6564cf;
case 0x6564d2:c.instructions+=1;goto B6564d2;
case 0x6564d7:goto L6564d7;
case 0x6564d9:c.instructions+=2;goto B6564d9;
case 0x6564dc:c.instructions+=1;goto B6564dc;
case 0x6564e2:goto L6564e2;
case 0x6564e4:c.instructions+=3;goto B6564e4;
case 0x6564e7:c.instructions+=2;goto B6564e7;
case 0x6564e9:c.instructions+=1;goto B6564e9;
case 0x6564ee:goto L6564ee;
case 0x6564f0:c.instructions+=2;goto B6564f0;
case 0x6564f3:c.instructions+=1;goto B6564f3;
case 0x6564f5:goto L6564f5;
case 0x6564f8:c.instructions+=1;goto B6564f8;
case 0x6564fa:goto L6564fa;
case 0x6564fd:c.instructions+=6;goto B6564fd;
case 0x656500:c.instructions+=5;goto B656500;
case 0x656505:c.instructions+=4;goto B656505;
case 0x65650a:c.instructions+=3;goto B65650a;
case 0x65650b:c.instructions+=2;goto B65650b;
case 0x65650c:c.instructions+=1;goto B65650c;
case 0x656511:goto L656511;
case 0x656514:c.instructions+=1;goto B656514;
case 0x656517:goto L656517;
case 0x65651a:c.instructions+=1;goto B65651a;
case 0x65651c:goto L65651c;
case 0x65651f:c.instructions+=1;goto B65651f;
case 0x656524:goto L656524;
case 0x656526:c.instructions+=2;goto B656526;
case 0x656529:c.instructions+=1;goto B656529;
case 0x65652f:goto L65652f;
case 0x656532:c.instructions+=3;goto B656532;
case 0x656535:c.instructions+=2;goto B656535;
case 0x656537:c.instructions+=1;goto B656537;
case 0x656539:goto L656539;
case 0x65653d:c.instructions+=1;goto B65653d;
case 0x65653f:goto L65653f;
case 0x656540:c.instructions+=1;goto B656540;
case 0x656545:goto L656545;
case 0x656547:c.instructions+=2;goto B656547;
case 0x65654a:c.instructions+=1;goto B65654a;
case 0x65654c:goto L65654c;
case 0x65654f:c.instructions+=4;goto B65654f;
case 0x656552:c.instructions+=3;goto B656552;
case 0x656554:c.instructions+=2;goto B656554;
case 0x656557:c.instructions+=1;goto B656557;
case 0x656559:goto L656559;
case 0x65655c:c.instructions+=2;goto B65655c;
case 0x65655e:c.instructions+=1;goto B65655e;
case 0x656560:goto L656560;
case 0x656563:c.instructions+=1;goto B656563;
case 0x656565:goto L656565;
case 0x656566:c.instructions+=1;goto B656566;
case 0x65656b:goto L65656b;
case 0x65656d:c.instructions+=2;goto B65656d;
case 0x656570:c.instructions+=1;goto B656570;
case 0x656572:goto L656572;
case 0x656575:c.instructions+=12;goto B656575;
case 0x656576:c.instructions+=11;goto B656576;
case 0x656579:c.instructions+=10;goto B656579;
case 0x65657a:c.instructions+=9;goto B65657a;
case 0x65657d:c.instructions+=8;goto B65657d;
case 0x65657f:c.instructions+=7;goto B65657f;
case 0x656582:c.instructions+=6;goto B656582;
case 0x656584:c.instructions+=5;goto B656584;
case 0x656587:c.instructions+=4;goto B656587;
case 0x65658a:c.instructions+=3;goto B65658a;
case 0x65658d:c.instructions+=2;goto B65658d;
case 0x65658f:c.instructions+=1;goto B65658f;
case 0x656594:goto L656594;
case 0x656596:c.instructions+=1;goto B656596;
case 0x656598:goto L656598;
case 0x65659b:c.instructions+=3;goto B65659b;
case 0x65659e:c.instructions+=2;goto B65659e;
case 0x6565a3:c.instructions+=1;goto B6565a3;
case 0x6565a8:goto L6565a8;
case 0x6565a9:c.instructions+=2;goto B6565a9;
case 0x6565aa:c.instructions+=1;goto B6565aa;
case 0x6565af:goto L6565af;
case 0x6565b2:goto L6565b2;
case 0x6565b4:goto L6565b4;
case 0x6565b5:c.instructions+=4;goto B6565b5;
case 0x6565b6:c.instructions+=3;goto B6565b6;
case 0x6565b7:c.instructions+=2;goto B6565b7;
case 0x6565b8:c.instructions+=1;goto B6565b8;
case 0x6565bb:goto L6565bb;
case 0x6565be:c.instructions+=2;goto B6565be;
case 0x6565c0:c.instructions+=1;goto B6565c0;
case 0x6565c2:goto L6565c2;
case 0x6565c5:c.instructions+=2;goto B6565c5;
case 0x6565c8:c.instructions+=1;goto B6565c8;
case 0x6565cd:goto L6565cd;
case 0x6565cf:c.instructions+=1;goto B6565cf;
case 0x6565d1:goto L6565d1;
case 0x6565d4:c.instructions+=4;goto B6565d4;
case 0x6565d7:c.instructions+=3;goto B6565d7;
case 0x6565dc:c.instructions+=2;goto B6565dc;
case 0x6565e1:c.instructions+=1;goto B6565e1;
case 0x6565e3:goto L6565e3;
case 0x6565e6:c.instructions+=9;goto B6565e6;
case 0x6565e9:c.instructions+=8;goto B6565e9;
case 0x6565ec:c.instructions+=7;goto B6565ec;
case 0x6565ef:c.instructions+=6;goto B6565ef;
case 0x6565f2:c.instructions+=5;goto B6565f2;
case 0x6565f5:c.instructions+=4;goto B6565f5;
case 0x6565f8:c.instructions+=3;goto B6565f8;
case 0x6565fb:c.instructions+=2;goto B6565fb;
case 0x6565fe:c.instructions+=1;goto B6565fe;
case 0x656600:goto L656600;
case 0x656603:c.instructions+=3;goto B656603;
case 0x656606:c.instructions+=2;goto B656606;
case 0x656609:c.instructions+=1;goto B656609;
case 0x65660e:goto L65660e;
case 0x656611:c.instructions+=1;goto B656611;
case 0x656614:goto L656614;
case 0x656617:c.instructions+=7;goto B656617;
case 0x65661a:c.instructions+=6;goto B65661a;
case 0x65661d:c.instructions+=5;goto B65661d;
case 0x656621:c.instructions+=4;goto B656621;
case 0x656624:c.instructions+=3;goto B656624;
case 0x65662b:c.instructions+=2;goto B65662b;
case 0x65662e:c.instructions+=1;goto B65662e;
case 0x656633:goto L656633;
case 0x656636:c.instructions+=2;goto B656636;
case 0x656639:c.instructions+=1;goto B656639;
case 0x65663e:goto L65663e;
case 0x656640:c.instructions+=4;goto B656640;
case 0x656643:c.instructions+=3;goto B656643;
case 0x656645:c.instructions+=2;goto B656645;
case 0x656648:c.instructions+=1;goto B656648;
case 0x65664d:goto L65664d;
case 0x656650:c.instructions+=4;goto B656650;
case 0x656651:c.instructions+=3;goto B656651;
case 0x656654:c.instructions+=2;goto B656654;
case 0x656656:c.instructions+=1;goto B656656;
case 0x65665b:goto L65665b;
case 0x65665d:c.instructions+=2;goto B65665d;
case 0x656660:c.instructions+=1;goto B656660;
case 0x656662:goto L656662;
case 0x656665:c.instructions+=6;goto B656665;
case 0x656668:c.instructions+=5;goto B656668;
case 0x65666a:c.instructions+=4;goto B65666a;
case 0x65666d:c.instructions+=3;goto B65666d;
case 0x65666f:c.instructions+=2;goto B65666f;
case 0x656672:c.instructions+=1;goto B656672;
case 0x656677:goto L656677;
case 0x656679:c.instructions+=2;goto B656679;
case 0x65667c:c.instructions+=1;goto B65667c;
case 0x656682:goto L656682;
case 0x656685:goto L656685;
case 0x656688:c.instructions+=6;goto B656688;
case 0x65668b:c.instructions+=5;goto B65668b;
case 0x65668e:c.instructions+=4;goto B65668e;
case 0x656691:c.instructions+=3;goto B656691;
case 0x656694:c.instructions+=2;goto B656694;
case 0x656697:c.instructions+=1;goto B656697;
case 0x65669c:goto L65669c;
case 0x65669e:c.instructions+=10;goto B65669e;
case 0x65669f:c.instructions+=9;goto B65669f;
case 0x6566a1:c.instructions+=8;goto B6566a1;
case 0x6566a4:c.instructions+=7;goto B6566a4;
case 0x6566a5:c.instructions+=6;goto B6566a5;
case 0x6566a8:c.instructions+=5;goto B6566a8;
case 0x6566a9:c.instructions+=4;goto B6566a9;
case 0x6566ab:c.instructions+=3;goto B6566ab;
case 0x6566ad:c.instructions+=2;goto B6566ad;
case 0x6566b0:c.instructions+=1;goto B6566b0;
case 0x6566b6:goto L6566b6;
case 0x6566ba:c.instructions+=1;goto B6566ba;
case 0x6566c0:goto L6566c0;
case 0x6566c3:c.instructions+=6;goto B6566c3;
case 0x6566c7:c.instructions+=5;goto B6566c7;
case 0x6566ca:c.instructions+=4;goto B6566ca;
case 0x6566cd:c.instructions+=3;goto B6566cd;
case 0x6566ce:c.instructions+=2;goto B6566ce;
case 0x6566cf:c.instructions+=1;goto B6566cf;
case 0x6566d4:goto L6566d4;
case 0x6566d6:c.instructions+=3;goto B6566d6;
case 0x6566d7:c.instructions+=2;goto B6566d7;
case 0x6566da:c.instructions+=1;goto B6566da;
case 0x6566e0:goto L6566e0;
case 0x6566e3:c.instructions+=3;goto B6566e3;
case 0x6566e4:c.instructions+=2;goto B6566e4;
case 0x6566e5:c.instructions+=1;goto B6566e5;
case 0x6566ea:goto L6566ea;
case 0x6566ec:c.instructions+=1;goto B6566ec;
case 0x6566f2:goto L6566f2;
case 0x6566f4:c.instructions+=1;goto B6566f4;
case 0x6566f9:goto L6566f9;
case 0x6566fb:c.instructions+=1;goto B6566fb;
case 0x6566fd:goto L6566fd;
case 0x656700:c.instructions+=8;goto B656700;
case 0x656701:c.instructions+=7;goto B656701;
case 0x656703:c.instructions+=6;goto B656703;
case 0x656704:c.instructions+=5;goto B656704;
case 0x656705:c.instructions+=4;goto B656705;
case 0x656706:c.instructions+=3;goto B656706;
case 0x656707:c.instructions+=2;goto B656707;
case 0x656709:c.instructions+=1;goto B656709;
case 0x65670e:goto L65670e;
case 0x656710:c.instructions+=1;goto B656710;
case 0x656712:goto L656712;
case 0x656714:goto L656714;
case 0x656716:c.instructions+=1;goto B656716;
case 0x65671c:goto L65671c;
case 0x65671f:c.instructions+=1;goto B65671f;
case 0x656721:goto L656721;
case 0x656724:c.instructions+=2;goto B656724;
case 0x656726:c.instructions+=1;goto B656726;
case 0x656729:goto L656729;
case 0x65672b:c.instructions+=2;goto B65672b;
case 0x65672e:c.instructions+=1;goto B65672e;
case 0x656730:goto L656730;
case 0x656734:c.instructions+=3;goto B656734;
case 0x656738:c.instructions+=2;goto B656738;
case 0x65673b:c.instructions+=1;goto B65673b;
case 0x65673d:goto L65673d;
case 0x656740:c.instructions+=1;goto B656740;
case 0x656743:goto L656743;
case 0x656745:c.instructions+=1;goto B656745;
case 0x65674a:goto L65674a;
case 0x65674c:c.instructions+=1;goto B65674c;
case 0x65674e:goto L65674e;
case 0x656753:c.instructions+=4;goto B656753;
case 0x656755:c.instructions+=3;goto B656755;
case 0x656757:c.instructions+=2;goto B656757;
case 0x656759:c.instructions+=1;goto B656759;
case 0x65675e:goto L65675e;
case 0x656760:goto L656760;
case 0x656762:goto L656762;
case 0x656764:c.instructions+=2;goto B656764;
case 0x656766:c.instructions+=1;goto B656766;
case 0x656768:goto L656768;
case 0x65676a:c.instructions+=1;goto B65676a;
case 0x65676f:goto L65676f;
case 0x656771:c.instructions+=1;goto B656771;
case 0x656773:goto L656773;
case 0x656776:c.instructions+=4;goto B656776;
case 0x656777:c.instructions+=3;goto B656777;
case 0x65677a:c.instructions+=2;goto B65677a;
case 0x65677c:c.instructions+=1;goto B65677c;
case 0x656781:goto L656781;
case 0x656783:goto L656783;
case 0x656785:goto L656785;
case 0x656787:c.instructions+=3;goto B656787;
case 0x656789:c.instructions+=2;goto B656789;
case 0x65678c:c.instructions+=1;goto B65678c;
case 0x65678e:goto L65678e;
case 0x656790:c.instructions+=6;goto B656790;
case 0x656794:c.instructions+=5;goto B656794;
case 0x656797:c.instructions+=4;goto B656797;
case 0x65679a:c.instructions+=3;goto B65679a;
case 0x65679d:c.instructions+=2;goto B65679d;
case 0x6567a0:c.instructions+=1;goto B6567a0;
case 0x6567a2:goto L6567a2;
case 0x6567a5:c.instructions+=2;goto B6567a5;
case 0x6567a6:c.instructions+=1;goto B6567a6;
case 0x6567ab:goto L6567ab;
case 0x6567ad:goto L6567ad;
case 0x6567af:goto L6567af;
case 0x6567b1:goto L6567b1;
case 0x6567b4:c.instructions+=1;goto B6567b4;
case 0x6567b9:goto L6567b9;
case 0x6567ba:c.instructions+=3;goto B6567ba;
case 0x6567bc:c.instructions+=2;goto B6567bc;
case 0x6567bd:c.instructions+=1;goto B6567bd;
case 0x6567bf:goto L6567bf;
case 0x6567c1:goto L6567c1;
case 0x6567c2:c.instructions+=3;goto B6567c2;
case 0x6567c3:c.instructions+=2;goto B6567c3;
case 0x6567c4:c.instructions+=1;goto B6567c4;
case 0x6567c7:goto L6567c7;
case 0x6567c9:c.instructions+=6;goto B6567c9;
case 0x6567ca:c.instructions+=5;goto B6567ca;
case 0x6567cc:c.instructions+=4;goto B6567cc;
case 0x6567cd:c.instructions+=3;goto B6567cd;
case 0x6567d0:c.instructions+=2;goto B6567d0;
case 0x6567d2:c.instructions+=1;goto B6567d2;
case 0x6567d7:goto L6567d7;
case 0x6567d9:c.instructions+=2;goto B6567d9;
case 0x6567db:c.instructions+=1;goto B6567db;
case 0x6567dd:goto L6567dd;
case 0x6567e0:c.instructions+=2;goto B6567e0;
case 0x6567e2:c.instructions+=1;goto B6567e2;
case 0x6567e4:goto L6567e4;
case 0x6567e8:c.instructions+=1;goto B6567e8;
case 0x6567ea:goto L6567ea;
case 0x6567eb:c.instructions+=2;goto B6567eb;
case 0x6567ed:c.instructions+=1;goto B6567ed;
case 0x6567f2:goto L6567f2;
case 0x6567f4:c.instructions+=1;goto B6567f4;
case 0x6567f6:goto L6567f6;
case 0x6567f9:c.instructions+=8;goto B6567f9;
case 0x6567fa:c.instructions+=7;goto B6567fa;
case 0x6567fd:c.instructions+=6;goto B6567fd;
case 0x656800:c.instructions+=5;goto B656800;
case 0x656803:c.instructions+=4;goto B656803;
case 0x656804:c.instructions+=3;goto B656804;
case 0x656807:c.instructions+=2;goto B656807;
case 0x656809:c.instructions+=1;goto B656809;
case 0x65680e:goto L65680e;
case 0x656810:c.instructions+=1;goto B656810;
case 0x656812:goto L656812;
case 0x656814:c.instructions+=1;goto B656814;
case 0x656816:goto L656816;
case 0x65681b:goto L65681b;
case 0x65681c:c.instructions+=2;goto B65681c;
case 0x65681d:c.instructions+=1;goto B65681d;
case 0x656820:goto L656820;
case 0x656822:c.instructions+=12;goto B656822;
case 0x656823:c.instructions+=11;goto B656823;
case 0x656825:c.instructions+=10;goto B656825;
case 0x656828:c.instructions+=9;goto B656828;
case 0x656829:c.instructions+=8;goto B656829;
case 0x65682a:c.instructions+=7;goto B65682a;
case 0x65682c:c.instructions+=6;goto B65682c;
case 0x65682f:c.instructions+=5;goto B65682f;
case 0x656830:c.instructions+=4;goto B656830;
case 0x656833:c.instructions+=3;goto B656833;
case 0x656836:c.instructions+=2;goto B656836;
case 0x656839:c.instructions+=1;goto B656839;
case 0x65683f:goto L65683f;
case 0x656841:goto L656841;
case 0x656844:goto L656844;
case 0x656847:c.instructions+=2;goto B656847;
case 0x65684a:c.instructions+=1;goto B65684a;
case 0x656850:goto L656850;
case 0x656852:c.instructions+=1;goto B656852;
case 0x656857:goto L656857;
case 0x656859:c.instructions+=1;goto B656859;
case 0x65685b:goto L65685b;
case 0x656860:c.instructions+=4;goto B656860;
case 0x656861:c.instructions+=3;goto B656861;
case 0x656862:c.instructions+=2;goto B656862;
case 0x656864:c.instructions+=1;goto B656864;
case 0x656869:goto L656869;
case 0x65686b:goto L65686b;
case 0x65686d:goto L65686d;
case 0x65686f:c.instructions+=2;goto B65686f;
case 0x656871:c.instructions+=1;goto B656871;
case 0x656877:goto L656877;
case 0x656879:c.instructions+=1;goto B656879;
case 0x65687e:goto L65687e;
case 0x656880:c.instructions+=1;goto B656880;
case 0x656882:goto L656882;
case 0x656883:c.instructions+=5;goto B656883;
case 0x656884:c.instructions+=4;goto B656884;
case 0x656885:c.instructions+=3;goto B656885;
case 0x656886:c.instructions+=2;goto B656886;
case 0x656888:c.instructions+=1;goto B656888;
case 0x65688d:goto L65688d;
case 0x65688f:c.instructions+=1;goto B65688f;
case 0x656891:goto L656891;
case 0x656893:goto L656893;
case 0x656895:c.instructions+=1;goto B656895;
case 0x65689b:goto L65689b;
case 0x65689d:c.instructions+=8;goto B65689d;
case 0x6568a0:c.instructions+=7;goto B6568a0;
case 0x6568a2:c.instructions+=6;goto B6568a2;
case 0x6568a5:c.instructions+=5;goto B6568a5;
case 0x6568a8:c.instructions+=4;goto B6568a8;
case 0x6568ab:c.instructions+=3;goto B6568ab;
case 0x6568b2:c.instructions+=2;goto B6568b2;
case 0x6568b5:c.instructions+=1;goto B6568b5;
case 0x6568b7:goto L6568b7;
case 0x6568ba:c.instructions+=1;goto B6568ba;
case 0x6568bf:goto L6568bf;
case 0x6568c1:c.instructions+=2;goto B6568c1;
case 0x6568c4:c.instructions+=1;goto B6568c4;
case 0x6568ca:goto L6568ca;
case 0x6568cd:c.instructions+=2;goto B6568cd;
case 0x6568d0:c.instructions+=1;goto B6568d0;
case 0x6568d2:goto L6568d2;
case 0x6568d4:c.instructions+=1;goto B6568d4;
case 0x6568d9:goto L6568d9;
case 0x6568db:c.instructions+=1;goto B6568db;
case 0x6568dd:goto L6568dd;
case 0x6568df:c.instructions+=1;goto B6568df;
case 0x6568e4:goto L6568e4;
case 0x6568e6:goto L6568e6;
case 0x6568e8:goto L6568e8;
case 0x6568ea:c.instructions+=1;goto B6568ea;
case 0x6568f0:goto L6568f0;
case 0x6568f3:c.instructions+=6;goto B6568f3;
case 0x6568f6:c.instructions+=5;goto B6568f6;
case 0x6568f9:c.instructions+=4;goto B6568f9;
case 0x6568fc:c.instructions+=3;goto B6568fc;
case 0x6568fe:c.instructions+=2;goto B6568fe;
case 0x656901:c.instructions+=1;goto B656901;
case 0x656903:goto L656903;
case 0x656904:c.instructions+=3;goto B656904;
case 0x656905:c.instructions+=2;goto B656905;
case 0x656908:c.instructions+=1;goto B656908;
case 0x65690d:goto L65690d;
case 0x65690f:c.instructions+=1;goto B65690f;
case 0x656911:goto L656911;
case 0x656918:c.instructions+=1;goto B656918;
case 0x65691a:goto L65691a;
case 0x656921:goto L656921;
case 0x656927:goto L656927;
case 0x656929:c.instructions+=4;goto B656929;
case 0x65692d:c.instructions+=3;goto B65692d;
case 0x656930:c.instructions+=2;goto B656930;
case 0x656933:c.instructions+=1;goto B656933;
case 0x656935:goto L656935;
case 0x656939:c.instructions+=1;goto B656939;
case 0x65693b:goto L65693b;
case 0x65693c:c.instructions+=1;goto B65693c;
case 0x656941:goto L656941;
case 0x656943:c.instructions+=2;goto B656943;
case 0x656946:c.instructions+=1;goto B656946;
case 0x65694c:goto L65694c;
case 0x65694f:c.instructions+=4;goto B65694f;
case 0x656954:c.instructions+=3;goto B656954;
case 0x656957:c.instructions+=2;goto B656957;
case 0x656959:c.instructions+=1;goto B656959;
case 0x65695b:goto L65695b;
case 0x65695e:c.instructions+=1;goto B65695e;
case 0x656960:goto L656960;
case 0x656964:c.instructions+=1;goto B656964;
case 0x656966:goto L656966;
case 0x65696d:c.instructions+=1;goto B65696d;
case 0x65696f:goto L65696f;
case 0x656972:c.instructions+=3;goto B656972;
case 0x656974:c.instructions+=2;goto B656974;
case 0x656975:c.instructions+=1;goto B656975;
case 0x65697a:goto L65697a;
case 0x65697c:c.instructions+=1;goto B65697c;
case 0x65697e:goto L65697e;
case 0x656981:c.instructions+=4;goto B656981;
case 0x656984:c.instructions+=3;goto B656984;
case 0x656986:c.instructions+=2;goto B656986;
case 0x656989:c.instructions+=1;goto B656989;
case 0x65698f:goto L65698f;
case 0x656992:goto L656992;
case 0x656993:c.instructions+=4;goto B656993;
case 0x656994:c.instructions+=3;goto B656994;
case 0x656995:c.instructions+=2;goto B656995;
case 0x656996:c.instructions+=1;goto B656996;
case 0x656999:goto L656999;
case 0x65699c:c.instructions+=3;goto B65699c;
case 0x6569a1:c.instructions+=2;goto B6569a1;
case 0x6569a6:c.instructions+=1;goto B6569a6;
case 0x6569a8:goto L6569a8;
case 0x6569ab:c.instructions+=3;goto B6569ab;
case 0x6569b0:c.instructions+=2;goto B6569b0;
case 0x6569b5:c.instructions+=1;goto B6569b5;
case 0x6569b7:goto L6569b7;
case 0x6569ba:c.instructions+=2;goto B6569ba;
case 0x6569bf:c.instructions+=1;goto B6569bf;
case 0x6569c0:goto L6569c0;
case 0x6569c1:c.instructions+=2;goto B6569c1;
case 0x6569c4:c.instructions+=1;goto B6569c4;
case 0x6569c9:goto L6569c9;
case 0x6569cc:goto L6569cc;
case 0x6569ce:c.instructions+=1;goto B6569ce;
case 0x6569d0:goto L6569d0;
case 0x6569d2:c.instructions+=7;goto B6569d2;
case 0x6569d3:c.instructions+=6;goto B6569d3;
case 0x6569d5:c.instructions+=5;goto B6569d5;
case 0x6569d6:c.instructions+=4;goto B6569d6;
case 0x6569d7:c.instructions+=3;goto B6569d7;
case 0x6569d9:c.instructions+=2;goto B6569d9;
case 0x6569db:c.instructions+=1;goto B6569db;
case 0x6569e0:goto L6569e0;
case 0x6569e2:c.instructions+=1;goto B6569e2;
case 0x6569e4:goto L6569e4;
case 0x6569e9:c.instructions+=4;goto B6569e9;
case 0x6569eb:c.instructions+=3;goto B6569eb;
case 0x6569ee:c.instructions+=2;goto B6569ee;
case 0x6569f0:c.instructions+=1;goto B6569f0;
case 0x6569f5:goto L6569f5;
case 0x6569f7:c.instructions+=1;goto B6569f7;
case 0x6569f9:goto L6569f9;
case 0x6569fb:goto L6569fb;
case 0x6569fd:c.instructions+=1;goto B6569fd;
case 0x6569ff:goto L6569ff;
case 0x656a01:c.instructions+=1;goto B656a01;
case 0x656a03:goto L656a03;
case 0x656a04:c.instructions+=3;goto B656a04;
case 0x656a07:c.instructions+=2;goto B656a07;
case 0x656a09:c.instructions+=1;goto B656a09;
case 0x656a0e:goto L656a0e;
case 0x656a12:goto L656a12;
case 0x656a13:c.instructions+=3;goto B656a13;
case 0x656a14:c.instructions+=2;goto B656a14;
case 0x656a15:c.instructions+=1;goto B656a15;
case 0x656a18:goto L656a18;
case 0x656a1a:c.instructions+=8;goto B656a1a;
case 0x656a1b:c.instructions+=7;goto B656a1b;
case 0x656a1d:c.instructions+=6;goto B656a1d;
case 0x656a1e:c.instructions+=5;goto B656a1e;
case 0x656a21:c.instructions+=4;goto B656a21;
case 0x656a23:c.instructions+=3;goto B656a23;
case 0x656a24:c.instructions+=2;goto B656a24;
case 0x656a26:c.instructions+=1;goto B656a26;
case 0x656a28:goto L656a28;
case 0x656a2b:c.instructions+=3;goto B656a2b;
case 0x656a2c:c.instructions+=2;goto B656a2c;
case 0x656a2f:c.instructions+=1;goto B656a2f;
case 0x656a34:goto L656a34;
case 0x656a36:c.instructions+=1;goto B656a36;
case 0x656a38:goto L656a38;
case 0x656a3d:c.instructions+=5;goto B656a3d;
case 0x656a42:c.instructions+=4;goto B656a42;
case 0x656a45:c.instructions+=3;goto B656a45;
case 0x656a46:c.instructions+=2;goto B656a46;
case 0x656a47:c.instructions+=1;goto B656a47;
case 0x656a4c:goto L656a4c;
case 0x656a4f:c.instructions+=1;goto B656a4f;
case 0x656a51:goto L656a51;
case 0x656a55:c.instructions+=1;goto B656a55;
case 0x656a57:goto L656a57;
case 0x656a5b:c.instructions+=1;goto B656a5b;
case 0x656a5d:goto L656a5d;
case 0x656a5f:c.instructions+=1;goto B656a5f;
case 0x656a64:goto L656a64;
case 0x656a66:c.instructions+=1;goto B656a66;
case 0x656a68:goto L656a68;
case 0x656a6a:c.instructions+=6;goto B656a6a;
case 0x656a6d:c.instructions+=5;goto B656a6d;
case 0x656a6f:c.instructions+=4;goto B656a6f;
case 0x656a71:c.instructions+=3;goto B656a71;
case 0x656a74:c.instructions+=2;goto B656a74;
case 0x656a76:c.instructions+=1;goto B656a76;
case 0x656a7b:goto L656a7b;
case 0x656a7d:goto L656a7d;
case 0x656a7f:c.instructions+=6;goto B656a7f;
case 0x656a84:c.instructions+=5;goto B656a84;
case 0x656a89:c.instructions+=4;goto B656a89;
case 0x656a8c:c.instructions+=3;goto B656a8c;
case 0x656a8d:c.instructions+=2;goto B656a8d;
case 0x656a8e:c.instructions+=1;goto B656a8e;
case 0x656a93:goto L656a93;
case 0x656a96:goto L656a96;
case 0x656a98:goto L656a98;
case 0x656a99:c.instructions+=3;goto B656a99;
case 0x656a9a:c.instructions+=2;goto B656a9a;
case 0x656a9b:c.instructions+=1;goto B656a9b;
case 0x656a9e:goto L656a9e;
case 0x656aa0:c.instructions+=8;goto B656aa0;
case 0x656aa1:c.instructions+=7;goto B656aa1;
case 0x656aa3:c.instructions+=6;goto B656aa3;
case 0x656aa4:c.instructions+=5;goto B656aa4;
case 0x656aa5:c.instructions+=4;goto B656aa5;
case 0x656aa8:c.instructions+=3;goto B656aa8;
case 0x656aaa:c.instructions+=2;goto B656aaa;
case 0x656aac:c.instructions+=1;goto B656aac;
case 0x656ab2:goto L656ab2;
case 0x656ab5:c.instructions+=3;goto B656ab5;
case 0x656ab6:c.instructions+=2;goto B656ab6;
case 0x656ab9:c.instructions+=1;goto B656ab9;
case 0x656abe:goto L656abe;
case 0x656ac0:c.instructions+=1;goto B656ac0;
case 0x656ac2:goto L656ac2;
case 0x656ac5:c.instructions+=4;goto B656ac5;
case 0x656ac6:c.instructions+=3;goto B656ac6;
case 0x656ac9:c.instructions+=2;goto B656ac9;
case 0x656acb:c.instructions+=1;goto B656acb;
case 0x656ad0:goto L656ad0;
case 0x656ad2:c.instructions+=1;goto B656ad2;
case 0x656ad4:goto L656ad4;
case 0x656ad8:c.instructions+=1;goto B656ad8;
case 0x656ada:goto L656ada;
case 0x656ade:c.instructions+=1;goto B656ade;
case 0x656ae0:goto L656ae0;
case 0x656ae4:c.instructions+=1;goto B656ae4;
case 0x656ae6:goto L656ae6;
case 0x656aea:c.instructions+=1;goto B656aea;
case 0x656aec:goto L656aec;
case 0x656aee:c.instructions+=1;goto B656aee;
case 0x656af3:goto L656af3;
case 0x656af5:c.instructions+=1;goto B656af5;
case 0x656af7:goto L656af7;
case 0x656af9:c.instructions+=6;goto B656af9;
case 0x656afc:c.instructions+=5;goto B656afc;
case 0x656afe:c.instructions+=4;goto B656afe;
case 0x656b01:c.instructions+=3;goto B656b01;
case 0x656b04:c.instructions+=2;goto B656b04;
case 0x656b06:c.instructions+=1;goto B656b06;
case 0x656b0b:goto L656b0b;
case 0x656b0d:goto L656b0d;
case 0x656b0f:c.instructions+=6;goto B656b0f;
case 0x656b14:c.instructions+=5;goto B656b14;
case 0x656b19:c.instructions+=4;goto B656b19;
case 0x656b1c:c.instructions+=3;goto B656b1c;
case 0x656b1d:c.instructions+=2;goto B656b1d;
case 0x656b1e:c.instructions+=1;goto B656b1e;
case 0x656b23:goto L656b23;
case 0x656b26:c.instructions+=1;goto B656b26;
case 0x656b28:goto L656b28;
case 0x656b2d:c.instructions+=5;goto B656b2d;
case 0x656b32:c.instructions+=4;goto B656b32;
case 0x656b35:c.instructions+=3;goto B656b35;
case 0x656b36:c.instructions+=2;goto B656b36;
case 0x656b37:c.instructions+=1;goto B656b37;
case 0x656b3c:goto L656b3c;
case 0x656b3f:goto L656b3f;
case 0x656b41:goto L656b41;
case 0x656b42:c.instructions+=3;goto B656b42;
case 0x656b43:c.instructions+=2;goto B656b43;
case 0x656b44:c.instructions+=1;goto B656b44;
case 0x656b47:goto L656b47;
case 0x656b49:c.instructions+=8;goto B656b49;
case 0x656b4a:c.instructions+=7;goto B656b4a;
case 0x656b4c:c.instructions+=6;goto B656b4c;
case 0x656b4d:c.instructions+=5;goto B656b4d;
case 0x656b50:c.instructions+=4;goto B656b50;
case 0x656b51:c.instructions+=3;goto B656b51;
case 0x656b54:c.instructions+=2;goto B656b54;
case 0x656b56:c.instructions+=1;goto B656b56;
case 0x656b5b:goto L656b5b;
case 0x656b5d:c.instructions+=1;goto B656b5d;
case 0x656b5f:goto L656b5f;
case 0x656b64:c.instructions+=4;goto B656b64;
case 0x656b69:c.instructions+=3;goto B656b69;
case 0x656b6b:c.instructions+=2;goto B656b6b;
case 0x656b6c:c.instructions+=1;goto B656b6c;
case 0x656b71:goto L656b71;
case 0x656b74:c.instructions+=1;goto B656b74;
case 0x656b76:goto L656b76;
case 0x656b78:c.instructions+=1;goto B656b78;
case 0x656b7d:goto L656b7d;
case 0x656b7f:c.instructions+=2;goto B656b7f;
case 0x656b81:c.instructions+=1;goto B656b81;
case 0x656b83:goto L656b83;
case 0x656b86:c.instructions+=3;goto B656b86;
case 0x656b88:c.instructions+=2;goto B656b88;
case 0x656b89:c.instructions+=1;goto B656b89;
case 0x656b8e:goto L656b8e;
case 0x656b90:goto L656b90;
case 0x656b92:goto L656b92;
case 0x656b94:c.instructions+=1;goto B656b94;
case 0x656b96:goto L656b96;
case 0x656b98:c.instructions+=1;goto B656b98;
case 0x656b9a:goto L656b9a;
case 0x656b9d:c.instructions+=2;goto B656b9d;
case 0x656ba0:c.instructions+=1;goto B656ba0;
case 0x656ba2:goto L656ba2;
case 0x656ba4:c.instructions+=2;goto B656ba4;
case 0x656ba8:c.instructions+=1;goto B656ba8;
case 0x656baa:goto L656baa;
case 0x656bad:c.instructions+=2;goto B656bad;
case 0x656baf:c.instructions+=1;goto B656baf;
case 0x656bb1:goto L656bb1;
case 0x656bb3:c.instructions+=3;goto B656bb3;
case 0x656bb6:c.instructions+=2;goto B656bb6;
case 0x656bb8:c.instructions+=1;goto B656bb8;
case 0x656bbb:goto L656bbb;
case 0x656bbc:c.instructions+=2;goto B656bbc;
case 0x656bbd:c.instructions+=1;goto B656bbd;
case 0x656bc0:goto L656bc0;
case 0x656bc2:c.instructions+=11;goto B656bc2;
case 0x656bc3:c.instructions+=10;goto B656bc3;
case 0x656bc5:c.instructions+=9;goto B656bc5;
case 0x656bc8:c.instructions+=8;goto B656bc8;
case 0x656bcb:c.instructions+=7;goto B656bcb;
case 0x656bcc:c.instructions+=6;goto B656bcc;
case 0x656bcd:c.instructions+=5;goto B656bcd;
case 0x656bcf:c.instructions+=4;goto B656bcf;
case 0x656bd1:c.instructions+=3;goto B656bd1;
case 0x656bd2:c.instructions+=2;goto B656bd2;
case 0x656bd5:c.instructions+=1;goto B656bd5;
case 0x656bdb:goto L656bdb;
case 0x656bdf:c.instructions+=1;goto B656bdf;
case 0x656be5:goto L656be5;
case 0x656be8:c.instructions+=2;goto B656be8;
case 0x656bea:c.instructions+=1;goto B656bea;
case 0x656bf0:goto L656bf0;
case 0x656bf4:c.instructions+=1;goto B656bf4;
case 0x656bfa:goto L656bfa;
case 0x656bfd:c.instructions+=3;goto B656bfd;
case 0x656bff:c.instructions+=2;goto B656bff;
case 0x656c02:c.instructions+=1;goto B656c02;
case 0x656c07:goto L656c07;
case 0x656c09:c.instructions+=3;goto B656c09;
case 0x656c0a:c.instructions+=2;goto B656c0a;
case 0x656c0c:c.instructions+=1;goto B656c0c;
case 0x656c0e:goto L656c0e;
case 0x656c0f:c.instructions+=7;goto B656c0f;
case 0x656c10:c.instructions+=6;goto B656c10;
case 0x656c11:c.instructions+=5;goto B656c11;
case 0x656c12:c.instructions+=4;goto B656c12;
case 0x656c14:c.instructions+=3;goto B656c14;
case 0x656c15:c.instructions+=2;goto B656c15;
case 0x656c17:c.instructions+=1;goto B656c17;
case 0x656c1c:goto L656c1c;
case 0x656c1e:c.instructions+=1;goto B656c1e;
case 0x656c20:goto L656c20;
case 0x656c22:goto L656c22;
case 0x656c24:c.instructions+=1;goto B656c24;
case 0x656c2a:goto L656c2a;
case 0x656c2d:c.instructions+=6;goto B656c2d;
case 0x656c30:c.instructions+=5;goto B656c30;
case 0x656c32:c.instructions+=4;goto B656c32;
case 0x656c35:c.instructions+=3;goto B656c35;
case 0x656c38:c.instructions+=2;goto B656c38;
case 0x656c3b:c.instructions+=1;goto B656c3b;
case 0x656c41:goto L656c41;
case 0x656c44:c.instructions+=2;goto B656c44;
case 0x656c47:c.instructions+=1;goto B656c47;
case 0x656c49:goto L656c49;
case 0x656c4d:c.instructions+=1;goto B656c4d;
case 0x656c4f:goto L656c4f;
case 0x656c52:c.instructions+=2;goto B656c52;
case 0x656c54:c.instructions+=1;goto B656c54;
case 0x656c57:goto L656c57;
case 0x656c59:c.instructions+=2;goto B656c59;
case 0x656c5c:c.instructions+=1;goto B656c5c;
case 0x656c62:goto L656c62;
case 0x656c65:c.instructions+=1;goto B656c65;
case 0x656c6a:goto L656c6a;
case 0x656c6d:c.instructions+=1;goto B656c6d;
case 0x656c73:goto L656c73;
case 0x656c76:c.instructions+=1;goto B656c76;
case 0x656c78:goto L656c78;
case 0x656c7a:c.instructions+=1;goto B656c7a;
case 0x656c7f:goto L656c7f;
case 0x656c81:c.instructions+=1;goto B656c81;
case 0x656c83:goto L656c83;
case 0x656c86:c.instructions+=8;goto B656c86;
case 0x656c8c:c.instructions+=7;goto B656c8c;
case 0x656c8d:c.instructions+=6;goto B656c8d;
case 0x656c8e:c.instructions+=5;goto B656c8e;
case 0x656c8f:c.instructions+=4;goto B656c8f;
case 0x656c92:c.instructions+=3;goto B656c92;
case 0x656c94:c.instructions+=2;goto B656c94;
case 0x656c96:c.instructions+=1;goto B656c96;
case 0x656c9b:goto L656c9b;
case 0x656c9d:goto L656c9d;
case 0x656c9f:goto L656c9f;
case 0x656ca1:c.instructions+=2;goto B656ca1;
case 0x656ca4:c.instructions+=1;goto B656ca4;
case 0x656caa:goto L656caa;
case 0x656cad:c.instructions+=1;goto B656cad;
case 0x656caf:goto L656caf;
case 0x656cb2:c.instructions+=1;goto B656cb2;
case 0x656cb8:goto L656cb8;
case 0x656cbc:c.instructions+=1;goto B656cbc;
case 0x656cc2:goto L656cc2;
case 0x656cc4:c.instructions+=1;goto B656cc4;
case 0x656cc9:goto L656cc9;
case 0x656ccb:c.instructions+=1;goto B656ccb;
case 0x656ccd:goto L656ccd;
case 0x656cd0:c.instructions+=8;goto B656cd0;
case 0x656cd6:c.instructions+=7;goto B656cd6;
case 0x656cd7:c.instructions+=6;goto B656cd7;
case 0x656cda:c.instructions+=5;goto B656cda;
case 0x656cdc:c.instructions+=4;goto B656cdc;
case 0x656cdd:c.instructions+=3;goto B656cdd;
case 0x656ce0:c.instructions+=2;goto B656ce0;
case 0x656ce1:c.instructions+=1;goto B656ce1;
case 0x656ce6:goto L656ce6;
case 0x656ce8:goto L656ce8;
case 0x656cea:goto L656cea;
case 0x656cec:c.instructions+=2;goto B656cec;
case 0x656cef:c.instructions+=1;goto B656cef;
case 0x656cf5:goto L656cf5;
case 0x656cf8:goto L656cf8;
case 0x656cfb:c.instructions+=3;goto B656cfb;
case 0x656cfe:c.instructions+=2;goto B656cfe;
case 0x656d00:c.instructions+=1;goto B656d00;
case 0x656d05:goto L656d05;
case 0x656d07:c.instructions+=1;goto B656d07;
case 0x656d09:goto L656d09;
case 0x656d0e:c.instructions+=4;goto B656d0e;
case 0x656d13:c.instructions+=3;goto B656d13;
case 0x656d16:c.instructions+=2;goto B656d16;
case 0x656d17:c.instructions+=1;goto B656d17;
case 0x656d1c:goto L656d1c;
case 0x656d1f:c.instructions+=2;goto B656d1f;
case 0x656d21:c.instructions+=1;goto B656d21;
case 0x656d24:goto L656d24;
case 0x656d26:c.instructions+=2;goto B656d26;
case 0x656d29:c.instructions+=1;goto B656d29;
case 0x656d2f:goto L656d2f;
case 0x656d32:c.instructions+=2;goto B656d32;
case 0x656d34:c.instructions+=1;goto B656d34;
case 0x656d39:goto L656d39;
case 0x656d3b:c.instructions+=1;goto B656d3b;
case 0x656d3d:goto L656d3d;
case 0x656d40:c.instructions+=4;goto B656d40;
case 0x656d41:c.instructions+=3;goto B656d41;
case 0x656d44:c.instructions+=2;goto B656d44;
case 0x656d46:c.instructions+=1;goto B656d46;
case 0x656d4b:goto L656d4b;
case 0x656d4d:c.instructions+=1;goto B656d4d;
case 0x656d53:goto L656d53;
case 0x656d56:c.instructions+=1;goto B656d56;
case 0x656d58:goto L656d58;
case 0x656d5d:c.instructions+=4;goto B656d5d;
case 0x656d62:c.instructions+=3;goto B656d62;
case 0x656d65:c.instructions+=2;goto B656d65;
case 0x656d66:c.instructions+=1;goto B656d66;
case 0x656d6b:goto L656d6b;
case 0x656d6e:c.instructions+=1;goto B656d6e;
case 0x656d72:goto L656d72;
case 0x656d75:c.instructions+=2;goto B656d75;
case 0x656d77:c.instructions+=1;goto B656d77;
case 0x656d7c:goto L656d7c;
case 0x656d7e:c.instructions+=2;goto B656d7e;
case 0x656d80:c.instructions+=1;goto B656d80;
case 0x656d85:goto L656d85;
case 0x656d87:c.instructions+=1;goto B656d87;
case 0x656d89:goto L656d89;
case 0x656d8d:c.instructions+=5;goto B656d8d;
case 0x656d90:c.instructions+=4;goto B656d90;
case 0x656d92:c.instructions+=3;goto B656d92;
case 0x656d93:c.instructions+=2;goto B656d93;
case 0x656d95:c.instructions+=1;goto B656d95;
case 0x656d9a:goto L656d9a;
case 0x656d9c:goto L656d9c;
case 0x656d9e:goto L656d9e;
case 0x656da0:c.instructions+=2;goto B656da0;
case 0x656da3:c.instructions+=1;goto B656da3;
case 0x656da5:goto L656da5;
case 0x656dac:c.instructions+=1;goto B656dac;
case 0x656dae:goto L656dae;
case 0x656db1:c.instructions+=1;goto B656db1;
case 0x656db6:goto L656db6;
case 0x656db8:c.instructions+=2;goto B656db8;
case 0x656dbb:c.instructions+=1;goto B656dbb;
case 0x656dbd:goto L656dbd;
case 0x656dbe:c.instructions+=2;goto B656dbe;
case 0x656dc0:c.instructions+=1;goto B656dc0;
case 0x656dc5:goto L656dc5;
case 0x656dc7:c.instructions+=1;goto B656dc7;
case 0x656dc9:goto L656dc9;
case 0x656dce:c.instructions+=3;goto B656dce;
case 0x656dd3:c.instructions+=2;goto B656dd3;
case 0x656dd6:c.instructions+=1;goto B656dd6;
case 0x656dd9:goto L656dd9;
case 0x656dde:goto L656dde;
case 0x656de1:goto L656de1;
case 0x656de3:goto L656de3;
case 0x656de4:c.instructions+=4;goto B656de4;
case 0x656de5:c.instructions+=3;goto B656de5;
case 0x656de6:c.instructions+=2;goto B656de6;
case 0x656de7:c.instructions+=1;goto B656de7;
case 0x656dea:goto L656dea;
case 0x656dec:c.instructions+=14;goto B656dec;
case 0x656ded:c.instructions+=13;goto B656ded;
case 0x656def:c.instructions+=12;goto B656def;
case 0x656df2:c.instructions+=11;goto B656df2;
case 0x656df3:c.instructions+=10;goto B656df3;
case 0x656df6:c.instructions+=9;goto B656df6;
case 0x656df7:c.instructions+=8;goto B656df7;
case 0x656df9:c.instructions+=7;goto B656df9;
case 0x656dfb:c.instructions+=6;goto B656dfb;
case 0x656dfe:c.instructions+=5;goto B656dfe;
case 0x656e01:c.instructions+=4;goto B656e01;
case 0x656e04:c.instructions+=3;goto B656e04;
case 0x656e07:c.instructions+=2;goto B656e07;
case 0x656e0a:c.instructions+=1;goto B656e0a;
case 0x656e0c:goto L656e0c;
case 0x656e10:c.instructions+=1;goto B656e10;
case 0x656e12:goto L656e12;
case 0x656e15:c.instructions+=2;goto B656e15;
case 0x656e17:c.instructions+=1;goto B656e17;
case 0x656e19:goto L656e19;
case 0x656e1d:c.instructions+=1;goto B656e1d;
case 0x656e1f:goto L656e1f;
case 0x656e21:c.instructions+=1;goto B656e21;
case 0x656e26:goto L656e26;
case 0x656e29:goto L656e29;
case 0x656e2c:c.instructions+=1;goto B656e2c;
case 0x656e2e:goto L656e2e;
case 0x656e30:c.instructions+=1;goto B656e30;
case 0x656e32:goto L656e32;
case 0x656e35:c.instructions+=1;goto B656e35;
case 0x656e37:goto L656e37;
case 0x656e3a:c.instructions+=1;goto B656e3a;
case 0x656e3d:goto L656e3d;
case 0x656e3e:c.instructions+=2;goto B656e3e;
case 0x656e40:c.instructions+=1;goto B656e40;
case 0x656e45:goto L656e45;
case 0x656e47:c.instructions+=2;goto B656e47;
case 0x656e4a:c.instructions+=1;goto B656e4a;
case 0x656e4c:goto L656e4c;
case 0x656e4f:c.instructions+=8;goto B656e4f;
case 0x656e51:c.instructions+=7;goto B656e51;
case 0x656e54:c.instructions+=6;goto B656e54;
case 0x656e55:c.instructions+=5;goto B656e55;
case 0x656e56:c.instructions+=4;goto B656e56;
case 0x656e57:c.instructions+=3;goto B656e57;
case 0x656e58:c.instructions+=2;goto B656e58;
case 0x656e5a:c.instructions+=1;goto B656e5a;
case 0x656e5f:goto L656e5f;
case 0x656e61:c.instructions+=1;goto B656e61;
case 0x656e63:goto L656e63;
case 0x656e65:goto L656e65;
case 0x656e67:c.instructions+=1;goto B656e67;
case 0x656e69:goto L656e69;
case 0x656e6b:c.instructions+=1;goto B656e6b;
case 0x656e70:goto L656e70;
case 0x656e72:c.instructions+=1;goto B656e72;
case 0x656e74:goto L656e74;
case 0x656e76:c.instructions+=2;goto B656e76;
case 0x656e78:c.instructions+=1;goto B656e78;
case 0x656e7b:goto L656e7b;
case 0x656e7d:c.instructions+=2;goto B656e7d;
case 0x656e80:c.instructions+=1;goto B656e80;
case 0x656e86:goto L656e86;
case 0x656e89:c.instructions+=3;goto B656e89;
case 0x656e8b:c.instructions+=2;goto B656e8b;
case 0x656e8c:c.instructions+=1;goto B656e8c;
case 0x656e8e:goto L656e8e;
case 0x656e91:c.instructions+=1;goto B656e91;
case 0x656e93:goto L656e93;
case 0x656e96:c.instructions+=1;goto B656e96;
case 0x656e98:goto L656e98;
case 0x656e9b:c.instructions+=1;goto B656e9b;
case 0x656e9d:goto L656e9d;
case 0x656ea0:c.instructions+=1;goto B656ea0;
case 0x656ea2:goto L656ea2;
case 0x656ea5:c.instructions+=1;goto B656ea5;
case 0x656ea7:goto L656ea7;
case 0x656eaa:c.instructions+=1;goto B656eaa;
case 0x656eac:goto L656eac;
case 0x656eb0:c.instructions+=1;goto B656eb0;
case 0x656eb2:goto L656eb2;
case 0x656eb5:c.instructions+=2;goto B656eb5;
case 0x656eb7:c.instructions+=1;goto B656eb7;
case 0x656eba:goto L656eba;
case 0x656ebc:c.instructions+=2;goto B656ebc;
case 0x656ebf:c.instructions+=1;goto B656ebf;
case 0x656ec1:goto L656ec1;
case 0x656ec6:goto L656ec6;
case 0x656ec8:c.instructions+=2;goto B656ec8;
case 0x656ecb:c.instructions+=1;goto B656ecb;
case 0x656ecd:goto L656ecd;
case 0x656ece:c.instructions+=1;goto B656ece;
case 0x656ed0:goto L656ed0;
case 0x656ed1:c.instructions+=1;goto B656ed1;
case 0x656ed3:goto L656ed3;
case 0x656ed4:c.instructions+=1;goto B656ed4;
case 0x656ed6:goto L656ed6;
case 0x656ed7:c.instructions+=1;goto B656ed7;
case 0x656ed9:goto L656ed9;
case 0x656eda:c.instructions+=1;goto B656eda;
case 0x656edc:goto L656edc;
case 0x656edd:c.instructions+=1;goto B656edd;
case 0x656edf:goto L656edf;
case 0x656ee1:c.instructions+=3;goto B656ee1;
case 0x656ee2:c.instructions+=2;goto B656ee2;
case 0x656ee4:c.instructions+=1;goto B656ee4;
case 0x656ee6:goto L656ee6;
case 0x656ee8:c.instructions+=3;goto B656ee8;
case 0x656ee9:c.instructions+=2;goto B656ee9;
case 0x656eeb:c.instructions+=1;goto B656eeb;
case 0x656eed:goto L656eed;
case 0x656eef:c.instructions+=1;goto B656eef;
case 0x656ef1:goto L656ef1;
case 0x656ef3:c.instructions+=1;goto B656ef3;
case 0x656ef5:goto L656ef5;
case 0x656ef7:c.instructions+=1;goto B656ef7;
case 0x656ef9:goto L656ef9;
case 0x656efb:c.instructions+=1;goto B656efb;
case 0x656efd:goto L656efd;
case 0x656eff:goto L656eff;
case 0x656f01:goto L656f01;
case 0x656f02:c.instructions+=1;goto B656f02;
case 0x656f04:goto L656f04;
case 0x656f07:goto L656f07;
case 0x656f0a:c.instructions+=5;goto B656f0a;
case 0x656f0c:c.instructions+=4;goto B656f0c;
case 0x656f0f:c.instructions+=3;goto B656f0f;
case 0x656f10:c.instructions+=2;goto B656f10;
case 0x656f11:c.instructions+=1;goto B656f11;
case 0x656f16:goto L656f16;
case 0x656f18:c.instructions+=2;goto B656f18;
case 0x656f1b:c.instructions+=1;goto B656f1b;
case 0x656f21:goto L656f21;
case 0x656f24:goto L656f24;
case 0x656f27:c.instructions+=2;goto B656f27;
case 0x656f29:c.instructions+=1;goto B656f29;
case 0x656f2b:goto L656f2b;
case 0x656f2e:c.instructions+=3;goto B656f2e;
case 0x656f31:c.instructions+=2;goto B656f31;
case 0x656f34:c.instructions+=1;goto B656f34;
case 0x656f36:goto L656f36;
case 0x656f39:goto L656f39;
case 0x656f3b:c.instructions+=1;goto B656f3b;
case 0x656f3d:goto L656f3d;
case 0x656f40:c.instructions+=1;goto B656f40;
case 0x656f42:goto L656f42;
case 0x656f45:c.instructions+=1;goto B656f45;
case 0x656f47:goto L656f47;
case 0x656f4a:c.instructions+=1;goto B656f4a;
case 0x656f4c:goto L656f4c;
case 0x656f4f:c.instructions+=1;goto B656f4f;
case 0x656f51:goto L656f51;
case 0x656f54:c.instructions+=1;goto B656f54;
case 0x656f56:goto L656f56;
case 0x656f58:c.instructions+=1;goto B656f58;
case 0x656f5a:goto L656f5a;
case 0x656f5d:c.instructions+=2;goto B656f5d;
case 0x656f61:c.instructions+=1;goto B656f61;
case 0x656f63:goto L656f63;
case 0x656f66:c.instructions+=2;goto B656f66;
case 0x656f67:c.instructions+=1;goto B656f67;
case 0x656f6c:goto L656f6c;
case 0x656f6e:c.instructions+=1;goto B656f6e;
case 0x656f70:goto L656f70;
case 0x656f75:c.instructions+=2;goto B656f75;
case 0x656f7a:c.instructions+=1;goto B656f7a;
case 0x656f7f:goto L656f7f;
case 0x656f82:c.instructions+=1;goto B656f82;
case 0x656f84:goto L656f84;
case 0x656f87:c.instructions+=1;goto B656f87;
case 0x656f89:goto L656f89;
case 0x656f8c:c.instructions+=1;goto B656f8c;
case 0x656f8e:goto L656f8e;
case 0x656f91:c.instructions+=1;goto B656f91;
case 0x656f93:goto L656f93;
case 0x656f96:c.instructions+=3;goto B656f96;
case 0x656f99:c.instructions+=2;goto B656f99;
case 0x656f9a:c.instructions+=1;goto B656f9a;
case 0x656f9f:goto L656f9f;
case 0x656fa1:c.instructions+=1;goto B656fa1;
case 0x656fa7:goto L656fa7;
case 0x656faa:c.instructions+=3;goto B656faa;
case 0x656fad:c.instructions+=2;goto B656fad;
case 0x656faf:c.instructions+=1;goto B656faf;
case 0x656fb4:goto L656fb4;
case 0x656fb6:c.instructions+=1;goto B656fb6;
case 0x656fbc:goto L656fbc;
case 0x656fbf:c.instructions+=3;goto B656fbf;
case 0x656fc2:c.instructions+=2;goto B656fc2;
case 0x656fc5:c.instructions+=1;goto B656fc5;
case 0x656fc7:goto L656fc7;
case 0x656fca:c.instructions+=1;goto B656fca;
case 0x656fcc:goto L656fcc;
case 0x656fcf:c.instructions+=2;goto B656fcf;
case 0x656fd0:c.instructions+=1;goto B656fd0;
case 0x656fd5:goto L656fd5;
case 0x656fd7:c.instructions+=1;goto B656fd7;
case 0x656fd9:goto L656fd9;
case 0x656fde:c.instructions+=2;goto B656fde;
case 0x656fe3:c.instructions+=1;goto B656fe3;
case 0x656fe8:goto L656fe8;
case 0x656feb:goto L656feb;
case 0x656fee:c.instructions+=2;goto B656fee;
case 0x656ff0:c.instructions+=1;goto B656ff0;
case 0x656ff2:goto L656ff2;
case 0x656ff5:c.instructions+=2;goto B656ff5;
case 0x656ff8:c.instructions+=1;goto B656ff8;
case 0x656ffb:goto L656ffb;
case 0x656ffe:c.instructions+=1;goto B656ffe;
default:missing_instruction(c.pc);}
B656002:L656002:{c.instructions+=3;NFSU2_TR(0x656002);
__builtin_memmove((R+24),(R+0),4);
}
B656004:{NFSU2_TR(0x656004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656005:{NFSU2_TR(0x656005);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656007:L656007:{c.instructions+=1;NFSU2_TR(0x656007);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656009;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656007u);}goto L656007;}}
}
B656009:L656009:{c.instructions+=1;NFSU2_TR(0x656009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656015;}}
}
B65600b:L65600b:{c.instructions+=2;NFSU2_TR(0x65600b);
w4(R+0,u32(0x12eull));
}
B656010:{NFSU2_TR(0x656010);
TAIL_STATIC(0x6557e9u,655);
}
B656015:L656015:{c.instructions+=5;NFSU2_TR(0x656015);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656017:{NFSU2_TR(0x656017);
w4(R+28,u32(0x7b3db0ull));
}
B65601c:{NFSU2_TR(0x65601c);
__builtin_memmove((R+24),(R+0),4);
}
B65601e:{NFSU2_TR(0x65601e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65601f:{NFSU2_TR(0x65601f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656021:L656021:{c.instructions+=1;NFSU2_TR(0x656021);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656023;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656021u);}goto L656021;}}
}
B656023:L656023:{c.instructions+=1;NFSU2_TR(0x656023);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65602f;}}
}
B656025:L656025:{c.instructions+=2;NFSU2_TR(0x656025);
w4(R+0,u32(0x12full));
}
B65602a:{NFSU2_TR(0x65602a);
TAIL_STATIC(0x6557e9u,655);
}
B65602f:L65602f:{c.instructions+=5;NFSU2_TR(0x65602f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656031:{NFSU2_TR(0x656031);
w4(R+28,u32(0x7b3da4ull));
}
B656036:{NFSU2_TR(0x656036);
__builtin_memmove((R+24),(R+0),4);
}
B656038:{NFSU2_TR(0x656038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656039:{NFSU2_TR(0x656039);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65603b:L65603b:{c.instructions+=1;NFSU2_TR(0x65603b);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65603d;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65603bu);}goto L65603b;}}
}
B65603d:L65603d:{c.instructions+=1;NFSU2_TR(0x65603d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656049;}}
}
B65603f:L65603f:{c.instructions+=2;NFSU2_TR(0x65603f);
w4(R+0,u32(0x130ull));
}
B656044:{NFSU2_TR(0x656044);
TAIL_STATIC(0x6557e9u,655);
}
B656049:L656049:{c.instructions+=5;NFSU2_TR(0x656049);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65604b:{NFSU2_TR(0x65604b);
w4(R+28,u32(0x7b4474ull));
}
B656050:{NFSU2_TR(0x656050);
__builtin_memmove((R+24),(R+0),4);
}
B656052:{NFSU2_TR(0x656052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656053:{NFSU2_TR(0x656053);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656055:L656055:{c.instructions+=1;NFSU2_TR(0x656055);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656057;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656055u);}goto L656055;}}
}
B656057:L656057:{c.instructions+=1;NFSU2_TR(0x656057);
if(r1(R+518)){{goto L65617c;}}
}
B65605d:L65605d:{c.instructions+=5;NFSU2_TR(0x65605d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65605f:{NFSU2_TR(0x65605f);
w4(R+28,u32(0x7b446cull));
}
B656064:{NFSU2_TR(0x656064);
__builtin_memmove((R+24),(R+0),4);
}
B656066:{NFSU2_TR(0x656066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656067:{NFSU2_TR(0x656067);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656069:L656069:{c.instructions+=1;NFSU2_TR(0x656069);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65606b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656069u);}goto L656069;}}
}
B65606b:L65606b:{c.instructions+=1;NFSU2_TR(0x65606b);
if(r1(R+518)){{goto L65617c;}}
}
B656071:L656071:{c.instructions+=5;NFSU2_TR(0x656071);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656073:{NFSU2_TR(0x656073);
w4(R+28,u32(0x7b4464ull));
}
B656078:{NFSU2_TR(0x656078);
__builtin_memmove((R+24),(R+0),4);
}
B65607a:{NFSU2_TR(0x65607a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65607b:{NFSU2_TR(0x65607b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65607d:L65607d:{c.instructions+=1;NFSU2_TR(0x65607d);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65607f;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65607du);}goto L65607d;}}
}
B65607f:L65607f:{c.instructions+=1;NFSU2_TR(0x65607f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65608b;}}
}
B656081:L656081:{c.instructions+=2;NFSU2_TR(0x656081);
w4(R+0,u32(0x131ull));
}
B656086:{NFSU2_TR(0x656086);
TAIL_STATIC(0x6557e9u,655);
}
B65608b:L65608b:{c.instructions+=5;NFSU2_TR(0x65608b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65608d:{NFSU2_TR(0x65608d);
w4(R+28,u32(0x7b4460ull));
}
B656092:{NFSU2_TR(0x656092);
__builtin_memmove((R+24),(R+0),4);
}
B656094:{NFSU2_TR(0x656094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656095:{NFSU2_TR(0x656095);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656097:L656097:{c.instructions+=1;NFSU2_TR(0x656097);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656099;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656097u);}goto L656097;}}
}
B656099:L656099:{c.instructions+=1;NFSU2_TR(0x656099);
if(r1(R+518)){{goto L65617c;}}
}
B65609f:L65609f:{c.instructions+=5;NFSU2_TR(0x65609f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6560a1:{NFSU2_TR(0x6560a1);
w4(R+28,u32(0x7b4458ull));
}
B6560a6:{NFSU2_TR(0x6560a6);
__builtin_memmove((R+24),(R+0),4);
}
B6560a8:{NFSU2_TR(0x6560a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6560a9:{NFSU2_TR(0x6560a9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6560ab:L6560ab:{c.instructions+=1;NFSU2_TR(0x6560ab);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6560ad;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6560abu);}goto L6560ab;}}
}
B6560ad:L6560ad:{c.instructions+=1;NFSU2_TR(0x6560ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6560b9;}}
}
B6560af:L6560af:{c.instructions+=2;NFSU2_TR(0x6560af);
w4(R+0,u32(0x132ull));
}
B6560b4:{NFSU2_TR(0x6560b4);
TAIL_STATIC(0x6557e9u,655);
}
B6560b9:L6560b9:{c.instructions+=5;NFSU2_TR(0x6560b9);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6560bb:{NFSU2_TR(0x6560bb);
w4(R+28,u32(0x7b444cull));
}
B6560c0:{NFSU2_TR(0x6560c0);
__builtin_memmove((R+24),(R+0),4);
}
B6560c2:{NFSU2_TR(0x6560c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6560c3:{NFSU2_TR(0x6560c3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6560c5:L6560c5:{c.instructions+=1;NFSU2_TR(0x6560c5);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6560c7;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6560c5u);}goto L6560c5;}}
}
B6560c7:L6560c7:{c.instructions+=1;NFSU2_TR(0x6560c7);
if(r1(R+518)){{goto L65617c;}}
}
B6560cd:L6560cd:{c.instructions+=2;NFSU2_TR(0x6560cd);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
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
B6560d0:{NFSU2_TR(0x6560d0);
if(r1(R+518)){TAIL_STATIC(0x655b14u,655);}
}
B6560d6:L6560d6:{c.instructions+=5;NFSU2_TR(0x6560d6);
__builtin_memmove((R+24),(R+0),4);
}
B6560d8:{NFSU2_TR(0x6560d8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6560da:{NFSU2_TR(0x6560da);
w4(R+28,u32(0x7b3dd4ull));
}
B6560df:{NFSU2_TR(0x6560df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6560e0:{NFSU2_TR(0x6560e0);
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
B6560e2:L6560e2:{c.instructions+=1;NFSU2_TR(0x6560e2);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6560e4;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6560e2u);}goto L6560e2;}}
}
B6560e4:L6560e4:{c.instructions+=1;NFSU2_TR(0x6560e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x655b14u,655);}
}
B6560ea:L6560ea:{c.instructions+=2;NFSU2_TR(0x6560ea);
w4(R+0,u32(0x12cull));
}
B6560ef:{NFSU2_TR(0x6560ef);
TAIL_STATIC(0x6557e9u,655);
}
B6560f4:L6560f4:{c.instructions+=5;NFSU2_TR(0x6560f4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6560f6:{NFSU2_TR(0x6560f6);
w4(R+28,u32(0x7b4444ull));
}
B6560fb:{NFSU2_TR(0x6560fb);
__builtin_memmove((R+24),(R+0),4);
}
B6560fd:{NFSU2_TR(0x6560fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6560fe:{NFSU2_TR(0x6560fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656100:L656100:{c.instructions+=1;NFSU2_TR(0x656100);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656102;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656100u);}goto L656100;}}
}
B656102:L656102:{c.instructions+=1;NFSU2_TR(0x656102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65610e;}}
}
B656104:L656104:{c.instructions+=2;NFSU2_TR(0x656104);
w4(R+0,u32(0x133ull));
}
B656109:{NFSU2_TR(0x656109);
TAIL_STATIC(0x6557e9u,655);
}
B65610e:L65610e:{c.instructions+=5;NFSU2_TR(0x65610e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656110:{NFSU2_TR(0x656110);
w4(R+28,u32(0x7b443cull));
}
B656115:{NFSU2_TR(0x656115);
__builtin_memmove((R+24),(R+0),4);
}
B656117:{NFSU2_TR(0x656117);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656118:{NFSU2_TR(0x656118);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65611a:L65611a:{c.instructions+=1;NFSU2_TR(0x65611a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65611c;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65611au);}goto L65611a;}}
}
B65611c:L65611c:{c.instructions+=1;NFSU2_TR(0x65611c);
if(r1(R+518)){{goto L65617c;}}
}
B65611e:L65611e:{c.instructions+=5;NFSU2_TR(0x65611e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656120:{NFSU2_TR(0x656120);
w4(R+28,u32(0x7b4430ull));
}
B656125:{NFSU2_TR(0x656125);
__builtin_memmove((R+24),(R+0),4);
}
B656127:{NFSU2_TR(0x656127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656128:{NFSU2_TR(0x656128);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65612a:L65612a:{c.instructions+=1;NFSU2_TR(0x65612a);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65612c;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65612au);}goto L65612a;}}
}
B65612c:L65612c:{c.instructions+=1;NFSU2_TR(0x65612c);
if(r1(R+518)){{goto L65617c;}}
}
B65612e:L65612e:{c.instructions+=2;NFSU2_TR(0x65612e);
w4(R+28,u32(0x7b4428ull));
}
B656133:{NFSU2_TR(0x656133);
TAIL_STATIC(0x65599cu,655);
}
B656138:L656138:{c.instructions+=5;NFSU2_TR(0x656138);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65613a:{NFSU2_TR(0x65613a);
w4(R+28,u32(0x7b41c8ull));
}
B65613f:{NFSU2_TR(0x65613f);
__builtin_memmove((R+24),(R+0),4);
}
B656141:{NFSU2_TR(0x656141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656142:{NFSU2_TR(0x656142);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656144:L656144:{c.instructions+=1;NFSU2_TR(0x656144);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656146;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656144u);}goto L656144;}}
}
B656146:L656146:{c.instructions+=1;NFSU2_TR(0x656146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656152;}}
}
B656148:L656148:{c.instructions+=2;NFSU2_TR(0x656148);
w4(R+0,u32(0x134ull));
}
B65614d:{NFSU2_TR(0x65614d);
TAIL_STATIC(0x6557e9u,655);
}
B656152:L656152:{c.instructions+=5;NFSU2_TR(0x656152);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656154:{NFSU2_TR(0x656154);
w4(R+28,u32(0x7b3d30ull));
}
B656159:{NFSU2_TR(0x656159);
__builtin_memmove((R+24),(R+0),4);
}
B65615b:{NFSU2_TR(0x65615b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65615c:{NFSU2_TR(0x65615c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B65615e:L65615e:{c.instructions+=1;NFSU2_TR(0x65615e);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656160;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65615eu);}goto L65615e;}}
}
B656160:L656160:{c.instructions+=1;NFSU2_TR(0x656160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65616c;}}
}
B656162:L656162:{c.instructions+=2;NFSU2_TR(0x656162);
w4(R+0,u32(0x135ull));
}
B656167:{NFSU2_TR(0x656167);
TAIL_STATIC(0x6557e9u,655);
}
B65616c:L65616c:{c.instructions+=5;NFSU2_TR(0x65616c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65616e:{NFSU2_TR(0x65616e);
w4(R+28,u32(0x7b4420ull));
}
B656173:{NFSU2_TR(0x656173);
__builtin_memmove((R+24),(R+0),4);
}
B656175:{NFSU2_TR(0x656175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656176:{NFSU2_TR(0x656176);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656178:L656178:{c.instructions+=1;NFSU2_TR(0x656178);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L65617a;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656178u);}goto L656178;}}
}
B65617a:L65617a:{c.instructions+=1;NFSU2_TR(0x65617a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656186;}}
}
B65617c:L65617c:{c.instructions+=2;NFSU2_TR(0x65617c);
w4(R+0,u32(0x151ull));
}
B656181:{NFSU2_TR(0x656181);
TAIL_STATIC(0x6557e9u,655);
}
B656186:L656186:{c.instructions+=5;NFSU2_TR(0x656186);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656188:{NFSU2_TR(0x656188);
w4(R+28,u32(0x7b3e10ull));
}
B65618d:{NFSU2_TR(0x65618d);
__builtin_memmove((R+24),(R+0),4);
}
B65618f:{NFSU2_TR(0x65618f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656190:{NFSU2_TR(0x656190);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656192:L656192:{c.instructions+=1;NFSU2_TR(0x656192);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L656194;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656192u);}goto L656192;}}
}
B656194:L656194:{c.instructions+=1;NFSU2_TR(0x656194);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6561a0;}}
}
B656196:L656196:{c.instructions+=2;NFSU2_TR(0x656196);
w4(R+0,u32(0x137ull));
}
B65619b:{NFSU2_TR(0x65619b);
TAIL_STATIC(0x6557e9u,655);
}
B6561a0:L6561a0:{c.instructions+=5;NFSU2_TR(0x6561a0);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6561a2:{NFSU2_TR(0x6561a2);
w4(R+28,u32(0x7b4414ull));
}
B6561a7:{NFSU2_TR(0x6561a7);
__builtin_memmove((R+24),(R+0),4);
}
B6561a9:{NFSU2_TR(0x6561a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6561aa:{NFSU2_TR(0x6561aa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6561ac:L6561ac:{c.instructions+=1;NFSU2_TR(0x6561ac);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6561ae;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6561acu);}goto L6561ac;}}
}
B6561ae:L6561ae:{c.instructions+=1;NFSU2_TR(0x6561ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6561ba;}}
}
B6561b0:L6561b0:{c.instructions+=2;NFSU2_TR(0x6561b0);
w4(R+0,u32(0x138ull));
}
B6561b5:{NFSU2_TR(0x6561b5);
TAIL_STATIC(0x6557e9u,655);
}
B6561ba:L6561ba:{c.instructions+=2;NFSU2_TR(0x6561ba);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6561be:{NFSU2_TR(0x6561be);
if(r1(R+518)){TAIL_STATIC(0x655b14u,655);}
}
B6561c4:L6561c4:{c.instructions+=5;NFSU2_TR(0x6561c4);
__builtin_memmove((R+24),(R+0),4);
}
B6561c6:{NFSU2_TR(0x6561c6);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6561c8:{NFSU2_TR(0x6561c8);
w4(R+28,u32(0x7b3d50ull));
}
B6561cd:{NFSU2_TR(0x6561cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6561ce:{NFSU2_TR(0x6561ce);
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
B6561d0:L6561d0:{c.instructions+=1;NFSU2_TR(0x6561d0);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6561d2;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6561d0u);}goto L6561d0;}}
}
B6561d2:L6561d2:{c.instructions+=1;NFSU2_TR(0x6561d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x655b14u,655);}
}
B6561d8:L6561d8:{c.instructions+=2;NFSU2_TR(0x6561d8);
w4(R+0,u32(0x136ull));
}
B6561dd:{NFSU2_TR(0x6561dd);
TAIL_STATIC(0x6557e9u,655);
}
B6561e2:L6561e2:{c.instructions+=5;NFSU2_TR(0x6561e2);
__builtin_memmove((R+24),(R+0),4);
}
B6561e4:{NFSU2_TR(0x6561e4);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6561e6:{NFSU2_TR(0x6561e6);
w4(R+28,u32(0x7b440cull));
}
B6561eb:{NFSU2_TR(0x6561eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6561ec:{NFSU2_TR(0x6561ec);
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
B6561ee:L6561ee:{c.instructions+=1;NFSU2_TR(0x6561ee);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6561f0;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6561eeu);}goto L6561ee;}}
}
B6561f0:L6561f0:{c.instructions+=1;NFSU2_TR(0x6561f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x655b14u,655);}
}
B6561f6:L6561f6:{c.instructions+=2;NFSU2_TR(0x6561f6);
w4(R+0,u32(0x139ull));
}
B6561fb:{NFSU2_TR(0x6561fb);
TAIL_STATIC(0x6557e9u,655);
}
B656200:L656200:{c.instructions+=3;NFSU2_TR(0x656200);
u8 U[4];
w4(U+0,u32(0x7b4170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656205:{NFSU2_TR(0x656205);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656208:{NFSU2_TR(0x656208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65620dull));
TAIL_STATIC(0x75dd6fu,75d);
}
B65620d:L65620d:{c.instructions+=4;NFSU2_TR(0x65620d);
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
B65620f:{NFSU2_TR(0x65620f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656210:{NFSU2_TR(0x656210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656211:{NFSU2_TR(0x656211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656257;}}
}
B656213:L656213:{c.instructions+=2;NFSU2_TR(0x656213);
w4(R+0,u32(0x119ull));
}
B656218:{NFSU2_TR(0x656218);
TAIL_STATIC(0x6557e9u,655);
}
B65621d:L65621d:{c.instructions+=3;NFSU2_TR(0x65621d);
u8 U[4];
w4(U+0,u32(0x7b4404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656222:{NFSU2_TR(0x656222);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656225:{NFSU2_TR(0x656225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65622aull));
TAIL_STATIC(0x75dd6fu,75d);
}
B65622a:L65622a:{c.instructions+=4;NFSU2_TR(0x65622a);
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
B65622c:{NFSU2_TR(0x65622c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65622d:{NFSU2_TR(0x65622d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65622e:{NFSU2_TR(0x65622e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656257;}}
}
B656230:L656230:{c.instructions+=2;NFSU2_TR(0x656230);
w4(R+0,u32(0x108ull));
}
B656235:{NFSU2_TR(0x656235);
TAIL_STATIC(0x6557e9u,655);
}
B65623a:L65623a:{c.instructions+=3;NFSU2_TR(0x65623a);
u8 U[4];
w4(U+0,u32(0x7b4400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65623f:{NFSU2_TR(0x65623f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656242:{NFSU2_TR(0x656242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656247ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B656247:L656247:{c.instructions+=4;NFSU2_TR(0x656247);
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
B656249:{NFSU2_TR(0x656249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65624a:{NFSU2_TR(0x65624a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B65624b:{NFSU2_TR(0x65624b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656257;}}
}
B65624d:L65624d:{c.instructions+=2;NFSU2_TR(0x65624d);
w4(R+0,u32(0x101ull));
}
B656252:{NFSU2_TR(0x656252);
TAIL_STATIC(0x6557e9u,655);
}
B656257:L656257:{c.instructions+=12;NFSU2_TR(0x656257);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656259:{NFSU2_TR(0x656259);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65625a:{NFSU2_TR(0x65625a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65625b:{NFSU2_TR(0x65625b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65625c:{NFSU2_TR(0x65625c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65625f:{NFSU2_TR(0x65625f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656262:{NFSU2_TR(0x656262);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656263:{NFSU2_TR(0x656263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656264:{NFSU2_TR(0x656264);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656265:{NFSU2_TR(0x656265);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656266:{NFSU2_TR(0x656266);
__builtin_memmove((R+4),(R+12),4);
}
B656268:{NFSU2_TR(0x656268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65626dull));
TAIL_STATIC(0x6540dfu,654);
}
B65626d:L65626d:{c.instructions+=5;NFSU2_TR(0x65626d);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B65626f:{NFSU2_TR(0x65626f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B656271:{NFSU2_TR(0x656271);
w4(R+0,u32(0-u32(r4(R+0))));
}
B656273:{NFSU2_TR(0x656273);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x14full)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x14full)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B656278:{NFSU2_TR(0x656278);
TAIL_STATIC(0x6557e9u,655);
}
B65627d:L65627d:{c.instructions+=2;NFSU2_TR(0x65627d);
w4(R+0,u32(0x14eull));
}
B656282:{NFSU2_TR(0x656282);
TAIL_STATIC(0x6557e9u,655);
}
B65631b:L65631b:{c.instructions+=10;NFSU2_TR(0x65631b);
__builtin_memmove((R+28),(R+28),4);
}
B65631d:{NFSU2_TR(0x65631d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65631e:{NFSU2_TR(0x65631e);
__builtin_memmove((R+20),(R+16),4);
}
B656320:{NFSU2_TR(0x656320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B656323:{NFSU2_TR(0x656323);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B656327:{NFSU2_TR(0x656327);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656328:{NFSU2_TR(0x656328);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656329:{NFSU2_TR(0x656329);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65632a:{NFSU2_TR(0x65632a);
__builtin_memmove((R+28),(R+4),4);
}
B65632c:{NFSU2_TR(0x65632c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656331ull));
TAIL_STATIC(0x64f922u,64f);
}
B656331:L656331:{c.instructions+=4;NFSU2_TR(0x656331);
__builtin_memmove((R+24),(R+0),4);
}
B656333:{NFSU2_TR(0x656333);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656336:{NFSU2_TR(0x656336);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656339:{NFSU2_TR(0x656339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65633eull));
TAIL_STATIC(0x672bc6u,672);
}
B65633e:L65633e:{c.instructions+=2;NFSU2_TR(0x65633e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656340:{NFSU2_TR(0x656340);
if(r1(R+518)){{goto L6565b2;}}
}
B656346:L656346:{c.instructions+=3;NFSU2_TR(0x656346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656349:{NFSU2_TR(0x656349);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65634b:{NFSU2_TR(0x65634b);
if(r1(R+518)){{goto L6565b2;}}
}
B656351:L656351:{c.instructions+=6;NFSU2_TR(0x656351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656354:{NFSU2_TR(0x656354);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B656357:{NFSU2_TR(0x656357);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65635b:{NFSU2_TR(0x65635b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65635e:{NFSU2_TR(0x65635e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656361:{NFSU2_TR(0x656361);
if(r1(R+518)){{goto L65637a;}}
}
B656363:L656363:{c.instructions+=6;NFSU2_TR(0x656363);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656366:{NFSU2_TR(0x656366);
u8 U[4];
w4(U+0,u32(0x7b473cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65636b:{NFSU2_TR(0x65636b);
u8 U[4];
w4(U+0,u32(0xbe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656370:{NFSU2_TR(0x656370);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656371:{NFSU2_TR(0x656371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656372:{NFSU2_TR(0x656372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656377ull));
TAIL_STATIC(0x64f52au,64f);
}
B656377:L656377:{c.instructions+=1;NFSU2_TR(0x656377);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B65637a:L65637a:{c.instructions+=2;NFSU2_TR(0x65637a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B65637e:{NFSU2_TR(0x65637e);
if(r1(R+518)){{goto L656397;}}
}
B656380:L656380:{c.instructions+=6;NFSU2_TR(0x656380);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656383:{NFSU2_TR(0x656383);
u8 U[4];
w4(U+0,u32(0x7b4710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656388:{NFSU2_TR(0x656388);
u8 U[4];
w4(U+0,u32(0xbbeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65638d:{NFSU2_TR(0x65638d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65638e:{NFSU2_TR(0x65638e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65638f:{NFSU2_TR(0x65638f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656394ull));
TAIL_STATIC(0x64f52au,64f);
}
B656394:L656394:{c.instructions+=1;NFSU2_TR(0x656394);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B656397:L656397:{c.instructions+=3;NFSU2_TR(0x656397);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65639a:{NFSU2_TR(0x65639a);
__builtin_memmove((R+4),(R+28),4);
}
B65639c:{NFSU2_TR(0x65639c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6563a1ull));
TAIL_STATIC(0x64fae7u,64f);
}
B6563a1:L6563a1:{c.instructions+=2;NFSU2_TR(0x6563a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6563a3:{NFSU2_TR(0x6563a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6563bc;}}
}
B6563a5:L6563a5:{c.instructions+=6;NFSU2_TR(0x6563a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6563a8:{NFSU2_TR(0x6563a8);
u8 U[4];
w4(U+0,u32(0x7b46e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6563ad:{NFSU2_TR(0x6563ad);
u8 U[4];
w4(U+0,u32(0xbdeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6563b2:{NFSU2_TR(0x6563b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6563b3:{NFSU2_TR(0x6563b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6563b4:{NFSU2_TR(0x6563b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6563b9ull));
TAIL_STATIC(0x64f52au,64f);
}
B6563b9:L6563b9:{c.instructions+=1;NFSU2_TR(0x6563b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6563bc:L6563bc:{c.instructions+=3;NFSU2_TR(0x6563bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6563c0:{NFSU2_TR(0x6563c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6563c3:{NFSU2_TR(0x6563c3);
{goto L656413;}
}
B6563c5:L6563c5:{c.instructions+=3;NFSU2_TR(0x6563c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6563c8:{NFSU2_TR(0x6563c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6563ca:{NFSU2_TR(0x6563ca);
if(r1(R+518)){{goto L656410;}}
}
B6563cc:L6563cc:{c.instructions+=2;NFSU2_TR(0x6563cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6563d0:{NFSU2_TR(0x6563d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656410;}}
}
B6563d2:L6563d2:{c.instructions+=3;NFSU2_TR(0x6563d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6563d5:{NFSU2_TR(0x6563d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6563d7:{NFSU2_TR(0x6563d7);
if(r1(R+518)){{goto L6563ed;}}
}
B6563d9:L6563d9:{c.instructions+=3;NFSU2_TR(0x6563d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6563dc:{NFSU2_TR(0x6563dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6563e0:{NFSU2_TR(0x6563e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6563ed;}}
}
B6563e2:L6563e2:{c.instructions+=3;NFSU2_TR(0x6563e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6563e9:{NFSU2_TR(0x6563e9);
__builtin_memmove((R+24),(R+0),4);
}
B6563eb:{NFSU2_TR(0x6563eb);
{goto L656410;}
}
B6563ed:L6563ed:{c.instructions+=2;NFSU2_TR(0x6563ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6563f1:{NFSU2_TR(0x6563f1);
if(r1(R+518)){{goto L656410;}}
}
B6563f3:L6563f3:{c.instructions+=8;NFSU2_TR(0x6563f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6563f6:{NFSU2_TR(0x6563f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6563f9:{NFSU2_TR(0x6563f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6563fc:{NFSU2_TR(0x6563fc);
u8 U[4];
w4(U+0,u32(0x7b46b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656401:{NFSU2_TR(0x656401);
u8 U[4];
w4(U+0,u32(0xbe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656406:{NFSU2_TR(0x656406);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656407:{NFSU2_TR(0x656407);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656408:{NFSU2_TR(0x656408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65640dull));
TAIL_STATIC(0x64f52au,64f);
}
B65640d:L65640d:{c.instructions+=1;NFSU2_TR(0x65640d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B656410:L656410:{c.instructions+=1;NFSU2_TR(0x656410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656413:L656413:{c.instructions+=2;NFSU2_TR(0x656413);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656415:{NFSU2_TR(0x656415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6563c5u);}goto L6563c5;}}
}
B656417:L656417:{c.instructions+=2;NFSU2_TR(0x656417);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656419:{NFSU2_TR(0x656419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65641eull));
TAIL_STATIC(0x645362u,645);
}
B65641e:L65641e:{c.instructions+=2;NFSU2_TR(0x65641e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656420:{NFSU2_TR(0x656420);
if(r1(R+518)){{goto L656435;}}
}
B656422:L656422:{c.instructions+=5;NFSU2_TR(0x656422);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656427:{NFSU2_TR(0x656427);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656428:{NFSU2_TR(0x656428);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656429:{NFSU2_TR(0x656429);
__builtin_memmove((R+4),(R+0),4);
}
B65642b:{NFSU2_TR(0x65642b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656430ull));
TAIL_STATIC(0x672498u,672);
}
B656430:L656430:{c.instructions+=2;NFSU2_TR(0x656430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656433:{NFSU2_TR(0x656433);
{goto L656438;}
}
B656435:L656435:{c.instructions+=1;NFSU2_TR(0x656435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656438:L656438:{c.instructions+=2;NFSU2_TR(0x656438);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65643b:{NFSU2_TR(0x65643b);
if(r1(R+518)){{goto L6565b2;}}
}
B656441:L656441:{c.instructions+=2;NFSU2_TR(0x656441);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656443:{NFSU2_TR(0x656443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656448ull));
TAIL_STATIC(0x645362u,645);
}
B656448:L656448:{c.instructions+=2;NFSU2_TR(0x656448);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65644a:{NFSU2_TR(0x65644a);
if(r1(R+518)){{goto L65645f;}}
}
B65644c:L65644c:{c.instructions+=6;NFSU2_TR(0x65644c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65644d:{NFSU2_TR(0x65644d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65644e:{NFSU2_TR(0x65644e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65644f:{NFSU2_TR(0x65644f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656451:{NFSU2_TR(0x656451);
__builtin_memmove((R+4),(R+0),4);
}
B656453:{NFSU2_TR(0x656453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656458ull));
TAIL_STATIC(0x67286cu,672);
}
B656458:L656458:{c.instructions+=3;NFSU2_TR(0x656458);
__builtin_memmove((R+12),(R+0),4);
}
B65645a:{NFSU2_TR(0x65645a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65645d:{NFSU2_TR(0x65645d);
{goto L656464;}
}
B65645f:L65645f:{c.instructions+=2;NFSU2_TR(0x65645f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656462:{NFSU2_TR(0x656462);
__builtin_memmove((R+12),(R+24),4);
}
B656464:L656464:{c.instructions+=2;NFSU2_TR(0x656464);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656466:{NFSU2_TR(0x656466);
if(r1(R+518)){{goto L6565b2;}}
}
B65646c:L65646c:{c.instructions+=4;NFSU2_TR(0x65646c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65646f:{NFSU2_TR(0x65646f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656472:{NFSU2_TR(0x656472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656475:{NFSU2_TR(0x656475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65647aull));
TAIL_STATIC(0x672440u,672);
}
B65647a:L65647a:{c.instructions+=3;NFSU2_TR(0x65647a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65647c:{NFSU2_TR(0x65647c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65647f:{NFSU2_TR(0x65647f);
if(r1(R+518)){{goto L6565b2;}}
}
B656485:L656485:{c.instructions+=2;NFSU2_TR(0x656485);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656487:{NFSU2_TR(0x656487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65648cull));
TAIL_STATIC(0x645362u,645);
}
B65648c:L65648c:{c.instructions+=2;NFSU2_TR(0x65648c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65648e:{NFSU2_TR(0x65648e);
if(r1(R+518)){{goto L65649b;}}
}
B656490:L656490:{c.instructions+=2;NFSU2_TR(0x656490);
__builtin_memmove((R+4),(R+0),4);
}
B656492:{NFSU2_TR(0x656492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656497ull));
TAIL_STATIC(0x672aceu,672);
}
B656497:L656497:{c.instructions+=2;NFSU2_TR(0x656497);
__builtin_memmove((R+24),(R+0),4);
}
B656499:{NFSU2_TR(0x656499);
{goto L65649d;}
}
B65649b:L65649b:{c.instructions+=1;NFSU2_TR(0x65649b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65649d:L65649d:{c.instructions+=2;NFSU2_TR(0x65649d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65649f:{NFSU2_TR(0x65649f);
if(r1(R+518)){{goto L6565b2;}}
}
B6564a5:L6564a5:{c.instructions+=7;NFSU2_TR(0x6564a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6564a8:{NFSU2_TR(0x6564a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6564ab:{NFSU2_TR(0x6564ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6564ae:{NFSU2_TR(0x6564ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6564b1:{NFSU2_TR(0x6564b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6564b4:{NFSU2_TR(0x6564b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6564b6:{NFSU2_TR(0x6564b6);
if(r1(R+518)){{goto L6564c9;}}
}
B6564b8:L6564b8:{c.instructions+=2;NFSU2_TR(0x6564b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6564b9:{NFSU2_TR(0x6564b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6564beull));
TAIL_STATIC(0x672440u,672);
}
B6564be:L6564be:{c.instructions+=3;NFSU2_TR(0x6564be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6564c0:{NFSU2_TR(0x6564c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6564c3:{NFSU2_TR(0x6564c3);
if(r1(R+518)){{goto L6565b2;}}
}
B6564c9:L6564c9:{c.instructions+=2;NFSU2_TR(0x6564c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6564cd:{NFSU2_TR(0x6564cd);
if(r1(R+518)){{goto L6564e2;}}
}
B6564cf:L6564cf:{c.instructions+=2;NFSU2_TR(0x6564cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6564d2:{NFSU2_TR(0x6564d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6564d7ull));
TAIL_STATIC(0x672440u,672);
}
B6564d7:L6564d7:{c.instructions+=3;NFSU2_TR(0x6564d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6564d9:{NFSU2_TR(0x6564d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6564dc:{NFSU2_TR(0x6564dc);
if(r1(R+518)){{goto L6565b2;}}
}
B6564e2:L6564e2:{c.instructions+=4;NFSU2_TR(0x6564e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6564e4:{NFSU2_TR(0x6564e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6564e7:{NFSU2_TR(0x6564e7);
__builtin_memmove((R+4),(R+28),4);
}
B6564e9:{NFSU2_TR(0x6564e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6564eeull));
TAIL_STATIC(0x64f92eu,64f);
}
B6564ee:L6564ee:{c.instructions+=3;NFSU2_TR(0x6564ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6564f0:{NFSU2_TR(0x6564f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6564f3:{NFSU2_TR(0x6564f3);
if(r1(R+518)){{goto L656559;}}
}
B6564f5:L6564f5:{c.instructions+=2;NFSU2_TR(0x6564f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6564f8:{NFSU2_TR(0x6564f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656517;}}
}
B6564fa:L6564fa:{c.instructions+=7;NFSU2_TR(0x6564fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6564fd:{NFSU2_TR(0x6564fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656500:{NFSU2_TR(0x656500);
u8 U[4];
w4(U+0,u32(0x7b4688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656505:{NFSU2_TR(0x656505);
u8 U[4];
w4(U+0,u32(0xc04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65650a:{NFSU2_TR(0x65650a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65650b:{NFSU2_TR(0x65650b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65650c:{NFSU2_TR(0x65650c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656511ull));
TAIL_STATIC(0x64f52au,64f);
}
B656511:L656511:{c.instructions+=2;NFSU2_TR(0x656511);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B656514:{NFSU2_TR(0x656514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656517:L656517:{c.instructions+=2;NFSU2_TR(0x656517);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65651a:{NFSU2_TR(0x65651a);
if(r1(R+518)){{goto L656559;}}
}
B65651c:L65651c:{c.instructions+=2;NFSU2_TR(0x65651c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65651f:{NFSU2_TR(0x65651f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656524ull));
TAIL_STATIC(0x672440u,672);
}
B656524:L656524:{c.instructions+=3;NFSU2_TR(0x656524);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656526:{NFSU2_TR(0x656526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656529:{NFSU2_TR(0x656529);
if(r1(R+518)){{goto L6565b2;}}
}
B65652f:L65652f:{c.instructions+=4;NFSU2_TR(0x65652f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656532:{NFSU2_TR(0x656532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656535:{NFSU2_TR(0x656535);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656537:{NFSU2_TR(0x656537);
if(r1(R+518)){{goto L65654c;}}
}
B656539:L656539:{c.instructions+=2;NFSU2_TR(0x656539);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65653d:{NFSU2_TR(0x65653d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L65654c;}}
}
B65653f:L65653f:{c.instructions+=2;NFSU2_TR(0x65653f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656540:{NFSU2_TR(0x656540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656545ull));
TAIL_STATIC(0x672440u,672);
}
B656545:L656545:{c.instructions+=3;NFSU2_TR(0x656545);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656547:{NFSU2_TR(0x656547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65654a:{NFSU2_TR(0x65654a);
if(r1(R+518)){{goto L6565b2;}}
}
B65654c:L65654c:{c.instructions+=5;NFSU2_TR(0x65654c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65654f:{NFSU2_TR(0x65654f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656552:{NFSU2_TR(0x656552);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656554:{NFSU2_TR(0x656554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656557:{NFSU2_TR(0x656557);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65652fu);}goto L65652f;}}
}
B656559:L656559:{c.instructions+=3;NFSU2_TR(0x656559);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65655c:{NFSU2_TR(0x65655c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65655e:{NFSU2_TR(0x65655e);
if(r1(R+518)){{goto L656572;}}
}
B656560:L656560:{c.instructions+=2;NFSU2_TR(0x656560);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656563:{NFSU2_TR(0x656563);
if(r1(R+518)){{goto L656572;}}
}
B656565:L656565:{c.instructions+=2;NFSU2_TR(0x656565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656566:{NFSU2_TR(0x656566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65656bull));
TAIL_STATIC(0x672440u,672);
}
B65656b:L65656b:{c.instructions+=3;NFSU2_TR(0x65656b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65656d:{NFSU2_TR(0x65656d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656570:{NFSU2_TR(0x656570);
if(r1(R+518)){{goto L6565b2;}}
}
B656572:L656572:{c.instructions+=13;NFSU2_TR(0x656572);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B656575:{NFSU2_TR(0x656575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656576:{NFSU2_TR(0x656576);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B656579:{NFSU2_TR(0x656579);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65657a:{NFSU2_TR(0x65657a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65657d:{NFSU2_TR(0x65657d);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65657f:{NFSU2_TR(0x65657f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656582:{NFSU2_TR(0x656582);
__builtin_memmove((R+4),(R+28),4);
}
B656584:{NFSU2_TR(0x656584);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656587:{NFSU2_TR(0x656587);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65658a:{NFSU2_TR(0x65658a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65658d:{NFSU2_TR(0x65658d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65658f:{NFSU2_TR(0x65658f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656594ull));
TAIL_STATIC(0x6540dfu,654);
}
B656594:L656594:{c.instructions+=2;NFSU2_TR(0x656594);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656596:{NFSU2_TR(0x656596);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6565bb;}}
}
B656598:L656598:{c.instructions+=4;NFSU2_TR(0x656598);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65659b:{NFSU2_TR(0x65659b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65659e:{NFSU2_TR(0x65659e);
u8 U[4];
w4(U+0,u32(0x7b3f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565a3:{NFSU2_TR(0x6565a3);
u8 U[4];
w4(U+0,u32(0xbbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565a8:L6565a8:{c.instructions+=3;NFSU2_TR(0x6565a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565a9:{NFSU2_TR(0x6565a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565aa:{NFSU2_TR(0x6565aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6565afull));
TAIL_STATIC(0x64f52au,64f);
}
B6565af:L6565af:{c.instructions+=1;NFSU2_TR(0x6565af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6565b2:L6565b2:{c.instructions+=1;NFSU2_TR(0x6565b2);
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
B6565b4:L6565b4:{c.instructions+=5;NFSU2_TR(0x6565b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6565b5:{NFSU2_TR(0x6565b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6565b6:{NFSU2_TR(0x6565b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6565b7:{NFSU2_TR(0x6565b7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6565b8:{NFSU2_TR(0x6565b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6565bb:L6565bb:{c.instructions+=3;NFSU2_TR(0x6565bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6565be:{NFSU2_TR(0x6565be);
__builtin_memmove((R+4),(R+28),4);
}
B6565c0:{NFSU2_TR(0x6565c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656600;}}
}
B6565c2:L6565c2:{c.instructions+=3;NFSU2_TR(0x6565c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6565c5:{NFSU2_TR(0x6565c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6565c8:{NFSU2_TR(0x6565c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6565cdull));
TAIL_STATIC(0x64fbecu,64f);
}
B6565cd:L6565cd:{c.instructions+=2;NFSU2_TR(0x6565cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6565cf:{NFSU2_TR(0x6565cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6565e3;}}
}
B6565d1:L6565d1:{c.instructions+=5;NFSU2_TR(0x6565d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565d4:{NFSU2_TR(0x6565d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6565d7:{NFSU2_TR(0x6565d7);
u8 U[4];
w4(U+0,u32(0x7b4654ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565dc:{NFSU2_TR(0x6565dc);
u8 U[4];
w4(U+0,u32(0xbfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6565e1:{NFSU2_TR(0x6565e1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6565a8u);}goto L6565a8;}
}
B6565e3:L6565e3:{c.instructions+=10;NFSU2_TR(0x6565e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565e6:{NFSU2_TR(0x6565e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6565e9:{NFSU2_TR(0x6565e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6565ec:{NFSU2_TR(0x6565ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565ef:{NFSU2_TR(0x6565ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6565f2:{NFSU2_TR(0x6565f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565f5:{NFSU2_TR(0x6565f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565f8:{NFSU2_TR(0x6565f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6565fb:{NFSU2_TR(0x6565fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6565fe:{NFSU2_TR(0x6565fe);
{goto L656614;}
}
B656600:L656600:{c.instructions+=4;NFSU2_TR(0x656600);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656603:{NFSU2_TR(0x656603);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656606:{NFSU2_TR(0x656606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656609:{NFSU2_TR(0x656609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65660eull));
TAIL_STATIC(0x64fb5eu,64f);
}
B65660e:L65660e:{c.instructions+=2;NFSU2_TR(0x65660e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656611:{NFSU2_TR(0x656611);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B656614:L656614:{c.instructions+=8;NFSU2_TR(0x656614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656617:{NFSU2_TR(0x656617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65661a:{NFSU2_TR(0x65661a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65661d:{NFSU2_TR(0x65661d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B656621:{NFSU2_TR(0x656621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656624:{NFSU2_TR(0x656624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B65662b:{NFSU2_TR(0x65662b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65662e:{NFSU2_TR(0x65662e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656633ull));
TAIL_STATIC(0x672440u,672);
}
B656633:L656633:{c.instructions+=3;NFSU2_TR(0x656633);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656636:{NFSU2_TR(0x656636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656639:{NFSU2_TR(0x656639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65663eull));
TAIL_STATIC(0x672440u,672);
}
B65663e:L65663e:{c.instructions+=5;NFSU2_TR(0x65663e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656640:{NFSU2_TR(0x656640);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656643:{NFSU2_TR(0x656643);
__builtin_memmove((R+4),(R+28),4);
}
B656645:{NFSU2_TR(0x656645);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656648:{NFSU2_TR(0x656648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65664dull));
TAIL_STATIC(0x64f92eu,64f);
}
B65664d:L65664d:{c.instructions+=5;NFSU2_TR(0x65664d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656650:{NFSU2_TR(0x656650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656651:{NFSU2_TR(0x656651);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656654:{NFSU2_TR(0x656654);
__builtin_memmove((R+4),(R+28),4);
}
B656656:{NFSU2_TR(0x656656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65665bull));
TAIL_STATIC(0x65479cu,654);
}
B65665b:L65665b:{c.instructions+=3;NFSU2_TR(0x65665b);
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
B65665d:{NFSU2_TR(0x65665d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656660:{NFSU2_TR(0x656660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656685;}}
}
B656662:L656662:{c.instructions+=7;NFSU2_TR(0x656662);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656665:{NFSU2_TR(0x656665);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656668:{NFSU2_TR(0x656668);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65666a:{NFSU2_TR(0x65666a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65666d:{NFSU2_TR(0x65666d);
__builtin_memmove((R+4),(R+28),4);
}
B65666f:{NFSU2_TR(0x65666f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656672:{NFSU2_TR(0x656672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656677ull));
TAIL_STATIC(0x650b63u,650);
}
B656677:L656677:{c.instructions+=3;NFSU2_TR(0x656677);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656679:{NFSU2_TR(0x656679);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65667c:{NFSU2_TR(0x65667c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6565b2u);}goto L6565b2;}}
}
B656682:L656682:{c.instructions+=1;NFSU2_TR(0x656682);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
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
B656685:L656685:{c.instructions+=7;NFSU2_TR(0x656685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656688:{NFSU2_TR(0x656688);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65668b:{NFSU2_TR(0x65668b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65668e:{NFSU2_TR(0x65668e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656691:{NFSU2_TR(0x656691);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656694:{NFSU2_TR(0x656694);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656697:{NFSU2_TR(0x656697);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6565b4u);}goto L6565b4;}
}
B65669c:L65669c:{c.instructions+=11;NFSU2_TR(0x65669c);
__builtin_memmove((R+28),(R+28),4);
}
B65669e:{NFSU2_TR(0x65669e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65669f:{NFSU2_TR(0x65669f);
__builtin_memmove((R+20),(R+16),4);
}
B6566a1:{NFSU2_TR(0x6566a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6566a4:{NFSU2_TR(0x6566a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566a5:{NFSU2_TR(0x6566a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6566a8:{NFSU2_TR(0x6566a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566a9:{NFSU2_TR(0x6566a9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6566ab:{NFSU2_TR(0x6566ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6566ad:{NFSU2_TR(0x6566ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6566b0:{NFSU2_TR(0x6566b0);
if(r1(R+518)){{goto L6567bf;}}
}
B6566b6:L6566b6:{c.instructions+=2;NFSU2_TR(0x6566b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6566ba:{NFSU2_TR(0x6566ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6567bf;}}
}
B6566c0:L6566c0:{c.instructions+=7;NFSU2_TR(0x6566c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6566c3:{NFSU2_TR(0x6566c3);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6566c7:{NFSU2_TR(0x6566c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6566ca:{NFSU2_TR(0x6566ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6566cd:{NFSU2_TR(0x6566cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566ce:{NFSU2_TR(0x6566ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566cf:{NFSU2_TR(0x6566cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6566d4ull));
TAIL_STATIC(0x575620u,575);
}
B6566d4:L6566d4:{c.instructions+=4;NFSU2_TR(0x6566d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6566d6:{NFSU2_TR(0x6566d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6566d7:{NFSU2_TR(0x6566d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6566da:{NFSU2_TR(0x6566da);
if(r1(R+518)){{goto L6567af;}}
}
B6566e0:L6566e0:{c.instructions+=4;NFSU2_TR(0x6566e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6566e3:{NFSU2_TR(0x6566e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566e4:{NFSU2_TR(0x6566e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566e5:{NFSU2_TR(0x6566e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6566eaull));
TAIL_STATIC(0x654e3cu,654);
}
B6566ea:L6566ea:{c.instructions+=2;NFSU2_TR(0x6566ea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6566ec:{NFSU2_TR(0x6566ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6567af;}}
}
B6566f2:L6566f2:{c.instructions+=2;NFSU2_TR(0x6566f2);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6566f4:{NFSU2_TR(0x6566f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6566f9ull));
TAIL_STATIC(0x645362u,645);
}
B6566f9:L6566f9:{c.instructions+=2;NFSU2_TR(0x6566f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6566fb:{NFSU2_TR(0x6566fb);
if(r1(R+518)){{goto L656712;}}
}
B6566fd:L6566fd:{c.instructions+=9;NFSU2_TR(0x6566fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656700:{NFSU2_TR(0x656700);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656701:{NFSU2_TR(0x656701);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656703:{NFSU2_TR(0x656703);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656704:{NFSU2_TR(0x656704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656705:{NFSU2_TR(0x656705);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656706:{NFSU2_TR(0x656706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656707:{NFSU2_TR(0x656707);
__builtin_memmove((R+4),(R+0),4);
}
B656709:{NFSU2_TR(0x656709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65670eull));
TAIL_STATIC(0x672d7bu,672);
}
B65670e:L65670e:{c.instructions+=2;NFSU2_TR(0x65670e);
__builtin_memmove((R+12),(R+0),4);
}
B656710:{NFSU2_TR(0x656710);
{goto L656714;}
}
B656712:L656712:{c.instructions+=1;NFSU2_TR(0x656712);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B656714:L656714:{c.instructions+=2;NFSU2_TR(0x656714);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656716:{NFSU2_TR(0x656716);
if(r1(R+518)){{goto L6567af;}}
}
B65671c:L65671c:{c.instructions+=2;NFSU2_TR(0x65671c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
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
B65671f:{NFSU2_TR(0x65671f);
if(r1(R+518)){{goto L656730;}}
}
B656721:L656721:{c.instructions+=3;NFSU2_TR(0x656721);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656724:{NFSU2_TR(0x656724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656726:{NFSU2_TR(0x656726);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656729ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B656729:L656729:{c.instructions+=3;NFSU2_TR(0x656729);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65672b:{NFSU2_TR(0x65672b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65672e:{NFSU2_TR(0x65672e);
if(r1(R+518)){{goto L6567af;}}
}
B656730:L656730:{c.instructions+=4;NFSU2_TR(0x656730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B656734:{NFSU2_TR(0x656734);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656738:{NFSU2_TR(0x656738);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B65673b:{NFSU2_TR(0x65673b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6567a2;}}
}
B65673d:L65673d:{c.instructions+=2;NFSU2_TR(0x65673d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656740:{NFSU2_TR(0x656740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656743:L656743:{c.instructions+=2;NFSU2_TR(0x656743);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656745:{NFSU2_TR(0x656745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65674aull));
TAIL_STATIC(0x645362u,645);
}
B65674a:L65674a:{c.instructions+=2;NFSU2_TR(0x65674a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B65674c:{NFSU2_TR(0x65674c);
if(r1(R+518)){{goto L656760;}}
}
B65674e:L65674e:{c.instructions+=5;NFSU2_TR(0x65674e);
u8 U[4];
w4(U+0,u32(0x7b4088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656753:{NFSU2_TR(0x656753);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656755:{NFSU2_TR(0x656755);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656757:{NFSU2_TR(0x656757);
__builtin_memmove((R+4),(R+0),4);
}
B656759:{NFSU2_TR(0x656759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65675eull));
TAIL_STATIC(0x672498u,672);
}
B65675e:L65675e:{c.instructions+=1;NFSU2_TR(0x65675e);
{goto L656762;}
}
B656760:L656760:{c.instructions+=1;NFSU2_TR(0x656760);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656762:L656762:{c.instructions+=3;NFSU2_TR(0x656762);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656764:{NFSU2_TR(0x656764);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B656766:{NFSU2_TR(0x656766);
if(r1(R+518)){{goto L6567ad;}}
}
B656768:L656768:{c.instructions+=2;NFSU2_TR(0x656768);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65676a:{NFSU2_TR(0x65676a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65676full));
TAIL_STATIC(0x645362u,645);
}
B65676f:L65676f:{c.instructions+=2;NFSU2_TR(0x65676f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656771:{NFSU2_TR(0x656771);
if(r1(R+518)){{goto L656783;}}
}
B656773:L656773:{c.instructions+=5;NFSU2_TR(0x656773);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656776:{NFSU2_TR(0x656776);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656777:{NFSU2_TR(0x656777);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65677a:{NFSU2_TR(0x65677a);
__builtin_memmove((R+4),(R+0),4);
}
B65677c:{NFSU2_TR(0x65677c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656781ull));
TAIL_STATIC(0x672e7cu,672);
}
B656781:L656781:{c.instructions+=1;NFSU2_TR(0x656781);
{goto L656785;}
}
B656783:L656783:{c.instructions+=1;NFSU2_TR(0x656783);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656785:L656785:{c.instructions+=4;NFSU2_TR(0x656785);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656787:{NFSU2_TR(0x656787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B656789:{NFSU2_TR(0x656789);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B65678c:{NFSU2_TR(0x65678c);
if(r1(R+518)){{goto L6567ad;}}
}
B65678e:L65678e:{c.instructions+=7;NFSU2_TR(0x65678e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B656790:{NFSU2_TR(0x656790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B656794:{NFSU2_TR(0x656794);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B656797:{NFSU2_TR(0x656797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B65679a:{NFSU2_TR(0x65679a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B65679d:{NFSU2_TR(0x65679d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6567a0:{NFSU2_TR(0x6567a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656743u);}goto L656743;}}
}
B6567a2:L6567a2:{c.instructions+=3;NFSU2_TR(0x6567a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6567a5:{NFSU2_TR(0x6567a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6567a6:{NFSU2_TR(0x6567a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6567abull));
TAIL_STATIC(0x650571u,650);
}
B6567ab:L6567ab:{c.instructions+=1;NFSU2_TR(0x6567ab);
{goto L6567b1;}
}
B6567ad:L6567ad:{c.instructions+=1;NFSU2_TR(0x6567ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6567af:L6567af:{c.instructions+=1;NFSU2_TR(0x6567af);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6567b1:L6567b1:{c.instructions+=2;NFSU2_TR(0x6567b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6567b4:{NFSU2_TR(0x6567b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6567b9ull));
TAIL_STATIC(0x575630u,575);
}
B6567b9:L6567b9:{c.instructions+=4;NFSU2_TR(0x6567b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6567ba:{NFSU2_TR(0x6567ba);
__builtin_memmove((R+0),(R+12),4);
}
B6567bc:{NFSU2_TR(0x6567bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6567bd:{NFSU2_TR(0x6567bd);
{goto L6567c1;}
}
B6567bf:L6567bf:{c.instructions+=1;NFSU2_TR(0x6567bf);
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
B6567c1:L6567c1:{c.instructions+=4;NFSU2_TR(0x6567c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6567c2:{NFSU2_TR(0x6567c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6567c3:{NFSU2_TR(0x6567c3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6567c4:{NFSU2_TR(0x6567c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6567c7:L6567c7:{c.instructions+=7;NFSU2_TR(0x6567c7);
__builtin_memmove((R+28),(R+28),4);
}
B6567c9:{NFSU2_TR(0x6567c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6567ca:{NFSU2_TR(0x6567ca);
__builtin_memmove((R+20),(R+16),4);
}
B6567cc:{NFSU2_TR(0x6567cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6567cd:{NFSU2_TR(0x6567cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6567d0:{NFSU2_TR(0x6567d0);
__builtin_memmove((R+24),(R+4),4);
}
B6567d2:{NFSU2_TR(0x6567d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6567d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x65669cu);}goto L65669c;}
}
B6567d7:L6567d7:{c.instructions+=3;NFSU2_TR(0x6567d7);
__builtin_memmove((R+8),(R+0),4);
}
B6567d9:{NFSU2_TR(0x6567d9);
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
B6567db:{NFSU2_TR(0x6567db);
if(r1(R+518)){{goto L656816;}}
}
B6567dd:L6567dd:{c.instructions+=3;NFSU2_TR(0x6567dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6567e0:{NFSU2_TR(0x6567e0);
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
B6567e2:{NFSU2_TR(0x6567e2);
if(r1(R+518)){{goto L656816;}}
}
B6567e4:L6567e4:{c.instructions+=2;NFSU2_TR(0x6567e4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x9ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6567e8:{NFSU2_TR(0x6567e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656816;}}
}
B6567ea:L6567ea:{c.instructions+=3;NFSU2_TR(0x6567ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6567eb:{NFSU2_TR(0x6567eb);
__builtin_memmove((R+4),(R+24),4);
}
B6567ed:{NFSU2_TR(0x6567ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6567f2ull));
TAIL_STATIC(0x64fac3u,64f);
}
B6567f2:L6567f2:{c.instructions+=2;NFSU2_TR(0x6567f2);
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
B6567f4:{NFSU2_TR(0x6567f4);
if(r1(R+518)){{goto L656816;}}
}
B6567f6:L6567f6:{c.instructions+=9;NFSU2_TR(0x6567f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6567f9:{NFSU2_TR(0x6567f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6567fa:{NFSU2_TR(0x6567fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6567fd:{NFSU2_TR(0x6567fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656800:{NFSU2_TR(0x656800);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B656803:{NFSU2_TR(0x656803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656804:{NFSU2_TR(0x656804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656807:{NFSU2_TR(0x656807);
__builtin_memmove((R+4),(R+24),4);
}
B656809:{NFSU2_TR(0x656809);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65680eull));
TAIL_STATIC(0x6529d6u,652);
}
B65680e:L65680e:{c.instructions+=2;NFSU2_TR(0x65680e);
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
B656810:{NFSU2_TR(0x656810);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L65681b;}}
}
B656812:L656812:{c.instructions+=2;NFSU2_TR(0x656812);
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
B656814:{NFSU2_TR(0x656814);
{goto L65681b;}
}
B656816:L656816:{c.instructions+=1;NFSU2_TR(0x656816);
w4(R+0,u32(0x80004005ull));
}
B65681b:L65681b:{c.instructions+=3;NFSU2_TR(0x65681b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B65681c:{NFSU2_TR(0x65681c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B65681d:{NFSU2_TR(0x65681d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656820:L656820:{c.instructions+=13;NFSU2_TR(0x656820);
__builtin_memmove((R+28),(R+28),4);
}
B656822:{NFSU2_TR(0x656822);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656823:{NFSU2_TR(0x656823);
__builtin_memmove((R+20),(R+16),4);
}
B656825:{NFSU2_TR(0x656825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B656828:{NFSU2_TR(0x656828);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656829:{NFSU2_TR(0x656829);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65682a:{NFSU2_TR(0x65682a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B65682c:{NFSU2_TR(0x65682c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65682f:{NFSU2_TR(0x65682f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656830:{NFSU2_TR(0x656830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656833:{NFSU2_TR(0x656833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656836:{NFSU2_TR(0x656836);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656839:{NFSU2_TR(0x656839);
if(r1(R+518)){{goto L6569cc;}}
}
B65683f:L65683f:{c.instructions+=1;NFSU2_TR(0x65683f);
{goto L656844;}
}
B656841:L656841:{c.instructions+=1;NFSU2_TR(0x656841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B656844:L656844:{c.instructions+=3;NFSU2_TR(0x656844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656847:{NFSU2_TR(0x656847);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65684a:{NFSU2_TR(0x65684a);
if(r1(R+518)){{goto L6569cc;}}
}
B656850:L656850:{c.instructions+=2;NFSU2_TR(0x656850);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656852:{NFSU2_TR(0x656852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656857ull));
TAIL_STATIC(0x645362u,645);
}
B656857:L656857:{c.instructions+=2;NFSU2_TR(0x656857);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656859:{NFSU2_TR(0x656859);
if(r1(R+518)){{goto L65686b;}}
}
B65685b:L65685b:{c.instructions+=5;NFSU2_TR(0x65685b);
u8 U[4];
w4(U+0,u32(0x7b3cb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656860:{NFSU2_TR(0x656860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656861:{NFSU2_TR(0x656861);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656862:{NFSU2_TR(0x656862);
__builtin_memmove((R+4),(R+0),4);
}
B656864:{NFSU2_TR(0x656864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656869ull));
TAIL_STATIC(0x672498u,672);
}
B656869:L656869:{c.instructions+=1;NFSU2_TR(0x656869);
{goto L65686d;}
}
B65686b:L65686b:{c.instructions+=1;NFSU2_TR(0x65686b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B65686d:L65686d:{c.instructions+=3;NFSU2_TR(0x65686d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B65686f:{NFSU2_TR(0x65686f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B656871:{NFSU2_TR(0x656871);
if(r1(R+518)){{goto L6569cc;}}
}
B656877:L656877:{c.instructions+=2;NFSU2_TR(0x656877);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656879:{NFSU2_TR(0x656879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65687eull));
TAIL_STATIC(0x645362u,645);
}
B65687e:L65687e:{c.instructions+=2;NFSU2_TR(0x65687e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656880:{NFSU2_TR(0x656880);
if(r1(R+518)){{goto L656891;}}
}
B656882:L656882:{c.instructions+=6;NFSU2_TR(0x656882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656883:{NFSU2_TR(0x656883);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656884:{NFSU2_TR(0x656884);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656885:{NFSU2_TR(0x656885);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656886:{NFSU2_TR(0x656886);
__builtin_memmove((R+4),(R+0),4);
}
B656888:{NFSU2_TR(0x656888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65688dull));
TAIL_STATIC(0x67286cu,672);
}
B65688d:L65688d:{c.instructions+=2;NFSU2_TR(0x65688d);
__builtin_memmove((R+12),(R+0),4);
}
B65688f:{NFSU2_TR(0x65688f);
{goto L656893;}
}
B656891:L656891:{c.instructions+=1;NFSU2_TR(0x656891);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B656893:L656893:{c.instructions+=2;NFSU2_TR(0x656893);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656895:{NFSU2_TR(0x656895);
if(r1(R+518)){{goto L6569cc;}}
}
B65689b:L65689b:{c.instructions+=9;NFSU2_TR(0x65689b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B65689d:{NFSU2_TR(0x65689d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568a0:{NFSU2_TR(0x6568a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6568a2:{NFSU2_TR(0x6568a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6568a5:{NFSU2_TR(0x6568a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6568a8:{NFSU2_TR(0x6568a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568ab:{NFSU2_TR(0x6568ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6568b2:{NFSU2_TR(0x6568b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568b5:{NFSU2_TR(0x6568b5);
if(r1(R+518)){{goto L6568ca;}}
}
B6568b7:L6568b7:{c.instructions+=2;NFSU2_TR(0x6568b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6568ba:{NFSU2_TR(0x6568ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6568bfull));
TAIL_STATIC(0x672440u,672);
}
B6568bf:L6568bf:{c.instructions+=3;NFSU2_TR(0x6568bf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6568c1:{NFSU2_TR(0x6568c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568c4:{NFSU2_TR(0x6568c4);
if(r1(R+518)){{goto L6569cc;}}
}
B6568ca:L6568ca:{c.instructions+=3;NFSU2_TR(0x6568ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6568cd:{NFSU2_TR(0x6568cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6568d0:{NFSU2_TR(0x6568d0);
{goto L656935;}
}
B6568d2:L6568d2:{c.instructions+=2;NFSU2_TR(0x6568d2);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6568d4:{NFSU2_TR(0x6568d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6568d9ull));
TAIL_STATIC(0x645362u,645);
}
B6568d9:L6568d9:{c.instructions+=2;NFSU2_TR(0x6568d9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6568db:{NFSU2_TR(0x6568db);
if(r1(R+518)){{goto L6568e6;}}
}
B6568dd:L6568dd:{c.instructions+=2;NFSU2_TR(0x6568dd);
__builtin_memmove((R+4),(R+0),4);
}
B6568df:{NFSU2_TR(0x6568df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6568e4ull));
TAIL_STATIC(0x6729b7u,672);
}
B6568e4:L6568e4:{c.instructions+=1;NFSU2_TR(0x6568e4);
{goto L6568e8;}
}
B6568e6:L6568e6:{c.instructions+=1;NFSU2_TR(0x6568e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6568e8:L6568e8:{c.instructions+=2;NFSU2_TR(0x6568e8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6568ea:{NFSU2_TR(0x6568ea);
if(r1(R+518)){{goto L6569cc;}}
}
B6568f0:L6568f0:{c.instructions+=7;NFSU2_TR(0x6568f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6568f3:{NFSU2_TR(0x6568f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568f6:{NFSU2_TR(0x6568f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6568f9:{NFSU2_TR(0x6568f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6568fc:{NFSU2_TR(0x6568fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6568fe:{NFSU2_TR(0x6568fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656901:{NFSU2_TR(0x656901);
if(r1(R+518)){{goto L65691a;}}
}
B656903:L656903:{c.instructions+=4;NFSU2_TR(0x656903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656904:{NFSU2_TR(0x656904);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656905:{NFSU2_TR(0x656905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656908:{NFSU2_TR(0x656908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65690dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B65690d:L65690d:{c.instructions+=2;NFSU2_TR(0x65690d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65690f:{NFSU2_TR(0x65690f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L656927;}}
}
B656911:L656911:{c.instructions+=2;NFSU2_TR(0x656911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0xbf2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B656918:{NFSU2_TR(0x656918);
{goto L656921;}
}
B65691a:L65691a:{c.instructions+=1;NFSU2_TR(0x65691a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0xc00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B656921:L656921:{c.instructions+=1;NFSU2_TR(0x656921);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B656927:L656927:{c.instructions+=5;NFSU2_TR(0x656927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656929:{NFSU2_TR(0x656929);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B65692d:{NFSU2_TR(0x65692d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B656930:{NFSU2_TR(0x656930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656933:{NFSU2_TR(0x656933);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B656935:L656935:{c.instructions+=2;NFSU2_TR(0x656935);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656939:{NFSU2_TR(0x656939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6568d2u);}goto L6568d2;}}
}
B65693b:L65693b:{c.instructions+=2;NFSU2_TR(0x65693b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B65693c:{NFSU2_TR(0x65693c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656941ull));
TAIL_STATIC(0x672440u,672);
}
B656941:L656941:{c.instructions+=3;NFSU2_TR(0x656941);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656943:{NFSU2_TR(0x656943);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656946:{NFSU2_TR(0x656946);
if(r1(R+518)){{goto L6569cc;}}
}
B65694c:L65694c:{c.instructions+=5;NFSU2_TR(0x65694c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B65694f:{NFSU2_TR(0x65694f);
w4(R+0,u32(0xbf2ull));
}
B656954:{NFSU2_TR(0x656954);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B656957:{NFSU2_TR(0x656957);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B656959:{NFSU2_TR(0x656959);
if(r1(R+518)){{goto L6569b7;}}
}
B65695b:L65695b:{c.instructions+=2;NFSU2_TR(0x65695b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xeull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B65695e:{NFSU2_TR(0x65695e);
if(r1(R+518)){{goto L6569a8;}}
}
B656960:L656960:{c.instructions+=2;NFSU2_TR(0x656960);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B656964:{NFSU2_TR(0x656964);
if(r1(R+512)){{goto L656999;}}
}
B656966:L656966:{c.instructions+=2;NFSU2_TR(0x656966);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10000ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B65696d:{NFSU2_TR(0x65696d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L656999;}}
}
B65696f:L65696f:{c.instructions+=4;NFSU2_TR(0x65696f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656972:{NFSU2_TR(0x656972);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656974:{NFSU2_TR(0x656974);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656975:{NFSU2_TR(0x656975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x65697aull));
TAIL_STATIC(0x650b63u,650);
}
B65697a:L65697a:{c.instructions+=2;NFSU2_TR(0x65697a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B65697c:{NFSU2_TR(0x65697c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6569cc;}}
}
B65697e:L65697e:{c.instructions+=5;NFSU2_TR(0x65697e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656981:{NFSU2_TR(0x656981);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656984:{NFSU2_TR(0x656984);
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
B656986:{NFSU2_TR(0x656986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656989:{NFSU2_TR(0x656989);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656841u);}goto L656841;}}
}
B65698f:L65698f:{c.instructions+=1;NFSU2_TR(0x65698f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656992:L656992:{c.instructions+=5;NFSU2_TR(0x656992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656993:{NFSU2_TR(0x656993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656994:{NFSU2_TR(0x656994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B656995:{NFSU2_TR(0x656995);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B656996:{NFSU2_TR(0x656996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656999:L656999:{c.instructions+=4;NFSU2_TR(0x656999);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B65699c:{NFSU2_TR(0x65699c);
u8 U[4];
w4(U+0,u32(0x7b47d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569a1:{NFSU2_TR(0x6569a1);
u8 U[4];
w4(U+0,u32(0xbf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569a6:{NFSU2_TR(0x6569a6);
{goto L6569c0;}
}
B6569a8:L6569a8:{c.instructions+=4;NFSU2_TR(0x6569a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6569ab:{NFSU2_TR(0x6569ab);
u8 U[4];
w4(U+0,u32(0x7b47a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569b0:{NFSU2_TR(0x6569b0);
u8 U[4];
w4(U+0,u32(0xc00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569b5:{NFSU2_TR(0x6569b5);
{goto L6569c0;}
}
B6569b7:L6569b7:{c.instructions+=3;NFSU2_TR(0x6569b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6569ba:{NFSU2_TR(0x6569ba);
u8 U[4];
w4(U+0,u32(0x7b476cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569bf:{NFSU2_TR(0x6569bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569c0:L6569c0:{c.instructions+=3;NFSU2_TR(0x6569c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569c1:{NFSU2_TR(0x6569c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6569c4:{NFSU2_TR(0x6569c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6569c9ull));
TAIL_STATIC(0x64f52au,64f);
}
B6569c9:L6569c9:{c.instructions+=1;NFSU2_TR(0x6569c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6569cc:L6569cc:{c.instructions+=2;NFSU2_TR(0x6569cc);
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
B6569ce:{NFSU2_TR(0x6569ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656992u);}goto L656992;}
}
B6569d0:L6569d0:{c.instructions+=8;NFSU2_TR(0x6569d0);
__builtin_memmove((R+28),(R+28),4);
}
B6569d2:{NFSU2_TR(0x6569d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569d3:{NFSU2_TR(0x6569d3);
__builtin_memmove((R+20),(R+16),4);
}
B6569d5:{NFSU2_TR(0x6569d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569d6:{NFSU2_TR(0x6569d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569d7:{NFSU2_TR(0x6569d7);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569d9:{NFSU2_TR(0x6569d9);
__builtin_memmove((R+28),(R+4),4);
}
B6569db:{NFSU2_TR(0x6569db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6569e0ull));
TAIL_STATIC(0x645362u,645);
}
B6569e0:L6569e0:{c.instructions+=2;NFSU2_TR(0x6569e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6569e2:{NFSU2_TR(0x6569e2);
if(r1(R+518)){{goto L6569f9;}}
}
B6569e4:L6569e4:{c.instructions+=5;NFSU2_TR(0x6569e4);
u8 U[4];
w4(U+0,u32(0x7b480cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569e9:{NFSU2_TR(0x6569e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6569eb:{NFSU2_TR(0x6569eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6569ee:{NFSU2_TR(0x6569ee);
__builtin_memmove((R+4),(R+0),4);
}
B6569f0:{NFSU2_TR(0x6569f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6569f5ull));
TAIL_STATIC(0x672498u,672);
}
B6569f5:L6569f5:{c.instructions+=2;NFSU2_TR(0x6569f5);
__builtin_memmove((R+24),(R+0),4);
}
B6569f7:{NFSU2_TR(0x6569f7);
{goto L6569fb;}
}
B6569f9:L6569f9:{c.instructions+=1;NFSU2_TR(0x6569f9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6569fb:L6569fb:{c.instructions+=2;NFSU2_TR(0x6569fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6569fd:{NFSU2_TR(0x6569fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656a03;}}
}
B6569ff:L6569ff:{c.instructions+=2;NFSU2_TR(0x6569ff);
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
B656a01:{NFSU2_TR(0x656a01);
{goto L656a12;}
}
B656a03:L656a03:{c.instructions+=4;NFSU2_TR(0x656a03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a04:{NFSU2_TR(0x656a04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656a07:{NFSU2_TR(0x656a07);
__builtin_memmove((R+4),(R+28),4);
}
B656a09:{NFSU2_TR(0x656a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656820u);}goto L656820;}
}
B656a0e:L656a0e:{c.instructions+=1;NFSU2_TR(0x656a0e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B656a12:L656a12:{c.instructions+=4;NFSU2_TR(0x656a12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656a13:{NFSU2_TR(0x656a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656a14:{NFSU2_TR(0x656a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B656a15:{NFSU2_TR(0x656a15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656a18:L656a18:{c.instructions+=9;NFSU2_TR(0x656a18);
__builtin_memmove((R+28),(R+28),4);
}
B656a1a:{NFSU2_TR(0x656a1a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a1b:{NFSU2_TR(0x656a1b);
__builtin_memmove((R+20),(R+16),4);
}
B656a1d:{NFSU2_TR(0x656a1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a1e:{NFSU2_TR(0x656a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656a21:{NFSU2_TR(0x656a21);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656a23:{NFSU2_TR(0x656a23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a24:{NFSU2_TR(0x656a24);
__builtin_memmove((R+28),(R+4),4);
}
B656a26:{NFSU2_TR(0x656a26);
if(r1(R+518)){{goto L656a96;}}
}
B656a28:L656a28:{c.instructions+=4;NFSU2_TR(0x656a28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656a2b:{NFSU2_TR(0x656a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a2c:{NFSU2_TR(0x656a2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656a2f:{NFSU2_TR(0x656a2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B656a34:L656a34:{c.instructions+=2;NFSU2_TR(0x656a34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656a36:{NFSU2_TR(0x656a36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L656a51;}}
}
B656a38:L656a38:{c.instructions+=6;NFSU2_TR(0x656a38);
u8 U[4];
w4(U+0,u32(0x7b483cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a3d:{NFSU2_TR(0x656a3d);
u8 U[4];
w4(U+0,u32(0xbf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a42:{NFSU2_TR(0x656a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656a45:{NFSU2_TR(0x656a45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a46:{NFSU2_TR(0x656a46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a47:{NFSU2_TR(0x656a47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a4cull));
TAIL_STATIC(0x64f52au,64f);
}
B656a4c:L656a4c:{c.instructions+=2;NFSU2_TR(0x656a4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B656a4f:{NFSU2_TR(0x656a4f);
{goto L656a96;}
}
B656a51:L656a51:{c.instructions+=2;NFSU2_TR(0x656a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B656a55:{NFSU2_TR(0x656a55);
if(r1(R+512)){{goto L656a7d;}}
}
B656a57:L656a57:{c.instructions+=2;NFSU2_TR(0x656a57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656a5b:{NFSU2_TR(0x656a5b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L656a7d;}}
}
B656a5d:L656a5d:{c.instructions+=2;NFSU2_TR(0x656a5d);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a5f:{NFSU2_TR(0x656a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a64ull));
TAIL_STATIC(0x645362u,645);
}
B656a64:L656a64:{c.instructions+=2;NFSU2_TR(0x656a64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656a66:{NFSU2_TR(0x656a66);
if(r1(R+518)){{goto L656a96;}}
}
B656a68:L656a68:{c.instructions+=7;NFSU2_TR(0x656a68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a6a:{NFSU2_TR(0x656a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656a6d:{NFSU2_TR(0x656a6d);
__builtin_memmove((R+4),(R+0),4);
}
B656a6f:{NFSU2_TR(0x656a6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a71:{NFSU2_TR(0x656a71);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656a74:{NFSU2_TR(0x656a74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a76:{NFSU2_TR(0x656a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a7bull));
TAIL_STATIC(0x672a51u,672);
}
B656a7b:L656a7b:{c.instructions+=1;NFSU2_TR(0x656a7b);
{goto L656a98;}
}
B656a7d:L656a7d:{c.instructions+=7;NFSU2_TR(0x656a7d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a7f:{NFSU2_TR(0x656a7f);
u8 U[4];
w4(U+0,u32(0x7b4810ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a84:{NFSU2_TR(0x656a84);
u8 U[4];
w4(U+0,u32(0xbecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a89:{NFSU2_TR(0x656a89);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656a8c:{NFSU2_TR(0x656a8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a8d:{NFSU2_TR(0x656a8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656a8e:{NFSU2_TR(0x656a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656a93ull));
TAIL_STATIC(0x64f52au,64f);
}
B656a93:L656a93:{c.instructions+=1;NFSU2_TR(0x656a93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B656a96:L656a96:{c.instructions+=1;NFSU2_TR(0x656a96);
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
B656a98:L656a98:{c.instructions+=4;NFSU2_TR(0x656a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656a99:{NFSU2_TR(0x656a99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656a9a:{NFSU2_TR(0x656a9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B656a9b:{NFSU2_TR(0x656a9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656a9e:L656a9e:{c.instructions+=9;NFSU2_TR(0x656a9e);
__builtin_memmove((R+28),(R+28),4);
}
B656aa0:{NFSU2_TR(0x656aa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656aa1:{NFSU2_TR(0x656aa1);
__builtin_memmove((R+20),(R+16),4);
}
B656aa3:{NFSU2_TR(0x656aa3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656aa4:{NFSU2_TR(0x656aa4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656aa5:{NFSU2_TR(0x656aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B656aa8:{NFSU2_TR(0x656aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656aaa:{NFSU2_TR(0x656aaa);
__builtin_memmove((R+24),(R+4),4);
}
B656aac:{NFSU2_TR(0x656aac);
if(r1(R+518)){{goto L656b3f;}}
}
B656ab2:L656ab2:{c.instructions+=4;NFSU2_TR(0x656ab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B656ab5:{NFSU2_TR(0x656ab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ab6:{NFSU2_TR(0x656ab6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656ab9:{NFSU2_TR(0x656ab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656abeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B656abe:L656abe:{c.instructions+=2;NFSU2_TR(0x656abe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656ac0:{NFSU2_TR(0x656ac0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L656b28;}}
}
B656ac2:L656ac2:{c.instructions+=5;NFSU2_TR(0x656ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656ac5:{NFSU2_TR(0x656ac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ac6:{NFSU2_TR(0x656ac6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656ac9:{NFSU2_TR(0x656ac9);
__builtin_memmove((R+4),(R+24),4);
}
B656acb:{NFSU2_TR(0x656acb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656ad0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B656ad0:L656ad0:{c.instructions+=2;NFSU2_TR(0x656ad0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656ad2:{NFSU2_TR(0x656ad2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L656b28;}}
}
B656ad4:L656ad4:{c.instructions+=2;NFSU2_TR(0x656ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B656ad8:{NFSU2_TR(0x656ad8);
if(r1(R+512)){{goto L656b0d;}}
}
B656ada:L656ada:{c.instructions+=2;NFSU2_TR(0x656ada);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656ade:{NFSU2_TR(0x656ade);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L656b0d;}}
}
B656ae0:L656ae0:{c.instructions+=2;NFSU2_TR(0x656ae0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B656ae4:{NFSU2_TR(0x656ae4);
if(r1(R+512)){{goto L656b0d;}}
}
B656ae6:L656ae6:{c.instructions+=2;NFSU2_TR(0x656ae6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656aea:{NFSU2_TR(0x656aea);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L656b0d;}}
}
B656aec:L656aec:{c.instructions+=2;NFSU2_TR(0x656aec);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656aee:{NFSU2_TR(0x656aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656af3ull));
TAIL_STATIC(0x645362u,645);
}
B656af3:L656af3:{c.instructions+=2;NFSU2_TR(0x656af3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656af5:{NFSU2_TR(0x656af5);
if(r1(R+518)){{goto L656b3f;}}
}
B656af7:L656af7:{c.instructions+=7;NFSU2_TR(0x656af7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656af9:{NFSU2_TR(0x656af9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656afc:{NFSU2_TR(0x656afc);
__builtin_memmove((R+4),(R+0),4);
}
B656afe:{NFSU2_TR(0x656afe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656b01:{NFSU2_TR(0x656b01);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656b04:{NFSU2_TR(0x656b04);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b06:{NFSU2_TR(0x656b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b0bull));
TAIL_STATIC(0x672a51u,672);
}
B656b0b:L656b0b:{c.instructions+=1;NFSU2_TR(0x656b0b);
{goto L656b41;}
}
B656b0d:L656b0d:{c.instructions+=7;NFSU2_TR(0x656b0d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b0f:{NFSU2_TR(0x656b0f);
u8 U[4];
w4(U+0,u32(0x7b48acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b14:{NFSU2_TR(0x656b14);
u8 U[4];
w4(U+0,u32(0xbedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b19:{NFSU2_TR(0x656b19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656b1c:{NFSU2_TR(0x656b1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b1d:{NFSU2_TR(0x656b1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b1e:{NFSU2_TR(0x656b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b23ull));
TAIL_STATIC(0x64f52au,64f);
}
B656b23:L656b23:{c.instructions+=2;NFSU2_TR(0x656b23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B656b26:{NFSU2_TR(0x656b26);
{goto L656b3f;}
}
B656b28:L656b28:{c.instructions+=6;NFSU2_TR(0x656b28);
u8 U[4];
w4(U+0,u32(0x7b4874ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b2d:{NFSU2_TR(0x656b2d);
u8 U[4];
w4(U+0,u32(0xbf5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b32:{NFSU2_TR(0x656b32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656b35:{NFSU2_TR(0x656b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b36:{NFSU2_TR(0x656b36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b37:{NFSU2_TR(0x656b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b3cull));
TAIL_STATIC(0x64f52au,64f);
}
B656b3c:L656b3c:{c.instructions+=1;NFSU2_TR(0x656b3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B656b3f:L656b3f:{c.instructions+=1;NFSU2_TR(0x656b3f);
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
B656b41:L656b41:{c.instructions+=4;NFSU2_TR(0x656b41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656b42:{NFSU2_TR(0x656b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656b43:{NFSU2_TR(0x656b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B656b44:{NFSU2_TR(0x656b44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656b47:L656b47:{c.instructions+=9;NFSU2_TR(0x656b47);
__builtin_memmove((R+28),(R+28),4);
}
B656b49:{NFSU2_TR(0x656b49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b4a:{NFSU2_TR(0x656b4a);
__builtin_memmove((R+20),(R+16),4);
}
B656b4c:{NFSU2_TR(0x656b4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b4d:{NFSU2_TR(0x656b4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B656b50:{NFSU2_TR(0x656b50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b51:{NFSU2_TR(0x656b51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656b54:{NFSU2_TR(0x656b54);
__builtin_memmove((R+24),(R+4),4);
}
B656b56:{NFSU2_TR(0x656b56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b5bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B656b5b:L656b5b:{c.instructions+=2;NFSU2_TR(0x656b5b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656b5d:{NFSU2_TR(0x656b5d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L656b76;}}
}
B656b5f:L656b5f:{c.instructions+=5;NFSU2_TR(0x656b5f);
u8 U[4];
w4(U+0,u32(0x7b48d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b64:{NFSU2_TR(0x656b64);
u8 U[4];
w4(U+0,u32(0xbf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b69:{NFSU2_TR(0x656b69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b6b:{NFSU2_TR(0x656b6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b6c:{NFSU2_TR(0x656b6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b71ull));
TAIL_STATIC(0x64f52au,64f);
}
B656b71:L656b71:{c.instructions+=2;NFSU2_TR(0x656b71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B656b74:{NFSU2_TR(0x656b74);
{goto L656b96;}
}
B656b76:L656b76:{c.instructions+=2;NFSU2_TR(0x656b76);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b78:{NFSU2_TR(0x656b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b7dull));
TAIL_STATIC(0x645362u,645);
}
B656b7d:L656b7d:{c.instructions+=3;NFSU2_TR(0x656b7d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B656b7f:{NFSU2_TR(0x656b7f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656b81:{NFSU2_TR(0x656b81);
if(r1(R+518)){{goto L656b90;}}
}
B656b83:L656b83:{c.instructions+=4;NFSU2_TR(0x656b83);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656b86:{NFSU2_TR(0x656b86);
__builtin_memmove((R+4),(R+0),4);
}
B656b88:{NFSU2_TR(0x656b88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656b89:{NFSU2_TR(0x656b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656b8eull));
TAIL_STATIC(0x6729d1u,672);
}
B656b8e:L656b8e:{c.instructions+=1;NFSU2_TR(0x656b8e);
{goto L656b92;}
}
B656b90:L656b90:{c.instructions+=1;NFSU2_TR(0x656b90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656b92:L656b92:{c.instructions+=2;NFSU2_TR(0x656b92);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656b94:{NFSU2_TR(0x656b94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656b9a;}}
}
B656b96:L656b96:{c.instructions+=2;NFSU2_TR(0x656b96);
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
B656b98:{NFSU2_TR(0x656b98);
{goto L656bbb;}
}
B656b9a:L656b9a:{c.instructions+=3;NFSU2_TR(0x656b9a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B656b9d:{NFSU2_TR(0x656b9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656ba0:{NFSU2_TR(0x656ba0);
if(r1(R+518)){{goto L656bb1;}}
}
B656ba2:L656ba2:{c.instructions+=3;NFSU2_TR(0x656ba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B656ba4:{NFSU2_TR(0x656ba4);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B656ba8:{NFSU2_TR(0x656ba8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656bb1;}}
}
B656baa:L656baa:{c.instructions+=3;NFSU2_TR(0x656baa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656bad:{NFSU2_TR(0x656bad);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B656baf:{NFSU2_TR(0x656baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656ba2u);}goto L656ba2;}}
}
B656bb1:L656bb1:{c.instructions+=4;NFSU2_TR(0x656bb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B656bb3:{NFSU2_TR(0x656bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656bb6:{NFSU2_TR(0x656bb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B656bb8:{NFSU2_TR(0x656bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656bbb:L656bbb:{c.instructions+=3;NFSU2_TR(0x656bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656bbc:{NFSU2_TR(0x656bbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B656bbd:{NFSU2_TR(0x656bbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656bc0:L656bc0:{c.instructions+=12;NFSU2_TR(0x656bc0);
__builtin_memmove((R+28),(R+28),4);
}
B656bc2:{NFSU2_TR(0x656bc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656bc3:{NFSU2_TR(0x656bc3);
__builtin_memmove((R+20),(R+16),4);
}
B656bc5:{NFSU2_TR(0x656bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B656bc8:{NFSU2_TR(0x656bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656bcb:{NFSU2_TR(0x656bcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656bcc:{NFSU2_TR(0x656bcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656bcd:{NFSU2_TR(0x656bcd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B656bcf:{NFSU2_TR(0x656bcf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656bd1:{NFSU2_TR(0x656bd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656bd2:{NFSU2_TR(0x656bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656bd5:{NFSU2_TR(0x656bd5);
if(r1(R+518)){{goto L656de1;}}
}
B656bdb:L656bdb:{c.instructions+=2;NFSU2_TR(0x656bdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656bdf:{NFSU2_TR(0x656bdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656de1;}}
}
B656be5:L656be5:{c.instructions+=3;NFSU2_TR(0x656be5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656be8:{NFSU2_TR(0x656be8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656bea:{NFSU2_TR(0x656bea);
if(r1(R+518)){{goto L656de1;}}
}
B656bf0:L656bf0:{c.instructions+=2;NFSU2_TR(0x656bf0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656bf4:{NFSU2_TR(0x656bf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656de1;}}
}
B656bfa:L656bfa:{c.instructions+=4;NFSU2_TR(0x656bfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656bfd:{NFSU2_TR(0x656bfd);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656bff:{NFSU2_TR(0x656bff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656c02:{NFSU2_TR(0x656c02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656c07ull));
TAIL_STATIC(0x645362u,645);
}
B656c07:L656c07:{c.instructions+=4;NFSU2_TR(0x656c07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B656c09:{NFSU2_TR(0x656c09);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B656c0a:{NFSU2_TR(0x656c0a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656c0c:{NFSU2_TR(0x656c0c);
if(r1(R+518)){{goto L656c20;}}
}
B656c0e:L656c0e:{c.instructions+=8;NFSU2_TR(0x656c0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c0f:{NFSU2_TR(0x656c0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c10:{NFSU2_TR(0x656c10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c11:{NFSU2_TR(0x656c11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c12:{NFSU2_TR(0x656c12);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c14:{NFSU2_TR(0x656c14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c15:{NFSU2_TR(0x656c15);
__builtin_memmove((R+4),(R+0),4);
}
B656c17:{NFSU2_TR(0x656c17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656c1cull));
TAIL_STATIC(0x672d7bu,672);
}
B656c1c:L656c1c:{c.instructions+=2;NFSU2_TR(0x656c1c);
__builtin_memmove((R+28),(R+0),4);
}
B656c1e:{NFSU2_TR(0x656c1e);
{goto L656c22;}
}
B656c20:L656c20:{c.instructions+=1;NFSU2_TR(0x656c20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B656c22:L656c22:{c.instructions+=2;NFSU2_TR(0x656c22);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656c24:{NFSU2_TR(0x656c24);
if(r1(R+518)){{goto L656de1;}}
}
B656c2a:L656c2a:{c.instructions+=7;NFSU2_TR(0x656c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656c2d:{NFSU2_TR(0x656c2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656c30:{NFSU2_TR(0x656c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656c32:{NFSU2_TR(0x656c32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656c35:{NFSU2_TR(0x656c35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656c38:{NFSU2_TR(0x656c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656c3b:{NFSU2_TR(0x656c3b);
if(r1(R+518)){{goto L656dc9;}}
}
B656c41:L656c41:{c.instructions+=3;NFSU2_TR(0x656c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656c44:{NFSU2_TR(0x656c44);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656c47:{NFSU2_TR(0x656c47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656c6a;}}
}
B656c49:L656c49:{c.instructions+=2;NFSU2_TR(0x656c49);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B656c4d:{NFSU2_TR(0x656c4d);
if(r1(R+518)){{goto L656c62;}}
}
B656c4f:L656c4f:{c.instructions+=3;NFSU2_TR(0x656c4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656c52:{NFSU2_TR(0x656c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656c54:{NFSU2_TR(0x656c54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656c57ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B656c57:L656c57:{c.instructions+=3;NFSU2_TR(0x656c57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656c59:{NFSU2_TR(0x656c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656c5c:{NFSU2_TR(0x656c5c);
if(r1(R+518)){{goto L656de1;}}
}
B656c62:L656c62:{c.instructions+=2;NFSU2_TR(0x656c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656c65:{NFSU2_TR(0x656c65);
{goto L656cf8;}
}
B656c6a:L656c6a:{c.instructions+=2;NFSU2_TR(0x656c6a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656c6d:{NFSU2_TR(0x656c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656dc9;}}
}
B656c73:L656c73:{c.instructions+=2;NFSU2_TR(0x656c73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656c76:{NFSU2_TR(0x656c76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656caf;}}
}
B656c78:L656c78:{c.instructions+=2;NFSU2_TR(0x656c78);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c7a:{NFSU2_TR(0x656c7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656c7full));
TAIL_STATIC(0x645362u,645);
}
B656c7f:L656c7f:{c.instructions+=2;NFSU2_TR(0x656c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656c81:{NFSU2_TR(0x656c81);
if(r1(R+518)){{goto L656c9d;}}
}
B656c83:L656c83:{c.instructions+=9;NFSU2_TR(0x656c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656c86:{NFSU2_TR(0x656c86);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
}
B656c8c:{NFSU2_TR(0x656c8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c8d:{NFSU2_TR(0x656c8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c8e:{NFSU2_TR(0x656c8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c8f:{NFSU2_TR(0x656c8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656c92:{NFSU2_TR(0x656c92);
__builtin_memmove((R+4),(R+0),4);
}
B656c94:{NFSU2_TR(0x656c94);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656c96:{NFSU2_TR(0x656c96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656c9bull));
TAIL_STATIC(0x672a51u,672);
}
B656c9b:L656c9b:{c.instructions+=1;NFSU2_TR(0x656c9b);
{goto L656c9f;}
}
B656c9d:L656c9d:{c.instructions+=1;NFSU2_TR(0x656c9d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656c9f:L656c9f:{c.instructions+=3;NFSU2_TR(0x656c9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656ca1:{NFSU2_TR(0x656ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656ca4:{NFSU2_TR(0x656ca4);
if(r1(R+518)){{goto L656de1;}}
}
B656caa:L656caa:{c.instructions+=2;NFSU2_TR(0x656caa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656cad:{NFSU2_TR(0x656cad);
{goto L656cf8;}
}
B656caf:L656caf:{c.instructions+=2;NFSU2_TR(0x656caf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656cb2:{NFSU2_TR(0x656cb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656dc9;}}
}
B656cb8:L656cb8:{c.instructions+=2;NFSU2_TR(0x656cb8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656cbc:{NFSU2_TR(0x656cbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656dc9;}}
}
B656cc2:L656cc2:{c.instructions+=2;NFSU2_TR(0x656cc2);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656cc4:{NFSU2_TR(0x656cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656cc9ull));
TAIL_STATIC(0x645362u,645);
}
B656cc9:L656cc9:{c.instructions+=2;NFSU2_TR(0x656cc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656ccb:{NFSU2_TR(0x656ccb);
if(r1(R+518)){{goto L656ce8;}}
}
B656ccd:L656ccd:{c.instructions+=9;NFSU2_TR(0x656ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656cd0:{NFSU2_TR(0x656cd0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x200ull))));
}
B656cd6:{NFSU2_TR(0x656cd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656cd7:{NFSU2_TR(0x656cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656cda:{NFSU2_TR(0x656cda);
__builtin_memmove((R+4),(R+0),4);
}
B656cdc:{NFSU2_TR(0x656cdc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656cdd:{NFSU2_TR(0x656cdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656ce0:{NFSU2_TR(0x656ce0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ce1:{NFSU2_TR(0x656ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656ce6ull));
TAIL_STATIC(0x672a51u,672);
}
B656ce6:L656ce6:{c.instructions+=1;NFSU2_TR(0x656ce6);
{goto L656cea;}
}
B656ce8:L656ce8:{c.instructions+=1;NFSU2_TR(0x656ce8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656cea:L656cea:{c.instructions+=3;NFSU2_TR(0x656cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656cec:{NFSU2_TR(0x656cec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656cef:{NFSU2_TR(0x656cef);
if(r1(R+518)){{goto L656de1;}}
}
B656cf5:L656cf5:{c.instructions+=1;NFSU2_TR(0x656cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B656cf8:L656cf8:{c.instructions+=4;NFSU2_TR(0x656cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656cfb:{NFSU2_TR(0x656cfb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656cfe:{NFSU2_TR(0x656cfe);
__builtin_memmove((R+4),(R+12),4);
}
B656d00:{NFSU2_TR(0x656d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d05ull));
TAIL_STATIC(0x64fac3u,64f);
}
B656d05:L656d05:{c.instructions+=2;NFSU2_TR(0x656d05);
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
B656d07:{NFSU2_TR(0x656d07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656d1c;}}
}
B656d09:L656d09:{c.instructions+=5;NFSU2_TR(0x656d09);
u8 U[4];
w4(U+0,u32(0x7b491cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d0e:{NFSU2_TR(0x656d0e);
u8 U[4];
w4(U+0,u32(0xbebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d13:{NFSU2_TR(0x656d13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d16:{NFSU2_TR(0x656d16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d17:{NFSU2_TR(0x656d17);
{goto L656dd9;}
}
B656d1c:L656d1c:{c.instructions+=3;NFSU2_TR(0x656d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656d1f:{NFSU2_TR(0x656d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656d21:{NFSU2_TR(0x656d21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d24ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B656d24:L656d24:{c.instructions+=3;NFSU2_TR(0x656d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656d26:{NFSU2_TR(0x656d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656d29:{NFSU2_TR(0x656d29);
if(r1(R+518)){{goto L656de1;}}
}
B656d2f:L656d2f:{c.instructions+=3;NFSU2_TR(0x656d2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d32:{NFSU2_TR(0x656d32);
__builtin_memmove((R+4),(R+12),4);
}
B656d34:{NFSU2_TR(0x656d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d39ull));
TAIL_STATIC(0x650453u,650);
}
B656d39:L656d39:{c.instructions+=2;NFSU2_TR(0x656d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656d3b:{NFSU2_TR(0x656d3b);
if(r1(R+518)){{goto L656dae;}}
}
B656d3d:L656d3d:{c.instructions+=5;NFSU2_TR(0x656d3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B656d40:{NFSU2_TR(0x656d40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d41:{NFSU2_TR(0x656d41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d44:{NFSU2_TR(0x656d44);
__builtin_memmove((R+4),(R+12),4);
}
B656d46:{NFSU2_TR(0x656d46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6567c7u);}goto L6567c7;}
}
B656d4b:L656d4b:{c.instructions+=2;NFSU2_TR(0x656d4b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B656d4d:{NFSU2_TR(0x656d4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L656de1;}}
}
B656d53:L656d53:{c.instructions+=2;NFSU2_TR(0x656d53);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
}
B656d56:{NFSU2_TR(0x656d56);
if(r1(R+512)){{goto L656d72;}}
}
B656d58:L656d58:{c.instructions+=5;NFSU2_TR(0x656d58);
u8 U[4];
w4(U+0,u32(0x7b43e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d5d:{NFSU2_TR(0x656d5d);
u8 U[4];
w4(U+0,u32(0xbd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d62:{NFSU2_TR(0x656d62);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d65:{NFSU2_TR(0x656d65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d66:{NFSU2_TR(0x656d66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d6bull));
TAIL_STATIC(0x64f52au,64f);
}
B656d6b:L656d6b:{c.instructions+=2;NFSU2_TR(0x656d6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B656d6e:{NFSU2_TR(0x656d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B656d72:L656d72:{c.instructions+=3;NFSU2_TR(0x656d72);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d75:{NFSU2_TR(0x656d75);
__builtin_memmove((R+4),(R+12),4);
}
B656d77:{NFSU2_TR(0x656d77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d7cull));
TAIL_STATIC(0x64fb5eu,64f);
}
B656d7c:L656d7c:{c.instructions+=3;NFSU2_TR(0x656d7c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d7e:{NFSU2_TR(0x656d7e);
__builtin_memmove((R+24),(R+0),4);
}
B656d80:{NFSU2_TR(0x656d80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d85ull));
TAIL_STATIC(0x645362u,645);
}
B656d85:L656d85:{c.instructions+=2;NFSU2_TR(0x656d85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656d87:{NFSU2_TR(0x656d87);
if(r1(R+518)){{goto L656d9c;}}
}
B656d89:L656d89:{c.instructions+=6;NFSU2_TR(0x656d89);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+24,u32(r8(U+24)));
}
B656d8d:{NFSU2_TR(0x656d8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656d90:{NFSU2_TR(0x656d90);
__builtin_memmove((R+4),(R+0),4);
}
B656d92:{NFSU2_TR(0x656d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d93:{NFSU2_TR(0x656d93);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656d95:{NFSU2_TR(0x656d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656d9aull));
TAIL_STATIC(0x672ec8u,672);
}
B656d9a:L656d9a:{c.instructions+=1;NFSU2_TR(0x656d9a);
{goto L656d9e;}
}
B656d9c:L656d9c:{c.instructions+=1;NFSU2_TR(0x656d9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B656d9e:L656d9e:{c.instructions+=3;NFSU2_TR(0x656d9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656da0:{NFSU2_TR(0x656da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656da3:{NFSU2_TR(0x656da3);
if(r1(R+518)){{goto L656de1;}}
}
B656da5:L656da5:{c.instructions+=2;NFSU2_TR(0x656da5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0x17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B656dac:{NFSU2_TR(0x656dac);
{goto L656dbd;}
}
B656dae:L656dae:{c.instructions+=2;NFSU2_TR(0x656dae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656db1:{NFSU2_TR(0x656db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656db6ull));
TAIL_STATIC(0x672440u,672);
}
B656db6:L656db6:{c.instructions+=3;NFSU2_TR(0x656db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656db8:{NFSU2_TR(0x656db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656dbb:{NFSU2_TR(0x656dbb);
if(r1(R+518)){{goto L656de1;}}
}
B656dbd:L656dbd:{c.instructions+=3;NFSU2_TR(0x656dbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656dbe:{NFSU2_TR(0x656dbe);
__builtin_memmove((R+4),(R+12),4);
}
B656dc0:{NFSU2_TR(0x656dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656dc5ull));
TAIL_STATIC(0x650571u,650);
}
B656dc5:L656dc5:{c.instructions+=2;NFSU2_TR(0x656dc5);
__builtin_memmove((R+0),(R+28),4);
}
B656dc7:{NFSU2_TR(0x656dc7);
{goto L656de3;}
}
B656dc9:L656dc9:{c.instructions+=4;NFSU2_TR(0x656dc9);
u8 U[4];
w4(U+0,u32(0x7b490cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656dce:{NFSU2_TR(0x656dce);
u8 U[4];
w4(U+0,u32(0xbcdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656dd3:{NFSU2_TR(0x656dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656dd6:{NFSU2_TR(0x656dd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656dd9:L656dd9:{c.instructions+=1;NFSU2_TR(0x656dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656ddeull));
TAIL_STATIC(0x64f52au,64f);
}
B656dde:L656dde:{c.instructions+=1;NFSU2_TR(0x656dde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B656de1:L656de1:{c.instructions+=1;NFSU2_TR(0x656de1);
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
B656de3:L656de3:{c.instructions+=5;NFSU2_TR(0x656de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B656de4:{NFSU2_TR(0x656de4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B656de5:{NFSU2_TR(0x656de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B656de6:{NFSU2_TR(0x656de6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B656de7:{NFSU2_TR(0x656de7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B656dea:L656dea:{c.instructions+=15;NFSU2_TR(0x656dea);
__builtin_memmove((R+28),(R+28),4);
}
B656dec:{NFSU2_TR(0x656dec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ded:{NFSU2_TR(0x656ded);
__builtin_memmove((R+20),(R+16),4);
}
B656def:{NFSU2_TR(0x656def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B656df2:{NFSU2_TR(0x656df2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656df3:{NFSU2_TR(0x656df3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656df6:{NFSU2_TR(0x656df6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656df7:{NFSU2_TR(0x656df7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B656df9:{NFSU2_TR(0x656df9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656dfb:{NFSU2_TR(0x656dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656dfe:{NFSU2_TR(0x656dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e01:{NFSU2_TR(0x656e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e04:{NFSU2_TR(0x656e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e07:{NFSU2_TR(0x656e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e0a:{NFSU2_TR(0x656e0a);
if(r1(R+518)){{goto L656e12;}}
}
B656e0c:L656e0c:{c.instructions+=2;NFSU2_TR(0x656e0c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656e10:{NFSU2_TR(0x656e10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656e1f;}}
}
B656e12:L656e12:{c.instructions+=3;NFSU2_TR(0x656e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656e15:{NFSU2_TR(0x656e15);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e17:{NFSU2_TR(0x656e17);
if(r1(R+518)){{goto L656e2e;}}
}
B656e19:L656e19:{c.instructions+=2;NFSU2_TR(0x656e19);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656e1d:{NFSU2_TR(0x656e1d);
if(r1(R+518)){{goto L656e26;}}
}
B656e1f:L656e1f:{c.instructions+=2;NFSU2_TR(0x656e1f);
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
B656e21:{NFSU2_TR(0x656e21);
TAIL_STATIC(0x6571fdu,657);
}
B656e26:L656e26:{c.instructions+=1;NFSU2_TR(0x656e26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B656e29:L656e29:{c.instructions+=2;NFSU2_TR(0x656e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e2c:{NFSU2_TR(0x656e2c);
{goto L656e3d;}
}
B656e2e:L656e2e:{c.instructions+=2;NFSU2_TR(0x656e2e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e30:{NFSU2_TR(0x656e30);
if(r1(R+518)){{goto L656e37;}}
}
B656e32:L656e32:{c.instructions+=2;NFSU2_TR(0x656e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656e35:{NFSU2_TR(0x656e35);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656e29u);}goto L656e29;}
}
B656e37:L656e37:{c.instructions+=2;NFSU2_TR(0x656e37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B656e3a:{NFSU2_TR(0x656e3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e3d:L656e3d:{c.instructions+=3;NFSU2_TR(0x656e3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e3e:{NFSU2_TR(0x656e3e);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e40:{NFSU2_TR(0x656e40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656e45ull));
TAIL_STATIC(0x645362u,645);
}
B656e45:L656e45:{c.instructions+=3;NFSU2_TR(0x656e45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e47:{NFSU2_TR(0x656e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B656e4a:{NFSU2_TR(0x656e4a);
if(r1(R+518)){{goto L656e63;}}
}
B656e4c:L656e4c:{c.instructions+=9;NFSU2_TR(0x656e4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656e4f:{NFSU2_TR(0x656e4f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B656e51:{NFSU2_TR(0x656e51);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656e54:{NFSU2_TR(0x656e54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e55:{NFSU2_TR(0x656e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e56:{NFSU2_TR(0x656e56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e57:{NFSU2_TR(0x656e57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e58:{NFSU2_TR(0x656e58);
__builtin_memmove((R+4),(R+0),4);
}
B656e5a:{NFSU2_TR(0x656e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656e5full));
TAIL_STATIC(0x672d7bu,672);
}
B656e5f:L656e5f:{c.instructions+=2;NFSU2_TR(0x656e5f);
__builtin_memmove((R+24),(R+0),4);
}
B656e61:{NFSU2_TR(0x656e61);
{goto L656e65;}
}
B656e63:L656e63:{c.instructions+=1;NFSU2_TR(0x656e63);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B656e65:L656e65:{c.instructions+=2;NFSU2_TR(0x656e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656e67:{NFSU2_TR(0x656e67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656e70;}}
}
B656e69:L656e69:{c.instructions+=2;NFSU2_TR(0x656e69);
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
B656e6b:{NFSU2_TR(0x656e6b);
TAIL_STATIC(0x6571fcu,657);
}
B656e70:L656e70:{c.instructions+=2;NFSU2_TR(0x656e70);
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
B656e72:{NFSU2_TR(0x656e72);
if(r1(R+518)){{goto L656e86;}}
}
B656e74:L656e74:{c.instructions+=3;NFSU2_TR(0x656e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656e76:{NFSU2_TR(0x656e76);
__builtin_memmove((R+4),(R+12),4);
}
B656e78:{NFSU2_TR(0x656e78);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656e7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B656e7b:L656e7b:{c.instructions+=3;NFSU2_TR(0x656e7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656e7d:{NFSU2_TR(0x656e7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656e80:{NFSU2_TR(0x656e80);
if(r1(R+518)){TAIL_STATIC(0x6571f8u,657);}
}
B656e86:L656e86:{c.instructions+=4;NFSU2_TR(0x656e86);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e89:{NFSU2_TR(0x656e89);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656e8b:{NFSU2_TR(0x656e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B656e8c:{NFSU2_TR(0x656e8c);
if(r1(R+518)){{goto L656ec6;}}
}
B656e8e:L656e8e:{c.instructions+=2;NFSU2_TR(0x656e8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e91:{NFSU2_TR(0x656e91);
if(r1(R+518)){{goto L656ec6;}}
}
B656e93:L656e93:{c.instructions+=2;NFSU2_TR(0x656e93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e96:{NFSU2_TR(0x656e96);
if(r1(R+518)){{goto L656ec6;}}
}
B656e98:L656e98:{c.instructions+=2;NFSU2_TR(0x656e98);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656e9b:{NFSU2_TR(0x656e9b);
if(r1(R+518)){{goto L656ec6;}}
}
B656e9d:L656e9d:{c.instructions+=2;NFSU2_TR(0x656e9d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656ea0:{NFSU2_TR(0x656ea0);
if(r1(R+518)){{goto L656ec6;}}
}
B656ea2:L656ea2:{c.instructions+=2;NFSU2_TR(0x656ea2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x21ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656ea5:{NFSU2_TR(0x656ea5);
if(r1(R+518)){{goto L656ec6;}}
}
B656ea7:L656ea7:{c.instructions+=2;NFSU2_TR(0x656ea7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656eaa:{NFSU2_TR(0x656eaa);
if(r1(R+518)){{goto L656ec6;}}
}
B656eac:L656eac:{c.instructions+=2;NFSU2_TR(0x656eac);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B656eb0:{NFSU2_TR(0x656eb0);
if(r1(R+518)){{goto L656f24;}}
}
B656eb2:L656eb2:{c.instructions+=3;NFSU2_TR(0x656eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656eb5:{NFSU2_TR(0x656eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B656eb7:{NFSU2_TR(0x656eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656ebaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B656eba:L656eba:{c.instructions+=3;NFSU2_TR(0x656eba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656ebc:{NFSU2_TR(0x656ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656ebf:{NFSU2_TR(0x656ebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656f24;}}
}
B656ec1:L656ec1:{c.instructions+=1;NFSU2_TR(0x656ec1);
TAIL_STATIC(0x6571f8u,657);
}
B656ec6:L656ec6:{c.instructions+=3;NFSU2_TR(0x656ec6);
__builtin_memmove((R+0),(R+28),4);
}
B656ec8:{NFSU2_TR(0x656ec8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1cull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656ecb:{NFSU2_TR(0x656ecb);
if(r1(R+518)){{goto L656efd;}}
}
B656ecd:L656ecd:{c.instructions+=2;NFSU2_TR(0x656ecd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656ece:{NFSU2_TR(0x656ece);
if(r1(R+518)){{goto L656ef9;}}
}
B656ed0:L656ed0:{c.instructions+=2;NFSU2_TR(0x656ed0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656ed1:{NFSU2_TR(0x656ed1);
if(r1(R+518)){{goto L656ef5;}}
}
B656ed3:L656ed3:{c.instructions+=2;NFSU2_TR(0x656ed3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656ed4:{NFSU2_TR(0x656ed4);
if(r1(R+518)){{goto L656ef1;}}
}
B656ed6:L656ed6:{c.instructions+=2;NFSU2_TR(0x656ed6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656ed7:{NFSU2_TR(0x656ed7);
if(r1(R+518)){{goto L656eed;}}
}
B656ed9:L656ed9:{c.instructions+=2;NFSU2_TR(0x656ed9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656eda:{NFSU2_TR(0x656eda);
if(r1(R+518)){{goto L656ee6;}}
}
B656edc:L656edc:{c.instructions+=2;NFSU2_TR(0x656edc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B656edd:{NFSU2_TR(0x656edd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656f04;}}
}
B656edf:L656edf:{c.instructions+=4;NFSU2_TR(0x656edf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B656ee1:{NFSU2_TR(0x656ee1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B656ee2:{NFSU2_TR(0x656ee2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ee4:{NFSU2_TR(0x656ee4);
{goto L656f01;}
}
B656ee6:L656ee6:{c.instructions+=4;NFSU2_TR(0x656ee6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B656ee8:{NFSU2_TR(0x656ee8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B656ee9:{NFSU2_TR(0x656ee9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656eeb:{NFSU2_TR(0x656eeb);
{goto L656f01;}
}
B656eed:L656eed:{c.instructions+=2;NFSU2_TR(0x656eed);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656eef:{NFSU2_TR(0x656eef);
{goto L656eff;}
}
B656ef1:L656ef1:{c.instructions+=2;NFSU2_TR(0x656ef1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ef3:{NFSU2_TR(0x656ef3);
{goto L656eff;}
}
B656ef5:L656ef5:{c.instructions+=2;NFSU2_TR(0x656ef5);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656ef7:{NFSU2_TR(0x656ef7);
{goto L656eff;}
}
B656ef9:L656ef9:{c.instructions+=2;NFSU2_TR(0x656ef9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656efb:{NFSU2_TR(0x656efb);
{goto L656eff;}
}
B656efd:L656efd:{c.instructions+=1;NFSU2_TR(0x656efd);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656eff:L656eff:{c.instructions+=1;NFSU2_TR(0x656eff);
__builtin_memmove((R+28),(R+4),4);
}
B656f01:L656f01:{c.instructions+=2;NFSU2_TR(0x656f01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B656f02:{NFSU2_TR(0x656f02);
{goto L656f07;}
}
B656f04:L656f04:{c.instructions+=1;NFSU2_TR(0x656f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656f07:L656f07:{c.instructions+=6;NFSU2_TR(0x656f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656f0a:{NFSU2_TR(0x656f0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f0c:{NFSU2_TR(0x656f0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656f0f:{NFSU2_TR(0x656f0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f10:{NFSU2_TR(0x656f10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f11:{NFSU2_TR(0x656f11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656f16ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x656deau);}goto L656dea;}
}
B656f16:L656f16:{c.instructions+=3;NFSU2_TR(0x656f16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656f18:{NFSU2_TR(0x656f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656f1b:{NFSU2_TR(0x656f1b);
if(r1(R+518)){TAIL_STATIC(0x6571f8u,657);}
}
B656f21:L656f21:{c.instructions+=1;NFSU2_TR(0x656f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656f24:L656f24:{c.instructions+=3;NFSU2_TR(0x656f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656f27:{NFSU2_TR(0x656f27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656f29:{NFSU2_TR(0x656f29);
if(r1(R+518)){{goto L656f36;}}
}
B656f2b:L656f2b:{c.instructions+=4;NFSU2_TR(0x656f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656f2e:{NFSU2_TR(0x656f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656f31:{NFSU2_TR(0x656f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656f34:{NFSU2_TR(0x656f34);
{goto L656f39;}
}
B656f36:L656f36:{c.instructions+=1;NFSU2_TR(0x656f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656f39:L656f39:{c.instructions+=2;NFSU2_TR(0x656f39);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656f3b:{NFSU2_TR(0x656f3b);
if(r1(R+518)){{goto L656f7f;}}
}
B656f3d:L656f3d:{c.instructions+=2;NFSU2_TR(0x656f3d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f40:{NFSU2_TR(0x656f40);
if(r1(R+518)){{goto L656f7f;}}
}
B656f42:L656f42:{c.instructions+=2;NFSU2_TR(0x656f42);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f45:{NFSU2_TR(0x656f45);
if(r1(R+518)){{goto L656f7f;}}
}
B656f47:L656f47:{c.instructions+=2;NFSU2_TR(0x656f47);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f4a:{NFSU2_TR(0x656f4a);
if(r1(R+518)){{goto L656f7f;}}
}
B656f4c:L656f4c:{c.instructions+=2;NFSU2_TR(0x656f4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f4f:{NFSU2_TR(0x656f4f);
if(r1(R+518)){{goto L656f7f;}}
}
B656f51:L656f51:{c.instructions+=2;NFSU2_TR(0x656f51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f54:{NFSU2_TR(0x656f54);
if(r1(R+518)){{goto L656f7f;}}
}
B656f56:L656f56:{c.instructions+=2;NFSU2_TR(0x656f56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656f58:{NFSU2_TR(0x656f58);
if(r1(R+518)){{goto L656f70;}}
}
B656f5a:L656f5a:{c.instructions+=3;NFSU2_TR(0x656f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656f5d:{NFSU2_TR(0x656f5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B656f61:{NFSU2_TR(0x656f61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656f70;}}
}
B656f63:L656f63:{c.instructions+=3;NFSU2_TR(0x656f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656f66:{NFSU2_TR(0x656f66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f67:{NFSU2_TR(0x656f67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656f6cull));
TAIL_STATIC(0x64fae7u,64f);
}
B656f6c:L656f6c:{c.instructions+=2;NFSU2_TR(0x656f6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656f6e:{NFSU2_TR(0x656f6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656f7f;}}
}
B656f70:L656f70:{c.instructions+=3;NFSU2_TR(0x656f70);
u8 U[4];
w4(U+0,u32(0x7b4990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f75:{NFSU2_TR(0x656f75);
u8 U[4];
w4(U+0,u32(0xbceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f7a:{NFSU2_TR(0x656f7a);
TAIL_STATIC(0x6571eau,657);
}
B656f7f:L656f7f:{c.instructions+=2;NFSU2_TR(0x656f7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f82:{NFSU2_TR(0x656f82);
if(r1(R+518)){{goto L656f93;}}
}
B656f84:L656f84:{c.instructions+=2;NFSU2_TR(0x656f84);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f87:{NFSU2_TR(0x656f87);
if(r1(R+518)){{goto L656f93;}}
}
B656f89:L656f89:{c.instructions+=2;NFSU2_TR(0x656f89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f8c:{NFSU2_TR(0x656f8c);
if(r1(R+518)){{goto L656f93;}}
}
B656f8e:L656f8e:{c.instructions+=2;NFSU2_TR(0x656f8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656f91:{NFSU2_TR(0x656f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656fe8;}}
}
B656f93:L656f93:{c.instructions+=4;NFSU2_TR(0x656f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656f96:{NFSU2_TR(0x656f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656f99:{NFSU2_TR(0x656f99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656f9a:{NFSU2_TR(0x656f9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656f9full));
TAIL_STATIC(0x64fa50u,64f);
}
B656f9f:L656f9f:{c.instructions+=2;NFSU2_TR(0x656f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656fa1:{NFSU2_TR(0x656fa1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6571e0u,657);}
}
B656fa7:L656fa7:{c.instructions+=4;NFSU2_TR(0x656fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B656faa:{NFSU2_TR(0x656faa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B656fad:{NFSU2_TR(0x656fad);
__builtin_memmove((R+4),(R+8),4);
}
B656faf:{NFSU2_TR(0x656faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656fb4ull));
TAIL_STATIC(0x6503d7u,650);
}
B656fb4:L656fb4:{c.instructions+=2;NFSU2_TR(0x656fb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656fb6:{NFSU2_TR(0x656fb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6571e0u,657);}
}
B656fbc:L656fbc:{c.instructions+=4;NFSU2_TR(0x656fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656fbf:{NFSU2_TR(0x656fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656fc2:{NFSU2_TR(0x656fc2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656fc5:{NFSU2_TR(0x656fc5);
if(r1(R+518)){{goto L656fcc;}}
}
B656fc7:L656fc7:{c.instructions+=2;NFSU2_TR(0x656fc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656fca:{NFSU2_TR(0x656fca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656feb;}}
}
B656fcc:L656fcc:{c.instructions+=3;NFSU2_TR(0x656fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B656fcf:{NFSU2_TR(0x656fcf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656fd0:{NFSU2_TR(0x656fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x656fd5ull));
TAIL_STATIC(0x64fae7u,64f);
}
B656fd5:L656fd5:{c.instructions+=2;NFSU2_TR(0x656fd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656fd7:{NFSU2_TR(0x656fd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L656feb;}}
}
B656fd9:L656fd9:{c.instructions+=3;NFSU2_TR(0x656fd9);
u8 U[4];
w4(U+0,u32(0x7b495cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656fde:{NFSU2_TR(0x656fde);
u8 U[4];
w4(U+0,u32(0xbf9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B656fe3:{NFSU2_TR(0x656fe3);
TAIL_STATIC(0x6571eau,657);
}
B656fe8:L656fe8:{c.instructions+=1;NFSU2_TR(0x656fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B656feb:L656feb:{c.instructions+=3;NFSU2_TR(0x656feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656fee:{NFSU2_TR(0x656fee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B656ff0:{NFSU2_TR(0x656ff0);
if(r1(R+518)){{goto L656ffb;}}
}
B656ff2:L656ff2:{c.instructions+=3;NFSU2_TR(0x656ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B656ff5:{NFSU2_TR(0x656ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656ff8:{NFSU2_TR(0x656ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B656ffb:L656ffb:{c.instructions+=2;NFSU2_TR(0x656ffb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B656ffe:{NFSU2_TR(0x656ffe);
if(r1(R+518)){TAIL_STATIC(0x657104u,657);}
TAIL_STATIC(0x657004u,657);
}
XIT:NFSU2_TR_EXIT(0x656,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
