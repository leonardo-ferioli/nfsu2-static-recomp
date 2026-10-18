#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x417,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x417,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_417(u8* __restrict R,Cpu& c);
u32 page_417(Cpu& c){return body_417(c.regs.data(),c);}
__attribute__((noinline)) u32 body_417(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x417002:goto L417002;
case 0x417007:c.instructions+=10;goto B417007;
case 0x41700e:c.instructions+=9;goto B41700e;
case 0x417012:c.instructions+=8;goto B417012;
case 0x417016:c.instructions+=7;goto B417016;
case 0x41701c:c.instructions+=6;goto B41701c;
case 0x417022:c.instructions+=5;goto B417022;
case 0x417023:c.instructions+=4;goto B417023;
case 0x417024:c.instructions+=3;goto B417024;
case 0x417029:c.instructions+=2;goto B417029;
case 0x41702c:c.instructions+=1;goto B41702c;
case 0x417031:goto L417031;
case 0x417037:c.instructions+=3;goto B417037;
case 0x417039:c.instructions+=2;goto B417039;
case 0x41703c:c.instructions+=1;goto B41703c;
case 0x41703e:goto L41703e;
case 0x417044:goto L417044;
case 0x41704a:c.instructions+=13;goto B41704a;
case 0x41704d:c.instructions+=12;goto B41704d;
case 0x417054:c.instructions+=11;goto B417054;
case 0x417058:c.instructions+=10;goto B417058;
case 0x41705a:c.instructions+=9;goto B41705a;
case 0x41705e:c.instructions+=8;goto B41705e;
case 0x417064:c.instructions+=7;goto B417064;
case 0x417067:c.instructions+=6;goto B417067;
case 0x417068:c.instructions+=5;goto B417068;
case 0x41706a:c.instructions+=4;goto B41706a;
case 0x41706d:c.instructions+=3;goto B41706d;
case 0x41706f:c.instructions+=2;goto B41706f;
case 0x417073:c.instructions+=1;goto B417073;
case 0x417075:goto L417075;
case 0x41707b:c.instructions+=6;goto B41707b;
case 0x41707d:c.instructions+=5;goto B41707d;
case 0x417083:c.instructions+=4;goto B417083;
case 0x417085:c.instructions+=3;goto B417085;
case 0x417087:c.instructions+=2;goto B417087;
case 0x41708a:c.instructions+=1;goto B41708a;
case 0x41708c:goto L41708c;
case 0x417091:c.instructions+=1;goto B417091;
case 0x417093:goto L417093;
case 0x417095:goto L417095;
case 0x41709a:goto L41709a;
case 0x41709c:c.instructions+=1;goto B41709c;
case 0x41709e:goto L41709e;
case 0x4170a1:c.instructions+=1;goto B4170a1;
case 0x4170a6:goto L4170a6;
case 0x4170ac:c.instructions+=3;goto B4170ac;
case 0x4170ae:c.instructions+=2;goto B4170ae;
case 0x4170b1:c.instructions+=1;goto B4170b1;
case 0x4170b3:goto L4170b3;
case 0x4170b7:c.instructions+=2;goto B4170b7;
case 0x4170b9:c.instructions+=1;goto B4170b9;
case 0x4170bb:goto L4170bb;
case 0x4170c2:c.instructions+=1;goto B4170c2;
case 0x4170c8:goto L4170c8;
case 0x4170cc:c.instructions+=2;goto B4170cc;
case 0x4170ce:c.instructions+=1;goto B4170ce;
case 0x4170d0:goto L4170d0;
case 0x4170d5:c.instructions+=2;goto B4170d5;
case 0x4170d9:c.instructions+=1;goto B4170d9;
case 0x4170db:goto L4170db;
case 0x4170e1:c.instructions+=2;goto B4170e1;
case 0x4170e8:c.instructions+=1;goto B4170e8;
case 0x4170ec:goto L4170ec;
case 0x4170ef:c.instructions+=1;goto B4170ef;
case 0x4170f4:goto L4170f4;
case 0x4170f7:c.instructions+=1;goto B4170f7;
case 0x4170fc:goto L4170fc;
case 0x4170fe:c.instructions+=1;goto B4170fe;
case 0x417100:goto L417100;
case 0x417106:c.instructions+=9;goto B417106;
case 0x41710c:c.instructions+=8;goto B41710c;
case 0x41710e:c.instructions+=7;goto B41710e;
case 0x417112:c.instructions+=6;goto B417112;
case 0x417116:c.instructions+=5;goto B417116;
case 0x41711c:c.instructions+=4;goto B41711c;
case 0x417120:c.instructions+=3;goto B417120;
case 0x417122:c.instructions+=2;goto B417122;
case 0x417125:c.instructions+=1;goto B417125;
case 0x41712b:goto L41712b;
case 0x417130:c.instructions+=5;goto B417130;
case 0x417134:c.instructions+=4;goto B417134;
case 0x41713b:c.instructions+=3;goto B41713b;
case 0x41713d:c.instructions+=2;goto B41713d;
case 0x417141:c.instructions+=1;goto B417141;
case 0x417143:goto L417143;
case 0x41714a:c.instructions+=1;goto B41714a;
case 0x41714e:goto L41714e;
case 0x417152:c.instructions+=2;goto B417152;
case 0x417154:c.instructions+=1;goto B417154;
case 0x417156:goto L417156;
case 0x41715e:goto L41715e;
case 0x417161:c.instructions+=1;goto B417161;
case 0x417166:goto L417166;
case 0x417168:c.instructions+=1;goto B417168;
case 0x41716a:goto L41716a;
case 0x41716f:c.instructions+=8;goto B41716f;
case 0x417175:c.instructions+=7;goto B417175;
case 0x417179:c.instructions+=6;goto B417179;
case 0x41717d:c.instructions+=5;goto B41717d;
case 0x417183:c.instructions+=4;goto B417183;
case 0x417187:c.instructions+=3;goto B417187;
case 0x417189:c.instructions+=2;goto B417189;
case 0x41718c:c.instructions+=1;goto B41718c;
case 0x417192:goto L417192;
case 0x417198:c.instructions+=6;goto B417198;
case 0x41719e:c.instructions+=5;goto B41719e;
case 0x4171a2:c.instructions+=4;goto B4171a2;
case 0x4171a4:c.instructions+=3;goto B4171a4;
case 0x4171a9:c.instructions+=2;goto B4171a9;
case 0x4171ae:c.instructions+=1;goto B4171ae;
case 0x4171b3:goto L4171b3;
case 0x4171b7:c.instructions+=3;goto B4171b7;
case 0x4171be:c.instructions+=2;goto B4171be;
case 0x4171c1:c.instructions+=1;goto B4171c1;
case 0x4171c3:goto L4171c3;
case 0x4171c7:c.instructions+=1;goto B4171c7;
case 0x4171c9:goto L4171c9;
case 0x4171cb:goto L4171cb;
case 0x4171cd:c.instructions+=1;goto B4171cd;
case 0x4171cf:goto L4171cf;
case 0x4171d0:c.instructions+=3;goto B4171d0;
case 0x4171d2:c.instructions+=2;goto B4171d2;
case 0x4171d4:c.instructions+=1;goto B4171d4;
case 0x4171d9:goto L4171d9;
case 0x4171da:c.instructions+=1;goto B4171da;
case 0x4171df:goto L4171df;
case 0x4171e2:c.instructions+=2;goto B4171e2;
case 0x4171e4:c.instructions+=1;goto B4171e4;
case 0x4171e6:goto L4171e6;
case 0x4171eb:goto L4171eb;
case 0x4171ed:goto L4171ed;
case 0x4171f1:c.instructions+=5;goto B4171f1;
case 0x4171f4:c.instructions+=4;goto B4171f4;
case 0x4171f5:c.instructions+=3;goto B4171f5;
case 0x4171f6:c.instructions+=2;goto B4171f6;
case 0x4171f8:c.instructions+=1;goto B4171f8;
case 0x4171fd:goto L4171fd;
case 0x4171ff:c.instructions+=2;goto B4171ff;
case 0x417205:c.instructions+=1;goto B417205;
case 0x417207:goto L417207;
case 0x41720d:c.instructions+=1;goto B41720d;
case 0x41720f:goto L41720f;
case 0x417215:c.instructions+=3;goto B417215;
case 0x417217:c.instructions+=2;goto B417217;
case 0x41721a:c.instructions+=1;goto B41721a;
case 0x41721c:goto L41721c;
case 0x417220:c.instructions+=2;goto B417220;
case 0x417222:c.instructions+=1;goto B417222;
case 0x417224:goto L417224;
case 0x41722a:c.instructions+=1;goto B41722a;
case 0x41722c:goto L41722c;
case 0x417232:goto L417232;
case 0x417236:c.instructions+=7;goto B417236;
case 0x417238:c.instructions+=6;goto B417238;
case 0x41723a:c.instructions+=5;goto B41723a;
case 0x41723c:c.instructions+=4;goto B41723c;
case 0x41723e:c.instructions+=3;goto B41723e;
case 0x417241:c.instructions+=2;goto B417241;
case 0x417243:c.instructions+=1;goto B417243;
case 0x417245:goto L417245;
case 0x41724a:c.instructions+=1;goto B41724a;
case 0x41724c:goto L41724c;
case 0x417251:c.instructions+=1;goto B417251;
case 0x417253:goto L417253;
case 0x417255:c.instructions+=1;goto B417255;
case 0x41725a:goto L41725a;
case 0x41725c:c.instructions+=1;goto B41725c;
case 0x41725e:goto L41725e;
case 0x417264:c.instructions+=1;goto B417264;
case 0x417266:goto L417266;
case 0x417268:c.instructions+=1;goto B417268;
case 0x41726d:goto L41726d;
case 0x41726f:c.instructions+=1;goto B41726f;
case 0x417271:goto L417271;
case 0x417276:c.instructions+=9;goto B417276;
case 0x417278:c.instructions+=8;goto B417278;
case 0x41727c:c.instructions+=7;goto B41727c;
case 0x417280:c.instructions+=6;goto B417280;
case 0x417285:c.instructions+=5;goto B417285;
case 0x41728b:c.instructions+=4;goto B41728b;
case 0x417291:c.instructions+=3;goto B417291;
case 0x417293:c.instructions+=2;goto B417293;
case 0x417296:c.instructions+=1;goto B417296;
case 0x417298:goto L417298;
case 0x41729d:goto L41729d;
case 0x4172a1:c.instructions+=2;goto B4172a1;
case 0x4172a3:c.instructions+=1;goto B4172a3;
case 0x4172a5:goto L4172a5;
case 0x4172a9:c.instructions+=2;goto B4172a9;
case 0x4172ab:c.instructions+=1;goto B4172ab;
case 0x4172ad:goto L4172ad;
case 0x4172af:c.instructions+=1;goto B4172af;
case 0x4172b4:goto L4172b4;
case 0x4172b8:goto L4172b8;
case 0x4172bc:c.instructions+=6;goto B4172bc;
case 0x4172bd:c.instructions+=5;goto B4172bd;
case 0x4172be:c.instructions+=4;goto B4172be;
case 0x4172bf:c.instructions+=3;goto B4172bf;
case 0x4172c0:c.instructions+=2;goto B4172c0;
case 0x4172c3:c.instructions+=1;goto B4172c3;
case 0x4172d0:goto L4172d0;
case 0x4172d3:c.instructions+=12;goto B4172d3;
case 0x4172d9:c.instructions+=11;goto B4172d9;
case 0x4172da:c.instructions+=10;goto B4172da;
case 0x4172dc:c.instructions+=9;goto B4172dc;
case 0x4172e0:c.instructions+=8;goto B4172e0;
case 0x4172e3:c.instructions+=7;goto B4172e3;
case 0x4172e9:c.instructions+=6;goto B4172e9;
case 0x4172eb:c.instructions+=5;goto B4172eb;
case 0x4172ec:c.instructions+=4;goto B4172ec;
case 0x4172ef:c.instructions+=3;goto B4172ef;
case 0x4172f1:c.instructions+=2;goto B4172f1;
case 0x4172f5:c.instructions+=1;goto B4172f5;
case 0x4172f7:goto L4172f7;
case 0x4172fa:c.instructions+=2;goto B4172fa;
case 0x4172fc:c.instructions+=1;goto B4172fc;
case 0x4172fe:goto L4172fe;
case 0x417300:c.instructions+=1;goto B417300;
case 0x417302:goto L417302;
case 0x417304:goto L417304;
case 0x417309:c.instructions+=2;goto B417309;
case 0x41730b:c.instructions+=1;goto B41730b;
case 0x41730d:goto L41730d;
case 0x417312:c.instructions+=2;goto B417312;
case 0x417314:c.instructions+=1;goto B417314;
case 0x417316:goto L417316;
case 0x417318:goto L417318;
case 0x41731d:c.instructions+=2;goto B41731d;
case 0x41731f:c.instructions+=1;goto B41731f;
case 0x417321:goto L417321;
case 0x417326:c.instructions+=2;goto B417326;
case 0x417328:c.instructions+=1;goto B417328;
case 0x41732a:goto L41732a;
case 0x41732c:goto L41732c;
case 0x417331:c.instructions+=2;goto B417331;
case 0x417333:c.instructions+=1;goto B417333;
case 0x417335:goto L417335;
case 0x417337:c.instructions+=2;goto B417337;
case 0x41733d:c.instructions+=1;goto B41733d;
case 0x417342:goto L417342;
case 0x417345:c.instructions+=1;goto B417345;
case 0x417347:goto L417347;
case 0x41734b:c.instructions+=1;goto B41734b;
case 0x417351:goto L417351;
case 0x417353:c.instructions+=1;goto B417353;
case 0x417359:goto L417359;
case 0x41735f:c.instructions+=3;goto B41735f;
case 0x417361:c.instructions+=2;goto B417361;
case 0x417363:c.instructions+=1;goto B417363;
case 0x417365:goto L417365;
case 0x41736b:c.instructions+=3;goto B41736b;
case 0x41736d:c.instructions+=2;goto B41736d;
case 0x417372:c.instructions+=1;goto B417372;
case 0x417374:goto L417374;
case 0x417379:goto L417379;
case 0x41737b:c.instructions+=4;goto B41737b;
case 0x41737c:c.instructions+=3;goto B41737c;
case 0x41737d:c.instructions+=2;goto B41737d;
case 0x41737f:c.instructions+=1;goto B41737f;
case 0x417382:goto L417382;
case 0x417388:c.instructions+=13;goto B417388;
case 0x41738b:c.instructions+=12;goto B41738b;
case 0x417391:c.instructions+=11;goto B417391;
case 0x417393:c.instructions+=10;goto B417393;
case 0x417395:c.instructions+=9;goto B417395;
case 0x417398:c.instructions+=8;goto B417398;
case 0x41739e:c.instructions+=7;goto B41739e;
case 0x41739f:c.instructions+=6;goto B41739f;
case 0x4173a1:c.instructions+=5;goto B4173a1;
case 0x4173a4:c.instructions+=4;goto B4173a4;
case 0x4173ab:c.instructions+=3;goto B4173ab;
case 0x4173ad:c.instructions+=2;goto B4173ad;
case 0x4173b0:c.instructions+=1;goto B4173b0;
case 0x4173b2:goto L4173b2;
case 0x4173b4:c.instructions+=1;goto B4173b4;
case 0x4173b6:goto L4173b6;
case 0x4173b8:goto L4173b8;
case 0x4173be:c.instructions+=10;goto B4173be;
case 0x4173c4:c.instructions+=9;goto B4173c4;
case 0x4173c6:c.instructions+=8;goto B4173c6;
case 0x4173c8:c.instructions+=7;goto B4173c8;
case 0x4173cc:c.instructions+=6;goto B4173cc;
case 0x4173d0:c.instructions+=5;goto B4173d0;
case 0x4173d6:c.instructions+=4;goto B4173d6;
case 0x4173dc:c.instructions+=3;goto B4173dc;
case 0x4173de:c.instructions+=2;goto B4173de;
case 0x4173e1:c.instructions+=1;goto B4173e1;
case 0x4173e7:goto L4173e7;
case 0x4173ed:c.instructions+=4;goto B4173ed;
case 0x4173f7:c.instructions+=3;goto B4173f7;
case 0x4173fc:c.instructions+=2;goto B4173fc;
case 0x4173fe:c.instructions+=1;goto B4173fe;
case 0x417404:goto L417404;
case 0x417409:c.instructions+=2;goto B417409;
case 0x41740b:c.instructions+=1;goto B41740b;
case 0x417411:goto L417411;
case 0x417415:c.instructions+=2;goto B417415;
case 0x417417:c.instructions+=1;goto B417417;
case 0x41741d:goto L41741d;
case 0x41741f:c.instructions+=1;goto B41741f;
case 0x417425:goto L417425;
case 0x41742a:c.instructions+=5;goto B41742a;
case 0x41742b:c.instructions+=4;goto B41742b;
case 0x417433:c.instructions+=3;goto B417433;
case 0x41743b:c.instructions+=2;goto B41743b;
case 0x417443:c.instructions+=1;goto B417443;
case 0x417445:goto L417445;
case 0x417446:c.instructions+=1;goto B417446;
case 0x417448:goto L417448;
case 0x41744d:c.instructions+=12;goto B41744d;
case 0x417450:c.instructions+=11;goto B417450;
case 0x417456:c.instructions+=10;goto B417456;
case 0x417459:c.instructions+=9;goto B417459;
case 0x41745c:c.instructions+=8;goto B41745c;
case 0x41745f:c.instructions+=7;goto B41745f;
case 0x417462:c.instructions+=6;goto B417462;
case 0x417465:c.instructions+=5;goto B417465;
case 0x417469:c.instructions+=4;goto B417469;
case 0x41746d:c.instructions+=3;goto B41746d;
case 0x41746f:c.instructions+=2;goto B41746f;
case 0x417473:c.instructions+=1;goto B417473;
case 0x417475:goto L417475;
case 0x417479:c.instructions+=2;goto B417479;
case 0x41747b:c.instructions+=1;goto B41747b;
case 0x41747d:goto L41747d;
case 0x417481:c.instructions+=1;goto B417481;
case 0x417485:goto L417485;
case 0x41748a:c.instructions+=6;goto B41748a;
case 0x41748b:c.instructions+=5;goto B41748b;
case 0x41748d:c.instructions+=4;goto B41748d;
case 0x417491:c.instructions+=3;goto B417491;
case 0x417493:c.instructions+=2;goto B417493;
case 0x417495:c.instructions+=1;goto B417495;
case 0x417497:goto L417497;
case 0x417498:goto L417498;
case 0x41749c:c.instructions+=2;goto B41749c;
case 0x41749e:c.instructions+=1;goto B41749e;
case 0x4174a0:goto L4174a0;
case 0x4174a1:goto L4174a1;
case 0x4174a3:c.instructions+=4;goto B4174a3;
case 0x4174a7:c.instructions+=3;goto B4174a7;
case 0x4174ab:c.instructions+=2;goto B4174ab;
case 0x4174ad:c.instructions+=1;goto B4174ad;
case 0x4174af:goto L4174af;
case 0x4174b3:goto L4174b3;
case 0x4174b7:c.instructions+=1;goto B4174b7;
case 0x4174b9:goto L4174b9;
case 0x4174bf:goto L4174bf;
case 0x4174c5:goto L4174c5;
case 0x4174ca:c.instructions+=1;goto B4174ca;
case 0x4174cf:goto L4174cf;
case 0x4174d1:c.instructions+=1;goto B4174d1;
case 0x4174d3:goto L4174d3;
case 0x4174d8:c.instructions+=3;goto B4174d8;
case 0x4174de:c.instructions+=2;goto B4174de;
case 0x4174e0:c.instructions+=1;goto B4174e0;
case 0x4174e2:goto L4174e2;
case 0x4174e8:c.instructions+=3;goto B4174e8;
case 0x4174eb:c.instructions+=2;goto B4174eb;
case 0x4174f2:c.instructions+=1;goto B4174f2;
case 0x4174f6:goto L4174f6;
case 0x4174fc:c.instructions+=10;goto B4174fc;
case 0x417500:c.instructions+=9;goto B417500;
case 0x417501:c.instructions+=8;goto B417501;
case 0x417504:c.instructions+=7;goto B417504;
case 0x417508:c.instructions+=6;goto B417508;
case 0x417509:c.instructions+=5;goto B417509;
case 0x41750c:c.instructions+=4;goto B41750c;
case 0x41750d:c.instructions+=3;goto B41750d;
case 0x41750e:c.instructions+=2;goto B41750e;
case 0x417510:c.instructions+=1;goto B417510;
case 0x417515:goto L417515;
case 0x417519:c.instructions+=5;goto B417519;
case 0x41751d:c.instructions+=4;goto B41751d;
case 0x417523:c.instructions+=3;goto B417523;
case 0x417527:c.instructions+=2;goto B417527;
case 0x41752b:c.instructions+=1;goto B41752b;
case 0x41752d:goto L41752d;
case 0x417531:goto L417531;
case 0x417536:c.instructions+=2;goto B417536;
case 0x417538:c.instructions+=1;goto B417538;
case 0x41753a:goto L41753a;
case 0x41753f:c.instructions+=2;goto B41753f;
case 0x417541:c.instructions+=1;goto B417541;
case 0x417543:goto L417543;
case 0x417549:c.instructions+=3;goto B417549;
case 0x41754f:c.instructions+=2;goto B41754f;
case 0x417551:c.instructions+=1;goto B417551;
case 0x417553:goto L417553;
case 0x417555:c.instructions+=1;goto B417555;
case 0x417557:goto L417557;
case 0x417559:goto L417559;
case 0x41755d:c.instructions+=2;goto B41755d;
case 0x41755f:c.instructions+=1;goto B41755f;
case 0x417565:goto L417565;
case 0x41756b:c.instructions+=2;goto B41756b;
case 0x41756d:c.instructions+=1;goto B41756d;
case 0x417573:goto L417573;
case 0x417575:c.instructions+=1;goto B417575;
case 0x41757b:goto L41757b;
case 0x417580:c.instructions+=2;goto B417580;
case 0x417582:c.instructions+=1;goto B417582;
case 0x417588:goto L417588;
case 0x41758a:c.instructions+=3;goto B41758a;
case 0x41758c:c.instructions+=2;goto B41758c;
case 0x41758e:c.instructions+=1;goto B41758e;
case 0x417591:goto L417591;
case 0x417593:c.instructions+=8;goto B417593;
case 0x417595:c.instructions+=7;goto B417595;
case 0x417598:c.instructions+=6;goto B417598;
case 0x417599:c.instructions+=5;goto B417599;
case 0x41759b:c.instructions+=4;goto B41759b;
case 0x41759d:c.instructions+=3;goto B41759d;
case 0x4175a2:c.instructions+=2;goto B4175a2;
case 0x4175a6:c.instructions+=1;goto B4175a6;
case 0x4175ab:goto L4175ab;
case 0x4175ae:c.instructions+=2;goto B4175ae;
case 0x4175b0:c.instructions+=1;goto B4175b0;
case 0x4175b2:goto L4175b2;
case 0x4175b8:c.instructions+=2;goto B4175b8;
case 0x4175bf:c.instructions+=1;goto B4175bf;
case 0x4175c1:goto L4175c1;
case 0x4175c6:c.instructions+=1;goto B4175c6;
case 0x4175cd:goto L4175cd;
case 0x4175d3:c.instructions+=2;goto B4175d3;
case 0x4175d7:c.instructions+=1;goto B4175d7;
case 0x4175dc:goto L4175dc;
case 0x4175de:c.instructions+=1;goto B4175de;
case 0x4175e4:goto L4175e4;
case 0x4175ea:c.instructions+=4;goto B4175ea;
case 0x4175ed:c.instructions+=3;goto B4175ed;
case 0x4175f0:c.instructions+=2;goto B4175f0;
case 0x4175f4:c.instructions+=1;goto B4175f4;
case 0x4175f9:goto L4175f9;
case 0x4175fe:c.instructions+=7;goto B4175fe;
case 0x417602:c.instructions+=6;goto B417602;
case 0x417604:c.instructions+=5;goto B417604;
case 0x41760a:c.instructions+=4;goto B41760a;
case 0x41760c:c.instructions+=3;goto B41760c;
case 0x41760e:c.instructions+=2;goto B41760e;
case 0x417611:c.instructions+=1;goto B417611;
case 0x417613:goto L417613;
case 0x417619:c.instructions+=3;goto B417619;
case 0x417620:c.instructions+=2;goto B417620;
case 0x417621:c.instructions+=1;goto B417621;
case 0x417623:goto L417623;
case 0x417628:c.instructions+=2;goto B417628;
case 0x41762f:c.instructions+=1;goto B41762f;
case 0x417630:goto L417630;
case 0x417634:c.instructions+=1;goto B417634;
case 0x417639:goto L417639;
case 0x41763d:c.instructions+=4;goto B41763d;
case 0x41763e:c.instructions+=3;goto B41763e;
case 0x417642:c.instructions+=2;goto B417642;
case 0x417645:c.instructions+=1;goto B417645;
case 0x41764a:goto L41764a;
case 0x41764e:c.instructions+=9;goto B41764e;
case 0x417654:c.instructions+=8;goto B417654;
case 0x417658:c.instructions+=7;goto B417658;
case 0x417659:c.instructions+=6;goto B417659;
case 0x41765b:c.instructions+=5;goto B41765b;
case 0x417661:c.instructions+=4;goto B417661;
case 0x417665:c.instructions+=3;goto B417665;
case 0x417669:c.instructions+=2;goto B417669;
case 0x41766a:c.instructions+=1;goto B41766a;
case 0x41766f:goto L41766f;
case 0x417673:c.instructions+=2;goto B417673;
case 0x417676:c.instructions+=1;goto B417676;
case 0x417678:goto L417678;
case 0x41767c:goto L41767c;
case 0x417681:c.instructions+=2;goto B417681;
case 0x417683:c.instructions+=1;goto B417683;
case 0x417685:goto L417685;
case 0x41768a:c.instructions+=2;goto B41768a;
case 0x41768c:c.instructions+=1;goto B41768c;
case 0x41768e:goto L41768e;
case 0x417694:c.instructions+=3;goto B417694;
case 0x41769a:c.instructions+=2;goto B41769a;
case 0x41769c:c.instructions+=1;goto B41769c;
case 0x41769e:goto L41769e;
case 0x4176a0:c.instructions+=1;goto B4176a0;
case 0x4176a2:goto L4176a2;
case 0x4176a4:goto L4176a4;
case 0x4176a8:c.instructions+=2;goto B4176a8;
case 0x4176aa:c.instructions+=1;goto B4176aa;
case 0x4176ac:goto L4176ac;
case 0x4176b2:c.instructions+=2;goto B4176b2;
case 0x4176b4:c.instructions+=1;goto B4176b4;
case 0x4176b6:goto L4176b6;
case 0x4176b8:c.instructions+=1;goto B4176b8;
case 0x4176ba:goto L4176ba;
case 0x4176c0:c.instructions+=7;goto B4176c0;
case 0x4176c6:c.instructions+=6;goto B4176c6;
case 0x4176c8:c.instructions+=5;goto B4176c8;
case 0x4176ce:c.instructions+=4;goto B4176ce;
case 0x4176cf:c.instructions+=3;goto B4176cf;
case 0x4176d3:c.instructions+=2;goto B4176d3;
case 0x4176d7:c.instructions+=1;goto B4176d7;
case 0x4176dc:goto L4176dc;
case 0x4176df:c.instructions+=6;goto B4176df;
case 0x4176e2:c.instructions+=5;goto B4176e2;
case 0x4176e7:c.instructions+=4;goto B4176e7;
case 0x4176ea:c.instructions+=3;goto B4176ea;
case 0x4176ed:c.instructions+=2;goto B4176ed;
case 0x4176f1:c.instructions+=1;goto B4176f1;
case 0x4176f3:goto L4176f3;
case 0x4176fb:goto L4176fb;
case 0x4176ff:c.instructions+=6;goto B4176ff;
case 0x417700:c.instructions+=5;goto B417700;
case 0x417704:c.instructions+=4;goto B417704;
case 0x417706:c.instructions+=3;goto B417706;
case 0x417709:c.instructions+=2;goto B417709;
case 0x41770b:c.instructions+=1;goto B41770b;
case 0x417710:goto L417710;
case 0x417714:c.instructions+=2;goto B417714;
case 0x41771a:c.instructions+=1;goto B41771a;
case 0x41771c:goto L41771c;
case 0x417722:goto L417722;
case 0x417723:c.instructions+=1;goto B417723;
case 0x417724:goto L417724;
case 0x41772a:c.instructions+=3;goto B41772a;
case 0x41772c:c.instructions+=2;goto B41772c;
case 0x41772f:c.instructions+=1;goto B41772f;
case 0x417731:goto L417731;
case 0x417733:c.instructions+=1;goto B417733;
case 0x417735:goto L417735;
case 0x41773b:goto L41773b;
case 0x41773e:c.instructions+=6;goto B41773e;
case 0x417744:c.instructions+=5;goto B417744;
case 0x417745:c.instructions+=4;goto B417745;
case 0x41774b:c.instructions+=3;goto B41774b;
case 0x41774c:c.instructions+=2;goto B41774c;
case 0x41774f:c.instructions+=1;goto B41774f;
case 0x417750:goto L417750;
case 0x417753:c.instructions+=11;goto B417753;
case 0x417759:c.instructions+=10;goto B417759;
case 0x41775a:c.instructions+=9;goto B41775a;
case 0x41775b:c.instructions+=8;goto B41775b;
case 0x41775f:c.instructions+=7;goto B41775f;
case 0x417762:c.instructions+=6;goto B417762;
case 0x417766:c.instructions+=5;goto B417766;
case 0x41776a:c.instructions+=4;goto B41776a;
case 0x41776e:c.instructions+=3;goto B41776e;
case 0x41776f:c.instructions+=2;goto B41776f;
case 0x417770:c.instructions+=1;goto B417770;
case 0x417772:goto L417772;
case 0x417776:c.instructions+=2;goto B417776;
case 0x41777a:c.instructions+=1;goto B41777a;
case 0x41777c:goto L41777c;
case 0x41777f:c.instructions+=2;goto B41777f;
case 0x417781:c.instructions+=1;goto B417781;
case 0x417783:goto L417783;
case 0x41778a:c.instructions+=4;goto B41778a;
case 0x41778d:c.instructions+=3;goto B41778d;
case 0x417790:c.instructions+=2;goto B417790;
case 0x417797:c.instructions+=1;goto B417797;
case 0x417799:goto L417799;
case 0x41779c:c.instructions+=4;goto B41779c;
case 0x41779e:c.instructions+=3;goto B41779e;
case 0x4177a1:c.instructions+=2;goto B4177a1;
case 0x4177a8:c.instructions+=1;goto B4177a8;
case 0x4177aa:goto L4177aa;
case 0x4177ac:goto L4177ac;
case 0x4177af:c.instructions+=2;goto B4177af;
case 0x4177b1:c.instructions+=1;goto B4177b1;
case 0x4177b4:goto L4177b4;
case 0x4177b6:c.instructions+=7;goto B4177b6;
case 0x4177b8:c.instructions+=6;goto B4177b8;
case 0x4177ba:c.instructions+=5;goto B4177ba;
case 0x4177bc:c.instructions+=4;goto B4177bc;
case 0x4177be:c.instructions+=3;goto B4177be;
case 0x4177c3:c.instructions+=2;goto B4177c3;
case 0x4177c5:c.instructions+=1;goto B4177c5;
case 0x4177ca:goto L4177ca;
case 0x4177cc:c.instructions+=1;goto B4177cc;
case 0x4177d2:goto L4177d2;
case 0x4177d6:c.instructions+=2;goto B4177d6;
case 0x4177d8:c.instructions+=1;goto B4177d8;
case 0x4177da:goto L4177da;
case 0x4177db:c.instructions+=2;goto B4177db;
case 0x4177dd:c.instructions+=1;goto B4177dd;
case 0x4177e2:goto L4177e2;
case 0x4177e5:c.instructions+=5;goto B4177e5;
case 0x4177e7:c.instructions+=4;goto B4177e7;
case 0x4177ea:c.instructions+=3;goto B4177ea;
case 0x4177ed:c.instructions+=2;goto B4177ed;
case 0x4177ef:c.instructions+=1;goto B4177ef;
case 0x4177f1:goto L4177f1;
case 0x4177f3:c.instructions+=3;goto B4177f3;
case 0x4177f5:c.instructions+=2;goto B4177f5;
case 0x4177fa:c.instructions+=1;goto B4177fa;
case 0x4177fc:goto L4177fc;
case 0x417801:goto L417801;
case 0x417803:c.instructions+=2;goto B417803;
case 0x417804:c.instructions+=1;goto B417804;
case 0x417809:goto L417809;
case 0x41780b:c.instructions+=1;goto B41780b;
case 0x41780d:goto L41780d;
case 0x417811:c.instructions+=2;goto B417811;
case 0x417813:c.instructions+=1;goto B417813;
case 0x417815:goto L417815;
case 0x417819:c.instructions+=12;goto B417819;
case 0x41781f:c.instructions+=11;goto B41781f;
case 0x417826:c.instructions+=10;goto B417826;
case 0x417829:c.instructions+=9;goto B417829;
case 0x41782c:c.instructions+=8;goto B41782c;
case 0x41782f:c.instructions+=7;goto B41782f;
case 0x417833:c.instructions+=6;goto B417833;
case 0x417836:c.instructions+=5;goto B417836;
case 0x41783c:c.instructions+=4;goto B41783c;
case 0x417842:c.instructions+=3;goto B417842;
case 0x417844:c.instructions+=2;goto B417844;
case 0x417847:c.instructions+=1;goto B417847;
case 0x417849:goto L417849;
case 0x41784b:c.instructions+=1;goto B41784b;
case 0x417851:goto L417851;
case 0x417853:c.instructions+=8;goto B417853;
case 0x417855:c.instructions+=7;goto B417855;
case 0x417857:c.instructions+=6;goto B417857;
case 0x41785d:c.instructions+=5;goto B41785d;
case 0x41785f:c.instructions+=4;goto B41785f;
case 0x417861:c.instructions+=3;goto B417861;
case 0x417864:c.instructions+=2;goto B417864;
case 0x417866:c.instructions+=1;goto B417866;
case 0x417868:goto L417868;
case 0x417869:c.instructions+=6;goto B417869;
case 0x41786a:c.instructions+=5;goto B41786a;
case 0x41786b:c.instructions+=4;goto B41786b;
case 0x417870:c.instructions+=3;goto B417870;
case 0x417871:c.instructions+=2;goto B417871;
case 0x417874:c.instructions+=1;goto B417874;
case 0x417875:goto L417875;
case 0x417876:c.instructions+=6;goto B417876;
case 0x417877:c.instructions+=5;goto B417877;
case 0x417878:c.instructions+=4;goto B417878;
case 0x41787a:c.instructions+=3;goto B41787a;
case 0x41787b:c.instructions+=2;goto B41787b;
case 0x41787e:c.instructions+=1;goto B41787e;
case 0x41787f:goto L41787f;
case 0x417880:c.instructions+=6;goto B417880;
case 0x417881:c.instructions+=5;goto B417881;
case 0x417882:c.instructions+=4;goto B417882;
case 0x417884:c.instructions+=3;goto B417884;
case 0x417885:c.instructions+=2;goto B417885;
case 0x417888:c.instructions+=1;goto B417888;
case 0x417890:goto L417890;
case 0x417893:c.instructions+=6;goto B417893;
case 0x417894:c.instructions+=5;goto B417894;
case 0x417896:c.instructions+=4;goto B417896;
case 0x41789c:c.instructions+=3;goto B41789c;
case 0x41789f:c.instructions+=2;goto B41789f;
case 0x4178a1:c.instructions+=1;goto B4178a1;
case 0x4178a7:goto L4178a7;
case 0x4178ad:c.instructions+=3;goto B4178ad;
case 0x4178b0:c.instructions+=2;goto B4178b0;
case 0x4178b2:c.instructions+=1;goto B4178b2;
case 0x4178b8:goto L4178b8;
case 0x4178be:c.instructions+=2;goto B4178be;
case 0x4178c1:c.instructions+=1;goto B4178c1;
case 0x4178c7:goto L4178c7;
case 0x4178c8:c.instructions+=3;goto B4178c8;
case 0x4178cc:c.instructions+=2;goto B4178cc;
case 0x4178ce:c.instructions+=1;goto B4178ce;
case 0x4178d4:goto L4178d4;
case 0x4178d5:c.instructions+=2;goto B4178d5;
case 0x4178d7:c.instructions+=1;goto B4178d7;
case 0x4178dc:goto L4178dc;
case 0x4178de:c.instructions+=8;goto B4178de;
case 0x4178e4:c.instructions+=7;goto B4178e4;
case 0x4178eb:c.instructions+=6;goto B4178eb;
case 0x4178ee:c.instructions+=5;goto B4178ee;
case 0x4178f4:c.instructions+=4;goto B4178f4;
case 0x4178f7:c.instructions+=3;goto B4178f7;
case 0x4178fb:c.instructions+=2;goto B4178fb;
case 0x4178fc:c.instructions+=1;goto B4178fc;
case 0x417901:goto L417901;
case 0x417904:c.instructions+=8;goto B417904;
case 0x41790a:c.instructions+=7;goto B41790a;
case 0x41790e:c.instructions+=6;goto B41790e;
case 0x417912:c.instructions+=5;goto B417912;
case 0x417916:c.instructions+=4;goto B417916;
case 0x41791c:c.instructions+=3;goto B41791c;
case 0x41791e:c.instructions+=2;goto B41791e;
case 0x417921:c.instructions+=1;goto B417921;
case 0x417923:goto L417923;
case 0x417927:c.instructions+=4;goto B417927;
case 0x41792d:c.instructions+=3;goto B41792d;
case 0x41792f:c.instructions+=2;goto B41792f;
case 0x417932:c.instructions+=1;goto B417932;
case 0x417934:goto L417934;
case 0x417938:c.instructions+=5;goto B417938;
case 0x41793a:c.instructions+=4;goto B41793a;
case 0x41793e:c.instructions+=3;goto B41793e;
case 0x41793f:c.instructions+=2;goto B41793f;
case 0x417942:c.instructions+=1;goto B417942;
case 0x417947:goto L417947;
case 0x41794b:c.instructions+=2;goto B41794b;
case 0x41794e:c.instructions+=1;goto B41794e;
case 0x417950:goto L417950;
case 0x417958:c.instructions+=1;goto B417958;
case 0x41795a:goto L41795a;
case 0x417962:goto L417962;
case 0x417966:c.instructions+=8;goto B417966;
case 0x41796a:c.instructions+=7;goto B41796a;
case 0x41796e:c.instructions+=6;goto B41796e;
case 0x41796f:c.instructions+=5;goto B41796f;
case 0x417970:c.instructions+=4;goto B417970;
case 0x417971:c.instructions+=3;goto B417971;
case 0x417972:c.instructions+=2;goto B417972;
case 0x417974:c.instructions+=1;goto B417974;
case 0x417979:goto L417979;
case 0x41797a:goto L41797a;
case 0x41797b:goto L41797b;
case 0x41797c:c.instructions+=2;goto B41797c;
case 0x41797f:c.instructions+=1;goto B41797f;
case 0x417980:goto L417980;
case 0x417985:c.instructions+=4;goto B417985;
case 0x417986:c.instructions+=3;goto B417986;
case 0x417988:c.instructions+=2;goto B417988;
case 0x41798a:c.instructions+=1;goto B41798a;
case 0x41798c:goto L41798c;
case 0x41798d:c.instructions+=4;goto B41798d;
case 0x417991:c.instructions+=3;goto B417991;
case 0x417992:c.instructions+=2;goto B417992;
case 0x417993:c.instructions+=1;goto B417993;
case 0x417995:goto L417995;
case 0x41799a:c.instructions+=3;goto B41799a;
case 0x41799d:c.instructions+=2;goto B41799d;
case 0x41799f:c.instructions+=1;goto B41799f;
case 0x4179a2:goto L4179a2;
case 0x4179a5:c.instructions+=2;goto B4179a5;
case 0x4179a7:c.instructions+=1;goto B4179a7;
case 0x4179a9:goto L4179a9;
case 0x4179b0:c.instructions+=2;goto B4179b0;
case 0x4179b2:c.instructions+=1;goto B4179b2;
case 0x4179b4:goto L4179b4;
case 0x4179b7:c.instructions+=3;goto B4179b7;
case 0x4179ba:c.instructions+=2;goto B4179ba;
case 0x4179bc:c.instructions+=1;goto B4179bc;
case 0x4179be:goto L4179be;
case 0x4179bf:c.instructions+=3;goto B4179bf;
case 0x4179c2:c.instructions+=2;goto B4179c2;
case 0x4179c5:c.instructions+=1;goto B4179c5;
case 0x4179c7:goto L4179c7;
case 0x4179c8:c.instructions+=1;goto B4179c8;
case 0x4179cd:goto L4179cd;
case 0x4179d2:c.instructions+=4;goto B4179d2;
case 0x4179d3:c.instructions+=3;goto B4179d3;
case 0x4179d9:c.instructions+=2;goto B4179d9;
case 0x4179db:c.instructions+=1;goto B4179db;
case 0x4179dd:goto L4179dd;
case 0x4179de:c.instructions+=2;goto B4179de;
case 0x4179df:c.instructions+=1;goto B4179df;
case 0x4179e0:goto L4179e0;
case 0x4179e1:c.instructions+=1;goto B4179e1;
case 0x4179f0:goto L4179f0;
case 0x4179f1:c.instructions+=9;goto B4179f1;
case 0x4179f2:c.instructions+=8;goto B4179f2;
case 0x4179f4:c.instructions+=7;goto B4179f4;
case 0x4179f6:c.instructions+=6;goto B4179f6;
case 0x4179f9:c.instructions+=5;goto B4179f9;
case 0x4179fe:c.instructions+=4;goto B4179fe;
case 0x417a05:c.instructions+=3;goto B417a05;
case 0x417a06:c.instructions+=2;goto B417a06;
case 0x417a07:c.instructions+=1;goto B417a07;
case 0x417a0c:goto L417a0c;
case 0x417a0f:c.instructions+=5;goto B417a0f;
case 0x417a11:c.instructions+=4;goto B417a11;
case 0x417a12:c.instructions+=3;goto B417a12;
case 0x417a14:c.instructions+=2;goto B417a14;
case 0x417a17:c.instructions+=1;goto B417a17;
case 0x417a1c:goto L417a1c;
case 0x417a22:c.instructions+=1;goto B417a22;
case 0x417a24:goto L417a24;
case 0x417a2a:c.instructions+=1;goto B417a2a;
case 0x417a2c:goto L417a2c;
case 0x417a32:c.instructions+=1;goto B417a32;
case 0x417a34:goto L417a34;
case 0x417a3a:goto L417a3a;
case 0x417a3c:c.instructions+=4;goto B417a3c;
case 0x417a42:c.instructions+=3;goto B417a42;
case 0x417a44:c.instructions+=2;goto B417a44;
case 0x417a47:c.instructions+=1;goto B417a47;
case 0x417a49:goto L417a49;
case 0x417a4f:c.instructions+=1;goto B417a4f;
case 0x417a51:goto L417a51;
case 0x417a54:c.instructions+=6;goto B417a54;
case 0x417a58:c.instructions+=5;goto B417a58;
case 0x417a5b:c.instructions+=4;goto B417a5b;
case 0x417a60:c.instructions+=3;goto B417a60;
case 0x417a62:c.instructions+=2;goto B417a62;
case 0x417a64:c.instructions+=1;goto B417a64;
case 0x417a66:goto L417a66;
case 0x417a70:goto L417a70;
case 0x417a75:c.instructions+=2;goto B417a75;
case 0x417a78:c.instructions+=1;goto B417a78;
case 0x417a7d:goto L417a7d;
case 0x417a82:c.instructions+=4;goto B417a82;
case 0x417a83:c.instructions+=3;goto B417a83;
case 0x417a89:c.instructions+=2;goto B417a89;
case 0x417a8b:c.instructions+=1;goto B417a8b;
case 0x417a8d:goto L417a8d;
case 0x417a92:c.instructions+=1;goto B417a92;
case 0x417a97:goto L417a97;
case 0x417a9d:c.instructions+=6;goto B417a9d;
case 0x417a9e:c.instructions+=5;goto B417a9e;
case 0x417aa1:c.instructions+=4;goto B417aa1;
case 0x417aa3:c.instructions+=3;goto B417aa3;
case 0x417aa4:c.instructions+=2;goto B417aa4;
case 0x417aa5:c.instructions+=1;goto B417aa5;
case 0x417ab0:goto L417ab0;
case 0x417ab1:c.instructions+=13;goto B417ab1;
case 0x417ab3:c.instructions+=12;goto B417ab3;
case 0x417ab4:c.instructions+=11;goto B417ab4;
case 0x417ab5:c.instructions+=10;goto B417ab5;
case 0x417ab6:c.instructions+=9;goto B417ab6;
case 0x417ab9:c.instructions+=8;goto B417ab9;
case 0x417aba:c.instructions+=7;goto B417aba;
case 0x417abc:c.instructions+=6;goto B417abc;
case 0x417ac1:c.instructions+=5;goto B417ac1;
case 0x417ac3:c.instructions+=4;goto B417ac3;
case 0x417ac4:c.instructions+=3;goto B417ac4;
case 0x417ac6:c.instructions+=2;goto B417ac6;
case 0x417ac9:c.instructions+=1;goto B417ac9;
case 0x417ace:goto L417ace;
case 0x417acf:c.instructions+=2;goto B417acf;
case 0x417ad1:c.instructions+=1;goto B417ad1;
case 0x417ad6:goto L417ad6;
case 0x417ad8:c.instructions+=6;goto B417ad8;
case 0x417ada:c.instructions+=5;goto B417ada;
case 0x417adc:c.instructions+=4;goto B417adc;
case 0x417adf:c.instructions+=3;goto B417adf;
case 0x417ae0:c.instructions+=2;goto B417ae0;
case 0x417ae2:c.instructions+=1;goto B417ae2;
case 0x417ae7:goto L417ae7;
case 0x417ae9:c.instructions+=6;goto B417ae9;
case 0x417aeb:c.instructions+=5;goto B417aeb;
case 0x417aed:c.instructions+=4;goto B417aed;
case 0x417af0:c.instructions+=3;goto B417af0;
case 0x417af1:c.instructions+=2;goto B417af1;
case 0x417af3:c.instructions+=1;goto B417af3;
case 0x417af8:goto L417af8;
case 0x417afe:c.instructions+=1;goto B417afe;
case 0x417b00:goto L417b00;
case 0x417b03:c.instructions+=1;goto B417b03;
case 0x417b10:goto L417b10;
case 0x417b16:c.instructions+=6;goto B417b16;
case 0x417b19:c.instructions+=5;goto B417b19;
case 0x417b1e:c.instructions+=4;goto B417b1e;
case 0x417b20:c.instructions+=3;goto B417b20;
case 0x417b22:c.instructions+=2;goto B417b22;
case 0x417b25:c.instructions+=1;goto B417b25;
case 0x417b2a:goto L417b2a;
case 0x417b30:c.instructions+=3;goto B417b30;
case 0x417b31:c.instructions+=2;goto B417b31;
case 0x417b33:c.instructions+=1;goto B417b33;
case 0x417b38:goto L417b38;
case 0x417b3a:c.instructions+=6;goto B417b3a;
case 0x417b3c:c.instructions+=5;goto B417b3c;
case 0x417b3e:c.instructions+=4;goto B417b3e;
case 0x417b44:c.instructions+=3;goto B417b44;
case 0x417b45:c.instructions+=2;goto B417b45;
case 0x417b47:c.instructions+=1;goto B417b47;
case 0x417b4c:goto L417b4c;
case 0x417b4e:c.instructions+=1;goto B417b4e;
case 0x417b53:goto L417b53;
case 0x417b56:c.instructions+=6;goto B417b56;
case 0x417b5b:c.instructions+=5;goto B417b5b;
case 0x417b5c:c.instructions+=4;goto B417b5c;
case 0x417b62:c.instructions+=3;goto B417b62;
case 0x417b64:c.instructions+=2;goto B417b64;
case 0x417b67:c.instructions+=1;goto B417b67;
case 0x417b69:goto L417b69;
case 0x417b6c:goto L417b6c;
case 0x417b6e:c.instructions+=6;goto B417b6e;
case 0x417b70:c.instructions+=5;goto B417b70;
case 0x417b72:c.instructions+=4;goto B417b72;
case 0x417b75:c.instructions+=3;goto B417b75;
case 0x417b76:c.instructions+=2;goto B417b76;
case 0x417b78:c.instructions+=1;goto B417b78;
case 0x417b7d:goto L417b7d;
case 0x417b7e:c.instructions+=2;goto B417b7e;
case 0x417b83:c.instructions+=1;goto B417b83;
case 0x417b88:goto L417b88;
case 0x417b8b:c.instructions+=3;goto B417b8b;
case 0x417b8c:c.instructions+=2;goto B417b8c;
case 0x417b8e:c.instructions+=1;goto B417b8e;
case 0x417b93:goto L417b93;
case 0x417b95:c.instructions+=1;goto B417b95;
case 0x417b9a:goto L417b9a;
case 0x417b9b:c.instructions+=5;goto B417b9b;
case 0x417b9c:c.instructions+=4;goto B417b9c;
case 0x417b9d:c.instructions+=3;goto B417b9d;
case 0x417b9f:c.instructions+=2;goto B417b9f;
case 0x417ba0:c.instructions+=1;goto B417ba0;
case 0x417bb0:goto L417bb0;
case 0x417bb1:c.instructions+=8;goto B417bb1;
case 0x417bb2:c.instructions+=7;goto B417bb2;
case 0x417bb3:c.instructions+=6;goto B417bb3;
case 0x417bb7:c.instructions+=5;goto B417bb7;
case 0x417bba:c.instructions+=4;goto B417bba;
case 0x417bbc:c.instructions+=3;goto B417bbc;
case 0x417bbe:c.instructions+=2;goto B417bbe;
case 0x417bc0:c.instructions+=1;goto B417bc0;
case 0x417bc3:goto L417bc3;
case 0x417bc5:c.instructions+=1;goto B417bc5;
case 0x417bc7:goto L417bc7;
case 0x417bcd:c.instructions+=2;goto B417bcd;
case 0x417bcf:c.instructions+=1;goto B417bcf;
case 0x417bd1:goto L417bd1;
case 0x417bd7:c.instructions+=4;goto B417bd7;
case 0x417bd9:c.instructions+=3;goto B417bd9;
case 0x417bda:c.instructions+=2;goto B417bda;
case 0x417bde:c.instructions+=1;goto B417bde;
case 0x417be3:goto L417be3;
case 0x417be6:c.instructions+=2;goto B417be6;
case 0x417be8:c.instructions+=1;goto B417be8;
case 0x417bea:goto L417bea;
case 0x417bf0:c.instructions+=2;goto B417bf0;
case 0x417bf2:c.instructions+=1;goto B417bf2;
case 0x417bf4:goto L417bf4;
case 0x417bf5:c.instructions+=2;goto B417bf5;
case 0x417bf7:c.instructions+=1;goto B417bf7;
case 0x417bfc:goto L417bfc;
case 0x417bfe:goto L417bfe;
case 0x417bff:c.instructions+=4;goto B417bff;
case 0x417c05:c.instructions+=3;goto B417c05;
case 0x417c06:c.instructions+=2;goto B417c06;
case 0x417c08:c.instructions+=1;goto B417c08;
case 0x417c0d:goto L417c0d;
case 0x417c0f:c.instructions+=2;goto B417c0f;
case 0x417c10:c.instructions+=1;goto B417c10;
case 0x417c12:goto L417c12;
case 0x417c14:c.instructions+=1;goto B417c14;
case 0x417c16:goto L417c16;
case 0x417c17:c.instructions+=4;goto B417c17;
case 0x417c18:c.instructions+=3;goto B417c18;
case 0x417c1a:c.instructions+=2;goto B417c1a;
case 0x417c1b:c.instructions+=1;goto B417c1b;
case 0x417c1e:goto L417c1e;
case 0x417c1f:c.instructions+=4;goto B417c1f;
case 0x417c20:c.instructions+=3;goto B417c20;
case 0x417c22:c.instructions+=2;goto B417c22;
case 0x417c23:c.instructions+=1;goto B417c23;
case 0x417c30:goto L417c30;
case 0x417c31:c.instructions+=8;goto B417c31;
case 0x417c35:c.instructions+=7;goto B417c35;
case 0x417c36:c.instructions+=6;goto B417c36;
case 0x417c37:c.instructions+=5;goto B417c37;
case 0x417c3b:c.instructions+=4;goto B417c3b;
case 0x417c3c:c.instructions+=3;goto B417c3c;
case 0x417c3d:c.instructions+=2;goto B417c3d;
case 0x417c3f:c.instructions+=1;goto B417c3f;
case 0x417c44:goto L417c44;
case 0x417c47:c.instructions+=1;goto B417c47;
case 0x417c49:goto L417c49;
case 0x417c4b:c.instructions+=5;goto B417c4b;
case 0x417c4e:c.instructions+=4;goto B417c4e;
case 0x417c50:c.instructions+=3;goto B417c50;
case 0x417c51:c.instructions+=2;goto B417c51;
case 0x417c52:c.instructions+=1;goto B417c52;
case 0x417c57:goto L417c57;
case 0x417c58:c.instructions+=3;goto B417c58;
case 0x417c59:c.instructions+=2;goto B417c59;
case 0x417c5a:c.instructions+=1;goto B417c5a;
case 0x417c60:goto L417c60;
case 0x417c63:c.instructions+=8;goto B417c63;
case 0x417c69:c.instructions+=7;goto B417c69;
case 0x417c6b:c.instructions+=6;goto B417c6b;
case 0x417c6d:c.instructions+=5;goto B417c6d;
case 0x417c6f:c.instructions+=4;goto B417c6f;
case 0x417c73:c.instructions+=3;goto B417c73;
case 0x417c7b:c.instructions+=2;goto B417c7b;
case 0x417c7f:c.instructions+=1;goto B417c7f;
case 0x417c85:goto L417c85;
case 0x417c86:c.instructions+=5;goto B417c86;
case 0x417c8a:c.instructions+=4;goto B417c8a;
case 0x417c8b:c.instructions+=3;goto B417c8b;
case 0x417c8c:c.instructions+=2;goto B417c8c;
case 0x417c8d:c.instructions+=1;goto B417c8d;
case 0x417c90:goto L417c90;
case 0x417c97:c.instructions+=2;goto B417c97;
case 0x417c99:c.instructions+=1;goto B417c99;
case 0x417c9f:goto L417c9f;
case 0x417ca4:c.instructions+=2;goto B417ca4;
case 0x417ca6:c.instructions+=1;goto B417ca6;
case 0x417ca8:goto L417ca8;
case 0x417cab:c.instructions+=3;goto B417cab;
case 0x417cae:c.instructions+=2;goto B417cae;
case 0x417cb0:c.instructions+=1;goto B417cb0;
case 0x417cb2:goto L417cb2;
case 0x417cb6:c.instructions+=4;goto B417cb6;
case 0x417cb8:c.instructions+=3;goto B417cb8;
case 0x417cbb:c.instructions+=2;goto B417cbb;
case 0x417cbf:c.instructions+=1;goto B417cbf;
case 0x417cc1:goto L417cc1;
case 0x417cc5:c.instructions+=1;goto B417cc5;
case 0x417cc9:goto L417cc9;
case 0x417ccd:c.instructions+=3;goto B417ccd;
case 0x417cce:c.instructions+=2;goto B417cce;
case 0x417cd0:c.instructions+=1;goto B417cd0;
case 0x417cd5:goto L417cd5;
case 0x417cd7:c.instructions+=1;goto B417cd7;
case 0x417cdd:goto L417cdd;
case 0x417ce1:c.instructions+=7;goto B417ce1;
case 0x417ce5:c.instructions+=6;goto B417ce5;
case 0x417ce7:c.instructions+=5;goto B417ce7;
case 0x417ce8:c.instructions+=4;goto B417ce8;
case 0x417ce9:c.instructions+=3;goto B417ce9;
case 0x417cea:c.instructions+=2;goto B417cea;
case 0x417cec:c.instructions+=1;goto B417cec;
case 0x417cf1:goto L417cf1;
case 0x417cf3:c.instructions+=2;goto B417cf3;
case 0x417cf5:c.instructions+=1;goto B417cf5;
case 0x417cf7:goto L417cf7;
case 0x417cfb:c.instructions+=3;goto B417cfb;
case 0x417cfd:c.instructions+=2;goto B417cfd;
case 0x417d00:c.instructions+=1;goto B417d00;
case 0x417d02:goto L417d02;
case 0x417d05:c.instructions+=1;goto B417d05;
case 0x417d07:goto L417d07;
case 0x417d0a:goto L417d0a;
case 0x417d0d:c.instructions+=2;goto B417d0d;
case 0x417d0f:c.instructions+=1;goto B417d0f;
case 0x417d11:goto L417d11;
case 0x417d12:c.instructions+=3;goto B417d12;
case 0x417d13:c.instructions+=2;goto B417d13;
case 0x417d14:c.instructions+=1;goto B417d14;
case 0x417d19:goto L417d19;
case 0x417d1c:c.instructions+=2;goto B417d1c;
case 0x417d1e:c.instructions+=1;goto B417d1e;
case 0x417d20:goto L417d20;
case 0x417d23:c.instructions+=6;goto B417d23;
case 0x417d24:c.instructions+=5;goto B417d24;
case 0x417d26:c.instructions+=4;goto B417d26;
case 0x417d27:c.instructions+=3;goto B417d27;
case 0x417d2c:c.instructions+=2;goto B417d2c;
case 0x417d30:c.instructions+=1;goto B417d30;
case 0x417d35:goto L417d35;
case 0x417d3b:c.instructions+=3;goto B417d3b;
case 0x417d3d:c.instructions+=2;goto B417d3d;
case 0x417d40:c.instructions+=1;goto B417d40;
case 0x417d42:goto L417d42;
case 0x417d46:c.instructions+=3;goto B417d46;
case 0x417d48:c.instructions+=2;goto B417d48;
case 0x417d4b:c.instructions+=1;goto B417d4b;
case 0x417d4d:goto L417d4d;
case 0x417d51:c.instructions+=2;goto B417d51;
case 0x417d55:c.instructions+=1;goto B417d55;
case 0x417d57:goto L417d57;
case 0x417d59:goto L417d59;
case 0x417d5d:c.instructions+=5;goto B417d5d;
case 0x417d62:c.instructions+=4;goto B417d62;
case 0x417d63:c.instructions+=3;goto B417d63;
case 0x417d65:c.instructions+=2;goto B417d65;
case 0x417d69:c.instructions+=1;goto B417d69;
case 0x417d6f:goto L417d6f;
case 0x417d73:c.instructions+=4;goto B417d73;
case 0x417d74:c.instructions+=3;goto B417d74;
case 0x417d75:c.instructions+=2;goto B417d75;
case 0x417d76:c.instructions+=1;goto B417d76;
case 0x417d77:goto L417d77;
case 0x417d7a:c.instructions+=1;goto B417d7a;
case 0x417d80:goto L417d80;
case 0x417d81:c.instructions+=22;goto B417d81;
case 0x417d83:c.instructions+=21;goto B417d83;
case 0x417d86:c.instructions+=20;goto B417d86;
case 0x417d89:c.instructions+=19;goto B417d89;
case 0x417d8c:c.instructions+=18;goto B417d8c;
case 0x417d8e:c.instructions+=17;goto B417d8e;
case 0x417d8f:c.instructions+=16;goto B417d8f;
case 0x417d90:c.instructions+=15;goto B417d90;
case 0x417d91:c.instructions+=14;goto B417d91;
case 0x417d94:c.instructions+=13;goto B417d94;
case 0x417d98:c.instructions+=12;goto B417d98;
case 0x417d9b:c.instructions+=11;goto B417d9b;
case 0x417d9f:c.instructions+=10;goto B417d9f;
case 0x417da3:c.instructions+=9;goto B417da3;
case 0x417da8:c.instructions+=8;goto B417da8;
case 0x417dac:c.instructions+=7;goto B417dac;
case 0x417db0:c.instructions+=6;goto B417db0;
case 0x417db6:c.instructions+=5;goto B417db6;
case 0x417dbc:c.instructions+=4;goto B417dbc;
case 0x417dbe:c.instructions+=3;goto B417dbe;
case 0x417dc0:c.instructions+=2;goto B417dc0;
case 0x417dc3:c.instructions+=1;goto B417dc3;
case 0x417dc5:goto L417dc5;
case 0x417dc7:c.instructions+=1;goto B417dc7;
case 0x417dcd:goto L417dcd;
case 0x417dd1:c.instructions+=55;goto B417dd1;
case 0x417dd4:c.instructions+=54;goto B417dd4;
case 0x417dd8:c.instructions+=53;goto B417dd8;
case 0x417ddc:c.instructions+=52;goto B417ddc;
case 0x417de2:c.instructions+=51;goto B417de2;
case 0x417de4:c.instructions+=50;goto B417de4;
case 0x417dea:c.instructions+=49;goto B417dea;
case 0x417dec:c.instructions+=48;goto B417dec;
case 0x417dee:c.instructions+=47;goto B417dee;
case 0x417df2:c.instructions+=46;goto B417df2;
case 0x417df4:c.instructions+=45;goto B417df4;
case 0x417df8:c.instructions+=44;goto B417df8;
case 0x417dfc:c.instructions+=43;goto B417dfc;
case 0x417dff:c.instructions+=42;goto B417dff;
case 0x417e03:c.instructions+=41;goto B417e03;
case 0x417e07:c.instructions+=40;goto B417e07;
case 0x417e0d:c.instructions+=39;goto B417e0d;
case 0x417e0f:c.instructions+=38;goto B417e0f;
case 0x417e15:c.instructions+=37;goto B417e15;
case 0x417e17:c.instructions+=36;goto B417e17;
case 0x417e1b:c.instructions+=35;goto B417e1b;
case 0x417e1f:c.instructions+=34;goto B417e1f;
case 0x417e23:c.instructions+=33;goto B417e23;
case 0x417e26:c.instructions+=32;goto B417e26;
case 0x417e2a:c.instructions+=31;goto B417e2a;
case 0x417e2e:c.instructions+=30;goto B417e2e;
case 0x417e34:c.instructions+=29;goto B417e34;
case 0x417e3a:c.instructions+=28;goto B417e3a;
case 0x417e3e:c.instructions+=27;goto B417e3e;
case 0x417e42:c.instructions+=26;goto B417e42;
case 0x417e46:c.instructions+=25;goto B417e46;
case 0x417e4a:c.instructions+=24;goto B417e4a;
case 0x417e4e:c.instructions+=23;goto B417e4e;
case 0x417e51:c.instructions+=22;goto B417e51;
case 0x417e55:c.instructions+=21;goto B417e55;
case 0x417e59:c.instructions+=20;goto B417e59;
case 0x417e5f:c.instructions+=19;goto B417e5f;
case 0x417e65:c.instructions+=18;goto B417e65;
case 0x417e67:c.instructions+=17;goto B417e67;
case 0x417e6b:c.instructions+=16;goto B417e6b;
case 0x417e6f:c.instructions+=15;goto B417e6f;
case 0x417e73:c.instructions+=14;goto B417e73;
case 0x417e77:c.instructions+=13;goto B417e77;
case 0x417e7a:c.instructions+=12;goto B417e7a;
case 0x417e7e:c.instructions+=11;goto B417e7e;
case 0x417e81:c.instructions+=10;goto B417e81;
case 0x417e85:c.instructions+=9;goto B417e85;
case 0x417e89:c.instructions+=8;goto B417e89;
case 0x417e8f:c.instructions+=7;goto B417e8f;
case 0x417e93:c.instructions+=6;goto B417e93;
case 0x417e99:c.instructions+=5;goto B417e99;
case 0x417e9d:c.instructions+=4;goto B417e9d;
case 0x417e9f:c.instructions+=3;goto B417e9f;
case 0x417ea1:c.instructions+=2;goto B417ea1;
case 0x417ea4:c.instructions+=1;goto B417ea4;
case 0x417ea6:goto L417ea6;
case 0x417ea8:c.instructions+=1;goto B417ea8;
case 0x417eac:goto L417eac;
case 0x417eb2:c.instructions+=6;goto B417eb2;
case 0x417eb5:c.instructions+=5;goto B417eb5;
case 0x417eb7:c.instructions+=4;goto B417eb7;
case 0x417eb9:c.instructions+=3;goto B417eb9;
case 0x417ebd:c.instructions+=2;goto B417ebd;
case 0x417ec1:c.instructions+=1;goto B417ec1;
case 0x417ec7:goto L417ec7;
case 0x417eca:c.instructions+=4;goto B417eca;
case 0x417ece:c.instructions+=3;goto B417ece;
case 0x417ed0:c.instructions+=2;goto B417ed0;
case 0x417ed6:c.instructions+=1;goto B417ed6;
case 0x417edc:goto L417edc;
case 0x417ee3:c.instructions+=3;goto B417ee3;
case 0x417ee7:c.instructions+=2;goto B417ee7;
case 0x417eeb:c.instructions+=1;goto B417eeb;
case 0x417ef1:goto L417ef1;
case 0x417ef5:c.instructions+=7;goto B417ef5;
case 0x417ef6:c.instructions+=6;goto B417ef6;
case 0x417ef7:c.instructions+=5;goto B417ef7;
case 0x417efa:c.instructions+=4;goto B417efa;
case 0x417efb:c.instructions+=3;goto B417efb;
case 0x417efe:c.instructions+=2;goto B417efe;
case 0x417eff:c.instructions+=1;goto B417eff;
case 0x417f04:goto L417f04;
case 0x417f07:c.instructions+=2;goto B417f07;
case 0x417f09:c.instructions+=1;goto B417f09;
case 0x417f0f:goto L417f0f;
case 0x417f14:c.instructions+=2;goto B417f14;
case 0x417f1c:c.instructions+=1;goto B417f1c;
case 0x417f22:goto L417f22;
case 0x417f24:goto L417f24;
case 0x417f28:c.instructions+=1;goto B417f28;
case 0x417f30:goto L417f30;
case 0x417f34:c.instructions+=30;goto B417f34;
case 0x417f38:c.instructions+=29;goto B417f38;
case 0x417f3c:c.instructions+=28;goto B417f3c;
case 0x417f3f:c.instructions+=27;goto B417f3f;
case 0x417f43:c.instructions+=26;goto B417f43;
case 0x417f4b:c.instructions+=25;goto B417f4b;
case 0x417f4f:c.instructions+=24;goto B417f4f;
case 0x417f53:c.instructions+=23;goto B417f53;
case 0x417f59:c.instructions+=22;goto B417f59;
case 0x417f60:c.instructions+=21;goto B417f60;
case 0x417f64:c.instructions+=20;goto B417f64;
case 0x417f68:c.instructions+=19;goto B417f68;
case 0x417f6c:c.instructions+=18;goto B417f6c;
case 0x417f70:c.instructions+=17;goto B417f70;
case 0x417f76:c.instructions+=16;goto B417f76;
case 0x417f7a:c.instructions+=15;goto B417f7a;
case 0x417f7e:c.instructions+=14;goto B417f7e;
case 0x417f82:c.instructions+=13;goto B417f82;
case 0x417f88:c.instructions+=12;goto B417f88;
case 0x417f8c:c.instructions+=11;goto B417f8c;
case 0x417f92:c.instructions+=10;goto B417f92;
case 0x417f94:c.instructions+=9;goto B417f94;
case 0x417f96:c.instructions+=8;goto B417f96;
case 0x417f98:c.instructions+=7;goto B417f98;
case 0x417f9a:c.instructions+=6;goto B417f9a;
case 0x417f9c:c.instructions+=5;goto B417f9c;
case 0x417f9e:c.instructions+=4;goto B417f9e;
case 0x417fa4:c.instructions+=3;goto B417fa4;
case 0x417fa6:c.instructions+=2;goto B417fa6;
case 0x417fa9:c.instructions+=1;goto B417fa9;
case 0x417fab:goto L417fab;
case 0x417fb0:c.instructions+=1;goto B417fb0;
case 0x417fb2:goto L417fb2;
case 0x417fb4:goto L417fb4;
case 0x417fb7:c.instructions+=7;goto B417fb7;
case 0x417fb9:c.instructions+=6;goto B417fb9;
case 0x417fbc:c.instructions+=5;goto B417fbc;
case 0x417fc2:c.instructions+=4;goto B417fc2;
case 0x417fc4:c.instructions+=3;goto B417fc4;
case 0x417fc6:c.instructions+=2;goto B417fc6;
case 0x417fc9:c.instructions+=1;goto B417fc9;
case 0x417fcf:goto L417fcf;
case 0x417fd1:c.instructions+=2;goto B417fd1;
case 0x417fd4:c.instructions+=1;goto B417fd4;
case 0x417fd6:goto L417fd6;
case 0x417fd9:c.instructions+=1;goto B417fd9;
case 0x417fdb:goto L417fdb;
case 0x417fde:goto L417fde;
case 0x417fe1:c.instructions+=2;goto B417fe1;
case 0x417fe3:c.instructions+=1;goto B417fe3;
case 0x417fe9:goto L417fe9;
case 0x417fed:c.instructions+=6;goto B417fed;
case 0x417fef:c.instructions+=5;goto B417fef;
case 0x417ff3:c.instructions+=4;goto B417ff3;
case 0x417ff7:c.instructions+=3;goto B417ff7;
case 0x417ffb:c.instructions+=2;goto B417ffb;
case 0x417ffc:c.instructions+=1;goto B417ffc;
default:missing_instruction(c.pc);}
B417002:L417002:{c.instructions+=11;NFSU2_TR(0x417002);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B417007:{NFSU2_TR(0x417007);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(3064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41700e:{NFSU2_TR(0x41700e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417012:{NFSU2_TR(0x417012);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417016:{NFSU2_TR(0x417016);
{u32 ea_=u32(r4(R+20)+u32(2296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41701c:{NFSU2_TR(0x41701c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417022:{NFSU2_TR(0x417022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417023:{NFSU2_TR(0x417023);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417024:{NFSU2_TR(0x417024);
w4(R+4,u32(0x88f298ull));
}
B417029:{NFSU2_TR(0x417029);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41702c:{NFSU2_TR(0x41702c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417031ull));
TAIL_STATIC(0x5d5d10u,5d5);
}
B417031:L417031:{c.instructions+=4;NFSU2_TR(0x417031);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417037:{NFSU2_TR(0x417037);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417039:{NFSU2_TR(0x417039);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41703c:{NFSU2_TR(0x41703c);
if(r1(R+514)){{goto L417044;}}
}
B41703e:L41703e:{c.instructions+=1;NFSU2_TR(0x41703e);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417044:L417044:{c.instructions+=14;NFSU2_TR(0x417044);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B41704a:{NFSU2_TR(0x41704a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B41704d:{NFSU2_TR(0x41704d);
u8 U[13];
w4(U+0,u32(u32(u32(0x589ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B417054:{NFSU2_TR(0x417054);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417058:{NFSU2_TR(0x417058);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41705a:{NFSU2_TR(0x41705a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41705e:{NFSU2_TR(0x41705e);
__builtin_memmove((R+8),gp(0x89e7bc),4);
}
B417064:{NFSU2_TR(0x417064);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B417067:{NFSU2_TR(0x417067);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B417068:{NFSU2_TR(0x417068);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41706a:{NFSU2_TR(0x41706a);
__builtin_memmove((R+0),(R+518),1);
}
B41706d:{NFSU2_TR(0x41706d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41706f:{NFSU2_TR(0x41706f);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B417073:{NFSU2_TR(0x417073);
if(r1(R+518)){{goto L417093;}}
}
B417075:L417075:{c.instructions+=7;NFSU2_TR(0x417075);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41707b:{NFSU2_TR(0x41707b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41707d:{NFSU2_TR(0x41707d);
{u32 ea_=u32(u32(7879512u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417083:{NFSU2_TR(0x417083);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417085:{NFSU2_TR(0x417085);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417087:{NFSU2_TR(0x417087);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41708a:{NFSU2_TR(0x41708a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417095;}}
}
B41708c:L41708c:{c.instructions+=2;NFSU2_TR(0x41708c);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417091:{NFSU2_TR(0x417091);
{goto L41709a;}
}
B417093:L417093:{c.instructions+=1;NFSU2_TR(0x417093);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417095:L417095:{c.instructions+=1;NFSU2_TR(0x417095);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41709a:L41709a:{c.instructions+=2;NFSU2_TR(0x41709a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41709c:{NFSU2_TR(0x41709c);
if(r1(R+518)){{goto L4170c8;}}
}
B41709e:L41709e:{c.instructions+=2;NFSU2_TR(0x41709e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4170a1:{NFSU2_TR(0x4170a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4170a6ull));
TAIL_STATIC(0x592480u,592);
}
B4170a6:L4170a6:{c.instructions+=4;NFSU2_TR(0x4170a6);
{u32 ea_=u32(u32(7879516u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4170ac:{NFSU2_TR(0x4170ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4170ae:{NFSU2_TR(0x4170ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4170b1:{NFSU2_TR(0x4170b1);
if(r1(R+518)){{goto L4170c8;}}
}
B4170b3:L4170b3:{c.instructions+=3;NFSU2_TR(0x4170b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4170b7:{NFSU2_TR(0x4170b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4170b9:{NFSU2_TR(0x4170b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4170c8;}}
}
B4170bb:L4170bb:{c.instructions+=2;NFSU2_TR(0x4170bb);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4170c2:{NFSU2_TR(0x4170c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4172b8;}}
}
B4170c8:L4170c8:{c.instructions+=3;NFSU2_TR(0x4170c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4170cc:{NFSU2_TR(0x4170cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4170ce:{NFSU2_TR(0x4170ce);
if(r1(R+518)){{goto L4170db;}}
}
B4170d0:L4170d0:{c.instructions+=3;NFSU2_TR(0x4170d0);
__builtin_memmove((R+0),gp(0x783b6c),4);
}
B4170d5:{NFSU2_TR(0x4170d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4170d9:{NFSU2_TR(0x4170d9);
{goto L4170ec;}
}
B4170db:L4170db:{c.instructions+=3;NFSU2_TR(0x4170db);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B4170e1:{NFSU2_TR(0x4170e1);
{u32 ea_=u32(r4(R+4)+r4(R+24)+u32(1396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4170e8:{NFSU2_TR(0x4170e8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4170ec:L4170ec:{c.instructions+=2;NFSU2_TR(0x4170ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4170ef:{NFSU2_TR(0x4170ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4170f4ull));
TAIL_STATIC(0x59fa30u,59f);
}
B4170f4:L4170f4:{c.instructions+=2;NFSU2_TR(0x4170f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4170f7:{NFSU2_TR(0x4170f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4170fcull));
TAIL_STATIC(0x59fa30u,59f);
}
B4170fc:L4170fc:{c.instructions+=2;NFSU2_TR(0x4170fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4170fe:{NFSU2_TR(0x4170fe);
if(r1(R+518)){{goto L41712b;}}
}
B417100:L417100:{c.instructions+=10;NFSU2_TR(0x417100);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417106:{NFSU2_TR(0x417106);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B41710c:{NFSU2_TR(0x41710c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B41710e:{NFSU2_TR(0x41710e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417112:{NFSU2_TR(0x417112);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417116:{NFSU2_TR(0x417116);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41711c:{NFSU2_TR(0x41711c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417120:{NFSU2_TR(0x417120);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417122:{NFSU2_TR(0x417122);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417125:{NFSU2_TR(0x417125);
if(r1(R+514)){{goto L4172b8;}}
}
B41712b:L41712b:{c.instructions+=6;NFSU2_TR(0x41712b);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B417130:{NFSU2_TR(0x417130);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B417134:{NFSU2_TR(0x417134);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(1384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41713b:{NFSU2_TR(0x41713b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41713d:{NFSU2_TR(0x41713d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417141:{NFSU2_TR(0x417141);
if(r1(R+518)){{goto L41714e;}}
}
B417143:L417143:{c.instructions+=2;NFSU2_TR(0x417143);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(1388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41714a:{NFSU2_TR(0x41714a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41714e:L41714e:{c.instructions+=3;NFSU2_TR(0x41714e);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417152:{NFSU2_TR(0x417152);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417154:{NFSU2_TR(0x417154);
if(r1(R+518)){{goto L41715e;}}
}
B417156:L417156:{c.instructions+=1;NFSU2_TR(0x417156);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41715e:L41715e:{c.instructions+=2;NFSU2_TR(0x41715e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B417161:{NFSU2_TR(0x417161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417166ull));
TAIL_STATIC(0x59fa30u,59f);
}
B417166:L417166:{c.instructions+=2;NFSU2_TR(0x417166);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417168:{NFSU2_TR(0x417168);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417192;}}
}
B41716a:L41716a:{c.instructions+=9;NFSU2_TR(0x41716a);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41716f:{NFSU2_TR(0x41716f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B417175:{NFSU2_TR(0x417175);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417179:{NFSU2_TR(0x417179);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41717d:{NFSU2_TR(0x41717d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417183:{NFSU2_TR(0x417183);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417187:{NFSU2_TR(0x417187);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417189:{NFSU2_TR(0x417189);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41718c:{NFSU2_TR(0x41718c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4172b8;}}
}
B417192:L417192:{c.instructions+=7;NFSU2_TR(0x417192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417198:{NFSU2_TR(0x417198);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41719e:{NFSU2_TR(0x41719e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4171a2:{NFSU2_TR(0x4171a2);
__builtin_memmove((R+4),(R+12),4);
}
B4171a4:{NFSU2_TR(0x4171a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4171a9:{NFSU2_TR(0x4171a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4171ae:{NFSU2_TR(0x4171ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4171b3ull));
TAIL_STATIC(0x4024f0u,402);
}
B4171b3:L4171b3:{c.instructions+=4;NFSU2_TR(0x4171b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4171b7:{NFSU2_TR(0x4171b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4171be:{NFSU2_TR(0x4171be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4171c1:{NFSU2_TR(0x4171c1);
if(r1(R+518)){{goto L4171c9;}}
}
B4171c3:L4171c3:{c.instructions+=2;NFSU2_TR(0x4171c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4171c7:{NFSU2_TR(0x4171c7);
{goto L4171cb;}
}
B4171c9:L4171c9:{c.instructions+=1;NFSU2_TR(0x4171c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4171cb:L4171cb:{c.instructions+=2;NFSU2_TR(0x4171cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4171cd:{NFSU2_TR(0x4171cd);
if(r1(R+518)){{goto L4171d9;}}
}
B4171cf:L4171cf:{c.instructions+=4;NFSU2_TR(0x4171cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4171d0:{NFSU2_TR(0x4171d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4171d2:{NFSU2_TR(0x4171d2);
__builtin_memmove((R+4),(R+0),4);
}
B4171d4:{NFSU2_TR(0x4171d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4171d9ull));
TAIL_STATIC(0x40afc0u,40a);
}
B4171d9:L4171d9:{c.instructions+=2;NFSU2_TR(0x4171d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4171da:{NFSU2_TR(0x4171da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4171dfull));
TAIL_STATIC(0x403d80u,403);
}
B4171df:L4171df:{c.instructions+=3;NFSU2_TR(0x4171df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4171e2:{NFSU2_TR(0x4171e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4171e4:{NFSU2_TR(0x4171e4);
if(r1(R+518)){{goto L41720f;}}
}
B4171e6:L4171e6:{c.instructions+=1;NFSU2_TR(0x4171e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4171eb:L4171eb:{c.instructions+=1;NFSU2_TR(0x4171eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4171ed:L4171ed:{c.instructions+=6;NFSU2_TR(0x4171ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4171f1:{NFSU2_TR(0x4171f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4171f4:{NFSU2_TR(0x4171f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4171f5:{NFSU2_TR(0x4171f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4171f6:{NFSU2_TR(0x4171f6);
__builtin_memmove((R+4),(R+8),4);
}
B4171f8:{NFSU2_TR(0x4171f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4171fdull));
TAIL_STATIC(0x412220u,412);
}
B4171fd:L4171fd:{c.instructions+=3;NFSU2_TR(0x4171fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4171ff:{NFSU2_TR(0x4171ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7b0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417205:{NFSU2_TR(0x417205);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417253;}}
}
B417207:L417207:{c.instructions+=2;NFSU2_TR(0x417207);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41720d:{NFSU2_TR(0x41720d);
{goto L417266;}
}
B41720f:L41720f:{c.instructions+=4;NFSU2_TR(0x41720f);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417215:{NFSU2_TR(0x417215);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417217:{NFSU2_TR(0x417217);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41721a:{NFSU2_TR(0x41721a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4171ebu);}goto L4171eb;}}
}
B41721c:L41721c:{c.instructions+=3;NFSU2_TR(0x41721c);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417220:{NFSU2_TR(0x417220);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417222:{NFSU2_TR(0x417222);
if(r1(R+518)){{goto L41722c;}}
}
B417224:L417224:{c.instructions+=2;NFSU2_TR(0x417224);
{u32 ea_=u32(u32(7879524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41722a:{NFSU2_TR(0x41722a);
{goto L417232;}
}
B41722c:L41722c:{c.instructions+=1;NFSU2_TR(0x41722c);
{u32 ea_=u32(u32(7879520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417232:L417232:{c.instructions+=8;NFSU2_TR(0x417232);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417236:{NFSU2_TR(0x417236);
__asm__ volatile(".byte 0xd8,0xf2":::"memory");
}
B417238:{NFSU2_TR(0x417238);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41723a:{NFSU2_TR(0x41723a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41723c:{NFSU2_TR(0x41723c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41723e:{NFSU2_TR(0x41723e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417241:{NFSU2_TR(0x417241);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417243:{NFSU2_TR(0x417243);
if(r1(R+514)){{goto L41724c;}}
}
B417245:L417245:{c.instructions+=2;NFSU2_TR(0x417245);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41724a:{NFSU2_TR(0x41724a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4171edu);}goto L4171ed;}
}
B41724c:L41724c:{c.instructions+=2;NFSU2_TR(0x41724c);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417251:{NFSU2_TR(0x417251);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4171edu);}goto L4171ed;}
}
B417253:L417253:{c.instructions+=2;NFSU2_TR(0x417253);
__builtin_memmove((R+4),(R+24),4);
}
B417255:{NFSU2_TR(0x417255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41725aull));
TAIL_STATIC(0x401820u,401);
}
B41725a:L41725a:{c.instructions+=2;NFSU2_TR(0x41725a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41725c:{NFSU2_TR(0x41725c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417266;}}
}
B41725e:L41725e:{c.instructions+=2;NFSU2_TR(0x41725e);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B417264:{NFSU2_TR(0x417264);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B417266:L417266:{c.instructions+=2;NFSU2_TR(0x417266);
__builtin_memmove((R+4),(R+24),4);
}
B417268:{NFSU2_TR(0x417268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41726dull));
TAIL_STATIC(0x401820u,401);
}
B41726d:L41726d:{c.instructions+=2;NFSU2_TR(0x41726d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41726f:{NFSU2_TR(0x41726f);
if(r1(R+518)){{goto L41729d;}}
}
B417271:L417271:{c.instructions+=10;NFSU2_TR(0x417271);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B417276:{NFSU2_TR(0x417276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B417278:{NFSU2_TR(0x417278);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41727c:{NFSU2_TR(0x41727c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417280:{NFSU2_TR(0x417280);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417285:{NFSU2_TR(0x417285);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41728b:{NFSU2_TR(0x41728b);
{u32 ea_=u32(u32(7879528u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417291:{NFSU2_TR(0x417291);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417293:{NFSU2_TR(0x417293);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417296:{NFSU2_TR(0x417296);
if(r1(R+518)){{goto L41729d;}}
}
B417298:L417298:{c.instructions+=1;NFSU2_TR(0x417298);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41729d:L41729d:{c.instructions+=3;NFSU2_TR(0x41729d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4172a1:{NFSU2_TR(0x4172a1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4172a3:{NFSU2_TR(0x4172a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4172ad;}}
}
B4172a5:L4172a5:{c.instructions+=3;NFSU2_TR(0x4172a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4172a9:{NFSU2_TR(0x4172a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4172ab:{NFSU2_TR(0x4172ab);
if(r1(R+518)){{goto L4172b8;}}
}
B4172ad:L4172ad:{c.instructions+=2;NFSU2_TR(0x4172ad);
__builtin_memmove((R+4),(R+12),4);
}
B4172af:{NFSU2_TR(0x4172af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4172b4ull));
TAIL_STATIC(0x40d850u,40d);
}
B4172b4:L4172b4:{c.instructions+=1;NFSU2_TR(0x4172b4);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4172b8:L4172b8:{c.instructions+=7;NFSU2_TR(0x4172b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4172bc:{NFSU2_TR(0x4172bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4172bd:{NFSU2_TR(0x4172bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4172be:{NFSU2_TR(0x4172be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4172bf:{NFSU2_TR(0x4172bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4172c0:{NFSU2_TR(0x4172c0);
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
B4172c3:{NFSU2_TR(0x4172c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4172d0:L4172d0:{c.instructions+=13;NFSU2_TR(0x4172d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B4172d3:{NFSU2_TR(0x4172d3);
{u32 ea_=u32(u32(7879536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4172d9:{NFSU2_TR(0x4172d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4172da:{NFSU2_TR(0x4172da);
__builtin_memmove((R+12),(R+4),4);
}
B4172dc:{NFSU2_TR(0x4172dc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4172e0:{NFSU2_TR(0x4172e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4172e3:{NFSU2_TR(0x4172e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4172e9:{NFSU2_TR(0x4172e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4172eb:{NFSU2_TR(0x4172eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4172ec:{NFSU2_TR(0x4172ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4172ef:{NFSU2_TR(0x4172ef);
w1(R+4,u8(0x1ull));
}
B4172f1:{NFSU2_TR(0x4172f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4172f5:{NFSU2_TR(0x4172f5);
if(r1(R+518)){{goto L417302;}}
}
B4172f7:L4172f7:{c.instructions+=3;NFSU2_TR(0x4172f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4172fa:{NFSU2_TR(0x4172fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4172fc:{NFSU2_TR(0x4172fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417302;}}
}
B4172fe:L4172fe:{c.instructions+=2;NFSU2_TR(0x4172fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417300:{NFSU2_TR(0x417300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417304;}}
}
B417302:L417302:{c.instructions+=1;NFSU2_TR(0x417302);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B417304:L417304:{c.instructions+=3;NFSU2_TR(0x417304);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B417309:{NFSU2_TR(0x417309);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41730b:{NFSU2_TR(0x41730b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417316;}}
}
B41730d:L41730d:{c.instructions+=3;NFSU2_TR(0x41730d);
__builtin_memmove((R+0),gp(0x890108),4);
}
B417312:{NFSU2_TR(0x417312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417314:{NFSU2_TR(0x417314);
if(r1(R+518)){{goto L417318;}}
}
B417316:L417316:{c.instructions+=1;NFSU2_TR(0x417316);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B417318:L417318:{c.instructions+=3;NFSU2_TR(0x417318);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B41731d:{NFSU2_TR(0x41731d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41731f:{NFSU2_TR(0x41731f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41732a;}}
}
B417321:L417321:{c.instructions+=3;NFSU2_TR(0x417321);
__builtin_memmove((R+0),gp(0x890104),4);
}
B417326:{NFSU2_TR(0x417326);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417328:{NFSU2_TR(0x417328);
if(r1(R+518)){{goto L41732c;}}
}
B41732a:L41732a:{c.instructions+=1;NFSU2_TR(0x41732a);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B41732c:L41732c:{c.instructions+=3;NFSU2_TR(0x41732c);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B417331:{NFSU2_TR(0x417331);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417333:{NFSU2_TR(0x417333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417342;}}
}
B417335:L417335:{c.instructions+=3;NFSU2_TR(0x417335);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417337:{NFSU2_TR(0x417337);
{u32 ea_=u32(u32(7879540u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41733d:{NFSU2_TR(0x41733d);
{goto L417724;}
}
B417342:L417342:{c.instructions+=2;NFSU2_TR(0x417342);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B417345:{NFSU2_TR(0x417345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417351;}}
}
B417347:L417347:{c.instructions+=2;NFSU2_TR(0x417347);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41734b:{NFSU2_TR(0x41734b);
if(r1(R+518)){{goto L417724;}}
}
B417351:L417351:{c.instructions+=2;NFSU2_TR(0x417351);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417353:{NFSU2_TR(0x417353);
if(r1(R+518)){{goto L417724;}}
}
B417359:L417359:{c.instructions+=4;NFSU2_TR(0x417359);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41735f:{NFSU2_TR(0x41735f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417361:{NFSU2_TR(0x417361);
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
B417363:{NFSU2_TR(0x417363);
if(r1(R+518)){{goto L417374;}}
}
B417365:L417365:{c.instructions+=4;NFSU2_TR(0x417365);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1feull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41736b:{NFSU2_TR(0x41736b);
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
B41736d:{NFSU2_TR(0x41736d);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417372:{NFSU2_TR(0x417372);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417379;}}
}
B417374:L417374:{c.instructions+=1;NFSU2_TR(0x417374);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417379:L417379:{c.instructions+=5;NFSU2_TR(0x417379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41737b:{NFSU2_TR(0x41737b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41737c:{NFSU2_TR(0x41737c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41737d:{NFSU2_TR(0x41737d);
__builtin_memmove((R+4),(R+12),4);
}
B41737f:{NFSU2_TR(0x41737f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417382ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B417382:L417382:{c.instructions+=14;NFSU2_TR(0x417382);
__builtin_memmove((R+8),gp(0x890118),4);
}
B417388:{NFSU2_TR(0x417388);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41738b:{NFSU2_TR(0x41738b);
__builtin_memmove((R+24),gp(0x81cb60),4);
}
B417391:{NFSU2_TR(0x417391);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B417393:{NFSU2_TR(0x417393);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417395:{NFSU2_TR(0x417395);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B417398:{NFSU2_TR(0x417398);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41739e:{NFSU2_TR(0x41739e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41739f:{NFSU2_TR(0x41739f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4173a1:{NFSU2_TR(0x4173a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4173a4:{NFSU2_TR(0x4173a4);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(1408u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4173ab:{NFSU2_TR(0x4173ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4173ad:{NFSU2_TR(0x4173ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4173b0:{NFSU2_TR(0x4173b0);
if(r1(R+514)){{goto L4173b6;}}
}
B4173b2:L4173b2:{c.instructions+=2;NFSU2_TR(0x4173b2);
w1(R+8,u8(0x1ull));
}
B4173b4:{NFSU2_TR(0x4173b4);
{goto L4173b8;}
}
B4173b6:L4173b6:{c.instructions+=1;NFSU2_TR(0x4173b6);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B4173b8:L4173b8:{c.instructions+=11;NFSU2_TR(0x4173b8);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4173be:{NFSU2_TR(0x4173be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4173c4:{NFSU2_TR(0x4173c4);
__builtin_memmove((R+0),(R+4),4);
}
B4173c6:{NFSU2_TR(0x4173c6);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B4173c8:{NFSU2_TR(0x4173c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4173cc:{NFSU2_TR(0x4173cc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4173d0:{NFSU2_TR(0x4173d0);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4173d6:{NFSU2_TR(0x4173d6);
{u32 ea_=u32(r4(R+24)+u32(2776u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4173dc:{NFSU2_TR(0x4173dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4173de:{NFSU2_TR(0x4173de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4173e1:{NFSU2_TR(0x4173e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41771c;}}
}
B4173e7:L4173e7:{c.instructions+=5;NFSU2_TR(0x4173e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4173ed:{NFSU2_TR(0x4173ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4173f7:{NFSU2_TR(0x4173f7);
__builtin_memmove((R+0),gp(0x81cb98),4);
}
B4173fc:{NFSU2_TR(0x4173fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4173fe:{NFSU2_TR(0x4173fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41752d;}}
}
B417404:L417404:{c.instructions+=3;NFSU2_TR(0x417404);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B417409:{NFSU2_TR(0x417409);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41740b:{NFSU2_TR(0x41740b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41752d;}}
}
B417411:L417411:{c.instructions+=3;NFSU2_TR(0x417411);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417415:{NFSU2_TR(0x417415);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417417:{NFSU2_TR(0x417417);
if(r1(R+518)){{goto L41752d;}}
}
B41741d:L41741d:{c.instructions+=2;NFSU2_TR(0x41741d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41741f:{NFSU2_TR(0x41741f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41752d;}}
}
B417425:L417425:{c.instructions+=6;NFSU2_TR(0x417425);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B41742a:{NFSU2_TR(0x41742a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41742b:{NFSU2_TR(0x41742b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B417433:{NFSU2_TR(0x417433);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41743b:{NFSU2_TR(0x41743b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B417443:{NFSU2_TR(0x417443);
if(r1(R+518)){{goto L4174b9;}}
}
B417445:L417445:{c.instructions+=2;NFSU2_TR(0x417445);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B417446:{NFSU2_TR(0x417446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4174c5;}}
}
B417448:L417448:{c.instructions+=13;NFSU2_TR(0x417448);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B41744d:{NFSU2_TR(0x41744d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417450:{NFSU2_TR(0x417450);
__builtin_memmove((R+4),gp(0x8900b0),4);
}
B417456:{NFSU2_TR(0x417456);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417459:{NFSU2_TR(0x417459);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41745c:{NFSU2_TR(0x41745c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41745f:{NFSU2_TR(0x41745f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B417462:{NFSU2_TR(0x417462);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+8),r1(U+5)));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B417465:{NFSU2_TR(0x417465);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417469:{NFSU2_TR(0x417469);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41746d:{NFSU2_TR(0x41746d);
__builtin_memmove((R+20),(R+24),4);
}
B41746f:{NFSU2_TR(0x41746f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417473:{NFSU2_TR(0x417473);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41747d;}}
}
B417475:L417475:{c.instructions+=3;NFSU2_TR(0x417475);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417479:{NFSU2_TR(0x417479);
__builtin_memmove((R+20),(R+28),4);
}
B41747b:{NFSU2_TR(0x41747b);
{goto L417485;}
}
B41747d:L41747d:{c.instructions+=2;NFSU2_TR(0x41747d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417481:{NFSU2_TR(0x417481);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417485:L417485:{c.instructions+=7;NFSU2_TR(0x417485);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B41748a:{NFSU2_TR(0x41748a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B41748b:{NFSU2_TR(0x41748b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B41748d:{NFSU2_TR(0x41748d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B417491:{NFSU2_TR(0x417491);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B417493:{NFSU2_TR(0x417493);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B417495:{NFSU2_TR(0x417495);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L417498;}}
}
B417497:L417497:{c.instructions+=1;NFSU2_TR(0x417497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B417498:L417498:{c.instructions+=3;NFSU2_TR(0x417498);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B41749c:{NFSU2_TR(0x41749c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41749e:{NFSU2_TR(0x41749e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4174a1;}}
}
B4174a0:L4174a0:{c.instructions+=1;NFSU2_TR(0x4174a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4174a1:L4174a1:{c.instructions+=5;NFSU2_TR(0x4174a1);
__builtin_memmove((R+8),(R+4),4);
}
B4174a3:{NFSU2_TR(0x4174a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4174a7:{NFSU2_TR(0x4174a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4174ab:{NFSU2_TR(0x4174ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4174ad:{NFSU2_TR(0x4174ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4174b3;}}
}
B4174af:L4174af:{c.instructions+=1;NFSU2_TR(0x4174af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4174b3:L4174b3:{c.instructions+=2;NFSU2_TR(0x4174b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4174b7:{NFSU2_TR(0x4174b7);
{goto L4174bf;}
}
B4174b9:L4174b9:{c.instructions+=1;NFSU2_TR(0x4174b9);
__builtin_memmove((R+8),gp(0x8900b4),4);
}
B4174bf:L4174bf:{c.instructions+=1;NFSU2_TR(0x4174bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4174c5:L4174c5:{c.instructions+=2;NFSU2_TR(0x4174c5);
w4(R+4,u32(0x89e7a0ull));
}
B4174ca:{NFSU2_TR(0x4174ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4174cfull));
TAIL_STATIC(0x401930u,401);
}
B4174cf:L4174cf:{c.instructions+=2;NFSU2_TR(0x4174cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4174d1:{NFSU2_TR(0x4174d1);
if(r1(R+518)){{goto L4174e2;}}
}
B4174d3:L4174d3:{c.instructions+=4;NFSU2_TR(0x4174d3);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B4174d8:{NFSU2_TR(0x4174d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x421ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4174de:{NFSU2_TR(0x4174de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4174e0:{NFSU2_TR(0x4174e0);
if(r1(R+518)){{goto L4174f6;}}
}
B4174e2:L4174e2:{c.instructions+=4;NFSU2_TR(0x4174e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4174e8:{NFSU2_TR(0x4174e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4174eb:{NFSU2_TR(0x4174eb);
{u32 ea_=u32((r4(R+8)*4u)+u32(9037820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4174f2:{NFSU2_TR(0x4174f2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4174f6:L4174f6:{c.instructions+=11;NFSU2_TR(0x4174f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4174fc:{NFSU2_TR(0x4174fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B417500:{NFSU2_TR(0x417500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417501:{NFSU2_TR(0x417501);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417504:{NFSU2_TR(0x417504);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B417508:{NFSU2_TR(0x417508);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417509:{NFSU2_TR(0x417509);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41750c:{NFSU2_TR(0x41750c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41750d:{NFSU2_TR(0x41750d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41750e:{NFSU2_TR(0x41750e);
__builtin_memmove((R+4),(R+12),4);
}
B417510:{NFSU2_TR(0x417510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417515ull));
TAIL_STATIC(0x4084a0u,408);
}
B417515:L417515:{c.instructions+=6;NFSU2_TR(0x417515);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417519:{NFSU2_TR(0x417519);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41751d:{NFSU2_TR(0x41751d);
{u32 ea_=u32(u32(7879536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417523:{NFSU2_TR(0x417523);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417527:{NFSU2_TR(0x417527);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41752b:{NFSU2_TR(0x41752b);
{goto L417531;}
}
B41752d:L41752d:{c.instructions+=1;NFSU2_TR(0x41752d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417531:L417531:{c.instructions+=3;NFSU2_TR(0x417531);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B417536:{NFSU2_TR(0x417536);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417538:{NFSU2_TR(0x417538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417543;}}
}
B41753a:L41753a:{c.instructions+=3;NFSU2_TR(0x41753a);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B41753f:{NFSU2_TR(0x41753f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417541:{NFSU2_TR(0x417541);
if(r1(R+518)){{goto L417557;}}
}
B417543:L417543:{c.instructions+=4;NFSU2_TR(0x417543);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B417549:{NFSU2_TR(0x417549);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x422ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41754f:{NFSU2_TR(0x41754f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417551:{NFSU2_TR(0x417551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417557;}}
}
B417553:L417553:{c.instructions+=2;NFSU2_TR(0x417553);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B417555:{NFSU2_TR(0x417555);
{goto L417559;}
}
B417557:L417557:{c.instructions+=1;NFSU2_TR(0x417557);
w1(R+0,u8(0x1ull));
}
B417559:L417559:{c.instructions+=3;NFSU2_TR(0x417559);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41755d:{NFSU2_TR(0x41755d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41755f:{NFSU2_TR(0x41755f);
if(r1(R+518)){{goto L41767c;}}
}
B417565:L417565:{c.instructions+=3;NFSU2_TR(0x417565);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41756b:{NFSU2_TR(0x41756b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41756d:{NFSU2_TR(0x41756d);
if(r1(R+518)){{goto L41767c;}}
}
B417573:L417573:{c.instructions+=2;NFSU2_TR(0x417573);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417575:{NFSU2_TR(0x417575);
if(r1(R+518)){{goto L41767c;}}
}
B41757b:L41757b:{c.instructions+=3;NFSU2_TR(0x41757b);
__builtin_memmove((R+0),gp(0x89e7f8),4);
}
B417580:{NFSU2_TR(0x417580);
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
B417582:{NFSU2_TR(0x417582);
if(r1(R+518)){{goto L41767c;}}
}
B417588:L417588:{c.instructions+=4;NFSU2_TR(0x417588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41758a:{NFSU2_TR(0x41758a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41758c:{NFSU2_TR(0x41758c);
__builtin_memmove((R+4),(R+12),4);
}
B41758e:{NFSU2_TR(0x41758e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417591ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B417591:L417591:{c.instructions+=9;NFSU2_TR(0x417591);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B417593:{NFSU2_TR(0x417593);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417595:{NFSU2_TR(0x417595);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B417598:{NFSU2_TR(0x417598);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B417599:{NFSU2_TR(0x417599);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B41759b:{NFSU2_TR(0x41759b);
__builtin_memmove((R+24),(R+4),4);
}
B41759d:{NFSU2_TR(0x41759d);
w4(R+4,u32(0x89e7a0ull));
}
B4175a2:{NFSU2_TR(0x4175a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4175a6:{NFSU2_TR(0x4175a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4175abull));
TAIL_STATIC(0x401930u,401);
}
B4175ab:L4175ab:{c.instructions+=3;NFSU2_TR(0x4175ab);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B4175ae:{NFSU2_TR(0x4175ae);
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
B4175b0:{NFSU2_TR(0x4175b0);
if(r1(R+518)){{goto L4175c1;}}
}
B4175b2:L4175b2:{c.instructions+=3;NFSU2_TR(0x4175b2);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B4175b8:{NFSU2_TR(0x4175b8);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(1348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4175bf:{NFSU2_TR(0x4175bf);
{goto L4175cd;}
}
B4175c1:L4175c1:{c.instructions+=2;NFSU2_TR(0x4175c1);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B4175c6:{NFSU2_TR(0x4175c6);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(1340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4175cd:L4175cd:{c.instructions+=3;NFSU2_TR(0x4175cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4175d3:{NFSU2_TR(0x4175d3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4175d7:{NFSU2_TR(0x4175d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4175dcull));
TAIL_STATIC(0x570a60u,570);
}
B4175dc:L4175dc:{c.instructions+=2;NFSU2_TR(0x4175dc);
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
B4175de:{NFSU2_TR(0x4175de);
if(r1(R+518)){{goto L417678;}}
}
B4175e4:L4175e4:{c.instructions+=5;NFSU2_TR(0x4175e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4175ea:{NFSU2_TR(0x4175ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4175ed:{NFSU2_TR(0x4175ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4175f0:{NFSU2_TR(0x4175f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4175f4:{NFSU2_TR(0x4175f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4175f9ull));
TAIL_STATIC(0x5eb200u,5eb);
}
B4175f9:L4175f9:{c.instructions+=8;NFSU2_TR(0x4175f9);
u8 U[4];
w4(U+0,u32(0x41100000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4175fe:{NFSU2_TR(0x4175fe);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417602:{NFSU2_TR(0x417602);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417604:{NFSU2_TR(0x417604);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41760a:{NFSU2_TR(0x41760a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41760c:{NFSU2_TR(0x41760c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41760e:{NFSU2_TR(0x41760e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417611:{NFSU2_TR(0x417611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417623;}}
}
B417613:L417613:{c.instructions+=4;NFSU2_TR(0x417613);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B417619:{NFSU2_TR(0x417619);
u8 U[12];
w4(U+0,u32(u32(u32(0x49cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B417620:{NFSU2_TR(0x417620);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417621:{NFSU2_TR(0x417621);
{goto L417630;}
}
B417623:L417623:{c.instructions+=3;NFSU2_TR(0x417623);
__builtin_memmove((R+0),gp(0x81cb60),4);
}
B417628:{NFSU2_TR(0x417628);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ccull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41762f:{NFSU2_TR(0x41762f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417630:L417630:{c.instructions+=2;NFSU2_TR(0x417630);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B417634:{NFSU2_TR(0x417634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417639ull));
TAIL_STATIC(0x413390u,413);
}
B417639:L417639:{c.instructions+=5;NFSU2_TR(0x417639);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41763d:{NFSU2_TR(0x41763d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41763e:{NFSU2_TR(0x41763e);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B417642:{NFSU2_TR(0x417642);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417645:{NFSU2_TR(0x417645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41764aull));
TAIL_STATIC(0x5764d0u,576);
}
B41764a:L41764a:{c.instructions+=10;NFSU2_TR(0x41764a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41764e:{NFSU2_TR(0x41764e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B417654:{NFSU2_TR(0x417654);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417658:{NFSU2_TR(0x417658);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417659:{NFSU2_TR(0x417659);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B41765b:{NFSU2_TR(0x41765b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417661:{NFSU2_TR(0x417661);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417665:{NFSU2_TR(0x417665);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417669:{NFSU2_TR(0x417669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41766a:{NFSU2_TR(0x41766a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41766full));
TAIL_STATIC(0x401050u,401);
}
B41766f:L41766f:{c.instructions+=3;NFSU2_TR(0x41766f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417673:{NFSU2_TR(0x417673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B417676:{NFSU2_TR(0x417676);
{goto L41767c;}
}
B417678:L417678:{c.instructions+=1;NFSU2_TR(0x417678);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41767c:L41767c:{c.instructions+=3;NFSU2_TR(0x41767c);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B417681:{NFSU2_TR(0x417681);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417683:{NFSU2_TR(0x417683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41768e;}}
}
B417685:L417685:{c.instructions+=3;NFSU2_TR(0x417685);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B41768a:{NFSU2_TR(0x41768a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41768c:{NFSU2_TR(0x41768c);
if(r1(R+518)){{goto L4176a2;}}
}
B41768e:L41768e:{c.instructions+=4;NFSU2_TR(0x41768e);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B417694:{NFSU2_TR(0x417694);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x423ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41769a:{NFSU2_TR(0x41769a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41769c:{NFSU2_TR(0x41769c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4176a2;}}
}
B41769e:L41769e:{c.instructions+=2;NFSU2_TR(0x41769e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4176a0:{NFSU2_TR(0x4176a0);
{goto L4176a4;}
}
B4176a2:L4176a2:{c.instructions+=1;NFSU2_TR(0x4176a2);
w1(R+0,u8(0x1ull));
}
B4176a4:L4176a4:{c.instructions+=3;NFSU2_TR(0x4176a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4176a8:{NFSU2_TR(0x4176a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4176aa:{NFSU2_TR(0x4176aa);
if(r1(R+518)){{goto L417722;}}
}
B4176ac:L4176ac:{c.instructions+=3;NFSU2_TR(0x4176ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x748ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4176b2:{NFSU2_TR(0x4176b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4176b4:{NFSU2_TR(0x4176b4);
if(r1(R+518)){{goto L417722;}}
}
B4176b6:L4176b6:{c.instructions+=2;NFSU2_TR(0x4176b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4176b8:{NFSU2_TR(0x4176b8);
if(r1(R+518)){{goto L417722;}}
}
B4176ba:L4176ba:{c.instructions+=8;NFSU2_TR(0x4176ba);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B4176c0:{NFSU2_TR(0x4176c0);
{u32 ea_=u32(u32(7879536u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4176c6:{NFSU2_TR(0x4176c6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4176c8:{NFSU2_TR(0x4176c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x504ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x504ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x504ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4176ce:{NFSU2_TR(0x4176ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4176cf:{NFSU2_TR(0x4176cf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4176d3:{NFSU2_TR(0x4176d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4176d7:{NFSU2_TR(0x4176d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4176dcull));
TAIL_STATIC(0x576770u,576);
}
B4176dc:L4176dc:{c.instructions+=7;NFSU2_TR(0x4176dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4176df:{NFSU2_TR(0x4176df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4176e2:{NFSU2_TR(0x4176e2);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B4176e7:{NFSU2_TR(0x4176e7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4176ea:{NFSU2_TR(0x4176ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4176ed:{NFSU2_TR(0x4176ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4176f1:{NFSU2_TR(0x4176f1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4176fb;}}
}
B4176f3:L4176f3:{c.instructions+=1;NFSU2_TR(0x4176f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4176fb:L4176fb:{c.instructions+=7;NFSU2_TR(0x4176fb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4176ff:{NFSU2_TR(0x4176ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417700:{NFSU2_TR(0x417700);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B417704:{NFSU2_TR(0x417704);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B417706:{NFSU2_TR(0x417706);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417709:{NFSU2_TR(0x417709);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41770b:{NFSU2_TR(0x41770b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417710ull));
TAIL_STATIC(0x576790u,576);
}
B417710:L417710:{c.instructions+=3;NFSU2_TR(0x417710);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417714:{NFSU2_TR(0x417714);
{u32 ea_=u32(u32(7879536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41771a:{NFSU2_TR(0x41771a);
{goto L417722;}
}
B41771c:L41771c:{c.instructions+=1;NFSU2_TR(0x41771c);
{u32 ea_=u32(r4(R+12)+u32(1904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417722:L417722:{c.instructions+=2;NFSU2_TR(0x417722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417723:{NFSU2_TR(0x417723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417724:L417724:{c.instructions+=4;NFSU2_TR(0x417724);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41772a:{NFSU2_TR(0x41772a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41772c:{NFSU2_TR(0x41772c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41772f:{NFSU2_TR(0x41772f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417735;}}
}
B417731:L417731:{c.instructions+=2;NFSU2_TR(0x417731);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B417733:{NFSU2_TR(0x417733);
{goto L41773b;}
}
B417735:L417735:{c.instructions+=1;NFSU2_TR(0x417735);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41773b:L41773b:{c.instructions+=7;NFSU2_TR(0x41773b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41773e:{NFSU2_TR(0x41773e);
{u32 ea_=u32(r4(R+8)+u32(1128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417744:{NFSU2_TR(0x417744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417745:{NFSU2_TR(0x417745);
{u32 ea_=u32(r4(R+12)+u32(1904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41774b:{NFSU2_TR(0x41774b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41774c:{NFSU2_TR(0x41774c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41774f:{NFSU2_TR(0x41774f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417750:L417750:{c.instructions+=12;NFSU2_TR(0x417750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B417753:{NFSU2_TR(0x417753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417759:{NFSU2_TR(0x417759);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41775a:{NFSU2_TR(0x41775a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41775b:{NFSU2_TR(0x41775b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41775f:{NFSU2_TR(0x41775f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417762:{NFSU2_TR(0x417762);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B417766:{NFSU2_TR(0x417766);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41776a:{NFSU2_TR(0x41776a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41776e:{NFSU2_TR(0x41776e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41776f:{NFSU2_TR(0x41776f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417770:{NFSU2_TR(0x417770);
if(r1(R+518)){{goto L4177aa;}}
}
B417772:L417772:{c.instructions+=3;NFSU2_TR(0x417772);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B417776:{NFSU2_TR(0x417776);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41777a:{NFSU2_TR(0x41777a);
if(r1(R+518)){{goto L4177aa;}}
}
B41777c:L41777c:{c.instructions+=3;NFSU2_TR(0x41777c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41777f:{NFSU2_TR(0x41777f);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B417781:{NFSU2_TR(0x417781);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L417799;}}
}
B417783:L417783:{c.instructions+=5;NFSU2_TR(0x417783);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41778a:{NFSU2_TR(0x41778a);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B41778d:{NFSU2_TR(0x41778d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B417790:{NFSU2_TR(0x417790);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B417797:{NFSU2_TR(0x417797);
{goto L4177ac;}
}
B417799:L417799:{c.instructions+=5;NFSU2_TR(0x417799);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B41779c:{NFSU2_TR(0x41779c);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41779e:{NFSU2_TR(0x41779e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4177a1:{NFSU2_TR(0x4177a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4177a8:{NFSU2_TR(0x4177a8);
{goto L4177ac;}
}
B4177aa:L4177aa:{c.instructions+=1;NFSU2_TR(0x4177aa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4177ac:L4177ac:{c.instructions+=3;NFSU2_TR(0x4177ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4177af:{NFSU2_TR(0x4177af);
__builtin_memmove((R+4),(R+20),4);
}
B4177b1:{NFSU2_TR(0x4177b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4177b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4177b4:L4177b4:{c.instructions+=8;NFSU2_TR(0x4177b4);
__builtin_memmove((R+12),(R+0),4);
}
B4177b6:{NFSU2_TR(0x4177b6);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B4177b8:{NFSU2_TR(0x4177b8);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4177ba:{NFSU2_TR(0x4177ba);
__builtin_memmove((R+4),(R+24),4);
}
B4177bc:{NFSU2_TR(0x4177bc);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B4177be:{NFSU2_TR(0x4177be);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4177c3:{NFSU2_TR(0x4177c3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4177c5:{NFSU2_TR(0x4177c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4177caull));
TAIL_STATIC(0x5d4380u,5d4);
}
B4177ca:L4177ca:{c.instructions+=2;NFSU2_TR(0x4177ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4177cc:{NFSU2_TR(0x4177cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41787f;}}
}
B4177d2:L4177d2:{c.instructions+=3;NFSU2_TR(0x4177d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4177d6:{NFSU2_TR(0x4177d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4177d8:{NFSU2_TR(0x4177d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417815;}}
}
B4177da:L4177da:{c.instructions+=3;NFSU2_TR(0x4177da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4177db:{NFSU2_TR(0x4177db);
__builtin_memmove((R+4),(R+24),4);
}
B4177dd:{NFSU2_TR(0x4177dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4177e2ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B4177e2:L4177e2:{c.instructions+=6;NFSU2_TR(0x4177e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4177e5:{NFSU2_TR(0x4177e5);
__builtin_memmove((R+4),(R+0),4);
}
B4177e7:{NFSU2_TR(0x4177e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4177ea:{NFSU2_TR(0x4177ea);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B4177ed:{NFSU2_TR(0x4177ed);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+12))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B4177ef:{NFSU2_TR(0x4177ef);
if(r1(R+518)){{goto L4177fc;}}
}
B4177f1:L4177f1:{c.instructions+=4;NFSU2_TR(0x4177f1);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B4177f3:{NFSU2_TR(0x4177f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4177f5:{NFSU2_TR(0x4177f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4177fa:{NFSU2_TR(0x4177fa);
if(r1(R+518)){{goto L417801;}}
}
B4177fc:L4177fc:{c.instructions+=1;NFSU2_TR(0x4177fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417801:L417801:{c.instructions+=3;NFSU2_TR(0x417801);
__builtin_memmove((R+4),(R+24),4);
}
B417803:{NFSU2_TR(0x417803);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B417804:{NFSU2_TR(0x417804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417809ull));
TAIL_STATIC(0x5d4380u,5d4);
}
B417809:L417809:{c.instructions+=2;NFSU2_TR(0x417809);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41780b:{NFSU2_TR(0x41780b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4177d2u);}goto L4177d2;}}
}
B41780d:L41780d:{c.instructions+=3;NFSU2_TR(0x41780d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417811:{NFSU2_TR(0x417811);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417813:{NFSU2_TR(0x417813);
if(r1(R+518)){{goto L41787f;}}
}
B417815:L417815:{c.instructions+=13;NFSU2_TR(0x417815);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417819:{NFSU2_TR(0x417819);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41781f:{NFSU2_TR(0x41781f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B417826:{NFSU2_TR(0x417826);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417829:{NFSU2_TR(0x417829);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41782c:{NFSU2_TR(0x41782c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41782f:{NFSU2_TR(0x41782f);
{u32 ea_=u32(r4(R+0)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417833:{NFSU2_TR(0x417833);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417836:{NFSU2_TR(0x417836);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41783c:{NFSU2_TR(0x41783c);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417842:{NFSU2_TR(0x417842);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417844:{NFSU2_TR(0x417844);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417847:{NFSU2_TR(0x417847);
if(r1(R+518)){{goto L417851;}}
}
B417849:L417849:{c.instructions+=2;NFSU2_TR(0x417849);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41784b:{NFSU2_TR(0x41784b);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417851:L417851:{c.instructions+=9;NFSU2_TR(0x417851);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B417853:{NFSU2_TR(0x417853);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B417855:{NFSU2_TR(0x417855);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B417857:{NFSU2_TR(0x417857);
{u32 ea_=u32(u32(7879560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41785d:{NFSU2_TR(0x41785d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41785f:{NFSU2_TR(0x41785f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417861:{NFSU2_TR(0x417861);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417864:{NFSU2_TR(0x417864);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417866:{NFSU2_TR(0x417866);
if(r1(R+514)){{goto L417875;}}
}
B417868:L417868:{c.instructions+=7;NFSU2_TR(0x417868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417869:{NFSU2_TR(0x417869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41786a:{NFSU2_TR(0x41786a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41786b:{NFSU2_TR(0x41786b);
w4(R+0,u32(0x1ull));
}
B417870:{NFSU2_TR(0x417870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417871:{NFSU2_TR(0x417871);
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
B417874:{NFSU2_TR(0x417874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417875:L417875:{c.instructions+=7;NFSU2_TR(0x417875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417876:{NFSU2_TR(0x417876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417877:{NFSU2_TR(0x417877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417878:{NFSU2_TR(0x417878);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41787a:{NFSU2_TR(0x41787a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41787b:{NFSU2_TR(0x41787b);
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
B41787e:{NFSU2_TR(0x41787e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41787f:L41787f:{c.instructions+=7;NFSU2_TR(0x41787f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417880:{NFSU2_TR(0x417880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417881:{NFSU2_TR(0x417881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417882:{NFSU2_TR(0x417882);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B417884:{NFSU2_TR(0x417884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417885:{NFSU2_TR(0x417885);
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
B417888:{NFSU2_TR(0x417888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417890:L417890:{c.instructions+=7;NFSU2_TR(0x417890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B417893:{NFSU2_TR(0x417893);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417894:{NFSU2_TR(0x417894);
__builtin_memmove((R+24),(R+4),4);
}
B417896:{NFSU2_TR(0x417896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41789c:{NFSU2_TR(0x41789c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41789f:{NFSU2_TR(0x41789f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4178a1:{NFSU2_TR(0x4178a1);
if(r1(R+518)){{goto L41797b;}}
}
B4178a7:L4178a7:{c.instructions+=4;NFSU2_TR(0x4178a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4178ad:{NFSU2_TR(0x4178ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4178b0:{NFSU2_TR(0x4178b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4178b2:{NFSU2_TR(0x4178b2);
if(r1(R+518)){{goto L41797b;}}
}
B4178b8:L4178b8:{c.instructions+=3;NFSU2_TR(0x4178b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4178be:{NFSU2_TR(0x4178be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4178c1:{NFSU2_TR(0x4178c1);
if(r1(R+518)){{goto L41797b;}}
}
B4178c7:L4178c7:{c.instructions+=4;NFSU2_TR(0x4178c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4178c8:{NFSU2_TR(0x4178c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4178cc:{NFSU2_TR(0x4178cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4178ce:{NFSU2_TR(0x4178ce);
if(r1(R+518)){{goto L41797a;}}
}
B4178d4:L4178d4:{c.instructions+=3;NFSU2_TR(0x4178d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4178d5:{NFSU2_TR(0x4178d5);
__builtin_memmove((R+4),(R+28),4);
}
B4178d7:{NFSU2_TR(0x4178d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4178dcull));
TAIL_STATIC(0x401f20u,401);
}
B4178dc:L4178dc:{c.instructions+=9;NFSU2_TR(0x4178dc);
__builtin_memmove((R+12),(R+0),4);
}
B4178de:{NFSU2_TR(0x4178de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4178e4:{NFSU2_TR(0x4178e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4178eb:{NFSU2_TR(0x4178eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4178ee:{NFSU2_TR(0x4178ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4178f4:{NFSU2_TR(0x4178f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4178f7:{NFSU2_TR(0x4178f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4178fb:{NFSU2_TR(0x4178fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4178fc:{NFSU2_TR(0x4178fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417901ull));
TAIL_STATIC(0x412170u,412);
}
B417901:L417901:{c.instructions+=9;NFSU2_TR(0x417901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417904:{NFSU2_TR(0x417904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41790a:{NFSU2_TR(0x41790a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41790e:{NFSU2_TR(0x41790e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417912:{NFSU2_TR(0x417912);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417916:{NFSU2_TR(0x417916);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41791c:{NFSU2_TR(0x41791c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41791e:{NFSU2_TR(0x41791e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417921:{NFSU2_TR(0x417921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41795a;}}
}
B417923:L417923:{c.instructions+=5;NFSU2_TR(0x417923);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417927:{NFSU2_TR(0x417927);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41792d:{NFSU2_TR(0x41792d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41792f:{NFSU2_TR(0x41792f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417932:{NFSU2_TR(0x417932);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417950;}}
}
B417934:L417934:{c.instructions+=6;NFSU2_TR(0x417934);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417938:{NFSU2_TR(0x417938);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41793a:{NFSU2_TR(0x41793a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B41793e:{NFSU2_TR(0x41793e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41793f:{NFSU2_TR(0x41793f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417942:{NFSU2_TR(0x417942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417947ull));
TAIL_STATIC(0x401050u,401);
}
B417947:L417947:{c.instructions+=3;NFSU2_TR(0x417947);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41794b:{NFSU2_TR(0x41794b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B41794e:{NFSU2_TR(0x41794e);
{goto L417962;}
}
B417950:L417950:{c.instructions+=2;NFSU2_TR(0x417950);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B417958:{NFSU2_TR(0x417958);
{goto L417962;}
}
B41795a:L41795a:{c.instructions+=1;NFSU2_TR(0x41795a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B417962:L417962:{c.instructions+=9;NFSU2_TR(0x417962);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417966:{NFSU2_TR(0x417966);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41796a:{NFSU2_TR(0x41796a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41796e:{NFSU2_TR(0x41796e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41796f:{NFSU2_TR(0x41796f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417970:{NFSU2_TR(0x417970);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417971:{NFSU2_TR(0x417971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417972:{NFSU2_TR(0x417972);
__builtin_memmove((R+4),(R+12),4);
}
B417974:{NFSU2_TR(0x417974);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417979ull));
TAIL_STATIC(0x410b50u,410);
}
B417979:L417979:{c.instructions+=1;NFSU2_TR(0x417979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41797a:L41797a:{c.instructions+=1;NFSU2_TR(0x41797a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41797b:L41797b:{c.instructions+=3;NFSU2_TR(0x41797b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41797c:{NFSU2_TR(0x41797c);
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
B41797f:{NFSU2_TR(0x41797f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417980:L417980:{c.instructions+=5;NFSU2_TR(0x417980);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B417985:{NFSU2_TR(0x417985);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417986:{NFSU2_TR(0x417986);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B417988:{NFSU2_TR(0x417988);
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
B41798a:{NFSU2_TR(0x41798a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4179e0;}}
}
B41798c:L41798c:{c.instructions+=5;NFSU2_TR(0x41798c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41798d:{NFSU2_TR(0x41798d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B417991:{NFSU2_TR(0x417991);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417992:{NFSU2_TR(0x417992);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417993:{NFSU2_TR(0x417993);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B417995:L417995:{c.instructions+=4;NFSU2_TR(0x417995);
__builtin_memmove((R+0),gp(0x883dbc),4);
}
B41799a:{NFSU2_TR(0x41799a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41799d:{NFSU2_TR(0x41799d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41799f:{NFSU2_TR(0x41799f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4179a2:L4179a2:{c.instructions+=3;NFSU2_TR(0x4179a2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B4179a5:{NFSU2_TR(0x4179a5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4179a7:{NFSU2_TR(0x4179a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4179cd;}}
}
B4179a9:L4179a9:{c.instructions+=3;NFSU2_TR(0x4179a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4179b0:{NFSU2_TR(0x4179b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4179b2:{NFSU2_TR(0x4179b2);
if(r1(R+518)){{goto L4179cd;}}
}
B4179b4:L4179b4:{c.instructions+=4;NFSU2_TR(0x4179b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4179b7:{NFSU2_TR(0x4179b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B4179ba:{NFSU2_TR(0x4179ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4179bc:{NFSU2_TR(0x4179bc);
if(r1(R+518)){{goto L4179cd;}}
}
B4179be:L4179be:{c.instructions+=4;NFSU2_TR(0x4179be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4179bf:{NFSU2_TR(0x4179bf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B4179c2:{NFSU2_TR(0x4179c2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4179c5:{NFSU2_TR(0x4179c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4179a2u);}goto L4179a2;}}
}
B4179c7:L4179c7:{c.instructions+=2;NFSU2_TR(0x4179c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4179c8:{NFSU2_TR(0x4179c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4179cdull));
TAIL_STATIC(0x410750u,410);
}
B4179cd:L4179cd:{c.instructions+=5;NFSU2_TR(0x4179cd);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B4179d2:{NFSU2_TR(0x4179d2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4179d3:{NFSU2_TR(0x4179d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x114ull))));
}
B4179d9:{NFSU2_TR(0x4179d9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4179db:{NFSU2_TR(0x4179db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x417995u);}goto L417995;}}
}
B4179dd:L4179dd:{c.instructions+=3;NFSU2_TR(0x4179dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4179de:{NFSU2_TR(0x4179de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4179df:{NFSU2_TR(0x4179df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4179e0:L4179e0:{c.instructions+=2;NFSU2_TR(0x4179e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4179e1:{NFSU2_TR(0x4179e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4179f0:L4179f0:{c.instructions+=10;NFSU2_TR(0x4179f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4179f1:{NFSU2_TR(0x4179f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4179f2:{NFSU2_TR(0x4179f2);
__builtin_memmove((R+24),(R+4),4);
}
B4179f4:{NFSU2_TR(0x4179f4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4179f6:{NFSU2_TR(0x4179f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4179f9:{NFSU2_TR(0x4179f9);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B4179fe:{NFSU2_TR(0x4179fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B417a05:{NFSU2_TR(0x417a05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417a06:{NFSU2_TR(0x417a06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417a07:{NFSU2_TR(0x417a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417a0cull));
TAIL_STATIC(0x575620u,575);
}
B417a0c:L417a0c:{c.instructions+=6;NFSU2_TR(0x417a0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B417a0f:{NFSU2_TR(0x417a0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417a11:{NFSU2_TR(0x417a11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417a12:{NFSU2_TR(0x417a12);
__builtin_memmove((R+4),(R+24),4);
}
B417a14:{NFSU2_TR(0x417a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417a17:{NFSU2_TR(0x417a17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417a1cull));
TAIL_STATIC(0x409900u,409);
}
B417a1c:L417a1c:{c.instructions+=2;NFSU2_TR(0x417a1c);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B417a22:{NFSU2_TR(0x417a22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417a2c;}}
}
B417a24:L417a24:{c.instructions+=2;NFSU2_TR(0x417a24);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B417a2a:{NFSU2_TR(0x417a2a);
if(r1(R+518)){{goto L417a34;}}
}
B417a2c:L417a2c:{c.instructions+=2;NFSU2_TR(0x417a2c);
{u32 ea_=u32(u32(7879588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417a32:{NFSU2_TR(0x417a32);
{goto L417a3a;}
}
B417a34:L417a34:{c.instructions+=1;NFSU2_TR(0x417a34);
{u32 ea_=u32(u32(7879584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417a3a:L417a3a:{c.instructions+=5;NFSU2_TR(0x417a3a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417a3c:{NFSU2_TR(0x417a3c);
{u32 ea_=u32(u32(7879596u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417a42:{NFSU2_TR(0x417a42);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417a44:{NFSU2_TR(0x417a44);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417a47:{NFSU2_TR(0x417a47);
if(r1(R+514)){{goto L417a51;}}
}
B417a49:L417a49:{c.instructions+=2;NFSU2_TR(0x417a49);
__builtin_memmove((R+8),gp(0x783bac),4);
}
B417a4f:{NFSU2_TR(0x417a4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B417a51:L417a51:{c.instructions+=7;NFSU2_TR(0x417a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417a54:{NFSU2_TR(0x417a54);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B417a58:{NFSU2_TR(0x417a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417a5b:{NFSU2_TR(0x417a5b);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B417a60:{NFSU2_TR(0x417a60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B417a62:{NFSU2_TR(0x417a62);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B417a64:{NFSU2_TR(0x417a64);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L417a8d;}}
}
B417a66:L417a66:{c.instructions+=1;NFSU2_TR(0x417a66);
{goto L417a70;}
}
B417a70:L417a70:{c.instructions+=3;NFSU2_TR(0x417a70);
__builtin_memmove((R+0),gp(0x883dc4),4);
}
B417a75:{NFSU2_TR(0x417a75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B417a78:{NFSU2_TR(0x417a78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417a7dull));
TAIL_STATIC(0x4092d0u,409);
}
B417a7d:L417a7d:{c.instructions+=5;NFSU2_TR(0x417a7d);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B417a82:{NFSU2_TR(0x417a82);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B417a83:{NFSU2_TR(0x417a83);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x108ull))));
}
B417a89:{NFSU2_TR(0x417a89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B417a8b:{NFSU2_TR(0x417a8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x417a70u);}goto L417a70;}}
}
B417a8d:L417a8d:{c.instructions+=2;NFSU2_TR(0x417a8d);
w4(R+4,u32(0x81e810ull));
}
B417a92:{NFSU2_TR(0x417a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417a97ull));
TAIL_STATIC(0x412840u,412);
}
B417a97:L417a97:{c.instructions+=7;NFSU2_TR(0x417a97);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B417a9d:{NFSU2_TR(0x417a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417a9e:{NFSU2_TR(0x417a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417aa1:{NFSU2_TR(0x417aa1);
__builtin_memmove((R+0),(R+24),4);
}
B417aa3:{NFSU2_TR(0x417aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417aa4:{NFSU2_TR(0x417aa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417aa5:{NFSU2_TR(0x417aa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417ab0:L417ab0:{c.instructions+=14;NFSU2_TR(0x417ab0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ab1:{NFSU2_TR(0x417ab1);
__builtin_memmove((R+20),(R+16),4);
}
B417ab3:{NFSU2_TR(0x417ab3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ab4:{NFSU2_TR(0x417ab4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ab5:{NFSU2_TR(0x417ab5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ab6:{NFSU2_TR(0x417ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417ab9:{NFSU2_TR(0x417ab9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417aba:{NFSU2_TR(0x417aba);
__builtin_memmove((R+28),(R+4),4);
}
B417abc:{NFSU2_TR(0x417abc);
u8 U[4];
w4(U+0,u32(0x7851acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ac1:{NFSU2_TR(0x417ac1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B417ac3:{NFSU2_TR(0x417ac3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ac4:{NFSU2_TR(0x417ac4);
__builtin_memmove((R+4),(R+24),4);
}
B417ac6:{NFSU2_TR(0x417ac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417ac9:{NFSU2_TR(0x417ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417aceull));
TAIL_STATIC(0x578ce0u,578);
}
B417ace:L417ace:{c.instructions+=3;NFSU2_TR(0x417ace);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417acf:{NFSU2_TR(0x417acf);
__builtin_memmove((R+4),(R+24),4);
}
B417ad1:{NFSU2_TR(0x417ad1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417ad6ull));
TAIL_STATIC(0x571770u,571);
}
B417ad6:L417ad6:{c.instructions+=7;NFSU2_TR(0x417ad6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ad8:{NFSU2_TR(0x417ad8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ada:{NFSU2_TR(0x417ada);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417adc:{NFSU2_TR(0x417adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B417adf:{NFSU2_TR(0x417adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ae0:{NFSU2_TR(0x417ae0);
__builtin_memmove((R+4),(R+24),4);
}
B417ae2:{NFSU2_TR(0x417ae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417ae7ull));
TAIL_STATIC(0x571640u,571);
}
B417ae7:L417ae7:{c.instructions+=7;NFSU2_TR(0x417ae7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ae9:{NFSU2_TR(0x417ae9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417aeb:{NFSU2_TR(0x417aeb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417aed:{NFSU2_TR(0x417aed);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B417af0:{NFSU2_TR(0x417af0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417af1:{NFSU2_TR(0x417af1);
__builtin_memmove((R+4),(R+24),4);
}
B417af3:{NFSU2_TR(0x417af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417af8ull));
TAIL_STATIC(0x571640u,571);
}
B417af8:L417af8:{c.instructions+=2;NFSU2_TR(0x417af8);
u8 U[8];
__builtin_memmove((U+0),gp(0x883dc8),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+12)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B417afe:{NFSU2_TR(0x417afe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L417b6c;}}
}
B417b00:L417b00:{c.instructions+=2;NFSU2_TR(0x417b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417b03:{NFSU2_TR(0x417b03);
{goto L417b10;}
}
B417b10:L417b10:{c.instructions+=7;NFSU2_TR(0x417b10);
__builtin_memmove((R+8),gp(0x883dc4),4);
}
B417b16:{NFSU2_TR(0x417b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417b19:{NFSU2_TR(0x417b19);
u8 U[4];
w4(U+0,u32(0x7845c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b1e:{NFSU2_TR(0x417b1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b20:{NFSU2_TR(0x417b20);
__builtin_memmove((R+4),(R+24),4);
}
B417b22:{NFSU2_TR(0x417b22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B417b25:{NFSU2_TR(0x417b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b2aull));
TAIL_STATIC(0x578ce0u,578);
}
B417b2a:L417b2a:{c.instructions+=4;NFSU2_TR(0x417b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B417b30:{NFSU2_TR(0x417b30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b31:{NFSU2_TR(0x417b31);
__builtin_memmove((R+4),(R+24),4);
}
B417b33:{NFSU2_TR(0x417b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b38ull));
TAIL_STATIC(0x5716c0u,571);
}
B417b38:L417b38:{c.instructions+=7;NFSU2_TR(0x417b38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b3a:{NFSU2_TR(0x417b3a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b3c:{NFSU2_TR(0x417b3c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b3e:{NFSU2_TR(0x417b3e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
}
B417b44:{NFSU2_TR(0x417b44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b45:{NFSU2_TR(0x417b45);
__builtin_memmove((R+4),(R+24),4);
}
B417b47:{NFSU2_TR(0x417b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b4cull));
TAIL_STATIC(0x571640u,571);
}
B417b4c:L417b4c:{c.instructions+=2;NFSU2_TR(0x417b4c);
__builtin_memmove((R+4),(R+24),4);
}
B417b4e:{NFSU2_TR(0x417b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b53ull));
TAIL_STATIC(0x578d90u,578);
}
B417b53:L417b53:{c.instructions+=7;NFSU2_TR(0x417b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417b56:{NFSU2_TR(0x417b56);
__builtin_memmove((R+0),gp(0x883dc8),4);
}
B417b5b:{NFSU2_TR(0x417b5b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B417b5c:{NFSU2_TR(0x417b5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x108ull))));
}
B417b62:{NFSU2_TR(0x417b62);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B417b64:{NFSU2_TR(0x417b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417b67:{NFSU2_TR(0x417b67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x417b10u);}goto L417b10;}}
}
B417b69:L417b69:{c.instructions+=1;NFSU2_TR(0x417b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B417b6c:L417b6c:{c.instructions+=7;NFSU2_TR(0x417b6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b6e:{NFSU2_TR(0x417b6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b70:{NFSU2_TR(0x417b70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b72:{NFSU2_TR(0x417b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B417b75:{NFSU2_TR(0x417b75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b76:{NFSU2_TR(0x417b76);
__builtin_memmove((R+4),(R+24),4);
}
B417b78:{NFSU2_TR(0x417b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b7dull));
TAIL_STATIC(0x571640u,571);
}
B417b7d:L417b7d:{c.instructions+=3;NFSU2_TR(0x417b7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b7e:{NFSU2_TR(0x417b7e);
w4(R+4,u32(0x81e810ull));
}
B417b83:{NFSU2_TR(0x417b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b88ull));
TAIL_STATIC(0x412720u,412);
}
B417b88:L417b88:{c.instructions+=4;NFSU2_TR(0x417b88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B417b8b:{NFSU2_TR(0x417b8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417b8c:{NFSU2_TR(0x417b8c);
__builtin_memmove((R+4),(R+24),4);
}
B417b8e:{NFSU2_TR(0x417b8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b93ull));
TAIL_STATIC(0x571770u,571);
}
B417b93:L417b93:{c.instructions+=2;NFSU2_TR(0x417b93);
__builtin_memmove((R+4),(R+24),4);
}
B417b95:{NFSU2_TR(0x417b95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417b9aull));
TAIL_STATIC(0x578d90u,578);
}
B417b9a:L417b9a:{c.instructions+=6;NFSU2_TR(0x417b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417b9b:{NFSU2_TR(0x417b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417b9c:{NFSU2_TR(0x417b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417b9d:{NFSU2_TR(0x417b9d);
__builtin_memmove((R+16),(R+20),4);
}
B417b9f:{NFSU2_TR(0x417b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417ba0:{NFSU2_TR(0x417ba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417bb0:L417bb0:{c.instructions+=9;NFSU2_TR(0x417bb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bb1:{NFSU2_TR(0x417bb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bb2:{NFSU2_TR(0x417bb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bb3:{NFSU2_TR(0x417bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B417bb7:{NFSU2_TR(0x417bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417bba:{NFSU2_TR(0x417bba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B417bbc:{NFSU2_TR(0x417bbc);
__builtin_memmove((R+20),(R+4),4);
}
B417bbe:{NFSU2_TR(0x417bbe);
__builtin_memmove((R+4),(R+24),4);
}
B417bc0:{NFSU2_TR(0x417bc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417bc3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B417bc3:L417bc3:{c.instructions+=2;NFSU2_TR(0x417bc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417bc5:{NFSU2_TR(0x417bc5);
if(r1(R+518)){{goto L417bfe;}}
}
B417bc7:L417bc7:{c.instructions+=3;NFSU2_TR(0x417bc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417bcd:{NFSU2_TR(0x417bcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417bcf:{NFSU2_TR(0x417bcf);
if(r1(R+518)){{goto L417bea;}}
}
B417bd1:L417bd1:{c.instructions+=5;NFSU2_TR(0x417bd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417bd7:{NFSU2_TR(0x417bd7);
__builtin_memmove((R+8),(R+4),4);
}
B417bd9:{NFSU2_TR(0x417bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bda:{NFSU2_TR(0x417bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417bde:{NFSU2_TR(0x417bde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417be3ull));
TAIL_STATIC(0x4094a0u,409);
}
B417be3:L417be3:{c.instructions+=3;NFSU2_TR(0x417be3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B417be6:{NFSU2_TR(0x417be6);
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
B417be8:{NFSU2_TR(0x417be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417c1e;}}
}
B417bea:L417bea:{c.instructions+=3;NFSU2_TR(0x417bea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417bf0:{NFSU2_TR(0x417bf0);
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
B417bf2:{NFSU2_TR(0x417bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417c1e;}}
}
B417bf4:L417bf4:{c.instructions+=3;NFSU2_TR(0x417bf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bf5:{NFSU2_TR(0x417bf5);
__builtin_memmove((R+4),(R+20),4);
}
B417bf7:{NFSU2_TR(0x417bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417bfcull));
TAIL_STATIC(0x409800u,409);
}
B417bfc:L417bfc:{c.instructions+=1;NFSU2_TR(0x417bfc);
{goto L417c12;}
}
B417bfe:L417bfe:{c.instructions+=5;NFSU2_TR(0x417bfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417bff:{NFSU2_TR(0x417bff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B417c05:{NFSU2_TR(0x417c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c06:{NFSU2_TR(0x417c06);
__builtin_memmove((R+4),(R+20),4);
}
B417c08:{NFSU2_TR(0x417c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417c0dull));
TAIL_STATIC(0x410de0u,410);
}
B417c0d:L417c0d:{c.instructions+=3;NFSU2_TR(0x417c0d);
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
B417c0f:{NFSU2_TR(0x417c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417c10:{NFSU2_TR(0x417c10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417c1e;}}
}
B417c12:L417c12:{c.instructions+=2;NFSU2_TR(0x417c12);
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
B417c14:{NFSU2_TR(0x417c14);
if(r1(R+518)){{goto L417c1e;}}
}
B417c16:L417c16:{c.instructions+=5;NFSU2_TR(0x417c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417c17:{NFSU2_TR(0x417c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417c18:{NFSU2_TR(0x417c18);
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
B417c1a:{NFSU2_TR(0x417c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417c1b:{NFSU2_TR(0x417c1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417c1e:L417c1e:{c.instructions+=5;NFSU2_TR(0x417c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417c1f:{NFSU2_TR(0x417c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417c20:{NFSU2_TR(0x417c20);
w1(R+0,u8(0x1ull));
}
B417c22:{NFSU2_TR(0x417c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417c23:{NFSU2_TR(0x417c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417c30:L417c30:{c.instructions+=9;NFSU2_TR(0x417c30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c31:{NFSU2_TR(0x417c31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B417c35:{NFSU2_TR(0x417c35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c36:{NFSU2_TR(0x417c36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c37:{NFSU2_TR(0x417c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B417c3b:{NFSU2_TR(0x417c3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c3c:{NFSU2_TR(0x417c3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c3d:{NFSU2_TR(0x417c3d);
__builtin_memmove((R+24),(R+4),4);
}
B417c3f:{NFSU2_TR(0x417c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417c44ull));
TAIL_STATIC(0x410ca0u,410);
}
B417c44:L417c44:{c.instructions+=2;NFSU2_TR(0x417c44);
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
B417c47:{NFSU2_TR(0x417c47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417c57;}}
}
B417c49:L417c49:{c.instructions+=6;NFSU2_TR(0x417c49);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417c4b:{NFSU2_TR(0x417c4b);
__builtin_memmove((R+0),(R+518),1);
}
B417c4e:{NFSU2_TR(0x417c4e);
__builtin_memmove((R+4),(R+24),4);
}
B417c50:{NFSU2_TR(0x417c50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c51:{NFSU2_TR(0x417c51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c52:{NFSU2_TR(0x417c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417c57ull));
TAIL_STATIC(0x410ca0u,410);
}
B417c57:L417c57:{c.instructions+=4;NFSU2_TR(0x417c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417c58:{NFSU2_TR(0x417c58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417c59:{NFSU2_TR(0x417c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417c5a:{NFSU2_TR(0x417c5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417c60:L417c60:{c.instructions+=9;NFSU2_TR(0x417c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B417c63:{NFSU2_TR(0x417c63);
__builtin_memmove((R+8),gp(0x88d218),4);
}
B417c69:{NFSU2_TR(0x417c69);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B417c6b:{NFSU2_TR(0x417c6b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B417c6d:{NFSU2_TR(0x417c6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417c6f:{NFSU2_TR(0x417c6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417c73:{NFSU2_TR(0x417c73);
u8 U[4];
w4(U+0,u32(0x497423f0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B417c7b:{NFSU2_TR(0x417c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417c7f:{NFSU2_TR(0x417c7f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L417d77;}}
}
B417c85:L417c85:{c.instructions+=6;NFSU2_TR(0x417c85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c86:{NFSU2_TR(0x417c86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B417c8a:{NFSU2_TR(0x417c8a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c8b:{NFSU2_TR(0x417c8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c8c:{NFSU2_TR(0x417c8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417c8d:{NFSU2_TR(0x417c8d);
__builtin_memmove((R+4),(R+4),4);
}
B417c90:L417c90:{c.instructions+=3;NFSU2_TR(0x417c90);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B417c97:{NFSU2_TR(0x417c97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417c99:{NFSU2_TR(0x417c99);
if(r1(R+518)){{goto L417d59;}}
}
B417c9f:L417c9f:{c.instructions+=3;NFSU2_TR(0x417c9f);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B417ca4:{NFSU2_TR(0x417ca4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417ca6:{NFSU2_TR(0x417ca6);
if(r1(R+518)){{goto L417cc1;}}
}
B417ca8:L417ca8:{c.instructions+=4;NFSU2_TR(0x417ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417cab:{NFSU2_TR(0x417cab);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B417cae:{NFSU2_TR(0x417cae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417cb0:{NFSU2_TR(0x417cb0);
if(r1(R+518)){{goto L417cc1;}}
}
B417cb2:L417cb2:{c.instructions+=5;NFSU2_TR(0x417cb2);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417cb6:{NFSU2_TR(0x417cb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417cb8:{NFSU2_TR(0x417cb8);
__builtin_memmove((R+4),(R+518),1);
}
B417cbb:{NFSU2_TR(0x417cbb);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B417cbf:{NFSU2_TR(0x417cbf);
{goto L417cc9;}
}
B417cc1:L417cc1:{c.instructions+=2;NFSU2_TR(0x417cc1);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B417cc5:{NFSU2_TR(0x417cc5);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B417cc9:L417cc9:{c.instructions+=4;NFSU2_TR(0x417cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B417ccd:{NFSU2_TR(0x417ccd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417cce:{NFSU2_TR(0x417cce);
__builtin_memmove((R+4),(R+28),4);
}
B417cd0:{NFSU2_TR(0x417cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417cd5ull));
TAIL_STATIC(0x5d4480u,5d4);
}
B417cd5:L417cd5:{c.instructions+=2;NFSU2_TR(0x417cd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417cd7:{NFSU2_TR(0x417cd7);
if(r1(R+518)){{goto L417d59;}}
}
B417cdd:L417cdd:{c.instructions+=8;NFSU2_TR(0x417cdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417ce1:{NFSU2_TR(0x417ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417ce5:{NFSU2_TR(0x417ce5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ce7:{NFSU2_TR(0x417ce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ce8:{NFSU2_TR(0x417ce8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ce9:{NFSU2_TR(0x417ce9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417cea:{NFSU2_TR(0x417cea);
__builtin_memmove((R+4),(R+28),4);
}
B417cec:{NFSU2_TR(0x417cec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417cf1ull));
TAIL_STATIC(0x5d8c90u,5d8);
}
B417cf1:L417cf1:{c.instructions+=3;NFSU2_TR(0x417cf1);
__builtin_memmove((R+24),(R+0),4);
}
B417cf3:{NFSU2_TR(0x417cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417cf5:{NFSU2_TR(0x417cf5);
if(r1(R+518)){{goto L417d59;}}
}
B417cf7:L417cf7:{c.instructions+=4;NFSU2_TR(0x417cf7);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B417cfb:{NFSU2_TR(0x417cfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417cfd:{NFSU2_TR(0x417cfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417d00:{NFSU2_TR(0x417d00);
if(r1(R+518)){{goto L417d07;}}
}
B417d02:L417d02:{c.instructions+=2;NFSU2_TR(0x417d02);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B417d05:{NFSU2_TR(0x417d05);
{goto L417d0a;}
}
B417d07:L417d07:{c.instructions+=1;NFSU2_TR(0x417d07);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B417d0a:L417d0a:{c.instructions+=3;NFSU2_TR(0x417d0a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B417d0d:{NFSU2_TR(0x417d0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417d0f:{NFSU2_TR(0x417d0f);
if(r1(R+518)){{goto L417d59;}}
}
B417d11:L417d11:{c.instructions+=4;NFSU2_TR(0x417d11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d12:{NFSU2_TR(0x417d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d13:{NFSU2_TR(0x417d13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d14:{NFSU2_TR(0x417d14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417d19ull));
TAIL_STATIC(0x409520u,409);
}
B417d19:L417d19:{c.instructions+=3;NFSU2_TR(0x417d19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B417d1c:{NFSU2_TR(0x417d1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417d1e:{NFSU2_TR(0x417d1e);
if(r1(R+518)){{goto L417d59;}}
}
B417d20:L417d20:{c.instructions+=7;NFSU2_TR(0x417d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417d23:{NFSU2_TR(0x417d23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d24:{NFSU2_TR(0x417d24);
__builtin_memmove((R+0),(R+8),4);
}
B417d26:{NFSU2_TR(0x417d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d27:{NFSU2_TR(0x417d27);
w4(R+4,u32(0x88f298ull));
}
B417d2c:{NFSU2_TR(0x417d2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417d30:{NFSU2_TR(0x417d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417d35ull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B417d35:L417d35:{c.instructions+=4;NFSU2_TR(0x417d35);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417d3b:{NFSU2_TR(0x417d3b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417d3d:{NFSU2_TR(0x417d3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417d40:{NFSU2_TR(0x417d40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417d57;}}
}
B417d42:L417d42:{c.instructions+=4;NFSU2_TR(0x417d42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417d46:{NFSU2_TR(0x417d46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417d48:{NFSU2_TR(0x417d48);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417d4b:{NFSU2_TR(0x417d4b);
if(r1(R+514)){{goto L417d57;}}
}
B417d4d:L417d4d:{c.instructions+=3;NFSU2_TR(0x417d4d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417d51:{NFSU2_TR(0x417d51);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417d55:{NFSU2_TR(0x417d55);
{goto L417d59;}
}
B417d57:L417d57:{c.instructions+=1;NFSU2_TR(0x417d57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417d59:L417d59:{c.instructions+=6;NFSU2_TR(0x417d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417d5d:{NFSU2_TR(0x417d5d);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B417d62:{NFSU2_TR(0x417d62);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B417d63:{NFSU2_TR(0x417d63);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B417d65:{NFSU2_TR(0x417d65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417d69:{NFSU2_TR(0x417d69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x417c90u);}goto L417c90;}}
}
B417d6f:L417d6f:{c.instructions+=5;NFSU2_TR(0x417d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417d73:{NFSU2_TR(0x417d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B417d74:{NFSU2_TR(0x417d74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B417d75:{NFSU2_TR(0x417d75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B417d76:{NFSU2_TR(0x417d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B417d77:L417d77:{c.instructions+=2;NFSU2_TR(0x417d77);
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
B417d7a:{NFSU2_TR(0x417d7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B417d80:L417d80:{c.instructions+=23;NFSU2_TR(0x417d80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d81:{NFSU2_TR(0x417d81);
__builtin_memmove((R+20),(R+16),4);
}
B417d83:{NFSU2_TR(0x417d83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B417d86:{NFSU2_TR(0x417d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B417d89:{NFSU2_TR(0x417d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417d8c:{NFSU2_TR(0x417d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B417d8e:{NFSU2_TR(0x417d8e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d8f:{NFSU2_TR(0x417d8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d90:{NFSU2_TR(0x417d90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417d91:{NFSU2_TR(0x417d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B417d94:{NFSU2_TR(0x417d94);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B417d98:{NFSU2_TR(0x417d98);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B417d9b:{NFSU2_TR(0x417d9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417d9f:{NFSU2_TR(0x417d9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417da3:{NFSU2_TR(0x417da3);
w4(R+12,u32(0x1ull));
}
B417da8:{NFSU2_TR(0x417da8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417dac:{NFSU2_TR(0x417dac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417db0:{NFSU2_TR(0x417db0);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417db6:{NFSU2_TR(0x417db6);
{u32 ea_=u32(u32(7879644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417dbc:{NFSU2_TR(0x417dbc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B417dbe:{NFSU2_TR(0x417dbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417dc0:{NFSU2_TR(0x417dc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417dc3:{NFSU2_TR(0x417dc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417dcd;}}
}
B417dc5:L417dc5:{c.instructions+=2;NFSU2_TR(0x417dc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417dc7:{NFSU2_TR(0x417dc7);
{u32 ea_=u32(u32(7879644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417dcd:L417dcd:{c.instructions+=56;NFSU2_TR(0x417dcd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B417dd1:{NFSU2_TR(0x417dd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B417dd4:{NFSU2_TR(0x417dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417dd8:{NFSU2_TR(0x417dd8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417ddc:{NFSU2_TR(0x417ddc);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417de2:{NFSU2_TR(0x417de2);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B417de4:{NFSU2_TR(0x417de4);
{u32 ea_=u32(u32(7879652u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B417dea:{NFSU2_TR(0x417dea);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B417dec:{NFSU2_TR(0x417dec);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B417dee:{NFSU2_TR(0x417dee);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417df2:{NFSU2_TR(0x417df2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B417df4:{NFSU2_TR(0x417df4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417df8:{NFSU2_TR(0x417df8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B417dfc:{NFSU2_TR(0x417dfc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B417dff:{NFSU2_TR(0x417dff);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e03:{NFSU2_TR(0x417e03);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417e07:{NFSU2_TR(0x417e07);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417e0d:{NFSU2_TR(0x417e0d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B417e0f:{NFSU2_TR(0x417e0f);
{u32 ea_=u32(u32(7879648u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B417e15:{NFSU2_TR(0x417e15);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B417e17:{NFSU2_TR(0x417e17);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e1b:{NFSU2_TR(0x417e1b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e1f:{NFSU2_TR(0x417e1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B417e23:{NFSU2_TR(0x417e23);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B417e26:{NFSU2_TR(0x417e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e2a:{NFSU2_TR(0x417e2a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417e2e:{NFSU2_TR(0x417e2e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417e34:{NFSU2_TR(0x417e34);
{u32 ea_=u32(u32(7879648u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417e3a:{NFSU2_TR(0x417e3a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e3e:{NFSU2_TR(0x417e3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417e42:{NFSU2_TR(0x417e42);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e46:{NFSU2_TR(0x417e46);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e4a:{NFSU2_TR(0x417e4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B417e4e:{NFSU2_TR(0x417e4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B417e51:{NFSU2_TR(0x417e51);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e55:{NFSU2_TR(0x417e55);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417e59:{NFSU2_TR(0x417e59);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417e5f:{NFSU2_TR(0x417e5f);
{u32 ea_=u32(u32(7879652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417e65:{NFSU2_TR(0x417e65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B417e67:{NFSU2_TR(0x417e67);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e6b:{NFSU2_TR(0x417e6b);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417e6f:{NFSU2_TR(0x417e6f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B417e73:{NFSU2_TR(0x417e73);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B417e77:{NFSU2_TR(0x417e77);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B417e7a:{NFSU2_TR(0x417e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e7e:{NFSU2_TR(0x417e7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B417e81:{NFSU2_TR(0x417e81);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417e85:{NFSU2_TR(0x417e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417e89:{NFSU2_TR(0x417e89);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417e8f:{NFSU2_TR(0x417e8f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417e93:{NFSU2_TR(0x417e93);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417e99:{NFSU2_TR(0x417e99);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417e9d:{NFSU2_TR(0x417e9d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B417e9f:{NFSU2_TR(0x417e9f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417ea1:{NFSU2_TR(0x417ea1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417ea4:{NFSU2_TR(0x417ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L417eac;}}
}
B417ea6:L417ea6:{c.instructions+=2;NFSU2_TR(0x417ea6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417ea8:{NFSU2_TR(0x417ea8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417eac:L417eac:{c.instructions+=7;NFSU2_TR(0x417eac);
{u32 ea_=u32(u32(7879652u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B417eb2:{NFSU2_TR(0x417eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B417eb5:{NFSU2_TR(0x417eb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B417eb7:{NFSU2_TR(0x417eb7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B417eb9:{NFSU2_TR(0x417eb9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B417ebd:{NFSU2_TR(0x417ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417ec1:{NFSU2_TR(0x417ec1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4180f6u,418);}
}
B417ec7:L417ec7:{c.instructions+=5;NFSU2_TR(0x417ec7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B417eca:{NFSU2_TR(0x417eca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417ece:{NFSU2_TR(0x417ece);
__builtin_memmove((R+28),(R+28),4);
}
B417ed0:{NFSU2_TR(0x417ed0);
u8 U[14];
__builtin_memmove((U+6),gp(0x88d218),4);
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
B417ed6:{NFSU2_TR(0x417ed6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4180f6u,418);}
}
B417edc:L417edc:{c.instructions+=4;NFSU2_TR(0x417edc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B417ee3:{NFSU2_TR(0x417ee3);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B417ee7:{NFSU2_TR(0x417ee7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417eeb:{NFSU2_TR(0x417eeb);
if(r1(R+518)){TAIL_STATIC(0x4180e2u,418);}
}
B417ef1:L417ef1:{c.instructions+=8;NFSU2_TR(0x417ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417ef5:{NFSU2_TR(0x417ef5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ef6:{NFSU2_TR(0x417ef6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ef7:{NFSU2_TR(0x417ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+8),(U+0),4);
}
B417efa:{NFSU2_TR(0x417efa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417efb:{NFSU2_TR(0x417efb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B417efe:{NFSU2_TR(0x417efe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417eff:{NFSU2_TR(0x417eff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x417f04ull));
TAIL_STATIC(0x43d410u,43d);
}
B417f04:L417f04:{c.instructions+=3;NFSU2_TR(0x417f04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B417f07:{NFSU2_TR(0x417f07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417f09:{NFSU2_TR(0x417f09);
if(r1(R+518)){TAIL_STATIC(0x4180e2u,418);}
}
B417f0f:L417f0f:{c.instructions+=3;NFSU2_TR(0x417f0f);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B417f14:{NFSU2_TR(0x417f14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B417f1c:{NFSU2_TR(0x417f1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4180e2u,418);}
}
B417f22:L417f22:{c.instructions+=1;NFSU2_TR(0x417f22);
{goto L417f30;}
}
B417f24:L417f24:{c.instructions+=2;NFSU2_TR(0x417f24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B417f28:{NFSU2_TR(0x417f28);
{goto L417f30;}
}
B417f30:L417f30:{c.instructions+=31;NFSU2_TR(0x417f30);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B417f34:{NFSU2_TR(0x417f34);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417f38:{NFSU2_TR(0x417f38);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B417f3c:{NFSU2_TR(0x417f3c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B417f3f:{NFSU2_TR(0x417f3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417f43:{NFSU2_TR(0x417f43);
u8 U[14];
w4(U+0,u32(u32(u32(0xa6ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B417f4b:{NFSU2_TR(0x417f4b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417f4f:{NFSU2_TR(0x417f4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417f53:{NFSU2_TR(0x417f53);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417f59:{NFSU2_TR(0x417f59);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B417f60:{NFSU2_TR(0x417f60);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B417f64:{NFSU2_TR(0x417f64);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417f68:{NFSU2_TR(0x417f68);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417f6c:{NFSU2_TR(0x417f6c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417f70:{NFSU2_TR(0x417f70);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417f76:{NFSU2_TR(0x417f76);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B417f7a:{NFSU2_TR(0x417f7a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417f7e:{NFSU2_TR(0x417f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B417f82:{NFSU2_TR(0x417f82);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417f88:{NFSU2_TR(0x417f88);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B417f8c:{NFSU2_TR(0x417f8c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B417f92:{NFSU2_TR(0x417f92);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B417f94:{NFSU2_TR(0x417f94);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B417f96:{NFSU2_TR(0x417f96);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B417f98:{NFSU2_TR(0x417f98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B417f9a:{NFSU2_TR(0x417f9a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B417f9c:{NFSU2_TR(0x417f9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B417f9e:{NFSU2_TR(0x417f9e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B417fa4:{NFSU2_TR(0x417fa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417fa6:{NFSU2_TR(0x417fa6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B417fa9:{NFSU2_TR(0x417fa9);
if(r1(R+514)){{goto L417fb2;}}
}
B417fab:L417fab:{c.instructions+=2;NFSU2_TR(0x417fab);
w4(R+0,u32(0x1ull));
}
B417fb0:{NFSU2_TR(0x417fb0);
{goto L417fb4;}
}
B417fb2:L417fb2:{c.instructions+=1;NFSU2_TR(0x417fb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B417fb4:L417fb4:{c.instructions+=8;NFSU2_TR(0x417fb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B417fb7:{NFSU2_TR(0x417fb7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B417fb9:{NFSU2_TR(0x417fb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B417fbc:{NFSU2_TR(0x417fbc);
{u32 ea_=u32(u32(7879656u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B417fc2:{NFSU2_TR(0x417fc2);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+0))));
}
B417fc4:{NFSU2_TR(0x417fc4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B417fc6:{NFSU2_TR(0x417fc6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417fc9:{NFSU2_TR(0x417fc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x41806cu,418);}
}
B417fcf:L417fcf:{c.instructions+=3;NFSU2_TR(0x417fcf);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B417fd1:{NFSU2_TR(0x417fd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B417fd4:{NFSU2_TR(0x417fd4);
if(r1(R+518)){{goto L417fdb;}}
}
B417fd6:L417fd6:{c.instructions+=2;NFSU2_TR(0x417fd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B417fd9:{NFSU2_TR(0x417fd9);
{goto L417fde;}
}
B417fdb:L417fdb:{c.instructions+=1;NFSU2_TR(0x417fdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B417fde:L417fde:{c.instructions+=3;NFSU2_TR(0x417fde);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B417fe1:{NFSU2_TR(0x417fe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B417fe3:{NFSU2_TR(0x417fe3);
if(r1(R+518)){TAIL_STATIC(0x41806cu,418);}
}
B417fe9:L417fe9:{c.instructions+=7;NFSU2_TR(0x417fe9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417fed:{NFSU2_TR(0x417fed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417fef:{NFSU2_TR(0x417fef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417ff3:{NFSU2_TR(0x417ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B417ff7:{NFSU2_TR(0x417ff7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B417ffb:{NFSU2_TR(0x417ffb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B417ffc:{NFSU2_TR(0x417ffc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x418000u,418);
}
XIT:NFSU2_TR_EXIT(0x417,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
