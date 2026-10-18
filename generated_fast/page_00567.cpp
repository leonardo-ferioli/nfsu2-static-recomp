#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_55e(u8* __restrict R,Cpu& c);
u32 body_55f(u8* __restrict R,Cpu& c);
u32 body_566(u8* __restrict R,Cpu& c);
u32 body_568(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x567,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x567,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_567(u8* __restrict R,Cpu& c);
u32 page_567(Cpu& c){return body_567(c.regs.data(),c);}
__attribute__((noinline)) u32 body_567(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x567001:goto L567001;
case 0x567003:goto L567003;
case 0x567006:c.instructions+=7;goto B567006;
case 0x567009:c.instructions+=6;goto B567009;
case 0x56700d:c.instructions+=5;goto B56700d;
case 0x567010:c.instructions+=4;goto B567010;
case 0x567013:c.instructions+=3;goto B567013;
case 0x567015:c.instructions+=2;goto B567015;
case 0x56701b:c.instructions+=1;goto B56701b;
case 0x56701d:goto L56701d;
case 0x567020:c.instructions+=2;goto B567020;
case 0x567023:c.instructions+=1;goto B567023;
case 0x567025:goto L567025;
case 0x567028:c.instructions+=7;goto B567028;
case 0x56702b:c.instructions+=6;goto B56702b;
case 0x56702f:c.instructions+=5;goto B56702f;
case 0x567032:c.instructions+=4;goto B567032;
case 0x567035:c.instructions+=3;goto B567035;
case 0x567037:c.instructions+=2;goto B567037;
case 0x56703d:c.instructions+=1;goto B56703d;
case 0x56703f:goto L56703f;
case 0x567042:c.instructions+=1;goto B567042;
case 0x567045:goto L567045;
case 0x56704c:c.instructions+=1;goto B56704c;
case 0x56704e:goto L56704e;
case 0x567051:c.instructions+=5;goto B567051;
case 0x567054:c.instructions+=4;goto B567054;
case 0x567055:c.instructions+=3;goto B567055;
case 0x567056:c.instructions+=2;goto B567056;
case 0x56705b:c.instructions+=1;goto B56705b;
case 0x567060:goto L567060;
case 0x567062:c.instructions+=1;goto B567062;
case 0x567064:goto L567064;
case 0x567067:c.instructions+=5;goto B567067;
case 0x56706a:c.instructions+=4;goto B56706a;
case 0x56706b:c.instructions+=3;goto B56706b;
case 0x56706c:c.instructions+=2;goto B56706c;
case 0x567071:c.instructions+=1;goto B567071;
case 0x567076:goto L567076;
case 0x567079:c.instructions+=5;goto B567079;
case 0x56707c:c.instructions+=4;goto B56707c;
case 0x56707d:c.instructions+=3;goto B56707d;
case 0x56707e:c.instructions+=2;goto B56707e;
case 0x567083:c.instructions+=1;goto B567083;
case 0x567088:goto L567088;
case 0x56708b:c.instructions+=4;goto B56708b;
case 0x56708e:c.instructions+=3;goto B56708e;
case 0x56708f:c.instructions+=2;goto B56708f;
case 0x567091:c.instructions+=1;goto B567091;
case 0x567096:goto L567096;
case 0x567097:c.instructions+=2;goto B567097;
case 0x56709c:c.instructions+=1;goto B56709c;
case 0x5670a1:goto L5670a1;
case 0x5670a4:c.instructions+=3;goto B5670a4;
case 0x5670a6:c.instructions+=2;goto B5670a6;
case 0x5670aa:c.instructions+=1;goto B5670aa;
case 0x5670af:goto L5670af;
case 0x5670b2:c.instructions+=5;goto B5670b2;
case 0x5670b4:c.instructions+=4;goto B5670b4;
case 0x5670b9:c.instructions+=3;goto B5670b9;
case 0x5670be:c.instructions+=2;goto B5670be;
case 0x5670bf:c.instructions+=1;goto B5670bf;
case 0x5670c4:goto L5670c4;
case 0x5670c7:c.instructions+=3;goto B5670c7;
case 0x5670ca:c.instructions+=2;goto B5670ca;
case 0x5670d1:c.instructions+=1;goto B5670d1;
case 0x5670d6:goto L5670d6;
case 0x5670d7:c.instructions+=7;goto B5670d7;
case 0x5670d8:c.instructions+=6;goto B5670d8;
case 0x5670d9:c.instructions+=5;goto B5670d9;
case 0x5670dc:c.instructions+=4;goto B5670dc;
case 0x5670e3:c.instructions+=3;goto B5670e3;
case 0x5670e5:c.instructions+=2;goto B5670e5;
case 0x5670e6:c.instructions+=1;goto B5670e6;
case 0x5670e9:goto L5670e9;
case 0x5670eb:c.instructions+=1;goto B5670eb;
case 0x5670f0:goto L5670f0;
case 0x5670f3:c.instructions+=5;goto B5670f3;
case 0x5670f9:c.instructions+=4;goto B5670f9;
case 0x5670fb:c.instructions+=3;goto B5670fb;
case 0x5670fe:c.instructions+=2;goto B5670fe;
case 0x567101:c.instructions+=1;goto B567101;
case 0x567107:goto L567107;
case 0x567109:c.instructions+=1;goto B567109;
case 0x56710e:goto L56710e;
case 0x567111:c.instructions+=5;goto B567111;
case 0x567117:c.instructions+=4;goto B567117;
case 0x567118:c.instructions+=3;goto B567118;
case 0x567119:c.instructions+=2;goto B567119;
case 0x56711e:c.instructions+=1;goto B56711e;
case 0x567123:goto L567123;
case 0x567125:c.instructions+=1;goto B567125;
case 0x567127:goto L567127;
case 0x567129:c.instructions+=3;goto B567129;
case 0x56712e:c.instructions+=2;goto B56712e;
case 0x567130:c.instructions+=1;goto B567130;
case 0x567135:goto L567135;
case 0x567137:c.instructions+=1;goto B567137;
case 0x567139:goto L567139;
case 0x56713f:c.instructions+=2;goto B56713f;
case 0x567149:c.instructions+=1;goto B567149;
case 0x56714e:goto L56714e;
case 0x567150:c.instructions+=1;goto B567150;
case 0x567155:goto L567155;
case 0x567156:c.instructions+=7;goto B567156;
case 0x567157:c.instructions+=6;goto B567157;
case 0x567158:c.instructions+=5;goto B567158;
case 0x56715b:c.instructions+=4;goto B56715b;
case 0x567162:c.instructions+=3;goto B567162;
case 0x567164:c.instructions+=2;goto B567164;
case 0x567165:c.instructions+=1;goto B567165;
case 0x567168:goto L567168;
case 0x56716d:goto L56716d;
case 0x56716f:c.instructions+=1;goto B56716f;
case 0x567174:goto L567174;
case 0x567175:c.instructions+=7;goto B567175;
case 0x567176:c.instructions+=6;goto B567176;
case 0x567177:c.instructions+=5;goto B567177;
case 0x56717a:c.instructions+=4;goto B56717a;
case 0x567181:c.instructions+=3;goto B567181;
case 0x567183:c.instructions+=2;goto B567183;
case 0x567184:c.instructions+=1;goto B567184;
case 0x567187:goto L567187;
case 0x567188:c.instructions+=3;goto B567188;
case 0x567189:c.instructions+=2;goto B567189;
case 0x56718e:c.instructions+=1;goto B56718e;
case 0x567193:goto L567193;
case 0x567194:c.instructions+=2;goto B567194;
case 0x567199:c.instructions+=1;goto B567199;
case 0x56719e:goto L56719e;
case 0x5671a3:goto L5671a3;
case 0x5671a8:c.instructions+=1;goto B5671a8;
case 0x5671ae:goto L5671ae;
case 0x5671b0:c.instructions+=2;goto B5671b0;
case 0x5671b2:c.instructions+=1;goto B5671b2;
case 0x5671b7:goto L5671b7;
case 0x5671b8:c.instructions+=7;goto B5671b8;
case 0x5671b9:c.instructions+=6;goto B5671b9;
case 0x5671ba:c.instructions+=5;goto B5671ba;
case 0x5671bd:c.instructions+=4;goto B5671bd;
case 0x5671c4:c.instructions+=3;goto B5671c4;
case 0x5671c6:c.instructions+=2;goto B5671c6;
case 0x5671c7:c.instructions+=1;goto B5671c7;
case 0x5671ca:goto L5671ca;
case 0x5671d0:c.instructions+=2;goto B5671d0;
case 0x5671d2:c.instructions+=1;goto B5671d2;
case 0x5671d4:goto L5671d4;
case 0x5671d6:c.instructions+=1;goto B5671d6;
case 0x5671db:goto L5671db;
case 0x5671e0:c.instructions+=2;goto B5671e0;
case 0x5671e2:c.instructions+=1;goto B5671e2;
case 0x5671e8:goto L5671e8;
case 0x5671ee:c.instructions+=2;goto B5671ee;
case 0x5671f0:c.instructions+=1;goto B5671f0;
case 0x5671f6:goto L5671f6;
case 0x5671fc:c.instructions+=2;goto B5671fc;
case 0x5671fe:c.instructions+=1;goto B5671fe;
case 0x567204:goto L567204;
case 0x567206:c.instructions+=1;goto B567206;
case 0x56720b:goto L56720b;
case 0x56720e:c.instructions+=10;goto B56720e;
case 0x567213:c.instructions+=9;goto B567213;
case 0x567215:c.instructions+=8;goto B567215;
case 0x56721a:c.instructions+=7;goto B56721a;
case 0x56721f:c.instructions+=6;goto B56721f;
case 0x567224:c.instructions+=5;goto B567224;
case 0x567229:c.instructions+=4;goto B567229;
case 0x56722e:c.instructions+=3;goto B56722e;
case 0x567233:c.instructions+=2;goto B567233;
case 0x567234:c.instructions+=1;goto B567234;
case 0x567239:goto L567239;
case 0x56723c:c.instructions+=6;goto B56723c;
case 0x567246:c.instructions+=5;goto B567246;
case 0x567249:c.instructions+=4;goto B567249;
case 0x567250:c.instructions+=3;goto B567250;
case 0x567252:c.instructions+=2;goto B567252;
case 0x567256:c.instructions+=1;goto B567256;
case 0x56725b:goto L56725b;
case 0x56725d:c.instructions+=1;goto B56725d;
case 0x567262:goto L567262;
case 0x567265:c.instructions+=3;goto B567265;
case 0x56726a:c.instructions+=2;goto B56726a;
case 0x56726b:c.instructions+=1;goto B56726b;
case 0x567270:goto L567270;
case 0x567273:c.instructions+=8;goto B567273;
case 0x567274:c.instructions+=7;goto B567274;
case 0x567275:c.instructions+=6;goto B567275;
case 0x567276:c.instructions+=5;goto B567276;
case 0x567279:c.instructions+=4;goto B567279;
case 0x567280:c.instructions+=3;goto B567280;
case 0x567282:c.instructions+=2;goto B567282;
case 0x567283:c.instructions+=1;goto B567283;
case 0x567286:goto L567286;
case 0x56728c:c.instructions+=2;goto B56728c;
case 0x56728e:c.instructions+=1;goto B56728e;
case 0x567290:goto L567290;
case 0x567297:c.instructions+=2;goto B567297;
case 0x56729e:c.instructions+=1;goto B56729e;
case 0x5672a0:goto L5672a0;
case 0x5672a6:c.instructions+=2;goto B5672a6;
case 0x5672a8:c.instructions+=1;goto B5672a8;
case 0x5672aa:goto L5672aa;
case 0x5672b1:c.instructions+=2;goto B5672b1;
case 0x5672b8:c.instructions+=1;goto B5672b8;
case 0x5672ba:goto L5672ba;
case 0x5672c1:goto L5672c1;
case 0x5672c4:c.instructions+=3;goto B5672c4;
case 0x5672c6:c.instructions+=2;goto B5672c6;
case 0x5672ca:c.instructions+=1;goto B5672ca;
case 0x5672cf:goto L5672cf;
case 0x5672d2:c.instructions+=4;goto B5672d2;
case 0x5672d7:c.instructions+=3;goto B5672d7;
case 0x5672dc:c.instructions+=2;goto B5672dc;
case 0x5672dd:c.instructions+=1;goto B5672dd;
case 0x5672e2:goto L5672e2;
case 0x5672e5:c.instructions+=2;goto B5672e5;
case 0x5672e7:c.instructions+=1;goto B5672e7;
case 0x5672e9:goto L5672e9;
case 0x5672ec:c.instructions+=5;goto B5672ec;
case 0x5672ee:c.instructions+=4;goto B5672ee;
case 0x5672f3:c.instructions+=3;goto B5672f3;
case 0x5672f8:c.instructions+=2;goto B5672f8;
case 0x5672f9:c.instructions+=1;goto B5672f9;
case 0x5672fe:goto L5672fe;
case 0x567301:goto L567301;
case 0x567304:c.instructions+=5;goto B567304;
case 0x567305:c.instructions+=4;goto B567305;
case 0x567307:c.instructions+=3;goto B567307;
case 0x56730e:c.instructions+=2;goto B56730e;
case 0x567315:c.instructions+=1;goto B567315;
case 0x56731a:goto L56731a;
case 0x56731f:goto L56731f;
case 0x567324:c.instructions+=1;goto B567324;
case 0x56732a:goto L56732a;
case 0x567330:goto L567330;
case 0x567335:c.instructions+=1;goto B567335;
case 0x56733b:goto L56733b;
case 0x56733d:goto L56733d;
case 0x567342:c.instructions+=1;goto B567342;
case 0x567344:goto L567344;
case 0x567349:c.instructions+=1;goto B567349;
case 0x56734f:goto L56734f;
case 0x567351:c.instructions+=2;goto B567351;
case 0x567353:c.instructions+=1;goto B567353;
case 0x567358:goto L567358;
case 0x567359:c.instructions+=7;goto B567359;
case 0x56735a:c.instructions+=6;goto B56735a;
case 0x56735b:c.instructions+=5;goto B56735b;
case 0x56735e:c.instructions+=4;goto B56735e;
case 0x567365:c.instructions+=3;goto B567365;
case 0x567367:c.instructions+=2;goto B567367;
case 0x567368:c.instructions+=1;goto B567368;
case 0x56736b:goto L56736b;
case 0x56736d:c.instructions+=2;goto B56736d;
case 0x56736f:c.instructions+=1;goto B56736f;
case 0x567374:goto L567374;
case 0x567375:c.instructions+=7;goto B567375;
case 0x567376:c.instructions+=6;goto B567376;
case 0x567377:c.instructions+=5;goto B567377;
case 0x56737a:c.instructions+=4;goto B56737a;
case 0x567381:c.instructions+=3;goto B567381;
case 0x567383:c.instructions+=2;goto B567383;
case 0x567384:c.instructions+=1;goto B567384;
case 0x567387:goto L567387;
case 0x56738d:c.instructions+=1;goto B56738d;
case 0x567392:goto L567392;
case 0x567398:c.instructions+=3;goto B567398;
case 0x56739b:c.instructions+=2;goto B56739b;
case 0x56739e:c.instructions+=1;goto B56739e;
case 0x5673a0:goto L5673a0;
case 0x5673a7:c.instructions+=1;goto B5673a7;
case 0x5673ae:goto L5673ae;
case 0x5673af:c.instructions+=2;goto B5673af;
case 0x5673b1:c.instructions+=1;goto B5673b1;
case 0x5673b6:goto L5673b6;
case 0x5673b8:goto L5673b8;
case 0x5673bd:c.instructions+=3;goto B5673bd;
case 0x5673bf:c.instructions+=2;goto B5673bf;
case 0x5673c1:c.instructions+=1;goto B5673c1;
case 0x5673c3:goto L5673c3;
case 0x5673c5:c.instructions+=2;goto B5673c5;
case 0x5673c7:c.instructions+=1;goto B5673c7;
case 0x5673cc:goto L5673cc;
case 0x5673d1:c.instructions+=3;goto B5673d1;
case 0x5673d2:c.instructions+=2;goto B5673d2;
case 0x5673d4:c.instructions+=1;goto B5673d4;
case 0x5673d6:goto L5673d6;
case 0x5673d8:goto L5673d8;
case 0x5673dd:c.instructions+=3;goto B5673dd;
case 0x5673df:c.instructions+=2;goto B5673df;
case 0x5673e1:c.instructions+=1;goto B5673e1;
case 0x5673e3:goto L5673e3;
case 0x5673e5:c.instructions+=2;goto B5673e5;
case 0x5673e7:c.instructions+=1;goto B5673e7;
case 0x5673ec:goto L5673ec;
case 0x5673f1:c.instructions+=3;goto B5673f1;
case 0x5673f2:c.instructions+=2;goto B5673f2;
case 0x5673f4:c.instructions+=1;goto B5673f4;
case 0x5673f6:goto L5673f6;
case 0x5673fc:c.instructions+=1;goto B5673fc;
case 0x567401:goto L567401;
case 0x567407:c.instructions+=5;goto B567407;
case 0x56740d:c.instructions+=4;goto B56740d;
case 0x567413:c.instructions+=3;goto B567413;
case 0x567415:c.instructions+=2;goto B567415;
case 0x567418:c.instructions+=1;goto B567418;
case 0x56741a:goto L56741a;
case 0x56741c:c.instructions+=2;goto B56741c;
case 0x567421:c.instructions+=1;goto B567421;
case 0x567423:goto L567423;
case 0x567429:c.instructions+=3;goto B567429;
case 0x56742b:c.instructions+=2;goto B56742b;
case 0x56742e:c.instructions+=1;goto B56742e;
case 0x567430:goto L567430;
case 0x567433:goto L567433;
case 0x567436:c.instructions+=2;goto B567436;
case 0x567439:c.instructions+=1;goto B567439;
case 0x56743b:goto L56743b;
case 0x567442:c.instructions+=1;goto B567442;
case 0x567449:goto L567449;
case 0x56744a:c.instructions+=2;goto B56744a;
case 0x56744c:c.instructions+=1;goto B56744c;
case 0x567451:goto L567451;
case 0x567453:goto L567453;
case 0x567458:c.instructions+=3;goto B567458;
case 0x56745a:c.instructions+=2;goto B56745a;
case 0x56745c:c.instructions+=1;goto B56745c;
case 0x56745e:goto L56745e;
case 0x567460:goto L567460;
case 0x567462:c.instructions+=2;goto B567462;
case 0x567464:c.instructions+=1;goto B567464;
case 0x567469:goto L567469;
case 0x56746e:c.instructions+=3;goto B56746e;
case 0x56746f:c.instructions+=2;goto B56746f;
case 0x567471:c.instructions+=1;goto B567471;
case 0x567473:goto L567473;
case 0x567475:goto L567475;
case 0x56747a:c.instructions+=3;goto B56747a;
case 0x56747c:c.instructions+=2;goto B56747c;
case 0x56747e:c.instructions+=1;goto B56747e;
case 0x567480:goto L567480;
case 0x567482:c.instructions+=2;goto B567482;
case 0x567484:c.instructions+=1;goto B567484;
case 0x567489:goto L567489;
case 0x56748e:c.instructions+=3;goto B56748e;
case 0x56748f:c.instructions+=2;goto B56748f;
case 0x567491:c.instructions+=1;goto B567491;
case 0x567493:goto L567493;
case 0x567499:c.instructions+=2;goto B567499;
case 0x56749a:c.instructions+=1;goto B56749a;
case 0x56749f:goto L56749f;
case 0x5674a2:c.instructions+=2;goto B5674a2;
case 0x5674a4:c.instructions+=1;goto B5674a4;
case 0x5674aa:goto L5674aa;
case 0x5674ad:c.instructions+=3;goto B5674ad;
case 0x5674ae:c.instructions+=2;goto B5674ae;
case 0x5674b3:c.instructions+=1;goto B5674b3;
case 0x5674b8:goto L5674b8;
case 0x5674bd:goto L5674bd;
case 0x5674c2:c.instructions+=1;goto B5674c2;
case 0x5674c8:goto L5674c8;
case 0x5674ce:c.instructions+=2;goto B5674ce;
case 0x5674cf:c.instructions+=1;goto B5674cf;
case 0x5674d4:goto L5674d4;
case 0x5674d7:c.instructions+=2;goto B5674d7;
case 0x5674d9:c.instructions+=1;goto B5674d9;
case 0x5674db:goto L5674db;
case 0x5674e0:c.instructions+=4;goto B5674e0;
case 0x5674e3:c.instructions+=3;goto B5674e3;
case 0x5674e6:c.instructions+=2;goto B5674e6;
case 0x5674e9:c.instructions+=1;goto B5674e9;
case 0x5674ec:goto L5674ec;
case 0x5674ef:c.instructions+=3;goto B5674ef;
case 0x5674f1:c.instructions+=2;goto B5674f1;
case 0x5674f5:c.instructions+=1;goto B5674f5;
case 0x5674fa:goto L5674fa;
case 0x567500:c.instructions+=4;goto B567500;
case 0x567502:c.instructions+=3;goto B567502;
case 0x567509:c.instructions+=2;goto B567509;
case 0x56750b:c.instructions+=1;goto B56750b;
case 0x56750d:goto L56750d;
case 0x567513:c.instructions+=2;goto B567513;
case 0x567517:c.instructions+=1;goto B567517;
case 0x56751c:goto L56751c;
case 0x56751f:c.instructions+=5;goto B56751f;
case 0x567521:c.instructions+=4;goto B567521;
case 0x567526:c.instructions+=3;goto B567526;
case 0x56752b:c.instructions+=2;goto B56752b;
case 0x56752c:c.instructions+=1;goto B56752c;
case 0x567531:goto L567531;
case 0x567534:c.instructions+=8;goto B567534;
case 0x567535:c.instructions+=7;goto B567535;
case 0x567536:c.instructions+=6;goto B567536;
case 0x567537:c.instructions+=5;goto B567537;
case 0x56753a:c.instructions+=4;goto B56753a;
case 0x567541:c.instructions+=3;goto B567541;
case 0x567543:c.instructions+=2;goto B567543;
case 0x567544:c.instructions+=1;goto B567544;
case 0x567547:goto L567547;
case 0x56754c:c.instructions+=1;goto B56754c;
case 0x567551:goto L567551;
case 0x567556:c.instructions+=1;goto B567556;
case 0x56755c:goto L56755c;
case 0x567562:goto L567562;
case 0x567567:c.instructions+=1;goto B567567;
case 0x56756d:goto L56756d;
case 0x567572:c.instructions+=1;goto B567572;
case 0x567578:goto L567578;
case 0x56757e:c.instructions+=2;goto B56757e;
case 0x567580:c.instructions+=1;goto B567580;
case 0x567586:goto L567586;
case 0x567589:c.instructions+=7;goto B567589;
case 0x56758b:c.instructions+=6;goto B56758b;
case 0x567590:c.instructions+=5;goto B567590;
case 0x567595:c.instructions+=4;goto B567595;
case 0x567596:c.instructions+=3;goto B567596;
case 0x56759d:c.instructions+=2;goto B56759d;
case 0x5675a4:c.instructions+=1;goto B5675a4;
case 0x5675a9:goto L5675a9;
case 0x5675ac:c.instructions+=5;goto B5675ac;
case 0x5675ae:c.instructions+=4;goto B5675ae;
case 0x5675b3:c.instructions+=3;goto B5675b3;
case 0x5675b8:c.instructions+=2;goto B5675b8;
case 0x5675b9:c.instructions+=1;goto B5675b9;
case 0x5675be:goto L5675be;
case 0x5675c1:c.instructions+=5;goto B5675c1;
case 0x5675c3:c.instructions+=4;goto B5675c3;
case 0x5675c8:c.instructions+=3;goto B5675c8;
case 0x5675cd:c.instructions+=2;goto B5675cd;
case 0x5675ce:c.instructions+=1;goto B5675ce;
case 0x5675d3:goto L5675d3;
case 0x5675d6:c.instructions+=5;goto B5675d6;
case 0x5675d8:c.instructions+=4;goto B5675d8;
case 0x5675dd:c.instructions+=3;goto B5675dd;
case 0x5675e2:c.instructions+=2;goto B5675e2;
case 0x5675e3:c.instructions+=1;goto B5675e3;
case 0x5675e8:goto L5675e8;
case 0x5675eb:c.instructions+=6;goto B5675eb;
case 0x5675ee:c.instructions+=5;goto B5675ee;
case 0x5675f0:c.instructions+=4;goto B5675f0;
case 0x5675f5:c.instructions+=3;goto B5675f5;
case 0x5675fa:c.instructions+=2;goto B5675fa;
case 0x5675fb:c.instructions+=1;goto B5675fb;
case 0x567600:goto L567600;
case 0x567603:c.instructions+=5;goto B567603;
case 0x567605:c.instructions+=4;goto B567605;
case 0x56760a:c.instructions+=3;goto B56760a;
case 0x56760f:c.instructions+=2;goto B56760f;
case 0x567610:c.instructions+=1;goto B567610;
case 0x567615:goto L567615;
case 0x567618:goto L567618;
case 0x56761e:c.instructions+=2;goto B56761e;
case 0x567620:c.instructions+=1;goto B567620;
case 0x567622:goto L567622;
case 0x567625:c.instructions+=1;goto B567625;
case 0x56762a:goto L56762a;
case 0x567630:c.instructions+=1;goto B567630;
case 0x567635:goto L567635;
case 0x56763b:c.instructions+=2;goto B56763b;
case 0x56763d:c.instructions+=1;goto B56763d;
case 0x567643:goto L567643;
case 0x567649:c.instructions+=9;goto B567649;
case 0x56764f:c.instructions+=8;goto B56764f;
case 0x567651:c.instructions+=7;goto B567651;
case 0x567654:c.instructions+=6;goto B567654;
case 0x567657:c.instructions+=5;goto B567657;
case 0x56765d:c.instructions+=4;goto B56765d;
case 0x567663:c.instructions+=3;goto B567663;
case 0x567665:c.instructions+=2;goto B567665;
case 0x567668:c.instructions+=1;goto B567668;
case 0x56766e:goto L56766e;
case 0x567671:c.instructions+=3;goto B567671;
case 0x567673:c.instructions+=2;goto B567673;
case 0x56767a:c.instructions+=1;goto B56767a;
case 0x56767f:goto L56767f;
case 0x567685:c.instructions+=2;goto B567685;
case 0x567687:c.instructions+=1;goto B567687;
case 0x567689:goto L567689;
case 0x56768b:c.instructions+=1;goto B56768b;
case 0x567691:goto L567691;
case 0x567694:c.instructions+=2;goto B567694;
case 0x567697:c.instructions+=1;goto B567697;
case 0x567699:goto L567699;
case 0x56769b:c.instructions+=1;goto B56769b;
case 0x5676a1:goto L5676a1;
case 0x5676a4:c.instructions+=4;goto B5676a4;
case 0x5676a5:c.instructions+=3;goto B5676a5;
case 0x5676a6:c.instructions+=2;goto B5676a6;
case 0x5676a8:c.instructions+=1;goto B5676a8;
case 0x5676ad:goto L5676ad;
case 0x5676ae:c.instructions+=7;goto B5676ae;
case 0x5676af:c.instructions+=6;goto B5676af;
case 0x5676b0:c.instructions+=5;goto B5676b0;
case 0x5676b3:c.instructions+=4;goto B5676b3;
case 0x5676ba:c.instructions+=3;goto B5676ba;
case 0x5676bc:c.instructions+=2;goto B5676bc;
case 0x5676bd:c.instructions+=1;goto B5676bd;
case 0x5676c0:goto L5676c0;
case 0x5676c2:c.instructions+=4;goto B5676c2;
case 0x5676c4:c.instructions+=3;goto B5676c4;
case 0x5676c6:c.instructions+=2;goto B5676c6;
case 0x5676c8:c.instructions+=1;goto B5676c8;
case 0x5676cd:goto L5676cd;
case 0x5676d2:goto L5676d2;
case 0x5676d4:c.instructions+=2;goto B5676d4;
case 0x5676d6:c.instructions+=1;goto B5676d6;
case 0x5676db:goto L5676db;
case 0x5676dc:c.instructions+=7;goto B5676dc;
case 0x5676dd:c.instructions+=6;goto B5676dd;
case 0x5676de:c.instructions+=5;goto B5676de;
case 0x5676e1:c.instructions+=4;goto B5676e1;
case 0x5676e8:c.instructions+=3;goto B5676e8;
case 0x5676ea:c.instructions+=2;goto B5676ea;
case 0x5676eb:c.instructions+=1;goto B5676eb;
case 0x5676ee:goto L5676ee;
case 0x5676f1:c.instructions+=3;goto B5676f1;
case 0x5676f2:c.instructions+=2;goto B5676f2;
case 0x5676f9:c.instructions+=1;goto B5676f9;
case 0x5676fe:goto L5676fe;
case 0x567703:c.instructions+=3;goto B567703;
case 0x567706:c.instructions+=2;goto B567706;
case 0x567707:c.instructions+=1;goto B567707;
case 0x56770c:goto L56770c;
case 0x567711:goto L567711;
case 0x567716:c.instructions+=1;goto B567716;
case 0x56771c:goto L56771c;
case 0x567722:c.instructions+=2;goto B567722;
case 0x567724:c.instructions+=1;goto B567724;
case 0x567726:goto L567726;
case 0x567727:c.instructions+=8;goto B567727;
case 0x567728:c.instructions+=7;goto B567728;
case 0x56772f:c.instructions+=6;goto B56772f;
case 0x567730:c.instructions+=5;goto B567730;
case 0x567733:c.instructions+=4;goto B567733;
case 0x56773a:c.instructions+=3;goto B56773a;
case 0x56773c:c.instructions+=2;goto B56773c;
case 0x56773d:c.instructions+=1;goto B56773d;
case 0x567740:goto L567740;
case 0x567745:c.instructions+=2;goto B567745;
case 0x567747:c.instructions+=1;goto B567747;
case 0x567749:goto L567749;
case 0x56774f:c.instructions+=2;goto B56774f;
case 0x567751:c.instructions+=1;goto B567751;
case 0x567753:goto L567753;
case 0x567759:c.instructions+=2;goto B567759;
case 0x56775b:c.instructions+=1;goto B56775b;
case 0x56775d:goto L56775d;
case 0x567763:c.instructions+=2;goto B567763;
case 0x567765:c.instructions+=1;goto B567765;
case 0x567767:goto L567767;
case 0x56776d:c.instructions+=2;goto B56776d;
case 0x56776f:c.instructions+=1;goto B56776f;
case 0x567775:goto L567775;
case 0x56777b:c.instructions+=2;goto B56777b;
case 0x56777d:c.instructions+=1;goto B56777d;
case 0x56777f:goto L56777f;
case 0x567784:goto L567784;
case 0x567786:c.instructions+=1;goto B567786;
case 0x56778b:goto L56778b;
case 0x567790:goto L567790;
case 0x567796:c.instructions+=2;goto B567796;
case 0x567798:c.instructions+=1;goto B567798;
case 0x56779a:goto L56779a;
case 0x56779d:c.instructions+=5;goto B56779d;
case 0x56779f:c.instructions+=4;goto B56779f;
case 0x5677a4:c.instructions+=3;goto B5677a4;
case 0x5677a9:c.instructions+=2;goto B5677a9;
case 0x5677aa:c.instructions+=1;goto B5677aa;
case 0x5677af:goto L5677af;
case 0x5677b2:c.instructions+=6;goto B5677b2;
case 0x5677b4:c.instructions+=5;goto B5677b4;
case 0x5677b6:c.instructions+=4;goto B5677b6;
case 0x5677ba:c.instructions+=3;goto B5677ba;
case 0x5677c1:c.instructions+=2;goto B5677c1;
case 0x5677c8:c.instructions+=1;goto B5677c8;
case 0x5677cd:goto L5677cd;
case 0x5677d2:goto L5677d2;
case 0x5677d8:c.instructions+=2;goto B5677d8;
case 0x5677da:c.instructions+=1;goto B5677da;
case 0x5677dc:goto L5677dc;
case 0x5677df:c.instructions+=5;goto B5677df;
case 0x5677e1:c.instructions+=4;goto B5677e1;
case 0x5677e6:c.instructions+=3;goto B5677e6;
case 0x5677eb:c.instructions+=2;goto B5677eb;
case 0x5677ec:c.instructions+=1;goto B5677ec;
case 0x5677f1:goto L5677f1;
case 0x5677f4:c.instructions+=5;goto B5677f4;
case 0x5677f9:c.instructions+=4;goto B5677f9;
case 0x5677fd:c.instructions+=3;goto B5677fd;
case 0x567804:c.instructions+=2;goto B567804;
case 0x56780b:c.instructions+=1;goto B56780b;
case 0x567810:goto L567810;
case 0x567812:c.instructions+=3;goto B567812;
case 0x567819:c.instructions+=2;goto B567819;
case 0x567820:c.instructions+=1;goto B567820;
case 0x567825:goto L567825;
case 0x567827:goto L567827;
case 0x56782c:c.instructions+=1;goto B56782c;
case 0x567831:goto L567831;
case 0x567834:c.instructions+=3;goto B567834;
case 0x567836:c.instructions+=2;goto B567836;
case 0x567837:c.instructions+=1;goto B567837;
case 0x56783c:goto L56783c;
case 0x56783f:c.instructions+=1;goto B56783f;
case 0x567844:goto L567844;
case 0x567846:c.instructions+=1;goto B567846;
case 0x56784b:goto L56784b;
case 0x56784d:c.instructions+=2;goto B56784d;
case 0x56784f:c.instructions+=1;goto B56784f;
case 0x567854:goto L567854;
case 0x567857:goto L567857;
case 0x567858:c.instructions+=7;goto B567858;
case 0x567859:c.instructions+=6;goto B567859;
case 0x56785c:c.instructions+=5;goto B56785c;
case 0x56785d:c.instructions+=4;goto B56785d;
case 0x567864:c.instructions+=3;goto B567864;
case 0x567866:c.instructions+=2;goto B567866;
case 0x567867:c.instructions+=1;goto B567867;
case 0x5678e0:goto L5678e0;
case 0x5678e2:c.instructions+=13;goto B5678e2;
case 0x5678e7:c.instructions+=12;goto B5678e7;
case 0x5678ed:c.instructions+=11;goto B5678ed;
case 0x5678ee:c.instructions+=10;goto B5678ee;
case 0x5678f5:c.instructions+=9;goto B5678f5;
case 0x5678f6:c.instructions+=8;goto B5678f6;
case 0x5678f7:c.instructions+=7;goto B5678f7;
case 0x5678f8:c.instructions+=6;goto B5678f8;
case 0x5678f9:c.instructions+=5;goto B5678f9;
case 0x5678fd:c.instructions+=4;goto B5678fd;
case 0x5678ff:c.instructions+=3;goto B5678ff;
case 0x567900:c.instructions+=2;goto B567900;
case 0x567904:c.instructions+=1;goto B567904;
case 0x567909:goto L567909;
case 0x56790c:c.instructions+=11;goto B56790c;
case 0x567911:c.instructions+=10;goto B567911;
case 0x567916:c.instructions+=9;goto B567916;
case 0x567918:c.instructions+=8;goto B567918;
case 0x56791d:c.instructions+=7;goto B56791d;
case 0x567922:c.instructions+=6;goto B567922;
case 0x567924:c.instructions+=5;goto B567924;
case 0x567925:c.instructions+=4;goto B567925;
case 0x56792b:c.instructions+=3;goto B56792b;
case 0x56792f:c.instructions+=2;goto B56792f;
case 0x567935:c.instructions+=1;goto B567935;
case 0x56793a:goto L56793a;
case 0x56793d:c.instructions+=8;goto B56793d;
case 0x56793e:c.instructions+=7;goto B56793e;
case 0x56793f:c.instructions+=6;goto B56793f;
case 0x567941:c.instructions+=5;goto B567941;
case 0x567946:c.instructions+=4;goto B567946;
case 0x567947:c.instructions+=3;goto B567947;
case 0x56794d:c.instructions+=2;goto B56794d;
case 0x567952:c.instructions+=1;goto B567952;
case 0x567957:goto L567957;
case 0x56795d:c.instructions+=10;goto B56795d;
case 0x567963:c.instructions+=9;goto B567963;
case 0x567969:c.instructions+=8;goto B567969;
case 0x56796c:c.instructions+=7;goto B56796c;
case 0x567972:c.instructions+=6;goto B567972;
case 0x567974:c.instructions+=5;goto B567974;
case 0x56797b:c.instructions+=4;goto B56797b;
case 0x567981:c.instructions+=3;goto B567981;
case 0x56798b:c.instructions+=2;goto B56798b;
case 0x567995:c.instructions+=1;goto B567995;
case 0x56799a:goto L56799a;
case 0x56799d:c.instructions+=3;goto B56799d;
case 0x5679a2:c.instructions+=2;goto B5679a2;
case 0x5679a3:c.instructions+=1;goto B5679a3;
case 0x5679a8:goto L5679a8;
case 0x5679ab:c.instructions+=3;goto B5679ab;
case 0x5679b0:c.instructions+=2;goto B5679b0;
case 0x5679b1:c.instructions+=1;goto B5679b1;
case 0x5679b6:goto L5679b6;
case 0x5679ba:c.instructions+=8;goto B5679ba;
case 0x5679bd:c.instructions+=7;goto B5679bd;
case 0x5679be:c.instructions+=6;goto B5679be;
case 0x5679c0:c.instructions+=5;goto B5679c0;
case 0x5679c1:c.instructions+=4;goto B5679c1;
case 0x5679c2:c.instructions+=3;goto B5679c2;
case 0x5679c9:c.instructions+=2;goto B5679c9;
case 0x5679cc:c.instructions+=1;goto B5679cc;
case 0x5679d0:goto L5679d0;
case 0x5679d1:c.instructions+=2;goto B5679d1;
case 0x5679d3:c.instructions+=1;goto B5679d3;
case 0x5679d8:goto L5679d8;
case 0x5679dd:c.instructions+=1;goto B5679dd;
case 0x5679df:goto L5679df;
case 0x5679e0:c.instructions+=1;goto B5679e0;
case 0x5679e5:goto L5679e5;
case 0x5679e8:goto L5679e8;
case 0x5679ea:c.instructions+=2;goto B5679ea;
case 0x5679eb:c.instructions+=1;goto B5679eb;
case 0x5679f0:goto L5679f0;
case 0x5679f2:c.instructions+=12;goto B5679f2;
case 0x5679f7:c.instructions+=11;goto B5679f7;
case 0x5679fd:c.instructions+=10;goto B5679fd;
case 0x5679fe:c.instructions+=9;goto B5679fe;
case 0x567a05:c.instructions+=8;goto B567a05;
case 0x567a06:c.instructions+=7;goto B567a06;
case 0x567a07:c.instructions+=6;goto B567a07;
case 0x567a09:c.instructions+=5;goto B567a09;
case 0x567a0d:c.instructions+=4;goto B567a0d;
case 0x567a13:c.instructions+=3;goto B567a13;
case 0x567a19:c.instructions+=2;goto B567a19;
case 0x567a21:c.instructions+=1;goto B567a21;
case 0x567a26:goto L567a26;
case 0x567a28:c.instructions+=2;goto B567a28;
case 0x567a30:c.instructions+=1;goto B567a30;
case 0x567a35:goto L567a35;
case 0x567a39:c.instructions+=4;goto B567a39;
case 0x567a3a:c.instructions+=3;goto B567a3a;
case 0x567a41:c.instructions+=2;goto B567a41;
case 0x567a44:c.instructions+=1;goto B567a44;
case 0x567a50:goto L567a50;
case 0x567a51:c.instructions+=9;goto B567a51;
case 0x567a53:c.instructions+=8;goto B567a53;
case 0x567a56:c.instructions+=7;goto B567a56;
case 0x567a57:c.instructions+=6;goto B567a57;
case 0x567a58:c.instructions+=5;goto B567a58;
case 0x567a59:c.instructions+=4;goto B567a59;
case 0x567a5c:c.instructions+=3;goto B567a5c;
case 0x567a62:c.instructions+=2;goto B567a62;
case 0x567a64:c.instructions+=1;goto B567a64;
case 0x567a6a:goto L567a6a;
case 0x567a70:c.instructions+=2;goto B567a70;
case 0x567a72:c.instructions+=1;goto B567a72;
case 0x567a78:goto L567a78;
case 0x567a7b:c.instructions+=3;goto B567a7b;
case 0x567a80:c.instructions+=2;goto B567a80;
case 0x567a81:c.instructions+=1;goto B567a81;
case 0x567a86:goto L567a86;
case 0x567a88:c.instructions+=4;goto B567a88;
case 0x567a8b:c.instructions+=3;goto B567a8b;
case 0x567a90:c.instructions+=2;goto B567a90;
case 0x567a91:c.instructions+=1;goto B567a91;
case 0x567a96:goto L567a96;
case 0x567a99:c.instructions+=4;goto B567a99;
case 0x567a9c:c.instructions+=3;goto B567a9c;
case 0x567aa1:c.instructions+=2;goto B567aa1;
case 0x567aa2:c.instructions+=1;goto B567aa2;
case 0x567aa7:goto L567aa7;
case 0x567aaa:c.instructions+=4;goto B567aaa;
case 0x567aad:c.instructions+=3;goto B567aad;
case 0x567ab2:c.instructions+=2;goto B567ab2;
case 0x567ab3:c.instructions+=1;goto B567ab3;
case 0x567ab8:goto L567ab8;
case 0x567ab9:c.instructions+=2;goto B567ab9;
case 0x567abc:c.instructions+=1;goto B567abc;
case 0x567ac1:goto L567ac1;
case 0x567ac4:c.instructions+=2;goto B567ac4;
case 0x567ac6:c.instructions+=1;goto B567ac6;
case 0x567acc:goto L567acc;
case 0x567acf:c.instructions+=2;goto B567acf;
case 0x567ad0:c.instructions+=1;goto B567ad0;
case 0x567ad5:goto L567ad5;
case 0x567ad8:c.instructions+=2;goto B567ad8;
case 0x567ada:c.instructions+=1;goto B567ada;
case 0x567ae0:goto L567ae0;
case 0x567ae3:c.instructions+=2;goto B567ae3;
case 0x567ae4:c.instructions+=1;goto B567ae4;
case 0x567ae9:goto L567ae9;
case 0x567aec:c.instructions+=2;goto B567aec;
case 0x567aee:c.instructions+=1;goto B567aee;
case 0x567af4:goto L567af4;
case 0x567af7:c.instructions+=2;goto B567af7;
case 0x567af8:c.instructions+=1;goto B567af8;
case 0x567afd:goto L567afd;
case 0x567b00:c.instructions+=2;goto B567b00;
case 0x567b02:c.instructions+=1;goto B567b02;
case 0x567b08:goto L567b08;
case 0x567b0e:c.instructions+=2;goto B567b0e;
case 0x567b10:c.instructions+=1;goto B567b10;
case 0x567b12:goto L567b12;
case 0x567b18:c.instructions+=1;goto B567b18;
case 0x567b1e:goto L567b1e;
case 0x567b21:c.instructions+=8;goto B567b21;
case 0x567b24:c.instructions+=7;goto B567b24;
case 0x567b27:c.instructions+=6;goto B567b27;
case 0x567b28:c.instructions+=5;goto B567b28;
case 0x567b29:c.instructions+=4;goto B567b29;
case 0x567b2a:c.instructions+=3;goto B567b2a;
case 0x567b2b:c.instructions+=2;goto B567b2b;
case 0x567b2d:c.instructions+=1;goto B567b2d;
case 0x567b32:goto L567b32;
case 0x567b38:c.instructions+=1;goto B567b38;
case 0x567b3e:goto L567b3e;
case 0x567b44:goto L567b44;
case 0x567b4a:c.instructions+=1;goto B567b4a;
case 0x567b50:goto L567b50;
case 0x567b56:goto L567b56;
case 0x567b5c:c.instructions+=1;goto B567b5c;
case 0x567b5e:goto L567b5e;
case 0x567b64:c.instructions+=1;goto B567b64;
case 0x567b66:goto L567b66;
case 0x567b6c:c.instructions+=1;goto B567b6c;
case 0x567b72:goto L567b72;
case 0x567b78:c.instructions+=2;goto B567b78;
case 0x567b7a:c.instructions+=1;goto B567b7a;
case 0x567b80:goto L567b80;
case 0x567b83:c.instructions+=1;goto B567b83;
case 0x567b88:goto L567b88;
case 0x567b8b:c.instructions+=5;goto B567b8b;
case 0x567b8d:c.instructions+=4;goto B567b8d;
case 0x567b92:c.instructions+=3;goto B567b92;
case 0x567b97:c.instructions+=2;goto B567b97;
case 0x567b98:c.instructions+=1;goto B567b98;
case 0x567b9d:goto L567b9d;
case 0x567ba0:c.instructions+=7;goto B567ba0;
case 0x567ba1:c.instructions+=6;goto B567ba1;
case 0x567ba5:c.instructions+=5;goto B567ba5;
case 0x567ba6:c.instructions+=4;goto B567ba6;
case 0x567ba7:c.instructions+=3;goto B567ba7;
case 0x567ba9:c.instructions+=2;goto B567ba9;
case 0x567baa:c.instructions+=1;goto B567baa;
case 0x567bad:goto L567bad;
case 0x567bb3:c.instructions+=5;goto B567bb3;
case 0x567bb6:c.instructions+=4;goto B567bb6;
case 0x567bb7:c.instructions+=3;goto B567bb7;
case 0x567bb9:c.instructions+=2;goto B567bb9;
case 0x567bbe:c.instructions+=1;goto B567bbe;
case 0x567bc3:goto L567bc3;
case 0x567bc4:c.instructions+=3;goto B567bc4;
case 0x567bc6:c.instructions+=2;goto B567bc6;
case 0x567bcb:c.instructions+=1;goto B567bcb;
case 0x567bd0:goto L567bd0;
case 0x567bd1:c.instructions+=3;goto B567bd1;
case 0x567bd3:c.instructions+=2;goto B567bd3;
case 0x567bd8:c.instructions+=1;goto B567bd8;
case 0x567bdd:goto L567bdd;
case 0x567be2:c.instructions+=2;goto B567be2;
case 0x567be7:c.instructions+=1;goto B567be7;
case 0x567bec:goto L567bec;
case 0x567bee:c.instructions+=3;goto B567bee;
case 0x567bf0:c.instructions+=2;goto B567bf0;
case 0x567bf5:c.instructions+=1;goto B567bf5;
case 0x567bfa:goto L567bfa;
case 0x567c00:c.instructions+=4;goto B567c00;
case 0x567c03:c.instructions+=3;goto B567c03;
case 0x567c08:c.instructions+=2;goto B567c08;
case 0x567c0b:c.instructions+=1;goto B567c0b;
case 0x567c10:goto L567c10;
case 0x567c15:c.instructions+=3;goto B567c15;
case 0x567c1a:c.instructions+=2;goto B567c1a;
case 0x567c1f:c.instructions+=1;goto B567c1f;
case 0x567c24:goto L567c24;
case 0x567c27:c.instructions+=7;goto B567c27;
case 0x567c2d:c.instructions+=6;goto B567c2d;
case 0x567c33:c.instructions+=5;goto B567c33;
case 0x567c34:c.instructions+=4;goto B567c34;
case 0x567c39:c.instructions+=3;goto B567c39;
case 0x567c3e:c.instructions+=2;goto B567c3e;
case 0x567c3f:c.instructions+=1;goto B567c3f;
case 0x567c44:goto L567c44;
case 0x567c47:c.instructions+=3;goto B567c47;
case 0x567c49:c.instructions+=2;goto B567c49;
case 0x567c4b:c.instructions+=1;goto B567c4b;
case 0x567c50:goto L567c50;
case 0x567c51:c.instructions+=5;goto B567c51;
case 0x567c52:c.instructions+=4;goto B567c52;
case 0x567c53:c.instructions+=3;goto B567c53;
case 0x567c55:c.instructions+=2;goto B567c55;
case 0x567c56:c.instructions+=1;goto B567c56;
case 0x567c59:goto L567c59;
case 0x567c5a:c.instructions+=6;goto B567c5a;
case 0x567c5e:c.instructions+=5;goto B567c5e;
case 0x567c5f:c.instructions+=4;goto B567c5f;
case 0x567c60:c.instructions+=3;goto B567c60;
case 0x567c62:c.instructions+=2;goto B567c62;
case 0x567c63:c.instructions+=1;goto B567c63;
case 0x567c66:goto L567c66;
case 0x567c6c:c.instructions+=1;goto B567c6c;
case 0x567c72:goto L567c72;
case 0x567c78:c.instructions+=1;goto B567c78;
case 0x567c7a:goto L567c7a;
case 0x567c80:c.instructions+=1;goto B567c80;
case 0x567c86:goto L567c86;
case 0x567c88:c.instructions+=2;goto B567c88;
case 0x567c8a:c.instructions+=1;goto B567c8a;
case 0x567c8f:goto L567c8f;
case 0x567c90:c.instructions+=5;goto B567c90;
case 0x567c91:c.instructions+=4;goto B567c91;
case 0x567c92:c.instructions+=3;goto B567c92;
case 0x567c94:c.instructions+=2;goto B567c94;
case 0x567c95:c.instructions+=1;goto B567c95;
case 0x567c98:goto L567c98;
case 0x567c9e:c.instructions+=5;goto B567c9e;
case 0x567ca1:c.instructions+=4;goto B567ca1;
case 0x567ca2:c.instructions+=3;goto B567ca2;
case 0x567ca4:c.instructions+=2;goto B567ca4;
case 0x567ca9:c.instructions+=1;goto B567ca9;
case 0x567cae:goto L567cae;
case 0x567caf:c.instructions+=3;goto B567caf;
case 0x567cb1:c.instructions+=2;goto B567cb1;
case 0x567cb6:c.instructions+=1;goto B567cb6;
case 0x567cbb:goto L567cbb;
case 0x567cc0:c.instructions+=2;goto B567cc0;
case 0x567cc5:c.instructions+=1;goto B567cc5;
case 0x567cca:goto L567cca;
case 0x567ccc:c.instructions+=3;goto B567ccc;
case 0x567cce:c.instructions+=2;goto B567cce;
case 0x567cd3:c.instructions+=1;goto B567cd3;
case 0x567cd8:goto L567cd8;
case 0x567cde:c.instructions+=4;goto B567cde;
case 0x567ce1:c.instructions+=3;goto B567ce1;
case 0x567ce6:c.instructions+=2;goto B567ce6;
case 0x567ce9:c.instructions+=1;goto B567ce9;
case 0x567cee:goto L567cee;
case 0x567cf3:c.instructions+=3;goto B567cf3;
case 0x567cf8:c.instructions+=2;goto B567cf8;
case 0x567cfd:c.instructions+=1;goto B567cfd;
case 0x567d02:goto L567d02;
case 0x567d04:c.instructions+=3;goto B567d04;
case 0x567d06:c.instructions+=2;goto B567d06;
case 0x567d0c:c.instructions+=1;goto B567d0c;
case 0x567d11:goto L567d11;
case 0x567d12:c.instructions+=5;goto B567d12;
case 0x567d13:c.instructions+=4;goto B567d13;
case 0x567d14:c.instructions+=3;goto B567d14;
case 0x567d16:c.instructions+=2;goto B567d16;
case 0x567d17:c.instructions+=1;goto B567d17;
case 0x567d1a:goto L567d1a;
case 0x567d1d:c.instructions+=3;goto B567d1d;
case 0x567d20:c.instructions+=2;goto B567d20;
case 0x567d22:c.instructions+=1;goto B567d22;
case 0x567d28:goto L567d28;
case 0x567d2e:c.instructions+=2;goto B567d2e;
case 0x567d30:c.instructions+=1;goto B567d30;
case 0x567d32:goto L567d32;
case 0x567d34:c.instructions+=1;goto B567d34;
case 0x567d39:goto L567d39;
case 0x567d3c:c.instructions+=3;goto B567d3c;
case 0x567d3d:c.instructions+=2;goto B567d3d;
case 0x567d3f:c.instructions+=1;goto B567d3f;
case 0x567d44:goto L567d44;
case 0x567d47:c.instructions+=6;goto B567d47;
case 0x567d48:c.instructions+=5;goto B567d48;
case 0x567d49:c.instructions+=4;goto B567d49;
case 0x567d4a:c.instructions+=3;goto B567d4a;
case 0x567d4c:c.instructions+=2;goto B567d4c;
case 0x567d4d:c.instructions+=1;goto B567d4d;
case 0x567d50:goto L567d50;
case 0x567d56:c.instructions+=5;goto B567d56;
case 0x567d59:c.instructions+=4;goto B567d59;
case 0x567d5a:c.instructions+=3;goto B567d5a;
case 0x567d5c:c.instructions+=2;goto B567d5c;
case 0x567d61:c.instructions+=1;goto B567d61;
case 0x567d66:goto L567d66;
case 0x567d68:c.instructions+=1;goto B567d68;
case 0x567d6a:goto L567d6a;
case 0x567d6d:c.instructions+=4;goto B567d6d;
case 0x567d72:c.instructions+=3;goto B567d72;
case 0x567d77:c.instructions+=2;goto B567d77;
case 0x567d78:c.instructions+=1;goto B567d78;
case 0x567d7a:goto L567d7a;
case 0x567d81:c.instructions+=1;goto B567d81;
case 0x567d83:goto L567d83;
case 0x567d84:c.instructions+=3;goto B567d84;
case 0x567d86:c.instructions+=2;goto B567d86;
case 0x567d8b:c.instructions+=1;goto B567d8b;
case 0x567d90:goto L567d90;
case 0x567d92:c.instructions+=1;goto B567d92;
case 0x567d94:goto L567d94;
case 0x567d98:c.instructions+=1;goto B567d98;
case 0x567d9a:goto L567d9a;
case 0x567da0:c.instructions+=4;goto B567da0;
case 0x567da1:c.instructions+=3;goto B567da1;
case 0x567da3:c.instructions+=2;goto B567da3;
case 0x567da8:c.instructions+=1;goto B567da8;
case 0x567dad:goto L567dad;
case 0x567daf:c.instructions+=1;goto B567daf;
case 0x567db1:goto L567db1;
case 0x567db4:c.instructions+=3;goto B567db4;
case 0x567db9:c.instructions+=2;goto B567db9;
case 0x567dbe:c.instructions+=1;goto B567dbe;
case 0x567dbf:goto L567dbf;
case 0x567dc4:goto L567dc4;
case 0x567dc7:c.instructions+=2;goto B567dc7;
case 0x567dd1:c.instructions+=1;goto B567dd1;
case 0x567dd3:goto L567dd3;
case 0x567dd6:c.instructions+=10;goto B567dd6;
case 0x567ddb:c.instructions+=9;goto B567ddb;
case 0x567ddd:c.instructions+=8;goto B567ddd;
case 0x567de2:c.instructions+=7;goto B567de2;
case 0x567de7:c.instructions+=6;goto B567de7;
case 0x567dec:c.instructions+=5;goto B567dec;
case 0x567df1:c.instructions+=4;goto B567df1;
case 0x567df6:c.instructions+=3;goto B567df6;
case 0x567dfb:c.instructions+=2;goto B567dfb;
case 0x567dfc:c.instructions+=1;goto B567dfc;
case 0x567dfe:goto L567dfe;
case 0x567e01:c.instructions+=9;goto B567e01;
case 0x567e06:c.instructions+=8;goto B567e06;
case 0x567e08:c.instructions+=7;goto B567e08;
case 0x567e0d:c.instructions+=6;goto B567e0d;
case 0x567e12:c.instructions+=5;goto B567e12;
case 0x567e17:c.instructions+=4;goto B567e17;
case 0x567e1c:c.instructions+=3;goto B567e1c;
case 0x567e21:c.instructions+=2;goto B567e21;
case 0x567e26:c.instructions+=1;goto B567e26;
case 0x567e27:goto L567e27;
case 0x567e2c:goto L567e2c;
case 0x567e2f:c.instructions+=1;goto B567e2f;
case 0x567e39:goto L567e39;
case 0x567e3b:c.instructions+=1;goto B567e3b;
case 0x567e40:goto L567e40;
case 0x567e43:c.instructions+=3;goto B567e43;
case 0x567e44:c.instructions+=2;goto B567e44;
case 0x567e46:c.instructions+=1;goto B567e46;
case 0x567e4b:goto L567e4b;
case 0x567e4e:c.instructions+=6;goto B567e4e;
case 0x567e4f:c.instructions+=5;goto B567e4f;
case 0x567e50:c.instructions+=4;goto B567e50;
case 0x567e51:c.instructions+=3;goto B567e51;
case 0x567e53:c.instructions+=2;goto B567e53;
case 0x567e54:c.instructions+=1;goto B567e54;
case 0x567e57:goto L567e57;
case 0x567e5d:c.instructions+=2;goto B567e5d;
case 0x567e5f:c.instructions+=1;goto B567e5f;
case 0x567e61:goto L567e61;
case 0x567e63:c.instructions+=2;goto B567e63;
case 0x567e65:c.instructions+=1;goto B567e65;
case 0x567e6a:goto L567e6a;
case 0x567e6b:c.instructions+=5;goto B567e6b;
case 0x567e6c:c.instructions+=4;goto B567e6c;
case 0x567e6d:c.instructions+=3;goto B567e6d;
case 0x567e6f:c.instructions+=2;goto B567e6f;
case 0x567e70:c.instructions+=1;goto B567e70;
case 0x567e73:goto L567e73;
case 0x567e76:c.instructions+=4;goto B567e76;
case 0x567e7b:c.instructions+=3;goto B567e7b;
case 0x567e80:c.instructions+=2;goto B567e80;
case 0x567e81:c.instructions+=1;goto B567e81;
case 0x567e86:goto L567e86;
case 0x567e89:c.instructions+=2;goto B567e89;
case 0x567e8b:c.instructions+=1;goto B567e8b;
case 0x567e91:goto L567e91;
case 0x567e94:c.instructions+=5;goto B567e94;
case 0x567e96:c.instructions+=4;goto B567e96;
case 0x567e9b:c.instructions+=3;goto B567e9b;
case 0x567ea0:c.instructions+=2;goto B567ea0;
case 0x567ea1:c.instructions+=1;goto B567ea1;
case 0x567ea6:goto L567ea6;
case 0x567ea9:c.instructions+=6;goto B567ea9;
case 0x567eaa:c.instructions+=5;goto B567eaa;
case 0x567eab:c.instructions+=4;goto B567eab;
case 0x567eac:c.instructions+=3;goto B567eac;
case 0x567eae:c.instructions+=2;goto B567eae;
case 0x567eaf:c.instructions+=1;goto B567eaf;
case 0x567eb2:goto L567eb2;
case 0x567eb8:c.instructions+=1;goto B567eb8;
case 0x567ebe:goto L567ebe;
case 0x567ec4:goto L567ec4;
case 0x567eca:c.instructions+=1;goto B567eca;
case 0x567ed0:goto L567ed0;
case 0x567ed6:c.instructions+=1;goto B567ed6;
case 0x567edc:goto L567edc;
case 0x567ee2:c.instructions+=1;goto B567ee2;
case 0x567ee8:goto L567ee8;
case 0x567eeb:c.instructions+=5;goto B567eeb;
case 0x567ef1:c.instructions+=4;goto B567ef1;
case 0x567ef3:c.instructions+=3;goto B567ef3;
case 0x567ef6:c.instructions+=2;goto B567ef6;
case 0x567ef9:c.instructions+=1;goto B567ef9;
case 0x567eff:goto L567eff;
case 0x567f02:c.instructions+=2;goto B567f02;
case 0x567f04:c.instructions+=1;goto B567f04;
case 0x567f0a:goto L567f0a;
case 0x567f10:c.instructions+=1;goto B567f10;
case 0x567f15:goto L567f15;
case 0x567f16:c.instructions+=1;goto B567f16;
case 0x567f1b:goto L567f1b;
case 0x567f1e:c.instructions+=5;goto B567f1e;
case 0x567f21:c.instructions+=4;goto B567f21;
case 0x567f23:c.instructions+=3;goto B567f23;
case 0x567f28:c.instructions+=2;goto B567f28;
case 0x567f2d:c.instructions+=1;goto B567f2d;
case 0x567f2f:goto L567f2f;
case 0x567f32:c.instructions+=2;goto B567f32;
case 0x567f35:c.instructions+=1;goto B567f35;
case 0x567f3a:goto L567f3a;
case 0x567f3b:c.instructions+=3;goto B567f3b;
case 0x567f3d:c.instructions+=2;goto B567f3d;
case 0x567f42:c.instructions+=1;goto B567f42;
case 0x567f47:goto L567f47;
case 0x567f48:c.instructions+=3;goto B567f48;
case 0x567f4a:c.instructions+=2;goto B567f4a;
case 0x567f4f:c.instructions+=1;goto B567f4f;
case 0x567f54:goto L567f54;
case 0x567f56:c.instructions+=3;goto B567f56;
case 0x567f58:c.instructions+=2;goto B567f58;
case 0x567f5d:c.instructions+=1;goto B567f5d;
case 0x567f62:goto L567f62;
case 0x567f65:c.instructions+=4;goto B567f65;
case 0x567f6a:c.instructions+=3;goto B567f6a;
case 0x567f6f:c.instructions+=2;goto B567f6f;
case 0x567f74:c.instructions+=1;goto B567f74;
case 0x567f79:goto L567f79;
case 0x567f7c:c.instructions+=6;goto B567f7c;
case 0x567f7f:c.instructions+=5;goto B567f7f;
case 0x567f81:c.instructions+=4;goto B567f81;
case 0x567f83:c.instructions+=3;goto B567f83;
case 0x567f84:c.instructions+=2;goto B567f84;
case 0x567f86:c.instructions+=1;goto B567f86;
case 0x567f8b:goto L567f8b;
case 0x567f8e:c.instructions+=1;goto B567f8e;
case 0x567f90:goto L567f90;
case 0x567f96:c.instructions+=1;goto B567f96;
case 0x567f9b:goto L567f9b;
case 0x567f9c:c.instructions+=3;goto B567f9c;
case 0x567f9e:c.instructions+=2;goto B567f9e;
case 0x567fa3:c.instructions+=1;goto B567fa3;
case 0x567fa8:goto L567fa8;
case 0x567fa9:c.instructions+=3;goto B567fa9;
case 0x567fab:c.instructions+=2;goto B567fab;
case 0x567fb0:c.instructions+=1;goto B567fb0;
case 0x567fb5:goto L567fb5;
case 0x567fb7:c.instructions+=3;goto B567fb7;
case 0x567fb9:c.instructions+=2;goto B567fb9;
case 0x567fbe:c.instructions+=1;goto B567fbe;
case 0x567fc3:goto L567fc3;
case 0x567fc6:c.instructions+=4;goto B567fc6;
case 0x567fcb:c.instructions+=3;goto B567fcb;
case 0x567fd0:c.instructions+=2;goto B567fd0;
case 0x567fd5:c.instructions+=1;goto B567fd5;
case 0x567fda:goto L567fda;
case 0x567fe0:c.instructions+=5;goto B567fe0;
case 0x567fe2:c.instructions+=4;goto B567fe2;
case 0x567fe4:c.instructions+=3;goto B567fe4;
case 0x567fe5:c.instructions+=2;goto B567fe5;
case 0x567fe7:c.instructions+=1;goto B567fe7;
case 0x567fec:goto L567fec;
case 0x567fef:goto L567fef;
case 0x567ff0:c.instructions+=1;goto B567ff0;
case 0x567ff5:goto L567ff5;
case 0x567ff8:c.instructions+=2;goto B567ff8;
case 0x567ffa:c.instructions+=1;goto B567ffa;
default:missing_instruction(c.pc);}
B567001:L567001:{c.instructions+=1;NFSU2_TR(0x567001);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567025;}}
}
B567003:L567003:{c.instructions+=8;NFSU2_TR(0x567003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567006:{NFSU2_TR(0x567006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567009:{NFSU2_TR(0x567009);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B56700d:{NFSU2_TR(0x56700d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B567010:{NFSU2_TR(0x567010);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B567013:{NFSU2_TR(0x567013);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B567015:{NFSU2_TR(0x567015);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56701b:{NFSU2_TR(0x56701b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567045;}}
}
B56701d:L56701d:{c.instructions+=3;NFSU2_TR(0x56701d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567020:{NFSU2_TR(0x567020);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567023:{NFSU2_TR(0x567023);
{goto L567045;}
}
B567025:L567025:{c.instructions+=8;NFSU2_TR(0x567025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567028:{NFSU2_TR(0x567028);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B56702b:{NFSU2_TR(0x56702b);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B56702f:{NFSU2_TR(0x56702f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B567032:{NFSU2_TR(0x567032);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B567035:{NFSU2_TR(0x567035);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B567037:{NFSU2_TR(0x567037);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56703d:{NFSU2_TR(0x56703d);
if(r1(R+518)){{goto L567045;}}
}
B56703f:L56703f:{c.instructions+=2;NFSU2_TR(0x56703f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567042:{NFSU2_TR(0x567042);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567045:L567045:{c.instructions+=2;NFSU2_TR(0x567045);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B56704c:{NFSU2_TR(0x56704c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567076;}}
}
B56704e:L56704e:{c.instructions+=6;NFSU2_TR(0x56704e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567051:{NFSU2_TR(0x567051);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567054:{NFSU2_TR(0x567054);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567055:{NFSU2_TR(0x567055);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567056:{NFSU2_TR(0x567056);
w4(R+4,u32(0x838980ull));
}
B56705b:{NFSU2_TR(0x56705b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567060ull));
TAIL_STATIC(0x521be0u,521);
}
B567060:L567060:{c.instructions+=2;NFSU2_TR(0x567060);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567062:{NFSU2_TR(0x567062);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567076;}}
}
B567064:L567064:{c.instructions+=6;NFSU2_TR(0x567064);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567067:{NFSU2_TR(0x567067);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56706a:{NFSU2_TR(0x56706a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56706b:{NFSU2_TR(0x56706b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56706c:{NFSU2_TR(0x56706c);
w4(R+4,u32(0x85ad40ull));
}
B567071:{NFSU2_TR(0x567071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567076ull));
TAIL_STATIC(0x5289f0u,528);
}
B567076:L567076:{c.instructions+=6;NFSU2_TR(0x567076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567079:{NFSU2_TR(0x567079);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56707c:{NFSU2_TR(0x56707c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56707d:{NFSU2_TR(0x56707d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56707e:{NFSU2_TR(0x56707e);
w4(R+4,u32(0x838980ull));
}
B567083:{NFSU2_TR(0x567083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567088ull));
TAIL_STATIC(0x55c230u,55c);
}
B567088:L567088:{c.instructions+=5;NFSU2_TR(0x567088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56708b:{NFSU2_TR(0x56708b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56708e:{NFSU2_TR(0x56708e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56708f:{NFSU2_TR(0x56708f);
__builtin_memmove((R+4),(R+24),4);
}
B567091:{NFSU2_TR(0x567091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567096ull));
TAIL_STATIC(0x545d30u,545);
}
B567096:L567096:{c.instructions+=3;NFSU2_TR(0x567096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567097:{NFSU2_TR(0x567097);
w4(R+4,u32(0x838980ull));
}
B56709c:{NFSU2_TR(0x56709c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5670a1ull));
TAIL_STATIC(0x521280u,521);
}
B5670a1:L5670a1:{c.instructions+=4;NFSU2_TR(0x5670a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5670a4:{NFSU2_TR(0x5670a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5670a6:{NFSU2_TR(0x5670a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5670aa:{NFSU2_TR(0x5670aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5670afull));
TAIL_STATIC(0x52eb90u,52e);
}
B5670af:L5670af:{c.instructions+=6;NFSU2_TR(0x5670af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5670b2:{NFSU2_TR(0x5670b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5670b4:{NFSU2_TR(0x5670b4);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5670b9:{NFSU2_TR(0x5670b9);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5670be:{NFSU2_TR(0x5670be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5670bf:{NFSU2_TR(0x5670bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5670c4ull));
TAIL_STATIC(0x537c00u,537);
}
B5670c4:L5670c4:{c.instructions+=4;NFSU2_TR(0x5670c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5670c7:{NFSU2_TR(0x5670c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B5670ca:{NFSU2_TR(0x5670ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5670d1:{NFSU2_TR(0x5670d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5670d6ull));
TAIL_STATIC(0x4def30u,4de);
}
B5670d6:L5670d6:{c.instructions+=8;NFSU2_TR(0x5670d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5670d7:{NFSU2_TR(0x5670d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5670d8:{NFSU2_TR(0x5670d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5670d9:{NFSU2_TR(0x5670d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5670dc:{NFSU2_TR(0x5670dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5670e3:{NFSU2_TR(0x5670e3);
__builtin_memmove((R+16),(R+20),4);
}
B5670e5:{NFSU2_TR(0x5670e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5670e6:{NFSU2_TR(0x5670e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5670e9:L5670e9:{c.instructions+=2;NFSU2_TR(0x5670e9);
__builtin_memmove((R+4),(R+24),4);
}
B5670eb:{NFSU2_TR(0x5670eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5670f0ull));
TAIL_STATIC(0x50e510u,50e);
}
B5670f0:L5670f0:{c.instructions+=6;NFSU2_TR(0x5670f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5670f3:{NFSU2_TR(0x5670f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5670f9:{NFSU2_TR(0x5670f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5670fb:{NFSU2_TR(0x5670fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5670fe:{NFSU2_TR(0x5670fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567101:{NFSU2_TR(0x567101);
if(r1(R+518)){{goto L567187;}}
}
B567107:L567107:{c.instructions+=2;NFSU2_TR(0x567107);
__builtin_memmove((R+4),(R+24),4);
}
B567109:{NFSU2_TR(0x567109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56710eull));
TAIL_STATIC(0x50e510u,50e);
}
B56710e:L56710e:{c.instructions+=6;NFSU2_TR(0x56710e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567111:{NFSU2_TR(0x567111);
__builtin_memmove((R+8),gp(0x8389a8),4);
}
B567117:{NFSU2_TR(0x567117);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567118:{NFSU2_TR(0x567118);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567119:{NFSU2_TR(0x567119);
w4(R+4,u32(0x838980ull));
}
B56711e:{NFSU2_TR(0x56711e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567123ull));
TAIL_STATIC(0x54fdb0u,54f);
}
B567123:L567123:{c.instructions+=2;NFSU2_TR(0x567123);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567125:{NFSU2_TR(0x567125);
if(r1(R+518)){{goto L567168;}}
}
B567127:L567127:{c.instructions+=4;NFSU2_TR(0x567127);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567129:{NFSU2_TR(0x567129);
u8 U[4];
w4(U+0,u32(0x39dd714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56712e:{NFSU2_TR(0x56712e);
__builtin_memmove((R+4),(R+28),4);
}
B567130:{NFSU2_TR(0x567130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567135ull));
TAIL_STATIC(0x61b500u,61b);
}
B567135:L567135:{c.instructions+=2;NFSU2_TR(0x567135);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567137:{NFSU2_TR(0x567137);
if(r1(R+518)){{goto L567168;}}
}
B567139:L567139:{c.instructions+=3;NFSU2_TR(0x567139);
__builtin_memmove(gp(0x839bb8),(R+28),4);
}
B56713f:{NFSU2_TR(0x56713f);
s4(0x8389a0,u32(0x1ull));
}
B567149:{NFSU2_TR(0x567149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56714eull));
TAIL_STATIC(0x54f980u,54f);
}
B56714e:L56714e:{c.instructions+=2;NFSU2_TR(0x56714e);
__builtin_memmove((R+4),(R+0),4);
}
B567150:{NFSU2_TR(0x567150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567155ull));
TAIL_STATIC(0x55bd60u,55b);
}
B567155:L567155:{c.instructions+=8;NFSU2_TR(0x567155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567156:{NFSU2_TR(0x567156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567157:{NFSU2_TR(0x567157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567158:{NFSU2_TR(0x567158);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56715b:{NFSU2_TR(0x56715b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567162:{NFSU2_TR(0x567162);
__builtin_memmove((R+16),(R+20),4);
}
B567164:{NFSU2_TR(0x567164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567165:{NFSU2_TR(0x567165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567168:L567168:{c.instructions+=1;NFSU2_TR(0x567168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56716dull));
TAIL_STATIC(0x54f980u,54f);
}
B56716d:L56716d:{c.instructions+=2;NFSU2_TR(0x56716d);
__builtin_memmove((R+4),(R+0),4);
}
B56716f:{NFSU2_TR(0x56716f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567174ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B567174:L567174:{c.instructions+=8;NFSU2_TR(0x567174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567175:{NFSU2_TR(0x567175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567176:{NFSU2_TR(0x567176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567177:{NFSU2_TR(0x567177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56717a:{NFSU2_TR(0x56717a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567181:{NFSU2_TR(0x567181);
__builtin_memmove((R+16),(R+20),4);
}
B567183:{NFSU2_TR(0x567183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567184:{NFSU2_TR(0x567184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567187:L567187:{c.instructions+=4;NFSU2_TR(0x567187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567188:{NFSU2_TR(0x567188);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567189:{NFSU2_TR(0x567189);
w4(R+4,u32(0x838980ull));
}
B56718e:{NFSU2_TR(0x56718e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567193ull));
TAIL_STATIC(0x55c230u,55c);
}
B567193:L567193:{c.instructions+=3;NFSU2_TR(0x567193);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567194:{NFSU2_TR(0x567194);
w4(R+4,u32(0x838980ull));
}
B567199:{NFSU2_TR(0x567199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56719eull));
TAIL_STATIC(0x521280u,521);
}
B56719e:L56719e:{c.instructions+=1;NFSU2_TR(0x56719e);
TAIL_STATIC(0x566588u,566);
}
B5671a3:L5671a3:{c.instructions+=2;NFSU2_TR(0x5671a3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5671a8:{NFSU2_TR(0x5671a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B5671ae:L5671ae:{c.instructions+=3;NFSU2_TR(0x5671ae);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5671b0:{NFSU2_TR(0x5671b0);
__builtin_memmove((R+4),(R+24),4);
}
B5671b2:{NFSU2_TR(0x5671b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5671b7ull));
TAIL_STATIC(0x55eba0u,55e);
}
B5671b7:L5671b7:{c.instructions+=8;NFSU2_TR(0x5671b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5671b8:{NFSU2_TR(0x5671b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5671b9:{NFSU2_TR(0x5671b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5671ba:{NFSU2_TR(0x5671ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5671bd:{NFSU2_TR(0x5671bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5671c4:{NFSU2_TR(0x5671c4);
__builtin_memmove((R+16),(R+20),4);
}
B5671c6:{NFSU2_TR(0x5671c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5671c7:{NFSU2_TR(0x5671c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5671ca:L5671ca:{c.instructions+=3;NFSU2_TR(0x5671ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5671d0:{NFSU2_TR(0x5671d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5671d2:{NFSU2_TR(0x5671d2);
if(r1(R+518)){{goto L5671db;}}
}
B5671d4:L5671d4:{c.instructions+=2;NFSU2_TR(0x5671d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5671d6:{NFSU2_TR(0x5671d6);
TAIL_STATIC(0x566598u,566);
}
B5671db:L5671db:{c.instructions+=3;NFSU2_TR(0x5671db);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B5671e0:{NFSU2_TR(0x5671e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5671e2:{NFSU2_TR(0x5671e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567286;}}
}
B5671e8:L5671e8:{c.instructions+=3;NFSU2_TR(0x5671e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5671ee:{NFSU2_TR(0x5671ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5671f0:{NFSU2_TR(0x5671f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567286;}}
}
B5671f6:L5671f6:{c.instructions+=3;NFSU2_TR(0x5671f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5671fc:{NFSU2_TR(0x5671fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5671fe:{NFSU2_TR(0x5671fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567286;}}
}
B567204:L567204:{c.instructions+=2;NFSU2_TR(0x567204);
__builtin_memmove((R+4),(R+24),4);
}
B567206:{NFSU2_TR(0x567206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56720bull));
TAIL_STATIC(0x53a2b0u,53a);
}
B56720b:L56720b:{c.instructions+=11;NFSU2_TR(0x56720b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56720e:{NFSU2_TR(0x56720e);
u8 U[4];
w4(U+0,u32(0xd76e0b5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567213:{NFSU2_TR(0x567213);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567215:{NFSU2_TR(0x567215);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56721a:{NFSU2_TR(0x56721a);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56721f:{NFSU2_TR(0x56721f);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567224:{NFSU2_TR(0x567224);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567229:{NFSU2_TR(0x567229);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56722e:{NFSU2_TR(0x56722e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567233:{NFSU2_TR(0x567233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567234:{NFSU2_TR(0x567234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567239ull));
TAIL_STATIC(0x558790u,558);
}
B567239:L567239:{c.instructions+=7;NFSU2_TR(0x567239);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B56723c:{NFSU2_TR(0x56723c);
s4(0x838970,u32(0x1fab5998ull));
}
B567246:{NFSU2_TR(0x567246);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B567249:{NFSU2_TR(0x567249);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567250:{NFSU2_TR(0x567250);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567252:{NFSU2_TR(0x567252);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567256:{NFSU2_TR(0x567256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56725bull));
TAIL_STATIC(0x52eb90u,52e);
}
B56725b:L56725b:{c.instructions+=2;NFSU2_TR(0x56725b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56725d:{NFSU2_TR(0x56725d);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567262:L567262:{c.instructions+=4;NFSU2_TR(0x567262);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567265:{NFSU2_TR(0x567265);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56726a:{NFSU2_TR(0x56726a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56726b:{NFSU2_TR(0x56726b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567270ull));
TAIL_STATIC(0x537c00u,537);
}
B567270:L567270:{c.instructions+=9;NFSU2_TR(0x567270);
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
B567273:{NFSU2_TR(0x567273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567274:{NFSU2_TR(0x567274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567275:{NFSU2_TR(0x567275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567276:{NFSU2_TR(0x567276);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567279:{NFSU2_TR(0x567279);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567280:{NFSU2_TR(0x567280);
__builtin_memmove((R+16),(R+20),4);
}
B567282:{NFSU2_TR(0x567282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567283:{NFSU2_TR(0x567283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567286:L567286:{c.instructions+=3;NFSU2_TR(0x567286);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56728c:{NFSU2_TR(0x56728c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56728e:{NFSU2_TR(0x56728e);
if(r1(R+518)){{goto L5672a0;}}
}
B567290:L567290:{c.instructions+=3;NFSU2_TR(0x567290);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567297:{NFSU2_TR(0x567297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56729e:{NFSU2_TR(0x56729e);
{goto L5672c1;}
}
B5672a0:L5672a0:{c.instructions+=3;NFSU2_TR(0x5672a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5672a6:{NFSU2_TR(0x5672a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5672a8:{NFSU2_TR(0x5672a8);
if(r1(R+518)){{goto L5672ba;}}
}
B5672aa:L5672aa:{c.instructions+=3;NFSU2_TR(0x5672aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5672b1:{NFSU2_TR(0x5672b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5672b8:{NFSU2_TR(0x5672b8);
{goto L5672c1;}
}
B5672ba:L5672ba:{c.instructions+=1;NFSU2_TR(0x5672ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5672c1:L5672c1:{c.instructions+=4;NFSU2_TR(0x5672c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5672c4:{NFSU2_TR(0x5672c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672c6:{NFSU2_TR(0x5672c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5672ca:{NFSU2_TR(0x5672ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5672cfull));
TAIL_STATIC(0x52eb90u,52e);
}
B5672cf:L5672cf:{c.instructions+=5;NFSU2_TR(0x5672cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5672d2:{NFSU2_TR(0x5672d2);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672d7:{NFSU2_TR(0x5672d7);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672dc:{NFSU2_TR(0x5672dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672dd:{NFSU2_TR(0x5672dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5672e2ull));
TAIL_STATIC(0x537d40u,537);
}
B5672e2:L5672e2:{c.instructions+=3;NFSU2_TR(0x5672e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5672e5:{NFSU2_TR(0x5672e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5672e7:{NFSU2_TR(0x5672e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567301;}}
}
B5672e9:L5672e9:{c.instructions+=6;NFSU2_TR(0x5672e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5672ec:{NFSU2_TR(0x5672ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672ee:{NFSU2_TR(0x5672ee);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672f3:{NFSU2_TR(0x5672f3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672f8:{NFSU2_TR(0x5672f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5672f9:{NFSU2_TR(0x5672f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5672feull));
TAIL_STATIC(0x537c60u,537);
}
B5672fe:L5672fe:{c.instructions+=1;NFSU2_TR(0x5672fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B567301:L567301:{c.instructions+=6;NFSU2_TR(0x567301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567304:{NFSU2_TR(0x567304);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567305:{NFSU2_TR(0x567305);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567307:{NFSU2_TR(0x567307);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56730e:{NFSU2_TR(0x56730e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567315:{NFSU2_TR(0x567315);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56731aull));
TAIL_STATIC(0x51de30u,51d);
}
B56731a:L56731a:{c.instructions+=1;NFSU2_TR(0x56731a);
{goto L567854;}
}
B56731f:L56731f:{c.instructions+=2;NFSU2_TR(0x56731f);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb4edeb6dull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567324:{NFSU2_TR(0x567324);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L567551;}}
}
B56732a:L56732a:{c.instructions+=1;NFSU2_TR(0x56732a);
if(r1(R+518)){{goto L5674c8;}}
}
B567330:L567330:{c.instructions+=2;NFSU2_TR(0x567330);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567335:{NFSU2_TR(0x567335);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5674bd;}}
}
B56733b:L56733b:{c.instructions+=1;NFSU2_TR(0x56733b);
if(r1(R+518)){{goto L567387;}}
}
B56733d:L56733d:{c.instructions+=2;NFSU2_TR(0x56733d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567342:{NFSU2_TR(0x567342);
if(r1(R+518)){{goto L56736b;}}
}
B567344:L567344:{c.instructions+=2;NFSU2_TR(0x567344);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567349:{NFSU2_TR(0x567349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B56734f:L56734f:{c.instructions+=3;NFSU2_TR(0x56734f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567351:{NFSU2_TR(0x567351);
__builtin_memmove((R+4),(R+24),4);
}
B567353:{NFSU2_TR(0x567353);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567358ull));
TAIL_STATIC(0x54f9f0u,54f);
}
B567358:L567358:{c.instructions+=8;NFSU2_TR(0x567358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567359:{NFSU2_TR(0x567359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B56735a:{NFSU2_TR(0x56735a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56735b:{NFSU2_TR(0x56735b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56735e:{NFSU2_TR(0x56735e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567365:{NFSU2_TR(0x567365);
__builtin_memmove((R+16),(R+20),4);
}
B567367:{NFSU2_TR(0x567367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567368:{NFSU2_TR(0x567368);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B56736b:L56736b:{c.instructions+=3;NFSU2_TR(0x56736b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56736d:{NFSU2_TR(0x56736d);
__builtin_memmove((R+4),(R+24),4);
}
B56736f:{NFSU2_TR(0x56736f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567374ull));
TAIL_STATIC(0x55eba0u,55e);
}
B567374:L567374:{c.instructions+=8;NFSU2_TR(0x567374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567375:{NFSU2_TR(0x567375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567376:{NFSU2_TR(0x567376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567377:{NFSU2_TR(0x567377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56737a:{NFSU2_TR(0x56737a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567381:{NFSU2_TR(0x567381);
__builtin_memmove((R+16),(R+20),4);
}
B567383:{NFSU2_TR(0x567383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567384:{NFSU2_TR(0x567384);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567387:L567387:{c.instructions+=2;NFSU2_TR(0x567387);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56738d:{NFSU2_TR(0x56738d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567392ull));
TAIL_STATIC(0x538130u,538);
}
B567392:L567392:{c.instructions+=4;NFSU2_TR(0x567392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567398:{NFSU2_TR(0x567398);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((R+4),(U+0),4);
}
B56739b:{NFSU2_TR(0x56739b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B56739e:{NFSU2_TR(0x56739e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5673f6;}}
}
B5673a0:L5673a0:{c.instructions+=2;NFSU2_TR(0x5673a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x567894ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B5673a7:{NFSU2_TR(0x5673a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x567884ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5673ae:L5673ae:{c.instructions+=3;NFSU2_TR(0x5673ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5673af:{NFSU2_TR(0x5673af);
__builtin_memmove((R+4),(R+24),4);
}
B5673b1:{NFSU2_TR(0x5673b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5673b6ull));
TAIL_STATIC(0x54f9f0u,54f);
}
B5673b6:L5673b6:{c.instructions+=1;NFSU2_TR(0x5673b6);
{goto L5673f6;}
}
B5673b8:L5673b8:{c.instructions+=4;NFSU2_TR(0x5673b8);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B5673bd:{NFSU2_TR(0x5673bd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5673bf:{NFSU2_TR(0x5673bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5673c1:{NFSU2_TR(0x5673c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5673f6;}}
}
B5673c3:L5673c3:{c.instructions+=3;NFSU2_TR(0x5673c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5673c5:{NFSU2_TR(0x5673c5);
__builtin_memmove((R+4),(R+24),4);
}
B5673c7:{NFSU2_TR(0x5673c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5673ccull));
TAIL_STATIC(0x54f9f0u,54f);
}
B5673cc:L5673cc:{c.instructions+=4;NFSU2_TR(0x5673cc);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B5673d1:{NFSU2_TR(0x5673d1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5673d2:{NFSU2_TR(0x5673d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5673d4:{NFSU2_TR(0x5673d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5673c3u);}goto L5673c3;}}
}
B5673d6:L5673d6:{c.instructions+=1;NFSU2_TR(0x5673d6);
{goto L5673f6;}
}
B5673d8:L5673d8:{c.instructions+=4;NFSU2_TR(0x5673d8);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B5673dd:{NFSU2_TR(0x5673dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5673df:{NFSU2_TR(0x5673df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5673e1:{NFSU2_TR(0x5673e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5673f6;}}
}
B5673e3:L5673e3:{c.instructions+=3;NFSU2_TR(0x5673e3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5673e5:{NFSU2_TR(0x5673e5);
__builtin_memmove((R+4),(R+24),4);
}
B5673e7:{NFSU2_TR(0x5673e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5673ecull));
TAIL_STATIC(0x54f9f0u,54f);
}
B5673ec:L5673ec:{c.instructions+=4;NFSU2_TR(0x5673ec);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B5673f1:{NFSU2_TR(0x5673f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5673f2:{NFSU2_TR(0x5673f2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5673f4:{NFSU2_TR(0x5673f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5673e3u);}goto L5673e3;}}
}
B5673f6:L5673f6:{c.instructions+=2;NFSU2_TR(0x5673f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5673fc:{NFSU2_TR(0x5673fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567401ull));
TAIL_STATIC(0x538130u,538);
}
B567401:L567401:{c.instructions+=6;NFSU2_TR(0x567401);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B567407:{NFSU2_TR(0x567407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56740d:{NFSU2_TR(0x56740d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B567413:{NFSU2_TR(0x567413);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B567415:{NFSU2_TR(0x567415);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B567418:{NFSU2_TR(0x567418);
if(r1(R+514)){{goto L567423;}}
}
B56741a:L56741a:{c.instructions+=3;NFSU2_TR(0x56741a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B56741c:{NFSU2_TR(0x56741c);
w4(R+4,u32(0x1ull));
}
B567421:{NFSU2_TR(0x567421);
{goto L567433;}
}
B567423:L567423:{c.instructions+=4;NFSU2_TR(0x567423);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B567429:{NFSU2_TR(0x567429);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B56742b:{NFSU2_TR(0x56742b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56742e:{NFSU2_TR(0x56742e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567433;}}
}
B567430:L567430:{c.instructions+=1;NFSU2_TR(0x567430);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B567433:L567433:{c.instructions+=3;NFSU2_TR(0x567433);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((R+0),(U+0),4);
}
B567436:{NFSU2_TR(0x567436);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567439:{NFSU2_TR(0x567439);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L567493;}}
}
B56743b:L56743b:{c.instructions+=2;NFSU2_TR(0x56743b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5678bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B567442:{NFSU2_TR(0x567442);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5678acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B567449:L567449:{c.instructions+=3;NFSU2_TR(0x567449);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56744a:{NFSU2_TR(0x56744a);
__builtin_memmove((R+4),(R+24),4);
}
B56744c:{NFSU2_TR(0x56744c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567451ull));
TAIL_STATIC(0x55eba0u,55e);
}
B567451:L567451:{c.instructions+=1;NFSU2_TR(0x567451);
{goto L567493;}
}
B567453:L567453:{c.instructions+=4;NFSU2_TR(0x567453);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B567458:{NFSU2_TR(0x567458);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56745a:{NFSU2_TR(0x56745a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56745c:{NFSU2_TR(0x56745c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L567493;}}
}
B56745e:L56745e:{c.instructions+=1;NFSU2_TR(0x56745e);
__builtin_memmove((R+28),(R+28),4);
}
B567460:L567460:{c.instructions+=3;NFSU2_TR(0x567460);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567462:{NFSU2_TR(0x567462);
__builtin_memmove((R+4),(R+24),4);
}
B567464:{NFSU2_TR(0x567464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567469ull));
TAIL_STATIC(0x55eba0u,55e);
}
B567469:L567469:{c.instructions+=4;NFSU2_TR(0x567469);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56746e:{NFSU2_TR(0x56746e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56746f:{NFSU2_TR(0x56746f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B567471:{NFSU2_TR(0x567471);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x567460u);}goto L567460;}}
}
B567473:L567473:{c.instructions+=1;NFSU2_TR(0x567473);
{goto L567493;}
}
B567475:L567475:{c.instructions+=4;NFSU2_TR(0x567475);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56747a:{NFSU2_TR(0x56747a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B56747c:{NFSU2_TR(0x56747c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B56747e:{NFSU2_TR(0x56747e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L567493;}}
}
B567480:L567480:{c.instructions+=3;NFSU2_TR(0x567480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567482:{NFSU2_TR(0x567482);
__builtin_memmove((R+4),(R+24),4);
}
B567484:{NFSU2_TR(0x567484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567489ull));
TAIL_STATIC(0x55eba0u,55e);
}
B567489:L567489:{c.instructions+=4;NFSU2_TR(0x567489);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B56748e:{NFSU2_TR(0x56748e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B56748f:{NFSU2_TR(0x56748f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B567491:{NFSU2_TR(0x567491);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x567480u);}goto L567480;}}
}
B567493:L567493:{c.instructions+=3;NFSU2_TR(0x567493);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567499:{NFSU2_TR(0x567499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56749a:{NFSU2_TR(0x56749a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56749full));
TAIL_STATIC(0x52d090u,52d);
}
B56749f:L56749f:{c.instructions+=3;NFSU2_TR(0x56749f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5674a2:{NFSU2_TR(0x5674a2);
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
B5674a4:{NFSU2_TR(0x5674a4);
if(r1(R+518)){{goto L567857;}}
}
B5674aa:L5674aa:{c.instructions+=4;NFSU2_TR(0x5674aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5674ad:{NFSU2_TR(0x5674ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5674ae:{NFSU2_TR(0x5674ae);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5674b3:{NFSU2_TR(0x5674b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5674b8ull));
TAIL_STATIC(0x55dda0u,55d);
}
B5674b8:L5674b8:{c.instructions+=1;NFSU2_TR(0x5674b8);
{goto L567854;}
}
B5674bd:L5674bd:{c.instructions+=2;NFSU2_TR(0x5674bd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb4623f67ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb4623f67ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb4623f67ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5674c2:{NFSU2_TR(0x5674c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B5674c8:L5674c8:{c.instructions+=3;NFSU2_TR(0x5674c8);
__builtin_memmove((R+8),gp(0x7fa1b8),4);
}
B5674ce:{NFSU2_TR(0x5674ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5674cf:{NFSU2_TR(0x5674cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5674d4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5674d4:L5674d4:{c.instructions+=3;NFSU2_TR(0x5674d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5674d7:{NFSU2_TR(0x5674d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5674d9:{NFSU2_TR(0x5674d9);
if(r1(R+518)){{goto L5674ec;}}
}
B5674db:L5674db:{c.instructions+=5;NFSU2_TR(0x5674db);
w4(R+4,u32(0xffull));
}
B5674e0:{NFSU2_TR(0x5674e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5674e3:{NFSU2_TR(0x5674e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5674e6:{NFSU2_TR(0x5674e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5674e9:{NFSU2_TR(0x5674e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5674ec:L5674ec:{c.instructions+=4;NFSU2_TR(0x5674ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5674ef:{NFSU2_TR(0x5674ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5674f1:{NFSU2_TR(0x5674f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5674f5:{NFSU2_TR(0x5674f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5674faull));
TAIL_STATIC(0x52eb90u,52e);
}
B5674fa:L5674fa:{c.instructions+=5;NFSU2_TR(0x5674fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567500:{NFSU2_TR(0x567500);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567502:{NFSU2_TR(0x567502);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567509:{NFSU2_TR(0x567509);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56750b:{NFSU2_TR(0x56750b);
if(r1(R+518)){{goto L567547;}}
}
B56750d:L56750d:{c.instructions+=3;NFSU2_TR(0x56750d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B567513:{NFSU2_TR(0x567513);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567517:{NFSU2_TR(0x567517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56751cull));
TAIL_STATIC(0x52eb90u,52e);
}
B56751c:L56751c:{c.instructions+=6;NFSU2_TR(0x56751c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56751f:{NFSU2_TR(0x56751f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567521:{NFSU2_TR(0x567521);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567526:{NFSU2_TR(0x567526);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56752b:{NFSU2_TR(0x56752b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56752c:{NFSU2_TR(0x56752c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567531ull));
TAIL_STATIC(0x537c00u,537);
}
B567531:L567531:{c.instructions+=9;NFSU2_TR(0x567531);
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
B567534:{NFSU2_TR(0x567534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567535:{NFSU2_TR(0x567535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567536:{NFSU2_TR(0x567536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567537:{NFSU2_TR(0x567537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56753a:{NFSU2_TR(0x56753a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567541:{NFSU2_TR(0x567541);
__builtin_memmove((R+16),(R+20),4);
}
B567543:{NFSU2_TR(0x567543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567544:{NFSU2_TR(0x567544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567547:L567547:{c.instructions+=2;NFSU2_TR(0x567547);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56754c:{NFSU2_TR(0x56754c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x567262u);}goto L567262;}
}
B567551:L567551:{c.instructions+=2;NFSU2_TR(0x567551);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xd05fc3a3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567556:{NFSU2_TR(0x567556);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L567711;}}
}
B56755c:L56755c:{c.instructions+=1;NFSU2_TR(0x56755c);
if(r1(R+518)){{goto L5676ee;}}
}
B567562:L567562:{c.instructions+=2;NFSU2_TR(0x567562);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567567:{NFSU2_TR(0x567567);
if(r1(R+518)){{goto L5676d2;}}
}
B56756d:L56756d:{c.instructions+=2;NFSU2_TR(0x56756d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567572:{NFSU2_TR(0x567572);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B567578:L567578:{c.instructions+=3;NFSU2_TR(0x567578);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56757e:{NFSU2_TR(0x56757e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567580:{NFSU2_TR(0x567580);
if(r1(R+518)){{goto L567618;}}
}
B567586:L567586:{c.instructions+=8;NFSU2_TR(0x567586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567589:{NFSU2_TR(0x567589);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56758b:{NFSU2_TR(0x56758b);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567590:{NFSU2_TR(0x567590);
u8 U[4];
w4(U+0,u32(0x4a1316e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567595:{NFSU2_TR(0x567595);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567596:{NFSU2_TR(0x567596);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56759d:{NFSU2_TR(0x56759d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5675a4:{NFSU2_TR(0x5675a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5675a9ull));
TAIL_STATIC(0x537c00u,537);
}
B5675a9:L5675a9:{c.instructions+=6;NFSU2_TR(0x5675a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5675ac:{NFSU2_TR(0x5675ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675ae:{NFSU2_TR(0x5675ae);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675b3:{NFSU2_TR(0x5675b3);
u8 U[4];
w4(U+0,u32(0x884fba76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675b8:{NFSU2_TR(0x5675b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675b9:{NFSU2_TR(0x5675b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5675beull));
TAIL_STATIC(0x537c00u,537);
}
B5675be:L5675be:{c.instructions+=6;NFSU2_TR(0x5675be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5675c1:{NFSU2_TR(0x5675c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675c3:{NFSU2_TR(0x5675c3);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675c8:{NFSU2_TR(0x5675c8);
u8 U[4];
w4(U+0,u32(0x640f0f23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675cd:{NFSU2_TR(0x5675cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675ce:{NFSU2_TR(0x5675ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5675d3ull));
TAIL_STATIC(0x537c00u,537);
}
B5675d3:L5675d3:{c.instructions+=6;NFSU2_TR(0x5675d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5675d6:{NFSU2_TR(0x5675d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675d8:{NFSU2_TR(0x5675d8);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675dd:{NFSU2_TR(0x5675dd);
u8 U[4];
w4(U+0,u32(0x640f0f22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675e2:{NFSU2_TR(0x5675e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675e3:{NFSU2_TR(0x5675e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5675e8ull));
TAIL_STATIC(0x537c00u,537);
}
B5675e8:L5675e8:{c.instructions+=7;NFSU2_TR(0x5675e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5675eb:{NFSU2_TR(0x5675eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5675ee:{NFSU2_TR(0x5675ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675f0:{NFSU2_TR(0x5675f0);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675f5:{NFSU2_TR(0x5675f5);
u8 U[4];
w4(U+0,u32(0xf31e8ed3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675fa:{NFSU2_TR(0x5675fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5675fb:{NFSU2_TR(0x5675fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567600ull));
TAIL_STATIC(0x537c00u,537);
}
B567600:L567600:{c.instructions+=6;NFSU2_TR(0x567600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567603:{NFSU2_TR(0x567603);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567605:{NFSU2_TR(0x567605);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56760a:{NFSU2_TR(0x56760a);
u8 U[4];
w4(U+0,u32(0xd82b4a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56760f:{NFSU2_TR(0x56760f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567610:{NFSU2_TR(0x567610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567615ull));
TAIL_STATIC(0x537c00u,537);
}
B567615:L567615:{c.instructions+=1;NFSU2_TR(0x567615);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B567618:L567618:{c.instructions+=3;NFSU2_TR(0x567618);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56761e:{NFSU2_TR(0x56761e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567620:{NFSU2_TR(0x567620);
if(r1(R+518)){{goto L567635;}}
}
B567622:L567622:{c.instructions+=2;NFSU2_TR(0x567622);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B567625:{NFSU2_TR(0x567625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56762aull));
TAIL_STATIC(0x538760u,538);
}
B56762a:L56762a:{c.instructions+=2;NFSU2_TR(0x56762a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B567630:{NFSU2_TR(0x567630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567635ull));
TAIL_STATIC(0x538760u,538);
}
B567635:L567635:{c.instructions+=3;NFSU2_TR(0x567635);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56763b:{NFSU2_TR(0x56763b);
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
B56763d:{NFSU2_TR(0x56763d);
if(r1(R+518)){{goto L567857;}}
}
B567643:L567643:{c.instructions+=10;NFSU2_TR(0x567643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567649:{NFSU2_TR(0x567649);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B56764f:{NFSU2_TR(0x56764f);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B567651:{NFSU2_TR(0x567651);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567654:{NFSU2_TR(0x567654);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B567657:{NFSU2_TR(0x567657);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B56765d:{NFSU2_TR(0x56765d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B567663:{NFSU2_TR(0x567663);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B567665:{NFSU2_TR(0x567665);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B567668:{NFSU2_TR(0x567668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B56766e:L56766e:{c.instructions+=4;NFSU2_TR(0x56766e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567671:{NFSU2_TR(0x567671);
__builtin_memmove((R+4),(R+24),4);
}
B567673:{NFSU2_TR(0x567673);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56767a:{NFSU2_TR(0x56767a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56767full));
TAIL_STATIC(0x50e510u,50e);
}
B56767f:L56767f:{c.instructions+=3;NFSU2_TR(0x56767f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B567685:{NFSU2_TR(0x567685);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567687:{NFSU2_TR(0x567687);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5676c0;}}
}
B567689:L567689:{c.instructions+=2;NFSU2_TR(0x567689);
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
B56768b:{NFSU2_TR(0x56768b);
if(r1(R+518)){{goto L567857;}}
}
B567691:L567691:{c.instructions+=3;NFSU2_TR(0x567691);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567694:{NFSU2_TR(0x567694);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567697:{NFSU2_TR(0x567697);
if(r1(R+518)){{goto L5676c0;}}
}
B567699:L567699:{c.instructions+=2;NFSU2_TR(0x567699);
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
B56769b:{NFSU2_TR(0x56769b);
if(r1(R+518)){{goto L567857;}}
}
B5676a1:L5676a1:{c.instructions+=5;NFSU2_TR(0x5676a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5676a4:{NFSU2_TR(0x5676a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676a5:{NFSU2_TR(0x5676a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676a6:{NFSU2_TR(0x5676a6);
__builtin_memmove((R+4),(R+24),4);
}
B5676a8:{NFSU2_TR(0x5676a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5676adull));
TAIL_STATIC(0x50e580u,50e);
}
B5676ad:L5676ad:{c.instructions+=8;NFSU2_TR(0x5676ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5676ae:{NFSU2_TR(0x5676ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5676af:{NFSU2_TR(0x5676af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5676b0:{NFSU2_TR(0x5676b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5676b3:{NFSU2_TR(0x5676b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5676ba:{NFSU2_TR(0x5676ba);
__builtin_memmove((R+16),(R+20),4);
}
B5676bc:{NFSU2_TR(0x5676bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5676bd:{NFSU2_TR(0x5676bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5676c0:L5676c0:{c.instructions+=5;NFSU2_TR(0x5676c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676c2:{NFSU2_TR(0x5676c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676c4:{NFSU2_TR(0x5676c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676c6:{NFSU2_TR(0x5676c6);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676c8:{NFSU2_TR(0x5676c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5676cdull));
TAIL_STATIC(0x4c2100u,4c2);
}
B5676cd:L5676cd:{c.instructions+=1;NFSU2_TR(0x5676cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x567270u);}goto L567270;}
}
B5676d2:L5676d2:{c.instructions+=3;NFSU2_TR(0x5676d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676d4:{NFSU2_TR(0x5676d4);
__builtin_memmove((R+4),(R+24),4);
}
B5676d6:{NFSU2_TR(0x5676d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5676dbull));
TAIL_STATIC(0x54f9f0u,54f);
}
B5676db:L5676db:{c.instructions+=8;NFSU2_TR(0x5676db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5676dc:{NFSU2_TR(0x5676dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5676dd:{NFSU2_TR(0x5676dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5676de:{NFSU2_TR(0x5676de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5676e1:{NFSU2_TR(0x5676e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5676e8:{NFSU2_TR(0x5676e8);
__builtin_memmove((R+16),(R+20),4);
}
B5676ea:{NFSU2_TR(0x5676ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5676eb:{NFSU2_TR(0x5676eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5676ee:L5676ee:{c.instructions+=4;NFSU2_TR(0x5676ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5676f1:{NFSU2_TR(0x5676f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5676f2:{NFSU2_TR(0x5676f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5676f9:{NFSU2_TR(0x5676f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5676feull));
TAIL_STATIC(0x50d2a0u,50d);
}
B5676fe:L5676fe:{c.instructions+=4;NFSU2_TR(0x5676fe);
__builtin_memmove(gp(0x83a9d8),(R+0),4);
}
B567703:{NFSU2_TR(0x567703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567706:{NFSU2_TR(0x567706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567707:{NFSU2_TR(0x567707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56770cull));
TAIL_STATIC(0x552c80u,552);
}
B56770c:L56770c:{c.instructions+=1;NFSU2_TR(0x56770c);
{goto L567854;}
}
B567711:L567711:{c.instructions+=2;NFSU2_TR(0x567711);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567716:{NFSU2_TR(0x567716);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567857;}}
}
B56771c:L56771c:{c.instructions+=3;NFSU2_TR(0x56771c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1daull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567722:{NFSU2_TR(0x567722);
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
B567724:{NFSU2_TR(0x567724);
if(r1(R+518)){{goto L567740;}}
}
B567726:L567726:{c.instructions+=9;NFSU2_TR(0x567726);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567727:{NFSU2_TR(0x567727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567728:{NFSU2_TR(0x567728);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1daull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56772f:{NFSU2_TR(0x56772f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567730:{NFSU2_TR(0x567730);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567733:{NFSU2_TR(0x567733);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56773a:{NFSU2_TR(0x56773a);
__builtin_memmove((R+16),(R+20),4);
}
B56773c:{NFSU2_TR(0x56773c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B56773d:{NFSU2_TR(0x56773d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567740:L567740:{c.instructions+=3;NFSU2_TR(0x567740);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B567745:{NFSU2_TR(0x567745);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B567747:{NFSU2_TR(0x567747);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567775;}}
}
B567749:L567749:{c.instructions+=3;NFSU2_TR(0x567749);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56774f:{NFSU2_TR(0x56774f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567751:{NFSU2_TR(0x567751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567775;}}
}
B567753:L567753:{c.instructions+=3;NFSU2_TR(0x567753);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567759:{NFSU2_TR(0x567759);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56775b:{NFSU2_TR(0x56775b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567775;}}
}
B56775d:L56775d:{c.instructions+=3;NFSU2_TR(0x56775d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567763:{NFSU2_TR(0x567763);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567765:{NFSU2_TR(0x567765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L56777f;}}
}
B567767:L567767:{c.instructions+=3;NFSU2_TR(0x567767);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56776d:{NFSU2_TR(0x56776d);
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
B56776f:{NFSU2_TR(0x56776f);
if(r1(R+518)){{goto L567857;}}
}
B567775:L567775:{c.instructions+=3;NFSU2_TR(0x567775);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B56777b:{NFSU2_TR(0x56777b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B56777d:{NFSU2_TR(0x56777d);
if(r1(R+518)){{goto L567790;}}
}
B56777f:L56777f:{c.instructions+=1;NFSU2_TR(0x56777f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567784ull));
TAIL_STATIC(0x54f980u,54f);
}
B567784:L567784:{c.instructions+=2;NFSU2_TR(0x567784);
__builtin_memmove((R+4),(R+0),4);
}
B567786:{NFSU2_TR(0x567786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56778bull));
TAIL_STATIC(0x55bd60u,55b);
}
B56778b:L56778b:{c.instructions+=1;NFSU2_TR(0x56778b);
{goto L56784b;}
}
B567790:L567790:{c.instructions+=3;NFSU2_TR(0x567790);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567796:{NFSU2_TR(0x567796);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567798:{NFSU2_TR(0x567798);
if(r1(R+518)){{goto L5677d2;}}
}
B56779a:L56779a:{c.instructions+=6;NFSU2_TR(0x56779a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56779d:{NFSU2_TR(0x56779d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56779f:{NFSU2_TR(0x56779f);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677a4:{NFSU2_TR(0x5677a4);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677a9:{NFSU2_TR(0x5677a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677aa:{NFSU2_TR(0x5677aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5677afull));
TAIL_STATIC(0x537c00u,537);
}
B5677af:L5677af:{c.instructions+=7;NFSU2_TR(0x5677af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5677b2:{NFSU2_TR(0x5677b2);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677b4:{NFSU2_TR(0x5677b4);
__builtin_memmove((R+4),(R+24),4);
}
B5677b6:{NFSU2_TR(0x5677b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5677ba:{NFSU2_TR(0x5677ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5677c1:{NFSU2_TR(0x5677c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5677c8:{NFSU2_TR(0x5677c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5677cdull));
TAIL_STATIC(0x545d30u,545);
}
B5677cd:L5677cd:{c.instructions+=1;NFSU2_TR(0x5677cd);
{goto L56784b;}
}
B5677d2:L5677d2:{c.instructions+=3;NFSU2_TR(0x5677d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5677d8:{NFSU2_TR(0x5677d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5677da:{NFSU2_TR(0x5677da);
if(r1(R+518)){{goto L567827;}}
}
B5677dc:L5677dc:{c.instructions+=6;NFSU2_TR(0x5677dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5677df:{NFSU2_TR(0x5677df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677e1:{NFSU2_TR(0x5677e1);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677e6:{NFSU2_TR(0x5677e6);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677eb:{NFSU2_TR(0x5677eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5677ec:{NFSU2_TR(0x5677ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5677f1ull));
TAIL_STATIC(0x537c00u,537);
}
B5677f1:L5677f1:{c.instructions+=6;NFSU2_TR(0x5677f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5677f4:{NFSU2_TR(0x5677f4);
w4(R+4,u32(0x838980ull));
}
B5677f9:{NFSU2_TR(0x5677f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5677fd:{NFSU2_TR(0x5677fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567804:{NFSU2_TR(0x567804);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56780b:{NFSU2_TR(0x56780b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567810ull));
TAIL_STATIC(0x55c460u,55c);
}
B567810:L567810:{c.instructions+=4;NFSU2_TR(0x567810);
__builtin_memmove((R+4),(R+24),4);
}
B567812:{NFSU2_TR(0x567812);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567819:{NFSU2_TR(0x567819);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567820:{NFSU2_TR(0x567820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567825ull));
TAIL_STATIC(0x54fae0u,54f);
}
B567825:L567825:{c.instructions+=1;NFSU2_TR(0x567825);
{goto L56784b;}
}
B567827:L567827:{c.instructions+=2;NFSU2_TR(0x567827);
w4(R+4,u32(0x838980ull));
}
B56782c:{NFSU2_TR(0x56782c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567831ull));
TAIL_STATIC(0x55c460u,55c);
}
B567831:L567831:{c.instructions+=4;NFSU2_TR(0x567831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567834:{NFSU2_TR(0x567834);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567836:{NFSU2_TR(0x567836);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567837:{NFSU2_TR(0x567837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56783cull));
TAIL_STATIC(0x50b8c0u,50b);
}
B56783c:L56783c:{c.instructions+=2;NFSU2_TR(0x56783c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B56783f:{NFSU2_TR(0x56783f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567844ull));
TAIL_STATIC(0x54f980u,54f);
}
B567844:L567844:{c.instructions+=2;NFSU2_TR(0x567844);
__builtin_memmove((R+4),(R+0),4);
}
B567846:{NFSU2_TR(0x567846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56784bull));
TAIL_STATIC(0x55bdf0u,55b);
}
B56784b:L56784b:{c.instructions+=3;NFSU2_TR(0x56784b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56784d:{NFSU2_TR(0x56784d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56784f:{NFSU2_TR(0x56784f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567854ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B567854:L567854:{c.instructions+=1;NFSU2_TR(0x567854);
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
B567857:L567857:{c.instructions+=8;NFSU2_TR(0x567857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567858:{NFSU2_TR(0x567858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567859:{NFSU2_TR(0x567859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56785c:{NFSU2_TR(0x56785c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B56785d:{NFSU2_TR(0x56785d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567864:{NFSU2_TR(0x567864);
__builtin_memmove((R+16),(R+20),4);
}
B567866:{NFSU2_TR(0x567866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567867:{NFSU2_TR(0x567867);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5678e0:L5678e0:{c.instructions+=14;NFSU2_TR(0x5678e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678e2:{NFSU2_TR(0x5678e2);
u8 U[4];
w4(U+0,u32(0x778576ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678e7:{NFSU2_TR(0x5678e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5678ed:{NFSU2_TR(0x5678ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678ee:{NFSU2_TR(0x5678ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5678f5:{NFSU2_TR(0x5678f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678f6:{NFSU2_TR(0x5678f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678f7:{NFSU2_TR(0x5678f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678f8:{NFSU2_TR(0x5678f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5678f9:{NFSU2_TR(0x5678f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5678fd:{NFSU2_TR(0x5678fd);
__builtin_memmove((R+24),(R+4),4);
}
B5678ff:{NFSU2_TR(0x5678ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567900:{NFSU2_TR(0x567900);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567904:{NFSU2_TR(0x567904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567909ull));
TAIL_STATIC(0x552330u,552);
}
B567909:L567909:{c.instructions+=12;NFSU2_TR(0x567909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56790c:{NFSU2_TR(0x56790c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567911:{NFSU2_TR(0x567911);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567916:{NFSU2_TR(0x567916);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567918:{NFSU2_TR(0x567918);
u8 U[4];
w4(U+0,u32(0x79caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56791d:{NFSU2_TR(0x56791d);
u8 U[4];
w4(U+0,u32(0x797f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567922:{NFSU2_TR(0x567922);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B567924:{NFSU2_TR(0x567924);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567925:{NFSU2_TR(0x567925);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56792b:{NFSU2_TR(0x56792b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56792f:{NFSU2_TR(0x56792f);
u8 U[4];
w4(U+0,u32(0x79d874ull));
s4(u32(r4(R+24)),r4(U+0));
}
B567935:{NFSU2_TR(0x567935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56793aull));
TAIL_STATIC(0x5435d0u,543);
}
B56793a:L56793a:{c.instructions+=9;NFSU2_TR(0x56793a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B56793d:{NFSU2_TR(0x56793d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56793e:{NFSU2_TR(0x56793e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B56793f:{NFSU2_TR(0x56793f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567941:{NFSU2_TR(0x567941);
u8 U[4];
w4(U+0,u32(0x78f814ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567946:{NFSU2_TR(0x567946);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567947:{NFSU2_TR(0x567947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B56794d:{NFSU2_TR(0x56794d);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567952:{NFSU2_TR(0x567952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567957ull));
TAIL_STATIC(0x542ac0u,542);
}
B567957:L567957:{c.instructions+=11;NFSU2_TR(0x567957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B56795d:{NFSU2_TR(0x56795d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567963:{NFSU2_TR(0x567963);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B567969:{NFSU2_TR(0x567969);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B56796c:{NFSU2_TR(0x56796c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B567972:{NFSU2_TR(0x567972);
__builtin_memmove((R+4),(R+24),4);
}
B567974:{NFSU2_TR(0x567974);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B56797b:{NFSU2_TR(0x56797b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B567981:{NFSU2_TR(0x567981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B56798b:{NFSU2_TR(0x56798b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
w4(U+4,u32(0x41a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B567995:{NFSU2_TR(0x567995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x56799aull));
TAIL_STATIC(0x55f340u,55f);
}
B56799a:L56799a:{c.instructions+=4;NFSU2_TR(0x56799a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B56799d:{NFSU2_TR(0x56799d);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679a2:{NFSU2_TR(0x5679a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679a3:{NFSU2_TR(0x5679a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5679a8ull));
TAIL_STATIC(0x4954e0u,495);
}
B5679a8:L5679a8:{c.instructions+=4;NFSU2_TR(0x5679a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5679ab:{NFSU2_TR(0x5679ab);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679b0:{NFSU2_TR(0x5679b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679b1:{NFSU2_TR(0x5679b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5679b6ull));
TAIL_STATIC(0x4954e0u,495);
}
B5679b6:L5679b6:{c.instructions+=9;NFSU2_TR(0x5679b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5679ba:{NFSU2_TR(0x5679ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5679bd:{NFSU2_TR(0x5679bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5679be:{NFSU2_TR(0x5679be);
__builtin_memmove((R+0),(R+24),4);
}
B5679c0:{NFSU2_TR(0x5679c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5679c1:{NFSU2_TR(0x5679c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5679c2:{NFSU2_TR(0x5679c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5679c9:{NFSU2_TR(0x5679c9);
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
B5679cc:{NFSU2_TR(0x5679cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5679d0:L5679d0:{c.instructions+=3;NFSU2_TR(0x5679d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679d1:{NFSU2_TR(0x5679d1);
__builtin_memmove((R+24),(R+4),4);
}
B5679d3:{NFSU2_TR(0x5679d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5679d8ull));
{goto L5679f0;}
}
B5679d8:L5679d8:{c.instructions+=2;NFSU2_TR(0x5679d8);
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
B5679dd:{NFSU2_TR(0x5679dd);
if(r1(R+518)){{goto L5679e8;}}
}
B5679df:L5679df:{c.instructions+=2;NFSU2_TR(0x5679df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679e0:{NFSU2_TR(0x5679e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5679e5ull));
TAIL_STATIC(0x575630u,575);
}
B5679e5:L5679e5:{c.instructions+=1;NFSU2_TR(0x5679e5);
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
B5679e8:L5679e8:{c.instructions+=3;NFSU2_TR(0x5679e8);
__builtin_memmove((R+0),(R+24),4);
}
B5679ea:{NFSU2_TR(0x5679ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5679eb:{NFSU2_TR(0x5679eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5679f0:L5679f0:{c.instructions+=13;NFSU2_TR(0x5679f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679f2:{NFSU2_TR(0x5679f2);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679f7:{NFSU2_TR(0x5679f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5679fd:{NFSU2_TR(0x5679fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5679fe:{NFSU2_TR(0x5679fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567a05:{NFSU2_TR(0x567a05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a06:{NFSU2_TR(0x567a06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a07:{NFSU2_TR(0x567a07);
__builtin_memmove((R+24),(R+4),4);
}
B567a09:{NFSU2_TR(0x567a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567a0d:{NFSU2_TR(0x567a0d);
u8 U[4];
w4(U+0,u32(0x79d874ull));
s4(u32(r4(R+24)),r4(U+0));
}
B567a13:{NFSU2_TR(0x567a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B567a19:{NFSU2_TR(0x567a19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B567a21:{NFSU2_TR(0x567a21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567a26ull));
TAIL_STATIC(0x52ea90u,52e);
}
B567a26:L567a26:{c.instructions+=3;NFSU2_TR(0x567a26);
__builtin_memmove((R+4),(R+24),4);
}
B567a28:{NFSU2_TR(0x567a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B567a30:{NFSU2_TR(0x567a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567a35ull));
TAIL_STATIC(0x4defb0u,4de);
}
B567a35:L567a35:{c.instructions+=5;NFSU2_TR(0x567a35);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567a39:{NFSU2_TR(0x567a39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567a3a:{NFSU2_TR(0x567a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567a41:{NFSU2_TR(0x567a41);
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
B567a44:{NFSU2_TR(0x567a44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567a50:L567a50:{c.instructions+=10;NFSU2_TR(0x567a50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a51:{NFSU2_TR(0x567a51);
__builtin_memmove((R+20),(R+16),4);
}
B567a53:{NFSU2_TR(0x567a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B567a56:{NFSU2_TR(0x567a56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a57:{NFSU2_TR(0x567a57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a58:{NFSU2_TR(0x567a58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a59:{NFSU2_TR(0x567a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567a5c:{NFSU2_TR(0x567a5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567a62:{NFSU2_TR(0x567a62);
__builtin_memmove((R+24),(R+4),4);
}
B567a64:{NFSU2_TR(0x567a64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567b08;}}
}
B567a6a:L567a6a:{c.instructions+=3;NFSU2_TR(0x567a6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567a70:{NFSU2_TR(0x567a70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567a72:{NFSU2_TR(0x567a72);
if(r1(R+518)){{goto L567b1e;}}
}
B567a78:L567a78:{c.instructions+=4;NFSU2_TR(0x567a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567a7b:{NFSU2_TR(0x567a7b);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a80:{NFSU2_TR(0x567a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a81:{NFSU2_TR(0x567a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567a86ull));
TAIL_STATIC(0x537a60u,537);
}
B567a86:L567a86:{c.instructions+=5;NFSU2_TR(0x567a86);
__builtin_memmove((R+12),(R+0),4);
}
B567a88:{NFSU2_TR(0x567a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567a8b:{NFSU2_TR(0x567a8b);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a90:{NFSU2_TR(0x567a90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567a91:{NFSU2_TR(0x567a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567a96ull));
TAIL_STATIC(0x537a60u,537);
}
B567a96:L567a96:{c.instructions+=5;NFSU2_TR(0x567a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567a99:{NFSU2_TR(0x567a99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567a9c:{NFSU2_TR(0x567a9c);
u8 U[4];
w4(U+0,u32(0x688a1551ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567aa1:{NFSU2_TR(0x567aa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567aa2:{NFSU2_TR(0x567aa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567aa7ull));
TAIL_STATIC(0x537a60u,537);
}
B567aa7:L567aa7:{c.instructions+=5;NFSU2_TR(0x567aa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567aaa:{NFSU2_TR(0x567aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567aad:{NFSU2_TR(0x567aad);
u8 U[4];
w4(U+0,u32(0x3fbb7a4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ab2:{NFSU2_TR(0x567ab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ab3:{NFSU2_TR(0x567ab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ab8ull));
TAIL_STATIC(0x537a60u,537);
}
B567ab8:L567ab8:{c.instructions+=3;NFSU2_TR(0x567ab8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ab9:{NFSU2_TR(0x567ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567abc:{NFSU2_TR(0x567abc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ac1ull));
TAIL_STATIC(0x52d100u,52d);
}
B567ac1:L567ac1:{c.instructions+=3;NFSU2_TR(0x567ac1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B567ac4:{NFSU2_TR(0x567ac4);
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
B567ac6:{NFSU2_TR(0x567ac6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567acc:L567acc:{c.instructions+=3;NFSU2_TR(0x567acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567acf:{NFSU2_TR(0x567acf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ad0:{NFSU2_TR(0x567ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ad5ull));
TAIL_STATIC(0x52d100u,52d);
}
B567ad5:L567ad5:{c.instructions+=3;NFSU2_TR(0x567ad5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B567ad8:{NFSU2_TR(0x567ad8);
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
B567ada:{NFSU2_TR(0x567ada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567ae0:L567ae0:{c.instructions+=3;NFSU2_TR(0x567ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567ae3:{NFSU2_TR(0x567ae3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ae4:{NFSU2_TR(0x567ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ae9ull));
TAIL_STATIC(0x52d100u,52d);
}
B567ae9:L567ae9:{c.instructions+=3;NFSU2_TR(0x567ae9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B567aec:{NFSU2_TR(0x567aec);
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
B567aee:{NFSU2_TR(0x567aee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567af4:L567af4:{c.instructions+=3;NFSU2_TR(0x567af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567af7:{NFSU2_TR(0x567af7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567af8:{NFSU2_TR(0x567af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567afdull));
TAIL_STATIC(0x52d100u,52d);
}
B567afd:L567afd:{c.instructions+=3;NFSU2_TR(0x567afd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B567b00:{NFSU2_TR(0x567b00);
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
B567b02:{NFSU2_TR(0x567b02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567b08:L567b08:{c.instructions+=3;NFSU2_TR(0x567b08);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567b0e:{NFSU2_TR(0x567b0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567b10:{NFSU2_TR(0x567b10);
if(r1(R+518)){{goto L567b1e;}}
}
B567b12:L567b12:{c.instructions+=2;NFSU2_TR(0x567b12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567b18:{NFSU2_TR(0x567b18);
if(r1(R+518)){{goto L567e57;}}
}
B567b1e:L567b1e:{c.instructions+=9;NFSU2_TR(0x567b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567b21:{NFSU2_TR(0x567b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567b24:{NFSU2_TR(0x567b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567b27:{NFSU2_TR(0x567b27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b28:{NFSU2_TR(0x567b28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b29:{NFSU2_TR(0x567b29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b2a:{NFSU2_TR(0x567b2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b2b:{NFSU2_TR(0x567b2b);
__builtin_memmove((R+4),(R+24),4);
}
B567b2d:{NFSU2_TR(0x567b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567b32ull));
TAIL_STATIC(0x543d40u,543);
}
B567b32:L567b32:{c.instructions+=2;NFSU2_TR(0x567b32);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567b38:{NFSU2_TR(0x567b38);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L567eb2;}}
}
B567b3e:L567b3e:{c.instructions+=1;NFSU2_TR(0x567b3e);
if(r1(R+518)){{goto L567e57;}}
}
B567b44:L567b44:{c.instructions+=2;NFSU2_TR(0x567b44);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34f8a1deull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34f8a1deull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34f8a1deull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567b4a:{NFSU2_TR(0x567b4a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L567c66;}}
}
B567b50:L567b50:{c.instructions+=1;NFSU2_TR(0x567b50);
if(r1(R+518)){{goto L567c59;}}
}
B567b56:L567b56:{c.instructions+=2;NFSU2_TR(0x567b56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9f00f07ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567b5c:{NFSU2_TR(0x567b5c);
if(r1(R+518)){{goto L567bad;}}
}
B567b5e:L567b5e:{c.instructions+=2;NFSU2_TR(0x567b5e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567b64:{NFSU2_TR(0x567b64);
if(r1(R+518)){{goto L567b72;}}
}
B567b66:L567b66:{c.instructions+=2;NFSU2_TR(0x567b66);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567b6c:{NFSU2_TR(0x567b6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567b72:L567b72:{c.instructions+=3;NFSU2_TR(0x567b72);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567b78:{NFSU2_TR(0x567b78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567b7a:{NFSU2_TR(0x567b7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568122u,568);}
}
B567b80:L567b80:{c.instructions+=2;NFSU2_TR(0x567b80);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B567b83:{NFSU2_TR(0x567b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567b88ull));
TAIL_STATIC(0x538b30u,538);
}
B567b88:L567b88:{c.instructions+=6;NFSU2_TR(0x567b88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567b8b:{NFSU2_TR(0x567b8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b8d:{NFSU2_TR(0x567b8d);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b92:{NFSU2_TR(0x567b92);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b97:{NFSU2_TR(0x567b97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567b98:{NFSU2_TR(0x567b98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567b9dull));
TAIL_STATIC(0x537c00u,537);
}
B567b9d:L567b9d:{c.instructions+=8;NFSU2_TR(0x567b9d);
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
B567ba0:{NFSU2_TR(0x567ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567ba1:{NFSU2_TR(0x567ba1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567ba5:{NFSU2_TR(0x567ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567ba6:{NFSU2_TR(0x567ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567ba7:{NFSU2_TR(0x567ba7);
__builtin_memmove((R+16),(R+20),4);
}
B567ba9:{NFSU2_TR(0x567ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567baa:{NFSU2_TR(0x567baa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567bad:L567bad:{c.instructions+=6;NFSU2_TR(0x567bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567bb3:{NFSU2_TR(0x567bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567bb6:{NFSU2_TR(0x567bb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bb7:{NFSU2_TR(0x567bb7);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bb9:{NFSU2_TR(0x567bb9);
w4(R+4,u32(0x85ad40ull));
}
B567bbe:{NFSU2_TR(0x567bbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567bc3ull));
TAIL_STATIC(0x5289f0u,528);
}
B567bc3:L567bc3:{c.instructions+=4;NFSU2_TR(0x567bc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bc4:{NFSU2_TR(0x567bc4);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bc6:{NFSU2_TR(0x567bc6);
w4(R+4,u32(0x8392c0ull));
}
B567bcb:{NFSU2_TR(0x567bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567bd0ull));
TAIL_STATIC(0x631d20u,631);
}
B567bd0:L567bd0:{c.instructions+=4;NFSU2_TR(0x567bd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bd1:{NFSU2_TR(0x567bd1);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bd3:{NFSU2_TR(0x567bd3);
w4(R+4,u32(0x8392c0ull));
}
B567bd8:{NFSU2_TR(0x567bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567bddull));
TAIL_STATIC(0x631d20u,631);
}
B567bdd:L567bdd:{c.instructions+=3;NFSU2_TR(0x567bdd);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567be2:{NFSU2_TR(0x567be2);
w4(R+4,u32(0x8389d0ull));
}
B567be7:{NFSU2_TR(0x567be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567becull));
TAIL_STATIC(0x413440u,413);
}
B567bec:L567bec:{c.instructions+=4;NFSU2_TR(0x567bec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bee:{NFSU2_TR(0x567bee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bf0:{NFSU2_TR(0x567bf0);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567bf5:{NFSU2_TR(0x567bf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567bfaull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B567bfa:L567bfa:{c.instructions+=5;NFSU2_TR(0x567bfa);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B567c00:{NFSU2_TR(0x567c00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567c03:{NFSU2_TR(0x567c03);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c08:{NFSU2_TR(0x567c08);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B567c0b:{NFSU2_TR(0x567c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567c10ull));
TAIL_STATIC(0x503950u,503);
}
B567c10:L567c10:{c.instructions+=4;NFSU2_TR(0x567c10);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c15:{NFSU2_TR(0x567c15);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c1a:{NFSU2_TR(0x567c1a);
w4(R+4,u32(0x8637d0ull));
}
B567c1f:{NFSU2_TR(0x567c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567c24ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B567c24:L567c24:{c.instructions+=8;NFSU2_TR(0x567c24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567c27:{NFSU2_TR(0x567c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567c2d:{NFSU2_TR(0x567c2d);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B567c33:{NFSU2_TR(0x567c33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c34:{NFSU2_TR(0x567c34);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c39:{NFSU2_TR(0x567c39);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c3e:{NFSU2_TR(0x567c3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c3f:{NFSU2_TR(0x567c3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567c44ull));
TAIL_STATIC(0x537b80u,537);
}
B567c44:L567c44:{c.instructions+=4;NFSU2_TR(0x567c44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B567c47:{NFSU2_TR(0x567c47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c49:{NFSU2_TR(0x567c49);
__builtin_memmove((R+4),(R+24),4);
}
B567c4b:{NFSU2_TR(0x567c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567c50ull));
TAIL_STATIC(0x55fce0u,55f);
}
B567c50:L567c50:{c.instructions+=6;NFSU2_TR(0x567c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567c51:{NFSU2_TR(0x567c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567c52:{NFSU2_TR(0x567c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567c53:{NFSU2_TR(0x567c53);
__builtin_memmove((R+16),(R+20),4);
}
B567c55:{NFSU2_TR(0x567c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567c56:{NFSU2_TR(0x567c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567c59:L567c59:{c.instructions+=7;NFSU2_TR(0x567c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567c5a:{NFSU2_TR(0x567c5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B567c5e:{NFSU2_TR(0x567c5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567c5f:{NFSU2_TR(0x567c5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567c60:{NFSU2_TR(0x567c60);
__builtin_memmove((R+16),(R+20),4);
}
B567c62:{NFSU2_TR(0x567c62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567c63:{NFSU2_TR(0x567c63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567c66:L567c66:{c.instructions+=2;NFSU2_TR(0x567c66);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567c6c:{NFSU2_TR(0x567c6c);
if(r1(R+518)){{goto L567d1a;}}
}
B567c72:L567c72:{c.instructions+=2;NFSU2_TR(0x567c72);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x51123592ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567c78:{NFSU2_TR(0x567c78);
if(r1(R+518)){{goto L567c98;}}
}
B567c7a:L567c7a:{c.instructions+=2;NFSU2_TR(0x567c7a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x72619778ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567c80:{NFSU2_TR(0x567c80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567c86:L567c86:{c.instructions+=3;NFSU2_TR(0x567c86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567c88:{NFSU2_TR(0x567c88);
__builtin_memmove((R+4),(R+24),4);
}
B567c8a:{NFSU2_TR(0x567c8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567c8full));
TAIL_STATIC(0x55f740u,55f);
}
B567c8f:L567c8f:{c.instructions+=6;NFSU2_TR(0x567c8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567c90:{NFSU2_TR(0x567c90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567c91:{NFSU2_TR(0x567c91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567c92:{NFSU2_TR(0x567c92);
__builtin_memmove((R+16),(R+20),4);
}
B567c94:{NFSU2_TR(0x567c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567c95:{NFSU2_TR(0x567c95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567c98:L567c98:{c.instructions+=6;NFSU2_TR(0x567c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567c9e:{NFSU2_TR(0x567c9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567ca1:{NFSU2_TR(0x567ca1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ca2:{NFSU2_TR(0x567ca2);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ca4:{NFSU2_TR(0x567ca4);
w4(R+4,u32(0x8392c0ull));
}
B567ca9:{NFSU2_TR(0x567ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567caeull));
TAIL_STATIC(0x631d20u,631);
}
B567cae:L567cae:{c.instructions+=4;NFSU2_TR(0x567cae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567caf:{NFSU2_TR(0x567caf);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cb1:{NFSU2_TR(0x567cb1);
w4(R+4,u32(0x8392c0ull));
}
B567cb6:{NFSU2_TR(0x567cb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567cbbull));
TAIL_STATIC(0x631d20u,631);
}
B567cbb:L567cbb:{c.instructions+=3;NFSU2_TR(0x567cbb);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cc0:{NFSU2_TR(0x567cc0);
w4(R+4,u32(0x8389d0ull));
}
B567cc5:{NFSU2_TR(0x567cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ccaull));
TAIL_STATIC(0x413440u,413);
}
B567cca:L567cca:{c.instructions+=4;NFSU2_TR(0x567cca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ccc:{NFSU2_TR(0x567ccc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cce:{NFSU2_TR(0x567cce);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cd3:{NFSU2_TR(0x567cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567cd8ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B567cd8:L567cd8:{c.instructions+=5;NFSU2_TR(0x567cd8);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B567cde:{NFSU2_TR(0x567cde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567ce1:{NFSU2_TR(0x567ce1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ce6:{NFSU2_TR(0x567ce6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B567ce9:{NFSU2_TR(0x567ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ceeull));
TAIL_STATIC(0x503950u,503);
}
B567cee:L567cee:{c.instructions+=4;NFSU2_TR(0x567cee);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cf3:{NFSU2_TR(0x567cf3);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567cf8:{NFSU2_TR(0x567cf8);
w4(R+4,u32(0x8637d0ull));
}
B567cfd:{NFSU2_TR(0x567cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d02ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B567d02:L567d02:{c.instructions+=4;NFSU2_TR(0x567d02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d04:{NFSU2_TR(0x567d04);
__builtin_memmove((R+4),(R+24),4);
}
B567d06:{NFSU2_TR(0x567d06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567d0c:{NFSU2_TR(0x567d0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d11ull));
TAIL_STATIC(0x55fce0u,55f);
}
B567d11:L567d11:{c.instructions+=6;NFSU2_TR(0x567d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567d12:{NFSU2_TR(0x567d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567d13:{NFSU2_TR(0x567d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567d14:{NFSU2_TR(0x567d14);
__builtin_memmove((R+16),(R+20),4);
}
B567d16:{NFSU2_TR(0x567d16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567d17:{NFSU2_TR(0x567d17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567d1a:L567d1a:{c.instructions+=4;NFSU2_TR(0x567d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567d1d:{NFSU2_TR(0x567d1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567d20:{NFSU2_TR(0x567d20);
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
B567d22:{NFSU2_TR(0x567d22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567d28:L567d28:{c.instructions+=3;NFSU2_TR(0x567d28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567d2e:{NFSU2_TR(0x567d2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567d30:{NFSU2_TR(0x567d30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567d50;}}
}
B567d32:L567d32:{c.instructions+=2;NFSU2_TR(0x567d32);
__builtin_memmove((R+4),(R+24),4);
}
B567d34:{NFSU2_TR(0x567d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d39ull));
TAIL_STATIC(0x55fb00u,55f);
}
B567d39:L567d39:{c.instructions+=4;NFSU2_TR(0x567d39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567d3c:{NFSU2_TR(0x567d3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d3d:{NFSU2_TR(0x567d3d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d3f:{NFSU2_TR(0x567d3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d44ull));
TAIL_STATIC(0x51de30u,51d);
}
B567d44:L567d44:{c.instructions+=7;NFSU2_TR(0x567d44);
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
B567d47:{NFSU2_TR(0x567d47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567d48:{NFSU2_TR(0x567d48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567d49:{NFSU2_TR(0x567d49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567d4a:{NFSU2_TR(0x567d4a);
__builtin_memmove((R+16),(R+20),4);
}
B567d4c:{NFSU2_TR(0x567d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567d4d:{NFSU2_TR(0x567d4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567d50:L567d50:{c.instructions+=6;NFSU2_TR(0x567d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567d56:{NFSU2_TR(0x567d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567d59:{NFSU2_TR(0x567d59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d5a:{NFSU2_TR(0x567d5a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d5c:{NFSU2_TR(0x567d5c);
w4(R+4,u32(0x838980ull));
}
B567d61:{NFSU2_TR(0x567d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d66ull));
TAIL_STATIC(0x50f1b0u,50f);
}
B567d66:L567d66:{c.instructions+=2;NFSU2_TR(0x567d66);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567d68:{NFSU2_TR(0x567d68);
if(r1(R+518)){{goto L567d7a;}}
}
B567d6a:L567d6a:{c.instructions+=5;NFSU2_TR(0x567d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567d6d:{NFSU2_TR(0x567d6d);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d72:{NFSU2_TR(0x567d72);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d77:{NFSU2_TR(0x567d77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d78:{NFSU2_TR(0x567d78);
{goto L567dbf;}
}
B567d7a:L567d7a:{c.instructions+=2;NFSU2_TR(0x567d7a);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567d81:{NFSU2_TR(0x567d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567dfe;}}
}
B567d83:L567d83:{c.instructions+=4;NFSU2_TR(0x567d83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d84:{NFSU2_TR(0x567d84);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567d86:{NFSU2_TR(0x567d86);
w4(R+4,u32(0x838980ull));
}
B567d8b:{NFSU2_TR(0x567d8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567d90ull));
TAIL_STATIC(0x521be0u,521);
}
B567d90:L567d90:{c.instructions+=2;NFSU2_TR(0x567d90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567d92:{NFSU2_TR(0x567d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L567dfe;}}
}
B567d94:L567d94:{c.instructions+=2;NFSU2_TR(0x567d94);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B567d98:{NFSU2_TR(0x567d98);
if(r1(R+518)){{goto L567dfe;}}
}
B567d9a:L567d9a:{c.instructions+=5;NFSU2_TR(0x567d9a);
__builtin_memmove((R+12),gp(0x861e74),4);
}
B567da0:{NFSU2_TR(0x567da0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567da1:{NFSU2_TR(0x567da1);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567da3:{NFSU2_TR(0x567da3);
w4(R+4,u32(0x85ad40ull));
}
B567da8:{NFSU2_TR(0x567da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567dadull));
TAIL_STATIC(0x514280u,514);
}
B567dad:L567dad:{c.instructions+=2;NFSU2_TR(0x567dad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B567daf:{NFSU2_TR(0x567daf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L567dd3;}}
}
B567db1:L567db1:{c.instructions+=4;NFSU2_TR(0x567db1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567db4:{NFSU2_TR(0x567db4);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567db9:{NFSU2_TR(0x567db9);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567dbe:{NFSU2_TR(0x567dbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567dbf:L567dbf:{c.instructions+=1;NFSU2_TR(0x567dbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567dc4ull));
TAIL_STATIC(0x558430u,558);
}
B567dc4:L567dc4:{c.instructions+=3;NFSU2_TR(0x567dc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567dc7:{NFSU2_TR(0x567dc7);
s4(0x838970,u32(0x34dc1becull));
}
B567dd1:{NFSU2_TR(0x567dd1);
{goto L567e39;}
}
B567dd3:L567dd3:{c.instructions+=11;NFSU2_TR(0x567dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567dd6:{NFSU2_TR(0x567dd6);
u8 U[4];
w4(U+0,u32(0x44b7167full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ddb:{NFSU2_TR(0x567ddb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ddd:{NFSU2_TR(0x567ddd);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567de2:{NFSU2_TR(0x567de2);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567de7:{NFSU2_TR(0x567de7);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567dec:{NFSU2_TR(0x567dec);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567df1:{NFSU2_TR(0x567df1);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567df6:{NFSU2_TR(0x567df6);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567dfb:{NFSU2_TR(0x567dfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567dfc:{NFSU2_TR(0x567dfc);
{goto L567e27;}
}
B567dfe:L567dfe:{c.instructions+=10;NFSU2_TR(0x567dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567e01:{NFSU2_TR(0x567e01);
u8 U[4];
w4(U+0,u32(0xf5ac2b2aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e06:{NFSU2_TR(0x567e06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e08:{NFSU2_TR(0x567e08);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e0d:{NFSU2_TR(0x567e0d);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e12:{NFSU2_TR(0x567e12);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e17:{NFSU2_TR(0x567e17);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e1c:{NFSU2_TR(0x567e1c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e21:{NFSU2_TR(0x567e21);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e26:{NFSU2_TR(0x567e26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e27:L567e27:{c.instructions+=1;NFSU2_TR(0x567e27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567e2cull));
TAIL_STATIC(0x558790u,558);
}
B567e2c:L567e2c:{c.instructions+=2;NFSU2_TR(0x567e2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B567e2f:{NFSU2_TR(0x567e2f);
s4(0x838970,u32(0x1fab5998ull));
}
B567e39:L567e39:{c.instructions+=2;NFSU2_TR(0x567e39);
__builtin_memmove((R+4),(R+24),4);
}
B567e3b:{NFSU2_TR(0x567e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567e40ull));
TAIL_STATIC(0x53a720u,53a);
}
B567e40:L567e40:{c.instructions+=4;NFSU2_TR(0x567e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567e43:{NFSU2_TR(0x567e43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e44:{NFSU2_TR(0x567e44);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e46:{NFSU2_TR(0x567e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567e4bull));
TAIL_STATIC(0x51de30u,51d);
}
B567e4b:L567e4b:{c.instructions+=7;NFSU2_TR(0x567e4b);
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
B567e4e:{NFSU2_TR(0x567e4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567e4f:{NFSU2_TR(0x567e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567e50:{NFSU2_TR(0x567e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567e51:{NFSU2_TR(0x567e51);
__builtin_memmove((R+16),(R+20),4);
}
B567e53:{NFSU2_TR(0x567e53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567e54:{NFSU2_TR(0x567e54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567e57:L567e57:{c.instructions+=3;NFSU2_TR(0x567e57);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567e5d:{NFSU2_TR(0x567e5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567e5f:{NFSU2_TR(0x567e5f);
if(r1(R+518)){{goto L567e73;}}
}
B567e61:L567e61:{c.instructions+=3;NFSU2_TR(0x567e61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e63:{NFSU2_TR(0x567e63);
__builtin_memmove((R+4),(R+24),4);
}
B567e65:{NFSU2_TR(0x567e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567e6aull));
TAIL_STATIC(0x55fce0u,55f);
}
B567e6a:L567e6a:{c.instructions+=6;NFSU2_TR(0x567e6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567e6b:{NFSU2_TR(0x567e6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567e6c:{NFSU2_TR(0x567e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567e6d:{NFSU2_TR(0x567e6d);
__builtin_memmove((R+16),(R+20),4);
}
B567e6f:{NFSU2_TR(0x567e6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567e70:{NFSU2_TR(0x567e70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567e73:L567e73:{c.instructions+=5;NFSU2_TR(0x567e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567e76:{NFSU2_TR(0x567e76);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e7b:{NFSU2_TR(0x567e7b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e80:{NFSU2_TR(0x567e80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e81:{NFSU2_TR(0x567e81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567e86ull));
TAIL_STATIC(0x537d40u,537);
}
B567e86:L567e86:{c.instructions+=3;NFSU2_TR(0x567e86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567e89:{NFSU2_TR(0x567e89);
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
B567e8b:{NFSU2_TR(0x567e8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567e91:L567e91:{c.instructions+=6;NFSU2_TR(0x567e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567e94:{NFSU2_TR(0x567e94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e96:{NFSU2_TR(0x567e96);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567e9b:{NFSU2_TR(0x567e9b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ea0:{NFSU2_TR(0x567ea0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ea1:{NFSU2_TR(0x567ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ea6ull));
TAIL_STATIC(0x537c60u,537);
}
B567ea6:L567ea6:{c.instructions+=7;NFSU2_TR(0x567ea6);
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
B567ea9:{NFSU2_TR(0x567ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B567eaa:{NFSU2_TR(0x567eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B567eab:{NFSU2_TR(0x567eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B567eac:{NFSU2_TR(0x567eac);
__builtin_memmove((R+16),(R+20),4);
}
B567eae:{NFSU2_TR(0x567eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B567eaf:{NFSU2_TR(0x567eaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B567eb2:L567eb2:{c.instructions+=2;NFSU2_TR(0x567eb2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb4edeb6dull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567eb8:{NFSU2_TR(0x567eb8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x568136u,568);}
}
B567ebe:L567ebe:{c.instructions+=1;NFSU2_TR(0x567ebe);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x567b72u);}goto L567b72;}}
}
B567ec4:L567ec4:{c.instructions+=2;NFSU2_TR(0x567ec4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567eca:{NFSU2_TR(0x567eca);
if(r1(R+518)){TAIL_STATIC(0x568110u,568);}
}
B567ed0:L567ed0:{c.instructions+=2;NFSU2_TR(0x567ed0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567ed6:{NFSU2_TR(0x567ed6);
if(r1(R+518)){TAIL_STATIC(0x568195u,568);}
}
B567edc:L567edc:{c.instructions+=2;NFSU2_TR(0x567edc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9803f6e2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B567ee2:{NFSU2_TR(0x567ee2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x568292u,568);}
}
B567ee8:L567ee8:{c.instructions+=6;NFSU2_TR(0x567ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567eeb:{NFSU2_TR(0x567eeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567ef1:{NFSU2_TR(0x567ef1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567ef3:{NFSU2_TR(0x567ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B567ef6:{NFSU2_TR(0x567ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B567ef9:{NFSU2_TR(0x567ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x56801eu,568);}
}
B567eff:L567eff:{c.instructions+=3;NFSU2_TR(0x567eff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B567f02:{NFSU2_TR(0x567f02);
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
B567f04:{NFSU2_TR(0x567f04);
if(r1(R+518)){{goto L567fef;}}
}
B567f0a:L567f0a:{c.instructions+=2;NFSU2_TR(0x567f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567f10:{NFSU2_TR(0x567f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f15ull));
TAIL_STATIC(0x610000u,610);
}
B567f15:L567f15:{c.instructions+=2;NFSU2_TR(0x567f15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f16:{NFSU2_TR(0x567f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f1bull));
TAIL_STATIC(0x43db50u,43d);
}
B567f1b:L567f1b:{c.instructions+=6;NFSU2_TR(0x567f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567f1e:{NFSU2_TR(0x567f1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B567f21:{NFSU2_TR(0x567f21);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B567f23:{NFSU2_TR(0x567f23);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f28:{NFSU2_TR(0x567f28);
w4(R+4,u32(0x8389d0ull));
}
B567f2d:{NFSU2_TR(0x567f2d);
if(r1(R+518)){{goto L567f90;}}
}
B567f2f:L567f2f:{c.instructions+=3;NFSU2_TR(0x567f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567f32:{NFSU2_TR(0x567f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B567f35:{NFSU2_TR(0x567f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f3aull));
TAIL_STATIC(0x413440u,413);
}
B567f3a:L567f3a:{c.instructions+=4;NFSU2_TR(0x567f3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f3b:{NFSU2_TR(0x567f3b);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f3d:{NFSU2_TR(0x567f3d);
w4(R+4,u32(0x8389d0ull));
}
B567f42:{NFSU2_TR(0x567f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f47ull));
TAIL_STATIC(0x631d20u,631);
}
B567f47:L567f47:{c.instructions+=4;NFSU2_TR(0x567f47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f48:{NFSU2_TR(0x567f48);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f4a:{NFSU2_TR(0x567f4a);
w4(R+4,u32(0x8389d0ull));
}
B567f4f:{NFSU2_TR(0x567f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f54ull));
TAIL_STATIC(0x631d20u,631);
}
B567f54:L567f54:{c.instructions+=4;NFSU2_TR(0x567f54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f56:{NFSU2_TR(0x567f56);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f58:{NFSU2_TR(0x567f58);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f5d:{NFSU2_TR(0x567f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f62ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B567f62:L567f62:{c.instructions+=5;NFSU2_TR(0x567f62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567f65:{NFSU2_TR(0x567f65);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f6a:{NFSU2_TR(0x567f6a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f6f:{NFSU2_TR(0x567f6f);
w4(R+4,u32(0x8637d0ull));
}
B567f74:{NFSU2_TR(0x567f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f79ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B567f79:L567f79:{c.instructions+=7;NFSU2_TR(0x567f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B567f7c:{NFSU2_TR(0x567f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B567f7f:{NFSU2_TR(0x567f7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f81:{NFSU2_TR(0x567f81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f83:{NFSU2_TR(0x567f83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f84:{NFSU2_TR(0x567f84);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f86:{NFSU2_TR(0x567f86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f8bull));
TAIL_STATIC(0x4c2100u,4c2);
}
B567f8b:L567f8b:{c.instructions+=2;NFSU2_TR(0x567f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B567f8e:{NFSU2_TR(0x567f8e);
{goto L567fec;}
}
B567f90:L567f90:{c.instructions+=2;NFSU2_TR(0x567f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B567f96:{NFSU2_TR(0x567f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567f9bull));
TAIL_STATIC(0x413440u,413);
}
B567f9b:L567f9b:{c.instructions+=4;NFSU2_TR(0x567f9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f9c:{NFSU2_TR(0x567f9c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567f9e:{NFSU2_TR(0x567f9e);
w4(R+4,u32(0x8389d0ull));
}
B567fa3:{NFSU2_TR(0x567fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567fa8ull));
TAIL_STATIC(0x631d20u,631);
}
B567fa8:L567fa8:{c.instructions+=4;NFSU2_TR(0x567fa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fa9:{NFSU2_TR(0x567fa9);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fab:{NFSU2_TR(0x567fab);
w4(R+4,u32(0x8389d0ull));
}
B567fb0:{NFSU2_TR(0x567fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567fb5ull));
TAIL_STATIC(0x631d20u,631);
}
B567fb5:L567fb5:{c.instructions+=4;NFSU2_TR(0x567fb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fb7:{NFSU2_TR(0x567fb7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fb9:{NFSU2_TR(0x567fb9);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fbe:{NFSU2_TR(0x567fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567fc3ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B567fc3:L567fc3:{c.instructions+=5;NFSU2_TR(0x567fc3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B567fc6:{NFSU2_TR(0x567fc6);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fcb:{NFSU2_TR(0x567fcb);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fd0:{NFSU2_TR(0x567fd0);
w4(R+4,u32(0x8637d0ull));
}
B567fd5:{NFSU2_TR(0x567fd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567fdaull));
TAIL_STATIC(0x55b1a0u,55b);
}
B567fda:L567fda:{c.instructions+=6;NFSU2_TR(0x567fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B567fe0:{NFSU2_TR(0x567fe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fe2:{NFSU2_TR(0x567fe2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fe4:{NFSU2_TR(0x567fe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fe5:{NFSU2_TR(0x567fe5);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567fe7:{NFSU2_TR(0x567fe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567fecull));
TAIL_STATIC(0x4c2100u,4c2);
}
B567fec:L567fec:{c.instructions+=1;NFSU2_TR(0x567fec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B567fef:L567fef:{c.instructions+=2;NFSU2_TR(0x567fef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B567ff0:{NFSU2_TR(0x567ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x567ff5ull));
TAIL_STATIC(0x52d100u,52d);
}
B567ff5:L567ff5:{c.instructions+=3;NFSU2_TR(0x567ff5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B567ff8:{NFSU2_TR(0x567ff8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B567ffa:{NFSU2_TR(0x567ffa);
if(r1(R+518)){TAIL_STATIC(0x568084u,568);}
TAIL_STATIC(0x568000u,568);
}
XIT:NFSU2_TR_EXIT(0x567,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
