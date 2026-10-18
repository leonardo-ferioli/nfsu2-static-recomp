#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_536(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x537,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x537,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_537(u8* __restrict R,Cpu& c);
u32 page_537(Cpu& c){return body_537(c.regs.data(),c);}
__attribute__((noinline)) u32 body_537(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x537002:goto L537002;
case 0x537003:c.instructions+=8;goto B537003;
case 0x537007:c.instructions+=7;goto B537007;
case 0x537008:c.instructions+=6;goto B537008;
case 0x53700c:c.instructions+=5;goto B53700c;
case 0x53700d:c.instructions+=4;goto B53700d;
case 0x537015:c.instructions+=3;goto B537015;
case 0x53701d:c.instructions+=2;goto B53701d;
case 0x537025:c.instructions+=1;goto B537025;
case 0x53702a:goto L53702a;
case 0x53702e:c.instructions+=6;goto B53702e;
case 0x53702f:c.instructions+=5;goto B53702f;
case 0x537033:c.instructions+=4;goto B537033;
case 0x537034:c.instructions+=3;goto B537034;
case 0x537038:c.instructions+=2;goto B537038;
case 0x537039:c.instructions+=1;goto B537039;
case 0x53703e:goto L53703e;
case 0x537041:c.instructions+=4;goto B537041;
case 0x537044:c.instructions+=3;goto B537044;
case 0x537047:c.instructions+=2;goto B537047;
case 0x53704a:c.instructions+=1;goto B53704a;
case 0x53704c:goto L53704c;
case 0x53704d:c.instructions+=4;goto B53704d;
case 0x537054:c.instructions+=3;goto B537054;
case 0x537059:c.instructions+=2;goto B537059;
case 0x53705a:c.instructions+=1;goto B53705a;
case 0x53705f:goto L53705f;
case 0x537062:c.instructions+=3;goto B537062;
case 0x537064:c.instructions+=2;goto B537064;
case 0x53706b:c.instructions+=1;goto B53706b;
case 0x53706d:goto L53706d;
case 0x537070:goto L537070;
case 0x537073:c.instructions+=10;goto B537073;
case 0x537074:c.instructions+=9;goto B537074;
case 0x537078:c.instructions+=8;goto B537078;
case 0x537079:c.instructions+=7;goto B537079;
case 0x53707d:c.instructions+=6;goto B53707d;
case 0x53707e:c.instructions+=5;goto B53707e;
case 0x53707f:c.instructions+=4;goto B53707f;
case 0x537080:c.instructions+=3;goto B537080;
case 0x537084:c.instructions+=2;goto B537084;
case 0x537085:c.instructions+=1;goto B537085;
case 0x53708a:goto L53708a;
case 0x53708b:c.instructions+=5;goto B53708b;
case 0x53708c:c.instructions+=4;goto B53708c;
case 0x53708d:c.instructions+=3;goto B53708d;
case 0x53708f:c.instructions+=2;goto B53708f;
case 0x537090:c.instructions+=1;goto B537090;
case 0x5370a0:goto L5370a0;
case 0x5370a4:c.instructions+=5;goto B5370a4;
case 0x5370a5:c.instructions+=4;goto B5370a5;
case 0x5370a6:c.instructions+=3;goto B5370a6;
case 0x5370a8:c.instructions+=2;goto B5370a8;
case 0x5370ac:c.instructions+=1;goto B5370ac;
case 0x5370ae:goto L5370ae;
case 0x5370b5:goto L5370b5;
case 0x5370bb:c.instructions+=3;goto B5370bb;
case 0x5370bd:c.instructions+=2;goto B5370bd;
case 0x5370c0:c.instructions+=1;goto B5370c0;
case 0x5370c2:goto L5370c2;
case 0x5370c5:c.instructions+=1;goto B5370c5;
case 0x5370c7:goto L5370c7;
case 0x5370cd:c.instructions+=4;goto B5370cd;
case 0x5370ce:c.instructions+=3;goto B5370ce;
case 0x5370d0:c.instructions+=2;goto B5370d0;
case 0x5370d6:c.instructions+=1;goto B5370d6;
case 0x5370d8:goto L5370d8;
case 0x5370de:c.instructions+=4;goto B5370de;
case 0x5370e1:c.instructions+=3;goto B5370e1;
case 0x5370e3:c.instructions+=2;goto B5370e3;
case 0x5370e6:c.instructions+=1;goto B5370e6;
case 0x5370e8:goto L5370e8;
case 0x5370ee:goto L5370ee;
case 0x5370f5:c.instructions+=1;goto B5370f5;
case 0x5370f7:goto L5370f7;
case 0x5370fd:goto L5370fd;
case 0x5370ff:c.instructions+=1;goto B5370ff;
case 0x537101:goto L537101;
case 0x537104:c.instructions+=3;goto B537104;
case 0x537106:c.instructions+=2;goto B537106;
case 0x537109:c.instructions+=1;goto B537109;
case 0x53710b:goto L53710b;
case 0x537112:c.instructions+=1;goto B537112;
case 0x537114:goto L537114;
case 0x537116:c.instructions+=1;goto B537116;
case 0x53711b:goto L53711b;
case 0x53711c:c.instructions+=2;goto B53711c;
case 0x53711d:c.instructions+=1;goto B53711d;
case 0x537120:goto L537120;
case 0x537123:c.instructions+=3;goto B537123;
case 0x537124:c.instructions+=2;goto B537124;
case 0x537127:c.instructions+=1;goto B537127;
case 0x537129:goto L537129;
case 0x537130:goto L537130;
case 0x537134:c.instructions+=5;goto B537134;
case 0x537135:c.instructions+=4;goto B537135;
case 0x537136:c.instructions+=3;goto B537136;
case 0x537137:c.instructions+=2;goto B537137;
case 0x537139:c.instructions+=1;goto B537139;
case 0x53713e:goto L53713e;
case 0x53713f:c.instructions+=2;goto B53713f;
case 0x537140:c.instructions+=1;goto B537140;
case 0x537143:goto L537143;
case 0x537147:c.instructions+=5;goto B537147;
case 0x537148:c.instructions+=4;goto B537148;
case 0x537149:c.instructions+=3;goto B537149;
case 0x53714a:c.instructions+=2;goto B53714a;
case 0x53714c:c.instructions+=1;goto B53714c;
case 0x537151:goto L537151;
case 0x537152:c.instructions+=2;goto B537152;
case 0x537153:c.instructions+=1;goto B537153;
case 0x537156:goto L537156;
case 0x53715a:c.instructions+=5;goto B53715a;
case 0x53715b:c.instructions+=4;goto B53715b;
case 0x53715c:c.instructions+=3;goto B53715c;
case 0x53715d:c.instructions+=2;goto B53715d;
case 0x53715f:c.instructions+=1;goto B53715f;
case 0x537164:goto L537164;
case 0x537165:c.instructions+=2;goto B537165;
case 0x537166:c.instructions+=1;goto B537166;
case 0x537169:goto L537169;
case 0x53716d:c.instructions+=5;goto B53716d;
case 0x53716e:c.instructions+=4;goto B53716e;
case 0x53716f:c.instructions+=3;goto B53716f;
case 0x537170:c.instructions+=2;goto B537170;
case 0x537172:c.instructions+=1;goto B537172;
case 0x537177:goto L537177;
case 0x537178:c.instructions+=2;goto B537178;
case 0x537179:c.instructions+=1;goto B537179;
case 0x5371a0:goto L5371a0;
case 0x5371a4:c.instructions+=4;goto B5371a4;
case 0x5371a5:c.instructions+=3;goto B5371a5;
case 0x5371a8:c.instructions+=2;goto B5371a8;
case 0x5371aa:c.instructions+=1;goto B5371aa;
case 0x5371ac:goto L5371ac;
case 0x5371b3:c.instructions+=8;goto B5371b3;
case 0x5371b5:c.instructions+=7;goto B5371b5;
case 0x5371b8:c.instructions+=6;goto B5371b8;
case 0x5371ba:c.instructions+=5;goto B5371ba;
case 0x5371bd:c.instructions+=4;goto B5371bd;
case 0x5371c1:c.instructions+=3;goto B5371c1;
case 0x5371c2:c.instructions+=2;goto B5371c2;
case 0x5371c4:c.instructions+=1;goto B5371c4;
case 0x5371c9:goto L5371c9;
case 0x5371cb:c.instructions+=1;goto B5371cb;
case 0x5371d0:goto L5371d0;
case 0x5371d6:c.instructions+=3;goto B5371d6;
case 0x5371d7:c.instructions+=2;goto B5371d7;
case 0x5371d8:c.instructions+=1;goto B5371d8;
case 0x5371dd:goto L5371dd;
case 0x5371e0:goto L5371e0;
case 0x5371e1:c.instructions+=1;goto B5371e1;
case 0x5371f0:goto L5371f0;
case 0x5371f1:c.instructions+=9;goto B5371f1;
case 0x5371f2:c.instructions+=8;goto B5371f2;
case 0x5371f3:c.instructions+=7;goto B5371f3;
case 0x5371f4:c.instructions+=6;goto B5371f4;
case 0x5371f5:c.instructions+=5;goto B5371f5;
case 0x5371f7:c.instructions+=4;goto B5371f7;
case 0x5371fb:c.instructions+=3;goto B5371fb;
case 0x5371fe:c.instructions+=2;goto B5371fe;
case 0x537203:c.instructions+=1;goto B537203;
case 0x537208:goto L537208;
case 0x53720b:c.instructions+=2;goto B53720b;
case 0x53720d:c.instructions+=1;goto B53720d;
case 0x53720f:goto L53720f;
case 0x537212:c.instructions+=2;goto B537212;
case 0x537214:c.instructions+=1;goto B537214;
case 0x537216:goto L537216;
case 0x537218:c.instructions+=2;goto B537218;
case 0x53721a:c.instructions+=1;goto B53721a;
case 0x53721c:goto L53721c;
case 0x53721f:c.instructions+=1;goto B53721f;
case 0x537221:goto L537221;
case 0x537224:c.instructions+=3;goto B537224;
case 0x537225:c.instructions+=2;goto B537225;
case 0x537227:c.instructions+=1;goto B537227;
case 0x53722c:goto L53722c;
case 0x537232:c.instructions+=2;goto B537232;
case 0x537233:c.instructions+=1;goto B537233;
case 0x537235:goto L537235;
case 0x537239:c.instructions+=2;goto B537239;
case 0x53723e:c.instructions+=1;goto B53723e;
case 0x537240:goto L537240;
case 0x537242:c.instructions+=2;goto B537242;
case 0x537244:c.instructions+=1;goto B537244;
case 0x537246:goto L537246;
case 0x537248:c.instructions+=2;goto B537248;
case 0x53724a:c.instructions+=1;goto B53724a;
case 0x53724c:goto L53724c;
case 0x537250:goto L537250;
case 0x537253:c.instructions+=2;goto B537253;
case 0x537254:c.instructions+=1;goto B537254;
case 0x537259:goto L537259;
case 0x53725d:c.instructions+=4;goto B53725d;
case 0x537260:c.instructions+=3;goto B537260;
case 0x537261:c.instructions+=2;goto B537261;
case 0x537262:c.instructions+=1;goto B537262;
case 0x537267:goto L537267;
case 0x537269:c.instructions+=2;goto B537269;
case 0x53726b:c.instructions+=1;goto B53726b;
case 0x53726d:goto L53726d;
case 0x53726f:c.instructions+=1;goto B53726f;
case 0x537272:goto L537272;
case 0x537275:c.instructions+=2;goto B537275;
case 0x53727b:c.instructions+=1;goto B53727b;
case 0x53727d:goto L53727d;
case 0x537282:goto L537282;
case 0x537283:c.instructions+=5;goto B537283;
case 0x537284:c.instructions+=4;goto B537284;
case 0x537285:c.instructions+=3;goto B537285;
case 0x537286:c.instructions+=2;goto B537286;
case 0x537287:c.instructions+=1;goto B537287;
case 0x537290:goto L537290;
case 0x537294:c.instructions+=2;goto B537294;
case 0x53729a:c.instructions+=1;goto B53729a;
case 0x53729c:goto L53729c;
case 0x53729f:c.instructions+=3;goto B53729f;
case 0x5372a0:c.instructions+=2;goto B5372a0;
case 0x5372a1:c.instructions+=1;goto B5372a1;
case 0x5372a6:goto L5372a6;
case 0x5372a7:c.instructions+=1;goto B5372a7;
case 0x5372ac:goto L5372ac;
case 0x5372ae:c.instructions+=3;goto B5372ae;
case 0x5372b1:c.instructions+=2;goto B5372b1;
case 0x5372b3:c.instructions+=1;goto B5372b3;
case 0x5372b5:goto L5372b5;
case 0x5372b8:c.instructions+=5;goto B5372b8;
case 0x5372ba:c.instructions+=4;goto B5372ba;
case 0x5372bc:c.instructions+=3;goto B5372bc;
case 0x5372bf:c.instructions+=2;goto B5372bf;
case 0x5372c1:c.instructions+=1;goto B5372c1;
case 0x5372c6:goto L5372c6;
case 0x5372c7:c.instructions+=1;goto B5372c7;
case 0x5372cc:goto L5372cc;
case 0x5372cf:goto L5372cf;
case 0x5372d4:c.instructions+=2;goto B5372d4;
case 0x5372d5:c.instructions+=1;goto B5372d5;
case 0x5372d6:goto L5372d6;
case 0x5372d8:c.instructions+=1;goto B5372d8;
case 0x5372e0:goto L5372e0;
case 0x5372e2:c.instructions+=17;goto B5372e2;
case 0x5372e7:c.instructions+=16;goto B5372e7;
case 0x5372ed:c.instructions+=15;goto B5372ed;
case 0x5372ee:c.instructions+=14;goto B5372ee;
case 0x5372f5:c.instructions+=13;goto B5372f5;
case 0x5372f8:c.instructions+=12;goto B5372f8;
case 0x5372f9:c.instructions+=11;goto B5372f9;
case 0x5372fa:c.instructions+=10;goto B5372fa;
case 0x5372fc:c.instructions+=9;goto B5372fc;
case 0x5372ff:c.instructions+=8;goto B5372ff;
case 0x537305:c.instructions+=7;goto B537305;
case 0x537309:c.instructions+=6;goto B537309;
case 0x53730b:c.instructions+=5;goto B53730b;
case 0x53730e:c.instructions+=4;goto B53730e;
case 0x537310:c.instructions+=3;goto B537310;
case 0x537315:c.instructions+=2;goto B537315;
case 0x537319:c.instructions+=1;goto B537319;
case 0x53731e:goto L53731e;
case 0x537321:c.instructions+=4;goto B537321;
case 0x537325:c.instructions+=3;goto B537325;
case 0x537327:c.instructions+=2;goto B537327;
case 0x53732c:c.instructions+=1;goto B53732c;
case 0x53732e:goto L53732e;
case 0x537330:c.instructions+=1;goto B537330;
case 0x537335:goto L537335;
case 0x537337:goto L537337;
case 0x537339:goto L537339;
case 0x53733a:c.instructions+=6;goto B53733a;
case 0x53733f:c.instructions+=5;goto B53733f;
case 0x537341:c.instructions+=4;goto B537341;
case 0x537343:c.instructions+=3;goto B537343;
case 0x537347:c.instructions+=2;goto B537347;
case 0x53734a:c.instructions+=1;goto B53734a;
case 0x53734f:goto L53734f;
case 0x537354:c.instructions+=6;goto B537354;
case 0x537357:c.instructions+=5;goto B537357;
case 0x53735a:c.instructions+=4;goto B53735a;
case 0x537360:c.instructions+=3;goto B537360;
case 0x537363:c.instructions+=2;goto B537363;
case 0x537365:c.instructions+=1;goto B537365;
case 0x53736a:goto L53736a;
case 0x53736d:c.instructions+=1;goto B53736d;
case 0x537372:goto L537372;
case 0x537375:c.instructions+=4;goto B537375;
case 0x53737b:c.instructions+=3;goto B53737b;
case 0x53737d:c.instructions+=2;goto B53737d;
case 0x537380:c.instructions+=1;goto B537380;
case 0x537382:goto L537382;
case 0x537384:c.instructions+=4;goto B537384;
case 0x537387:c.instructions+=3;goto B537387;
case 0x53738a:c.instructions+=2;goto B53738a;
case 0x53738c:c.instructions+=1;goto B53738c;
case 0x53738e:goto L53738e;
case 0x537391:c.instructions+=6;goto B537391;
case 0x537395:c.instructions+=5;goto B537395;
case 0x53739a:c.instructions+=4;goto B53739a;
case 0x53739d:c.instructions+=3;goto B53739d;
case 0x5373a0:c.instructions+=2;goto B5373a0;
case 0x5373a4:c.instructions+=1;goto B5373a4;
case 0x5373a9:goto L5373a9;
case 0x5373ac:c.instructions+=4;goto B5373ac;
case 0x5373b0:c.instructions+=3;goto B5373b0;
case 0x5373b2:c.instructions+=2;goto B5373b2;
case 0x5373b7:c.instructions+=1;goto B5373b7;
case 0x5373b9:goto L5373b9;
case 0x5373bb:c.instructions+=1;goto B5373bb;
case 0x5373c0:goto L5373c0;
case 0x5373c3:c.instructions+=7;goto B5373c3;
case 0x5373c5:c.instructions+=6;goto B5373c5;
case 0x5373c6:c.instructions+=5;goto B5373c6;
case 0x5373c7:c.instructions+=4;goto B5373c7;
case 0x5373cb:c.instructions+=3;goto B5373cb;
case 0x5373d2:c.instructions+=2;goto B5373d2;
case 0x5373d5:c.instructions+=1;goto B5373d5;
case 0x5373d6:goto L5373d6;
case 0x5373da:c.instructions+=7;goto B5373da;
case 0x5373dd:c.instructions+=6;goto B5373dd;
case 0x5373df:c.instructions+=5;goto B5373df;
case 0x5373e0:c.instructions+=4;goto B5373e0;
case 0x5373e1:c.instructions+=3;goto B5373e1;
case 0x5373e8:c.instructions+=2;goto B5373e8;
case 0x5373eb:c.instructions+=1;goto B5373eb;
case 0x5373f0:goto L5373f0;
case 0x5373f2:c.instructions+=14;goto B5373f2;
case 0x5373f7:c.instructions+=13;goto B5373f7;
case 0x5373fd:c.instructions+=12;goto B5373fd;
case 0x5373fe:c.instructions+=11;goto B5373fe;
case 0x537405:c.instructions+=10;goto B537405;
case 0x537406:c.instructions+=9;goto B537406;
case 0x537407:c.instructions+=8;goto B537407;
case 0x537409:c.instructions+=7;goto B537409;
case 0x53740a:c.instructions+=6;goto B53740a;
case 0x53740e:c.instructions+=5;goto B53740e;
case 0x537414:c.instructions+=4;goto B537414;
case 0x537419:c.instructions+=3;goto B537419;
case 0x53741a:c.instructions+=2;goto B53741a;
case 0x537422:c.instructions+=1;goto B537422;
case 0x537427:goto L537427;
case 0x53742a:c.instructions+=3;goto B53742a;
case 0x53742d:c.instructions+=2;goto B53742d;
case 0x53742f:c.instructions+=1;goto B53742f;
case 0x537431:goto L537431;
case 0x537433:c.instructions+=2;goto B537433;
case 0x537435:c.instructions+=1;goto B537435;
case 0x537437:goto L537437;
case 0x537439:c.instructions+=1;goto B537439;
case 0x53743e:goto L53743e;
case 0x537441:c.instructions+=2;goto B537441;
case 0x537443:c.instructions+=1;goto B537443;
case 0x537445:goto L537445;
case 0x537447:c.instructions+=1;goto B537447;
case 0x53744c:goto L53744c;
case 0x53744d:c.instructions+=1;goto B53744d;
case 0x537452:goto L537452;
case 0x537455:goto L537455;
case 0x537458:c.instructions+=2;goto B537458;
case 0x537460:c.instructions+=1;goto B537460;
case 0x537465:goto L537465;
case 0x537469:c.instructions+=5;goto B537469;
case 0x53746a:c.instructions+=4;goto B53746a;
case 0x53746b:c.instructions+=3;goto B53746b;
case 0x537472:c.instructions+=2;goto B537472;
case 0x537475:c.instructions+=1;goto B537475;
case 0x537480:goto L537480;
case 0x537483:c.instructions+=1;goto B537483;
case 0x537490:goto L537490;
case 0x537492:c.instructions+=8;goto B537492;
case 0x537497:c.instructions+=7;goto B537497;
case 0x53749d:c.instructions+=6;goto B53749d;
case 0x53749e:c.instructions+=5;goto B53749e;
case 0x5374a5:c.instructions+=4;goto B5374a5;
case 0x5374a6:c.instructions+=3;goto B5374a6;
case 0x5374aa:c.instructions+=2;goto B5374aa;
case 0x5374ab:c.instructions+=1;goto B5374ab;
case 0x5374b0:goto L5374b0;
case 0x5374b3:c.instructions+=2;goto B5374b3;
case 0x5374b5:c.instructions+=1;goto B5374b5;
case 0x5374b7:goto L5374b7;
case 0x5374bf:c.instructions+=5;goto B5374bf;
case 0x5374c3:c.instructions+=4;goto B5374c3;
case 0x5374c4:c.instructions+=3;goto B5374c4;
case 0x5374c6:c.instructions+=2;goto B5374c6;
case 0x5374ce:c.instructions+=1;goto B5374ce;
case 0x5374d3:goto L5374d3;
case 0x5374d7:c.instructions+=3;goto B5374d7;
case 0x5374de:c.instructions+=2;goto B5374de;
case 0x5374e1:c.instructions+=1;goto B5374e1;
case 0x5374f0:goto L5374f0;
case 0x5374f4:c.instructions+=5;goto B5374f4;
case 0x5374f7:c.instructions+=4;goto B5374f7;
case 0x5374f8:c.instructions+=3;goto B5374f8;
case 0x5374fb:c.instructions+=2;goto B5374fb;
case 0x5374fd:c.instructions+=1;goto B5374fd;
case 0x5374ff:goto L5374ff;
case 0x537506:c.instructions+=7;goto B537506;
case 0x537509:c.instructions+=6;goto B537509;
case 0x53750b:c.instructions+=5;goto B53750b;
case 0x53750d:c.instructions+=4;goto B53750d;
case 0x537510:c.instructions+=3;goto B537510;
case 0x537511:c.instructions+=2;goto B537511;
case 0x537513:c.instructions+=1;goto B537513;
case 0x537518:goto L537518;
case 0x53751a:c.instructions+=1;goto B53751a;
case 0x53751f:goto L53751f;
case 0x537524:c.instructions+=3;goto B537524;
case 0x537525:c.instructions+=2;goto B537525;
case 0x537526:c.instructions+=1;goto B537526;
case 0x53752b:goto L53752b;
case 0x53752e:goto L53752e;
case 0x537530:c.instructions+=2;goto B537530;
case 0x537531:c.instructions+=1;goto B537531;
case 0x537540:goto L537540;
case 0x537541:c.instructions+=4;goto B537541;
case 0x537543:c.instructions+=3;goto B537543;
case 0x537548:c.instructions+=2;goto B537548;
case 0x53754c:c.instructions+=1;goto B53754c;
case 0x537551:goto L537551;
case 0x537554:c.instructions+=2;goto B537554;
case 0x537556:c.instructions+=1;goto B537556;
case 0x537558:goto L537558;
case 0x53755d:c.instructions+=1;goto B53755d;
case 0x537562:goto L537562;
case 0x537565:c.instructions+=2;goto B537565;
case 0x537567:c.instructions+=1;goto B537567;
case 0x537569:goto L537569;
case 0x53756b:c.instructions+=3;goto B53756b;
case 0x53756c:c.instructions+=2;goto B53756c;
case 0x53756e:c.instructions+=1;goto B53756e;
case 0x537573:goto L537573;
case 0x537577:c.instructions+=2;goto B537577;
case 0x537578:c.instructions+=1;goto B537578;
case 0x537580:goto L537580;
case 0x537586:c.instructions+=12;goto B537586;
case 0x537588:c.instructions+=11;goto B537588;
case 0x53758d:c.instructions+=10;goto B53758d;
case 0x53758e:c.instructions+=9;goto B53758e;
case 0x537595:c.instructions+=8;goto B537595;
case 0x537598:c.instructions+=7;goto B537598;
case 0x537599:c.instructions+=6;goto B537599;
case 0x53759d:c.instructions+=5;goto B53759d;
case 0x53759e:c.instructions+=4;goto B53759e;
case 0x5375a0:c.instructions+=3;goto B5375a0;
case 0x5375a1:c.instructions+=2;goto B5375a1;
case 0x5375a6:c.instructions+=1;goto B5375a6;
case 0x5375ab:goto L5375ab;
case 0x5375ad:c.instructions+=1;goto B5375ad;
case 0x5375af:goto L5375af;
case 0x5375b0:c.instructions+=3;goto B5375b0;
case 0x5375b3:c.instructions+=2;goto B5375b3;
case 0x5375b5:c.instructions+=1;goto B5375b5;
case 0x5375b7:goto L5375b7;
case 0x5375bc:c.instructions+=3;goto B5375bc;
case 0x5375bd:c.instructions+=2;goto B5375bd;
case 0x5375c2:c.instructions+=1;goto B5375c2;
case 0x5375c7:goto L5375c7;
case 0x5375cf:c.instructions+=6;goto B5375cf;
case 0x5375d2:c.instructions+=5;goto B5375d2;
case 0x5375d6:c.instructions+=4;goto B5375d6;
case 0x5375d9:c.instructions+=3;goto B5375d9;
case 0x5375db:c.instructions+=2;goto B5375db;
case 0x5375e3:c.instructions+=1;goto B5375e3;
case 0x5375e5:goto L5375e5;
case 0x5375e8:c.instructions+=1;goto B5375e8;
case 0x5375ea:goto L5375ea;
case 0x5375ec:goto L5375ec;
case 0x5375f0:c.instructions+=4;goto B5375f0;
case 0x5375f1:c.instructions+=3;goto B5375f1;
case 0x5375f3:c.instructions+=2;goto B5375f3;
case 0x5375f7:c.instructions+=1;goto B5375f7;
case 0x5375fc:goto L5375fc;
case 0x5375ff:c.instructions+=3;goto B5375ff;
case 0x537600:c.instructions+=2;goto B537600;
case 0x537605:c.instructions+=1;goto B537605;
case 0x53760a:goto L53760a;
case 0x53760d:c.instructions+=3;goto B53760d;
case 0x537610:c.instructions+=2;goto B537610;
case 0x537611:c.instructions+=1;goto B537611;
case 0x537616:goto L537616;
case 0x537617:goto L537617;
case 0x53761b:c.instructions+=5;goto B53761b;
case 0x53761c:c.instructions+=4;goto B53761c;
case 0x53761d:c.instructions+=3;goto B53761d;
case 0x537624:c.instructions+=2;goto B537624;
case 0x537627:c.instructions+=1;goto B537627;
case 0x537630:goto L537630;
case 0x537634:c.instructions+=5;goto B537634;
case 0x537635:c.instructions+=4;goto B537635;
case 0x53763c:c.instructions+=3;goto B53763c;
case 0x537642:c.instructions+=2;goto B537642;
case 0x537644:c.instructions+=1;goto B537644;
case 0x537646:goto L537646;
case 0x537649:c.instructions+=3;goto B537649;
case 0x53764b:c.instructions+=2;goto B53764b;
case 0x53764e:c.instructions+=1;goto B53764e;
case 0x537650:goto L537650;
case 0x537657:c.instructions+=7;goto B537657;
case 0x53765a:c.instructions+=6;goto B53765a;
case 0x53765c:c.instructions+=5;goto B53765c;
case 0x53765e:c.instructions+=4;goto B53765e;
case 0x537661:c.instructions+=3;goto B537661;
case 0x537662:c.instructions+=2;goto B537662;
case 0x537664:c.instructions+=1;goto B537664;
case 0x537669:goto L537669;
case 0x53766b:c.instructions+=1;goto B53766b;
case 0x537670:goto L537670;
case 0x537675:c.instructions+=3;goto B537675;
case 0x537676:c.instructions+=2;goto B537676;
case 0x537677:c.instructions+=1;goto B537677;
case 0x53767c:goto L53767c;
case 0x53767f:goto L53767f;
case 0x537681:c.instructions+=2;goto B537681;
case 0x537682:c.instructions+=1;goto B537682;
case 0x537690:goto L537690;
case 0x537694:c.instructions+=6;goto B537694;
case 0x537698:c.instructions+=5;goto B537698;
case 0x53769c:c.instructions+=4;goto B53769c;
case 0x53769d:c.instructions+=3;goto B53769d;
case 0x53769e:c.instructions+=2;goto B53769e;
case 0x53769f:c.instructions+=1;goto B53769f;
case 0x5376a4:goto L5376a4;
case 0x5376a7:c.instructions+=1;goto B5376a7;
case 0x5376b0:goto L5376b0;
case 0x5376b1:c.instructions+=7;goto B5376b1;
case 0x5376b2:c.instructions+=6;goto B5376b2;
case 0x5376b5:c.instructions+=5;goto B5376b5;
case 0x5376b8:c.instructions+=4;goto B5376b8;
case 0x5376b9:c.instructions+=3;goto B5376b9;
case 0x5376bb:c.instructions+=2;goto B5376bb;
case 0x5376bd:c.instructions+=1;goto B5376bd;
case 0x5376bf:goto L5376bf;
case 0x5376c0:goto L5376c0;
case 0x5376c3:c.instructions+=2;goto B5376c3;
case 0x5376c4:c.instructions+=1;goto B5376c4;
case 0x5376c9:goto L5376c9;
case 0x5376cc:c.instructions+=3;goto B5376cc;
case 0x5376ce:c.instructions+=2;goto B5376ce;
case 0x5376d1:c.instructions+=1;goto B5376d1;
case 0x5376d3:goto L5376d3;
case 0x5376d6:goto L5376d6;
case 0x5376d8:c.instructions+=3;goto B5376d8;
case 0x5376d9:c.instructions+=2;goto B5376d9;
case 0x5376db:c.instructions+=1;goto B5376db;
case 0x5376dd:goto L5376dd;
case 0x5376de:c.instructions+=3;goto B5376de;
case 0x5376df:c.instructions+=2;goto B5376df;
case 0x5376e0:c.instructions+=1;goto B5376e0;
case 0x5376f0:goto L5376f0;
case 0x5376f1:c.instructions+=6;goto B5376f1;
case 0x5376f5:c.instructions+=5;goto B5376f5;
case 0x5376f6:c.instructions+=4;goto B5376f6;
case 0x5376f7:c.instructions+=3;goto B5376f7;
case 0x5376f8:c.instructions+=2;goto B5376f8;
case 0x5376fa:c.instructions+=1;goto B5376fa;
case 0x5376ff:goto L5376ff;
case 0x537701:c.instructions+=2;goto B537701;
case 0x537703:c.instructions+=1;goto B537703;
case 0x537705:goto L537705;
case 0x537708:c.instructions+=2;goto B537708;
case 0x53770b:c.instructions+=1;goto B53770b;
case 0x53770d:goto L53770d;
case 0x53770f:c.instructions+=1;goto B53770f;
case 0x537711:goto L537711;
case 0x537712:c.instructions+=2;goto B537712;
case 0x537714:c.instructions+=1;goto B537714;
case 0x537719:goto L537719;
case 0x53771b:goto L53771b;
case 0x53771c:c.instructions+=2;goto B53771c;
case 0x53771e:c.instructions+=1;goto B53771e;
case 0x537723:goto L537723;
case 0x537725:c.instructions+=7;goto B537725;
case 0x537728:c.instructions+=6;goto B537728;
case 0x53772a:c.instructions+=5;goto B53772a;
case 0x53772d:c.instructions+=4;goto B53772d;
case 0x537732:c.instructions+=3;goto B537732;
case 0x537733:c.instructions+=2;goto B537733;
case 0x537734:c.instructions+=1;goto B537734;
case 0x537739:goto L537739;
case 0x53773c:c.instructions+=2;goto B53773c;
case 0x53773e:c.instructions+=1;goto B53773e;
case 0x537743:goto L537743;
case 0x537744:c.instructions+=3;goto B537744;
case 0x537745:c.instructions+=2;goto B537745;
case 0x537746:c.instructions+=1;goto B537746;
case 0x537750:goto L537750;
case 0x537751:c.instructions+=6;goto B537751;
case 0x537752:c.instructions+=5;goto B537752;
case 0x537753:c.instructions+=4;goto B537753;
case 0x537757:c.instructions+=3;goto B537757;
case 0x537758:c.instructions+=2;goto B537758;
case 0x53775a:c.instructions+=1;goto B53775a;
case 0x53775f:goto L53775f;
case 0x537761:c.instructions+=2;goto B537761;
case 0x537763:c.instructions+=1;goto B537763;
case 0x537765:goto L537765;
case 0x537766:c.instructions+=2;goto B537766;
case 0x53776b:c.instructions+=1;goto B53776b;
case 0x537770:goto L537770;
case 0x537773:c.instructions+=3;goto B537773;
case 0x537774:c.instructions+=2;goto B537774;
case 0x537776:c.instructions+=1;goto B537776;
case 0x53777b:goto L53777b;
case 0x53777d:c.instructions+=7;goto B53777d;
case 0x537780:c.instructions+=6;goto B537780;
case 0x537782:c.instructions+=5;goto B537782;
case 0x537785:c.instructions+=4;goto B537785;
case 0x53778a:c.instructions+=3;goto B53778a;
case 0x53778b:c.instructions+=2;goto B53778b;
case 0x53778c:c.instructions+=1;goto B53778c;
case 0x537791:goto L537791;
case 0x537794:goto L537794;
case 0x537795:c.instructions+=3;goto B537795;
case 0x537796:c.instructions+=2;goto B537796;
case 0x537797:c.instructions+=1;goto B537797;
case 0x5377a0:goto L5377a0;
case 0x5377a1:c.instructions+=9;goto B5377a1;
case 0x5377a2:c.instructions+=8;goto B5377a2;
case 0x5377a6:c.instructions+=7;goto B5377a6;
case 0x5377a7:c.instructions+=6;goto B5377a7;
case 0x5377ab:c.instructions+=5;goto B5377ab;
case 0x5377ac:c.instructions+=4;goto B5377ac;
case 0x5377ad:c.instructions+=3;goto B5377ad;
case 0x5377ae:c.instructions+=2;goto B5377ae;
case 0x5377b0:c.instructions+=1;goto B5377b0;
case 0x5377b5:goto L5377b5;
case 0x5377b6:c.instructions+=2;goto B5377b6;
case 0x5377b8:c.instructions+=1;goto B5377b8;
case 0x5377bd:goto L5377bd;
case 0x5377bf:c.instructions+=5;goto B5377bf;
case 0x5377c1:c.instructions+=4;goto B5377c1;
case 0x5377c4:c.instructions+=3;goto B5377c4;
case 0x5377c9:c.instructions+=2;goto B5377c9;
case 0x5377ca:c.instructions+=1;goto B5377ca;
case 0x5377cf:goto L5377cf;
case 0x5377d2:c.instructions+=2;goto B5377d2;
case 0x5377d4:c.instructions+=1;goto B5377d4;
case 0x5377d6:goto L5377d6;
case 0x5377d9:c.instructions+=5;goto B5377d9;
case 0x5377dc:c.instructions+=4;goto B5377dc;
case 0x5377df:c.instructions+=3;goto B5377df;
case 0x5377e2:c.instructions+=2;goto B5377e2;
case 0x5377e5:c.instructions+=1;goto B5377e5;
case 0x5377e7:goto L5377e7;
case 0x5377e9:goto L5377e9;
case 0x5377ed:c.instructions+=14;goto B5377ed;
case 0x5377f0:c.instructions+=13;goto B5377f0;
case 0x5377f2:c.instructions+=12;goto B5377f2;
case 0x5377f4:c.instructions+=11;goto B5377f4;
case 0x5377f7:c.instructions+=10;goto B5377f7;
case 0x5377fa:c.instructions+=9;goto B5377fa;
case 0x5377fc:c.instructions+=8;goto B5377fc;
case 0x5377fe:c.instructions+=7;goto B5377fe;
case 0x537801:c.instructions+=6;goto B537801;
case 0x537803:c.instructions+=5;goto B537803;
case 0x537806:c.instructions+=4;goto B537806;
case 0x53780c:c.instructions+=3;goto B53780c;
case 0x53780d:c.instructions+=2;goto B53780d;
case 0x53780e:c.instructions+=1;goto B53780e;
case 0x537813:goto L537813;
case 0x537816:c.instructions+=2;goto B537816;
case 0x537818:c.instructions+=1;goto B537818;
case 0x53781d:goto L53781d;
case 0x53781e:c.instructions+=4;goto B53781e;
case 0x53781f:c.instructions+=3;goto B53781f;
case 0x537820:c.instructions+=2;goto B537820;
case 0x537821:c.instructions+=1;goto B537821;
case 0x537830:goto L537830;
case 0x537832:c.instructions+=6;goto B537832;
case 0x537837:c.instructions+=5;goto B537837;
case 0x53783d:c.instructions+=4;goto B53783d;
case 0x53783e:c.instructions+=3;goto B53783e;
case 0x537845:c.instructions+=2;goto B537845;
case 0x537846:c.instructions+=1;goto B537846;
case 0x53784b:goto L53784b;
case 0x537850:goto L537850;
case 0x537855:goto L537855;
case 0x53785a:goto L53785a;
case 0x53785f:goto L53785f;
case 0x537864:goto L537864;
case 0x537869:goto L537869;
case 0x53786b:c.instructions+=1;goto B53786b;
case 0x537870:goto L537870;
case 0x537873:c.instructions+=4;goto B537873;
case 0x537877:c.instructions+=3;goto B537877;
case 0x537879:c.instructions+=2;goto B537879;
case 0x537881:c.instructions+=1;goto B537881;
case 0x537883:goto L537883;
case 0x537885:c.instructions+=1;goto B537885;
case 0x53788a:goto L53788a;
case 0x53788c:goto L53788c;
case 0x53788e:goto L53788e;
case 0x537890:c.instructions+=3;goto B537890;
case 0x537898:c.instructions+=2;goto B537898;
case 0x53789d:c.instructions+=1;goto B53789d;
case 0x53789f:goto L53789f;
case 0x5378a2:c.instructions+=1;goto B5378a2;
case 0x5378ac:goto L5378ac;
case 0x5378b1:goto L5378b1;
case 0x5378b5:c.instructions+=3;goto B5378b5;
case 0x5378bc:c.instructions+=2;goto B5378bc;
case 0x5378bf:c.instructions+=1;goto B5378bf;
case 0x5378c0:goto L5378c0;
case 0x5378c5:c.instructions+=2;goto B5378c5;
case 0x5378c7:c.instructions+=1;goto B5378c7;
case 0x5378c9:goto L5378c9;
case 0x5378ce:c.instructions+=2;goto B5378ce;
case 0x5378d0:c.instructions+=1;goto B5378d0;
case 0x5378d2:goto L5378d2;
case 0x5378d5:c.instructions+=4;goto B5378d5;
case 0x5378d6:c.instructions+=3;goto B5378d6;
case 0x5378d9:c.instructions+=2;goto B5378d9;
case 0x5378dc:c.instructions+=1;goto B5378dc;
case 0x5378e1:goto L5378e1;
case 0x5378e6:c.instructions+=2;goto B5378e6;
case 0x5378e9:c.instructions+=1;goto B5378e9;
case 0x5378ee:goto L5378ee;
case 0x5378f3:goto L5378f3;
case 0x5378f8:c.instructions+=3;goto B5378f8;
case 0x5378fa:c.instructions+=2;goto B5378fa;
case 0x5378fb:c.instructions+=1;goto B5378fb;
case 0x5378fd:goto L5378fd;
case 0x537902:c.instructions+=2;goto B537902;
case 0x537904:c.instructions+=1;goto B537904;
case 0x537906:goto L537906;
case 0x53790b:c.instructions+=4;goto B53790b;
case 0x537911:c.instructions+=3;goto B537911;
case 0x537912:c.instructions+=2;goto B537912;
case 0x537913:c.instructions+=1;goto B537913;
case 0x537918:goto L537918;
case 0x53791b:goto L53791b;
case 0x537920:goto L537920;
case 0x537930:goto L537930;
case 0x537935:c.instructions+=2;goto B537935;
case 0x537937:c.instructions+=1;goto B537937;
case 0x537939:goto L537939;
case 0x53793f:c.instructions+=2;goto B53793f;
case 0x537941:c.instructions+=1;goto B537941;
case 0x537943:goto L537943;
case 0x537948:goto L537948;
case 0x537950:goto L537950;
case 0x537954:c.instructions+=2;goto B537954;
case 0x537955:c.instructions+=1;goto B537955;
case 0x53795a:goto L53795a;
case 0x53795d:c.instructions+=2;goto B53795d;
case 0x53795f:c.instructions+=1;goto B53795f;
case 0x537961:goto L537961;
case 0x537965:c.instructions+=4;goto B537965;
case 0x537968:c.instructions+=3;goto B537968;
case 0x53796b:c.instructions+=2;goto B53796b;
case 0x53796e:c.instructions+=1;goto B53796e;
case 0x537971:goto L537971;
case 0x537980:goto L537980;
case 0x537986:c.instructions+=2;goto B537986;
case 0x537988:c.instructions+=1;goto B537988;
case 0x53798a:goto L53798a;
case 0x53798e:c.instructions+=6;goto B53798e;
case 0x537992:c.instructions+=5;goto B537992;
case 0x537993:c.instructions+=4;goto B537993;
case 0x537997:c.instructions+=3;goto B537997;
case 0x537998:c.instructions+=2;goto B537998;
case 0x537999:c.instructions+=1;goto B537999;
case 0x53799e:goto L53799e;
case 0x5379a0:goto L5379a0;
case 0x5379a6:c.instructions+=2;goto B5379a6;
case 0x5379a8:c.instructions+=1;goto B5379a8;
case 0x5379aa:goto L5379aa;
case 0x5379ae:c.instructions+=2;goto B5379ae;
case 0x5379af:c.instructions+=1;goto B5379af;
case 0x5379b4:goto L5379b4;
case 0x5379c0:goto L5379c0;
case 0x5379c1:c.instructions+=5;goto B5379c1;
case 0x5379c5:c.instructions+=4;goto B5379c5;
case 0x5379c7:c.instructions+=3;goto B5379c7;
case 0x5379c8:c.instructions+=2;goto B5379c8;
case 0x5379cc:c.instructions+=1;goto B5379cc;
case 0x5379ce:goto L5379ce;
case 0x5379cf:c.instructions+=1;goto B5379cf;
case 0x5379d4:goto L5379d4;
case 0x5379d7:c.instructions+=2;goto B5379d7;
case 0x5379d9:c.instructions+=1;goto B5379d9;
case 0x5379db:goto L5379db;
case 0x5379dc:c.instructions+=2;goto B5379dc;
case 0x5379de:c.instructions+=1;goto B5379de;
case 0x5379e3:goto L5379e3;
case 0x5379e5:c.instructions+=1;goto B5379e5;
case 0x5379e7:goto L5379e7;
case 0x5379ec:c.instructions+=2;goto B5379ec;
case 0x5379ee:c.instructions+=1;goto B5379ee;
case 0x5379f0:goto L5379f0;
case 0x5379f3:c.instructions+=3;goto B5379f3;
case 0x5379f4:c.instructions+=2;goto B5379f4;
case 0x5379f5:c.instructions+=1;goto B5379f5;
case 0x5379fa:goto L5379fa;
case 0x5379fb:c.instructions+=2;goto B5379fb;
case 0x5379fc:c.instructions+=1;goto B5379fc;
case 0x5379fd:goto L5379fd;
case 0x5379ff:goto L5379ff;
case 0x537a00:c.instructions+=2;goto B537a00;
case 0x537a01:c.instructions+=1;goto B537a01;
case 0x537a10:goto L537a10;
case 0x537a11:c.instructions+=5;goto B537a11;
case 0x537a15:c.instructions+=4;goto B537a15;
case 0x537a17:c.instructions+=3;goto B537a17;
case 0x537a18:c.instructions+=2;goto B537a18;
case 0x537a1c:c.instructions+=1;goto B537a1c;
case 0x537a1e:goto L537a1e;
case 0x537a1f:c.instructions+=1;goto B537a1f;
case 0x537a24:goto L537a24;
case 0x537a27:c.instructions+=2;goto B537a27;
case 0x537a29:c.instructions+=1;goto B537a29;
case 0x537a2b:goto L537a2b;
case 0x537a2c:c.instructions+=2;goto B537a2c;
case 0x537a2e:c.instructions+=1;goto B537a2e;
case 0x537a33:goto L537a33;
case 0x537a35:c.instructions+=1;goto B537a35;
case 0x537a37:goto L537a37;
case 0x537a3c:c.instructions+=2;goto B537a3c;
case 0x537a3e:c.instructions+=1;goto B537a3e;
case 0x537a40:goto L537a40;
case 0x537a43:c.instructions+=3;goto B537a43;
case 0x537a44:c.instructions+=2;goto B537a44;
case 0x537a45:c.instructions+=1;goto B537a45;
case 0x537a4a:goto L537a4a;
case 0x537a4c:c.instructions+=1;goto B537a4c;
case 0x537a4e:goto L537a4e;
case 0x537a52:c.instructions+=1;goto B537a52;
case 0x537a54:goto L537a54;
case 0x537a56:goto L537a56;
case 0x537a57:c.instructions+=2;goto B537a57;
case 0x537a58:c.instructions+=1;goto B537a58;
case 0x537a60:goto L537a60;
case 0x537a61:c.instructions+=5;goto B537a61;
case 0x537a65:c.instructions+=4;goto B537a65;
case 0x537a67:c.instructions+=3;goto B537a67;
case 0x537a68:c.instructions+=2;goto B537a68;
case 0x537a6c:c.instructions+=1;goto B537a6c;
case 0x537a6e:goto L537a6e;
case 0x537a6f:c.instructions+=1;goto B537a6f;
case 0x537a74:goto L537a74;
case 0x537a77:c.instructions+=2;goto B537a77;
case 0x537a79:c.instructions+=1;goto B537a79;
case 0x537a7b:goto L537a7b;
case 0x537a7c:c.instructions+=2;goto B537a7c;
case 0x537a7e:c.instructions+=1;goto B537a7e;
case 0x537a83:goto L537a83;
case 0x537a85:c.instructions+=1;goto B537a85;
case 0x537a87:goto L537a87;
case 0x537a8c:c.instructions+=2;goto B537a8c;
case 0x537a8e:c.instructions+=1;goto B537a8e;
case 0x537a90:goto L537a90;
case 0x537a93:c.instructions+=3;goto B537a93;
case 0x537a94:c.instructions+=2;goto B537a94;
case 0x537a95:c.instructions+=1;goto B537a95;
case 0x537a9a:goto L537a9a;
case 0x537a9c:c.instructions+=1;goto B537a9c;
case 0x537a9e:goto L537a9e;
case 0x537aa2:c.instructions+=1;goto B537aa2;
case 0x537aa4:goto L537aa4;
case 0x537aa6:goto L537aa6;
case 0x537aa7:c.instructions+=2;goto B537aa7;
case 0x537aa8:c.instructions+=1;goto B537aa8;
case 0x537ab0:goto L537ab0;
case 0x537ab1:c.instructions+=3;goto B537ab1;
case 0x537ab5:c.instructions+=2;goto B537ab5;
case 0x537ab7:c.instructions+=1;goto B537ab7;
case 0x537ab9:goto L537ab9;
case 0x537abd:c.instructions+=3;goto B537abd;
case 0x537abe:c.instructions+=2;goto B537abe;
case 0x537ac0:c.instructions+=1;goto B537ac0;
case 0x537ac5:goto L537ac5;
case 0x537ac9:goto L537ac9;
case 0x537aca:c.instructions+=1;goto B537aca;
case 0x537ad0:goto L537ad0;
case 0x537ad1:c.instructions+=5;goto B537ad1;
case 0x537ad5:c.instructions+=4;goto B537ad5;
case 0x537ad7:c.instructions+=3;goto B537ad7;
case 0x537ad8:c.instructions+=2;goto B537ad8;
case 0x537adc:c.instructions+=1;goto B537adc;
case 0x537ade:goto L537ade;
case 0x537adf:c.instructions+=1;goto B537adf;
case 0x537ae4:goto L537ae4;
case 0x537ae7:c.instructions+=2;goto B537ae7;
case 0x537ae9:c.instructions+=1;goto B537ae9;
case 0x537aeb:goto L537aeb;
case 0x537aec:c.instructions+=2;goto B537aec;
case 0x537aee:c.instructions+=1;goto B537aee;
case 0x537af3:goto L537af3;
case 0x537af5:c.instructions+=1;goto B537af5;
case 0x537af7:goto L537af7;
case 0x537afc:c.instructions+=2;goto B537afc;
case 0x537afe:c.instructions+=1;goto B537afe;
case 0x537b00:goto L537b00;
case 0x537b03:c.instructions+=3;goto B537b03;
case 0x537b04:c.instructions+=2;goto B537b04;
case 0x537b05:c.instructions+=1;goto B537b05;
case 0x537b0a:goto L537b0a;
case 0x537b0c:c.instructions+=2;goto B537b0c;
case 0x537b0e:c.instructions+=1;goto B537b0e;
case 0x537b10:goto L537b10;
case 0x537b13:c.instructions+=3;goto B537b13;
case 0x537b18:c.instructions+=2;goto B537b18;
case 0x537b1a:c.instructions+=1;goto B537b1a;
case 0x537b1c:goto L537b1c;
case 0x537b20:c.instructions+=3;goto B537b20;
case 0x537b21:c.instructions+=2;goto B537b21;
case 0x537b23:c.instructions+=1;goto B537b23;
case 0x537b28:goto L537b28;
case 0x537b2b:goto L537b2b;
case 0x537b2c:c.instructions+=2;goto B537b2c;
case 0x537b2d:c.instructions+=1;goto B537b2d;
case 0x537b30:goto L537b30;
case 0x537b31:c.instructions+=3;goto B537b31;
case 0x537b35:c.instructions+=2;goto B537b35;
case 0x537b37:c.instructions+=1;goto B537b37;
case 0x537b39:goto L537b39;
case 0x537b3d:c.instructions+=6;goto B537b3d;
case 0x537b41:c.instructions+=5;goto B537b41;
case 0x537b42:c.instructions+=4;goto B537b42;
case 0x537b43:c.instructions+=3;goto B537b43;
case 0x537b44:c.instructions+=2;goto B537b44;
case 0x537b49:c.instructions+=1;goto B537b49;
case 0x537b4e:goto L537b4e;
case 0x537b50:c.instructions+=4;goto B537b50;
case 0x537b53:c.instructions+=3;goto B537b53;
case 0x537b56:c.instructions+=2;goto B537b56;
case 0x537b5b:c.instructions+=1;goto B537b5b;
case 0x537b5d:goto L537b5d;
case 0x537b64:goto L537b64;
case 0x537b69:c.instructions+=2;goto B537b69;
case 0x537b6b:c.instructions+=1;goto B537b6b;
case 0x537b70:goto L537b70;
case 0x537b74:c.instructions+=4;goto B537b74;
case 0x537b76:c.instructions+=3;goto B537b76;
case 0x537b77:c.instructions+=2;goto B537b77;
case 0x537b78:c.instructions+=1;goto B537b78;
case 0x537b79:goto L537b79;
case 0x537b7b:c.instructions+=2;goto B537b7b;
case 0x537b7c:c.instructions+=1;goto B537b7c;
case 0x537b80:goto L537b80;
case 0x537b81:c.instructions+=5;goto B537b81;
case 0x537b85:c.instructions+=4;goto B537b85;
case 0x537b87:c.instructions+=3;goto B537b87;
case 0x537b88:c.instructions+=2;goto B537b88;
case 0x537b8c:c.instructions+=1;goto B537b8c;
case 0x537b8e:goto L537b8e;
case 0x537b8f:c.instructions+=1;goto B537b8f;
case 0x537b94:goto L537b94;
case 0x537b97:c.instructions+=2;goto B537b97;
case 0x537b99:c.instructions+=1;goto B537b99;
case 0x537b9b:goto L537b9b;
case 0x537b9c:c.instructions+=2;goto B537b9c;
case 0x537b9e:c.instructions+=1;goto B537b9e;
case 0x537ba3:goto L537ba3;
case 0x537ba5:c.instructions+=1;goto B537ba5;
case 0x537ba7:goto L537ba7;
case 0x537bac:c.instructions+=2;goto B537bac;
case 0x537bae:c.instructions+=1;goto B537bae;
case 0x537bb0:goto L537bb0;
case 0x537bb3:c.instructions+=3;goto B537bb3;
case 0x537bb4:c.instructions+=2;goto B537bb4;
case 0x537bb5:c.instructions+=1;goto B537bb5;
case 0x537bba:goto L537bba;
case 0x537bbc:c.instructions+=1;goto B537bbc;
case 0x537bbe:goto L537bbe;
case 0x537bc2:c.instructions+=1;goto B537bc2;
case 0x537bc4:goto L537bc4;
case 0x537bc8:c.instructions+=5;goto B537bc8;
case 0x537bcc:c.instructions+=4;goto B537bcc;
case 0x537bcd:c.instructions+=3;goto B537bcd;
case 0x537bce:c.instructions+=2;goto B537bce;
case 0x537bcf:c.instructions+=1;goto B537bcf;
case 0x537bd4:goto L537bd4;
case 0x537bd7:c.instructions+=3;goto B537bd7;
case 0x537bd8:c.instructions+=2;goto B537bd8;
case 0x537bd9:c.instructions+=1;goto B537bd9;
case 0x537bda:goto L537bda;
case 0x537bdb:c.instructions+=3;goto B537bdb;
case 0x537bdd:c.instructions+=2;goto B537bdd;
case 0x537bde:c.instructions+=1;goto B537bde;
case 0x537be0:goto L537be0;
case 0x537be4:c.instructions+=2;goto B537be4;
case 0x537be6:c.instructions+=1;goto B537be6;
case 0x537be8:goto L537be8;
case 0x537bec:c.instructions+=5;goto B537bec;
case 0x537bf0:c.instructions+=4;goto B537bf0;
case 0x537bf1:c.instructions+=3;goto B537bf1;
case 0x537bf2:c.instructions+=2;goto B537bf2;
case 0x537bf3:c.instructions+=1;goto B537bf3;
case 0x537bf8:goto L537bf8;
case 0x537bfb:c.instructions+=1;goto B537bfb;
case 0x537bfc:goto L537bfc;
case 0x537bfe:c.instructions+=1;goto B537bfe;
case 0x537c00:goto L537c00;
case 0x537c01:c.instructions+=5;goto B537c01;
case 0x537c05:c.instructions+=4;goto B537c05;
case 0x537c07:c.instructions+=3;goto B537c07;
case 0x537c08:c.instructions+=2;goto B537c08;
case 0x537c0c:c.instructions+=1;goto B537c0c;
case 0x537c0e:goto L537c0e;
case 0x537c0f:c.instructions+=1;goto B537c0f;
case 0x537c14:goto L537c14;
case 0x537c17:c.instructions+=2;goto B537c17;
case 0x537c19:c.instructions+=1;goto B537c19;
case 0x537c1b:goto L537c1b;
case 0x537c1c:c.instructions+=2;goto B537c1c;
case 0x537c1e:c.instructions+=1;goto B537c1e;
case 0x537c23:goto L537c23;
case 0x537c25:c.instructions+=1;goto B537c25;
case 0x537c27:goto L537c27;
case 0x537c2c:c.instructions+=2;goto B537c2c;
case 0x537c2e:c.instructions+=1;goto B537c2e;
case 0x537c30:goto L537c30;
case 0x537c33:c.instructions+=3;goto B537c33;
case 0x537c34:c.instructions+=2;goto B537c34;
case 0x537c35:c.instructions+=1;goto B537c35;
case 0x537c3a:goto L537c3a;
case 0x537c3c:goto L537c3c;
case 0x537c3e:goto L537c3e;
case 0x537c42:c.instructions+=5;goto B537c42;
case 0x537c46:c.instructions+=4;goto B537c46;
case 0x537c47:c.instructions+=3;goto B537c47;
case 0x537c48:c.instructions+=2;goto B537c48;
case 0x537c49:c.instructions+=1;goto B537c49;
case 0x537c4e:goto L537c4e;
case 0x537c51:c.instructions+=3;goto B537c51;
case 0x537c52:c.instructions+=2;goto B537c52;
case 0x537c53:c.instructions+=1;goto B537c53;
case 0x537c60:goto L537c60;
case 0x537c61:c.instructions+=5;goto B537c61;
case 0x537c65:c.instructions+=4;goto B537c65;
case 0x537c67:c.instructions+=3;goto B537c67;
case 0x537c68:c.instructions+=2;goto B537c68;
case 0x537c6c:c.instructions+=1;goto B537c6c;
case 0x537c6e:goto L537c6e;
case 0x537c6f:c.instructions+=1;goto B537c6f;
case 0x537c74:goto L537c74;
case 0x537c77:c.instructions+=2;goto B537c77;
case 0x537c79:c.instructions+=1;goto B537c79;
case 0x537c7b:goto L537c7b;
case 0x537c7c:c.instructions+=2;goto B537c7c;
case 0x537c7e:c.instructions+=1;goto B537c7e;
case 0x537c83:goto L537c83;
case 0x537c85:c.instructions+=1;goto B537c85;
case 0x537c87:goto L537c87;
case 0x537c8c:c.instructions+=2;goto B537c8c;
case 0x537c8e:c.instructions+=1;goto B537c8e;
case 0x537c90:goto L537c90;
case 0x537c93:c.instructions+=3;goto B537c93;
case 0x537c94:c.instructions+=2;goto B537c94;
case 0x537c95:c.instructions+=1;goto B537c95;
case 0x537c9a:goto L537c9a;
case 0x537c9c:goto L537c9c;
case 0x537c9e:goto L537c9e;
case 0x537ca2:c.instructions+=5;goto B537ca2;
case 0x537ca6:c.instructions+=4;goto B537ca6;
case 0x537ca7:c.instructions+=3;goto B537ca7;
case 0x537ca8:c.instructions+=2;goto B537ca8;
case 0x537ca9:c.instructions+=1;goto B537ca9;
case 0x537cae:goto L537cae;
case 0x537cb1:c.instructions+=3;goto B537cb1;
case 0x537cb2:c.instructions+=2;goto B537cb2;
case 0x537cb3:c.instructions+=1;goto B537cb3;
case 0x537cc0:goto L537cc0;
case 0x537cc1:c.instructions+=5;goto B537cc1;
case 0x537cc5:c.instructions+=4;goto B537cc5;
case 0x537cc7:c.instructions+=3;goto B537cc7;
case 0x537cc8:c.instructions+=2;goto B537cc8;
case 0x537ccc:c.instructions+=1;goto B537ccc;
case 0x537cce:goto L537cce;
case 0x537ccf:c.instructions+=1;goto B537ccf;
case 0x537cd4:goto L537cd4;
case 0x537cd7:c.instructions+=2;goto B537cd7;
case 0x537cd9:c.instructions+=1;goto B537cd9;
case 0x537cdb:goto L537cdb;
case 0x537cdc:c.instructions+=2;goto B537cdc;
case 0x537cde:c.instructions+=1;goto B537cde;
case 0x537ce3:goto L537ce3;
case 0x537ce5:c.instructions+=1;goto B537ce5;
case 0x537ce7:goto L537ce7;
case 0x537ce9:c.instructions+=1;goto B537ce9;
case 0x537ceb:goto L537ceb;
case 0x537cf0:c.instructions+=2;goto B537cf0;
case 0x537cf2:c.instructions+=1;goto B537cf2;
case 0x537cf4:goto L537cf4;
case 0x537cf7:c.instructions+=3;goto B537cf7;
case 0x537cf8:c.instructions+=2;goto B537cf8;
case 0x537cf9:c.instructions+=1;goto B537cf9;
case 0x537cfe:goto L537cfe;
case 0x537d00:c.instructions+=1;goto B537d00;
case 0x537d02:goto L537d02;
case 0x537d04:goto L537d04;
case 0x537d08:c.instructions+=2;goto B537d08;
case 0x537d09:c.instructions+=1;goto B537d09;
case 0x537d0e:goto L537d0e;
case 0x537d11:c.instructions+=2;goto B537d11;
case 0x537d13:c.instructions+=1;goto B537d13;
case 0x537d15:goto L537d15;
case 0x537d18:c.instructions+=2;goto B537d18;
case 0x537d1a:c.instructions+=1;goto B537d1a;
case 0x537d1c:goto L537d1c;
case 0x537d1f:c.instructions+=1;goto B537d1f;
case 0x537d21:goto L537d21;
case 0x537d24:c.instructions+=2;goto B537d24;
case 0x537d27:c.instructions+=1;goto B537d27;
case 0x537d29:goto L537d29;
case 0x537d2a:c.instructions+=3;goto B537d2a;
case 0x537d2c:c.instructions+=2;goto B537d2c;
case 0x537d2d:c.instructions+=1;goto B537d2d;
case 0x537d2e:goto L537d2e;
case 0x537d2f:c.instructions+=3;goto B537d2f;
case 0x537d31:c.instructions+=2;goto B537d31;
case 0x537d32:c.instructions+=1;goto B537d32;
case 0x537d40:goto L537d40;
case 0x537d41:c.instructions+=5;goto B537d41;
case 0x537d45:c.instructions+=4;goto B537d45;
case 0x537d47:c.instructions+=3;goto B537d47;
case 0x537d48:c.instructions+=2;goto B537d48;
case 0x537d4c:c.instructions+=1;goto B537d4c;
case 0x537d4e:goto L537d4e;
case 0x537d4f:c.instructions+=1;goto B537d4f;
case 0x537d54:goto L537d54;
case 0x537d57:c.instructions+=2;goto B537d57;
case 0x537d59:c.instructions+=1;goto B537d59;
case 0x537d5b:goto L537d5b;
case 0x537d5c:c.instructions+=2;goto B537d5c;
case 0x537d5e:c.instructions+=1;goto B537d5e;
case 0x537d63:goto L537d63;
case 0x537d65:c.instructions+=1;goto B537d65;
case 0x537d67:goto L537d67;
case 0x537d6c:c.instructions+=2;goto B537d6c;
case 0x537d6e:c.instructions+=1;goto B537d6e;
case 0x537d70:goto L537d70;
case 0x537d73:c.instructions+=3;goto B537d73;
case 0x537d74:c.instructions+=2;goto B537d74;
case 0x537d75:c.instructions+=1;goto B537d75;
case 0x537d7a:goto L537d7a;
case 0x537d7c:c.instructions+=1;goto B537d7c;
case 0x537d7e:goto L537d7e;
case 0x537d81:c.instructions+=2;goto B537d81;
case 0x537d83:c.instructions+=1;goto B537d83;
case 0x537d85:goto L537d85;
case 0x537d88:c.instructions+=2;goto B537d88;
case 0x537d8c:c.instructions+=1;goto B537d8c;
case 0x537d8e:goto L537d8e;
case 0x537d91:c.instructions+=2;goto B537d91;
case 0x537d94:c.instructions+=1;goto B537d94;
case 0x537d96:goto L537d96;
case 0x537d97:c.instructions+=3;goto B537d97;
case 0x537d99:c.instructions+=2;goto B537d99;
case 0x537d9a:c.instructions+=1;goto B537d9a;
case 0x537d9b:goto L537d9b;
case 0x537d9c:c.instructions+=3;goto B537d9c;
case 0x537d9e:c.instructions+=2;goto B537d9e;
case 0x537d9f:c.instructions+=1;goto B537d9f;
case 0x537da0:goto L537da0;
case 0x537da1:c.instructions+=6;goto B537da1;
case 0x537da6:c.instructions+=5;goto B537da6;
case 0x537da9:c.instructions+=4;goto B537da9;
case 0x537daa:c.instructions+=3;goto B537daa;
case 0x537db0:c.instructions+=2;goto B537db0;
case 0x537db2:c.instructions+=1;goto B537db2;
case 0x537db8:goto L537db8;
case 0x537db9:c.instructions+=3;goto B537db9;
case 0x537dba:c.instructions+=2;goto B537dba;
case 0x537dbb:c.instructions+=1;goto B537dbb;
case 0x537dc0:goto L537dc0;
case 0x537dc4:c.instructions+=4;goto B537dc4;
case 0x537dc7:c.instructions+=3;goto B537dc7;
case 0x537dca:c.instructions+=2;goto B537dca;
case 0x537dce:c.instructions+=1;goto B537dce;
case 0x537dd0:goto L537dd0;
case 0x537dd1:c.instructions+=1;goto B537dd1;
case 0x537dd6:goto L537dd6;
case 0x537ddb:c.instructions+=4;goto B537ddb;
case 0x537dde:c.instructions+=3;goto B537dde;
case 0x537de1:c.instructions+=2;goto B537de1;
case 0x537de3:c.instructions+=1;goto B537de3;
case 0x537de5:goto L537de5;
case 0x537de8:c.instructions+=4;goto B537de8;
case 0x537deb:c.instructions+=3;goto B537deb;
case 0x537ded:c.instructions+=2;goto B537ded;
case 0x537def:c.instructions+=1;goto B537def;
case 0x537df1:goto L537df1;
case 0x537df4:c.instructions+=3;goto B537df4;
case 0x537df5:c.instructions+=2;goto B537df5;
case 0x537df6:c.instructions+=1;goto B537df6;
case 0x537dfb:goto L537dfb;
case 0x537dfe:c.instructions+=2;goto B537dfe;
case 0x537e00:c.instructions+=1;goto B537e00;
case 0x537e02:goto L537e02;
case 0x537e04:c.instructions+=2;goto B537e04;
case 0x537e06:c.instructions+=1;goto B537e06;
case 0x537e08:goto L537e08;
case 0x537e0a:goto L537e0a;
case 0x537e0d:c.instructions+=2;goto B537e0d;
case 0x537e10:c.instructions+=1;goto B537e10;
case 0x537e12:goto L537e12;
case 0x537e14:c.instructions+=1;goto B537e14;
case 0x537e16:goto L537e16;
case 0x537e17:c.instructions+=2;goto B537e17;
case 0x537e19:c.instructions+=1;goto B537e19;
case 0x537e1e:goto L537e1e;
case 0x537e20:goto L537e20;
case 0x537e21:c.instructions+=2;goto B537e21;
case 0x537e23:c.instructions+=1;goto B537e23;
case 0x537e28:goto L537e28;
case 0x537e2b:c.instructions+=7;goto B537e2b;
case 0x537e2d:c.instructions+=6;goto B537e2d;
case 0x537e2f:c.instructions+=5;goto B537e2f;
case 0x537e32:c.instructions+=4;goto B537e32;
case 0x537e38:c.instructions+=3;goto B537e38;
case 0x537e39:c.instructions+=2;goto B537e39;
case 0x537e3a:c.instructions+=1;goto B537e3a;
case 0x537e3f:goto L537e3f;
case 0x537e42:c.instructions+=2;goto B537e42;
case 0x537e44:c.instructions+=1;goto B537e44;
case 0x537e49:goto L537e49;
case 0x537e4d:c.instructions+=2;goto B537e4d;
case 0x537e4f:c.instructions+=1;goto B537e4f;
case 0x537e55:goto L537e55;
case 0x537e56:c.instructions+=2;goto B537e56;
case 0x537e57:c.instructions+=1;goto B537e57;
case 0x537e58:goto L537e58;
case 0x537e59:c.instructions+=2;goto B537e59;
case 0x537e5a:c.instructions+=1;goto B537e5a;
case 0x537e60:goto L537e60;
case 0x537e61:c.instructions+=6;goto B537e61;
case 0x537e62:c.instructions+=5;goto B537e62;
case 0x537e63:c.instructions+=4;goto B537e63;
case 0x537e65:c.instructions+=3;goto B537e65;
case 0x537e68:c.instructions+=2;goto B537e68;
case 0x537e6a:c.instructions+=1;goto B537e6a;
case 0x537e6c:goto L537e6c;
case 0x537e6d:c.instructions+=1;goto B537e6d;
case 0x537e72:goto L537e72;
case 0x537e75:c.instructions+=2;goto B537e75;
case 0x537e77:c.instructions+=1;goto B537e77;
case 0x537e79:goto L537e79;
case 0x537e7e:c.instructions+=2;goto B537e7e;
case 0x537e80:c.instructions+=1;goto B537e80;
case 0x537e85:goto L537e85;
case 0x537e87:c.instructions+=1;goto B537e87;
case 0x537e89:goto L537e89;
case 0x537e8e:c.instructions+=2;goto B537e8e;
case 0x537e90:c.instructions+=1;goto B537e90;
case 0x537e92:goto L537e92;
case 0x537e95:c.instructions+=3;goto B537e95;
case 0x537e96:c.instructions+=2;goto B537e96;
case 0x537e9b:c.instructions+=1;goto B537e9b;
case 0x537ea0:goto L537ea0;
case 0x537ea2:c.instructions+=1;goto B537ea2;
case 0x537ea4:goto L537ea4;
case 0x537ea8:c.instructions+=1;goto B537ea8;
case 0x537eaa:goto L537eaa;
case 0x537eac:c.instructions+=1;goto B537eac;
case 0x537eae:goto L537eae;
case 0x537eb0:goto L537eb0;
case 0x537eb3:c.instructions+=2;goto B537eb3;
case 0x537eb5:c.instructions+=1;goto B537eb5;
case 0x537eb7:goto L537eb7;
case 0x537eb8:c.instructions+=1;goto B537eb8;
case 0x537ebd:goto L537ebd;
case 0x537ec0:c.instructions+=2;goto B537ec0;
case 0x537ec2:c.instructions+=1;goto B537ec2;
case 0x537ec4:goto L537ec4;
case 0x537ec9:c.instructions+=2;goto B537ec9;
case 0x537ecb:c.instructions+=1;goto B537ecb;
case 0x537ed0:goto L537ed0;
case 0x537ed2:c.instructions+=1;goto B537ed2;
case 0x537ed4:goto L537ed4;
case 0x537ed9:c.instructions+=2;goto B537ed9;
case 0x537edb:c.instructions+=1;goto B537edb;
case 0x537edd:goto L537edd;
case 0x537ee0:c.instructions+=3;goto B537ee0;
case 0x537ee1:c.instructions+=2;goto B537ee1;
case 0x537ee6:c.instructions+=1;goto B537ee6;
case 0x537eeb:goto L537eeb;
case 0x537eed:c.instructions+=1;goto B537eed;
case 0x537eef:goto L537eef;
case 0x537ef3:c.instructions+=1;goto B537ef3;
case 0x537ef5:goto L537ef5;
case 0x537ef7:goto L537ef7;
case 0x537efd:c.instructions+=7;goto B537efd;
case 0x537f03:c.instructions+=6;goto B537f03;
case 0x537f04:c.instructions+=5;goto B537f04;
case 0x537f05:c.instructions+=4;goto B537f05;
case 0x537f06:c.instructions+=3;goto B537f06;
case 0x537f07:c.instructions+=2;goto B537f07;
case 0x537f09:c.instructions+=1;goto B537f09;
case 0x537f0e:goto L537f0e;
case 0x537f11:c.instructions+=2;goto B537f11;
case 0x537f13:c.instructions+=1;goto B537f13;
case 0x537f15:goto L537f15;
case 0x537f18:c.instructions+=4;goto B537f18;
case 0x537f1d:c.instructions+=3;goto B537f1d;
case 0x537f22:c.instructions+=2;goto B537f22;
case 0x537f23:c.instructions+=1;goto B537f23;
case 0x537f28:goto L537f28;
case 0x537f2e:c.instructions+=5;goto B537f2e;
case 0x537f31:c.instructions+=4;goto B537f31;
case 0x537f32:c.instructions+=3;goto B537f32;
case 0x537f37:c.instructions+=2;goto B537f37;
case 0x537f38:c.instructions+=1;goto B537f38;
case 0x537f3d:goto L537f3d;
case 0x537f40:goto L537f40;
case 0x537f41:c.instructions+=3;goto B537f41;
case 0x537f42:c.instructions+=2;goto B537f42;
case 0x537f43:c.instructions+=1;goto B537f43;
case 0x537f50:goto L537f50;
case 0x537f51:c.instructions+=5;goto B537f51;
case 0x537f52:c.instructions+=4;goto B537f52;
case 0x537f54:c.instructions+=3;goto B537f54;
case 0x537f57:c.instructions+=2;goto B537f57;
case 0x537f59:c.instructions+=1;goto B537f59;
case 0x537f5f:goto L537f5f;
case 0x537f64:c.instructions+=5;goto B537f64;
case 0x537f65:c.instructions+=4;goto B537f65;
case 0x537f68:c.instructions+=3;goto B537f68;
case 0x537f69:c.instructions+=2;goto B537f69;
case 0x537f6b:c.instructions+=1;goto B537f6b;
case 0x537f70:goto L537f70;
case 0x537f72:c.instructions+=1;goto B537f72;
case 0x537f74:goto L537f74;
case 0x537f77:c.instructions+=4;goto B537f77;
case 0x537f79:c.instructions+=3;goto B537f79;
case 0x537f7e:c.instructions+=2;goto B537f7e;
case 0x537f7f:c.instructions+=1;goto B537f7f;
case 0x537f84:goto L537f84;
case 0x537f87:c.instructions+=4;goto B537f87;
case 0x537f8a:c.instructions+=3;goto B537f8a;
case 0x537f8d:c.instructions+=2;goto B537f8d;
case 0x537f8f:c.instructions+=1;goto B537f8f;
case 0x537f91:goto L537f91;
case 0x537f94:c.instructions+=4;goto B537f94;
case 0x537f97:c.instructions+=3;goto B537f97;
case 0x537f9a:c.instructions+=2;goto B537f9a;
case 0x537f9e:c.instructions+=1;goto B537f9e;
case 0x537fa0:goto L537fa0;
case 0x537fa3:c.instructions+=2;goto B537fa3;
case 0x537fa6:c.instructions+=1;goto B537fa6;
case 0x537faa:goto L537faa;
case 0x537fad:c.instructions+=4;goto B537fad;
case 0x537faf:c.instructions+=3;goto B537faf;
case 0x537fb4:c.instructions+=2;goto B537fb4;
case 0x537fb5:c.instructions+=1;goto B537fb5;
case 0x537fba:goto L537fba;
case 0x537fbe:c.instructions+=3;goto B537fbe;
case 0x537fc4:c.instructions+=2;goto B537fc4;
case 0x537fca:c.instructions+=1;goto B537fca;
case 0x537fcf:goto L537fcf;
case 0x537fd2:c.instructions+=6;goto B537fd2;
case 0x537fd4:c.instructions+=5;goto B537fd4;
case 0x537fd9:c.instructions+=4;goto B537fd9;
case 0x537fda:c.instructions+=3;goto B537fda;
case 0x537fdf:c.instructions+=2;goto B537fdf;
case 0x537fe0:c.instructions+=1;goto B537fe0;
case 0x537fe5:goto L537fe5;
case 0x537fe8:goto L537fe8;
case 0x537fe9:goto L537fe9;
case 0x537fea:c.instructions+=2;goto B537fea;
case 0x537feb:c.instructions+=1;goto B537feb;
case 0x537ff0:goto L537ff0;
case 0x537ff1:c.instructions+=5;goto B537ff1;
case 0x537ff3:c.instructions+=4;goto B537ff3;
case 0x537ff4:c.instructions+=3;goto B537ff4;
case 0x537ff8:c.instructions+=2;goto B537ff8;
case 0x537ffe:c.instructions+=1;goto B537ffe;
default:missing_instruction(c.pc);}
B537002:L537002:{c.instructions+=9;NFSU2_TR(0x537002);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537003:{NFSU2_TR(0x537003);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B537007:{NFSU2_TR(0x537007);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537008:{NFSU2_TR(0x537008);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53700c:{NFSU2_TR(0x53700c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53700d:{NFSU2_TR(0x53700d);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+220),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537015:{NFSU2_TR(0x537015);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x43700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53701d:{NFSU2_TR(0x53701d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B537025:{NFSU2_TR(0x537025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53702aull));
TAIL_STATIC(0x51b0b0u,51b);
}
B53702a:L53702a:{c.instructions+=7;NFSU2_TR(0x53702a);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53702e:{NFSU2_TR(0x53702e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53702f:{NFSU2_TR(0x53702f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B537033:{NFSU2_TR(0x537033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537034:{NFSU2_TR(0x537034);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B537038:{NFSU2_TR(0x537038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537039:{NFSU2_TR(0x537039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53703eull));
TAIL_STATIC(0x43c990u,43c);
}
B53703e:L53703e:{c.instructions+=5;NFSU2_TR(0x53703e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B537041:{NFSU2_TR(0x537041);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537044:{NFSU2_TR(0x537044);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B537047:{NFSU2_TR(0x537047);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53704a:{NFSU2_TR(0x53704a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53706d;}}
}
B53704c:L53704c:{c.instructions+=5;NFSU2_TR(0x53704c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53704d:{NFSU2_TR(0x53704d);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B537054:{NFSU2_TR(0x537054);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537059:{NFSU2_TR(0x537059);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53705a:{NFSU2_TR(0x53705a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53705full));
TAIL_STATIC(0x512570u,512);
}
B53705f:L53705f:{c.instructions+=4;NFSU2_TR(0x53705f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B537062:{NFSU2_TR(0x537062);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B537064:{NFSU2_TR(0x537064);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53706b:{NFSU2_TR(0x53706b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537070;}}
}
B53706d:L53706d:{c.instructions+=1;NFSU2_TR(0x53706d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537070:L537070:{c.instructions+=11;NFSU2_TR(0x537070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537073:{NFSU2_TR(0x537073);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537074:{NFSU2_TR(0x537074);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537078:{NFSU2_TR(0x537078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537079:{NFSU2_TR(0x537079);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53707d:{NFSU2_TR(0x53707d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53707e:{NFSU2_TR(0x53707e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53707f:{NFSU2_TR(0x53707f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537080:{NFSU2_TR(0x537080);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B537084:{NFSU2_TR(0x537084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537085:{NFSU2_TR(0x537085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53708aull));
TAIL_STATIC(0x51c110u,51c);
}
B53708a:L53708a:{c.instructions+=6;NFSU2_TR(0x53708a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53708b:{NFSU2_TR(0x53708b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53708c:{NFSU2_TR(0x53708c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53708d:{NFSU2_TR(0x53708d);
__builtin_memmove((R+16),(R+20),4);
}
B53708f:{NFSU2_TR(0x53708f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B537090:{NFSU2_TR(0x537090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5370a0:L5370a0:{c.instructions+=6;NFSU2_TR(0x5370a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5370a4:{NFSU2_TR(0x5370a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5370a5:{NFSU2_TR(0x5370a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5370a6:{NFSU2_TR(0x5370a6);
__builtin_memmove((R+28),(R+4),4);
}
B5370a8:{NFSU2_TR(0x5370a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5370ac:{NFSU2_TR(0x5370ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5370b5;}}
}
B5370ae:L5370ae:{c.instructions+=1;NFSU2_TR(0x5370ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5370b5:L5370b5:{c.instructions+=4;NFSU2_TR(0x5370b5);
__builtin_memmove((R+24),gp(0x8900d8),4);
}
B5370bb:{NFSU2_TR(0x5370bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5370bd:{NFSU2_TR(0x5370bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5370c0:{NFSU2_TR(0x5370c0);
if(r1(R+518)){{goto L5370fd;}}
}
B5370c2:L5370c2:{c.instructions+=2;NFSU2_TR(0x5370c2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5370c5:{NFSU2_TR(0x5370c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5370fd;}}
}
B5370c7:L5370c7:{c.instructions+=5;NFSU2_TR(0x5370c7);
__builtin_memmove((R+24),gp(0x837d20),4);
}
B5370cd:{NFSU2_TR(0x5370cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5370ce:{NFSU2_TR(0x5370ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5370d0:{NFSU2_TR(0x5370d0);
__builtin_memmove(gp(0x837d20),(R+24),4);
}
B5370d6:{NFSU2_TR(0x5370d6);
if(r1(R+518)){{goto L537120;}}
}
B5370d8:L5370d8:{c.instructions+=5;NFSU2_TR(0x5370d8);
s4(0x837d24,u32(u32(m4(0x837d24))+u32(u32(0x1ull))));
}
B5370de:{NFSU2_TR(0x5370de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5370e1:{NFSU2_TR(0x5370e1);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5370e3:{NFSU2_TR(0x5370e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5370e6:{NFSU2_TR(0x5370e6);
if(r1(R+518)){{goto L5370ee;}}
}
B5370e8:L5370e8:{c.instructions+=1;NFSU2_TR(0x5370e8);
s4(0x837d28,u32(u32(m4(0x837d28))+u32(u32(0x1ull))));
}
B5370ee:L5370ee:{c.instructions+=2;NFSU2_TR(0x5370ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5370f5:{NFSU2_TR(0x5370f5);
if(r1(R+518)){{goto L5370fd;}}
}
B5370f7:L5370f7:{c.instructions+=1;NFSU2_TR(0x5370f7);
s4(0x837d2c,u32(u32(m4(0x837d2c))+u32(u32(0x1ull))));
}
B5370fd:L5370fd:{c.instructions+=2;NFSU2_TR(0x5370fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5370ff:{NFSU2_TR(0x5370ff);
if(r1(R+518)){{goto L537120;}}
}
B537101:L537101:{c.instructions+=4;NFSU2_TR(0x537101);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537104:{NFSU2_TR(0x537104);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B537106:{NFSU2_TR(0x537106);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B537109:{NFSU2_TR(0x537109);
if(r1(R+518)){{goto L537120;}}
}
B53710b:L53710b:{c.instructions+=2;NFSU2_TR(0x53710b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x2000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B537112:{NFSU2_TR(0x537112);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537120;}}
}
B537114:L537114:{c.instructions+=2;NFSU2_TR(0x537114);
__builtin_memmove((R+4),(R+8),4);
}
B537116:{NFSU2_TR(0x537116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53711bull));
TAIL_STATIC(0x51a5d0u,51a);
}
B53711b:L53711b:{c.instructions+=3;NFSU2_TR(0x53711b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53711c:{NFSU2_TR(0x53711c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53711d:{NFSU2_TR(0x53711d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537120:L537120:{c.instructions+=4;NFSU2_TR(0x537120);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537123:{NFSU2_TR(0x537123);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B537124:{NFSU2_TR(0x537124);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B537127:{NFSU2_TR(0x537127);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L537177;}}
}
B537129:L537129:{c.instructions+=1;NFSU2_TR(0x537129);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53717cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B537130:L537130:{c.instructions+=6;NFSU2_TR(0x537130);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537134:{NFSU2_TR(0x537134);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537135:{NFSU2_TR(0x537135);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537136:{NFSU2_TR(0x537136);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537137:{NFSU2_TR(0x537137);
__builtin_memmove((R+4),(R+28),4);
}
B537139:{NFSU2_TR(0x537139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53713eull));
TAIL_STATIC(0x536a50u,536);
}
B53713e:L53713e:{c.instructions+=3;NFSU2_TR(0x53713e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53713f:{NFSU2_TR(0x53713f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537140:{NFSU2_TR(0x537140);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537143:L537143:{c.instructions+=6;NFSU2_TR(0x537143);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537147:{NFSU2_TR(0x537147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537148:{NFSU2_TR(0x537148);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537149:{NFSU2_TR(0x537149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53714a:{NFSU2_TR(0x53714a);
__builtin_memmove((R+4),(R+28),4);
}
B53714c:{NFSU2_TR(0x53714c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537151ull));
TAIL_STATIC(0x536c80u,536);
}
B537151:L537151:{c.instructions+=3;NFSU2_TR(0x537151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537152:{NFSU2_TR(0x537152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537153:{NFSU2_TR(0x537153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537156:L537156:{c.instructions+=6;NFSU2_TR(0x537156);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53715a:{NFSU2_TR(0x53715a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53715b:{NFSU2_TR(0x53715b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53715c:{NFSU2_TR(0x53715c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53715d:{NFSU2_TR(0x53715d);
__builtin_memmove((R+4),(R+28),4);
}
B53715f:{NFSU2_TR(0x53715f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537164ull));
TAIL_STATIC(0x536f60u,536);
}
B537164:L537164:{c.instructions+=3;NFSU2_TR(0x537164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537165:{NFSU2_TR(0x537165);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537166:{NFSU2_TR(0x537166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537169:L537169:{c.instructions+=6;NFSU2_TR(0x537169);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53716d:{NFSU2_TR(0x53716d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53716e:{NFSU2_TR(0x53716e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53716f:{NFSU2_TR(0x53716f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537170:{NFSU2_TR(0x537170);
__builtin_memmove((R+4),(R+28),4);
}
B537172:{NFSU2_TR(0x537172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537177ull));
TAIL_STATIC(0x536850u,536);
}
B537177:L537177:{c.instructions+=3;NFSU2_TR(0x537177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537178:{NFSU2_TR(0x537178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537179:{NFSU2_TR(0x537179);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5371a0:L5371a0:{c.instructions+=5;NFSU2_TR(0x5371a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5371a4:{NFSU2_TR(0x5371a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371a5:{NFSU2_TR(0x5371a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5371a8:{NFSU2_TR(0x5371a8);
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
B5371aa:{NFSU2_TR(0x5371aa);
if(r1(R+518)){{goto L5371e0;}}
}
B5371ac:L5371ac:{c.instructions+=9;NFSU2_TR(0x5371ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5371b3:{NFSU2_TR(0x5371b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5371b5:{NFSU2_TR(0x5371b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5371b8:{NFSU2_TR(0x5371b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5371ba:{NFSU2_TR(0x5371ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5371bd:{NFSU2_TR(0x5371bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5371c1:{NFSU2_TR(0x5371c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371c2:{NFSU2_TR(0x5371c2);
__builtin_memmove((R+4),(R+24),4);
}
B5371c4:{NFSU2_TR(0x5371c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5371c9ull));
TAIL_STATIC(0x52c3a0u,52c);
}
B5371c9:L5371c9:{c.instructions+=2;NFSU2_TR(0x5371c9);
__builtin_memmove((R+4),(R+24),4);
}
B5371cb:{NFSU2_TR(0x5371cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5371d0ull));
TAIL_STATIC(0x52c390u,52c);
}
B5371d0:L5371d0:{c.instructions+=4;NFSU2_TR(0x5371d0);
__builtin_memmove((R+4),gp(0x83847c),4);
}
B5371d6:{NFSU2_TR(0x5371d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371d7:{NFSU2_TR(0x5371d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371d8:{NFSU2_TR(0x5371d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5371ddull));
TAIL_STATIC(0x43f920u,43f);
}
B5371dd:L5371dd:{c.instructions+=1;NFSU2_TR(0x5371dd);
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
B5371e0:L5371e0:{c.instructions+=2;NFSU2_TR(0x5371e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5371e1:{NFSU2_TR(0x5371e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5371f0:L5371f0:{c.instructions+=10;NFSU2_TR(0x5371f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371f1:{NFSU2_TR(0x5371f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371f2:{NFSU2_TR(0x5371f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371f3:{NFSU2_TR(0x5371f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371f4:{NFSU2_TR(0x5371f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5371f5:{NFSU2_TR(0x5371f5);
__builtin_memmove((R+28),(R+4),4);
}
B5371f7:{NFSU2_TR(0x5371f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5371fb:{NFSU2_TR(0x5371fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5371fe:{NFSU2_TR(0x5371fe);
w4(R+12,u32(0x40ull));
}
B537203:{NFSU2_TR(0x537203);
w4(R+20,u32(0x2000000ull));
}
B537208:L537208:{c.instructions+=3;NFSU2_TR(0x537208);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53720b:{NFSU2_TR(0x53720b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53720d:{NFSU2_TR(0x53720d);
if(r1(R+518)){{goto L53722c;}}
}
B53720f:L53720f:{c.instructions+=3;NFSU2_TR(0x53720f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537212:{NFSU2_TR(0x537212);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537214:{NFSU2_TR(0x537214);
if(r1(R+518)){{goto L53722c;}}
}
B537216:L537216:{c.instructions+=3;NFSU2_TR(0x537216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B537218:{NFSU2_TR(0x537218);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53721a:{NFSU2_TR(0x53721a);
if(r1(R+518)){{goto L53722c;}}
}
B53721c:L53721c:{c.instructions+=2;NFSU2_TR(0x53721c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53721f:{NFSU2_TR(0x53721f);
if(r1(R+518)){{goto L53722c;}}
}
B537221:L537221:{c.instructions+=4;NFSU2_TR(0x537221);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B537224:{NFSU2_TR(0x537224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537225:{NFSU2_TR(0x537225);
__builtin_memmove((R+4),(R+28),4);
}
B537227:{NFSU2_TR(0x537227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53722cull));
TAIL_STATIC(0x51b3a0u,51b);
}
B53722c:L53722c:{c.instructions+=3;NFSU2_TR(0x53722c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B537232:{NFSU2_TR(0x537232);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B537233:{NFSU2_TR(0x537233);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537208u);}goto L537208;}}
}
B537235:L537235:{c.instructions+=3;NFSU2_TR(0x537235);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B537239:{NFSU2_TR(0x537239);
w4(R+28,u32(0x864198ull));
}
B53723e:{NFSU2_TR(0x53723e);
__builtin_memmove((R+28),(R+28),4);
}
B537240:L537240:{c.instructions+=3;NFSU2_TR(0x537240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B537242:{NFSU2_TR(0x537242);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537244:{NFSU2_TR(0x537244);
if(r1(R+518)){{goto L537272;}}
}
B537246:L537246:{c.instructions+=3;NFSU2_TR(0x537246);
__builtin_memmove((R+24),(R+0),4);
}
B537248:{NFSU2_TR(0x537248);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53724a:{NFSU2_TR(0x53724a);
if(r1(R+518)){{goto L53726d;}}
}
B53724c:L53724c:{c.instructions+=1;NFSU2_TR(0x53724c);
__builtin_memmove((R+16),(R+16),4);
}
B537250:L537250:{c.instructions+=3;NFSU2_TR(0x537250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B537253:{NFSU2_TR(0x537253);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537254:{NFSU2_TR(0x537254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537259ull));
TAIL_STATIC(0x50b970u,50b);
}
B537259:L537259:{c.instructions+=5;NFSU2_TR(0x537259);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53725d:{NFSU2_TR(0x53725d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537260:{NFSU2_TR(0x537260);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537261:{NFSU2_TR(0x537261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537262:{NFSU2_TR(0x537262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537267ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5370a0u);}goto L5370a0;}
}
B537267:L537267:{c.instructions+=3;NFSU2_TR(0x537267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B537269:{NFSU2_TR(0x537269);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53726b:{NFSU2_TR(0x53726b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537250u);}goto L537250;}}
}
B53726d:L53726d:{c.instructions+=2;NFSU2_TR(0x53726d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+28)),r4(U+0));
}
B53726f:{NFSU2_TR(0x53726f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537272:L537272:{c.instructions+=3;NFSU2_TR(0x537272);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8ull))));
}
B537275:{NFSU2_TR(0x537275);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x8639a0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8639a0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8639a0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53727b:{NFSU2_TR(0x53727b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537240u);}goto L537240;}}
}
B53727d:L53727d:{c.instructions+=1;NFSU2_TR(0x53727d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537282ull));
TAIL_STATIC(0x4022c0u,402);
}
B537282:L537282:{c.instructions+=6;NFSU2_TR(0x537282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537283:{NFSU2_TR(0x537283);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537284:{NFSU2_TR(0x537284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B537285:{NFSU2_TR(0x537285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537286:{NFSU2_TR(0x537286);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B537287:{NFSU2_TR(0x537287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537290:L537290:{c.instructions+=3;NFSU2_TR(0x537290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537294:{NFSU2_TR(0x537294);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30201ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53729a:{NFSU2_TR(0x53729a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5372d6;}}
}
B53729c:L53729c:{c.instructions+=4;NFSU2_TR(0x53729c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B53729f:{NFSU2_TR(0x53729f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372a0:{NFSU2_TR(0x5372a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372a1:{NFSU2_TR(0x5372a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5372a6ull));
TAIL_STATIC(0x505450u,505);
}
B5372a6:L5372a6:{c.instructions+=2;NFSU2_TR(0x5372a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372a7:{NFSU2_TR(0x5372a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5372acull));
TAIL_STATIC(0x51bd70u,51b);
}
B5372ac:L5372ac:{c.instructions+=4;NFSU2_TR(0x5372ac);
__builtin_memmove((R+24),(R+0),4);
}
B5372ae:{NFSU2_TR(0x5372ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5372b1:{NFSU2_TR(0x5372b1);
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
B5372b3:{NFSU2_TR(0x5372b3);
if(r1(R+518)){{goto L5372cf;}}
}
B5372b5:L5372b5:{c.instructions+=6;NFSU2_TR(0x5372b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5372b8:{NFSU2_TR(0x5372b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5372ba:{NFSU2_TR(0x5372ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5372bc:{NFSU2_TR(0x5372bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5372bf:{NFSU2_TR(0x5372bf);
__builtin_memmove((R+4),(R+24),4);
}
B5372c1:{NFSU2_TR(0x5372c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5372c6ull));
TAIL_STATIC(0x51bf60u,51b);
}
B5372c6:L5372c6:{c.instructions+=2;NFSU2_TR(0x5372c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372c7:{NFSU2_TR(0x5372c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5372ccull));
TAIL_STATIC(0x575630u,575);
}
B5372cc:L5372cc:{c.instructions+=1;NFSU2_TR(0x5372cc);
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
B5372cf:L5372cf:{c.instructions+=3;NFSU2_TR(0x5372cf);
w4(R+0,u32(0x1ull));
}
B5372d4:{NFSU2_TR(0x5372d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5372d5:{NFSU2_TR(0x5372d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5372d6:L5372d6:{c.instructions+=2;NFSU2_TR(0x5372d6);
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
B5372d8:{NFSU2_TR(0x5372d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5372e0:L5372e0:{c.instructions+=18;NFSU2_TR(0x5372e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372e2:{NFSU2_TR(0x5372e2);
u8 U[4];
w4(U+0,u32(0x777693ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372e7:{NFSU2_TR(0x5372e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5372ed:{NFSU2_TR(0x5372ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372ee:{NFSU2_TR(0x5372ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5372f5:{NFSU2_TR(0x5372f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5372f8:{NFSU2_TR(0x5372f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372f9:{NFSU2_TR(0x5372f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5372fa:{NFSU2_TR(0x5372fa);
__builtin_memmove((R+24),(R+4),4);
}
B5372fc:{NFSU2_TR(0x5372fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5372ff:{NFSU2_TR(0x5372ff);
u8 U[4];
w4(U+0,u32(0x79bcd8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B537305:{NFSU2_TR(0x537305);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537309:{NFSU2_TR(0x537309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53730b:{NFSU2_TR(0x53730b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53730e:{NFSU2_TR(0x53730e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B537310:{NFSU2_TR(0x537310);
u8 U[4];
w4(U+0,u32(0x5254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537315:{NFSU2_TR(0x537315);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537319:{NFSU2_TR(0x537319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53731eull));
TAIL_STATIC(0x575620u,575);
}
B53731e:L53731e:{c.instructions+=5;NFSU2_TR(0x53731e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537321:{NFSU2_TR(0x537321);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537325:{NFSU2_TR(0x537325);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537327:{NFSU2_TR(0x537327);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53732c:{NFSU2_TR(0x53732c);
if(r1(R+518)){{goto L537337;}}
}
B53732e:L53732e:{c.instructions+=2;NFSU2_TR(0x53732e);
__builtin_memmove((R+4),(R+0),4);
}
B537330:{NFSU2_TR(0x537330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537335ull));
TAIL_STATIC(0x536170u,536);
}
B537335:L537335:{c.instructions+=1;NFSU2_TR(0x537335);
{goto L537339;}
}
B537337:L537337:{c.instructions+=1;NFSU2_TR(0x537337);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B537339:L537339:{c.instructions+=7;NFSU2_TR(0x537339);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53733a:{NFSU2_TR(0x53733a);
u8 U[4];
w4(U+0,u32(0x79bcc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53733f:{NFSU2_TR(0x53733f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537341:{NFSU2_TR(0x537341);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537343:{NFSU2_TR(0x537343);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B537347:{NFSU2_TR(0x537347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53734a:{NFSU2_TR(0x53734a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53734full));
TAIL_STATIC(0x440df0u,440);
}
B53734f:L53734f:{c.instructions+=7;NFSU2_TR(0x53734f);
__builtin_memmove(gp(0x8384b0),(R+0),4);
}
B537354:{NFSU2_TR(0x537354);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537357:{NFSU2_TR(0x537357);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53735a:{NFSU2_TR(0x53735a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537360:{NFSU2_TR(0x537360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537363:{NFSU2_TR(0x537363);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537365:{NFSU2_TR(0x537365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53736aull));
TAIL_STATIC(0x51a740u,51a);
}
B53736a:L53736a:{c.instructions+=2;NFSU2_TR(0x53736a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53736d:{NFSU2_TR(0x53736d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537372ull));
TAIL_STATIC(0x51a7e0u,51a);
}
B537372:L537372:{c.instructions+=5;NFSU2_TR(0x537372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537375:{NFSU2_TR(0x537375);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53737b:{NFSU2_TR(0x53737b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53737d:{NFSU2_TR(0x53737d);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B537380:{NFSU2_TR(0x537380);
if(r1(R+518)){{goto L53738e;}}
}
B537382:L537382:{c.instructions+=5;NFSU2_TR(0x537382);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B537384:{NFSU2_TR(0x537384);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B537387:{NFSU2_TR(0x537387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53738a:{NFSU2_TR(0x53738a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53738c:{NFSU2_TR(0x53738c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537382u);}goto L537382;}}
}
B53738e:L53738e:{c.instructions+=7;NFSU2_TR(0x53738e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537391:{NFSU2_TR(0x537391);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B537395:{NFSU2_TR(0x537395);
u8 U[4];
w4(U+0,u32(0x3420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53739a:{NFSU2_TR(0x53739a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53739d:{NFSU2_TR(0x53739d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5373a0:{NFSU2_TR(0x5373a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5373a4:{NFSU2_TR(0x5373a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5373a9ull));
TAIL_STATIC(0x575620u,575);
}
B5373a9:L5373a9:{c.instructions+=5;NFSU2_TR(0x5373a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5373ac:{NFSU2_TR(0x5373ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5373b0:{NFSU2_TR(0x5373b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5373b2:{NFSU2_TR(0x5373b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5373b7:{NFSU2_TR(0x5373b7);
if(r1(R+518)){{goto L5373d6;}}
}
B5373b9:L5373b9:{c.instructions+=2;NFSU2_TR(0x5373b9);
__builtin_memmove((R+4),(R+0),4);
}
B5373bb:{NFSU2_TR(0x5373bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5373c0ull));
TAIL_STATIC(0x536050u,536);
}
B5373c0:L5373c0:{c.instructions+=8;NFSU2_TR(0x5373c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5373c3:{NFSU2_TR(0x5373c3);
__builtin_memmove((R+0),(R+24),4);
}
B5373c5:{NFSU2_TR(0x5373c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5373c6:{NFSU2_TR(0x5373c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5373c7:{NFSU2_TR(0x5373c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5373cb:{NFSU2_TR(0x5373cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5373d2:{NFSU2_TR(0x5373d2);
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
B5373d5:{NFSU2_TR(0x5373d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5373d6:L5373d6:{c.instructions+=8;NFSU2_TR(0x5373d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5373da:{NFSU2_TR(0x5373da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5373dd:{NFSU2_TR(0x5373dd);
__builtin_memmove((R+0),(R+24),4);
}
B5373df:{NFSU2_TR(0x5373df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5373e0:{NFSU2_TR(0x5373e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5373e1:{NFSU2_TR(0x5373e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5373e8:{NFSU2_TR(0x5373e8);
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
B5373eb:{NFSU2_TR(0x5373eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5373f0:L5373f0:{c.instructions+=15;NFSU2_TR(0x5373f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5373f2:{NFSU2_TR(0x5373f2);
u8 U[4];
w4(U+0,u32(0x7776abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5373f7:{NFSU2_TR(0x5373f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5373fd:{NFSU2_TR(0x5373fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5373fe:{NFSU2_TR(0x5373fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537405:{NFSU2_TR(0x537405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537406:{NFSU2_TR(0x537406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537407:{NFSU2_TR(0x537407);
__builtin_memmove((R+24),(R+4),4);
}
B537409:{NFSU2_TR(0x537409);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53740a:{NFSU2_TR(0x53740a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53740e:{NFSU2_TR(0x53740e);
u8 U[4];
w4(U+0,u32(0x79bcd8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B537414:{NFSU2_TR(0x537414);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B537419:{NFSU2_TR(0x537419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53741a:{NFSU2_TR(0x53741a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B537422:{NFSU2_TR(0x537422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537427ull));
TAIL_STATIC(0x440e40u,440);
}
B537427:L537427:{c.instructions+=4;NFSU2_TR(0x537427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53742a:{NFSU2_TR(0x53742a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53742d:{NFSU2_TR(0x53742d);
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
B53742f:{NFSU2_TR(0x53742f);
if(r1(R+518)){{goto L537437;}}
}
B537431:L537431:{c.instructions+=3;NFSU2_TR(0x537431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B537433:{NFSU2_TR(0x537433);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537435:{NFSU2_TR(0x537435);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537437ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B537437:L537437:{c.instructions+=2;NFSU2_TR(0x537437);
__builtin_memmove((R+4),(R+24),4);
}
B537439:{NFSU2_TR(0x537439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53743eull));
TAIL_STATIC(0x50c680u,50c);
}
B53743e:L53743e:{c.instructions+=3;NFSU2_TR(0x53743e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537441:{NFSU2_TR(0x537441);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537443:{NFSU2_TR(0x537443);
if(r1(R+518)){{goto L537455;}}
}
B537445:L537445:{c.instructions+=2;NFSU2_TR(0x537445);
__builtin_memmove((R+4),(R+28),4);
}
B537447:{NFSU2_TR(0x537447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53744cull));
TAIL_STATIC(0x52c430u,52c);
}
B53744c:L53744c:{c.instructions+=2;NFSU2_TR(0x53744c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53744d:{NFSU2_TR(0x53744d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537452ull));
TAIL_STATIC(0x575630u,575);
}
B537452:L537452:{c.instructions+=1;NFSU2_TR(0x537452);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537455:L537455:{c.instructions+=3;NFSU2_TR(0x537455);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B537458:{NFSU2_TR(0x537458);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B537460:{NFSU2_TR(0x537460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537465ull));
TAIL_STATIC(0x5318c0u,531);
}
B537465:L537465:{c.instructions+=6;NFSU2_TR(0x537465);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537469:{NFSU2_TR(0x537469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53746a:{NFSU2_TR(0x53746a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53746b:{NFSU2_TR(0x53746b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537472:{NFSU2_TR(0x537472);
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
B537475:{NFSU2_TR(0x537475);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537480:L537480:{c.instructions+=2;NFSU2_TR(0x537480);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537483:{NFSU2_TR(0x537483);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5371f0u);}goto L5371f0;}
}
B537490:L537490:{c.instructions+=9;NFSU2_TR(0x537490);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537492:{NFSU2_TR(0x537492);
u8 U[4];
w4(U+0,u32(0x777108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537497:{NFSU2_TR(0x537497);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53749d:{NFSU2_TR(0x53749d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53749e:{NFSU2_TR(0x53749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5374a5:{NFSU2_TR(0x5374a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5374a6:{NFSU2_TR(0x5374a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5374aa:{NFSU2_TR(0x5374aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5374ab:{NFSU2_TR(0x5374ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5374b0ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5374b0:L5374b0:{c.instructions+=3;NFSU2_TR(0x5374b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5374b3:{NFSU2_TR(0x5374b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5374b5:{NFSU2_TR(0x5374b5);
if(r1(R+518)){{goto L5374d3;}}
}
B5374b7:L5374b7:{c.instructions+=6;NFSU2_TR(0x5374b7);
u8 U[4];
w4(U+0,u32(0x79ab84ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5374bf:{NFSU2_TR(0x5374bf);
__builtin_memmove((R+4),(R+16),4);
}
B5374c3:{NFSU2_TR(0x5374c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5374c4:{NFSU2_TR(0x5374c4);
__builtin_memmove((R+4),(R+0),4);
}
B5374c6:{NFSU2_TR(0x5374c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5374ce:{NFSU2_TR(0x5374ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5374d3ull));
TAIL_STATIC(0x504880u,504);
}
B5374d3:L5374d3:{c.instructions+=4;NFSU2_TR(0x5374d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5374d7:{NFSU2_TR(0x5374d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5374de:{NFSU2_TR(0x5374de);
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
B5374e1:{NFSU2_TR(0x5374e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5374f0:L5374f0:{c.instructions+=6;NFSU2_TR(0x5374f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5374f4:{NFSU2_TR(0x5374f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5374f7:{NFSU2_TR(0x5374f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5374f8:{NFSU2_TR(0x5374f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5374fb:{NFSU2_TR(0x5374fb);
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
B5374fd:{NFSU2_TR(0x5374fd);
if(r1(R+518)){{goto L53752e;}}
}
B5374ff:L5374ff:{c.instructions+=8;NFSU2_TR(0x5374ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B537506:{NFSU2_TR(0x537506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537509:{NFSU2_TR(0x537509);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53750b:{NFSU2_TR(0x53750b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53750d:{NFSU2_TR(0x53750d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537510:{NFSU2_TR(0x537510);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537511:{NFSU2_TR(0x537511);
__builtin_memmove((R+4),(R+24),4);
}
B537513:{NFSU2_TR(0x537513);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537518ull));
TAIL_STATIC(0x52c3a0u,52c);
}
B537518:L537518:{c.instructions+=2;NFSU2_TR(0x537518);
__builtin_memmove((R+4),(R+24),4);
}
B53751a:{NFSU2_TR(0x53751a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53751full));
TAIL_STATIC(0x52c390u,52c);
}
B53751f:L53751f:{c.instructions+=4;NFSU2_TR(0x53751f);
__builtin_memmove((R+0),gp(0x83847c),4);
}
B537524:{NFSU2_TR(0x537524);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537525:{NFSU2_TR(0x537525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537526:{NFSU2_TR(0x537526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53752bull));
TAIL_STATIC(0x43f920u,43f);
}
B53752b:L53752b:{c.instructions+=1;NFSU2_TR(0x53752b);
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
B53752e:L53752e:{c.instructions+=3;NFSU2_TR(0x53752e);
w1(R+0,u8(0x1ull));
}
B537530:{NFSU2_TR(0x537530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537531:{NFSU2_TR(0x537531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537540:L537540:{c.instructions+=5;NFSU2_TR(0x537540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537541:{NFSU2_TR(0x537541);
__builtin_memmove((R+24),(R+4),4);
}
B537543:{NFSU2_TR(0x537543);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537548:{NFSU2_TR(0x537548);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53754c:{NFSU2_TR(0x53754c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537551ull));
TAIL_STATIC(0x52cf60u,52c);
}
B537551:L537551:{c.instructions+=3;NFSU2_TR(0x537551);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537554:{NFSU2_TR(0x537554);
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
B537556:{NFSU2_TR(0x537556);
if(r1(R+518)){{goto L537573;}}
}
B537558:L537558:{c.instructions+=2;NFSU2_TR(0x537558);
u8 U[4];
w4(U+0,u32(0x799facull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53755d:{NFSU2_TR(0x53755d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537562ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537562:L537562:{c.instructions+=3;NFSU2_TR(0x537562);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537565:{NFSU2_TR(0x537565);
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
B537567:{NFSU2_TR(0x537567);
if(r1(R+518)){{goto L537573;}}
}
B537569:L537569:{c.instructions+=4;NFSU2_TR(0x537569);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53756b:{NFSU2_TR(0x53756b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53756c:{NFSU2_TR(0x53756c);
__builtin_memmove((R+4),(R+24),4);
}
B53756e:{NFSU2_TR(0x53756e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537573ull));
TAIL_STATIC(0x51ca50u,51c);
}
B537573:L537573:{c.instructions+=3;NFSU2_TR(0x537573);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B537577:{NFSU2_TR(0x537577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537578:{NFSU2_TR(0x537578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537580:L537580:{c.instructions+=13;NFSU2_TR(0x537580);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537586:{NFSU2_TR(0x537586);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537588:{NFSU2_TR(0x537588);
u8 U[4];
w4(U+0,u32(0x776f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53758d:{NFSU2_TR(0x53758d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53758e:{NFSU2_TR(0x53758e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537595:{NFSU2_TR(0x537595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B537598:{NFSU2_TR(0x537598);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537599:{NFSU2_TR(0x537599);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53759d:{NFSU2_TR(0x53759d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53759e:{NFSU2_TR(0x53759e);
__builtin_memmove((R+28),(R+4),4);
}
B5375a0:{NFSU2_TR(0x5375a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5375a1:{NFSU2_TR(0x5375a1);
w4(R+4,u32(0x8637b0ull));
}
B5375a6:{NFSU2_TR(0x5375a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5375abull));
TAIL_STATIC(0x51bb70u,51b);
}
B5375ab:L5375ab:{c.instructions+=2;NFSU2_TR(0x5375ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5375ad:{NFSU2_TR(0x5375ad);
if(r1(R+518)){{goto L537617;}}
}
B5375af:L5375af:{c.instructions+=4;NFSU2_TR(0x5375af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5375b0:{NFSU2_TR(0x5375b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5375b3:{NFSU2_TR(0x5375b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5375b5:{NFSU2_TR(0x5375b5);
if(r1(R+518)){{goto L537616;}}
}
B5375b7:L5375b7:{c.instructions+=4;NFSU2_TR(0x5375b7);
u8 U[4];
w4(U+0,u32(0xd9ca113dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5375bc:{NFSU2_TR(0x5375bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5375bd:{NFSU2_TR(0x5375bd);
w4(R+4,u32(0x8637b0ull));
}
B5375c2:{NFSU2_TR(0x5375c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5375c7ull));
TAIL_STATIC(0x55dc20u,55d);
}
B5375c7:L5375c7:{c.instructions+=7;NFSU2_TR(0x5375c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x79ab9cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5375cf:{NFSU2_TR(0x5375cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5375d2:{NFSU2_TR(0x5375d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5375d6:{NFSU2_TR(0x5375d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5375d9:{NFSU2_TR(0x5375d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5375db:{NFSU2_TR(0x5375db);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5375e3:{NFSU2_TR(0x5375e3);
if(r1(R+518)){{goto L5375ea;}}
}
B5375e5:L5375e5:{c.instructions+=2;NFSU2_TR(0x5375e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B5375e8:{NFSU2_TR(0x5375e8);
{goto L5375ec;}
}
B5375ea:L5375ea:{c.instructions+=1;NFSU2_TR(0x5375ea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5375ec:L5375ec:{c.instructions+=5;NFSU2_TR(0x5375ec);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5375f0:{NFSU2_TR(0x5375f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5375f1:{NFSU2_TR(0x5375f1);
__builtin_memmove((R+4),(R+24),4);
}
B5375f3:{NFSU2_TR(0x5375f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5375f7:{NFSU2_TR(0x5375f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5375fcull));
TAIL_STATIC(0x504880u,504);
}
B5375fc:L5375fc:{c.instructions+=4;NFSU2_TR(0x5375fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5375ff:{NFSU2_TR(0x5375ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537600:{NFSU2_TR(0x537600);
u8 U[4];
w4(U+0,u32(0x79bd40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537605:{NFSU2_TR(0x537605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53760aull));
TAIL_STATIC(0x50d510u,50d);
}
B53760a:L53760a:{c.instructions+=4;NFSU2_TR(0x53760a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53760d:{NFSU2_TR(0x53760d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B537610:{NFSU2_TR(0x537610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537611:{NFSU2_TR(0x537611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537616ull));
TAIL_STATIC(0x5362e0u,536);
}
B537616:L537616:{c.instructions+=1;NFSU2_TR(0x537616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537617:L537617:{c.instructions+=6;NFSU2_TR(0x537617);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53761b:{NFSU2_TR(0x53761b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53761c:{NFSU2_TR(0x53761c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53761d:{NFSU2_TR(0x53761d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537624:{NFSU2_TR(0x537624);
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
B537627:{NFSU2_TR(0x537627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537630:L537630:{c.instructions+=6;NFSU2_TR(0x537630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537634:{NFSU2_TR(0x537634);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537635:{NFSU2_TR(0x537635);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53763c:{NFSU2_TR(0x53763c);
__builtin_memmove((R+8),gp(0x8384c4),4);
}
B537642:{NFSU2_TR(0x537642);
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
B537644:{NFSU2_TR(0x537644);
if(r1(R+518)){{goto L53767f;}}
}
B537646:L537646:{c.instructions+=4;NFSU2_TR(0x537646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537649:{NFSU2_TR(0x537649);
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
B53764b:{NFSU2_TR(0x53764b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53764e:{NFSU2_TR(0x53764e);
if(r1(R+518)){{goto L53767f;}}
}
B537650:L537650:{c.instructions+=8;NFSU2_TR(0x537650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B537657:{NFSU2_TR(0x537657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53765a:{NFSU2_TR(0x53765a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53765c:{NFSU2_TR(0x53765c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53765e:{NFSU2_TR(0x53765e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537661:{NFSU2_TR(0x537661);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537662:{NFSU2_TR(0x537662);
__builtin_memmove((R+4),(R+24),4);
}
B537664:{NFSU2_TR(0x537664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537669ull));
TAIL_STATIC(0x52c3a0u,52c);
}
B537669:L537669:{c.instructions+=2;NFSU2_TR(0x537669);
__builtin_memmove((R+4),(R+24),4);
}
B53766b:{NFSU2_TR(0x53766b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537670ull));
TAIL_STATIC(0x52c390u,52c);
}
B537670:L537670:{c.instructions+=4;NFSU2_TR(0x537670);
__builtin_memmove((R+0),gp(0x83847c),4);
}
B537675:{NFSU2_TR(0x537675);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537676:{NFSU2_TR(0x537676);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537677:{NFSU2_TR(0x537677);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53767cull));
TAIL_STATIC(0x43f920u,43f);
}
B53767c:L53767c:{c.instructions+=1;NFSU2_TR(0x53767c);
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
B53767f:L53767f:{c.instructions+=3;NFSU2_TR(0x53767f);
w1(R+0,u8(0x1ull));
}
B537681:{NFSU2_TR(0x537681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537682:{NFSU2_TR(0x537682);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537690:L537690:{c.instructions+=7;NFSU2_TR(0x537690);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537694:{NFSU2_TR(0x537694);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537698:{NFSU2_TR(0x537698);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53769c:{NFSU2_TR(0x53769c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53769d:{NFSU2_TR(0x53769d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53769e:{NFSU2_TR(0x53769e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53769f:{NFSU2_TR(0x53769f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5376a4ull));
TAIL_STATIC(0x52d020u,52d);
}
B5376a4:L5376a4:{c.instructions+=2;NFSU2_TR(0x5376a4);
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
B5376a7:{NFSU2_TR(0x5376a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5376b0:L5376b0:{c.instructions+=8;NFSU2_TR(0x5376b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376b1:{NFSU2_TR(0x5376b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376b2:{NFSU2_TR(0x5376b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5376b5:{NFSU2_TR(0x5376b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5376b8:{NFSU2_TR(0x5376b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376b9:{NFSU2_TR(0x5376b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5376bb:{NFSU2_TR(0x5376bb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5376bd:{NFSU2_TR(0x5376bd);
if(r1(R+518)){{goto L5376dd;}}
}
B5376bf:L5376bf:{c.instructions+=1;NFSU2_TR(0x5376bf);
}
B5376c0:L5376c0:{c.instructions+=3;NFSU2_TR(0x5376c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5376c3:{NFSU2_TR(0x5376c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376c4:{NFSU2_TR(0x5376c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5376c9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5376c9:L5376c9:{c.instructions+=4;NFSU2_TR(0x5376c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5376cc:{NFSU2_TR(0x5376cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5376ce:{NFSU2_TR(0x5376ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5376d1:{NFSU2_TR(0x5376d1);
if(r1(R+518)){{goto L5376d6;}}
}
B5376d3:L5376d3:{c.instructions+=1;NFSU2_TR(0x5376d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5376d6:L5376d6:{c.instructions+=4;NFSU2_TR(0x5376d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5376d8:{NFSU2_TR(0x5376d8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5376d9:{NFSU2_TR(0x5376d9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5376db:{NFSU2_TR(0x5376db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5376c0u);}goto L5376c0;}}
}
B5376dd:L5376dd:{c.instructions+=4;NFSU2_TR(0x5376dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5376de:{NFSU2_TR(0x5376de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5376df:{NFSU2_TR(0x5376df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5376e0:{NFSU2_TR(0x5376e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5376f0:L5376f0:{c.instructions+=7;NFSU2_TR(0x5376f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376f1:{NFSU2_TR(0x5376f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5376f5:{NFSU2_TR(0x5376f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376f6:{NFSU2_TR(0x5376f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376f7:{NFSU2_TR(0x5376f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5376f8:{NFSU2_TR(0x5376f8);
__builtin_memmove((R+28),(R+4),4);
}
B5376fa:{NFSU2_TR(0x5376fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5376ffull));
TAIL_STATIC(0x51ccd0u,51c);
}
B5376ff:L5376ff:{c.instructions+=3;NFSU2_TR(0x5376ff);
__builtin_memmove((R+24),(R+0),4);
}
B537701:{NFSU2_TR(0x537701);
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
B537703:{NFSU2_TR(0x537703);
if(r1(R+518)){{goto L537743;}}
}
B537705:L537705:{c.instructions+=3;NFSU2_TR(0x537705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537708:{NFSU2_TR(0x537708);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53770b:{NFSU2_TR(0x53770b);
if(r1(R+518)){{goto L53771b;}}
}
B53770d:L53770d:{c.instructions+=2;NFSU2_TR(0x53770d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53770f:{NFSU2_TR(0x53770f);
if(r1(R+518)){{goto L53771b;}}
}
B537711:L537711:{c.instructions+=3;NFSU2_TR(0x537711);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537712:{NFSU2_TR(0x537712);
__builtin_memmove((R+4),(R+28),4);
}
B537714:{NFSU2_TR(0x537714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537719ull));
TAIL_STATIC(0x51cc00u,51c);
}
B537719:L537719:{c.instructions+=1;NFSU2_TR(0x537719);
{goto L537723;}
}
B53771b:L53771b:{c.instructions+=3;NFSU2_TR(0x53771b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53771c:{NFSU2_TR(0x53771c);
__builtin_memmove((R+4),(R+28),4);
}
B53771e:{NFSU2_TR(0x53771e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537723ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537580u);}goto L537580;}
}
B537723:L537723:{c.instructions+=8;NFSU2_TR(0x537723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B537725:{NFSU2_TR(0x537725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537728:{NFSU2_TR(0x537728);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53772a:{NFSU2_TR(0x53772a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53772d:{NFSU2_TR(0x53772d);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B537732:{NFSU2_TR(0x537732);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537733:{NFSU2_TR(0x537733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537734:{NFSU2_TR(0x537734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537739ull));
TAIL_STATIC(0x43f920u,43f);
}
B537739:L537739:{c.instructions+=3;NFSU2_TR(0x537739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53773c:{NFSU2_TR(0x53773c);
__builtin_memmove((R+4),(R+28),4);
}
B53773e:{NFSU2_TR(0x53773e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537743ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5376b0u);}goto L5376b0;}
}
B537743:L537743:{c.instructions+=4;NFSU2_TR(0x537743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537744:{NFSU2_TR(0x537744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537745:{NFSU2_TR(0x537745);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537746:{NFSU2_TR(0x537746);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537750:L537750:{c.instructions+=7;NFSU2_TR(0x537750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537751:{NFSU2_TR(0x537751);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537752:{NFSU2_TR(0x537752);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537753:{NFSU2_TR(0x537753);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537757:{NFSU2_TR(0x537757);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537758:{NFSU2_TR(0x537758);
__builtin_memmove((R+12),(R+4),4);
}
B53775a:{NFSU2_TR(0x53775a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53775full));
TAIL_STATIC(0x51ccd0u,51c);
}
B53775f:L53775f:{c.instructions+=3;NFSU2_TR(0x53775f);
__builtin_memmove((R+24),(R+0),4);
}
B537761:{NFSU2_TR(0x537761);
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
B537763:{NFSU2_TR(0x537763);
if(r1(R+518)){{goto L537794;}}
}
B537765:L537765:{c.instructions+=3;NFSU2_TR(0x537765);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537766:{NFSU2_TR(0x537766);
u8 U[4];
w4(U+0,u32(0x79bd78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53776b:{NFSU2_TR(0x53776b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537770ull));
TAIL_STATIC(0x50d510u,50d);
}
B537770:L537770:{c.instructions+=4;NFSU2_TR(0x537770);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B537773:{NFSU2_TR(0x537773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537774:{NFSU2_TR(0x537774);
__builtin_memmove((R+4),(R+12),4);
}
B537776:{NFSU2_TR(0x537776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53777bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537580u);}goto L537580;}
}
B53777b:L53777b:{c.instructions+=8;NFSU2_TR(0x53777b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53777d:{NFSU2_TR(0x53777d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537780:{NFSU2_TR(0x537780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B537782:{NFSU2_TR(0x537782);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537785:{NFSU2_TR(0x537785);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B53778a:{NFSU2_TR(0x53778a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53778b:{NFSU2_TR(0x53778b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53778c:{NFSU2_TR(0x53778c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537791ull));
TAIL_STATIC(0x43f920u,43f);
}
B537791:L537791:{c.instructions+=1;NFSU2_TR(0x537791);
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
B537794:L537794:{c.instructions+=4;NFSU2_TR(0x537794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537795:{NFSU2_TR(0x537795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537796:{NFSU2_TR(0x537796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537797:{NFSU2_TR(0x537797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5377a0:L5377a0:{c.instructions+=10;NFSU2_TR(0x5377a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377a1:{NFSU2_TR(0x5377a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377a2:{NFSU2_TR(0x5377a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5377a6:{NFSU2_TR(0x5377a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377a7:{NFSU2_TR(0x5377a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5377ab:{NFSU2_TR(0x5377ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377ac:{NFSU2_TR(0x5377ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377ad:{NFSU2_TR(0x5377ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377ae:{NFSU2_TR(0x5377ae);
__builtin_memmove((R+28),(R+4),4);
}
B5377b0:{NFSU2_TR(0x5377b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5377b5ull));
TAIL_STATIC(0x51cba0u,51c);
}
B5377b5:L5377b5:{c.instructions+=3;NFSU2_TR(0x5377b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377b6:{NFSU2_TR(0x5377b6);
__builtin_memmove((R+4),(R+28),4);
}
B5377b8:{NFSU2_TR(0x5377b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5377bdull));
TAIL_STATIC(0x51ccd0u,51c);
}
B5377bd:L5377bd:{c.instructions+=6;NFSU2_TR(0x5377bd);
__builtin_memmove((R+24),(R+0),4);
}
B5377bf:{NFSU2_TR(0x5377bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5377c1:{NFSU2_TR(0x5377c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377c4:{NFSU2_TR(0x5377c4);
__builtin_memmove((R+0),gp(0x8384b0),4);
}
B5377c9:{NFSU2_TR(0x5377c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5377ca:{NFSU2_TR(0x5377ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5377cfull));
TAIL_STATIC(0x43f8f0u,43f);
}
B5377cf:L5377cf:{c.instructions+=3;NFSU2_TR(0x5377cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5377d2:{NFSU2_TR(0x5377d2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5377d4:{NFSU2_TR(0x5377d4);
if(r1(R+518)){{goto L5377e7;}}
}
B5377d6:L5377d6:{c.instructions+=6;NFSU2_TR(0x5377d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377d9:{NFSU2_TR(0x5377d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377dc:{NFSU2_TR(0x5377dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377df:{NFSU2_TR(0x5377df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377e2:{NFSU2_TR(0x5377e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377e5:{NFSU2_TR(0x5377e5);
{goto L5377e9;}
}
B5377e7:L5377e7:{c.instructions+=1;NFSU2_TR(0x5377e7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5377e9:L5377e9:{c.instructions+=15;NFSU2_TR(0x5377e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5377ed:{NFSU2_TR(0x5377ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377f0:{NFSU2_TR(0x5377f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5377f2:{NFSU2_TR(0x5377f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5377f4:{NFSU2_TR(0x5377f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377f7:{NFSU2_TR(0x5377f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5377fa:{NFSU2_TR(0x5377fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5377fc:{NFSU2_TR(0x5377fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5377fe:{NFSU2_TR(0x5377fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537801:{NFSU2_TR(0x537801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B537803:{NFSU2_TR(0x537803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537806:{NFSU2_TR(0x537806);
__builtin_memmove((R+8),gp(0x8384b0),4);
}
B53780c:{NFSU2_TR(0x53780c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53780d:{NFSU2_TR(0x53780d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53780e:{NFSU2_TR(0x53780e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537813ull));
TAIL_STATIC(0x43f920u,43f);
}
B537813:L537813:{c.instructions+=3;NFSU2_TR(0x537813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B537816:{NFSU2_TR(0x537816);
__builtin_memmove((R+4),(R+28),4);
}
B537818:{NFSU2_TR(0x537818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53781dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5376b0u);}goto L5376b0;}
}
B53781d:L53781d:{c.instructions+=5;NFSU2_TR(0x53781d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53781e:{NFSU2_TR(0x53781e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53781f:{NFSU2_TR(0x53781f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B537820:{NFSU2_TR(0x537820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537821:{NFSU2_TR(0x537821);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537830:L537830:{c.instructions+=7;NFSU2_TR(0x537830);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537832:{NFSU2_TR(0x537832);
u8 U[4];
w4(U+0,u32(0x7776d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537837:{NFSU2_TR(0x537837);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53783d:{NFSU2_TR(0x53783d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53783e:{NFSU2_TR(0x53783e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537845:{NFSU2_TR(0x537845);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537846:{NFSU2_TR(0x537846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53784bull));
TAIL_STATIC(0x50ba20u,50b);
}
B53784b:L53784b:{c.instructions+=1;NFSU2_TR(0x53784b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537850ull));
TAIL_STATIC(0x4a83d0u,4a8);
}
B537850:L537850:{c.instructions+=1;NFSU2_TR(0x537850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537855ull));
TAIL_STATIC(0x4a83f0u,4a8);
}
B537855:L537855:{c.instructions+=1;NFSU2_TR(0x537855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53785aull));
TAIL_STATIC(0x4a8610u,4a8);
}
B53785a:L53785a:{c.instructions+=1;NFSU2_TR(0x53785a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53785full));
TAIL_STATIC(0x4ac920u,4ac);
}
B53785f:L53785f:{c.instructions+=1;NFSU2_TR(0x53785f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537864ull));
TAIL_STATIC(0x50cf40u,50c);
}
B537864:L537864:{c.instructions+=1;NFSU2_TR(0x537864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537869ull));
TAIL_STATIC(0x50ceb0u,50c);
}
B537869:L537869:{c.instructions+=2;NFSU2_TR(0x537869);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53786b:{NFSU2_TR(0x53786b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537870ull));
TAIL_STATIC(0x575620u,575);
}
B537870:L537870:{c.instructions+=5;NFSU2_TR(0x537870);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537873:{NFSU2_TR(0x537873);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B537877:{NFSU2_TR(0x537877);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537879:{NFSU2_TR(0x537879);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B537881:{NFSU2_TR(0x537881);
if(r1(R+518)){{goto L53788c;}}
}
B537883:L537883:{c.instructions+=2;NFSU2_TR(0x537883);
__builtin_memmove((R+4),(R+0),4);
}
B537885:{NFSU2_TR(0x537885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53788aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5372e0u);}goto L5372e0;}
}
B53788a:L53788a:{c.instructions+=1;NFSU2_TR(0x53788a);
{goto L53788e;}
}
B53788c:L53788c:{c.instructions+=1;NFSU2_TR(0x53788c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53788e:L53788e:{c.instructions+=4;NFSU2_TR(0x53788e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537890:{NFSU2_TR(0x537890);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B537898:{NFSU2_TR(0x537898);
__builtin_memmove(gp(0x8384c4),(R+0),4);
}
B53789d:{NFSU2_TR(0x53789d);
if(r1(R+518)){{goto L5378ac;}}
}
B53789f:L53789f:{c.instructions+=2;NFSU2_TR(0x53789f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5378a2:{NFSU2_TR(0x5378a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5378ac:L5378ac:{c.instructions+=1;NFSU2_TR(0x5378ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5378b1ull));
TAIL_STATIC(0x4d9990u,4d9);
}
B5378b1:L5378b1:{c.instructions+=4;NFSU2_TR(0x5378b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5378b5:{NFSU2_TR(0x5378b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5378bc:{NFSU2_TR(0x5378bc);
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
B5378bf:{NFSU2_TR(0x5378bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5378c0:L5378c0:{c.instructions+=3;NFSU2_TR(0x5378c0);
__builtin_memmove((R+0),gp(0x7f91c4),4);
}
B5378c5:{NFSU2_TR(0x5378c5);
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
B5378c7:{NFSU2_TR(0x5378c7);
if(r1(R+518)){{goto L537920;}}
}
B5378c9:L5378c9:{c.instructions+=3;NFSU2_TR(0x5378c9);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5378ce:{NFSU2_TR(0x5378ce);
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
B5378d0:{NFSU2_TR(0x5378d0);
if(r1(R+518)){{goto L537920;}}
}
B5378d2:L5378d2:{c.instructions+=5;NFSU2_TR(0x5378d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5378d5:{NFSU2_TR(0x5378d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5378d6:{NFSU2_TR(0x5378d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5378d9:{NFSU2_TR(0x5378d9);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5378dc:{NFSU2_TR(0x5378dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5378e1ull));
TAIL_STATIC(0x536520u,536);
}
B5378e1:L5378e1:{c.instructions+=3;NFSU2_TR(0x5378e1);
w4(R+4,u32(0x8652f8ull));
}
B5378e6:{NFSU2_TR(0x5378e6);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B5378e9:{NFSU2_TR(0x5378e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5378eeull));
TAIL_STATIC(0x4022c0u,402);
}
B5378ee:L5378ee:{c.instructions+=1;NFSU2_TR(0x5378ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5378f3ull));
TAIL_STATIC(0x510090u,510);
}
B5378f3:L5378f3:{c.instructions+=4;NFSU2_TR(0x5378f3);
__builtin_memmove((R+0),gp(0x8383ac),4);
}
B5378f8:{NFSU2_TR(0x5378f8);
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
B5378fa:{NFSU2_TR(0x5378fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5378fb:{NFSU2_TR(0x5378fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53791b;}}
}
B5378fd:L5378fd:{c.instructions+=3;NFSU2_TR(0x5378fd);
__builtin_memmove((R+0),gp(0x7fa29c),1);
}
B537902:{NFSU2_TR(0x537902);
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
B537904:{NFSU2_TR(0x537904);
if(r1(R+518)){{goto L53791b;}}
}
B537906:L537906:{c.instructions+=5;NFSU2_TR(0x537906);
__builtin_memmove((R+0),gp(0x8763d8),4);
}
B53790b:{NFSU2_TR(0x53790b);
__builtin_memmove((R+4),gp(0x8763d4),4);
}
B537911:{NFSU2_TR(0x537911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537912:{NFSU2_TR(0x537912);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537913:{NFSU2_TR(0x537913);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537918ull));
TAIL_STATIC(0x50b460u,50b);
}
B537918:L537918:{c.instructions+=1;NFSU2_TR(0x537918);
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
B53791b:L53791b:{c.instructions+=1;NFSU2_TR(0x53791b);
TAIL_STATIC(0x4022c0u,402);
}
B537920:L537920:{c.instructions+=1;NFSU2_TR(0x537920);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537930:L537930:{c.instructions+=3;NFSU2_TR(0x537930);
__builtin_memmove((R+0),gp(0x7f91c4),4);
}
B537935:{NFSU2_TR(0x537935);
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
B537937:{NFSU2_TR(0x537937);
if(r1(R+518)){{goto L537948;}}
}
B537939:L537939:{c.instructions+=3;NFSU2_TR(0x537939);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53793f:{NFSU2_TR(0x53793f);
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
B537941:{NFSU2_TR(0x537941);
if(r1(R+518)){{goto L537948;}}
}
B537943:L537943:{c.instructions+=1;NFSU2_TR(0x537943);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537540u);}goto L537540;}
}
B537948:L537948:{c.instructions+=1;NFSU2_TR(0x537948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537950:L537950:{c.instructions+=3;NFSU2_TR(0x537950);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537954:{NFSU2_TR(0x537954);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537955:{NFSU2_TR(0x537955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53795aull));
TAIL_STATIC(0x52cef0u,52c);
}
B53795a:L53795a:{c.instructions+=3;NFSU2_TR(0x53795a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53795d:{NFSU2_TR(0x53795d);
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
B53795f:{NFSU2_TR(0x53795f);
if(r1(R+518)){{goto L537971;}}
}
B537961:L537961:{c.instructions+=5;NFSU2_TR(0x537961);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537965:{NFSU2_TR(0x537965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537968:{NFSU2_TR(0x537968);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53796b:{NFSU2_TR(0x53796b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53796e:{NFSU2_TR(0x53796e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537971:L537971:{c.instructions+=1;NFSU2_TR(0x537971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537980:L537980:{c.instructions+=3;NFSU2_TR(0x537980);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B537986:{NFSU2_TR(0x537986);
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
B537988:{NFSU2_TR(0x537988);
if(r1(R+518)){{goto L53799e;}}
}
B53798a:L53798a:{c.instructions+=7;NFSU2_TR(0x53798a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53798e:{NFSU2_TR(0x53798e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537992:{NFSU2_TR(0x537992);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537993:{NFSU2_TR(0x537993);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537997:{NFSU2_TR(0x537997);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537998:{NFSU2_TR(0x537998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537999:{NFSU2_TR(0x537999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53799eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5377a0u);}goto L5377a0;}
}
B53799e:L53799e:{c.instructions+=1;NFSU2_TR(0x53799e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5379a0:L5379a0:{c.instructions+=3;NFSU2_TR(0x5379a0);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B5379a6:{NFSU2_TR(0x5379a6);
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
B5379a8:{NFSU2_TR(0x5379a8);
if(r1(R+518)){{goto L5379b4;}}
}
B5379aa:L5379aa:{c.instructions+=3;NFSU2_TR(0x5379aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5379ae:{NFSU2_TR(0x5379ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379af:{NFSU2_TR(0x5379af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5379b4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5376f0u);}goto L5376f0;}
}
B5379b4:L5379b4:{c.instructions+=1;NFSU2_TR(0x5379b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5379c0:L5379c0:{c.instructions+=6;NFSU2_TR(0x5379c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379c1:{NFSU2_TR(0x5379c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5379c5:{NFSU2_TR(0x5379c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5379c7:{NFSU2_TR(0x5379c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379c8:{NFSU2_TR(0x5379c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5379cc:{NFSU2_TR(0x5379cc);
if(r1(R+518)){{goto L5379e7;}}
}
B5379ce:L5379ce:{c.instructions+=2;NFSU2_TR(0x5379ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379cf:{NFSU2_TR(0x5379cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5379d4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5379d4:L5379d4:{c.instructions+=3;NFSU2_TR(0x5379d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5379d7:{NFSU2_TR(0x5379d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5379d9:{NFSU2_TR(0x5379d9);
if(r1(R+518)){{goto L5379e7;}}
}
B5379db:L5379db:{c.instructions+=3;NFSU2_TR(0x5379db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379dc:{NFSU2_TR(0x5379dc);
__builtin_memmove((R+4),(R+0),4);
}
B5379de:{NFSU2_TR(0x5379de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5379e3ull));
TAIL_STATIC(0x517f80u,517);
}
B5379e3:L5379e3:{c.instructions+=2;NFSU2_TR(0x5379e3);
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
B5379e5:{NFSU2_TR(0x5379e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5379ff;}}
}
B5379e7:L5379e7:{c.instructions+=3;NFSU2_TR(0x5379e7);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5379ec:{NFSU2_TR(0x5379ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5379ee:{NFSU2_TR(0x5379ee);
if(r1(R+518)){{goto L5379fd;}}
}
B5379f0:L5379f0:{c.instructions+=4;NFSU2_TR(0x5379f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5379f3:{NFSU2_TR(0x5379f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379f4:{NFSU2_TR(0x5379f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5379f5:{NFSU2_TR(0x5379f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5379faull));
TAIL_STATIC(0x52c570u,52c);
}
B5379fa:L5379fa:{c.instructions+=3;NFSU2_TR(0x5379fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5379fb:{NFSU2_TR(0x5379fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5379fc:{NFSU2_TR(0x5379fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5379fd:L5379fd:{c.instructions+=1;NFSU2_TR(0x5379fd);
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
B5379ff:L5379ff:{c.instructions+=3;NFSU2_TR(0x5379ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537a00:{NFSU2_TR(0x537a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537a01:{NFSU2_TR(0x537a01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537a10:L537a10:{c.instructions+=6;NFSU2_TR(0x537a10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a11:{NFSU2_TR(0x537a11);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537a15:{NFSU2_TR(0x537a15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a17:{NFSU2_TR(0x537a17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a18:{NFSU2_TR(0x537a18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537a1c:{NFSU2_TR(0x537a1c);
if(r1(R+518)){{goto L537a37;}}
}
B537a1e:L537a1e:{c.instructions+=2;NFSU2_TR(0x537a1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a1f:{NFSU2_TR(0x537a1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a24ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537a24:L537a24:{c.instructions+=3;NFSU2_TR(0x537a24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537a27:{NFSU2_TR(0x537a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a29:{NFSU2_TR(0x537a29);
if(r1(R+518)){{goto L537a37;}}
}
B537a2b:L537a2b:{c.instructions+=3;NFSU2_TR(0x537a2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a2c:{NFSU2_TR(0x537a2c);
__builtin_memmove((R+4),(R+0),4);
}
B537a2e:{NFSU2_TR(0x537a2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a33ull));
TAIL_STATIC(0x517f80u,517);
}
B537a33:L537a33:{c.instructions+=2;NFSU2_TR(0x537a33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a35:{NFSU2_TR(0x537a35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537a4e;}}
}
B537a37:L537a37:{c.instructions+=3;NFSU2_TR(0x537a37);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537a3c:{NFSU2_TR(0x537a3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a3e:{NFSU2_TR(0x537a3e);
if(r1(R+518)){{goto L537a54;}}
}
B537a40:L537a40:{c.instructions+=4;NFSU2_TR(0x537a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537a43:{NFSU2_TR(0x537a43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a44:{NFSU2_TR(0x537a44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a45:{NFSU2_TR(0x537a45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a4aull));
TAIL_STATIC(0x52c570u,52c);
}
B537a4a:L537a4a:{c.instructions+=2;NFSU2_TR(0x537a4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a4c:{NFSU2_TR(0x537a4c);
if(r1(R+518)){{goto L537a54;}}
}
B537a4e:L537a4e:{c.instructions+=2;NFSU2_TR(0x537a4e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B537a52:{NFSU2_TR(0x537a52);
if(r1(R+518)){{goto L537a56;}}
}
B537a54:L537a54:{c.instructions+=1;NFSU2_TR(0x537a54);
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
B537a56:L537a56:{c.instructions+=3;NFSU2_TR(0x537a56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537a57:{NFSU2_TR(0x537a57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537a58:{NFSU2_TR(0x537a58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537a60:L537a60:{c.instructions+=6;NFSU2_TR(0x537a60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a61:{NFSU2_TR(0x537a61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537a65:{NFSU2_TR(0x537a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a67:{NFSU2_TR(0x537a67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a68:{NFSU2_TR(0x537a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537a6c:{NFSU2_TR(0x537a6c);
if(r1(R+518)){{goto L537a87;}}
}
B537a6e:L537a6e:{c.instructions+=2;NFSU2_TR(0x537a6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a6f:{NFSU2_TR(0x537a6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a74ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537a74:L537a74:{c.instructions+=3;NFSU2_TR(0x537a74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537a77:{NFSU2_TR(0x537a77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a79:{NFSU2_TR(0x537a79);
if(r1(R+518)){{goto L537a87;}}
}
B537a7b:L537a7b:{c.instructions+=3;NFSU2_TR(0x537a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a7c:{NFSU2_TR(0x537a7c);
__builtin_memmove((R+4),(R+0),4);
}
B537a7e:{NFSU2_TR(0x537a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a83ull));
TAIL_STATIC(0x517f80u,517);
}
B537a83:L537a83:{c.instructions+=2;NFSU2_TR(0x537a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a85:{NFSU2_TR(0x537a85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537a9e;}}
}
B537a87:L537a87:{c.instructions+=3;NFSU2_TR(0x537a87);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537a8c:{NFSU2_TR(0x537a8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a8e:{NFSU2_TR(0x537a8e);
if(r1(R+518)){{goto L537aa4;}}
}
B537a90:L537a90:{c.instructions+=4;NFSU2_TR(0x537a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537a93:{NFSU2_TR(0x537a93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a94:{NFSU2_TR(0x537a94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537a95:{NFSU2_TR(0x537a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537a9aull));
TAIL_STATIC(0x52c570u,52c);
}
B537a9a:L537a9a:{c.instructions+=2;NFSU2_TR(0x537a9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537a9c:{NFSU2_TR(0x537a9c);
if(r1(R+518)){{goto L537aa4;}}
}
B537a9e:L537a9e:{c.instructions+=2;NFSU2_TR(0x537a9e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B537aa2:{NFSU2_TR(0x537aa2);
if(r1(R+518)){{goto L537aa6;}}
}
B537aa4:L537aa4:{c.instructions+=1;NFSU2_TR(0x537aa4);
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
B537aa6:L537aa6:{c.instructions+=3;NFSU2_TR(0x537aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537aa7:{NFSU2_TR(0x537aa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537aa8:{NFSU2_TR(0x537aa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537ab0:L537ab0:{c.instructions+=4;NFSU2_TR(0x537ab0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ab1:{NFSU2_TR(0x537ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537ab5:{NFSU2_TR(0x537ab5);
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
B537ab7:{NFSU2_TR(0x537ab7);
if(r1(R+518)){{goto L537ac9;}}
}
B537ab9:L537ab9:{c.instructions+=4;NFSU2_TR(0x537ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537abd:{NFSU2_TR(0x537abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537abe:{NFSU2_TR(0x537abe);
__builtin_memmove((R+4),(R+24),4);
}
B537ac0:{NFSU2_TR(0x537ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ac5ull));
TAIL_STATIC(0x535f40u,535);
}
B537ac5:L537ac5:{c.instructions+=1;NFSU2_TR(0x537ac5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
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
B537ac9:L537ac9:{c.instructions+=2;NFSU2_TR(0x537ac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537aca:{NFSU2_TR(0x537aca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537ad0:L537ad0:{c.instructions+=6;NFSU2_TR(0x537ad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ad1:{NFSU2_TR(0x537ad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537ad5:{NFSU2_TR(0x537ad5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ad7:{NFSU2_TR(0x537ad7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ad8:{NFSU2_TR(0x537ad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537adc:{NFSU2_TR(0x537adc);
if(r1(R+518)){{goto L537af7;}}
}
B537ade:L537ade:{c.instructions+=2;NFSU2_TR(0x537ade);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537adf:{NFSU2_TR(0x537adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ae4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537ae4:L537ae4:{c.instructions+=3;NFSU2_TR(0x537ae4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537ae7:{NFSU2_TR(0x537ae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ae9:{NFSU2_TR(0x537ae9);
if(r1(R+518)){{goto L537af7;}}
}
B537aeb:L537aeb:{c.instructions+=3;NFSU2_TR(0x537aeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537aec:{NFSU2_TR(0x537aec);
__builtin_memmove((R+4),(R+0),4);
}
B537aee:{NFSU2_TR(0x537aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537af3ull));
TAIL_STATIC(0x517f80u,517);
}
B537af3:L537af3:{c.instructions+=2;NFSU2_TR(0x537af3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537af5:{NFSU2_TR(0x537af5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537b0a;}}
}
B537af7:L537af7:{c.instructions+=3;NFSU2_TR(0x537af7);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537afc:{NFSU2_TR(0x537afc);
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
B537afe:{NFSU2_TR(0x537afe);
if(r1(R+518)){{goto L537b2b;}}
}
B537b00:L537b00:{c.instructions+=4;NFSU2_TR(0x537b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537b03:{NFSU2_TR(0x537b03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b04:{NFSU2_TR(0x537b04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b05:{NFSU2_TR(0x537b05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537b0aull));
TAIL_STATIC(0x52c570u,52c);
}
B537b0a:L537b0a:{c.instructions+=3;NFSU2_TR(0x537b0a);
__builtin_memmove((R+24),(R+0),4);
}
B537b0c:{NFSU2_TR(0x537b0c);
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
B537b0e:{NFSU2_TR(0x537b0e);
if(r1(R+518)){{goto L537b2b;}}
}
B537b10:L537b10:{c.instructions+=4;NFSU2_TR(0x537b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537b13:{NFSU2_TR(0x537b13);
w4(R+28,u32(0x2ull));
}
B537b18:{NFSU2_TR(0x537b18);
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
B537b1a:{NFSU2_TR(0x537b1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537b2b;}}
}
B537b1c:L537b1c:{c.instructions+=4;NFSU2_TR(0x537b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537b20:{NFSU2_TR(0x537b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b21:{NFSU2_TR(0x537b21);
__builtin_memmove((R+4),(R+24),4);
}
B537b23:{NFSU2_TR(0x537b23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537b28ull));
TAIL_STATIC(0x535f40u,535);
}
B537b28:L537b28:{c.instructions+=1;NFSU2_TR(0x537b28);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
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
B537b2b:L537b2b:{c.instructions+=3;NFSU2_TR(0x537b2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537b2c:{NFSU2_TR(0x537b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537b2d:{NFSU2_TR(0x537b2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537b30:L537b30:{c.instructions+=4;NFSU2_TR(0x537b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b31:{NFSU2_TR(0x537b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537b35:{NFSU2_TR(0x537b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537b37:{NFSU2_TR(0x537b37);
if(r1(R+518)){{goto L537b79;}}
}
B537b39:L537b39:{c.instructions+=7;NFSU2_TR(0x537b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537b3d:{NFSU2_TR(0x537b3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537b41:{NFSU2_TR(0x537b41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b42:{NFSU2_TR(0x537b42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b43:{NFSU2_TR(0x537b43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b44:{NFSU2_TR(0x537b44);
u8 U[4];
w4(U+0,u32(0x864218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b49:{NFSU2_TR(0x537b49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537b4eull));
TAIL_STATIC(0x43fbc0u,43f);
}
B537b4e:L537b4e:{c.instructions+=5;NFSU2_TR(0x537b4e);
__builtin_memmove((R+28),(R+0),4);
}
B537b50:{NFSU2_TR(0x537b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537b53:{NFSU2_TR(0x537b53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B537b56:{NFSU2_TR(0x537b56);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B537b5b:{NFSU2_TR(0x537b5b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L537b64;}}
}
B537b5d:L537b5d:{c.instructions+=1;NFSU2_TR(0x537b5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x864217ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B537b64:L537b64:{c.instructions+=3;NFSU2_TR(0x537b64);
u8 U[4];
w4(U+0,u32(0x864218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b69:{NFSU2_TR(0x537b69);
__builtin_memmove((R+4),(R+24),4);
}
B537b6b:{NFSU2_TR(0x537b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537b70ull));
TAIL_STATIC(0x535fe0u,535);
}
B537b70:L537b70:{c.instructions+=5;NFSU2_TR(0x537b70);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
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
B537b74:{NFSU2_TR(0x537b74);
__builtin_memmove((R+0),(R+28),4);
}
B537b76:{NFSU2_TR(0x537b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537b77:{NFSU2_TR(0x537b77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537b78:{NFSU2_TR(0x537b78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537b79:L537b79:{c.instructions+=3;NFSU2_TR(0x537b79);
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
B537b7b:{NFSU2_TR(0x537b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537b7c:{NFSU2_TR(0x537b7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537b80:L537b80:{c.instructions+=6;NFSU2_TR(0x537b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b81:{NFSU2_TR(0x537b81);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537b85:{NFSU2_TR(0x537b85);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537b87:{NFSU2_TR(0x537b87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b88:{NFSU2_TR(0x537b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537b8c:{NFSU2_TR(0x537b8c);
if(r1(R+518)){{goto L537ba7;}}
}
B537b8e:L537b8e:{c.instructions+=2;NFSU2_TR(0x537b8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b8f:{NFSU2_TR(0x537b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537b94ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537b94:L537b94:{c.instructions+=3;NFSU2_TR(0x537b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537b97:{NFSU2_TR(0x537b97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537b99:{NFSU2_TR(0x537b99);
if(r1(R+518)){{goto L537ba7;}}
}
B537b9b:L537b9b:{c.instructions+=3;NFSU2_TR(0x537b9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537b9c:{NFSU2_TR(0x537b9c);
__builtin_memmove((R+4),(R+0),4);
}
B537b9e:{NFSU2_TR(0x537b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ba3ull));
TAIL_STATIC(0x517f80u,517);
}
B537ba3:L537ba3:{c.instructions+=2;NFSU2_TR(0x537ba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ba5:{NFSU2_TR(0x537ba5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537bbe;}}
}
B537ba7:L537ba7:{c.instructions+=3;NFSU2_TR(0x537ba7);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537bac:{NFSU2_TR(0x537bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537bae:{NFSU2_TR(0x537bae);
if(r1(R+518)){{goto L537bda;}}
}
B537bb0:L537bb0:{c.instructions+=4;NFSU2_TR(0x537bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537bb3:{NFSU2_TR(0x537bb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bb4:{NFSU2_TR(0x537bb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bb5:{NFSU2_TR(0x537bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537bbaull));
TAIL_STATIC(0x52c570u,52c);
}
B537bba:L537bba:{c.instructions+=2;NFSU2_TR(0x537bba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537bbc:{NFSU2_TR(0x537bbc);
if(r1(R+518)){{goto L537bda;}}
}
B537bbe:L537bbe:{c.instructions+=2;NFSU2_TR(0x537bbe);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537bc2:{NFSU2_TR(0x537bc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537bda;}}
}
B537bc4:L537bc4:{c.instructions+=6;NFSU2_TR(0x537bc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537bc8:{NFSU2_TR(0x537bc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B537bcc:{NFSU2_TR(0x537bcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bcd:{NFSU2_TR(0x537bcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bce:{NFSU2_TR(0x537bce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bcf:{NFSU2_TR(0x537bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537bd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537b30u);}goto L537b30;}
}
B537bd4:L537bd4:{c.instructions+=4;NFSU2_TR(0x537bd4);
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
B537bd7:{NFSU2_TR(0x537bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537bd8:{NFSU2_TR(0x537bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537bd9:{NFSU2_TR(0x537bd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537bda:L537bda:{c.instructions+=4;NFSU2_TR(0x537bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537bdb:{NFSU2_TR(0x537bdb);
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
B537bdd:{NFSU2_TR(0x537bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537bde:{NFSU2_TR(0x537bde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537be0:L537be0:{c.instructions+=3;NFSU2_TR(0x537be0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537be4:{NFSU2_TR(0x537be4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537be6:{NFSU2_TR(0x537be6);
if(r1(R+518)){{goto L537bfc;}}
}
B537be8:L537be8:{c.instructions+=6;NFSU2_TR(0x537be8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537bec:{NFSU2_TR(0x537bec);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B537bf0:{NFSU2_TR(0x537bf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bf1:{NFSU2_TR(0x537bf1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bf2:{NFSU2_TR(0x537bf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537bf3:{NFSU2_TR(0x537bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537bf8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537b30u);}goto L537b30;}
}
B537bf8:L537bf8:{c.instructions+=2;NFSU2_TR(0x537bf8);
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
B537bfb:{NFSU2_TR(0x537bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537bfc:L537bfc:{c.instructions+=2;NFSU2_TR(0x537bfc);
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
B537bfe:{NFSU2_TR(0x537bfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537c00:L537c00:{c.instructions+=6;NFSU2_TR(0x537c00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c01:{NFSU2_TR(0x537c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537c05:{NFSU2_TR(0x537c05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c07:{NFSU2_TR(0x537c07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c08:{NFSU2_TR(0x537c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537c0c:{NFSU2_TR(0x537c0c);
if(r1(R+518)){{goto L537c27;}}
}
B537c0e:L537c0e:{c.instructions+=2;NFSU2_TR(0x537c0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c0f:{NFSU2_TR(0x537c0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c14ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537c14:L537c14:{c.instructions+=3;NFSU2_TR(0x537c14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537c17:{NFSU2_TR(0x537c17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c19:{NFSU2_TR(0x537c19);
if(r1(R+518)){{goto L537c27;}}
}
B537c1b:L537c1b:{c.instructions+=3;NFSU2_TR(0x537c1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c1c:{NFSU2_TR(0x537c1c);
__builtin_memmove((R+4),(R+0),4);
}
B537c1e:{NFSU2_TR(0x537c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c23ull));
TAIL_STATIC(0x517f80u,517);
}
B537c23:L537c23:{c.instructions+=2;NFSU2_TR(0x537c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c25:{NFSU2_TR(0x537c25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537c3e;}}
}
B537c27:L537c27:{c.instructions+=3;NFSU2_TR(0x537c27);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537c2c:{NFSU2_TR(0x537c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c2e:{NFSU2_TR(0x537c2e);
if(r1(R+518)){{goto L537c3c;}}
}
B537c30:L537c30:{c.instructions+=4;NFSU2_TR(0x537c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537c33:{NFSU2_TR(0x537c33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c34:{NFSU2_TR(0x537c34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c35:{NFSU2_TR(0x537c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c3aull));
TAIL_STATIC(0x52c570u,52c);
}
B537c3a:L537c3a:{c.instructions+=1;NFSU2_TR(0x537c3a);
{goto L537c3e;}
}
B537c3c:L537c3c:{c.instructions+=1;NFSU2_TR(0x537c3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B537c3e:L537c3e:{c.instructions+=6;NFSU2_TR(0x537c3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537c42:{NFSU2_TR(0x537c42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537c46:{NFSU2_TR(0x537c46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c47:{NFSU2_TR(0x537c47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c48:{NFSU2_TR(0x537c48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c49:{NFSU2_TR(0x537c49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c4eull));
TAIL_STATIC(0x51cf70u,51c);
}
B537c4e:L537c4e:{c.instructions+=4;NFSU2_TR(0x537c4e);
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
B537c51:{NFSU2_TR(0x537c51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537c52:{NFSU2_TR(0x537c52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537c53:{NFSU2_TR(0x537c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537c60:L537c60:{c.instructions+=6;NFSU2_TR(0x537c60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c61:{NFSU2_TR(0x537c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537c65:{NFSU2_TR(0x537c65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c67:{NFSU2_TR(0x537c67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c68:{NFSU2_TR(0x537c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537c6c:{NFSU2_TR(0x537c6c);
if(r1(R+518)){{goto L537c87;}}
}
B537c6e:L537c6e:{c.instructions+=2;NFSU2_TR(0x537c6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c6f:{NFSU2_TR(0x537c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c74ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537c74:L537c74:{c.instructions+=3;NFSU2_TR(0x537c74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537c77:{NFSU2_TR(0x537c77);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c79:{NFSU2_TR(0x537c79);
if(r1(R+518)){{goto L537c87;}}
}
B537c7b:L537c7b:{c.instructions+=3;NFSU2_TR(0x537c7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c7c:{NFSU2_TR(0x537c7c);
__builtin_memmove((R+4),(R+0),4);
}
B537c7e:{NFSU2_TR(0x537c7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c83ull));
TAIL_STATIC(0x517f80u,517);
}
B537c83:L537c83:{c.instructions+=2;NFSU2_TR(0x537c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c85:{NFSU2_TR(0x537c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537c9e;}}
}
B537c87:L537c87:{c.instructions+=3;NFSU2_TR(0x537c87);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537c8c:{NFSU2_TR(0x537c8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537c8e:{NFSU2_TR(0x537c8e);
if(r1(R+518)){{goto L537c9c;}}
}
B537c90:L537c90:{c.instructions+=4;NFSU2_TR(0x537c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537c93:{NFSU2_TR(0x537c93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c94:{NFSU2_TR(0x537c94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537c95:{NFSU2_TR(0x537c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537c9aull));
TAIL_STATIC(0x52c570u,52c);
}
B537c9a:L537c9a:{c.instructions+=1;NFSU2_TR(0x537c9a);
{goto L537c9e;}
}
B537c9c:L537c9c:{c.instructions+=1;NFSU2_TR(0x537c9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B537c9e:L537c9e:{c.instructions+=6;NFSU2_TR(0x537c9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537ca2:{NFSU2_TR(0x537ca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537ca6:{NFSU2_TR(0x537ca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ca7:{NFSU2_TR(0x537ca7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ca8:{NFSU2_TR(0x537ca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ca9:{NFSU2_TR(0x537ca9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537caeull));
TAIL_STATIC(0x51cfe0u,51c);
}
B537cae:L537cae:{c.instructions+=4;NFSU2_TR(0x537cae);
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
B537cb1:{NFSU2_TR(0x537cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537cb2:{NFSU2_TR(0x537cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537cb3:{NFSU2_TR(0x537cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537cc0:L537cc0:{c.instructions+=6;NFSU2_TR(0x537cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537cc1:{NFSU2_TR(0x537cc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537cc5:{NFSU2_TR(0x537cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537cc7:{NFSU2_TR(0x537cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537cc8:{NFSU2_TR(0x537cc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537ccc:{NFSU2_TR(0x537ccc);
if(r1(R+518)){{goto L537ceb;}}
}
B537cce:L537cce:{c.instructions+=2;NFSU2_TR(0x537cce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ccf:{NFSU2_TR(0x537ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537cd4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537cd4:L537cd4:{c.instructions+=3;NFSU2_TR(0x537cd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537cd7:{NFSU2_TR(0x537cd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537cd9:{NFSU2_TR(0x537cd9);
if(r1(R+518)){{goto L537ceb;}}
}
B537cdb:L537cdb:{c.instructions+=3;NFSU2_TR(0x537cdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537cdc:{NFSU2_TR(0x537cdc);
__builtin_memmove((R+4),(R+0),4);
}
B537cde:{NFSU2_TR(0x537cde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ce3ull));
TAIL_STATIC(0x517f80u,517);
}
B537ce3:L537ce3:{c.instructions+=2;NFSU2_TR(0x537ce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ce5:{NFSU2_TR(0x537ce5);
if(r1(R+518)){{goto L537ceb;}}
}
B537ce7:L537ce7:{c.instructions+=2;NFSU2_TR(0x537ce7);
__builtin_memmove((R+24),(R+0),4);
}
B537ce9:{NFSU2_TR(0x537ce9);
{goto L537d04;}
}
B537ceb:L537ceb:{c.instructions+=3;NFSU2_TR(0x537ceb);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537cf0:{NFSU2_TR(0x537cf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537cf2:{NFSU2_TR(0x537cf2);
if(r1(R+518)){{goto L537d02;}}
}
B537cf4:L537cf4:{c.instructions+=4;NFSU2_TR(0x537cf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537cf7:{NFSU2_TR(0x537cf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537cf8:{NFSU2_TR(0x537cf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537cf9:{NFSU2_TR(0x537cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537cfeull));
TAIL_STATIC(0x52c570u,52c);
}
B537cfe:L537cfe:{c.instructions+=2;NFSU2_TR(0x537cfe);
__builtin_memmove((R+24),(R+0),4);
}
B537d00:{NFSU2_TR(0x537d00);
{goto L537d04;}
}
B537d02:L537d02:{c.instructions+=1;NFSU2_TR(0x537d02);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B537d04:L537d04:{c.instructions+=3;NFSU2_TR(0x537d04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537d08:{NFSU2_TR(0x537d08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d09:{NFSU2_TR(0x537d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537d0eull));
TAIL_STATIC(0x50b9c0u,50b);
}
B537d0e:L537d0e:{c.instructions+=3;NFSU2_TR(0x537d0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537d11:{NFSU2_TR(0x537d11);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d13:{NFSU2_TR(0x537d13);
if(r1(R+518)){{goto L537d2e;}}
}
B537d15:L537d15:{c.instructions+=3;NFSU2_TR(0x537d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537d18:{NFSU2_TR(0x537d18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d1a:{NFSU2_TR(0x537d1a);
if(r1(R+518)){{goto L537d2e;}}
}
B537d1c:L537d1c:{c.instructions+=2;NFSU2_TR(0x537d1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537d1f:{NFSU2_TR(0x537d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537d2e;}}
}
B537d21:L537d21:{c.instructions+=3;NFSU2_TR(0x537d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537d24:{NFSU2_TR(0x537d24);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B537d27:{NFSU2_TR(0x537d27);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L537d2e;}}
}
B537d29:L537d29:{c.instructions+=4;NFSU2_TR(0x537d29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537d2a:{NFSU2_TR(0x537d2a);
w1(R+0,u8(0x1ull));
}
B537d2c:{NFSU2_TR(0x537d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537d2d:{NFSU2_TR(0x537d2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537d2e:L537d2e:{c.instructions+=4;NFSU2_TR(0x537d2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537d2f:{NFSU2_TR(0x537d2f);
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
B537d31:{NFSU2_TR(0x537d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537d32:{NFSU2_TR(0x537d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537d40:L537d40:{c.instructions+=6;NFSU2_TR(0x537d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d41:{NFSU2_TR(0x537d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537d45:{NFSU2_TR(0x537d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d47:{NFSU2_TR(0x537d47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d48:{NFSU2_TR(0x537d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537d4c:{NFSU2_TR(0x537d4c);
if(r1(R+518)){{goto L537d67;}}
}
B537d4e:L537d4e:{c.instructions+=2;NFSU2_TR(0x537d4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d4f:{NFSU2_TR(0x537d4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537d54ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537d54:L537d54:{c.instructions+=3;NFSU2_TR(0x537d54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537d57:{NFSU2_TR(0x537d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d59:{NFSU2_TR(0x537d59);
if(r1(R+518)){{goto L537d67;}}
}
B537d5b:L537d5b:{c.instructions+=3;NFSU2_TR(0x537d5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d5c:{NFSU2_TR(0x537d5c);
__builtin_memmove((R+4),(R+0),4);
}
B537d5e:{NFSU2_TR(0x537d5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537d63ull));
TAIL_STATIC(0x517f80u,517);
}
B537d63:L537d63:{c.instructions+=2;NFSU2_TR(0x537d63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d65:{NFSU2_TR(0x537d65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537d7e;}}
}
B537d67:L537d67:{c.instructions+=3;NFSU2_TR(0x537d67);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537d6c:{NFSU2_TR(0x537d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d6e:{NFSU2_TR(0x537d6e);
if(r1(R+518)){{goto L537d9b;}}
}
B537d70:L537d70:{c.instructions+=4;NFSU2_TR(0x537d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537d73:{NFSU2_TR(0x537d73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d74:{NFSU2_TR(0x537d74);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537d75:{NFSU2_TR(0x537d75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537d7aull));
TAIL_STATIC(0x52c570u,52c);
}
B537d7a:L537d7a:{c.instructions+=2;NFSU2_TR(0x537d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d7c:{NFSU2_TR(0x537d7c);
if(r1(R+518)){{goto L537d9b;}}
}
B537d7e:L537d7e:{c.instructions+=3;NFSU2_TR(0x537d7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537d81:{NFSU2_TR(0x537d81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537d83:{NFSU2_TR(0x537d83);
if(r1(R+518)){{goto L537d9b;}}
}
B537d85:L537d85:{c.instructions+=3;NFSU2_TR(0x537d85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537d88:{NFSU2_TR(0x537d88);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537d8c:{NFSU2_TR(0x537d8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537d9b;}}
}
B537d8e:L537d8e:{c.instructions+=3;NFSU2_TR(0x537d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537d91:{NFSU2_TR(0x537d91);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B537d94:{NFSU2_TR(0x537d94);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L537d9b;}}
}
B537d96:L537d96:{c.instructions+=4;NFSU2_TR(0x537d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537d97:{NFSU2_TR(0x537d97);
w1(R+0,u8(0x1ull));
}
B537d99:{NFSU2_TR(0x537d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537d9a:{NFSU2_TR(0x537d9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537d9b:L537d9b:{c.instructions+=4;NFSU2_TR(0x537d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537d9c:{NFSU2_TR(0x537d9c);
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
B537d9e:{NFSU2_TR(0x537d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537d9f:{NFSU2_TR(0x537d9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537da0:L537da0:{c.instructions+=7;NFSU2_TR(0x537da0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537da1:{NFSU2_TR(0x537da1);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537da6:{NFSU2_TR(0x537da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537da9:{NFSU2_TR(0x537da9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537daa:{NFSU2_TR(0x537daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537db0:{NFSU2_TR(0x537db0);
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
B537db2:{NFSU2_TR(0x537db2);
if(r1(R+518)){{goto L537e58;}}
}
B537db8:L537db8:{c.instructions+=4;NFSU2_TR(0x537db8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537db9:{NFSU2_TR(0x537db9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537dba:{NFSU2_TR(0x537dba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537dbb:{NFSU2_TR(0x537dbb);
{goto L537dc0;}
}
B537dc0:L537dc0:{c.instructions+=5;NFSU2_TR(0x537dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537dc4:{NFSU2_TR(0x537dc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537dc7:{NFSU2_TR(0x537dc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537dca:{NFSU2_TR(0x537dca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537dce:{NFSU2_TR(0x537dce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537e49;}}
}
B537dd0:L537dd0:{c.instructions+=2;NFSU2_TR(0x537dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537dd1:{NFSU2_TR(0x537dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537dd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537da0u);}goto L537da0;}
}
B537dd6:L537dd6:{c.instructions+=5;NFSU2_TR(0x537dd6);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537ddb:{NFSU2_TR(0x537ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B537dde:{NFSU2_TR(0x537dde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537de1:{NFSU2_TR(0x537de1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537de3:{NFSU2_TR(0x537de3);
if(r1(R+518)){{goto L537e49;}}
}
B537de5:L537de5:{c.instructions+=5;NFSU2_TR(0x537de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537de8:{NFSU2_TR(0x537de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537deb:{NFSU2_TR(0x537deb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537ded:{NFSU2_TR(0x537ded);
__builtin_memmove((R+20),(R+0),4);
}
B537def:{NFSU2_TR(0x537def);
if(r1(R+518)){{goto L537e49;}}
}
B537df1:L537df1:{c.instructions+=4;NFSU2_TR(0x537df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537df4:{NFSU2_TR(0x537df4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537df5:{NFSU2_TR(0x537df5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537df6:{NFSU2_TR(0x537df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537dfbull));
TAIL_STATIC(0x43dcc0u,43d);
}
B537dfb:L537dfb:{c.instructions+=3;NFSU2_TR(0x537dfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B537dfe:{NFSU2_TR(0x537dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e00:{NFSU2_TR(0x537e00);
if(r1(R+518)){{goto L537e0a;}}
}
B537e02:L537e02:{c.instructions+=3;NFSU2_TR(0x537e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B537e04:{NFSU2_TR(0x537e04);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537e06:{NFSU2_TR(0x537e06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537df1u);}goto L537df1;}}
}
B537e08:L537e08:{c.instructions+=1;NFSU2_TR(0x537e08);
{goto L537e49;}
}
B537e0a:L537e0a:{c.instructions+=3;NFSU2_TR(0x537e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537e0d:{NFSU2_TR(0x537e0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537e10:{NFSU2_TR(0x537e10);
if(r1(R+518)){{goto L537e20;}}
}
B537e12:L537e12:{c.instructions+=2;NFSU2_TR(0x537e12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e14:{NFSU2_TR(0x537e14);
if(r1(R+518)){{goto L537e20;}}
}
B537e16:L537e16:{c.instructions+=3;NFSU2_TR(0x537e16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e17:{NFSU2_TR(0x537e17);
__builtin_memmove((R+4),(R+20),4);
}
B537e19:{NFSU2_TR(0x537e19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e1eull));
TAIL_STATIC(0x51cc00u,51c);
}
B537e1e:L537e1e:{c.instructions+=1;NFSU2_TR(0x537e1e);
{goto L537e28;}
}
B537e20:L537e20:{c.instructions+=3;NFSU2_TR(0x537e20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e21:{NFSU2_TR(0x537e21);
__builtin_memmove((R+4),(R+20),4);
}
B537e23:{NFSU2_TR(0x537e23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537580u);}goto L537580;}
}
B537e28:L537e28:{c.instructions+=8;NFSU2_TR(0x537e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537e2b:{NFSU2_TR(0x537e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B537e2d:{NFSU2_TR(0x537e2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B537e2f:{NFSU2_TR(0x537e2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537e32:{NFSU2_TR(0x537e32);
__builtin_memmove((R+4),gp(0x8384b0),4);
}
B537e38:{NFSU2_TR(0x537e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e39:{NFSU2_TR(0x537e39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e3a:{NFSU2_TR(0x537e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e3full));
TAIL_STATIC(0x43f920u,43f);
}
B537e3f:L537e3f:{c.instructions+=3;NFSU2_TR(0x537e3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B537e42:{NFSU2_TR(0x537e42);
__builtin_memmove((R+4),(R+20),4);
}
B537e44:{NFSU2_TR(0x537e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5376b0u);}goto L5376b0;}
}
B537e49:L537e49:{c.instructions+=3;NFSU2_TR(0x537e49);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537e4d:{NFSU2_TR(0x537e4d);
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
B537e4f:{NFSU2_TR(0x537e4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537dc0u);}goto L537dc0;}}
}
B537e55:L537e55:{c.instructions+=3;NFSU2_TR(0x537e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537e56:{NFSU2_TR(0x537e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B537e57:{NFSU2_TR(0x537e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537e58:L537e58:{c.instructions+=3;NFSU2_TR(0x537e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537e59:{NFSU2_TR(0x537e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B537e5a:{NFSU2_TR(0x537e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537e60:L537e60:{c.instructions+=7;NFSU2_TR(0x537e60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e61:{NFSU2_TR(0x537e61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e62:{NFSU2_TR(0x537e62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e63:{NFSU2_TR(0x537e63);
__builtin_memmove((R+28),(R+4),4);
}
B537e65:{NFSU2_TR(0x537e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537e68:{NFSU2_TR(0x537e68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e6a:{NFSU2_TR(0x537e6a);
if(r1(R+518)){{goto L537e89;}}
}
B537e6c:L537e6c:{c.instructions+=2;NFSU2_TR(0x537e6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e6d:{NFSU2_TR(0x537e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e72ull));
TAIL_STATIC(0x52cef0u,52c);
}
B537e72:L537e72:{c.instructions+=3;NFSU2_TR(0x537e72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537e75:{NFSU2_TR(0x537e75);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e77:{NFSU2_TR(0x537e77);
if(r1(R+518)){{goto L537e89;}}
}
B537e79:L537e79:{c.instructions+=3;NFSU2_TR(0x537e79);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e7e:{NFSU2_TR(0x537e7e);
__builtin_memmove((R+4),(R+0),4);
}
B537e80:{NFSU2_TR(0x537e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537e85ull));
TAIL_STATIC(0x517f80u,517);
}
B537e85:L537e85:{c.instructions+=2;NFSU2_TR(0x537e85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e87:{NFSU2_TR(0x537e87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537ea4;}}
}
B537e89:L537e89:{c.instructions+=3;NFSU2_TR(0x537e89);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537e8e:{NFSU2_TR(0x537e8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537e90:{NFSU2_TR(0x537e90);
if(r1(R+518)){{goto L537eae;}}
}
B537e92:L537e92:{c.instructions+=4;NFSU2_TR(0x537e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537e95:{NFSU2_TR(0x537e95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e96:{NFSU2_TR(0x537e96);
u8 U[4];
w4(U+0,u32(0xeb3a688aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537e9b:{NFSU2_TR(0x537e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ea0ull));
TAIL_STATIC(0x52c570u,52c);
}
B537ea0:L537ea0:{c.instructions+=2;NFSU2_TR(0x537ea0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ea2:{NFSU2_TR(0x537ea2);
if(r1(R+518)){{goto L537eae;}}
}
B537ea4:L537ea4:{c.instructions+=2;NFSU2_TR(0x537ea4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537ea8:{NFSU2_TR(0x537ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537eae;}}
}
B537eaa:L537eaa:{c.instructions+=2;NFSU2_TR(0x537eaa);
__builtin_memmove((R+12),(R+0),4);
}
B537eac:{NFSU2_TR(0x537eac);
{goto L537eb0;}
}
B537eae:L537eae:{c.instructions+=1;NFSU2_TR(0x537eae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B537eb0:L537eb0:{c.instructions+=3;NFSU2_TR(0x537eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B537eb3:{NFSU2_TR(0x537eb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537eb5:{NFSU2_TR(0x537eb5);
if(r1(R+518)){{goto L537ed4;}}
}
B537eb7:L537eb7:{c.instructions+=2;NFSU2_TR(0x537eb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537eb8:{NFSU2_TR(0x537eb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ebdull));
TAIL_STATIC(0x52cef0u,52c);
}
B537ebd:L537ebd:{c.instructions+=3;NFSU2_TR(0x537ebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B537ec0:{NFSU2_TR(0x537ec0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ec2:{NFSU2_TR(0x537ec2);
if(r1(R+518)){{goto L537ed4;}}
}
B537ec4:L537ec4:{c.instructions+=3;NFSU2_TR(0x537ec4);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ec9:{NFSU2_TR(0x537ec9);
__builtin_memmove((R+4),(R+0),4);
}
B537ecb:{NFSU2_TR(0x537ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537ed0ull));
TAIL_STATIC(0x517f80u,517);
}
B537ed0:L537ed0:{c.instructions+=2;NFSU2_TR(0x537ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537ed2:{NFSU2_TR(0x537ed2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537eef;}}
}
B537ed4:L537ed4:{c.instructions+=3;NFSU2_TR(0x537ed4);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B537ed9:{NFSU2_TR(0x537ed9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537edb:{NFSU2_TR(0x537edb);
if(r1(R+518)){{goto L537ef5;}}
}
B537edd:L537edd:{c.instructions+=4;NFSU2_TR(0x537edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537ee0:{NFSU2_TR(0x537ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ee1:{NFSU2_TR(0x537ee1);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ee6:{NFSU2_TR(0x537ee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537eebull));
TAIL_STATIC(0x52c570u,52c);
}
B537eeb:L537eeb:{c.instructions+=2;NFSU2_TR(0x537eeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B537eed:{NFSU2_TR(0x537eed);
if(r1(R+518)){{goto L537ef5;}}
}
B537eef:L537eef:{c.instructions+=2;NFSU2_TR(0x537eef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B537ef3:{NFSU2_TR(0x537ef3);
if(r1(R+518)){{goto L537ef7;}}
}
B537ef5:L537ef5:{c.instructions+=1;NFSU2_TR(0x537ef5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B537ef7:L537ef7:{c.instructions+=8;NFSU2_TR(0x537ef7);
__builtin_memmove((R+4),gp(0x799368),4);
}
B537efd:{NFSU2_TR(0x537efd);
__builtin_memmove((R+8),gp(0x79936c),4);
}
B537f03:{NFSU2_TR(0x537f03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f04:{NFSU2_TR(0x537f04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f05:{NFSU2_TR(0x537f05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f06:{NFSU2_TR(0x537f06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f07:{NFSU2_TR(0x537f07);
__builtin_memmove((R+4),(R+28),4);
}
B537f09:{NFSU2_TR(0x537f09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537f0eull));
TAIL_STATIC(0x51dd90u,51d);
}
B537f0e:L537f0e:{c.instructions+=3;NFSU2_TR(0x537f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537f11:{NFSU2_TR(0x537f11);
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
B537f13:{NFSU2_TR(0x537f13);
if(r1(R+518)){{goto L537f40;}}
}
B537f15:L537f15:{c.instructions+=5;NFSU2_TR(0x537f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537f18:{NFSU2_TR(0x537f18);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f1d:{NFSU2_TR(0x537f1d);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f22:{NFSU2_TR(0x537f22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f23:{NFSU2_TR(0x537f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537f28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537be0u);}goto L537be0;}
}
B537f28:L537f28:{c.instructions+=6;NFSU2_TR(0x537f28);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B537f2e:{NFSU2_TR(0x537f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537f31:{NFSU2_TR(0x537f31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f32:{NFSU2_TR(0x537f32);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f37:{NFSU2_TR(0x537f37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f38:{NFSU2_TR(0x537f38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537f3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537be0u);}goto L537be0;}
}
B537f3d:L537f3d:{c.instructions+=1;NFSU2_TR(0x537f3d);
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
B537f40:L537f40:{c.instructions+=4;NFSU2_TR(0x537f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537f41:{NFSU2_TR(0x537f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537f42:{NFSU2_TR(0x537f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B537f43:{NFSU2_TR(0x537f43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537f50:L537f50:{c.instructions+=6;NFSU2_TR(0x537f50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f51:{NFSU2_TR(0x537f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f52:{NFSU2_TR(0x537f52);
__builtin_memmove((R+24),(R+4),4);
}
B537f54:{NFSU2_TR(0x537f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537f57:{NFSU2_TR(0x537f57);
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
B537f59:{NFSU2_TR(0x537f59);
if(r1(R+518)){{goto L537fe9;}}
}
B537f5f:L537f5f:{c.instructions+=6;NFSU2_TR(0x537f5f);
__builtin_memmove((R+0),gp(0x865198),4);
}
B537f64:{NFSU2_TR(0x537f64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f65:{NFSU2_TR(0x537f65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537f68:{NFSU2_TR(0x537f68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f69:{NFSU2_TR(0x537f69);
__builtin_memmove((R+4),(R+28),4);
}
B537f6b:{NFSU2_TR(0x537f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537f70ull));
TAIL_STATIC(0x577310u,577);
}
B537f70:L537f70:{c.instructions+=2;NFSU2_TR(0x537f70);
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
B537f72:{NFSU2_TR(0x537f72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537fe8;}}
}
B537f74:L537f74:{c.instructions+=5;NFSU2_TR(0x537f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537f77:{NFSU2_TR(0x537f77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f79:{NFSU2_TR(0x537f79);
u8 U[4];
w4(U+0,u32(0x79b2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f7e:{NFSU2_TR(0x537f7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537f7f:{NFSU2_TR(0x537f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537f84ull));
TAIL_STATIC(0x51cf70u,51c);
}
B537f84:L537f84:{c.instructions+=5;NFSU2_TR(0x537f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537f87:{NFSU2_TR(0x537f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537f8a:{NFSU2_TR(0x537f8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B537f8d:{NFSU2_TR(0x537f8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B537f8f:{NFSU2_TR(0x537f8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L537fa0;}}
}
B537f91:L537f91:{c.instructions+=5;NFSU2_TR(0x537f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537f94:{NFSU2_TR(0x537f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B537f97:{NFSU2_TR(0x537f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537f9a:{NFSU2_TR(0x537f9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537f9e:{NFSU2_TR(0x537f9e);
{goto L537faa;}
}
B537fa0:L537fa0:{c.instructions+=3;NFSU2_TR(0x537fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537fa3:{NFSU2_TR(0x537fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537fa6:{NFSU2_TR(0x537fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B537faa:L537faa:{c.instructions+=5;NFSU2_TR(0x537faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B537fad:{NFSU2_TR(0x537fad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537faf:{NFSU2_TR(0x537faf);
u8 U[4];
w4(U+0,u32(0x79b2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537fb4:{NFSU2_TR(0x537fb4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537fb5:{NFSU2_TR(0x537fb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537fbaull));
TAIL_STATIC(0x51cf70u,51c);
}
B537fba:L537fba:{c.instructions+=4;NFSU2_TR(0x537fba);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B537fbe:{NFSU2_TR(0x537fbe);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B537fc4:{NFSU2_TR(0x537fc4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B537fca:{NFSU2_TR(0x537fca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537fcfull));
TAIL_STATIC(0x75bed4u,75b);
}
B537fcf:L537fcf:{c.instructions+=7;NFSU2_TR(0x537fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B537fd2:{NFSU2_TR(0x537fd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B537fd4:{NFSU2_TR(0x537fd4);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B537fd9:{NFSU2_TR(0x537fd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537fda:{NFSU2_TR(0x537fda);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537fdf:{NFSU2_TR(0x537fdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537fe0:{NFSU2_TR(0x537fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x537fe5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x537be0u);}goto L537be0;}
}
B537fe5:L537fe5:{c.instructions+=1;NFSU2_TR(0x537fe5);
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
B537fe8:L537fe8:{c.instructions+=1;NFSU2_TR(0x537fe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B537fe9:L537fe9:{c.instructions+=3;NFSU2_TR(0x537fe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B537fea:{NFSU2_TR(0x537fea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B537feb:{NFSU2_TR(0x537feb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B537ff0:L537ff0:{c.instructions+=6;NFSU2_TR(0x537ff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ff1:{NFSU2_TR(0x537ff1);
__builtin_memmove((R+24),(R+4),4);
}
B537ff3:{NFSU2_TR(0x537ff3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B537ff4:{NFSU2_TR(0x537ff4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B537ff8:{NFSU2_TR(0x537ff8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B537ffe:{NFSU2_TR(0x537ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x538005u,538);
}
XIT:NFSU2_TR_EXIT(0x537,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
