#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x664,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x664,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_664(u8* __restrict R,Cpu& c);
u32 page_664(Cpu& c){return body_664(c.regs.data(),c);}
__attribute__((noinline)) u32 body_664(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x664000:goto L664000;
case 0x664002:goto L664002;
case 0x664005:c.instructions+=2;goto B664005;
case 0x664007:c.instructions+=1;goto B664007;
case 0x664009:goto L664009;
case 0x66400a:c.instructions+=1;goto B66400a;
case 0x66400f:goto L66400f;
case 0x664010:c.instructions+=1;goto B664010;
case 0x664013:goto L664013;
case 0x664016:c.instructions+=1;goto B664016;
case 0x664018:goto L664018;
case 0x664019:goto L664019;
case 0x66401c:c.instructions+=5;goto B66401c;
case 0x66401f:c.instructions+=4;goto B66401f;
case 0x664022:c.instructions+=3;goto B664022;
case 0x664024:c.instructions+=2;goto B664024;
case 0x664027:c.instructions+=1;goto B664027;
case 0x66402c:goto L66402c;
case 0x66402d:c.instructions+=1;goto B66402d;
case 0x664032:goto L664032;
case 0x664035:c.instructions+=2;goto B664035;
case 0x664036:c.instructions+=1;goto B664036;
case 0x664038:goto L664038;
case 0x664039:goto L664039;
case 0x66403a:c.instructions+=2;goto B66403a;
case 0x66403b:c.instructions+=1;goto B66403b;
case 0x66403c:goto L66403c;
case 0x66403e:c.instructions+=15;goto B66403e;
case 0x66403f:c.instructions+=14;goto B66403f;
case 0x664041:c.instructions+=13;goto B664041;
case 0x664044:c.instructions+=12;goto B664044;
case 0x664046:c.instructions+=11;goto B664046;
case 0x66404c:c.instructions+=10;goto B66404c;
case 0x66404d:c.instructions+=9;goto B66404d;
case 0x66404e:c.instructions+=8;goto B66404e;
case 0x664052:c.instructions+=7;goto B664052;
case 0x664058:c.instructions+=6;goto B664058;
case 0x66405e:c.instructions+=5;goto B66405e;
case 0x664060:c.instructions+=4;goto B664060;
case 0x664062:c.instructions+=3;goto B664062;
case 0x664065:c.instructions+=2;goto B664065;
case 0x664068:c.instructions+=1;goto B664068;
case 0x66406e:goto L66406e;
case 0x664071:c.instructions+=3;goto B664071;
case 0x664072:c.instructions+=2;goto B664072;
case 0x664075:c.instructions+=1;goto B664075;
case 0x66407b:goto L66407b;
case 0x664081:c.instructions+=1;goto B664081;
case 0x664083:goto L664083;
case 0x664086:c.instructions+=1;goto B664086;
case 0x664088:goto L664088;
case 0x66408e:c.instructions+=1;goto B66408e;
case 0x664090:goto L664090;
case 0x664097:c.instructions+=2;goto B664097;
case 0x66409a:c.instructions+=1;goto B66409a;
case 0x66409c:goto L66409c;
case 0x6640a3:c.instructions+=2;goto B6640a3;
case 0x6640a7:c.instructions+=1;goto B6640a7;
case 0x6640a9:goto L6640a9;
case 0x6640b0:c.instructions+=2;goto B6640b0;
case 0x6640b4:c.instructions+=1;goto B6640b4;
case 0x6640ba:goto L6640ba;
case 0x6640c0:c.instructions+=1;goto B6640c0;
case 0x6640c2:goto L6640c2;
case 0x6640c5:c.instructions+=1;goto B6640c5;
case 0x6640c7:goto L6640c7;
case 0x6640c9:c.instructions+=1;goto B6640c9;
case 0x6640ca:goto L6640ca;
case 0x6640d1:c.instructions+=4;goto B6640d1;
case 0x6640d4:c.instructions+=3;goto B6640d4;
case 0x6640d7:c.instructions+=2;goto B6640d7;
case 0x6640db:c.instructions+=1;goto B6640db;
case 0x6640dd:goto L6640dd;
case 0x6640e1:goto L6640e1;
case 0x6640e8:c.instructions+=4;goto B6640e8;
case 0x6640ec:c.instructions+=3;goto B6640ec;
case 0x6640ef:c.instructions+=2;goto B6640ef;
case 0x6640f3:c.instructions+=1;goto B6640f3;
case 0x6640f5:goto L6640f5;
case 0x6640f9:goto L6640f9;
case 0x664100:c.instructions+=4;goto B664100;
case 0x664104:c.instructions+=3;goto B664104;
case 0x664107:c.instructions+=2;goto B664107;
case 0x66410b:c.instructions+=1;goto B66410b;
case 0x66410d:goto L66410d;
case 0x664111:goto L664111;
case 0x664114:c.instructions+=4;goto B664114;
case 0x664115:c.instructions+=3;goto B664115;
case 0x664116:c.instructions+=2;goto B664116;
case 0x664118:c.instructions+=1;goto B664118;
case 0x66411d:goto L66411d;
case 0x66411f:c.instructions+=1;goto B66411f;
case 0x664121:goto L664121;
case 0x664125:c.instructions+=8;goto B664125;
case 0x664128:c.instructions+=7;goto B664128;
case 0x66412f:c.instructions+=6;goto B66412f;
case 0x664133:c.instructions+=5;goto B664133;
case 0x66413a:c.instructions+=4;goto B66413a;
case 0x66413e:c.instructions+=3;goto B66413e;
case 0x664144:c.instructions+=2;goto B664144;
case 0x66414b:c.instructions+=1;goto B66414b;
case 0x66414d:goto L66414d;
case 0x664153:c.instructions+=1;goto B664153;
case 0x664155:goto L664155;
case 0x66415c:c.instructions+=2;goto B66415c;
case 0x664160:c.instructions+=1;goto B664160;
case 0x664162:goto L664162;
case 0x664169:c.instructions+=3;goto B664169;
case 0x66416d:c.instructions+=2;goto B66416d;
case 0x664170:c.instructions+=1;goto B664170;
case 0x664172:goto L664172;
case 0x664175:goto L664175;
case 0x664178:c.instructions+=5;goto B664178;
case 0x664179:c.instructions+=4;goto B664179;
case 0x66417a:c.instructions+=3;goto B66417a;
case 0x66417c:c.instructions+=2;goto B66417c;
case 0x664180:c.instructions+=1;goto B664180;
case 0x664185:goto L664185;
case 0x664187:c.instructions+=1;goto B664187;
case 0x664189:goto L664189;
case 0x664190:goto L664190;
case 0x664191:goto L664191;
case 0x664192:c.instructions+=3;goto B664192;
case 0x664193:c.instructions+=2;goto B664193;
case 0x664194:c.instructions+=1;goto B664194;
case 0x664197:goto L664197;
case 0x664199:c.instructions+=15;goto B664199;
case 0x66419a:c.instructions+=14;goto B66419a;
case 0x66419c:c.instructions+=13;goto B66419c;
case 0x66419f:c.instructions+=12;goto B66419f;
case 0x6641a1:c.instructions+=11;goto B6641a1;
case 0x6641a7:c.instructions+=10;goto B6641a7;
case 0x6641a8:c.instructions+=9;goto B6641a8;
case 0x6641a9:c.instructions+=8;goto B6641a9;
case 0x6641ad:c.instructions+=7;goto B6641ad;
case 0x6641b3:c.instructions+=6;goto B6641b3;
case 0x6641b9:c.instructions+=5;goto B6641b9;
case 0x6641bb:c.instructions+=4;goto B6641bb;
case 0x6641bd:c.instructions+=3;goto B6641bd;
case 0x6641c0:c.instructions+=2;goto B6641c0;
case 0x6641c3:c.instructions+=1;goto B6641c3;
case 0x6641c9:goto L6641c9;
case 0x6641cc:c.instructions+=3;goto B6641cc;
case 0x6641cd:c.instructions+=2;goto B6641cd;
case 0x6641d0:c.instructions+=1;goto B6641d0;
case 0x6641d6:goto L6641d6;
case 0x6641dc:c.instructions+=1;goto B6641dc;
case 0x6641de:goto L6641de;
case 0x6641e1:c.instructions+=1;goto B6641e1;
case 0x6641e3:goto L6641e3;
case 0x6641e9:c.instructions+=1;goto B6641e9;
case 0x6641eb:goto L6641eb;
case 0x6641f2:c.instructions+=2;goto B6641f2;
case 0x6641f5:c.instructions+=1;goto B6641f5;
case 0x6641f7:goto L6641f7;
case 0x6641fe:c.instructions+=2;goto B6641fe;
case 0x664202:c.instructions+=1;goto B664202;
case 0x664204:goto L664204;
case 0x66420b:c.instructions+=2;goto B66420b;
case 0x66420f:c.instructions+=1;goto B66420f;
case 0x664215:goto L664215;
case 0x66421b:c.instructions+=1;goto B66421b;
case 0x66421d:goto L66421d;
case 0x664220:c.instructions+=1;goto B664220;
case 0x664222:goto L664222;
case 0x664224:c.instructions+=1;goto B664224;
case 0x664225:goto L664225;
case 0x66422c:c.instructions+=4;goto B66422c;
case 0x66422f:c.instructions+=3;goto B66422f;
case 0x664232:c.instructions+=2;goto B664232;
case 0x664236:c.instructions+=1;goto B664236;
case 0x664238:goto L664238;
case 0x66423c:goto L66423c;
case 0x664243:c.instructions+=4;goto B664243;
case 0x664247:c.instructions+=3;goto B664247;
case 0x66424a:c.instructions+=2;goto B66424a;
case 0x66424e:c.instructions+=1;goto B66424e;
case 0x664250:goto L664250;
case 0x664254:goto L664254;
case 0x66425b:c.instructions+=4;goto B66425b;
case 0x66425f:c.instructions+=3;goto B66425f;
case 0x664262:c.instructions+=2;goto B664262;
case 0x664266:c.instructions+=1;goto B664266;
case 0x664268:goto L664268;
case 0x66426c:goto L66426c;
case 0x66426f:c.instructions+=4;goto B66426f;
case 0x664270:c.instructions+=3;goto B664270;
case 0x664271:c.instructions+=2;goto B664271;
case 0x664273:c.instructions+=1;goto B664273;
case 0x664278:goto L664278;
case 0x66427a:c.instructions+=1;goto B66427a;
case 0x66427c:goto L66427c;
case 0x664280:c.instructions+=8;goto B664280;
case 0x664283:c.instructions+=7;goto B664283;
case 0x66428a:c.instructions+=6;goto B66428a;
case 0x66428e:c.instructions+=5;goto B66428e;
case 0x664295:c.instructions+=4;goto B664295;
case 0x664299:c.instructions+=3;goto B664299;
case 0x66429f:c.instructions+=2;goto B66429f;
case 0x6642a6:c.instructions+=1;goto B6642a6;
case 0x6642a8:goto L6642a8;
case 0x6642ae:c.instructions+=1;goto B6642ae;
case 0x6642b0:goto L6642b0;
case 0x6642b7:c.instructions+=2;goto B6642b7;
case 0x6642bb:c.instructions+=1;goto B6642bb;
case 0x6642bd:goto L6642bd;
case 0x6642c4:c.instructions+=3;goto B6642c4;
case 0x6642c8:c.instructions+=2;goto B6642c8;
case 0x6642cb:c.instructions+=1;goto B6642cb;
case 0x6642cd:goto L6642cd;
case 0x6642d0:goto L6642d0;
case 0x6642d3:c.instructions+=5;goto B6642d3;
case 0x6642d4:c.instructions+=4;goto B6642d4;
case 0x6642d5:c.instructions+=3;goto B6642d5;
case 0x6642d7:c.instructions+=2;goto B6642d7;
case 0x6642db:c.instructions+=1;goto B6642db;
case 0x6642e0:goto L6642e0;
case 0x6642e2:c.instructions+=1;goto B6642e2;
case 0x6642e4:goto L6642e4;
case 0x6642eb:goto L6642eb;
case 0x6642ec:goto L6642ec;
case 0x6642ed:c.instructions+=3;goto B6642ed;
case 0x6642ee:c.instructions+=2;goto B6642ee;
case 0x6642ef:c.instructions+=1;goto B6642ef;
case 0x6642f2:goto L6642f2;
case 0x6642f4:c.instructions+=16;goto B6642f4;
case 0x6642f5:c.instructions+=15;goto B6642f5;
case 0x6642f7:c.instructions+=14;goto B6642f7;
case 0x6642fa:c.instructions+=13;goto B6642fa;
case 0x6642fd:c.instructions+=12;goto B6642fd;
case 0x6642fe:c.instructions+=11;goto B6642fe;
case 0x664301:c.instructions+=10;goto B664301;
case 0x664304:c.instructions+=9;goto B664304;
case 0x664305:c.instructions+=8;goto B664305;
case 0x664307:c.instructions+=7;goto B664307;
case 0x664309:c.instructions+=6;goto B664309;
case 0x66430c:c.instructions+=5;goto B66430c;
case 0x66430f:c.instructions+=4;goto B66430f;
case 0x664313:c.instructions+=3;goto B664313;
case 0x664317:c.instructions+=2;goto B664317;
case 0x66431a:c.instructions+=1;goto B66431a;
case 0x664320:goto L664320;
case 0x664321:c.instructions+=6;goto B664321;
case 0x664324:c.instructions+=5;goto B664324;
case 0x664327:c.instructions+=4;goto B664327;
case 0x66432a:c.instructions+=3;goto B66432a;
case 0x66432d:c.instructions+=2;goto B66432d;
case 0x664332:c.instructions+=1;goto B664332;
case 0x664338:goto L664338;
case 0x66433d:c.instructions+=1;goto B66433d;
case 0x664343:goto L664343;
case 0x664348:c.instructions+=1;goto B664348;
case 0x66434e:goto L66434e;
case 0x664350:c.instructions+=1;goto B664350;
case 0x664356:goto L664356;
case 0x664359:c.instructions+=5;goto B664359;
case 0x66435b:c.instructions+=4;goto B66435b;
case 0x66435f:c.instructions+=3;goto B66435f;
case 0x664360:c.instructions+=2;goto B664360;
case 0x664363:c.instructions+=1;goto B664363;
case 0x664368:goto L664368;
case 0x66436a:c.instructions+=2;goto B66436a;
case 0x66436d:c.instructions+=1;goto B66436d;
case 0x664373:goto L664373;
case 0x664376:c.instructions+=5;goto B664376;
case 0x664378:c.instructions+=4;goto B664378;
case 0x66437a:c.instructions+=3;goto B66437a;
case 0x66437b:c.instructions+=2;goto B66437b;
case 0x66437e:c.instructions+=1;goto B66437e;
case 0x664381:goto L664381;
case 0x664384:c.instructions+=3;goto B664384;
case 0x664387:c.instructions+=2;goto B664387;
case 0x66438d:c.instructions+=1;goto B66438d;
case 0x664392:goto L664392;
case 0x664395:c.instructions+=4;goto B664395;
case 0x664398:c.instructions+=3;goto B664398;
case 0x66439c:c.instructions+=2;goto B66439c;
case 0x66439f:c.instructions+=1;goto B66439f;
case 0x6643a5:goto L6643a5;
case 0x6643a8:c.instructions+=3;goto B6643a8;
case 0x6643ab:c.instructions+=2;goto B6643ab;
case 0x6643ae:c.instructions+=1;goto B6643ae;
case 0x6643b0:goto L6643b0;
case 0x6643b7:c.instructions+=1;goto B6643b7;
case 0x6643bc:goto L6643bc;
case 0x6643c0:c.instructions+=2;goto B6643c0;
case 0x6643c5:c.instructions+=1;goto B6643c5;
case 0x6643c7:goto L6643c7;
case 0x6643ca:c.instructions+=8;goto B6643ca;
case 0x6643cd:c.instructions+=7;goto B6643cd;
case 0x6643cf:c.instructions+=6;goto B6643cf;
case 0x6643d1:c.instructions+=5;goto B6643d1;
case 0x6643d3:c.instructions+=4;goto B6643d3;
case 0x6643d5:c.instructions+=3;goto B6643d5;
case 0x6643d8:c.instructions+=2;goto B6643d8;
case 0x6643db:c.instructions+=1;goto B6643db;
case 0x6643dd:goto L6643dd;
case 0x6643e0:c.instructions+=1;goto B6643e0;
case 0x6643e3:goto L6643e3;
case 0x6643e4:c.instructions+=7;goto B6643e4;
case 0x6643e8:c.instructions+=6;goto B6643e8;
case 0x6643e9:c.instructions+=5;goto B6643e9;
case 0x6643ec:c.instructions+=4;goto B6643ec;
case 0x6643f0:c.instructions+=3;goto B6643f0;
case 0x6643f3:c.instructions+=2;goto B6643f3;
case 0x6643f4:c.instructions+=1;goto B6643f4;
case 0x6643f9:goto L6643f9;
case 0x6643fb:c.instructions+=2;goto B6643fb;
case 0x6643fe:c.instructions+=1;goto B6643fe;
case 0x664404:goto L664404;
case 0x664407:c.instructions+=3;goto B664407;
case 0x66440b:c.instructions+=2;goto B66440b;
case 0x66440f:c.instructions+=1;goto B66440f;
case 0x664411:goto L664411;
case 0x664414:goto L664414;
case 0x664418:c.instructions+=3;goto B664418;
case 0x66441c:c.instructions+=2;goto B66441c;
case 0x664421:c.instructions+=1;goto B664421;
case 0x664423:goto L664423;
case 0x664425:c.instructions+=7;goto B664425;
case 0x664428:c.instructions+=6;goto B664428;
case 0x66442b:c.instructions+=5;goto B66442b;
case 0x66442e:c.instructions+=4;goto B66442e;
case 0x664430:c.instructions+=3;goto B664430;
case 0x664433:c.instructions+=2;goto B664433;
case 0x664436:c.instructions+=1;goto B664436;
case 0x664439:goto L664439;
case 0x66443c:c.instructions+=7;goto B66443c;
case 0x66443f:c.instructions+=6;goto B66443f;
case 0x664443:c.instructions+=5;goto B664443;
case 0x664446:c.instructions+=4;goto B664446;
case 0x66444a:c.instructions+=3;goto B66444a;
case 0x66444d:c.instructions+=2;goto B66444d;
case 0x66444e:c.instructions+=1;goto B66444e;
case 0x664453:goto L664453;
case 0x664455:c.instructions+=2;goto B664455;
case 0x664458:c.instructions+=1;goto B664458;
case 0x66445e:goto L66445e;
case 0x664461:c.instructions+=3;goto B664461;
case 0x664465:c.instructions+=2;goto B664465;
case 0x664469:c.instructions+=1;goto B664469;
case 0x66446b:goto L66446b;
case 0x66446e:c.instructions+=1;goto B66446e;
case 0x664470:goto L664470;
case 0x664473:c.instructions+=4;goto B664473;
case 0x664475:c.instructions+=3;goto B664475;
case 0x664478:c.instructions+=2;goto B664478;
case 0x66447b:c.instructions+=1;goto B66447b;
case 0x664481:goto L664481;
case 0x664484:c.instructions+=7;goto B664484;
case 0x664488:c.instructions+=6;goto B664488;
case 0x66448b:c.instructions+=5;goto B66448b;
case 0x66448e:c.instructions+=4;goto B66448e;
case 0x664491:c.instructions+=3;goto B664491;
case 0x664495:c.instructions+=2;goto B664495;
case 0x664496:c.instructions+=1;goto B664496;
case 0x66449b:goto L66449b;
case 0x66449e:c.instructions+=1;goto B66449e;
case 0x6644a3:goto L6644a3;
case 0x6644a6:c.instructions+=5;goto B6644a6;
case 0x6644ac:c.instructions+=4;goto B6644ac;
case 0x6644af:c.instructions+=3;goto B6644af;
case 0x6644b2:c.instructions+=2;goto B6644b2;
case 0x6644b5:c.instructions+=1;goto B6644b5;
case 0x6644b7:goto L6644b7;
case 0x6644ba:c.instructions+=4;goto B6644ba;
case 0x6644bd:c.instructions+=3;goto B6644bd;
case 0x6644c0:c.instructions+=2;goto B6644c0;
case 0x6644c3:c.instructions+=1;goto B6644c3;
case 0x6644c5:goto L6644c5;
case 0x6644cb:c.instructions+=9;goto B6644cb;
case 0x6644ce:c.instructions+=8;goto B6644ce;
case 0x6644d1:c.instructions+=7;goto B6644d1;
case 0x6644d4:c.instructions+=6;goto B6644d4;
case 0x6644d7:c.instructions+=5;goto B6644d7;
case 0x6644da:c.instructions+=4;goto B6644da;
case 0x6644dd:c.instructions+=3;goto B6644dd;
case 0x6644e0:c.instructions+=2;goto B6644e0;
case 0x6644e3:c.instructions+=1;goto B6644e3;
case 0x6644e6:goto L6644e6;
case 0x6644e9:c.instructions+=5;goto B6644e9;
case 0x6644ec:c.instructions+=4;goto B6644ec;
case 0x6644ef:c.instructions+=3;goto B6644ef;
case 0x6644f2:c.instructions+=2;goto B6644f2;
case 0x6644f4:c.instructions+=1;goto B6644f4;
case 0x6644f6:goto L6644f6;
case 0x6644f9:c.instructions+=1;goto B6644f9;
case 0x6644fb:goto L6644fb;
case 0x6644fe:c.instructions+=3;goto B6644fe;
case 0x664501:c.instructions+=2;goto B664501;
case 0x664504:c.instructions+=1;goto B664504;
case 0x664506:goto L664506;
case 0x664507:c.instructions+=1;goto B664507;
case 0x66450c:goto L66450c;
case 0x66450e:c.instructions+=2;goto B66450e;
case 0x664511:c.instructions+=1;goto B664511;
case 0x664513:goto L664513;
case 0x664517:goto L664517;
case 0x66451a:c.instructions+=1;goto B66451a;
case 0x66451c:goto L66451c;
case 0x664520:c.instructions+=1;goto B664520;
case 0x664522:goto L664522;
case 0x664525:c.instructions+=3;goto B664525;
case 0x664527:c.instructions+=2;goto B664527;
case 0x664528:c.instructions+=1;goto B664528;
case 0x66452b:goto L66452b;
case 0x66452e:c.instructions+=1;goto B66452e;
case 0x664530:goto L664530;
case 0x664531:goto L664531;
case 0x664534:c.instructions+=4;goto B664534;
case 0x664535:c.instructions+=3;goto B664535;
case 0x664536:c.instructions+=2;goto B664536;
case 0x664537:c.instructions+=1;goto B664537;
case 0x66453a:goto L66453a;
case 0x66453c:c.instructions+=16;goto B66453c;
case 0x66453d:c.instructions+=15;goto B66453d;
case 0x66453f:c.instructions+=14;goto B66453f;
case 0x664542:c.instructions+=13;goto B664542;
case 0x664545:c.instructions+=12;goto B664545;
case 0x664546:c.instructions+=11;goto B664546;
case 0x664549:c.instructions+=10;goto B664549;
case 0x66454c:c.instructions+=9;goto B66454c;
case 0x66454d:c.instructions+=8;goto B66454d;
case 0x66454f:c.instructions+=7;goto B66454f;
case 0x664551:c.instructions+=6;goto B664551;
case 0x664554:c.instructions+=5;goto B664554;
case 0x664557:c.instructions+=4;goto B664557;
case 0x66455b:c.instructions+=3;goto B66455b;
case 0x66455f:c.instructions+=2;goto B66455f;
case 0x664562:c.instructions+=1;goto B664562;
case 0x664568:goto L664568;
case 0x664569:c.instructions+=6;goto B664569;
case 0x66456c:c.instructions+=5;goto B66456c;
case 0x66456f:c.instructions+=4;goto B66456f;
case 0x664572:c.instructions+=3;goto B664572;
case 0x664575:c.instructions+=2;goto B664575;
case 0x66457a:c.instructions+=1;goto B66457a;
case 0x664580:goto L664580;
case 0x664585:c.instructions+=1;goto B664585;
case 0x66458b:goto L66458b;
case 0x664590:c.instructions+=1;goto B664590;
case 0x664596:goto L664596;
case 0x664598:c.instructions+=1;goto B664598;
case 0x66459e:goto L66459e;
case 0x6645a1:c.instructions+=5;goto B6645a1;
case 0x6645a3:c.instructions+=4;goto B6645a3;
case 0x6645a7:c.instructions+=3;goto B6645a7;
case 0x6645a8:c.instructions+=2;goto B6645a8;
case 0x6645ab:c.instructions+=1;goto B6645ab;
case 0x6645b0:goto L6645b0;
case 0x6645b2:c.instructions+=2;goto B6645b2;
case 0x6645b5:c.instructions+=1;goto B6645b5;
case 0x6645bb:goto L6645bb;
case 0x6645be:c.instructions+=5;goto B6645be;
case 0x6645c0:c.instructions+=4;goto B6645c0;
case 0x6645c2:c.instructions+=3;goto B6645c2;
case 0x6645c3:c.instructions+=2;goto B6645c3;
case 0x6645c6:c.instructions+=1;goto B6645c6;
case 0x6645c9:goto L6645c9;
case 0x6645cc:c.instructions+=3;goto B6645cc;
case 0x6645cf:c.instructions+=2;goto B6645cf;
case 0x6645d5:c.instructions+=1;goto B6645d5;
case 0x6645da:goto L6645da;
case 0x6645dd:c.instructions+=4;goto B6645dd;
case 0x6645e0:c.instructions+=3;goto B6645e0;
case 0x6645e4:c.instructions+=2;goto B6645e4;
case 0x6645e7:c.instructions+=1;goto B6645e7;
case 0x6645ed:goto L6645ed;
case 0x6645f0:c.instructions+=3;goto B6645f0;
case 0x6645f3:c.instructions+=2;goto B6645f3;
case 0x6645f6:c.instructions+=1;goto B6645f6;
case 0x6645f8:goto L6645f8;
case 0x6645ff:c.instructions+=1;goto B6645ff;
case 0x664604:goto L664604;
case 0x664608:c.instructions+=2;goto B664608;
case 0x66460d:c.instructions+=1;goto B66460d;
case 0x66460f:goto L66460f;
case 0x664612:c.instructions+=8;goto B664612;
case 0x664615:c.instructions+=7;goto B664615;
case 0x664617:c.instructions+=6;goto B664617;
case 0x664619:c.instructions+=5;goto B664619;
case 0x66461b:c.instructions+=4;goto B66461b;
case 0x66461d:c.instructions+=3;goto B66461d;
case 0x664620:c.instructions+=2;goto B664620;
case 0x664623:c.instructions+=1;goto B664623;
case 0x664625:goto L664625;
case 0x664628:c.instructions+=1;goto B664628;
case 0x66462b:goto L66462b;
case 0x66462c:c.instructions+=7;goto B66462c;
case 0x664630:c.instructions+=6;goto B664630;
case 0x664631:c.instructions+=5;goto B664631;
case 0x664634:c.instructions+=4;goto B664634;
case 0x664638:c.instructions+=3;goto B664638;
case 0x66463b:c.instructions+=2;goto B66463b;
case 0x66463c:c.instructions+=1;goto B66463c;
case 0x664641:goto L664641;
case 0x664643:c.instructions+=2;goto B664643;
case 0x664646:c.instructions+=1;goto B664646;
case 0x66464c:goto L66464c;
case 0x66464f:c.instructions+=3;goto B66464f;
case 0x664653:c.instructions+=2;goto B664653;
case 0x664657:c.instructions+=1;goto B664657;
case 0x664659:goto L664659;
case 0x66465c:goto L66465c;
case 0x664660:c.instructions+=3;goto B664660;
case 0x664664:c.instructions+=2;goto B664664;
case 0x664669:c.instructions+=1;goto B664669;
case 0x66466b:goto L66466b;
case 0x66466d:c.instructions+=7;goto B66466d;
case 0x664670:c.instructions+=6;goto B664670;
case 0x664673:c.instructions+=5;goto B664673;
case 0x664676:c.instructions+=4;goto B664676;
case 0x664678:c.instructions+=3;goto B664678;
case 0x66467b:c.instructions+=2;goto B66467b;
case 0x66467e:c.instructions+=1;goto B66467e;
case 0x664681:goto L664681;
case 0x664684:c.instructions+=7;goto B664684;
case 0x664687:c.instructions+=6;goto B664687;
case 0x66468b:c.instructions+=5;goto B66468b;
case 0x66468e:c.instructions+=4;goto B66468e;
case 0x664692:c.instructions+=3;goto B664692;
case 0x664695:c.instructions+=2;goto B664695;
case 0x664696:c.instructions+=1;goto B664696;
case 0x66469b:goto L66469b;
case 0x66469d:c.instructions+=2;goto B66469d;
case 0x6646a0:c.instructions+=1;goto B6646a0;
case 0x6646a6:goto L6646a6;
case 0x6646a9:c.instructions+=3;goto B6646a9;
case 0x6646ad:c.instructions+=2;goto B6646ad;
case 0x6646b1:c.instructions+=1;goto B6646b1;
case 0x6646b3:goto L6646b3;
case 0x6646b6:c.instructions+=1;goto B6646b6;
case 0x6646b8:goto L6646b8;
case 0x6646bb:c.instructions+=4;goto B6646bb;
case 0x6646bd:c.instructions+=3;goto B6646bd;
case 0x6646c0:c.instructions+=2;goto B6646c0;
case 0x6646c3:c.instructions+=1;goto B6646c3;
case 0x6646c9:goto L6646c9;
case 0x6646cc:c.instructions+=7;goto B6646cc;
case 0x6646d0:c.instructions+=6;goto B6646d0;
case 0x6646d3:c.instructions+=5;goto B6646d3;
case 0x6646d6:c.instructions+=4;goto B6646d6;
case 0x6646d9:c.instructions+=3;goto B6646d9;
case 0x6646dd:c.instructions+=2;goto B6646dd;
case 0x6646de:c.instructions+=1;goto B6646de;
case 0x6646e3:goto L6646e3;
case 0x6646e6:c.instructions+=1;goto B6646e6;
case 0x6646eb:goto L6646eb;
case 0x6646ee:c.instructions+=5;goto B6646ee;
case 0x6646f4:c.instructions+=4;goto B6646f4;
case 0x6646f7:c.instructions+=3;goto B6646f7;
case 0x6646fa:c.instructions+=2;goto B6646fa;
case 0x6646fd:c.instructions+=1;goto B6646fd;
case 0x6646ff:goto L6646ff;
case 0x664702:c.instructions+=4;goto B664702;
case 0x664705:c.instructions+=3;goto B664705;
case 0x664708:c.instructions+=2;goto B664708;
case 0x66470b:c.instructions+=1;goto B66470b;
case 0x66470d:goto L66470d;
case 0x664713:c.instructions+=9;goto B664713;
case 0x664716:c.instructions+=8;goto B664716;
case 0x664719:c.instructions+=7;goto B664719;
case 0x66471c:c.instructions+=6;goto B66471c;
case 0x66471f:c.instructions+=5;goto B66471f;
case 0x664722:c.instructions+=4;goto B664722;
case 0x664725:c.instructions+=3;goto B664725;
case 0x664728:c.instructions+=2;goto B664728;
case 0x66472b:c.instructions+=1;goto B66472b;
case 0x66472e:goto L66472e;
case 0x664731:c.instructions+=5;goto B664731;
case 0x664734:c.instructions+=4;goto B664734;
case 0x664737:c.instructions+=3;goto B664737;
case 0x66473a:c.instructions+=2;goto B66473a;
case 0x66473c:c.instructions+=1;goto B66473c;
case 0x66473e:goto L66473e;
case 0x664741:c.instructions+=1;goto B664741;
case 0x664743:goto L664743;
case 0x664746:c.instructions+=3;goto B664746;
case 0x664749:c.instructions+=2;goto B664749;
case 0x66474c:c.instructions+=1;goto B66474c;
case 0x66474e:goto L66474e;
case 0x66474f:c.instructions+=1;goto B66474f;
case 0x664754:goto L664754;
case 0x664756:c.instructions+=2;goto B664756;
case 0x664759:c.instructions+=1;goto B664759;
case 0x66475b:goto L66475b;
case 0x66475f:goto L66475f;
case 0x664762:c.instructions+=1;goto B664762;
case 0x664764:goto L664764;
case 0x664768:c.instructions+=1;goto B664768;
case 0x66476a:goto L66476a;
case 0x66476d:c.instructions+=3;goto B66476d;
case 0x66476f:c.instructions+=2;goto B66476f;
case 0x664770:c.instructions+=1;goto B664770;
case 0x664773:goto L664773;
case 0x664776:c.instructions+=1;goto B664776;
case 0x664778:goto L664778;
case 0x664779:goto L664779;
case 0x66477c:c.instructions+=4;goto B66477c;
case 0x66477d:c.instructions+=3;goto B66477d;
case 0x66477e:c.instructions+=2;goto B66477e;
case 0x66477f:c.instructions+=1;goto B66477f;
case 0x664782:goto L664782;
case 0x664784:c.instructions+=12;goto B664784;
case 0x664785:c.instructions+=11;goto B664785;
case 0x664787:c.instructions+=10;goto B664787;
case 0x664788:c.instructions+=9;goto B664788;
case 0x66478c:c.instructions+=8;goto B66478c;
case 0x66478d:c.instructions+=7;goto B66478d;
case 0x664790:c.instructions+=6;goto B664790;
case 0x664794:c.instructions+=5;goto B664794;
case 0x664797:c.instructions+=4;goto B664797;
case 0x66479a:c.instructions+=3;goto B66479a;
case 0x66479d:c.instructions+=2;goto B66479d;
case 0x6647a0:c.instructions+=1;goto B6647a0;
case 0x6647a2:goto L6647a2;
case 0x6647a9:c.instructions+=1;goto B6647a9;
case 0x6647ae:goto L6647ae;
case 0x6647af:c.instructions+=5;goto B6647af;
case 0x6647b2:c.instructions+=4;goto B6647b2;
case 0x6647b4:c.instructions+=3;goto B6647b4;
case 0x6647b7:c.instructions+=2;goto B6647b7;
case 0x6647b9:c.instructions+=1;goto B6647b9;
case 0x6647bb:goto L6647bb;
case 0x6647c2:c.instructions+=1;goto B6647c2;
case 0x6647c7:goto L6647c7;
case 0x6647c9:c.instructions+=29;goto B6647c9;
case 0x6647cc:c.instructions+=28;goto B6647cc;
case 0x6647ce:c.instructions+=27;goto B6647ce;
case 0x6647d0:c.instructions+=26;goto B6647d0;
case 0x6647d1:c.instructions+=25;goto B6647d1;
case 0x6647d3:c.instructions+=24;goto B6647d3;
case 0x6647d4:c.instructions+=23;goto B6647d4;
case 0x6647d7:c.instructions+=22;goto B6647d7;
case 0x6647da:c.instructions+=21;goto B6647da;
case 0x6647dc:c.instructions+=20;goto B6647dc;
case 0x6647de:c.instructions+=19;goto B6647de;
case 0x6647e0:c.instructions+=18;goto B6647e0;
case 0x6647e1:c.instructions+=17;goto B6647e1;
case 0x6647e4:c.instructions+=16;goto B6647e4;
case 0x6647e6:c.instructions+=15;goto B6647e6;
case 0x6647e8:c.instructions+=14;goto B6647e8;
case 0x6647ec:c.instructions+=13;goto B6647ec;
case 0x6647ef:c.instructions+=12;goto B6647ef;
case 0x6647f5:c.instructions+=11;goto B6647f5;
case 0x6647fb:c.instructions+=10;goto B6647fb;
case 0x6647fd:c.instructions+=9;goto B6647fd;
case 0x664800:c.instructions+=8;goto B664800;
case 0x664803:c.instructions+=7;goto B664803;
case 0x664805:c.instructions+=6;goto B664805;
case 0x66480b:c.instructions+=5;goto B66480b;
case 0x66480e:c.instructions+=4;goto B66480e;
case 0x664810:c.instructions+=3;goto B664810;
case 0x664812:c.instructions+=2;goto B664812;
case 0x664818:c.instructions+=1;goto B664818;
case 0x66481e:goto L66481e;
case 0x664824:c.instructions+=4;goto B664824;
case 0x664825:c.instructions+=3;goto B664825;
case 0x66482b:c.instructions+=2;goto B66482b;
case 0x66482d:c.instructions+=1;goto B66482d;
case 0x664832:goto L664832;
case 0x664834:c.instructions+=2;goto B664834;
case 0x664837:c.instructions+=1;goto B664837;
case 0x66483d:goto L66483d;
case 0x664843:c.instructions+=4;goto B664843;
case 0x664844:c.instructions+=3;goto B664844;
case 0x66484a:c.instructions+=2;goto B66484a;
case 0x66484c:c.instructions+=1;goto B66484c;
case 0x664851:goto L664851;
case 0x664853:c.instructions+=2;goto B664853;
case 0x664856:c.instructions+=1;goto B664856;
case 0x66485c:goto L66485c;
case 0x664863:c.instructions+=1;goto B664863;
case 0x664865:goto L664865;
case 0x66486b:c.instructions+=3;goto B66486b;
case 0x66486d:c.instructions+=2;goto B66486d;
case 0x66486e:c.instructions+=1;goto B66486e;
case 0x664871:goto L664871;
case 0x664873:c.instructions+=2;goto B664873;
case 0x664876:c.instructions+=1;goto B664876;
case 0x66487c:goto L66487c;
case 0x664882:c.instructions+=3;goto B664882;
case 0x664884:c.instructions+=2;goto B664884;
case 0x664885:c.instructions+=1;goto B664885;
case 0x664888:goto L664888;
case 0x66488a:c.instructions+=2;goto B66488a;
case 0x66488d:c.instructions+=1;goto B66488d;
case 0x664893:goto L664893;
case 0x66489a:c.instructions+=1;goto B66489a;
case 0x66489c:goto L66489c;
case 0x6648a2:c.instructions+=3;goto B6648a2;
case 0x6648a4:c.instructions+=2;goto B6648a4;
case 0x6648a5:c.instructions+=1;goto B6648a5;
case 0x6648a8:goto L6648a8;
case 0x6648aa:c.instructions+=2;goto B6648aa;
case 0x6648ad:c.instructions+=1;goto B6648ad;
case 0x6648b3:goto L6648b3;
case 0x6648b9:c.instructions+=3;goto B6648b9;
case 0x6648bb:c.instructions+=2;goto B6648bb;
case 0x6648bc:c.instructions+=1;goto B6648bc;
case 0x6648bf:goto L6648bf;
case 0x6648c1:c.instructions+=2;goto B6648c1;
case 0x6648c4:c.instructions+=1;goto B6648c4;
case 0x6648ca:goto L6648ca;
case 0x6648d1:c.instructions+=1;goto B6648d1;
case 0x6648d7:goto L6648d7;
case 0x6648d9:c.instructions+=3;goto B6648d9;
case 0x6648db:c.instructions+=2;goto B6648db;
case 0x6648dc:c.instructions+=1;goto B6648dc;
case 0x6648df:goto L6648df;
case 0x6648e1:goto L6648e1;
case 0x6648e5:c.instructions+=4;goto B6648e5;
case 0x6648e8:c.instructions+=3;goto B6648e8;
case 0x6648eb:c.instructions+=2;goto B6648eb;
case 0x6648ed:c.instructions+=1;goto B6648ed;
case 0x6648f0:goto L6648f0;
case 0x6648f2:goto L6648f2;
case 0x6648f4:c.instructions+=1;goto B6648f4;
case 0x6648f7:goto L6648f7;
case 0x6648f9:goto L6648f9;
case 0x6648fc:c.instructions+=3;goto B6648fc;
case 0x6648fe:c.instructions+=2;goto B6648fe;
case 0x6648ff:c.instructions+=1;goto B6648ff;
case 0x664905:goto L664905;
case 0x664907:c.instructions+=2;goto B664907;
case 0x66490a:c.instructions+=1;goto B66490a;
case 0x664910:goto L664910;
case 0x664912:c.instructions+=4;goto B664912;
case 0x664913:c.instructions+=3;goto B664913;
case 0x664914:c.instructions+=2;goto B664914;
case 0x664917:c.instructions+=1;goto B664917;
case 0x66491c:goto L66491c;
case 0x66491e:c.instructions+=2;goto B66491e;
case 0x664921:c.instructions+=1;goto B664921;
case 0x664923:goto L664923;
case 0x664925:c.instructions+=3;goto B664925;
case 0x664926:c.instructions+=2;goto B664926;
case 0x664927:c.instructions+=1;goto B664927;
case 0x66492d:goto L66492d;
case 0x66492f:c.instructions+=2;goto B66492f;
case 0x664930:c.instructions+=1;goto B664930;
case 0x664936:goto L664936;
case 0x664937:c.instructions+=2;goto B664937;
case 0x66493a:c.instructions+=1;goto B66493a;
case 0x66493c:goto L66493c;
case 0x66493e:c.instructions+=1;goto B66493e;
case 0x664943:goto L664943;
case 0x664946:c.instructions+=5;goto B664946;
case 0x664948:c.instructions+=4;goto B664948;
case 0x66494e:c.instructions+=3;goto B66494e;
case 0x66494f:c.instructions+=2;goto B66494f;
case 0x664950:c.instructions+=1;goto B664950;
case 0x664956:goto L664956;
case 0x664958:c.instructions+=2;goto B664958;
case 0x66495b:c.instructions+=1;goto B66495b;
case 0x66495d:goto L66495d;
case 0x66495f:c.instructions+=2;goto B66495f;
case 0x664961:c.instructions+=1;goto B664961;
case 0x664967:goto L664967;
case 0x664969:c.instructions+=2;goto B664969;
case 0x66496a:c.instructions+=1;goto B66496a;
case 0x66496d:goto L66496d;
case 0x664970:c.instructions+=1;goto B664970;
case 0x664975:goto L664975;
case 0x664979:c.instructions+=3;goto B664979;
case 0x66497d:c.instructions+=2;goto B66497d;
case 0x664981:c.instructions+=1;goto B664981;
case 0x664983:goto L664983;
case 0x664987:c.instructions+=13;goto B664987;
case 0x664989:c.instructions+=12;goto B664989;
case 0x66498d:c.instructions+=11;goto B66498d;
case 0x664990:c.instructions+=10;goto B664990;
case 0x664993:c.instructions+=9;goto B664993;
case 0x664996:c.instructions+=8;goto B664996;
case 0x664999:c.instructions+=7;goto B664999;
case 0x66499e:c.instructions+=6;goto B66499e;
case 0x66499f:c.instructions+=5;goto B66499f;
case 0x6649a0:c.instructions+=4;goto B6649a0;
case 0x6649a2:c.instructions+=3;goto B6649a2;
case 0x6649a3:c.instructions+=2;goto B6649a3;
case 0x6649a5:c.instructions+=1;goto B6649a5;
case 0x6649aa:goto L6649aa;
case 0x6649ac:c.instructions+=2;goto B6649ac;
case 0x6649af:c.instructions+=1;goto B6649af;
case 0x6649b1:goto L6649b1;
case 0x6649b7:goto L6649b7;
case 0x6649bd:c.instructions+=3;goto B6649bd;
case 0x6649bf:c.instructions+=2;goto B6649bf;
case 0x6649c0:c.instructions+=1;goto B6649c0;
case 0x6649c3:goto L6649c3;
case 0x6649c5:c.instructions+=2;goto B6649c5;
case 0x6649c8:c.instructions+=1;goto B6649c8;
case 0x6649ca:goto L6649ca;
case 0x6649cc:c.instructions+=3;goto B6649cc;
case 0x6649ce:c.instructions+=2;goto B6649ce;
case 0x6649cf:c.instructions+=1;goto B6649cf;
case 0x6649d2:goto L6649d2;
case 0x6649d4:goto L6649d4;
case 0x6649d8:c.instructions+=4;goto B6649d8;
case 0x6649db:c.instructions+=3;goto B6649db;
case 0x6649de:c.instructions+=2;goto B6649de;
case 0x6649e0:c.instructions+=1;goto B6649e0;
case 0x6649e3:goto L6649e3;
case 0x6649e5:goto L6649e5;
case 0x6649e7:c.instructions+=1;goto B6649e7;
case 0x6649ea:goto L6649ea;
case 0x6649ec:goto L6649ec;
case 0x6649ef:c.instructions+=2;goto B6649ef;
case 0x6649f1:c.instructions+=1;goto B6649f1;
case 0x6649f3:goto L6649f3;
case 0x6649f6:c.instructions+=1;goto B6649f6;
case 0x6649f8:goto L6649f8;
case 0x6649fb:c.instructions+=2;goto B6649fb;
case 0x6649fd:c.instructions+=1;goto B6649fd;
case 0x6649ff:goto L6649ff;
case 0x664a02:c.instructions+=2;goto B664a02;
case 0x664a05:c.instructions+=1;goto B664a05;
case 0x664a08:goto L664a08;
case 0x664a0f:goto L664a0f;
case 0x664a10:goto L664a10;
case 0x664a11:goto L664a11;
case 0x664a14:c.instructions+=5;goto B664a14;
case 0x664a17:c.instructions+=4;goto B664a17;
case 0x664a1a:c.instructions+=3;goto B664a1a;
case 0x664a1b:c.instructions+=2;goto B664a1b;
case 0x664a1c:c.instructions+=1;goto B664a1c;
case 0x664a1f:goto L664a1f;
case 0x664a21:c.instructions+=17;goto B664a21;
case 0x664a22:c.instructions+=16;goto B664a22;
case 0x664a24:c.instructions+=15;goto B664a24;
case 0x664a27:c.instructions+=14;goto B664a27;
case 0x664a2a:c.instructions+=13;goto B664a2a;
case 0x664a2e:c.instructions+=12;goto B664a2e;
case 0x664a31:c.instructions+=11;goto B664a31;
case 0x664a32:c.instructions+=10;goto B664a32;
case 0x664a35:c.instructions+=9;goto B664a35;
case 0x664a38:c.instructions+=8;goto B664a38;
case 0x664a39:c.instructions+=7;goto B664a39;
case 0x664a3b:c.instructions+=6;goto B664a3b;
case 0x664a3e:c.instructions+=5;goto B664a3e;
case 0x664a3f:c.instructions+=4;goto B664a3f;
case 0x664a42:c.instructions+=3;goto B664a42;
case 0x664a45:c.instructions+=2;goto B664a45;
case 0x664a49:c.instructions+=1;goto B664a49;
case 0x664a4b:goto L664a4b;
case 0x664a4e:c.instructions+=4;goto B664a4e;
case 0x664a51:c.instructions+=3;goto B664a51;
case 0x664a54:c.instructions+=2;goto B664a54;
case 0x664a56:c.instructions+=1;goto B664a56;
case 0x664a59:goto L664a59;
case 0x664a5b:goto L664a5b;
case 0x664a5d:c.instructions+=1;goto B664a5d;
case 0x664a60:goto L664a60;
case 0x664a62:goto L664a62;
case 0x664a64:goto L664a64;
case 0x664a68:c.instructions+=1;goto B664a68;
case 0x664a6a:goto L664a6a;
case 0x664a6d:c.instructions+=3;goto B664a6d;
case 0x664a6f:c.instructions+=2;goto B664a6f;
case 0x664a72:c.instructions+=1;goto B664a72;
case 0x664a77:goto L664a77;
case 0x664a79:c.instructions+=2;goto B664a79;
case 0x664a7c:c.instructions+=1;goto B664a7c;
case 0x664a82:goto L664a82;
case 0x664a85:c.instructions+=3;goto B664a85;
case 0x664a87:c.instructions+=2;goto B664a87;
case 0x664a8a:c.instructions+=1;goto B664a8a;
case 0x664a8f:goto L664a8f;
case 0x664a91:c.instructions+=2;goto B664a91;
case 0x664a94:c.instructions+=1;goto B664a94;
case 0x664a9a:goto L664a9a;
case 0x664a9d:goto L664a9d;
case 0x664aa0:c.instructions+=10;goto B664aa0;
case 0x664aa2:c.instructions+=9;goto B664aa2;
case 0x664aa6:c.instructions+=8;goto B664aa6;
case 0x664aa9:c.instructions+=7;goto B664aa9;
case 0x664aac:c.instructions+=6;goto B664aac;
case 0x664ab2:c.instructions+=5;goto B664ab2;
case 0x664ab5:c.instructions+=4;goto B664ab5;
case 0x664ab8:c.instructions+=3;goto B664ab8;
case 0x664abb:c.instructions+=2;goto B664abb;
case 0x664abd:c.instructions+=1;goto B664abd;
case 0x664ac3:goto L664ac3;
case 0x664ac9:c.instructions+=1;goto B664ac9;
case 0x664acf:goto L664acf;
case 0x664ad1:c.instructions+=7;goto B664ad1;
case 0x664ad2:c.instructions+=6;goto B664ad2;
case 0x664ad5:c.instructions+=5;goto B664ad5;
case 0x664ad6:c.instructions+=4;goto B664ad6;
case 0x664ad7:c.instructions+=3;goto B664ad7;
case 0x664ad8:c.instructions+=2;goto B664ad8;
case 0x664ad9:c.instructions+=1;goto B664ad9;
case 0x664adf:goto L664adf;
case 0x664ae0:c.instructions+=1;goto B664ae0;
case 0x664ae6:goto L664ae6;
case 0x664ae7:c.instructions+=1;goto B664ae7;
case 0x664aed:goto L664aed;
case 0x664af0:c.instructions+=2;goto B664af0;
case 0x664af3:c.instructions+=1;goto B664af3;
case 0x664af5:goto L664af5;
case 0x664af7:c.instructions+=1;goto B664af7;
case 0x664afc:goto L664afc;
case 0x664b01:goto L664b01;
case 0x664b04:c.instructions+=1;goto B664b04;
case 0x664b06:goto L664b06;
case 0x664b08:c.instructions+=1;goto B664b08;
case 0x664b09:goto L664b09;
case 0x664b0b:c.instructions+=1;goto B664b0b;
case 0x664b11:goto L664b11;
case 0x664b13:c.instructions+=1;goto B664b13;
case 0x664b16:goto L664b16;
case 0x664b18:goto L664b18;
case 0x664b1d:goto L664b1d;
case 0x664b20:c.instructions+=3;goto B664b20;
case 0x664b26:c.instructions+=2;goto B664b26;
case 0x664b2c:c.instructions+=1;goto B664b2c;
case 0x664b31:goto L664b31;
case 0x664b34:goto L664b34;
case 0x664b37:c.instructions+=4;goto B664b37;
case 0x664b39:c.instructions+=3;goto B664b39;
case 0x664b3b:c.instructions+=2;goto B664b3b;
case 0x664b3e:c.instructions+=1;goto B664b3e;
case 0x664b40:goto L664b40;
case 0x664b42:c.instructions+=1;goto B664b42;
case 0x664b47:goto L664b47;
case 0x664b4a:c.instructions+=4;goto B664b4a;
case 0x664b4c:c.instructions+=3;goto B664b4c;
case 0x664b4e:c.instructions+=2;goto B664b4e;
case 0x664b51:c.instructions+=1;goto B664b51;
case 0x664b57:goto L664b57;
case 0x664b59:c.instructions+=1;goto B664b59;
case 0x664b5e:goto L664b5e;
case 0x664b61:c.instructions+=3;goto B664b61;
case 0x664b67:c.instructions+=2;goto B664b67;
case 0x664b6d:c.instructions+=1;goto B664b6d;
case 0x664b72:goto L664b72;
case 0x664b74:goto L664b74;
case 0x664b77:c.instructions+=4;goto B664b77;
case 0x664b79:c.instructions+=3;goto B664b79;
case 0x664b7b:c.instructions+=2;goto B664b7b;
case 0x664b7e:c.instructions+=1;goto B664b7e;
case 0x664b80:goto L664b80;
case 0x664b82:c.instructions+=1;goto B664b82;
case 0x664b87:goto L664b87;
case 0x664b8a:c.instructions+=4;goto B664b8a;
case 0x664b90:c.instructions+=3;goto B664b90;
case 0x664b92:c.instructions+=2;goto B664b92;
case 0x664b95:c.instructions+=1;goto B664b95;
case 0x664b9b:goto L664b9b;
case 0x664b9d:c.instructions+=1;goto B664b9d;
case 0x664ba2:goto L664ba2;
case 0x664ba5:c.instructions+=2;goto B664ba5;
case 0x664ba8:c.instructions+=1;goto B664ba8;
case 0x664baa:goto L664baa;
case 0x664bac:c.instructions+=3;goto B664bac;
case 0x664bad:c.instructions+=2;goto B664bad;
case 0x664baf:c.instructions+=1;goto B664baf;
case 0x664bb1:goto L664bb1;
case 0x664bb3:goto L664bb3;
case 0x664bb5:c.instructions+=2;goto B664bb5;
case 0x664bb7:c.instructions+=1;goto B664bb7;
case 0x664bb9:goto L664bb9;
case 0x664bbb:c.instructions+=2;goto B664bbb;
case 0x664bbe:c.instructions+=1;goto B664bbe;
case 0x664bc0:goto L664bc0;
case 0x664bc3:c.instructions+=5;goto B664bc3;
case 0x664bc7:c.instructions+=4;goto B664bc7;
case 0x664bc8:c.instructions+=3;goto B664bc8;
case 0x664bca:c.instructions+=2;goto B664bca;
case 0x664bce:c.instructions+=1;goto B664bce;
case 0x664bd0:goto L664bd0;
case 0x664bd2:goto L664bd2;
case 0x664bd5:c.instructions+=2;goto B664bd5;
case 0x664bd8:c.instructions+=1;goto B664bd8;
case 0x664bda:goto L664bda;
case 0x664bdc:goto L664bdc;
case 0x664bdf:c.instructions+=2;goto B664bdf;
case 0x664be1:c.instructions+=1;goto B664be1;
case 0x664be6:goto L664be6;
case 0x664be8:c.instructions+=3;goto B664be8;
case 0x664be9:c.instructions+=2;goto B664be9;
case 0x664beb:c.instructions+=1;goto B664beb;
case 0x664bed:goto L664bed;
case 0x664bef:goto L664bef;
case 0x664bf1:c.instructions+=2;goto B664bf1;
case 0x664bf3:c.instructions+=1;goto B664bf3;
case 0x664bf5:goto L664bf5;
case 0x664bf7:c.instructions+=2;goto B664bf7;
case 0x664bfa:c.instructions+=1;goto B664bfa;
case 0x664bfc:goto L664bfc;
case 0x664bff:c.instructions+=5;goto B664bff;
case 0x664c03:c.instructions+=4;goto B664c03;
case 0x664c04:c.instructions+=3;goto B664c04;
case 0x664c06:c.instructions+=2;goto B664c06;
case 0x664c0a:c.instructions+=1;goto B664c0a;
case 0x664c0c:goto L664c0c;
case 0x664c12:c.instructions+=7;goto B664c12;
case 0x664c17:c.instructions+=6;goto B664c17;
case 0x664c1a:c.instructions+=5;goto B664c1a;
case 0x664c1c:c.instructions+=4;goto B664c1c;
case 0x664c22:c.instructions+=3;goto B664c22;
case 0x664c24:c.instructions+=2;goto B664c24;
case 0x664c27:c.instructions+=1;goto B664c27;
case 0x664c29:goto L664c29;
case 0x664c2c:c.instructions+=1;goto B664c2c;
case 0x664c31:goto L664c31;
case 0x664c34:c.instructions+=4;goto B664c34;
case 0x664c36:c.instructions+=3;goto B664c36;
case 0x664c38:c.instructions+=2;goto B664c38;
case 0x664c3b:c.instructions+=1;goto B664c3b;
case 0x664c41:goto L664c41;
case 0x664c45:c.instructions+=1;goto B664c45;
case 0x664c4a:goto L664c4a;
case 0x664c4d:c.instructions+=3;goto B664c4d;
case 0x664c53:c.instructions+=2;goto B664c53;
case 0x664c59:c.instructions+=1;goto B664c59;
case 0x664c5e:goto L664c5e;
case 0x664c60:goto L664c60;
case 0x664c63:c.instructions+=4;goto B664c63;
case 0x664c65:c.instructions+=3;goto B664c65;
case 0x664c67:c.instructions+=2;goto B664c67;
case 0x664c6a:c.instructions+=1;goto B664c6a;
case 0x664c6c:goto L664c6c;
case 0x664c6e:c.instructions+=2;goto B664c6e;
case 0x664c70:c.instructions+=1;goto B664c70;
case 0x664c75:goto L664c75;
case 0x664c78:c.instructions+=4;goto B664c78;
case 0x664c7a:c.instructions+=3;goto B664c7a;
case 0x664c7c:c.instructions+=2;goto B664c7c;
case 0x664c7f:c.instructions+=1;goto B664c7f;
case 0x664c85:goto L664c85;
case 0x664c87:c.instructions+=1;goto B664c87;
case 0x664c8c:goto L664c8c;
case 0x664c8f:c.instructions+=3;goto B664c8f;
case 0x664c95:c.instructions+=2;goto B664c95;
case 0x664c9b:c.instructions+=1;goto B664c9b;
case 0x664ca0:goto L664ca0;
case 0x664ca3:c.instructions+=6;goto B664ca3;
case 0x664ca6:c.instructions+=5;goto B664ca6;
case 0x664ca9:c.instructions+=4;goto B664ca9;
case 0x664cab:c.instructions+=3;goto B664cab;
case 0x664cae:c.instructions+=2;goto B664cae;
case 0x664cb0:c.instructions+=1;goto B664cb0;
case 0x664cb5:goto L664cb5;
case 0x664cb6:c.instructions+=1;goto B664cb6;
case 0x664cbc:goto L664cbc;
case 0x664cbd:c.instructions+=1;goto B664cbd;
case 0x664cc3:goto L664cc3;
case 0x664cc4:c.instructions+=1;goto B664cc4;
case 0x664cc6:goto L664cc6;
case 0x664ccd:c.instructions+=1;goto B664ccd;
case 0x664cd2:goto L664cd2;
case 0x664cd5:c.instructions+=3;goto B664cd5;
case 0x664cd8:c.instructions+=2;goto B664cd8;
case 0x664cdb:c.instructions+=1;goto B664cdb;
case 0x664cdd:goto L664cdd;
case 0x664cdf:c.instructions+=3;goto B664cdf;
case 0x664ce0:c.instructions+=2;goto B664ce0;
case 0x664ce2:c.instructions+=1;goto B664ce2;
case 0x664ce4:goto L664ce4;
case 0x664ce6:goto L664ce6;
case 0x664ce8:c.instructions+=1;goto B664ce8;
case 0x664cee:goto L664cee;
case 0x664cf1:c.instructions+=2;goto B664cf1;
case 0x664cf3:c.instructions+=1;goto B664cf3;
case 0x664cf5:goto L664cf5;
case 0x664cf8:c.instructions+=4;goto B664cf8;
case 0x664cfa:c.instructions+=3;goto B664cfa;
case 0x664cfd:c.instructions+=2;goto B664cfd;
case 0x664cfe:c.instructions+=1;goto B664cfe;
case 0x664d00:goto L664d00;
case 0x664d05:goto L664d05;
case 0x664d07:c.instructions+=3;goto B664d07;
case 0x664d08:c.instructions+=2;goto B664d08;
case 0x664d0a:c.instructions+=1;goto B664d0a;
case 0x664d0c:goto L664d0c;
case 0x664d0e:goto L664d0e;
case 0x664d10:c.instructions+=2;goto B664d10;
case 0x664d13:c.instructions+=1;goto B664d13;
case 0x664d15:goto L664d15;
case 0x664d18:goto L664d18;
case 0x664d1a:c.instructions+=1;goto B664d1a;
case 0x664d20:goto L664d20;
case 0x664d23:c.instructions+=4;goto B664d23;
case 0x664d25:c.instructions+=3;goto B664d25;
case 0x664d28:c.instructions+=2;goto B664d28;
case 0x664d2a:c.instructions+=1;goto B664d2a;
case 0x664d2d:goto L664d2d;
case 0x664d31:c.instructions+=1;goto B664d31;
case 0x664d33:goto L664d33;
case 0x664d36:c.instructions+=3;goto B664d36;
case 0x664d38:c.instructions+=2;goto B664d38;
case 0x664d3a:c.instructions+=1;goto B664d3a;
case 0x664d3d:goto L664d3d;
case 0x664d3f:c.instructions+=5;goto B664d3f;
case 0x664d41:c.instructions+=4;goto B664d41;
case 0x664d44:c.instructions+=3;goto B664d44;
case 0x664d47:c.instructions+=2;goto B664d47;
case 0x664d4a:c.instructions+=1;goto B664d4a;
case 0x664d4c:goto L664d4c;
case 0x664d4f:c.instructions+=3;goto B664d4f;
case 0x664d51:c.instructions+=2;goto B664d51;
case 0x664d54:c.instructions+=1;goto B664d54;
case 0x664d56:goto L664d56;
case 0x664d5b:goto L664d5b;
case 0x664d5e:c.instructions+=3;goto B664d5e;
case 0x664d61:c.instructions+=2;goto B664d61;
case 0x664d64:c.instructions+=1;goto B664d64;
case 0x664d6a:goto L664d6a;
case 0x664d6c:c.instructions+=1;goto B664d6c;
case 0x664d6e:goto L664d6e;
case 0x664d74:c.instructions+=1;goto B664d74;
case 0x664d76:goto L664d76;
case 0x664d7d:c.instructions+=1;goto B664d7d;
case 0x664d7f:goto L664d7f;
case 0x664d81:c.instructions+=33;goto B664d81;
case 0x664d87:c.instructions+=32;goto B664d87;
case 0x664d89:c.instructions+=31;goto B664d89;
case 0x664d8c:c.instructions+=30;goto B664d8c;
case 0x664d8f:c.instructions+=29;goto B664d8f;
case 0x664d92:c.instructions+=28;goto B664d92;
case 0x664d94:c.instructions+=27;goto B664d94;
case 0x664d97:c.instructions+=26;goto B664d97;
case 0x664d9a:c.instructions+=25;goto B664d9a;
case 0x664d9d:c.instructions+=24;goto B664d9d;
case 0x664d9f:c.instructions+=23;goto B664d9f;
case 0x664da2:c.instructions+=22;goto B664da2;
case 0x664da5:c.instructions+=21;goto B664da5;
case 0x664da8:c.instructions+=20;goto B664da8;
case 0x664dab:c.instructions+=19;goto B664dab;
case 0x664dae:c.instructions+=18;goto B664dae;
case 0x664db1:c.instructions+=17;goto B664db1;
case 0x664db4:c.instructions+=16;goto B664db4;
case 0x664db6:c.instructions+=15;goto B664db6;
case 0x664db9:c.instructions+=14;goto B664db9;
case 0x664dbc:c.instructions+=13;goto B664dbc;
case 0x664dbf:c.instructions+=12;goto B664dbf;
case 0x664dc2:c.instructions+=11;goto B664dc2;
case 0x664dc4:c.instructions+=10;goto B664dc4;
case 0x664dc7:c.instructions+=9;goto B664dc7;
case 0x664dca:c.instructions+=8;goto B664dca;
case 0x664dcc:c.instructions+=7;goto B664dcc;
case 0x664dcf:c.instructions+=6;goto B664dcf;
case 0x664dd0:c.instructions+=5;goto B664dd0;
case 0x664dd1:c.instructions+=4;goto B664dd1;
case 0x664dd3:c.instructions+=3;goto B664dd3;
case 0x664dd4:c.instructions+=2;goto B664dd4;
case 0x664dd5:c.instructions+=1;goto B664dd5;
case 0x664dda:goto L664dda;
case 0x664ddd:c.instructions+=1;goto B664ddd;
case 0x664ddf:goto L664ddf;
case 0x664de1:c.instructions+=1;goto B664de1;
case 0x664de2:goto L664de2;
case 0x664de4:c.instructions+=1;goto B664de4;
case 0x664dea:goto L664dea;
case 0x664ded:c.instructions+=2;goto B664ded;
case 0x664def:c.instructions+=1;goto B664def;
case 0x664df1:goto L664df1;
case 0x664df4:c.instructions+=4;goto B664df4;
case 0x664df6:c.instructions+=3;goto B664df6;
case 0x664df9:c.instructions+=2;goto B664df9;
case 0x664dfa:c.instructions+=1;goto B664dfa;
case 0x664dfc:goto L664dfc;
case 0x664e01:goto L664e01;
case 0x664e03:c.instructions+=4;goto B664e03;
case 0x664e04:c.instructions+=3;goto B664e04;
case 0x664e06:c.instructions+=2;goto B664e06;
case 0x664e08:c.instructions+=1;goto B664e08;
case 0x664e0a:goto L664e0a;
case 0x664e0c:goto L664e0c;
case 0x664e0e:c.instructions+=2;goto B664e0e;
case 0x664e11:c.instructions+=1;goto B664e11;
case 0x664e13:goto L664e13;
case 0x664e16:goto L664e16;
case 0x664e18:c.instructions+=1;goto B664e18;
case 0x664e1e:goto L664e1e;
case 0x664e21:c.instructions+=4;goto B664e21;
case 0x664e23:c.instructions+=3;goto B664e23;
case 0x664e26:c.instructions+=2;goto B664e26;
case 0x664e28:c.instructions+=1;goto B664e28;
case 0x664e2b:goto L664e2b;
case 0x664e2f:c.instructions+=1;goto B664e2f;
case 0x664e31:goto L664e31;
case 0x664e34:c.instructions+=2;goto B664e34;
case 0x664e36:c.instructions+=1;goto B664e36;
case 0x664e38:goto L664e38;
case 0x664e3a:c.instructions+=5;goto B664e3a;
case 0x664e3d:c.instructions+=4;goto B664e3d;
case 0x664e3f:c.instructions+=3;goto B664e3f;
case 0x664e42:c.instructions+=2;goto B664e42;
case 0x664e43:c.instructions+=1;goto B664e43;
case 0x664e45:goto L664e45;
case 0x664e48:c.instructions+=3;goto B664e48;
case 0x664e4a:c.instructions+=2;goto B664e4a;
case 0x664e4d:c.instructions+=1;goto B664e4d;
case 0x664e4f:goto L664e4f;
case 0x664e51:goto L664e51;
case 0x664e54:c.instructions+=3;goto B664e54;
case 0x664e57:c.instructions+=2;goto B664e57;
case 0x664e5a:c.instructions+=1;goto B664e5a;
case 0x664e5c:goto L664e5c;
case 0x664e5e:c.instructions+=3;goto B664e5e;
case 0x664e5f:c.instructions+=2;goto B664e5f;
case 0x664e61:c.instructions+=1;goto B664e61;
case 0x664e63:goto L664e63;
case 0x664e65:goto L664e65;
case 0x664e67:c.instructions+=1;goto B664e67;
case 0x664e69:goto L664e69;
case 0x664e6c:c.instructions+=2;goto B664e6c;
case 0x664e6e:c.instructions+=1;goto B664e6e;
case 0x664e70:goto L664e70;
case 0x664e73:c.instructions+=4;goto B664e73;
case 0x664e75:c.instructions+=3;goto B664e75;
case 0x664e78:c.instructions+=2;goto B664e78;
case 0x664e79:c.instructions+=1;goto B664e79;
case 0x664e7b:goto L664e7b;
case 0x664e7d:goto L664e7d;
case 0x664e7f:c.instructions+=3;goto B664e7f;
case 0x664e80:c.instructions+=2;goto B664e80;
case 0x664e82:c.instructions+=1;goto B664e82;
case 0x664e84:goto L664e84;
case 0x664e86:goto L664e86;
case 0x664e88:c.instructions+=2;goto B664e88;
case 0x664e8b:c.instructions+=1;goto B664e8b;
case 0x664e8d:goto L664e8d;
case 0x664e90:goto L664e90;
case 0x664e92:c.instructions+=1;goto B664e92;
case 0x664e94:goto L664e94;
case 0x664e97:c.instructions+=4;goto B664e97;
case 0x664e99:c.instructions+=3;goto B664e99;
case 0x664e9c:c.instructions+=2;goto B664e9c;
case 0x664e9e:c.instructions+=1;goto B664e9e;
case 0x664ea1:goto L664ea1;
case 0x664ea5:c.instructions+=1;goto B664ea5;
case 0x664ea7:goto L664ea7;
case 0x664eaa:c.instructions+=2;goto B664eaa;
case 0x664eac:c.instructions+=1;goto B664eac;
case 0x664eae:goto L664eae;
case 0x664eb0:c.instructions+=5;goto B664eb0;
case 0x664eb3:c.instructions+=4;goto B664eb3;
case 0x664eb5:c.instructions+=3;goto B664eb5;
case 0x664eb8:c.instructions+=2;goto B664eb8;
case 0x664eb9:c.instructions+=1;goto B664eb9;
case 0x664ebb:goto L664ebb;
case 0x664ebe:c.instructions+=3;goto B664ebe;
case 0x664ec0:c.instructions+=2;goto B664ec0;
case 0x664ec3:c.instructions+=1;goto B664ec3;
case 0x664ec5:goto L664ec5;
case 0x664ec8:c.instructions+=5;goto B664ec8;
case 0x664ec9:c.instructions+=4;goto B664ec9;
case 0x664eca:c.instructions+=3;goto B664eca;
case 0x664ecb:c.instructions+=2;goto B664ecb;
case 0x664ecc:c.instructions+=1;goto B664ecc;
case 0x664ecf:goto L664ecf;
case 0x664ed1:c.instructions+=13;goto B664ed1;
case 0x664ed5:c.instructions+=12;goto B664ed5;
case 0x664ed7:c.instructions+=11;goto B664ed7;
case 0x664eda:c.instructions+=10;goto B664eda;
case 0x664edd:c.instructions+=9;goto B664edd;
case 0x664edf:c.instructions+=8;goto B664edf;
case 0x664ee2:c.instructions+=7;goto B664ee2;
case 0x664ee9:c.instructions+=6;goto B664ee9;
case 0x664eec:c.instructions+=5;goto B664eec;
case 0x664eef:c.instructions+=4;goto B664eef;
case 0x664ef2:c.instructions+=3;goto B664ef2;
case 0x664ef6:c.instructions+=2;goto B664ef6;
case 0x664ef9:c.instructions+=1;goto B664ef9;
case 0x664efa:goto L664efa;
case 0x664efc:c.instructions+=4;goto B664efc;
case 0x664efd:c.instructions+=3;goto B664efd;
case 0x664eff:c.instructions+=2;goto B664eff;
case 0x664f03:c.instructions+=1;goto B664f03;
case 0x664f05:goto L664f05;
case 0x664f06:goto L664f06;
case 0x664f09:c.instructions+=5;goto B664f09;
case 0x664f0c:c.instructions+=4;goto B664f0c;
case 0x664f0f:c.instructions+=3;goto B664f0f;
case 0x664f13:c.instructions+=2;goto B664f13;
case 0x664f15:c.instructions+=1;goto B664f15;
case 0x664f1a:goto L664f1a;
case 0x664f1b:c.instructions+=1;goto B664f1b;
case 0x664f20:goto L664f20;
case 0x664f24:c.instructions+=2;goto B664f24;
case 0x664f25:c.instructions+=1;goto B664f25;
case 0x664f27:goto L664f27;
case 0x664f28:goto L664f28;
case 0x664f2b:c.instructions+=2;goto B664f2b;
case 0x664f2d:c.instructions+=1;goto B664f2d;
case 0x664f2f:goto L664f2f;
case 0x664f31:c.instructions+=1;goto B664f31;
case 0x664f36:goto L664f36;
case 0x664f3a:goto L664f3a;
case 0x664f3c:c.instructions+=2;goto B664f3c;
case 0x664f3d:c.instructions+=1;goto B664f3d;
case 0x664f42:goto L664f42;
case 0x664f44:c.instructions+=5;goto B664f44;
case 0x664f45:c.instructions+=4;goto B664f45;
case 0x664f47:c.instructions+=3;goto B664f47;
case 0x664f48:c.instructions+=2;goto B664f48;
case 0x664f4a:c.instructions+=1;goto B664f4a;
case 0x664f4f:goto L664f4f;
case 0x664f53:c.instructions+=1;goto B664f53;
case 0x664f55:goto L664f55;
case 0x664f56:c.instructions+=1;goto B664f56;
case 0x664f5b:goto L664f5b;
case 0x664f5c:goto L664f5c;
case 0x664f5e:c.instructions+=3;goto B664f5e;
case 0x664f5f:c.instructions+=2;goto B664f5f;
case 0x664f60:c.instructions+=1;goto B664f60;
case 0x664f63:goto L664f63;
case 0x664f65:c.instructions+=6;goto B664f65;
case 0x664f66:c.instructions+=5;goto B664f66;
case 0x664f68:c.instructions+=4;goto B664f68;
case 0x664f6c:c.instructions+=3;goto B664f6c;
case 0x664f6d:c.instructions+=2;goto B664f6d;
case 0x664f6f:c.instructions+=1;goto B664f6f;
case 0x664f71:goto L664f71;
case 0x664f72:c.instructions+=6;goto B664f72;
case 0x664f77:c.instructions+=5;goto B664f77;
case 0x664f7a:c.instructions+=4;goto B664f7a;
case 0x664f7c:c.instructions+=3;goto B664f7c;
case 0x664f7e:c.instructions+=2;goto B664f7e;
case 0x664f7f:c.instructions+=1;goto B664f7f;
case 0x664f84:goto L664f84;
case 0x664f88:c.instructions+=1;goto B664f88;
case 0x664f8a:goto L664f8a;
case 0x664f8b:c.instructions+=1;goto B664f8b;
case 0x664f90:goto L664f90;
case 0x664f91:goto L664f91;
case 0x664f93:c.instructions+=2;goto B664f93;
case 0x664f94:c.instructions+=1;goto B664f94;
case 0x664f96:goto L664f96;
case 0x664f98:c.instructions+=1;goto B664f98;
case 0x664f9d:goto L664f9d;
case 0x664fa1:c.instructions+=1;goto B664fa1;
case 0x664fa3:goto L664fa3;
case 0x664fa4:c.instructions+=1;goto B664fa4;
case 0x664fa9:goto L664fa9;
case 0x664faa:goto L664faa;
case 0x664fac:goto L664fac;
case 0x664fad:c.instructions+=2;goto B664fad;
case 0x664fae:c.instructions+=1;goto B664fae;
case 0x664fb1:goto L664fb1;
case 0x664fb3:c.instructions+=11;goto B664fb3;
case 0x664fb4:c.instructions+=10;goto B664fb4;
case 0x664fb6:c.instructions+=9;goto B664fb6;
case 0x664fb7:c.instructions+=8;goto B664fb7;
case 0x664fbb:c.instructions+=7;goto B664fbb;
case 0x664fbc:c.instructions+=6;goto B664fbc;
case 0x664fc0:c.instructions+=5;goto B664fc0;
case 0x664fc1:c.instructions+=4;goto B664fc1;
case 0x664fc3:c.instructions+=3;goto B664fc3;
case 0x664fc7:c.instructions+=2;goto B664fc7;
case 0x664fc8:c.instructions+=1;goto B664fc8;
case 0x664fca:goto L664fca;
case 0x664fcd:c.instructions+=5;goto B664fcd;
case 0x664fcf:c.instructions+=4;goto B664fcf;
case 0x664fd2:c.instructions+=3;goto B664fd2;
case 0x664fd5:c.instructions+=2;goto B664fd5;
case 0x664fd6:c.instructions+=1;goto B664fd6;
case 0x664fdb:goto L664fdb;
case 0x664fdd:c.instructions+=2;goto B664fdd;
case 0x664fde:c.instructions+=1;goto B664fde;
case 0x664fe0:goto L664fe0;
case 0x664fe5:c.instructions+=6;goto B664fe5;
case 0x664fe6:c.instructions+=5;goto B664fe6;
case 0x664fe9:c.instructions+=4;goto B664fe9;
case 0x664feb:c.instructions+=3;goto B664feb;
case 0x664fec:c.instructions+=2;goto B664fec;
case 0x664fee:c.instructions+=1;goto B664fee;
case 0x664ff3:goto L664ff3;
case 0x664ff5:c.instructions+=2;goto B664ff5;
case 0x664ff9:c.instructions+=1;goto B664ff9;
case 0x664ffb:goto L664ffb;
case 0x664ffd:goto L664ffd;
case 0x664fff:c.instructions+=1;goto B664fff;
default:missing_instruction(c.pc);}
B664000:L664000:{c.instructions+=1;NFSU2_TR(0x664000);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L664013;}}
}
B664002:L664002:{c.instructions+=3;NFSU2_TR(0x664002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664005:{NFSU2_TR(0x664005);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664007:{NFSU2_TR(0x664007);
if(r1(R+518)){{goto L664013;}}
}
B664009:L664009:{c.instructions+=2;NFSU2_TR(0x664009);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66400a:{NFSU2_TR(0x66400a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66400full));
TAIL_STATIC(0x575630u,575);
}
B66400f:L66400f:{c.instructions+=2;NFSU2_TR(0x66400f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664010:{NFSU2_TR(0x664010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664013:L664013:{c.instructions+=2;NFSU2_TR(0x664013);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B664016:{NFSU2_TR(0x664016);
if(r1(R+518)){{goto L664039;}}
}
B664018:L664018:{c.instructions+=1;NFSU2_TR(0x664018);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664019:L664019:{c.instructions+=6;NFSU2_TR(0x664019);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66401c:{NFSU2_TR(0x66401c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66401f:{NFSU2_TR(0x66401f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664022:{NFSU2_TR(0x664022);
__builtin_memmove((R+4),(R+28),4);
}
B664024:{NFSU2_TR(0x664024);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664027:{NFSU2_TR(0x664027);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66402cull));
TAIL_STATIC(0x663fcfu,663);
}
B66402c:L66402c:{c.instructions+=2;NFSU2_TR(0x66402c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66402d:{NFSU2_TR(0x66402d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664032ull));
TAIL_STATIC(0x575630u,575);
}
B664032:L664032:{c.instructions+=3;NFSU2_TR(0x664032);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B664035:{NFSU2_TR(0x664035);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664036:{NFSU2_TR(0x664036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664019u);}goto L664019;}}
}
B664038:L664038:{c.instructions+=1;NFSU2_TR(0x664038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664039:L664039:{c.instructions+=3;NFSU2_TR(0x664039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66403a:{NFSU2_TR(0x66403a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66403b:{NFSU2_TR(0x66403b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66403c:L66403c:{c.instructions+=16;NFSU2_TR(0x66403c);
__builtin_memmove((R+28),(R+28),4);
}
B66403e:{NFSU2_TR(0x66403e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66403f:{NFSU2_TR(0x66403f);
__builtin_memmove((R+20),(R+16),4);
}
B664041:{NFSU2_TR(0x664041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B664044:{NFSU2_TR(0x664044);
__builtin_memmove((R+8),(R+4),4);
}
B664046:{NFSU2_TR(0x664046);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66404c:{NFSU2_TR(0x66404c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66404d:{NFSU2_TR(0x66404d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66404e:{NFSU2_TR(0x66404e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B664052:{NFSU2_TR(0x664052);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B664058:{NFSU2_TR(0x664058);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66405e:{NFSU2_TR(0x66405e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B664060:{NFSU2_TR(0x664060);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664062:{NFSU2_TR(0x664062);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B664065:{NFSU2_TR(0x664065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664068:{NFSU2_TR(0x664068);
if(r1(R+518)){{goto L664191;}}
}
B66406e:L66406e:{c.instructions+=4;NFSU2_TR(0x66406e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664071:{NFSU2_TR(0x664071);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664072:{NFSU2_TR(0x664072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664075:{NFSU2_TR(0x664075);
if(r1(R+518)){{goto L66414d;}}
}
B66407b:L66407b:{c.instructions+=2;NFSU2_TR(0x66407b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664081:{NFSU2_TR(0x664081);
if(r1(R+518)){{goto L6640ba;}}
}
B664083:L664083:{c.instructions+=2;NFSU2_TR(0x664083);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664086:{NFSU2_TR(0x664086);
if(r1(R+518)){{goto L664090;}}
}
B664088:L664088:{c.instructions+=2;NFSU2_TR(0x664088);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66408e:{NFSU2_TR(0x66408e);
if(r1(R+518)){{goto L6640c2;}}
}
B664090:L664090:{c.instructions+=3;NFSU2_TR(0x664090);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664097:{NFSU2_TR(0x664097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+2))));
}
B66409a:{NFSU2_TR(0x66409a);
if(r1(R+512)){{goto L6640ba;}}
}
B66409c:L66409c:{c.instructions+=3;NFSU2_TR(0x66409c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6640a3:{NFSU2_TR(0x6640a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
}
B6640a7:{NFSU2_TR(0x6640a7);
if(r1(R+512)){{goto L6640ba;}}
}
B6640a9:L6640a9:{c.instructions+=3;NFSU2_TR(0x6640a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6640b0:{NFSU2_TR(0x6640b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
}
B6640b4:{NFSU2_TR(0x6640b4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66414d;}}
}
B6640ba:L6640ba:{c.instructions+=2;NFSU2_TR(0x6640ba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6640c0:{NFSU2_TR(0x6640c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6640c7;}}
}
B6640c2:L6640c2:{c.instructions+=2;NFSU2_TR(0x6640c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6640c5:{NFSU2_TR(0x6640c5);
if(r1(R+518)){{goto L6640ca;}}
}
B6640c7:L6640c7:{c.instructions+=2;NFSU2_TR(0x6640c7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6640c9:{NFSU2_TR(0x6640c9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6640ca:L6640ca:{c.instructions+=5;NFSU2_TR(0x6640ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6640d1:{NFSU2_TR(0x6640d1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6640d4:{NFSU2_TR(0x6640d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6640d7:{NFSU2_TR(0x6640d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6640db:{NFSU2_TR(0x6640db);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6640e1;}}
}
B6640dd:L6640dd:{c.instructions+=1;NFSU2_TR(0x6640dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6640e1:L6640e1:{c.instructions+=5;NFSU2_TR(0x6640e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6640e8:{NFSU2_TR(0x6640e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6640ec:{NFSU2_TR(0x6640ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6640ef:{NFSU2_TR(0x6640ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6640f3:{NFSU2_TR(0x6640f3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6640f9;}}
}
B6640f5:L6640f5:{c.instructions+=1;NFSU2_TR(0x6640f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6640f9:L6640f9:{c.instructions+=5;NFSU2_TR(0x6640f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664100:{NFSU2_TR(0x664100);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664104:{NFSU2_TR(0x664104);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B664107:{NFSU2_TR(0x664107);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66410b:{NFSU2_TR(0x66410b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664111;}}
}
B66410d:L66410d:{c.instructions+=1;NFSU2_TR(0x66410d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664111:L664111:{c.instructions+=5;NFSU2_TR(0x664111);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B664114:{NFSU2_TR(0x664114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664115:{NFSU2_TR(0x664115);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664116:{NFSU2_TR(0x664116);
__builtin_memmove((R+4),(R+8),4);
}
B664118:{NFSU2_TR(0x664118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66411dull));
TAIL_STATIC(0x66356eu,663);
}
B66411d:L66411d:{c.instructions+=2;NFSU2_TR(0x66411d);
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
B66411f:{NFSU2_TR(0x66411f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664190;}}
}
B664121:L664121:{c.instructions+=9;NFSU2_TR(0x664121);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664125:{NFSU2_TR(0x664125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664128:{NFSU2_TR(0x664128);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66412f:{NFSU2_TR(0x66412f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664133:{NFSU2_TR(0x664133);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66413a:{NFSU2_TR(0x66413a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66413e:{NFSU2_TR(0x66413e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664144:{NFSU2_TR(0x664144);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66414b:{NFSU2_TR(0x66414b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66414d:L66414d:{c.instructions+=2;NFSU2_TR(0x66414d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664153:{NFSU2_TR(0x664153);
if(r1(R+518)){{goto L664162;}}
}
B664155:L664155:{c.instructions+=3;NFSU2_TR(0x664155);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66415c:{NFSU2_TR(0x66415c);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+10)));
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B664160:{NFSU2_TR(0x664160);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L664190;}}
}
B664162:L664162:{c.instructions+=4;NFSU2_TR(0x664162);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664169:{NFSU2_TR(0x664169);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B66416d:{NFSU2_TR(0x66416d);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B664170:{NFSU2_TR(0x664170);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664175;}}
}
B664172:L664172:{c.instructions+=1;NFSU2_TR(0x664172);
__builtin_memmove((R+28),(R+0),2);
}
B664175:L664175:{c.instructions+=6;NFSU2_TR(0x664175);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B664178:{NFSU2_TR(0x664178);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664179:{NFSU2_TR(0x664179);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66417a:{NFSU2_TR(0x66417a);
__builtin_memmove((R+4),(R+8),4);
}
B66417c:{NFSU2_TR(0x66417c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664180:{NFSU2_TR(0x664180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664185ull));
TAIL_STATIC(0x66369fu,663);
}
B664185:L664185:{c.instructions+=2;NFSU2_TR(0x664185);
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
B664187:{NFSU2_TR(0x664187);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664190;}}
}
B664189:L664189:{c.instructions+=1;NFSU2_TR(0x664189);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664190:L664190:{c.instructions+=1;NFSU2_TR(0x664190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664191:L664191:{c.instructions+=4;NFSU2_TR(0x664191);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664192:{NFSU2_TR(0x664192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B664193:{NFSU2_TR(0x664193);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B664194:{NFSU2_TR(0x664194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664197:L664197:{c.instructions+=16;NFSU2_TR(0x664197);
__builtin_memmove((R+28),(R+28),4);
}
B664199:{NFSU2_TR(0x664199);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66419a:{NFSU2_TR(0x66419a);
__builtin_memmove((R+20),(R+16),4);
}
B66419c:{NFSU2_TR(0x66419c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66419f:{NFSU2_TR(0x66419f);
__builtin_memmove((R+8),(R+4),4);
}
B6641a1:{NFSU2_TR(0x6641a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6641a7:{NFSU2_TR(0x6641a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6641a8:{NFSU2_TR(0x6641a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6641a9:{NFSU2_TR(0x6641a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6641ad:{NFSU2_TR(0x6641ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6641b3:{NFSU2_TR(0x6641b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6641b9:{NFSU2_TR(0x6641b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6641bb:{NFSU2_TR(0x6641bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6641bd:{NFSU2_TR(0x6641bd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6641c0:{NFSU2_TR(0x6641c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6641c3:{NFSU2_TR(0x6641c3);
if(r1(R+518)){{goto L6642ec;}}
}
B6641c9:L6641c9:{c.instructions+=4;NFSU2_TR(0x6641c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6641cc:{NFSU2_TR(0x6641cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6641cd:{NFSU2_TR(0x6641cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6641d0:{NFSU2_TR(0x6641d0);
if(r1(R+518)){{goto L6642a8;}}
}
B6641d6:L6641d6:{c.instructions+=2;NFSU2_TR(0x6641d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6641dc:{NFSU2_TR(0x6641dc);
if(r1(R+518)){{goto L664215;}}
}
B6641de:L6641de:{c.instructions+=2;NFSU2_TR(0x6641de);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6641e1:{NFSU2_TR(0x6641e1);
if(r1(R+518)){{goto L6641eb;}}
}
B6641e3:L6641e3:{c.instructions+=2;NFSU2_TR(0x6641e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6641e9:{NFSU2_TR(0x6641e9);
if(r1(R+518)){{goto L66421d;}}
}
B6641eb:L6641eb:{c.instructions+=3;NFSU2_TR(0x6641eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6641f2:{NFSU2_TR(0x6641f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+2))));
}
B6641f5:{NFSU2_TR(0x6641f5);
if(r1(R+512)){{goto L664215;}}
}
B6641f7:L6641f7:{c.instructions+=3;NFSU2_TR(0x6641f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6641fe:{NFSU2_TR(0x6641fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
}
B664202:{NFSU2_TR(0x664202);
if(r1(R+512)){{goto L664215;}}
}
B664204:L664204:{c.instructions+=3;NFSU2_TR(0x664204);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66420b:{NFSU2_TR(0x66420b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
}
B66420f:{NFSU2_TR(0x66420f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6642a8;}}
}
B664215:L664215:{c.instructions+=2;NFSU2_TR(0x664215);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66421b:{NFSU2_TR(0x66421b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664222;}}
}
B66421d:L66421d:{c.instructions+=2;NFSU2_TR(0x66421d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664220:{NFSU2_TR(0x664220);
if(r1(R+518)){{goto L664225;}}
}
B664222:L664222:{c.instructions+=2;NFSU2_TR(0x664222);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B664224:{NFSU2_TR(0x664224);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B664225:L664225:{c.instructions+=5;NFSU2_TR(0x664225);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66422c:{NFSU2_TR(0x66422c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B66422f:{NFSU2_TR(0x66422f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B664232:{NFSU2_TR(0x664232);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664236:{NFSU2_TR(0x664236);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66423c;}}
}
B664238:L664238:{c.instructions+=1;NFSU2_TR(0x664238);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66423c:L66423c:{c.instructions+=5;NFSU2_TR(0x66423c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664243:{NFSU2_TR(0x664243);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664247:{NFSU2_TR(0x664247);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66424a:{NFSU2_TR(0x66424a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66424e:{NFSU2_TR(0x66424e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664254;}}
}
B664250:L664250:{c.instructions+=1;NFSU2_TR(0x664250);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664254:L664254:{c.instructions+=5;NFSU2_TR(0x664254);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66425b:{NFSU2_TR(0x66425b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66425f:{NFSU2_TR(0x66425f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B664262:{NFSU2_TR(0x664262);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664266:{NFSU2_TR(0x664266);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66426c;}}
}
B664268:L664268:{c.instructions+=1;NFSU2_TR(0x664268);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66426c:L66426c:{c.instructions+=5;NFSU2_TR(0x66426c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66426f:{NFSU2_TR(0x66426f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664270:{NFSU2_TR(0x664270);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664271:{NFSU2_TR(0x664271);
__builtin_memmove((R+4),(R+8),4);
}
B664273:{NFSU2_TR(0x664273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664278ull));
TAIL_STATIC(0x6637d0u,663);
}
B664278:L664278:{c.instructions+=2;NFSU2_TR(0x664278);
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
B66427a:{NFSU2_TR(0x66427a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6642eb;}}
}
B66427c:L66427c:{c.instructions+=9;NFSU2_TR(0x66427c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664280:{NFSU2_TR(0x664280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664283:{NFSU2_TR(0x664283);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66428a:{NFSU2_TR(0x66428a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66428e:{NFSU2_TR(0x66428e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664295:{NFSU2_TR(0x664295);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664299:{NFSU2_TR(0x664299);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66429f:{NFSU2_TR(0x66429f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6642a6:{NFSU2_TR(0x6642a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6642a8:L6642a8:{c.instructions+=2;NFSU2_TR(0x6642a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6642ae:{NFSU2_TR(0x6642ae);
if(r1(R+518)){{goto L6642bd;}}
}
B6642b0:L6642b0:{c.instructions+=3;NFSU2_TR(0x6642b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6642b7:{NFSU2_TR(0x6642b7);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+10)));
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6642bb:{NFSU2_TR(0x6642bb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6642eb;}}
}
B6642bd:L6642bd:{c.instructions+=4;NFSU2_TR(0x6642bd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6642c4:{NFSU2_TR(0x6642c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6642c8:{NFSU2_TR(0x6642c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+0))));
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6642cb:{NFSU2_TR(0x6642cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6642d0;}}
}
B6642cd:L6642cd:{c.instructions+=1;NFSU2_TR(0x6642cd);
__builtin_memmove((R+28),(R+0),2);
}
B6642d0:L6642d0:{c.instructions+=6;NFSU2_TR(0x6642d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6642d3:{NFSU2_TR(0x6642d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6642d4:{NFSU2_TR(0x6642d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6642d5:{NFSU2_TR(0x6642d5);
__builtin_memmove((R+4),(R+8),4);
}
B6642d7:{NFSU2_TR(0x6642d7);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6642db:{NFSU2_TR(0x6642db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6642e0ull));
TAIL_STATIC(0x663901u,663);
}
B6642e0:L6642e0:{c.instructions+=2;NFSU2_TR(0x6642e0);
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
B6642e2:{NFSU2_TR(0x6642e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6642eb;}}
}
B6642e4:L6642e4:{c.instructions+=1;NFSU2_TR(0x6642e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6642eb:L6642eb:{c.instructions+=1;NFSU2_TR(0x6642eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6642ec:L6642ec:{c.instructions+=4;NFSU2_TR(0x6642ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6642ed:{NFSU2_TR(0x6642ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6642ee:{NFSU2_TR(0x6642ee);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6642ef:{NFSU2_TR(0x6642ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6642f2:L6642f2:{c.instructions+=17;NFSU2_TR(0x6642f2);
__builtin_memmove((R+28),(R+28),4);
}
B6642f4:{NFSU2_TR(0x6642f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6642f5:{NFSU2_TR(0x6642f5);
__builtin_memmove((R+20),(R+16),4);
}
B6642f7:{NFSU2_TR(0x6642f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6642fa:{NFSU2_TR(0x6642fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6642fd:{NFSU2_TR(0x6642fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6642fe:{NFSU2_TR(0x6642fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664301:{NFSU2_TR(0x664301);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B664304:{NFSU2_TR(0x664304);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664305:{NFSU2_TR(0x664305);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B664307:{NFSU2_TR(0x664307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B664309:{NFSU2_TR(0x664309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66430c:{NFSU2_TR(0x66430c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66430f:{NFSU2_TR(0x66430f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664313:{NFSU2_TR(0x664313);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B664317:{NFSU2_TR(0x664317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66431a:{NFSU2_TR(0x66431a);
if(r1(R+518)){{goto L664531;}}
}
B664320:L664320:{c.instructions+=7;NFSU2_TR(0x664320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664321:{NFSU2_TR(0x664321);
w4(R+24,u32(r2(R+0)));
}
B664324:{NFSU2_TR(0x664324);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B664327:{NFSU2_TR(0x664327);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66432a:{NFSU2_TR(0x66432a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66432d:{NFSU2_TR(0x66432d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664332:{NFSU2_TR(0x664332);
if(r1(R+518)){{goto L6644a3;}}
}
B664338:L664338:{c.instructions+=2;NFSU2_TR(0x664338);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66433d:{NFSU2_TR(0x66433d);
if(r1(R+518)){{goto L6644a3;}}
}
B664343:L664343:{c.instructions+=2;NFSU2_TR(0x664343);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664348:{NFSU2_TR(0x664348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664530;}}
}
B66434e:L66434e:{c.instructions+=2;NFSU2_TR(0x66434e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B664350:{NFSU2_TR(0x664350);
if(r1(R+518)){{goto L664470;}}
}
B664356:L664356:{c.instructions+=6;NFSU2_TR(0x664356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664359:{NFSU2_TR(0x664359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66435b:{NFSU2_TR(0x66435b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66435f:{NFSU2_TR(0x66435f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664360:{NFSU2_TR(0x664360);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664363:{NFSU2_TR(0x664363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664368ull));
TAIL_STATIC(0x663a32u,663);
}
B664368:L664368:{c.instructions+=3;NFSU2_TR(0x664368);
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
B66436a:{NFSU2_TR(0x66436a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66436d:{NFSU2_TR(0x66436d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664530;}}
}
B664373:L664373:{c.instructions+=6;NFSU2_TR(0x664373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664376:{NFSU2_TR(0x664376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B664378:{NFSU2_TR(0x664378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66437a:{NFSU2_TR(0x66437a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66437b:{NFSU2_TR(0x66437b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66437e:{NFSU2_TR(0x66437e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664381ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664381:L664381:{c.instructions+=4;NFSU2_TR(0x664381);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664384:{NFSU2_TR(0x664384);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B664387:{NFSU2_TR(0x664387);
{u32 ea_=u32(u32(8003160u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B66438d:{NFSU2_TR(0x66438d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664392ull));
TAIL_STATIC(0x75dd28u,75d);
}
B664392:L664392:{c.instructions+=5;NFSU2_TR(0x664392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664395:{NFSU2_TR(0x664395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B664398:{NFSU2_TR(0x664398);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66439c:{NFSU2_TR(0x66439c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66439f:{NFSU2_TR(0x66439f);
if(r1(R+518)){{goto L66446b;}}
}
B6643a5:L6643a5:{c.instructions+=4;NFSU2_TR(0x6643a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6643a8:{NFSU2_TR(0x6643a8);
w4(R+8,u32(r2(R+0)));
}
B6643ab:{NFSU2_TR(0x6643ab);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
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
B6643ae:{NFSU2_TR(0x6643ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6643bc;}}
}
B6643b0:L6643b0:{c.instructions+=2;NFSU2_TR(0x6643b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6643b7:{NFSU2_TR(0x6643b7);
{goto L664530;}
}
B6643bc:L6643bc:{c.instructions+=3;NFSU2_TR(0x6643bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6643c0:{NFSU2_TR(0x6643c0);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6643c5:{NFSU2_TR(0x6643c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664414;}}
}
B6643c7:L6643c7:{c.instructions+=9;NFSU2_TR(0x6643c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6643ca:{NFSU2_TR(0x6643ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6643cd:{NFSU2_TR(0x6643cd);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6643cf:{NFSU2_TR(0x6643cf);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6643d1:{NFSU2_TR(0x6643d1);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B6643d3:{NFSU2_TR(0x6643d3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6643d5:{NFSU2_TR(0x6643d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6643d8:{NFSU2_TR(0x6643d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6643db:{NFSU2_TR(0x6643db);
{goto L6643e3;}
}
B6643dd:L6643dd:{c.instructions+=2;NFSU2_TR(0x6643dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6643e0:{NFSU2_TR(0x6643e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6643e3:L6643e3:{c.instructions+=8;NFSU2_TR(0x6643e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6643e4:{NFSU2_TR(0x6643e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6643e8:{NFSU2_TR(0x6643e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6643e9:{NFSU2_TR(0x6643e9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B6643ec:{NFSU2_TR(0x6643ec);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6643f0:{NFSU2_TR(0x6643f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6643f3:{NFSU2_TR(0x6643f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6643f4:{NFSU2_TR(0x6643f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6643f9ull));
TAIL_STATIC(0x65ae25u,65a);
}
B6643f9:L6643f9:{c.instructions+=3;NFSU2_TR(0x6643f9);
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
B6643fb:{NFSU2_TR(0x6643fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6643fe:{NFSU2_TR(0x6643fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664530;}}
}
B664404:L664404:{c.instructions+=4;NFSU2_TR(0x664404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664407:{NFSU2_TR(0x664407);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66440b:{NFSU2_TR(0x66440b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B66440f:{NFSU2_TR(0x66440f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6643ddu);}goto L6643dd;}}
}
B664411:L664411:{c.instructions+=1;NFSU2_TR(0x664411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664414:L664414:{c.instructions+=4;NFSU2_TR(0x664414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664418:{NFSU2_TR(0x664418);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66441c:{NFSU2_TR(0x66441c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B664421:{NFSU2_TR(0x664421);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66446b;}}
}
B664423:L664423:{c.instructions+=8;NFSU2_TR(0x664423);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664425:{NFSU2_TR(0x664425);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664428:{NFSU2_TR(0x664428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66442b:{NFSU2_TR(0x66442b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66442e:{NFSU2_TR(0x66442e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664430:{NFSU2_TR(0x664430);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664433:{NFSU2_TR(0x664433);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B664436:{NFSU2_TR(0x664436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664439:L664439:{c.instructions+=8;NFSU2_TR(0x664439);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66443c:{NFSU2_TR(0x66443c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B66443f:{NFSU2_TR(0x66443f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B664443:{NFSU2_TR(0x664443);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664446:{NFSU2_TR(0x664446);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66444a:{NFSU2_TR(0x66444a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66444d:{NFSU2_TR(0x66444d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66444e:{NFSU2_TR(0x66444e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664453ull));
TAIL_STATIC(0x65ae25u,65a);
}
B664453:L664453:{c.instructions+=3;NFSU2_TR(0x664453);
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
B664455:{NFSU2_TR(0x664455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664458:{NFSU2_TR(0x664458);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664530;}}
}
B66445e:L66445e:{c.instructions+=4;NFSU2_TR(0x66445e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664461:{NFSU2_TR(0x664461);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664465:{NFSU2_TR(0x664465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B664469:{NFSU2_TR(0x664469);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664439u);}goto L664439;}}
}
B66446b:L66446b:{c.instructions+=2;NFSU2_TR(0x66446b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66446e:{NFSU2_TR(0x66446e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B664470:L664470:{c.instructions+=5;NFSU2_TR(0x664470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B664473:{NFSU2_TR(0x664473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B664475:{NFSU2_TR(0x664475);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B664478:{NFSU2_TR(0x664478);
u8 U[8];
__builtin_memmove((U+4),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+4)));
w2(U+6,u16(u32(r2(R+0))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B66447b:{NFSU2_TR(0x66447b);
if(r1(R+518)){{goto L664530;}}
}
B664481:L664481:{c.instructions+=8;NFSU2_TR(0x664481);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664484:{NFSU2_TR(0x664484);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B664488:{NFSU2_TR(0x664488);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66448b:{NFSU2_TR(0x66448b);
w4(R+0,u32(r2(R+0)));
}
B66448e:{NFSU2_TR(0x66448e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664491:{NFSU2_TR(0x664491);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B664495:{NFSU2_TR(0x664495);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664496:{NFSU2_TR(0x664496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66449bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6642f2u);}goto L6642f2;}
}
B66449b:L66449b:{c.instructions+=2;NFSU2_TR(0x66449b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66449e:{NFSU2_TR(0x66449e);
{goto L664530;}
}
B6644a3:L6644a3:{c.instructions+=6;NFSU2_TR(0x6644a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6644a6:{NFSU2_TR(0x6644a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6644ac:{NFSU2_TR(0x6644ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6644af:{NFSU2_TR(0x6644af);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6644b2:{NFSU2_TR(0x6644b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6644b5:{NFSU2_TR(0x6644b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6644c5;}}
}
B6644b7:L6644b7:{c.instructions+=5;NFSU2_TR(0x6644b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6644ba:{NFSU2_TR(0x6644ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6644bd:{NFSU2_TR(0x6644bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6644c0:{NFSU2_TR(0x6644c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6644c3:{NFSU2_TR(0x6644c3);
{goto L6644e6;}
}
B6644c5:L6644c5:{c.instructions+=10;NFSU2_TR(0x6644c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6644cb:{NFSU2_TR(0x6644cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6644ce:{NFSU2_TR(0x6644ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6644d1:{NFSU2_TR(0x6644d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6644d4:{NFSU2_TR(0x6644d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B6644d7:{NFSU2_TR(0x6644d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6644da:{NFSU2_TR(0x6644da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6644dd:{NFSU2_TR(0x6644dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6644e0:{NFSU2_TR(0x6644e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6644e3:{NFSU2_TR(0x6644e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6644e6:L6644e6:{c.instructions+=6;NFSU2_TR(0x6644e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6644e9:{NFSU2_TR(0x6644e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6644ec:{NFSU2_TR(0x6644ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6644ef:{NFSU2_TR(0x6644ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6644f2:{NFSU2_TR(0x6644f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6644f4:{NFSU2_TR(0x6644f4);
if(r1(R+518)){{goto L664517;}}
}
B6644f6:L6644f6:{c.instructions+=2;NFSU2_TR(0x6644f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6644f9:{NFSU2_TR(0x6644f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664506;}}
}
B6644fb:L6644fb:{c.instructions+=4;NFSU2_TR(0x6644fb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B6644fe:{NFSU2_TR(0x6644fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664501:{NFSU2_TR(0x664501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664504:{NFSU2_TR(0x664504);
{goto L664513;}
}
B664506:L664506:{c.instructions+=2;NFSU2_TR(0x664506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664507:{NFSU2_TR(0x664507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66450cull));
TAIL_STATIC(0x661221u,661);
}
B66450c:L66450c:{c.instructions+=3;NFSU2_TR(0x66450c);
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
B66450e:{NFSU2_TR(0x66450e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664511:{NFSU2_TR(0x664511);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664530;}}
}
B664513:L664513:{c.instructions+=1;NFSU2_TR(0x664513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664517:L664517:{c.instructions+=2;NFSU2_TR(0x664517);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B66451a:{NFSU2_TR(0x66451a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664522;}}
}
B66451c:L66451c:{c.instructions+=2;NFSU2_TR(0x66451c);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B664520:{NFSU2_TR(0x664520);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664530;}}
}
B664522:L664522:{c.instructions+=4;NFSU2_TR(0x664522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B664525:{NFSU2_TR(0x664525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B664527:{NFSU2_TR(0x664527);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664528:{NFSU2_TR(0x664528);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66452bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66452b:L66452b:{c.instructions+=2;NFSU2_TR(0x66452b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66452e:{NFSU2_TR(0x66452e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B664530:L664530:{c.instructions+=1;NFSU2_TR(0x664530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664531:L664531:{c.instructions+=5;NFSU2_TR(0x664531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664534:{NFSU2_TR(0x664534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664535:{NFSU2_TR(0x664535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B664536:{NFSU2_TR(0x664536);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B664537:{NFSU2_TR(0x664537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66453a:L66453a:{c.instructions+=17;NFSU2_TR(0x66453a);
__builtin_memmove((R+28),(R+28),4);
}
B66453c:{NFSU2_TR(0x66453c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66453d:{NFSU2_TR(0x66453d);
__builtin_memmove((R+20),(R+16),4);
}
B66453f:{NFSU2_TR(0x66453f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B664542:{NFSU2_TR(0x664542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664545:{NFSU2_TR(0x664545);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664546:{NFSU2_TR(0x664546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664549:{NFSU2_TR(0x664549);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B66454c:{NFSU2_TR(0x66454c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66454d:{NFSU2_TR(0x66454d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66454f:{NFSU2_TR(0x66454f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B664551:{NFSU2_TR(0x664551);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B664554:{NFSU2_TR(0x664554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664557:{NFSU2_TR(0x664557);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66455b:{NFSU2_TR(0x66455b);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B66455f:{NFSU2_TR(0x66455f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664562:{NFSU2_TR(0x664562);
if(r1(R+518)){{goto L664779;}}
}
B664568:L664568:{c.instructions+=7;NFSU2_TR(0x664568);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664569:{NFSU2_TR(0x664569);
w4(R+24,u32(r2(R+0)));
}
B66456c:{NFSU2_TR(0x66456c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B66456f:{NFSU2_TR(0x66456f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B664572:{NFSU2_TR(0x664572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664575:{NFSU2_TR(0x664575);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66457a:{NFSU2_TR(0x66457a);
if(r1(R+518)){{goto L6646eb;}}
}
B664580:L664580:{c.instructions+=2;NFSU2_TR(0x664580);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664585:{NFSU2_TR(0x664585);
if(r1(R+518)){{goto L6646eb;}}
}
B66458b:L66458b:{c.instructions+=2;NFSU2_TR(0x66458b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664590:{NFSU2_TR(0x664590);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664778;}}
}
B664596:L664596:{c.instructions+=2;NFSU2_TR(0x664596);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B664598:{NFSU2_TR(0x664598);
if(r1(R+518)){{goto L6646b8;}}
}
B66459e:L66459e:{c.instructions+=6;NFSU2_TR(0x66459e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6645a1:{NFSU2_TR(0x6645a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6645a3:{NFSU2_TR(0x6645a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6645a7:{NFSU2_TR(0x6645a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6645a8:{NFSU2_TR(0x6645a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6645ab:{NFSU2_TR(0x6645ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6645b0ull));
TAIL_STATIC(0x663a32u,663);
}
B6645b0:L6645b0:{c.instructions+=3;NFSU2_TR(0x6645b0);
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
B6645b2:{NFSU2_TR(0x6645b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6645b5:{NFSU2_TR(0x6645b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664778;}}
}
B6645bb:L6645bb:{c.instructions+=6;NFSU2_TR(0x6645bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6645be:{NFSU2_TR(0x6645be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6645c0:{NFSU2_TR(0x6645c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6645c2:{NFSU2_TR(0x6645c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6645c3:{NFSU2_TR(0x6645c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6645c6:{NFSU2_TR(0x6645c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6645c9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6645c9:L6645c9:{c.instructions+=4;NFSU2_TR(0x6645c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6645cc:{NFSU2_TR(0x6645cc);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6645cf:{NFSU2_TR(0x6645cf);
{u32 ea_=u32(u32(8003160u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6645d5:{NFSU2_TR(0x6645d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6645daull));
TAIL_STATIC(0x75dd28u,75d);
}
B6645da:L6645da:{c.instructions+=5;NFSU2_TR(0x6645da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6645dd:{NFSU2_TR(0x6645dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6645e0:{NFSU2_TR(0x6645e0);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6645e4:{NFSU2_TR(0x6645e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6645e7:{NFSU2_TR(0x6645e7);
if(r1(R+518)){{goto L6646b3;}}
}
B6645ed:L6645ed:{c.instructions+=4;NFSU2_TR(0x6645ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6645f0:{NFSU2_TR(0x6645f0);
w4(R+8,u32(r2(R+0)));
}
B6645f3:{NFSU2_TR(0x6645f3);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
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
B6645f6:{NFSU2_TR(0x6645f6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664604;}}
}
B6645f8:L6645f8:{c.instructions+=2;NFSU2_TR(0x6645f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6645ff:{NFSU2_TR(0x6645ff);
{goto L664778;}
}
B664604:L664604:{c.instructions+=3;NFSU2_TR(0x664604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664608:{NFSU2_TR(0x664608);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66460d:{NFSU2_TR(0x66460d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66465c;}}
}
B66460f:L66460f:{c.instructions+=9;NFSU2_TR(0x66460f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664612:{NFSU2_TR(0x664612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664615:{NFSU2_TR(0x664615);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B664617:{NFSU2_TR(0x664617);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B664619:{NFSU2_TR(0x664619);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B66461b:{NFSU2_TR(0x66461b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66461d:{NFSU2_TR(0x66461d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664620:{NFSU2_TR(0x664620);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664623:{NFSU2_TR(0x664623);
{goto L66462b;}
}
B664625:L664625:{c.instructions+=2;NFSU2_TR(0x664625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664628:{NFSU2_TR(0x664628);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66462b:L66462b:{c.instructions+=8;NFSU2_TR(0x66462b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66462c:{NFSU2_TR(0x66462c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B664630:{NFSU2_TR(0x664630);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664631:{NFSU2_TR(0x664631);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B664634:{NFSU2_TR(0x664634);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B664638:{NFSU2_TR(0x664638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66463b:{NFSU2_TR(0x66463b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66463c:{NFSU2_TR(0x66463c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664641ull));
TAIL_STATIC(0x65ae25u,65a);
}
B664641:L664641:{c.instructions+=3;NFSU2_TR(0x664641);
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
B664643:{NFSU2_TR(0x664643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664646:{NFSU2_TR(0x664646);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664778;}}
}
B66464c:L66464c:{c.instructions+=4;NFSU2_TR(0x66464c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66464f:{NFSU2_TR(0x66464f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664653:{NFSU2_TR(0x664653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B664657:{NFSU2_TR(0x664657);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664625u);}goto L664625;}}
}
B664659:L664659:{c.instructions+=1;NFSU2_TR(0x664659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66465c:L66465c:{c.instructions+=4;NFSU2_TR(0x66465c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664660:{NFSU2_TR(0x664660);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664664:{NFSU2_TR(0x664664);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B664669:{NFSU2_TR(0x664669);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6646b3;}}
}
B66466b:L66466b:{c.instructions+=8;NFSU2_TR(0x66466b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66466d:{NFSU2_TR(0x66466d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664670:{NFSU2_TR(0x664670);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B664673:{NFSU2_TR(0x664673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664676:{NFSU2_TR(0x664676);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664678:{NFSU2_TR(0x664678);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66467b:{NFSU2_TR(0x66467b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66467e:{NFSU2_TR(0x66467e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664681:L664681:{c.instructions+=8;NFSU2_TR(0x664681);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664684:{NFSU2_TR(0x664684);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B664687:{NFSU2_TR(0x664687);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66468b:{NFSU2_TR(0x66468b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66468e:{NFSU2_TR(0x66468e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B664692:{NFSU2_TR(0x664692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664695:{NFSU2_TR(0x664695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664696:{NFSU2_TR(0x664696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66469bull));
TAIL_STATIC(0x65ae25u,65a);
}
B66469b:L66469b:{c.instructions+=3;NFSU2_TR(0x66469b);
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
B66469d:{NFSU2_TR(0x66469d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6646a0:{NFSU2_TR(0x6646a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664778;}}
}
B6646a6:L6646a6:{c.instructions+=4;NFSU2_TR(0x6646a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6646a9:{NFSU2_TR(0x6646a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6646ad:{NFSU2_TR(0x6646ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+6))));
}
B6646b1:{NFSU2_TR(0x6646b1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664681u);}goto L664681;}}
}
B6646b3:L6646b3:{c.instructions+=2;NFSU2_TR(0x6646b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6646b6:{NFSU2_TR(0x6646b6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6646b8:L6646b8:{c.instructions+=5;NFSU2_TR(0x6646b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6646bb:{NFSU2_TR(0x6646bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+0))));
}
B6646bd:{NFSU2_TR(0x6646bd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6646c0:{NFSU2_TR(0x6646c0);
u8 U[8];
__builtin_memmove((U+4),(R+28),2);
w1(R+512,u8((r2(R+0))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+4)));
w2(U+6,u16(u32(r2(R+0))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6646c3:{NFSU2_TR(0x6646c3);
if(r1(R+518)){{goto L664778;}}
}
B6646c9:L6646c9:{c.instructions+=8;NFSU2_TR(0x6646c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6646cc:{NFSU2_TR(0x6646cc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6646d0:{NFSU2_TR(0x6646d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6646d3:{NFSU2_TR(0x6646d3);
w4(R+0,u32(r2(R+0)));
}
B6646d6:{NFSU2_TR(0x6646d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6646d9:{NFSU2_TR(0x6646d9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6646dd:{NFSU2_TR(0x6646dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6646de:{NFSU2_TR(0x6646de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6646e3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66453au);}goto L66453a;}
}
B6646e3:L6646e3:{c.instructions+=2;NFSU2_TR(0x6646e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6646e6:{NFSU2_TR(0x6646e6);
{goto L664778;}
}
B6646eb:L6646eb:{c.instructions+=6;NFSU2_TR(0x6646eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6646ee:{NFSU2_TR(0x6646ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6646f4:{NFSU2_TR(0x6646f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6646f7:{NFSU2_TR(0x6646f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6646fa:{NFSU2_TR(0x6646fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6646fd:{NFSU2_TR(0x6646fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66470d;}}
}
B6646ff:L6646ff:{c.instructions+=5;NFSU2_TR(0x6646ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664702:{NFSU2_TR(0x664702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B664705:{NFSU2_TR(0x664705);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664708:{NFSU2_TR(0x664708);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66470b:{NFSU2_TR(0x66470b);
{goto L66472e;}
}
B66470d:L66470d:{c.instructions+=10;NFSU2_TR(0x66470d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664713:{NFSU2_TR(0x664713);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B664716:{NFSU2_TR(0x664716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664719:{NFSU2_TR(0x664719);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66471c:{NFSU2_TR(0x66471c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66471f:{NFSU2_TR(0x66471f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664722:{NFSU2_TR(0x664722);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664725:{NFSU2_TR(0x664725);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B664728:{NFSU2_TR(0x664728);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66472b:{NFSU2_TR(0x66472b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66472e:L66472e:{c.instructions+=6;NFSU2_TR(0x66472e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664731:{NFSU2_TR(0x664731);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B664734:{NFSU2_TR(0x664734);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B664737:{NFSU2_TR(0x664737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66473a:{NFSU2_TR(0x66473a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66473c:{NFSU2_TR(0x66473c);
if(r1(R+518)){{goto L66475f;}}
}
B66473e:L66473e:{c.instructions+=2;NFSU2_TR(0x66473e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664741:{NFSU2_TR(0x664741);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66474e;}}
}
B664743:L664743:{c.instructions+=4;NFSU2_TR(0x664743);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B664746:{NFSU2_TR(0x664746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664749:{NFSU2_TR(0x664749);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66474c:{NFSU2_TR(0x66474c);
{goto L66475b;}
}
B66474e:L66474e:{c.instructions+=2;NFSU2_TR(0x66474e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66474f:{NFSU2_TR(0x66474f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664754ull));
TAIL_STATIC(0x661313u,661);
}
B664754:L664754:{c.instructions+=3;NFSU2_TR(0x664754);
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
B664756:{NFSU2_TR(0x664756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664759:{NFSU2_TR(0x664759);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664778;}}
}
B66475b:L66475b:{c.instructions+=1;NFSU2_TR(0x66475b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66475f:L66475f:{c.instructions+=2;NFSU2_TR(0x66475f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B664762:{NFSU2_TR(0x664762);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66476a;}}
}
B664764:L664764:{c.instructions+=2;NFSU2_TR(0x664764);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B664768:{NFSU2_TR(0x664768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664778;}}
}
B66476a:L66476a:{c.instructions+=4;NFSU2_TR(0x66476a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66476d:{NFSU2_TR(0x66476d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66476f:{NFSU2_TR(0x66476f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664770:{NFSU2_TR(0x664770);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664773ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664773:L664773:{c.instructions+=2;NFSU2_TR(0x664773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664776:{NFSU2_TR(0x664776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B664778:L664778:{c.instructions+=1;NFSU2_TR(0x664778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664779:L664779:{c.instructions+=5;NFSU2_TR(0x664779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66477c:{NFSU2_TR(0x66477c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66477d:{NFSU2_TR(0x66477d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66477e:{NFSU2_TR(0x66477e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66477f:{NFSU2_TR(0x66477f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664782:L664782:{c.instructions+=13;NFSU2_TR(0x664782);
__builtin_memmove((R+28),(R+28),4);
}
B664784:{NFSU2_TR(0x664784);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664785:{NFSU2_TR(0x664785);
__builtin_memmove((R+20),(R+16),4);
}
B664787:{NFSU2_TR(0x664787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664788:{NFSU2_TR(0x664788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66478c:{NFSU2_TR(0x66478c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66478d:{NFSU2_TR(0x66478d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664790:{NFSU2_TR(0x664790);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B664794:{NFSU2_TR(0x664794);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664797:{NFSU2_TR(0x664797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66479a:{NFSU2_TR(0x66479a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66479d:{NFSU2_TR(0x66479d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6647a0:{NFSU2_TR(0x6647a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6647ae;}}
}
B6647a2:L6647a2:{c.instructions+=2;NFSU2_TR(0x6647a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6647a9:{NFSU2_TR(0x6647a9);
{goto L664a11;}
}
B6647ae:L6647ae:{c.instructions+=6;NFSU2_TR(0x6647ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6647af:{NFSU2_TR(0x6647af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6647b2:{NFSU2_TR(0x6647b2);
__builtin_memmove((R+0),(R+24),4);
}
B6647b4:{NFSU2_TR(0x6647b4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B6647b7:{NFSU2_TR(0x6647b7);
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
B6647b9:{NFSU2_TR(0x6647b9);
if(r1(R+518)){{goto L6647c7;}}
}
B6647bb:L6647bb:{c.instructions+=2;NFSU2_TR(0x6647bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6647c2:{NFSU2_TR(0x6647c2);
{goto L664a10;}
}
B6647c7:L6647c7:{c.instructions+=30;NFSU2_TR(0x6647c7);
__builtin_memmove((R+0),(R+24),4);
}
B6647c9:{NFSU2_TR(0x6647c9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x5ull))));
}
B6647cc:{NFSU2_TR(0x6647cc);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B6647ce:{NFSU2_TR(0x6647ce);
__builtin_memmove((R+4),(R+24),4);
}
B6647d0:{NFSU2_TR(0x6647d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6647d1:{NFSU2_TR(0x6647d1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6647d3:{NFSU2_TR(0x6647d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6647d4:{NFSU2_TR(0x6647d4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6647d7:{NFSU2_TR(0x6647d7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6647da:{NFSU2_TR(0x6647da);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6647dc:{NFSU2_TR(0x6647dc);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B6647de:{NFSU2_TR(0x6647de);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6647e0:{NFSU2_TR(0x6647e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6647e1:{NFSU2_TR(0x6647e1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B6647e4:{NFSU2_TR(0x6647e4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6647e6:{NFSU2_TR(0x6647e6);
__builtin_memmove((R+4),(R+24),4);
}
B6647e8:{NFSU2_TR(0x6647e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6647ec:{NFSU2_TR(0x6647ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6647ef:{NFSU2_TR(0x6647ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6647f5:{NFSU2_TR(0x6647f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6647fb:{NFSU2_TR(0x6647fb);
w4(R+4,u32(~u32(r4(R+4))));
}
B6647fd:{NFSU2_TR(0x6647fd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B664800:{NFSU2_TR(0x664800);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B664803:{NFSU2_TR(0x664803);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B664805:{NFSU2_TR(0x664805);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66480b:{NFSU2_TR(0x66480b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffc7ull))));
}
B66480e:{NFSU2_TR(0x66480e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B664810:{NFSU2_TR(0x664810);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664812:{NFSU2_TR(0x664812);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664818:{NFSU2_TR(0x664818);
if(r1(R+518)){{goto L6649ca;}}
}
B66481e:L66481e:{c.instructions+=5;NFSU2_TR(0x66481e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B664824:{NFSU2_TR(0x664824);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664825:{NFSU2_TR(0x664825);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66482b:{NFSU2_TR(0x66482b);
__builtin_memmove((R+4),(R+12),4);
}
B66482d:{NFSU2_TR(0x66482d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664832ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66403cu);}goto L66403c;}
}
B664832:L664832:{c.instructions+=3;NFSU2_TR(0x664832);
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
B664834:{NFSU2_TR(0x664834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664837:{NFSU2_TR(0x664837);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B66483d:L66483d:{c.instructions+=5;NFSU2_TR(0x66483d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+0),(U+0),4);
}
B664843:{NFSU2_TR(0x664843);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664844:{NFSU2_TR(0x664844);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66484a:{NFSU2_TR(0x66484a);
__builtin_memmove((R+4),(R+12),4);
}
B66484c:{NFSU2_TR(0x66484c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664851ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664197u);}goto L664197;}
}
B664851:L664851:{c.instructions+=3;NFSU2_TR(0x664851);
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
B664853:{NFSU2_TR(0x664853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664856:{NFSU2_TR(0x664856);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B66485c:L66485c:{c.instructions+=2;NFSU2_TR(0x66485c);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B664863:{NFSU2_TR(0x664863);
if(r1(R+518)){{goto L664893;}}
}
B664865:L664865:{c.instructions+=4;NFSU2_TR(0x664865);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66486b:{NFSU2_TR(0x66486b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66486d:{NFSU2_TR(0x66486d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66486e:{NFSU2_TR(0x66486e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664871ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664871:L664871:{c.instructions+=3;NFSU2_TR(0x664871);
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
B664873:{NFSU2_TR(0x664873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664876:{NFSU2_TR(0x664876);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B66487c:L66487c:{c.instructions+=4;NFSU2_TR(0x66487c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664882:{NFSU2_TR(0x664882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B664884:{NFSU2_TR(0x664884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664885:{NFSU2_TR(0x664885);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664888ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664888:L664888:{c.instructions+=3;NFSU2_TR(0x664888);
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
B66488a:{NFSU2_TR(0x66488a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66488d:{NFSU2_TR(0x66488d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B664893:L664893:{c.instructions+=2;NFSU2_TR(0x664893);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x118ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B66489a:{NFSU2_TR(0x66489a);
if(r1(R+518)){{goto L6648ca;}}
}
B66489c:L66489c:{c.instructions+=4;NFSU2_TR(0x66489c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6648a2:{NFSU2_TR(0x6648a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6648a4:{NFSU2_TR(0x6648a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6648a5:{NFSU2_TR(0x6648a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6648a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6648a8:L6648a8:{c.instructions+=3;NFSU2_TR(0x6648a8);
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
B6648aa:{NFSU2_TR(0x6648aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6648ad:{NFSU2_TR(0x6648ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B6648b3:L6648b3:{c.instructions+=4;NFSU2_TR(0x6648b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6648b9:{NFSU2_TR(0x6648b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6648bb:{NFSU2_TR(0x6648bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6648bc:{NFSU2_TR(0x6648bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6648bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6648bf:L6648bf:{c.instructions+=3;NFSU2_TR(0x6648bf);
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
B6648c1:{NFSU2_TR(0x6648c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6648c4:{NFSU2_TR(0x6648c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B6648ca:L6648ca:{c.instructions+=2;NFSU2_TR(0x6648ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
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
B6648d1:{NFSU2_TR(0x6648d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6649b7;}}
}
B6648d7:L6648d7:{c.instructions+=4;NFSU2_TR(0x6648d7);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6648d9:{NFSU2_TR(0x6648d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6648db:{NFSU2_TR(0x6648db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6648dc:{NFSU2_TR(0x6648dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6648df:L6648df:{c.instructions+=1;NFSU2_TR(0x6648df);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6648e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6648dfu);}goto L6648df;}
}
B6648e1:L6648e1:{c.instructions+=5;NFSU2_TR(0x6648e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6648e5:{NFSU2_TR(0x6648e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6648e8:{NFSU2_TR(0x6648e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6648eb:{NFSU2_TR(0x6648eb);
__builtin_memmove((R+8),(R+4),4);
}
B6648ed:{NFSU2_TR(0x6648ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6648f0:L6648f0:{c.instructions+=1;NFSU2_TR(0x6648f0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6648f2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6648f0u);}goto L6648f0;}
}
B6648f2:L6648f2:{c.instructions+=2;NFSU2_TR(0x6648f2);
__builtin_memmove((R+4),(R+8),4);
}
B6648f4:{NFSU2_TR(0x6648f4);
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
B6648f7:L6648f7:{c.instructions+=1;NFSU2_TR(0x6648f7);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6648f9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6648f7u);}goto L6648f7;}
}
B6648f9:L6648f9:{c.instructions+=4;NFSU2_TR(0x6648f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6648fc:{NFSU2_TR(0x6648fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6648fe:{NFSU2_TR(0x6648fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6648ff:{NFSU2_TR(0x6648ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664905ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664905:L664905:{c.instructions+=3;NFSU2_TR(0x664905);
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
B664907:{NFSU2_TR(0x664907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66490a:{NFSU2_TR(0x66490a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B664910:L664910:{c.instructions+=5;NFSU2_TR(0x664910);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664912:{NFSU2_TR(0x664912);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B664913:{NFSU2_TR(0x664913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664914:{NFSU2_TR(0x664914);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664917:{NFSU2_TR(0x664917);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66491cull));
TAIL_STATIC(0x671aedu,671);
}
B66491c:L66491c:{c.instructions+=3;NFSU2_TR(0x66491c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66491e:{NFSU2_TR(0x66491e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
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
B664921:{NFSU2_TR(0x664921);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66493c;}}
}
B664923:L664923:{c.instructions+=4;NFSU2_TR(0x664923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B664925:{NFSU2_TR(0x664925);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664926:{NFSU2_TR(0x664926);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664927:{NFSU2_TR(0x664927);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66492dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66492d:L66492d:{c.instructions+=3;NFSU2_TR(0x66492d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66492f:{NFSU2_TR(0x66492f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664930:{NFSU2_TR(0x664930);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664936ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664936:L664936:{c.instructions+=3;NFSU2_TR(0x664936);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B664937:{NFSU2_TR(0x664937);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
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
B66493a:{NFSU2_TR(0x66493a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664923u);}goto L664923;}}
}
B66493c:L66493c:{c.instructions+=2;NFSU2_TR(0x66493c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66493e:{NFSU2_TR(0x66493e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664943ull));
TAIL_STATIC(0x671aedu,671);
}
B664943:L664943:{c.instructions+=6;NFSU2_TR(0x664943);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664946:{NFSU2_TR(0x664946);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B664948:{NFSU2_TR(0x664948);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66494e:{NFSU2_TR(0x66494e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66494f:{NFSU2_TR(0x66494f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664950:{NFSU2_TR(0x664950);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664956ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B664956:L664956:{c.instructions+=3;NFSU2_TR(0x664956);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B664958:{NFSU2_TR(0x664958);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66495b:{NFSU2_TR(0x66495b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L664975;}}
}
B66495d:L66495d:{c.instructions+=3;NFSU2_TR(0x66495d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66495f:{NFSU2_TR(0x66495f);
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
B664961:{NFSU2_TR(0x664961);
if(r1(R+518)){{goto L664a0f;}}
}
B664967:L664967:{c.instructions+=3;NFSU2_TR(0x664967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B664969:{NFSU2_TR(0x664969);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66496a:{NFSU2_TR(0x66496a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66496dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66496d:L66496d:{c.instructions+=2;NFSU2_TR(0x66496d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B664970:{NFSU2_TR(0x664970);
{goto L664a0f;}
}
B664975:L664975:{c.instructions+=4;NFSU2_TR(0x664975);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B664979:{NFSU2_TR(0x664979);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66497d:{NFSU2_TR(0x66497d);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B664981:{NFSU2_TR(0x664981);
if(r1(R+518)){{goto L6649b1;}}
}
B664983:L664983:{c.instructions+=14;NFSU2_TR(0x664983);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B664987:{NFSU2_TR(0x664987);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B664989:{NFSU2_TR(0x664989);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66498d:{NFSU2_TR(0x66498d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664990:{NFSU2_TR(0x664990);
w4(R+0,u32(r2(R+0)));
}
B664993:{NFSU2_TR(0x664993);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B664996:{NFSU2_TR(0x664996);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B664999:{NFSU2_TR(0x664999);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66499e:{NFSU2_TR(0x66499e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66499f:{NFSU2_TR(0x66499f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6649a0:{NFSU2_TR(0x6649a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6649a2:{NFSU2_TR(0x6649a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6649a3:{NFSU2_TR(0x6649a3);
__builtin_memmove((R+4),(R+12),4);
}
B6649a5:{NFSU2_TR(0x6649a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6649aaull));
TAIL_STATIC(0x65ae25u,65a);
}
B6649aa:L6649aa:{c.instructions+=3;NFSU2_TR(0x6649aa);
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
B6649ac:{NFSU2_TR(0x6649ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6649af:{NFSU2_TR(0x6649af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B6649b1:L6649b1:{c.instructions+=1;NFSU2_TR(0x6649b1);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(u16(0xffffull))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6649b7:L6649b7:{c.instructions+=4;NFSU2_TR(0x6649b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6649bd:{NFSU2_TR(0x6649bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6649bf:{NFSU2_TR(0x6649bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6649c0:{NFSU2_TR(0x6649c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6649c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6649c3:L6649c3:{c.instructions+=3;NFSU2_TR(0x6649c3);
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
B6649c5:{NFSU2_TR(0x6649c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6649c8:{NFSU2_TR(0x6649c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664a0f;}}
}
B6649ca:L6649ca:{c.instructions+=4;NFSU2_TR(0x6649ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6649cc:{NFSU2_TR(0x6649cc);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6649ce:{NFSU2_TR(0x6649ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6649cf:{NFSU2_TR(0x6649cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6649d2:L6649d2:{c.instructions+=1;NFSU2_TR(0x6649d2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6649d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6649d2u);}goto L6649d2;}
}
B6649d4:L6649d4:{c.instructions+=5;NFSU2_TR(0x6649d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6649d8:{NFSU2_TR(0x6649d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6649db:{NFSU2_TR(0x6649db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6649de:{NFSU2_TR(0x6649de);
__builtin_memmove((R+8),(R+4),4);
}
B6649e0:{NFSU2_TR(0x6649e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6649e3:L6649e3:{c.instructions+=1;NFSU2_TR(0x6649e3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6649e5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6649e3u);}goto L6649e3;}
}
B6649e5:L6649e5:{c.instructions+=2;NFSU2_TR(0x6649e5);
__builtin_memmove((R+4),(R+8),4);
}
B6649e7:{NFSU2_TR(0x6649e7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6649ea:L6649ea:{c.instructions+=1;NFSU2_TR(0x6649ea);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6649ec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6649eau);}goto L6649ea;}
}
B6649ec:L6649ec:{c.instructions+=3;NFSU2_TR(0x6649ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6649ef:{NFSU2_TR(0x6649ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6649f1:{NFSU2_TR(0x6649f1);
if(r1(R+518)){{goto L6649f8;}}
}
B6649f3:L6649f3:{c.instructions+=2;NFSU2_TR(0x6649f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6649f6:{NFSU2_TR(0x6649f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6649f8:L6649f8:{c.instructions+=3;NFSU2_TR(0x6649f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6649fb:{NFSU2_TR(0x6649fb);
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
B6649fd:{NFSU2_TR(0x6649fd);
if(r1(R+518)){{goto L664a08;}}
}
B6649ff:L6649ff:{c.instructions+=3;NFSU2_TR(0x6649ff);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B664a02:{NFSU2_TR(0x664a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664a05:{NFSU2_TR(0x664a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664a08:L664a08:{c.instructions+=1;NFSU2_TR(0x664a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B664a0f:L664a0f:{c.instructions+=1;NFSU2_TR(0x664a0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664a10:L664a10:{c.instructions+=1;NFSU2_TR(0x664a10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664a11:L664a11:{c.instructions+=6;NFSU2_TR(0x664a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664a14:{NFSU2_TR(0x664a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664a17:{NFSU2_TR(0x664a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664a1a:{NFSU2_TR(0x664a1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B664a1b:{NFSU2_TR(0x664a1b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B664a1c:{NFSU2_TR(0x664a1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664a1f:L664a1f:{c.instructions+=18;NFSU2_TR(0x664a1f);
__builtin_memmove((R+28),(R+28),4);
}
B664a21:{NFSU2_TR(0x664a21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664a22:{NFSU2_TR(0x664a22);
__builtin_memmove((R+20),(R+16),4);
}
B664a24:{NFSU2_TR(0x664a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B664a27:{NFSU2_TR(0x664a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664a2a:{NFSU2_TR(0x664a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664a2e:{NFSU2_TR(0x664a2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B664a31:{NFSU2_TR(0x664a31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664a32:{NFSU2_TR(0x664a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664a35:{NFSU2_TR(0x664a35);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B664a38:{NFSU2_TR(0x664a38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664a39:{NFSU2_TR(0x664a39);
__builtin_memmove((R+24),(R+4),4);
}
B664a3b:{NFSU2_TR(0x664a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B664a3e:{NFSU2_TR(0x664a3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664a3f:{NFSU2_TR(0x664a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B664a42:{NFSU2_TR(0x664a42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664a45:{NFSU2_TR(0x664a45);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B664a49:{NFSU2_TR(0x664a49);
if(r1(R+518)){{goto L664a64;}}
}
B664a4b:L664a4b:{c.instructions+=5;NFSU2_TR(0x664a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664a4e:{NFSU2_TR(0x664a4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B664a51:{NFSU2_TR(0x664a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664a54:{NFSU2_TR(0x664a54);
__builtin_memmove((R+8),(R+4),4);
}
B664a56:{NFSU2_TR(0x664a56);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B664a59:L664a59:{c.instructions+=1;NFSU2_TR(0x664a59);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L664a5b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664a59u);}goto L664a59;}
}
B664a5b:L664a5b:{c.instructions+=2;NFSU2_TR(0x664a5b);
__builtin_memmove((R+4),(R+8),4);
}
B664a5d:{NFSU2_TR(0x664a5d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B664a60:L664a60:{c.instructions+=1;NFSU2_TR(0x664a60);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L664a62;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664a60u);}goto L664a60;}
}
B664a62:L664a62:{c.instructions+=1;NFSU2_TR(0x664a62);
{goto L664a9d;}
}
B664a64:L664a64:{c.instructions+=2;NFSU2_TR(0x664a64);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664a68:{NFSU2_TR(0x664a68);
if(r1(R+518)){{goto L664a9d;}}
}
B664a6a:L664a6a:{c.instructions+=4;NFSU2_TR(0x664a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664a6d:{NFSU2_TR(0x664a6d);
__builtin_memmove((R+4),(R+24),4);
}
B664a6f:{NFSU2_TR(0x664a6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664a72:{NFSU2_TR(0x664a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664a77ull));
TAIL_STATIC(0x663a32u,663);
}
B664a77:L664a77:{c.instructions+=3;NFSU2_TR(0x664a77);
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
B664a79:{NFSU2_TR(0x664a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664a7c:{NFSU2_TR(0x664a7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664ec5;}}
}
B664a82:L664a82:{c.instructions+=4;NFSU2_TR(0x664a82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664a85:{NFSU2_TR(0x664a85);
__builtin_memmove((R+4),(R+24),4);
}
B664a87:{NFSU2_TR(0x664a87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B664a8a:{NFSU2_TR(0x664a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664a8full));
TAIL_STATIC(0x660a42u,660);
}
B664a8f:L664a8f:{c.instructions+=3;NFSU2_TR(0x664a8f);
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
B664a91:{NFSU2_TR(0x664a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664a94:{NFSU2_TR(0x664a94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L664ec5;}}
}
B664a9a:L664a9a:{c.instructions+=1;NFSU2_TR(0x664a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664a9d:L664a9d:{c.instructions+=11;NFSU2_TR(0x664a9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664aa0:{NFSU2_TR(0x664aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B664aa2:{NFSU2_TR(0x664aa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x52ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B664aa6:{NFSU2_TR(0x664aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664aa9:{NFSU2_TR(0x664aa9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B664aac:{NFSU2_TR(0x664aac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b582cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664ab2:{NFSU2_TR(0x664ab2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664ab5:{NFSU2_TR(0x664ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664ab8:{NFSU2_TR(0x664ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664abb:{NFSU2_TR(0x664abb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B664abd:{NFSU2_TR(0x664abd);
if(r1(R+518)){{goto L664cb5;}}
}
B664ac3:L664ac3:{c.instructions+=2;NFSU2_TR(0x664ac3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xf20000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xf20000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xf20000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664ac9:{NFSU2_TR(0x664ac9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664cc6;}}
}
B664acf:L664acf:{c.instructions+=8;NFSU2_TR(0x664acf);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664ad1:{NFSU2_TR(0x664ad1);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B664ad2:{NFSU2_TR(0x664ad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664ad5:{NFSU2_TR(0x664ad5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B664ad6:{NFSU2_TR(0x664ad6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B664ad7:{NFSU2_TR(0x664ad7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B664ad8:{NFSU2_TR(0x664ad8);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B664ad9:{NFSU2_TR(0x664ad9);
if(r1(R+518)){{goto L664bd2;}}
}
B664adf:L664adf:{c.instructions+=2;NFSU2_TR(0x664adf);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B664ae0:{NFSU2_TR(0x664ae0);
if(r1(R+518)){{goto L664ba2;}}
}
B664ae6:L664ae6:{c.instructions+=2;NFSU2_TR(0x664ae6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664ae7:{NFSU2_TR(0x664ae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664cc6;}}
}
B664aed:L664aed:{c.instructions+=3;NFSU2_TR(0x664aed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664af0:{NFSU2_TR(0x664af0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664af3:{NFSU2_TR(0x664af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664b01;}}
}
B664af5:L664af5:{c.instructions+=2;NFSU2_TR(0x664af5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664af7:{NFSU2_TR(0x664af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664afcull));
TAIL_STATIC(0x75dd28u,75d);
}
B664afc:L664afc:{c.instructions+=1;NFSU2_TR(0x664afc);
{goto L664bdc;}
}
B664b01:L664b01:{c.instructions+=2;NFSU2_TR(0x664b01);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664b04:{NFSU2_TR(0x664b04);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664b09;}}
}
B664b06:L664b06:{c.instructions+=2;NFSU2_TR(0x664b06);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664b08:{NFSU2_TR(0x664b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664b09:L664b09:{c.instructions+=2;NFSU2_TR(0x664b09);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664b0b:{NFSU2_TR(0x664b0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664c0c;}}
}
B664b11:L664b11:{c.instructions+=2;NFSU2_TR(0x664b11);
__builtin_memmove((R+24),(R+8),4);
}
B664b13:{NFSU2_TR(0x664b13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664b16:L664b16:{c.instructions+=1;NFSU2_TR(0x664b16);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L664b18;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b16u);}goto L664b16;}
}
B664b18:L664b18:{c.instructions+=1;NFSU2_TR(0x664b18);
{goto L664c0c;}
}
B664b1d:L664b1d:{c.instructions+=4;NFSU2_TR(0x664b1d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b20:{NFSU2_TR(0x664b20);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B664b26:{NFSU2_TR(0x664b26);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B664b2c:{NFSU2_TR(0x664b2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664b31ull));
TAIL_STATIC(0x75dd28u,75d);
}
B664b31:L664b31:{c.instructions+=1;NFSU2_TR(0x664b31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664b34:L664b34:{c.instructions+=5;NFSU2_TR(0x664b34);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b37:{NFSU2_TR(0x664b37);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B664b39:{NFSU2_TR(0x664b39);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664b3b:{NFSU2_TR(0x664b3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664b3e:{NFSU2_TR(0x664b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664b47;}}
}
B664b40:L664b40:{c.instructions+=2;NFSU2_TR(0x664b40);
__builtin_memmove((R+12),(R+24),4);
}
B664b42:{NFSU2_TR(0x664b42);
{goto L664c60;}
}
B664b47:L664b47:{c.instructions+=5;NFSU2_TR(0x664b47);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b4a:{NFSU2_TR(0x664b4a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B664b4c:{NFSU2_TR(0x664b4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664b4e:{NFSU2_TR(0x664b4e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B664b51:{NFSU2_TR(0x664b51);
if(r1(R+514)){{goto L664c4a;}}
}
B664b57:L664b57:{c.instructions+=2;NFSU2_TR(0x664b57);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B664b59:{NFSU2_TR(0x664b59);
{goto L664c60;}
}
B664b5e:L664b5e:{c.instructions+=4;NFSU2_TR(0x664b5e);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b61:{NFSU2_TR(0x664b61);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B664b67:{NFSU2_TR(0x664b67);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B664b6d:{NFSU2_TR(0x664b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664b72ull));
TAIL_STATIC(0x75dd28u,75d);
}
B664b72:L664b72:{c.instructions+=1;NFSU2_TR(0x664b72);
__builtin_memmove((R+28),(R+0),4);
}
B664b74:L664b74:{c.instructions+=5;NFSU2_TR(0x664b74);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b77:{NFSU2_TR(0x664b77);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B664b79:{NFSU2_TR(0x664b79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664b7b:{NFSU2_TR(0x664b7b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664b7e:{NFSU2_TR(0x664b7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664b87;}}
}
B664b80:L664b80:{c.instructions+=2;NFSU2_TR(0x664b80);
__builtin_memmove((R+0),(R+24),4);
}
B664b82:{NFSU2_TR(0x664b82);
{goto L664ca0;}
}
B664b87:L664b87:{c.instructions+=5;NFSU2_TR(0x664b87);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664b8a:{NFSU2_TR(0x664b8a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B664b90:{NFSU2_TR(0x664b90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664b92:{NFSU2_TR(0x664b92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B664b95:{NFSU2_TR(0x664b95);
if(r1(R+514)){{goto L664c8c;}}
}
B664b9b:L664b9b:{c.instructions+=2;NFSU2_TR(0x664b9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664b9d:{NFSU2_TR(0x664b9d);
{goto L664ca0;}
}
B664ba2:L664ba2:{c.instructions+=3;NFSU2_TR(0x664ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664ba5:{NFSU2_TR(0x664ba5);
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
B664ba8:{NFSU2_TR(0x664ba8);
if(r1(R+518)){{goto L664bda;}}
}
B664baa:L664baa:{c.instructions+=4;NFSU2_TR(0x664baa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664bac:{NFSU2_TR(0x664bac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664bad:{NFSU2_TR(0x664bad);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664baf:{NFSU2_TR(0x664baf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664bb3;}}
}
B664bb1:L664bb1:{c.instructions+=1;NFSU2_TR(0x664bb1);
__builtin_memmove((R+24),(R+4),4);
}
B664bb3:L664bb3:{c.instructions+=3;NFSU2_TR(0x664bb3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664bb5:{NFSU2_TR(0x664bb5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664bb7:{NFSU2_TR(0x664bb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664c0c;}}
}
B664bb9:L664bb9:{c.instructions+=3;NFSU2_TR(0x664bb9);
__builtin_memmove((R+4),(R+8),4);
}
B664bbb:{NFSU2_TR(0x664bbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B664bbe:{NFSU2_TR(0x664bbe);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B664bc0:L664bc0:{c.instructions+=6;NFSU2_TR(0x664bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B664bc3:{NFSU2_TR(0x664bc3);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664bc7:{NFSU2_TR(0x664bc7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B664bc8:{NFSU2_TR(0x664bc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B664bca:{NFSU2_TR(0x664bca);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664bce:{NFSU2_TR(0x664bce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664bc0u);}goto L664bc0;}}
}
B664bd0:L664bd0:{c.instructions+=1;NFSU2_TR(0x664bd0);
{goto L664c0c;}
}
B664bd2:L664bd2:{c.instructions+=3;NFSU2_TR(0x664bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664bd5:{NFSU2_TR(0x664bd5);
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
B664bd8:{NFSU2_TR(0x664bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664be6;}}
}
B664bda:L664bda:{c.instructions+=1;NFSU2_TR(0x664bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B664bdc:L664bdc:{c.instructions+=3;NFSU2_TR(0x664bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664bdf:{NFSU2_TR(0x664bdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B664be1:{NFSU2_TR(0x664be1);
{goto L664ec5;}
}
B664be6:L664be6:{c.instructions+=4;NFSU2_TR(0x664be6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664be8:{NFSU2_TR(0x664be8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664be9:{NFSU2_TR(0x664be9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664beb:{NFSU2_TR(0x664beb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664bef;}}
}
B664bed:L664bed:{c.instructions+=1;NFSU2_TR(0x664bed);
__builtin_memmove((R+24),(R+4),4);
}
B664bef:L664bef:{c.instructions+=3;NFSU2_TR(0x664bef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B664bf1:{NFSU2_TR(0x664bf1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664bf3:{NFSU2_TR(0x664bf3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664c0c;}}
}
B664bf5:L664bf5:{c.instructions+=3;NFSU2_TR(0x664bf5);
__builtin_memmove((R+4),(R+8),4);
}
B664bf7:{NFSU2_TR(0x664bf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B664bfa:{NFSU2_TR(0x664bfa);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B664bfc:L664bfc:{c.instructions+=6;NFSU2_TR(0x664bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B664bff:{NFSU2_TR(0x664bff);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664c03:{NFSU2_TR(0x664c03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B664c04:{NFSU2_TR(0x664c04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B664c06:{NFSU2_TR(0x664c06);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664c0a:{NFSU2_TR(0x664c0a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664bfcu);}goto L664bfc;}}
}
B664c0c:L664c0c:{c.instructions+=8;NFSU2_TR(0x664c0c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c12:{NFSU2_TR(0x664c12);
w4(R+24,u32(0xffull));
}
B664c17:{NFSU2_TR(0x664c17);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c1a:{NFSU2_TR(0x664c1a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B664c1c:{NFSU2_TR(0x664c1c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c22:{NFSU2_TR(0x664c22);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664c24:{NFSU2_TR(0x664c24);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664c27:{NFSU2_TR(0x664c27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664c31;}}
}
B664c29:L664c29:{c.instructions+=2;NFSU2_TR(0x664c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664c2c:{NFSU2_TR(0x664c2c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b34u);}goto L664b34;}
}
B664c31:L664c31:{c.instructions+=5;NFSU2_TR(0x664c31);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c34:{NFSU2_TR(0x664c34);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B664c36:{NFSU2_TR(0x664c36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664c38:{NFSU2_TR(0x664c38);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B664c3b:{NFSU2_TR(0x664c3b);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b1du);}goto L664b1d;}}
}
B664c41:L664c41:{c.instructions+=2;NFSU2_TR(0x664c41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664c45:{NFSU2_TR(0x664c45);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b34u);}goto L664b34;}
}
B664c4a:L664c4a:{c.instructions+=4;NFSU2_TR(0x664c4a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c4d:{NFSU2_TR(0x664c4d);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B664c53:{NFSU2_TR(0x664c53);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B664c59:{NFSU2_TR(0x664c59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664c5eull));
TAIL_STATIC(0x75dd28u,75d);
}
B664c5e:L664c5e:{c.instructions+=1;NFSU2_TR(0x664c5e);
__builtin_memmove((R+12),(R+0),4);
}
B664c60:L664c60:{c.instructions+=5;NFSU2_TR(0x664c60);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c63:{NFSU2_TR(0x664c63);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B664c65:{NFSU2_TR(0x664c65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664c67:{NFSU2_TR(0x664c67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B664c6a:{NFSU2_TR(0x664c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664c75;}}
}
B664c6c:L664c6c:{c.instructions+=3;NFSU2_TR(0x664c6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B664c6e:{NFSU2_TR(0x664c6e);
__builtin_memmove((R+28),(R+24),4);
}
B664c70:{NFSU2_TR(0x664c70);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b74u);}goto L664b74;}
}
B664c75:L664c75:{c.instructions+=5;NFSU2_TR(0x664c75);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c78:{NFSU2_TR(0x664c78);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B664c7a:{NFSU2_TR(0x664c7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B664c7c:{NFSU2_TR(0x664c7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B664c7f:{NFSU2_TR(0x664c7f);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b5eu);}goto L664b5e;}}
}
B664c85:L664c85:{c.instructions+=2;NFSU2_TR(0x664c85);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B664c87:{NFSU2_TR(0x664c87);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664b74u);}goto L664b74;}
}
B664c8c:L664c8c:{c.instructions+=4;NFSU2_TR(0x664c8c);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664c8f:{NFSU2_TR(0x664c8f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B664c95:{NFSU2_TR(0x664c95);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B664c9b:{NFSU2_TR(0x664c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664ca0ull));
TAIL_STATIC(0x75dd28u,75d);
}
B664ca0:L664ca0:{c.instructions+=7;NFSU2_TR(0x664ca0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B664ca3:{NFSU2_TR(0x664ca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B664ca6:{NFSU2_TR(0x664ca6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B664ca9:{NFSU2_TR(0x664ca9);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B664cab:{NFSU2_TR(0x664cab);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B664cae:{NFSU2_TR(0x664cae);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664cb0:{NFSU2_TR(0x664cb0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664bdcu);}goto L664bdc;}
}
B664cb5:L664cb5:{c.instructions+=2;NFSU2_TR(0x664cb5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B664cb6:{NFSU2_TR(0x664cb6);
if(r1(R+518)){{goto L664e51;}}
}
B664cbc:L664cbc:{c.instructions+=2;NFSU2_TR(0x664cbc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B664cbd:{NFSU2_TR(0x664cbd);
if(r1(R+518)){{goto L664d5b;}}
}
B664cc3:L664cc3:{c.instructions+=2;NFSU2_TR(0x664cc3);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664cc4:{NFSU2_TR(0x664cc4);
if(r1(R+518)){{goto L664cd2;}}
}
B664cc6:L664cc6:{c.instructions+=2;NFSU2_TR(0x664cc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B664ccd:{NFSU2_TR(0x664ccd);
{goto L664ec5;}
}
B664cd2:L664cd2:{c.instructions+=4;NFSU2_TR(0x664cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664cd5:{NFSU2_TR(0x664cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664cd8:{NFSU2_TR(0x664cd8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664cdb:{NFSU2_TR(0x664cdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664d05;}}
}
B664cdd:L664cdd:{c.instructions+=4;NFSU2_TR(0x664cdd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664cdf:{NFSU2_TR(0x664cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664ce0:{NFSU2_TR(0x664ce0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664ce2:{NFSU2_TR(0x664ce2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664ce6;}}
}
B664ce4:L664ce4:{c.instructions+=1;NFSU2_TR(0x664ce4);
__builtin_memmove((R+24),(R+0),4);
}
B664ce6:L664ce6:{c.instructions+=2;NFSU2_TR(0x664ce6);
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
B664ce8:{NFSU2_TR(0x664ce8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664cee:L664cee:{c.instructions+=3;NFSU2_TR(0x664cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664cf1:{NFSU2_TR(0x664cf1);
__builtin_memmove((R+4),(R+8),4);
}
B664cf3:{NFSU2_TR(0x664cf3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B664cf5:L664cf5:{c.instructions+=5;NFSU2_TR(0x664cf5);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664cf8:{NFSU2_TR(0x664cf8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664cfa:{NFSU2_TR(0x664cfa);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664cfd:{NFSU2_TR(0x664cfd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664cfe:{NFSU2_TR(0x664cfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664cf5u);}goto L664cf5;}}
}
B664d00:L664d00:{c.instructions+=1;NFSU2_TR(0x664d00);
{goto L664ec5;}
}
B664d05:L664d05:{c.instructions+=4;NFSU2_TR(0x664d05);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664d07:{NFSU2_TR(0x664d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664d08:{NFSU2_TR(0x664d08);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664d0a:{NFSU2_TR(0x664d0a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664d0e;}}
}
B664d0c:L664d0c:{c.instructions+=1;NFSU2_TR(0x664d0c);
__builtin_memmove((R+0),(R+24),4);
}
B664d0e:L664d0e:{c.instructions+=3;NFSU2_TR(0x664d0e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664d10:{NFSU2_TR(0x664d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664d13:{NFSU2_TR(0x664d13);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664d18;}}
}
B664d15:L664d15:{c.instructions+=1;NFSU2_TR(0x664d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664d18:L664d18:{c.instructions+=2;NFSU2_TR(0x664d18);
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
B664d1a:{NFSU2_TR(0x664d1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664d20:L664d20:{c.instructions+=5;NFSU2_TR(0x664d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664d23:{NFSU2_TR(0x664d23);
__builtin_memmove((R+24),(R+4),4);
}
B664d25:{NFSU2_TR(0x664d25);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B664d28:{NFSU2_TR(0x664d28);
__builtin_memmove((R+12),(R+8),4);
}
B664d2a:{NFSU2_TR(0x664d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664d2d:L664d2d:{c.instructions+=2;NFSU2_TR(0x664d2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664d31:{NFSU2_TR(0x664d31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664d4c;}}
}
B664d33:L664d33:{c.instructions+=4;NFSU2_TR(0x664d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664d36:{NFSU2_TR(0x664d36);
__builtin_memmove((R+4),(R+28),4);
}
B664d38:{NFSU2_TR(0x664d38);
__builtin_memmove((R+0),(R+12),4);
}
B664d3a:{NFSU2_TR(0x664d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664d3d:L664d3d:{c.instructions+=6;NFSU2_TR(0x664d3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B664d3f:{NFSU2_TR(0x664d3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B664d41:{NFSU2_TR(0x664d41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664d44:{NFSU2_TR(0x664d44);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B664d47:{NFSU2_TR(0x664d47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664d4a:{NFSU2_TR(0x664d4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664d3du);}goto L664d3d;}}
}
B664d4c:L664d4c:{c.instructions+=4;NFSU2_TR(0x664d4c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B664d4f:{NFSU2_TR(0x664d4f);
w1(R+512,carry<u32>(r4(R+12),r4(R+24)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B664d51:{NFSU2_TR(0x664d51);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
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
B664d54:{NFSU2_TR(0x664d54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664d2du);}goto L664d2d;}}
}
B664d56:L664d56:{c.instructions+=1;NFSU2_TR(0x664d56);
{goto L664ec5;}
}
B664d5b:L664d5b:{c.instructions+=4;NFSU2_TR(0x664d5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B664d5e:{NFSU2_TR(0x664d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664d61:{NFSU2_TR(0x664d61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664d64:{NFSU2_TR(0x664d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664e01;}}
}
B664d6a:L664d6a:{c.instructions+=2;NFSU2_TR(0x664d6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664d6c:{NFSU2_TR(0x664d6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664dda;}}
}
B664d6e:L664d6e:{c.instructions+=2;NFSU2_TR(0x664d6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b5830ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664d74:{NFSU2_TR(0x664d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664de2;}}
}
B664d76:L664d76:{c.instructions+=2;NFSU2_TR(0x664d76);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7b5834ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B664d7d:{NFSU2_TR(0x664d7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664de2;}}
}
B664d7f:L664d7f:{c.instructions+=34;NFSU2_TR(0x664d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B664d81:{NFSU2_TR(0x664d81);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B664d87:{NFSU2_TR(0x664d87);
__builtin_memmove((R+4),(R+0),4);
}
B664d89:{NFSU2_TR(0x664d89);
u8 U[46];
w4(U+38,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B664d8c:{NFSU2_TR(0x664d8c);
w4(R+4,u32(r1(R+4)));
}
B664d8f:{NFSU2_TR(0x664d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664d92:{NFSU2_TR(0x664d92);
__builtin_memmove((R+4),(R+0),4);
}
B664d94:{NFSU2_TR(0x664d94);
u8 U[46];
w4(U+38,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+42),(R+4),4);
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+38))));
w1(U+24,u8((r4(U+38))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+38))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+42),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+38))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B664d97:{NFSU2_TR(0x664d97);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664d9a:{NFSU2_TR(0x664d9a);
w4(R+4,u32(r1(R+4)));
}
B664d9d:{NFSU2_TR(0x664d9d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B664d9f:{NFSU2_TR(0x664d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664da2:{NFSU2_TR(0x664da2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664da5:{NFSU2_TR(0x664da5);
w4(R+4,u32(r1(R+0)));
}
B664da8:{NFSU2_TR(0x664da8);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664dab:{NFSU2_TR(0x664dab);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664dae:{NFSU2_TR(0x664dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664db1:{NFSU2_TR(0x664db1);
u8 U[48];
w4(U+40,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+0),4);
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B664db4:{NFSU2_TR(0x664db4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B664db6:{NFSU2_TR(0x664db6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664db9:{NFSU2_TR(0x664db9);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664dbc:{NFSU2_TR(0x664dbc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664dbf:{NFSU2_TR(0x664dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664dc2:{NFSU2_TR(0x664dc2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B664dc4:{NFSU2_TR(0x664dc4);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664dc7:{NFSU2_TR(0x664dc7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664dca:{NFSU2_TR(0x664dca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B664dcc:{NFSU2_TR(0x664dcc);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664dcf:{NFSU2_TR(0x664dcf);
u8 U[40];
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
}
B664dd0:{NFSU2_TR(0x664dd0);
u8 U[40];
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
}
B664dd1:{NFSU2_TR(0x664dd1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B664dd3:{NFSU2_TR(0x664dd3);
u8 U[40];
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
}
B664dd4:{NFSU2_TR(0x664dd4);
u8 U[40];
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
}
B664dd5:{NFSU2_TR(0x664dd5);
{goto L664ec5;}
}
B664dda:L664dda:{c.instructions+=2;NFSU2_TR(0x664dda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664ddd:{NFSU2_TR(0x664ddd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664de2;}}
}
B664ddf:L664ddf:{c.instructions+=2;NFSU2_TR(0x664ddf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664de1:{NFSU2_TR(0x664de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664de2:L664de2:{c.instructions+=2;NFSU2_TR(0x664de2);
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
B664de4:{NFSU2_TR(0x664de4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664dea:L664dea:{c.instructions+=3;NFSU2_TR(0x664dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664ded:{NFSU2_TR(0x664ded);
__builtin_memmove((R+4),(R+8),4);
}
B664def:{NFSU2_TR(0x664def);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B664df1:L664df1:{c.instructions+=5;NFSU2_TR(0x664df1);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664df4:{NFSU2_TR(0x664df4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664df6:{NFSU2_TR(0x664df6);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664df9:{NFSU2_TR(0x664df9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664dfa:{NFSU2_TR(0x664dfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664df1u);}goto L664df1;}}
}
B664dfc:L664dfc:{c.instructions+=1;NFSU2_TR(0x664dfc);
{goto L664ec5;}
}
B664e01:L664e01:{c.instructions+=5;NFSU2_TR(0x664e01);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664e03:{NFSU2_TR(0x664e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664e04:{NFSU2_TR(0x664e04);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e06:{NFSU2_TR(0x664e06);
__builtin_memmove((R+0),(R+28),4);
}
B664e08:{NFSU2_TR(0x664e08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664e0c;}}
}
B664e0a:L664e0a:{c.instructions+=1;NFSU2_TR(0x664e0a);
__builtin_memmove((R+0),(R+24),4);
}
B664e0c:L664e0c:{c.instructions+=3;NFSU2_TR(0x664e0c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e0e:{NFSU2_TR(0x664e0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664e11:{NFSU2_TR(0x664e11);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664e16;}}
}
B664e13:L664e13:{c.instructions+=1;NFSU2_TR(0x664e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664e16:L664e16:{c.instructions+=2;NFSU2_TR(0x664e16);
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
B664e18:{NFSU2_TR(0x664e18);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664e1e:L664e1e:{c.instructions+=5;NFSU2_TR(0x664e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B664e21:{NFSU2_TR(0x664e21);
__builtin_memmove((R+28),(R+4),4);
}
B664e23:{NFSU2_TR(0x664e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B664e26:{NFSU2_TR(0x664e26);
__builtin_memmove((R+24),(R+8),4);
}
B664e28:{NFSU2_TR(0x664e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664e2b:L664e2b:{c.instructions+=2;NFSU2_TR(0x664e2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664e2f:{NFSU2_TR(0x664e2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664e45;}}
}
B664e31:L664e31:{c.instructions+=3;NFSU2_TR(0x664e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664e34:{NFSU2_TR(0x664e34);
__builtin_memmove((R+4),(R+12),4);
}
B664e36:{NFSU2_TR(0x664e36);
__builtin_memmove((R+0),(R+24),4);
}
B664e38:L664e38:{c.instructions+=6;NFSU2_TR(0x664e38);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664e3a:{NFSU2_TR(0x664e3a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664e3d:{NFSU2_TR(0x664e3d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664e3f:{NFSU2_TR(0x664e3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B664e42:{NFSU2_TR(0x664e42);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B664e43:{NFSU2_TR(0x664e43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664e38u);}goto L664e38;}}
}
B664e45:L664e45:{c.instructions+=4;NFSU2_TR(0x664e45);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B664e48:{NFSU2_TR(0x664e48);
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B664e4a:{NFSU2_TR(0x664e4a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B664e4d:{NFSU2_TR(0x664e4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664e2bu);}goto L664e2b;}}
}
B664e4f:L664e4f:{c.instructions+=1;NFSU2_TR(0x664e4f);
{goto L664ec5;}
}
B664e51:L664e51:{c.instructions+=4;NFSU2_TR(0x664e51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664e54:{NFSU2_TR(0x664e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664e57:{NFSU2_TR(0x664e57);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e5a:{NFSU2_TR(0x664e5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L664e7d;}}
}
B664e5c:L664e5c:{c.instructions+=4;NFSU2_TR(0x664e5c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664e5e:{NFSU2_TR(0x664e5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664e5f:{NFSU2_TR(0x664e5f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e61:{NFSU2_TR(0x664e61);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664e65;}}
}
B664e63:L664e63:{c.instructions+=1;NFSU2_TR(0x664e63);
__builtin_memmove((R+24),(R+0),4);
}
B664e65:L664e65:{c.instructions+=2;NFSU2_TR(0x664e65);
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
B664e67:{NFSU2_TR(0x664e67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664e69:L664e69:{c.instructions+=3;NFSU2_TR(0x664e69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664e6c:{NFSU2_TR(0x664e6c);
__builtin_memmove((R+4),(R+8),4);
}
B664e6e:{NFSU2_TR(0x664e6e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B664e70:L664e70:{c.instructions+=5;NFSU2_TR(0x664e70);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664e73:{NFSU2_TR(0x664e73);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664e75:{NFSU2_TR(0x664e75);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664e78:{NFSU2_TR(0x664e78);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B664e79:{NFSU2_TR(0x664e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664e70u);}goto L664e70;}}
}
B664e7b:L664e7b:{c.instructions+=1;NFSU2_TR(0x664e7b);
{goto L664ec5;}
}
B664e7d:L664e7d:{c.instructions+=4;NFSU2_TR(0x664e7d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664e7f:{NFSU2_TR(0x664e7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664e80:{NFSU2_TR(0x664e80);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e82:{NFSU2_TR(0x664e82);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664e86;}}
}
B664e84:L664e84:{c.instructions+=1;NFSU2_TR(0x664e84);
__builtin_memmove((R+0),(R+24),4);
}
B664e86:L664e86:{c.instructions+=3;NFSU2_TR(0x664e86);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B664e88:{NFSU2_TR(0x664e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664e8b:{NFSU2_TR(0x664e8b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L664e90;}}
}
B664e8d:L664e8d:{c.instructions+=1;NFSU2_TR(0x664e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664e90:L664e90:{c.instructions+=2;NFSU2_TR(0x664e90);
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
B664e92:{NFSU2_TR(0x664e92);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ec5;}}
}
B664e94:L664e94:{c.instructions+=5;NFSU2_TR(0x664e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664e97:{NFSU2_TR(0x664e97);
__builtin_memmove((R+24),(R+4),4);
}
B664e99:{NFSU2_TR(0x664e99);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B664e9c:{NFSU2_TR(0x664e9c);
__builtin_memmove((R+12),(R+8),4);
}
B664e9e:{NFSU2_TR(0x664e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664ea1:L664ea1:{c.instructions+=2;NFSU2_TR(0x664ea1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664ea5:{NFSU2_TR(0x664ea5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L664ebb;}}
}
B664ea7:L664ea7:{c.instructions+=3;NFSU2_TR(0x664ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B664eaa:{NFSU2_TR(0x664eaa);
__builtin_memmove((R+4),(R+28),4);
}
B664eac:{NFSU2_TR(0x664eac);
__builtin_memmove((R+0),(R+12),4);
}
B664eae:L664eae:{c.instructions+=6;NFSU2_TR(0x664eae);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B664eb0:{NFSU2_TR(0x664eb0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664eb3:{NFSU2_TR(0x664eb3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B664eb5:{NFSU2_TR(0x664eb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B664eb8:{NFSU2_TR(0x664eb8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B664eb9:{NFSU2_TR(0x664eb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664eaeu);}goto L664eae;}}
}
B664ebb:L664ebb:{c.instructions+=4;NFSU2_TR(0x664ebb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B664ebe:{NFSU2_TR(0x664ebe);
w1(R+512,carry<u32>(r4(R+12),r4(R+24)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B664ec0:{NFSU2_TR(0x664ec0);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B664ec3:{NFSU2_TR(0x664ec3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664ea1u);}goto L664ea1;}}
}
B664ec5:L664ec5:{c.instructions+=6;NFSU2_TR(0x664ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664ec8:{NFSU2_TR(0x664ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664ec9:{NFSU2_TR(0x664ec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664eca:{NFSU2_TR(0x664eca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B664ecb:{NFSU2_TR(0x664ecb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B664ecc:{NFSU2_TR(0x664ecc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664ecf:L664ecf:{c.instructions+=14;NFSU2_TR(0x664ecf);
__builtin_memmove((R+0),(R+4),4);
}
B664ed1:{NFSU2_TR(0x664ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664ed5:{NFSU2_TR(0x664ed5);
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
B664ed7:{NFSU2_TR(0x664ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664eda:{NFSU2_TR(0x664eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664edd:{NFSU2_TR(0x664edd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B664edf:{NFSU2_TR(0x664edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664ee2:{NFSU2_TR(0x664ee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B664ee9:{NFSU2_TR(0x664ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664eec:{NFSU2_TR(0x664eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664eef:{NFSU2_TR(0x664eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664ef2:{NFSU2_TR(0x664ef2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B664ef6:{NFSU2_TR(0x664ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664ef9:{NFSU2_TR(0x664ef9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664efa:L664efa:{c.instructions+=5;NFSU2_TR(0x664efa);
__builtin_memmove((R+28),(R+28),4);
}
B664efc:{NFSU2_TR(0x664efc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664efd:{NFSU2_TR(0x664efd);
__builtin_memmove((R+24),(R+4),4);
}
B664eff:{NFSU2_TR(0x664eff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664f03:{NFSU2_TR(0x664f03);
if(r1(R+518)){{goto L664f28;}}
}
B664f05:L664f05:{c.instructions+=1;NFSU2_TR(0x664f05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f06:L664f06:{c.instructions+=6;NFSU2_TR(0x664f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B664f09:{NFSU2_TR(0x664f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B664f0c:{NFSU2_TR(0x664f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B664f0f:{NFSU2_TR(0x664f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664f13:{NFSU2_TR(0x664f13);
__builtin_memmove((R+4),(R+28),4);
}
B664f15:{NFSU2_TR(0x664f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664efau);}goto L664efa;}
}
B664f1a:L664f1a:{c.instructions+=2;NFSU2_TR(0x664f1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f1b:{NFSU2_TR(0x664f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f20ull));
TAIL_STATIC(0x575630u,575);
}
B664f20:L664f20:{c.instructions+=3;NFSU2_TR(0x664f20);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B664f24:{NFSU2_TR(0x664f24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664f25:{NFSU2_TR(0x664f25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664f06u);}goto L664f06;}}
}
B664f27:L664f27:{c.instructions+=1;NFSU2_TR(0x664f27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664f28:L664f28:{c.instructions+=3;NFSU2_TR(0x664f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B664f2b:{NFSU2_TR(0x664f2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664f2d:{NFSU2_TR(0x664f2d);
if(r1(R+518)){{goto L664f3a;}}
}
B664f2f:L664f2f:{c.instructions+=2;NFSU2_TR(0x664f2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f31:{NFSU2_TR(0x664f31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f36ull));
TAIL_STATIC(0x6424e3u,642);
}
B664f36:L664f36:{c.instructions+=1;NFSU2_TR(0x664f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664f3a:L664f3a:{c.instructions+=3;NFSU2_TR(0x664f3a);
__builtin_memmove((R+4),(R+24),4);
}
B664f3c:{NFSU2_TR(0x664f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664f3d:{NFSU2_TR(0x664f3d);
TAIL_STATIC(0x663e90u,663);
}
B664f42:L664f42:{c.instructions+=6;NFSU2_TR(0x664f42);
__builtin_memmove((R+28),(R+28),4);
}
B664f44:{NFSU2_TR(0x664f44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f45:{NFSU2_TR(0x664f45);
__builtin_memmove((R+20),(R+16),4);
}
B664f47:{NFSU2_TR(0x664f47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f48:{NFSU2_TR(0x664f48);
__builtin_memmove((R+24),(R+4),4);
}
B664f4a:{NFSU2_TR(0x664f4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x664efau);}goto L664efa;}
}
B664f4f:L664f4f:{c.instructions+=2;NFSU2_TR(0x664f4f);
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
B664f53:{NFSU2_TR(0x664f53);
if(r1(R+518)){{goto L664f5c;}}
}
B664f55:L664f55:{c.instructions+=2;NFSU2_TR(0x664f55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f56:{NFSU2_TR(0x664f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f5bull));
TAIL_STATIC(0x575630u,575);
}
B664f5b:L664f5b:{c.instructions+=1;NFSU2_TR(0x664f5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664f5c:L664f5c:{c.instructions+=4;NFSU2_TR(0x664f5c);
__builtin_memmove((R+0),(R+24),4);
}
B664f5e:{NFSU2_TR(0x664f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664f5f:{NFSU2_TR(0x664f5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B664f60:{NFSU2_TR(0x664f60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664f63:L664f63:{c.instructions+=7;NFSU2_TR(0x664f63);
__builtin_memmove((R+28),(R+28),4);
}
B664f65:{NFSU2_TR(0x664f65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f66:{NFSU2_TR(0x664f66);
__builtin_memmove((R+20),(R+16),4);
}
B664f68:{NFSU2_TR(0x664f68);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B664f6c:{NFSU2_TR(0x664f6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f6d:{NFSU2_TR(0x664f6d);
__builtin_memmove((R+28),(R+4),4);
}
B664f6f:{NFSU2_TR(0x664f6f);
if(r1(R+518)){{goto L664f96;}}
}
B664f71:L664f71:{c.instructions+=7;NFSU2_TR(0x664f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f72:{NFSU2_TR(0x664f72);
u8 U[4];
w4(U+0,u32(0x663f15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f77:{NFSU2_TR(0x664f77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B664f7a:{NFSU2_TR(0x664f7a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B664f7c:{NFSU2_TR(0x664f7c);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f7e:{NFSU2_TR(0x664f7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f7f:{NFSU2_TR(0x664f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f84ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B664f84:L664f84:{c.instructions+=2;NFSU2_TR(0x664f84);
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
B664f88:{NFSU2_TR(0x664f88);
if(r1(R+518)){{goto L664f91;}}
}
B664f8a:L664f8a:{c.instructions+=2;NFSU2_TR(0x664f8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664f8b:{NFSU2_TR(0x664f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f90ull));
TAIL_STATIC(0x575630u,575);
}
B664f90:L664f90:{c.instructions+=1;NFSU2_TR(0x664f90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664f91:L664f91:{c.instructions+=3;NFSU2_TR(0x664f91);
__builtin_memmove((R+0),(R+24),4);
}
B664f93:{NFSU2_TR(0x664f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B664f94:{NFSU2_TR(0x664f94);
{goto L664fac;}
}
B664f96:L664f96:{c.instructions+=2;NFSU2_TR(0x664f96);
__builtin_memmove((R+4),(R+28),4);
}
B664f98:{NFSU2_TR(0x664f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664f9dull));
TAIL_STATIC(0x663f15u,663);
}
B664f9d:L664f9d:{c.instructions+=2;NFSU2_TR(0x664f9d);
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
B664fa1:{NFSU2_TR(0x664fa1);
if(r1(R+518)){{goto L664faa;}}
}
B664fa3:L664fa3:{c.instructions+=2;NFSU2_TR(0x664fa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fa4:{NFSU2_TR(0x664fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664fa9ull));
TAIL_STATIC(0x575630u,575);
}
B664fa9:L664fa9:{c.instructions+=1;NFSU2_TR(0x664fa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664faa:L664faa:{c.instructions+=1;NFSU2_TR(0x664faa);
__builtin_memmove((R+0),(R+28),4);
}
B664fac:L664fac:{c.instructions+=3;NFSU2_TR(0x664fac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B664fad:{NFSU2_TR(0x664fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B664fae:{NFSU2_TR(0x664fae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B664fb1:L664fb1:{c.instructions+=12;NFSU2_TR(0x664fb1);
__builtin_memmove((R+28),(R+28),4);
}
B664fb3:{NFSU2_TR(0x664fb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fb4:{NFSU2_TR(0x664fb4);
__builtin_memmove((R+20),(R+16),4);
}
B664fb6:{NFSU2_TR(0x664fb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fb7:{NFSU2_TR(0x664fb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B664fbb:{NFSU2_TR(0x664fbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fbc:{NFSU2_TR(0x664fbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B664fc0:{NFSU2_TR(0x664fc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fc1:{NFSU2_TR(0x664fc1);
__builtin_memmove((R+24),(R+4),4);
}
B664fc3:{NFSU2_TR(0x664fc3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B664fc7:{NFSU2_TR(0x664fc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fc8:{NFSU2_TR(0x664fc8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x665023u,665);}
}
B664fca:L664fca:{c.instructions+=6;NFSU2_TR(0x664fca);
w4(R+28,u32(r2(R+12)));
}
B664fcd:{NFSU2_TR(0x664fcd);
__builtin_memmove((R+0),(R+28),4);
}
B664fcf:{NFSU2_TR(0x664fcf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B664fd2:{NFSU2_TR(0x664fd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B664fd5:{NFSU2_TR(0x664fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fd6:{NFSU2_TR(0x664fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664fdbull));
TAIL_STATIC(0x575620u,575);
}
B664fdb:L664fdb:{c.instructions+=3;NFSU2_TR(0x664fdb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B664fdd:{NFSU2_TR(0x664fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B664fde:{NFSU2_TR(0x664fde);
if(r1(R+518)){{goto L664ffb;}}
}
B664fe0:L664fe0:{c.instructions+=7;NFSU2_TR(0x664fe0);
u8 U[4];
w4(U+0,u32(0x663ec5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fe5:{NFSU2_TR(0x664fe5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fe6:{NFSU2_TR(0x664fe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B664fe9:{NFSU2_TR(0x664fe9);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664feb:{NFSU2_TR(0x664feb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B664fec:{NFSU2_TR(0x664fec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B664fee:{NFSU2_TR(0x664fee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x664ff3ull));
TAIL_STATIC(0x401650u,401);
}
B664ff3:L664ff3:{c.instructions+=3;NFSU2_TR(0x664ff3);
__builtin_memmove((R+28),(R+12),4);
}
B664ff5:{NFSU2_TR(0x664ff5);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B664ff9:{NFSU2_TR(0x664ff9);
{goto L664ffd;}
}
B664ffb:L664ffb:{c.instructions+=1;NFSU2_TR(0x664ffb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B664ffd:L664ffd:{c.instructions+=2;NFSU2_TR(0x664ffd);
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
B664fff:{NFSU2_TR(0x664fff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66500au,665);}
TAIL_STATIC(0x665001u,665);
}
XIT:NFSU2_TR_EXIT(0x664,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
