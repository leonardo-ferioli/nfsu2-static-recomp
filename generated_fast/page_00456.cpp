#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_448(u8* __restrict R,Cpu& c);
u32 body_449(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_455(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x456,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x456,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_456(u8* __restrict R,Cpu& c);
u32 page_456(Cpu& c){return body_456(c.regs.data(),c);}
__attribute__((noinline)) u32 body_456(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x456001:goto L456001;
case 0x456002:c.instructions+=1;goto B456002;
case 0x456007:goto L456007;
case 0x45600c:c.instructions+=2;goto B45600c;
case 0x45600d:c.instructions+=1;goto B45600d;
case 0x456012:goto L456012;
case 0x456017:c.instructions+=2;goto B456017;
case 0x456018:c.instructions+=1;goto B456018;
case 0x45601d:goto L45601d;
case 0x456022:c.instructions+=2;goto B456022;
case 0x456023:c.instructions+=1;goto B456023;
case 0x456028:goto L456028;
case 0x45602d:c.instructions+=2;goto B45602d;
case 0x45602e:c.instructions+=1;goto B45602e;
case 0x456033:goto L456033;
case 0x456038:c.instructions+=2;goto B456038;
case 0x456039:c.instructions+=1;goto B456039;
case 0x45603e:goto L45603e;
case 0x456043:c.instructions+=2;goto B456043;
case 0x456044:c.instructions+=1;goto B456044;
case 0x456049:goto L456049;
case 0x45604e:c.instructions+=2;goto B45604e;
case 0x45604f:c.instructions+=1;goto B45604f;
case 0x456054:goto L456054;
case 0x456057:c.instructions+=3;goto B456057;
case 0x45605c:c.instructions+=2;goto B45605c;
case 0x45605d:c.instructions+=1;goto B45605d;
case 0x456062:goto L456062;
case 0x456067:c.instructions+=2;goto B456067;
case 0x456068:c.instructions+=1;goto B456068;
case 0x45606d:goto L45606d;
case 0x456072:c.instructions+=2;goto B456072;
case 0x456073:c.instructions+=1;goto B456073;
case 0x456078:goto L456078;
case 0x45607d:c.instructions+=2;goto B45607d;
case 0x45607e:c.instructions+=1;goto B45607e;
case 0x456083:goto L456083;
case 0x456088:c.instructions+=2;goto B456088;
case 0x456089:c.instructions+=1;goto B456089;
case 0x45608e:goto L45608e;
case 0x456093:c.instructions+=2;goto B456093;
case 0x456094:c.instructions+=1;goto B456094;
case 0x456099:goto L456099;
case 0x45609e:c.instructions+=2;goto B45609e;
case 0x45609f:c.instructions+=1;goto B45609f;
case 0x4560a4:goto L4560a4;
case 0x4560a9:c.instructions+=2;goto B4560a9;
case 0x4560aa:c.instructions+=1;goto B4560aa;
case 0x4560af:goto L4560af;
case 0x4560b2:c.instructions+=3;goto B4560b2;
case 0x4560b7:c.instructions+=2;goto B4560b7;
case 0x4560b8:c.instructions+=1;goto B4560b8;
case 0x4560bd:goto L4560bd;
case 0x4560c2:c.instructions+=2;goto B4560c2;
case 0x4560c3:c.instructions+=1;goto B4560c3;
case 0x4560c8:goto L4560c8;
case 0x4560cb:c.instructions+=1;goto B4560cb;
case 0x4560d0:goto L4560d0;
case 0x4560d2:c.instructions+=1;goto B4560d2;
case 0x4560d7:goto L4560d7;
case 0x4560dc:c.instructions+=2;goto B4560dc;
case 0x4560dd:c.instructions+=1;goto B4560dd;
case 0x4560e2:goto L4560e2;
case 0x4560e5:c.instructions+=2;goto B4560e5;
case 0x4560e7:c.instructions+=1;goto B4560e7;
case 0x4560e9:goto L4560e9;
case 0x4560ee:c.instructions+=2;goto B4560ee;
case 0x4560ef:c.instructions+=1;goto B4560ef;
case 0x4560f4:goto L4560f4;
case 0x4560f7:goto L4560f7;
case 0x4560fc:c.instructions+=2;goto B4560fc;
case 0x4560fd:c.instructions+=1;goto B4560fd;
case 0x456102:goto L456102;
case 0x456105:c.instructions+=2;goto B456105;
case 0x456107:c.instructions+=1;goto B456107;
case 0x456109:goto L456109;
case 0x45610e:c.instructions+=2;goto B45610e;
case 0x45610f:c.instructions+=1;goto B45610f;
case 0x456114:goto L456114;
case 0x456117:goto L456117;
case 0x45611c:c.instructions+=2;goto B45611c;
case 0x45611d:c.instructions+=1;goto B45611d;
case 0x456122:goto L456122;
case 0x456127:c.instructions+=2;goto B456127;
case 0x456128:c.instructions+=1;goto B456128;
case 0x45612d:goto L45612d;
case 0x456132:c.instructions+=2;goto B456132;
case 0x456133:c.instructions+=1;goto B456133;
case 0x456138:goto L456138;
case 0x45613d:c.instructions+=2;goto B45613d;
case 0x45613e:c.instructions+=1;goto B45613e;
case 0x456143:goto L456143;
case 0x456148:c.instructions+=2;goto B456148;
case 0x456149:c.instructions+=1;goto B456149;
case 0x45614e:goto L45614e;
case 0x456153:c.instructions+=2;goto B456153;
case 0x456154:c.instructions+=1;goto B456154;
case 0x456159:goto L456159;
case 0x45615e:c.instructions+=2;goto B45615e;
case 0x45615f:c.instructions+=1;goto B45615f;
case 0x456164:goto L456164;
case 0x456169:c.instructions+=2;goto B456169;
case 0x45616a:c.instructions+=1;goto B45616a;
case 0x45616f:goto L45616f;
case 0x456172:c.instructions+=3;goto B456172;
case 0x456177:c.instructions+=2;goto B456177;
case 0x456178:c.instructions+=1;goto B456178;
case 0x45617d:goto L45617d;
case 0x456182:c.instructions+=2;goto B456182;
case 0x456183:c.instructions+=1;goto B456183;
case 0x456188:goto L456188;
case 0x45618d:c.instructions+=2;goto B45618d;
case 0x45618e:c.instructions+=1;goto B45618e;
case 0x456193:goto L456193;
case 0x456198:c.instructions+=2;goto B456198;
case 0x456199:c.instructions+=1;goto B456199;
case 0x45619e:goto L45619e;
case 0x4561a3:c.instructions+=2;goto B4561a3;
case 0x4561a4:c.instructions+=1;goto B4561a4;
case 0x4561a9:goto L4561a9;
case 0x4561ae:c.instructions+=2;goto B4561ae;
case 0x4561af:c.instructions+=1;goto B4561af;
case 0x4561b4:goto L4561b4;
case 0x4561b9:c.instructions+=2;goto B4561b9;
case 0x4561ba:c.instructions+=1;goto B4561ba;
case 0x4561bf:goto L4561bf;
case 0x4561c4:c.instructions+=2;goto B4561c4;
case 0x4561c5:c.instructions+=1;goto B4561c5;
case 0x4561ca:goto L4561ca;
case 0x4561cd:c.instructions+=3;goto B4561cd;
case 0x4561d2:c.instructions+=2;goto B4561d2;
case 0x4561d3:c.instructions+=1;goto B4561d3;
case 0x4561d8:goto L4561d8;
case 0x4561db:goto L4561db;
case 0x4561dd:c.instructions+=3;goto B4561dd;
case 0x4561e0:c.instructions+=2;goto B4561e0;
case 0x4561e6:c.instructions+=1;goto B4561e6;
case 0x4561e8:goto L4561e8;
case 0x4561eb:c.instructions+=1;goto B4561eb;
case 0x4561ed:goto L4561ed;
case 0x4561f0:c.instructions+=1;goto B4561f0;
case 0x4561f2:goto L4561f2;
case 0x4561f4:c.instructions+=2;goto B4561f4;
case 0x4561f6:c.instructions+=1;goto B4561f6;
case 0x4561f8:goto L4561f8;
case 0x4561fa:c.instructions+=1;goto B4561fa;
case 0x4561fc:goto L4561fc;
case 0x4561ff:c.instructions+=1;goto B4561ff;
case 0x456201:goto L456201;
case 0x456203:c.instructions+=3;goto B456203;
case 0x456209:c.instructions+=2;goto B456209;
case 0x45620f:c.instructions+=1;goto B45620f;
case 0x456211:goto L456211;
case 0x456217:c.instructions+=2;goto B456217;
case 0x456219:c.instructions+=1;goto B456219;
case 0x45621b:goto L45621b;
case 0x456221:goto L456221;
case 0x456227:c.instructions+=9;goto B456227;
case 0x456229:c.instructions+=8;goto B456229;
case 0x45622f:c.instructions+=7;goto B45622f;
case 0x456231:c.instructions+=6;goto B456231;
case 0x456233:c.instructions+=5;goto B456233;
case 0x456236:c.instructions+=4;goto B456236;
case 0x456237:c.instructions+=3;goto B456237;
case 0x456239:c.instructions+=2;goto B456239;
case 0x45623b:c.instructions+=1;goto B45623b;
case 0x45623d:goto L45623d;
case 0x45623f:c.instructions+=1;goto B45623f;
case 0x456241:goto L456241;
case 0x456243:goto L456243;
case 0x456249:c.instructions+=2;goto B456249;
case 0x456250:c.instructions+=1;goto B456250;
case 0x456252:goto L456252;
case 0x456258:goto L456258;
case 0x45625c:c.instructions+=5;goto B45625c;
case 0x45625e:c.instructions+=4;goto B45625e;
case 0x456260:c.instructions+=3;goto B456260;
case 0x456262:c.instructions+=2;goto B456262;
case 0x456268:c.instructions+=1;goto B456268;
case 0x45626a:goto L45626a;
case 0x45626d:c.instructions+=1;goto B45626d;
case 0x456273:goto L456273;
case 0x45627a:goto L45627a;
case 0x456280:c.instructions+=2;goto B456280;
case 0x456282:c.instructions+=1;goto B456282;
case 0x456284:goto L456284;
case 0x456286:c.instructions+=1;goto B456286;
case 0x45628b:goto L45628b;
case 0x45628c:c.instructions+=1;goto B45628c;
case 0x456291:goto L456291;
case 0x456294:c.instructions+=1;goto B456294;
case 0x45629a:goto L45629a;
case 0x45629c:c.instructions+=1;goto B45629c;
case 0x4562a1:goto L4562a1;
case 0x4562a7:c.instructions+=2;goto B4562a7;
case 0x4562a8:c.instructions+=1;goto B4562a8;
case 0x4562ad:goto L4562ad;
case 0x4562b3:c.instructions+=3;goto B4562b3;
case 0x4562b6:c.instructions+=2;goto B4562b6;
case 0x4562b7:c.instructions+=1;goto B4562b7;
case 0x4562bc:goto L4562bc;
case 0x4562c2:c.instructions+=4;goto B4562c2;
case 0x4562c8:c.instructions+=3;goto B4562c8;
case 0x4562ca:c.instructions+=2;goto B4562ca;
case 0x4562cd:c.instructions+=1;goto B4562cd;
case 0x4562cf:goto L4562cf;
case 0x4562d5:c.instructions+=11;goto B4562d5;
case 0x4562db:c.instructions+=10;goto B4562db;
case 0x4562dd:c.instructions+=9;goto B4562dd;
case 0x4562e4:c.instructions+=8;goto B4562e4;
case 0x4562e5:c.instructions+=7;goto B4562e5;
case 0x4562e8:c.instructions+=6;goto B4562e8;
case 0x4562e9:c.instructions+=5;goto B4562e9;
case 0x4562ea:c.instructions+=4;goto B4562ea;
case 0x4562f0:c.instructions+=3;goto B4562f0;
case 0x4562f3:c.instructions+=2;goto B4562f3;
case 0x4562f4:c.instructions+=1;goto B4562f4;
case 0x4562f9:goto L4562f9;
case 0x4562ff:c.instructions+=3;goto B4562ff;
case 0x456305:c.instructions+=2;goto B456305;
case 0x456308:c.instructions+=1;goto B456308;
case 0x45630d:goto L45630d;
case 0x45630f:goto L45630f;
case 0x456311:goto L456311;
case 0x456317:c.instructions+=2;goto B456317;
case 0x456318:c.instructions+=1;goto B456318;
case 0x45631d:goto L45631d;
case 0x456323:c.instructions+=2;goto B456323;
case 0x456324:c.instructions+=1;goto B456324;
case 0x456329:goto L456329;
case 0x45632f:c.instructions+=2;goto B45632f;
case 0x456330:c.instructions+=1;goto B456330;
case 0x456335:goto L456335;
case 0x45633b:c.instructions+=5;goto B45633b;
case 0x456341:c.instructions+=4;goto B456341;
case 0x456347:c.instructions+=3;goto B456347;
case 0x45634a:c.instructions+=2;goto B45634a;
case 0x456350:c.instructions+=1;goto B456350;
case 0x456355:goto L456355;
case 0x456356:c.instructions+=4;goto B456356;
case 0x45635b:c.instructions+=3;goto B45635b;
case 0x456360:c.instructions+=2;goto B456360;
case 0x456361:c.instructions+=1;goto B456361;
case 0x456366:goto L456366;
case 0x456367:c.instructions+=4;goto B456367;
case 0x45636c:c.instructions+=3;goto B45636c;
case 0x456371:c.instructions+=2;goto B456371;
case 0x456372:c.instructions+=1;goto B456372;
case 0x456377:goto L456377;
case 0x456378:c.instructions+=4;goto B456378;
case 0x45637d:c.instructions+=3;goto B45637d;
case 0x456382:c.instructions+=2;goto B456382;
case 0x456383:c.instructions+=1;goto B456383;
case 0x456388:goto L456388;
case 0x456389:c.instructions+=3;goto B456389;
case 0x45638e:c.instructions+=2;goto B45638e;
case 0x456393:c.instructions+=1;goto B456393;
case 0x456398:goto L456398;
case 0x45639e:c.instructions+=2;goto B45639e;
case 0x4563a0:c.instructions+=1;goto B4563a0;
case 0x4563a2:goto L4563a2;
case 0x4563a4:c.instructions+=1;goto B4563a4;
case 0x4563a9:goto L4563a9;
case 0x4563aa:c.instructions+=1;goto B4563aa;
case 0x4563af:goto L4563af;
case 0x4563b2:c.instructions+=1;goto B4563b2;
case 0x4563b8:goto L4563b8;
case 0x4563c2:goto L4563c2;
case 0x4563c3:c.instructions+=4;goto B4563c3;
case 0x4563c8:c.instructions+=3;goto B4563c8;
case 0x4563cd:c.instructions+=2;goto B4563cd;
case 0x4563ce:c.instructions+=1;goto B4563ce;
case 0x4563d3:goto L4563d3;
case 0x4563d4:c.instructions+=4;goto B4563d4;
case 0x4563d9:c.instructions+=3;goto B4563d9;
case 0x4563de:c.instructions+=2;goto B4563de;
case 0x4563df:c.instructions+=1;goto B4563df;
case 0x4563e4:goto L4563e4;
case 0x4563e5:c.instructions+=4;goto B4563e5;
case 0x4563ea:c.instructions+=3;goto B4563ea;
case 0x4563ef:c.instructions+=2;goto B4563ef;
case 0x4563f0:c.instructions+=1;goto B4563f0;
case 0x4563f5:goto L4563f5;
case 0x4563f6:c.instructions+=4;goto B4563f6;
case 0x4563fb:c.instructions+=3;goto B4563fb;
case 0x456400:c.instructions+=2;goto B456400;
case 0x456401:c.instructions+=1;goto B456401;
case 0x456406:goto L456406;
case 0x456409:c.instructions+=5;goto B456409;
case 0x45640a:c.instructions+=4;goto B45640a;
case 0x45640f:c.instructions+=3;goto B45640f;
case 0x456414:c.instructions+=2;goto B456414;
case 0x456415:c.instructions+=1;goto B456415;
case 0x45641a:goto L45641a;
case 0x45641b:c.instructions+=4;goto B45641b;
case 0x45641c:c.instructions+=3;goto B45641c;
case 0x456421:c.instructions+=2;goto B456421;
case 0x456422:c.instructions+=1;goto B456422;
case 0x456427:goto L456427;
case 0x45642a:c.instructions+=1;goto B45642a;
case 0x45642f:goto L45642f;
case 0x456430:c.instructions+=4;goto B456430;
case 0x456435:c.instructions+=3;goto B456435;
case 0x45643a:c.instructions+=2;goto B45643a;
case 0x45643b:c.instructions+=1;goto B45643b;
case 0x456440:goto L456440;
case 0x456441:c.instructions+=4;goto B456441;
case 0x456446:c.instructions+=3;goto B456446;
case 0x45644b:c.instructions+=2;goto B45644b;
case 0x45644c:c.instructions+=1;goto B45644c;
case 0x456451:goto L456451;
case 0x456454:c.instructions+=1;goto B456454;
case 0x456459:goto L456459;
case 0x45645a:c.instructions+=4;goto B45645a;
case 0x45645f:c.instructions+=3;goto B45645f;
case 0x456464:c.instructions+=2;goto B456464;
case 0x456465:c.instructions+=1;goto B456465;
case 0x45646a:goto L45646a;
case 0x45646b:c.instructions+=4;goto B45646b;
case 0x456470:c.instructions+=3;goto B456470;
case 0x456475:c.instructions+=2;goto B456475;
case 0x456476:c.instructions+=1;goto B456476;
case 0x45647b:goto L45647b;
case 0x45647c:c.instructions+=4;goto B45647c;
case 0x456481:c.instructions+=3;goto B456481;
case 0x456486:c.instructions+=2;goto B456486;
case 0x456487:c.instructions+=1;goto B456487;
case 0x45648c:goto L45648c;
case 0x45648d:c.instructions+=4;goto B45648d;
case 0x456492:c.instructions+=3;goto B456492;
case 0x456497:c.instructions+=2;goto B456497;
case 0x456498:c.instructions+=1;goto B456498;
case 0x45649d:goto L45649d;
case 0x4564a0:c.instructions+=5;goto B4564a0;
case 0x4564a1:c.instructions+=4;goto B4564a1;
case 0x4564a6:c.instructions+=3;goto B4564a6;
case 0x4564ab:c.instructions+=2;goto B4564ab;
case 0x4564ac:c.instructions+=1;goto B4564ac;
case 0x4564b1:goto L4564b1;
case 0x4564b2:c.instructions+=4;goto B4564b2;
case 0x4564b7:c.instructions+=3;goto B4564b7;
case 0x4564bc:c.instructions+=2;goto B4564bc;
case 0x4564bd:c.instructions+=1;goto B4564bd;
case 0x4564c2:goto L4564c2;
case 0x4564c3:c.instructions+=4;goto B4564c3;
case 0x4564c8:c.instructions+=3;goto B4564c8;
case 0x4564cd:c.instructions+=2;goto B4564cd;
case 0x4564ce:c.instructions+=1;goto B4564ce;
case 0x4564d3:goto L4564d3;
case 0x4564d4:c.instructions+=4;goto B4564d4;
case 0x4564d9:c.instructions+=3;goto B4564d9;
case 0x4564de:c.instructions+=2;goto B4564de;
case 0x4564df:c.instructions+=1;goto B4564df;
case 0x4564e4:goto L4564e4;
case 0x4564e7:c.instructions+=5;goto B4564e7;
case 0x4564e8:c.instructions+=4;goto B4564e8;
case 0x4564ed:c.instructions+=3;goto B4564ed;
case 0x4564f2:c.instructions+=2;goto B4564f2;
case 0x4564f3:c.instructions+=1;goto B4564f3;
case 0x4564f8:goto L4564f8;
case 0x4564f9:c.instructions+=4;goto B4564f9;
case 0x4564fe:c.instructions+=3;goto B4564fe;
case 0x456503:c.instructions+=2;goto B456503;
case 0x456504:c.instructions+=1;goto B456504;
case 0x456509:goto L456509;
case 0x45650a:c.instructions+=4;goto B45650a;
case 0x45650f:c.instructions+=3;goto B45650f;
case 0x456514:c.instructions+=2;goto B456514;
case 0x456515:c.instructions+=1;goto B456515;
case 0x45651a:goto L45651a;
case 0x45651b:c.instructions+=4;goto B45651b;
case 0x456520:c.instructions+=3;goto B456520;
case 0x456525:c.instructions+=2;goto B456525;
case 0x456526:c.instructions+=1;goto B456526;
case 0x45652b:goto L45652b;
case 0x45652e:c.instructions+=5;goto B45652e;
case 0x45652f:c.instructions+=4;goto B45652f;
case 0x456534:c.instructions+=3;goto B456534;
case 0x456539:c.instructions+=2;goto B456539;
case 0x45653a:c.instructions+=1;goto B45653a;
case 0x45653f:goto L45653f;
case 0x456540:c.instructions+=2;goto B456540;
case 0x456545:c.instructions+=1;goto B456545;
case 0x45654a:goto L45654a;
case 0x45654b:c.instructions+=1;goto B45654b;
case 0x456550:goto L456550;
case 0x456551:c.instructions+=4;goto B456551;
case 0x456552:c.instructions+=3;goto B456552;
case 0x456557:c.instructions+=2;goto B456557;
case 0x456558:c.instructions+=1;goto B456558;
case 0x45655d:goto L45655d;
case 0x456560:c.instructions+=1;goto B456560;
case 0x456565:goto L456565;
case 0x456567:c.instructions+=1;goto B456567;
case 0x45656c:goto L45656c;
case 0x456572:c.instructions+=4;goto B456572;
case 0x456578:c.instructions+=3;goto B456578;
case 0x45657f:c.instructions+=2;goto B45657f;
case 0x456581:c.instructions+=1;goto B456581;
case 0x456587:goto L456587;
case 0x45658d:c.instructions+=1;goto B45658d;
case 0x456592:goto L456592;
case 0x456594:c.instructions+=1;goto B456594;
case 0x456599:goto L456599;
case 0x45659e:goto L45659e;
case 0x45659f:c.instructions+=4;goto B45659f;
case 0x4565a4:c.instructions+=3;goto B4565a4;
case 0x4565a9:c.instructions+=2;goto B4565a9;
case 0x4565aa:c.instructions+=1;goto B4565aa;
case 0x4565af:goto L4565af;
case 0x4565b0:c.instructions+=4;goto B4565b0;
case 0x4565b5:c.instructions+=3;goto B4565b5;
case 0x4565ba:c.instructions+=2;goto B4565ba;
case 0x4565bb:c.instructions+=1;goto B4565bb;
case 0x4565c0:goto L4565c0;
case 0x4565c1:c.instructions+=2;goto B4565c1;
case 0x4565c6:c.instructions+=1;goto B4565c6;
case 0x4565cb:goto L4565cb;
case 0x4565cc:c.instructions+=1;goto B4565cc;
case 0x4565d1:goto L4565d1;
case 0x4565d2:c.instructions+=4;goto B4565d2;
case 0x4565d7:c.instructions+=3;goto B4565d7;
case 0x4565dc:c.instructions+=2;goto B4565dc;
case 0x4565dd:c.instructions+=1;goto B4565dd;
case 0x4565e2:goto L4565e2;
case 0x4565e5:c.instructions+=5;goto B4565e5;
case 0x4565e6:c.instructions+=4;goto B4565e6;
case 0x4565eb:c.instructions+=3;goto B4565eb;
case 0x4565f0:c.instructions+=2;goto B4565f0;
case 0x4565f1:c.instructions+=1;goto B4565f1;
case 0x4565f6:goto L4565f6;
case 0x4565f7:c.instructions+=4;goto B4565f7;
case 0x4565fc:c.instructions+=3;goto B4565fc;
case 0x456601:c.instructions+=2;goto B456601;
case 0x456602:c.instructions+=1;goto B456602;
case 0x456607:goto L456607;
case 0x456608:c.instructions+=4;goto B456608;
case 0x45660d:c.instructions+=3;goto B45660d;
case 0x456612:c.instructions+=2;goto B456612;
case 0x456613:c.instructions+=1;goto B456613;
case 0x456618:goto L456618;
case 0x456619:c.instructions+=4;goto B456619;
case 0x45661a:c.instructions+=3;goto B45661a;
case 0x45661f:c.instructions+=2;goto B45661f;
case 0x456620:c.instructions+=1;goto B456620;
case 0x456625:goto L456625;
case 0x456628:c.instructions+=1;goto B456628;
case 0x45662d:goto L45662d;
case 0x45662f:c.instructions+=1;goto B45662f;
case 0x456634:goto L456634;
case 0x456639:goto L456639;
case 0x45663a:c.instructions+=4;goto B45663a;
case 0x45663f:c.instructions+=3;goto B45663f;
case 0x456644:c.instructions+=2;goto B456644;
case 0x456645:c.instructions+=1;goto B456645;
case 0x45664a:goto L45664a;
case 0x45664b:c.instructions+=4;goto B45664b;
case 0x456650:c.instructions+=3;goto B456650;
case 0x456655:c.instructions+=2;goto B456655;
case 0x456656:c.instructions+=1;goto B456656;
case 0x45665b:goto L45665b;
case 0x45665c:c.instructions+=3;goto B45665c;
case 0x456661:c.instructions+=2;goto B456661;
case 0x456666:c.instructions+=1;goto B456666;
case 0x45666b:goto L45666b;
case 0x45666d:c.instructions+=2;goto B45666d;
case 0x456673:c.instructions+=1;goto B456673;
case 0x456678:goto L456678;
case 0x45667a:c.instructions+=1;goto B45667a;
case 0x45667f:goto L45667f;
case 0x456681:c.instructions+=1;goto B456681;
case 0x456686:goto L456686;
case 0x45668c:c.instructions+=11;goto B45668c;
case 0x45668e:c.instructions+=10;goto B45668e;
case 0x456691:c.instructions+=9;goto B456691;
case 0x456694:c.instructions+=8;goto B456694;
case 0x456695:c.instructions+=7;goto B456695;
case 0x45669a:c.instructions+=6;goto B45669a;
case 0x45669f:c.instructions+=5;goto B45669f;
case 0x4566a0:c.instructions+=4;goto B4566a0;
case 0x4566a6:c.instructions+=3;goto B4566a6;
case 0x4566ab:c.instructions+=2;goto B4566ab;
case 0x4566ad:c.instructions+=1;goto B4566ad;
case 0x4566b2:goto L4566b2;
case 0x4566b3:c.instructions+=4;goto B4566b3;
case 0x4566b8:c.instructions+=3;goto B4566b8;
case 0x4566b9:c.instructions+=2;goto B4566b9;
case 0x4566ba:c.instructions+=1;goto B4566ba;
case 0x4566bf:goto L4566bf;
case 0x4566c0:c.instructions+=4;goto B4566c0;
case 0x4566c1:c.instructions+=3;goto B4566c1;
case 0x4566c6:c.instructions+=2;goto B4566c6;
case 0x4566c7:c.instructions+=1;goto B4566c7;
case 0x4566cc:goto L4566cc;
case 0x4566cd:c.instructions+=4;goto B4566cd;
case 0x4566ce:c.instructions+=3;goto B4566ce;
case 0x4566d3:c.instructions+=2;goto B4566d3;
case 0x4566d4:c.instructions+=1;goto B4566d4;
case 0x4566d9:goto L4566d9;
case 0x4566dc:c.instructions+=5;goto B4566dc;
case 0x4566dd:c.instructions+=4;goto B4566dd;
case 0x4566de:c.instructions+=3;goto B4566de;
case 0x4566e3:c.instructions+=2;goto B4566e3;
case 0x4566e4:c.instructions+=1;goto B4566e4;
case 0x4566e9:goto L4566e9;
case 0x4566ea:c.instructions+=4;goto B4566ea;
case 0x4566eb:c.instructions+=3;goto B4566eb;
case 0x4566f0:c.instructions+=2;goto B4566f0;
case 0x4566f1:c.instructions+=1;goto B4566f1;
case 0x4566f6:goto L4566f6;
case 0x4566f7:c.instructions+=4;goto B4566f7;
case 0x4566f8:c.instructions+=3;goto B4566f8;
case 0x4566fd:c.instructions+=2;goto B4566fd;
case 0x4566fe:c.instructions+=1;goto B4566fe;
case 0x456703:goto L456703;
case 0x456704:c.instructions+=4;goto B456704;
case 0x456705:c.instructions+=3;goto B456705;
case 0x45670a:c.instructions+=2;goto B45670a;
case 0x45670b:c.instructions+=1;goto B45670b;
case 0x456710:goto L456710;
case 0x456713:c.instructions+=5;goto B456713;
case 0x456714:c.instructions+=4;goto B456714;
case 0x456715:c.instructions+=3;goto B456715;
case 0x45671a:c.instructions+=2;goto B45671a;
case 0x45671b:c.instructions+=1;goto B45671b;
case 0x456720:goto L456720;
case 0x456721:c.instructions+=4;goto B456721;
case 0x456722:c.instructions+=3;goto B456722;
case 0x456727:c.instructions+=2;goto B456727;
case 0x456728:c.instructions+=1;goto B456728;
case 0x45672d:goto L45672d;
case 0x45672e:c.instructions+=4;goto B45672e;
case 0x45672f:c.instructions+=3;goto B45672f;
case 0x456734:c.instructions+=2;goto B456734;
case 0x456735:c.instructions+=1;goto B456735;
case 0x45673a:goto L45673a;
case 0x45673b:c.instructions+=4;goto B45673b;
case 0x45673c:c.instructions+=3;goto B45673c;
case 0x456741:c.instructions+=2;goto B456741;
case 0x456742:c.instructions+=1;goto B456742;
case 0x456747:goto L456747;
case 0x45674a:c.instructions+=5;goto B45674a;
case 0x45674b:c.instructions+=4;goto B45674b;
case 0x45674c:c.instructions+=3;goto B45674c;
case 0x456751:c.instructions+=2;goto B456751;
case 0x456752:c.instructions+=1;goto B456752;
case 0x456757:goto L456757;
case 0x456758:c.instructions+=4;goto B456758;
case 0x456759:c.instructions+=3;goto B456759;
case 0x45675e:c.instructions+=2;goto B45675e;
case 0x45675f:c.instructions+=1;goto B45675f;
case 0x456764:goto L456764;
case 0x456765:c.instructions+=4;goto B456765;
case 0x456766:c.instructions+=3;goto B456766;
case 0x45676b:c.instructions+=2;goto B45676b;
case 0x45676c:c.instructions+=1;goto B45676c;
case 0x456771:goto L456771;
case 0x456772:c.instructions+=4;goto B456772;
case 0x456773:c.instructions+=3;goto B456773;
case 0x456778:c.instructions+=2;goto B456778;
case 0x456779:c.instructions+=1;goto B456779;
case 0x45677e:goto L45677e;
case 0x456781:c.instructions+=5;goto B456781;
case 0x456782:c.instructions+=4;goto B456782;
case 0x456783:c.instructions+=3;goto B456783;
case 0x456788:c.instructions+=2;goto B456788;
case 0x456789:c.instructions+=1;goto B456789;
case 0x45678e:goto L45678e;
case 0x45678f:c.instructions+=3;goto B45678f;
case 0x456794:c.instructions+=2;goto B456794;
case 0x456799:c.instructions+=1;goto B456799;
case 0x45679e:goto L45679e;
case 0x4567a0:c.instructions+=2;goto B4567a0;
case 0x4567a6:c.instructions+=1;goto B4567a6;
case 0x4567ab:goto L4567ab;
case 0x4567ac:c.instructions+=4;goto B4567ac;
case 0x4567b1:c.instructions+=3;goto B4567b1;
case 0x4567b6:c.instructions+=2;goto B4567b6;
case 0x4567b7:c.instructions+=1;goto B4567b7;
case 0x4567bc:goto L4567bc;
case 0x4567bd:c.instructions+=4;goto B4567bd;
case 0x4567be:c.instructions+=3;goto B4567be;
case 0x4567c3:c.instructions+=2;goto B4567c3;
case 0x4567c4:c.instructions+=1;goto B4567c4;
case 0x4567c9:goto L4567c9;
case 0x4567ca:c.instructions+=4;goto B4567ca;
case 0x4567cb:c.instructions+=3;goto B4567cb;
case 0x4567d0:c.instructions+=2;goto B4567d0;
case 0x4567d1:c.instructions+=1;goto B4567d1;
case 0x4567d6:goto L4567d6;
case 0x4567d7:c.instructions+=4;goto B4567d7;
case 0x4567d8:c.instructions+=3;goto B4567d8;
case 0x4567dd:c.instructions+=2;goto B4567dd;
case 0x4567de:c.instructions+=1;goto B4567de;
case 0x4567e3:goto L4567e3;
case 0x4567e6:c.instructions+=5;goto B4567e6;
case 0x4567e7:c.instructions+=4;goto B4567e7;
case 0x4567e8:c.instructions+=3;goto B4567e8;
case 0x4567ed:c.instructions+=2;goto B4567ed;
case 0x4567ee:c.instructions+=1;goto B4567ee;
case 0x4567f3:goto L4567f3;
case 0x4567f4:c.instructions+=4;goto B4567f4;
case 0x4567f5:c.instructions+=3;goto B4567f5;
case 0x4567fa:c.instructions+=2;goto B4567fa;
case 0x4567fb:c.instructions+=1;goto B4567fb;
case 0x456800:goto L456800;
case 0x456801:c.instructions+=4;goto B456801;
case 0x456802:c.instructions+=3;goto B456802;
case 0x456807:c.instructions+=2;goto B456807;
case 0x456808:c.instructions+=1;goto B456808;
case 0x45680d:goto L45680d;
case 0x45680e:c.instructions+=4;goto B45680e;
case 0x45680f:c.instructions+=3;goto B45680f;
case 0x456814:c.instructions+=2;goto B456814;
case 0x456815:c.instructions+=1;goto B456815;
case 0x45681a:goto L45681a;
case 0x45681d:c.instructions+=5;goto B45681d;
case 0x45681e:c.instructions+=4;goto B45681e;
case 0x45681f:c.instructions+=3;goto B45681f;
case 0x456824:c.instructions+=2;goto B456824;
case 0x456825:c.instructions+=1;goto B456825;
case 0x45682a:goto L45682a;
case 0x45682b:c.instructions+=4;goto B45682b;
case 0x45682c:c.instructions+=3;goto B45682c;
case 0x456831:c.instructions+=2;goto B456831;
case 0x456832:c.instructions+=1;goto B456832;
case 0x456837:goto L456837;
case 0x456838:c.instructions+=4;goto B456838;
case 0x456839:c.instructions+=3;goto B456839;
case 0x45683e:c.instructions+=2;goto B45683e;
case 0x45683f:c.instructions+=1;goto B45683f;
case 0x456844:goto L456844;
case 0x456845:c.instructions+=4;goto B456845;
case 0x456846:c.instructions+=3;goto B456846;
case 0x45684b:c.instructions+=2;goto B45684b;
case 0x45684c:c.instructions+=1;goto B45684c;
case 0x456851:goto L456851;
case 0x456854:c.instructions+=5;goto B456854;
case 0x456855:c.instructions+=4;goto B456855;
case 0x456856:c.instructions+=3;goto B456856;
case 0x45685b:c.instructions+=2;goto B45685b;
case 0x45685c:c.instructions+=1;goto B45685c;
case 0x456861:goto L456861;
case 0x456862:c.instructions+=4;goto B456862;
case 0x456867:c.instructions+=3;goto B456867;
case 0x45686c:c.instructions+=2;goto B45686c;
case 0x45686d:c.instructions+=1;goto B45686d;
case 0x456872:goto L456872;
case 0x456873:c.instructions+=4;goto B456873;
case 0x456878:c.instructions+=3;goto B456878;
case 0x45687d:c.instructions+=2;goto B45687d;
case 0x45687e:c.instructions+=1;goto B45687e;
case 0x456883:goto L456883;
case 0x456884:c.instructions+=2;goto B456884;
case 0x456885:c.instructions+=1;goto B456885;
case 0x45688a:goto L45688a;
case 0x45688b:c.instructions+=1;goto B45688b;
case 0x456890:goto L456890;
case 0x456893:c.instructions+=5;goto B456893;
case 0x456894:c.instructions+=4;goto B456894;
case 0x456895:c.instructions+=3;goto B456895;
case 0x45689a:c.instructions+=2;goto B45689a;
case 0x45689b:c.instructions+=1;goto B45689b;
case 0x4568a0:goto L4568a0;
case 0x4568a3:goto L4568a3;
case 0x4568a4:c.instructions+=7;goto B4568a4;
case 0x4568a5:c.instructions+=6;goto B4568a5;
case 0x4568a9:c.instructions+=5;goto B4568a9;
case 0x4568aa:c.instructions+=4;goto B4568aa;
case 0x4568ab:c.instructions+=3;goto B4568ab;
case 0x4568b2:c.instructions+=2;goto B4568b2;
case 0x4568b5:c.instructions+=1;goto B4568b5;
case 0x456940:goto L456940;
case 0x456941:c.instructions+=15;goto B456941;
case 0x456943:c.instructions+=14;goto B456943;
case 0x456946:c.instructions+=13;goto B456946;
case 0x456948:c.instructions+=12;goto B456948;
case 0x45694d:c.instructions+=11;goto B45694d;
case 0x456953:c.instructions+=10;goto B456953;
case 0x456954:c.instructions+=9;goto B456954;
case 0x45695b:c.instructions+=8;goto B45695b;
case 0x456961:c.instructions+=7;goto B456961;
case 0x456966:c.instructions+=6;goto B456966;
case 0x456968:c.instructions+=5;goto B456968;
case 0x456969:c.instructions+=4;goto B456969;
case 0x45696a:c.instructions+=3;goto B45696a;
case 0x45696b:c.instructions+=2;goto B45696b;
case 0x45696d:c.instructions+=1;goto B45696d;
case 0x45696f:goto L45696f;
case 0x456975:c.instructions+=2;goto B456975;
case 0x456977:c.instructions+=1;goto B456977;
case 0x456979:goto L456979;
case 0x45697b:c.instructions+=1;goto B45697b;
case 0x456980:goto L456980;
case 0x456985:c.instructions+=2;goto B456985;
case 0x456987:c.instructions+=1;goto B456987;
case 0x456989:goto L456989;
case 0x45698f:c.instructions+=2;goto B45698f;
case 0x456991:c.instructions+=1;goto B456991;
case 0x456997:goto L456997;
case 0x456999:c.instructions+=2;goto B456999;
case 0x45699b:c.instructions+=1;goto B45699b;
case 0x4569a0:goto L4569a0;
case 0x4569a6:c.instructions+=2;goto B4569a6;
case 0x4569a8:c.instructions+=1;goto B4569a8;
case 0x4569ae:goto L4569ae;
case 0x4569b8:c.instructions+=3;goto B4569b8;
case 0x4569be:c.instructions+=2;goto B4569be;
case 0x4569c0:c.instructions+=1;goto B4569c0;
case 0x4569c2:goto L4569c2;
case 0x4569c7:c.instructions+=2;goto B4569c7;
case 0x4569c8:c.instructions+=1;goto B4569c8;
case 0x4569cd:goto L4569cd;
case 0x4569d0:goto L4569d0;
case 0x4569d6:c.instructions+=3;goto B4569d6;
case 0x4569d9:c.instructions+=2;goto B4569d9;
case 0x4569dc:c.instructions+=1;goto B4569dc;
case 0x4569e2:goto L4569e2;
case 0x4569e9:goto L4569e9;
case 0x4569ef:c.instructions+=9;goto B4569ef;
case 0x4569f4:c.instructions+=8;goto B4569f4;
case 0x4569fa:c.instructions+=7;goto B4569fa;
case 0x4569fc:c.instructions+=6;goto B4569fc;
case 0x4569fd:c.instructions+=5;goto B4569fd;
case 0x456a03:c.instructions+=4;goto B456a03;
case 0x456a09:c.instructions+=3;goto B456a09;
case 0x456a0f:c.instructions+=2;goto B456a0f;
case 0x456a12:c.instructions+=1;goto B456a12;
case 0x456a17:goto L456a17;
case 0x456a1d:c.instructions+=6;goto B456a1d;
case 0x456a23:c.instructions+=5;goto B456a23;
case 0x456a26:c.instructions+=4;goto B456a26;
case 0x456a2a:c.instructions+=3;goto B456a2a;
case 0x456a2b:c.instructions+=2;goto B456a2b;
case 0x456a2d:c.instructions+=1;goto B456a2d;
case 0x456a2f:goto L456a2f;
case 0x456a31:c.instructions+=3;goto B456a31;
case 0x456a37:c.instructions+=2;goto B456a37;
case 0x456a3e:c.instructions+=1;goto B456a3e;
case 0x456a40:goto L456a40;
case 0x456a42:c.instructions+=4;goto B456a42;
case 0x456a46:c.instructions+=3;goto B456a46;
case 0x456a48:c.instructions+=2;goto B456a48;
case 0x456a4b:c.instructions+=1;goto B456a4b;
case 0x456a4d:goto L456a4d;
case 0x456a4e:c.instructions+=3;goto B456a4e;
case 0x456a54:c.instructions+=2;goto B456a54;
case 0x456a56:c.instructions+=1;goto B456a56;
case 0x456a58:goto L456a58;
case 0x456a5e:c.instructions+=3;goto B456a5e;
case 0x456a60:c.instructions+=2;goto B456a60;
case 0x456a66:c.instructions+=1;goto B456a66;
case 0x456a6c:goto L456a6c;
case 0x456a73:c.instructions+=1;goto B456a73;
case 0x456a75:goto L456a75;
case 0x456a7b:c.instructions+=3;goto B456a7b;
case 0x456a7c:c.instructions+=2;goto B456a7c;
case 0x456a7e:c.instructions+=1;goto B456a7e;
case 0x456a83:goto L456a83;
case 0x456a88:goto L456a88;
case 0x456a8e:c.instructions+=3;goto B456a8e;
case 0x456a8f:c.instructions+=2;goto B456a8f;
case 0x456a91:c.instructions+=1;goto B456a91;
case 0x456a96:goto L456a96;
case 0x456a9b:goto L456a9b;
case 0x456a9d:c.instructions+=1;goto B456a9d;
case 0x456aa2:goto L456aa2;
case 0x456aa4:c.instructions+=2;goto B456aa4;
case 0x456aa6:c.instructions+=1;goto B456aa6;
case 0x456aac:goto L456aac;
case 0x456aae:c.instructions+=1;goto B456aae;
case 0x456ab3:goto L456ab3;
case 0x456ab5:c.instructions+=4;goto B456ab5;
case 0x456ab9:c.instructions+=3;goto B456ab9;
case 0x456aba:c.instructions+=2;goto B456aba;
case 0x456abc:c.instructions+=1;goto B456abc;
case 0x456ac1:goto L456ac1;
case 0x456ac6:goto L456ac6;
case 0x456acc:c.instructions+=3;goto B456acc;
case 0x456acd:c.instructions+=2;goto B456acd;
case 0x456ad2:c.instructions+=1;goto B456ad2;
case 0x456ad7:goto L456ad7;
case 0x456ad9:c.instructions+=1;goto B456ad9;
case 0x456adf:goto L456adf;
case 0x456ae5:c.instructions+=7;goto B456ae5;
case 0x456aeb:c.instructions+=6;goto B456aeb;
case 0x456aed:c.instructions+=5;goto B456aed;
case 0x456aef:c.instructions+=4;goto B456aef;
case 0x456af0:c.instructions+=3;goto B456af0;
case 0x456af1:c.instructions+=2;goto B456af1;
case 0x456af6:c.instructions+=1;goto B456af6;
case 0x456afb:goto L456afb;
case 0x456afd:c.instructions+=5;goto B456afd;
case 0x456aff:c.instructions+=4;goto B456aff;
case 0x456b00:c.instructions+=3;goto B456b00;
case 0x456b05:c.instructions+=2;goto B456b05;
case 0x456b0b:c.instructions+=1;goto B456b0b;
case 0x456b10:goto L456b10;
case 0x456b16:c.instructions+=3;goto B456b16;
case 0x456b17:c.instructions+=2;goto B456b17;
case 0x456b1c:c.instructions+=1;goto B456b1c;
case 0x456b21:goto L456b21;
case 0x456b23:c.instructions+=2;goto B456b23;
case 0x456b25:c.instructions+=1;goto B456b25;
case 0x456b2a:goto L456b2a;
case 0x456b2c:c.instructions+=1;goto B456b2c;
case 0x456b2e:goto L456b2e;
case 0x456b30:c.instructions+=1;goto B456b30;
case 0x456b35:goto L456b35;
case 0x456b3c:c.instructions+=2;goto B456b3c;
case 0x456b42:c.instructions+=1;goto B456b42;
case 0x456b47:goto L456b47;
case 0x456b49:c.instructions+=5;goto B456b49;
case 0x456b4e:c.instructions+=4;goto B456b4e;
case 0x456b4f:c.instructions+=3;goto B456b4f;
case 0x456b56:c.instructions+=2;goto B456b56;
case 0x456b61:c.instructions+=1;goto B456b61;
case 0x456b66:goto L456b66;
case 0x456b68:c.instructions+=5;goto B456b68;
case 0x456b6a:c.instructions+=4;goto B456b6a;
case 0x456b6c:c.instructions+=3;goto B456b6c;
case 0x456b6d:c.instructions+=2;goto B456b6d;
case 0x456b74:c.instructions+=1;goto B456b74;
case 0x456b79:goto L456b79;
case 0x456b7f:c.instructions+=7;goto B456b7f;
case 0x456b89:c.instructions+=6;goto B456b89;
case 0x456b8c:c.instructions+=5;goto B456b8c;
case 0x456b92:c.instructions+=4;goto B456b92;
case 0x456b98:c.instructions+=3;goto B456b98;
case 0x456b9a:c.instructions+=2;goto B456b9a;
case 0x456b9d:c.instructions+=1;goto B456b9d;
case 0x456b9f:goto L456b9f;
case 0x456ba5:c.instructions+=6;goto B456ba5;
case 0x456bab:c.instructions+=5;goto B456bab;
case 0x456bae:c.instructions+=4;goto B456bae;
case 0x456bb0:c.instructions+=3;goto B456bb0;
case 0x456bb6:c.instructions+=2;goto B456bb6;
case 0x456bb8:c.instructions+=1;goto B456bb8;
case 0x456bba:goto L456bba;
case 0x456bbc:c.instructions+=1;goto B456bbc;
case 0x456bc1:goto L456bc1;
case 0x456bc3:c.instructions+=1;goto B456bc3;
case 0x456bc5:goto L456bc5;
case 0x456bcb:c.instructions+=2;goto B456bcb;
case 0x456bce:c.instructions+=1;goto B456bce;
case 0x456bd0:goto L456bd0;
case 0x456bd2:goto L456bd2;
case 0x456bd4:c.instructions+=2;goto B456bd4;
case 0x456bd6:c.instructions+=1;goto B456bd6;
case 0x456bdb:goto L456bdb;
case 0x456be2:c.instructions+=2;goto B456be2;
case 0x456bed:c.instructions+=1;goto B456bed;
case 0x456bf2:goto L456bf2;
case 0x456bf8:c.instructions+=2;goto B456bf8;
case 0x456bfa:c.instructions+=1;goto B456bfa;
case 0x456bfc:goto L456bfc;
case 0x456bfd:c.instructions+=2;goto B456bfd;
case 0x456c03:c.instructions+=1;goto B456c03;
case 0x456c08:goto L456c08;
case 0x456c0a:c.instructions+=3;goto B456c0a;
case 0x456c0c:c.instructions+=2;goto B456c0c;
case 0x456c16:c.instructions+=1;goto B456c16;
case 0x456c1b:goto L456c1b;
case 0x456c20:goto L456c20;
case 0x456c26:c.instructions+=2;goto B456c26;
case 0x456c29:c.instructions+=1;goto B456c29;
case 0x456c2b:goto L456c2b;
case 0x456c2c:c.instructions+=1;goto B456c2c;
case 0x456c32:goto L456c32;
case 0x456c33:c.instructions+=1;goto B456c33;
case 0x456c39:goto L456c39;
case 0x456c3f:c.instructions+=3;goto B456c3f;
case 0x456c40:c.instructions+=2;goto B456c40;
case 0x456c45:c.instructions+=1;goto B456c45;
case 0x456c4a:goto L456c4a;
case 0x456c4c:c.instructions+=2;goto B456c4c;
case 0x456c4e:c.instructions+=1;goto B456c4e;
case 0x456c54:goto L456c54;
case 0x456c56:c.instructions+=1;goto B456c56;
case 0x456c5b:goto L456c5b;
case 0x456c5d:c.instructions+=1;goto B456c5d;
case 0x456c5f:goto L456c5f;
case 0x456c61:c.instructions+=1;goto B456c61;
case 0x456c66:goto L456c66;
case 0x456c69:c.instructions+=6;goto B456c69;
case 0x456c6c:c.instructions+=5;goto B456c6c;
case 0x456c72:c.instructions+=4;goto B456c72;
case 0x456c78:c.instructions+=3;goto B456c78;
case 0x456c7a:c.instructions+=2;goto B456c7a;
case 0x456c7d:c.instructions+=1;goto B456c7d;
case 0x456c7f:goto L456c7f;
case 0x456c81:c.instructions+=2;goto B456c81;
case 0x456c8b:c.instructions+=1;goto B456c8b;
case 0x456c90:goto L456c90;
case 0x456c92:c.instructions+=1;goto B456c92;
case 0x456c94:goto L456c94;
case 0x456c96:c.instructions+=1;goto B456c96;
case 0x456c9b:goto L456c9b;
case 0x456c9d:c.instructions+=2;goto B456c9d;
case 0x456c9f:c.instructions+=1;goto B456c9f;
case 0x456ca4:goto L456ca4;
case 0x456caa:c.instructions+=2;goto B456caa;
case 0x456cac:c.instructions+=1;goto B456cac;
case 0x456cb2:goto L456cb2;
case 0x456cb8:c.instructions+=3;goto B456cb8;
case 0x456cb9:c.instructions+=2;goto B456cb9;
case 0x456cbb:c.instructions+=1;goto B456cbb;
case 0x456cc0:goto L456cc0;
case 0x456cc5:goto L456cc5;
case 0x456ccb:c.instructions+=7;goto B456ccb;
case 0x456cd1:c.instructions+=6;goto B456cd1;
case 0x456cd7:c.instructions+=5;goto B456cd7;
case 0x456cdd:c.instructions+=4;goto B456cdd;
case 0x456ce3:c.instructions+=3;goto B456ce3;
case 0x456ce5:c.instructions+=2;goto B456ce5;
case 0x456ce8:c.instructions+=1;goto B456ce8;
case 0x456cee:goto L456cee;
case 0x456cf0:c.instructions+=3;goto B456cf0;
case 0x456cf2:c.instructions+=2;goto B456cf2;
case 0x456cfc:c.instructions+=1;goto B456cfc;
case 0x456d01:goto L456d01;
case 0x456d06:goto L456d06;
case 0x456d0c:c.instructions+=2;goto B456d0c;
case 0x456d0f:c.instructions+=1;goto B456d0f;
case 0x456d11:goto L456d11;
case 0x456d14:c.instructions+=1;goto B456d14;
case 0x456d16:goto L456d16;
case 0x456d18:c.instructions+=3;goto B456d18;
case 0x456d1a:c.instructions+=2;goto B456d1a;
case 0x456d21:c.instructions+=1;goto B456d21;
case 0x456d26:goto L456d26;
case 0x456d2c:c.instructions+=1;goto B456d2c;
case 0x456d31:goto L456d31;
case 0x456d37:c.instructions+=5;goto B456d37;
case 0x456d3d:c.instructions+=4;goto B456d3d;
case 0x456d40:c.instructions+=3;goto B456d40;
case 0x456d46:c.instructions+=2;goto B456d46;
case 0x456d48:c.instructions+=1;goto B456d48;
case 0x456d4e:goto L456d4e;
case 0x456d55:c.instructions+=1;goto B456d55;
case 0x456d5b:goto L456d5b;
case 0x456d62:c.instructions+=1;goto B456d62;
case 0x456d67:goto L456d67;
case 0x456d6d:c.instructions+=2;goto B456d6d;
case 0x456d6f:c.instructions+=1;goto B456d6f;
case 0x456d71:goto L456d71;
case 0x456d77:c.instructions+=7;goto B456d77;
case 0x456d78:c.instructions+=6;goto B456d78;
case 0x456d7e:c.instructions+=5;goto B456d7e;
case 0x456d80:c.instructions+=4;goto B456d80;
case 0x456d86:c.instructions+=3;goto B456d86;
case 0x456d89:c.instructions+=2;goto B456d89;
case 0x456d8a:c.instructions+=1;goto B456d8a;
case 0x456d8f:goto L456d8f;
case 0x456d95:c.instructions+=8;goto B456d95;
case 0x456d9b:c.instructions+=7;goto B456d9b;
case 0x456d9d:c.instructions+=6;goto B456d9d;
case 0x456d9f:c.instructions+=5;goto B456d9f;
case 0x456da2:c.instructions+=4;goto B456da2;
case 0x456da3:c.instructions+=3;goto B456da3;
case 0x456da5:c.instructions+=2;goto B456da5;
case 0x456da7:c.instructions+=1;goto B456da7;
case 0x456da9:goto L456da9;
case 0x456dab:c.instructions+=1;goto B456dab;
case 0x456dad:goto L456dad;
case 0x456daf:goto L456daf;
case 0x456db5:c.instructions+=2;goto B456db5;
case 0x456dbc:c.instructions+=1;goto B456dbc;
case 0x456dbe:goto L456dbe;
case 0x456dc4:goto L456dc4;
case 0x456dca:c.instructions+=9;goto B456dca;
case 0x456dcb:c.instructions+=8;goto B456dcb;
case 0x456dd1:c.instructions+=7;goto B456dd1;
case 0x456dd3:c.instructions+=6;goto B456dd3;
case 0x456dd9:c.instructions+=5;goto B456dd9;
case 0x456ddf:c.instructions+=4;goto B456ddf;
case 0x456de2:c.instructions+=3;goto B456de2;
case 0x456de4:c.instructions+=2;goto B456de4;
case 0x456de5:c.instructions+=1;goto B456de5;
case 0x456dea:goto L456dea;
case 0x456def:goto L456def;
case 0x456df5:c.instructions+=8;goto B456df5;
case 0x456dfb:c.instructions+=7;goto B456dfb;
case 0x456e01:c.instructions+=6;goto B456e01;
case 0x456e07:c.instructions+=5;goto B456e07;
case 0x456e08:c.instructions+=4;goto B456e08;
case 0x456e0a:c.instructions+=3;goto B456e0a;
case 0x456e10:c.instructions+=2;goto B456e10;
case 0x456e14:c.instructions+=1;goto B456e14;
case 0x456e16:goto L456e16;
case 0x456e1a:c.instructions+=4;goto B456e1a;
case 0x456e1b:c.instructions+=3;goto B456e1b;
case 0x456e1c:c.instructions+=2;goto B456e1c;
case 0x456e1e:c.instructions+=1;goto B456e1e;
case 0x456e23:goto L456e23;
case 0x456e29:c.instructions+=2;goto B456e29;
case 0x456e2b:c.instructions+=1;goto B456e2b;
case 0x456e2d:goto L456e2d;
case 0x456e34:c.instructions+=1;goto B456e34;
case 0x456e36:goto L456e36;
case 0x456e3a:c.instructions+=7;goto B456e3a;
case 0x456e40:c.instructions+=6;goto B456e40;
case 0x456e46:c.instructions+=5;goto B456e46;
case 0x456e4c:c.instructions+=4;goto B456e4c;
case 0x456e52:c.instructions+=3;goto B456e52;
case 0x456e54:c.instructions+=2;goto B456e54;
case 0x456e57:c.instructions+=1;goto B456e57;
case 0x456e59:goto L456e59;
case 0x456e63:goto L456e63;
case 0x456e69:c.instructions+=2;goto B456e69;
case 0x456e6f:c.instructions+=1;goto B456e6f;
case 0x456e75:goto L456e75;
case 0x456e7b:c.instructions+=8;goto B456e7b;
case 0x456e7d:c.instructions+=7;goto B456e7d;
case 0x456e80:c.instructions+=6;goto B456e80;
case 0x456e82:c.instructions+=5;goto B456e82;
case 0x456e85:c.instructions+=4;goto B456e85;
case 0x456e86:c.instructions+=3;goto B456e86;
case 0x456e88:c.instructions+=2;goto B456e88;
case 0x456e8a:c.instructions+=1;goto B456e8a;
case 0x456e8c:goto L456e8c;
case 0x456e8e:c.instructions+=1;goto B456e8e;
case 0x456e90:goto L456e90;
case 0x456e92:goto L456e92;
case 0x456e98:c.instructions+=2;goto B456e98;
case 0x456e9f:c.instructions+=1;goto B456e9f;
case 0x456ea1:goto L456ea1;
case 0x456ea7:goto L456ea7;
case 0x456ead:c.instructions+=10;goto B456ead;
case 0x456eae:c.instructions+=9;goto B456eae;
case 0x456eb0:c.instructions+=8;goto B456eb0;
case 0x456eb6:c.instructions+=7;goto B456eb6;
case 0x456ebc:c.instructions+=6;goto B456ebc;
case 0x456ec2:c.instructions+=5;goto B456ec2;
case 0x456ec8:c.instructions+=4;goto B456ec8;
case 0x456ecb:c.instructions+=3;goto B456ecb;
case 0x456ecd:c.instructions+=2;goto B456ecd;
case 0x456ece:c.instructions+=1;goto B456ece;
case 0x456ed3:goto L456ed3;
case 0x456ed8:goto L456ed8;
case 0x456ede:c.instructions+=2;goto B456ede;
case 0x456ee0:c.instructions+=1;goto B456ee0;
case 0x456ee2:goto L456ee2;
case 0x456ee3:c.instructions+=2;goto B456ee3;
case 0x456ee9:c.instructions+=1;goto B456ee9;
case 0x456eee:goto L456eee;
case 0x456ef4:c.instructions+=2;goto B456ef4;
case 0x456ef6:c.instructions+=1;goto B456ef6;
case 0x456efc:goto L456efc;
case 0x456eff:c.instructions+=1;goto B456eff;
case 0x456f01:goto L456f01;
case 0x456f04:c.instructions+=1;goto B456f04;
case 0x456f06:goto L456f06;
case 0x456f09:c.instructions+=1;goto B456f09;
case 0x456f0b:goto L456f0b;
case 0x456f0d:c.instructions+=1;goto B456f0d;
case 0x456f0f:goto L456f0f;
case 0x456f14:goto L456f14;
case 0x456f19:c.instructions+=1;goto B456f19;
case 0x456f1e:goto L456f1e;
case 0x456f22:c.instructions+=3;goto B456f22;
case 0x456f28:c.instructions+=2;goto B456f28;
case 0x456f29:c.instructions+=1;goto B456f29;
case 0x456f2e:goto L456f2e;
case 0x456f31:c.instructions+=7;goto B456f31;
case 0x456f35:c.instructions+=6;goto B456f35;
case 0x456f3a:c.instructions+=5;goto B456f3a;
case 0x456f3e:c.instructions+=4;goto B456f3e;
case 0x456f44:c.instructions+=3;goto B456f44;
case 0x456f48:c.instructions+=2;goto B456f48;
case 0x456f4c:c.instructions+=1;goto B456f4c;
case 0x456f51:goto L456f51;
case 0x456f57:c.instructions+=4;goto B456f57;
case 0x456f59:c.instructions+=3;goto B456f59;
case 0x456f5a:c.instructions+=2;goto B456f5a;
case 0x456f5e:c.instructions+=1;goto B456f5e;
case 0x456f63:goto L456f63;
case 0x456f66:c.instructions+=8;goto B456f66;
case 0x456f6a:c.instructions+=7;goto B456f6a;
case 0x456f6f:c.instructions+=6;goto B456f6f;
case 0x456f71:c.instructions+=5;goto B456f71;
case 0x456f75:c.instructions+=4;goto B456f75;
case 0x456f7b:c.instructions+=3;goto B456f7b;
case 0x456f7f:c.instructions+=2;goto B456f7f;
case 0x456f83:c.instructions+=1;goto B456f83;
case 0x456f88:goto L456f88;
case 0x456f8b:c.instructions+=5;goto B456f8b;
case 0x456f8d:c.instructions+=4;goto B456f8d;
case 0x456f90:c.instructions+=3;goto B456f90;
case 0x456f92:c.instructions+=2;goto B456f92;
case 0x456f96:c.instructions+=1;goto B456f96;
case 0x456f98:goto L456f98;
case 0x456f9c:c.instructions+=5;goto B456f9c;
case 0x456fa2:c.instructions+=4;goto B456fa2;
case 0x456fa6:c.instructions+=3;goto B456fa6;
case 0x456faa:c.instructions+=2;goto B456faa;
case 0x456fb0:c.instructions+=1;goto B456fb0;
case 0x456fb4:goto L456fb4;
case 0x456fb9:c.instructions+=1;goto B456fb9;
case 0x456fbe:goto L456fbe;
case 0x456fc4:c.instructions+=6;goto B456fc4;
case 0x456fca:c.instructions+=5;goto B456fca;
case 0x456fcf:c.instructions+=4;goto B456fcf;
case 0x456fd1:c.instructions+=3;goto B456fd1;
case 0x456fd5:c.instructions+=2;goto B456fd5;
case 0x456fd7:c.instructions+=1;goto B456fd7;
case 0x456fdc:goto L456fdc;
case 0x456fde:c.instructions+=8;goto B456fde;
case 0x456fe3:c.instructions+=7;goto B456fe3;
case 0x456fe9:c.instructions+=6;goto B456fe9;
case 0x456feb:c.instructions+=5;goto B456feb;
case 0x456ff1:c.instructions+=4;goto B456ff1;
case 0x456ff9:c.instructions+=3;goto B456ff9;
case 0x456ffb:c.instructions+=2;goto B456ffb;
case 0x456fff:c.instructions+=1;goto B456fff;
default:missing_instruction(c.pc);}
B456001:L456001:{c.instructions+=2;NFSU2_TR(0x456001);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456002:{NFSU2_TR(0x456002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456007ull));
TAIL_STATIC(0x57c330u,57c);
}
B456007:L456007:{c.instructions+=3;NFSU2_TR(0x456007);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45600c:{NFSU2_TR(0x45600c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45600d:{NFSU2_TR(0x45600d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456012ull));
TAIL_STATIC(0x57c330u,57c);
}
B456012:L456012:{c.instructions+=3;NFSU2_TR(0x456012);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456017:{NFSU2_TR(0x456017);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456018:{NFSU2_TR(0x456018);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45601dull));
TAIL_STATIC(0x57c330u,57c);
}
B45601d:L45601d:{c.instructions+=3;NFSU2_TR(0x45601d);
u8 U[4];
w4(U+0,u32(0xeaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456022:{NFSU2_TR(0x456022);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456023:{NFSU2_TR(0x456023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456028ull));
TAIL_STATIC(0x57c330u,57c);
}
B456028:L456028:{c.instructions+=3;NFSU2_TR(0x456028);
u8 U[4];
w4(U+0,u32(0xe9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45602d:{NFSU2_TR(0x45602d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45602e:{NFSU2_TR(0x45602e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456033ull));
TAIL_STATIC(0x57c330u,57c);
}
B456033:L456033:{c.instructions+=3;NFSU2_TR(0x456033);
u8 U[4];
w4(U+0,u32(0xe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456038:{NFSU2_TR(0x456038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456039:{NFSU2_TR(0x456039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45603eull));
TAIL_STATIC(0x57c330u,57c);
}
B45603e:L45603e:{c.instructions+=3;NFSU2_TR(0x45603e);
u8 U[4];
w4(U+0,u32(0xe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456043:{NFSU2_TR(0x456043);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456044:{NFSU2_TR(0x456044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456049ull));
TAIL_STATIC(0x57c330u,57c);
}
B456049:L456049:{c.instructions+=3;NFSU2_TR(0x456049);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45604e:{NFSU2_TR(0x45604e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45604f:{NFSU2_TR(0x45604f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456054ull));
TAIL_STATIC(0x57c330u,57c);
}
B456054:L456054:{c.instructions+=4;NFSU2_TR(0x456054);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456057:{NFSU2_TR(0x456057);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45605c:{NFSU2_TR(0x45605c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45605d:{NFSU2_TR(0x45605d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456062ull));
TAIL_STATIC(0x57c330u,57c);
}
B456062:L456062:{c.instructions+=3;NFSU2_TR(0x456062);
u8 U[4];
w4(U+0,u32(0xefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456067:{NFSU2_TR(0x456067);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456068:{NFSU2_TR(0x456068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45606dull));
TAIL_STATIC(0x57c330u,57c);
}
B45606d:L45606d:{c.instructions+=3;NFSU2_TR(0x45606d);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456072:{NFSU2_TR(0x456072);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456073:{NFSU2_TR(0x456073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456078ull));
TAIL_STATIC(0x57c330u,57c);
}
B456078:L456078:{c.instructions+=3;NFSU2_TR(0x456078);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45607d:{NFSU2_TR(0x45607d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45607e:{NFSU2_TR(0x45607e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456083ull));
TAIL_STATIC(0x57c330u,57c);
}
B456083:L456083:{c.instructions+=3;NFSU2_TR(0x456083);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456088:{NFSU2_TR(0x456088);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456089:{NFSU2_TR(0x456089);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45608eull));
TAIL_STATIC(0x57c330u,57c);
}
B45608e:L45608e:{c.instructions+=3;NFSU2_TR(0x45608e);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456093:{NFSU2_TR(0x456093);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456094:{NFSU2_TR(0x456094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456099ull));
TAIL_STATIC(0x57c330u,57c);
}
B456099:L456099:{c.instructions+=3;NFSU2_TR(0x456099);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45609e:{NFSU2_TR(0x45609e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45609f:{NFSU2_TR(0x45609f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560a4ull));
TAIL_STATIC(0x57c330u,57c);
}
B4560a4:L4560a4:{c.instructions+=3;NFSU2_TR(0x4560a4);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560a9:{NFSU2_TR(0x4560a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560aa:{NFSU2_TR(0x4560aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560afull));
TAIL_STATIC(0x57c330u,57c);
}
B4560af:L4560af:{c.instructions+=4;NFSU2_TR(0x4560af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4560b2:{NFSU2_TR(0x4560b2);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560b7:{NFSU2_TR(0x4560b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560b8:{NFSU2_TR(0x4560b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560bdull));
TAIL_STATIC(0x57c330u,57c);
}
B4560bd:L4560bd:{c.instructions+=3;NFSU2_TR(0x4560bd);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560c2:{NFSU2_TR(0x4560c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560c3:{NFSU2_TR(0x4560c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560c8ull));
TAIL_STATIC(0x57c330u,57c);
}
B4560c8:L4560c8:{c.instructions+=2;NFSU2_TR(0x4560c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4560cb:{NFSU2_TR(0x4560cb);
{goto L4561db;}
}
B4560d0:L4560d0:{c.instructions+=2;NFSU2_TR(0x4560d0);
__builtin_memmove((R+4),(R+20),4);
}
B4560d2:{NFSU2_TR(0x4560d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560d7ull));
TAIL_STATIC(0x44a310u,44a);
}
B4560d7:L4560d7:{c.instructions+=3;NFSU2_TR(0x4560d7);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560dc:{NFSU2_TR(0x4560dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560dd:{NFSU2_TR(0x4560dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560e2ull));
TAIL_STATIC(0x5794e0u,579);
}
B4560e2:L4560e2:{c.instructions+=3;NFSU2_TR(0x4560e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4560e5:{NFSU2_TR(0x4560e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4560e7:{NFSU2_TR(0x4560e7);
if(r1(R+518)){{goto L4560f7;}}
}
B4560e9:L4560e9:{c.instructions+=3;NFSU2_TR(0x4560e9);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560ee:{NFSU2_TR(0x4560ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560ef:{NFSU2_TR(0x4560ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4560f4ull));
TAIL_STATIC(0x57c330u,57c);
}
B4560f4:L4560f4:{c.instructions+=1;NFSU2_TR(0x4560f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4560f7:L4560f7:{c.instructions+=3;NFSU2_TR(0x4560f7);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560fc:{NFSU2_TR(0x4560fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4560fd:{NFSU2_TR(0x4560fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456102ull));
TAIL_STATIC(0x5794e0u,579);
}
B456102:L456102:{c.instructions+=3;NFSU2_TR(0x456102);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B456105:{NFSU2_TR(0x456105);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456107:{NFSU2_TR(0x456107);
if(r1(R+518)){{goto L456117;}}
}
B456109:L456109:{c.instructions+=3;NFSU2_TR(0x456109);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45610e:{NFSU2_TR(0x45610e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45610f:{NFSU2_TR(0x45610f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456114ull));
TAIL_STATIC(0x57c330u,57c);
}
B456114:L456114:{c.instructions+=1;NFSU2_TR(0x456114);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B456117:L456117:{c.instructions+=3;NFSU2_TR(0x456117);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45611c:{NFSU2_TR(0x45611c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45611d:{NFSU2_TR(0x45611d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456122ull));
TAIL_STATIC(0x57c330u,57c);
}
B456122:L456122:{c.instructions+=3;NFSU2_TR(0x456122);
u8 U[4];
w4(U+0,u32(0xf5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456127:{NFSU2_TR(0x456127);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456128:{NFSU2_TR(0x456128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45612dull));
TAIL_STATIC(0x57c330u,57c);
}
B45612d:L45612d:{c.instructions+=3;NFSU2_TR(0x45612d);
u8 U[4];
w4(U+0,u32(0xf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456132:{NFSU2_TR(0x456132);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456133:{NFSU2_TR(0x456133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456138ull));
TAIL_STATIC(0x57c330u,57c);
}
B456138:L456138:{c.instructions+=3;NFSU2_TR(0x456138);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45613d:{NFSU2_TR(0x45613d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45613e:{NFSU2_TR(0x45613e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456143ull));
TAIL_STATIC(0x57c330u,57c);
}
B456143:L456143:{c.instructions+=3;NFSU2_TR(0x456143);
u8 U[4];
w4(U+0,u32(0xebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456148:{NFSU2_TR(0x456148);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456149:{NFSU2_TR(0x456149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45614eull));
TAIL_STATIC(0x57c330u,57c);
}
B45614e:L45614e:{c.instructions+=3;NFSU2_TR(0x45614e);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456153:{NFSU2_TR(0x456153);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456154:{NFSU2_TR(0x456154);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456159ull));
TAIL_STATIC(0x57c330u,57c);
}
B456159:L456159:{c.instructions+=3;NFSU2_TR(0x456159);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45615e:{NFSU2_TR(0x45615e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45615f:{NFSU2_TR(0x45615f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456164ull));
TAIL_STATIC(0x57c330u,57c);
}
B456164:L456164:{c.instructions+=3;NFSU2_TR(0x456164);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456169:{NFSU2_TR(0x456169);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45616a:{NFSU2_TR(0x45616a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45616full));
TAIL_STATIC(0x57c330u,57c);
}
B45616f:L45616f:{c.instructions+=4;NFSU2_TR(0x45616f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456172:{NFSU2_TR(0x456172);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456177:{NFSU2_TR(0x456177);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456178:{NFSU2_TR(0x456178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45617dull));
TAIL_STATIC(0x57c330u,57c);
}
B45617d:L45617d:{c.instructions+=3;NFSU2_TR(0x45617d);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456182:{NFSU2_TR(0x456182);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456183:{NFSU2_TR(0x456183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456188ull));
TAIL_STATIC(0x57c330u,57c);
}
B456188:L456188:{c.instructions+=3;NFSU2_TR(0x456188);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45618d:{NFSU2_TR(0x45618d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45618e:{NFSU2_TR(0x45618e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456193ull));
TAIL_STATIC(0x57c330u,57c);
}
B456193:L456193:{c.instructions+=3;NFSU2_TR(0x456193);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456198:{NFSU2_TR(0x456198);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456199:{NFSU2_TR(0x456199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45619eull));
TAIL_STATIC(0x57c330u,57c);
}
B45619e:L45619e:{c.instructions+=3;NFSU2_TR(0x45619e);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561a3:{NFSU2_TR(0x4561a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561a4:{NFSU2_TR(0x4561a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4561a9ull));
TAIL_STATIC(0x57c330u,57c);
}
B4561a9:L4561a9:{c.instructions+=3;NFSU2_TR(0x4561a9);
u8 U[4];
w4(U+0,u32(0xdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561ae:{NFSU2_TR(0x4561ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561af:{NFSU2_TR(0x4561af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4561b4ull));
TAIL_STATIC(0x57c330u,57c);
}
B4561b4:L4561b4:{c.instructions+=3;NFSU2_TR(0x4561b4);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561b9:{NFSU2_TR(0x4561b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561ba:{NFSU2_TR(0x4561ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4561bfull));
TAIL_STATIC(0x57c330u,57c);
}
B4561bf:L4561bf:{c.instructions+=3;NFSU2_TR(0x4561bf);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561c4:{NFSU2_TR(0x4561c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561c5:{NFSU2_TR(0x4561c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4561caull));
TAIL_STATIC(0x57c330u,57c);
}
B4561ca:L4561ca:{c.instructions+=4;NFSU2_TR(0x4561ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4561cd:{NFSU2_TR(0x4561cd);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561d2:{NFSU2_TR(0x4561d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4561d3:{NFSU2_TR(0x4561d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4561d8ull));
TAIL_STATIC(0x57c330u,57c);
}
B4561d8:L4561d8:{c.instructions+=1;NFSU2_TR(0x4561d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4561db:L4561db:{c.instructions+=4;NFSU2_TR(0x4561db);
__builtin_memmove((R+0),(R+24),4);
}
B4561dd:{NFSU2_TR(0x4561dd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4561e0:{NFSU2_TR(0x4561e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4561e6:{NFSU2_TR(0x4561e6);
if(r1(R+518)){{goto L4561f8;}}
}
B4561e8:L4561e8:{c.instructions+=2;NFSU2_TR(0x4561e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4561eb:{NFSU2_TR(0x4561eb);
if(r1(R+518)){{goto L4561f8;}}
}
B4561ed:L4561ed:{c.instructions+=2;NFSU2_TR(0x4561ed);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4561f0:{NFSU2_TR(0x4561f0);
if(r1(R+518)){{goto L4561f8;}}
}
B4561f2:L4561f2:{c.instructions+=3;NFSU2_TR(0x4561f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4561f4:{NFSU2_TR(0x4561f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4561f6:{NFSU2_TR(0x4561f6);
{goto L4561fc;}
}
B4561f8:L4561f8:{c.instructions+=2;NFSU2_TR(0x4561f8);
__builtin_memmove((R+4),(R+12),4);
}
B4561fa:{NFSU2_TR(0x4561fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4561fc:L4561fc:{c.instructions+=2;NFSU2_TR(0x4561fc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4561ff:{NFSU2_TR(0x4561ff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45626a;}}
}
B456201:L456201:{c.instructions+=4;NFSU2_TR(0x456201);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456203:{NFSU2_TR(0x456203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456209:{NFSU2_TR(0x456209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45620f:{NFSU2_TR(0x45620f);
if(r1(R+518)){{goto L45621b;}}
}
B456211:L456211:{c.instructions+=3;NFSU2_TR(0x456211);
{u32 ea_=u32(u32(7892884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456217:{NFSU2_TR(0x456217);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B456219:{NFSU2_TR(0x456219);
{goto L456221;}
}
B45621b:L45621b:{c.instructions+=1;NFSU2_TR(0x45621b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456221:L456221:{c.instructions+=10;NFSU2_TR(0x456221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456227:{NFSU2_TR(0x456227);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B456229:{NFSU2_TR(0x456229);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45622f:{NFSU2_TR(0x45622f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B456231:{NFSU2_TR(0x456231);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456233:{NFSU2_TR(0x456233);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B456236:{NFSU2_TR(0x456236);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B456237:{NFSU2_TR(0x456237);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B456239:{NFSU2_TR(0x456239);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45623b:{NFSU2_TR(0x45623b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456241;}}
}
B45623d:L45623d:{c.instructions+=2;NFSU2_TR(0x45623d);
__builtin_memmove((R+0),(R+4),4);
}
B45623f:{NFSU2_TR(0x45623f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B456241:L456241:{c.instructions+=1;NFSU2_TR(0x456241);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L456252;}}
}
B456243:L456243:{c.instructions+=3;NFSU2_TR(0x456243);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B456249:{NFSU2_TR(0x456249);
{u32 ea_=u32(r4(R+20)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456250:{NFSU2_TR(0x456250);
{goto L456258;}
}
B456252:L456252:{c.instructions+=1;NFSU2_TR(0x456252);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456258:L456258:{c.instructions+=6;NFSU2_TR(0x456258);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45625c:{NFSU2_TR(0x45625c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45625e:{NFSU2_TR(0x45625e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B456260:{NFSU2_TR(0x456260);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B456262:{NFSU2_TR(0x456262);
{u32 ea_=u32(r4(R+20)+u32(7268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456268:{NFSU2_TR(0x456268);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45626a:L45626a:{c.instructions+=2;NFSU2_TR(0x45626a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45626d:{NFSU2_TR(0x45626d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4568a3;}}
}
B456273:L456273:{c.instructions+=1;NFSU2_TR(0x456273);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4568f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45627a:L45627a:{c.instructions+=3;NFSU2_TR(0x45627a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B456280:{NFSU2_TR(0x456280);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456282:{NFSU2_TR(0x456282);
if(r1(R+518)){{goto L45629a;}}
}
B456284:L456284:{c.instructions+=2;NFSU2_TR(0x456284);
__builtin_memmove((R+4),(R+24),4);
}
B456286:{NFSU2_TR(0x456286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45628bull));
TAIL_STATIC(0x5774a0u,577);
}
B45628b:L45628b:{c.instructions+=2;NFSU2_TR(0x45628b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45628c:{NFSU2_TR(0x45628c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456291ull));
TAIL_STATIC(0x575630u,575);
}
B456291:L456291:{c.instructions+=2;NFSU2_TR(0x456291);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B456294:{NFSU2_TR(0x456294);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45629a:L45629a:{c.instructions+=2;NFSU2_TR(0x45629a);
__builtin_memmove((R+4),(R+20),4);
}
B45629c:{NFSU2_TR(0x45629c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4562a1ull));
TAIL_STATIC(0x443750u,443);
}
B4562a1:L4562a1:{c.instructions+=3;NFSU2_TR(0x4562a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4562a7:{NFSU2_TR(0x4562a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562a8:{NFSU2_TR(0x4562a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4562adull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B4562ad:L4562ad:{c.instructions+=4;NFSU2_TR(0x4562ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4562b3:{NFSU2_TR(0x4562b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4562b6:{NFSU2_TR(0x4562b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562b7:{NFSU2_TR(0x4562b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4562bcull));
TAIL_STATIC(0x593100u,593);
}
B4562bc:L4562bc:{c.instructions+=5;NFSU2_TR(0x4562bc);
{u32 ea_=u32(r4(R+20)+u32(7268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4562c2:{NFSU2_TR(0x4562c2);
{u32 ea_=u32(r4(R+20)+u32(7272u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4562c8:{NFSU2_TR(0x4562c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4562ca:{NFSU2_TR(0x4562ca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4562cd:{NFSU2_TR(0x4562cd);
if(r1(R+514)){{goto L456311;}}
}
B4562cf:L4562cf:{c.instructions+=12;NFSU2_TR(0x4562cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4562d5:{NFSU2_TR(0x4562d5);
{u32 ea_=u32(r4(R+0)+u32(1004u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4562db:{NFSU2_TR(0x4562db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4562dd:{NFSU2_TR(0x4562dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4562e4:{NFSU2_TR(0x4562e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562e5:{NFSU2_TR(0x4562e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B4562e8:{NFSU2_TR(0x4562e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562e9:{NFSU2_TR(0x4562e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562ea:{NFSU2_TR(0x4562ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4562f0:{NFSU2_TR(0x4562f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4562f3:{NFSU2_TR(0x4562f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4562f4:{NFSU2_TR(0x4562f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4562f9ull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B4562f9:L4562f9:{c.instructions+=4;NFSU2_TR(0x4562f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4562ff:{NFSU2_TR(0x4562ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B456305:{NFSU2_TR(0x456305);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B456308:{NFSU2_TR(0x456308);
w4(R+4,u32(0x124ull));
}
B45630d:L45630d:{c.instructions+=1;NFSU2_TR(0x45630d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L45630f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45630du);}goto L45630d;}
}
B45630f:L45630f:{c.instructions+=1;NFSU2_TR(0x45630f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B456311:L456311:{c.instructions+=3;NFSU2_TR(0x456311);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456317:{NFSU2_TR(0x456317);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456318:{NFSU2_TR(0x456318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45631dull));
TAIL_STATIC(0x575630u,575);
}
B45631d:L45631d:{c.instructions+=3;NFSU2_TR(0x45631d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456323:{NFSU2_TR(0x456323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456324:{NFSU2_TR(0x456324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456329ull));
TAIL_STATIC(0x575630u,575);
}
B456329:L456329:{c.instructions+=3;NFSU2_TR(0x456329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45632f:{NFSU2_TR(0x45632f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456330:{NFSU2_TR(0x456330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456335ull));
TAIL_STATIC(0x575630u,575);
}
B456335:L456335:{c.instructions+=6;NFSU2_TR(0x456335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45633b:{NFSU2_TR(0x45633b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456341:{NFSU2_TR(0x456341);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456347:{NFSU2_TR(0x456347);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45634a:{NFSU2_TR(0x45634a);
__builtin_memmove(gp(0x8650a0),(R+28),4);
}
B456350:{NFSU2_TR(0x456350);
{goto L4568a3;}
}
B456355:L456355:{c.instructions+=5;NFSU2_TR(0x456355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456356:{NFSU2_TR(0x456356);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45635b:{NFSU2_TR(0x45635b);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456360:{NFSU2_TR(0x456360);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456361:{NFSU2_TR(0x456361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456366ull));
TAIL_STATIC(0x579410u,579);
}
B456366:L456366:{c.instructions+=5;NFSU2_TR(0x456366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456367:{NFSU2_TR(0x456367);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45636c:{NFSU2_TR(0x45636c);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456371:{NFSU2_TR(0x456371);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456372:{NFSU2_TR(0x456372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456377ull));
TAIL_STATIC(0x579410u,579);
}
B456377:L456377:{c.instructions+=5;NFSU2_TR(0x456377);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456378:{NFSU2_TR(0x456378);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45637d:{NFSU2_TR(0x45637d);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456382:{NFSU2_TR(0x456382);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456383:{NFSU2_TR(0x456383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456388ull));
TAIL_STATIC(0x579410u,579);
}
B456388:L456388:{c.instructions+=4;NFSU2_TR(0x456388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456389:{NFSU2_TR(0x456389);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45638e:{NFSU2_TR(0x45638e);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456393:{NFSU2_TR(0x456393);
{goto L45688a;}
}
B456398:L456398:{c.instructions+=3;NFSU2_TR(0x456398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45639e:{NFSU2_TR(0x45639e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4563a0:{NFSU2_TR(0x4563a0);
if(r1(R+518)){{goto L4563b8;}}
}
B4563a2:L4563a2:{c.instructions+=2;NFSU2_TR(0x4563a2);
__builtin_memmove((R+4),(R+24),4);
}
B4563a4:{NFSU2_TR(0x4563a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4563a9ull));
TAIL_STATIC(0x5774a0u,577);
}
B4563a9:L4563a9:{c.instructions+=2;NFSU2_TR(0x4563a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563aa:{NFSU2_TR(0x4563aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4563afull));
TAIL_STATIC(0x575630u,575);
}
B4563af:L4563af:{c.instructions+=2;NFSU2_TR(0x4563af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4563b2:{NFSU2_TR(0x4563b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4563b8:L4563b8:{c.instructions+=1;NFSU2_TR(0x4563b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cbcull))));
w4(U+4,u32(0x64ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4563c2:L4563c2:{c.instructions+=5;NFSU2_TR(0x4563c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563c3:{NFSU2_TR(0x4563c3);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563c8:{NFSU2_TR(0x4563c8);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563cd:{NFSU2_TR(0x4563cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563ce:{NFSU2_TR(0x4563ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4563d3ull));
TAIL_STATIC(0x579410u,579);
}
B4563d3:L4563d3:{c.instructions+=5;NFSU2_TR(0x4563d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563d4:{NFSU2_TR(0x4563d4);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563d9:{NFSU2_TR(0x4563d9);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563de:{NFSU2_TR(0x4563de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563df:{NFSU2_TR(0x4563df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4563e4ull));
TAIL_STATIC(0x579410u,579);
}
B4563e4:L4563e4:{c.instructions+=5;NFSU2_TR(0x4563e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563e5:{NFSU2_TR(0x4563e5);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563ea:{NFSU2_TR(0x4563ea);
u8 U[4];
w4(U+0,u32(0xd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563ef:{NFSU2_TR(0x4563ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563f0:{NFSU2_TR(0x4563f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4563f5ull));
TAIL_STATIC(0x579410u,579);
}
B4563f5:L4563f5:{c.instructions+=5;NFSU2_TR(0x4563f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563f6:{NFSU2_TR(0x4563f6);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4563fb:{NFSU2_TR(0x4563fb);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456400:{NFSU2_TR(0x456400);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456401:{NFSU2_TR(0x456401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456406ull));
TAIL_STATIC(0x579410u,579);
}
B456406:L456406:{c.instructions+=6;NFSU2_TR(0x456406);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456409:{NFSU2_TR(0x456409);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45640a:{NFSU2_TR(0x45640a);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45640f:{NFSU2_TR(0x45640f);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456414:{NFSU2_TR(0x456414);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456415:{NFSU2_TR(0x456415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45641aull));
TAIL_STATIC(0x579410u,579);
}
B45641a:L45641a:{c.instructions+=5;NFSU2_TR(0x45641a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45641b:{NFSU2_TR(0x45641b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45641c:{NFSU2_TR(0x45641c);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456421:{NFSU2_TR(0x456421);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456422:{NFSU2_TR(0x456422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456427ull));
TAIL_STATIC(0x579410u,579);
}
B456427:L456427:{c.instructions+=2;NFSU2_TR(0x456427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B45642a:{NFSU2_TR(0x45642a);
{goto L4568a3;}
}
B45642f:L45642f:{c.instructions+=5;NFSU2_TR(0x45642f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456430:{NFSU2_TR(0x456430);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456435:{NFSU2_TR(0x456435);
u8 U[4];
w4(U+0,u32(0xdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45643a:{NFSU2_TR(0x45643a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45643b:{NFSU2_TR(0x45643b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456440ull));
TAIL_STATIC(0x579410u,579);
}
B456440:L456440:{c.instructions+=5;NFSU2_TR(0x456440);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456441:{NFSU2_TR(0x456441);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456446:{NFSU2_TR(0x456446);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45644b:{NFSU2_TR(0x45644b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45644c:{NFSU2_TR(0x45644c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456451ull));
TAIL_STATIC(0x579410u,579);
}
B456451:L456451:{c.instructions+=2;NFSU2_TR(0x456451);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B456454:{NFSU2_TR(0x456454);
{goto L4568a3;}
}
B456459:L456459:{c.instructions+=5;NFSU2_TR(0x456459);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45645a:{NFSU2_TR(0x45645a);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45645f:{NFSU2_TR(0x45645f);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456464:{NFSU2_TR(0x456464);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456465:{NFSU2_TR(0x456465);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45646aull));
TAIL_STATIC(0x579410u,579);
}
B45646a:L45646a:{c.instructions+=5;NFSU2_TR(0x45646a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45646b:{NFSU2_TR(0x45646b);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456470:{NFSU2_TR(0x456470);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456475:{NFSU2_TR(0x456475);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456476:{NFSU2_TR(0x456476);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45647bull));
TAIL_STATIC(0x579410u,579);
}
B45647b:L45647b:{c.instructions+=5;NFSU2_TR(0x45647b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45647c:{NFSU2_TR(0x45647c);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456481:{NFSU2_TR(0x456481);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456486:{NFSU2_TR(0x456486);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456487:{NFSU2_TR(0x456487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45648cull));
TAIL_STATIC(0x579410u,579);
}
B45648c:L45648c:{c.instructions+=5;NFSU2_TR(0x45648c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45648d:{NFSU2_TR(0x45648d);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456492:{NFSU2_TR(0x456492);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456497:{NFSU2_TR(0x456497);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456498:{NFSU2_TR(0x456498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45649dull));
TAIL_STATIC(0x579410u,579);
}
B45649d:L45649d:{c.instructions+=6;NFSU2_TR(0x45649d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4564a0:{NFSU2_TR(0x4564a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564a1:{NFSU2_TR(0x4564a1);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564a6:{NFSU2_TR(0x4564a6);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564ab:{NFSU2_TR(0x4564ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564ac:{NFSU2_TR(0x4564ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4564b1ull));
TAIL_STATIC(0x579410u,579);
}
B4564b1:L4564b1:{c.instructions+=5;NFSU2_TR(0x4564b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564b2:{NFSU2_TR(0x4564b2);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564b7:{NFSU2_TR(0x4564b7);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564bc:{NFSU2_TR(0x4564bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564bd:{NFSU2_TR(0x4564bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4564c2ull));
TAIL_STATIC(0x579410u,579);
}
B4564c2:L4564c2:{c.instructions+=5;NFSU2_TR(0x4564c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564c3:{NFSU2_TR(0x4564c3);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564c8:{NFSU2_TR(0x4564c8);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564cd:{NFSU2_TR(0x4564cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564ce:{NFSU2_TR(0x4564ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4564d3ull));
TAIL_STATIC(0x579410u,579);
}
B4564d3:L4564d3:{c.instructions+=5;NFSU2_TR(0x4564d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564d4:{NFSU2_TR(0x4564d4);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564d9:{NFSU2_TR(0x4564d9);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564de:{NFSU2_TR(0x4564de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564df:{NFSU2_TR(0x4564df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4564e4ull));
TAIL_STATIC(0x579410u,579);
}
B4564e4:L4564e4:{c.instructions+=6;NFSU2_TR(0x4564e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4564e7:{NFSU2_TR(0x4564e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564e8:{NFSU2_TR(0x4564e8);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564ed:{NFSU2_TR(0x4564ed);
u8 U[4];
w4(U+0,u32(0xdeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564f2:{NFSU2_TR(0x4564f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564f3:{NFSU2_TR(0x4564f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4564f8ull));
TAIL_STATIC(0x579410u,579);
}
B4564f8:L4564f8:{c.instructions+=5;NFSU2_TR(0x4564f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564f9:{NFSU2_TR(0x4564f9);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4564fe:{NFSU2_TR(0x4564fe);
u8 U[4];
w4(U+0,u32(0xddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456503:{NFSU2_TR(0x456503);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456504:{NFSU2_TR(0x456504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456509ull));
TAIL_STATIC(0x579410u,579);
}
B456509:L456509:{c.instructions+=5;NFSU2_TR(0x456509);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45650a:{NFSU2_TR(0x45650a);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45650f:{NFSU2_TR(0x45650f);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456514:{NFSU2_TR(0x456514);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456515:{NFSU2_TR(0x456515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45651aull));
TAIL_STATIC(0x579410u,579);
}
B45651a:L45651a:{c.instructions+=5;NFSU2_TR(0x45651a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45651b:{NFSU2_TR(0x45651b);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456520:{NFSU2_TR(0x456520);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456525:{NFSU2_TR(0x456525);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456526:{NFSU2_TR(0x456526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45652bull));
TAIL_STATIC(0x579410u,579);
}
B45652b:L45652b:{c.instructions+=6;NFSU2_TR(0x45652b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B45652e:{NFSU2_TR(0x45652e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45652f:{NFSU2_TR(0x45652f);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456534:{NFSU2_TR(0x456534);
u8 U[4];
w4(U+0,u32(0xdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456539:{NFSU2_TR(0x456539);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45653a:{NFSU2_TR(0x45653a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45653full));
TAIL_STATIC(0x579410u,579);
}
B45653f:L45653f:{c.instructions+=3;NFSU2_TR(0x45653f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456540:{NFSU2_TR(0x456540);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456545:{NFSU2_TR(0x456545);
u8 U[4];
w4(U+0,u32(0xdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45654a:L45654a:{c.instructions+=2;NFSU2_TR(0x45654a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45654b:{NFSU2_TR(0x45654b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456550ull));
TAIL_STATIC(0x579410u,579);
}
B456550:L456550:{c.instructions+=5;NFSU2_TR(0x456550);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456551:{NFSU2_TR(0x456551);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456552:{NFSU2_TR(0x456552);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456557:{NFSU2_TR(0x456557);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456558:{NFSU2_TR(0x456558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45655dull));
TAIL_STATIC(0x579410u,579);
}
B45655d:L45655d:{c.instructions+=2;NFSU2_TR(0x45655d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B456560:{NFSU2_TR(0x456560);
{goto L4568a3;}
}
B456565:L456565:{c.instructions+=2;NFSU2_TR(0x456565);
__builtin_memmove((R+4),(R+20),4);
}
B456567:{NFSU2_TR(0x456567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45656cull));
TAIL_STATIC(0x443690u,443);
}
B45656c:L45656c:{c.instructions+=5;NFSU2_TR(0x45656c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456572:{NFSU2_TR(0x456572);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B456578:{NFSU2_TR(0x456578);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B45657f:{NFSU2_TR(0x45657f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456581:{NFSU2_TR(0x456581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4563c2u);}goto L4563c2;}}
}
B456587:L456587:{c.instructions+=2;NFSU2_TR(0x456587);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45658d:{NFSU2_TR(0x45658d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4563c2u);}goto L4563c2;}
}
B456592:L456592:{c.instructions+=2;NFSU2_TR(0x456592);
__builtin_memmove((R+4),(R+20),4);
}
B456594:{NFSU2_TR(0x456594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456599ull));
TAIL_STATIC(0x4435c0u,443);
}
B456599:L456599:{c.instructions+=1;NFSU2_TR(0x456599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45659eull));
TAIL_STATIC(0x4436c0u,443);
}
B45659e:L45659e:{c.instructions+=5;NFSU2_TR(0x45659e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45659f:{NFSU2_TR(0x45659f);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565a4:{NFSU2_TR(0x4565a4);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565a9:{NFSU2_TR(0x4565a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565aa:{NFSU2_TR(0x4565aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4565afull));
TAIL_STATIC(0x579410u,579);
}
B4565af:L4565af:{c.instructions+=5;NFSU2_TR(0x4565af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565b0:{NFSU2_TR(0x4565b0);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565b5:{NFSU2_TR(0x4565b5);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565ba:{NFSU2_TR(0x4565ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565bb:{NFSU2_TR(0x4565bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4565c0ull));
TAIL_STATIC(0x579410u,579);
}
B4565c0:L4565c0:{c.instructions+=3;NFSU2_TR(0x4565c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565c1:{NFSU2_TR(0x4565c1);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565c6:{NFSU2_TR(0x4565c6);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565cb:L4565cb:{c.instructions+=2;NFSU2_TR(0x4565cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565cc:{NFSU2_TR(0x4565cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4565d1ull));
TAIL_STATIC(0x579410u,579);
}
B4565d1:L4565d1:{c.instructions+=5;NFSU2_TR(0x4565d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565d2:{NFSU2_TR(0x4565d2);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565d7:{NFSU2_TR(0x4565d7);
u8 U[4];
w4(U+0,u32(0xddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565dc:{NFSU2_TR(0x4565dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565dd:{NFSU2_TR(0x4565dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4565e2ull));
TAIL_STATIC(0x579410u,579);
}
B4565e2:L4565e2:{c.instructions+=6;NFSU2_TR(0x4565e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4565e5:{NFSU2_TR(0x4565e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565e6:{NFSU2_TR(0x4565e6);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565eb:{NFSU2_TR(0x4565eb);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565f0:{NFSU2_TR(0x4565f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565f1:{NFSU2_TR(0x4565f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4565f6ull));
TAIL_STATIC(0x579410u,579);
}
B4565f6:L4565f6:{c.instructions+=5;NFSU2_TR(0x4565f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565f7:{NFSU2_TR(0x4565f7);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4565fc:{NFSU2_TR(0x4565fc);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456601:{NFSU2_TR(0x456601);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456602:{NFSU2_TR(0x456602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456607ull));
TAIL_STATIC(0x579410u,579);
}
B456607:L456607:{c.instructions+=5;NFSU2_TR(0x456607);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456608:{NFSU2_TR(0x456608);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45660d:{NFSU2_TR(0x45660d);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456612:{NFSU2_TR(0x456612);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456613:{NFSU2_TR(0x456613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456618ull));
TAIL_STATIC(0x579410u,579);
}
B456618:L456618:{c.instructions+=5;NFSU2_TR(0x456618);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456619:{NFSU2_TR(0x456619);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45661a:{NFSU2_TR(0x45661a);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45661f:{NFSU2_TR(0x45661f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456620:{NFSU2_TR(0x456620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456625ull));
TAIL_STATIC(0x579410u,579);
}
B456625:L456625:{c.instructions+=2;NFSU2_TR(0x456625);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456628:{NFSU2_TR(0x456628);
{goto L4568a3;}
}
B45662d:L45662d:{c.instructions+=2;NFSU2_TR(0x45662d);
__builtin_memmove((R+4),(R+20),4);
}
B45662f:{NFSU2_TR(0x45662f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456634ull));
TAIL_STATIC(0x4435c0u,443);
}
B456634:L456634:{c.instructions+=1;NFSU2_TR(0x456634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456639ull));
TAIL_STATIC(0x4436c0u,443);
}
B456639:L456639:{c.instructions+=5;NFSU2_TR(0x456639);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45663a:{NFSU2_TR(0x45663a);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45663f:{NFSU2_TR(0x45663f);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456644:{NFSU2_TR(0x456644);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456645:{NFSU2_TR(0x456645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45664aull));
TAIL_STATIC(0x579410u,579);
}
B45664a:L45664a:{c.instructions+=5;NFSU2_TR(0x45664a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45664b:{NFSU2_TR(0x45664b);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456650:{NFSU2_TR(0x456650);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456655:{NFSU2_TR(0x456655);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456656:{NFSU2_TR(0x456656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45665bull));
TAIL_STATIC(0x579410u,579);
}
B45665b:L45665b:{c.instructions+=4;NFSU2_TR(0x45665b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45665c:{NFSU2_TR(0x45665c);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456661:{NFSU2_TR(0x456661);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456666:{NFSU2_TR(0x456666);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4565cbu);}goto L4565cb;}
}
B45666b:L45666b:{c.instructions+=3;NFSU2_TR(0x45666b);
__builtin_memmove((R+4),(R+20),4);
}
B45666d:{NFSU2_TR(0x45666d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456673:{NFSU2_TR(0x456673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456678ull));
TAIL_STATIC(0x449430u,449);
}
B456678:L456678:{c.instructions+=2;NFSU2_TR(0x456678);
__builtin_memmove((R+4),(R+20),4);
}
B45667a:{NFSU2_TR(0x45667a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45667full));
TAIL_STATIC(0x443690u,443);
}
B45667f:L45667f:{c.instructions+=2;NFSU2_TR(0x45667f);
__builtin_memmove((R+4),(R+20),4);
}
B456681:{NFSU2_TR(0x456681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456686ull));
TAIL_STATIC(0x442aa0u,442);
}
B456686:L456686:{c.instructions+=12;NFSU2_TR(0x456686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B45668c:{NFSU2_TR(0x45668c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45668e:{NFSU2_TR(0x45668e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456691:{NFSU2_TR(0x456691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B456694:{NFSU2_TR(0x456694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456695:{NFSU2_TR(0x456695);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45669a:{NFSU2_TR(0x45669a);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45669f:{NFSU2_TR(0x45669f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566a0:{NFSU2_TR(0x4566a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4566a6:{NFSU2_TR(0x4566a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd3ull))));
}
B4566ab:{NFSU2_TR(0x4566ab);
__builtin_memmove((R+24),(R+0),4);
}
B4566ad:{NFSU2_TR(0x4566ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566b2ull));
TAIL_STATIC(0x579410u,579);
}
B4566b2:L4566b2:{c.instructions+=5;NFSU2_TR(0x4566b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566b3:{NFSU2_TR(0x4566b3);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566b8:{NFSU2_TR(0x4566b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566b9:{NFSU2_TR(0x4566b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566ba:{NFSU2_TR(0x4566ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566bfull));
TAIL_STATIC(0x579410u,579);
}
B4566bf:L4566bf:{c.instructions+=5;NFSU2_TR(0x4566bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566c0:{NFSU2_TR(0x4566c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566c1:{NFSU2_TR(0x4566c1);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566c6:{NFSU2_TR(0x4566c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566c7:{NFSU2_TR(0x4566c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566ccull));
TAIL_STATIC(0x579410u,579);
}
B4566cc:L4566cc:{c.instructions+=5;NFSU2_TR(0x4566cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566cd:{NFSU2_TR(0x4566cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566ce:{NFSU2_TR(0x4566ce);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566d3:{NFSU2_TR(0x4566d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566d4:{NFSU2_TR(0x4566d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566d9ull));
TAIL_STATIC(0x579410u,579);
}
B4566d9:L4566d9:{c.instructions+=6;NFSU2_TR(0x4566d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4566dc:{NFSU2_TR(0x4566dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566dd:{NFSU2_TR(0x4566dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566de:{NFSU2_TR(0x4566de);
u8 U[4];
w4(U+0,u32(0xeaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566e3:{NFSU2_TR(0x4566e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566e4:{NFSU2_TR(0x4566e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566e9ull));
TAIL_STATIC(0x579410u,579);
}
B4566e9:L4566e9:{c.instructions+=5;NFSU2_TR(0x4566e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566ea:{NFSU2_TR(0x4566ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566eb:{NFSU2_TR(0x4566eb);
u8 U[4];
w4(U+0,u32(0xe9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566f0:{NFSU2_TR(0x4566f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566f1:{NFSU2_TR(0x4566f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4566f6ull));
TAIL_STATIC(0x579410u,579);
}
B4566f6:L4566f6:{c.instructions+=5;NFSU2_TR(0x4566f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566f7:{NFSU2_TR(0x4566f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566f8:{NFSU2_TR(0x4566f8);
u8 U[4];
w4(U+0,u32(0xe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566fd:{NFSU2_TR(0x4566fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4566fe:{NFSU2_TR(0x4566fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456703ull));
TAIL_STATIC(0x579410u,579);
}
B456703:L456703:{c.instructions+=5;NFSU2_TR(0x456703);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456704:{NFSU2_TR(0x456704);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456705:{NFSU2_TR(0x456705);
u8 U[4];
w4(U+0,u32(0xe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45670a:{NFSU2_TR(0x45670a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45670b:{NFSU2_TR(0x45670b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456710ull));
TAIL_STATIC(0x579410u,579);
}
B456710:L456710:{c.instructions+=6;NFSU2_TR(0x456710);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456713:{NFSU2_TR(0x456713);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456714:{NFSU2_TR(0x456714);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456715:{NFSU2_TR(0x456715);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45671a:{NFSU2_TR(0x45671a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45671b:{NFSU2_TR(0x45671b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456720ull));
TAIL_STATIC(0x579410u,579);
}
B456720:L456720:{c.instructions+=5;NFSU2_TR(0x456720);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456721:{NFSU2_TR(0x456721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456722:{NFSU2_TR(0x456722);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456727:{NFSU2_TR(0x456727);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456728:{NFSU2_TR(0x456728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45672dull));
TAIL_STATIC(0x579410u,579);
}
B45672d:L45672d:{c.instructions+=5;NFSU2_TR(0x45672d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45672e:{NFSU2_TR(0x45672e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45672f:{NFSU2_TR(0x45672f);
u8 U[4];
w4(U+0,u32(0xefull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456734:{NFSU2_TR(0x456734);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456735:{NFSU2_TR(0x456735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45673aull));
TAIL_STATIC(0x579410u,579);
}
B45673a:L45673a:{c.instructions+=5;NFSU2_TR(0x45673a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45673b:{NFSU2_TR(0x45673b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45673c:{NFSU2_TR(0x45673c);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456741:{NFSU2_TR(0x456741);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456742:{NFSU2_TR(0x456742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456747ull));
TAIL_STATIC(0x579410u,579);
}
B456747:L456747:{c.instructions+=6;NFSU2_TR(0x456747);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B45674a:{NFSU2_TR(0x45674a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45674b:{NFSU2_TR(0x45674b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45674c:{NFSU2_TR(0x45674c);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456751:{NFSU2_TR(0x456751);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456752:{NFSU2_TR(0x456752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456757ull));
TAIL_STATIC(0x579410u,579);
}
B456757:L456757:{c.instructions+=5;NFSU2_TR(0x456757);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456758:{NFSU2_TR(0x456758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456759:{NFSU2_TR(0x456759);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45675e:{NFSU2_TR(0x45675e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45675f:{NFSU2_TR(0x45675f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456764ull));
TAIL_STATIC(0x579410u,579);
}
B456764:L456764:{c.instructions+=5;NFSU2_TR(0x456764);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456765:{NFSU2_TR(0x456765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456766:{NFSU2_TR(0x456766);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45676b:{NFSU2_TR(0x45676b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45676c:{NFSU2_TR(0x45676c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456771ull));
TAIL_STATIC(0x579410u,579);
}
B456771:L456771:{c.instructions+=5;NFSU2_TR(0x456771);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456772:{NFSU2_TR(0x456772);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456773:{NFSU2_TR(0x456773);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456778:{NFSU2_TR(0x456778);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456779:{NFSU2_TR(0x456779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45677eull));
TAIL_STATIC(0x579410u,579);
}
B45677e:L45677e:{c.instructions+=6;NFSU2_TR(0x45677e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456781:{NFSU2_TR(0x456781);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456782:{NFSU2_TR(0x456782);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456783:{NFSU2_TR(0x456783);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456788:{NFSU2_TR(0x456788);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456789:{NFSU2_TR(0x456789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45678eull));
TAIL_STATIC(0x579410u,579);
}
B45678e:L45678e:{c.instructions+=4;NFSU2_TR(0x45678e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45678f:{NFSU2_TR(0x45678f);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456794:{NFSU2_TR(0x456794);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456799:{NFSU2_TR(0x456799);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45654au);}goto L45654a;}
}
B45679e:L45679e:{c.instructions+=3;NFSU2_TR(0x45679e);
__builtin_memmove((R+4),(R+20),4);
}
B4567a0:{NFSU2_TR(0x4567a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4567a6:{NFSU2_TR(0x4567a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567abull));
TAIL_STATIC(0x443690u,443);
}
B4567ab:L4567ab:{c.instructions+=5;NFSU2_TR(0x4567ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567ac:{NFSU2_TR(0x4567ac);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567b1:{NFSU2_TR(0x4567b1);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567b6:{NFSU2_TR(0x4567b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567b7:{NFSU2_TR(0x4567b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567bcull));
TAIL_STATIC(0x579410u,579);
}
B4567bc:L4567bc:{c.instructions+=5;NFSU2_TR(0x4567bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567bd:{NFSU2_TR(0x4567bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567be:{NFSU2_TR(0x4567be);
u8 U[4];
w4(U+0,u32(0xf5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567c3:{NFSU2_TR(0x4567c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567c4:{NFSU2_TR(0x4567c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567c9ull));
TAIL_STATIC(0x579410u,579);
}
B4567c9:L4567c9:{c.instructions+=5;NFSU2_TR(0x4567c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567ca:{NFSU2_TR(0x4567ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567cb:{NFSU2_TR(0x4567cb);
u8 U[4];
w4(U+0,u32(0xf6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567d0:{NFSU2_TR(0x4567d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567d1:{NFSU2_TR(0x4567d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567d6ull));
TAIL_STATIC(0x579410u,579);
}
B4567d6:L4567d6:{c.instructions+=5;NFSU2_TR(0x4567d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567d7:{NFSU2_TR(0x4567d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567d8:{NFSU2_TR(0x4567d8);
u8 U[4];
w4(U+0,u32(0xecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567dd:{NFSU2_TR(0x4567dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567de:{NFSU2_TR(0x4567de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567e3ull));
TAIL_STATIC(0x579410u,579);
}
B4567e3:L4567e3:{c.instructions+=6;NFSU2_TR(0x4567e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4567e6:{NFSU2_TR(0x4567e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567e7:{NFSU2_TR(0x4567e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567e8:{NFSU2_TR(0x4567e8);
u8 U[4];
w4(U+0,u32(0xebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567ed:{NFSU2_TR(0x4567ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567ee:{NFSU2_TR(0x4567ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4567f3ull));
TAIL_STATIC(0x579410u,579);
}
B4567f3:L4567f3:{c.instructions+=5;NFSU2_TR(0x4567f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567f4:{NFSU2_TR(0x4567f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567f5:{NFSU2_TR(0x4567f5);
u8 U[4];
w4(U+0,u32(0xeeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567fa:{NFSU2_TR(0x4567fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4567fb:{NFSU2_TR(0x4567fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456800ull));
TAIL_STATIC(0x579410u,579);
}
B456800:L456800:{c.instructions+=5;NFSU2_TR(0x456800);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456801:{NFSU2_TR(0x456801);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456802:{NFSU2_TR(0x456802);
u8 U[4];
w4(U+0,u32(0xedull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456807:{NFSU2_TR(0x456807);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456808:{NFSU2_TR(0x456808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45680dull));
TAIL_STATIC(0x579410u,579);
}
B45680d:L45680d:{c.instructions+=5;NFSU2_TR(0x45680d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45680e:{NFSU2_TR(0x45680e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45680f:{NFSU2_TR(0x45680f);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456814:{NFSU2_TR(0x456814);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456815:{NFSU2_TR(0x456815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45681aull));
TAIL_STATIC(0x579410u,579);
}
B45681a:L45681a:{c.instructions+=6;NFSU2_TR(0x45681a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B45681d:{NFSU2_TR(0x45681d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45681e:{NFSU2_TR(0x45681e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45681f:{NFSU2_TR(0x45681f);
u8 U[4];
w4(U+0,u32(0xe7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456824:{NFSU2_TR(0x456824);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456825:{NFSU2_TR(0x456825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45682aull));
TAIL_STATIC(0x579410u,579);
}
B45682a:L45682a:{c.instructions+=5;NFSU2_TR(0x45682a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45682b:{NFSU2_TR(0x45682b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45682c:{NFSU2_TR(0x45682c);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456831:{NFSU2_TR(0x456831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456832:{NFSU2_TR(0x456832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456837ull));
TAIL_STATIC(0x579410u,579);
}
B456837:L456837:{c.instructions+=5;NFSU2_TR(0x456837);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456838:{NFSU2_TR(0x456838);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456839:{NFSU2_TR(0x456839);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45683e:{NFSU2_TR(0x45683e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45683f:{NFSU2_TR(0x45683f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456844ull));
TAIL_STATIC(0x579410u,579);
}
B456844:L456844:{c.instructions+=5;NFSU2_TR(0x456844);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456845:{NFSU2_TR(0x456845);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456846:{NFSU2_TR(0x456846);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45684b:{NFSU2_TR(0x45684b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45684c:{NFSU2_TR(0x45684c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456851ull));
TAIL_STATIC(0x579410u,579);
}
B456851:L456851:{c.instructions+=6;NFSU2_TR(0x456851);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456854:{NFSU2_TR(0x456854);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456855:{NFSU2_TR(0x456855);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456856:{NFSU2_TR(0x456856);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45685b:{NFSU2_TR(0x45685b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45685c:{NFSU2_TR(0x45685c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456861ull));
TAIL_STATIC(0x579410u,579);
}
B456861:L456861:{c.instructions+=5;NFSU2_TR(0x456861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456862:{NFSU2_TR(0x456862);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456867:{NFSU2_TR(0x456867);
u8 U[4];
w4(U+0,u32(0xdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45686c:{NFSU2_TR(0x45686c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45686d:{NFSU2_TR(0x45686d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456872ull));
TAIL_STATIC(0x579410u,579);
}
B456872:L456872:{c.instructions+=5;NFSU2_TR(0x456872);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456873:{NFSU2_TR(0x456873);
u8 U[4];
w4(U+0,u32(0x455af0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456878:{NFSU2_TR(0x456878);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45687d:{NFSU2_TR(0x45687d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45687e:{NFSU2_TR(0x45687e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456883ull));
TAIL_STATIC(0x579410u,579);
}
B456883:L456883:{c.instructions+=3;NFSU2_TR(0x456883);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456884:{NFSU2_TR(0x456884);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456885:{NFSU2_TR(0x456885);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45688a:L45688a:{c.instructions+=2;NFSU2_TR(0x45688a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45688b:{NFSU2_TR(0x45688b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456890ull));
TAIL_STATIC(0x579410u,579);
}
B456890:L456890:{c.instructions+=6;NFSU2_TR(0x456890);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B456893:{NFSU2_TR(0x456893);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456894:{NFSU2_TR(0x456894);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456895:{NFSU2_TR(0x456895);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45689a:{NFSU2_TR(0x45689a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45689b:{NFSU2_TR(0x45689b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4568a0ull));
TAIL_STATIC(0x579410u,579);
}
B4568a0:L4568a0:{c.instructions+=1;NFSU2_TR(0x4568a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4568a3:L4568a3:{c.instructions+=8;NFSU2_TR(0x4568a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4568a4:{NFSU2_TR(0x4568a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4568a5:{NFSU2_TR(0x4568a5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4568a9:{NFSU2_TR(0x4568a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4568aa:{NFSU2_TR(0x4568aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4568ab:{NFSU2_TR(0x4568ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4568b2:{NFSU2_TR(0x4568b2);
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
B4568b5:{NFSU2_TR(0x4568b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B456940:L456940:{c.instructions+=16;NFSU2_TR(0x456940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456941:{NFSU2_TR(0x456941);
__builtin_memmove((R+20),(R+16),4);
}
B456943:{NFSU2_TR(0x456943);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B456946:{NFSU2_TR(0x456946);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456948:{NFSU2_TR(0x456948);
u8 U[4];
w4(U+0,u32(0x77224bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45694d:{NFSU2_TR(0x45694d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456953:{NFSU2_TR(0x456953);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456954:{NFSU2_TR(0x456954);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45695b:{NFSU2_TR(0x45695b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3e8ull))));
}
B456961:{NFSU2_TR(0x456961);
__builtin_memmove((R+0),gp(0x828644),4);
}
B456966:{NFSU2_TR(0x456966);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456968:{NFSU2_TR(0x456968);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456969:{NFSU2_TR(0x456969);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45696a:{NFSU2_TR(0x45696a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45696b:{NFSU2_TR(0x45696b);
__builtin_memmove((R+12),(R+4),4);
}
B45696d:{NFSU2_TR(0x45696d);
if(r1(R+518)){{goto L456989;}}
}
B45696f:L45696f:{c.instructions+=3;NFSU2_TR(0x45696f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456975:{NFSU2_TR(0x456975);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456977:{NFSU2_TR(0x456977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456980;}}
}
B456979:L456979:{c.instructions+=2;NFSU2_TR(0x456979);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45697b:{NFSU2_TR(0x45697b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456980ull));
TAIL_STATIC(0x455c80u,455);
}
B456980:L456980:{c.instructions+=3;NFSU2_TR(0x456980);
__builtin_memmove((R+0),gp(0x828644),4);
}
B456985:{NFSU2_TR(0x456985);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456987:{NFSU2_TR(0x456987);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4569a0;}}
}
B456989:L456989:{c.instructions+=3;NFSU2_TR(0x456989);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45698f:{NFSU2_TR(0x45698f);
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
B456991:{NFSU2_TR(0x456991);
if(r1(R+518)){TAIL_STATIC(0x45794bu,457);}
}
B456997:L456997:{c.instructions+=3;NFSU2_TR(0x456997);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456999:{NFSU2_TR(0x456999);
__builtin_memmove((R+4),(R+12),4);
}
B45699b:{NFSU2_TR(0x45699b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4569a0ull));
TAIL_STATIC(0x455c80u,455);
}
B4569a0:L4569a0:{c.instructions+=3;NFSU2_TR(0x4569a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4569a6:{NFSU2_TR(0x4569a6);
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
B4569a8:{NFSU2_TR(0x4569a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x45794bu,457);}
}
B4569ae:L4569ae:{c.instructions+=4;NFSU2_TR(0x4569ae);
s4(0x8650a0,u32(0x1ull));
}
B4569b8:{NFSU2_TR(0x4569b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4569be:{NFSU2_TR(0x4569be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4569c0:{NFSU2_TR(0x4569c0);
if(r1(R+518)){{goto L4569d0;}}
}
B4569c2:L4569c2:{c.instructions+=3;NFSU2_TR(0x4569c2);
__builtin_memmove((R+0),gp(0x865198),4);
}
B4569c7:{NFSU2_TR(0x4569c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4569c8:{NFSU2_TR(0x4569c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4569cdull));
TAIL_STATIC(0x441fd0u,441);
}
B4569cd:L4569cd:{c.instructions+=1;NFSU2_TR(0x4569cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4569d0:L4569d0:{c.instructions+=4;NFSU2_TR(0x4569d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4569d6:{NFSU2_TR(0x4569d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B4569d9:{NFSU2_TR(0x4569d9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4569dc:{NFSU2_TR(0x4569dc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x457934u,457);}
}
B4569e2:L4569e2:{c.instructions+=1;NFSU2_TR(0x4569e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x457960ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4569e9:L4569e9:{c.instructions+=10;NFSU2_TR(0x4569e9);
{u32 ea_=u32(u32(8303732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4569ef:{NFSU2_TR(0x4569ef);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4569f4:{NFSU2_TR(0x4569f4);
{u32 ea_=u32(r4(R+12)+u32(7316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4569fa:{NFSU2_TR(0x4569fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4569fc:{NFSU2_TR(0x4569fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4569fd:{NFSU2_TR(0x4569fd);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456a03:{NFSU2_TR(0x456a03);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456a09:{NFSU2_TR(0x456a09);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B456a0f:{NFSU2_TR(0x456a0f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456a12:{NFSU2_TR(0x456a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456a17ull));
TAIL_STATIC(0x401090u,401);
}
B456a17:L456a17:{c.instructions+=7;NFSU2_TR(0x456a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456a1d:{NFSU2_TR(0x456a1d);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B456a23:{NFSU2_TR(0x456a23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B456a26:{NFSU2_TR(0x456a26);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456a2a:{NFSU2_TR(0x456a2a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B456a2b:{NFSU2_TR(0x456a2b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456a2d:{NFSU2_TR(0x456a2d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456a58;}}
}
B456a2f:L456a2f:{c.instructions+=4;NFSU2_TR(0x456a2f);
__builtin_memmove((R+8),(R+4),4);
}
B456a31:{NFSU2_TR(0x456a31);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B456a37:{NFSU2_TR(0x456a37);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B456a3e:{NFSU2_TR(0x456a3e);
__builtin_memmove((R+28),(R+28),4);
}
B456a40:L456a40:{c.instructions+=5;NFSU2_TR(0x456a40);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456a42:{NFSU2_TR(0x456a42);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B456a46:{NFSU2_TR(0x456a46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B456a48:{NFSU2_TR(0x456a48);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B456a4b:{NFSU2_TR(0x456a4b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L456a58;}}
}
B456a4d:L456a4d:{c.instructions+=4;NFSU2_TR(0x456a4d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B456a4e:{NFSU2_TR(0x456a4e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x88ull))));
}
B456a54:{NFSU2_TR(0x456a54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456a56:{NFSU2_TR(0x456a56);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x456a40u);}goto L456a40;}}
}
B456a58:L456a58:{c.instructions+=4;NFSU2_TR(0x456a58);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B456a5e:{NFSU2_TR(0x456a5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456a60:{NFSU2_TR(0x456a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456a66:{NFSU2_TR(0x456a66);
if(r1(R+518)){TAIL_STATIC(0x457934u,457);}
}
B456a6c:L456a6c:{c.instructions+=2;NFSU2_TR(0x456a6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B456a73:{NFSU2_TR(0x456a73);
if(r1(R+518)){{goto L456a88;}}
}
B456a75:L456a75:{c.instructions+=4;NFSU2_TR(0x456a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456a7b:{NFSU2_TR(0x456a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456a7c:{NFSU2_TR(0x456a7c);
__builtin_memmove((R+4),(R+12),4);
}
B456a7e:{NFSU2_TR(0x456a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456a83ull));
TAIL_STATIC(0x450fc0u,450);
}
B456a83:L456a83:{c.instructions+=1;NFSU2_TR(0x456a83);
TAIL_STATIC(0x457934u,457);
}
B456a88:L456a88:{c.instructions+=4;NFSU2_TR(0x456a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456a8e:{NFSU2_TR(0x456a8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456a8f:{NFSU2_TR(0x456a8f);
__builtin_memmove((R+4),(R+12),4);
}
B456a91:{NFSU2_TR(0x456a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456a96ull));
TAIL_STATIC(0x450fc0u,450);
}
B456a96:L456a96:{c.instructions+=1;NFSU2_TR(0x456a96);
TAIL_STATIC(0x457934u,457);
}
B456a9b:L456a9b:{c.instructions+=2;NFSU2_TR(0x456a9b);
__builtin_memmove((R+4),(R+12),4);
}
B456a9d:{NFSU2_TR(0x456a9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456aa2ull));
TAIL_STATIC(0x442a10u,442);
}
B456aa2:L456aa2:{c.instructions+=3;NFSU2_TR(0x456aa2);
__builtin_memmove((R+24),(R+0),4);
}
B456aa4:{NFSU2_TR(0x456aa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456aa6:{NFSU2_TR(0x456aa6);
if(r1(R+518)){TAIL_STATIC(0x457934u,457);}
}
B456aac:L456aac:{c.instructions+=2;NFSU2_TR(0x456aac);
__builtin_memmove((R+4),(R+12),4);
}
B456aae:{NFSU2_TR(0x456aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456ab3ull));
TAIL_STATIC(0x448030u,448);
}
B456ab3:L456ab3:{c.instructions+=5;NFSU2_TR(0x456ab3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456ab5:{NFSU2_TR(0x456ab5);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B456ab9:{NFSU2_TR(0x456ab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456aba:{NFSU2_TR(0x456aba);
__builtin_memmove((R+4),(R+24),4);
}
B456abc:{NFSU2_TR(0x456abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456ac1ull));
TAIL_STATIC(0x443bd0u,443);
}
B456ac1:L456ac1:{c.instructions+=1;NFSU2_TR(0x456ac1);
TAIL_STATIC(0x457934u,457);
}
B456ac6:L456ac6:{c.instructions+=4;NFSU2_TR(0x456ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456acc:{NFSU2_TR(0x456acc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456acd:{NFSU2_TR(0x456acd);
w4(R+4,u32(0x827b88ull));
}
B456ad2:{NFSU2_TR(0x456ad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456ad7ull));
TAIL_STATIC(0x435d30u,435);
}
B456ad7:L456ad7:{c.instructions+=2;NFSU2_TR(0x456ad7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456ad9:{NFSU2_TR(0x456ad9);
if(r1(R+518)){{goto L456bf2;}}
}
B456adf:L456adf:{c.instructions+=8;NFSU2_TR(0x456adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456ae5:{NFSU2_TR(0x456ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456aeb:{NFSU2_TR(0x456aeb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456aed:{NFSU2_TR(0x456aed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456aef:{NFSU2_TR(0x456aef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456af0:{NFSU2_TR(0x456af0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456af1:{NFSU2_TR(0x456af1);
w4(R+4,u32(0x827b88ull));
}
B456af6:{NFSU2_TR(0x456af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456afbull));
TAIL_STATIC(0x43b8e0u,43b);
}
B456afb:L456afb:{c.instructions+=6;NFSU2_TR(0x456afb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456afd:{NFSU2_TR(0x456afd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456aff:{NFSU2_TR(0x456aff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b00:{NFSU2_TR(0x456b00);
w4(R+4,u32(0x827b88ull));
}
B456b05:{NFSU2_TR(0x456b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456b0b:{NFSU2_TR(0x456b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b10ull));
TAIL_STATIC(0x438e70u,438);
}
B456b10:L456b10:{c.instructions+=4;NFSU2_TR(0x456b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456b16:{NFSU2_TR(0x456b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b17:{NFSU2_TR(0x456b17);
w4(R+4,u32(0x827b88ull));
}
B456b1c:{NFSU2_TR(0x456b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b21ull));
TAIL_STATIC(0x432490u,432);
}
B456b21:L456b21:{c.instructions+=3;NFSU2_TR(0x456b21);
__builtin_memmove((R+28),(R+0),4);
}
B456b23:{NFSU2_TR(0x456b23);
__builtin_memmove((R+4),(R+28),4);
}
B456b25:{NFSU2_TR(0x456b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b2aull));
TAIL_STATIC(0x4307d0u,430);
}
B456b2a:L456b2a:{c.instructions+=2;NFSU2_TR(0x456b2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456b2c:{NFSU2_TR(0x456b2c);
if(r1(R+518)){{goto L456b35;}}
}
B456b2e:L456b2e:{c.instructions+=2;NFSU2_TR(0x456b2e);
__builtin_memmove((R+4),(R+28),4);
}
B456b30:{NFSU2_TR(0x456b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b35ull));
TAIL_STATIC(0x439120u,439);
}
B456b35:L456b35:{c.instructions+=3;NFSU2_TR(0x456b35);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B456b3c:{NFSU2_TR(0x456b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x110ull))));
__builtin_memmove((R+24),(U+0),4);
}
B456b42:{NFSU2_TR(0x456b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b47ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B456b47:L456b47:{c.instructions+=6;NFSU2_TR(0x456b47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b49:{NFSU2_TR(0x456b49);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b4e:{NFSU2_TR(0x456b4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b4f:{NFSU2_TR(0x456b4f);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B456b56:{NFSU2_TR(0x456b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456b61:{NFSU2_TR(0x456b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b66ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B456b66:L456b66:{c.instructions+=6;NFSU2_TR(0x456b66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b68:{NFSU2_TR(0x456b68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b6a:{NFSU2_TR(0x456b6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b6c:{NFSU2_TR(0x456b6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456b6d:{NFSU2_TR(0x456b6d);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B456b74:{NFSU2_TR(0x456b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456b79ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B456b79:L456b79:{c.instructions+=8;NFSU2_TR(0x456b79);
{u32 ea_=u32(r4(R+12)+u32(7264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456b7f:{NFSU2_TR(0x456b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456b89:{NFSU2_TR(0x456b89);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456b8c:{NFSU2_TR(0x456b8c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B456b92:{NFSU2_TR(0x456b92);
{u32 ea_=u32(r4(R+12)+u32(7280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B456b98:{NFSU2_TR(0x456b98);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B456b9a:{NFSU2_TR(0x456b9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456b9d:{NFSU2_TR(0x456b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456bd0;}}
}
B456b9f:L456b9f:{c.instructions+=7;NFSU2_TR(0x456b9f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456ba5:{NFSU2_TR(0x456ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456bab:{NFSU2_TR(0x456bab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456bae:{NFSU2_TR(0x456bae);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B456bb0:{NFSU2_TR(0x456bb0);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456bb6:{NFSU2_TR(0x456bb6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B456bb8:{NFSU2_TR(0x456bb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456bd2;}}
}
B456bba:L456bba:{c.instructions+=2;NFSU2_TR(0x456bba);
__builtin_memmove((R+4),(R+12),4);
}
B456bbc:{NFSU2_TR(0x456bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456bc1ull));
TAIL_STATIC(0x448030u,448);
}
B456bc1:L456bc1:{c.instructions+=2;NFSU2_TR(0x456bc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456bc3:{NFSU2_TR(0x456bc3);
if(r1(R+518)){{goto L456bd2;}}
}
B456bc5:L456bc5:{c.instructions+=3;NFSU2_TR(0x456bc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456bcb:{NFSU2_TR(0x456bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456bce:{NFSU2_TR(0x456bce);
{goto L456bd2;}
}
B456bd0:L456bd0:{c.instructions+=1;NFSU2_TR(0x456bd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B456bd2:L456bd2:{c.instructions+=3;NFSU2_TR(0x456bd2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456bd4:{NFSU2_TR(0x456bd4);
__builtin_memmove((R+4),(R+12),4);
}
B456bd6:{NFSU2_TR(0x456bd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456bdbull));
TAIL_STATIC(0x455c80u,455);
}
B456bdb:L456bdb:{c.instructions+=3;NFSU2_TR(0x456bdb);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B456be2:{NFSU2_TR(0x456be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3fcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B456bed:{NFSU2_TR(0x456bed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456bf2ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B456bf2:L456bf2:{c.instructions+=3;NFSU2_TR(0x456bf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456bf8:{NFSU2_TR(0x456bf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456bfa:{NFSU2_TR(0x456bfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456c08;}}
}
B456bfc:L456bfc:{c.instructions+=3;NFSU2_TR(0x456bfc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B456bfd:{NFSU2_TR(0x456bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456c03:{NFSU2_TR(0x456c03);
TAIL_STATIC(0x457934u,457);
}
B456c08:L456c08:{c.instructions+=4;NFSU2_TR(0x456c08);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456c0a:{NFSU2_TR(0x456c0a);
__builtin_memmove((R+4),(R+12),4);
}
B456c0c:{NFSU2_TR(0x456c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456c16:{NFSU2_TR(0x456c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c1bull));
TAIL_STATIC(0x455c80u,455);
}
B456c1b:L456c1b:{c.instructions+=1;NFSU2_TR(0x456c1b);
TAIL_STATIC(0x457934u,457);
}
B456c20:L456c20:{c.instructions+=3;NFSU2_TR(0x456c20);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456c26:{NFSU2_TR(0x456c26);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B456c29:{NFSU2_TR(0x456c29);
if(r1(R+518)){{goto L456c39;}}
}
B456c2b:L456c2b:{c.instructions+=2;NFSU2_TR(0x456c2b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B456c2c:{NFSU2_TR(0x456c2c);
if(r1(R+518)){{goto L456cc5;}}
}
B456c32:L456c32:{c.instructions+=2;NFSU2_TR(0x456c32);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B456c33:{NFSU2_TR(0x456c33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x457934u,457);}
}
B456c39:L456c39:{c.instructions+=4;NFSU2_TR(0x456c39);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456c3f:{NFSU2_TR(0x456c3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456c40:{NFSU2_TR(0x456c40);
w4(R+4,u32(0x827b88ull));
}
B456c45:{NFSU2_TR(0x456c45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c4aull));
TAIL_STATIC(0x432490u,432);
}
B456c4a:L456c4a:{c.instructions+=3;NFSU2_TR(0x456c4a);
__builtin_memmove((R+28),(R+0),4);
}
B456c4c:{NFSU2_TR(0x456c4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456c4e:{NFSU2_TR(0x456c4e);
if(r1(R+518)){TAIL_STATIC(0x457934u,457);}
}
B456c54:L456c54:{c.instructions+=2;NFSU2_TR(0x456c54);
__builtin_memmove((R+4),(R+28),4);
}
B456c56:{NFSU2_TR(0x456c56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c5bull));
TAIL_STATIC(0x4307d0u,430);
}
B456c5b:L456c5b:{c.instructions+=2;NFSU2_TR(0x456c5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456c5d:{NFSU2_TR(0x456c5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456c66;}}
}
B456c5f:L456c5f:{c.instructions+=2;NFSU2_TR(0x456c5f);
__builtin_memmove((R+4),(R+28),4);
}
B456c61:{NFSU2_TR(0x456c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c66ull));
TAIL_STATIC(0x439160u,439);
}
B456c66:L456c66:{c.instructions+=7;NFSU2_TR(0x456c66);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456c69:{NFSU2_TR(0x456c69);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B456c6c:{NFSU2_TR(0x456c6c);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B456c72:{NFSU2_TR(0x456c72);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B456c78:{NFSU2_TR(0x456c78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B456c7a:{NFSU2_TR(0x456c7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456c7d:{NFSU2_TR(0x456c7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456ca4;}}
}
B456c7f:L456c7f:{c.instructions+=3;NFSU2_TR(0x456c7f);
__builtin_memmove((R+4),(R+28),4);
}
B456c81:{NFSU2_TR(0x456c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456c8b:{NFSU2_TR(0x456c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c90ull));
TAIL_STATIC(0x4307d0u,430);
}
B456c90:L456c90:{c.instructions+=2;NFSU2_TR(0x456c90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456c92:{NFSU2_TR(0x456c92);
if(r1(R+518)){{goto L456c9b;}}
}
B456c94:L456c94:{c.instructions+=2;NFSU2_TR(0x456c94);
__builtin_memmove((R+4),(R+28),4);
}
B456c96:{NFSU2_TR(0x456c96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456c9bull));
TAIL_STATIC(0x439120u,439);
}
B456c9b:L456c9b:{c.instructions+=3;NFSU2_TR(0x456c9b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456c9d:{NFSU2_TR(0x456c9d);
__builtin_memmove((R+4),(R+12),4);
}
B456c9f:{NFSU2_TR(0x456c9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456ca4ull));
TAIL_STATIC(0x455c80u,455);
}
B456ca4:L456ca4:{c.instructions+=3;NFSU2_TR(0x456ca4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B456caa:{NFSU2_TR(0x456caa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456cac:{NFSU2_TR(0x456cac);
if(r1(R+518)){TAIL_STATIC(0x457934u,457);}
}
B456cb2:L456cb2:{c.instructions+=4;NFSU2_TR(0x456cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456cb8:{NFSU2_TR(0x456cb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456cb9:{NFSU2_TR(0x456cb9);
__builtin_memmove((R+4),(R+12),4);
}
B456cbb:{NFSU2_TR(0x456cbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456cc0ull));
TAIL_STATIC(0x450fc0u,450);
}
B456cc0:L456cc0:{c.instructions+=1;NFSU2_TR(0x456cc0);
TAIL_STATIC(0x457934u,457);
}
B456cc5:L456cc5:{c.instructions+=8;NFSU2_TR(0x456cc5);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456ccb:{NFSU2_TR(0x456ccb);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456cd1:{NFSU2_TR(0x456cd1);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B456cd7:{NFSU2_TR(0x456cd7);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B456cdd:{NFSU2_TR(0x456cdd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B456ce3:{NFSU2_TR(0x456ce3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B456ce5:{NFSU2_TR(0x456ce5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456ce8:{NFSU2_TR(0x456ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x457934u,457);}
}
B456cee:L456cee:{c.instructions+=4;NFSU2_TR(0x456cee);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456cf0:{NFSU2_TR(0x456cf0);
__builtin_memmove((R+4),(R+12),4);
}
B456cf2:{NFSU2_TR(0x456cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456cfc:{NFSU2_TR(0x456cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456d01ull));
TAIL_STATIC(0x455c80u,455);
}
B456d01:L456d01:{c.instructions+=1;NFSU2_TR(0x456d01);
TAIL_STATIC(0x457934u,457);
}
B456d06:L456d06:{c.instructions+=3;NFSU2_TR(0x456d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456d0c:{NFSU2_TR(0x456d0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456d0f:{NFSU2_TR(0x456d0f);
if(r1(R+518)){{goto L456d26;}}
}
B456d11:L456d11:{c.instructions+=2;NFSU2_TR(0x456d11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456d14:{NFSU2_TR(0x456d14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456d26;}}
}
B456d16:L456d16:{c.instructions+=4;NFSU2_TR(0x456d16);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456d18:{NFSU2_TR(0x456d18);
__builtin_memmove((R+4),(R+12),4);
}
B456d1a:{NFSU2_TR(0x456d1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B456d21:{NFSU2_TR(0x456d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456d26ull));
TAIL_STATIC(0x455c80u,455);
}
B456d26:L456d26:{c.instructions+=2;NFSU2_TR(0x456d26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B456d2c:{NFSU2_TR(0x456d2c);
TAIL_STATIC(0x457934u,457);
}
B456d31:L456d31:{c.instructions+=6;NFSU2_TR(0x456d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456d37:{NFSU2_TR(0x456d37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B456d3d:{NFSU2_TR(0x456d3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B456d40:{NFSU2_TR(0x456d40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B456d46:{NFSU2_TR(0x456d46);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456d48:{NFSU2_TR(0x456d48);
if(r1(R+518)){TAIL_STATIC(0x457934u,457);}
}
B456d4e:L456d4e:{c.instructions+=2;NFSU2_TR(0x456d4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B456d55:{NFSU2_TR(0x456d55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x457934u,457);}
}
B456d5b:L456d5b:{c.instructions+=2;NFSU2_TR(0x456d5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1a3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B456d62:{NFSU2_TR(0x456d62);
TAIL_STATIC(0x457934u,457);
}
B456d67:L456d67:{c.instructions+=3;NFSU2_TR(0x456d67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456d6d:{NFSU2_TR(0x456d6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456d6f:{NFSU2_TR(0x456d6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456d8f;}}
}
B456d71:L456d71:{c.instructions+=8;NFSU2_TR(0x456d71);
{u32 ea_=u32(u32(7892968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456d77:{NFSU2_TR(0x456d77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456d78:{NFSU2_TR(0x456d78);
{u32 ea_=u32(r4(R+12)+u32(7316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456d7e:{NFSU2_TR(0x456d7e);
__builtin_memmove((R+4),(R+12),4);
}
B456d80:{NFSU2_TR(0x456d80);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456d86:{NFSU2_TR(0x456d86);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456d89:{NFSU2_TR(0x456d89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456d8a:{NFSU2_TR(0x456d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456d8full));
TAIL_STATIC(0x443190u,443);
}
B456d8f:L456d8f:{c.instructions+=9;NFSU2_TR(0x456d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456d95:{NFSU2_TR(0x456d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B456d9b:{NFSU2_TR(0x456d9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B456d9d:{NFSU2_TR(0x456d9d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456d9f:{NFSU2_TR(0x456d9f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B456da2:{NFSU2_TR(0x456da2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B456da3:{NFSU2_TR(0x456da3);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B456da5:{NFSU2_TR(0x456da5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456da7:{NFSU2_TR(0x456da7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456dad;}}
}
B456da9:L456da9:{c.instructions+=2;NFSU2_TR(0x456da9);
__builtin_memmove((R+4),(R+28),4);
}
B456dab:{NFSU2_TR(0x456dab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B456dad:L456dad:{c.instructions+=1;NFSU2_TR(0x456dad);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L456dbe;}}
}
B456daf:L456daf:{c.instructions+=3;NFSU2_TR(0x456daf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B456db5:{NFSU2_TR(0x456db5);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456dbc:{NFSU2_TR(0x456dbc);
{goto L456dc4;}
}
B456dbe:L456dbe:{c.instructions+=1;NFSU2_TR(0x456dbe);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456dc4:L456dc4:{c.instructions+=10;NFSU2_TR(0x456dc4);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456dca:{NFSU2_TR(0x456dca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456dcb:{NFSU2_TR(0x456dcb);
{u32 ea_=u32(u32(7892972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456dd1:{NFSU2_TR(0x456dd1);
__builtin_memmove((R+4),(R+12),4);
}
B456dd3:{NFSU2_TR(0x456dd3);
{u32 ea_=u32(r4(R+12)+u32(7320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456dd9:{NFSU2_TR(0x456dd9);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456ddf:{NFSU2_TR(0x456ddf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456de2:{NFSU2_TR(0x456de2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456de4:{NFSU2_TR(0x456de4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456de5:{NFSU2_TR(0x456de5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456deaull));
TAIL_STATIC(0x443210u,443);
}
B456dea:L456dea:{c.instructions+=1;NFSU2_TR(0x456dea);
TAIL_STATIC(0x457934u,457);
}
B456def:L456def:{c.instructions+=9;NFSU2_TR(0x456def);
{u32 ea_=u32(u32(7892968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456df5:{NFSU2_TR(0x456df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B456dfb:{NFSU2_TR(0x456dfb);
{u32 ea_=u32(r4(R+12)+u32(7316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456e01:{NFSU2_TR(0x456e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B456e07:{NFSU2_TR(0x456e07);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B456e08:{NFSU2_TR(0x456e08);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B456e0a:{NFSU2_TR(0x456e0a);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456e10:{NFSU2_TR(0x456e10);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456e14:{NFSU2_TR(0x456e14);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L456e23;}}
}
B456e16:L456e16:{c.instructions+=5;NFSU2_TR(0x456e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B456e1a:{NFSU2_TR(0x456e1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456e1b:{NFSU2_TR(0x456e1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456e1c:{NFSU2_TR(0x456e1c);
__builtin_memmove((R+4),(R+12),4);
}
B456e1e:{NFSU2_TR(0x456e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456e23ull));
TAIL_STATIC(0x443190u,443);
}
B456e23:L456e23:{c.instructions+=3;NFSU2_TR(0x456e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B456e29:{NFSU2_TR(0x456e29);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456e2b:{NFSU2_TR(0x456e2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456e75;}}
}
B456e2d:L456e2d:{c.instructions+=2;NFSU2_TR(0x456e2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B456e34:{NFSU2_TR(0x456e34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L456e75;}}
}
B456e36:L456e36:{c.instructions+=8;NFSU2_TR(0x456e36);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456e3a:{NFSU2_TR(0x456e3a);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456e40:{NFSU2_TR(0x456e40);
{u32 ea_=u32(r4(R+12)+u32(7280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B456e46:{NFSU2_TR(0x456e46);
{u32 ea_=u32(r4(R+12)+u32(7280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B456e4c:{NFSU2_TR(0x456e4c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B456e52:{NFSU2_TR(0x456e52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B456e54:{NFSU2_TR(0x456e54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B456e57:{NFSU2_TR(0x456e57);
if(r1(R+514)){{goto L456e63;}}
}
B456e59:L456e59:{c.instructions+=1;NFSU2_TR(0x456e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c70ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456e63:L456e63:{c.instructions+=3;NFSU2_TR(0x456e63);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456e69:{NFSU2_TR(0x456e69);
{u32 ea_=u32(r4(R+12)+u32(7280u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B456e6f:{NFSU2_TR(0x456e6f);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456e75:L456e75:{c.instructions+=9;NFSU2_TR(0x456e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B456e7b:{NFSU2_TR(0x456e7b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B456e7d:{NFSU2_TR(0x456e7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B456e80:{NFSU2_TR(0x456e80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456e82:{NFSU2_TR(0x456e82);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B456e85:{NFSU2_TR(0x456e85);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B456e86:{NFSU2_TR(0x456e86);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B456e88:{NFSU2_TR(0x456e88);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B456e8a:{NFSU2_TR(0x456e8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L456e90;}}
}
B456e8c:L456e8c:{c.instructions+=2;NFSU2_TR(0x456e8c);
__builtin_memmove((R+0),(R+28),4);
}
B456e8e:{NFSU2_TR(0x456e8e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B456e90:L456e90:{c.instructions+=1;NFSU2_TR(0x456e90);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L456ea1;}}
}
B456e92:L456e92:{c.instructions+=3;NFSU2_TR(0x456e92);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B456e98:{NFSU2_TR(0x456e98);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456e9f:{NFSU2_TR(0x456e9f);
{goto L456ea7;}
}
B456ea1:L456ea1:{c.instructions+=1;NFSU2_TR(0x456ea1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456ea7:L456ea7:{c.instructions+=11;NFSU2_TR(0x456ea7);
{u32 ea_=u32(u32(7892884u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B456ead:{NFSU2_TR(0x456ead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456eae:{NFSU2_TR(0x456eae);
__builtin_memmove((R+4),(R+12),4);
}
B456eb0:{NFSU2_TR(0x456eb0);
{u32 ea_=u32(r4(R+12)+u32(7268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456eb6:{NFSU2_TR(0x456eb6);
{u32 ea_=u32(u32(7892972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456ebc:{NFSU2_TR(0x456ebc);
{u32 ea_=u32(r4(R+12)+u32(7320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456ec2:{NFSU2_TR(0x456ec2);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456ec8:{NFSU2_TR(0x456ec8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456ecb:{NFSU2_TR(0x456ecb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456ecd:{NFSU2_TR(0x456ecd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456ece:{NFSU2_TR(0x456ece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456ed3ull));
TAIL_STATIC(0x443210u,443);
}
B456ed3:L456ed3:{c.instructions+=1;NFSU2_TR(0x456ed3);
TAIL_STATIC(0x457934u,457);
}
B456ed8:L456ed8:{c.instructions+=3;NFSU2_TR(0x456ed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B456ede:{NFSU2_TR(0x456ede);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B456ee0:{NFSU2_TR(0x456ee0);
if(r1(R+518)){{goto L456eee;}}
}
B456ee2:L456ee2:{c.instructions+=3;NFSU2_TR(0x456ee2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B456ee3:{NFSU2_TR(0x456ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456ee9:{NFSU2_TR(0x456ee9);
TAIL_STATIC(0x457934u,457);
}
B456eee:L456eee:{c.instructions+=3;NFSU2_TR(0x456eee);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B456ef4:{NFSU2_TR(0x456ef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456ef6:{NFSU2_TR(0x456ef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x457934u,457);}
}
B456efc:L456efc:{c.instructions+=2;NFSU2_TR(0x456efc);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B456eff:{NFSU2_TR(0x456eff);
if(r1(R+518)){{goto L456f0f;}}
}
B456f01:L456f01:{c.instructions+=2;NFSU2_TR(0x456f01);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B456f04:{NFSU2_TR(0x456f04);
if(r1(R+518)){{goto L456f0f;}}
}
B456f06:L456f06:{c.instructions+=2;NFSU2_TR(0x456f06);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B456f09:{NFSU2_TR(0x456f09);
if(r1(R+518)){{goto L456f0f;}}
}
B456f0b:L456f0b:{c.instructions+=2;NFSU2_TR(0x456f0b);
u8 U[6];
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B456f0d:{NFSU2_TR(0x456f0d);
{goto L456f14;}
}
B456f0f:L456f0f:{c.instructions+=1;NFSU2_TR(0x456f0f);
w4(R+24,u32(0x1ull));
}
B456f14:L456f14:{c.instructions+=2;NFSU2_TR(0x456f14);
u8 U[4];
w4(U+0,u32(0xf2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f19:{NFSU2_TR(0x456f19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456f1eull));
TAIL_STATIC(0x450f80u,450);
}
B456f1e:L456f1e:{c.instructions+=4;NFSU2_TR(0x456f1e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456f22:{NFSU2_TR(0x456f22);
__builtin_memmove((R+8),gp(0x78703c),4);
}
B456f28:{NFSU2_TR(0x456f28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f29:{NFSU2_TR(0x456f29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456f2eull));
TAIL_STATIC(0x401020u,401);
}
B456f2e:L456f2e:{c.instructions+=8;NFSU2_TR(0x456f2e);
w4(R+0,u32(r2(R+0)));
}
B456f31:{NFSU2_TR(0x456f31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456f35:{NFSU2_TR(0x456f35);
u8 U[4];
w4(U+0,u32(0xf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f3a:{NFSU2_TR(0x456f3a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B456f3e:{NFSU2_TR(0x456f3e);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456f44:{NFSU2_TR(0x456f44);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456f48:{NFSU2_TR(0x456f48);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456f4c:{NFSU2_TR(0x456f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456f51ull));
TAIL_STATIC(0x450f80u,450);
}
B456f51:L456f51:{c.instructions+=5;NFSU2_TR(0x456f51);
__builtin_memmove((R+4),gp(0x787038),4);
}
B456f57:{NFSU2_TR(0x456f57);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B456f59:{NFSU2_TR(0x456f59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f5a:{NFSU2_TR(0x456f5a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456f5e:{NFSU2_TR(0x456f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456f63ull));
TAIL_STATIC(0x401020u,401);
}
B456f63:L456f63:{c.instructions+=9;NFSU2_TR(0x456f63);
w4(R+8,u32(r2(R+0)));
}
B456f66:{NFSU2_TR(0x456f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B456f6a:{NFSU2_TR(0x456f6a);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f6f:{NFSU2_TR(0x456f6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456f71:{NFSU2_TR(0x456f71);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B456f75:{NFSU2_TR(0x456f75);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456f7b:{NFSU2_TR(0x456f7b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456f7f:{NFSU2_TR(0x456f7f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456f83:{NFSU2_TR(0x456f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456f88ull));
TAIL_STATIC(0x571a00u,571);
}
B456f88:L456f88:{c.instructions+=6;NFSU2_TR(0x456f88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B456f8b:{NFSU2_TR(0x456f8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B456f8d:{NFSU2_TR(0x456f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B456f90:{NFSU2_TR(0x456f90);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B456f92:{NFSU2_TR(0x456f92);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B456f96:{NFSU2_TR(0x456f96);
if(r1(R+518)){{goto L456fb4;}}
}
B456f98:L456f98:{c.instructions+=6;NFSU2_TR(0x456f98);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456f9c:{NFSU2_TR(0x456f9c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456fa2:{NFSU2_TR(0x456fa2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456fa6:{NFSU2_TR(0x456fa6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456faa:{NFSU2_TR(0x456faa);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456fb0:{NFSU2_TR(0x456fb0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456fb4:L456fb4:{c.instructions+=2;NFSU2_TR(0x456fb4);
u8 U[4];
w4(U+0,u32(0xf3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456fb9:{NFSU2_TR(0x456fb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456fbeull));
TAIL_STATIC(0x450f80u,450);
}
B456fbe:L456fbe:{c.instructions+=7;NFSU2_TR(0x456fbe);
{u32 ea_=u32(u32(7893028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456fc4:{NFSU2_TR(0x456fc4);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456fca:{NFSU2_TR(0x456fca);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456fcf:{NFSU2_TR(0x456fcf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B456fd1:{NFSU2_TR(0x456fd1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456fd5:{NFSU2_TR(0x456fd5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B456fd7:{NFSU2_TR(0x456fd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x456fdcull));
TAIL_STATIC(0x450f80u,450);
}
B456fdc:L456fdc:{c.instructions+=9;NFSU2_TR(0x456fdc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B456fde:{NFSU2_TR(0x456fde);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456fe3:{NFSU2_TR(0x456fe3);
{u32 ea_=u32(u32(7893028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B456fe9:{NFSU2_TR(0x456fe9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B456feb:{NFSU2_TR(0x456feb);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B456ff1:{NFSU2_TR(0x456ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B456ff9:{NFSU2_TR(0x456ff9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B456ffb:{NFSU2_TR(0x456ffb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B456fff:{NFSU2_TR(0x456fff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
TAIL_STATIC(0x457001u,457);
}
XIT:NFSU2_TR_EXIT(0x456,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
