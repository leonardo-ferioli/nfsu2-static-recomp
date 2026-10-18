#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_406(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_41f(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_421(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x422,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x422,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_422(u8* __restrict R,Cpu& c);
u32 page_422(Cpu& c){return body_422(c.regs.data(),c);}
__attribute__((noinline)) u32 body_422(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x422001:goto L422001;
case 0x422003:c.instructions+=1;goto B422003;
case 0x422008:goto L422008;
case 0x42200a:c.instructions+=2;goto B42200a;
case 0x42200c:c.instructions+=1;goto B42200c;
case 0x422011:goto L422011;
case 0x422013:goto L422013;
case 0x422015:c.instructions+=2;goto B422015;
case 0x422017:c.instructions+=1;goto B422017;
case 0x42201c:goto L42201c;
case 0x422020:c.instructions+=2;goto B422020;
case 0x422026:c.instructions+=1;goto B422026;
case 0x42202b:goto L42202b;
case 0x42202d:c.instructions+=15;goto B42202d;
case 0x422032:c.instructions+=14;goto B422032;
case 0x422034:c.instructions+=13;goto B422034;
case 0x42203a:c.instructions+=12;goto B42203a;
case 0x42203c:c.instructions+=11;goto B42203c;
case 0x42203f:c.instructions+=10;goto B42203f;
case 0x422041:c.instructions+=9;goto B422041;
case 0x422044:c.instructions+=8;goto B422044;
case 0x422045:c.instructions+=7;goto B422045;
case 0x422047:c.instructions+=6;goto B422047;
case 0x422049:c.instructions+=5;goto B422049;
case 0x42204f:c.instructions+=4;goto B42204f;
case 0x422050:c.instructions+=3;goto B422050;
case 0x422057:c.instructions+=2;goto B422057;
case 0x422058:c.instructions+=1;goto B422058;
case 0x42205a:goto L42205a;
case 0x422060:c.instructions+=3;goto B422060;
case 0x422061:c.instructions+=2;goto B422061;
case 0x422063:c.instructions+=1;goto B422063;
case 0x422068:goto L422068;
case 0x42206d:c.instructions+=3;goto B42206d;
case 0x42206e:c.instructions+=2;goto B42206e;
case 0x422070:c.instructions+=1;goto B422070;
case 0x422075:goto L422075;
case 0x422077:c.instructions+=2;goto B422077;
case 0x422079:c.instructions+=1;goto B422079;
case 0x42207e:goto L42207e;
case 0x422084:c.instructions+=3;goto B422084;
case 0x422085:c.instructions+=2;goto B422085;
case 0x42208b:c.instructions+=1;goto B42208b;
case 0x422090:goto L422090;
case 0x422091:c.instructions+=2;goto B422091;
case 0x422094:c.instructions+=1;goto B422094;
case 0x4220a0:goto L4220a0;
case 0x4220a1:c.instructions+=5;goto B4220a1;
case 0x4220a2:c.instructions+=4;goto B4220a2;
case 0x4220a6:c.instructions+=3;goto B4220a6;
case 0x4220a7:c.instructions+=2;goto B4220a7;
case 0x4220a9:c.instructions+=1;goto B4220a9;
case 0x4220ae:goto L4220ae;
case 0x4220b4:c.instructions+=3;goto B4220b4;
case 0x4220ba:c.instructions+=2;goto B4220ba;
case 0x4220bb:c.instructions+=1;goto B4220bb;
case 0x4220be:goto L4220be;
case 0x4220c0:c.instructions+=2;goto B4220c0;
case 0x4220c2:c.instructions+=1;goto B4220c2;
case 0x4220c5:goto L4220c5;
case 0x4220c6:c.instructions+=3;goto B4220c6;
case 0x4220c8:c.instructions+=2;goto B4220c8;
case 0x4220ce:c.instructions+=1;goto B4220ce;
case 0x4220d3:goto L4220d3;
case 0x4220d9:c.instructions+=4;goto B4220d9;
case 0x4220da:c.instructions+=3;goto B4220da;
case 0x4220dd:c.instructions+=2;goto B4220dd;
case 0x4220df:c.instructions+=1;goto B4220df;
case 0x4220e4:goto L4220e4;
case 0x4220ea:c.instructions+=4;goto B4220ea;
case 0x4220eb:c.instructions+=3;goto B4220eb;
case 0x4220ee:c.instructions+=2;goto B4220ee;
case 0x4220f0:c.instructions+=1;goto B4220f0;
case 0x4220f5:goto L4220f5;
case 0x4220fb:c.instructions+=4;goto B4220fb;
case 0x4220fc:c.instructions+=3;goto B4220fc;
case 0x4220ff:c.instructions+=2;goto B4220ff;
case 0x422101:c.instructions+=1;goto B422101;
case 0x422106:goto L422106;
case 0x422107:c.instructions+=2;goto B422107;
case 0x422108:c.instructions+=1;goto B422108;
case 0x422110:goto L422110;
case 0x422111:c.instructions+=2;goto B422111;
case 0x422113:c.instructions+=1;goto B422113;
case 0x422118:goto L422118;
case 0x42211d:c.instructions+=1;goto B42211d;
case 0x42211f:goto L42211f;
case 0x422120:c.instructions+=1;goto B422120;
case 0x422125:goto L422125;
case 0x422128:goto L422128;
case 0x42212a:c.instructions+=2;goto B42212a;
case 0x42212b:c.instructions+=1;goto B42212b;
case 0x422130:goto L422130;
case 0x422131:c.instructions+=2;goto B422131;
case 0x422133:c.instructions+=1;goto B422133;
case 0x422138:goto L422138;
case 0x42213d:c.instructions+=1;goto B42213d;
case 0x42213f:goto L42213f;
case 0x422140:c.instructions+=1;goto B422140;
case 0x422145:goto L422145;
case 0x422148:goto L422148;
case 0x42214a:c.instructions+=2;goto B42214a;
case 0x42214b:c.instructions+=1;goto B42214b;
case 0x422150:goto L422150;
case 0x422151:c.instructions+=7;goto B422151;
case 0x422153:c.instructions+=6;goto B422153;
case 0x422159:c.instructions+=5;goto B422159;
case 0x42215b:c.instructions+=4;goto B42215b;
case 0x42215c:c.instructions+=3;goto B42215c;
case 0x42215f:c.instructions+=2;goto B42215f;
case 0x422160:c.instructions+=1;goto B422160;
case 0x422163:goto L422163;
case 0x422166:c.instructions+=2;goto B422166;
case 0x42216b:c.instructions+=1;goto B42216b;
case 0x42216d:goto L42216d;
case 0x422173:c.instructions+=4;goto B422173;
case 0x422176:c.instructions+=3;goto B422176;
case 0x422177:c.instructions+=2;goto B422177;
case 0x42217c:c.instructions+=1;goto B42217c;
case 0x422181:goto L422181;
case 0x422187:c.instructions+=3;goto B422187;
case 0x422189:c.instructions+=2;goto B422189;
case 0x42218a:c.instructions+=1;goto B42218a;
case 0x42218d:goto L42218d;
case 0x422193:c.instructions+=5;goto B422193;
case 0x422196:c.instructions+=4;goto B422196;
case 0x422198:c.instructions+=3;goto B422198;
case 0x42219b:c.instructions+=2;goto B42219b;
case 0x42219c:c.instructions+=1;goto B42219c;
case 0x42219f:goto L42219f;
case 0x4221a2:c.instructions+=2;goto B4221a2;
case 0x4221a6:c.instructions+=1;goto B4221a6;
case 0x4221a8:goto L4221a8;
case 0x4221ab:c.instructions+=1;goto B4221ab;
case 0x4221b0:goto L4221b0;
case 0x4221b6:c.instructions+=4;goto B4221b6;
case 0x4221b8:c.instructions+=3;goto B4221b8;
case 0x4221ba:c.instructions+=2;goto B4221ba;
case 0x4221bd:c.instructions+=1;goto B4221bd;
case 0x4221c2:goto L4221c2;
case 0x4221c3:c.instructions+=2;goto B4221c3;
case 0x4221c4:c.instructions+=1;goto B4221c4;
case 0x4221d0:goto L4221d0;
case 0x4221d1:c.instructions+=3;goto B4221d1;
case 0x4221d3:c.instructions+=2;goto B4221d3;
case 0x4221d8:c.instructions+=1;goto B4221d8;
case 0x4221dd:goto L4221dd;
case 0x4221e0:c.instructions+=2;goto B4221e0;
case 0x4221e1:c.instructions+=1;goto B4221e1;
case 0x4221e6:goto L4221e6;
case 0x4221e9:c.instructions+=2;goto B4221e9;
case 0x4221ea:c.instructions+=1;goto B4221ea;
case 0x4221f0:goto L4221f0;
case 0x4221f1:c.instructions+=7;goto B4221f1;
case 0x4221f2:c.instructions+=6;goto B4221f2;
case 0x4221f6:c.instructions+=5;goto B4221f6;
case 0x4221f8:c.instructions+=4;goto B4221f8;
case 0x4221fa:c.instructions+=3;goto B4221fa;
case 0x4221fc:c.instructions+=2;goto B4221fc;
case 0x4221fe:c.instructions+=1;goto B4221fe;
case 0x422203:goto L422203;
case 0x422207:c.instructions+=6;goto B422207;
case 0x422209:c.instructions+=5;goto B422209;
case 0x42220a:c.instructions+=4;goto B42220a;
case 0x42220b:c.instructions+=3;goto B42220b;
case 0x42220c:c.instructions+=2;goto B42220c;
case 0x42220e:c.instructions+=1;goto B42220e;
case 0x422213:goto L422213;
case 0x422214:c.instructions+=2;goto B422214;
case 0x422215:c.instructions+=1;goto B422215;
case 0x422220:goto L422220;
case 0x422223:c.instructions+=11;goto B422223;
case 0x422227:c.instructions+=10;goto B422227;
case 0x422228:c.instructions+=9;goto B422228;
case 0x422229:c.instructions+=8;goto B422229;
case 0x42222a:c.instructions+=7;goto B42222a;
case 0x42222b:c.instructions+=6;goto B42222b;
case 0x42222d:c.instructions+=5;goto B42222d;
case 0x422230:c.instructions+=4;goto B422230;
case 0x422234:c.instructions+=3;goto B422234;
case 0x422237:c.instructions+=2;goto B422237;
case 0x42223a:c.instructions+=1;goto B42223a;
case 0x42223f:goto L42223f;
case 0x422242:c.instructions+=4;goto B422242;
case 0x422246:c.instructions+=3;goto B422246;
case 0x42224a:c.instructions+=2;goto B42224a;
case 0x42224e:c.instructions+=1;goto B42224e;
case 0x422250:goto L422250;
case 0x422255:c.instructions+=1;goto B422255;
case 0x422257:goto L422257;
case 0x42225a:c.instructions+=2;goto B42225a;
case 0x42225c:c.instructions+=1;goto B42225c;
case 0x42225e:goto L42225e;
case 0x422265:c.instructions+=1;goto B422265;
case 0x422267:goto L422267;
case 0x422269:goto L422269;
case 0x42226d:c.instructions+=3;goto B42226d;
case 0x422270:c.instructions+=2;goto B422270;
case 0x422272:c.instructions+=1;goto B422272;
case 0x422275:goto L422275;
case 0x422278:c.instructions+=14;goto B422278;
case 0x42227c:c.instructions+=13;goto B42227c;
case 0x42227e:c.instructions+=12;goto B42227e;
case 0x422280:c.instructions+=11;goto B422280;
case 0x422284:c.instructions+=10;goto B422284;
case 0x422288:c.instructions+=9;goto B422288;
case 0x42228a:c.instructions+=8;goto B42228a;
case 0x42228d:c.instructions+=7;goto B42228d;
case 0x42228f:c.instructions+=6;goto B42228f;
case 0x422291:c.instructions+=5;goto B422291;
case 0x422295:c.instructions+=4;goto B422295;
case 0x422299:c.instructions+=3;goto B422299;
case 0x42229d:c.instructions+=2;goto B42229d;
case 0x4222a1:c.instructions+=1;goto B4222a1;
case 0x4222a3:goto L4222a3;
case 0x4222a7:c.instructions+=1;goto B4222a7;
case 0x4222a9:goto L4222a9;
case 0x4222ac:c.instructions+=2;goto B4222ac;
case 0x4222ae:c.instructions+=1;goto B4222ae;
case 0x4222b0:goto L4222b0;
case 0x4222b7:c.instructions+=1;goto B4222b7;
case 0x4222b9:goto L4222b9;
case 0x4222bb:goto L4222bb;
case 0x4222be:c.instructions+=1;goto B4222be;
case 0x4222c5:goto L4222c5;
case 0x4222c8:c.instructions+=14;goto B4222c8;
case 0x4222cb:c.instructions+=13;goto B4222cb;
case 0x4222ce:c.instructions+=12;goto B4222ce;
case 0x4222d1:c.instructions+=11;goto B4222d1;
case 0x4222d5:c.instructions+=10;goto B4222d5;
case 0x4222d8:c.instructions+=9;goto B4222d8;
case 0x4222dc:c.instructions+=8;goto B4222dc;
case 0x4222df:c.instructions+=7;goto B4222df;
case 0x4222e3:c.instructions+=6;goto B4222e3;
case 0x4222eb:c.instructions+=5;goto B4222eb;
case 0x4222f3:c.instructions+=4;goto B4222f3;
case 0x4222f7:c.instructions+=3;goto B4222f7;
case 0x4222fb:c.instructions+=2;goto B4222fb;
case 0x4222ff:c.instructions+=1;goto B4222ff;
case 0x422300:goto L422300;
case 0x422304:c.instructions+=4;goto B422304;
case 0x422308:c.instructions+=3;goto B422308;
case 0x42230a:c.instructions+=2;goto B42230a;
case 0x42230d:c.instructions+=1;goto B42230d;
case 0x42230f:goto L42230f;
case 0x422313:c.instructions+=1;goto B422313;
case 0x422315:goto L422315;
case 0x422319:c.instructions+=4;goto B422319;
case 0x42231d:c.instructions+=3;goto B42231d;
case 0x42231f:c.instructions+=2;goto B42231f;
case 0x422322:c.instructions+=1;goto B422322;
case 0x422328:goto L422328;
case 0x42232c:c.instructions+=1;goto B42232c;
case 0x422332:goto L422332;
case 0x422336:c.instructions+=17;goto B422336;
case 0x422338:c.instructions+=16;goto B422338;
case 0x42233a:c.instructions+=15;goto B42233a;
case 0x42233d:c.instructions+=14;goto B42233d;
case 0x42233e:c.instructions+=13;goto B42233e;
case 0x422342:c.instructions+=12;goto B422342;
case 0x422343:c.instructions+=11;goto B422343;
case 0x422347:c.instructions+=10;goto B422347;
case 0x42234b:c.instructions+=9;goto B42234b;
case 0x42234d:c.instructions+=8;goto B42234d;
case 0x422351:c.instructions+=7;goto B422351;
case 0x422352:c.instructions+=6;goto B422352;
case 0x422353:c.instructions+=5;goto B422353;
case 0x422354:c.instructions+=4;goto B422354;
case 0x422358:c.instructions+=3;goto B422358;
case 0x422359:c.instructions+=2;goto B422359;
case 0x42235b:c.instructions+=1;goto B42235b;
case 0x422360:goto L422360;
case 0x422362:c.instructions+=1;goto B422362;
case 0x422368:goto L422368;
case 0x42236c:c.instructions+=3;goto B42236c;
case 0x42236e:c.instructions+=2;goto B42236e;
case 0x422372:c.instructions+=1;goto B422372;
case 0x422378:goto L422378;
case 0x42237b:c.instructions+=3;goto B42237b;
case 0x42237e:c.instructions+=2;goto B42237e;
case 0x422381:c.instructions+=1;goto B422381;
case 0x422387:goto L422387;
case 0x422388:c.instructions+=3;goto B422388;
case 0x422389:c.instructions+=2;goto B422389;
case 0x42238b:c.instructions+=1;goto B42238b;
case 0x422390:goto L422390;
case 0x422394:c.instructions+=3;goto B422394;
case 0x422399:c.instructions+=2;goto B422399;
case 0x42239b:c.instructions+=1;goto B42239b;
case 0x4223a1:goto L4223a1;
case 0x4223a6:c.instructions+=2;goto B4223a6;
case 0x4223a8:c.instructions+=1;goto B4223a8;
case 0x4223ae:goto L4223ae;
case 0x4223b2:c.instructions+=4;goto B4223b2;
case 0x4223b8:c.instructions+=3;goto B4223b8;
case 0x4223ba:c.instructions+=2;goto B4223ba;
case 0x4223bd:c.instructions+=1;goto B4223bd;
case 0x4223bf:goto L4223bf;
case 0x4223c0:goto L4223c0;
case 0x4223c4:c.instructions+=13;goto B4223c4;
case 0x4223c5:c.instructions+=12;goto B4223c5;
case 0x4223c9:c.instructions+=11;goto B4223c9;
case 0x4223ca:c.instructions+=10;goto B4223ca;
case 0x4223ce:c.instructions+=9;goto B4223ce;
case 0x4223cf:c.instructions+=8;goto B4223cf;
case 0x4223d3:c.instructions+=7;goto B4223d3;
case 0x4223d4:c.instructions+=6;goto B4223d4;
case 0x4223d8:c.instructions+=5;goto B4223d8;
case 0x4223d9:c.instructions+=4;goto B4223d9;
case 0x4223dd:c.instructions+=3;goto B4223dd;
case 0x4223de:c.instructions+=2;goto B4223de;
case 0x4223e0:c.instructions+=1;goto B4223e0;
case 0x4223e5:goto L4223e5;
case 0x4223e7:c.instructions+=1;goto B4223e7;
case 0x4223ed:goto L4223ed;
case 0x4223f1:c.instructions+=4;goto B4223f1;
case 0x4223f2:c.instructions+=3;goto B4223f2;
case 0x4223f3:c.instructions+=2;goto B4223f3;
case 0x4223f5:c.instructions+=1;goto B4223f5;
case 0x4223fa:goto L4223fa;
case 0x4223fe:c.instructions+=5;goto B4223fe;
case 0x422402:c.instructions+=4;goto B422402;
case 0x422403:c.instructions+=3;goto B422403;
case 0x422406:c.instructions+=2;goto B422406;
case 0x42240a:c.instructions+=1;goto B42240a;
case 0x422410:goto L422410;
case 0x422416:c.instructions+=3;goto B422416;
case 0x422418:c.instructions+=2;goto B422418;
case 0x42241b:c.instructions+=1;goto B42241b;
case 0x42241d:goto L42241d;
case 0x422421:goto L422421;
case 0x422423:c.instructions+=6;goto B422423;
case 0x422425:c.instructions+=5;goto B422425;
case 0x422428:c.instructions+=4;goto B422428;
case 0x422429:c.instructions+=3;goto B422429;
case 0x42242a:c.instructions+=2;goto B42242a;
case 0x42242c:c.instructions+=1;goto B42242c;
case 0x422431:goto L422431;
case 0x422435:c.instructions+=5;goto B422435;
case 0x422437:c.instructions+=4;goto B422437;
case 0x42243b:c.instructions+=3;goto B42243b;
case 0x42243d:c.instructions+=2;goto B42243d;
case 0x422441:c.instructions+=1;goto B422441;
case 0x422446:goto L422446;
case 0x42244b:c.instructions+=25;goto B42244b;
case 0x42244f:c.instructions+=24;goto B42244f;
case 0x422453:c.instructions+=23;goto B422453;
case 0x422457:c.instructions+=22;goto B422457;
case 0x42245b:c.instructions+=21;goto B42245b;
case 0x42245f:c.instructions+=20;goto B42245f;
case 0x422463:c.instructions+=19;goto B422463;
case 0x422466:c.instructions+=18;goto B422466;
case 0x42246a:c.instructions+=17;goto B42246a;
case 0x42246e:c.instructions+=16;goto B42246e;
case 0x422471:c.instructions+=15;goto B422471;
case 0x422474:c.instructions+=14;goto B422474;
case 0x422478:c.instructions+=13;goto B422478;
case 0x42247b:c.instructions+=12;goto B42247b;
case 0x42247d:c.instructions+=11;goto B42247d;
case 0x422481:c.instructions+=10;goto B422481;
case 0x422484:c.instructions+=9;goto B422484;
case 0x422488:c.instructions+=8;goto B422488;
case 0x42248b:c.instructions+=7;goto B42248b;
case 0x42248d:c.instructions+=6;goto B42248d;
case 0x422490:c.instructions+=5;goto B422490;
case 0x422494:c.instructions+=4;goto B422494;
case 0x422495:c.instructions+=3;goto B422495;
case 0x422497:c.instructions+=2;goto B422497;
case 0x42249e:c.instructions+=1;goto B42249e;
case 0x4224a1:goto L4224a1;
case 0x4224a5:c.instructions+=2;goto B4224a5;
case 0x4224a7:c.instructions+=1;goto B4224a7;
case 0x4224ad:goto L4224ad;
case 0x4224b0:c.instructions+=3;goto B4224b0;
case 0x4224b3:c.instructions+=2;goto B4224b3;
case 0x4224b6:c.instructions+=1;goto B4224b6;
case 0x4224bc:goto L4224bc;
case 0x4224c0:c.instructions+=4;goto B4224c0;
case 0x4224c1:c.instructions+=3;goto B4224c1;
case 0x4224c2:c.instructions+=2;goto B4224c2;
case 0x4224c4:c.instructions+=1;goto B4224c4;
case 0x4224c9:goto L4224c9;
case 0x4224cc:c.instructions+=6;goto B4224cc;
case 0x4224d0:c.instructions+=5;goto B4224d0;
case 0x4224d4:c.instructions+=4;goto B4224d4;
case 0x4224d8:c.instructions+=3;goto B4224d8;
case 0x4224db:c.instructions+=2;goto B4224db;
case 0x4224df:c.instructions+=1;goto B4224df;
case 0x4224e5:goto L4224e5;
case 0x4224ea:c.instructions+=1;goto B4224ea;
case 0x4224f0:goto L4224f0;
case 0x4224f3:c.instructions+=2;goto B4224f3;
case 0x4224f5:c.instructions+=1;goto B4224f5;
case 0x4224fb:goto L4224fb;
case 0x422502:c.instructions+=1;goto B422502;
case 0x422507:goto L422507;
case 0x42250b:c.instructions+=4;goto B42250b;
case 0x422511:c.instructions+=3;goto B422511;
case 0x422513:c.instructions+=2;goto B422513;
case 0x422516:c.instructions+=1;goto B422516;
case 0x42251c:goto L42251c;
case 0x422520:goto L422520;
case 0x422523:c.instructions+=2;goto B422523;
case 0x422525:c.instructions+=1;goto B422525;
case 0x42252b:goto L42252b;
case 0x42252e:c.instructions+=1;goto B42252e;
case 0x422530:goto L422530;
case 0x422534:c.instructions+=11;goto B422534;
case 0x422537:c.instructions+=10;goto B422537;
case 0x42253a:c.instructions+=9;goto B42253a;
case 0x42253d:c.instructions+=8;goto B42253d;
case 0x422541:c.instructions+=7;goto B422541;
case 0x422543:c.instructions+=6;goto B422543;
case 0x422547:c.instructions+=5;goto B422547;
case 0x42254b:c.instructions+=4;goto B42254b;
case 0x42254d:c.instructions+=3;goto B42254d;
case 0x422551:c.instructions+=2;goto B422551;
case 0x422553:c.instructions+=1;goto B422553;
case 0x422555:goto L422555;
case 0x42255d:c.instructions+=1;goto B42255d;
case 0x422565:goto L422565;
case 0x422569:c.instructions+=2;goto B422569;
case 0x42256b:c.instructions+=1;goto B42256b;
case 0x42256d:goto L42256d;
case 0x42256f:c.instructions+=3;goto B42256f;
case 0x422571:c.instructions+=2;goto B422571;
case 0x422573:c.instructions+=1;goto B422573;
case 0x422575:goto L422575;
case 0x422578:c.instructions+=7;goto B422578;
case 0x42257c:c.instructions+=6;goto B42257c;
case 0x422582:c.instructions+=5;goto B422582;
case 0x42258a:c.instructions+=4;goto B42258a;
case 0x42258d:c.instructions+=3;goto B42258d;
case 0x42258f:c.instructions+=2;goto B42258f;
case 0x422592:c.instructions+=1;goto B422592;
case 0x422594:goto L422594;
case 0x422599:goto L422599;
case 0x42259b:c.instructions+=19;goto B42259b;
case 0x42259d:c.instructions+=18;goto B42259d;
case 0x4225a0:c.instructions+=17;goto B4225a0;
case 0x4225a8:c.instructions+=16;goto B4225a8;
case 0x4225ab:c.instructions+=15;goto B4225ab;
case 0x4225af:c.instructions+=14;goto B4225af;
case 0x4225b2:c.instructions+=13;goto B4225b2;
case 0x4225b6:c.instructions+=12;goto B4225b6;
case 0x4225ba:c.instructions+=11;goto B4225ba;
case 0x4225be:c.instructions+=10;goto B4225be;
case 0x4225c0:c.instructions+=9;goto B4225c0;
case 0x4225c2:c.instructions+=8;goto B4225c2;
case 0x4225c4:c.instructions+=7;goto B4225c4;
case 0x4225c6:c.instructions+=6;goto B4225c6;
case 0x4225c8:c.instructions+=5;goto B4225c8;
case 0x4225ca:c.instructions+=4;goto B4225ca;
case 0x4225cc:c.instructions+=3;goto B4225cc;
case 0x4225ce:c.instructions+=2;goto B4225ce;
case 0x4225d2:c.instructions+=1;goto B4225d2;
case 0x4225d7:goto L4225d7;
case 0x4225da:c.instructions+=2;goto B4225da;
case 0x4225dc:c.instructions+=1;goto B4225dc;
case 0x4225de:goto L4225de;
case 0x4225e2:c.instructions+=4;goto B4225e2;
case 0x4225e5:c.instructions+=3;goto B4225e5;
case 0x4225e6:c.instructions+=2;goto B4225e6;
case 0x4225ea:c.instructions+=1;goto B4225ea;
case 0x4225ef:goto L4225ef;
case 0x4225f3:c.instructions+=1;goto B4225f3;
case 0x4225f5:goto L4225f5;
case 0x4225f7:c.instructions+=1;goto B4225f7;
case 0x4225f9:goto L4225f9;
case 0x4225fd:c.instructions+=5;goto B4225fd;
case 0x422600:c.instructions+=4;goto B422600;
case 0x422604:c.instructions+=3;goto B422604;
case 0x422608:c.instructions+=2;goto B422608;
case 0x42260e:c.instructions+=1;goto B42260e;
case 0x422610:goto L422610;
case 0x422612:c.instructions+=1;goto B422612;
case 0x422617:goto L422617;
case 0x422619:c.instructions+=3;goto B422619;
case 0x42261b:c.instructions+=2;goto B42261b;
case 0x42261d:c.instructions+=1;goto B42261d;
case 0x42261f:goto L42261f;
case 0x422621:goto L422621;
case 0x422626:goto L422626;
case 0x42262a:c.instructions+=7;goto B42262a;
case 0x42262e:c.instructions+=6;goto B42262e;
case 0x422630:c.instructions+=5;goto B422630;
case 0x422632:c.instructions+=4;goto B422632;
case 0x422635:c.instructions+=3;goto B422635;
case 0x422637:c.instructions+=2;goto B422637;
case 0x422639:c.instructions+=1;goto B422639;
case 0x42263e:goto L42263e;
case 0x422642:c.instructions+=2;goto B422642;
case 0x422644:c.instructions+=1;goto B422644;
case 0x422646:goto L422646;
case 0x42264a:c.instructions+=2;goto B42264a;
case 0x42264c:c.instructions+=1;goto B42264c;
case 0x422652:goto L422652;
case 0x422656:c.instructions+=5;goto B422656;
case 0x422657:c.instructions+=4;goto B422657;
case 0x42265b:c.instructions+=3;goto B42265b;
case 0x42265c:c.instructions+=2;goto B42265c;
case 0x42265e:c.instructions+=1;goto B42265e;
case 0x422663:goto L422663;
case 0x422668:goto L422668;
case 0x42266a:goto L42266a;
case 0x42266e:c.instructions+=2;goto B42266e;
case 0x422672:c.instructions+=1;goto B422672;
case 0x422674:goto L422674;
case 0x422678:c.instructions+=2;goto B422678;
case 0x42267c:c.instructions+=1;goto B42267c;
case 0x42267e:goto L42267e;
case 0x422681:c.instructions+=2;goto B422681;
case 0x422683:c.instructions+=1;goto B422683;
case 0x422685:goto L422685;
case 0x42268c:c.instructions+=4;goto B42268c;
case 0x42268f:c.instructions+=3;goto B42268f;
case 0x422692:c.instructions+=2;goto B422692;
case 0x422699:c.instructions+=1;goto B422699;
case 0x42269b:goto L42269b;
case 0x42269e:c.instructions+=4;goto B42269e;
case 0x4226a0:c.instructions+=3;goto B4226a0;
case 0x4226a3:c.instructions+=2;goto B4226a3;
case 0x4226aa:c.instructions+=1;goto B4226aa;
case 0x4226ac:goto L4226ac;
case 0x4226ae:goto L4226ae;
case 0x4226b2:c.instructions+=4;goto B4226b2;
case 0x4226b4:c.instructions+=3;goto B4226b4;
case 0x4226b8:c.instructions+=2;goto B4226b8;
case 0x4226bc:c.instructions+=1;goto B4226bc;
case 0x4226bf:goto L4226bf;
case 0x4226c1:c.instructions+=10;goto B4226c1;
case 0x4226c5:c.instructions+=9;goto B4226c5;
case 0x4226c7:c.instructions+=8;goto B4226c7;
case 0x4226cb:c.instructions+=7;goto B4226cb;
case 0x4226cd:c.instructions+=6;goto B4226cd;
case 0x4226cf:c.instructions+=5;goto B4226cf;
case 0x4226d3:c.instructions+=4;goto B4226d3;
case 0x4226d7:c.instructions+=3;goto B4226d7;
case 0x4226db:c.instructions+=2;goto B4226db;
case 0x4226df:c.instructions+=1;goto B4226df;
case 0x4226e1:goto L4226e1;
case 0x4226e5:c.instructions+=4;goto B4226e5;
case 0x4226e6:c.instructions+=3;goto B4226e6;
case 0x4226e7:c.instructions+=2;goto B4226e7;
case 0x4226e9:c.instructions+=1;goto B4226e9;
case 0x4226ee:goto L4226ee;
case 0x4226f0:c.instructions+=1;goto B4226f0;
case 0x4226f2:goto L4226f2;
case 0x4226f6:c.instructions+=4;goto B4226f6;
case 0x4226f7:c.instructions+=3;goto B4226f7;
case 0x4226f8:c.instructions+=2;goto B4226f8;
case 0x4226fa:c.instructions+=1;goto B4226fa;
case 0x4226ff:goto L4226ff;
case 0x422702:c.instructions+=2;goto B422702;
case 0x422705:c.instructions+=1;goto B422705;
case 0x422707:goto L422707;
case 0x42270b:c.instructions+=3;goto B42270b;
case 0x42270e:c.instructions+=2;goto B42270e;
case 0x422710:c.instructions+=1;goto B422710;
case 0x422712:goto L422712;
case 0x422716:c.instructions+=6;goto B422716;
case 0x42271a:c.instructions+=5;goto B42271a;
case 0x42271d:c.instructions+=4;goto B42271d;
case 0x422720:c.instructions+=3;goto B422720;
case 0x422724:c.instructions+=2;goto B422724;
case 0x422728:c.instructions+=1;goto B422728;
case 0x42272b:goto L42272b;
case 0x42272e:c.instructions+=5;goto B42272e;
case 0x422732:c.instructions+=4;goto B422732;
case 0x422733:c.instructions+=3;goto B422733;
case 0x422736:c.instructions+=2;goto B422736;
case 0x42273a:c.instructions+=1;goto B42273a;
case 0x42273c:goto L42273c;
case 0x42273e:c.instructions+=3;goto B42273e;
case 0x422740:c.instructions+=2;goto B422740;
case 0x422742:c.instructions+=1;goto B422742;
case 0x422744:goto L422744;
case 0x422748:c.instructions+=2;goto B422748;
case 0x42274c:c.instructions+=1;goto B42274c;
case 0x42274e:goto L42274e;
case 0x422750:c.instructions+=3;goto B422750;
case 0x422752:c.instructions+=2;goto B422752;
case 0x422754:c.instructions+=1;goto B422754;
case 0x422756:goto L422756;
case 0x42275a:c.instructions+=5;goto B42275a;
case 0x42275b:c.instructions+=4;goto B42275b;
case 0x42275e:c.instructions+=3;goto B42275e;
case 0x422760:c.instructions+=2;goto B422760;
case 0x422764:c.instructions+=1;goto B422764;
case 0x42276a:goto L42276a;
case 0x42276b:c.instructions+=5;goto B42276b;
case 0x42276c:c.instructions+=4;goto B42276c;
case 0x42276d:c.instructions+=3;goto B42276d;
case 0x42276e:c.instructions+=2;goto B42276e;
case 0x422771:c.instructions+=1;goto B422771;
case 0x422774:goto L422774;
case 0x422776:goto L422776;
case 0x422777:c.instructions+=5;goto B422777;
case 0x422778:c.instructions+=4;goto B422778;
case 0x422779:c.instructions+=3;goto B422779;
case 0x42277a:c.instructions+=2;goto B42277a;
case 0x42277d:c.instructions+=1;goto B42277d;
case 0x422780:goto L422780;
case 0x422783:c.instructions+=8;goto B422783;
case 0x422784:c.instructions+=7;goto B422784;
case 0x422788:c.instructions+=6;goto B422788;
case 0x42278b:c.instructions+=5;goto B42278b;
case 0x42278c:c.instructions+=4;goto B42278c;
case 0x42278d:c.instructions+=3;goto B42278d;
case 0x42278f:c.instructions+=2;goto B42278f;
case 0x422792:c.instructions+=1;goto B422792;
case 0x422797:goto L422797;
case 0x422798:c.instructions+=2;goto B422798;
case 0x42279c:c.instructions+=1;goto B42279c;
case 0x4227a1:goto L4227a1;
case 0x4227a5:c.instructions+=2;goto B4227a5;
case 0x4227a6:c.instructions+=1;goto B4227a6;
case 0x4227ab:goto L4227ab;
case 0x4227af:c.instructions+=6;goto B4227af;
case 0x4227b5:c.instructions+=5;goto B4227b5;
case 0x4227b7:c.instructions+=4;goto B4227b7;
case 0x4227ba:c.instructions+=3;goto B4227ba;
case 0x4227bc:c.instructions+=2;goto B4227bc;
case 0x4227c0:c.instructions+=1;goto B4227c0;
case 0x4227c6:goto L4227c6;
case 0x4227cc:c.instructions+=8;goto B4227cc;
case 0x4227d2:c.instructions+=7;goto B4227d2;
case 0x4227d8:c.instructions+=6;goto B4227d8;
case 0x4227d9:c.instructions+=5;goto B4227d9;
case 0x4227de:c.instructions+=4;goto B4227de;
case 0x4227e2:c.instructions+=3;goto B4227e2;
case 0x4227e6:c.instructions+=2;goto B4227e6;
case 0x4227ea:c.instructions+=1;goto B4227ea;
case 0x4227ec:goto L4227ec;
case 0x4227f0:goto L4227f0;
case 0x4227f4:c.instructions+=3;goto B4227f4;
case 0x4227f7:c.instructions+=2;goto B4227f7;
case 0x4227fc:c.instructions+=1;goto B4227fc;
case 0x422800:goto L422800;
case 0x422804:c.instructions+=4;goto B422804;
case 0x422807:c.instructions+=3;goto B422807;
case 0x422808:c.instructions+=2;goto B422808;
case 0x422809:c.instructions+=1;goto B422809;
case 0x42280b:goto L42280b;
case 0x422811:c.instructions+=13;goto B422811;
case 0x422812:c.instructions+=12;goto B422812;
case 0x422814:c.instructions+=11;goto B422814;
case 0x422816:c.instructions+=10;goto B422816;
case 0x422817:c.instructions+=9;goto B422817;
case 0x42281c:c.instructions+=8;goto B42281c;
case 0x42281f:c.instructions+=7;goto B42281f;
case 0x422820:c.instructions+=6;goto B422820;
case 0x422822:c.instructions+=5;goto B422822;
case 0x422826:c.instructions+=4;goto B422826;
case 0x422829:c.instructions+=3;goto B422829;
case 0x42282d:c.instructions+=2;goto B42282d;
case 0x422831:c.instructions+=1;goto B422831;
case 0x422836:goto L422836;
case 0x42283b:c.instructions+=6;goto B42283b;
case 0x42283c:c.instructions+=5;goto B42283c;
case 0x42283e:c.instructions+=4;goto B42283e;
case 0x42283f:c.instructions+=3;goto B42283f;
case 0x422840:c.instructions+=2;goto B422840;
case 0x422842:c.instructions+=1;goto B422842;
case 0x422847:goto L422847;
case 0x42284d:c.instructions+=8;goto B42284d;
case 0x42284e:c.instructions+=7;goto B42284e;
case 0x422850:c.instructions+=6;goto B422850;
case 0x422852:c.instructions+=5;goto B422852;
case 0x422853:c.instructions+=4;goto B422853;
case 0x422856:c.instructions+=3;goto B422856;
case 0x422857:c.instructions+=2;goto B422857;
case 0x422859:c.instructions+=1;goto B422859;
case 0x42285e:goto L42285e;
case 0x422864:c.instructions+=6;goto B422864;
case 0x422865:c.instructions+=5;goto B422865;
case 0x422867:c.instructions+=4;goto B422867;
case 0x422868:c.instructions+=3;goto B422868;
case 0x422869:c.instructions+=2;goto B422869;
case 0x42286b:c.instructions+=1;goto B42286b;
case 0x422870:goto L422870;
case 0x422871:c.instructions+=3;goto B422871;
case 0x422872:c.instructions+=2;goto B422872;
case 0x422874:c.instructions+=1;goto B422874;
case 0x422879:goto L422879;
case 0x42287d:c.instructions+=5;goto B42287d;
case 0x422880:c.instructions+=4;goto B422880;
case 0x422884:c.instructions+=3;goto B422884;
case 0x422887:c.instructions+=2;goto B422887;
case 0x422889:c.instructions+=1;goto B422889;
case 0x42288b:goto L42288b;
case 0x42288f:c.instructions+=8;goto B42288f;
case 0x422893:c.instructions+=7;goto B422893;
case 0x422894:c.instructions+=6;goto B422894;
case 0x422897:c.instructions+=5;goto B422897;
case 0x422898:c.instructions+=4;goto B422898;
case 0x422899:c.instructions+=3;goto B422899;
case 0x42289c:c.instructions+=2;goto B42289c;
case 0x42289d:c.instructions+=1;goto B42289d;
case 0x4228a2:goto L4228a2;
case 0x4228a6:c.instructions+=7;goto B4228a6;
case 0x4228ab:c.instructions+=6;goto B4228ab;
case 0x4228af:c.instructions+=5;goto B4228af;
case 0x4228b3:c.instructions+=4;goto B4228b3;
case 0x4228b4:c.instructions+=3;goto B4228b4;
case 0x4228b5:c.instructions+=2;goto B4228b5;
case 0x4228b6:c.instructions+=1;goto B4228b6;
case 0x4228bb:goto L4228bb;
case 0x4228bf:c.instructions+=3;goto B4228bf;
case 0x4228c1:c.instructions+=2;goto B4228c1;
case 0x4228c4:c.instructions+=1;goto B4228c4;
case 0x4228c6:goto L4228c6;
case 0x4228cc:c.instructions+=2;goto B4228cc;
case 0x4228d0:c.instructions+=1;goto B4228d0;
case 0x4228d2:goto L4228d2;
case 0x4228d7:c.instructions+=10;goto B4228d7;
case 0x4228da:c.instructions+=9;goto B4228da;
case 0x4228dd:c.instructions+=8;goto B4228dd;
case 0x4228e0:c.instructions+=7;goto B4228e0;
case 0x4228e3:c.instructions+=6;goto B4228e3;
case 0x4228e7:c.instructions+=5;goto B4228e7;
case 0x4228ea:c.instructions+=4;goto B4228ea;
case 0x4228ed:c.instructions+=3;goto B4228ed;
case 0x4228f1:c.instructions+=2;goto B4228f1;
case 0x4228f5:c.instructions+=1;goto B4228f5;
case 0x4228f7:goto L4228f7;
case 0x4228fb:c.instructions+=1;goto B4228fb;
case 0x4228fd:goto L4228fd;
case 0x4228ff:goto L4228ff;
case 0x422902:c.instructions+=1;goto B422902;
case 0x422904:goto L422904;
case 0x422908:c.instructions+=2;goto B422908;
case 0x42290c:c.instructions+=1;goto B42290c;
case 0x42290e:goto L42290e;
case 0x422916:c.instructions+=1;goto B422916;
case 0x42291a:goto L42291a;
case 0x42291c:c.instructions+=1;goto B42291c;
case 0x42291e:goto L42291e;
case 0x422921:c.instructions+=4;goto B422921;
case 0x422925:c.instructions+=3;goto B422925;
case 0x422928:c.instructions+=2;goto B422928;
case 0x42292c:c.instructions+=1;goto B42292c;
case 0x42292e:goto L42292e;
case 0x422936:goto L422936;
case 0x422938:c.instructions+=1;goto B422938;
case 0x42293a:goto L42293a;
case 0x42293d:c.instructions+=4;goto B42293d;
case 0x422941:c.instructions+=3;goto B422941;
case 0x422944:c.instructions+=2;goto B422944;
case 0x422948:c.instructions+=1;goto B422948;
case 0x42294a:goto L42294a;
case 0x422952:goto L422952;
case 0x422956:c.instructions+=13;goto B422956;
case 0x42295a:c.instructions+=12;goto B42295a;
case 0x42295e:c.instructions+=11;goto B42295e;
case 0x422962:c.instructions+=10;goto B422962;
case 0x422963:c.instructions+=9;goto B422963;
case 0x422967:c.instructions+=8;goto B422967;
case 0x42296b:c.instructions+=7;goto B42296b;
case 0x42296f:c.instructions+=6;goto B42296f;
case 0x422973:c.instructions+=5;goto B422973;
case 0x422975:c.instructions+=4;goto B422975;
case 0x422979:c.instructions+=3;goto B422979;
case 0x42297b:c.instructions+=2;goto B42297b;
case 0x42297f:c.instructions+=1;goto B42297f;
case 0x422984:goto L422984;
case 0x422986:c.instructions+=6;goto B422986;
case 0x42298a:c.instructions+=5;goto B42298a;
case 0x42298c:c.instructions+=4;goto B42298c;
case 0x422990:c.instructions+=3;goto B422990;
case 0x422992:c.instructions+=2;goto B422992;
case 0x422996:c.instructions+=1;goto B422996;
case 0x422998:goto L422998;
case 0x42299b:c.instructions+=4;goto B42299b;
case 0x42299f:c.instructions+=3;goto B42299f;
case 0x4229a1:c.instructions+=2;goto B4229a1;
case 0x4229a4:c.instructions+=1;goto B4229a4;
case 0x4229a6:goto L4229a6;
case 0x4229a8:c.instructions+=1;goto B4229a8;
case 0x4229ac:goto L4229ac;
case 0x4229af:goto L4229af;
case 0x4229b3:c.instructions+=2;goto B4229b3;
case 0x4229b5:c.instructions+=1;goto B4229b5;
case 0x4229b7:goto L4229b7;
case 0x4229ba:c.instructions+=4;goto B4229ba;
case 0x4229be:c.instructions+=3;goto B4229be;
case 0x4229c0:c.instructions+=2;goto B4229c0;
case 0x4229c3:c.instructions+=1;goto B4229c3;
case 0x4229c5:goto L4229c5;
case 0x4229c7:c.instructions+=1;goto B4229c7;
case 0x4229cb:goto L4229cb;
case 0x4229ce:goto L4229ce;
case 0x4229d0:c.instructions+=14;goto B4229d0;
case 0x4229d4:c.instructions+=13;goto B4229d4;
case 0x4229da:c.instructions+=12;goto B4229da;
case 0x4229de:c.instructions+=11;goto B4229de;
case 0x4229e2:c.instructions+=10;goto B4229e2;
case 0x4229e8:c.instructions+=9;goto B4229e8;
case 0x4229ec:c.instructions+=8;goto B4229ec;
case 0x4229f0:c.instructions+=7;goto B4229f0;
case 0x4229f2:c.instructions+=6;goto B4229f2;
case 0x4229f6:c.instructions+=5;goto B4229f6;
case 0x4229f8:c.instructions+=4;goto B4229f8;
case 0x4229fa:c.instructions+=3;goto B4229fa;
case 0x4229fe:c.instructions+=2;goto B4229fe;
case 0x422a00:c.instructions+=1;goto B422a00;
case 0x422a02:goto L422a02;
case 0x422a05:c.instructions+=4;goto B422a05;
case 0x422a09:c.instructions+=3;goto B422a09;
case 0x422a0b:c.instructions+=2;goto B422a0b;
case 0x422a0e:c.instructions+=1;goto B422a0e;
case 0x422a10:goto L422a10;
case 0x422a12:c.instructions+=1;goto B422a12;
case 0x422a16:goto L422a16;
case 0x422a19:goto L422a19;
case 0x422a1b:c.instructions+=1;goto B422a1b;
case 0x422a1d:goto L422a1d;
case 0x422a20:c.instructions+=4;goto B422a20;
case 0x422a24:c.instructions+=3;goto B422a24;
case 0x422a26:c.instructions+=2;goto B422a26;
case 0x422a29:c.instructions+=1;goto B422a29;
case 0x422a2b:goto L422a2b;
case 0x422a2d:c.instructions+=1;goto B422a2d;
case 0x422a31:goto L422a31;
case 0x422a34:goto L422a34;
case 0x422a36:c.instructions+=9;goto B422a36;
case 0x422a3a:c.instructions+=8;goto B422a3a;
case 0x422a3e:c.instructions+=7;goto B422a3e;
case 0x422a40:c.instructions+=6;goto B422a40;
case 0x422a44:c.instructions+=5;goto B422a44;
case 0x422a46:c.instructions+=4;goto B422a46;
case 0x422a48:c.instructions+=3;goto B422a48;
case 0x422a4c:c.instructions+=2;goto B422a4c;
case 0x422a4e:c.instructions+=1;goto B422a4e;
case 0x422a50:goto L422a50;
case 0x422a53:c.instructions+=4;goto B422a53;
case 0x422a57:c.instructions+=3;goto B422a57;
case 0x422a59:c.instructions+=2;goto B422a59;
case 0x422a5c:c.instructions+=1;goto B422a5c;
case 0x422a5e:goto L422a5e;
case 0x422a60:c.instructions+=1;goto B422a60;
case 0x422a64:goto L422a64;
case 0x422a67:goto L422a67;
case 0x422a69:c.instructions+=1;goto B422a69;
case 0x422a6b:goto L422a6b;
case 0x422a6e:c.instructions+=4;goto B422a6e;
case 0x422a72:c.instructions+=3;goto B422a72;
case 0x422a74:c.instructions+=2;goto B422a74;
case 0x422a77:c.instructions+=1;goto B422a77;
case 0x422a79:goto L422a79;
case 0x422a7b:c.instructions+=1;goto B422a7b;
case 0x422a7f:goto L422a7f;
case 0x422a82:goto L422a82;
case 0x422a84:c.instructions+=9;goto B422a84;
case 0x422a88:c.instructions+=8;goto B422a88;
case 0x422a8c:c.instructions+=7;goto B422a8c;
case 0x422a8e:c.instructions+=6;goto B422a8e;
case 0x422a92:c.instructions+=5;goto B422a92;
case 0x422a94:c.instructions+=4;goto B422a94;
case 0x422a96:c.instructions+=3;goto B422a96;
case 0x422a9a:c.instructions+=2;goto B422a9a;
case 0x422a9c:c.instructions+=1;goto B422a9c;
case 0x422a9e:goto L422a9e;
case 0x422aa1:c.instructions+=4;goto B422aa1;
case 0x422aa5:c.instructions+=3;goto B422aa5;
case 0x422aa7:c.instructions+=2;goto B422aa7;
case 0x422aaa:c.instructions+=1;goto B422aaa;
case 0x422aac:goto L422aac;
case 0x422aae:c.instructions+=1;goto B422aae;
case 0x422ab2:goto L422ab2;
case 0x422ab5:goto L422ab5;
case 0x422ab7:c.instructions+=1;goto B422ab7;
case 0x422ab9:goto L422ab9;
case 0x422abc:c.instructions+=4;goto B422abc;
case 0x422ac0:c.instructions+=3;goto B422ac0;
case 0x422ac2:c.instructions+=2;goto B422ac2;
case 0x422ac5:c.instructions+=1;goto B422ac5;
case 0x422ac7:goto L422ac7;
case 0x422ac9:c.instructions+=1;goto B422ac9;
case 0x422acd:goto L422acd;
case 0x422ad0:goto L422ad0;
case 0x422ad2:c.instructions+=9;goto B422ad2;
case 0x422ad6:c.instructions+=8;goto B422ad6;
case 0x422ada:c.instructions+=7;goto B422ada;
case 0x422adc:c.instructions+=6;goto B422adc;
case 0x422ae0:c.instructions+=5;goto B422ae0;
case 0x422ae2:c.instructions+=4;goto B422ae2;
case 0x422ae4:c.instructions+=3;goto B422ae4;
case 0x422ae8:c.instructions+=2;goto B422ae8;
case 0x422aea:c.instructions+=1;goto B422aea;
case 0x422aec:goto L422aec;
case 0x422aef:c.instructions+=4;goto B422aef;
case 0x422af3:c.instructions+=3;goto B422af3;
case 0x422af5:c.instructions+=2;goto B422af5;
case 0x422af8:c.instructions+=1;goto B422af8;
case 0x422afa:goto L422afa;
case 0x422afc:c.instructions+=1;goto B422afc;
case 0x422b00:goto L422b00;
case 0x422b03:goto L422b03;
case 0x422b05:c.instructions+=1;goto B422b05;
case 0x422b07:goto L422b07;
case 0x422b0a:c.instructions+=4;goto B422b0a;
case 0x422b0e:c.instructions+=3;goto B422b0e;
case 0x422b10:c.instructions+=2;goto B422b10;
case 0x422b13:c.instructions+=1;goto B422b13;
case 0x422b15:goto L422b15;
case 0x422b17:c.instructions+=1;goto B422b17;
case 0x422b1b:goto L422b1b;
case 0x422b1e:goto L422b1e;
case 0x422b22:c.instructions+=6;goto B422b22;
case 0x422b23:c.instructions+=5;goto B422b23;
case 0x422b25:c.instructions+=4;goto B422b25;
case 0x422b26:c.instructions+=3;goto B422b26;
case 0x422b27:c.instructions+=2;goto B422b27;
case 0x422b29:c.instructions+=1;goto B422b29;
case 0x422b2e:goto L422b2e;
case 0x422b32:c.instructions+=6;goto B422b32;
case 0x422b33:c.instructions+=5;goto B422b33;
case 0x422b35:c.instructions+=4;goto B422b35;
case 0x422b36:c.instructions+=3;goto B422b36;
case 0x422b37:c.instructions+=2;goto B422b37;
case 0x422b39:c.instructions+=1;goto B422b39;
case 0x422b3e:goto L422b3e;
case 0x422b42:c.instructions+=16;goto B422b42;
case 0x422b46:c.instructions+=15;goto B422b46;
case 0x422b4a:c.instructions+=14;goto B422b4a;
case 0x422b4f:c.instructions+=13;goto B422b4f;
case 0x422b51:c.instructions+=12;goto B422b51;
case 0x422b55:c.instructions+=11;goto B422b55;
case 0x422b59:c.instructions+=10;goto B422b59;
case 0x422b5b:c.instructions+=9;goto B422b5b;
case 0x422b5d:c.instructions+=8;goto B422b5d;
case 0x422b63:c.instructions+=7;goto B422b63;
case 0x422b64:c.instructions+=6;goto B422b64;
case 0x422b67:c.instructions+=5;goto B422b67;
case 0x422b69:c.instructions+=4;goto B422b69;
case 0x422b6d:c.instructions+=3;goto B422b6d;
case 0x422b71:c.instructions+=2;goto B422b71;
case 0x422b75:c.instructions+=1;goto B422b75;
case 0x422b7b:goto L422b7b;
case 0x422b7c:goto L422b7c;
case 0x422b7d:c.instructions+=4;goto B422b7d;
case 0x422b7e:c.instructions+=3;goto B422b7e;
case 0x422b7f:c.instructions+=2;goto B422b7f;
case 0x422b82:c.instructions+=1;goto B422b82;
case 0x422b90:goto L422b90;
case 0x422b91:c.instructions+=8;goto B422b91;
case 0x422b93:c.instructions+=7;goto B422b93;
case 0x422b96:c.instructions+=6;goto B422b96;
case 0x422b99:c.instructions+=5;goto B422b99;
case 0x422b9a:c.instructions+=4;goto B422b9a;
case 0x422b9b:c.instructions+=3;goto B422b9b;
case 0x422b9c:c.instructions+=2;goto B422b9c;
case 0x422b9e:c.instructions+=1;goto B422b9e;
case 0x422ba3:goto L422ba3;
case 0x422ba6:c.instructions+=2;goto B422ba6;
case 0x422bac:c.instructions+=1;goto B422bac;
case 0x422bb2:goto L422bb2;
case 0x422bb5:c.instructions+=2;goto B422bb5;
case 0x422bb6:c.instructions+=1;goto B422bb6;
case 0x422bbb:goto L422bbb;
case 0x422bc1:c.instructions+=5;goto B422bc1;
case 0x422bc4:c.instructions+=4;goto B422bc4;
case 0x422bca:c.instructions+=3;goto B422bca;
case 0x422bcc:c.instructions+=2;goto B422bcc;
case 0x422bcf:c.instructions+=1;goto B422bcf;
case 0x422bd5:goto L422bd5;
case 0x422bda:goto L422bda;
case 0x422bdd:c.instructions+=11;goto B422bdd;
case 0x422be4:c.instructions+=10;goto B422be4;
case 0x422be6:c.instructions+=9;goto B422be6;
case 0x422bea:c.instructions+=8;goto B422bea;
case 0x422bed:c.instructions+=7;goto B422bed;
case 0x422bee:c.instructions+=6;goto B422bee;
case 0x422bf1:c.instructions+=5;goto B422bf1;
case 0x422bf2:c.instructions+=4;goto B422bf2;
case 0x422bf5:c.instructions+=3;goto B422bf5;
case 0x422bf6:c.instructions+=2;goto B422bf6;
case 0x422bfa:c.instructions+=1;goto B422bfa;
case 0x422bff:goto L422bff;
case 0x422c02:c.instructions+=2;goto B422c02;
case 0x422c04:c.instructions+=1;goto B422c04;
case 0x422c0a:goto L422c0a;
case 0x422c0f:c.instructions+=3;goto B422c0f;
case 0x422c14:c.instructions+=2;goto B422c14;
case 0x422c1c:c.instructions+=1;goto B422c1c;
case 0x422c22:goto L422c22;
case 0x422c24:goto L422c24;
case 0x422c28:c.instructions+=1;goto B422c28;
case 0x422c30:goto L422c30;
case 0x422c34:c.instructions+=2;goto B422c34;
case 0x422c36:c.instructions+=1;goto B422c36;
case 0x422c3c:goto L422c3c;
case 0x422c40:c.instructions+=20;goto B422c40;
case 0x422c43:c.instructions+=19;goto B422c43;
case 0x422c4b:c.instructions+=18;goto B422c4b;
case 0x422c53:c.instructions+=17;goto B422c53;
case 0x422c5a:c.instructions+=16;goto B422c5a;
case 0x422c5e:c.instructions+=15;goto B422c5e;
case 0x422c62:c.instructions+=14;goto B422c62;
case 0x422c66:c.instructions+=13;goto B422c66;
case 0x422c6c:c.instructions+=12;goto B422c6c;
case 0x422c70:c.instructions+=11;goto B422c70;
case 0x422c76:c.instructions+=10;goto B422c76;
case 0x422c79:c.instructions+=9;goto B422c79;
case 0x422c7b:c.instructions+=8;goto B422c7b;
case 0x422c7e:c.instructions+=7;goto B422c7e;
case 0x422c80:c.instructions+=6;goto B422c80;
case 0x422c84:c.instructions+=5;goto B422c84;
case 0x422c86:c.instructions+=4;goto B422c86;
case 0x422c8c:c.instructions+=3;goto B422c8c;
case 0x422c8e:c.instructions+=2;goto B422c8e;
case 0x422c91:c.instructions+=1;goto B422c91;
case 0x422c97:goto L422c97;
case 0x422c9d:c.instructions+=3;goto B422c9d;
case 0x422c9e:c.instructions+=2;goto B422c9e;
case 0x422ca0:c.instructions+=1;goto B422ca0;
case 0x422ca5:goto L422ca5;
case 0x422ca7:c.instructions+=1;goto B422ca7;
case 0x422cad:goto L422cad;
case 0x422cb1:c.instructions+=57;goto B422cb1;
case 0x422cb5:c.instructions+=56;goto B422cb5;
case 0x422cb9:c.instructions+=55;goto B422cb9;
case 0x422cbc:c.instructions+=54;goto B422cbc;
case 0x422cc0:c.instructions+=53;goto B422cc0;
case 0x422cc4:c.instructions+=52;goto B422cc4;
case 0x422cc8:c.instructions+=51;goto B422cc8;
case 0x422ccb:c.instructions+=50;goto B422ccb;
case 0x422cd1:c.instructions+=49;goto B422cd1;
case 0x422cd5:c.instructions+=48;goto B422cd5;
case 0x422cd9:c.instructions+=47;goto B422cd9;
case 0x422cdc:c.instructions+=46;goto B422cdc;
case 0x422cde:c.instructions+=45;goto B422cde;
case 0x422ce2:c.instructions+=44;goto B422ce2;
case 0x422cea:c.instructions+=43;goto B422cea;
case 0x422cee:c.instructions+=42;goto B422cee;
case 0x422cf2:c.instructions+=41;goto B422cf2;
case 0x422cf8:c.instructions+=40;goto B422cf8;
case 0x422cf9:c.instructions+=39;goto B422cf9;
case 0x422cff:c.instructions+=38;goto B422cff;
case 0x422d03:c.instructions+=37;goto B422d03;
case 0x422d07:c.instructions+=36;goto B422d07;
case 0x422d0b:c.instructions+=35;goto B422d0b;
case 0x422d0f:c.instructions+=34;goto B422d0f;
case 0x422d13:c.instructions+=33;goto B422d13;
case 0x422d14:c.instructions+=32;goto B422d14;
case 0x422d1a:c.instructions+=31;goto B422d1a;
case 0x422d1e:c.instructions+=30;goto B422d1e;
case 0x422d22:c.instructions+=29;goto B422d22;
case 0x422d26:c.instructions+=28;goto B422d26;
case 0x422d2a:c.instructions+=27;goto B422d2a;
case 0x422d2b:c.instructions+=26;goto B422d2b;
case 0x422d31:c.instructions+=25;goto B422d31;
case 0x422d32:c.instructions+=24;goto B422d32;
case 0x422d34:c.instructions+=23;goto B422d34;
case 0x422d38:c.instructions+=22;goto B422d38;
case 0x422d3e:c.instructions+=21;goto B422d3e;
case 0x422d42:c.instructions+=20;goto B422d42;
case 0x422d45:c.instructions+=19;goto B422d45;
case 0x422d48:c.instructions+=18;goto B422d48;
case 0x422d4a:c.instructions+=17;goto B422d4a;
case 0x422d4c:c.instructions+=16;goto B422d4c;
case 0x422d4e:c.instructions+=15;goto B422d4e;
case 0x422d50:c.instructions+=14;goto B422d50;
case 0x422d52:c.instructions+=13;goto B422d52;
case 0x422d56:c.instructions+=12;goto B422d56;
case 0x422d58:c.instructions+=11;goto B422d58;
case 0x422d5a:c.instructions+=10;goto B422d5a;
case 0x422d5c:c.instructions+=9;goto B422d5c;
case 0x422d5e:c.instructions+=8;goto B422d5e;
case 0x422d62:c.instructions+=7;goto B422d62;
case 0x422d65:c.instructions+=6;goto B422d65;
case 0x422d68:c.instructions+=5;goto B422d68;
case 0x422d6a:c.instructions+=4;goto B422d6a;
case 0x422d6c:c.instructions+=3;goto B422d6c;
case 0x422d70:c.instructions+=2;goto B422d70;
case 0x422d72:c.instructions+=1;goto B422d72;
case 0x422d77:goto L422d77;
case 0x422d7a:c.instructions+=2;goto B422d7a;
case 0x422d7c:c.instructions+=1;goto B422d7c;
case 0x422d82:goto L422d82;
case 0x422d86:c.instructions+=10;goto B422d86;
case 0x422d89:c.instructions+=9;goto B422d89;
case 0x422d8d:c.instructions+=8;goto B422d8d;
case 0x422d91:c.instructions+=7;goto B422d91;
case 0x422d97:c.instructions+=6;goto B422d97;
case 0x422d9a:c.instructions+=5;goto B422d9a;
case 0x422d9c:c.instructions+=4;goto B422d9c;
case 0x422da2:c.instructions+=3;goto B422da2;
case 0x422da4:c.instructions+=2;goto B422da4;
case 0x422da7:c.instructions+=1;goto B422da7;
case 0x422dad:goto L422dad;
case 0x422db3:c.instructions+=2;goto B422db3;
case 0x422db4:c.instructions+=1;goto B422db4;
case 0x422db9:goto L422db9;
case 0x422dbb:c.instructions+=3;goto B422dbb;
case 0x422dbe:c.instructions+=2;goto B422dbe;
case 0x422dc0:c.instructions+=1;goto B422dc0;
case 0x422dc2:goto L422dc2;
case 0x422dc4:c.instructions+=8;goto B422dc4;
case 0x422dc7:c.instructions+=7;goto B422dc7;
case 0x422dcd:c.instructions+=6;goto B422dcd;
case 0x422dd3:c.instructions+=5;goto B422dd3;
case 0x422dd9:c.instructions+=4;goto B422dd9;
case 0x422ddf:c.instructions+=3;goto B422ddf;
case 0x422de5:c.instructions+=2;goto B422de5;
case 0x422de9:c.instructions+=1;goto B422de9;
case 0x422deb:goto L422deb;
case 0x422def:goto L422def;
case 0x422df5:c.instructions+=2;goto B422df5;
case 0x422df6:c.instructions+=1;goto B422df6;
case 0x422dfb:goto L422dfb;
case 0x422dfe:c.instructions+=2;goto B422dfe;
case 0x422e00:c.instructions+=1;goto B422e00;
case 0x422e02:goto L422e02;
case 0x422e04:c.instructions+=7;goto B422e04;
case 0x422e07:c.instructions+=6;goto B422e07;
case 0x422e0e:c.instructions+=5;goto B422e0e;
case 0x422e15:c.instructions+=4;goto B422e15;
case 0x422e1c:c.instructions+=3;goto B422e1c;
case 0x422e23:c.instructions+=2;goto B422e23;
case 0x422e2a:c.instructions+=1;goto B422e2a;
case 0x422e2c:goto L422e2c;
case 0x422e30:c.instructions+=4;goto B422e30;
case 0x422e36:c.instructions+=3;goto B422e36;
case 0x422e38:c.instructions+=2;goto B422e38;
case 0x422e3b:c.instructions+=1;goto B422e3b;
case 0x422e3d:goto L422e3d;
case 0x422e3f:c.instructions+=1;goto B422e3f;
case 0x422e41:goto L422e41;
case 0x422e43:goto L422e43;
case 0x422e49:c.instructions+=7;goto B422e49;
case 0x422e4a:c.instructions+=6;goto B422e4a;
case 0x422e4d:c.instructions+=5;goto B422e4d;
case 0x422e4e:c.instructions+=4;goto B422e4e;
case 0x422e52:c.instructions+=3;goto B422e52;
case 0x422e53:c.instructions+=2;goto B422e53;
case 0x422e54:c.instructions+=1;goto B422e54;
case 0x422e59:goto L422e59;
case 0x422e5d:c.instructions+=4;goto B422e5d;
case 0x422e63:c.instructions+=3;goto B422e63;
case 0x422e65:c.instructions+=2;goto B422e65;
case 0x422e68:c.instructions+=1;goto B422e68;
case 0x422e6a:goto L422e6a;
case 0x422e6c:c.instructions+=1;goto B422e6c;
case 0x422e6e:goto L422e6e;
case 0x422e70:goto L422e70;
case 0x422e76:c.instructions+=7;goto B422e76;
case 0x422e77:c.instructions+=6;goto B422e77;
case 0x422e7a:c.instructions+=5;goto B422e7a;
case 0x422e7b:c.instructions+=4;goto B422e7b;
case 0x422e7c:c.instructions+=3;goto B422e7c;
case 0x422e7d:c.instructions+=2;goto B422e7d;
case 0x422e7f:c.instructions+=1;goto B422e7f;
case 0x422e84:goto L422e84;
case 0x422e8a:c.instructions+=3;goto B422e8a;
case 0x422e8b:c.instructions+=2;goto B422e8b;
case 0x422e8f:c.instructions+=1;goto B422e8f;
case 0x422e94:goto L422e94;
case 0x422e9a:c.instructions+=3;goto B422e9a;
case 0x422e9b:c.instructions+=2;goto B422e9b;
case 0x422e9d:c.instructions+=1;goto B422e9d;
case 0x422ea2:goto L422ea2;
case 0x422ea8:c.instructions+=9;goto B422ea8;
case 0x422eac:c.instructions+=8;goto B422eac;
case 0x422eb0:c.instructions+=7;goto B422eb0;
case 0x422eb6:c.instructions+=6;goto B422eb6;
case 0x422eb7:c.instructions+=5;goto B422eb7;
case 0x422ebd:c.instructions+=4;goto B422ebd;
case 0x422ebf:c.instructions+=3;goto B422ebf;
case 0x422ec3:c.instructions+=2;goto B422ec3;
case 0x422ec9:c.instructions+=1;goto B422ec9;
case 0x422ece:goto L422ece;
case 0x422ed0:c.instructions+=14;goto B422ed0;
case 0x422ed3:c.instructions+=13;goto B422ed3;
case 0x422ed5:c.instructions+=12;goto B422ed5;
case 0x422ed8:c.instructions+=11;goto B422ed8;
case 0x422edb:c.instructions+=10;goto B422edb;
case 0x422edd:c.instructions+=9;goto B422edd;
case 0x422edf:c.instructions+=8;goto B422edf;
case 0x422ee1:c.instructions+=7;goto B422ee1;
case 0x422ee3:c.instructions+=6;goto B422ee3;
case 0x422ee5:c.instructions+=5;goto B422ee5;
case 0x422ee7:c.instructions+=4;goto B422ee7;
case 0x422ee9:c.instructions+=3;goto B422ee9;
case 0x422eeb:c.instructions+=2;goto B422eeb;
case 0x422ef1:c.instructions+=1;goto B422ef1;
case 0x422ef6:goto L422ef6;
case 0x422ef9:c.instructions+=1;goto B422ef9;
case 0x422efb:goto L422efb;
case 0x422f00:goto L422f00;
case 0x422f04:c.instructions+=6;goto B422f04;
case 0x422f08:c.instructions+=5;goto B422f08;
case 0x422f0a:c.instructions+=4;goto B422f0a;
case 0x422f0e:c.instructions+=3;goto B422f0e;
case 0x422f10:c.instructions+=2;goto B422f10;
case 0x422f14:c.instructions+=1;goto B422f14;
case 0x422f1a:goto L422f1a;
case 0x422f1e:c.instructions+=2;goto B422f1e;
case 0x422f1f:c.instructions+=1;goto B422f1f;
case 0x422f24:goto L422f24;
case 0x422f2a:c.instructions+=5;goto B422f2a;
case 0x422f2c:c.instructions+=4;goto B422f2c;
case 0x422f2f:c.instructions+=3;goto B422f2f;
case 0x422f31:c.instructions+=2;goto B422f31;
case 0x422f34:c.instructions+=1;goto B422f34;
case 0x422f36:goto L422f36;
case 0x422f38:c.instructions+=1;goto B422f38;
case 0x422f3e:goto L422f3e;
case 0x422f41:c.instructions+=7;goto B422f41;
case 0x422f47:c.instructions+=6;goto B422f47;
case 0x422f48:c.instructions+=5;goto B422f48;
case 0x422f4b:c.instructions+=4;goto B422f4b;
case 0x422f50:c.instructions+=3;goto B422f50;
case 0x422f52:c.instructions+=2;goto B422f52;
case 0x422f54:c.instructions+=1;goto B422f54;
case 0x422f5a:goto L422f5a;
case 0x422f5f:c.instructions+=2;goto B422f5f;
case 0x422f62:c.instructions+=1;goto B422f62;
case 0x422f64:goto L422f64;
case 0x422f66:c.instructions+=1;goto B422f66;
case 0x422f6b:goto L422f6b;
case 0x422f71:c.instructions+=2;goto B422f71;
case 0x422f77:c.instructions+=1;goto B422f77;
case 0x422f7d:goto L422f7d;
case 0x422f7e:c.instructions+=5;goto B422f7e;
case 0x422f7f:c.instructions+=4;goto B422f7f;
case 0x422f80:c.instructions+=3;goto B422f80;
case 0x422f82:c.instructions+=2;goto B422f82;
case 0x422f83:c.instructions+=1;goto B422f83;
case 0x422f90:goto L422f90;
case 0x422f93:c.instructions+=3;goto B422f93;
case 0x422f94:c.instructions+=2;goto B422f94;
case 0x422f96:c.instructions+=1;goto B422f96;
case 0x422f9b:goto L422f9b;
case 0x422fa1:c.instructions+=2;goto B422fa1;
case 0x422fa3:c.instructions+=1;goto B422fa3;
case 0x422fa9:goto L422fa9;
case 0x422faa:c.instructions+=6;goto B422faa;
case 0x422fab:c.instructions+=5;goto B422fab;
case 0x422fac:c.instructions+=4;goto B422fac;
case 0x422fb0:c.instructions+=3;goto B422fb0;
case 0x422fb6:c.instructions+=2;goto B422fb6;
case 0x422fb8:c.instructions+=1;goto B422fb8;
case 0x422fbe:goto L422fbe;
case 0x422fc2:c.instructions+=2;goto B422fc2;
case 0x422fc3:c.instructions+=1;goto B422fc3;
case 0x422fc8:goto L422fc8;
case 0x422fce:c.instructions+=5;goto B422fce;
case 0x422fd1:c.instructions+=4;goto B422fd1;
case 0x422fd7:c.instructions+=3;goto B422fd7;
case 0x422fd9:c.instructions+=2;goto B422fd9;
case 0x422fdc:c.instructions+=1;goto B422fdc;
case 0x422fe2:goto L422fe2;
case 0x422fe7:goto L422fe7;
case 0x422fed:c.instructions+=4;goto B422fed;
case 0x422ff1:c.instructions+=3;goto B422ff1;
case 0x422ff7:c.instructions+=2;goto B422ff7;
case 0x422ff9:c.instructions+=1;goto B422ff9;
case 0x422ffb:goto L422ffb;
case 0x422ffd:goto L422ffd;
default:missing_instruction(c.pc);}
B422001:L422001:{c.instructions+=2;NFSU2_TR(0x422001);
__builtin_memmove((R+4),(R+24),4);
}
B422003:{NFSU2_TR(0x422003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422008ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B422008:L422008:{c.instructions+=3;NFSU2_TR(0x422008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42200a:{NFSU2_TR(0x42200a);
__builtin_memmove((R+4),(R+24),4);
}
B42200c:{NFSU2_TR(0x42200c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422011ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B422011:L422011:{c.instructions+=1;NFSU2_TR(0x422011);
{goto L42201c;}
}
B422013:L422013:{c.instructions+=3;NFSU2_TR(0x422013);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422015:{NFSU2_TR(0x422015);
__builtin_memmove((R+4),(R+24),4);
}
B422017:{NFSU2_TR(0x422017);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42201cull));
TAIL_STATIC(0x5eb900u,5eb);
}
B42201c:L42201c:{c.instructions+=3;NFSU2_TR(0x42201c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422020:{NFSU2_TR(0x422020);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422026:{NFSU2_TR(0x422026);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42202bull));
TAIL_STATIC(0x75bed4u,75b);
}
B42202b:L42202b:{c.instructions+=16;NFSU2_TR(0x42202b);
__builtin_memmove((R+4),(R+0),4);
}
B42202d:{NFSU2_TR(0x42202d);
w4(R+0,u32(0xb60b60b7ull));
}
B422032:{NFSU2_TR(0x422032);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B422034:{NFSU2_TR(0x422034);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42203a:{NFSU2_TR(0x42203a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B42203c:{NFSU2_TR(0x42203c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B42203f:{NFSU2_TR(0x42203f);
__builtin_memmove((R+4),(R+8),4);
}
B422041:{NFSU2_TR(0x422041);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B422044:{NFSU2_TR(0x422044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422045:{NFSU2_TR(0x422045);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B422047:{NFSU2_TR(0x422047);
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
B422049:{NFSU2_TR(0x422049);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42204f:{NFSU2_TR(0x42204f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B422050:{NFSU2_TR(0x422050);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B422057:{NFSU2_TR(0x422057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B422058:{NFSU2_TR(0x422058);
if(r1(R+518)){{goto L422090;}}
}
B42205a:L42205a:{c.instructions+=4;NFSU2_TR(0x42205a);
__builtin_memmove((R+8),gp(0x78394c),4);
}
B422060:{NFSU2_TR(0x422060);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422061:{NFSU2_TR(0x422061);
__builtin_memmove((R+4),(R+24),4);
}
B422063:{NFSU2_TR(0x422063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422068ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B422068:L422068:{c.instructions+=4;NFSU2_TR(0x422068);
__builtin_memmove((R+0),gp(0x783950),4);
}
B42206d:{NFSU2_TR(0x42206d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42206e:{NFSU2_TR(0x42206e);
__builtin_memmove((R+4),(R+24),4);
}
B422070:{NFSU2_TR(0x422070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422075ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B422075:L422075:{c.instructions+=3;NFSU2_TR(0x422075);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422077:{NFSU2_TR(0x422077);
__builtin_memmove((R+4),(R+24),4);
}
B422079:{NFSU2_TR(0x422079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42207eull));
TAIL_STATIC(0x5eb910u,5eb);
}
B42207e:L42207e:{c.instructions+=4;NFSU2_TR(0x42207e);
__builtin_memmove((R+4),gp(0x783954),4);
}
B422084:{NFSU2_TR(0x422084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422085:{NFSU2_TR(0x422085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42208b:{NFSU2_TR(0x42208b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422090ull));
TAIL_STATIC(0x5ebbe0u,5eb);
}
B422090:L422090:{c.instructions+=3;NFSU2_TR(0x422090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422091:{NFSU2_TR(0x422091);
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
B422094:{NFSU2_TR(0x422094);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4220a0:L4220a0:{c.instructions+=6;NFSU2_TR(0x4220a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220a1:{NFSU2_TR(0x4220a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220a2:{NFSU2_TR(0x4220a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4220a6:{NFSU2_TR(0x4220a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220a7:{NFSU2_TR(0x4220a7);
__builtin_memmove((R+24),(R+4),4);
}
B4220a9:{NFSU2_TR(0x4220a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220aeull));
TAIL_STATIC(0x421030u,421);
}
B4220ae:L4220ae:{c.instructions+=4;NFSU2_TR(0x4220ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4220b4:{NFSU2_TR(0x4220b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4220ba:{NFSU2_TR(0x4220ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220bb:{NFSU2_TR(0x4220bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4220be:L4220be:{c.instructions+=3;NFSU2_TR(0x4220be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4220c0:{NFSU2_TR(0x4220c0);
__builtin_memmove((R+4),(R+24),4);
}
B4220c2:{NFSU2_TR(0x4220c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4220c5:L4220c5:{c.instructions+=4;NFSU2_TR(0x4220c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220c6:{NFSU2_TR(0x4220c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220c8:{NFSU2_TR(0x4220c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4220ce:{NFSU2_TR(0x4220ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220d3ull));
TAIL_STATIC(0x406460u,406);
}
B4220d3:L4220d3:{c.instructions+=5;NFSU2_TR(0x4220d3);
{u32 ea_=u32(r4(R+24)+u32(1668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4220d9:{NFSU2_TR(0x4220d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220da:{NFSU2_TR(0x4220da);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4220dd:{NFSU2_TR(0x4220dd);
__builtin_memmove((R+4),(R+24),4);
}
B4220df:{NFSU2_TR(0x4220df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220e4ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B4220e4:L4220e4:{c.instructions+=5;NFSU2_TR(0x4220e4);
{u32 ea_=u32(r4(R+24)+u32(1664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4220ea:{NFSU2_TR(0x4220ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220eb:{NFSU2_TR(0x4220eb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4220ee:{NFSU2_TR(0x4220ee);
__builtin_memmove((R+4),(R+24),4);
}
B4220f0:{NFSU2_TR(0x4220f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4220f5ull));
TAIL_STATIC(0x5eb900u,5eb);
}
B4220f5:L4220f5:{c.instructions+=5;NFSU2_TR(0x4220f5);
{u32 ea_=u32(r4(R+24)+u32(1660u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4220fb:{NFSU2_TR(0x4220fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4220fc:{NFSU2_TR(0x4220fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4220ff:{NFSU2_TR(0x4220ff);
__builtin_memmove((R+4),(R+24),4);
}
B422101:{NFSU2_TR(0x422101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422106ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B422106:L422106:{c.instructions+=3;NFSU2_TR(0x422106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422107:{NFSU2_TR(0x422107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422108:{NFSU2_TR(0x422108);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422110:L422110:{c.instructions+=3;NFSU2_TR(0x422110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422111:{NFSU2_TR(0x422111);
__builtin_memmove((R+24),(R+4),4);
}
B422113:{NFSU2_TR(0x422113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422118ull));
TAIL_STATIC(0x41e480u,41e);
}
B422118:L422118:{c.instructions+=2;NFSU2_TR(0x422118);
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
B42211d:{NFSU2_TR(0x42211d);
if(r1(R+518)){{goto L422128;}}
}
B42211f:L42211f:{c.instructions+=2;NFSU2_TR(0x42211f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422120:{NFSU2_TR(0x422120);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422125ull));
TAIL_STATIC(0x575630u,575);
}
B422125:L422125:{c.instructions+=1;NFSU2_TR(0x422125);
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
B422128:L422128:{c.instructions+=3;NFSU2_TR(0x422128);
__builtin_memmove((R+0),(R+24),4);
}
B42212a:{NFSU2_TR(0x42212a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42212b:{NFSU2_TR(0x42212b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422130:L422130:{c.instructions+=3;NFSU2_TR(0x422130);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422131:{NFSU2_TR(0x422131);
__builtin_memmove((R+24),(R+4),4);
}
B422133:{NFSU2_TR(0x422133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422138ull));
TAIL_STATIC(0x41e710u,41e);
}
B422138:L422138:{c.instructions+=2;NFSU2_TR(0x422138);
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
B42213d:{NFSU2_TR(0x42213d);
if(r1(R+518)){{goto L422148;}}
}
B42213f:L42213f:{c.instructions+=2;NFSU2_TR(0x42213f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422140:{NFSU2_TR(0x422140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422145ull));
TAIL_STATIC(0x575630u,575);
}
B422145:L422145:{c.instructions+=1;NFSU2_TR(0x422145);
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
B422148:L422148:{c.instructions+=3;NFSU2_TR(0x422148);
__builtin_memmove((R+0),(R+24),4);
}
B42214a:{NFSU2_TR(0x42214a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42214b:{NFSU2_TR(0x42214b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422150:L422150:{c.instructions+=8;NFSU2_TR(0x422150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422151:{NFSU2_TR(0x422151);
__builtin_memmove((R+24),(R+4),4);
}
B422153:{NFSU2_TR(0x422153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422159:{NFSU2_TR(0x422159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42215b:{NFSU2_TR(0x42215b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42215c:{NFSU2_TR(0x42215c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42215f:{NFSU2_TR(0x42215f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422160:{NFSU2_TR(0x422160);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422163ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B422163:L422163:{c.instructions+=3;NFSU2_TR(0x422163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422166:{NFSU2_TR(0x422166);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0xffffull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B42216b:{NFSU2_TR(0x42216b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422181;}}
}
B42216d:L42216d:{c.instructions+=5;NFSU2_TR(0x42216d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422173:{NFSU2_TR(0x422173);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B422176:{NFSU2_TR(0x422176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422177:{NFSU2_TR(0x422177);
w4(R+4,u32(0x81e5b8ull));
}
B42217c:{NFSU2_TR(0x42217c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422181ull));
TAIL_STATIC(0x414bf0u,414);
}
B422181:L422181:{c.instructions+=4;NFSU2_TR(0x422181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422187:{NFSU2_TR(0x422187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B422189:{NFSU2_TR(0x422189);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42218a:{NFSU2_TR(0x42218a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42218dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42218d:L42218d:{c.instructions+=6;NFSU2_TR(0x42218d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422193:{NFSU2_TR(0x422193);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422196:{NFSU2_TR(0x422196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B422198:{NFSU2_TR(0x422198);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42219b:{NFSU2_TR(0x42219b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42219c:{NFSU2_TR(0x42219c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42219full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42219f:L42219f:{c.instructions+=3;NFSU2_TR(0x42219f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4221a2:{NFSU2_TR(0x4221a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4221a6:{NFSU2_TR(0x4221a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4221b0;}}
}
B4221a8:L4221a8:{c.instructions+=2;NFSU2_TR(0x4221a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4221ab:{NFSU2_TR(0x4221ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4221b0ull));
TAIL_STATIC(0x5918a0u,591);
}
B4221b0:L4221b0:{c.instructions+=5;NFSU2_TR(0x4221b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4221b6:{NFSU2_TR(0x4221b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221b8:{NFSU2_TR(0x4221b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221ba:{NFSU2_TR(0x4221ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B4221bd:{NFSU2_TR(0x4221bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4221c2ull));
TAIL_STATIC(0x41d160u,41d);
}
B4221c2:L4221c2:{c.instructions+=3;NFSU2_TR(0x4221c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4221c3:{NFSU2_TR(0x4221c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4221c4:{NFSU2_TR(0x4221c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4221d0:L4221d0:{c.instructions+=4;NFSU2_TR(0x4221d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221d1:{NFSU2_TR(0x4221d1);
__builtin_memmove((R+24),(R+4),4);
}
B4221d3:{NFSU2_TR(0x4221d3);
w4(R+4,u32(0x81e810ull));
}
B4221d8:{NFSU2_TR(0x4221d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4221ddull));
TAIL_STATIC(0x420140u,420);
}
B4221dd:L4221dd:{c.instructions+=3;NFSU2_TR(0x4221dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4221e0:{NFSU2_TR(0x4221e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221e1:{NFSU2_TR(0x4221e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4221e6ull));
TAIL_STATIC(0x575630u,575);
}
B4221e6:L4221e6:{c.instructions+=3;NFSU2_TR(0x4221e6);
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
B4221e9:{NFSU2_TR(0x4221e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4221ea:{NFSU2_TR(0x4221ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4221f0:L4221f0:{c.instructions+=8;NFSU2_TR(0x4221f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221f1:{NFSU2_TR(0x4221f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221f2:{NFSU2_TR(0x4221f2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4221f6:{NFSU2_TR(0x4221f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221f8:{NFSU2_TR(0x4221f8);
__builtin_memmove((R+24),(R+4),4);
}
B4221fa:{NFSU2_TR(0x4221fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4221fc:{NFSU2_TR(0x4221fc);
__builtin_memmove((R+4),(R+28),4);
}
B4221fe:{NFSU2_TR(0x4221fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422203ull));
TAIL_STATIC(0x41d160u,41d);
}
B422203:L422203:{c.instructions+=7;NFSU2_TR(0x422203);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422207:{NFSU2_TR(0x422207);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422209:{NFSU2_TR(0x422209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42220a:{NFSU2_TR(0x42220a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42220b:{NFSU2_TR(0x42220b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42220c:{NFSU2_TR(0x42220c);
__builtin_memmove((R+4),(R+24),4);
}
B42220e:{NFSU2_TR(0x42220e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422213ull));
TAIL_STATIC(0x41e860u,41e);
}
B422213:L422213:{c.instructions+=3;NFSU2_TR(0x422213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422214:{NFSU2_TR(0x422214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422215:{NFSU2_TR(0x422215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422220:L422220:{c.instructions+=12;NFSU2_TR(0x422220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B422223:{NFSU2_TR(0x422223);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422227:{NFSU2_TR(0x422227);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422228:{NFSU2_TR(0x422228);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422229:{NFSU2_TR(0x422229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42222a:{NFSU2_TR(0x42222a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42222b:{NFSU2_TR(0x42222b);
__builtin_memmove((R+28),(R+4),4);
}
B42222d:{NFSU2_TR(0x42222d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422230:{NFSU2_TR(0x422230);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422234:{NFSU2_TR(0x422234);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422237:{NFSU2_TR(0x422237);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42223a:{NFSU2_TR(0x42223a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42223full));
TAIL_STATIC(0x5b5330u,5b5);
}
B42223f:L42223f:{c.instructions+=5;NFSU2_TR(0x42223f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422242:{NFSU2_TR(0x422242);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B422246:{NFSU2_TR(0x422246);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B42224a:{NFSU2_TR(0x42224a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B42224e:{NFSU2_TR(0x42224e);
if(r1(R+518)){{goto L422267;}}
}
B422250:L422250:{c.instructions+=2;NFSU2_TR(0x422250);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B422255:{NFSU2_TR(0x422255);
if(r1(R+518)){{goto L422267;}}
}
B422257:L422257:{c.instructions+=3;NFSU2_TR(0x422257);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B42225a:{NFSU2_TR(0x42225a);
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
B42225c:{NFSU2_TR(0x42225c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L422267;}}
}
B42225e:L42225e:{c.instructions+=2;NFSU2_TR(0x42225e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B422265:{NFSU2_TR(0x422265);
{goto L422269;}
}
B422267:L422267:{c.instructions+=1;NFSU2_TR(0x422267);
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
B422269:L422269:{c.instructions+=4;NFSU2_TR(0x422269);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42226d:{NFSU2_TR(0x42226d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B422270:{NFSU2_TR(0x422270);
__builtin_memmove((R+4),(R+20),4);
}
B422272:{NFSU2_TR(0x422272);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422275ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B422275:L422275:{c.instructions+=15;NFSU2_TR(0x422275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422278:{NFSU2_TR(0x422278);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B42227c:{NFSU2_TR(0x42227c);
__builtin_memmove((R+12),(R+0),4);
}
B42227e:{NFSU2_TR(0x42227e);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B422280:{NFSU2_TR(0x422280);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422284:{NFSU2_TR(0x422284);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B422288:{NFSU2_TR(0x422288);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B42228a:{NFSU2_TR(0x42228a);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B42228d:{NFSU2_TR(0x42228d);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B42228f:{NFSU2_TR(0x42228f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B422291:{NFSU2_TR(0x422291);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B422295:{NFSU2_TR(0x422295);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422299:{NFSU2_TR(0x422299);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42229d:{NFSU2_TR(0x42229d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222a1:{NFSU2_TR(0x4222a1);
if(r1(R+518)){{goto L4222c5;}}
}
B4222a3:L4222a3:{c.instructions+=2;NFSU2_TR(0x4222a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B4222a7:{NFSU2_TR(0x4222a7);
if(r1(R+518)){{goto L4222c5;}}
}
B4222a9:L4222a9:{c.instructions+=3;NFSU2_TR(0x4222a9);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B4222ac:{NFSU2_TR(0x4222ac);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4222ae:{NFSU2_TR(0x4222ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4222b9;}}
}
B4222b0:L4222b0:{c.instructions+=2;NFSU2_TR(0x4222b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4222b7:{NFSU2_TR(0x4222b7);
{goto L4222bb;}
}
B4222b9:L4222b9:{c.instructions+=1;NFSU2_TR(0x4222b9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4222bb:L4222bb:{c.instructions+=2;NFSU2_TR(0x4222bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4222be:{NFSU2_TR(0x4222be);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4222c5:L4222c5:{c.instructions+=15;NFSU2_TR(0x4222c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4222c8:{NFSU2_TR(0x4222c8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B4222cb:{NFSU2_TR(0x4222cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4222ce:{NFSU2_TR(0x4222ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4222d1:{NFSU2_TR(0x4222d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222d5:{NFSU2_TR(0x4222d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4222d8:{NFSU2_TR(0x4222d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222dc:{NFSU2_TR(0x4222dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4222df:{NFSU2_TR(0x4222df);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222e3:{NFSU2_TR(0x4222e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4222eb:{NFSU2_TR(0x4222eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4222f3:{NFSU2_TR(0x4222f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222f7:{NFSU2_TR(0x4222f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222fb:{NFSU2_TR(0x4222fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4222ff:{NFSU2_TR(0x4222ff);
}
B422300:L422300:{c.instructions+=5;NFSU2_TR(0x422300);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422304:{NFSU2_TR(0x422304);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422308:{NFSU2_TR(0x422308);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42230a:{NFSU2_TR(0x42230a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42230d:{NFSU2_TR(0x42230d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422328;}}
}
B42230f:L42230f:{c.instructions+=2;NFSU2_TR(0x42230f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B422313:{NFSU2_TR(0x422313);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L422328;}}
}
B422315:L422315:{c.instructions+=5;NFSU2_TR(0x422315);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422319:{NFSU2_TR(0x422319);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42231d:{NFSU2_TR(0x42231d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42231f:{NFSU2_TR(0x42231f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422322:{NFSU2_TR(0x422322);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422776;}}
}
B422328:L422328:{c.instructions+=2;NFSU2_TR(0x422328);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x28ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B42232c:{NFSU2_TR(0x42232c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L422776;}}
}
B422332:L422332:{c.instructions+=18;NFSU2_TR(0x422332);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422336:{NFSU2_TR(0x422336);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B422338:{NFSU2_TR(0x422338);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42233a:{NFSU2_TR(0x42233a);
__builtin_memmove((R+4),(R+518),1);
}
B42233d:{NFSU2_TR(0x42233d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42233e:{NFSU2_TR(0x42233e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B422342:{NFSU2_TR(0x422342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422343:{NFSU2_TR(0x422343);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B422347:{NFSU2_TR(0x422347);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42234b:{NFSU2_TR(0x42234b);
__builtin_memmove((R+12),(R+4),4);
}
B42234d:{NFSU2_TR(0x42234d);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B422351:{NFSU2_TR(0x422351);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422352:{NFSU2_TR(0x422352);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422353:{NFSU2_TR(0x422353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422354:{NFSU2_TR(0x422354);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B422358:{NFSU2_TR(0x422358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422359:{NFSU2_TR(0x422359);
__builtin_memmove((R+4),(R+28),4);
}
B42235b:{NFSU2_TR(0x42235b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422360ull));
TAIL_STATIC(0x41ec20u,41e);
}
B422360:L422360:{c.instructions+=2;NFSU2_TR(0x422360);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422362:{NFSU2_TR(0x422362);
if(r1(R+518)){{goto L422776;}}
}
B422368:L422368:{c.instructions+=4;NFSU2_TR(0x422368);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42236c:{NFSU2_TR(0x42236c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42236e:{NFSU2_TR(0x42236e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B422372:{NFSU2_TR(0x422372);
if(r1(R+518)){{goto L4225d7;}}
}
B422378:L422378:{c.instructions+=4;NFSU2_TR(0x422378);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42237b:{NFSU2_TR(0x42237b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B42237e:{NFSU2_TR(0x42237e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422381:{NFSU2_TR(0x422381);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422599;}}
}
B422387:L422387:{c.instructions+=4;NFSU2_TR(0x422387);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422388:{NFSU2_TR(0x422388);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422389:{NFSU2_TR(0x422389);
__builtin_memmove((R+4),(R+24),4);
}
B42238b:{NFSU2_TR(0x42238b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422390ull));
TAIL_STATIC(0x40cbc0u,40c);
}
B422390:L422390:{c.instructions+=4;NFSU2_TR(0x422390);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422394:{NFSU2_TR(0x422394);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B422399:{NFSU2_TR(0x422399);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42239b:{NFSU2_TR(0x42239b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422507;}}
}
B4223a1:L4223a1:{c.instructions+=3;NFSU2_TR(0x4223a1);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4223a6:{NFSU2_TR(0x4223a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4223a8:{NFSU2_TR(0x4223a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422507;}}
}
B4223ae:L4223ae:{c.instructions+=5;NFSU2_TR(0x4223ae);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4223b2:{NFSU2_TR(0x4223b2);
{u32 ea_=u32(u32(7879804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4223b8:{NFSU2_TR(0x4223b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4223ba:{NFSU2_TR(0x4223ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4223bd:{NFSU2_TR(0x4223bd);
if(r1(R+514)){{goto L42241d;}}
}
B4223bf:L4223bf:{c.instructions+=1;NFSU2_TR(0x4223bf);
}
B4223c0:L4223c0:{c.instructions+=14;NFSU2_TR(0x4223c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4223c4:{NFSU2_TR(0x4223c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223c5:{NFSU2_TR(0x4223c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4223c9:{NFSU2_TR(0x4223c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223ca:{NFSU2_TR(0x4223ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4223ce:{NFSU2_TR(0x4223ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223cf:{NFSU2_TR(0x4223cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4223d3:{NFSU2_TR(0x4223d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223d4:{NFSU2_TR(0x4223d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4223d8:{NFSU2_TR(0x4223d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223d9:{NFSU2_TR(0x4223d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4223dd:{NFSU2_TR(0x4223dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223de:{NFSU2_TR(0x4223de);
__builtin_memmove((R+4),(R+28),4);
}
B4223e0:{NFSU2_TR(0x4223e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4223e5ull));
TAIL_STATIC(0x41ec20u,41e);
}
B4223e5:L4223e5:{c.instructions+=2;NFSU2_TR(0x4223e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4223e7:{NFSU2_TR(0x4223e7);
if(r1(R+518)){{goto L422776;}}
}
B4223ed:L4223ed:{c.instructions+=5;NFSU2_TR(0x4223ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4223f1:{NFSU2_TR(0x4223f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223f2:{NFSU2_TR(0x4223f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4223f3:{NFSU2_TR(0x4223f3);
__builtin_memmove((R+4),(R+24),4);
}
B4223f5:{NFSU2_TR(0x4223f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4223faull));
TAIL_STATIC(0x40cbc0u,40c);
}
B4223fa:L4223fa:{c.instructions+=6;NFSU2_TR(0x4223fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4223fe:{NFSU2_TR(0x4223fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422402:{NFSU2_TR(0x422402);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B422403:{NFSU2_TR(0x422403);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422406:{NFSU2_TR(0x422406);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42240a:{NFSU2_TR(0x42240a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L422774;}}
}
B422410:L422410:{c.instructions+=4;NFSU2_TR(0x422410);
{u32 ea_=u32(u32(7879804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422416:{NFSU2_TR(0x422416);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422418:{NFSU2_TR(0x422418);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42241b:{NFSU2_TR(0x42241b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4223c0u);}goto L4223c0;}}
}
B42241d:L42241d:{c.instructions+=1;NFSU2_TR(0x42241d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B422421:L422421:{c.instructions+=7;NFSU2_TR(0x422421);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B422423:{NFSU2_TR(0x422423);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422425:{NFSU2_TR(0x422425);
__builtin_memmove((R+4),(R+518),1);
}
B422428:{NFSU2_TR(0x422428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422429:{NFSU2_TR(0x422429);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42242a:{NFSU2_TR(0x42242a);
__builtin_memmove((R+4),(R+28),4);
}
B42242c:{NFSU2_TR(0x42242c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422431ull));
TAIL_STATIC(0x411b50u,411);
}
B422431:L422431:{c.instructions+=6;NFSU2_TR(0x422431);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422435:{NFSU2_TR(0x422435);
__builtin_memmove((R+24),(R+0),4);
}
B422437:{NFSU2_TR(0x422437);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B42243b:{NFSU2_TR(0x42243b);
__builtin_memmove((R+4),(R+20),4);
}
B42243d:{NFSU2_TR(0x42243d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422441:{NFSU2_TR(0x422441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422446ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B422446:L422446:{c.instructions+=26;NFSU2_TR(0x422446);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B42244b:{NFSU2_TR(0x42244b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42244f:{NFSU2_TR(0x42244f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422453:{NFSU2_TR(0x422453);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B422457:{NFSU2_TR(0x422457);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B42245b:{NFSU2_TR(0x42245b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B42245f:{NFSU2_TR(0x42245f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422463:{NFSU2_TR(0x422463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422466:{NFSU2_TR(0x422466);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42246a:{NFSU2_TR(0x42246a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42246e:{NFSU2_TR(0x42246e);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422471:{NFSU2_TR(0x422471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422474:{NFSU2_TR(0x422474);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422478:{NFSU2_TR(0x422478);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42247b:{NFSU2_TR(0x42247b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B42247d:{NFSU2_TR(0x42247d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422481:{NFSU2_TR(0x422481);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422484:{NFSU2_TR(0x422484);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422488:{NFSU2_TR(0x422488);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42248b:{NFSU2_TR(0x42248b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42248d:{NFSU2_TR(0x42248d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422490:{NFSU2_TR(0x422490);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422494:{NFSU2_TR(0x422494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422495:{NFSU2_TR(0x422495);
__builtin_memmove((R+4),(R+24),4);
}
B422497:{NFSU2_TR(0x422497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42249e:{NFSU2_TR(0x42249e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4224a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4224a1:L4224a1:{c.instructions+=3;NFSU2_TR(0x4224a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4224a5:{NFSU2_TR(0x4224a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4224a7:{NFSU2_TR(0x4224a7);
if(r1(R+518)){{goto L4226e1;}}
}
B4224ad:L4224ad:{c.instructions+=4;NFSU2_TR(0x4224ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4224b0:{NFSU2_TR(0x4224b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4224b3:{NFSU2_TR(0x4224b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4224b6:{NFSU2_TR(0x4224b6);
if(r1(R+518)){{goto L4226e1;}}
}
B4224bc:L4224bc:{c.instructions+=5;NFSU2_TR(0x4224bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4224c0:{NFSU2_TR(0x4224c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4224c1:{NFSU2_TR(0x4224c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4224c2:{NFSU2_TR(0x4224c2);
__builtin_memmove((R+4),(R+28),4);
}
B4224c4:{NFSU2_TR(0x4224c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4224c9ull));
TAIL_STATIC(0x41ee20u,41e);
}
B4224c9:L4224c9:{c.instructions+=7;NFSU2_TR(0x4224c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4224cc:{NFSU2_TR(0x4224cc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4224d0:{NFSU2_TR(0x4224d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4224d4:{NFSU2_TR(0x4224d4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4224d8:{NFSU2_TR(0x4224d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4224db:{NFSU2_TR(0x4224db);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4224df:{NFSU2_TR(0x4224df);
if(r1(R+518)){{goto L422668;}}
}
B4224e5:L4224e5:{c.instructions+=2;NFSU2_TR(0x4224e5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4224ea:{NFSU2_TR(0x4224ea);
if(r1(R+518)){{goto L422668;}}
}
B4224f0:L4224f0:{c.instructions+=3;NFSU2_TR(0x4224f0);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B4224f3:{NFSU2_TR(0x4224f3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4224f5:{NFSU2_TR(0x4224f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L422668;}}
}
B4224fb:L4224fb:{c.instructions+=2;NFSU2_TR(0x4224fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B422502:{NFSU2_TR(0x422502);
{goto L42266a;}
}
B422507:L422507:{c.instructions+=5;NFSU2_TR(0x422507);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42250b:{NFSU2_TR(0x42250b);
{u32 ea_=u32(u32(7879804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422511:{NFSU2_TR(0x422511);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422513:{NFSU2_TR(0x422513);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422516:{NFSU2_TR(0x422516);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42241du);}goto L42241d;}}
}
B42251c:L42251c:{c.instructions+=1;NFSU2_TR(0x42251c);
__builtin_memmove((R+16),(R+16),4);
}
B422520:L422520:{c.instructions+=3;NFSU2_TR(0x422520);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422523:{NFSU2_TR(0x422523);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422525:{NFSU2_TR(0x422525);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42241du);}goto L42241d;}}
}
B42252b:L42252b:{c.instructions+=2;NFSU2_TR(0x42252b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42252e:{NFSU2_TR(0x42252e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L422555;}}
}
B422530:L422530:{c.instructions+=12;NFSU2_TR(0x422530);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B422534:{NFSU2_TR(0x422534);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B422537:{NFSU2_TR(0x422537);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42253a:{NFSU2_TR(0x42253a);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42253d:{NFSU2_TR(0x42253d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422541:{NFSU2_TR(0x422541);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422543:{NFSU2_TR(0x422543);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422547:{NFSU2_TR(0x422547);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42254b:{NFSU2_TR(0x42254b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B42254d:{NFSU2_TR(0x42254d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422551:{NFSU2_TR(0x422551);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422553:{NFSU2_TR(0x422553);
{goto L422565;}
}
B422555:L422555:{c.instructions+=2;NFSU2_TR(0x422555);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42255d:{NFSU2_TR(0x42255d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422565:L422565:{c.instructions+=3;NFSU2_TR(0x422565);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B422569:{NFSU2_TR(0x422569);
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
B42256b:{NFSU2_TR(0x42256b);
if(r1(R+518)){{goto L422575;}}
}
B42256d:L42256d:{c.instructions+=4;NFSU2_TR(0x42256d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42256f:{NFSU2_TR(0x42256f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422571:{NFSU2_TR(0x422571);
__builtin_memmove((R+4),(R+0),4);
}
B422573:{NFSU2_TR(0x422573);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422575ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B422575:L422575:{c.instructions+=8;NFSU2_TR(0x422575);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422578:{NFSU2_TR(0x422578);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42257c:{NFSU2_TR(0x42257c);
{u32 ea_=u32(u32(7879804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422582:{NFSU2_TR(0x422582);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B42258a:{NFSU2_TR(0x42258a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B42258d:{NFSU2_TR(0x42258d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42258f:{NFSU2_TR(0x42258f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422592:{NFSU2_TR(0x422592);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422520u);}goto L422520;}}
}
B422594:L422594:{c.instructions+=1;NFSU2_TR(0x422594);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42241du);}goto L42241d;}
}
B422599:L422599:{c.instructions+=20;NFSU2_TR(0x422599);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42259b:{NFSU2_TR(0x42259b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42259d:{NFSU2_TR(0x42259d);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4225a0:{NFSU2_TR(0x4225a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4225a8:{NFSU2_TR(0x4225a8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4225ab:{NFSU2_TR(0x4225ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4225af:{NFSU2_TR(0x4225af);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4225b2:{NFSU2_TR(0x4225b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4225b6:{NFSU2_TR(0x4225b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4225ba:{NFSU2_TR(0x4225ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4225be:{NFSU2_TR(0x4225be);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4225c0:{NFSU2_TR(0x4225c0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4225c2:{NFSU2_TR(0x4225c2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4225c4:{NFSU2_TR(0x4225c4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4225c6:{NFSU2_TR(0x4225c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4225c8:{NFSU2_TR(0x4225c8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4225ca:{NFSU2_TR(0x4225ca);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B4225cc:{NFSU2_TR(0x4225cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4225ce:{NFSU2_TR(0x4225ce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4225d2:{NFSU2_TR(0x4225d2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42241du);}goto L42241d;}
}
B4225d7:L4225d7:{c.instructions+=3;NFSU2_TR(0x4225d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4225da:{NFSU2_TR(0x4225da);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4225dc:{NFSU2_TR(0x4225dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4225f5;}}
}
B4225de:L4225de:{c.instructions+=5;NFSU2_TR(0x4225de);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4225e2:{NFSU2_TR(0x4225e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4225e5:{NFSU2_TR(0x4225e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4225e6:{NFSU2_TR(0x4225e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4225ea:{NFSU2_TR(0x4225ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4225efull));
TAIL_STATIC(0x40ae30u,40a);
}
B4225ef:L4225ef:{c.instructions+=2;NFSU2_TR(0x4225ef);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4225f3:{NFSU2_TR(0x4225f3);
{goto L422626;}
}
B4225f5:L4225f5:{c.instructions+=2;NFSU2_TR(0x4225f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4225f7:{NFSU2_TR(0x4225f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422610;}}
}
B4225f9:L4225f9:{c.instructions+=6;NFSU2_TR(0x4225f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4225fd:{NFSU2_TR(0x4225fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B422600:{NFSU2_TR(0x422600);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422604:{NFSU2_TR(0x422604);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422608:{NFSU2_TR(0x422608);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42260e:{NFSU2_TR(0x42260e);
{goto L422626;}
}
B422610:L422610:{c.instructions+=2;NFSU2_TR(0x422610);
__builtin_memmove((R+4),(R+24),4);
}
B422612:{NFSU2_TR(0x422612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422617ull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B422617:L422617:{c.instructions+=4;NFSU2_TR(0x422617);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422619:{NFSU2_TR(0x422619);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42261b:{NFSU2_TR(0x42261b);
__builtin_memmove((R+4),(R+0),4);
}
B42261d:{NFSU2_TR(0x42261d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422621;}}
}
B42261f:L42261f:{c.instructions+=1;NFSU2_TR(0x42261f);
__builtin_memmove((R+4),(R+24),4);
}
B422621:L422621:{c.instructions+=1;NFSU2_TR(0x422621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422626ull));
TAIL_STATIC(0x401a30u,401);
}
B422626:L422626:{c.instructions+=8;NFSU2_TR(0x422626);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42262a:{NFSU2_TR(0x42262a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42262e:{NFSU2_TR(0x42262e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B422630:{NFSU2_TR(0x422630);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422632:{NFSU2_TR(0x422632);
__builtin_memmove((R+4),(R+518),1);
}
B422635:{NFSU2_TR(0x422635);
__builtin_memmove((R+24),(R+4),4);
}
B422637:{NFSU2_TR(0x422637);
__builtin_memmove((R+4),(R+20),4);
}
B422639:{NFSU2_TR(0x422639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42263eull));
TAIL_STATIC(0x5d8990u,5d8);
}
B42263e:L42263e:{c.instructions+=3;NFSU2_TR(0x42263e);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B422642:{NFSU2_TR(0x422642);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422644:{NFSU2_TR(0x422644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422652;}}
}
B422646:L422646:{c.instructions+=3;NFSU2_TR(0x422646);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B42264a:{NFSU2_TR(0x42264a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42264c:{NFSU2_TR(0x42264c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422421u);}goto L422421;}}
}
B422652:L422652:{c.instructions+=6;NFSU2_TR(0x422652);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422656:{NFSU2_TR(0x422656);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422657:{NFSU2_TR(0x422657);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42265b:{NFSU2_TR(0x42265b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42265c:{NFSU2_TR(0x42265c);
__builtin_memmove((R+4),(R+28),4);
}
B42265e:{NFSU2_TR(0x42265e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422663ull));
TAIL_STATIC(0x40aa20u,40a);
}
B422663:L422663:{c.instructions+=1;NFSU2_TR(0x422663);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422421u);}goto L422421;}
}
B422668:L422668:{c.instructions+=1;NFSU2_TR(0x422668);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42266a:L42266a:{c.instructions+=3;NFSU2_TR(0x42266a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B42266e:{NFSU2_TR(0x42266e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422672:{NFSU2_TR(0x422672);
if(r1(R+518)){{goto L4226ac;}}
}
B422674:L422674:{c.instructions+=3;NFSU2_TR(0x422674);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B422678:{NFSU2_TR(0x422678);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B42267c:{NFSU2_TR(0x42267c);
if(r1(R+518)){{goto L4226ac;}}
}
B42267e:L42267e:{c.instructions+=3;NFSU2_TR(0x42267e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B422681:{NFSU2_TR(0x422681);
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
B422683:{NFSU2_TR(0x422683);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42269b;}}
}
B422685:L422685:{c.instructions+=5;NFSU2_TR(0x422685);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B42268c:{NFSU2_TR(0x42268c);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B42268f:{NFSU2_TR(0x42268f);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B422692:{NFSU2_TR(0x422692);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B422699:{NFSU2_TR(0x422699);
{goto L4226ae;}
}
B42269b:L42269b:{c.instructions+=5;NFSU2_TR(0x42269b);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B42269e:{NFSU2_TR(0x42269e);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4226a0:{NFSU2_TR(0x4226a0);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B4226a3:{NFSU2_TR(0x4226a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B4226aa:{NFSU2_TR(0x4226aa);
{goto L4226ae;}
}
B4226ac:L4226ac:{c.instructions+=1;NFSU2_TR(0x4226ac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4226ae:L4226ae:{c.instructions+=5;NFSU2_TR(0x4226ae);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4226b2:{NFSU2_TR(0x4226b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4226b4:{NFSU2_TR(0x4226b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4226b8:{NFSU2_TR(0x4226b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4226bc:{NFSU2_TR(0x4226bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4226bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4226bf:L4226bf:{c.instructions+=11;NFSU2_TR(0x4226bf);
__builtin_memmove((R+12),(R+0),4);
}
B4226c1:{NFSU2_TR(0x4226c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4226c5:{NFSU2_TR(0x4226c5);
w1(R+512,u8((r4(R+12))!=(u32(0x0ull))));
w4(R+12,u32(0-u32(r4(R+12))));
}
B4226c7:{NFSU2_TR(0x4226c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4226cb:{NFSU2_TR(0x4226cb);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B4226cd:{NFSU2_TR(0x4226cd);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B4226cf:{NFSU2_TR(0x4226cf);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4226d3:{NFSU2_TR(0x4226d3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4226d7:{NFSU2_TR(0x4226d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4226db:{NFSU2_TR(0x4226db);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4226df:{NFSU2_TR(0x4226df);
{goto L422756;}
}
B4226e1:L4226e1:{c.instructions+=5;NFSU2_TR(0x4226e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4226e5:{NFSU2_TR(0x4226e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4226e6:{NFSU2_TR(0x4226e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4226e7:{NFSU2_TR(0x4226e7);
__builtin_memmove((R+4),(R+28),4);
}
B4226e9:{NFSU2_TR(0x4226e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4226eeull));
TAIL_STATIC(0x418c50u,418);
}
B4226ee:L4226ee:{c.instructions+=2;NFSU2_TR(0x4226ee);
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
B4226f0:{NFSU2_TR(0x4226f0);
if(r1(R+518)){{goto L42274e;}}
}
B4226f2:L4226f2:{c.instructions+=5;NFSU2_TR(0x4226f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4226f6:{NFSU2_TR(0x4226f6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4226f7:{NFSU2_TR(0x4226f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4226f8:{NFSU2_TR(0x4226f8);
__builtin_memmove((R+4),(R+28),4);
}
B4226fa:{NFSU2_TR(0x4226fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4226ffull));
TAIL_STATIC(0x418da0u,418);
}
B4226ff:L4226ff:{c.instructions+=3;NFSU2_TR(0x4226ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422702:{NFSU2_TR(0x422702);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B422705:{NFSU2_TR(0x422705);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42273c;}}
}
B422707:L422707:{c.instructions+=4;NFSU2_TR(0x422707);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B42270b:{NFSU2_TR(0x42270b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42270e:{NFSU2_TR(0x42270e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422710:{NFSU2_TR(0x422710);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42272b;}}
}
B422712:L422712:{c.instructions+=7;NFSU2_TR(0x422712);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B422716:{NFSU2_TR(0x422716);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B42271a:{NFSU2_TR(0x42271a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42271d:{NFSU2_TR(0x42271d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422720:{NFSU2_TR(0x422720);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B422724:{NFSU2_TR(0x422724);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B422728:{NFSU2_TR(0x422728);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42272b:L42272b:{c.instructions+=6;NFSU2_TR(0x42272b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42272e:{NFSU2_TR(0x42272e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422732:{NFSU2_TR(0x422732);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B422733:{NFSU2_TR(0x422733);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422736:{NFSU2_TR(0x422736);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42273a:{NFSU2_TR(0x42273a);
{goto L422756;}
}
B42273c:L42273c:{c.instructions+=4;NFSU2_TR(0x42273c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42273e:{NFSU2_TR(0x42273e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422740:{NFSU2_TR(0x422740);
__builtin_memmove((R+4),(R+24),4);
}
B422742:{NFSU2_TR(0x422742);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422744ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B422744:L422744:{c.instructions+=3;NFSU2_TR(0x422744);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422748:{NFSU2_TR(0x422748);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42274c:{NFSU2_TR(0x42274c);
{goto L422756;}
}
B42274e:L42274e:{c.instructions+=4;NFSU2_TR(0x42274e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B422750:{NFSU2_TR(0x422750);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422752:{NFSU2_TR(0x422752);
__builtin_memmove((R+4),(R+24),4);
}
B422754:{NFSU2_TR(0x422754);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422756ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B422756:L422756:{c.instructions+=6;NFSU2_TR(0x422756);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42275a:{NFSU2_TR(0x42275a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42275b:{NFSU2_TR(0x42275b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42275e:{NFSU2_TR(0x42275e);
__builtin_memmove((R+24),(R+20),4);
}
B422760:{NFSU2_TR(0x422760);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422764:{NFSU2_TR(0x422764);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422300u);}goto L422300;}}
}
B42276a:L42276a:{c.instructions+=6;NFSU2_TR(0x42276a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42276b:{NFSU2_TR(0x42276b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42276c:{NFSU2_TR(0x42276c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42276d:{NFSU2_TR(0x42276d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42276e:{NFSU2_TR(0x42276e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B422771:{NFSU2_TR(0x422771);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422774:L422774:{c.instructions+=1;NFSU2_TR(0x422774);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422776:L422776:{c.instructions+=6;NFSU2_TR(0x422776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422777:{NFSU2_TR(0x422777);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422778:{NFSU2_TR(0x422778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B422779:{NFSU2_TR(0x422779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42277a:{NFSU2_TR(0x42277a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42277d:{NFSU2_TR(0x42277d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422780:L422780:{c.instructions+=9;NFSU2_TR(0x422780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B422783:{NFSU2_TR(0x422783);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422784:{NFSU2_TR(0x422784);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B422788:{NFSU2_TR(0x422788);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42278b:{NFSU2_TR(0x42278b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42278c:{NFSU2_TR(0x42278c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42278d:{NFSU2_TR(0x42278d);
__builtin_memmove((R+24),(R+4),4);
}
B42278f:{NFSU2_TR(0x42278f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B422792:{NFSU2_TR(0x422792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422797ull));
TAIL_STATIC(0x5b5380u,5b5);
}
B422797:L422797:{c.instructions+=3;NFSU2_TR(0x422797);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422798:{NFSU2_TR(0x422798);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42279c:{NFSU2_TR(0x42279c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4227a1ull));
TAIL_STATIC(0x5d4650u,5d4);
}
B4227a1:L4227a1:{c.instructions+=3;NFSU2_TR(0x4227a1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4227a5:{NFSU2_TR(0x4227a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4227a6:{NFSU2_TR(0x4227a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4227abull));
TAIL_STATIC(0x5d4600u,5d4);
}
B4227ab:L4227ab:{c.instructions+=7;NFSU2_TR(0x4227ab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4227af:{NFSU2_TR(0x4227af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4227b5:{NFSU2_TR(0x4227b5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4227b7:{NFSU2_TR(0x4227b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4227ba:{NFSU2_TR(0x4227ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4227bc:{NFSU2_TR(0x4227bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4227c0:{NFSU2_TR(0x4227c0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L422b7c;}}
}
B4227c6:L4227c6:{c.instructions+=9;NFSU2_TR(0x4227c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4227cc:{NFSU2_TR(0x4227cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4227d2:{NFSU2_TR(0x4227d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4227d8:{NFSU2_TR(0x4227d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4227d9:{NFSU2_TR(0x4227d9);
w4(R+28,u32(0x3full));
}
B4227de:{NFSU2_TR(0x4227de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4227e2:{NFSU2_TR(0x4227e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4227e6:{NFSU2_TR(0x4227e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4227ea:{NFSU2_TR(0x4227ea);
{goto L4227f0;}
}
B4227ec:L4227ec:{c.instructions+=1;NFSU2_TR(0x4227ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4227f0:L4227f0:{c.instructions+=4;NFSU2_TR(0x4227f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4227f4:{NFSU2_TR(0x4227f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
}
B4227f7:{NFSU2_TR(0x4227f7);
w4(R+4,u32(0x4ull));
}
B4227fc:{NFSU2_TR(0x4227fc);
__builtin_memmove((R+16),(R+16),4);
}
B422800:L422800:{c.instructions+=5;NFSU2_TR(0x422800);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B422804:{NFSU2_TR(0x422804);
u8 U[1];
w1(U+0,u8(0xffull));
s1(u32(r4(R+0)),r1(U+0));
}
B422807:{NFSU2_TR(0x422807);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B422808:{NFSU2_TR(0x422808);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B422809:{NFSU2_TR(0x422809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422800u);}goto L422800;}}
}
B42280b:L42280b:{c.instructions+=14;NFSU2_TR(0x42280b);
{u32 ea_=u32(u32(7879796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422811:{NFSU2_TR(0x422811);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422812:{NFSU2_TR(0x422812);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422814:{NFSU2_TR(0x422814);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B422816:{NFSU2_TR(0x422816);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422817:{NFSU2_TR(0x422817);
w4(R+0,u32(0xbf800000ull));
}
B42281c:{NFSU2_TR(0x42281c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42281f:{NFSU2_TR(0x42281f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422820:{NFSU2_TR(0x422820);
__builtin_memmove((R+4),(R+24),4);
}
B422822:{NFSU2_TR(0x422822);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B422826:{NFSU2_TR(0x422826);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B422829:{NFSU2_TR(0x422829);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B42282d:{NFSU2_TR(0x42282d);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B422831:{NFSU2_TR(0x422831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422836ull));
TAIL_STATIC(0x41f8e0u,41f);
}
B422836:L422836:{c.instructions+=7;NFSU2_TR(0x422836);
__builtin_memmove((R+0),gp(0x783c74),4);
}
B42283b:{NFSU2_TR(0x42283b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42283c:{NFSU2_TR(0x42283c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42283e:{NFSU2_TR(0x42283e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42283f:{NFSU2_TR(0x42283f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422840:{NFSU2_TR(0x422840);
__builtin_memmove((R+4),(R+24),4);
}
B422842:{NFSU2_TR(0x422842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422847ull));
TAIL_STATIC(0x41f8e0u,41f);
}
B422847:L422847:{c.instructions+=9;NFSU2_TR(0x422847);
{u32 ea_=u32(u32(7879800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42284d:{NFSU2_TR(0x42284d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42284e:{NFSU2_TR(0x42284e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B422850:{NFSU2_TR(0x422850);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422852:{NFSU2_TR(0x422852);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422853:{NFSU2_TR(0x422853);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422856:{NFSU2_TR(0x422856);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422857:{NFSU2_TR(0x422857);
__builtin_memmove((R+4),(R+24),4);
}
B422859:{NFSU2_TR(0x422859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42285eull));
TAIL_STATIC(0x41f8e0u,41f);
}
B42285e:L42285e:{c.instructions+=7;NFSU2_TR(0x42285e);
__builtin_memmove((R+4),gp(0x783c78),4);
}
B422864:{NFSU2_TR(0x422864);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422865:{NFSU2_TR(0x422865);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422867:{NFSU2_TR(0x422867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422868:{NFSU2_TR(0x422868);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422869:{NFSU2_TR(0x422869);
__builtin_memmove((R+4),(R+24),4);
}
B42286b:{NFSU2_TR(0x42286b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422870ull));
TAIL_STATIC(0x41f8e0u,41f);
}
B422870:L422870:{c.instructions+=4;NFSU2_TR(0x422870);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422871:{NFSU2_TR(0x422871);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422872:{NFSU2_TR(0x422872);
__builtin_memmove((R+4),(R+24),4);
}
B422874:{NFSU2_TR(0x422874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422879ull));
TAIL_STATIC(0x419000u,419);
}
B422879:L422879:{c.instructions+=6;NFSU2_TR(0x422879);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42287d:{NFSU2_TR(0x42287d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422880:{NFSU2_TR(0x422880);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B422884:{NFSU2_TR(0x422884);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B422887:{NFSU2_TR(0x422887);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422889:{NFSU2_TR(0x422889);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4228c6;}}
}
B42288b:L42288b:{c.instructions+=9;NFSU2_TR(0x42288b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42288f:{NFSU2_TR(0x42288f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B422893:{NFSU2_TR(0x422893);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422894:{NFSU2_TR(0x422894);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B422897:{NFSU2_TR(0x422897);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422898:{NFSU2_TR(0x422898);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422899:{NFSU2_TR(0x422899);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B42289c:{NFSU2_TR(0x42289c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42289d:{NFSU2_TR(0x42289d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4228a2ull));
TAIL_STATIC(0x5d4770u,5d4);
}
B4228a2:L4228a2:{c.instructions+=8;NFSU2_TR(0x4228a2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4228a6:{NFSU2_TR(0x4228a6);
__builtin_memmove((R+0),gp(0x783c8c),4);
}
B4228ab:{NFSU2_TR(0x4228ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4228af:{NFSU2_TR(0x4228af);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4228b3:{NFSU2_TR(0x4228b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4228b4:{NFSU2_TR(0x4228b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4228b5:{NFSU2_TR(0x4228b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4228b6:{NFSU2_TR(0x4228b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4228bbull));
TAIL_STATIC(0x5d46a0u,5d4);
}
B4228bb:L4228bb:{c.instructions+=4;NFSU2_TR(0x4228bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4228bf:{NFSU2_TR(0x4228bf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4228c1:{NFSU2_TR(0x4228c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4228c4:{NFSU2_TR(0x4228c4);
{goto L4228d2;}
}
B4228c6:L4228c6:{c.instructions+=3;NFSU2_TR(0x4228c6);
__builtin_memmove((R+4),gp(0x783c8c),4);
}
B4228cc:{NFSU2_TR(0x4228cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4228d0:{NFSU2_TR(0x4228d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4228d2:L4228d2:{c.instructions+=11;NFSU2_TR(0x4228d2);
w4(R+0,u32(0x40c00000ull));
}
B4228d7:{NFSU2_TR(0x4228d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228da:{NFSU2_TR(0x4228da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228dd:{NFSU2_TR(0x4228dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228e0:{NFSU2_TR(0x4228e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228e3:{NFSU2_TR(0x4228e3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4228e7:{NFSU2_TR(0x4228e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4228ea:{NFSU2_TR(0x4228ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4228ed:{NFSU2_TR(0x4228ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228f1:{NFSU2_TR(0x4228f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4228f5:{NFSU2_TR(0x4228f5);
if(r1(R+518)){{goto L4228fd;}}
}
B4228f7:L4228f7:{c.instructions+=2;NFSU2_TR(0x4228f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B4228fb:{NFSU2_TR(0x4228fb);
{goto L4228ff;}
}
B4228fd:L4228fd:{c.instructions+=1;NFSU2_TR(0x4228fd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4228ff:L4228ff:{c.instructions+=2;NFSU2_TR(0x4228ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422902:{NFSU2_TR(0x422902);
if(r1(R+518)){{goto L42290e;}}
}
B422904:L422904:{c.instructions+=3;NFSU2_TR(0x422904);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B422908:{NFSU2_TR(0x422908);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42290c:{NFSU2_TR(0x42290c);
{goto L42291a;}
}
B42290e:L42290e:{c.instructions+=2;NFSU2_TR(0x42290e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422916:{NFSU2_TR(0x422916);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42291a:L42291a:{c.instructions+=2;NFSU2_TR(0x42291a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42291c:{NFSU2_TR(0x42291c);
if(r1(R+518)){{goto L42292e;}}
}
B42291e:L42291e:{c.instructions+=5;NFSU2_TR(0x42291e);
{u32 ea_=u32(r4(R+20)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422921:{NFSU2_TR(0x422921);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422925:{NFSU2_TR(0x422925);
{u32 ea_=u32(r4(R+8)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422928:{NFSU2_TR(0x422928);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42292c:{NFSU2_TR(0x42292c);
{goto L422936;}
}
B42292e:L42292e:{c.instructions+=1;NFSU2_TR(0x42292e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422936:L422936:{c.instructions+=2;NFSU2_TR(0x422936);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422938:{NFSU2_TR(0x422938);
if(r1(R+518)){{goto L42294a;}}
}
B42293a:L42293a:{c.instructions+=5;NFSU2_TR(0x42293a);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42293d:{NFSU2_TR(0x42293d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422941:{NFSU2_TR(0x422941);
{u32 ea_=u32(r4(R+0)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422944:{NFSU2_TR(0x422944);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422948:{NFSU2_TR(0x422948);
{goto L422952;}
}
B42294a:L42294a:{c.instructions+=1;NFSU2_TR(0x42294a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422952:L422952:{c.instructions+=14;NFSU2_TR(0x422952);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422956:{NFSU2_TR(0x422956);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42295a:{NFSU2_TR(0x42295a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42295e:{NFSU2_TR(0x42295e);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422962:{NFSU2_TR(0x422962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422963:{NFSU2_TR(0x422963);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422967:{NFSU2_TR(0x422967);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42296b:{NFSU2_TR(0x42296b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42296f:{NFSU2_TR(0x42296f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422973:{NFSU2_TR(0x422973);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B422975:{NFSU2_TR(0x422975);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B422979:{NFSU2_TR(0x422979);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42297b:{NFSU2_TR(0x42297b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42297f:{NFSU2_TR(0x42297f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422984ull));
TAIL_STATIC(0x5764d0u,576);
}
B422984:L422984:{c.instructions+=7;NFSU2_TR(0x422984);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422986:{NFSU2_TR(0x422986);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42298a:{NFSU2_TR(0x42298a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B42298c:{NFSU2_TR(0x42298c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B422990:{NFSU2_TR(0x422990);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B422992:{NFSU2_TR(0x422992);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422996:{NFSU2_TR(0x422996);
if(r1(R+518)){{goto L4229af;}}
}
B422998:L422998:{c.instructions+=5;NFSU2_TR(0x422998);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42299b:{NFSU2_TR(0x42299b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42299f:{NFSU2_TR(0x42299f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4229a1:{NFSU2_TR(0x4229a1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4229a4:{NFSU2_TR(0x4229a4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4229ac;}}
}
B4229a6:L4229a6:{c.instructions+=2;NFSU2_TR(0x4229a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4229a8:{NFSU2_TR(0x4229a8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229ac:L4229ac:{c.instructions+=1;NFSU2_TR(0x4229ac);
{u32 ea_=u32(r4(R+20)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4229af:L4229af:{c.instructions+=3;NFSU2_TR(0x4229af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4229b3:{NFSU2_TR(0x4229b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4229b5:{NFSU2_TR(0x4229b5);
if(r1(R+518)){{goto L4229ce;}}
}
B4229b7:L4229b7:{c.instructions+=5;NFSU2_TR(0x4229b7);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229ba:{NFSU2_TR(0x4229ba);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4229be:{NFSU2_TR(0x4229be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4229c0:{NFSU2_TR(0x4229c0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4229c3:{NFSU2_TR(0x4229c3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4229cb;}}
}
B4229c5:L4229c5:{c.instructions+=2;NFSU2_TR(0x4229c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4229c7:{NFSU2_TR(0x4229c7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229cb:L4229cb:{c.instructions+=1;NFSU2_TR(0x4229cb);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4229ce:L4229ce:{c.instructions+=15;NFSU2_TR(0x4229ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4229d0:{NFSU2_TR(0x4229d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229d4:{NFSU2_TR(0x4229d4);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4229da:{NFSU2_TR(0x4229da);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4229de:{NFSU2_TR(0x4229de);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229e2:{NFSU2_TR(0x4229e2);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4229e8:{NFSU2_TR(0x4229e8);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229ec:{NFSU2_TR(0x4229ec);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4229f0:{NFSU2_TR(0x4229f0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4229f2:{NFSU2_TR(0x4229f2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4229f6:{NFSU2_TR(0x4229f6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4229f8:{NFSU2_TR(0x4229f8);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4229fa:{NFSU2_TR(0x4229fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4229fe:{NFSU2_TR(0x4229fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a00:{NFSU2_TR(0x422a00);
if(r1(R+518)){{goto L422a19;}}
}
B422a02:L422a02:{c.instructions+=5;NFSU2_TR(0x422a02);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a05:{NFSU2_TR(0x422a05);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422a09:{NFSU2_TR(0x422a09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422a0b:{NFSU2_TR(0x422a0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422a0e:{NFSU2_TR(0x422a0e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422a16;}}
}
B422a10:L422a10:{c.instructions+=2;NFSU2_TR(0x422a10);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a12:{NFSU2_TR(0x422a12);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a16:L422a16:{c.instructions+=1;NFSU2_TR(0x422a16);
{u32 ea_=u32(r4(R+20)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a19:L422a19:{c.instructions+=2;NFSU2_TR(0x422a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422a1b:{NFSU2_TR(0x422a1b);
if(r1(R+518)){{goto L422a34;}}
}
B422a1d:L422a1d:{c.instructions+=5;NFSU2_TR(0x422a1d);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a20:{NFSU2_TR(0x422a20);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422a24:{NFSU2_TR(0x422a24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422a26:{NFSU2_TR(0x422a26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422a29:{NFSU2_TR(0x422a29);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422a31;}}
}
B422a2b:L422a2b:{c.instructions+=2;NFSU2_TR(0x422a2b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a2d:{NFSU2_TR(0x422a2d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a31:L422a31:{c.instructions+=1;NFSU2_TR(0x422a31);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a34:L422a34:{c.instructions+=10;NFSU2_TR(0x422a34);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422a36:{NFSU2_TR(0x422a36);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a3a:{NFSU2_TR(0x422a3a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a3e:{NFSU2_TR(0x422a3e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422a40:{NFSU2_TR(0x422a40);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a44:{NFSU2_TR(0x422a44);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B422a46:{NFSU2_TR(0x422a46);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422a48:{NFSU2_TR(0x422a48);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a4c:{NFSU2_TR(0x422a4c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a4e:{NFSU2_TR(0x422a4e);
if(r1(R+518)){{goto L422a67;}}
}
B422a50:L422a50:{c.instructions+=5;NFSU2_TR(0x422a50);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a53:{NFSU2_TR(0x422a53);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422a57:{NFSU2_TR(0x422a57);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422a59:{NFSU2_TR(0x422a59);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422a5c:{NFSU2_TR(0x422a5c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422a64;}}
}
B422a5e:L422a5e:{c.instructions+=2;NFSU2_TR(0x422a5e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a60:{NFSU2_TR(0x422a60);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a64:L422a64:{c.instructions+=1;NFSU2_TR(0x422a64);
{u32 ea_=u32(r4(R+20)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a67:L422a67:{c.instructions+=2;NFSU2_TR(0x422a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422a69:{NFSU2_TR(0x422a69);
if(r1(R+518)){{goto L422a82;}}
}
B422a6b:L422a6b:{c.instructions+=5;NFSU2_TR(0x422a6b);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a6e:{NFSU2_TR(0x422a6e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422a72:{NFSU2_TR(0x422a72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422a74:{NFSU2_TR(0x422a74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422a77:{NFSU2_TR(0x422a77);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422a7f;}}
}
B422a79:L422a79:{c.instructions+=2;NFSU2_TR(0x422a79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a7b:{NFSU2_TR(0x422a7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a7f:L422a7f:{c.instructions+=1;NFSU2_TR(0x422a7f);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a82:L422a82:{c.instructions+=10;NFSU2_TR(0x422a82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422a84:{NFSU2_TR(0x422a84);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a88:{NFSU2_TR(0x422a88);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422a8c:{NFSU2_TR(0x422a8c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422a8e:{NFSU2_TR(0x422a8e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a92:{NFSU2_TR(0x422a92);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B422a94:{NFSU2_TR(0x422a94);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422a96:{NFSU2_TR(0x422a96);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422a9a:{NFSU2_TR(0x422a9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422a9c:{NFSU2_TR(0x422a9c);
if(r1(R+518)){{goto L422ab5;}}
}
B422a9e:L422a9e:{c.instructions+=5;NFSU2_TR(0x422a9e);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422aa1:{NFSU2_TR(0x422aa1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422aa5:{NFSU2_TR(0x422aa5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422aa7:{NFSU2_TR(0x422aa7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422aaa:{NFSU2_TR(0x422aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422ab2;}}
}
B422aac:L422aac:{c.instructions+=2;NFSU2_TR(0x422aac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422aae:{NFSU2_TR(0x422aae);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422ab2:L422ab2:{c.instructions+=1;NFSU2_TR(0x422ab2);
{u32 ea_=u32(r4(R+20)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422ab5:L422ab5:{c.instructions+=2;NFSU2_TR(0x422ab5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422ab7:{NFSU2_TR(0x422ab7);
if(r1(R+518)){{goto L422ad0;}}
}
B422ab9:L422ab9:{c.instructions+=5;NFSU2_TR(0x422ab9);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422abc:{NFSU2_TR(0x422abc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422ac0:{NFSU2_TR(0x422ac0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422ac2:{NFSU2_TR(0x422ac2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422ac5:{NFSU2_TR(0x422ac5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422acd;}}
}
B422ac7:L422ac7:{c.instructions+=2;NFSU2_TR(0x422ac7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422ac9:{NFSU2_TR(0x422ac9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422acd:L422acd:{c.instructions+=1;NFSU2_TR(0x422acd);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422ad0:L422ad0:{c.instructions+=10;NFSU2_TR(0x422ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422ad2:{NFSU2_TR(0x422ad2);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422ad6:{NFSU2_TR(0x422ad6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422ada:{NFSU2_TR(0x422ada);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422adc:{NFSU2_TR(0x422adc);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422ae0:{NFSU2_TR(0x422ae0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B422ae2:{NFSU2_TR(0x422ae2);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B422ae4:{NFSU2_TR(0x422ae4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422ae8:{NFSU2_TR(0x422ae8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422aea:{NFSU2_TR(0x422aea);
if(r1(R+518)){{goto L422b03;}}
}
B422aec:L422aec:{c.instructions+=5;NFSU2_TR(0x422aec);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422aef:{NFSU2_TR(0x422aef);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422af3:{NFSU2_TR(0x422af3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422af5:{NFSU2_TR(0x422af5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422af8:{NFSU2_TR(0x422af8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422b00;}}
}
B422afa:L422afa:{c.instructions+=2;NFSU2_TR(0x422afa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422afc:{NFSU2_TR(0x422afc);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422b00:L422b00:{c.instructions+=1;NFSU2_TR(0x422b00);
{u32 ea_=u32(r4(R+20)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422b03:L422b03:{c.instructions+=2;NFSU2_TR(0x422b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422b05:{NFSU2_TR(0x422b05);
if(r1(R+518)){{goto L422b1e;}}
}
B422b07:L422b07:{c.instructions+=5;NFSU2_TR(0x422b07);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422b0a:{NFSU2_TR(0x422b0a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B422b0e:{NFSU2_TR(0x422b0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422b10:{NFSU2_TR(0x422b10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422b13:{NFSU2_TR(0x422b13);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L422b1b;}}
}
B422b15:L422b15:{c.instructions+=2;NFSU2_TR(0x422b15);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422b17:{NFSU2_TR(0x422b17);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422b1b:L422b1b:{c.instructions+=1;NFSU2_TR(0x422b1b);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422b1e:L422b1e:{c.instructions+=7;NFSU2_TR(0x422b1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422b22:{NFSU2_TR(0x422b22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b23:{NFSU2_TR(0x422b23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b25:{NFSU2_TR(0x422b25);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B422b26:{NFSU2_TR(0x422b26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b27:{NFSU2_TR(0x422b27);
__builtin_memmove((R+4),(R+24),4);
}
B422b29:{NFSU2_TR(0x422b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422b2eull));
TAIL_STATIC(0x40a6e0u,40a);
}
B422b2e:L422b2e:{c.instructions+=7;NFSU2_TR(0x422b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422b32:{NFSU2_TR(0x422b32);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b33:{NFSU2_TR(0x422b33);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b35:{NFSU2_TR(0x422b35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B422b36:{NFSU2_TR(0x422b36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b37:{NFSU2_TR(0x422b37);
__builtin_memmove((R+4),(R+24),4);
}
B422b39:{NFSU2_TR(0x422b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422b3eull));
TAIL_STATIC(0x40a6e0u,40a);
}
B422b3e:L422b3e:{c.instructions+=17;NFSU2_TR(0x422b3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B422b42:{NFSU2_TR(0x422b42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422b46:{NFSU2_TR(0x422b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422b4a:{NFSU2_TR(0x422b4a);
w4(R+4,u32(0x80ull));
}
B422b4f:{NFSU2_TR(0x422b4f);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B422b51:{NFSU2_TR(0x422b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422b55:{NFSU2_TR(0x422b55);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B422b59:{NFSU2_TR(0x422b59);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B422b5b:{NFSU2_TR(0x422b5b);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B422b5d:{NFSU2_TR(0x422b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422b63:{NFSU2_TR(0x422b63);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B422b64:{NFSU2_TR(0x422b64);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B422b67:{NFSU2_TR(0x422b67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B422b69:{NFSU2_TR(0x422b69);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422b6d:{NFSU2_TR(0x422b6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422b71:{NFSU2_TR(0x422b71);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422b75:{NFSU2_TR(0x422b75);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4227ecu);}goto L4227ec;}}
}
B422b7b:L422b7b:{c.instructions+=1;NFSU2_TR(0x422b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422b7c:L422b7c:{c.instructions+=5;NFSU2_TR(0x422b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422b7d:{NFSU2_TR(0x422b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B422b7e:{NFSU2_TR(0x422b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B422b7f:{NFSU2_TR(0x422b7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B422b82:{NFSU2_TR(0x422b82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422b90:L422b90:{c.instructions+=9;NFSU2_TR(0x422b90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b91:{NFSU2_TR(0x422b91);
__builtin_memmove((R+20),(R+16),4);
}
B422b93:{NFSU2_TR(0x422b93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B422b96:{NFSU2_TR(0x422b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B422b99:{NFSU2_TR(0x422b99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b9a:{NFSU2_TR(0x422b9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b9b:{NFSU2_TR(0x422b9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422b9c:{NFSU2_TR(0x422b9c);
__builtin_memmove((R+24),(R+4),4);
}
B422b9e:{NFSU2_TR(0x422b9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422ba3ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B422ba3:L422ba3:{c.instructions+=3;NFSU2_TR(0x422ba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422ba6:{NFSU2_TR(0x422ba6);
u8 U[8];
__builtin_memmove((U+0),gp(0x88d218),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B422bac:{NFSU2_TR(0x422bac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L422f5a;}}
}
B422bb2:L422bb2:{c.instructions+=3;NFSU2_TR(0x422bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422bb5:{NFSU2_TR(0x422bb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422bb6:{NFSU2_TR(0x422bb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422bbbull));
TAIL_STATIC(0x43e5c0u,43e);
}
B422bbb:L422bbb:{c.instructions+=6;NFSU2_TR(0x422bbb);
{u32 ea_=u32(u32(7880016u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B422bc1:{NFSU2_TR(0x422bc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B422bc4:{NFSU2_TR(0x422bc4);
{u32 ea_=u32(u32(7880012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422bca:{NFSU2_TR(0x422bca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422bcc:{NFSU2_TR(0x422bcc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422bcf:{NFSU2_TR(0x422bcf);
if(r1(R+514)){{goto L422f5a;}}
}
B422bd5:L422bd5:{c.instructions+=1;NFSU2_TR(0x422bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422bdaull));
TAIL_STATIC(0x43bdf0u,43b);
}
B422bda:L422bda:{c.instructions+=12;NFSU2_TR(0x422bda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422bdd:{NFSU2_TR(0x422bdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B422be4:{NFSU2_TR(0x422be4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422be6:{NFSU2_TR(0x422be6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422bea:{NFSU2_TR(0x422bea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B422bed:{NFSU2_TR(0x422bed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422bee:{NFSU2_TR(0x422bee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B422bf1:{NFSU2_TR(0x422bf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422bf2:{NFSU2_TR(0x422bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B422bf5:{NFSU2_TR(0x422bf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422bf6:{NFSU2_TR(0x422bf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422bfa:{NFSU2_TR(0x422bfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422bffull));
TAIL_STATIC(0x43d410u,43d);
}
B422bff:L422bff:{c.instructions+=3;NFSU2_TR(0x422bff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B422c02:{NFSU2_TR(0x422c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422c04:{NFSU2_TR(0x422c04);
if(r1(R+518)){{goto L422f1a;}}
}
B422c0a:L422c0a:{c.instructions+=4;NFSU2_TR(0x422c0a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B422c0f:{NFSU2_TR(0x422c0f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422c14:{NFSU2_TR(0x422c14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422c1c:{NFSU2_TR(0x422c1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L422f1a;}}
}
B422c22:L422c22:{c.instructions+=1;NFSU2_TR(0x422c22);
{goto L422c30;}
}
B422c24:L422c24:{c.instructions+=2;NFSU2_TR(0x422c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B422c28:{NFSU2_TR(0x422c28);
{goto L422c30;}
}
B422c30:L422c30:{c.instructions+=3;NFSU2_TR(0x422c30);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B422c34:{NFSU2_TR(0x422c34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422c36:{NFSU2_TR(0x422c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422f1a;}}
}
B422c3c:L422c3c:{c.instructions+=21;NFSU2_TR(0x422c3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422c40:{NFSU2_TR(0x422c40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B422c43:{NFSU2_TR(0x422c43);
u8 U[14];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B422c4b:{NFSU2_TR(0x422c4b);
u8 U[14];
w4(U+0,u32(u32(u32(0xa6ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B422c53:{NFSU2_TR(0x422c53);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B422c5a:{NFSU2_TR(0x422c5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422c5e:{NFSU2_TR(0x422c5e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422c62:{NFSU2_TR(0x422c62);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422c66:{NFSU2_TR(0x422c66);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422c6c:{NFSU2_TR(0x422c6c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422c70:{NFSU2_TR(0x422c70);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422c76:{NFSU2_TR(0x422c76);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422c79:{NFSU2_TR(0x422c79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B422c7b:{NFSU2_TR(0x422c7b);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422c7e:{NFSU2_TR(0x422c7e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B422c80:{NFSU2_TR(0x422c80);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B422c84:{NFSU2_TR(0x422c84);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B422c86:{NFSU2_TR(0x422c86);
{u32 ea_=u32(u32(7880008u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422c8c:{NFSU2_TR(0x422c8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422c8e:{NFSU2_TR(0x422c8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422c91:{NFSU2_TR(0x422c91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422ece;}}
}
B422c97:L422c97:{c.instructions+=4;NFSU2_TR(0x422c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422c9d:{NFSU2_TR(0x422c9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422c9e:{NFSU2_TR(0x422c9e);
__builtin_memmove((R+4),(R+28),4);
}
B422ca0:{NFSU2_TR(0x422ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422ca5ull));
TAIL_STATIC(0x5d8bb0u,5d8);
}
B422ca5:L422ca5:{c.instructions+=2;NFSU2_TR(0x422ca5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422ca7:{NFSU2_TR(0x422ca7);
if(r1(R+518)){{goto L422ece;}}
}
B422cad:L422cad:{c.instructions+=58;NFSU2_TR(0x422cad);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B422cb1:{NFSU2_TR(0x422cb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B422cb5:{NFSU2_TR(0x422cb5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B422cb9:{NFSU2_TR(0x422cb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B422cbc:{NFSU2_TR(0x422cbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422cc0:{NFSU2_TR(0x422cc0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B422cc4:{NFSU2_TR(0x422cc4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422cc8:{NFSU2_TR(0x422cc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B422ccb:{NFSU2_TR(0x422ccb);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422cd1:{NFSU2_TR(0x422cd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422cd5:{NFSU2_TR(0x422cd5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B422cd9:{NFSU2_TR(0x422cd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B422cdc:{NFSU2_TR(0x422cdc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B422cde:{NFSU2_TR(0x422cde);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422ce2:{NFSU2_TR(0x422ce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B422cea:{NFSU2_TR(0x422cea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422cee:{NFSU2_TR(0x422cee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422cf2:{NFSU2_TR(0x422cf2);
__builtin_memmove((R+8),gp(0x783d3c),4);
}
B422cf8:{NFSU2_TR(0x422cf8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422cf9:{NFSU2_TR(0x422cf9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422cff:{NFSU2_TR(0x422cff);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B422d03:{NFSU2_TR(0x422d03);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422d07:{NFSU2_TR(0x422d07);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422d0b:{NFSU2_TR(0x422d0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422d0f:{NFSU2_TR(0x422d0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B422d13:{NFSU2_TR(0x422d13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422d14:{NFSU2_TR(0x422d14);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422d1a:{NFSU2_TR(0x422d1a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422d1e:{NFSU2_TR(0x422d1e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422d22:{NFSU2_TR(0x422d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422d26:{NFSU2_TR(0x422d26);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B422d2a:{NFSU2_TR(0x422d2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422d2b:{NFSU2_TR(0x422d2b);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422d31:{NFSU2_TR(0x422d31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422d32:{NFSU2_TR(0x422d32);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B422d34:{NFSU2_TR(0x422d34);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422d38:{NFSU2_TR(0x422d38);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422d3e:{NFSU2_TR(0x422d3e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B422d42:{NFSU2_TR(0x422d42);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422d45:{NFSU2_TR(0x422d45);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422d48:{NFSU2_TR(0x422d48);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B422d4a:{NFSU2_TR(0x422d4a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422d4c:{NFSU2_TR(0x422d4c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422d4e:{NFSU2_TR(0x422d4e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B422d50:{NFSU2_TR(0x422d50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B422d52:{NFSU2_TR(0x422d52);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422d56:{NFSU2_TR(0x422d56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422d58:{NFSU2_TR(0x422d58);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B422d5a:{NFSU2_TR(0x422d5a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422d5c:{NFSU2_TR(0x422d5c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422d5e:{NFSU2_TR(0x422d5e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422d62:{NFSU2_TR(0x422d62);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422d65:{NFSU2_TR(0x422d65);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422d68:{NFSU2_TR(0x422d68);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B422d6a:{NFSU2_TR(0x422d6a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B422d6c:{NFSU2_TR(0x422d6c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422d70:{NFSU2_TR(0x422d70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422d72:{NFSU2_TR(0x422d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422d77ull));
TAIL_STATIC(0x43d410u,43d);
}
B422d77:L422d77:{c.instructions+=3;NFSU2_TR(0x422d77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B422d7a:{NFSU2_TR(0x422d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422d7c:{NFSU2_TR(0x422d7c);
if(r1(R+518)){{goto L422ece;}}
}
B422d82:L422d82:{c.instructions+=11;NFSU2_TR(0x422d82);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B422d86:{NFSU2_TR(0x422d86);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B422d89:{NFSU2_TR(0x422d89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422d8d:{NFSU2_TR(0x422d8d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B422d91:{NFSU2_TR(0x422d91);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422d97:{NFSU2_TR(0x422d97);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422d9a:{NFSU2_TR(0x422d9a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B422d9c:{NFSU2_TR(0x422d9c);
{u32 ea_=u32(u32(7880004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422da2:{NFSU2_TR(0x422da2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422da4:{NFSU2_TR(0x422da4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422da7:{NFSU2_TR(0x422da7);
if(r1(R+514)){{goto L422ece;}}
}
B422dad:L422dad:{c.instructions+=3;NFSU2_TR(0x422dad);
__builtin_memmove((R+4),gp(0x81cbb8),4);
}
B422db3:{NFSU2_TR(0x422db3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422db4:{NFSU2_TR(0x422db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422db9ull));
TAIL_STATIC(0x440e50u,440);
}
B422db9:L422db9:{c.instructions+=4;NFSU2_TR(0x422db9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B422dbb:{NFSU2_TR(0x422dbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B422dbe:{NFSU2_TR(0x422dbe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422dc0:{NFSU2_TR(0x422dc0);
if(r1(R+518)){{goto L422deb;}}
}
B422dc2:L422dc2:{c.instructions+=9;NFSU2_TR(0x422dc2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B422dc4:{NFSU2_TR(0x422dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422dc7:{NFSU2_TR(0x422dc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422dcd:{NFSU2_TR(0x422dcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422dd3:{NFSU2_TR(0x422dd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422dd9:{NFSU2_TR(0x422dd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422ddf:{NFSU2_TR(0x422ddf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B422de5:{NFSU2_TR(0x422de5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422de9:{NFSU2_TR(0x422de9);
{goto L422def;}
}
B422deb:L422deb:{c.instructions+=1;NFSU2_TR(0x422deb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422def:L422def:{c.instructions+=3;NFSU2_TR(0x422def);
__builtin_memmove((R+8),gp(0x81cbb8),4);
}
B422df5:{NFSU2_TR(0x422df5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422df6:{NFSU2_TR(0x422df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422dfbull));
TAIL_STATIC(0x440e50u,440);
}
B422dfb:L422dfb:{c.instructions+=3;NFSU2_TR(0x422dfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B422dfe:{NFSU2_TR(0x422dfe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422e00:{NFSU2_TR(0x422e00);
if(r1(R+518)){{goto L422e2c;}}
}
B422e02:L422e02:{c.instructions+=8;NFSU2_TR(0x422e02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B422e04:{NFSU2_TR(0x422e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422e07:{NFSU2_TR(0x422e07);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422e0e:{NFSU2_TR(0x422e0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422e15:{NFSU2_TR(0x422e15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422e1c:{NFSU2_TR(0x422e1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbbull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422e23:{NFSU2_TR(0x422e23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422e2a:{NFSU2_TR(0x422e2a);
__builtin_memmove((R+12),(R+0),4);
}
B422e2c:L422e2c:{c.instructions+=5;NFSU2_TR(0x422e2c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422e30:{NFSU2_TR(0x422e30);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422e36:{NFSU2_TR(0x422e36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422e38:{NFSU2_TR(0x422e38);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422e3b:{NFSU2_TR(0x422e3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422e41;}}
}
B422e3d:L422e3d:{c.instructions+=2;NFSU2_TR(0x422e3d);
w1(R+0,u8(0x1ull));
}
B422e3f:{NFSU2_TR(0x422e3f);
{goto L422e43;}
}
B422e41:L422e41:{c.instructions+=1;NFSU2_TR(0x422e41);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B422e43:L422e43:{c.instructions+=8;NFSU2_TR(0x422e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422e49:{NFSU2_TR(0x422e49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e4a:{NFSU2_TR(0x422e4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B422e4d:{NFSU2_TR(0x422e4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e4e:{NFSU2_TR(0x422e4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422e52:{NFSU2_TR(0x422e52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e53:{NFSU2_TR(0x422e53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e54:{NFSU2_TR(0x422e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422e59ull));
TAIL_STATIC(0x4201d0u,420);
}
B422e59:L422e59:{c.instructions+=5;NFSU2_TR(0x422e59);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422e5d:{NFSU2_TR(0x422e5d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422e63:{NFSU2_TR(0x422e63);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422e65:{NFSU2_TR(0x422e65);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422e68:{NFSU2_TR(0x422e68);
if(r1(R+514)){{goto L422e6e;}}
}
B422e6a:L422e6a:{c.instructions+=2;NFSU2_TR(0x422e6a);
w1(R+4,u8(0x1ull));
}
B422e6c:{NFSU2_TR(0x422e6c);
{goto L422e70;}
}
B422e6e:L422e6e:{c.instructions+=1;NFSU2_TR(0x422e6e);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B422e70:L422e70:{c.instructions+=8;NFSU2_TR(0x422e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422e76:{NFSU2_TR(0x422e76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e77:{NFSU2_TR(0x422e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B422e7a:{NFSU2_TR(0x422e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e7b:{NFSU2_TR(0x422e7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e7c:{NFSU2_TR(0x422e7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e7d:{NFSU2_TR(0x422e7d);
__builtin_memmove((R+4),(R+12),4);
}
B422e7f:{NFSU2_TR(0x422e7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422e84ull));
TAIL_STATIC(0x4201d0u,420);
}
B422e84:L422e84:{c.instructions+=4;NFSU2_TR(0x422e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422e8a:{NFSU2_TR(0x422e8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e8b:{NFSU2_TR(0x422e8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422e8f:{NFSU2_TR(0x422e8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422e94ull));
TAIL_STATIC(0x420270u,420);
}
B422e94:L422e94:{c.instructions+=4;NFSU2_TR(0x422e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422e9a:{NFSU2_TR(0x422e9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422e9b:{NFSU2_TR(0x422e9b);
__builtin_memmove((R+4),(R+12),4);
}
B422e9d:{NFSU2_TR(0x422e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422ea2ull));
TAIL_STATIC(0x420270u,420);
}
B422ea2:L422ea2:{c.instructions+=10;NFSU2_TR(0x422ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422ea8:{NFSU2_TR(0x422ea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422eac:{NFSU2_TR(0x422eac);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B422eb0:{NFSU2_TR(0x422eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422eb6:{NFSU2_TR(0x422eb6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B422eb7:{NFSU2_TR(0x422eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422ebd:{NFSU2_TR(0x422ebd);
__builtin_memmove((R+0),(R+4),4);
}
B422ebf:{NFSU2_TR(0x422ebf);
u8 U[16];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B422ec3:{NFSU2_TR(0x422ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B422ec9:{NFSU2_TR(0x422ec9);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B422ece:L422ece:{c.instructions+=15;NFSU2_TR(0x422ece);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422ed0:{NFSU2_TR(0x422ed0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B422ed3:{NFSU2_TR(0x422ed3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422ed5:{NFSU2_TR(0x422ed5);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422ed8:{NFSU2_TR(0x422ed8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B422edb:{NFSU2_TR(0x422edb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B422edd:{NFSU2_TR(0x422edd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B422edf:{NFSU2_TR(0x422edf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B422ee1:{NFSU2_TR(0x422ee1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B422ee3:{NFSU2_TR(0x422ee3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B422ee5:{NFSU2_TR(0x422ee5);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B422ee7:{NFSU2_TR(0x422ee7);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B422ee9:{NFSU2_TR(0x422ee9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422eeb:{NFSU2_TR(0x422eeb);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B422ef1:{NFSU2_TR(0x422ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422ef6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B422ef6:L422ef6:{c.instructions+=2;NFSU2_TR(0x422ef6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B422ef9:{NFSU2_TR(0x422ef9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L422f00;}}
}
B422efb:L422efb:{c.instructions+=1;NFSU2_TR(0x422efb);
w4(R+0,u32(0x1ull));
}
B422f00:L422f00:{c.instructions+=7;NFSU2_TR(0x422f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422f04:{NFSU2_TR(0x422f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B422f08:{NFSU2_TR(0x422f08);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B422f0a:{NFSU2_TR(0x422f0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B422f0e:{NFSU2_TR(0x422f0e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B422f10:{NFSU2_TR(0x422f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422f14:{NFSU2_TR(0x422f14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422c24u);}goto L422c24;}}
}
B422f1a:L422f1a:{c.instructions+=3;NFSU2_TR(0x422f1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422f1e:{NFSU2_TR(0x422f1e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422f1f:{NFSU2_TR(0x422f1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422f24ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B422f24:L422f24:{c.instructions+=6;NFSU2_TR(0x422f24);
{u32 ea_=u32(u32(8551100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422f2a:{NFSU2_TR(0x422f2a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B422f2c:{NFSU2_TR(0x422f2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B422f2f:{NFSU2_TR(0x422f2f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422f31:{NFSU2_TR(0x422f31);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422f34:{NFSU2_TR(0x422f34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L422f3e;}}
}
B422f36:L422f36:{c.instructions+=2;NFSU2_TR(0x422f36);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B422f38:{NFSU2_TR(0x422f38);
{u32 ea_=u32(u32(8551100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B422f3e:L422f3e:{c.instructions+=8;NFSU2_TR(0x422f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422f41:{NFSU2_TR(0x422f41);
{u32 ea_=u32(u32(8551100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B422f47:{NFSU2_TR(0x422f47);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B422f48:{NFSU2_TR(0x422f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422f4b:{NFSU2_TR(0x422f4b);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B422f50:{NFSU2_TR(0x422f50);
__builtin_memmove((R+8),(R+4),4);
}
B422f52:{NFSU2_TR(0x422f52);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B422f54:{NFSU2_TR(0x422f54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x422bb2u);}goto L422bb2;}}
}
B422f5a:L422f5a:{c.instructions+=3;NFSU2_TR(0x422f5a);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B422f5f:{NFSU2_TR(0x422f5f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
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
B422f62:{NFSU2_TR(0x422f62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L422f7d;}}
}
B422f64:L422f64:{c.instructions+=2;NFSU2_TR(0x422f64);
__builtin_memmove((R+4),(R+24),4);
}
B422f66:{NFSU2_TR(0x422f66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422f6bull));
TAIL_STATIC(0x40c4d0u,40c);
}
B422f6b:L422f6b:{c.instructions+=3;NFSU2_TR(0x422f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B422f71:{NFSU2_TR(0x422f71);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B422f77:{NFSU2_TR(0x422f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422f7d:L422f7d:{c.instructions+=6;NFSU2_TR(0x422f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B422f7e:{NFSU2_TR(0x422f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B422f7f:{NFSU2_TR(0x422f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B422f80:{NFSU2_TR(0x422f80);
__builtin_memmove((R+16),(R+20),4);
}
B422f82:{NFSU2_TR(0x422f82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B422f83:{NFSU2_TR(0x422f83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B422f90:L422f90:{c.instructions+=4;NFSU2_TR(0x422f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B422f93:{NFSU2_TR(0x422f93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422f94:{NFSU2_TR(0x422f94);
__builtin_memmove((R+24),(R+4),4);
}
B422f96:{NFSU2_TR(0x422f96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422f9bull));
TAIL_STATIC(0x43bdf0u,43b);
}
B422f9b:L422f9b:{c.instructions+=3;NFSU2_TR(0x422f9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422fa1:{NFSU2_TR(0x422fa1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B422fa3:{NFSU2_TR(0x422fa3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4232f4u,423);}
}
B422fa9:L422fa9:{c.instructions+=7;NFSU2_TR(0x422fa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422faa:{NFSU2_TR(0x422faa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422fab:{NFSU2_TR(0x422fab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422fac:{NFSU2_TR(0x422fac);
__builtin_memmove((R+16),(R+16),4);
}
B422fb0:{NFSU2_TR(0x422fb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B422fb6:{NFSU2_TR(0x422fb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B422fb8:{NFSU2_TR(0x422fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4232f1u,423);}
}
B422fbe:L422fbe:{c.instructions+=3;NFSU2_TR(0x422fbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422fc2:{NFSU2_TR(0x422fc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B422fc3:{NFSU2_TR(0x422fc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422fc8ull));
TAIL_STATIC(0x43e5c0u,43e);
}
B422fc8:L422fc8:{c.instructions+=6;NFSU2_TR(0x422fc8);
{u32 ea_=u32(u32(7880020u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B422fce:{NFSU2_TR(0x422fce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B422fd1:{NFSU2_TR(0x422fd1);
{u32 ea_=u32(u32(7880012u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B422fd7:{NFSU2_TR(0x422fd7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B422fd9:{NFSU2_TR(0x422fd9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B422fdc:{NFSU2_TR(0x422fdc);
if(r1(R+514)){TAIL_STATIC(0x4232f1u,423);}
}
B422fe2:L422fe2:{c.instructions+=1;NFSU2_TR(0x422fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x422fe7ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B422fe7:L422fe7:{c.instructions+=5;NFSU2_TR(0x422fe7);
__builtin_memmove((R+4),gp(0x827ac8),4);
}
B422fed:{NFSU2_TR(0x422fed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B422ff1:{NFSU2_TR(0x422ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B422ff7:{NFSU2_TR(0x422ff7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B422ff9:{NFSU2_TR(0x422ff9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L422ffd;}}
}
B422ffb:L422ffb:{c.instructions+=1;NFSU2_TR(0x422ffb);
__builtin_memmove((R+4),(R+0),4);
}
B422ffd:L422ffd:{c.instructions+=1;NFSU2_TR(0x422ffd);
__builtin_memmove((R+8),gp(0x827ac4),4);
TAIL_STATIC(0x423003u,423);
}
XIT:NFSU2_TR_EXIT(0x422,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
