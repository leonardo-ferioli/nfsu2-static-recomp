#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_549(u8* __restrict R,Cpu& c);
u32 body_54a(u8* __restrict R,Cpu& c);
u32 body_54b(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5b2(u8* __restrict R,Cpu& c);
u32 body_5b3(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x550,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x550,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_550(u8* __restrict R,Cpu& c);
u32 page_550(Cpu& c){return body_550(c.regs.data(),c);}
__attribute__((noinline)) u32 body_550(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x550000:goto L550000;
case 0x550002:c.instructions+=1;goto B550002;
case 0x550005:goto L550005;
case 0x55000a:c.instructions+=1;goto B55000a;
case 0x55000f:goto L55000f;
case 0x550015:c.instructions+=2;goto B550015;
case 0x55001a:c.instructions+=1;goto B55001a;
case 0x55001f:goto L55001f;
case 0x550025:c.instructions+=7;goto B550025;
case 0x55002b:c.instructions+=6;goto B55002b;
case 0x550031:c.instructions+=5;goto B550031;
case 0x550037:c.instructions+=4;goto B550037;
case 0x55003a:c.instructions+=3;goto B55003a;
case 0x55003c:c.instructions+=2;goto B55003c;
case 0x55003f:c.instructions+=1;goto B55003f;
case 0x550041:goto L550041;
case 0x550044:c.instructions+=1;goto B550044;
case 0x550047:goto L550047;
case 0x55004a:c.instructions+=4;goto B55004a;
case 0x55004d:c.instructions+=3;goto B55004d;
case 0x55004f:c.instructions+=2;goto B55004f;
case 0x550052:c.instructions+=1;goto B550052;
case 0x550054:goto L550054;
case 0x550057:c.instructions+=1;goto B550057;
case 0x55005a:goto L55005a;
case 0x55005c:c.instructions+=1;goto B55005c;
case 0x55005f:goto L55005f;
case 0x550064:c.instructions+=1;goto B550064;
case 0x550069:goto L550069;
case 0x55006e:c.instructions+=1;goto B55006e;
case 0x550073:goto L550073;
case 0x550079:c.instructions+=2;goto B550079;
case 0x55007e:c.instructions+=1;goto B55007e;
case 0x550083:goto L550083;
case 0x550089:c.instructions+=7;goto B550089;
case 0x55008f:c.instructions+=6;goto B55008f;
case 0x550095:c.instructions+=5;goto B550095;
case 0x55009b:c.instructions+=4;goto B55009b;
case 0x55009e:c.instructions+=3;goto B55009e;
case 0x5500a0:c.instructions+=2;goto B5500a0;
case 0x5500a3:c.instructions+=1;goto B5500a3;
case 0x5500a5:goto L5500a5;
case 0x5500a8:c.instructions+=1;goto B5500a8;
case 0x5500ab:goto L5500ab;
case 0x5500ae:c.instructions+=4;goto B5500ae;
case 0x5500b1:c.instructions+=3;goto B5500b1;
case 0x5500b3:c.instructions+=2;goto B5500b3;
case 0x5500b6:c.instructions+=1;goto B5500b6;
case 0x5500b8:goto L5500b8;
case 0x5500bb:c.instructions+=1;goto B5500bb;
case 0x5500be:goto L5500be;
case 0x5500c0:c.instructions+=1;goto B5500c0;
case 0x5500c3:goto L5500c3;
case 0x5500c8:c.instructions+=1;goto B5500c8;
case 0x5500cd:goto L5500cd;
case 0x5500d3:c.instructions+=2;goto B5500d3;
case 0x5500d8:c.instructions+=1;goto B5500d8;
case 0x5500dd:goto L5500dd;
case 0x5500e3:c.instructions+=7;goto B5500e3;
case 0x5500e9:c.instructions+=6;goto B5500e9;
case 0x5500ef:c.instructions+=5;goto B5500ef;
case 0x5500f5:c.instructions+=4;goto B5500f5;
case 0x5500f8:c.instructions+=3;goto B5500f8;
case 0x5500fa:c.instructions+=2;goto B5500fa;
case 0x5500fd:c.instructions+=1;goto B5500fd;
case 0x5500ff:goto L5500ff;
case 0x550102:c.instructions+=1;goto B550102;
case 0x550105:goto L550105;
case 0x550108:c.instructions+=4;goto B550108;
case 0x55010b:c.instructions+=3;goto B55010b;
case 0x55010d:c.instructions+=2;goto B55010d;
case 0x550110:c.instructions+=1;goto B550110;
case 0x550112:goto L550112;
case 0x550115:c.instructions+=1;goto B550115;
case 0x550118:goto L550118;
case 0x55011a:c.instructions+=1;goto B55011a;
case 0x55011d:goto L55011d;
case 0x550122:goto L550122;
case 0x550127:goto L550127;
case 0x55012d:c.instructions+=2;goto B55012d;
case 0x550132:c.instructions+=1;goto B550132;
case 0x550137:goto L550137;
case 0x55013d:c.instructions+=7;goto B55013d;
case 0x550143:c.instructions+=6;goto B550143;
case 0x550149:c.instructions+=5;goto B550149;
case 0x55014f:c.instructions+=4;goto B55014f;
case 0x550152:c.instructions+=3;goto B550152;
case 0x550154:c.instructions+=2;goto B550154;
case 0x550157:c.instructions+=1;goto B550157;
case 0x550159:goto L550159;
case 0x55015c:c.instructions+=1;goto B55015c;
case 0x55015f:goto L55015f;
case 0x550162:c.instructions+=4;goto B550162;
case 0x550165:c.instructions+=3;goto B550165;
case 0x550167:c.instructions+=2;goto B550167;
case 0x55016a:c.instructions+=1;goto B55016a;
case 0x55016c:goto L55016c;
case 0x55016f:c.instructions+=1;goto B55016f;
case 0x550172:goto L550172;
case 0x550174:c.instructions+=1;goto B550174;
case 0x550177:goto L550177;
case 0x55017a:c.instructions+=2;goto B55017a;
case 0x55017c:c.instructions+=1;goto B55017c;
case 0x55017e:goto L55017e;
case 0x550181:c.instructions+=1;goto B550181;
case 0x550183:goto L550183;
case 0x550185:goto L550185;
case 0x550187:c.instructions+=1;goto B550187;
case 0x550189:goto L550189;
case 0x55018c:c.instructions+=4;goto B55018c;
case 0x55018d:c.instructions+=3;goto B55018d;
case 0x550193:c.instructions+=2;goto B550193;
case 0x550198:c.instructions+=1;goto B550198;
case 0x55019d:goto L55019d;
case 0x55019e:c.instructions+=2;goto B55019e;
case 0x55019f:c.instructions+=1;goto B55019f;
case 0x5501a0:goto L5501a0;
case 0x5501a7:c.instructions+=1;goto B5501a7;
case 0x5501a9:goto L5501a9;
case 0x5501ac:c.instructions+=4;goto B5501ac;
case 0x5501b2:c.instructions+=3;goto B5501b2;
case 0x5501b3:c.instructions+=2;goto B5501b3;
case 0x5501b8:c.instructions+=1;goto B5501b8;
case 0x5501bd:goto L5501bd;
case 0x5501be:c.instructions+=2;goto B5501be;
case 0x5501bf:c.instructions+=1;goto B5501bf;
case 0x5501c0:goto L5501c0;
case 0x5501c3:c.instructions+=4;goto B5501c3;
case 0x5501c9:c.instructions+=3;goto B5501c9;
case 0x5501ca:c.instructions+=2;goto B5501ca;
case 0x5501cf:c.instructions+=1;goto B5501cf;
case 0x5501d4:goto L5501d4;
case 0x5501d5:c.instructions+=2;goto B5501d5;
case 0x5501d6:c.instructions+=1;goto B5501d6;
case 0x5501e0:goto L5501e0;
case 0x5501e1:c.instructions+=8;goto B5501e1;
case 0x5501e3:c.instructions+=7;goto B5501e3;
case 0x5501e4:c.instructions+=6;goto B5501e4;
case 0x5501e5:c.instructions+=5;goto B5501e5;
case 0x5501e7:c.instructions+=4;goto B5501e7;
case 0x5501ea:c.instructions+=3;goto B5501ea;
case 0x5501ec:c.instructions+=2;goto B5501ec;
case 0x5501ed:c.instructions+=1;goto B5501ed;
case 0x5501ef:goto L5501ef;
case 0x5501f0:c.instructions+=1;goto B5501f0;
case 0x5501f5:goto L5501f5;
case 0x5501f8:c.instructions+=2;goto B5501f8;
case 0x5501fa:c.instructions+=1;goto B5501fa;
case 0x5501fc:goto L5501fc;
case 0x550201:c.instructions+=2;goto B550201;
case 0x550203:c.instructions+=1;goto B550203;
case 0x550208:goto L550208;
case 0x55020a:c.instructions+=1;goto B55020a;
case 0x55020c:goto L55020c;
case 0x550211:c.instructions+=2;goto B550211;
case 0x550213:c.instructions+=1;goto B550213;
case 0x550215:goto L550215;
case 0x550218:c.instructions+=3;goto B550218;
case 0x550219:c.instructions+=2;goto B550219;
case 0x55021e:c.instructions+=1;goto B55021e;
case 0x550223:goto L550223;
case 0x550225:c.instructions+=2;goto B550225;
case 0x550227:c.instructions+=1;goto B550227;
case 0x550229:goto L550229;
case 0x55022c:c.instructions+=2;goto B55022c;
case 0x55022e:c.instructions+=1;goto B55022e;
case 0x550230:goto L550230;
case 0x550235:c.instructions+=1;goto B550235;
case 0x55023a:goto L55023a;
case 0x55023d:c.instructions+=3;goto B55023d;
case 0x550240:c.instructions+=2;goto B550240;
case 0x550242:c.instructions+=1;goto B550242;
case 0x550244:goto L550244;
case 0x550247:c.instructions+=2;goto B550247;
case 0x550249:c.instructions+=1;goto B550249;
case 0x55024b:goto L55024b;
case 0x55024d:goto L55024d;
case 0x55024f:c.instructions+=1;goto B55024f;
case 0x550251:goto L550251;
case 0x550254:c.instructions+=1;goto B550254;
case 0x550256:goto L550256;
case 0x550258:c.instructions+=2;goto B550258;
case 0x55025b:c.instructions+=1;goto B55025b;
case 0x550260:goto L550260;
case 0x550263:c.instructions+=1;goto B550263;
case 0x55026a:goto L55026a;
case 0x550271:goto L550271;
case 0x550274:c.instructions+=3;goto B550274;
case 0x550276:c.instructions+=2;goto B550276;
case 0x55027b:c.instructions+=1;goto B55027b;
case 0x55027d:goto L55027d;
case 0x550280:c.instructions+=2;goto B550280;
case 0x550283:c.instructions+=1;goto B550283;
case 0x550285:goto L550285;
case 0x550288:c.instructions+=1;goto B550288;
case 0x55028a:goto L55028a;
case 0x55028c:goto L55028c;
case 0x55028d:c.instructions+=2;goto B55028d;
case 0x550292:c.instructions+=1;goto B550292;
case 0x550297:goto L550297;
case 0x55029d:c.instructions+=6;goto B55029d;
case 0x5502a0:c.instructions+=5;goto B5502a0;
case 0x5502a1:c.instructions+=4;goto B5502a1;
case 0x5502a6:c.instructions+=3;goto B5502a6;
case 0x5502ab:c.instructions+=2;goto B5502ab;
case 0x5502ac:c.instructions+=1;goto B5502ac;
case 0x5502b1:goto L5502b1;
case 0x5502b4:goto L5502b4;
case 0x5502b7:c.instructions+=2;goto B5502b7;
case 0x5502ba:c.instructions+=1;goto B5502ba;
case 0x5502bc:goto L5502bc;
case 0x5502bf:c.instructions+=1;goto B5502bf;
case 0x5502c1:goto L5502c1;
case 0x5502c3:goto L5502c3;
case 0x5502c5:c.instructions+=3;goto B5502c5;
case 0x5502c6:c.instructions+=2;goto B5502c6;
case 0x5502cb:c.instructions+=1;goto B5502cb;
case 0x5502d0:goto L5502d0;
case 0x5502d5:c.instructions+=2;goto B5502d5;
case 0x5502da:c.instructions+=1;goto B5502da;
case 0x5502df:goto L5502df;
case 0x5502e1:c.instructions+=3;goto B5502e1;
case 0x5502e2:c.instructions+=2;goto B5502e2;
case 0x5502e7:c.instructions+=1;goto B5502e7;
case 0x5502ec:goto L5502ec;
case 0x5502ef:c.instructions+=2;goto B5502ef;
case 0x5502f1:c.instructions+=1;goto B5502f1;
case 0x5502f6:goto L5502f6;
case 0x5502f8:c.instructions+=1;goto B5502f8;
case 0x5502fd:goto L5502fd;
case 0x550300:c.instructions+=6;goto B550300;
case 0x550303:c.instructions+=5;goto B550303;
case 0x550304:c.instructions+=4;goto B550304;
case 0x550306:c.instructions+=3;goto B550306;
case 0x550307:c.instructions+=2;goto B550307;
case 0x550308:c.instructions+=1;goto B550308;
case 0x55030a:goto L55030a;
case 0x55030d:c.instructions+=3;goto B55030d;
case 0x55030e:c.instructions+=2;goto B55030e;
case 0x550313:c.instructions+=1;goto B550313;
case 0x550318:goto L550318;
case 0x550319:c.instructions+=1;goto B550319;
case 0x55031c:goto L55031c;
case 0x55031e:c.instructions+=3;goto B55031e;
case 0x55031f:c.instructions+=2;goto B55031f;
case 0x550324:c.instructions+=1;goto B550324;
case 0x550329:goto L550329;
case 0x55032a:c.instructions+=1;goto B55032a;
case 0x550330:goto L550330;
case 0x550335:c.instructions+=5;goto B550335;
case 0x550338:c.instructions+=4;goto B550338;
case 0x55033a:c.instructions+=3;goto B55033a;
case 0x55033b:c.instructions+=2;goto B55033b;
case 0x55033d:c.instructions+=1;goto B55033d;
case 0x55033f:goto L55033f;
case 0x550342:c.instructions+=3;goto B550342;
case 0x550347:c.instructions+=2;goto B550347;
case 0x550348:c.instructions+=1;goto B550348;
case 0x55034d:goto L55034d;
case 0x55034f:c.instructions+=1;goto B55034f;
case 0x550354:goto L550354;
case 0x550357:c.instructions+=2;goto B550357;
case 0x550359:c.instructions+=1;goto B550359;
case 0x55035b:goto L55035b;
case 0x55035d:c.instructions+=12;goto B55035d;
case 0x550363:c.instructions+=11;goto B550363;
case 0x550364:c.instructions+=10;goto B550364;
case 0x55036a:c.instructions+=9;goto B55036a;
case 0x55036b:c.instructions+=8;goto B55036b;
case 0x550371:c.instructions+=7;goto B550371;
case 0x550372:c.instructions+=6;goto B550372;
case 0x550378:c.instructions+=5;goto B550378;
case 0x55037e:c.instructions+=4;goto B55037e;
case 0x55037f:c.instructions+=3;goto B55037f;
case 0x550380:c.instructions+=2;goto B550380;
case 0x550382:c.instructions+=1;goto B550382;
case 0x550387:goto L550387;
case 0x550389:c.instructions+=3;goto B550389;
case 0x55038a:c.instructions+=2;goto B55038a;
case 0x55038c:c.instructions+=1;goto B55038c;
case 0x550391:goto L550391;
case 0x550393:c.instructions+=2;goto B550393;
case 0x550395:c.instructions+=1;goto B550395;
case 0x55039a:goto L55039a;
case 0x55039b:c.instructions+=2;goto B55039b;
case 0x55039e:c.instructions+=1;goto B55039e;
case 0x55039f:goto L55039f;
case 0x5503a1:c.instructions+=4;goto B5503a1;
case 0x5503a3:c.instructions+=3;goto B5503a3;
case 0x5503a4:c.instructions+=2;goto B5503a4;
case 0x5503a6:c.instructions+=1;goto B5503a6;
case 0x5503ab:goto L5503ab;
case 0x5503ad:c.instructions+=2;goto B5503ad;
case 0x5503af:c.instructions+=1;goto B5503af;
case 0x5503b4:goto L5503b4;
case 0x5503b5:c.instructions+=2;goto B5503b5;
case 0x5503b8:c.instructions+=1;goto B5503b8;
case 0x5503b9:goto L5503b9;
case 0x5503be:c.instructions+=8;goto B5503be;
case 0x5503c1:c.instructions+=7;goto B5503c1;
case 0x5503c2:c.instructions+=6;goto B5503c2;
case 0x5503c4:c.instructions+=5;goto B5503c4;
case 0x5503c6:c.instructions+=4;goto B5503c6;
case 0x5503c7:c.instructions+=3;goto B5503c7;
case 0x5503cb:c.instructions+=2;goto B5503cb;
case 0x5503cf:c.instructions+=1;goto B5503cf;
case 0x5503d1:goto L5503d1;
case 0x5503d4:goto L5503d4;
case 0x5503d7:c.instructions+=1;goto B5503d7;
case 0x5503d9:goto L5503d9;
case 0x5503dc:c.instructions+=1;goto B5503dc;
case 0x5503de:goto L5503de;
case 0x5503e0:c.instructions+=1;goto B5503e0;
case 0x5503e5:goto L5503e5;
case 0x5503e8:c.instructions+=2;goto B5503e8;
case 0x5503ea:c.instructions+=1;goto B5503ea;
case 0x5503ec:goto L5503ec;
case 0x5503ef:c.instructions+=14;goto B5503ef;
case 0x5503f2:c.instructions+=13;goto B5503f2;
case 0x5503f8:c.instructions+=12;goto B5503f8;
case 0x5503f9:c.instructions+=11;goto B5503f9;
case 0x5503fa:c.instructions+=10;goto B5503fa;
case 0x550400:c.instructions+=9;goto B550400;
case 0x550401:c.instructions+=8;goto B550401;
case 0x550407:c.instructions+=7;goto B550407;
case 0x550408:c.instructions+=6;goto B550408;
case 0x55040e:c.instructions+=5;goto B55040e;
case 0x55040f:c.instructions+=4;goto B55040f;
case 0x550412:c.instructions+=3;goto B550412;
case 0x550413:c.instructions+=2;goto B550413;
case 0x550415:c.instructions+=1;goto B550415;
case 0x55041a:goto L55041a;
case 0x55041c:goto L55041c;
case 0x55041e:goto L55041e;
case 0x550420:c.instructions+=3;goto B550420;
case 0x550421:c.instructions+=2;goto B550421;
case 0x550423:c.instructions+=1;goto B550423;
case 0x550428:goto L550428;
case 0x55042c:c.instructions+=1;goto B55042c;
case 0x550430:goto L550430;
case 0x550433:c.instructions+=4;goto B550433;
case 0x550434:c.instructions+=3;goto B550434;
case 0x550437:c.instructions+=2;goto B550437;
case 0x550439:c.instructions+=1;goto B550439;
case 0x55043b:goto L55043b;
case 0x550440:c.instructions+=1;goto B550440;
case 0x550442:goto L550442;
case 0x550445:c.instructions+=2;goto B550445;
case 0x550447:c.instructions+=1;goto B550447;
case 0x550449:goto L550449;
case 0x55044a:c.instructions+=1;goto B55044a;
case 0x55044f:goto L55044f;
case 0x550452:c.instructions+=2;goto B550452;
case 0x550454:c.instructions+=1;goto B550454;
case 0x550456:goto L550456;
case 0x55045b:c.instructions+=2;goto B55045b;
case 0x55045d:c.instructions+=1;goto B55045d;
case 0x550462:goto L550462;
case 0x550464:c.instructions+=1;goto B550464;
case 0x550466:goto L550466;
case 0x55046b:c.instructions+=2;goto B55046b;
case 0x55046d:c.instructions+=1;goto B55046d;
case 0x55046f:goto L55046f;
case 0x550472:c.instructions+=3;goto B550472;
case 0x550473:c.instructions+=2;goto B550473;
case 0x550478:c.instructions+=1;goto B550478;
case 0x55047d:goto L55047d;
case 0x55047f:c.instructions+=1;goto B55047f;
case 0x550481:goto L550481;
case 0x550487:c.instructions+=2;goto B550487;
case 0x550489:c.instructions+=1;goto B550489;
case 0x55048b:goto L55048b;
case 0x55048f:c.instructions+=1;goto B55048f;
case 0x550491:goto L550491;
case 0x550498:goto L550498;
case 0x55049c:c.instructions+=1;goto B55049c;
case 0x55049e:goto L55049e;
case 0x5504a1:c.instructions+=3;goto B5504a1;
case 0x5504a4:c.instructions+=2;goto B5504a4;
case 0x5504a6:c.instructions+=1;goto B5504a6;
case 0x5504a8:goto L5504a8;
case 0x5504aa:c.instructions+=1;goto B5504aa;
case 0x5504b0:goto L5504b0;
case 0x5504b1:c.instructions+=1;goto B5504b1;
case 0x5504b6:goto L5504b6;
case 0x5504b9:c.instructions+=3;goto B5504b9;
case 0x5504bc:c.instructions+=2;goto B5504bc;
case 0x5504bd:c.instructions+=1;goto B5504bd;
case 0x5504bf:goto L5504bf;
case 0x5504c0:c.instructions+=4;goto B5504c0;
case 0x5504c1:c.instructions+=3;goto B5504c1;
case 0x5504c3:c.instructions+=2;goto B5504c3;
case 0x5504c5:c.instructions+=1;goto B5504c5;
case 0x5504ca:goto L5504ca;
case 0x5504cb:c.instructions+=2;goto B5504cb;
case 0x5504ce:c.instructions+=1;goto B5504ce;
case 0x5504d0:goto L5504d0;
case 0x5504d5:c.instructions+=5;goto B5504d5;
case 0x5504d6:c.instructions+=4;goto B5504d6;
case 0x5504d9:c.instructions+=3;goto B5504d9;
case 0x5504da:c.instructions+=2;goto B5504da;
case 0x5504dc:c.instructions+=1;goto B5504dc;
case 0x5504e2:goto L5504e2;
case 0x5504e9:goto L5504e9;
case 0x5504ec:c.instructions+=4;goto B5504ec;
case 0x5504f1:c.instructions+=3;goto B5504f1;
case 0x5504f6:c.instructions+=2;goto B5504f6;
case 0x5504f7:c.instructions+=1;goto B5504f7;
case 0x5504fc:goto L5504fc;
case 0x5504ff:c.instructions+=6;goto B5504ff;
case 0x550502:c.instructions+=5;goto B550502;
case 0x550505:c.instructions+=4;goto B550505;
case 0x550506:c.instructions+=3;goto B550506;
case 0x55050c:c.instructions+=2;goto B55050c;
case 0x55050d:c.instructions+=1;goto B55050d;
case 0x550512:goto L550512;
case 0x550513:c.instructions+=1;goto B550513;
case 0x550514:goto L550514;
case 0x550517:c.instructions+=4;goto B550517;
case 0x55051c:c.instructions+=3;goto B55051c;
case 0x550521:c.instructions+=2;goto B550521;
case 0x550522:c.instructions+=1;goto B550522;
case 0x550527:goto L550527;
case 0x55052a:c.instructions+=6;goto B55052a;
case 0x55052d:c.instructions+=5;goto B55052d;
case 0x550530:c.instructions+=4;goto B550530;
case 0x550531:c.instructions+=3;goto B550531;
case 0x550537:c.instructions+=2;goto B550537;
case 0x550538:c.instructions+=1;goto B550538;
case 0x55053d:goto L55053d;
case 0x55053e:c.instructions+=1;goto B55053e;
case 0x55053f:goto L55053f;
case 0x550542:c.instructions+=4;goto B550542;
case 0x550547:c.instructions+=3;goto B550547;
case 0x55054c:c.instructions+=2;goto B55054c;
case 0x55054d:c.instructions+=1;goto B55054d;
case 0x550552:goto L550552;
case 0x550555:c.instructions+=5;goto B550555;
case 0x550558:c.instructions+=4;goto B550558;
case 0x550559:c.instructions+=3;goto B550559;
case 0x55055f:c.instructions+=2;goto B55055f;
case 0x550564:c.instructions+=1;goto B550564;
case 0x550569:goto L550569;
case 0x55056a:c.instructions+=1;goto B55056a;
case 0x550580:goto L550580;
case 0x550581:c.instructions+=10;goto B550581;
case 0x550583:c.instructions+=9;goto B550583;
case 0x550586:c.instructions+=8;goto B550586;
case 0x550587:c.instructions+=7;goto B550587;
case 0x550588:c.instructions+=6;goto B550588;
case 0x55058b:c.instructions+=5;goto B55058b;
case 0x55058d:c.instructions+=4;goto B55058d;
case 0x550590:c.instructions+=3;goto B550590;
case 0x550596:c.instructions+=2;goto B550596;
case 0x550597:c.instructions+=1;goto B550597;
case 0x55059c:goto L55059c;
case 0x55059e:c.instructions+=1;goto B55059e;
case 0x5505a0:goto L5505a0;
case 0x5505a6:c.instructions+=4;goto B5505a6;
case 0x5505a8:c.instructions+=3;goto B5505a8;
case 0x5505aa:c.instructions+=2;goto B5505aa;
case 0x5505ab:c.instructions+=1;goto B5505ab;
case 0x5505b0:goto L5505b0;
case 0x5505b2:goto L5505b2;
case 0x5505b8:goto L5505b8;
case 0x5505bb:c.instructions+=4;goto B5505bb;
case 0x5505be:c.instructions+=3;goto B5505be;
case 0x5505c4:c.instructions+=2;goto B5505c4;
case 0x5505c5:c.instructions+=1;goto B5505c5;
case 0x5505ca:goto L5505ca;
case 0x5505cc:c.instructions+=1;goto B5505cc;
case 0x5505ce:goto L5505ce;
case 0x5505d4:c.instructions+=4;goto B5505d4;
case 0x5505d6:c.instructions+=3;goto B5505d6;
case 0x5505d8:c.instructions+=2;goto B5505d8;
case 0x5505d9:c.instructions+=1;goto B5505d9;
case 0x5505de:goto L5505de;
case 0x5505e4:c.instructions+=3;goto B5505e4;
case 0x5505e6:c.instructions+=2;goto B5505e6;
case 0x5505e9:c.instructions+=1;goto B5505e9;
case 0x5505eb:goto L5505eb;
case 0x5505ed:goto L5505ed;
case 0x5505f3:goto L5505f3;
case 0x5505f6:c.instructions+=2;goto B5505f6;
case 0x5505f9:c.instructions+=1;goto B5505f9;
case 0x5505fe:goto L5505fe;
case 0x550600:c.instructions+=14;goto B550600;
case 0x550605:c.instructions+=13;goto B550605;
case 0x550607:c.instructions+=12;goto B550607;
case 0x55060a:c.instructions+=11;goto B55060a;
case 0x55060c:c.instructions+=10;goto B55060c;
case 0x55060f:c.instructions+=9;goto B55060f;
case 0x550611:c.instructions+=8;goto B550611;
case 0x550614:c.instructions+=7;goto B550614;
case 0x550617:c.instructions+=6;goto B550617;
case 0x55061d:c.instructions+=5;goto B55061d;
case 0x550623:c.instructions+=4;goto B550623;
case 0x550625:c.instructions+=3;goto B550625;
case 0x550627:c.instructions+=2;goto B550627;
case 0x55062a:c.instructions+=1;goto B55062a;
case 0x55062c:goto L55062c;
case 0x55062e:c.instructions+=1;goto B55062e;
case 0x550634:goto L550634;
case 0x550637:c.instructions+=1;goto B550637;
case 0x55063c:goto L55063c;
case 0x55063e:c.instructions+=26;goto B55063e;
case 0x550643:c.instructions+=25;goto B550643;
case 0x550645:c.instructions+=24;goto B550645;
case 0x550648:c.instructions+=23;goto B550648;
case 0x55064a:c.instructions+=22;goto B55064a;
case 0x55064d:c.instructions+=21;goto B55064d;
case 0x550651:c.instructions+=20;goto B550651;
case 0x550654:c.instructions+=19;goto B550654;
case 0x550655:c.instructions+=18;goto B550655;
case 0x550658:c.instructions+=17;goto B550658;
case 0x55065b:c.instructions+=16;goto B55065b;
case 0x550661:c.instructions+=15;goto B550661;
case 0x550664:c.instructions+=14;goto B550664;
case 0x55066a:c.instructions+=13;goto B55066a;
case 0x55066d:c.instructions+=12;goto B55066d;
case 0x550670:c.instructions+=11;goto B550670;
case 0x550673:c.instructions+=10;goto B550673;
case 0x550676:c.instructions+=9;goto B550676;
case 0x55067c:c.instructions+=8;goto B55067c;
case 0x55067f:c.instructions+=7;goto B55067f;
case 0x550682:c.instructions+=6;goto B550682;
case 0x550688:c.instructions+=5;goto B550688;
case 0x55068b:c.instructions+=4;goto B55068b;
case 0x55068c:c.instructions+=3;goto B55068c;
case 0x55068d:c.instructions+=2;goto B55068d;
case 0x55068f:c.instructions+=1;goto B55068f;
case 0x550694:goto L550694;
case 0x550696:c.instructions+=2;goto B550696;
case 0x550697:c.instructions+=1;goto B550697;
case 0x5506a0:goto L5506a0;
case 0x5506a3:c.instructions+=3;goto B5506a3;
case 0x5506a9:c.instructions+=2;goto B5506a9;
case 0x5506aa:c.instructions+=1;goto B5506aa;
case 0x5506af:goto L5506af;
case 0x5506b1:c.instructions+=1;goto B5506b1;
case 0x5506b3:goto L5506b3;
case 0x5506b6:c.instructions+=3;goto B5506b6;
case 0x5506bc:c.instructions+=2;goto B5506bc;
case 0x5506be:c.instructions+=1;goto B5506be;
case 0x5506c0:goto L5506c0;
case 0x5506c1:c.instructions+=1;goto B5506c1;
case 0x5506c3:goto L5506c3;
case 0x5506c5:goto L5506c5;
case 0x5506c6:c.instructions+=1;goto B5506c6;
case 0x5506cb:goto L5506cb;
case 0x5506d1:c.instructions+=3;goto B5506d1;
case 0x5506d3:c.instructions+=2;goto B5506d3;
case 0x5506d6:c.instructions+=1;goto B5506d6;
case 0x5506d8:goto L5506d8;
case 0x5506db:c.instructions+=1;goto B5506db;
case 0x5506dd:goto L5506dd;
case 0x5506df:goto L5506df;
case 0x5506e6:goto L5506e6;
case 0x5506e9:c.instructions+=3;goto B5506e9;
case 0x5506ef:c.instructions+=2;goto B5506ef;
case 0x5506f0:c.instructions+=1;goto B5506f0;
case 0x5506f5:goto L5506f5;
case 0x5506f7:c.instructions+=1;goto B5506f7;
case 0x5506f9:goto L5506f9;
case 0x5506fc:c.instructions+=3;goto B5506fc;
case 0x550702:c.instructions+=2;goto B550702;
case 0x550704:c.instructions+=1;goto B550704;
case 0x550706:goto L550706;
case 0x550707:c.instructions+=2;goto B550707;
case 0x550708:c.instructions+=1;goto B550708;
case 0x55070d:goto L55070d;
case 0x550710:c.instructions+=1;goto B550710;
case 0x550712:goto L550712;
case 0x550714:c.instructions+=2;goto B550714;
case 0x550715:c.instructions+=1;goto B550715;
case 0x55071a:goto L55071a;
case 0x55071d:c.instructions+=1;goto B55071d;
case 0x55071f:goto L55071f;
case 0x550726:goto L550726;
case 0x550729:c.instructions+=3;goto B550729;
case 0x55072f:c.instructions+=2;goto B55072f;
case 0x550730:c.instructions+=1;goto B550730;
case 0x550735:goto L550735;
case 0x550737:c.instructions+=1;goto B550737;
case 0x550739:goto L550739;
case 0x55073c:c.instructions+=3;goto B55073c;
case 0x550742:c.instructions+=2;goto B550742;
case 0x550744:c.instructions+=1;goto B550744;
case 0x550746:goto L550746;
case 0x550747:c.instructions+=2;goto B550747;
case 0x550748:c.instructions+=1;goto B550748;
case 0x55074d:goto L55074d;
case 0x550750:c.instructions+=1;goto B550750;
case 0x550752:goto L550752;
case 0x550754:c.instructions+=2;goto B550754;
case 0x550755:c.instructions+=1;goto B550755;
case 0x55075a:goto L55075a;
case 0x55075d:c.instructions+=1;goto B55075d;
case 0x55075f:goto L55075f;
case 0x550766:goto L550766;
case 0x550769:c.instructions+=10;goto B550769;
case 0x55076c:c.instructions+=9;goto B55076c;
case 0x55076e:c.instructions+=8;goto B55076e;
case 0x55076f:c.instructions+=7;goto B55076f;
case 0x550772:c.instructions+=6;goto B550772;
case 0x550773:c.instructions+=5;goto B550773;
case 0x550776:c.instructions+=4;goto B550776;
case 0x550777:c.instructions+=3;goto B550777;
case 0x550778:c.instructions+=2;goto B550778;
case 0x55077a:c.instructions+=1;goto B55077a;
case 0x55077d:goto L55077d;
case 0x55077e:c.instructions+=2;goto B55077e;
case 0x550781:c.instructions+=1;goto B550781;
case 0x550787:goto L550787;
case 0x550789:c.instructions+=11;goto B550789;
case 0x55078c:c.instructions+=10;goto B55078c;
case 0x55078e:c.instructions+=9;goto B55078e;
case 0x550791:c.instructions+=8;goto B550791;
case 0x550794:c.instructions+=7;goto B550794;
case 0x550797:c.instructions+=6;goto B550797;
case 0x55079a:c.instructions+=5;goto B55079a;
case 0x55079d:c.instructions+=4;goto B55079d;
case 0x5507a0:c.instructions+=3;goto B5507a0;
case 0x5507a5:c.instructions+=2;goto B5507a5;
case 0x5507a8:c.instructions+=1;goto B5507a8;
case 0x5507ad:goto L5507ad;
case 0x5507af:c.instructions+=2;goto B5507af;
case 0x5507b0:c.instructions+=1;goto B5507b0;
case 0x5507b2:goto L5507b2;
case 0x5507b7:c.instructions+=1;goto B5507b7;
case 0x5507bc:goto L5507bc;
case 0x5507bd:c.instructions+=3;goto B5507bd;
case 0x5507c0:c.instructions+=2;goto B5507c0;
case 0x5507c1:c.instructions+=1;goto B5507c1;
case 0x5507c6:goto L5507c6;
case 0x5507cb:c.instructions+=4;goto B5507cb;
case 0x5507ce:c.instructions+=3;goto B5507ce;
case 0x5507d0:c.instructions+=2;goto B5507d0;
case 0x5507d5:c.instructions+=1;goto B5507d5;
case 0x5507d7:goto L5507d7;
case 0x5507dc:goto L5507dc;
case 0x5507e1:goto L5507e1;
case 0x5507e3:c.instructions+=1;goto B5507e3;
case 0x5507e5:goto L5507e5;
case 0x5507ea:c.instructions+=1;goto B5507ea;
case 0x5507ef:goto L5507ef;
case 0x5507f0:c.instructions+=3;goto B5507f0;
case 0x5507f3:c.instructions+=2;goto B5507f3;
case 0x5507f4:c.instructions+=1;goto B5507f4;
case 0x5507f9:goto L5507f9;
case 0x5507fc:c.instructions+=7;goto B5507fc;
case 0x5507fd:c.instructions+=6;goto B5507fd;
case 0x550800:c.instructions+=5;goto B550800;
case 0x550801:c.instructions+=4;goto B550801;
case 0x550804:c.instructions+=3;goto B550804;
case 0x550806:c.instructions+=2;goto B550806;
case 0x550807:c.instructions+=1;goto B550807;
case 0x55080c:goto L55080c;
case 0x55080f:c.instructions+=6;goto B55080f;
case 0x550812:c.instructions+=5;goto B550812;
case 0x550813:c.instructions+=4;goto B550813;
case 0x550818:c.instructions+=3;goto B550818;
case 0x55081d:c.instructions+=2;goto B55081d;
case 0x55081e:c.instructions+=1;goto B55081e;
case 0x550823:goto L550823;
case 0x550825:c.instructions+=3;goto B550825;
case 0x550828:c.instructions+=2;goto B550828;
case 0x55082a:c.instructions+=1;goto B55082a;
case 0x55082d:goto L55082d;
case 0x55082e:c.instructions+=4;goto B55082e;
case 0x55082f:c.instructions+=3;goto B55082f;
case 0x550831:c.instructions+=2;goto B550831;
case 0x550832:c.instructions+=1;goto B550832;
case 0x550840:goto L550840;
case 0x550841:c.instructions+=11;goto B550841;
case 0x550843:c.instructions+=10;goto B550843;
case 0x550849:c.instructions+=9;goto B550849;
case 0x55084c:c.instructions+=8;goto B55084c;
case 0x55084d:c.instructions+=7;goto B55084d;
case 0x55084e:c.instructions+=6;goto B55084e;
case 0x550850:c.instructions+=5;goto B550850;
case 0x550851:c.instructions+=4;goto B550851;
case 0x550854:c.instructions+=3;goto B550854;
case 0x55085a:c.instructions+=2;goto B55085a;
case 0x55085c:c.instructions+=1;goto B55085c;
case 0x550861:goto L550861;
case 0x550863:c.instructions+=2;goto B550863;
case 0x550868:c.instructions+=1;goto B550868;
case 0x55086a:goto L55086a;
case 0x550870:c.instructions+=4;goto B550870;
case 0x550871:c.instructions+=3;goto B550871;
case 0x550873:c.instructions+=2;goto B550873;
case 0x550875:c.instructions+=1;goto B550875;
case 0x55087a:goto L55087a;
case 0x55087c:goto L55087c;
case 0x550882:goto L550882;
case 0x550885:c.instructions+=3;goto B550885;
case 0x55088b:c.instructions+=2;goto B55088b;
case 0x55088d:c.instructions+=1;goto B55088d;
case 0x550892:goto L550892;
case 0x550894:c.instructions+=1;goto B550894;
case 0x550896:goto L550896;
case 0x55089c:c.instructions+=4;goto B55089c;
case 0x55089d:c.instructions+=3;goto B55089d;
case 0x55089f:c.instructions+=2;goto B55089f;
case 0x5508a1:c.instructions+=1;goto B5508a1;
case 0x5508a6:goto L5508a6;
case 0x5508ac:c.instructions+=3;goto B5508ac;
case 0x5508ae:c.instructions+=2;goto B5508ae;
case 0x5508b1:c.instructions+=1;goto B5508b1;
case 0x5508b3:goto L5508b3;
case 0x5508b5:goto L5508b5;
case 0x5508bb:goto L5508bb;
case 0x5508be:c.instructions+=4;goto B5508be;
case 0x5508c1:c.instructions+=3;goto B5508c1;
case 0x5508c7:c.instructions+=2;goto B5508c7;
case 0x5508c8:c.instructions+=1;goto B5508c8;
case 0x5508cd:goto L5508cd;
case 0x5508cf:c.instructions+=1;goto B5508cf;
case 0x5508d1:goto L5508d1;
case 0x5508d7:c.instructions+=4;goto B5508d7;
case 0x5508d8:c.instructions+=3;goto B5508d8;
case 0x5508da:c.instructions+=2;goto B5508da;
case 0x5508db:c.instructions+=1;goto B5508db;
case 0x5508e0:goto L5508e0;
case 0x5508e6:c.instructions+=3;goto B5508e6;
case 0x5508e8:c.instructions+=2;goto B5508e8;
case 0x5508eb:c.instructions+=1;goto B5508eb;
case 0x5508ed:goto L5508ed;
case 0x5508ef:goto L5508ef;
case 0x5508f5:goto L5508f5;
case 0x5508f8:c.instructions+=3;goto B5508f8;
case 0x5508fe:c.instructions+=2;goto B5508fe;
case 0x550900:c.instructions+=1;goto B550900;
case 0x550905:goto L550905;
case 0x550907:c.instructions+=1;goto B550907;
case 0x550909:goto L550909;
case 0x55090f:c.instructions+=4;goto B55090f;
case 0x550910:c.instructions+=3;goto B550910;
case 0x550912:c.instructions+=2;goto B550912;
case 0x550914:c.instructions+=1;goto B550914;
case 0x550919:goto L550919;
case 0x55091f:c.instructions+=3;goto B55091f;
case 0x550921:c.instructions+=2;goto B550921;
case 0x550924:c.instructions+=1;goto B550924;
case 0x550926:goto L550926;
case 0x550928:goto L550928;
case 0x55092e:goto L55092e;
case 0x550934:c.instructions+=3;goto B550934;
case 0x55093a:c.instructions+=2;goto B55093a;
case 0x55093c:c.instructions+=1;goto B55093c;
case 0x550941:goto L550941;
case 0x550943:c.instructions+=1;goto B550943;
case 0x550945:goto L550945;
case 0x55094b:c.instructions+=4;goto B55094b;
case 0x55094c:c.instructions+=3;goto B55094c;
case 0x55094e:c.instructions+=2;goto B55094e;
case 0x550950:c.instructions+=1;goto B550950;
case 0x550955:goto L550955;
case 0x550957:goto L550957;
case 0x55095d:goto L55095d;
case 0x550960:c.instructions+=4;goto B550960;
case 0x550963:c.instructions+=3;goto B550963;
case 0x550969:c.instructions+=2;goto B550969;
case 0x55096a:c.instructions+=1;goto B55096a;
case 0x55096f:goto L55096f;
case 0x550971:c.instructions+=1;goto B550971;
case 0x550973:goto L550973;
case 0x550979:c.instructions+=4;goto B550979;
case 0x55097a:c.instructions+=3;goto B55097a;
case 0x55097c:c.instructions+=2;goto B55097c;
case 0x55097d:c.instructions+=1;goto B55097d;
case 0x550982:goto L550982;
case 0x550984:goto L550984;
case 0x55098a:goto L55098a;
case 0x55098d:c.instructions+=4;goto B55098d;
case 0x550990:c.instructions+=3;goto B550990;
case 0x550996:c.instructions+=2;goto B550996;
case 0x550997:c.instructions+=1;goto B550997;
case 0x55099c:goto L55099c;
case 0x55099e:c.instructions+=1;goto B55099e;
case 0x5509a0:goto L5509a0;
case 0x5509a6:c.instructions+=4;goto B5509a6;
case 0x5509a7:c.instructions+=3;goto B5509a7;
case 0x5509a9:c.instructions+=2;goto B5509a9;
case 0x5509aa:c.instructions+=1;goto B5509aa;
case 0x5509af:goto L5509af;
case 0x5509b1:goto L5509b1;
case 0x5509b7:goto L5509b7;
case 0x5509bd:c.instructions+=3;goto B5509bd;
case 0x5509c3:c.instructions+=2;goto B5509c3;
case 0x5509c5:c.instructions+=1;goto B5509c5;
case 0x5509ca:goto L5509ca;
case 0x5509cc:c.instructions+=1;goto B5509cc;
case 0x5509ce:goto L5509ce;
case 0x5509d4:c.instructions+=4;goto B5509d4;
case 0x5509d5:c.instructions+=3;goto B5509d5;
case 0x5509d7:c.instructions+=2;goto B5509d7;
case 0x5509d9:c.instructions+=1;goto B5509d9;
case 0x5509de:goto L5509de;
case 0x5509e0:goto L5509e0;
case 0x5509e6:goto L5509e6;
case 0x5509ec:c.instructions+=3;goto B5509ec;
case 0x5509f2:c.instructions+=2;goto B5509f2;
case 0x5509f4:c.instructions+=1;goto B5509f4;
case 0x5509f9:goto L5509f9;
case 0x5509fb:c.instructions+=1;goto B5509fb;
case 0x5509fd:goto L5509fd;
case 0x550a03:c.instructions+=4;goto B550a03;
case 0x550a04:c.instructions+=3;goto B550a04;
case 0x550a06:c.instructions+=2;goto B550a06;
case 0x550a08:c.instructions+=1;goto B550a08;
case 0x550a0d:goto L550a0d;
case 0x550a13:c.instructions+=3;goto B550a13;
case 0x550a15:c.instructions+=2;goto B550a15;
case 0x550a18:c.instructions+=1;goto B550a18;
case 0x550a1a:goto L550a1a;
case 0x550a1c:goto L550a1c;
case 0x550a22:goto L550a22;
case 0x550a25:c.instructions+=4;goto B550a25;
case 0x550a2b:c.instructions+=3;goto B550a2b;
case 0x550a31:c.instructions+=2;goto B550a31;
case 0x550a32:c.instructions+=1;goto B550a32;
case 0x550a37:goto L550a37;
case 0x550a39:c.instructions+=1;goto B550a39;
case 0x550a3b:goto L550a3b;
case 0x550a41:c.instructions+=4;goto B550a41;
case 0x550a42:c.instructions+=3;goto B550a42;
case 0x550a44:c.instructions+=2;goto B550a44;
case 0x550a45:c.instructions+=1;goto B550a45;
case 0x550a4a:goto L550a4a;
case 0x550a50:c.instructions+=3;goto B550a50;
case 0x550a52:c.instructions+=2;goto B550a52;
case 0x550a55:c.instructions+=1;goto B550a55;
case 0x550a57:goto L550a57;
case 0x550a59:goto L550a59;
case 0x550a5f:goto L550a5f;
case 0x550a62:c.instructions+=6;goto B550a62;
case 0x550a67:c.instructions+=5;goto B550a67;
case 0x550a6a:c.instructions+=4;goto B550a6a;
case 0x550a70:c.instructions+=3;goto B550a70;
case 0x550a72:c.instructions+=2;goto B550a72;
case 0x550a75:c.instructions+=1;goto B550a75;
case 0x550a77:goto L550a77;
case 0x550a7a:goto L550a7a;
case 0x550a80:c.instructions+=4;goto B550a80;
case 0x550a86:c.instructions+=3;goto B550a86;
case 0x550a88:c.instructions+=2;goto B550a88;
case 0x550a8b:c.instructions+=1;goto B550a8b;
case 0x550a8d:goto L550a8d;
case 0x550a93:goto L550a93;
case 0x550a99:c.instructions+=15;goto B550a99;
case 0x550a9c:c.instructions+=14;goto B550a9c;
case 0x550a9f:c.instructions+=13;goto B550a9f;
case 0x550aa2:c.instructions+=12;goto B550aa2;
case 0x550aa5:c.instructions+=11;goto B550aa5;
case 0x550aa8:c.instructions+=10;goto B550aa8;
case 0x550aae:c.instructions+=9;goto B550aae;
case 0x550ab1:c.instructions+=8;goto B550ab1;
case 0x550ab4:c.instructions+=7;goto B550ab4;
case 0x550ab7:c.instructions+=6;goto B550ab7;
case 0x550aba:c.instructions+=5;goto B550aba;
case 0x550abb:c.instructions+=4;goto B550abb;
case 0x550abc:c.instructions+=3;goto B550abc;
case 0x550abd:c.instructions+=2;goto B550abd;
case 0x550abf:c.instructions+=1;goto B550abf;
case 0x550ac4:goto L550ac4;
case 0x550ac6:c.instructions+=1;goto B550ac6;
case 0x550ac8:goto L550ac8;
case 0x550ac9:c.instructions+=1;goto B550ac9;
case 0x550ace:goto L550ace;
case 0x550ad1:c.instructions+=2;goto B550ad1;
case 0x550ad3:c.instructions+=1;goto B550ad3;
case 0x550ad5:goto L550ad5;
case 0x550ada:c.instructions+=2;goto B550ada;
case 0x550adc:c.instructions+=1;goto B550adc;
case 0x550ae1:goto L550ae1;
case 0x550ae3:c.instructions+=1;goto B550ae3;
case 0x550ae5:goto L550ae5;
case 0x550aea:c.instructions+=2;goto B550aea;
case 0x550aec:c.instructions+=1;goto B550aec;
case 0x550aee:goto L550aee;
case 0x550af1:c.instructions+=3;goto B550af1;
case 0x550af2:c.instructions+=2;goto B550af2;
case 0x550af7:c.instructions+=1;goto B550af7;
case 0x550afc:goto L550afc;
case 0x550afe:c.instructions+=1;goto B550afe;
case 0x550b00:goto L550b00;
case 0x550b03:c.instructions+=1;goto B550b03;
case 0x550b05:goto L550b05;
case 0x550b07:goto L550b07;
case 0x550b09:c.instructions+=2;goto B550b09;
case 0x550b0f:c.instructions+=1;goto B550b0f;
case 0x550b11:goto L550b11;
case 0x550b12:c.instructions+=1;goto B550b12;
case 0x550b17:goto L550b17;
case 0x550b1a:c.instructions+=2;goto B550b1a;
case 0x550b1c:c.instructions+=1;goto B550b1c;
case 0x550b1e:goto L550b1e;
case 0x550b23:c.instructions+=2;goto B550b23;
case 0x550b25:c.instructions+=1;goto B550b25;
case 0x550b2a:goto L550b2a;
case 0x550b2c:c.instructions+=1;goto B550b2c;
case 0x550b2e:goto L550b2e;
case 0x550b33:c.instructions+=2;goto B550b33;
case 0x550b35:c.instructions+=1;goto B550b35;
case 0x550b37:goto L550b37;
case 0x550b3a:c.instructions+=3;goto B550b3a;
case 0x550b3b:c.instructions+=2;goto B550b3b;
case 0x550b40:c.instructions+=1;goto B550b40;
case 0x550b45:goto L550b45;
case 0x550b47:c.instructions+=1;goto B550b47;
case 0x550b49:goto L550b49;
case 0x550b4c:c.instructions+=1;goto B550b4c;
case 0x550b4e:goto L550b4e;
case 0x550b50:goto L550b50;
case 0x550b52:c.instructions+=2;goto B550b52;
case 0x550b58:c.instructions+=1;goto B550b58;
case 0x550b5a:goto L550b5a;
case 0x550b5b:c.instructions+=1;goto B550b5b;
case 0x550b60:goto L550b60;
case 0x550b63:c.instructions+=2;goto B550b63;
case 0x550b65:c.instructions+=1;goto B550b65;
case 0x550b67:goto L550b67;
case 0x550b6c:c.instructions+=2;goto B550b6c;
case 0x550b6e:c.instructions+=1;goto B550b6e;
case 0x550b73:goto L550b73;
case 0x550b75:c.instructions+=1;goto B550b75;
case 0x550b77:goto L550b77;
case 0x550b7c:c.instructions+=2;goto B550b7c;
case 0x550b7e:c.instructions+=1;goto B550b7e;
case 0x550b80:goto L550b80;
case 0x550b83:c.instructions+=3;goto B550b83;
case 0x550b84:c.instructions+=2;goto B550b84;
case 0x550b89:c.instructions+=1;goto B550b89;
case 0x550b8e:goto L550b8e;
case 0x550b90:c.instructions+=1;goto B550b90;
case 0x550b92:goto L550b92;
case 0x550b95:c.instructions+=1;goto B550b95;
case 0x550b97:goto L550b97;
case 0x550b99:goto L550b99;
case 0x550b9b:c.instructions+=2;goto B550b9b;
case 0x550ba1:c.instructions+=1;goto B550ba1;
case 0x550ba3:goto L550ba3;
case 0x550ba4:c.instructions+=1;goto B550ba4;
case 0x550ba9:goto L550ba9;
case 0x550bac:c.instructions+=2;goto B550bac;
case 0x550bae:c.instructions+=1;goto B550bae;
case 0x550bb0:goto L550bb0;
case 0x550bb5:c.instructions+=2;goto B550bb5;
case 0x550bb7:c.instructions+=1;goto B550bb7;
case 0x550bbc:goto L550bbc;
case 0x550bbe:c.instructions+=1;goto B550bbe;
case 0x550bc0:goto L550bc0;
case 0x550bc5:c.instructions+=2;goto B550bc5;
case 0x550bc7:c.instructions+=1;goto B550bc7;
case 0x550bc9:goto L550bc9;
case 0x550bcc:c.instructions+=3;goto B550bcc;
case 0x550bcd:c.instructions+=2;goto B550bcd;
case 0x550bd2:c.instructions+=1;goto B550bd2;
case 0x550bd7:goto L550bd7;
case 0x550bd9:c.instructions+=1;goto B550bd9;
case 0x550bdb:goto L550bdb;
case 0x550bde:c.instructions+=1;goto B550bde;
case 0x550be0:goto L550be0;
case 0x550be2:goto L550be2;
case 0x550be8:c.instructions+=10;goto B550be8;
case 0x550bee:c.instructions+=9;goto B550bee;
case 0x550bef:c.instructions+=8;goto B550bef;
case 0x550bf2:c.instructions+=7;goto B550bf2;
case 0x550bf3:c.instructions+=6;goto B550bf3;
case 0x550bf4:c.instructions+=5;goto B550bf4;
case 0x550bfa:c.instructions+=4;goto B550bfa;
case 0x550bfc:c.instructions+=3;goto B550bfc;
case 0x550bfd:c.instructions+=2;goto B550bfd;
case 0x550bff:c.instructions+=1;goto B550bff;
case 0x550c02:goto L550c02;
case 0x550c05:c.instructions+=4;goto B550c05;
case 0x550c0b:c.instructions+=3;goto B550c0b;
case 0x550c0d:c.instructions+=2;goto B550c0d;
case 0x550c10:c.instructions+=1;goto B550c10;
case 0x550c15:goto L550c15;
case 0x550c17:c.instructions+=1;goto B550c17;
case 0x550c19:goto L550c19;
case 0x550c1c:c.instructions+=6;goto B550c1c;
case 0x550c22:c.instructions+=5;goto B550c22;
case 0x550c23:c.instructions+=4;goto B550c23;
case 0x550c25:c.instructions+=3;goto B550c25;
case 0x550c27:c.instructions+=2;goto B550c27;
case 0x550c28:c.instructions+=1;goto B550c28;
case 0x550c2d:goto L550c2d;
case 0x550c33:c.instructions+=2;goto B550c33;
case 0x550c35:c.instructions+=1;goto B550c35;
case 0x550c3a:goto L550c3a;
case 0x550c3c:c.instructions+=1;goto B550c3c;
case 0x550c3e:goto L550c3e;
case 0x550c44:c.instructions+=4;goto B550c44;
case 0x550c45:c.instructions+=3;goto B550c45;
case 0x550c47:c.instructions+=2;goto B550c47;
case 0x550c49:c.instructions+=1;goto B550c49;
case 0x550c4e:goto L550c4e;
case 0x550c50:goto L550c50;
case 0x550c56:goto L550c56;
case 0x550c59:c.instructions+=3;goto B550c59;
case 0x550c5f:c.instructions+=2;goto B550c5f;
case 0x550c61:c.instructions+=1;goto B550c61;
case 0x550c66:goto L550c66;
case 0x550c68:c.instructions+=1;goto B550c68;
case 0x550c6a:goto L550c6a;
case 0x550c70:c.instructions+=4;goto B550c70;
case 0x550c71:c.instructions+=3;goto B550c71;
case 0x550c73:c.instructions+=2;goto B550c73;
case 0x550c75:c.instructions+=1;goto B550c75;
case 0x550c7a:goto L550c7a;
case 0x550c7c:goto L550c7c;
case 0x550c82:goto L550c82;
case 0x550c84:c.instructions+=2;goto B550c84;
case 0x550c87:c.instructions+=1;goto B550c87;
case 0x550c89:goto L550c89;
case 0x550c8a:c.instructions+=1;goto B550c8a;
case 0x550c8f:goto L550c8f;
case 0x550c92:c.instructions+=2;goto B550c92;
case 0x550c94:c.instructions+=1;goto B550c94;
case 0x550c96:goto L550c96;
case 0x550c9b:c.instructions+=2;goto B550c9b;
case 0x550c9d:c.instructions+=1;goto B550c9d;
case 0x550ca2:goto L550ca2;
case 0x550ca4:c.instructions+=1;goto B550ca4;
case 0x550ca6:goto L550ca6;
case 0x550cab:c.instructions+=2;goto B550cab;
case 0x550cad:c.instructions+=1;goto B550cad;
case 0x550caf:goto L550caf;
case 0x550cb2:c.instructions+=3;goto B550cb2;
case 0x550cb3:c.instructions+=2;goto B550cb3;
case 0x550cb8:c.instructions+=1;goto B550cb8;
case 0x550cbd:goto L550cbd;
case 0x550cbf:c.instructions+=1;goto B550cbf;
case 0x550cc1:goto L550cc1;
case 0x550cc4:c.instructions+=1;goto B550cc4;
case 0x550cc6:goto L550cc6;
case 0x550cc8:goto L550cc8;
case 0x550cca:c.instructions+=2;goto B550cca;
case 0x550cd0:c.instructions+=1;goto B550cd0;
case 0x550cd2:goto L550cd2;
case 0x550cd3:c.instructions+=1;goto B550cd3;
case 0x550cd8:goto L550cd8;
case 0x550cdb:c.instructions+=2;goto B550cdb;
case 0x550cdd:c.instructions+=1;goto B550cdd;
case 0x550cdf:goto L550cdf;
case 0x550ce4:c.instructions+=2;goto B550ce4;
case 0x550ce6:c.instructions+=1;goto B550ce6;
case 0x550ceb:goto L550ceb;
case 0x550ced:c.instructions+=1;goto B550ced;
case 0x550cef:goto L550cef;
case 0x550cf4:c.instructions+=2;goto B550cf4;
case 0x550cf6:c.instructions+=1;goto B550cf6;
case 0x550cf8:goto L550cf8;
case 0x550cfb:c.instructions+=3;goto B550cfb;
case 0x550cfc:c.instructions+=2;goto B550cfc;
case 0x550d01:c.instructions+=1;goto B550d01;
case 0x550d06:goto L550d06;
case 0x550d08:c.instructions+=1;goto B550d08;
case 0x550d0a:goto L550d0a;
case 0x550d0d:c.instructions+=1;goto B550d0d;
case 0x550d0f:goto L550d0f;
case 0x550d11:goto L550d11;
case 0x550d17:c.instructions+=3;goto B550d17;
case 0x550d19:c.instructions+=2;goto B550d19;
case 0x550d1e:c.instructions+=1;goto B550d1e;
case 0x550d21:goto L550d21;
case 0x550d23:goto L550d23;
case 0x550d28:c.instructions+=2;goto B550d28;
case 0x550d2b:c.instructions+=1;goto B550d2b;
case 0x550d30:goto L550d30;
case 0x550d32:goto L550d32;
case 0x550d37:goto L550d37;
case 0x550d39:c.instructions+=1;goto B550d39;
case 0x550d3b:goto L550d3b;
case 0x550d40:c.instructions+=1;goto B550d40;
case 0x550d45:goto L550d45;
case 0x550d47:c.instructions+=4;goto B550d47;
case 0x550d48:c.instructions+=3;goto B550d48;
case 0x550d4b:c.instructions+=2;goto B550d4b;
case 0x550d4c:c.instructions+=1;goto B550d4c;
case 0x550d51:goto L550d51;
case 0x550d56:c.instructions+=4;goto B550d56;
case 0x550d59:c.instructions+=3;goto B550d59;
case 0x550d5b:c.instructions+=2;goto B550d5b;
case 0x550d60:c.instructions+=1;goto B550d60;
case 0x550d62:goto L550d62;
case 0x550d67:goto L550d67;
case 0x550d6c:goto L550d6c;
case 0x550d6e:c.instructions+=1;goto B550d6e;
case 0x550d70:goto L550d70;
case 0x550d75:c.instructions+=1;goto B550d75;
case 0x550d7a:goto L550d7a;
case 0x550d7c:c.instructions+=4;goto B550d7c;
case 0x550d7d:c.instructions+=3;goto B550d7d;
case 0x550d80:c.instructions+=2;goto B550d80;
case 0x550d81:c.instructions+=1;goto B550d81;
case 0x550d86:goto L550d86;
case 0x550d89:c.instructions+=7;goto B550d89;
case 0x550d8a:c.instructions+=6;goto B550d8a;
case 0x550d8d:c.instructions+=5;goto B550d8d;
case 0x550d8e:c.instructions+=4;goto B550d8e;
case 0x550d94:c.instructions+=3;goto B550d94;
case 0x550d96:c.instructions+=2;goto B550d96;
case 0x550d97:c.instructions+=1;goto B550d97;
case 0x550d9c:goto L550d9c;
case 0x550da2:c.instructions+=5;goto B550da2;
case 0x550da3:c.instructions+=4;goto B550da3;
case 0x550da8:c.instructions+=3;goto B550da8;
case 0x550dad:c.instructions+=2;goto B550dad;
case 0x550dae:c.instructions+=1;goto B550dae;
case 0x550db3:goto L550db3;
case 0x550db5:c.instructions+=3;goto B550db5;
case 0x550db8:c.instructions+=2;goto B550db8;
case 0x550dba:c.instructions+=1;goto B550dba;
case 0x550dbd:goto L550dbd;
case 0x550dbe:c.instructions+=5;goto B550dbe;
case 0x550dbf:c.instructions+=4;goto B550dbf;
case 0x550dc0:c.instructions+=3;goto B550dc0;
case 0x550dc2:c.instructions+=2;goto B550dc2;
case 0x550dc3:c.instructions+=1;goto B550dc3;
case 0x550dd0:goto L550dd0;
case 0x550dd1:c.instructions+=5;goto B550dd1;
case 0x550dd3:c.instructions+=4;goto B550dd3;
case 0x550dd6:c.instructions+=3;goto B550dd6;
case 0x550ddb:c.instructions+=2;goto B550ddb;
case 0x550ddc:c.instructions+=1;goto B550ddc;
case 0x550de1:goto L550de1;
case 0x550de4:c.instructions+=2;goto B550de4;
case 0x550de6:c.instructions+=1;goto B550de6;
case 0x550deb:goto L550deb;
case 0x550df0:c.instructions+=2;goto B550df0;
case 0x550df2:c.instructions+=1;goto B550df2;
case 0x550df4:goto L550df4;
case 0x550df7:c.instructions+=3;goto B550df7;
case 0x550dfa:c.instructions+=2;goto B550dfa;
case 0x550dfc:c.instructions+=1;goto B550dfc;
case 0x550dff:goto L550dff;
case 0x550e06:c.instructions+=1;goto B550e06;
case 0x550e08:goto L550e08;
case 0x550e0b:c.instructions+=2;goto B550e0b;
case 0x550e0c:c.instructions+=1;goto B550e0c;
case 0x550e11:goto L550e11;
case 0x550e12:c.instructions+=1;goto B550e12;
case 0x550e17:goto L550e17;
case 0x550e1a:c.instructions+=2;goto B550e1a;
case 0x550e1c:c.instructions+=1;goto B550e1c;
case 0x550e1e:goto L550e1e;
case 0x550e21:c.instructions+=1;goto B550e21;
case 0x550e23:goto L550e23;
case 0x550e25:goto L550e25;
case 0x550e28:c.instructions+=3;goto B550e28;
case 0x550e2b:c.instructions+=2;goto B550e2b;
case 0x550e2c:c.instructions+=1;goto B550e2c;
case 0x550e2f:goto L550e2f;
case 0x550e34:c.instructions+=8;goto B550e34;
case 0x550e35:c.instructions+=7;goto B550e35;
case 0x550e37:c.instructions+=6;goto B550e37;
case 0x550e39:c.instructions+=5;goto B550e39;
case 0x550e3e:c.instructions+=4;goto B550e3e;
case 0x550e43:c.instructions+=3;goto B550e43;
case 0x550e45:c.instructions+=2;goto B550e45;
case 0x550e48:c.instructions+=1;goto B550e48;
case 0x550e4d:goto L550e4d;
case 0x550e4f:c.instructions+=3;goto B550e4f;
case 0x550e51:c.instructions+=2;goto B550e51;
case 0x550e52:c.instructions+=1;goto B550e52;
case 0x550e60:goto L550e60;
case 0x550e68:c.instructions+=4;goto B550e68;
case 0x550e69:c.instructions+=3;goto B550e69;
case 0x550e6b:c.instructions+=2;goto B550e6b;
case 0x550e6e:c.instructions+=1;goto B550e6e;
case 0x550e70:goto L550e70;
case 0x550e73:c.instructions+=2;goto B550e73;
case 0x550e75:c.instructions+=1;goto B550e75;
case 0x550e77:goto L550e77;
case 0x550e7a:c.instructions+=1;goto B550e7a;
case 0x550e7c:goto L550e7c;
case 0x550e7e:goto L550e7e;
case 0x550e81:c.instructions+=1;goto B550e81;
case 0x550e87:goto L550e87;
case 0x550e8d:c.instructions+=3;goto B550e8d;
case 0x550e8f:c.instructions+=2;goto B550e8f;
case 0x550e91:c.instructions+=1;goto B550e91;
case 0x550e93:goto L550e93;
case 0x550e98:goto L550e98;
case 0x550e9a:goto L550e9a;
case 0x550e9f:goto L550e9f;
case 0x550ea2:c.instructions+=3;goto B550ea2;
case 0x550ea9:c.instructions+=2;goto B550ea9;
case 0x550eac:c.instructions+=1;goto B550eac;
case 0x550eae:goto L550eae;
case 0x550eaf:c.instructions+=3;goto B550eaf;
case 0x550eb3:c.instructions+=2;goto B550eb3;
case 0x550eb9:c.instructions+=1;goto B550eb9;
case 0x550ebe:goto L550ebe;
case 0x550ec1:c.instructions+=2;goto B550ec1;
case 0x550ec3:c.instructions+=1;goto B550ec3;
case 0x550ec5:goto L550ec5;
case 0x550ec8:c.instructions+=1;goto B550ec8;
case 0x550eca:goto L550eca;
case 0x550ecc:goto L550ecc;
case 0x550ecf:c.instructions+=1;goto B550ecf;
case 0x550ed1:goto L550ed1;
case 0x550ed7:c.instructions+=3;goto B550ed7;
case 0x550ed9:c.instructions+=2;goto B550ed9;
case 0x550edb:c.instructions+=1;goto B550edb;
case 0x550edd:goto L550edd;
case 0x550ee2:goto L550ee2;
case 0x550ee4:goto L550ee4;
case 0x550ee9:goto L550ee9;
case 0x550eec:c.instructions+=3;goto B550eec;
case 0x550ef3:c.instructions+=2;goto B550ef3;
case 0x550ef6:c.instructions+=1;goto B550ef6;
case 0x550ef8:goto L550ef8;
case 0x550ef9:c.instructions+=3;goto B550ef9;
case 0x550efd:c.instructions+=2;goto B550efd;
case 0x550f03:c.instructions+=1;goto B550f03;
case 0x550f08:goto L550f08;
case 0x550f09:c.instructions+=1;goto B550f09;
case 0x550f10:goto L550f10;
case 0x550f13:c.instructions+=10;goto B550f13;
case 0x550f14:c.instructions+=9;goto B550f14;
case 0x550f15:c.instructions+=8;goto B550f15;
case 0x550f17:c.instructions+=7;goto B550f17;
case 0x550f1a:c.instructions+=6;goto B550f1a;
case 0x550f1d:c.instructions+=5;goto B550f1d;
case 0x550f20:c.instructions+=4;goto B550f20;
case 0x550f21:c.instructions+=3;goto B550f21;
case 0x550f23:c.instructions+=2;goto B550f23;
case 0x550f27:c.instructions+=1;goto B550f27;
case 0x550f2c:goto L550f2c;
case 0x550f2d:c.instructions+=4;goto B550f2d;
case 0x550f31:c.instructions+=3;goto B550f31;
case 0x550f35:c.instructions+=2;goto B550f35;
case 0x550f3a:c.instructions+=1;goto B550f3a;
case 0x550f3c:goto L550f3c;
case 0x550f3f:c.instructions+=3;goto B550f3f;
case 0x550f46:c.instructions+=2;goto B550f46;
case 0x550f49:c.instructions+=1;goto B550f49;
case 0x550f4b:goto L550f4b;
case 0x550f51:c.instructions+=2;goto B550f51;
case 0x550f52:c.instructions+=1;goto B550f52;
case 0x550f57:goto L550f57;
case 0x550f59:c.instructions+=2;goto B550f59;
case 0x550f5b:c.instructions+=1;goto B550f5b;
case 0x550f5d:goto L550f5d;
case 0x550f62:c.instructions+=1;goto B550f62;
case 0x550f64:goto L550f64;
case 0x550f67:c.instructions+=3;goto B550f67;
case 0x550f6e:c.instructions+=2;goto B550f6e;
case 0x550f71:c.instructions+=1;goto B550f71;
case 0x550f73:goto L550f73;
case 0x550f79:c.instructions+=2;goto B550f79;
case 0x550f7a:c.instructions+=1;goto B550f7a;
case 0x550f7f:goto L550f7f;
case 0x550f81:c.instructions+=1;goto B550f81;
case 0x550f83:goto L550f83;
case 0x550f85:c.instructions+=1;goto B550f85;
case 0x550f8a:goto L550f8a;
case 0x550f8d:c.instructions+=4;goto B550f8d;
case 0x550f8f:c.instructions+=3;goto B550f8f;
case 0x550f90:c.instructions+=2;goto B550f90;
case 0x550f91:c.instructions+=1;goto B550f91;
case 0x550f93:goto L550f93;
case 0x550f96:c.instructions+=1;goto B550f96;
case 0x550f98:goto L550f98;
case 0x550f9a:goto L550f9a;
case 0x550f9f:c.instructions+=1;goto B550f9f;
case 0x550fa0:goto L550fa0;
case 0x550fa3:c.instructions+=2;goto B550fa3;
case 0x550fa5:c.instructions+=1;goto B550fa5;
case 0x550fa7:goto L550fa7;
case 0x550faa:c.instructions+=2;goto B550faa;
case 0x550fac:c.instructions+=1;goto B550fac;
case 0x550fae:goto L550fae;
case 0x550fb1:c.instructions+=4;goto B550fb1;
case 0x550fb4:c.instructions+=3;goto B550fb4;
case 0x550fb7:c.instructions+=2;goto B550fb7;
case 0x550fb8:c.instructions+=1;goto B550fb8;
case 0x550fba:goto L550fba;
case 0x550fbf:c.instructions+=1;goto B550fbf;
case 0x550fc1:goto L550fc1;
case 0x550fc6:goto L550fc6;
case 0x550fc8:c.instructions+=2;goto B550fc8;
case 0x550fc9:c.instructions+=1;goto B550fc9;
case 0x550fce:goto L550fce;
case 0x550fd1:c.instructions+=1;goto B550fd1;
case 0x550fd2:goto L550fd2;
case 0x550fd5:c.instructions+=2;goto B550fd5;
case 0x550fd7:c.instructions+=1;goto B550fd7;
case 0x550fd9:goto L550fd9;
case 0x550fdc:c.instructions+=1;goto B550fdc;
case 0x550fde:goto L550fde;
case 0x550fe0:goto L550fe0;
case 0x550fe2:c.instructions+=1;goto B550fe2;
case 0x550fe4:goto L550fe4;
case 0x550fe7:c.instructions+=2;goto B550fe7;
case 0x550fe9:c.instructions+=1;goto B550fe9;
case 0x550feb:goto L550feb;
case 0x550fee:c.instructions+=1;goto B550fee;
case 0x550ff0:goto L550ff0;
case 0x550ff2:c.instructions+=1;goto B550ff2;
case 0x550ff4:goto L550ff4;
case 0x550ff7:c.instructions+=2;goto B550ff7;
case 0x550ff9:c.instructions+=1;goto B550ff9;
case 0x550ffc:goto L550ffc;
default:missing_instruction(c.pc);}
B550000:L550000:{c.instructions+=2;NFSU2_TR(0x550000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B550002:{NFSU2_TR(0x550002);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550005ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550005:L550005:{c.instructions+=2;NFSU2_TR(0x550005);
w4(R+4,u32(0x8392d0ull));
}
B55000a:{NFSU2_TR(0x55000a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55000full));
TAIL_STATIC(0x5b6a20u,5b6);
}
B55000f:L55000f:{c.instructions+=3;NFSU2_TR(0x55000f);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550015:{NFSU2_TR(0x550015);
w4(R+4,u32(0x8392d0ull));
}
B55001a:{NFSU2_TR(0x55001a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55001full));
TAIL_STATIC(0x5b6a20u,5b6);
}
B55001f:L55001f:{c.instructions+=8;NFSU2_TR(0x55001f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550025:{NFSU2_TR(0x550025);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B55002b:{NFSU2_TR(0x55002b);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550031:{NFSU2_TR(0x550031);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B550037:{NFSU2_TR(0x550037);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55003a:{NFSU2_TR(0x55003a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55003c:{NFSU2_TR(0x55003c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55003f:{NFSU2_TR(0x55003f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550047;}}
}
B550041:L550041:{c.instructions+=2;NFSU2_TR(0x550041);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550044:{NFSU2_TR(0x550044);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550047:L550047:{c.instructions+=5;NFSU2_TR(0x550047);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55004a:{NFSU2_TR(0x55004a);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B55004d:{NFSU2_TR(0x55004d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55004f:{NFSU2_TR(0x55004f);
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
B550052:{NFSU2_TR(0x550052);
if(r1(R+514)){{goto L55005a;}}
}
B550054:L550054:{c.instructions+=2;NFSU2_TR(0x550054);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550057:{NFSU2_TR(0x550057);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55005a:L55005a:{c.instructions+=2;NFSU2_TR(0x55005a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55005c:{NFSU2_TR(0x55005c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55005full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55005f:L55005f:{c.instructions+=2;NFSU2_TR(0x55005f);
w4(R+4,u32(0x8392d0ull));
}
B550064:{NFSU2_TR(0x550064);
{goto L550122;}
}
B550069:L550069:{c.instructions+=2;NFSU2_TR(0x550069);
w4(R+4,u32(0x8389e0ull));
}
B55006e:{NFSU2_TR(0x55006e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550073ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B550073:L550073:{c.instructions+=3;NFSU2_TR(0x550073);
{u32 ea_=u32(r4(R+24)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550079:{NFSU2_TR(0x550079);
w4(R+4,u32(0x8392d0ull));
}
B55007e:{NFSU2_TR(0x55007e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550083ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B550083:L550083:{c.instructions+=8;NFSU2_TR(0x550083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550089:{NFSU2_TR(0x550089);
{u32 ea_=u32(r4(R+24)+u32(404u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B55008f:{NFSU2_TR(0x55008f);
{u32 ea_=u32(r4(R+24)+u32(392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550095:{NFSU2_TR(0x550095);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55009b:{NFSU2_TR(0x55009b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55009e:{NFSU2_TR(0x55009e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5500a0:{NFSU2_TR(0x5500a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5500a3:{NFSU2_TR(0x5500a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5500ab;}}
}
B5500a5:L5500a5:{c.instructions+=2;NFSU2_TR(0x5500a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5500a8:{NFSU2_TR(0x5500a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5500ab:L5500ab:{c.instructions+=5;NFSU2_TR(0x5500ab);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5500ae:{NFSU2_TR(0x5500ae);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5500b1:{NFSU2_TR(0x5500b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5500b3:{NFSU2_TR(0x5500b3);
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
B5500b6:{NFSU2_TR(0x5500b6);
if(r1(R+514)){{goto L5500be;}}
}
B5500b8:L5500b8:{c.instructions+=2;NFSU2_TR(0x5500b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5500bb:{NFSU2_TR(0x5500bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5500be:L5500be:{c.instructions+=2;NFSU2_TR(0x5500be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5500c0:{NFSU2_TR(0x5500c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5500c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5500c3:L5500c3:{c.instructions+=2;NFSU2_TR(0x5500c3);
w4(R+4,u32(0x8389e0ull));
}
B5500c8:{NFSU2_TR(0x5500c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5500cdull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B5500cd:L5500cd:{c.instructions+=3;NFSU2_TR(0x5500cd);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5500d3:{NFSU2_TR(0x5500d3);
w4(R+4,u32(0x8392d0ull));
}
B5500d8:{NFSU2_TR(0x5500d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5500ddull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B5500dd:L5500dd:{c.instructions+=8;NFSU2_TR(0x5500dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5500e3:{NFSU2_TR(0x5500e3);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5500e9:{NFSU2_TR(0x5500e9);
{u32 ea_=u32(r4(R+24)+u32(468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5500ef:{NFSU2_TR(0x5500ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5500f5:{NFSU2_TR(0x5500f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5500f8:{NFSU2_TR(0x5500f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5500fa:{NFSU2_TR(0x5500fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5500fd:{NFSU2_TR(0x5500fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550105;}}
}
B5500ff:L5500ff:{c.instructions+=2;NFSU2_TR(0x5500ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550102:{NFSU2_TR(0x550102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550105:L550105:{c.instructions+=5;NFSU2_TR(0x550105);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550108:{NFSU2_TR(0x550108);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B55010b:{NFSU2_TR(0x55010b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55010d:{NFSU2_TR(0x55010d);
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
B550110:{NFSU2_TR(0x550110);
if(r1(R+514)){{goto L550118;}}
}
B550112:L550112:{c.instructions+=2;NFSU2_TR(0x550112);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550115:{NFSU2_TR(0x550115);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550118:L550118:{c.instructions+=2;NFSU2_TR(0x550118);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55011a:{NFSU2_TR(0x55011a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55011dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55011d:L55011d:{c.instructions+=1;NFSU2_TR(0x55011d);
w4(R+4,u32(0x8389e0ull));
}
B550122:L550122:{c.instructions+=1;NFSU2_TR(0x550122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550127ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B550127:L550127:{c.instructions+=3;NFSU2_TR(0x550127);
{u32 ea_=u32(r4(R+24)+u32(580u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55012d:{NFSU2_TR(0x55012d);
w4(R+4,u32(0x8392d0ull));
}
B550132:{NFSU2_TR(0x550132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550137ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B550137:L550137:{c.instructions+=8;NFSU2_TR(0x550137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55013d:{NFSU2_TR(0x55013d);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B550143:{NFSU2_TR(0x550143);
{u32 ea_=u32(r4(R+24)+u32(544u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550149:{NFSU2_TR(0x550149);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((R+4),(U+0),4);
}
B55014f:{NFSU2_TR(0x55014f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550152:{NFSU2_TR(0x550152);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550154:{NFSU2_TR(0x550154);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550157:{NFSU2_TR(0x550157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55015f;}}
}
B550159:L550159:{c.instructions+=2;NFSU2_TR(0x550159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55015c:{NFSU2_TR(0x55015c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55015f:L55015f:{c.instructions+=5;NFSU2_TR(0x55015f);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550162:{NFSU2_TR(0x550162);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550165:{NFSU2_TR(0x550165);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550167:{NFSU2_TR(0x550167);
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
B55016a:{NFSU2_TR(0x55016a);
if(r1(R+514)){{goto L550172;}}
}
B55016c:L55016c:{c.instructions+=2;NFSU2_TR(0x55016c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55016f:{NFSU2_TR(0x55016f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550172:L550172:{c.instructions+=2;NFSU2_TR(0x550172);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B550174:{NFSU2_TR(0x550174);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550177ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550177:L550177:{c.instructions+=3;NFSU2_TR(0x550177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55017a:{NFSU2_TR(0x55017a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55017c:{NFSU2_TR(0x55017c);
if(r1(R+518)){{goto L550183;}}
}
B55017e:L55017e:{c.instructions+=2;NFSU2_TR(0x55017e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B550181:{NFSU2_TR(0x550181);
{goto L550185;}
}
B550183:L550183:{c.instructions+=1;NFSU2_TR(0x550183);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550185:L550185:{c.instructions+=2;NFSU2_TR(0x550185);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B550187:{NFSU2_TR(0x550187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5501a0;}}
}
B550189:L550189:{c.instructions+=5;NFSU2_TR(0x550189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55018c:{NFSU2_TR(0x55018c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55018d:{NFSU2_TR(0x55018d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B550193:{NFSU2_TR(0x550193);
u8 U[4];
w4(U+0,u32(0x409ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550198:{NFSU2_TR(0x550198);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55019dull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55019d:L55019d:{c.instructions+=3;NFSU2_TR(0x55019d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55019e:{NFSU2_TR(0x55019e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55019f:{NFSU2_TR(0x55019f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5501a0:L5501a0:{c.instructions+=2;NFSU2_TR(0x5501a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xed55c635ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5501a7:{NFSU2_TR(0x5501a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5501c0;}}
}
B5501a9:L5501a9:{c.instructions+=5;NFSU2_TR(0x5501a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5501ac:{NFSU2_TR(0x5501ac);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5501b2:{NFSU2_TR(0x5501b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501b3:{NFSU2_TR(0x5501b3);
u8 U[4];
w4(U+0,u32(0x405ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501b8:{NFSU2_TR(0x5501b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5501bdull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5501bd:L5501bd:{c.instructions+=3;NFSU2_TR(0x5501bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5501be:{NFSU2_TR(0x5501be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5501bf:{NFSU2_TR(0x5501bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5501c0:L5501c0:{c.instructions+=5;NFSU2_TR(0x5501c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5501c3:{NFSU2_TR(0x5501c3);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B5501c9:{NFSU2_TR(0x5501c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501ca:{NFSU2_TR(0x5501ca);
u8 U[4];
w4(U+0,u32(0x441ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501cf:{NFSU2_TR(0x5501cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5501d4ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B5501d4:L5501d4:{c.instructions+=3;NFSU2_TR(0x5501d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5501d5:{NFSU2_TR(0x5501d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5501d6:{NFSU2_TR(0x5501d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5501e0:L5501e0:{c.instructions+=9;NFSU2_TR(0x5501e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501e1:{NFSU2_TR(0x5501e1);
__builtin_memmove((R+20),(R+16),4);
}
B5501e3:{NFSU2_TR(0x5501e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501e4:{NFSU2_TR(0x5501e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501e5:{NFSU2_TR(0x5501e5);
__builtin_memmove((R+12),(R+4),4);
}
B5501e7:{NFSU2_TR(0x5501e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5501ea:{NFSU2_TR(0x5501ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5501ec:{NFSU2_TR(0x5501ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501ed:{NFSU2_TR(0x5501ed);
if(r1(R+518)){{goto L55020c;}}
}
B5501ef:L5501ef:{c.instructions+=2;NFSU2_TR(0x5501ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5501f0:{NFSU2_TR(0x5501f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5501f5ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5501f5:L5501f5:{c.instructions+=3;NFSU2_TR(0x5501f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5501f8:{NFSU2_TR(0x5501f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5501fa:{NFSU2_TR(0x5501fa);
if(r1(R+518)){{goto L55020c;}}
}
B5501fc:L5501fc:{c.instructions+=3;NFSU2_TR(0x5501fc);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550201:{NFSU2_TR(0x550201);
__builtin_memmove((R+4),(R+0),4);
}
B550203:{NFSU2_TR(0x550203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550208ull));
TAIL_STATIC(0x517f80u,517);
}
B550208:L550208:{c.instructions+=2;NFSU2_TR(0x550208);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55020a:{NFSU2_TR(0x55020a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550223;}}
}
B55020c:L55020c:{c.instructions+=3;NFSU2_TR(0x55020c);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550211:{NFSU2_TR(0x550211);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550213:{NFSU2_TR(0x550213);
if(r1(R+518)){{goto L550271;}}
}
B550215:L550215:{c.instructions+=4;NFSU2_TR(0x550215);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550218:{NFSU2_TR(0x550218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550219:{NFSU2_TR(0x550219);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55021e:{NFSU2_TR(0x55021e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550223ull));
TAIL_STATIC(0x52c570u,52c);
}
B550223:L550223:{c.instructions+=3;NFSU2_TR(0x550223);
__builtin_memmove((R+28),(R+0),4);
}
B550225:{NFSU2_TR(0x550225);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550227:{NFSU2_TR(0x550227);
if(r1(R+518)){{goto L550271;}}
}
B550229:L550229:{c.instructions+=3;NFSU2_TR(0x550229);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55022c:{NFSU2_TR(0x55022c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55022e:{NFSU2_TR(0x55022e);
if(r1(R+518)){{goto L550271;}}
}
B550230:L550230:{c.instructions+=2;NFSU2_TR(0x550230);
u8 U[4];
w4(U+0,u32(0x790cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550235:{NFSU2_TR(0x550235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55023aull));
TAIL_STATIC(0x505450u,505);
}
B55023a:L55023a:{c.instructions+=4;NFSU2_TR(0x55023a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55023d:{NFSU2_TR(0x55023d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550240:{NFSU2_TR(0x550240);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B550242:{NFSU2_TR(0x550242);
if(r1(R+518)){{goto L55024d;}}
}
B550244:L550244:{c.instructions+=3;NFSU2_TR(0x550244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B550247:{NFSU2_TR(0x550247);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550249:{NFSU2_TR(0x550249);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x550230u);}goto L550230;}}
}
B55024b:L55024b:{c.instructions+=1;NFSU2_TR(0x55024b);
{goto L550271;}
}
B55024d:L55024d:{c.instructions+=2;NFSU2_TR(0x55024d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55024f:{NFSU2_TR(0x55024f);
if(r1(R+518)){{goto L550271;}}
}
B550251:L550251:{c.instructions+=2;NFSU2_TR(0x550251);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550254:{NFSU2_TR(0x550254);
if(r1(R+518)){{goto L55026a;}}
}
B550256:L550256:{c.instructions+=3;NFSU2_TR(0x550256);
__builtin_memmove((R+4),(R+28),4);
}
B550258:{NFSU2_TR(0x550258);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55025b:{NFSU2_TR(0x55025b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550260ull));
TAIL_STATIC(0x517720u,517);
}
B550260:L550260:{c.instructions+=2;NFSU2_TR(0x550260);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550263:{NFSU2_TR(0x550263);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55026a:L55026a:{c.instructions+=1;NFSU2_TR(0x55026a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B550271:L550271:{c.instructions+=4;NFSU2_TR(0x550271);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B550274:{NFSU2_TR(0x550274);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550276:{NFSU2_TR(0x550276);
w4(R+24,u32(0x1ull));
}
B55027b:{NFSU2_TR(0x55027b);
if(r1(R+518)){{goto L5502b4;}}
}
B55027d:L55027d:{c.instructions+=3;NFSU2_TR(0x55027d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550280:{NFSU2_TR(0x550280);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550283:{NFSU2_TR(0x550283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55028a;}}
}
B550285:L550285:{c.instructions+=2;NFSU2_TR(0x550285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550288:{NFSU2_TR(0x550288);
{goto L55028c;}
}
B55028a:L55028a:{c.instructions+=1;NFSU2_TR(0x55028a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55028c:L55028c:{c.instructions+=3;NFSU2_TR(0x55028c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55028d:{NFSU2_TR(0x55028d);
w4(R+4,u32(0x838980ull));
}
B550292:{NFSU2_TR(0x550292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550297ull));
TAIL_STATIC(0x54fe50u,54f);
}
B550297:L550297:{c.instructions+=7;NFSU2_TR(0x550297);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B55029d:{NFSU2_TR(0x55029d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5502a0:{NFSU2_TR(0x5502a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502a1:{NFSU2_TR(0x5502a1);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502a6:{NFSU2_TR(0x5502a6);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502ab:{NFSU2_TR(0x5502ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502ac:{NFSU2_TR(0x5502ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502b1ull));
TAIL_STATIC(0x537b80u,537);
}
B5502b1:L5502b1:{c.instructions+=1;NFSU2_TR(0x5502b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5502b4:L5502b4:{c.instructions+=3;NFSU2_TR(0x5502b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5502b7:{NFSU2_TR(0x5502b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5502ba:{NFSU2_TR(0x5502ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5502c1;}}
}
B5502bc:L5502bc:{c.instructions+=2;NFSU2_TR(0x5502bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5502bf:{NFSU2_TR(0x5502bf);
{goto L5502c3;}
}
B5502c1:L5502c1:{c.instructions+=1;NFSU2_TR(0x5502c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5502c3:L5502c3:{c.instructions+=4;NFSU2_TR(0x5502c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502c5:{NFSU2_TR(0x5502c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502c6:{NFSU2_TR(0x5502c6);
w4(R+4,u32(0x838980ull));
}
B5502cb:{NFSU2_TR(0x5502cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502d0ull));
TAIL_STATIC(0x521340u,521);
}
B5502d0:L5502d0:{c.instructions+=3;NFSU2_TR(0x5502d0);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502d5:{NFSU2_TR(0x5502d5);
w4(R+4,u32(0x8389d0ull));
}
B5502da:{NFSU2_TR(0x5502da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502dfull));
TAIL_STATIC(0x413440u,413);
}
B5502df:L5502df:{c.instructions+=4;NFSU2_TR(0x5502df);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502e1:{NFSU2_TR(0x5502e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502e2:{NFSU2_TR(0x5502e2);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5502e7:{NFSU2_TR(0x5502e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502ecull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B5502ec:L5502ec:{c.instructions+=3;NFSU2_TR(0x5502ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5502ef:{NFSU2_TR(0x5502ef);
__builtin_memmove((R+4),(R+12),4);
}
B5502f1:{NFSU2_TR(0x5502f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502f6ull));
TAIL_STATIC(0x54ff90u,54f);
}
B5502f6:L5502f6:{c.instructions+=2;NFSU2_TR(0x5502f6);
__builtin_memmove((R+4),(R+12),4);
}
B5502f8:{NFSU2_TR(0x5502f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5502fdull));
TAIL_STATIC(0x521d90u,521);
}
B5502fd:L5502fd:{c.instructions+=7;NFSU2_TR(0x5502fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550300:{NFSU2_TR(0x550300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550303:{NFSU2_TR(0x550303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B550304:{NFSU2_TR(0x550304);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B550306:{NFSU2_TR(0x550306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550307:{NFSU2_TR(0x550307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B550308:{NFSU2_TR(0x550308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55031c;}}
}
B55030a:L55030a:{c.instructions+=4;NFSU2_TR(0x55030a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55030d:{NFSU2_TR(0x55030d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55030e:{NFSU2_TR(0x55030e);
w4(R+4,u32(0x838980ull));
}
B550313:{NFSU2_TR(0x550313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550318ull));
TAIL_STATIC(0x5212d0u,521);
}
B550318:L550318:{c.instructions+=2;NFSU2_TR(0x550318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B550319:{NFSU2_TR(0x550319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55031c:L55031c:{c.instructions+=4;NFSU2_TR(0x55031c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55031e:{NFSU2_TR(0x55031e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55031f:{NFSU2_TR(0x55031f);
w4(R+4,u32(0x838980ull));
}
B550324:{NFSU2_TR(0x550324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550329ull));
TAIL_STATIC(0x5212d0u,521);
}
B550329:L550329:{c.instructions+=2;NFSU2_TR(0x550329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55032a:{NFSU2_TR(0x55032a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550330:L550330:{c.instructions+=6;NFSU2_TR(0x550330);
__builtin_memmove((R+0),gp(0x83855d),1);
}
B550335:{NFSU2_TR(0x550335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B550338:{NFSU2_TR(0x550338);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55033a:{NFSU2_TR(0x55033a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55033b:{NFSU2_TR(0x55033b);
__builtin_memmove((R+24),(R+4),4);
}
B55033d:{NFSU2_TR(0x55033d);
if(r1(R+518)){{goto L5503b9;}}
}
B55033f:L55033f:{c.instructions+=4;NFSU2_TR(0x55033f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550342:{NFSU2_TR(0x550342);
u8 U[4];
w4(U+0,u32(0x6d017bc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550347:{NFSU2_TR(0x550347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550348:{NFSU2_TR(0x550348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55034dull));
TAIL_STATIC(0x4954e0u,495);
}
B55034d:L55034d:{c.instructions+=2;NFSU2_TR(0x55034d);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55034f:{NFSU2_TR(0x55034f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550354ull));
TAIL_STATIC(0x575620u,575);
}
B550354:L550354:{c.instructions+=3;NFSU2_TR(0x550354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B550357:{NFSU2_TR(0x550357);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550359:{NFSU2_TR(0x550359);
if(r1(R+518)){{goto L55039f;}}
}
B55035b:L55035b:{c.instructions+=13;NFSU2_TR(0x55035b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55035d:{NFSU2_TR(0x55035d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550363:{NFSU2_TR(0x550363);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550364:{NFSU2_TR(0x550364);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B55036a:{NFSU2_TR(0x55036a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55036b:{NFSU2_TR(0x55036b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550371:{NFSU2_TR(0x550371);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550372:{NFSU2_TR(0x550372);
__builtin_memmove((R+4),gp(0x839bb0),4);
}
B550378:{NFSU2_TR(0x550378);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B55037e:{NFSU2_TR(0x55037e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55037f:{NFSU2_TR(0x55037f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550380:{NFSU2_TR(0x550380);
__builtin_memmove((R+4),(R+0),4);
}
B550382:{NFSU2_TR(0x550382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550387ull));
TAIL_STATIC(0x521e30u,521);
}
B550387:L550387:{c.instructions+=4;NFSU2_TR(0x550387);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550389:{NFSU2_TR(0x550389);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55038a:{NFSU2_TR(0x55038a);
__builtin_memmove((R+4),(R+24),4);
}
B55038c:{NFSU2_TR(0x55038c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550391ull));
TAIL_STATIC(0x54f190u,54f);
}
B550391:L550391:{c.instructions+=3;NFSU2_TR(0x550391);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550393:{NFSU2_TR(0x550393);
__builtin_memmove((R+4),(R+24),4);
}
B550395:{NFSU2_TR(0x550395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55039aull));
TAIL_STATIC(0x539650u,539);
}
B55039a:L55039a:{c.instructions+=3;NFSU2_TR(0x55039a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55039b:{NFSU2_TR(0x55039b);
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
B55039e:{NFSU2_TR(0x55039e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55039f:L55039f:{c.instructions+=5;NFSU2_TR(0x55039f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5503a1:{NFSU2_TR(0x5503a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503a3:{NFSU2_TR(0x5503a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503a4:{NFSU2_TR(0x5503a4);
__builtin_memmove((R+4),(R+24),4);
}
B5503a6:{NFSU2_TR(0x5503a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5503abull));
TAIL_STATIC(0x54f190u,54f);
}
B5503ab:L5503ab:{c.instructions+=3;NFSU2_TR(0x5503ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503ad:{NFSU2_TR(0x5503ad);
__builtin_memmove((R+4),(R+24),4);
}
B5503af:{NFSU2_TR(0x5503af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5503b4ull));
TAIL_STATIC(0x539650u,539);
}
B5503b4:L5503b4:{c.instructions+=3;NFSU2_TR(0x5503b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5503b5:{NFSU2_TR(0x5503b5);
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
B5503b8:{NFSU2_TR(0x5503b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5503b9:L5503b9:{c.instructions+=9;NFSU2_TR(0x5503b9);
__builtin_memmove((R+0),gp(0x839bb4),4);
}
B5503be:{NFSU2_TR(0x5503be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5503c1:{NFSU2_TR(0x5503c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503c2:{NFSU2_TR(0x5503c2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5503c4:{NFSU2_TR(0x5503c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5503c6:{NFSU2_TR(0x5503c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503c7:{NFSU2_TR(0x5503c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5503cb:{NFSU2_TR(0x5503cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5503cf:{NFSU2_TR(0x5503cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L550442;}}
}
B5503d1:L5503d1:{c.instructions+=1;NFSU2_TR(0x5503d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5503d4:L5503d4:{c.instructions+=2;NFSU2_TR(0x5503d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B5503d7:{NFSU2_TR(0x5503d7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L55043b;}}
}
B5503d9:L5503d9:{c.instructions+=2;NFSU2_TR(0x5503d9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5503dc:{NFSU2_TR(0x5503dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L550430;}}
}
B5503de:L5503de:{c.instructions+=2;NFSU2_TR(0x5503de);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503e0:{NFSU2_TR(0x5503e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5503e5ull));
TAIL_STATIC(0x575620u,575);
}
B5503e5:L5503e5:{c.instructions+=3;NFSU2_TR(0x5503e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5503e8:{NFSU2_TR(0x5503e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5503ea:{NFSU2_TR(0x5503ea);
if(r1(R+518)){{goto L55041c;}}
}
B5503ec:L5503ec:{c.instructions+=15;NFSU2_TR(0x5503ec);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5503ef:{NFSU2_TR(0x5503ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B5503f2:{NFSU2_TR(0x5503f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5503f8:{NFSU2_TR(0x5503f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503f9:{NFSU2_TR(0x5503f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5503fa:{NFSU2_TR(0x5503fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B550400:{NFSU2_TR(0x550400);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550401:{NFSU2_TR(0x550401);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550407:{NFSU2_TR(0x550407);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550408:{NFSU2_TR(0x550408);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B55040e:{NFSU2_TR(0x55040e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55040f:{NFSU2_TR(0x55040f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B550412:{NFSU2_TR(0x550412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550413:{NFSU2_TR(0x550413);
__builtin_memmove((R+4),(R+0),4);
}
B550415:{NFSU2_TR(0x550415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55041aull));
TAIL_STATIC(0x521e30u,521);
}
B55041a:L55041a:{c.instructions+=1;NFSU2_TR(0x55041a);
{goto L55041e;}
}
B55041c:L55041c:{c.instructions+=1;NFSU2_TR(0x55041c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55041e:L55041e:{c.instructions+=4;NFSU2_TR(0x55041e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550420:{NFSU2_TR(0x550420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550421:{NFSU2_TR(0x550421);
__builtin_memmove((R+4),(R+24),4);
}
B550423:{NFSU2_TR(0x550423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550428ull));
TAIL_STATIC(0x54f190u,54f);
}
B550428:L550428:{c.instructions+=2;NFSU2_TR(0x550428);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B55042c:{NFSU2_TR(0x55042c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550430:L550430:{c.instructions+=5;NFSU2_TR(0x550430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550433:{NFSU2_TR(0x550433);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B550434:{NFSU2_TR(0x550434);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B550437:{NFSU2_TR(0x550437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B550439:{NFSU2_TR(0x550439);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5503d4u);}goto L5503d4;}}
}
B55043b:L55043b:{c.instructions+=2;NFSU2_TR(0x55043b);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B550440:{NFSU2_TR(0x550440);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5504bf;}}
}
B550442:L550442:{c.instructions+=3;NFSU2_TR(0x550442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B550445:{NFSU2_TR(0x550445);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550447:{NFSU2_TR(0x550447);
if(r1(R+518)){{goto L550466;}}
}
B550449:L550449:{c.instructions+=2;NFSU2_TR(0x550449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55044a:{NFSU2_TR(0x55044a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55044full));
TAIL_STATIC(0x52cef0u,52c);
}
B55044f:L55044f:{c.instructions+=3;NFSU2_TR(0x55044f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550452:{NFSU2_TR(0x550452);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550454:{NFSU2_TR(0x550454);
if(r1(R+518)){{goto L550466;}}
}
B550456:L550456:{c.instructions+=3;NFSU2_TR(0x550456);
u8 U[4];
w4(U+0,u32(0x6d017bc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55045b:{NFSU2_TR(0x55045b);
__builtin_memmove((R+4),(R+0),4);
}
B55045d:{NFSU2_TR(0x55045d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550462ull));
TAIL_STATIC(0x517f80u,517);
}
B550462:L550462:{c.instructions+=2;NFSU2_TR(0x550462);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550464:{NFSU2_TR(0x550464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550481;}}
}
B550466:L550466:{c.instructions+=3;NFSU2_TR(0x550466);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55046b:{NFSU2_TR(0x55046b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55046d:{NFSU2_TR(0x55046d);
if(r1(R+518)){{goto L5504bf;}}
}
B55046f:L55046f:{c.instructions+=4;NFSU2_TR(0x55046f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550472:{NFSU2_TR(0x550472);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550473:{NFSU2_TR(0x550473);
u8 U[4];
w4(U+0,u32(0x6d017bc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550478:{NFSU2_TR(0x550478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55047dull));
TAIL_STATIC(0x52c570u,52c);
}
B55047d:L55047d:{c.instructions+=2;NFSU2_TR(0x55047d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55047f:{NFSU2_TR(0x55047f);
if(r1(R+518)){{goto L5504bf;}}
}
B550481:L550481:{c.instructions+=3;NFSU2_TR(0x550481);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B550487:{NFSU2_TR(0x550487);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550489:{NFSU2_TR(0x550489);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550491;}}
}
B55048b:L55048b:{c.instructions+=2;NFSU2_TR(0x55048b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B55048f:{NFSU2_TR(0x55048f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550498;}}
}
B550491:L550491:{c.instructions+=1;NFSU2_TR(0x550491);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B550498:L550498:{c.instructions+=2;NFSU2_TR(0x550498);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55049c:{NFSU2_TR(0x55049c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5504bf;}}
}
B55049e:L55049e:{c.instructions+=4;NFSU2_TR(0x55049e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5504a1:{NFSU2_TR(0x5504a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5504a4:{NFSU2_TR(0x5504a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5504a6:{NFSU2_TR(0x5504a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5504bf;}}
}
B5504a8:L5504a8:{c.instructions+=2;NFSU2_TR(0x5504a8);
__builtin_memmove((R+28),(R+0),4);
}
B5504aa:{NFSU2_TR(0x5504aa);
__builtin_memmove((R+12),(R+12),4);
}
B5504b0:L5504b0:{c.instructions+=2;NFSU2_TR(0x5504b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504b1:{NFSU2_TR(0x5504b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5504b6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B5504b6:L5504b6:{c.instructions+=4;NFSU2_TR(0x5504b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5504b9:{NFSU2_TR(0x5504b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5504bc:{NFSU2_TR(0x5504bc);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5504bd:{NFSU2_TR(0x5504bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5504b0u);}goto L5504b0;}}
}
B5504bf:L5504bf:{c.instructions+=5;NFSU2_TR(0x5504bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5504c0:{NFSU2_TR(0x5504c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5504c1:{NFSU2_TR(0x5504c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504c3:{NFSU2_TR(0x5504c3);
__builtin_memmove((R+4),(R+24),4);
}
B5504c5:{NFSU2_TR(0x5504c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5504caull));
TAIL_STATIC(0x539650u,539);
}
B5504ca:L5504ca:{c.instructions+=3;NFSU2_TR(0x5504ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5504cb:{NFSU2_TR(0x5504cb);
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
B5504ce:{NFSU2_TR(0x5504ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5504d0:L5504d0:{c.instructions+=6;NFSU2_TR(0x5504d0);
__builtin_memmove((R+0),gp(0x838560),4);
}
B5504d5:{NFSU2_TR(0x5504d5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5504d6:{NFSU2_TR(0x5504d6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5504d9:{NFSU2_TR(0x5504d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504da:{NFSU2_TR(0x5504da);
__builtin_memmove((R+24),(R+4),4);
}
B5504dc:{NFSU2_TR(0x5504dc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L550569;}}
}
B5504e2:L5504e2:{c.instructions+=1;NFSU2_TR(0x5504e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55056cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5504e9:L5504e9:{c.instructions+=5;NFSU2_TR(0x5504e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5504ec:{NFSU2_TR(0x5504ec);
u8 U[4];
w4(U+0,u32(0x3a9ccf4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504f1:{NFSU2_TR(0x5504f1);
u8 U[4];
w4(U+0,u32(0xdc0eba9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504f6:{NFSU2_TR(0x5504f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5504f7:{NFSU2_TR(0x5504f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5504fcull));
TAIL_STATIC(0x495460u,495);
}
B5504fc:L5504fc:{c.instructions+=7;NFSU2_TR(0x5504fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5504ff:{NFSU2_TR(0x5504ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550502:{NFSU2_TR(0x550502);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B550505:{NFSU2_TR(0x550505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550506:{NFSU2_TR(0x550506);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55050c:{NFSU2_TR(0x55050c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55050d:{NFSU2_TR(0x55050d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550512ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B550512:L550512:{c.instructions+=2;NFSU2_TR(0x550512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550513:{NFSU2_TR(0x550513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550514:L550514:{c.instructions+=5;NFSU2_TR(0x550514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550517:{NFSU2_TR(0x550517);
u8 U[4];
w4(U+0,u32(0xded7ca79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55051c:{NFSU2_TR(0x55051c);
u8 U[4];
w4(U+0,u32(0xdc0eba9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550521:{NFSU2_TR(0x550521);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550522:{NFSU2_TR(0x550522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550527ull));
TAIL_STATIC(0x495460u,495);
}
B550527:L550527:{c.instructions+=7;NFSU2_TR(0x550527);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55052a:{NFSU2_TR(0x55052a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55052d:{NFSU2_TR(0x55052d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B550530:{NFSU2_TR(0x550530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550531:{NFSU2_TR(0x550531);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B550537:{NFSU2_TR(0x550537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550538:{NFSU2_TR(0x550538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55053dull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55053d:L55053d:{c.instructions+=2;NFSU2_TR(0x55053d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55053e:{NFSU2_TR(0x55053e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55053f:L55053f:{c.instructions+=5;NFSU2_TR(0x55053f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550542:{NFSU2_TR(0x550542);
u8 U[4];
w4(U+0,u32(0x6a0b254cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550547:{NFSU2_TR(0x550547);
u8 U[4];
w4(U+0,u32(0xdc0eba9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55054c:{NFSU2_TR(0x55054c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55054d:{NFSU2_TR(0x55054d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550552ull));
TAIL_STATIC(0x495460u,495);
}
B550552:L550552:{c.instructions+=6;NFSU2_TR(0x550552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550555:{NFSU2_TR(0x550555);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B550558:{NFSU2_TR(0x550558);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550559:{NFSU2_TR(0x550559);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55055f:{NFSU2_TR(0x55055f);
u8 U[4];
w4(U+0,u32(0x409ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550564:{NFSU2_TR(0x550564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550569ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B550569:L550569:{c.instructions+=2;NFSU2_TR(0x550569);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55056a:{NFSU2_TR(0x55056a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550580:L550580:{c.instructions+=11;NFSU2_TR(0x550580);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550581:{NFSU2_TR(0x550581);
__builtin_memmove((R+20),(R+16),4);
}
B550583:{NFSU2_TR(0x550583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B550586:{NFSU2_TR(0x550586);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550587:{NFSU2_TR(0x550587);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550588:{NFSU2_TR(0x550588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55058b:{NFSU2_TR(0x55058b);
__builtin_memmove((R+24),(R+4),4);
}
B55058d:{NFSU2_TR(0x55058d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550590:{NFSU2_TR(0x550590);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550596:{NFSU2_TR(0x550596);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550597:{NFSU2_TR(0x550597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55059cull));
TAIL_STATIC(0x59b080u,59b);
}
B55059c:L55059c:{c.instructions+=2;NFSU2_TR(0x55059c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55059e:{NFSU2_TR(0x55059e);
if(r1(R+518)){{goto L5505b2;}}
}
B5505a0:L5505a0:{c.instructions+=5;NFSU2_TR(0x5505a0);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5505a6:{NFSU2_TR(0x5505a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505a8:{NFSU2_TR(0x5505a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505aa:{NFSU2_TR(0x5505aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505ab:{NFSU2_TR(0x5505ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5505b0ull));
TAIL_STATIC(0x5b0bd0u,5b0);
}
B5505b0:L5505b0:{c.instructions+=1;NFSU2_TR(0x5505b0);
{goto L5505b8;}
}
B5505b2:L5505b2:{c.instructions+=1;NFSU2_TR(0x5505b2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5505b8:L5505b8:{c.instructions+=5;NFSU2_TR(0x5505b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5505bb:{NFSU2_TR(0x5505bb);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5505be:{NFSU2_TR(0x5505be);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5505c4:{NFSU2_TR(0x5505c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505c5:{NFSU2_TR(0x5505c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5505caull));
TAIL_STATIC(0x59b080u,59b);
}
B5505ca:L5505ca:{c.instructions+=2;NFSU2_TR(0x5505ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5505cc:{NFSU2_TR(0x5505cc);
if(r1(R+518)){{goto L5505ed;}}
}
B5505ce:L5505ce:{c.instructions+=5;NFSU2_TR(0x5505ce);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5505d4:{NFSU2_TR(0x5505d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505d6:{NFSU2_TR(0x5505d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505d8:{NFSU2_TR(0x5505d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5505d9:{NFSU2_TR(0x5505d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5505deull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B5505de:L5505de:{c.instructions+=4;NFSU2_TR(0x5505de);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5505e4:{NFSU2_TR(0x5505e4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5505e6:{NFSU2_TR(0x5505e6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5505e9:{NFSU2_TR(0x5505e9);
if(r1(R+514)){{goto L5505f3;}}
}
B5505eb:L5505eb:{c.instructions+=1;NFSU2_TR(0x5505eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5505ed:L5505ed:{c.instructions+=1;NFSU2_TR(0x5505ed);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5505f3:L5505f3:{c.instructions+=3;NFSU2_TR(0x5505f3);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5505f6:{NFSU2_TR(0x5505f6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5505f9:{NFSU2_TR(0x5505f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5505feull));
TAIL_STATIC(0x75bed4u,75b);
}
B5505fe:L5505fe:{c.instructions+=15;NFSU2_TR(0x5505fe);
__builtin_memmove((R+4),(R+0),4);
}
B550600:{NFSU2_TR(0x550600);
w4(R+0,u32(0x51eb851full));
}
B550605:{NFSU2_TR(0x550605);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B550607:{NFSU2_TR(0x550607);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B55060a:{NFSU2_TR(0x55060a);
__builtin_memmove((R+0),(R+8),4);
}
B55060c:{NFSU2_TR(0x55060c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B55060f:{NFSU2_TR(0x55060f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B550611:{NFSU2_TR(0x550611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550614:{NFSU2_TR(0x550614);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B550617:{NFSU2_TR(0x550617);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B55061d:{NFSU2_TR(0x55061d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550623:{NFSU2_TR(0x550623);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B550625:{NFSU2_TR(0x550625);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550627:{NFSU2_TR(0x550627);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55062a:{NFSU2_TR(0x55062a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550634;}}
}
B55062c:L55062c:{c.instructions+=2;NFSU2_TR(0x55062c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B55062e:{NFSU2_TR(0x55062e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550634:L550634:{c.instructions+=2;NFSU2_TR(0x550634);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550637:{NFSU2_TR(0x550637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55063cull));
TAIL_STATIC(0x75bed4u,75b);
}
B55063c:L55063c:{c.instructions+=27;NFSU2_TR(0x55063c);
__builtin_memmove((R+4),(R+0),4);
}
B55063e:{NFSU2_TR(0x55063e);
w4(R+0,u32(0x51eb851full));
}
B550643:{NFSU2_TR(0x550643);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B550645:{NFSU2_TR(0x550645);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B550648:{NFSU2_TR(0x550648);
__builtin_memmove((R+4),(R+8),4);
}
B55064a:{NFSU2_TR(0x55064a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B55064d:{NFSU2_TR(0x55064d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B550651:{NFSU2_TR(0x550651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550654:{NFSU2_TR(0x550654);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550655:{NFSU2_TR(0x550655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550658:{NFSU2_TR(0x550658);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B55065b:{NFSU2_TR(0x55065b);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B550661:{NFSU2_TR(0x550661);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550664:{NFSU2_TR(0x550664);
{u32 ea_=u32(u32(7967616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55066a:{NFSU2_TR(0x55066a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55066d:{NFSU2_TR(0x55066d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B550670:{NFSU2_TR(0x550670);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550673:{NFSU2_TR(0x550673);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550676:{NFSU2_TR(0x550676);
{u32 ea_=u32(u32(7967620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55067c:{NFSU2_TR(0x55067c);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55067f:{NFSU2_TR(0x55067f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B550682:{NFSU2_TR(0x550682);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B550688:{NFSU2_TR(0x550688);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55068b:{NFSU2_TR(0x55068b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55068c:{NFSU2_TR(0x55068c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55068d:{NFSU2_TR(0x55068d);
__builtin_memmove((R+4),(R+24),4);
}
B55068f:{NFSU2_TR(0x55068f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550694ull));
TAIL_STATIC(0x549fd0u,549);
}
B550694:L550694:{c.instructions+=3;NFSU2_TR(0x550694);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B550696:{NFSU2_TR(0x550696);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550697:{NFSU2_TR(0x550697);
{goto L5506a0;}
}
B5506a0:L5506a0:{c.instructions+=4;NFSU2_TR(0x5506a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5506a3:{NFSU2_TR(0x5506a3);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5506a9:{NFSU2_TR(0x5506a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506aa:{NFSU2_TR(0x5506aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5506afull));
TAIL_STATIC(0x59b080u,59b);
}
B5506af:L5506af:{c.instructions+=2;NFSU2_TR(0x5506af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5506b1:{NFSU2_TR(0x5506b1);
if(r1(R+518)){{goto L5506df;}}
}
B5506b3:L5506b3:{c.instructions+=4;NFSU2_TR(0x5506b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5506b6:{NFSU2_TR(0x5506b6);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5506bc:{NFSU2_TR(0x5506bc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506be:{NFSU2_TR(0x5506be);
if(r1(R+518)){{goto L5506c3;}}
}
B5506c0:L5506c0:{c.instructions+=2;NFSU2_TR(0x5506c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506c1:{NFSU2_TR(0x5506c1);
{goto L5506c5;}
}
B5506c3:L5506c3:{c.instructions+=1;NFSU2_TR(0x5506c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506c5:L5506c5:{c.instructions+=2;NFSU2_TR(0x5506c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506c6:{NFSU2_TR(0x5506c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5506cbull));
TAIL_STATIC(0x5b2bd0u,5b2);
}
B5506cb:L5506cb:{c.instructions+=4;NFSU2_TR(0x5506cb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5506d1:{NFSU2_TR(0x5506d1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5506d3:{NFSU2_TR(0x5506d3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5506d6:{NFSU2_TR(0x5506d6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5506dd;}}
}
B5506d8:L5506d8:{c.instructions+=2;NFSU2_TR(0x5506d8);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5506db:{NFSU2_TR(0x5506db);
{goto L5506e6;}
}
B5506dd:L5506dd:{c.instructions+=1;NFSU2_TR(0x5506dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5506df:L5506df:{c.instructions+=1;NFSU2_TR(0x5506df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5506e6:L5506e6:{c.instructions+=4;NFSU2_TR(0x5506e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5506e9:{NFSU2_TR(0x5506e9);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5506ef:{NFSU2_TR(0x5506ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5506f0:{NFSU2_TR(0x5506f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5506f5ull));
TAIL_STATIC(0x59b080u,59b);
}
B5506f5:L5506f5:{c.instructions+=2;NFSU2_TR(0x5506f5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5506f7:{NFSU2_TR(0x5506f7);
if(r1(R+518)){{goto L55071f;}}
}
B5506f9:L5506f9:{c.instructions+=4;NFSU2_TR(0x5506f9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5506fc:{NFSU2_TR(0x5506fc);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550702:{NFSU2_TR(0x550702);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550704:{NFSU2_TR(0x550704);
if(r1(R+518)){{goto L550712;}}
}
B550706:L550706:{c.instructions+=3;NFSU2_TR(0x550706);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550707:{NFSU2_TR(0x550707);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550708:{NFSU2_TR(0x550708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55070dull));
TAIL_STATIC(0x5b2ba0u,5b2);
}
B55070d:L55070d:{c.instructions+=2;NFSU2_TR(0x55070d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550710:{NFSU2_TR(0x550710);
{goto L550726;}
}
B550712:L550712:{c.instructions+=3;NFSU2_TR(0x550712);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550714:{NFSU2_TR(0x550714);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550715:{NFSU2_TR(0x550715);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55071aull));
TAIL_STATIC(0x5b2ba0u,5b2);
}
B55071a:L55071a:{c.instructions+=2;NFSU2_TR(0x55071a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55071d:{NFSU2_TR(0x55071d);
{goto L550726;}
}
B55071f:L55071f:{c.instructions+=1;NFSU2_TR(0x55071f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B550726:L550726:{c.instructions+=4;NFSU2_TR(0x550726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B550729:{NFSU2_TR(0x550729);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55072f:{NFSU2_TR(0x55072f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550730:{NFSU2_TR(0x550730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550735ull));
TAIL_STATIC(0x59b080u,59b);
}
B550735:L550735:{c.instructions+=2;NFSU2_TR(0x550735);
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
B550737:{NFSU2_TR(0x550737);
if(r1(R+518)){{goto L55075f;}}
}
B550739:L550739:{c.instructions+=4;NFSU2_TR(0x550739);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55073c:{NFSU2_TR(0x55073c);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550742:{NFSU2_TR(0x550742);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550744:{NFSU2_TR(0x550744);
if(r1(R+518)){{goto L550752;}}
}
B550746:L550746:{c.instructions+=3;NFSU2_TR(0x550746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550747:{NFSU2_TR(0x550747);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550748:{NFSU2_TR(0x550748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55074dull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B55074d:L55074d:{c.instructions+=2;NFSU2_TR(0x55074d);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550750:{NFSU2_TR(0x550750);
{goto L550766;}
}
B550752:L550752:{c.instructions+=3;NFSU2_TR(0x550752);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550754:{NFSU2_TR(0x550754);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550755:{NFSU2_TR(0x550755);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55075aull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B55075a:L55075a:{c.instructions+=2;NFSU2_TR(0x55075a);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55075d:{NFSU2_TR(0x55075d);
{goto L550766;}
}
B55075f:L55075f:{c.instructions+=1;NFSU2_TR(0x55075f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B550766:L550766:{c.instructions+=11;NFSU2_TR(0x550766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550769:{NFSU2_TR(0x550769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55076c:{NFSU2_TR(0x55076c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55076e:{NFSU2_TR(0x55076e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55076f:{NFSU2_TR(0x55076f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550772:{NFSU2_TR(0x550772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550773:{NFSU2_TR(0x550773);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550776:{NFSU2_TR(0x550776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550777:{NFSU2_TR(0x550777);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550778:{NFSU2_TR(0x550778);
__builtin_memmove((R+4),(R+24),4);
}
B55077a:{NFSU2_TR(0x55077a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55077dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55077d:L55077d:{c.instructions+=3;NFSU2_TR(0x55077d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B55077e:{NFSU2_TR(0x55077e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B550781:{NFSU2_TR(0x550781);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5506a0u);}goto L5506a0;}}
}
B550787:L550787:{c.instructions+=12;NFSU2_TR(0x550787);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B550789:{NFSU2_TR(0x550789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55078c:{NFSU2_TR(0x55078c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55078e:{NFSU2_TR(0x55078e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550791:{NFSU2_TR(0x550791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550794:{NFSU2_TR(0x550794);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550797:{NFSU2_TR(0x550797);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55079a:{NFSU2_TR(0x55079a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55079d:{NFSU2_TR(0x55079d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5507a0:{NFSU2_TR(0x5507a0);
w4(R+8,u32(0x38d548d2ull));
}
B5507a5:{NFSU2_TR(0x5507a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5507a8:{NFSU2_TR(0x5507a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507adull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5507ad:L5507ad:{c.instructions+=3;NFSU2_TR(0x5507ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5507af:{NFSU2_TR(0x5507af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5507b0:{NFSU2_TR(0x5507b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5507bc;}}
}
B5507b2:L5507b2:{c.instructions+=2;NFSU2_TR(0x5507b2);
w4(R+8,u32(0xc01a6f63ull));
}
B5507b7:{NFSU2_TR(0x5507b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507bcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5507bc:L5507bc:{c.instructions+=4;NFSU2_TR(0x5507bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5507bd:{NFSU2_TR(0x5507bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5507c0:{NFSU2_TR(0x5507c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5507c1:{NFSU2_TR(0x5507c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507c6ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5507c6:L5507c6:{c.instructions+=5;NFSU2_TR(0x5507c6);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B5507cb:{NFSU2_TR(0x5507cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5507ce:{NFSU2_TR(0x5507ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5507d0:{NFSU2_TR(0x5507d0);
w4(R+8,u32(0x5b81d613ull));
}
B5507d5:{NFSU2_TR(0x5507d5);
if(r1(R+518)){{goto L5507dc;}}
}
B5507d7:L5507d7:{c.instructions+=1;NFSU2_TR(0x5507d7);
w4(R+8,u32(0xacb8dff3ull));
}
B5507dc:L5507dc:{c.instructions+=1;NFSU2_TR(0x5507dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507e1ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5507e1:L5507e1:{c.instructions+=2;NFSU2_TR(0x5507e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5507e3:{NFSU2_TR(0x5507e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5507ef;}}
}
B5507e5:L5507e5:{c.instructions+=2;NFSU2_TR(0x5507e5);
w4(R+8,u32(0xc01a6f63ull));
}
B5507ea:{NFSU2_TR(0x5507ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507efull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B5507ef:L5507ef:{c.instructions+=4;NFSU2_TR(0x5507ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5507f0:{NFSU2_TR(0x5507f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5507f3:{NFSU2_TR(0x5507f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5507f4:{NFSU2_TR(0x5507f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5507f9ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5507f9:L5507f9:{c.instructions+=8;NFSU2_TR(0x5507f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5507fc:{NFSU2_TR(0x5507fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5507fd:{NFSU2_TR(0x5507fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B550800:{NFSU2_TR(0x550800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550801:{NFSU2_TR(0x550801);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B550804:{NFSU2_TR(0x550804);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550806:{NFSU2_TR(0x550806);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550807:{NFSU2_TR(0x550807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55080cull));
TAIL_STATIC(0x50c960u,50c);
}
B55080c:L55080c:{c.instructions+=7;NFSU2_TR(0x55080c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55080f:{NFSU2_TR(0x55080f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B550812:{NFSU2_TR(0x550812);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550813:{NFSU2_TR(0x550813);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550818:{NFSU2_TR(0x550818);
u8 U[4];
w4(U+0,u32(0xcb9a2c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55081d:{NFSU2_TR(0x55081d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55081e:{NFSU2_TR(0x55081e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550823ull));
TAIL_STATIC(0x537b80u,537);
}
B550823:L550823:{c.instructions+=4;NFSU2_TR(0x550823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B550825:{NFSU2_TR(0x550825);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B550828:{NFSU2_TR(0x550828);
__builtin_memmove((R+4),(R+24),4);
}
B55082a:{NFSU2_TR(0x55082a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55082dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55082d:L55082d:{c.instructions+=5;NFSU2_TR(0x55082d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55082e:{NFSU2_TR(0x55082e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55082f:{NFSU2_TR(0x55082f);
__builtin_memmove((R+16),(R+20),4);
}
B550831:{NFSU2_TR(0x550831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B550832:{NFSU2_TR(0x550832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550840:L550840:{c.instructions+=12;NFSU2_TR(0x550840);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550841:{NFSU2_TR(0x550841);
__builtin_memmove((R+20),(R+16),4);
}
B550843:{NFSU2_TR(0x550843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B550849:{NFSU2_TR(0x550849);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55084c:{NFSU2_TR(0x55084c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55084d:{NFSU2_TR(0x55084d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55084e:{NFSU2_TR(0x55084e);
__builtin_memmove((R+24),(R+4),4);
}
B550850:{NFSU2_TR(0x550850);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550851:{NFSU2_TR(0x550851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550854:{NFSU2_TR(0x550854);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55085a:{NFSU2_TR(0x55085a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55085c:{NFSU2_TR(0x55085c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550861ull));
TAIL_STATIC(0x59b080u,59b);
}
B550861:L550861:{c.instructions+=3;NFSU2_TR(0x550861);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550863:{NFSU2_TR(0x550863);
w4(R+28,u32(0x1ull));
}
B550868:{NFSU2_TR(0x550868);
if(r1(R+518)){{goto L55087c;}}
}
B55086a:L55086a:{c.instructions+=5;NFSU2_TR(0x55086a);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550870:{NFSU2_TR(0x550870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550871:{NFSU2_TR(0x550871);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550873:{NFSU2_TR(0x550873);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550875:{NFSU2_TR(0x550875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55087aull));
TAIL_STATIC(0x5b0bd0u,5b0);
}
B55087a:L55087a:{c.instructions+=1;NFSU2_TR(0x55087a);
{goto L550882;}
}
B55087c:L55087c:{c.instructions+=1;NFSU2_TR(0x55087c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550882:L550882:{c.instructions+=4;NFSU2_TR(0x550882);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550885:{NFSU2_TR(0x550885);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55088b:{NFSU2_TR(0x55088b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55088d:{NFSU2_TR(0x55088d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550892ull));
TAIL_STATIC(0x59b080u,59b);
}
B550892:L550892:{c.instructions+=2;NFSU2_TR(0x550892);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550894:{NFSU2_TR(0x550894);
if(r1(R+518)){{goto L5508b5;}}
}
B550896:L550896:{c.instructions+=5;NFSU2_TR(0x550896);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55089c:{NFSU2_TR(0x55089c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55089d:{NFSU2_TR(0x55089d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55089f:{NFSU2_TR(0x55089f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5508a1:{NFSU2_TR(0x5508a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5508a6ull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B5508a6:L5508a6:{c.instructions+=4;NFSU2_TR(0x5508a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5508ac:{NFSU2_TR(0x5508ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5508ae:{NFSU2_TR(0x5508ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5508b1:{NFSU2_TR(0x5508b1);
if(r1(R+514)){{goto L5508bb;}}
}
B5508b3:L5508b3:{c.instructions+=1;NFSU2_TR(0x5508b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5508b5:L5508b5:{c.instructions+=1;NFSU2_TR(0x5508b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5508bb:L5508bb:{c.instructions+=5;NFSU2_TR(0x5508bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5508be:{NFSU2_TR(0x5508be);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5508c1:{NFSU2_TR(0x5508c1);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5508c7:{NFSU2_TR(0x5508c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5508c8:{NFSU2_TR(0x5508c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5508cdull));
TAIL_STATIC(0x59b080u,59b);
}
B5508cd:L5508cd:{c.instructions+=2;NFSU2_TR(0x5508cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5508cf:{NFSU2_TR(0x5508cf);
if(r1(R+518)){{goto L5508ef;}}
}
B5508d1:L5508d1:{c.instructions+=5;NFSU2_TR(0x5508d1);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5508d7:{NFSU2_TR(0x5508d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5508d8:{NFSU2_TR(0x5508d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5508da:{NFSU2_TR(0x5508da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5508db:{NFSU2_TR(0x5508db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5508e0ull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B5508e0:L5508e0:{c.instructions+=4;NFSU2_TR(0x5508e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5508e6:{NFSU2_TR(0x5508e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5508e8:{NFSU2_TR(0x5508e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5508eb:{NFSU2_TR(0x5508eb);
if(r1(R+514)){{goto L5508f5;}}
}
B5508ed:L5508ed:{c.instructions+=1;NFSU2_TR(0x5508ed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5508ef:L5508ef:{c.instructions+=1;NFSU2_TR(0x5508ef);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5508f5:L5508f5:{c.instructions+=4;NFSU2_TR(0x5508f5);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5508f8:{NFSU2_TR(0x5508f8);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5508fe:{NFSU2_TR(0x5508fe);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550900:{NFSU2_TR(0x550900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550905ull));
TAIL_STATIC(0x59b080u,59b);
}
B550905:L550905:{c.instructions+=2;NFSU2_TR(0x550905);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550907:{NFSU2_TR(0x550907);
if(r1(R+518)){{goto L550928;}}
}
B550909:L550909:{c.instructions+=5;NFSU2_TR(0x550909);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55090f:{NFSU2_TR(0x55090f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550910:{NFSU2_TR(0x550910);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550912:{NFSU2_TR(0x550912);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550914:{NFSU2_TR(0x550914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550919ull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B550919:L550919:{c.instructions+=4;NFSU2_TR(0x550919);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B55091f:{NFSU2_TR(0x55091f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550921:{NFSU2_TR(0x550921);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B550924:{NFSU2_TR(0x550924);
if(r1(R+514)){{goto L55092e;}}
}
B550926:L550926:{c.instructions+=1;NFSU2_TR(0x550926);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B550928:L550928:{c.instructions+=1;NFSU2_TR(0x550928);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55092e:L55092e:{c.instructions+=4;NFSU2_TR(0x55092e);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550934:{NFSU2_TR(0x550934);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55093a:{NFSU2_TR(0x55093a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55093c:{NFSU2_TR(0x55093c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550941ull));
TAIL_STATIC(0x59b080u,59b);
}
B550941:L550941:{c.instructions+=2;NFSU2_TR(0x550941);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550943:{NFSU2_TR(0x550943);
if(r1(R+518)){{goto L550957;}}
}
B550945:L550945:{c.instructions+=5;NFSU2_TR(0x550945);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55094b:{NFSU2_TR(0x55094b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55094c:{NFSU2_TR(0x55094c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55094e:{NFSU2_TR(0x55094e);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550950:{NFSU2_TR(0x550950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550955ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B550955:L550955:{c.instructions+=1;NFSU2_TR(0x550955);
{goto L55095d;}
}
B550957:L550957:{c.instructions+=1;NFSU2_TR(0x550957);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55095d:L55095d:{c.instructions+=5;NFSU2_TR(0x55095d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B550960:{NFSU2_TR(0x550960);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550963:{NFSU2_TR(0x550963);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550969:{NFSU2_TR(0x550969);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55096a:{NFSU2_TR(0x55096a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55096full));
TAIL_STATIC(0x59b080u,59b);
}
B55096f:L55096f:{c.instructions+=2;NFSU2_TR(0x55096f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550971:{NFSU2_TR(0x550971);
if(r1(R+518)){{goto L550984;}}
}
B550973:L550973:{c.instructions+=5;NFSU2_TR(0x550973);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550979:{NFSU2_TR(0x550979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55097a:{NFSU2_TR(0x55097a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55097c:{NFSU2_TR(0x55097c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55097d:{NFSU2_TR(0x55097d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550982ull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B550982:L550982:{c.instructions+=1;NFSU2_TR(0x550982);
{goto L55098a;}
}
B550984:L550984:{c.instructions+=1;NFSU2_TR(0x550984);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55098a:L55098a:{c.instructions+=5;NFSU2_TR(0x55098a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55098d:{NFSU2_TR(0x55098d);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550990:{NFSU2_TR(0x550990);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550996:{NFSU2_TR(0x550996);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550997:{NFSU2_TR(0x550997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55099cull));
TAIL_STATIC(0x59b080u,59b);
}
B55099c:L55099c:{c.instructions+=2;NFSU2_TR(0x55099c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55099e:{NFSU2_TR(0x55099e);
if(r1(R+518)){{goto L5509b1;}}
}
B5509a0:L5509a0:{c.instructions+=5;NFSU2_TR(0x5509a0);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5509a6:{NFSU2_TR(0x5509a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509a7:{NFSU2_TR(0x5509a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509a9:{NFSU2_TR(0x5509a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509aa:{NFSU2_TR(0x5509aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5509afull));
TAIL_STATIC(0x5b2ba0u,5b2);
}
B5509af:L5509af:{c.instructions+=1;NFSU2_TR(0x5509af);
{goto L5509b7;}
}
B5509b1:L5509b1:{c.instructions+=1;NFSU2_TR(0x5509b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5509b7:L5509b7:{c.instructions+=4;NFSU2_TR(0x5509b7);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5509bd:{NFSU2_TR(0x5509bd);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5509c3:{NFSU2_TR(0x5509c3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509c5:{NFSU2_TR(0x5509c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5509caull));
TAIL_STATIC(0x59b080u,59b);
}
B5509ca:L5509ca:{c.instructions+=2;NFSU2_TR(0x5509ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5509cc:{NFSU2_TR(0x5509cc);
if(r1(R+518)){{goto L5509e0;}}
}
B5509ce:L5509ce:{c.instructions+=5;NFSU2_TR(0x5509ce);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5509d4:{NFSU2_TR(0x5509d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509d5:{NFSU2_TR(0x5509d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509d7:{NFSU2_TR(0x5509d7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509d9:{NFSU2_TR(0x5509d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5509deull));
TAIL_STATIC(0x5b2ba0u,5b2);
}
B5509de:L5509de:{c.instructions+=1;NFSU2_TR(0x5509de);
{goto L5509e6;}
}
B5509e0:L5509e0:{c.instructions+=1;NFSU2_TR(0x5509e0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5509e6:L5509e6:{c.instructions+=4;NFSU2_TR(0x5509e6);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5509ec:{NFSU2_TR(0x5509ec);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B5509f2:{NFSU2_TR(0x5509f2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5509f4:{NFSU2_TR(0x5509f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5509f9ull));
TAIL_STATIC(0x59b080u,59b);
}
B5509f9:L5509f9:{c.instructions+=2;NFSU2_TR(0x5509f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5509fb:{NFSU2_TR(0x5509fb);
if(r1(R+518)){{goto L550a1c;}}
}
B5509fd:L5509fd:{c.instructions+=5;NFSU2_TR(0x5509fd);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550a03:{NFSU2_TR(0x550a03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a04:{NFSU2_TR(0x550a04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a06:{NFSU2_TR(0x550a06);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a08:{NFSU2_TR(0x550a08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550a0dull));
TAIL_STATIC(0x5b2bd0u,5b2);
}
B550a0d:L550a0d:{c.instructions+=4;NFSU2_TR(0x550a0d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B550a13:{NFSU2_TR(0x550a13);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550a15:{NFSU2_TR(0x550a15);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B550a18:{NFSU2_TR(0x550a18);
if(r1(R+514)){{goto L550a22;}}
}
B550a1a:L550a1a:{c.instructions+=1;NFSU2_TR(0x550a1a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B550a1c:L550a1c:{c.instructions+=1;NFSU2_TR(0x550a1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550a22:L550a22:{c.instructions+=5;NFSU2_TR(0x550a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B550a25:{NFSU2_TR(0x550a25);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550a2b:{NFSU2_TR(0x550a2b);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550a31:{NFSU2_TR(0x550a31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a32:{NFSU2_TR(0x550a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550a37ull));
TAIL_STATIC(0x59b080u,59b);
}
B550a37:L550a37:{c.instructions+=2;NFSU2_TR(0x550a37);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550a39:{NFSU2_TR(0x550a39);
if(r1(R+518)){{goto L550a59;}}
}
B550a3b:L550a3b:{c.instructions+=5;NFSU2_TR(0x550a3b);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550a41:{NFSU2_TR(0x550a41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a42:{NFSU2_TR(0x550a42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a44:{NFSU2_TR(0x550a44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550a45:{NFSU2_TR(0x550a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550a4aull));
TAIL_STATIC(0x5b2bd0u,5b2);
}
B550a4a:L550a4a:{c.instructions+=4;NFSU2_TR(0x550a4a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B550a50:{NFSU2_TR(0x550a50);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550a52:{NFSU2_TR(0x550a52);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B550a55:{NFSU2_TR(0x550a55);
if(r1(R+514)){{goto L550a5f;}}
}
B550a57:L550a57:{c.instructions+=1;NFSU2_TR(0x550a57);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B550a59:L550a59:{c.instructions+=1;NFSU2_TR(0x550a59);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550a5f:L550a5f:{c.instructions+=7;NFSU2_TR(0x550a5f);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550a62:{NFSU2_TR(0x550a62);
w4(R+4,u32(0x3f800000ull));
}
B550a67:{NFSU2_TR(0x550a67);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550a6a:{NFSU2_TR(0x550a6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550a70:{NFSU2_TR(0x550a70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550a72:{NFSU2_TR(0x550a72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B550a75:{NFSU2_TR(0x550a75);
if(r1(R+514)){{goto L550a7a;}}
}
B550a77:L550a77:{c.instructions+=1;NFSU2_TR(0x550a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550a7a:L550a7a:{c.instructions+=5;NFSU2_TR(0x550a7a);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550a80:{NFSU2_TR(0x550a80);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B550a86:{NFSU2_TR(0x550a86);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B550a88:{NFSU2_TR(0x550a88);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B550a8b:{NFSU2_TR(0x550a8b);
if(r1(R+514)){{goto L550a93;}}
}
B550a8d:L550a8d:{c.instructions+=1;NFSU2_TR(0x550a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550a93:L550a93:{c.instructions+=16;NFSU2_TR(0x550a93);
{u32 ea_=u32(u32(7967644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550a99:{NFSU2_TR(0x550a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B550a9c:{NFSU2_TR(0x550a9c);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B550a9f:{NFSU2_TR(0x550a9f);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B550aa2:{NFSU2_TR(0x550aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550aa5:{NFSU2_TR(0x550aa5);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550aa8:{NFSU2_TR(0x550aa8);
{u32 ea_=u32(u32(7967648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550aae:{NFSU2_TR(0x550aae);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B550ab1:{NFSU2_TR(0x550ab1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B550ab4:{NFSU2_TR(0x550ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550ab7:{NFSU2_TR(0x550ab7);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550aba:{NFSU2_TR(0x550aba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550abb:{NFSU2_TR(0x550abb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550abc:{NFSU2_TR(0x550abc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550abd:{NFSU2_TR(0x550abd);
__builtin_memmove((R+4),(R+24),4);
}
B550abf:{NFSU2_TR(0x550abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ac4ull));
TAIL_STATIC(0x54a260u,54a);
}
B550ac4:L550ac4:{c.instructions+=2;NFSU2_TR(0x550ac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ac6:{NFSU2_TR(0x550ac6);
if(r1(R+518)){{goto L550ae5;}}
}
B550ac8:L550ac8:{c.instructions+=2;NFSU2_TR(0x550ac8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ac9:{NFSU2_TR(0x550ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550aceull));
TAIL_STATIC(0x52cef0u,52c);
}
B550ace:L550ace:{c.instructions+=3;NFSU2_TR(0x550ace);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550ad1:{NFSU2_TR(0x550ad1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ad3:{NFSU2_TR(0x550ad3);
if(r1(R+518)){{goto L550ae5;}}
}
B550ad5:L550ad5:{c.instructions+=3;NFSU2_TR(0x550ad5);
u8 U[4];
w4(U+0,u32(0x11495cd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ada:{NFSU2_TR(0x550ada);
__builtin_memmove((R+4),(R+0),4);
}
B550adc:{NFSU2_TR(0x550adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ae1ull));
TAIL_STATIC(0x517f80u,517);
}
B550ae1:L550ae1:{c.instructions+=2;NFSU2_TR(0x550ae1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ae3:{NFSU2_TR(0x550ae3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550b00;}}
}
B550ae5:L550ae5:{c.instructions+=3;NFSU2_TR(0x550ae5);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550aea:{NFSU2_TR(0x550aea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550aec:{NFSU2_TR(0x550aec);
if(r1(R+518)){{goto L550b05;}}
}
B550aee:L550aee:{c.instructions+=4;NFSU2_TR(0x550aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550af1:{NFSU2_TR(0x550af1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550af2:{NFSU2_TR(0x550af2);
u8 U[4];
w4(U+0,u32(0x11495cd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550af7:{NFSU2_TR(0x550af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550afcull));
TAIL_STATIC(0x52c570u,52c);
}
B550afc:L550afc:{c.instructions+=2;NFSU2_TR(0x550afc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550afe:{NFSU2_TR(0x550afe);
if(r1(R+518)){{goto L550b05;}}
}
B550b00:L550b00:{c.instructions+=2;NFSU2_TR(0x550b00);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550b03:{NFSU2_TR(0x550b03);
if(r1(R+518)){{goto L550b07;}}
}
B550b05:L550b05:{c.instructions+=1;NFSU2_TR(0x550b05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550b07:L550b07:{c.instructions+=3;NFSU2_TR(0x550b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b09:{NFSU2_TR(0x550b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550b0f:{NFSU2_TR(0x550b0f);
if(r1(R+518)){{goto L550b2e;}}
}
B550b11:L550b11:{c.instructions+=2;NFSU2_TR(0x550b11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b12:{NFSU2_TR(0x550b12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b17ull));
TAIL_STATIC(0x52cef0u,52c);
}
B550b17:L550b17:{c.instructions+=3;NFSU2_TR(0x550b17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550b1a:{NFSU2_TR(0x550b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b1c:{NFSU2_TR(0x550b1c);
if(r1(R+518)){{goto L550b2e;}}
}
B550b1e:L550b1e:{c.instructions+=3;NFSU2_TR(0x550b1e);
u8 U[4];
w4(U+0,u32(0x9c90d375ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b23:{NFSU2_TR(0x550b23);
__builtin_memmove((R+4),(R+0),4);
}
B550b25:{NFSU2_TR(0x550b25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b2aull));
TAIL_STATIC(0x517f80u,517);
}
B550b2a:L550b2a:{c.instructions+=2;NFSU2_TR(0x550b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b2c:{NFSU2_TR(0x550b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550b49;}}
}
B550b2e:L550b2e:{c.instructions+=3;NFSU2_TR(0x550b2e);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550b33:{NFSU2_TR(0x550b33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b35:{NFSU2_TR(0x550b35);
if(r1(R+518)){{goto L550b4e;}}
}
B550b37:L550b37:{c.instructions+=4;NFSU2_TR(0x550b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550b3a:{NFSU2_TR(0x550b3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b3b:{NFSU2_TR(0x550b3b);
u8 U[4];
w4(U+0,u32(0x9c90d375ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b40:{NFSU2_TR(0x550b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b45ull));
TAIL_STATIC(0x52c570u,52c);
}
B550b45:L550b45:{c.instructions+=2;NFSU2_TR(0x550b45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b47:{NFSU2_TR(0x550b47);
if(r1(R+518)){{goto L550b4e;}}
}
B550b49:L550b49:{c.instructions+=2;NFSU2_TR(0x550b49);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550b4c:{NFSU2_TR(0x550b4c);
if(r1(R+518)){{goto L550b50;}}
}
B550b4e:L550b4e:{c.instructions+=1;NFSU2_TR(0x550b4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550b50:L550b50:{c.instructions+=3;NFSU2_TR(0x550b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b52:{NFSU2_TR(0x550b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550b58:{NFSU2_TR(0x550b58);
if(r1(R+518)){{goto L550b77;}}
}
B550b5a:L550b5a:{c.instructions+=2;NFSU2_TR(0x550b5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b5b:{NFSU2_TR(0x550b5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b60ull));
TAIL_STATIC(0x52cef0u,52c);
}
B550b60:L550b60:{c.instructions+=3;NFSU2_TR(0x550b60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550b63:{NFSU2_TR(0x550b63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b65:{NFSU2_TR(0x550b65);
if(r1(R+518)){{goto L550b77;}}
}
B550b67:L550b67:{c.instructions+=3;NFSU2_TR(0x550b67);
u8 U[4];
w4(U+0,u32(0x1183698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b6c:{NFSU2_TR(0x550b6c);
__builtin_memmove((R+4),(R+0),4);
}
B550b6e:{NFSU2_TR(0x550b6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b73ull));
TAIL_STATIC(0x517f80u,517);
}
B550b73:L550b73:{c.instructions+=2;NFSU2_TR(0x550b73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b75:{NFSU2_TR(0x550b75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550b92;}}
}
B550b77:L550b77:{c.instructions+=3;NFSU2_TR(0x550b77);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550b7c:{NFSU2_TR(0x550b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b7e:{NFSU2_TR(0x550b7e);
if(r1(R+518)){{goto L550b97;}}
}
B550b80:L550b80:{c.instructions+=4;NFSU2_TR(0x550b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550b83:{NFSU2_TR(0x550b83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b84:{NFSU2_TR(0x550b84);
u8 U[4];
w4(U+0,u32(0x1183698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550b89:{NFSU2_TR(0x550b89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550b8eull));
TAIL_STATIC(0x52c570u,52c);
}
B550b8e:L550b8e:{c.instructions+=2;NFSU2_TR(0x550b8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b90:{NFSU2_TR(0x550b90);
if(r1(R+518)){{goto L550b97;}}
}
B550b92:L550b92:{c.instructions+=2;NFSU2_TR(0x550b92);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550b95:{NFSU2_TR(0x550b95);
if(r1(R+518)){{goto L550b99;}}
}
B550b97:L550b97:{c.instructions+=1;NFSU2_TR(0x550b97);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550b99:L550b99:{c.instructions+=3;NFSU2_TR(0x550b99);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550b9b:{NFSU2_TR(0x550b9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550ba1:{NFSU2_TR(0x550ba1);
if(r1(R+518)){{goto L550bc0;}}
}
B550ba3:L550ba3:{c.instructions+=2;NFSU2_TR(0x550ba3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ba4:{NFSU2_TR(0x550ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ba9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B550ba9:L550ba9:{c.instructions+=3;NFSU2_TR(0x550ba9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550bac:{NFSU2_TR(0x550bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550bae:{NFSU2_TR(0x550bae);
if(r1(R+518)){{goto L550bc0;}}
}
B550bb0:L550bb0:{c.instructions+=3;NFSU2_TR(0x550bb0);
u8 U[4];
w4(U+0,u32(0xd35a7923ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bb5:{NFSU2_TR(0x550bb5);
__builtin_memmove((R+4),(R+0),4);
}
B550bb7:{NFSU2_TR(0x550bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550bbcull));
TAIL_STATIC(0x517f80u,517);
}
B550bbc:L550bbc:{c.instructions+=2;NFSU2_TR(0x550bbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550bbe:{NFSU2_TR(0x550bbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550bdb;}}
}
B550bc0:L550bc0:{c.instructions+=3;NFSU2_TR(0x550bc0);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550bc5:{NFSU2_TR(0x550bc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550bc7:{NFSU2_TR(0x550bc7);
if(r1(R+518)){{goto L550be0;}}
}
B550bc9:L550bc9:{c.instructions+=4;NFSU2_TR(0x550bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550bcc:{NFSU2_TR(0x550bcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bcd:{NFSU2_TR(0x550bcd);
u8 U[4];
w4(U+0,u32(0xd35a7923ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bd2:{NFSU2_TR(0x550bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550bd7ull));
TAIL_STATIC(0x52c570u,52c);
}
B550bd7:L550bd7:{c.instructions+=2;NFSU2_TR(0x550bd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550bd9:{NFSU2_TR(0x550bd9);
if(r1(R+518)){{goto L550be0;}}
}
B550bdb:L550bdb:{c.instructions+=2;NFSU2_TR(0x550bdb);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B550bde:{NFSU2_TR(0x550bde);
if(r1(R+518)){{goto L550be2;}}
}
B550be0:L550be0:{c.instructions+=1;NFSU2_TR(0x550be0);
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
B550be2:L550be2:{c.instructions+=11;NFSU2_TR(0x550be2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550be8:{NFSU2_TR(0x550be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550bee:{NFSU2_TR(0x550bee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bef:{NFSU2_TR(0x550bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550bf2:{NFSU2_TR(0x550bf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bf3:{NFSU2_TR(0x550bf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bf4:{NFSU2_TR(0x550bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550bfa:{NFSU2_TR(0x550bfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B550bfc:{NFSU2_TR(0x550bfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550bfd:{NFSU2_TR(0x550bfd);
__builtin_memmove((R+4),(R+24),4);
}
B550bff:{NFSU2_TR(0x550bff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550c02:L550c02:{c.instructions+=5;NFSU2_TR(0x550c02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550c05:{NFSU2_TR(0x550c05);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c0b:{NFSU2_TR(0x550c0b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c0d:{NFSU2_TR(0x550c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550c10:{NFSU2_TR(0x550c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c15ull));
TAIL_STATIC(0x59b080u,59b);
}
B550c15:L550c15:{c.instructions+=2;NFSU2_TR(0x550c15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550c17:{NFSU2_TR(0x550c17);
if(r1(R+518)){{goto L550c2d;}}
}
B550c19:L550c19:{c.instructions+=7;NFSU2_TR(0x550c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550c1c:{NFSU2_TR(0x550c1c);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c22:{NFSU2_TR(0x550c22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c23:{NFSU2_TR(0x550c23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c25:{NFSU2_TR(0x550c25);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c27:{NFSU2_TR(0x550c27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c28:{NFSU2_TR(0x550c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c2dull));
TAIL_STATIC(0x5b4670u,5b4);
}
B550c2d:L550c2d:{c.instructions+=3;NFSU2_TR(0x550c2d);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c33:{NFSU2_TR(0x550c33);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c35:{NFSU2_TR(0x550c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c3aull));
TAIL_STATIC(0x59b080u,59b);
}
B550c3a:L550c3a:{c.instructions+=2;NFSU2_TR(0x550c3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550c3c:{NFSU2_TR(0x550c3c);
if(r1(R+518)){{goto L550c50;}}
}
B550c3e:L550c3e:{c.instructions+=5;NFSU2_TR(0x550c3e);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c44:{NFSU2_TR(0x550c44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c45:{NFSU2_TR(0x550c45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c47:{NFSU2_TR(0x550c47);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c49:{NFSU2_TR(0x550c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c4eull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B550c4e:L550c4e:{c.instructions+=1;NFSU2_TR(0x550c4e);
{goto L550c56;}
}
B550c50:L550c50:{c.instructions+=1;NFSU2_TR(0x550c50);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550c56:L550c56:{c.instructions+=4;NFSU2_TR(0x550c56);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550c59:{NFSU2_TR(0x550c59);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c5f:{NFSU2_TR(0x550c5f);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c61:{NFSU2_TR(0x550c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c66ull));
TAIL_STATIC(0x59b080u,59b);
}
B550c66:L550c66:{c.instructions+=2;NFSU2_TR(0x550c66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550c68:{NFSU2_TR(0x550c68);
if(r1(R+518)){{goto L550c7c;}}
}
B550c6a:L550c6a:{c.instructions+=5;NFSU2_TR(0x550c6a);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B550c70:{NFSU2_TR(0x550c70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c71:{NFSU2_TR(0x550c71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c73:{NFSU2_TR(0x550c73);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c75:{NFSU2_TR(0x550c75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c7aull));
TAIL_STATIC(0x5b3e40u,5b3);
}
B550c7a:L550c7a:{c.instructions+=1;NFSU2_TR(0x550c7a);
{goto L550c82;}
}
B550c7c:L550c7c:{c.instructions+=1;NFSU2_TR(0x550c7c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B550c82:L550c82:{c.instructions+=3;NFSU2_TR(0x550c82);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550c84:{NFSU2_TR(0x550c84);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B550c87:{NFSU2_TR(0x550c87);
if(r1(R+518)){{goto L550ca6;}}
}
B550c89:L550c89:{c.instructions+=2;NFSU2_TR(0x550c89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c8a:{NFSU2_TR(0x550c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550c8full));
TAIL_STATIC(0x52cef0u,52c);
}
B550c8f:L550c8f:{c.instructions+=3;NFSU2_TR(0x550c8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550c92:{NFSU2_TR(0x550c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550c94:{NFSU2_TR(0x550c94);
if(r1(R+518)){{goto L550ca6;}}
}
B550c96:L550c96:{c.instructions+=3;NFSU2_TR(0x550c96);
u8 U[4];
w4(U+0,u32(0xd1cda594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550c9b:{NFSU2_TR(0x550c9b);
__builtin_memmove((R+4),(R+0),4);
}
B550c9d:{NFSU2_TR(0x550c9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ca2ull));
TAIL_STATIC(0x517f80u,517);
}
B550ca2:L550ca2:{c.instructions+=2;NFSU2_TR(0x550ca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ca4:{NFSU2_TR(0x550ca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550cc1;}}
}
B550ca6:L550ca6:{c.instructions+=3;NFSU2_TR(0x550ca6);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550cab:{NFSU2_TR(0x550cab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550cad:{NFSU2_TR(0x550cad);
if(r1(R+518)){{goto L550cc6;}}
}
B550caf:L550caf:{c.instructions+=4;NFSU2_TR(0x550caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550cb2:{NFSU2_TR(0x550cb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550cb3:{NFSU2_TR(0x550cb3);
u8 U[4];
w4(U+0,u32(0xd1cda594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550cb8:{NFSU2_TR(0x550cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550cbdull));
TAIL_STATIC(0x52c570u,52c);
}
B550cbd:L550cbd:{c.instructions+=2;NFSU2_TR(0x550cbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550cbf:{NFSU2_TR(0x550cbf);
if(r1(R+518)){{goto L550cc6;}}
}
B550cc1:L550cc1:{c.instructions+=2;NFSU2_TR(0x550cc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550cc4:{NFSU2_TR(0x550cc4);
if(r1(R+518)){{goto L550cc8;}}
}
B550cc6:L550cc6:{c.instructions+=1;NFSU2_TR(0x550cc6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550cc8:L550cc8:{c.instructions+=3;NFSU2_TR(0x550cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550cca:{NFSU2_TR(0x550cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550cd0:{NFSU2_TR(0x550cd0);
if(r1(R+518)){{goto L550cef;}}
}
B550cd2:L550cd2:{c.instructions+=2;NFSU2_TR(0x550cd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550cd3:{NFSU2_TR(0x550cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550cd8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B550cd8:L550cd8:{c.instructions+=3;NFSU2_TR(0x550cd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B550cdb:{NFSU2_TR(0x550cdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550cdd:{NFSU2_TR(0x550cdd);
if(r1(R+518)){{goto L550cef;}}
}
B550cdf:L550cdf:{c.instructions+=3;NFSU2_TR(0x550cdf);
u8 U[4];
w4(U+0,u32(0x9345e4a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ce4:{NFSU2_TR(0x550ce4);
__builtin_memmove((R+4),(R+0),4);
}
B550ce6:{NFSU2_TR(0x550ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550cebull));
TAIL_STATIC(0x517f80u,517);
}
B550ceb:L550ceb:{c.instructions+=2;NFSU2_TR(0x550ceb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ced:{NFSU2_TR(0x550ced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550d0a;}}
}
B550cef:L550cef:{c.instructions+=3;NFSU2_TR(0x550cef);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B550cf4:{NFSU2_TR(0x550cf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550cf6:{NFSU2_TR(0x550cf6);
if(r1(R+518)){{goto L550d0f;}}
}
B550cf8:L550cf8:{c.instructions+=4;NFSU2_TR(0x550cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550cfb:{NFSU2_TR(0x550cfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550cfc:{NFSU2_TR(0x550cfc);
u8 U[4];
w4(U+0,u32(0x9345e4a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d01:{NFSU2_TR(0x550d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d06ull));
TAIL_STATIC(0x52c570u,52c);
}
B550d06:L550d06:{c.instructions+=2;NFSU2_TR(0x550d06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550d08:{NFSU2_TR(0x550d08);
if(r1(R+518)){{goto L550d0f;}}
}
B550d0a:L550d0a:{c.instructions+=2;NFSU2_TR(0x550d0a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550d0d:{NFSU2_TR(0x550d0d);
if(r1(R+518)){{goto L550d11;}}
}
B550d0f:L550d0f:{c.instructions+=1;NFSU2_TR(0x550d0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550d11:L550d11:{c.instructions+=4;NFSU2_TR(0x550d11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550d17:{NFSU2_TR(0x550d17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550d19:{NFSU2_TR(0x550d19);
w4(R+4,u32(0x10ull));
}
B550d1e:{NFSU2_TR(0x550d1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B550d21:L550d21:{c.instructions+=1;NFSU2_TR(0x550d21);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L550d23;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x550d21u);}goto L550d21;}
}
B550d23:L550d23:{c.instructions+=3;NFSU2_TR(0x550d23);
w4(R+4,u32(0x10ull));
}
B550d28:{NFSU2_TR(0x550d28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B550d2b:{NFSU2_TR(0x550d2b);
w4(R+8,u32(0x38d548d2ull));
}
B550d30:L550d30:{c.instructions+=1;NFSU2_TR(0x550d30);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L550d32;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x550d30u);}goto L550d30;}
}
B550d32:L550d32:{c.instructions+=1;NFSU2_TR(0x550d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d37ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B550d37:L550d37:{c.instructions+=2;NFSU2_TR(0x550d37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550d39:{NFSU2_TR(0x550d39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550d45;}}
}
B550d3b:L550d3b:{c.instructions+=2;NFSU2_TR(0x550d3b);
w4(R+8,u32(0xc01a6f63ull));
}
B550d40:{NFSU2_TR(0x550d40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d45ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B550d45:L550d45:{c.instructions+=5;NFSU2_TR(0x550d45);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d47:{NFSU2_TR(0x550d47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d48:{NFSU2_TR(0x550d48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B550d4b:{NFSU2_TR(0x550d4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d4c:{NFSU2_TR(0x550d4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d51ull));
TAIL_STATIC(0x43dc00u,43d);
}
B550d51:L550d51:{c.instructions+=5;NFSU2_TR(0x550d51);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B550d56:{NFSU2_TR(0x550d56);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B550d59:{NFSU2_TR(0x550d59);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550d5b:{NFSU2_TR(0x550d5b);
w4(R+8,u32(0x5b81d613ull));
}
B550d60:{NFSU2_TR(0x550d60);
if(r1(R+518)){{goto L550d67;}}
}
B550d62:L550d62:{c.instructions+=1;NFSU2_TR(0x550d62);
w4(R+8,u32(0xacb8dff3ull));
}
B550d67:L550d67:{c.instructions+=1;NFSU2_TR(0x550d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d6cull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B550d6c:L550d6c:{c.instructions+=2;NFSU2_TR(0x550d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550d6e:{NFSU2_TR(0x550d6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550d7a;}}
}
B550d70:L550d70:{c.instructions+=2;NFSU2_TR(0x550d70);
w4(R+8,u32(0xc01a6f63ull));
}
B550d75:{NFSU2_TR(0x550d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d7aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B550d7a:L550d7a:{c.instructions+=5;NFSU2_TR(0x550d7a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d7c:{NFSU2_TR(0x550d7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d7d:{NFSU2_TR(0x550d7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B550d80:{NFSU2_TR(0x550d80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d81:{NFSU2_TR(0x550d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d86ull));
TAIL_STATIC(0x43dc00u,43d);
}
B550d86:L550d86:{c.instructions+=8;NFSU2_TR(0x550d86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B550d89:{NFSU2_TR(0x550d89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d8a:{NFSU2_TR(0x550d8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B550d8d:{NFSU2_TR(0x550d8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d8e:{NFSU2_TR(0x550d8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B550d94:{NFSU2_TR(0x550d94);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d96:{NFSU2_TR(0x550d96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550d97:{NFSU2_TR(0x550d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550d9cull));
TAIL_STATIC(0x50c960u,50c);
}
B550d9c:L550d9c:{c.instructions+=6;NFSU2_TR(0x550d9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B550da2:{NFSU2_TR(0x550da2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550da3:{NFSU2_TR(0x550da3);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550da8:{NFSU2_TR(0x550da8);
u8 U[4];
w4(U+0,u32(0xcb9a2c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550dad:{NFSU2_TR(0x550dad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550dae:{NFSU2_TR(0x550dae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550db3ull));
TAIL_STATIC(0x537b80u,537);
}
B550db3:L550db3:{c.instructions+=4;NFSU2_TR(0x550db3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B550db5:{NFSU2_TR(0x550db5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B550db8:{NFSU2_TR(0x550db8);
__builtin_memmove((R+4),(R+24),4);
}
B550dba:{NFSU2_TR(0x550dba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550dbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550dbd:L550dbd:{c.instructions+=6;NFSU2_TR(0x550dbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B550dbe:{NFSU2_TR(0x550dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550dbf:{NFSU2_TR(0x550dbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B550dc0:{NFSU2_TR(0x550dc0);
__builtin_memmove((R+16),(R+20),4);
}
B550dc2:{NFSU2_TR(0x550dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B550dc3:{NFSU2_TR(0x550dc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550dd0:L550dd0:{c.instructions+=6;NFSU2_TR(0x550dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550dd1:{NFSU2_TR(0x550dd1);
__builtin_memmove((R+24),(R+4),4);
}
B550dd3:{NFSU2_TR(0x550dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550dd6:{NFSU2_TR(0x550dd6);
u8 U[4];
w4(U+0,u32(0x79c724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ddb:{NFSU2_TR(0x550ddb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550ddc:{NFSU2_TR(0x550ddc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550de1ull));
TAIL_STATIC(0x4954c0u,495);
}
B550de1:L550de1:{c.instructions+=3;NFSU2_TR(0x550de1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B550de4:{NFSU2_TR(0x550de4);
__builtin_memmove((R+4),(R+24),4);
}
B550de6:{NFSU2_TR(0x550de6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550debull));
TAIL_STATIC(0x523f60u,523);
}
B550deb:L550deb:{c.instructions+=3;NFSU2_TR(0x550deb);
__builtin_memmove((R+0),gp(0x838581),1);
}
B550df0:{NFSU2_TR(0x550df0);
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
B550df2:{NFSU2_TR(0x550df2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550e08;}}
}
B550df4:L550df4:{c.instructions+=4;NFSU2_TR(0x550df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550df7:{NFSU2_TR(0x550df7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550dfa:{NFSU2_TR(0x550dfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550dfc:{NFSU2_TR(0x550dfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550dffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550dff:L550dff:{c.instructions+=2;NFSU2_TR(0x550dff);
s1(0x838581,u8(0x1ull));
}
B550e06:{NFSU2_TR(0x550e06);
{goto L550e2f;}
}
B550e08:L550e08:{c.instructions+=3;NFSU2_TR(0x550e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550e0b:{NFSU2_TR(0x550e0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550e0c:{NFSU2_TR(0x550e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e11ull));
TAIL_STATIC(0x505450u,505);
}
B550e11:L550e11:{c.instructions+=2;NFSU2_TR(0x550e11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550e12:{NFSU2_TR(0x550e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e17ull));
TAIL_STATIC(0x50b840u,50b);
}
B550e17:L550e17:{c.instructions+=3;NFSU2_TR(0x550e17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B550e1a:{NFSU2_TR(0x550e1a);
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
B550e1c:{NFSU2_TR(0x550e1c);
if(r1(R+518)){{goto L550e23;}}
}
B550e1e:L550e1e:{c.instructions+=2;NFSU2_TR(0x550e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550e21:{NFSU2_TR(0x550e21);
{goto L550e25;}
}
B550e23:L550e23:{c.instructions+=1;NFSU2_TR(0x550e23);
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
B550e25:L550e25:{c.instructions+=4;NFSU2_TR(0x550e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550e28:{NFSU2_TR(0x550e28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550e2b:{NFSU2_TR(0x550e2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550e2c:{NFSU2_TR(0x550e2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e2full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550e2f:L550e2f:{c.instructions+=9;NFSU2_TR(0x550e2f);
__builtin_memmove((R+0),gp(0x838578),4);
}
B550e34:{NFSU2_TR(0x550e34);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B550e35:{NFSU2_TR(0x550e35);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B550e37:{NFSU2_TR(0x550e37);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B550e39:{NFSU2_TR(0x550e39);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ac07d2ull))));
}
B550e3e:{NFSU2_TR(0x550e3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x82f20772ull))));
}
B550e43:{NFSU2_TR(0x550e43);
__builtin_memmove((R+4),(R+24),4);
}
B550e45:{NFSU2_TR(0x550e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550e48:{NFSU2_TR(0x550e48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e4dull));
TAIL_STATIC(0x54b150u,54b);
}
B550e4d:L550e4d:{c.instructions+=4;NFSU2_TR(0x550e4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B550e4f:{NFSU2_TR(0x550e4f);
__builtin_memmove((R+4),(R+24),4);
}
B550e51:{NFSU2_TR(0x550e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550e52:{NFSU2_TR(0x550e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B550e60:L550e60:{c.instructions+=5;NFSU2_TR(0x550e60);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B550e68:{NFSU2_TR(0x550e68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550e69:{NFSU2_TR(0x550e69);
__builtin_memmove((R+24),(R+4),4);
}
B550e6b:{NFSU2_TR(0x550e6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B550e6e:{NFSU2_TR(0x550e6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550ebe;}}
}
B550e70:L550e70:{c.instructions+=3;NFSU2_TR(0x550e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550e73:{NFSU2_TR(0x550e73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550e75:{NFSU2_TR(0x550e75);
if(r1(R+518)){{goto L550e7c;}}
}
B550e77:L550e77:{c.instructions+=2;NFSU2_TR(0x550e77);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B550e7a:{NFSU2_TR(0x550e7a);
{goto L550e7e;}
}
B550e7c:L550e7c:{c.instructions+=1;NFSU2_TR(0x550e7c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550e7e:L550e7e:{c.instructions+=2;NFSU2_TR(0x550e7e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
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
B550e81:{NFSU2_TR(0x550e81);
if(r1(R+518)){{goto L550f08;}}
}
B550e87:L550e87:{c.instructions+=4;NFSU2_TR(0x550e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B550e8d:{NFSU2_TR(0x550e8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550e8f:{NFSU2_TR(0x550e8f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550e91:{NFSU2_TR(0x550e91);
if(r1(R+518)){{goto L550e9a;}}
}
B550e93:L550e93:{c.instructions+=1;NFSU2_TR(0x550e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e98ull));
TAIL_STATIC(0x542f50u,542);
}
B550e98:L550e98:{c.instructions+=1;NFSU2_TR(0x550e98);
{goto L550e9f;}
}
B550e9a:L550e9a:{c.instructions+=1;NFSU2_TR(0x550e9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550e9full));
TAIL_STATIC(0x542df0u,542);
}
B550e9f:L550e9f:{c.instructions+=4;NFSU2_TR(0x550e9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550ea2:{NFSU2_TR(0x550ea2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B550ea9:{NFSU2_TR(0x550ea9);
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
B550eac:{NFSU2_TR(0x550eac);
if(r1(R+518)){{goto L550f08;}}
}
B550eae:L550eae:{c.instructions+=4;NFSU2_TR(0x550eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550eaf:{NFSU2_TR(0x550eaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550eb3:{NFSU2_TR(0x550eb3);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B550eb9:{NFSU2_TR(0x550eb9);
TAIL_STATIC(0x458520u,458);
}
B550ebe:L550ebe:{c.instructions+=3;NFSU2_TR(0x550ebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550ec1:{NFSU2_TR(0x550ec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550ec3:{NFSU2_TR(0x550ec3);
if(r1(R+518)){{goto L550eca;}}
}
B550ec5:L550ec5:{c.instructions+=2;NFSU2_TR(0x550ec5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B550ec8:{NFSU2_TR(0x550ec8);
{goto L550ecc;}
}
B550eca:L550eca:{c.instructions+=1;NFSU2_TR(0x550eca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550ecc:L550ecc:{c.instructions+=2;NFSU2_TR(0x550ecc);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
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
B550ecf:{NFSU2_TR(0x550ecf);
if(r1(R+518)){{goto L550f08;}}
}
B550ed1:L550ed1:{c.instructions+=4;NFSU2_TR(0x550ed1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B550ed7:{NFSU2_TR(0x550ed7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B550ed9:{NFSU2_TR(0x550ed9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550edb:{NFSU2_TR(0x550edb);
if(r1(R+518)){{goto L550ee4;}}
}
B550edd:L550edd:{c.instructions+=1;NFSU2_TR(0x550edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ee2ull));
TAIL_STATIC(0x542f50u,542);
}
B550ee2:L550ee2:{c.instructions+=1;NFSU2_TR(0x550ee2);
{goto L550ee9;}
}
B550ee4:L550ee4:{c.instructions+=1;NFSU2_TR(0x550ee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ee9ull));
TAIL_STATIC(0x542df0u,542);
}
B550ee9:L550ee9:{c.instructions+=4;NFSU2_TR(0x550ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550eec:{NFSU2_TR(0x550eec);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x83809dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B550ef3:{NFSU2_TR(0x550ef3);
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
B550ef6:{NFSU2_TR(0x550ef6);
if(r1(R+518)){{goto L550f08;}}
}
B550ef8:L550ef8:{c.instructions+=4;NFSU2_TR(0x550ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550ef9:{NFSU2_TR(0x550ef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550efd:{NFSU2_TR(0x550efd);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B550f03:{NFSU2_TR(0x550f03);
TAIL_STATIC(0x458520u,458);
}
B550f08:L550f08:{c.instructions+=2;NFSU2_TR(0x550f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B550f09:{NFSU2_TR(0x550f09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B550f10:L550f10:{c.instructions+=11;NFSU2_TR(0x550f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B550f13:{NFSU2_TR(0x550f13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f14:{NFSU2_TR(0x550f14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f15:{NFSU2_TR(0x550f15);
__builtin_memmove((R+28),(R+4),4);
}
B550f17:{NFSU2_TR(0x550f17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B550f1a:{NFSU2_TR(0x550f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550f1d:{NFSU2_TR(0x550f1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B550f20:{NFSU2_TR(0x550f20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f21:{NFSU2_TR(0x550f21);
__builtin_memmove((R+4),(R+20),4);
}
B550f23:{NFSU2_TR(0x550f23);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550f27:{NFSU2_TR(0x550f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550f2cull));
TAIL_STATIC(0x51f490u,51f);
}
B550f2c:L550f2c:{c.instructions+=5;NFSU2_TR(0x550f2c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B550f2d:{NFSU2_TR(0x550f2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B550f31:{NFSU2_TR(0x550f31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550f35:{NFSU2_TR(0x550f35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550f3a:{NFSU2_TR(0x550f3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550f5d;}}
}
B550f3c:L550f3c:{c.instructions+=4;NFSU2_TR(0x550f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B550f3f:{NFSU2_TR(0x550f3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B550f46:{NFSU2_TR(0x550f46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B550f49:{NFSU2_TR(0x550f49);
if(r1(R+518)){{goto L550f57;}}
}
B550f4b:L550f4b:{c.instructions+=3;NFSU2_TR(0x550f4b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B550f51:{NFSU2_TR(0x550f51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f52:{NFSU2_TR(0x550f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550f57ull));
TAIL_STATIC(0x458520u,458);
}
B550f57:L550f57:{c.instructions+=3;NFSU2_TR(0x550f57);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f59:{NFSU2_TR(0x550f59);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f5b:{NFSU2_TR(0x550f5b);
{goto L550f83;}
}
B550f5d:L550f5d:{c.instructions+=2;NFSU2_TR(0x550f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550f62:{NFSU2_TR(0x550f62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L550f8a;}}
}
B550f64:L550f64:{c.instructions+=4;NFSU2_TR(0x550f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550f67:{NFSU2_TR(0x550f67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x83809dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B550f6e:{NFSU2_TR(0x550f6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B550f71:{NFSU2_TR(0x550f71);
if(r1(R+518)){{goto L550f7f;}}
}
B550f73:L550f73:{c.instructions+=3;NFSU2_TR(0x550f73);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B550f79:{NFSU2_TR(0x550f79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f7a:{NFSU2_TR(0x550f7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550f7full));
TAIL_STATIC(0x458520u,458);
}
B550f7f:L550f7f:{c.instructions+=2;NFSU2_TR(0x550f7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f81:{NFSU2_TR(0x550f81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f83:L550f83:{c.instructions+=2;NFSU2_TR(0x550f83);
__builtin_memmove((R+4),(R+20),4);
}
B550f85:{NFSU2_TR(0x550f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550f8aull));
TAIL_STATIC(0x5432a0u,543);
}
B550f8a:L550f8a:{c.instructions+=5;NFSU2_TR(0x550f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550f8d:{NFSU2_TR(0x550f8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550f8f:{NFSU2_TR(0x550f8f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f90:{NFSU2_TR(0x550f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550f91:{NFSU2_TR(0x550f91);
if(r1(R+518)){{goto L550f98;}}
}
B550f93:L550f93:{c.instructions+=2;NFSU2_TR(0x550f93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B550f96:{NFSU2_TR(0x550f96);
{goto L550f9a;}
}
B550f98:L550f98:{c.instructions+=1;NFSU2_TR(0x550f98);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B550f9a:L550f9a:{c.instructions+=2;NFSU2_TR(0x550f9a);
w4(R+12,u32(0x1ull));
}
B550f9f:{NFSU2_TR(0x550f9f);
}
B550fa0:L550fa0:{c.instructions+=3;NFSU2_TR(0x550fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550fa3:{NFSU2_TR(0x550fa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550fa5:{NFSU2_TR(0x550fa5);
if(r1(R+518)){{goto L550fd2;}}
}
B550fa7:L550fa7:{c.instructions+=3;NFSU2_TR(0x550fa7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B550faa:{NFSU2_TR(0x550faa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550fac:{NFSU2_TR(0x550fac);
if(r1(R+518)){{goto L550fd2;}}
}
B550fae:L550fae:{c.instructions+=5;NFSU2_TR(0x550fae);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B550fb1:{NFSU2_TR(0x550fb1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B550fb4:{NFSU2_TR(0x550fb4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B550fb7:{NFSU2_TR(0x550fb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550fb8:{NFSU2_TR(0x550fb8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L550fc1;}}
}
B550fba:L550fba:{c.instructions+=2;NFSU2_TR(0x550fba);
u8 U[4];
w4(U+0,u32(0x79c730ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550fbf:{NFSU2_TR(0x550fbf);
{goto L550fc6;}
}
B550fc1:L550fc1:{c.instructions+=1;NFSU2_TR(0x550fc1);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550fc6:L550fc6:{c.instructions+=3;NFSU2_TR(0x550fc6);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550fc8:{NFSU2_TR(0x550fc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B550fc9:{NFSU2_TR(0x550fc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550fceull));
TAIL_STATIC(0x50c960u,50c);
}
B550fce:L550fce:{c.instructions+=2;NFSU2_TR(0x550fce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B550fd1:{NFSU2_TR(0x550fd1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B550fd2:L550fd2:{c.instructions+=3;NFSU2_TR(0x550fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550fd5:{NFSU2_TR(0x550fd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550fd7:{NFSU2_TR(0x550fd7);
if(r1(R+518)){{goto L550fde;}}
}
B550fd9:L550fd9:{c.instructions+=2;NFSU2_TR(0x550fd9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B550fdc:{NFSU2_TR(0x550fdc);
{goto L550fe0;}
}
B550fde:L550fde:{c.instructions+=1;NFSU2_TR(0x550fde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B550fe0:L550fe0:{c.instructions+=2;NFSU2_TR(0x550fe0);
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
B550fe2:{NFSU2_TR(0x550fe2);
if(r1(R+518)){{goto L550ff4;}}
}
B550fe4:L550fe4:{c.instructions+=3;NFSU2_TR(0x550fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B550fe7:{NFSU2_TR(0x550fe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B550fe9:{NFSU2_TR(0x550fe9);
if(r1(R+518)){{goto L550ff0;}}
}
B550feb:L550feb:{c.instructions+=2;NFSU2_TR(0x550feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B550fee:{NFSU2_TR(0x550fee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x550fa0u);}goto L550fa0;}
}
B550ff0:L550ff0:{c.instructions+=2;NFSU2_TR(0x550ff0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B550ff2:{NFSU2_TR(0x550ff2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x550fa0u);}goto L550fa0;}
}
B550ff4:L550ff4:{c.instructions+=3;NFSU2_TR(0x550ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B550ff7:{NFSU2_TR(0x550ff7);
__builtin_memmove((R+4),(R+20),4);
}
B550ff9:{NFSU2_TR(0x550ff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x550ffcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B550ffc:L550ffc:{c.instructions+=1;NFSU2_TR(0x550ffc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
TAIL_STATIC(0x551002u,551);
}
XIT:NFSU2_TR_EXIT(0x550,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
