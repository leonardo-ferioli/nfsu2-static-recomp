#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_612(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_635(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x634,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x634,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_634(u8* __restrict R,Cpu& c);
u32 page_634(Cpu& c){return body_634(c.regs.data(),c);}
__attribute__((noinline)) u32 body_634(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x634005:goto L634005;
case 0x634006:c.instructions+=2;goto B634006;
case 0x634007:c.instructions+=1;goto B634007;
case 0x63400c:goto L63400c;
case 0x63400f:c.instructions+=3;goto B63400f;
case 0x634012:c.instructions+=2;goto B634012;
case 0x634014:c.instructions+=1;goto B634014;
case 0x634016:goto L634016;
case 0x63401b:goto L63401b;
case 0x63401d:c.instructions+=6;goto B63401d;
case 0x634020:c.instructions+=5;goto B634020;
case 0x634022:c.instructions+=4;goto B634022;
case 0x634023:c.instructions+=3;goto B634023;
case 0x634026:c.instructions+=2;goto B634026;
case 0x634027:c.instructions+=1;goto B634027;
case 0x634030:goto L634030;
case 0x634033:c.instructions+=11;goto B634033;
case 0x634037:c.instructions+=10;goto B634037;
case 0x634038:c.instructions+=9;goto B634038;
case 0x63403c:c.instructions+=8;goto B63403c;
case 0x63403d:c.instructions+=7;goto B63403d;
case 0x63403e:c.instructions+=6;goto B63403e;
case 0x634042:c.instructions+=5;goto B634042;
case 0x634044:c.instructions+=4;goto B634044;
case 0x634049:c.instructions+=3;goto B634049;
case 0x63404d:c.instructions+=2;goto B63404d;
case 0x634055:c.instructions+=1;goto B634055;
case 0x634056:goto L634056;
case 0x63405a:c.instructions+=2;goto B63405a;
case 0x63405d:c.instructions+=1;goto B63405d;
case 0x63405f:goto L63405f;
case 0x634063:c.instructions+=3;goto B634063;
case 0x634064:c.instructions+=2;goto B634064;
case 0x634065:c.instructions+=1;goto B634065;
case 0x63406a:goto L63406a;
case 0x63406c:c.instructions+=4;goto B63406c;
case 0x634070:c.instructions+=3;goto B634070;
case 0x634071:c.instructions+=2;goto B634071;
case 0x634072:c.instructions+=1;goto B634072;
case 0x634077:goto L634077;
case 0x63407a:c.instructions+=3;goto B63407a;
case 0x63407c:c.instructions+=2;goto B63407c;
case 0x63407e:c.instructions+=1;goto B63407e;
case 0x634080:goto L634080;
case 0x634082:c.instructions+=1;goto B634082;
case 0x634084:goto L634084;
case 0x634087:c.instructions+=1;goto B634087;
case 0x634089:goto L634089;
case 0x63408a:c.instructions+=2;goto B63408a;
case 0x63408c:c.instructions+=1;goto B63408c;
case 0x63408e:goto L63408e;
case 0x634092:c.instructions+=1;goto B634092;
case 0x634094:goto L634094;
case 0x634096:c.instructions+=1;goto B634096;
case 0x634098:goto L634098;
case 0x63409a:c.instructions+=1;goto B63409a;
case 0x63409c:goto L63409c;
case 0x63409f:c.instructions+=1;goto B63409f;
case 0x6340a4:goto L6340a4;
case 0x6340a6:c.instructions+=2;goto B6340a6;
case 0x6340a8:c.instructions+=1;goto B6340a8;
case 0x6340aa:goto L6340aa;
case 0x6340ac:c.instructions+=1;goto B6340ac;
case 0x6340ae:goto L6340ae;
case 0x6340b0:c.instructions+=2;goto B6340b0;
case 0x6340b2:c.instructions+=1;goto B6340b2;
case 0x6340b4:goto L6340b4;
case 0x6340b7:c.instructions+=1;goto B6340b7;
case 0x6340b9:goto L6340b9;
case 0x6340ba:c.instructions+=2;goto B6340ba;
case 0x6340bc:c.instructions+=1;goto B6340bc;
case 0x6340be:goto L6340be;
case 0x6340c2:c.instructions+=1;goto B6340c2;
case 0x6340c4:goto L6340c4;
case 0x6340c6:c.instructions+=1;goto B6340c6;
case 0x6340c8:goto L6340c8;
case 0x6340cb:c.instructions+=1;goto B6340cb;
case 0x6340d0:goto L6340d0;
case 0x6340d2:goto L6340d2;
case 0x6340d6:c.instructions+=7;goto B6340d6;
case 0x6340da:c.instructions+=6;goto B6340da;
case 0x6340dd:c.instructions+=5;goto B6340dd;
case 0x6340de:c.instructions+=4;goto B6340de;
case 0x6340df:c.instructions+=3;goto B6340df;
case 0x6340e3:c.instructions+=2;goto B6340e3;
case 0x6340e7:c.instructions+=1;goto B6340e7;
case 0x6340ed:goto L6340ed;
case 0x6340f1:c.instructions+=2;goto B6340f1;
case 0x6340f2:c.instructions+=1;goto B6340f2;
case 0x6340f7:goto L6340f7;
case 0x6340f8:c.instructions+=2;goto B6340f8;
case 0x6340fa:c.instructions+=1;goto B6340fa;
case 0x6340ff:goto L6340ff;
case 0x634102:c.instructions+=2;goto B634102;
case 0x634104:c.instructions+=1;goto B634104;
case 0x634106:goto L634106;
case 0x634108:c.instructions+=1;goto B634108;
case 0x63410a:goto L63410a;
case 0x63410c:c.instructions+=2;goto B63410c;
case 0x63410e:c.instructions+=1;goto B63410e;
case 0x634110:goto L634110;
case 0x634113:c.instructions+=1;goto B634113;
case 0x634115:goto L634115;
case 0x634116:c.instructions+=2;goto B634116;
case 0x634118:c.instructions+=1;goto B634118;
case 0x63411a:goto L63411a;
case 0x63411e:c.instructions+=2;goto B63411e;
case 0x634120:c.instructions+=1;goto B634120;
case 0x634122:goto L634122;
case 0x634124:c.instructions+=1;goto B634124;
case 0x634126:goto L634126;
case 0x63412a:c.instructions+=2;goto B63412a;
case 0x63412c:c.instructions+=1;goto B63412c;
case 0x63412e:goto L63412e;
case 0x634131:c.instructions+=1;goto B634131;
case 0x634136:goto L634136;
case 0x634138:c.instructions+=3;goto B634138;
case 0x63413a:c.instructions+=2;goto B63413a;
case 0x63413c:c.instructions+=1;goto B63413c;
case 0x63413e:goto L63413e;
case 0x634140:goto L634140;
case 0x634143:c.instructions+=1;goto B634143;
case 0x634145:goto L634145;
case 0x634146:c.instructions+=2;goto B634146;
case 0x634148:c.instructions+=1;goto B634148;
case 0x63414a:goto L63414a;
case 0x63414c:c.instructions+=1;goto B63414c;
case 0x63414e:goto L63414e;
case 0x634150:c.instructions+=2;goto B634150;
case 0x634152:c.instructions+=1;goto B634152;
case 0x634154:goto L634154;
case 0x634156:c.instructions+=2;goto B634156;
case 0x634158:c.instructions+=1;goto B634158;
case 0x63415a:goto L63415a;
case 0x63415d:c.instructions+=3;goto B63415d;
case 0x634162:c.instructions+=2;goto B634162;
case 0x634164:c.instructions+=1;goto B634164;
case 0x634166:goto L634166;
case 0x63416a:goto L63416a;
case 0x63416e:c.instructions+=3;goto B63416e;
case 0x634174:c.instructions+=2;goto B634174;
case 0x634176:c.instructions+=1;goto B634176;
case 0x634178:goto L634178;
case 0x63417a:c.instructions+=1;goto B63417a;
case 0x63417c:goto L63417c;
case 0x634181:goto L634181;
case 0x634182:c.instructions+=2;goto B634182;
case 0x634187:c.instructions+=1;goto B634187;
case 0x63418c:goto L63418c;
case 0x63418f:c.instructions+=1;goto B63418f;
case 0x634191:goto L634191;
case 0x634195:c.instructions+=3;goto B634195;
case 0x63419b:c.instructions+=2;goto B63419b;
case 0x63419d:c.instructions+=1;goto B63419d;
case 0x63419f:goto L63419f;
case 0x6341a1:c.instructions+=1;goto B6341a1;
case 0x6341a3:goto L6341a3;
case 0x6341a8:goto L6341a8;
case 0x6341a9:c.instructions+=2;goto B6341a9;
case 0x6341ae:c.instructions+=1;goto B6341ae;
case 0x6341b3:goto L6341b3;
case 0x6341b6:goto L6341b6;
case 0x6341b8:c.instructions+=1;goto B6341b8;
case 0x6341ba:goto L6341ba;
case 0x6341bc:c.instructions+=1;goto B6341bc;
case 0x6341be:goto L6341be;
case 0x6341c0:c.instructions+=2;goto B6341c0;
case 0x6341c2:c.instructions+=1;goto B6341c2;
case 0x6341c4:goto L6341c4;
case 0x6341c7:c.instructions+=1;goto B6341c7;
case 0x6341c9:goto L6341c9;
case 0x6341ca:c.instructions+=2;goto B6341ca;
case 0x6341cc:c.instructions+=1;goto B6341cc;
case 0x6341ce:goto L6341ce;
case 0x6341d0:c.instructions+=1;goto B6341d0;
case 0x6341d2:goto L6341d2;
case 0x6341d4:c.instructions+=1;goto B6341d4;
case 0x6341d6:goto L6341d6;
case 0x6341d8:c.instructions+=1;goto B6341d8;
case 0x6341da:goto L6341da;
case 0x6341dd:c.instructions+=1;goto B6341dd;
case 0x6341e2:goto L6341e2;
case 0x6341e4:c.instructions+=3;goto B6341e4;
case 0x6341e6:c.instructions+=2;goto B6341e6;
case 0x6341e8:c.instructions+=1;goto B6341e8;
case 0x6341ea:goto L6341ea;
case 0x6341f0:goto L6341f0;
case 0x6341f3:c.instructions+=1;goto B6341f3;
case 0x6341f5:goto L6341f5;
case 0x6341f6:c.instructions+=2;goto B6341f6;
case 0x6341f8:c.instructions+=1;goto B6341f8;
case 0x6341fa:goto L6341fa;
case 0x6341fc:c.instructions+=1;goto B6341fc;
case 0x6341fe:goto L6341fe;
case 0x634200:c.instructions+=1;goto B634200;
case 0x634202:goto L634202;
case 0x634204:c.instructions+=1;goto B634204;
case 0x634206:goto L634206;
case 0x634209:c.instructions+=1;goto B634209;
case 0x63420e:goto L63420e;
case 0x634210:goto L634210;
case 0x634214:c.instructions+=3;goto B634214;
case 0x63421a:c.instructions+=2;goto B63421a;
case 0x63421c:c.instructions+=1;goto B63421c;
case 0x63421e:goto L63421e;
case 0x634220:c.instructions+=1;goto B634220;
case 0x634222:goto L634222;
case 0x634227:c.instructions+=1;goto B634227;
case 0x63422c:goto L63422c;
case 0x634230:c.instructions+=3;goto B634230;
case 0x634233:c.instructions+=2;goto B634233;
case 0x634238:c.instructions+=1;goto B634238;
case 0x63423a:goto L63423a;
case 0x634240:c.instructions+=7;goto B634240;
case 0x634243:c.instructions+=6;goto B634243;
case 0x634246:c.instructions+=5;goto B634246;
case 0x63424a:c.instructions+=4;goto B63424a;
case 0x63424d:c.instructions+=3;goto B63424d;
case 0x63424f:c.instructions+=2;goto B63424f;
case 0x634251:c.instructions+=1;goto B634251;
case 0x634253:goto L634253;
case 0x634256:c.instructions+=2;goto B634256;
case 0x634259:c.instructions+=1;goto B634259;
case 0x634260:goto L634260;
case 0x634262:c.instructions+=3;goto B634262;
case 0x634265:c.instructions+=2;goto B634265;
case 0x634269:c.instructions+=1;goto B634269;
case 0x63426b:goto L63426b;
case 0x63426d:c.instructions+=1;goto B63426d;
case 0x63426f:goto L63426f;
case 0x634270:c.instructions+=3;goto B634270;
case 0x634273:c.instructions+=2;goto B634273;
case 0x634275:c.instructions+=1;goto B634275;
case 0x634277:goto L634277;
case 0x634279:goto L634279;
case 0x63427d:c.instructions+=1;goto B63427d;
case 0x63427f:goto L63427f;
case 0x634283:c.instructions+=4;goto B634283;
case 0x634289:c.instructions+=3;goto B634289;
case 0x63428b:c.instructions+=2;goto B63428b;
case 0x63428f:c.instructions+=1;goto B63428f;
case 0x634291:goto L634291;
case 0x634293:c.instructions+=1;goto B634293;
case 0x634298:goto L634298;
case 0x63429a:c.instructions+=1;goto B63429a;
case 0x63429c:goto L63429c;
case 0x63429f:c.instructions+=1;goto B63429f;
case 0x6342a1:goto L6342a1;
case 0x6342a6:c.instructions+=1;goto B6342a6;
case 0x6342ab:goto L6342ab;
case 0x6342af:c.instructions+=3;goto B6342af;
case 0x6342b2:c.instructions+=2;goto B6342b2;
case 0x6342b7:c.instructions+=1;goto B6342b7;
case 0x6342b9:goto L6342b9;
case 0x6342bf:c.instructions+=7;goto B6342bf;
case 0x6342c2:c.instructions+=6;goto B6342c2;
case 0x6342c5:c.instructions+=5;goto B6342c5;
case 0x6342c9:c.instructions+=4;goto B6342c9;
case 0x6342cc:c.instructions+=3;goto B6342cc;
case 0x6342ce:c.instructions+=2;goto B6342ce;
case 0x6342d0:c.instructions+=1;goto B6342d0;
case 0x6342d2:goto L6342d2;
case 0x6342d5:c.instructions+=2;goto B6342d5;
case 0x6342d8:c.instructions+=1;goto B6342d8;
case 0x6342e0:goto L6342e0;
case 0x6342e2:c.instructions+=3;goto B6342e2;
case 0x6342e5:c.instructions+=2;goto B6342e5;
case 0x6342e9:c.instructions+=1;goto B6342e9;
case 0x6342eb:goto L6342eb;
case 0x6342ed:c.instructions+=1;goto B6342ed;
case 0x6342ef:goto L6342ef;
case 0x6342f0:c.instructions+=3;goto B6342f0;
case 0x6342f3:c.instructions+=2;goto B6342f3;
case 0x6342f5:c.instructions+=1;goto B6342f5;
case 0x6342f7:goto L6342f7;
case 0x6342fb:goto L6342fb;
case 0x6342fd:goto L6342fd;
case 0x6342ff:c.instructions+=1;goto B6342ff;
case 0x634301:goto L634301;
case 0x634303:c.instructions+=1;goto B634303;
case 0x634305:goto L634305;
case 0x634307:c.instructions+=1;goto B634307;
case 0x634309:goto L634309;
case 0x63430c:c.instructions+=2;goto B63430c;
case 0x634310:c.instructions+=1;goto B634310;
case 0x634312:goto L634312;
case 0x634313:c.instructions+=2;goto B634313;
case 0x634318:c.instructions+=1;goto B634318;
case 0x63431d:goto L63431d;
case 0x634320:goto L634320;
case 0x634324:goto L634324;
case 0x634326:c.instructions+=2;goto B634326;
case 0x634327:c.instructions+=1;goto B634327;
case 0x634329:goto L634329;
case 0x63432b:c.instructions+=1;goto B63432b;
case 0x63432d:goto L63432d;
case 0x63432f:c.instructions+=2;goto B63432f;
case 0x634331:c.instructions+=1;goto B634331;
case 0x634333:goto L634333;
case 0x634336:c.instructions+=1;goto B634336;
case 0x634338:goto L634338;
case 0x634339:c.instructions+=2;goto B634339;
case 0x63433b:c.instructions+=1;goto B63433b;
case 0x63433d:goto L63433d;
case 0x634341:c.instructions+=1;goto B634341;
case 0x634343:goto L634343;
case 0x634345:c.instructions+=1;goto B634345;
case 0x634347:goto L634347;
case 0x634349:c.instructions+=1;goto B634349;
case 0x63434b:goto L63434b;
case 0x63434e:c.instructions+=1;goto B63434e;
case 0x634353:goto L634353;
case 0x634355:c.instructions+=3;goto B634355;
case 0x634357:c.instructions+=2;goto B634357;
case 0x634359:c.instructions+=1;goto B634359;
case 0x63435b:goto L63435b;
case 0x634360:goto L634360;
case 0x634363:c.instructions+=1;goto B634363;
case 0x634365:goto L634365;
case 0x634366:c.instructions+=2;goto B634366;
case 0x634368:c.instructions+=1;goto B634368;
case 0x63436a:goto L63436a;
case 0x63436e:c.instructions+=1;goto B63436e;
case 0x634370:goto L634370;
case 0x634372:c.instructions+=7;goto B634372;
case 0x634374:c.instructions+=6;goto B634374;
case 0x634376:c.instructions+=5;goto B634376;
case 0x634377:c.instructions+=4;goto B634377;
case 0x634378:c.instructions+=3;goto B634378;
case 0x634379:c.instructions+=2;goto B634379;
case 0x63437c:c.instructions+=1;goto B63437c;
case 0x63437d:goto L63437d;
case 0x63437f:c.instructions+=7;goto B63437f;
case 0x634381:c.instructions+=6;goto B634381;
case 0x634383:c.instructions+=5;goto B634383;
case 0x634384:c.instructions+=4;goto B634384;
case 0x634385:c.instructions+=3;goto B634385;
case 0x634386:c.instructions+=2;goto B634386;
case 0x634389:c.instructions+=1;goto B634389;
case 0x63438a:goto L63438a;
case 0x63438d:c.instructions+=2;goto B63438d;
case 0x634392:c.instructions+=1;goto B634392;
case 0x634394:goto L634394;
case 0x634396:c.instructions+=5;goto B634396;
case 0x634397:c.instructions+=4;goto B634397;
case 0x634398:c.instructions+=3;goto B634398;
case 0x634399:c.instructions+=2;goto B634399;
case 0x63439c:c.instructions+=1;goto B63439c;
case 0x6343a0:goto L6343a0;
case 0x6343a1:c.instructions+=7;goto B6343a1;
case 0x6343a2:c.instructions+=6;goto B6343a2;
case 0x6343a6:c.instructions+=5;goto B6343a6;
case 0x6343ac:c.instructions+=4;goto B6343ac;
case 0x6343ae:c.instructions+=3;goto B6343ae;
case 0x6343b4:c.instructions+=2;goto B6343b4;
case 0x6343b5:c.instructions+=1;goto B6343b5;
case 0x6343b7:goto L6343b7;
case 0x6343b9:c.instructions+=1;goto B6343b9;
case 0x6343bb:goto L6343bb;
case 0x6343c0:goto L6343c0;
case 0x6343c1:c.instructions+=2;goto B6343c1;
case 0x6343c6:c.instructions+=1;goto B6343c6;
case 0x6343cb:goto L6343cb;
case 0x6343ce:c.instructions+=1;goto B6343ce;
case 0x6343d0:goto L6343d0;
case 0x6343d6:c.instructions+=2;goto B6343d6;
case 0x6343d8:c.instructions+=1;goto B6343d8;
case 0x6343da:goto L6343da;
case 0x6343dc:c.instructions+=6;goto B6343dc;
case 0x6343de:c.instructions+=5;goto B6343de;
case 0x6343df:c.instructions+=4;goto B6343df;
case 0x6343e0:c.instructions+=3;goto B6343e0;
case 0x6343e1:c.instructions+=2;goto B6343e1;
case 0x6343e2:c.instructions+=1;goto B6343e2;
case 0x6343e7:goto L6343e7;
case 0x6343ea:c.instructions+=4;goto B6343ea;
case 0x6343eb:c.instructions+=3;goto B6343eb;
case 0x6343ec:c.instructions+=2;goto B6343ec;
case 0x6343ed:c.instructions+=1;goto B6343ed;
case 0x6343ee:goto L6343ee;
case 0x6343f3:goto L6343f3;
case 0x6343f4:c.instructions+=2;goto B6343f4;
case 0x6343f9:c.instructions+=1;goto B6343f9;
case 0x6343fe:goto L6343fe;
case 0x634401:c.instructions+=6;goto B634401;
case 0x634403:c.instructions+=5;goto B634403;
case 0x634404:c.instructions+=4;goto B634404;
case 0x634405:c.instructions+=3;goto B634405;
case 0x634406:c.instructions+=2;goto B634406;
case 0x634407:c.instructions+=1;goto B634407;
case 0x63440c:goto L63440c;
case 0x63440f:c.instructions+=4;goto B63440f;
case 0x634410:c.instructions+=3;goto B634410;
case 0x634411:c.instructions+=2;goto B634411;
case 0x634412:c.instructions+=1;goto B634412;
case 0x634420:goto L634420;
case 0x634421:c.instructions+=4;goto B634421;
case 0x634423:c.instructions+=3;goto B634423;
case 0x634425:c.instructions+=2;goto B634425;
case 0x634427:c.instructions+=1;goto B634427;
case 0x634429:goto L634429;
case 0x634430:goto L634430;
case 0x634432:c.instructions+=7;goto B634432;
case 0x634435:c.instructions+=6;goto B634435;
case 0x634437:c.instructions+=5;goto B634437;
case 0x634438:c.instructions+=4;goto B634438;
case 0x63443b:c.instructions+=3;goto B63443b;
case 0x634440:c.instructions+=2;goto B634440;
case 0x634441:c.instructions+=1;goto B634441;
case 0x634446:goto L634446;
case 0x634448:c.instructions+=3;goto B634448;
case 0x63444b:c.instructions+=2;goto B63444b;
case 0x63444d:c.instructions+=1;goto B63444d;
case 0x63444f:goto L63444f;
case 0x634450:c.instructions+=1;goto B634450;
case 0x634460:goto L634460;
case 0x634461:c.instructions+=4;goto B634461;
case 0x634463:c.instructions+=3;goto B634463;
case 0x634465:c.instructions+=2;goto B634465;
case 0x634467:c.instructions+=1;goto B634467;
case 0x634469:goto L634469;
case 0x634470:goto L634470;
case 0x634472:c.instructions+=7;goto B634472;
case 0x634475:c.instructions+=6;goto B634475;
case 0x634477:c.instructions+=5;goto B634477;
case 0x634478:c.instructions+=4;goto B634478;
case 0x63447b:c.instructions+=3;goto B63447b;
case 0x634480:c.instructions+=2;goto B634480;
case 0x634481:c.instructions+=1;goto B634481;
case 0x634486:goto L634486;
case 0x634488:c.instructions+=3;goto B634488;
case 0x63448b:c.instructions+=2;goto B63448b;
case 0x63448d:c.instructions+=1;goto B63448d;
case 0x63448f:goto L63448f;
case 0x634490:c.instructions+=1;goto B634490;
case 0x6344a0:goto L6344a0;
case 0x6344a1:c.instructions+=4;goto B6344a1;
case 0x6344a3:c.instructions+=3;goto B6344a3;
case 0x6344a5:c.instructions+=2;goto B6344a5;
case 0x6344a7:c.instructions+=1;goto B6344a7;
case 0x6344a9:goto L6344a9;
case 0x6344b0:goto L6344b0;
case 0x6344b2:c.instructions+=7;goto B6344b2;
case 0x6344b5:c.instructions+=6;goto B6344b5;
case 0x6344b7:c.instructions+=5;goto B6344b7;
case 0x6344b8:c.instructions+=4;goto B6344b8;
case 0x6344bb:c.instructions+=3;goto B6344bb;
case 0x6344c0:c.instructions+=2;goto B6344c0;
case 0x6344c1:c.instructions+=1;goto B6344c1;
case 0x6344c6:goto L6344c6;
case 0x6344c8:c.instructions+=3;goto B6344c8;
case 0x6344cb:c.instructions+=2;goto B6344cb;
case 0x6344cd:c.instructions+=1;goto B6344cd;
case 0x6344cf:goto L6344cf;
case 0x6344d0:c.instructions+=1;goto B6344d0;
case 0x6344e0:goto L6344e0;
case 0x6344e1:c.instructions+=5;goto B6344e1;
case 0x6344e2:c.instructions+=4;goto B6344e2;
case 0x6344e4:c.instructions+=3;goto B6344e4;
case 0x6344e6:c.instructions+=2;goto B6344e6;
case 0x6344e8:c.instructions+=1;goto B6344e8;
case 0x6344ea:goto L6344ea;
case 0x6344f0:goto L6344f0;
case 0x6344f3:c.instructions+=5;goto B6344f3;
case 0x6344f5:c.instructions+=4;goto B6344f5;
case 0x6344f7:c.instructions+=3;goto B6344f7;
case 0x6344fa:c.instructions+=2;goto B6344fa;
case 0x6344fc:c.instructions+=1;goto B6344fc;
case 0x634501:goto L634501;
case 0x634506:c.instructions+=3;goto B634506;
case 0x634507:c.instructions+=2;goto B634507;
case 0x634508:c.instructions+=1;goto B634508;
case 0x63450d:goto L63450d;
case 0x63450f:c.instructions+=3;goto B63450f;
case 0x634512:c.instructions+=2;goto B634512;
case 0x634514:c.instructions+=1;goto B634514;
case 0x634516:goto L634516;
case 0x634517:c.instructions+=2;goto B634517;
case 0x634518:c.instructions+=1;goto B634518;
case 0x634520:goto L634520;
case 0x634522:c.instructions+=11;goto B634522;
case 0x634527:c.instructions+=10;goto B634527;
case 0x63452d:c.instructions+=9;goto B63452d;
case 0x63452e:c.instructions+=8;goto B63452e;
case 0x634535:c.instructions+=7;goto B634535;
case 0x634536:c.instructions+=6;goto B634536;
case 0x634537:c.instructions+=5;goto B634537;
case 0x634538:c.instructions+=4;goto B634538;
case 0x63453a:c.instructions+=3;goto B63453a;
case 0x63453e:c.instructions+=2;goto B63453e;
case 0x634546:c.instructions+=1;goto B634546;
case 0x63454b:goto L63454b;
case 0x634551:c.instructions+=2;goto B634551;
case 0x634553:c.instructions+=1;goto B634553;
case 0x634555:goto L634555;
case 0x634557:c.instructions+=6;goto B634557;
case 0x63455a:c.instructions+=5;goto B63455a;
case 0x63455c:c.instructions+=4;goto B63455c;
case 0x63455f:c.instructions+=3;goto B63455f;
case 0x634569:c.instructions+=2;goto B634569;
case 0x63456f:c.instructions+=1;goto B63456f;
case 0x634571:goto L634571;
case 0x634573:c.instructions+=1;goto B634573;
case 0x634578:goto L634578;
case 0x63457d:c.instructions+=4;goto B63457d;
case 0x63457f:c.instructions+=3;goto B63457f;
case 0x634585:c.instructions+=2;goto B634585;
case 0x634588:c.instructions+=1;goto B634588;
case 0x63458e:goto L63458e;
case 0x634591:c.instructions+=2;goto B634591;
case 0x634599:c.instructions+=1;goto B634599;
case 0x63459e:goto L63459e;
case 0x6345a2:c.instructions+=5;goto B6345a2;
case 0x6345a3:c.instructions+=4;goto B6345a3;
case 0x6345a4:c.instructions+=3;goto B6345a4;
case 0x6345ab:c.instructions+=2;goto B6345ab;
case 0x6345ae:c.instructions+=1;goto B6345ae;
case 0x6345b0:goto L6345b0;
case 0x6345b1:c.instructions+=7;goto B6345b1;
case 0x6345b5:c.instructions+=6;goto B6345b5;
case 0x6345b6:c.instructions+=5;goto B6345b6;
case 0x6345b8:c.instructions+=4;goto B6345b8;
case 0x6345b9:c.instructions+=3;goto B6345b9;
case 0x6345bf:c.instructions+=2;goto B6345bf;
case 0x6345c1:c.instructions+=1;goto B6345c1;
case 0x6345c3:goto L6345c3;
case 0x6345c5:c.instructions+=1;goto B6345c5;
case 0x6345c7:goto L6345c7;
case 0x6345c9:c.instructions+=6;goto B6345c9;
case 0x6345cc:c.instructions+=5;goto B6345cc;
case 0x6345ce:c.instructions+=4;goto B6345ce;
case 0x6345d1:c.instructions+=3;goto B6345d1;
case 0x6345db:c.instructions+=2;goto B6345db;
case 0x6345e1:c.instructions+=1;goto B6345e1;
case 0x6345e3:goto L6345e3;
case 0x6345e5:c.instructions+=1;goto B6345e5;
case 0x6345ea:goto L6345ea;
case 0x6345ef:c.instructions+=4;goto B6345ef;
case 0x6345f1:c.instructions+=3;goto B6345f1;
case 0x6345f7:c.instructions+=2;goto B6345f7;
case 0x6345fa:c.instructions+=1;goto B6345fa;
case 0x634600:goto L634600;
case 0x634602:c.instructions+=1;goto B634602;
case 0x634604:goto L634604;
case 0x634607:c.instructions+=7;goto B634607;
case 0x63460a:c.instructions+=6;goto B63460a;
case 0x63460c:c.instructions+=5;goto B63460c;
case 0x63460f:c.instructions+=4;goto B63460f;
case 0x634611:c.instructions+=3;goto B634611;
case 0x634614:c.instructions+=2;goto B634614;
case 0x63461a:c.instructions+=1;goto B63461a;
case 0x634620:goto L634620;
case 0x634621:c.instructions+=3;goto B634621;
case 0x634622:c.instructions+=2;goto B634622;
case 0x634623:c.instructions+=1;goto B634623;
case 0x634630:goto L634630;
case 0x634632:c.instructions+=15;goto B634632;
case 0x634637:c.instructions+=14;goto B634637;
case 0x63463d:c.instructions+=13;goto B63463d;
case 0x63463e:c.instructions+=12;goto B63463e;
case 0x634645:c.instructions+=11;goto B634645;
case 0x634648:c.instructions+=10;goto B634648;
case 0x634649:c.instructions+=9;goto B634649;
case 0x63464b:c.instructions+=8;goto B63464b;
case 0x63464c:c.instructions+=7;goto B63464c;
case 0x634650:c.instructions+=6;goto B634650;
case 0x634651:c.instructions+=5;goto B634651;
case 0x634659:c.instructions+=4;goto B634659;
case 0x63465f:c.instructions+=3;goto B63465f;
case 0x634667:c.instructions+=2;goto B634667;
case 0x634668:c.instructions+=1;goto B634668;
case 0x634670:goto L634670;
case 0x634675:goto L634675;
case 0x63467a:c.instructions+=1;goto B63467a;
case 0x634680:goto L634680;
case 0x634682:c.instructions+=2;goto B634682;
case 0x634684:c.instructions+=1;goto B634684;
case 0x634686:goto L634686;
case 0x634689:c.instructions+=2;goto B634689;
case 0x63468b:c.instructions+=1;goto B63468b;
case 0x63468d:goto L63468d;
case 0x634692:goto L634692;
case 0x634694:c.instructions+=3;goto B634694;
case 0x63469a:c.instructions+=2;goto B63469a;
case 0x63469b:c.instructions+=1;goto B63469b;
case 0x6346a0:goto L6346a0;
case 0x6346a6:goto L6346a6;
case 0x6346a9:c.instructions+=2;goto B6346a9;
case 0x6346aa:c.instructions+=1;goto B6346aa;
case 0x6346ac:goto L6346ac;
case 0x6346ad:c.instructions+=1;goto B6346ad;
case 0x6346af:goto L6346af;
case 0x6346b3:c.instructions+=1;goto B6346b3;
case 0x6346b5:goto L6346b5;
case 0x6346bb:c.instructions+=4;goto B6346bb;
case 0x6346bd:c.instructions+=3;goto B6346bd;
case 0x6346be:c.instructions+=2;goto B6346be;
case 0x6346bf:c.instructions+=1;goto B6346bf;
case 0x6346c1:goto L6346c1;
case 0x6346c3:c.instructions+=1;goto B6346c3;
case 0x6346c5:goto L6346c5;
case 0x6346c8:c.instructions+=1;goto B6346c8;
case 0x6346cf:goto L6346cf;
case 0x6346d5:c.instructions+=2;goto B6346d5;
case 0x6346d7:c.instructions+=1;goto B6346d7;
case 0x6346d9:goto L6346d9;
case 0x6346db:c.instructions+=1;goto B6346db;
case 0x6346dd:goto L6346dd;
case 0x6346e0:c.instructions+=1;goto B6346e0;
case 0x6346e7:goto L6346e7;
case 0x6346ec:c.instructions+=6;goto B6346ec;
case 0x6346ee:c.instructions+=5;goto B6346ee;
case 0x6346f0:c.instructions+=4;goto B6346f0;
case 0x6346f6:c.instructions+=3;goto B6346f6;
case 0x6346f7:c.instructions+=2;goto B6346f7;
case 0x6346fc:c.instructions+=1;goto B6346fc;
case 0x634701:goto L634701;
case 0x634706:c.instructions+=6;goto B634706;
case 0x634708:c.instructions+=5;goto B634708;
case 0x63470a:c.instructions+=4;goto B63470a;
case 0x634710:c.instructions+=3;goto B634710;
case 0x634711:c.instructions+=2;goto B634711;
case 0x634716:c.instructions+=1;goto B634716;
case 0x63471b:goto L63471b;
case 0x634720:c.instructions+=6;goto B634720;
case 0x634722:c.instructions+=5;goto B634722;
case 0x634724:c.instructions+=4;goto B634724;
case 0x63472a:c.instructions+=3;goto B63472a;
case 0x63472b:c.instructions+=2;goto B63472b;
case 0x634730:c.instructions+=1;goto B634730;
case 0x634735:goto L634735;
case 0x63473a:c.instructions+=6;goto B63473a;
case 0x63473c:c.instructions+=5;goto B63473c;
case 0x63473e:c.instructions+=4;goto B63473e;
case 0x634744:c.instructions+=3;goto B634744;
case 0x634745:c.instructions+=2;goto B634745;
case 0x63474a:c.instructions+=1;goto B63474a;
case 0x63474f:goto L63474f;
case 0x634755:c.instructions+=4;goto B634755;
case 0x63475b:c.instructions+=3;goto B63475b;
case 0x63475d:c.instructions+=2;goto B63475d;
case 0x634762:c.instructions+=1;goto B634762;
case 0x634764:goto L634764;
case 0x634766:c.instructions+=5;goto B634766;
case 0x634769:c.instructions+=4;goto B634769;
case 0x63476b:c.instructions+=3;goto B63476b;
case 0x63476c:c.instructions+=2;goto B63476c;
case 0x63476f:c.instructions+=1;goto B63476f;
case 0x634774:goto L634774;
case 0x634776:c.instructions+=3;goto B634776;
case 0x634779:c.instructions+=2;goto B634779;
case 0x63477b:c.instructions+=1;goto B63477b;
case 0x63477d:goto L63477d;
case 0x634782:c.instructions+=6;goto B634782;
case 0x634784:c.instructions+=5;goto B634784;
case 0x634786:c.instructions+=4;goto B634786;
case 0x63478c:c.instructions+=3;goto B63478c;
case 0x63478d:c.instructions+=2;goto B63478d;
case 0x634792:c.instructions+=1;goto B634792;
case 0x634797:goto L634797;
case 0x63479c:c.instructions+=6;goto B63479c;
case 0x63479e:c.instructions+=5;goto B63479e;
case 0x6347a0:c.instructions+=4;goto B6347a0;
case 0x6347a6:c.instructions+=3;goto B6347a6;
case 0x6347a7:c.instructions+=2;goto B6347a7;
case 0x6347ac:c.instructions+=1;goto B6347ac;
case 0x6347b1:goto L6347b1;
case 0x6347b7:c.instructions+=4;goto B6347b7;
case 0x6347bd:c.instructions+=3;goto B6347bd;
case 0x6347bf:c.instructions+=2;goto B6347bf;
case 0x6347c7:c.instructions+=1;goto B6347c7;
case 0x6347c9:goto L6347c9;
case 0x6347d0:goto L6347d0;
case 0x6347d2:c.instructions+=5;goto B6347d2;
case 0x6347d5:c.instructions+=4;goto B6347d5;
case 0x6347d7:c.instructions+=3;goto B6347d7;
case 0x6347d8:c.instructions+=2;goto B6347d8;
case 0x6347db:c.instructions+=1;goto B6347db;
case 0x6347e0:goto L6347e0;
case 0x6347e2:c.instructions+=3;goto B6347e2;
case 0x6347e5:c.instructions+=2;goto B6347e5;
case 0x6347e7:c.instructions+=1;goto B6347e7;
case 0x6347e9:goto L6347e9;
case 0x6347ed:c.instructions+=5;goto B6347ed;
case 0x6347ee:c.instructions+=4;goto B6347ee;
case 0x6347ef:c.instructions+=3;goto B6347ef;
case 0x6347f6:c.instructions+=2;goto B6347f6;
case 0x6347f9:c.instructions+=1;goto B6347f9;
case 0x634800:goto L634800;
case 0x634801:c.instructions+=18;goto B634801;
case 0x634803:c.instructions+=17;goto B634803;
case 0x634806:c.instructions+=16;goto B634806;
case 0x634808:c.instructions+=15;goto B634808;
case 0x63480d:c.instructions+=14;goto B63480d;
case 0x634813:c.instructions+=13;goto B634813;
case 0x634814:c.instructions+=12;goto B634814;
case 0x63481b:c.instructions+=11;goto B63481b;
case 0x634821:c.instructions+=10;goto B634821;
case 0x634822:c.instructions+=9;goto B634822;
case 0x634823:c.instructions+=8;goto B634823;
case 0x634825:c.instructions+=7;goto B634825;
case 0x634826:c.instructions+=6;goto B634826;
case 0x634829:c.instructions+=5;goto B634829;
case 0x63482c:c.instructions+=4;goto B63482c;
case 0x63482d:c.instructions+=3;goto B63482d;
case 0x63482e:c.instructions+=2;goto B63482e;
case 0x634832:c.instructions+=1;goto B634832;
case 0x634837:goto L634837;
case 0x63483a:c.instructions+=5;goto B63483a;
case 0x63483d:c.instructions+=4;goto B63483d;
case 0x634841:c.instructions+=3;goto B634841;
case 0x634847:c.instructions+=2;goto B634847;
case 0x63484f:c.instructions+=1;goto B63484f;
case 0x634850:goto L634850;
case 0x634855:goto L634855;
case 0x63485a:c.instructions+=1;goto B63485a;
case 0x634860:goto L634860;
case 0x634862:c.instructions+=2;goto B634862;
case 0x634864:c.instructions+=1;goto B634864;
case 0x634866:goto L634866;
case 0x634869:c.instructions+=2;goto B634869;
case 0x63486b:c.instructions+=1;goto B63486b;
case 0x63486d:goto L63486d;
case 0x634872:goto L634872;
case 0x634874:c.instructions+=3;goto B634874;
case 0x634875:c.instructions+=2;goto B634875;
case 0x63487b:c.instructions+=1;goto B63487b;
case 0x634880:goto L634880;
case 0x634886:goto L634886;
case 0x634889:c.instructions+=2;goto B634889;
case 0x63488a:c.instructions+=1;goto B63488a;
case 0x63488c:goto L63488c;
case 0x63488d:c.instructions+=1;goto B63488d;
case 0x63488f:goto L63488f;
case 0x634893:c.instructions+=1;goto B634893;
case 0x634895:goto L634895;
case 0x63489d:c.instructions+=1;goto B63489d;
case 0x6348a0:goto L6348a0;
case 0x6348a4:c.instructions+=5;goto B6348a4;
case 0x6348a8:c.instructions+=4;goto B6348a8;
case 0x6348af:c.instructions+=3;goto B6348af;
case 0x6348b1:c.instructions+=2;goto B6348b1;
case 0x6348b5:c.instructions+=1;goto B6348b5;
case 0x6348bb:goto L6348bb;
case 0x6348bf:c.instructions+=2;goto B6348bf;
case 0x6348c2:c.instructions+=1;goto B6348c2;
case 0x6348c4:goto L6348c4;
case 0x6348c7:c.instructions+=1;goto B6348c7;
case 0x6348cd:goto L6348cd;
case 0x6348d5:c.instructions+=1;goto B6348d5;
case 0x6348e0:goto L6348e0;
case 0x6348e4:c.instructions+=3;goto B6348e4;
case 0x6348e8:c.instructions+=2;goto B6348e8;
case 0x6348ec:c.instructions+=1;goto B6348ec;
case 0x6348f2:goto L6348f2;
case 0x6348f8:c.instructions+=7;goto B6348f8;
case 0x6348fb:c.instructions+=6;goto B6348fb;
case 0x6348fe:c.instructions+=5;goto B6348fe;
case 0x634901:c.instructions+=4;goto B634901;
case 0x634904:c.instructions+=3;goto B634904;
case 0x634907:c.instructions+=2;goto B634907;
case 0x634909:c.instructions+=1;goto B634909;
case 0x63490b:goto L63490b;
case 0x634910:c.instructions+=1;goto B634910;
case 0x634912:goto L634912;
case 0x634914:c.instructions+=1;goto B634914;
case 0x634916:goto L634916;
case 0x63491a:c.instructions+=3;goto B63491a;
case 0x634920:c.instructions+=2;goto B634920;
case 0x634923:c.instructions+=1;goto B634923;
case 0x634925:goto L634925;
case 0x63492a:goto L63492a;
case 0x63492e:c.instructions+=4;goto B63492e;
case 0x634931:c.instructions+=3;goto B634931;
case 0x634935:c.instructions+=2;goto B634935;
case 0x634938:c.instructions+=1;goto B634938;
case 0x63493a:goto L63493a;
case 0x63493d:c.instructions+=1;goto B63493d;
case 0x63493f:goto L63493f;
case 0x634943:c.instructions+=5;goto B634943;
case 0x634948:c.instructions+=4;goto B634948;
case 0x63494d:c.instructions+=3;goto B63494d;
case 0x634952:c.instructions+=2;goto B634952;
case 0x634957:c.instructions+=1;goto B634957;
case 0x634959:goto L634959;
case 0x63495a:c.instructions+=5;goto B63495a;
case 0x63495d:c.instructions+=4;goto B63495d;
case 0x634960:c.instructions+=3;goto B634960;
case 0x634963:c.instructions+=2;goto B634963;
case 0x634964:c.instructions+=1;goto B634964;
case 0x634969:goto L634969;
case 0x63496c:goto L63496c;
case 0x63496e:c.instructions+=3;goto B63496e;
case 0x63496f:c.instructions+=2;goto B63496f;
case 0x634970:c.instructions+=1;goto B634970;
case 0x634975:goto L634975;
case 0x634976:c.instructions+=3;goto B634976;
case 0x63497a:c.instructions+=2;goto B63497a;
case 0x63497b:c.instructions+=1;goto B63497b;
case 0x634980:goto L634980;
case 0x634983:goto L634983;
case 0x63498b:c.instructions+=1;goto B63498b;
case 0x634990:goto L634990;
case 0x634994:c.instructions+=3;goto B634994;
case 0x634998:c.instructions+=2;goto B634998;
case 0x63499c:c.instructions+=1;goto B63499c;
case 0x6349a2:goto L6349a2;
case 0x6349a8:c.instructions+=7;goto B6349a8;
case 0x6349ab:c.instructions+=6;goto B6349ab;
case 0x6349ae:c.instructions+=5;goto B6349ae;
case 0x6349b1:c.instructions+=4;goto B6349b1;
case 0x6349b4:c.instructions+=3;goto B6349b4;
case 0x6349b7:c.instructions+=2;goto B6349b7;
case 0x6349b9:c.instructions+=1;goto B6349b9;
case 0x6349bb:goto L6349bb;
case 0x6349c0:c.instructions+=1;goto B6349c0;
case 0x6349c2:goto L6349c2;
case 0x6349c4:c.instructions+=1;goto B6349c4;
case 0x6349c6:goto L6349c6;
case 0x6349ca:c.instructions+=3;goto B6349ca;
case 0x6349d0:c.instructions+=2;goto B6349d0;
case 0x6349d3:c.instructions+=1;goto B6349d3;
case 0x6349d5:goto L6349d5;
case 0x6349da:goto L6349da;
case 0x6349de:c.instructions+=6;goto B6349de;
case 0x6349e2:c.instructions+=5;goto B6349e2;
case 0x6349e5:c.instructions+=4;goto B6349e5;
case 0x6349e9:c.instructions+=3;goto B6349e9;
case 0x6349eb:c.instructions+=2;goto B6349eb;
case 0x6349ee:c.instructions+=1;goto B6349ee;
case 0x6349f0:goto L6349f0;
case 0x6349f2:c.instructions+=1;goto B6349f2;
case 0x6349f4:goto L6349f4;
case 0x6349f7:c.instructions+=1;goto B6349f7;
case 0x6349f9:goto L6349f9;
case 0x6349fb:c.instructions+=1;goto B6349fb;
case 0x6349fd:goto L6349fd;
case 0x634a01:c.instructions+=6;goto B634a01;
case 0x634a04:c.instructions+=5;goto B634a04;
case 0x634a09:c.instructions+=4;goto B634a09;
case 0x634a0e:c.instructions+=3;goto B634a0e;
case 0x634a12:c.instructions+=2;goto B634a12;
case 0x634a17:c.instructions+=1;goto B634a17;
case 0x634a19:goto L634a19;
case 0x634a1a:c.instructions+=5;goto B634a1a;
case 0x634a1d:c.instructions+=4;goto B634a1d;
case 0x634a20:c.instructions+=3;goto B634a20;
case 0x634a23:c.instructions+=2;goto B634a23;
case 0x634a24:c.instructions+=1;goto B634a24;
case 0x634a29:goto L634a29;
case 0x634a2c:goto L634a2c;
case 0x634a2e:c.instructions+=3;goto B634a2e;
case 0x634a2f:c.instructions+=2;goto B634a2f;
case 0x634a30:c.instructions+=1;goto B634a30;
case 0x634a35:goto L634a35;
case 0x634a36:c.instructions+=3;goto B634a36;
case 0x634a3a:c.instructions+=2;goto B634a3a;
case 0x634a3b:c.instructions+=1;goto B634a3b;
case 0x634a40:goto L634a40;
case 0x634a43:goto L634a43;
case 0x634a45:c.instructions+=2;goto B634a45;
case 0x634a49:c.instructions+=1;goto B634a49;
case 0x634a4f:goto L634a4f;
case 0x634a55:c.instructions+=1;goto B634a55;
case 0x634a5a:goto L634a5a;
case 0x634a5e:c.instructions+=13;goto B634a5e;
case 0x634a62:c.instructions+=12;goto B634a62;
case 0x634a65:c.instructions+=11;goto B634a65;
case 0x634a69:c.instructions+=10;goto B634a69;
case 0x634a6b:c.instructions+=9;goto B634a6b;
case 0x634a6f:c.instructions+=8;goto B634a6f;
case 0x634a72:c.instructions+=7;goto B634a72;
case 0x634a75:c.instructions+=6;goto B634a75;
case 0x634a79:c.instructions+=5;goto B634a79;
case 0x634a80:c.instructions+=4;goto B634a80;
case 0x634a81:c.instructions+=3;goto B634a81;
case 0x634a83:c.instructions+=2;goto B634a83;
case 0x634a85:c.instructions+=1;goto B634a85;
case 0x634a8a:goto L634a8a;
case 0x634a8d:c.instructions+=2;goto B634a8d;
case 0x634a8f:c.instructions+=1;goto B634a8f;
case 0x634a91:goto L634a91;
case 0x634a93:c.instructions+=1;goto B634a93;
case 0x634a98:goto L634a98;
case 0x634a9e:c.instructions+=2;goto B634a9e;
case 0x634a9f:c.instructions+=1;goto B634a9f;
case 0x634aa4:goto L634aa4;
case 0x634aa8:c.instructions+=2;goto B634aa8;
case 0x634aaa:c.instructions+=1;goto B634aaa;
case 0x634aac:goto L634aac;
case 0x634ab0:c.instructions+=4;goto B634ab0;
case 0x634ab2:c.instructions+=3;goto B634ab2;
case 0x634ab9:c.instructions+=2;goto B634ab9;
case 0x634abb:c.instructions+=1;goto B634abb;
case 0x634abd:goto L634abd;
case 0x634ac3:goto L634ac3;
case 0x634ac7:c.instructions+=2;goto B634ac7;
case 0x634aca:c.instructions+=1;goto B634aca;
case 0x634acc:goto L634acc;
case 0x634acf:c.instructions+=1;goto B634acf;
case 0x634ad1:goto L634ad1;
case 0x634ad4:c.instructions+=2;goto B634ad4;
case 0x634ad7:c.instructions+=1;goto B634ad7;
case 0x634ad9:goto L634ad9;
case 0x634adc:goto L634adc;
case 0x634ae0:c.instructions+=7;goto B634ae0;
case 0x634ae2:c.instructions+=6;goto B634ae2;
case 0x634ae5:c.instructions+=5;goto B634ae5;
case 0x634aec:c.instructions+=4;goto B634aec;
case 0x634aee:c.instructions+=3;goto B634aee;
case 0x634aef:c.instructions+=2;goto B634aef;
case 0x634af1:c.instructions+=1;goto B634af1;
case 0x634af6:goto L634af6;
case 0x634afb:goto L634afb;
case 0x634afe:c.instructions+=1;goto B634afe;
case 0x634b00:goto L634b00;
case 0x634b04:c.instructions+=3;goto B634b04;
case 0x634b0a:c.instructions+=2;goto B634b0a;
case 0x634b0c:c.instructions+=1;goto B634b0c;
case 0x634b0e:goto L634b0e;
case 0x634b11:c.instructions+=3;goto B634b11;
case 0x634b14:c.instructions+=2;goto B634b14;
case 0x634b16:c.instructions+=1;goto B634b16;
case 0x634b18:goto L634b18;
case 0x634b1c:c.instructions+=6;goto B634b1c;
case 0x634b1e:c.instructions+=5;goto B634b1e;
case 0x634b20:c.instructions+=4;goto B634b20;
case 0x634b26:c.instructions+=3;goto B634b26;
case 0x634b27:c.instructions+=2;goto B634b27;
case 0x634b29:c.instructions+=1;goto B634b29;
case 0x634b2e:goto L634b2e;
case 0x634b38:c.instructions+=1;goto B634b38;
case 0x634b3d:goto L634b3d;
case 0x634b41:c.instructions+=6;goto B634b41;
case 0x634b43:c.instructions+=5;goto B634b43;
case 0x634b45:c.instructions+=4;goto B634b45;
case 0x634b4b:c.instructions+=3;goto B634b4b;
case 0x634b4c:c.instructions+=2;goto B634b4c;
case 0x634b4e:c.instructions+=1;goto B634b4e;
case 0x634b53:goto L634b53;
case 0x634b5d:c.instructions+=1;goto B634b5d;
case 0x634b62:goto L634b62;
case 0x634b65:c.instructions+=1;goto B634b65;
case 0x634b67:goto L634b67;
case 0x634b6b:c.instructions+=3;goto B634b6b;
case 0x634b71:c.instructions+=2;goto B634b71;
case 0x634b73:c.instructions+=1;goto B634b73;
case 0x634b75:goto L634b75;
case 0x634b78:c.instructions+=3;goto B634b78;
case 0x634b7b:c.instructions+=2;goto B634b7b;
case 0x634b7d:c.instructions+=1;goto B634b7d;
case 0x634b7f:goto L634b7f;
case 0x634b83:c.instructions+=6;goto B634b83;
case 0x634b85:c.instructions+=5;goto B634b85;
case 0x634b87:c.instructions+=4;goto B634b87;
case 0x634b8d:c.instructions+=3;goto B634b8d;
case 0x634b8e:c.instructions+=2;goto B634b8e;
case 0x634b90:c.instructions+=1;goto B634b90;
case 0x634b95:goto L634b95;
case 0x634b9f:c.instructions+=1;goto B634b9f;
case 0x634ba4:goto L634ba4;
case 0x634ba8:c.instructions+=6;goto B634ba8;
case 0x634baa:c.instructions+=5;goto B634baa;
case 0x634bac:c.instructions+=4;goto B634bac;
case 0x634bb2:c.instructions+=3;goto B634bb2;
case 0x634bb3:c.instructions+=2;goto B634bb3;
case 0x634bb5:c.instructions+=1;goto B634bb5;
case 0x634bba:goto L634bba;
case 0x634bc4:c.instructions+=1;goto B634bc4;
case 0x634bc9:goto L634bc9;
case 0x634bcc:c.instructions+=1;goto B634bcc;
case 0x634bd2:goto L634bd2;
case 0x634bd5:c.instructions+=1;goto B634bd5;
case 0x634bdb:goto L634bdb;
case 0x634bde:c.instructions+=1;goto B634bde;
case 0x634be4:goto L634be4;
case 0x634be7:c.instructions+=1;goto B634be7;
case 0x634bed:goto L634bed;
case 0x634bf0:c.instructions+=1;goto B634bf0;
case 0x634bf2:goto L634bf2;
case 0x634bf6:c.instructions+=4;goto B634bf6;
case 0x634bfc:c.instructions+=3;goto B634bfc;
case 0x634c02:c.instructions+=2;goto B634c02;
case 0x634c04:c.instructions+=1;goto B634c04;
case 0x634c06:goto L634c06;
case 0x634c09:c.instructions+=3;goto B634c09;
case 0x634c0c:c.instructions+=2;goto B634c0c;
case 0x634c0e:c.instructions+=1;goto B634c0e;
case 0x634c10:goto L634c10;
case 0x634c12:c.instructions+=1;goto B634c12;
case 0x634c14:goto L634c14;
case 0x634c17:c.instructions+=3;goto B634c17;
case 0x634c1a:c.instructions+=2;goto B634c1a;
case 0x634c1c:c.instructions+=1;goto B634c1c;
case 0x634c1e:goto L634c1e;
case 0x634c22:c.instructions+=5;goto B634c22;
case 0x634c24:c.instructions+=4;goto B634c24;
case 0x634c26:c.instructions+=3;goto B634c26;
case 0x634c2c:c.instructions+=2;goto B634c2c;
case 0x634c2d:c.instructions+=1;goto B634c2d;
case 0x634c32:goto L634c32;
case 0x634c36:c.instructions+=5;goto B634c36;
case 0x634c38:c.instructions+=4;goto B634c38;
case 0x634c3a:c.instructions+=3;goto B634c3a;
case 0x634c40:c.instructions+=2;goto B634c40;
case 0x634c41:c.instructions+=1;goto B634c41;
case 0x634c46:goto L634c46;
case 0x634c49:c.instructions+=1;goto B634c49;
case 0x634c4f:goto L634c4f;
case 0x634c53:c.instructions+=4;goto B634c53;
case 0x634c59:c.instructions+=3;goto B634c59;
case 0x634c5d:c.instructions+=2;goto B634c5d;
case 0x634c61:c.instructions+=1;goto B634c61;
case 0x634c63:goto L634c63;
case 0x634c69:c.instructions+=7;goto B634c69;
case 0x634c6c:c.instructions+=6;goto B634c6c;
case 0x634c6f:c.instructions+=5;goto B634c6f;
case 0x634c73:c.instructions+=4;goto B634c73;
case 0x634c76:c.instructions+=3;goto B634c76;
case 0x634c78:c.instructions+=2;goto B634c78;
case 0x634c7a:c.instructions+=1;goto B634c7a;
case 0x634c7c:goto L634c7c;
case 0x634c7f:c.instructions+=1;goto B634c7f;
case 0x634c82:goto L634c82;
case 0x634c85:c.instructions+=3;goto B634c85;
case 0x634c8c:c.instructions+=2;goto B634c8c;
case 0x634c8f:c.instructions+=1;goto B634c8f;
case 0x634c91:goto L634c91;
case 0x634c92:c.instructions+=3;goto B634c92;
case 0x634c95:c.instructions+=2;goto B634c95;
case 0x634c97:c.instructions+=1;goto B634c97;
case 0x634c99:goto L634c99;
case 0x634c9d:c.instructions+=6;goto B634c9d;
case 0x634c9f:c.instructions+=5;goto B634c9f;
case 0x634ca1:c.instructions+=4;goto B634ca1;
case 0x634ca7:c.instructions+=3;goto B634ca7;
case 0x634ca8:c.instructions+=2;goto B634ca8;
case 0x634caa:c.instructions+=1;goto B634caa;
case 0x634caf:goto L634caf;
case 0x634cb9:c.instructions+=1;goto B634cb9;
case 0x634cbe:goto L634cbe;
case 0x634cc0:c.instructions+=1;goto B634cc0;
case 0x634cc2:goto L634cc2;
case 0x634cc5:c.instructions+=2;goto B634cc5;
case 0x634cc7:c.instructions+=1;goto B634cc7;
case 0x634cc9:goto L634cc9;
case 0x634ccd:c.instructions+=6;goto B634ccd;
case 0x634ccf:c.instructions+=5;goto B634ccf;
case 0x634cd1:c.instructions+=4;goto B634cd1;
case 0x634cd7:c.instructions+=3;goto B634cd7;
case 0x634cd8:c.instructions+=2;goto B634cd8;
case 0x634cda:c.instructions+=1;goto B634cda;
case 0x634cdf:goto L634cdf;
case 0x634ce9:c.instructions+=1;goto B634ce9;
case 0x634cee:goto L634cee;
case 0x634cf1:c.instructions+=1;goto B634cf1;
case 0x634cf7:goto L634cf7;
case 0x634cfb:c.instructions+=4;goto B634cfb;
case 0x634d01:c.instructions+=3;goto B634d01;
case 0x634d07:c.instructions+=2;goto B634d07;
case 0x634d09:c.instructions+=1;goto B634d09;
case 0x634d0b:goto L634d0b;
case 0x634d0e:c.instructions+=3;goto B634d0e;
case 0x634d11:c.instructions+=2;goto B634d11;
case 0x634d13:c.instructions+=1;goto B634d13;
case 0x634d15:goto L634d15;
case 0x634d19:c.instructions+=6;goto B634d19;
case 0x634d1b:c.instructions+=5;goto B634d1b;
case 0x634d1d:c.instructions+=4;goto B634d1d;
case 0x634d23:c.instructions+=3;goto B634d23;
case 0x634d24:c.instructions+=2;goto B634d24;
case 0x634d26:c.instructions+=1;goto B634d26;
case 0x634d2b:goto L634d2b;
case 0x634d35:c.instructions+=1;goto B634d35;
case 0x634d3a:goto L634d3a;
case 0x634d3c:c.instructions+=1;goto B634d3c;
case 0x634d3e:goto L634d3e;
case 0x634d41:c.instructions+=3;goto B634d41;
case 0x634d44:c.instructions+=2;goto B634d44;
case 0x634d46:c.instructions+=1;goto B634d46;
case 0x634d48:goto L634d48;
case 0x634d4c:c.instructions+=4;goto B634d4c;
case 0x634d4e:c.instructions+=3;goto B634d4e;
case 0x634d50:c.instructions+=2;goto B634d50;
case 0x634d56:c.instructions+=1;goto B634d56;
case 0x634d57:goto L634d57;
case 0x634d59:c.instructions+=1;goto B634d59;
case 0x634d5e:goto L634d5e;
case 0x634d68:c.instructions+=1;goto B634d68;
case 0x634d6d:goto L634d6d;
case 0x634d71:c.instructions+=5;goto B634d71;
case 0x634d73:c.instructions+=4;goto B634d73;
case 0x634d75:c.instructions+=3;goto B634d75;
case 0x634d7b:c.instructions+=2;goto B634d7b;
case 0x634d7c:c.instructions+=1;goto B634d7c;
case 0x634d7e:goto L634d7e;
case 0x634d82:c.instructions+=6;goto B634d82;
case 0x634d84:c.instructions+=5;goto B634d84;
case 0x634d86:c.instructions+=4;goto B634d86;
case 0x634d8c:c.instructions+=3;goto B634d8c;
case 0x634d8d:c.instructions+=2;goto B634d8d;
case 0x634d8f:c.instructions+=1;goto B634d8f;
case 0x634d94:goto L634d94;
case 0x634d99:goto L634d99;
case 0x634d9d:c.instructions+=4;goto B634d9d;
case 0x634da3:c.instructions+=3;goto B634da3;
case 0x634da9:c.instructions+=2;goto B634da9;
case 0x634dab:c.instructions+=1;goto B634dab;
case 0x634dad:goto L634dad;
case 0x634db0:c.instructions+=3;goto B634db0;
case 0x634db3:c.instructions+=2;goto B634db3;
case 0x634db5:c.instructions+=1;goto B634db5;
case 0x634db7:goto L634db7;
case 0x634dba:c.instructions+=1;goto B634dba;
case 0x634dbc:goto L634dbc;
case 0x634dbf:c.instructions+=1;goto B634dbf;
case 0x634dc1:goto L634dc1;
case 0x634dc3:c.instructions+=1;goto B634dc3;
case 0x634dc5:goto L634dc5;
case 0x634dc8:c.instructions+=3;goto B634dc8;
case 0x634dcb:c.instructions+=2;goto B634dcb;
case 0x634dcd:c.instructions+=1;goto B634dcd;
case 0x634dcf:goto L634dcf;
case 0x634dd3:c.instructions+=4;goto B634dd3;
case 0x634dd5:c.instructions+=3;goto B634dd5;
case 0x634dd7:c.instructions+=2;goto B634dd7;
case 0x634ddd:c.instructions+=1;goto B634ddd;
case 0x634dde:goto L634dde;
case 0x634de0:c.instructions+=1;goto B634de0;
case 0x634de5:goto L634de5;
case 0x634def:c.instructions+=1;goto B634def;
case 0x634df1:goto L634df1;
case 0x634df5:c.instructions+=4;goto B634df5;
case 0x634df7:c.instructions+=3;goto B634df7;
case 0x634df9:c.instructions+=2;goto B634df9;
case 0x634dff:c.instructions+=1;goto B634dff;
case 0x634e00:goto L634e00;
case 0x634e02:c.instructions+=1;goto B634e02;
case 0x634e07:goto L634e07;
case 0x634e11:c.instructions+=1;goto B634e11;
case 0x634e13:goto L634e13;
case 0x634e15:c.instructions+=1;goto B634e15;
case 0x634e17:goto L634e17;
case 0x634e1a:c.instructions+=3;goto B634e1a;
case 0x634e1d:c.instructions+=2;goto B634e1d;
case 0x634e1f:c.instructions+=1;goto B634e1f;
case 0x634e21:goto L634e21;
case 0x634e25:c.instructions+=6;goto B634e25;
case 0x634e27:c.instructions+=5;goto B634e27;
case 0x634e29:c.instructions+=4;goto B634e29;
case 0x634e2f:c.instructions+=3;goto B634e2f;
case 0x634e30:c.instructions+=2;goto B634e30;
case 0x634e32:c.instructions+=1;goto B634e32;
case 0x634e37:goto L634e37;
case 0x634e41:c.instructions+=1;goto B634e41;
case 0x634e43:goto L634e43;
case 0x634e47:c.instructions+=6;goto B634e47;
case 0x634e49:c.instructions+=5;goto B634e49;
case 0x634e4b:c.instructions+=4;goto B634e4b;
case 0x634e51:c.instructions+=3;goto B634e51;
case 0x634e52:c.instructions+=2;goto B634e52;
case 0x634e54:c.instructions+=1;goto B634e54;
case 0x634e59:goto L634e59;
case 0x634e63:goto L634e63;
case 0x634e67:c.instructions+=4;goto B634e67;
case 0x634e68:c.instructions+=3;goto B634e68;
case 0x634e6b:c.instructions+=2;goto B634e6b;
case 0x634e6f:c.instructions+=1;goto B634e6f;
case 0x634e75:goto L634e75;
case 0x634e79:c.instructions+=2;goto B634e79;
case 0x634e7c:c.instructions+=1;goto B634e7c;
case 0x634e7e:goto L634e7e;
case 0x634e85:c.instructions+=1;goto B634e85;
case 0x634e8c:goto L634e8c;
case 0x634e90:c.instructions+=6;goto B634e90;
case 0x634e94:c.instructions+=5;goto B634e94;
case 0x634e97:c.instructions+=4;goto B634e97;
case 0x634e9a:c.instructions+=3;goto B634e9a;
case 0x634ea1:c.instructions+=2;goto B634ea1;
case 0x634ea3:c.instructions+=1;goto B634ea3;
case 0x634ea5:goto L634ea5;
case 0x634ea9:c.instructions+=4;goto B634ea9;
case 0x634eaa:c.instructions+=3;goto B634eaa;
case 0x634eae:c.instructions+=2;goto B634eae;
case 0x634eaf:c.instructions+=1;goto B634eaf;
case 0x634eb4:goto L634eb4;
case 0x634eb8:c.instructions+=8;goto B634eb8;
case 0x634eb9:c.instructions+=7;goto B634eb9;
case 0x634ebd:c.instructions+=6;goto B634ebd;
case 0x634ebe:c.instructions+=5;goto B634ebe;
case 0x634ec1:c.instructions+=4;goto B634ec1;
case 0x634ec2:c.instructions+=3;goto B634ec2;
case 0x634ec5:c.instructions+=2;goto B634ec5;
case 0x634ec6:c.instructions+=1;goto B634ec6;
case 0x634ecb:goto L634ecb;
case 0x634ece:goto L634ece;
case 0x634ed2:c.instructions+=4;goto B634ed2;
case 0x634ed3:c.instructions+=3;goto B634ed3;
case 0x634ed6:c.instructions+=2;goto B634ed6;
case 0x634eda:c.instructions+=1;goto B634eda;
case 0x634ee0:goto L634ee0;
case 0x634ee4:c.instructions+=4;goto B634ee4;
case 0x634ee5:c.instructions+=3;goto B634ee5;
case 0x634ee8:c.instructions+=2;goto B634ee8;
case 0x634eec:c.instructions+=1;goto B634eec;
case 0x634ef2:goto L634ef2;
case 0x634ef6:c.instructions+=29;goto B634ef6;
case 0x634ef9:c.instructions+=28;goto B634ef9;
case 0x634efc:c.instructions+=27;goto B634efc;
case 0x634eff:c.instructions+=26;goto B634eff;
case 0x634f03:c.instructions+=25;goto B634f03;
case 0x634f05:c.instructions+=24;goto B634f05;
case 0x634f09:c.instructions+=23;goto B634f09;
case 0x634f0f:c.instructions+=22;goto B634f0f;
case 0x634f12:c.instructions+=21;goto B634f12;
case 0x634f18:c.instructions+=20;goto B634f18;
case 0x634f1b:c.instructions+=19;goto B634f1b;
case 0x634f1f:c.instructions+=18;goto B634f1f;
case 0x634f25:c.instructions+=17;goto B634f25;
case 0x634f28:c.instructions+=16;goto B634f28;
case 0x634f2b:c.instructions+=15;goto B634f2b;
case 0x634f2e:c.instructions+=14;goto B634f2e;
case 0x634f32:c.instructions+=13;goto B634f32;
case 0x634f35:c.instructions+=12;goto B634f35;
case 0x634f37:c.instructions+=11;goto B634f37;
case 0x634f3d:c.instructions+=10;goto B634f3d;
case 0x634f40:c.instructions+=9;goto B634f40;
case 0x634f46:c.instructions+=8;goto B634f46;
case 0x634f49:c.instructions+=7;goto B634f49;
case 0x634f4d:c.instructions+=6;goto B634f4d;
case 0x634f53:c.instructions+=5;goto B634f53;
case 0x634f56:c.instructions+=4;goto B634f56;
case 0x634f5c:c.instructions+=3;goto B634f5c;
case 0x634f5e:c.instructions+=2;goto B634f5e;
case 0x634f60:c.instructions+=1;goto B634f60;
case 0x634f66:goto L634f66;
case 0x634f6a:c.instructions+=2;goto B634f6a;
case 0x634f6e:c.instructions+=1;goto B634f6e;
case 0x634f70:goto L634f70;
case 0x634f72:c.instructions+=1;goto B634f72;
case 0x634f77:goto L634f77;
case 0x634f7d:c.instructions+=7;goto B634f7d;
case 0x634f80:c.instructions+=6;goto B634f80;
case 0x634f83:c.instructions+=5;goto B634f83;
case 0x634f86:c.instructions+=4;goto B634f86;
case 0x634f89:c.instructions+=3;goto B634f89;
case 0x634f8c:c.instructions+=2;goto B634f8c;
case 0x634f8e:c.instructions+=1;goto B634f8e;
case 0x634f90:goto L634f90;
case 0x634f95:c.instructions+=1;goto B634f95;
case 0x634f97:goto L634f97;
case 0x634f99:c.instructions+=1;goto B634f99;
case 0x634f9b:goto L634f9b;
case 0x634f9f:c.instructions+=3;goto B634f9f;
case 0x634fa5:c.instructions+=2;goto B634fa5;
case 0x634fa8:c.instructions+=1;goto B634fa8;
case 0x634faa:goto L634faa;
case 0x634faf:goto L634faf;
case 0x634fb2:c.instructions+=2;goto B634fb2;
case 0x634fb5:c.instructions+=1;goto B634fb5;
case 0x634fb7:goto L634fb7;
case 0x634fb9:c.instructions+=1;goto B634fb9;
case 0x634fbb:goto L634fbb;
case 0x634fbe:c.instructions+=1;goto B634fbe;
case 0x634fc0:goto L634fc0;
case 0x634fc2:c.instructions+=1;goto B634fc2;
case 0x634fc4:goto L634fc4;
case 0x634fc8:c.instructions+=5;goto B634fc8;
case 0x634fcd:c.instructions+=4;goto B634fcd;
case 0x634fd2:c.instructions+=3;goto B634fd2;
case 0x634fd7:c.instructions+=2;goto B634fd7;
case 0x634fdc:c.instructions+=1;goto B634fdc;
case 0x634fde:goto L634fde;
case 0x634fdf:c.instructions+=5;goto B634fdf;
case 0x634fe2:c.instructions+=4;goto B634fe2;
case 0x634fe5:c.instructions+=3;goto B634fe5;
case 0x634fe8:c.instructions+=2;goto B634fe8;
case 0x634fe9:c.instructions+=1;goto B634fe9;
case 0x634fee:goto L634fee;
case 0x634ff1:goto L634ff1;
case 0x634ff4:c.instructions+=3;goto B634ff4;
case 0x634ff5:c.instructions+=2;goto B634ff5;
case 0x634ff6:c.instructions+=1;goto B634ff6;
case 0x634ffb:goto L634ffb;
case 0x634ffc:c.instructions+=1;goto B634ffc;
default:missing_instruction(c.pc);}
B634005:L634005:{c.instructions+=3;NFSU2_TR(0x634005);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634006:{NFSU2_TR(0x634006);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634007:{NFSU2_TR(0x634007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63400cull));
TAIL_STATIC(0x43f920u,43f);
}
B63400c:L63400c:{c.instructions+=4;NFSU2_TR(0x63400c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63400f:{NFSU2_TR(0x63400f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634012:{NFSU2_TR(0x634012);
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
B634014:{NFSU2_TR(0x634014);
if(r1(R+518)){{goto L63401b;}}
}
B634016:L634016:{c.instructions+=1;NFSU2_TR(0x634016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63401bull));
TAIL_STATIC(0x61f4d0u,61f);
}
B63401b:L63401b:{c.instructions+=7;NFSU2_TR(0x63401b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63401d:{NFSU2_TR(0x63401d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B634020:{NFSU2_TR(0x634020);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B634022:{NFSU2_TR(0x634022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B634023:{NFSU2_TR(0x634023);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634026:{NFSU2_TR(0x634026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634027:{NFSU2_TR(0x634027);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634030:L634030:{c.instructions+=12;NFSU2_TR(0x634030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B634033:{NFSU2_TR(0x634033);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634037:{NFSU2_TR(0x634037);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634038:{NFSU2_TR(0x634038);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63403c:{NFSU2_TR(0x63403c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63403d:{NFSU2_TR(0x63403d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63403e:{NFSU2_TR(0x63403e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B634042:{NFSU2_TR(0x634042);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B634044:{NFSU2_TR(0x634044);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x690ull))));
}
B634049:{NFSU2_TR(0x634049);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63404d:{NFSU2_TR(0x63404d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634055:{NFSU2_TR(0x634055);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634056:L634056:{c.instructions+=3;NFSU2_TR(0x634056);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63405a:{NFSU2_TR(0x63405a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B63405d:{NFSU2_TR(0x63405d);
if(r1(R+518)){{goto L6340d2;}}
}
B63405f:L63405f:{c.instructions+=4;NFSU2_TR(0x63405f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634063:{NFSU2_TR(0x634063);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634064:{NFSU2_TR(0x634064);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634065:{NFSU2_TR(0x634065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63406aull));
TAIL_STATIC(0x61d620u,61d);
}
B63406a:L63406a:{c.instructions+=5;NFSU2_TR(0x63406a);
__builtin_memmove((R+28),(R+0),4);
}
B63406c:{NFSU2_TR(0x63406c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634070:{NFSU2_TR(0x634070);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634071:{NFSU2_TR(0x634071);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634072:{NFSU2_TR(0x634072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634077ull));
TAIL_STATIC(0x61d6d0u,61d);
}
B634077:L634077:{c.instructions+=4;NFSU2_TR(0x634077);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63407a:{NFSU2_TR(0x63407a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63407c:{NFSU2_TR(0x63407c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63407e:{NFSU2_TR(0x63407e);
if(r1(R+518)){{goto L6340a4;}}
}
B634080:L634080:{c.instructions+=2;NFSU2_TR(0x634080);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634082:{NFSU2_TR(0x634082);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63408e;}}
}
B634084:L634084:{c.instructions+=2;NFSU2_TR(0x634084);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634087:{NFSU2_TR(0x634087);
if(r1(R+518)){{goto L634098;}}
}
B634089:L634089:{c.instructions+=3;NFSU2_TR(0x634089);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B63408a:{NFSU2_TR(0x63408a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63408c:{NFSU2_TR(0x63408c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634084u);}goto L634084;}}
}
B63408e:L63408e:{c.instructions+=2;NFSU2_TR(0x63408e);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B634092:{NFSU2_TR(0x634092);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63409c;}}
}
B634094:L634094:{c.instructions+=2;NFSU2_TR(0x634094);
__builtin_memmove((R+4),(R+24),4);
}
B634096:{NFSU2_TR(0x634096);
{goto L6340a4;}
}
B634098:L634098:{c.instructions+=2;NFSU2_TR(0x634098);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63409a:{NFSU2_TR(0x63409a);
{goto L6340a4;}
}
B63409c:L63409c:{c.instructions+=2;NFSU2_TR(0x63409c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63409f:{NFSU2_TR(0x63409f);
w4(R+4,u32(0x1ull));
}
B6340a4:L6340a4:{c.instructions+=3;NFSU2_TR(0x6340a4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6340a6:{NFSU2_TR(0x6340a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6340a8:{NFSU2_TR(0x6340a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6340ae;}}
}
B6340aa:L6340aa:{c.instructions+=2;NFSU2_TR(0x6340aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6340ac:{NFSU2_TR(0x6340ac);
{goto L6340d0;}
}
B6340ae:L6340ae:{c.instructions+=3;NFSU2_TR(0x6340ae);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6340b0:{NFSU2_TR(0x6340b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6340b2:{NFSU2_TR(0x6340b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6340be;}}
}
B6340b4:L6340b4:{c.instructions+=2;NFSU2_TR(0x6340b4);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6340b7:{NFSU2_TR(0x6340b7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6340aau);}goto L6340aa;}}
}
B6340b9:L6340b9:{c.instructions+=3;NFSU2_TR(0x6340b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6340ba:{NFSU2_TR(0x6340ba);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6340bc:{NFSU2_TR(0x6340bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6340b4u);}goto L6340b4;}}
}
B6340be:L6340be:{c.instructions+=2;NFSU2_TR(0x6340be);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6340c2:{NFSU2_TR(0x6340c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6340c8;}}
}
B6340c4:L6340c4:{c.instructions+=2;NFSU2_TR(0x6340c4);
__builtin_memmove((R+0),(R+24),4);
}
B6340c6:{NFSU2_TR(0x6340c6);
{goto L6340d0;}
}
B6340c8:L6340c8:{c.instructions+=2;NFSU2_TR(0x6340c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6340cb:{NFSU2_TR(0x6340cb);
w4(R+0,u32(0x1ull));
}
B6340d0:L6340d0:{c.instructions+=1;NFSU2_TR(0x6340d0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6340d2:L6340d2:{c.instructions+=8;NFSU2_TR(0x6340d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6340d6:{NFSU2_TR(0x6340d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6340da:{NFSU2_TR(0x6340da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6340dd:{NFSU2_TR(0x6340dd);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6340de:{NFSU2_TR(0x6340de);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6340df:{NFSU2_TR(0x6340df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6340e3:{NFSU2_TR(0x6340e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6340e7:{NFSU2_TR(0x6340e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634056u);}goto L634056;}}
}
B6340ed:L6340ed:{c.instructions+=3;NFSU2_TR(0x6340ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6340f1:{NFSU2_TR(0x6340f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6340f2:{NFSU2_TR(0x6340f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6340f7ull));
TAIL_STATIC(0x612b70u,612);
}
B6340f7:L6340f7:{c.instructions+=3;NFSU2_TR(0x6340f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6340f8:{NFSU2_TR(0x6340f8);
__builtin_memmove((R+28),(R+0),4);
}
B6340fa:{NFSU2_TR(0x6340fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6340ffull));
TAIL_STATIC(0x612c40u,612);
}
B6340ff:L6340ff:{c.instructions+=3;NFSU2_TR(0x6340ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634102:{NFSU2_TR(0x634102);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634104:{NFSU2_TR(0x634104);
if(r1(R+518)){{goto L634166;}}
}
B634106:L634106:{c.instructions+=2;NFSU2_TR(0x634106);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634108:{NFSU2_TR(0x634108);
if(r1(R+518)){{goto L634166;}}
}
B63410a:L63410a:{c.instructions+=3;NFSU2_TR(0x63410a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63410c:{NFSU2_TR(0x63410c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63410e:{NFSU2_TR(0x63410e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63411a;}}
}
B634110:L634110:{c.instructions+=2;NFSU2_TR(0x634110);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634113:{NFSU2_TR(0x634113);
if(r1(R+518)){{goto L634126;}}
}
B634115:L634115:{c.instructions+=3;NFSU2_TR(0x634115);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B634116:{NFSU2_TR(0x634116);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634118:{NFSU2_TR(0x634118);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634110u);}goto L634110;}}
}
B63411a:L63411a:{c.instructions+=3;NFSU2_TR(0x63411a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63411e:{NFSU2_TR(0x63411e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634120:{NFSU2_TR(0x634120);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63412e;}}
}
B634122:L634122:{c.instructions+=2;NFSU2_TR(0x634122);
__builtin_memmove((R+4),(R+24),4);
}
B634124:{NFSU2_TR(0x634124);
{goto L634136;}
}
B634126:L634126:{c.instructions+=3;NFSU2_TR(0x634126);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63412a:{NFSU2_TR(0x63412a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63412c:{NFSU2_TR(0x63412c);
{goto L634136;}
}
B63412e:L63412e:{c.instructions+=2;NFSU2_TR(0x63412e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B634131:{NFSU2_TR(0x634131);
w4(R+4,u32(0x1ull));
}
B634136:L634136:{c.instructions+=4;NFSU2_TR(0x634136);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B634138:{NFSU2_TR(0x634138);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63413a:{NFSU2_TR(0x63413a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63413c:{NFSU2_TR(0x63413c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63414a;}}
}
B63413e:L63413e:{c.instructions+=1;NFSU2_TR(0x63413e);
__builtin_memmove((R+28),(R+28),4);
}
B634140:L634140:{c.instructions+=2;NFSU2_TR(0x634140);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634143:{NFSU2_TR(0x634143);
if(r1(R+518)){{goto L634154;}}
}
B634145:L634145:{c.instructions+=3;NFSU2_TR(0x634145);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B634146:{NFSU2_TR(0x634146);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634148:{NFSU2_TR(0x634148);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634140u);}goto L634140;}}
}
B63414a:L63414a:{c.instructions+=2;NFSU2_TR(0x63414a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63414c:{NFSU2_TR(0x63414c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63415a;}}
}
B63414e:L63414e:{c.instructions+=3;NFSU2_TR(0x63414e);
__builtin_memmove((R+0),(R+24),4);
}
B634150:{NFSU2_TR(0x634150);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634152:{NFSU2_TR(0x634152);
{goto L63416a;}
}
B634154:L634154:{c.instructions+=3;NFSU2_TR(0x634154);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634156:{NFSU2_TR(0x634156);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634158:{NFSU2_TR(0x634158);
{goto L63416a;}
}
B63415a:L63415a:{c.instructions+=4;NFSU2_TR(0x63415a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63415d:{NFSU2_TR(0x63415d);
w4(R+0,u32(0x1ull));
}
B634162:{NFSU2_TR(0x634162);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634164:{NFSU2_TR(0x634164);
{goto L63416a;}
}
B634166:L634166:{c.instructions+=1;NFSU2_TR(0x634166);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63416a:L63416a:{c.instructions+=4;NFSU2_TR(0x63416a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63416e:{NFSU2_TR(0x63416e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634174:{NFSU2_TR(0x634174);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634176:{NFSU2_TR(0x634176);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63417c;}}
}
B634178:L634178:{c.instructions+=2;NFSU2_TR(0x634178);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63417a:{NFSU2_TR(0x63417a);
{goto L634191;}
}
B63417c:L63417c:{c.instructions+=1;NFSU2_TR(0x63417c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634181ull));
TAIL_STATIC(0x4951f0u,495);
}
B634181:L634181:{c.instructions+=3;NFSU2_TR(0x634181);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634182:{NFSU2_TR(0x634182);
u8 U[4];
w4(U+0,u32(0x7a8a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634187:{NFSU2_TR(0x634187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63418cull));
TAIL_STATIC(0x43db80u,43d);
}
B63418c:L63418c:{c.instructions+=2;NFSU2_TR(0x63418c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63418f:{NFSU2_TR(0x63418f);
__builtin_memmove((R+28),(R+0),4);
}
B634191:L634191:{c.instructions+=4;NFSU2_TR(0x634191);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634195:{NFSU2_TR(0x634195);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63419b:{NFSU2_TR(0x63419b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63419d:{NFSU2_TR(0x63419d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6341a3;}}
}
B63419f:L63419f:{c.instructions+=2;NFSU2_TR(0x63419f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6341a1:{NFSU2_TR(0x6341a1);
{goto L6341b6;}
}
B6341a3:L6341a3:{c.instructions+=1;NFSU2_TR(0x6341a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6341a8ull));
TAIL_STATIC(0x4951f0u,495);
}
B6341a8:L6341a8:{c.instructions+=3;NFSU2_TR(0x6341a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6341a9:{NFSU2_TR(0x6341a9);
u8 U[4];
w4(U+0,u32(0x7a8b4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6341ae:{NFSU2_TR(0x6341ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6341b3ull));
TAIL_STATIC(0x43db80u,43d);
}
B6341b3:L6341b3:{c.instructions+=1;NFSU2_TR(0x6341b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6341b6:L6341b6:{c.instructions+=2;NFSU2_TR(0x6341b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6341b8:{NFSU2_TR(0x6341b8);
if(r1(R+518)){{goto L634210;}}
}
B6341ba:L6341ba:{c.instructions+=2;NFSU2_TR(0x6341ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6341bc:{NFSU2_TR(0x6341bc);
if(r1(R+518)){{goto L634210;}}
}
B6341be:L6341be:{c.instructions+=3;NFSU2_TR(0x6341be);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6341c0:{NFSU2_TR(0x6341c0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6341c2:{NFSU2_TR(0x6341c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6341ce;}}
}
B6341c4:L6341c4:{c.instructions+=2;NFSU2_TR(0x6341c4);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6341c7:{NFSU2_TR(0x6341c7);
if(r1(R+518)){{goto L6341d6;}}
}
B6341c9:L6341c9:{c.instructions+=3;NFSU2_TR(0x6341c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6341ca:{NFSU2_TR(0x6341ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6341cc:{NFSU2_TR(0x6341cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6341c4u);}goto L6341c4;}}
}
B6341ce:L6341ce:{c.instructions+=2;NFSU2_TR(0x6341ce);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6341d0:{NFSU2_TR(0x6341d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6341da;}}
}
B6341d2:L6341d2:{c.instructions+=2;NFSU2_TR(0x6341d2);
__builtin_memmove((R+4),(R+24),4);
}
B6341d4:{NFSU2_TR(0x6341d4);
{goto L6341e2;}
}
B6341d6:L6341d6:{c.instructions+=2;NFSU2_TR(0x6341d6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6341d8:{NFSU2_TR(0x6341d8);
{goto L6341e2;}
}
B6341da:L6341da:{c.instructions+=2;NFSU2_TR(0x6341da);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6341dd:{NFSU2_TR(0x6341dd);
w4(R+4,u32(0x1ull));
}
B6341e2:L6341e2:{c.instructions+=4;NFSU2_TR(0x6341e2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6341e4:{NFSU2_TR(0x6341e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6341e6:{NFSU2_TR(0x6341e6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6341e8:{NFSU2_TR(0x6341e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6341fa;}}
}
B6341ea:L6341ea:{c.instructions+=1;NFSU2_TR(0x6341ea);
__builtin_memmove((R+12),(R+12),4);
}
B6341f0:L6341f0:{c.instructions+=2;NFSU2_TR(0x6341f0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6341f3:{NFSU2_TR(0x6341f3);
if(r1(R+518)){{goto L634202;}}
}
B6341f5:L6341f5:{c.instructions+=3;NFSU2_TR(0x6341f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6341f6:{NFSU2_TR(0x6341f6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6341f8:{NFSU2_TR(0x6341f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6341f0u);}goto L6341f0;}}
}
B6341fa:L6341fa:{c.instructions+=2;NFSU2_TR(0x6341fa);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6341fc:{NFSU2_TR(0x6341fc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L634206;}}
}
B6341fe:L6341fe:{c.instructions+=2;NFSU2_TR(0x6341fe);
__builtin_memmove((R+0),(R+24),4);
}
B634200:{NFSU2_TR(0x634200);
{goto L63420e;}
}
B634202:L634202:{c.instructions+=2;NFSU2_TR(0x634202);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634204:{NFSU2_TR(0x634204);
{goto L63420e;}
}
B634206:L634206:{c.instructions+=2;NFSU2_TR(0x634206);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B634209:{NFSU2_TR(0x634209);
w4(R+0,u32(0x1ull));
}
B63420e:L63420e:{c.instructions+=1;NFSU2_TR(0x63420e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634210:L634210:{c.instructions+=4;NFSU2_TR(0x634210);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634214:{NFSU2_TR(0x634214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63421a:{NFSU2_TR(0x63421a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63421c:{NFSU2_TR(0x63421c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634222;}}
}
B63421e:L63421e:{c.instructions+=2;NFSU2_TR(0x63421e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B634220:{NFSU2_TR(0x634220);
{goto L63427f;}
}
B634222:L634222:{c.instructions+=2;NFSU2_TR(0x634222);
u8 U[4];
w4(U+0,u32(0x7a8708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634227:{NFSU2_TR(0x634227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63422cull));
TAIL_STATIC(0x43db50u,43d);
}
B63422c:L63422c:{c.instructions+=4;NFSU2_TR(0x63422c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B634230:{NFSU2_TR(0x634230);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B634233:{NFSU2_TR(0x634233);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B634238:{NFSU2_TR(0x634238);
if(r1(R+518)){{goto L634277;}}
}
B63423a:L63423a:{c.instructions+=8;NFSU2_TR(0x63423a);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B634240:{NFSU2_TR(0x634240);
w4(R+4,u32(r2(R+28)));
}
B634243:{NFSU2_TR(0x634243);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634246:{NFSU2_TR(0x634246);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B63424a:{NFSU2_TR(0x63424a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B63424d:{NFSU2_TR(0x63424d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63424f:{NFSU2_TR(0x63424f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634251:{NFSU2_TR(0x634251);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634277;}}
}
B634253:L634253:{c.instructions+=3;NFSU2_TR(0x634253);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B634256:{NFSU2_TR(0x634256);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B634259:{NFSU2_TR(0x634259);
__builtin_memmove((R+16),(R+16),4);
}
B634260:L634260:{c.instructions+=4;NFSU2_TR(0x634260);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634262:{NFSU2_TR(0x634262);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B634265:{NFSU2_TR(0x634265);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B634269:{NFSU2_TR(0x634269);
if(r1(R+518)){{goto L634298;}}
}
B63426b:L63426b:{c.instructions+=2;NFSU2_TR(0x63426b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B63426d:{NFSU2_TR(0x63426d);
if(r1(R+518)){{goto L634298;}}
}
B63426f:L63426f:{c.instructions+=4;NFSU2_TR(0x63426f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B634270:{NFSU2_TR(0x634270);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B634273:{NFSU2_TR(0x634273);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634275:{NFSU2_TR(0x634275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634260u);}goto L634260;}}
}
B634277:L634277:{c.instructions+=1;NFSU2_TR(0x634277);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B634279:L634279:{c.instructions+=2;NFSU2_TR(0x634279);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63427d:{NFSU2_TR(0x63427d);
__builtin_memmove((R+20),(R+8),4);
}
B63427f:L63427f:{c.instructions+=5;NFSU2_TR(0x63427f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634283:{NFSU2_TR(0x634283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634289:{NFSU2_TR(0x634289);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63428b:{NFSU2_TR(0x63428b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63428f:{NFSU2_TR(0x63428f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6342a1;}}
}
B634291:L634291:{c.instructions+=2;NFSU2_TR(0x634291);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634293:{NFSU2_TR(0x634293);
{goto L634324;}
}
B634298:L634298:{c.instructions+=2;NFSU2_TR(0x634298);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63429a:{NFSU2_TR(0x63429a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634277u);}goto L634277;}}
}
B63429c:L63429c:{c.instructions+=2;NFSU2_TR(0x63429c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63429f:{NFSU2_TR(0x63429f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634279u);}goto L634279;}
}
B6342a1:L6342a1:{c.instructions+=2;NFSU2_TR(0x6342a1);
u8 U[4];
w4(U+0,u32(0x7a8708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6342a6:{NFSU2_TR(0x6342a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6342abull));
TAIL_STATIC(0x43db50u,43d);
}
B6342ab:L6342ab:{c.instructions+=4;NFSU2_TR(0x6342ab);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6342af:{NFSU2_TR(0x6342af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6342b2:{NFSU2_TR(0x6342b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6342b7:{NFSU2_TR(0x6342b7);
if(r1(R+518)){{goto L6342fb;}}
}
B6342b9:L6342b9:{c.instructions+=8;NFSU2_TR(0x6342b9);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B6342bf:{NFSU2_TR(0x6342bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6342c2:{NFSU2_TR(0x6342c2);
w4(R+4,u32(r2(R+4)));
}
B6342c5:{NFSU2_TR(0x6342c5);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B6342c9:{NFSU2_TR(0x6342c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6342cc:{NFSU2_TR(0x6342cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6342ce:{NFSU2_TR(0x6342ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6342d0:{NFSU2_TR(0x6342d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6342fb;}}
}
B6342d2:L6342d2:{c.instructions+=3;NFSU2_TR(0x6342d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6342d5:{NFSU2_TR(0x6342d5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6342d8:{NFSU2_TR(0x6342d8);
{goto L6342e0;}
}
B6342e0:L6342e0:{c.instructions+=4;NFSU2_TR(0x6342e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6342e2:{NFSU2_TR(0x6342e2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B6342e5:{NFSU2_TR(0x6342e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6342e9:{NFSU2_TR(0x6342e9);
if(r1(R+518)){{goto L634305;}}
}
B6342eb:L6342eb:{c.instructions+=2;NFSU2_TR(0x6342eb);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6342ed:{NFSU2_TR(0x6342ed);
if(r1(R+518)){{goto L634305;}}
}
B6342ef:L6342ef:{c.instructions+=4;NFSU2_TR(0x6342ef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6342f0:{NFSU2_TR(0x6342f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6342f3:{NFSU2_TR(0x6342f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6342f5:{NFSU2_TR(0x6342f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6342e0u);}goto L6342e0;}}
}
B6342f7:L6342f7:{c.instructions+=1;NFSU2_TR(0x6342f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6342fb:L6342fb:{c.instructions+=1;NFSU2_TR(0x6342fb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6342fd:L6342fd:{c.instructions+=2;NFSU2_TR(0x6342fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6342ff:{NFSU2_TR(0x6342ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634312;}}
}
B634301:L634301:{c.instructions+=2;NFSU2_TR(0x634301);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634303:{NFSU2_TR(0x634303);
{goto L634320;}
}
B634305:L634305:{c.instructions+=2;NFSU2_TR(0x634305);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634307:{NFSU2_TR(0x634307);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6342f7u);}goto L6342f7;}}
}
B634309:L634309:{c.instructions+=3;NFSU2_TR(0x634309);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63430c:{NFSU2_TR(0x63430c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B634310:{NFSU2_TR(0x634310);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6342fdu);}goto L6342fd;}
}
B634312:L634312:{c.instructions+=3;NFSU2_TR(0x634312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634313:{NFSU2_TR(0x634313);
u8 U[4];
w4(U+0,u32(0x7a8718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634318:{NFSU2_TR(0x634318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63431dull));
TAIL_STATIC(0x43db80u,43d);
}
B63431d:L63431d:{c.instructions+=1;NFSU2_TR(0x63431d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634320:L634320:{c.instructions+=1;NFSU2_TR(0x634320);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B634324:L634324:{c.instructions+=3;NFSU2_TR(0x634324);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634326:{NFSU2_TR(0x634326);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B634327:{NFSU2_TR(0x634327);
if(r1(R+518)){{goto L634394;}}
}
B634329:L634329:{c.instructions+=2;NFSU2_TR(0x634329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63432b:{NFSU2_TR(0x63432b);
if(r1(R+518)){{goto L634394;}}
}
B63432d:L63432d:{c.instructions+=3;NFSU2_TR(0x63432d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63432f:{NFSU2_TR(0x63432f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634331:{NFSU2_TR(0x634331);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63433d;}}
}
B634333:L634333:{c.instructions+=2;NFSU2_TR(0x634333);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634336:{NFSU2_TR(0x634336);
if(r1(R+518)){{goto L634347;}}
}
B634338:L634338:{c.instructions+=3;NFSU2_TR(0x634338);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B634339:{NFSU2_TR(0x634339);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63433b:{NFSU2_TR(0x63433b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634333u);}goto L634333;}}
}
B63433d:L63433d:{c.instructions+=2;NFSU2_TR(0x63433d);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B634341:{NFSU2_TR(0x634341);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63434b;}}
}
B634343:L634343:{c.instructions+=2;NFSU2_TR(0x634343);
__builtin_memmove((R+4),(R+24),4);
}
B634345:{NFSU2_TR(0x634345);
{goto L634353;}
}
B634347:L634347:{c.instructions+=2;NFSU2_TR(0x634347);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B634349:{NFSU2_TR(0x634349);
{goto L634353;}
}
B63434b:L63434b:{c.instructions+=2;NFSU2_TR(0x63434b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63434e:{NFSU2_TR(0x63434e);
w4(R+4,u32(0x1ull));
}
B634353:L634353:{c.instructions+=4;NFSU2_TR(0x634353);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B634355:{NFSU2_TR(0x634355);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B634357:{NFSU2_TR(0x634357);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634359:{NFSU2_TR(0x634359);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63436a;}}
}
B63435b:L63435b:{c.instructions+=1;NFSU2_TR(0x63435b);
{goto L634360;}
}
B634360:L634360:{c.instructions+=2;NFSU2_TR(0x634360);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634363:{NFSU2_TR(0x634363);
if(r1(R+518)){{goto L63437d;}}
}
B634365:L634365:{c.instructions+=3;NFSU2_TR(0x634365);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B634366:{NFSU2_TR(0x634366);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634368:{NFSU2_TR(0x634368);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634360u);}goto L634360;}}
}
B63436a:L63436a:{c.instructions+=2;NFSU2_TR(0x63436a);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B63436e:{NFSU2_TR(0x63436e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63438a;}}
}
B634370:L634370:{c.instructions+=8;NFSU2_TR(0x634370);
__builtin_memmove((R+0),(R+24),4);
}
B634372:{NFSU2_TR(0x634372);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634374:{NFSU2_TR(0x634374);
__builtin_memmove((R+0),(R+24),4);
}
B634376:{NFSU2_TR(0x634376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634377:{NFSU2_TR(0x634377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B634378:{NFSU2_TR(0x634378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B634379:{NFSU2_TR(0x634379);
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
B63437c:{NFSU2_TR(0x63437c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63437d:L63437d:{c.instructions+=8;NFSU2_TR(0x63437d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63437f:{NFSU2_TR(0x63437f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634381:{NFSU2_TR(0x634381);
__builtin_memmove((R+0),(R+24),4);
}
B634383:{NFSU2_TR(0x634383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634384:{NFSU2_TR(0x634384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B634385:{NFSU2_TR(0x634385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B634386:{NFSU2_TR(0x634386);
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
B634389:{NFSU2_TR(0x634389);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63438a:L63438a:{c.instructions+=3;NFSU2_TR(0x63438a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B63438d:{NFSU2_TR(0x63438d);
w4(R+0,u32(0x1ull));
}
B634392:{NFSU2_TR(0x634392);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B634394:L634394:{c.instructions+=6;NFSU2_TR(0x634394);
__builtin_memmove((R+0),(R+24),4);
}
B634396:{NFSU2_TR(0x634396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634397:{NFSU2_TR(0x634397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B634398:{NFSU2_TR(0x634398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B634399:{NFSU2_TR(0x634399);
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
B63439c:{NFSU2_TR(0x63439c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6343a0:L6343a0:{c.instructions+=8;NFSU2_TR(0x6343a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343a1:{NFSU2_TR(0x6343a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343a2:{NFSU2_TR(0x6343a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6343a6:{NFSU2_TR(0x6343a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6343ac:{NFSU2_TR(0x6343ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6343ae:{NFSU2_TR(0x6343ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x588ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6343b4:{NFSU2_TR(0x6343b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343b5:{NFSU2_TR(0x6343b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6343bb;}}
}
B6343b7:L6343b7:{c.instructions+=2;NFSU2_TR(0x6343b7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6343b9:{NFSU2_TR(0x6343b9);
{goto L6343d0;}
}
B6343bb:L6343bb:{c.instructions+=1;NFSU2_TR(0x6343bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6343c0ull));
TAIL_STATIC(0x4951f0u,495);
}
B6343c0:L6343c0:{c.instructions+=3;NFSU2_TR(0x6343c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343c1:{NFSU2_TR(0x6343c1);
u8 U[4];
w4(U+0,u32(0x7a8a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343c6:{NFSU2_TR(0x6343c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6343cbull));
TAIL_STATIC(0x43db80u,43d);
}
B6343cb:L6343cb:{c.instructions+=2;NFSU2_TR(0x6343cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6343ce:{NFSU2_TR(0x6343ce);
__builtin_memmove((R+28),(R+0),4);
}
B6343d0:L6343d0:{c.instructions+=3;NFSU2_TR(0x6343d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6343d6:{NFSU2_TR(0x6343d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6343d8:{NFSU2_TR(0x6343d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6343ee;}}
}
B6343da:L6343da:{c.instructions+=7;NFSU2_TR(0x6343da);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343dc:{NFSU2_TR(0x6343dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6343de:{NFSU2_TR(0x6343de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343df:{NFSU2_TR(0x6343df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343e0:{NFSU2_TR(0x6343e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343e1:{NFSU2_TR(0x6343e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343e2:{NFSU2_TR(0x6343e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6343e7ull));
TAIL_STATIC(0x61de90u,61d);
}
B6343e7:L6343e7:{c.instructions+=5;NFSU2_TR(0x6343e7);
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
B6343ea:{NFSU2_TR(0x6343ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6343eb:{NFSU2_TR(0x6343eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6343ec:{NFSU2_TR(0x6343ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6343ed:{NFSU2_TR(0x6343ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6343ee:L6343ee:{c.instructions+=1;NFSU2_TR(0x6343ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6343f3ull));
TAIL_STATIC(0x4951f0u,495);
}
B6343f3:L6343f3:{c.instructions+=3;NFSU2_TR(0x6343f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343f4:{NFSU2_TR(0x6343f4);
u8 U[4];
w4(U+0,u32(0x7a8b4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6343f9:{NFSU2_TR(0x6343f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6343feull));
TAIL_STATIC(0x43db80u,43d);
}
B6343fe:L6343fe:{c.instructions+=7;NFSU2_TR(0x6343fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634401:{NFSU2_TR(0x634401);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634403:{NFSU2_TR(0x634403);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634404:{NFSU2_TR(0x634404);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634405:{NFSU2_TR(0x634405);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634406:{NFSU2_TR(0x634406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634407:{NFSU2_TR(0x634407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63440cull));
TAIL_STATIC(0x61de90u,61d);
}
B63440c:L63440c:{c.instructions+=5;NFSU2_TR(0x63440c);
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
B63440f:{NFSU2_TR(0x63440f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B634410:{NFSU2_TR(0x634410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634411:{NFSU2_TR(0x634411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B634412:{NFSU2_TR(0x634412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634420:L634420:{c.instructions+=5;NFSU2_TR(0x634420);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634421:{NFSU2_TR(0x634421);
__builtin_memmove((R+24),(R+4),4);
}
B634423:{NFSU2_TR(0x634423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634425:{NFSU2_TR(0x634425);
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
B634427:{NFSU2_TR(0x634427);
if(r1(R+518)){{goto L63444f;}}
}
B634429:L634429:{c.instructions+=1;NFSU2_TR(0x634429);
__builtin_memmove((R+16),(R+16),4);
}
B634430:L634430:{c.instructions+=8;NFSU2_TR(0x634430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634432:{NFSU2_TR(0x634432);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634435:{NFSU2_TR(0x634435);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B634437:{NFSU2_TR(0x634437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634438:{NFSU2_TR(0x634438);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63443b:{NFSU2_TR(0x63443b);
__builtin_memmove((R+0),gp(0x8a1cf8),4);
}
B634440:{NFSU2_TR(0x634440);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634441:{NFSU2_TR(0x634441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634446ull));
TAIL_STATIC(0x43f920u,43f);
}
B634446:L634446:{c.instructions+=4;NFSU2_TR(0x634446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634448:{NFSU2_TR(0x634448);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63444b:{NFSU2_TR(0x63444b);
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
B63444d:{NFSU2_TR(0x63444d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634430u);}goto L634430;}}
}
B63444f:L63444f:{c.instructions+=2;NFSU2_TR(0x63444f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634450:{NFSU2_TR(0x634450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634460:L634460:{c.instructions+=5;NFSU2_TR(0x634460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634461:{NFSU2_TR(0x634461);
__builtin_memmove((R+24),(R+4),4);
}
B634463:{NFSU2_TR(0x634463);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634465:{NFSU2_TR(0x634465);
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
B634467:{NFSU2_TR(0x634467);
if(r1(R+518)){{goto L63448f;}}
}
B634469:L634469:{c.instructions+=1;NFSU2_TR(0x634469);
__builtin_memmove((R+16),(R+16),4);
}
B634470:L634470:{c.instructions+=8;NFSU2_TR(0x634470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634472:{NFSU2_TR(0x634472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634475:{NFSU2_TR(0x634475);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B634477:{NFSU2_TR(0x634477);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634478:{NFSU2_TR(0x634478);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63447b:{NFSU2_TR(0x63447b);
__builtin_memmove((R+0),gp(0x8a1cf4),4);
}
B634480:{NFSU2_TR(0x634480);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634481:{NFSU2_TR(0x634481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634486ull));
TAIL_STATIC(0x43f920u,43f);
}
B634486:L634486:{c.instructions+=4;NFSU2_TR(0x634486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634488:{NFSU2_TR(0x634488);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63448b:{NFSU2_TR(0x63448b);
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
B63448d:{NFSU2_TR(0x63448d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634470u);}goto L634470;}}
}
B63448f:L63448f:{c.instructions+=2;NFSU2_TR(0x63448f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634490:{NFSU2_TR(0x634490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6344a0:L6344a0:{c.instructions+=5;NFSU2_TR(0x6344a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6344a1:{NFSU2_TR(0x6344a1);
__builtin_memmove((R+24),(R+4),4);
}
B6344a3:{NFSU2_TR(0x6344a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6344a5:{NFSU2_TR(0x6344a5);
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
B6344a7:{NFSU2_TR(0x6344a7);
if(r1(R+518)){{goto L6344cf;}}
}
B6344a9:L6344a9:{c.instructions+=1;NFSU2_TR(0x6344a9);
__builtin_memmove((R+16),(R+16),4);
}
B6344b0:L6344b0:{c.instructions+=8;NFSU2_TR(0x6344b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6344b2:{NFSU2_TR(0x6344b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6344b5:{NFSU2_TR(0x6344b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6344b7:{NFSU2_TR(0x6344b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6344b8:{NFSU2_TR(0x6344b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6344bb:{NFSU2_TR(0x6344bb);
__builtin_memmove((R+0),gp(0x8a1cfc),4);
}
B6344c0:{NFSU2_TR(0x6344c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6344c1:{NFSU2_TR(0x6344c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6344c6ull));
TAIL_STATIC(0x43f920u,43f);
}
B6344c6:L6344c6:{c.instructions+=4;NFSU2_TR(0x6344c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6344c8:{NFSU2_TR(0x6344c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6344cb:{NFSU2_TR(0x6344cb);
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
B6344cd:{NFSU2_TR(0x6344cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6344b0u);}goto L6344b0;}}
}
B6344cf:L6344cf:{c.instructions+=2;NFSU2_TR(0x6344cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6344d0:{NFSU2_TR(0x6344d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6344e0:L6344e0:{c.instructions+=6;NFSU2_TR(0x6344e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6344e1:{NFSU2_TR(0x6344e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6344e2:{NFSU2_TR(0x6344e2);
__builtin_memmove((R+28),(R+4),4);
}
B6344e4:{NFSU2_TR(0x6344e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6344e6:{NFSU2_TR(0x6344e6);
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
B6344e8:{NFSU2_TR(0x6344e8);
if(r1(R+518)){{goto L634516;}}
}
B6344ea:L6344ea:{c.instructions+=1;NFSU2_TR(0x6344ea);
__builtin_memmove((R+12),(R+12),4);
}
B6344f0:L6344f0:{c.instructions+=6;NFSU2_TR(0x6344f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6344f3:{NFSU2_TR(0x6344f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6344f5:{NFSU2_TR(0x6344f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6344f7:{NFSU2_TR(0x6344f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6344fa:{NFSU2_TR(0x6344fa);
__builtin_memmove((R+4),(R+24),4);
}
B6344fc:{NFSU2_TR(0x6344fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634501ull));
TAIL_STATIC(0x61cae0u,61c);
}
B634501:L634501:{c.instructions+=4;NFSU2_TR(0x634501);
__builtin_memmove((R+0),gp(0x8a1d00),4);
}
B634506:{NFSU2_TR(0x634506);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634507:{NFSU2_TR(0x634507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634508:{NFSU2_TR(0x634508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63450dull));
TAIL_STATIC(0x43f920u,43f);
}
B63450d:L63450d:{c.instructions+=4;NFSU2_TR(0x63450d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63450f:{NFSU2_TR(0x63450f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634512:{NFSU2_TR(0x634512);
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
B634514:{NFSU2_TR(0x634514);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6344f0u);}goto L6344f0;}}
}
B634516:L634516:{c.instructions+=3;NFSU2_TR(0x634516);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B634517:{NFSU2_TR(0x634517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634518:{NFSU2_TR(0x634518);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634520:L634520:{c.instructions+=12;NFSU2_TR(0x634520);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634522:{NFSU2_TR(0x634522);
u8 U[4];
w4(U+0,u32(0x77a21bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634527:{NFSU2_TR(0x634527);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63452d:{NFSU2_TR(0x63452d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63452e:{NFSU2_TR(0x63452e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634535:{NFSU2_TR(0x634535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634536:{NFSU2_TR(0x634536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634537:{NFSU2_TR(0x634537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634538:{NFSU2_TR(0x634538);
__builtin_memmove((R+28),(R+4),4);
}
B63453a:{NFSU2_TR(0x63453a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63453e:{NFSU2_TR(0x63453e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634546:{NFSU2_TR(0x634546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63454bull));
TAIL_STATIC(0x6147a0u,614);
}
B63454b:L63454b:{c.instructions+=3;NFSU2_TR(0x63454b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B634551:{NFSU2_TR(0x634551);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634553:{NFSU2_TR(0x634553);
if(r1(R+518)){{goto L63458e;}}
}
B634555:L634555:{c.instructions+=7;NFSU2_TR(0x634555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634557:{NFSU2_TR(0x634557);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63455a:{NFSU2_TR(0x63455a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63455c:{NFSU2_TR(0x63455c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63455f:{NFSU2_TR(0x63455f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634569:{NFSU2_TR(0x634569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63456f:{NFSU2_TR(0x63456f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63458e;}}
}
B634571:L634571:{c.instructions+=2;NFSU2_TR(0x634571);
__builtin_memmove((R+4),(R+24),4);
}
B634573:{NFSU2_TR(0x634573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634578ull));
TAIL_STATIC(0x61f4a0u,61f);
}
B634578:L634578:{c.instructions+=5;NFSU2_TR(0x634578);
__builtin_memmove((R+0),gp(0x8a2b54),4);
}
B63457d:{NFSU2_TR(0x63457d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63457f:{NFSU2_TR(0x63457f);
__builtin_memmove(gp(0x8a2b54),(R+24),4);
}
B634585:{NFSU2_TR(0x634585);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634588:{NFSU2_TR(0x634588);
u8 U[4];
w4(U+0,u32(0x8a2b50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B63458e:L63458e:{c.instructions+=3;NFSU2_TR(0x63458e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634591:{NFSU2_TR(0x634591);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B634599:{NFSU2_TR(0x634599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63459eull));
TAIL_STATIC(0x637ed0u,637);
}
B63459e:L63459e:{c.instructions+=6;NFSU2_TR(0x63459e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6345a2:{NFSU2_TR(0x6345a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6345a3:{NFSU2_TR(0x6345a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6345a4:{NFSU2_TR(0x6345a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6345ab:{NFSU2_TR(0x6345ab);
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
B6345ae:{NFSU2_TR(0x6345ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6345b0:L6345b0:{c.instructions+=8;NFSU2_TR(0x6345b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6345b1:{NFSU2_TR(0x6345b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6345b5:{NFSU2_TR(0x6345b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6345b6:{NFSU2_TR(0x6345b6);
__builtin_memmove((R+24),(R+4),4);
}
B6345b8:{NFSU2_TR(0x6345b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6345b9:{NFSU2_TR(0x6345b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6345bf:{NFSU2_TR(0x6345bf);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6345c1:{NFSU2_TR(0x6345c1);
if(r1(R+518)){{goto L634620;}}
}
B6345c3:L6345c3:{c.instructions+=2;NFSU2_TR(0x6345c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6345c5:{NFSU2_TR(0x6345c5);
if(r1(R+518)){{goto L634600;}}
}
B6345c7:L6345c7:{c.instructions+=7;NFSU2_TR(0x6345c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6345c9:{NFSU2_TR(0x6345c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6345cc:{NFSU2_TR(0x6345cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6345ce:{NFSU2_TR(0x6345ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6345d1:{NFSU2_TR(0x6345d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6345db:{NFSU2_TR(0x6345db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6345e1:{NFSU2_TR(0x6345e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634600;}}
}
B6345e3:L6345e3:{c.instructions+=2;NFSU2_TR(0x6345e3);
__builtin_memmove((R+4),(R+28),4);
}
B6345e5:{NFSU2_TR(0x6345e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6345eaull));
TAIL_STATIC(0x61f4a0u,61f);
}
B6345ea:L6345ea:{c.instructions+=5;NFSU2_TR(0x6345ea);
__builtin_memmove((R+0),gp(0x8a2b54),4);
}
B6345ef:{NFSU2_TR(0x6345ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6345f1:{NFSU2_TR(0x6345f1);
__builtin_memmove(gp(0x8a2b54),(R+28),4);
}
B6345f7:{NFSU2_TR(0x6345f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6345fa:{NFSU2_TR(0x6345fa);
u8 U[4];
w4(U+0,u32(0x8a2b50ull));
s4(u32(r4(R+28)),r4(U+0));
}
B634600:L634600:{c.instructions+=2;NFSU2_TR(0x634600);
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
B634602:{NFSU2_TR(0x634602);
if(r1(R+518)){{goto L634620;}}
}
B634604:L634604:{c.instructions+=8;NFSU2_TR(0x634604);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634607:{NFSU2_TR(0x634607);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63460a:{NFSU2_TR(0x63460a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63460c:{NFSU2_TR(0x63460c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63460f:{NFSU2_TR(0x63460f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B634611:{NFSU2_TR(0x634611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634614:{NFSU2_TR(0x634614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63461a:{NFSU2_TR(0x63461a);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd8ull))));
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
B634620:L634620:{c.instructions+=4;NFSU2_TR(0x634620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B634621:{NFSU2_TR(0x634621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B634622:{NFSU2_TR(0x634622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B634623:{NFSU2_TR(0x634623);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634630:L634630:{c.instructions+=16;NFSU2_TR(0x634630);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634632:{NFSU2_TR(0x634632);
u8 U[4];
w4(U+0,u32(0x77a2dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634637:{NFSU2_TR(0x634637);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63463d:{NFSU2_TR(0x63463d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63463e:{NFSU2_TR(0x63463e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634645:{NFSU2_TR(0x634645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B634648:{NFSU2_TR(0x634648);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634649:{NFSU2_TR(0x634649);
__builtin_memmove((R+20),(R+4),4);
}
B63464b:{NFSU2_TR(0x63464b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63464c:{NFSU2_TR(0x63464c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634650:{NFSU2_TR(0x634650);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634651:{NFSU2_TR(0x634651);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634659:{NFSU2_TR(0x634659);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63465f:{NFSU2_TR(0x63465f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B634667:{NFSU2_TR(0x634667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634668:{NFSU2_TR(0x634668);
{goto L634670;}
}
B634670:L634670:{c.instructions+=1;NFSU2_TR(0x634670);
w4(R+12,u32(0x2ull));
}
B634675:L634675:{c.instructions+=2;NFSU2_TR(0x634675);
w4(R+28,u32(0x4ull));
}
B63467a:{NFSU2_TR(0x63467a);
__builtin_memmove((R+12),(R+12),4);
}
B634680:L634680:{c.instructions+=3;NFSU2_TR(0x634680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634682:{NFSU2_TR(0x634682);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634684:{NFSU2_TR(0x634684);
if(r1(R+518)){{goto L6346a6;}}
}
B634686:L634686:{c.instructions+=3;NFSU2_TR(0x634686);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634689:{NFSU2_TR(0x634689);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63468b:{NFSU2_TR(0x63468b);
if(r1(R+518)){{goto L6346a6;}}
}
B63468d:L63468d:{c.instructions+=1;NFSU2_TR(0x63468d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634692ull));
TAIL_STATIC(0x4903b0u,490);
}
B634692:L634692:{c.instructions+=4;NFSU2_TR(0x634692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634694:{NFSU2_TR(0x634694);
__builtin_memmove((R+4),gp(0x8a1be4),4);
}
B63469a:{NFSU2_TR(0x63469a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63469b:{NFSU2_TR(0x63469b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6346a0ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B6346a0:L6346a0:{c.instructions+=1;NFSU2_TR(0x6346a0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6346a6:L6346a6:{c.instructions+=3;NFSU2_TR(0x6346a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6346a9:{NFSU2_TR(0x6346a9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6346aa:{NFSU2_TR(0x6346aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634680u);}goto L634680;}}
}
B6346ac:L6346ac:{c.instructions+=2;NFSU2_TR(0x6346ac);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6346ad:{NFSU2_TR(0x6346ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634675u);}goto L634675;}}
}
B6346af:L6346af:{c.instructions+=2;NFSU2_TR(0x6346af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6346b3:{NFSU2_TR(0x6346b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634670u);}goto L634670;}}
}
B6346b5:L6346b5:{c.instructions+=5;NFSU2_TR(0x6346b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2d49ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6346bb:{NFSU2_TR(0x6346bb);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6346bd:{NFSU2_TR(0x6346bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6346be:{NFSU2_TR(0x6346be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6346bf:{NFSU2_TR(0x6346bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6346cf;}}
}
B6346c1:L6346c1:{c.instructions+=2;NFSU2_TR(0x6346c1);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0xcull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xcull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6346c3:{NFSU2_TR(0x6346c3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6346cf;}}
}
B6346c5:L6346c5:{c.instructions+=2;NFSU2_TR(0x6346c5);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B6346c8:{NFSU2_TR(0x6346c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8a05d4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6346cf:L6346cf:{c.instructions+=3;NFSU2_TR(0x6346cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2d4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6346d5:{NFSU2_TR(0x6346d5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6346d7:{NFSU2_TR(0x6346d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6346e7;}}
}
B6346d9:L6346d9:{c.instructions+=2;NFSU2_TR(0x6346d9);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0xcull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xcull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6346db:{NFSU2_TR(0x6346db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6346e7;}}
}
B6346dd:L6346dd:{c.instructions+=2;NFSU2_TR(0x6346dd);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B6346e0:{NFSU2_TR(0x6346e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8a05d4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6346e7:L6346e7:{c.instructions+=7;NFSU2_TR(0x6346e7);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6346ec:{NFSU2_TR(0x6346ec);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6346ee:{NFSU2_TR(0x6346ee);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6346f0:{NFSU2_TR(0x6346f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2b74ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6346f6:{NFSU2_TR(0x6346f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6346f7:{NFSU2_TR(0x6346f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6346fc:{NFSU2_TR(0x6346fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634701ull));
TAIL_STATIC(0x75c401u,75c);
}
B634701:L634701:{c.instructions+=7;NFSU2_TR(0x634701);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634706:{NFSU2_TR(0x634706);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634708:{NFSU2_TR(0x634708);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63470a:{NFSU2_TR(0x63470a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2274ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634710:{NFSU2_TR(0x634710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634711:{NFSU2_TR(0x634711);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634716:{NFSU2_TR(0x634716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63471bull));
TAIL_STATIC(0x75c401u,75c);
}
B63471b:L63471b:{c.instructions+=7;NFSU2_TR(0x63471b);
u8 U[4];
w4(U+0,u32(0x4903b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634720:{NFSU2_TR(0x634720);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634722:{NFSU2_TR(0x634722);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634724:{NFSU2_TR(0x634724);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x21b4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63472a:{NFSU2_TR(0x63472a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63472b:{NFSU2_TR(0x63472b);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634730:{NFSU2_TR(0x634730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634735ull));
TAIL_STATIC(0x75c401u,75c);
}
B634735:L634735:{c.instructions+=7;NFSU2_TR(0x634735);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63473a:{NFSU2_TR(0x63473a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63473c:{NFSU2_TR(0x63473c);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63473e:{NFSU2_TR(0x63473e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B634744:{NFSU2_TR(0x634744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634745:{NFSU2_TR(0x634745);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63474a:{NFSU2_TR(0x63474a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63474full));
TAIL_STATIC(0x75c401u,75c);
}
B63474f:L63474f:{c.instructions+=5;NFSU2_TR(0x63474f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634755:{NFSU2_TR(0x634755);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63475b:{NFSU2_TR(0x63475b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63475d:{NFSU2_TR(0x63475d);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634762:{NFSU2_TR(0x634762);
if(r1(R+518)){{goto L63477d;}}
}
B634764:L634764:{c.instructions+=6;NFSU2_TR(0x634764);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634766:{NFSU2_TR(0x634766);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634769:{NFSU2_TR(0x634769);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63476b:{NFSU2_TR(0x63476b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63476c:{NFSU2_TR(0x63476c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63476f:{NFSU2_TR(0x63476f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634774ull));
TAIL_STATIC(0x575630u,575);
}
B634774:L634774:{c.instructions+=4;NFSU2_TR(0x634774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B634776:{NFSU2_TR(0x634776);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B634779:{NFSU2_TR(0x634779);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63477b:{NFSU2_TR(0x63477b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634764u);}goto L634764;}}
}
B63477d:L63477d:{c.instructions+=7;NFSU2_TR(0x63477d);
u8 U[4];
w4(U+0,u32(0x61f470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634782:{NFSU2_TR(0x634782);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634784:{NFSU2_TR(0x634784);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634786:{NFSU2_TR(0x634786);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x548ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63478c:{NFSU2_TR(0x63478c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63478d:{NFSU2_TR(0x63478d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634792:{NFSU2_TR(0x634792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634797ull));
TAIL_STATIC(0x75c401u,75c);
}
B634797:L634797:{c.instructions+=7;NFSU2_TR(0x634797);
u8 U[4];
w4(U+0,u32(0x4367c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63479c:{NFSU2_TR(0x63479c);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63479e:{NFSU2_TR(0x63479e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6347a0:{NFSU2_TR(0x6347a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x458ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6347a6:{NFSU2_TR(0x6347a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6347a7:{NFSU2_TR(0x6347a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6347ac:{NFSU2_TR(0x6347ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6347b1ull));
TAIL_STATIC(0x75c401u,75c);
}
B6347b1:L6347b1:{c.instructions+=5;NFSU2_TR(0x6347b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6347b7:{NFSU2_TR(0x6347b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3f0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6347bd:{NFSU2_TR(0x6347bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6347bf:{NFSU2_TR(0x6347bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6347c7:{NFSU2_TR(0x6347c7);
if(r1(R+518)){{goto L6347e9;}}
}
B6347c9:L6347c9:{c.instructions+=1;NFSU2_TR(0x6347c9);
__builtin_memmove((R+16),(R+16),4);
}
B6347d0:L6347d0:{c.instructions+=6;NFSU2_TR(0x6347d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6347d2:{NFSU2_TR(0x6347d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6347d5:{NFSU2_TR(0x6347d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6347d7:{NFSU2_TR(0x6347d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6347d8:{NFSU2_TR(0x6347d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6347db:{NFSU2_TR(0x6347db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6347e0ull));
TAIL_STATIC(0x575630u,575);
}
B6347e0:L6347e0:{c.instructions+=4;NFSU2_TR(0x6347e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6347e2:{NFSU2_TR(0x6347e2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6347e5:{NFSU2_TR(0x6347e5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6347e7:{NFSU2_TR(0x6347e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6347d0u);}goto L6347d0;}}
}
B6347e9:L6347e9:{c.instructions+=6;NFSU2_TR(0x6347e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6347ed:{NFSU2_TR(0x6347ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6347ee:{NFSU2_TR(0x6347ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6347ef:{NFSU2_TR(0x6347ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6347f6:{NFSU2_TR(0x6347f6);
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
B6347f9:{NFSU2_TR(0x6347f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B634800:L634800:{c.instructions+=19;NFSU2_TR(0x634800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634801:{NFSU2_TR(0x634801);
__builtin_memmove((R+20),(R+16),4);
}
B634803:{NFSU2_TR(0x634803);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B634806:{NFSU2_TR(0x634806);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634808:{NFSU2_TR(0x634808);
u8 U[4];
w4(U+0,u32(0x77a2feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63480d:{NFSU2_TR(0x63480d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634813:{NFSU2_TR(0x634813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634814:{NFSU2_TR(0x634814);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63481b:{NFSU2_TR(0x63481b);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xd8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xd8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B634821:{NFSU2_TR(0x634821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634822:{NFSU2_TR(0x634822);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634823:{NFSU2_TR(0x634823);
__builtin_memmove((R+24),(R+4),4);
}
B634825:{NFSU2_TR(0x634825);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634826:{NFSU2_TR(0x634826);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634829:{NFSU2_TR(0x634829);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63482c:{NFSU2_TR(0x63482c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63482d:{NFSU2_TR(0x63482d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63482e:{NFSU2_TR(0x63482e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634832:{NFSU2_TR(0x634832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634837ull));
TAIL_STATIC(0x43d510u,43d);
}
B634837:L634837:{c.instructions+=6;NFSU2_TR(0x634837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63483a:{NFSU2_TR(0x63483a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63483d:{NFSU2_TR(0x63483d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634841:{NFSU2_TR(0x634841);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x17a8ull))));
}
B634847:{NFSU2_TR(0x634847);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B63484f:{NFSU2_TR(0x63484f);
}
B634850:L634850:{c.instructions+=1;NFSU2_TR(0x634850);
w4(R+12,u32(0x2ull));
}
B634855:L634855:{c.instructions+=2;NFSU2_TR(0x634855);
w4(R+28,u32(0x4ull));
}
B63485a:{NFSU2_TR(0x63485a);
__builtin_memmove((R+12),(R+12),4);
}
B634860:L634860:{c.instructions+=3;NFSU2_TR(0x634860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634862:{NFSU2_TR(0x634862);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634864:{NFSU2_TR(0x634864);
if(r1(R+518)){{goto L634886;}}
}
B634866:L634866:{c.instructions+=3;NFSU2_TR(0x634866);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634869:{NFSU2_TR(0x634869);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63486b:{NFSU2_TR(0x63486b);
if(r1(R+518)){{goto L634886;}}
}
B63486d:L63486d:{c.instructions+=1;NFSU2_TR(0x63486d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634872ull));
TAIL_STATIC(0x4903b0u,490);
}
B634872:L634872:{c.instructions+=4;NFSU2_TR(0x634872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B634874:{NFSU2_TR(0x634874);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634875:{NFSU2_TR(0x634875);
__builtin_memmove((R+4),gp(0x8a1be4),4);
}
B63487b:{NFSU2_TR(0x63487b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634880ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B634880:L634880:{c.instructions+=1;NFSU2_TR(0x634880);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B634886:L634886:{c.instructions+=3;NFSU2_TR(0x634886);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B634889:{NFSU2_TR(0x634889);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B63488a:{NFSU2_TR(0x63488a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634860u);}goto L634860;}}
}
B63488c:L63488c:{c.instructions+=2;NFSU2_TR(0x63488c);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B63488d:{NFSU2_TR(0x63488d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634855u);}goto L634855;}}
}
B63488f:L63488f:{c.instructions+=2;NFSU2_TR(0x63488f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634893:{NFSU2_TR(0x634893);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634850u);}goto L634850;}}
}
B634895:L634895:{c.instructions+=2;NFSU2_TR(0x634895);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63489d:{NFSU2_TR(0x63489d);
__builtin_memmove((R+4),(R+4),4);
}
B6348a0:L6348a0:{c.instructions+=6;NFSU2_TR(0x6348a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6348a4:{NFSU2_TR(0x6348a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6348a8:{NFSU2_TR(0x6348a8);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6348af:{NFSU2_TR(0x6348af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6348b1:{NFSU2_TR(0x6348b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6348b5:{NFSU2_TR(0x6348b5);
if(r1(R+518)){{goto L634ee0;}}
}
B6348bb:L6348bb:{c.instructions+=3;NFSU2_TR(0x6348bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6348bf:{NFSU2_TR(0x6348bf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x23ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x23ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6348c2:{NFSU2_TR(0x6348c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6348cd;}}
}
B6348c4:L6348c4:{c.instructions+=2;NFSU2_TR(0x6348c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6348c7:{NFSU2_TR(0x6348c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634ee0;}}
}
B6348cd:L6348cd:{c.instructions+=2;NFSU2_TR(0x6348cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6348d5:{NFSU2_TR(0x6348d5);
{goto L6348e0;}
}
B6348e0:L6348e0:{c.instructions+=4;NFSU2_TR(0x6348e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6348e4:{NFSU2_TR(0x6348e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6348e8:{NFSU2_TR(0x6348e8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6348ec:{NFSU2_TR(0x6348ec);
if(r1(R+518)){{goto L634983;}}
}
B6348f2:L6348f2:{c.instructions+=8;NFSU2_TR(0x6348f2);
__builtin_memmove((R+12),gp(0x8a1cc8),4);
}
B6348f8:{NFSU2_TR(0x6348f8);
w4(R+0,u32(r2(R+0)));
}
B6348fb:{NFSU2_TR(0x6348fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6348fe:{NFSU2_TR(0x6348fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634901:{NFSU2_TR(0x634901);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B634904:{NFSU2_TR(0x634904);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B634907:{NFSU2_TR(0x634907);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B634909:{NFSU2_TR(0x634909);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634912;}}
}
B63490b:L63490b:{c.instructions+=2;NFSU2_TR(0x63490b);
w4(R+0,u32(0xffffffffull));
}
B634910:{NFSU2_TR(0x634910);
{goto L63492a;}
}
B634912:L634912:{c.instructions+=2;NFSU2_TR(0x634912);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B634914:{NFSU2_TR(0x634914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634925;}}
}
B634916:L634916:{c.instructions+=4;NFSU2_TR(0x634916);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B63491a:{NFSU2_TR(0x63491a);
__builtin_memmove((R+8),gp(0x8a1cb8),4);
}
B634920:{NFSU2_TR(0x634920);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B634923:{NFSU2_TR(0x634923);
{goto L63492a;}
}
B634925:L634925:{c.instructions+=1;NFSU2_TR(0x634925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63492aull));
TAIL_STATIC(0x4fe110u,4fe);
}
B63492a:L63492a:{c.instructions+=5;NFSU2_TR(0x63492a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63492e:{NFSU2_TR(0x63492e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B634931:{NFSU2_TR(0x634931);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B634935:{NFSU2_TR(0x634935);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B634938:{NFSU2_TR(0x634938);
if(r1(R+518)){{goto L634983;}}
}
B63493a:L63493a:{c.instructions+=2;NFSU2_TR(0x63493a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B63493d:{NFSU2_TR(0x63493d);
if(r1(R+518)){{goto L634983;}}
}
B63493f:L63493f:{c.instructions+=6;NFSU2_TR(0x63493f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B634943:{NFSU2_TR(0x634943);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B634948:{NFSU2_TR(0x634948);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B63494d:{NFSU2_TR(0x63494d);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
w1(U+4,u8(0x42ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634952:{NFSU2_TR(0x634952);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634957:{NFSU2_TR(0x634957);
if(r1(R+518)){{goto L63496c;}}
}
B634959:L634959:{c.instructions+=6;NFSU2_TR(0x634959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63495a:{NFSU2_TR(0x63495a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63495d:{NFSU2_TR(0x63495d);
w4(R+8,u32(r2(R+4)));
}
B634960:{NFSU2_TR(0x634960);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B634963:{NFSU2_TR(0x634963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634964:{NFSU2_TR(0x634964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634969ull));
TAIL_STATIC(0x43db80u,43d);
}
B634969:L634969:{c.instructions+=1;NFSU2_TR(0x634969);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63496c:L63496c:{c.instructions+=4;NFSU2_TR(0x63496c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63496e:{NFSU2_TR(0x63496e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63496f:{NFSU2_TR(0x63496f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634970:{NFSU2_TR(0x634970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634975ull));
TAIL_STATIC(0x43db80u,43d);
}
B634975:L634975:{c.instructions+=4;NFSU2_TR(0x634975);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634976:{NFSU2_TR(0x634976);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63497a:{NFSU2_TR(0x63497a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63497b:{NFSU2_TR(0x63497b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634980ull));
TAIL_STATIC(0x43db80u,43d);
}
B634980:L634980:{c.instructions+=1;NFSU2_TR(0x634980);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B634983:L634983:{c.instructions+=2;NFSU2_TR(0x634983);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63498b:{NFSU2_TR(0x63498b);
{goto L634990;}
}
B634990:L634990:{c.instructions+=4;NFSU2_TR(0x634990);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634994:{NFSU2_TR(0x634994);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B634998:{NFSU2_TR(0x634998);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B63499c:{NFSU2_TR(0x63499c);
if(r1(R+518)){{goto L634e63;}}
}
B6349a2:L6349a2:{c.instructions+=8;NFSU2_TR(0x6349a2);
__builtin_memmove((R+12),gp(0x8a1cc8),4);
}
B6349a8:{NFSU2_TR(0x6349a8);
w4(R+0,u32(r2(R+0)));
}
B6349ab:{NFSU2_TR(0x6349ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6349ae:{NFSU2_TR(0x6349ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6349b1:{NFSU2_TR(0x6349b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6349b4:{NFSU2_TR(0x6349b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6349b7:{NFSU2_TR(0x6349b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6349b9:{NFSU2_TR(0x6349b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6349c2;}}
}
B6349bb:L6349bb:{c.instructions+=2;NFSU2_TR(0x6349bb);
w4(R+0,u32(0xffffffffull));
}
B6349c0:{NFSU2_TR(0x6349c0);
{goto L6349da;}
}
B6349c2:L6349c2:{c.instructions+=2;NFSU2_TR(0x6349c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6349c4:{NFSU2_TR(0x6349c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6349d5;}}
}
B6349c6:L6349c6:{c.instructions+=4;NFSU2_TR(0x6349c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6349ca:{NFSU2_TR(0x6349ca);
__builtin_memmove((R+8),gp(0x8a1cb8),4);
}
B6349d0:{NFSU2_TR(0x6349d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6349d3:{NFSU2_TR(0x6349d3);
{goto L6349da;}
}
B6349d5:L6349d5:{c.instructions+=1;NFSU2_TR(0x6349d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6349daull));
TAIL_STATIC(0x4fe110u,4fe);
}
B6349da:L6349da:{c.instructions+=7;NFSU2_TR(0x6349da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6349de:{NFSU2_TR(0x6349de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6349e2:{NFSU2_TR(0x6349e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6349e5:{NFSU2_TR(0x6349e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6349e9:{NFSU2_TR(0x6349e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6349eb:{NFSU2_TR(0x6349eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6349ee:{NFSU2_TR(0x6349ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6349f4;}}
}
B6349f0:L6349f0:{c.instructions+=2;NFSU2_TR(0x6349f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6349f2:{NFSU2_TR(0x6349f2);
{goto L634a43;}
}
B6349f4:L6349f4:{c.instructions+=2;NFSU2_TR(0x6349f4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6349f7:{NFSU2_TR(0x6349f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6349fd;}}
}
B6349f9:L6349f9:{c.instructions+=2;NFSU2_TR(0x6349f9);
__builtin_memmove((R+0),(R+4),4);
}
B6349fb:{NFSU2_TR(0x6349fb);
{goto L634a43;}
}
B6349fd:L6349fd:{c.instructions+=7;NFSU2_TR(0x6349fd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B634a01:{NFSU2_TR(0x634a01);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x41ull))));
}
B634a04:{NFSU2_TR(0x634a04);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B634a09:{NFSU2_TR(0x634a09);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B634a0e:{NFSU2_TR(0x634a0e);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B634a12:{NFSU2_TR(0x634a12);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634a17:{NFSU2_TR(0x634a17);
if(r1(R+518)){{goto L634a2c;}}
}
B634a19:L634a19:{c.instructions+=6;NFSU2_TR(0x634a19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a1a:{NFSU2_TR(0x634a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634a1d:{NFSU2_TR(0x634a1d);
w4(R+8,u32(r2(R+4)));
}
B634a20:{NFSU2_TR(0x634a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B634a23:{NFSU2_TR(0x634a23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a24:{NFSU2_TR(0x634a24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a29ull));
TAIL_STATIC(0x43db80u,43d);
}
B634a29:L634a29:{c.instructions+=1;NFSU2_TR(0x634a29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634a2c:L634a2c:{c.instructions+=4;NFSU2_TR(0x634a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B634a2e:{NFSU2_TR(0x634a2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a2f:{NFSU2_TR(0x634a2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a30:{NFSU2_TR(0x634a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a35ull));
TAIL_STATIC(0x43db80u,43d);
}
B634a35:L634a35:{c.instructions+=4;NFSU2_TR(0x634a35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a36:{NFSU2_TR(0x634a36);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B634a3a:{NFSU2_TR(0x634a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a3b:{NFSU2_TR(0x634a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a40ull));
TAIL_STATIC(0x43db80u,43d);
}
B634a40:L634a40:{c.instructions+=1;NFSU2_TR(0x634a40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B634a43:L634a43:{c.instructions+=3;NFSU2_TR(0x634a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634a45:{NFSU2_TR(0x634a45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634a49:{NFSU2_TR(0x634a49);
if(r1(R+518)){{goto L634e63;}}
}
B634a4f:L634a4f:{c.instructions+=2;NFSU2_TR(0x634a4f);
__builtin_memmove((R+4),gp(0x8a1be4),4);
}
B634a55:{NFSU2_TR(0x634a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a5aull));
TAIL_STATIC(0x440d40u,440);
}
B634a5a:L634a5a:{c.instructions+=14;NFSU2_TR(0x634a5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634a5e:{NFSU2_TR(0x634a5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634a62:{NFSU2_TR(0x634a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B634a65:{NFSU2_TR(0x634a65);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634a69:{NFSU2_TR(0x634a69);
__builtin_memmove((R+24),(R+0),4);
}
B634a6b:{NFSU2_TR(0x634a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634a6f:{NFSU2_TR(0x634a6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B634a72:{NFSU2_TR(0x634a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B634a75:{NFSU2_TR(0x634a75);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634a79:{NFSU2_TR(0x634a79);
u8 U[12];
w4(U+0,u32(u32(u32(0x17a8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B634a80:{NFSU2_TR(0x634a80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a81:{NFSU2_TR(0x634a81);
__builtin_memmove((R+4),(R+24),4);
}
B634a83:{NFSU2_TR(0x634a83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B634a85:{NFSU2_TR(0x634a85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a8aull));
TAIL_STATIC(0x493600u,493);
}
B634a8a:L634a8a:{c.instructions+=3;NFSU2_TR(0x634a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634a8d:{NFSU2_TR(0x634a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634a8f:{NFSU2_TR(0x634a8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634ac3;}}
}
B634a91:L634a91:{c.instructions+=2;NFSU2_TR(0x634a91);
__builtin_memmove((R+4),(R+24),4);
}
B634a93:{NFSU2_TR(0x634a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634a98ull));
TAIL_STATIC(0x4903b0u,490);
}
B634a98:L634a98:{c.instructions+=3;NFSU2_TR(0x634a98);
__builtin_memmove((R+4),gp(0x8a1be4),4);
}
B634a9e:{NFSU2_TR(0x634a9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634a9f:{NFSU2_TR(0x634a9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634aa4ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B634aa4:L634aa4:{c.instructions+=3;NFSU2_TR(0x634aa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634aa8:{NFSU2_TR(0x634aa8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634aaa:{NFSU2_TR(0x634aaa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634abd;}}
}
B634aac:L634aac:{c.instructions+=5;NFSU2_TR(0x634aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634ab0:{NFSU2_TR(0x634ab0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B634ab2:{NFSU2_TR(0x634ab2);
u8 U[16];
w4(U+0,u32(u32(u32(0x17a4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B634ab9:{NFSU2_TR(0x634ab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B634abb:{NFSU2_TR(0x634abb);
{goto L634ac3;}
}
B634abd:L634abd:{c.instructions+=1;NFSU2_TR(0x634abd);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B634ac3:L634ac3:{c.instructions+=3;NFSU2_TR(0x634ac3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634ac7:{NFSU2_TR(0x634ac7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634aca:{NFSU2_TR(0x634aca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L634afb;}}
}
B634acc:L634acc:{c.instructions+=2;NFSU2_TR(0x634acc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634acf:{NFSU2_TR(0x634acf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L634afb;}}
}
B634ad1:L634ad1:{c.instructions+=3;NFSU2_TR(0x634ad1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B634ad4:{NFSU2_TR(0x634ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B634ad7:{NFSU2_TR(0x634ad7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L634adc;}}
}
B634ad9:L634ad9:{c.instructions+=1;NFSU2_TR(0x634ad9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B634adc:L634adc:{c.instructions+=8;NFSU2_TR(0x634adc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634ae0:{NFSU2_TR(0x634ae0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ae2:{NFSU2_TR(0x634ae2);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B634ae5:{NFSU2_TR(0x634ae5);
u8 U[12];
w4(U+0,u32(u32(u32(0x13e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B634aec:{NFSU2_TR(0x634aec);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634aee:{NFSU2_TR(0x634aee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634aef:{NFSU2_TR(0x634aef);
__builtin_memmove((R+4),(R+24),4);
}
B634af1:{NFSU2_TR(0x634af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634af6ull));
TAIL_STATIC(0x488e20u,488);
}
B634af6:L634af6:{c.instructions+=1;NFSU2_TR(0x634af6);
{goto L634e63;}
}
B634afb:L634afb:{c.instructions+=2;NFSU2_TR(0x634afb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634afe:{NFSU2_TR(0x634afe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634b62;}}
}
B634b00:L634b00:{c.instructions+=4;NFSU2_TR(0x634b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634b04:{NFSU2_TR(0x634b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634b0a:{NFSU2_TR(0x634b0a);
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
B634b0c:{NFSU2_TR(0x634b0c);
if(r1(R+518)){{goto L634b3d;}}
}
B634b0e:L634b0e:{c.instructions+=4;NFSU2_TR(0x634b0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B634b11:{NFSU2_TR(0x634b11);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B634b14:{NFSU2_TR(0x634b14);
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
B634b16:{NFSU2_TR(0x634b16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634b3d;}}
}
B634b18:L634b18:{c.instructions+=7;NFSU2_TR(0x634b18);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634b1c:{NFSU2_TR(0x634b1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b1e:{NFSU2_TR(0x634b1e);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b20:{NFSU2_TR(0x634b20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B634b26:{NFSU2_TR(0x634b26);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b27:{NFSU2_TR(0x634b27);
__builtin_memmove((R+4),(R+24),4);
}
B634b29:{NFSU2_TR(0x634b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634b2eull));
TAIL_STATIC(0x488e20u,488);
}
B634b2e:L634b2e:{c.instructions+=2;NFSU2_TR(0x634b2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634b38:{NFSU2_TR(0x634b38);
{goto L634e63;}
}
B634b3d:L634b3d:{c.instructions+=7;NFSU2_TR(0x634b3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634b41:{NFSU2_TR(0x634b41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b43:{NFSU2_TR(0x634b43);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b45:{NFSU2_TR(0x634b45);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634b4b:{NFSU2_TR(0x634b4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b4c:{NFSU2_TR(0x634b4c);
__builtin_memmove((R+4),(R+24),4);
}
B634b4e:{NFSU2_TR(0x634b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634b53ull));
TAIL_STATIC(0x488e20u,488);
}
B634b53:L634b53:{c.instructions+=2;NFSU2_TR(0x634b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634b5d:{NFSU2_TR(0x634b5d);
{goto L634e63;}
}
B634b62:L634b62:{c.instructions+=2;NFSU2_TR(0x634b62);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634b65:{NFSU2_TR(0x634b65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634bc9;}}
}
B634b67:L634b67:{c.instructions+=4;NFSU2_TR(0x634b67);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634b6b:{NFSU2_TR(0x634b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634b71:{NFSU2_TR(0x634b71);
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
B634b73:{NFSU2_TR(0x634b73);
if(r1(R+518)){{goto L634ba4;}}
}
B634b75:L634b75:{c.instructions+=4;NFSU2_TR(0x634b75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B634b78:{NFSU2_TR(0x634b78);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B634b7b:{NFSU2_TR(0x634b7b);
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
B634b7d:{NFSU2_TR(0x634b7d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634ba4;}}
}
B634b7f:L634b7f:{c.instructions+=7;NFSU2_TR(0x634b7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634b83:{NFSU2_TR(0x634b83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b85:{NFSU2_TR(0x634b85);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b87:{NFSU2_TR(0x634b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634b8d:{NFSU2_TR(0x634b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634b8e:{NFSU2_TR(0x634b8e);
__builtin_memmove((R+4),(R+24),4);
}
B634b90:{NFSU2_TR(0x634b90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634b95ull));
TAIL_STATIC(0x488e20u,488);
}
B634b95:L634b95:{c.instructions+=2;NFSU2_TR(0x634b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634b9f:{NFSU2_TR(0x634b9f);
{goto L634e63;}
}
B634ba4:L634ba4:{c.instructions+=7;NFSU2_TR(0x634ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634ba8:{NFSU2_TR(0x634ba8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634baa:{NFSU2_TR(0x634baa);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634bac:{NFSU2_TR(0x634bac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634bb2:{NFSU2_TR(0x634bb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634bb3:{NFSU2_TR(0x634bb3);
__builtin_memmove((R+4),(R+24),4);
}
B634bb5:{NFSU2_TR(0x634bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634bbaull));
TAIL_STATIC(0x488e20u,488);
}
B634bba:L634bba:{c.instructions+=2;NFSU2_TR(0x634bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634bc4:{NFSU2_TR(0x634bc4);
{goto L634e63;}
}
B634bc9:L634bc9:{c.instructions+=2;NFSU2_TR(0x634bc9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634bcc:{NFSU2_TR(0x634bcc);
if(r1(R+518)){{goto L634d99;}}
}
B634bd2:L634bd2:{c.instructions+=2;NFSU2_TR(0x634bd2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634bd5:{NFSU2_TR(0x634bd5);
if(r1(R+518)){{goto L634d99;}}
}
B634bdb:L634bdb:{c.instructions+=2;NFSU2_TR(0x634bdb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634bde:{NFSU2_TR(0x634bde);
if(r1(R+518)){{goto L634d99;}}
}
B634be4:L634be4:{c.instructions+=2;NFSU2_TR(0x634be4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634be7:{NFSU2_TR(0x634be7);
if(r1(R+518)){{goto L634d99;}}
}
B634bed:L634bed:{c.instructions+=2;NFSU2_TR(0x634bed);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634bf0:{NFSU2_TR(0x634bf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634c46;}}
}
B634bf2:L634bf2:{c.instructions+=5;NFSU2_TR(0x634bf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634bf6:{NFSU2_TR(0x634bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634bfc:{NFSU2_TR(0x634bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634c02:{NFSU2_TR(0x634c02);
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
B634c04:{NFSU2_TR(0x634c04);
if(r1(R+518)){{goto L634c32;}}
}
B634c06:L634c06:{c.instructions+=4;NFSU2_TR(0x634c06);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B634c09:{NFSU2_TR(0x634c09);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B634c0c:{NFSU2_TR(0x634c0c);
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
B634c0e:{NFSU2_TR(0x634c0e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634c32;}}
}
B634c10:L634c10:{c.instructions+=2;NFSU2_TR(0x634c10);
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
B634c12:{NFSU2_TR(0x634c12);
if(r1(R+518)){{goto L634c32;}}
}
B634c14:L634c14:{c.instructions+=4;NFSU2_TR(0x634c14);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B634c17:{NFSU2_TR(0x634c17);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B634c1a:{NFSU2_TR(0x634c1a);
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
B634c1c:{NFSU2_TR(0x634c1c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634c32;}}
}
B634c1e:L634c1e:{c.instructions+=6;NFSU2_TR(0x634c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634c22:{NFSU2_TR(0x634c22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c24:{NFSU2_TR(0x634c24);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c26:{NFSU2_TR(0x634c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634c2c:{NFSU2_TR(0x634c2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c2d:{NFSU2_TR(0x634c2d);
{goto L634dde;}
}
B634c32:L634c32:{c.instructions+=6;NFSU2_TR(0x634c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634c36:{NFSU2_TR(0x634c36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c38:{NFSU2_TR(0x634c38);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c3a:{NFSU2_TR(0x634c3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+8),(U+0),4);
}
B634c40:{NFSU2_TR(0x634c40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c41:{NFSU2_TR(0x634c41);
{goto L634e00;}
}
B634c46:L634c46:{c.instructions+=2;NFSU2_TR(0x634c46);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634c49:{NFSU2_TR(0x634c49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634cee;}}
}
B634c4f:L634c4f:{c.instructions+=5;NFSU2_TR(0x634c4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634c53:{NFSU2_TR(0x634c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634c59:{NFSU2_TR(0x634c59);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B634c5d:{NFSU2_TR(0x634c5d);
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
B634c61:{NFSU2_TR(0x634c61);
if(r1(R+518)){{goto L634c99;}}
}
B634c63:L634c63:{c.instructions+=8;NFSU2_TR(0x634c63);
__builtin_memmove((R+4),gp(0x8a1cc8),4);
}
B634c69:{NFSU2_TR(0x634c69);
w4(R+8,u32(r2(R+0)));
}
B634c6c:{NFSU2_TR(0x634c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634c6f:{NFSU2_TR(0x634c6f);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B634c73:{NFSU2_TR(0x634c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B634c76:{NFSU2_TR(0x634c76);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B634c78:{NFSU2_TR(0x634c78);
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
B634c7a:{NFSU2_TR(0x634c7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634c99;}}
}
B634c7c:L634c7c:{c.instructions+=2;NFSU2_TR(0x634c7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B634c7f:{NFSU2_TR(0x634c7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634c82:L634c82:{c.instructions+=4;NFSU2_TR(0x634c82);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B634c85:{NFSU2_TR(0x634c85);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x721aff7cull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B634c8c:{NFSU2_TR(0x634c8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B634c8f:{NFSU2_TR(0x634c8f);
if(r1(R+518)){{goto L634cbe;}}
}
B634c91:L634c91:{c.instructions+=4;NFSU2_TR(0x634c91);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B634c92:{NFSU2_TR(0x634c92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B634c95:{NFSU2_TR(0x634c95);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B634c97:{NFSU2_TR(0x634c97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634c82u);}goto L634c82;}}
}
B634c99:L634c99:{c.instructions+=7;NFSU2_TR(0x634c99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634c9d:{NFSU2_TR(0x634c9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634c9f:{NFSU2_TR(0x634c9f);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ca1:{NFSU2_TR(0x634ca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+8),(U+0),4);
}
B634ca7:{NFSU2_TR(0x634ca7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ca8:{NFSU2_TR(0x634ca8);
__builtin_memmove((R+4),(R+24),4);
}
B634caa:{NFSU2_TR(0x634caa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634cafull));
TAIL_STATIC(0x488e20u,488);
}
B634caf:L634caf:{c.instructions+=2;NFSU2_TR(0x634caf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3bcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634cb9:{NFSU2_TR(0x634cb9);
{goto L634e63;}
}
B634cbe:L634cbe:{c.instructions+=2;NFSU2_TR(0x634cbe);
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
B634cc0:{NFSU2_TR(0x634cc0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634c99u);}goto L634c99;}}
}
B634cc2:L634cc2:{c.instructions+=3;NFSU2_TR(0x634cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634cc5:{NFSU2_TR(0x634cc5);
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
B634cc7:{NFSU2_TR(0x634cc7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634c99u);}goto L634c99;}}
}
B634cc9:L634cc9:{c.instructions+=7;NFSU2_TR(0x634cc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634ccd:{NFSU2_TR(0x634ccd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ccf:{NFSU2_TR(0x634ccf);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634cd1:{NFSU2_TR(0x634cd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634cd7:{NFSU2_TR(0x634cd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634cd8:{NFSU2_TR(0x634cd8);
__builtin_memmove((R+4),(R+24),4);
}
B634cda:{NFSU2_TR(0x634cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634cdfull));
TAIL_STATIC(0x488e20u,488);
}
B634cdf:L634cdf:{c.instructions+=2;NFSU2_TR(0x634cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3bcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634ce9:{NFSU2_TR(0x634ce9);
{goto L634e63;}
}
B634cee:L634cee:{c.instructions+=2;NFSU2_TR(0x634cee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634cf1:{NFSU2_TR(0x634cf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634d7e;}}
}
B634cf7:L634cf7:{c.instructions+=5;NFSU2_TR(0x634cf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634cfb:{NFSU2_TR(0x634cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634d01:{NFSU2_TR(0x634d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634d07:{NFSU2_TR(0x634d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634d09:{NFSU2_TR(0x634d09);
if(r1(R+518)){{goto L634d3a;}}
}
B634d0b:L634d0b:{c.instructions+=4;NFSU2_TR(0x634d0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B634d0e:{NFSU2_TR(0x634d0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B634d11:{NFSU2_TR(0x634d11);
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
B634d13:{NFSU2_TR(0x634d13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634d3a;}}
}
B634d15:L634d15:{c.instructions+=7;NFSU2_TR(0x634d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634d19:{NFSU2_TR(0x634d19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d1b:{NFSU2_TR(0x634d1b);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d1d:{NFSU2_TR(0x634d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634d23:{NFSU2_TR(0x634d23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d24:{NFSU2_TR(0x634d24);
__builtin_memmove((R+4),(R+24),4);
}
B634d26:{NFSU2_TR(0x634d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634d2bull));
TAIL_STATIC(0x488e20u,488);
}
B634d2b:L634d2b:{c.instructions+=2;NFSU2_TR(0x634d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3c4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634d35:{NFSU2_TR(0x634d35);
{goto L634e63;}
}
B634d3a:L634d3a:{c.instructions+=2;NFSU2_TR(0x634d3a);
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
B634d3c:{NFSU2_TR(0x634d3c);
if(r1(R+518)){{goto L634d6d;}}
}
B634d3e:L634d3e:{c.instructions+=4;NFSU2_TR(0x634d3e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B634d41:{NFSU2_TR(0x634d41);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B634d44:{NFSU2_TR(0x634d44);
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
B634d46:{NFSU2_TR(0x634d46);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634d6d;}}
}
B634d48:L634d48:{c.instructions+=5;NFSU2_TR(0x634d48);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634d4c:{NFSU2_TR(0x634d4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d4e:{NFSU2_TR(0x634d4e);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d50:{NFSU2_TR(0x634d50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634d56:{NFSU2_TR(0x634d56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d57:L634d57:{c.instructions+=2;NFSU2_TR(0x634d57);
__builtin_memmove((R+4),(R+24),4);
}
B634d59:{NFSU2_TR(0x634d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634d5eull));
TAIL_STATIC(0x488e20u,488);
}
B634d5e:L634d5e:{c.instructions+=2;NFSU2_TR(0x634d5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634d68:{NFSU2_TR(0x634d68);
{goto L634e63;}
}
B634d6d:L634d6d:{c.instructions+=6;NFSU2_TR(0x634d6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634d71:{NFSU2_TR(0x634d71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d73:{NFSU2_TR(0x634d73);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d75:{NFSU2_TR(0x634d75);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+4),(U+0),4);
}
B634d7b:{NFSU2_TR(0x634d7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d7c:{NFSU2_TR(0x634d7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634d57u);}goto L634d57;}
}
B634d7e:L634d7e:{c.instructions+=7;NFSU2_TR(0x634d7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634d82:{NFSU2_TR(0x634d82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d84:{NFSU2_TR(0x634d84);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d86:{NFSU2_TR(0x634d86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),u32(0x638ull)));
w1(R+523,scarry<u32>(r4(R+8),u32(0x638ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x638ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B634d8c:{NFSU2_TR(0x634d8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634d8d:{NFSU2_TR(0x634d8d);
__builtin_memmove((R+4),(R+24),4);
}
B634d8f:{NFSU2_TR(0x634d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634d94ull));
TAIL_STATIC(0x488e20u,488);
}
B634d94:L634d94:{c.instructions+=1;NFSU2_TR(0x634d94);
{goto L634e63;}
}
B634d99:L634d99:{c.instructions+=5;NFSU2_TR(0x634d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634d9d:{NFSU2_TR(0x634d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x704ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634da3:{NFSU2_TR(0x634da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634da9:{NFSU2_TR(0x634da9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634dab:{NFSU2_TR(0x634dab);
if(r1(R+518)){{goto L634e13;}}
}
B634dad:L634dad:{c.instructions+=4;NFSU2_TR(0x634dad);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B634db0:{NFSU2_TR(0x634db0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B634db3:{NFSU2_TR(0x634db3);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B634db5:{NFSU2_TR(0x634db5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634e13;}}
}
B634db7:L634db7:{c.instructions+=2;NFSU2_TR(0x634db7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634dba:{NFSU2_TR(0x634dba);
if(r1(R+518)){{goto L634dc1;}}
}
B634dbc:L634dbc:{c.instructions+=2;NFSU2_TR(0x634dbc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634dbf:{NFSU2_TR(0x634dbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634e13;}}
}
B634dc1:L634dc1:{c.instructions+=2;NFSU2_TR(0x634dc1);
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
B634dc3:{NFSU2_TR(0x634dc3);
if(r1(R+518)){{goto L634df1;}}
}
B634dc5:L634dc5:{c.instructions+=4;NFSU2_TR(0x634dc5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B634dc8:{NFSU2_TR(0x634dc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B634dcb:{NFSU2_TR(0x634dcb);
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
B634dcd:{NFSU2_TR(0x634dcd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634df1;}}
}
B634dcf:L634dcf:{c.instructions+=5;NFSU2_TR(0x634dcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634dd3:{NFSU2_TR(0x634dd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634dd5:{NFSU2_TR(0x634dd5);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634dd7:{NFSU2_TR(0x634dd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xac8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B634ddd:{NFSU2_TR(0x634ddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634dde:L634dde:{c.instructions+=2;NFSU2_TR(0x634dde);
__builtin_memmove((R+4),(R+24),4);
}
B634de0:{NFSU2_TR(0x634de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634de5ull));
TAIL_STATIC(0x488e20u,488);
}
B634de5:L634de5:{c.instructions+=2;NFSU2_TR(0x634de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3c8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634def:{NFSU2_TR(0x634def);
{goto L634e63;}
}
B634df1:L634df1:{c.instructions+=5;NFSU2_TR(0x634df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634df5:{NFSU2_TR(0x634df5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634df7:{NFSU2_TR(0x634df7);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634df9:{NFSU2_TR(0x634df9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634dff:{NFSU2_TR(0x634dff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e00:L634e00:{c.instructions+=2;NFSU2_TR(0x634e00);
__builtin_memmove((R+4),(R+24),4);
}
B634e02:{NFSU2_TR(0x634e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634e07ull));
TAIL_STATIC(0x488e20u,488);
}
B634e07:L634e07:{c.instructions+=2;NFSU2_TR(0x634e07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3c8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634e11:{NFSU2_TR(0x634e11);
{goto L634e63;}
}
B634e13:L634e13:{c.instructions+=2;NFSU2_TR(0x634e13);
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
B634e15:{NFSU2_TR(0x634e15);
if(r1(R+518)){{goto L634e43;}}
}
B634e17:L634e17:{c.instructions+=4;NFSU2_TR(0x634e17);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B634e1a:{NFSU2_TR(0x634e1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B634e1d:{NFSU2_TR(0x634e1d);
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
B634e1f:{NFSU2_TR(0x634e1f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L634e43;}}
}
B634e21:L634e21:{c.instructions+=7;NFSU2_TR(0x634e21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634e25:{NFSU2_TR(0x634e25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e27:{NFSU2_TR(0x634e27);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e29:{NFSU2_TR(0x634e29);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B634e2f:{NFSU2_TR(0x634e2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e30:{NFSU2_TR(0x634e30);
__builtin_memmove((R+4),(R+24),4);
}
B634e32:{NFSU2_TR(0x634e32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634e37ull));
TAIL_STATIC(0x488e20u,488);
}
B634e37:L634e37:{c.instructions+=2;NFSU2_TR(0x634e37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634e41:{NFSU2_TR(0x634e41);
{goto L634e63;}
}
B634e43:L634e43:{c.instructions+=7;NFSU2_TR(0x634e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B634e47:{NFSU2_TR(0x634e47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e49:{NFSU2_TR(0x634e49);
u8 U[4];
w4(U+0,u32(0x49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e4b:{NFSU2_TR(0x634e4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x638ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634e51:{NFSU2_TR(0x634e51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634e52:{NFSU2_TR(0x634e52);
__builtin_memmove((R+4),(R+24),4);
}
B634e54:{NFSU2_TR(0x634e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634e59ull));
TAIL_STATIC(0x488e20u,488);
}
B634e59:L634e59:{c.instructions+=1;NFSU2_TR(0x634e59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3b8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B634e63:L634e63:{c.instructions+=5;NFSU2_TR(0x634e63);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634e67:{NFSU2_TR(0x634e67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B634e68:{NFSU2_TR(0x634e68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634e6b:{NFSU2_TR(0x634e6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634e6f:{NFSU2_TR(0x634e6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x634990u);}goto L634990;}}
}
B634e75:L634e75:{c.instructions+=3;NFSU2_TR(0x634e75);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634e79:{NFSU2_TR(0x634e79);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x33ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x33ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B634e7c:{NFSU2_TR(0x634e7c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L634ece;}}
}
B634e7e:L634e7e:{c.instructions+=2;NFSU2_TR(0x634e7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x63680cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B634e85:{NFSU2_TR(0x634e85);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x636804ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B634e8c:L634e8c:{c.instructions+=7;NFSU2_TR(0x634e8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634e90:{NFSU2_TR(0x634e90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B634e94:{NFSU2_TR(0x634e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B634e97:{NFSU2_TR(0x634e97);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B634e9a:{NFSU2_TR(0x634e9a);
u8 U[16];
w4(U+0,u32(u32(u32(0x17a8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B634ea1:{NFSU2_TR(0x634ea1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B634ea3:{NFSU2_TR(0x634ea3);
if(r1(R+518)){{goto L634ece;}}
}
B634ea5:L634ea5:{c.instructions+=5;NFSU2_TR(0x634ea5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B634ea9:{NFSU2_TR(0x634ea9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634eaa:{NFSU2_TR(0x634eaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B634eae:{NFSU2_TR(0x634eae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634eaf:{NFSU2_TR(0x634eaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634eb4ull));
TAIL_STATIC(0x48d7e0u,48d);
}
B634eb4:L634eb4:{c.instructions+=9;NFSU2_TR(0x634eb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B634eb8:{NFSU2_TR(0x634eb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634eb9:{NFSU2_TR(0x634eb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B634ebd:{NFSU2_TR(0x634ebd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ebe:{NFSU2_TR(0x634ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634ec1:{NFSU2_TR(0x634ec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ec2:{NFSU2_TR(0x634ec2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B634ec5:{NFSU2_TR(0x634ec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ec6:{NFSU2_TR(0x634ec6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634ecbull));
TAIL_STATIC(0x43d6e0u,43d);
}
B634ecb:L634ecb:{c.instructions+=1;NFSU2_TR(0x634ecb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B634ece:L634ece:{c.instructions+=5;NFSU2_TR(0x634ece);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634ed2:{NFSU2_TR(0x634ed2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B634ed3:{NFSU2_TR(0x634ed3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634ed6:{NFSU2_TR(0x634ed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634eda:{NFSU2_TR(0x634eda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6348e0u);}goto L6348e0;}}
}
B634ee0:L634ee0:{c.instructions+=5;NFSU2_TR(0x634ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634ee4:{NFSU2_TR(0x634ee4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B634ee5:{NFSU2_TR(0x634ee5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B634ee8:{NFSU2_TR(0x634ee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634eec:{NFSU2_TR(0x634eec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6348a0u);}goto L6348a0;}}
}
B634ef2:L634ef2:{c.instructions+=30;NFSU2_TR(0x634ef2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B634ef6:{NFSU2_TR(0x634ef6);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634ef9:{NFSU2_TR(0x634ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634efc:{NFSU2_TR(0x634efc);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634eff:{NFSU2_TR(0x634eff);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634f03:{NFSU2_TR(0x634f03);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B634f05:{NFSU2_TR(0x634f05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634f09:{NFSU2_TR(0x634f09);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B634f0f:{NFSU2_TR(0x634f0f);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f12:{NFSU2_TR(0x634f12);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B634f18:{NFSU2_TR(0x634f18);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f1b:{NFSU2_TR(0x634f1b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634f1f:{NFSU2_TR(0x634f1f);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B634f25:{NFSU2_TR(0x634f25);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f28:{NFSU2_TR(0x634f28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634f2b:{NFSU2_TR(0x634f2b);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634f2e:{NFSU2_TR(0x634f2e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B634f32:{NFSU2_TR(0x634f32);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634f35:{NFSU2_TR(0x634f35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B634f37:{NFSU2_TR(0x634f37);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B634f3d:{NFSU2_TR(0x634f3d);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f40:{NFSU2_TR(0x634f40);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B634f46:{NFSU2_TR(0x634f46);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f49:{NFSU2_TR(0x634f49);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B634f4d:{NFSU2_TR(0x634f4d);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B634f53:{NFSU2_TR(0x634f53);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B634f56:{NFSU2_TR(0x634f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x590ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634f5c:{NFSU2_TR(0x634f5c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B634f5e:{NFSU2_TR(0x634f5e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634f60:{NFSU2_TR(0x634f60);
if(r1(R+518)){TAIL_STATIC(0x63507eu,635);}
}
B634f66:L634f66:{c.instructions+=3;NFSU2_TR(0x634f66);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B634f6a:{NFSU2_TR(0x634f6a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B634f6e:{NFSU2_TR(0x634f6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634f77;}}
}
B634f70:L634f70:{c.instructions+=2;NFSU2_TR(0x634f70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634f72:{NFSU2_TR(0x634f72);
TAIL_STATIC(0x635009u,635);
}
B634f77:L634f77:{c.instructions+=8;NFSU2_TR(0x634f77);
__builtin_memmove((R+28),gp(0x8a1cc8),4);
}
B634f7d:{NFSU2_TR(0x634f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634f80:{NFSU2_TR(0x634f80);
w4(R+0,u32(r2(R+0)));
}
B634f83:{NFSU2_TR(0x634f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B634f86:{NFSU2_TR(0x634f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B634f89:{NFSU2_TR(0x634f89);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B634f8c:{NFSU2_TR(0x634f8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B634f8e:{NFSU2_TR(0x634f8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634f97;}}
}
B634f90:L634f90:{c.instructions+=2;NFSU2_TR(0x634f90);
w4(R+0,u32(0xffffffffull));
}
B634f95:{NFSU2_TR(0x634f95);
{goto L634faf;}
}
B634f97:L634f97:{c.instructions+=2;NFSU2_TR(0x634f97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B634f99:{NFSU2_TR(0x634f99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634faa;}}
}
B634f9b:L634f9b:{c.instructions+=4;NFSU2_TR(0x634f9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B634f9f:{NFSU2_TR(0x634f9f);
__builtin_memmove((R+4),gp(0x8a1cb8),4);
}
B634fa5:{NFSU2_TR(0x634fa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B634fa8:{NFSU2_TR(0x634fa8);
{goto L634faf;}
}
B634faa:L634faa:{c.instructions+=1;NFSU2_TR(0x634faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634fafull));
TAIL_STATIC(0x4fe110u,4fe);
}
B634faf:L634faf:{c.instructions+=3;NFSU2_TR(0x634faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B634fb2:{NFSU2_TR(0x634fb2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B634fb5:{NFSU2_TR(0x634fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634fbb;}}
}
B634fb7:L634fb7:{c.instructions+=2;NFSU2_TR(0x634fb7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B634fb9:{NFSU2_TR(0x634fb9);
TAIL_STATIC(0x635009u,635);
}
B634fbb:L634fbb:{c.instructions+=2;NFSU2_TR(0x634fbb);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B634fbe:{NFSU2_TR(0x634fbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L634fc4;}}
}
B634fc0:L634fc0:{c.instructions+=2;NFSU2_TR(0x634fc0);
__builtin_memmove((R+0),(R+4),4);
}
B634fc2:{NFSU2_TR(0x634fc2);
TAIL_STATIC(0x635009u,635);
}
B634fc4:L634fc4:{c.instructions+=6;NFSU2_TR(0x634fc4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B634fc8:{NFSU2_TR(0x634fc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B634fcd:{NFSU2_TR(0x634fcd);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B634fd2:{NFSU2_TR(0x634fd2);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x41ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634fd7:{NFSU2_TR(0x634fd7);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B634fdc:{NFSU2_TR(0x634fdc);
if(r1(R+518)){{goto L634ff1;}}
}
B634fde:L634fde:{c.instructions+=6;NFSU2_TR(0x634fde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634fdf:{NFSU2_TR(0x634fdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B634fe2:{NFSU2_TR(0x634fe2);
w4(R+8,u32(r2(R+4)));
}
B634fe5:{NFSU2_TR(0x634fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B634fe8:{NFSU2_TR(0x634fe8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634fe9:{NFSU2_TR(0x634fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634feeull));
TAIL_STATIC(0x43db80u,43d);
}
B634fee:L634fee:{c.instructions+=1;NFSU2_TR(0x634fee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B634ff1:L634ff1:{c.instructions+=4;NFSU2_TR(0x634ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B634ff4:{NFSU2_TR(0x634ff4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ff5:{NFSU2_TR(0x634ff5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ff6:{NFSU2_TR(0x634ff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x634ffbull));
TAIL_STATIC(0x43db80u,43d);
}
B634ffb:L634ffb:{c.instructions+=2;NFSU2_TR(0x634ffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B634ffc:{NFSU2_TR(0x634ffc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
TAIL_STATIC(0x635000u,635);
}
XIT:NFSU2_TR_EXIT(0x634,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
