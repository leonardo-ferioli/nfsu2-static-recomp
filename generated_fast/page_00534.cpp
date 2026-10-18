#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x534,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x534,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_534(u8* __restrict R,Cpu& c);
u32 page_534(Cpu& c){return body_534(c.regs.data(),c);}
__attribute__((noinline)) u32 body_534(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x534009:goto L534009;
case 0x534011:c.instructions+=1;goto B534011;
case 0x534013:goto L534013;
case 0x534015:c.instructions+=6;goto B534015;
case 0x534017:c.instructions+=5;goto B534017;
case 0x53401a:c.instructions+=4;goto B53401a;
case 0x53401c:c.instructions+=3;goto B53401c;
case 0x53401d:c.instructions+=2;goto B53401d;
case 0x534020:c.instructions+=1;goto B534020;
case 0x534025:goto L534025;
case 0x534029:c.instructions+=4;goto B534029;
case 0x53402d:c.instructions+=3;goto B53402d;
case 0x534030:c.instructions+=2;goto B534030;
case 0x534032:c.instructions+=1;goto B534032;
case 0x534034:goto L534034;
case 0x534038:goto L534038;
case 0x53403c:c.instructions+=4;goto B53403c;
case 0x53403d:c.instructions+=3;goto B53403d;
case 0x534040:c.instructions+=2;goto B534040;
case 0x534044:c.instructions+=1;goto B534044;
case 0x53404a:goto L53404a;
case 0x53404e:c.instructions+=7;goto B53404e;
case 0x534052:c.instructions+=6;goto B534052;
case 0x534053:c.instructions+=5;goto B534053;
case 0x534054:c.instructions+=4;goto B534054;
case 0x534055:c.instructions+=3;goto B534055;
case 0x53405c:c.instructions+=2;goto B53405c;
case 0x53405f:c.instructions+=1;goto B53405f;
case 0x534060:goto L534060;
case 0x534061:c.instructions+=1;goto B534061;
case 0x534066:goto L534066;
case 0x534068:c.instructions+=4;goto B534068;
case 0x53406b:c.instructions+=3;goto B53406b;
case 0x53406d:c.instructions+=2;goto B53406d;
case 0x53406f:c.instructions+=1;goto B53406f;
case 0x534072:goto L534072;
case 0x534074:c.instructions+=6;goto B534074;
case 0x534076:c.instructions+=5;goto B534076;
case 0x534078:c.instructions+=4;goto B534078;
case 0x534079:c.instructions+=3;goto B534079;
case 0x53407a:c.instructions+=2;goto B53407a;
case 0x53407f:c.instructions+=1;goto B53407f;
case 0x534084:goto L534084;
case 0x534086:c.instructions+=1;goto B534086;
case 0x534088:goto L534088;
case 0x534090:goto L534090;
case 0x534096:c.instructions+=11;goto B534096;
case 0x534098:c.instructions+=10;goto B534098;
case 0x53409c:c.instructions+=9;goto B53409c;
case 0x5340a2:c.instructions+=8;goto B5340a2;
case 0x5340a4:c.instructions+=7;goto B5340a4;
case 0x5340a5:c.instructions+=6;goto B5340a5;
case 0x5340a6:c.instructions+=5;goto B5340a6;
case 0x5340a7:c.instructions+=4;goto B5340a7;
case 0x5340ad:c.instructions+=3;goto B5340ad;
case 0x5340ae:c.instructions+=2;goto B5340ae;
case 0x5340b3:c.instructions+=1;goto B5340b3;
case 0x5340b8:goto L5340b8;
case 0x5340ba:c.instructions+=1;goto B5340ba;
case 0x5340bc:goto L5340bc;
case 0x5340c2:c.instructions+=1;goto B5340c2;
case 0x5340c7:goto L5340c7;
case 0x5340ca:c.instructions+=1;goto B5340ca;
case 0x5340d0:goto L5340d0;
case 0x5340d1:c.instructions+=2;goto B5340d1;
case 0x5340d8:c.instructions+=1;goto B5340d8;
case 0x5340dd:goto L5340dd;
case 0x5340e4:c.instructions+=3;goto B5340e4;
case 0x5340e7:c.instructions+=2;goto B5340e7;
case 0x5340e9:c.instructions+=1;goto B5340e9;
case 0x5340eb:goto L5340eb;
case 0x5340f1:c.instructions+=2;goto B5340f1;
case 0x5340f5:c.instructions+=1;goto B5340f5;
case 0x5340fb:goto L5340fb;
case 0x534105:c.instructions+=1;goto B534105;
case 0x534110:goto L534110;
case 0x534111:c.instructions+=3;goto B534111;
case 0x534116:c.instructions+=2;goto B534116;
case 0x534118:c.instructions+=1;goto B534118;
case 0x53411a:goto L53411a;
case 0x53411b:c.instructions+=6;goto B53411b;
case 0x53411f:c.instructions+=5;goto B53411f;
case 0x534122:c.instructions+=4;goto B534122;
case 0x534123:c.instructions+=3;goto B534123;
case 0x534127:c.instructions+=2;goto B534127;
case 0x53412c:c.instructions+=1;goto B53412c;
case 0x53412e:goto L53412e;
case 0x53412f:c.instructions+=2;goto B53412f;
case 0x534130:c.instructions+=1;goto B534130;
case 0x534135:goto L534135;
case 0x534138:c.instructions+=1;goto B534138;
case 0x53413c:goto L53413c;
case 0x53413f:c.instructions+=1;goto B53413f;
case 0x534141:goto L534141;
case 0x534142:c.instructions+=2;goto B534142;
case 0x534143:c.instructions+=1;goto B534143;
case 0x534148:goto L534148;
case 0x53414c:c.instructions+=3;goto B53414c;
case 0x53414f:c.instructions+=2;goto B53414f;
case 0x534151:c.instructions+=1;goto B534151;
case 0x534155:goto L534155;
case 0x53415b:c.instructions+=1;goto B53415b;
case 0x53415d:goto L53415d;
case 0x53415e:c.instructions+=2;goto B53415e;
case 0x53415f:c.instructions+=1;goto B53415f;
case 0x534164:goto L534164;
case 0x534168:c.instructions+=3;goto B534168;
case 0x53416b:c.instructions+=2;goto B53416b;
case 0x53416d:c.instructions+=1;goto B53416d;
case 0x534171:goto L534171;
case 0x534175:c.instructions+=4;goto B534175;
case 0x534176:c.instructions+=3;goto B534176;
case 0x534177:c.instructions+=2;goto B534177;
case 0x534178:c.instructions+=1;goto B534178;
case 0x534179:goto L534179;
case 0x53417b:c.instructions+=2;goto B53417b;
case 0x53417c:c.instructions+=1;goto B53417c;
case 0x534180:goto L534180;
case 0x534181:c.instructions+=3;goto B534181;
case 0x534186:c.instructions+=2;goto B534186;
case 0x534188:c.instructions+=1;goto B534188;
case 0x53418a:goto L53418a;
case 0x53418c:c.instructions+=2;goto B53418c;
case 0x53418d:c.instructions+=1;goto B53418d;
case 0x53418e:goto L53418e;
case 0x534192:c.instructions+=6;goto B534192;
case 0x534193:c.instructions+=5;goto B534193;
case 0x534195:c.instructions+=4;goto B534195;
case 0x534197:c.instructions+=3;goto B534197;
case 0x534198:c.instructions+=2;goto B534198;
case 0x53419c:c.instructions+=1;goto B53419c;
case 0x53419e:goto L53419e;
case 0x53419f:c.instructions+=2;goto B53419f;
case 0x5341a0:c.instructions+=1;goto B5341a0;
case 0x5341a5:goto L5341a5;
case 0x5341a9:c.instructions+=4;goto B5341a9;
case 0x5341ad:c.instructions+=3;goto B5341ad;
case 0x5341b0:c.instructions+=2;goto B5341b0;
case 0x5341b2:c.instructions+=1;goto B5341b2;
case 0x5341b7:goto L5341b7;
case 0x5341b9:c.instructions+=2;goto B5341b9;
case 0x5341bd:c.instructions+=1;goto B5341bd;
case 0x5341c1:goto L5341c1;
case 0x5341c3:c.instructions+=1;goto B5341c3;
case 0x5341c5:goto L5341c5;
case 0x5341c6:c.instructions+=2;goto B5341c6;
case 0x5341c7:c.instructions+=1;goto B5341c7;
case 0x5341cc:goto L5341cc;
case 0x5341cf:c.instructions+=2;goto B5341cf;
case 0x5341d1:c.instructions+=1;goto B5341d1;
case 0x5341d5:goto L5341d5;
case 0x5341da:c.instructions+=1;goto B5341da;
case 0x5341dc:goto L5341dc;
case 0x5341dd:c.instructions+=2;goto B5341dd;
case 0x5341de:c.instructions+=1;goto B5341de;
case 0x5341e3:goto L5341e3;
case 0x5341e7:c.instructions+=4;goto B5341e7;
case 0x5341ea:c.instructions+=3;goto B5341ea;
case 0x5341ec:c.instructions+=2;goto B5341ec;
case 0x5341ee:c.instructions+=1;goto B5341ee;
case 0x5341f3:goto L5341f3;
case 0x5341f7:c.instructions+=1;goto B5341f7;
case 0x5341f9:goto L5341f9;
case 0x5341fa:c.instructions+=4;goto B5341fa;
case 0x5341fc:c.instructions+=3;goto B5341fc;
case 0x5341fd:c.instructions+=2;goto B5341fd;
case 0x5341fe:c.instructions+=1;goto B5341fe;
case 0x534200:goto L534200;
case 0x534201:c.instructions+=6;goto B534201;
case 0x534202:c.instructions+=5;goto B534202;
case 0x534208:c.instructions+=4;goto B534208;
case 0x53420e:c.instructions+=3;goto B53420e;
case 0x534210:c.instructions+=2;goto B534210;
case 0x534212:c.instructions+=1;goto B534212;
case 0x534217:goto L534217;
case 0x53421c:c.instructions+=1;goto B53421c;
case 0x534221:goto L534221;
case 0x534226:c.instructions+=1;goto B534226;
case 0x53422b:goto L53422b;
case 0x53422c:c.instructions+=1;goto B53422c;
case 0x534231:goto L534231;
case 0x534233:c.instructions+=3;goto B534233;
case 0x534236:c.instructions+=2;goto B534236;
case 0x534238:c.instructions+=1;goto B534238;
case 0x53423a:goto L53423a;
case 0x53423b:c.instructions+=2;goto B53423b;
case 0x534240:c.instructions+=1;goto B534240;
case 0x534245:goto L534245;
case 0x534247:c.instructions+=1;goto B534247;
case 0x534249:goto L534249;
case 0x53424a:c.instructions+=2;goto B53424a;
case 0x53424f:c.instructions+=1;goto B53424f;
case 0x534254:goto L534254;
case 0x53425a:c.instructions+=3;goto B53425a;
case 0x53425c:c.instructions+=2;goto B53425c;
case 0x53425e:c.instructions+=1;goto B53425e;
case 0x534263:goto L534263;
case 0x534268:c.instructions+=1;goto B534268;
case 0x53426d:goto L53426d;
case 0x534270:c.instructions+=3;goto B534270;
case 0x534271:c.instructions+=2;goto B534271;
case 0x534276:c.instructions+=1;goto B534276;
case 0x53427b:goto L53427b;
case 0x53427c:c.instructions+=2;goto B53427c;
case 0x53427d:c.instructions+=1;goto B53427d;
case 0x534280:goto L534280;
case 0x534285:c.instructions+=2;goto B534285;
case 0x534287:c.instructions+=1;goto B534287;
case 0x534289:goto L534289;
case 0x53428e:goto L53428e;
case 0x534290:goto L534290;
case 0x534291:c.instructions+=6;goto B534291;
case 0x534292:c.instructions+=5;goto B534292;
case 0x534294:c.instructions+=4;goto B534294;
case 0x534296:c.instructions+=3;goto B534296;
case 0x534297:c.instructions+=2;goto B534297;
case 0x53429a:c.instructions+=1;goto B53429a;
case 0x53429c:goto L53429c;
case 0x5342a3:goto L5342a3;
case 0x5342a8:c.instructions+=5;goto B5342a8;
case 0x5342ab:c.instructions+=4;goto B5342ab;
case 0x5342b1:c.instructions+=3;goto B5342b1;
case 0x5342b7:c.instructions+=2;goto B5342b7;
case 0x5342b9:c.instructions+=1;goto B5342b9;
case 0x5342be:goto L5342be;
case 0x5342c4:goto L5342c4;
case 0x5342c5:c.instructions+=2;goto B5342c5;
case 0x5342c6:c.instructions+=1;goto B5342c6;
case 0x5342c7:goto L5342c7;
case 0x5342ca:c.instructions+=9;goto B5342ca;
case 0x5342d0:c.instructions+=8;goto B5342d0;
case 0x5342d2:c.instructions+=7;goto B5342d2;
case 0x5342d6:c.instructions+=6;goto B5342d6;
case 0x5342da:c.instructions+=5;goto B5342da;
case 0x5342e0:c.instructions+=4;goto B5342e0;
case 0x5342e6:c.instructions+=3;goto B5342e6;
case 0x5342e8:c.instructions+=2;goto B5342e8;
case 0x5342eb:c.instructions+=1;goto B5342eb;
case 0x5342ed:goto L5342ed;
case 0x5342f3:c.instructions+=3;goto B5342f3;
case 0x5342f4:c.instructions+=2;goto B5342f4;
case 0x5342f5:c.instructions+=1;goto B5342f5;
case 0x5342f6:goto L5342f6;
case 0x5342fb:c.instructions+=1;goto B5342fb;
case 0x534300:goto L534300;
case 0x534302:c.instructions+=1;goto B534302;
case 0x534304:goto L534304;
case 0x53430a:c.instructions+=4;goto B53430a;
case 0x53430f:c.instructions+=3;goto B53430f;
case 0x534314:c.instructions+=2;goto B534314;
case 0x534317:c.instructions+=1;goto B534317;
case 0x53431c:goto L53431c;
case 0x534322:c.instructions+=2;goto B534322;
case 0x534327:c.instructions+=1;goto B534327;
case 0x53432c:goto L53432c;
case 0x53432f:c.instructions+=3;goto B53432f;
case 0x534330:c.instructions+=2;goto B534330;
case 0x534335:c.instructions+=1;goto B534335;
case 0x53433a:goto L53433a;
case 0x534340:c.instructions+=3;goto B534340;
case 0x534342:c.instructions+=2;goto B534342;
case 0x534344:c.instructions+=1;goto B534344;
case 0x534349:goto L534349;
case 0x53434e:c.instructions+=3;goto B53434e;
case 0x53434f:c.instructions+=2;goto B53434f;
case 0x534352:c.instructions+=1;goto B534352;
case 0x534357:goto L534357;
case 0x53435d:c.instructions+=3;goto B53435d;
case 0x534360:c.instructions+=2;goto B534360;
case 0x534366:c.instructions+=1;goto B534366;
case 0x53436c:goto L53436c;
case 0x534371:c.instructions+=1;goto B534371;
case 0x534376:goto L534376;
case 0x534378:c.instructions+=1;goto B534378;
case 0x53437e:goto L53437e;
case 0x534384:c.instructions+=3;goto B534384;
case 0x534385:c.instructions+=2;goto B534385;
case 0x534386:c.instructions+=1;goto B534386;
case 0x534387:goto L534387;
case 0x53438d:c.instructions+=3;goto B53438d;
case 0x534390:c.instructions+=2;goto B534390;
case 0x534396:c.instructions+=1;goto B534396;
case 0x53439c:goto L53439c;
case 0x5343a1:c.instructions+=1;goto B5343a1;
case 0x5343a6:goto L5343a6;
case 0x5343a8:c.instructions+=1;goto B5343a8;
case 0x5343ae:goto L5343ae;
case 0x5343b1:c.instructions+=2;goto B5343b1;
case 0x5343b3:c.instructions+=1;goto B5343b3;
case 0x5343b9:goto L5343b9;
case 0x5343bc:c.instructions+=2;goto B5343bc;
case 0x5343be:c.instructions+=1;goto B5343be;
case 0x5343c4:goto L5343c4;
case 0x5343ca:c.instructions+=6;goto B5343ca;
case 0x5343cf:c.instructions+=5;goto B5343cf;
case 0x5343d2:c.instructions+=4;goto B5343d2;
case 0x5343d7:c.instructions+=3;goto B5343d7;
case 0x5343d8:c.instructions+=2;goto B5343d8;
case 0x5343db:c.instructions+=1;goto B5343db;
case 0x5343e0:goto L5343e0;
case 0x5343e6:c.instructions+=3;goto B5343e6;
case 0x5343e9:c.instructions+=2;goto B5343e9;
case 0x5343ef:c.instructions+=1;goto B5343ef;
case 0x5343f5:goto L5343f5;
case 0x5343fa:c.instructions+=1;goto B5343fa;
case 0x5343ff:goto L5343ff;
case 0x534401:c.instructions+=1;goto B534401;
case 0x534407:goto L534407;
case 0x53440d:c.instructions+=4;goto B53440d;
case 0x534413:c.instructions+=3;goto B534413;
case 0x534418:c.instructions+=2;goto B534418;
case 0x53441b:c.instructions+=1;goto B53441b;
case 0x534420:goto L534420;
case 0x534425:c.instructions+=1;goto B534425;
case 0x53442a:goto L53442a;
case 0x53442d:c.instructions+=3;goto B53442d;
case 0x53442e:c.instructions+=2;goto B53442e;
case 0x534433:c.instructions+=1;goto B534433;
case 0x534438:goto L534438;
case 0x53443d:c.instructions+=3;goto B53443d;
case 0x53443e:c.instructions+=2;goto B53443e;
case 0x534441:c.instructions+=1;goto B534441;
case 0x534446:goto L534446;
case 0x53444b:c.instructions+=3;goto B53444b;
case 0x53444e:c.instructions+=2;goto B53444e;
case 0x534453:c.instructions+=1;goto B534453;
case 0x534455:goto L534455;
case 0x53445a:c.instructions+=1;goto B53445a;
case 0x53445f:goto L53445f;
case 0x534465:c.instructions+=5;goto B534465;
case 0x53446b:c.instructions+=4;goto B53446b;
case 0x53446e:c.instructions+=3;goto B53446e;
case 0x53446f:c.instructions+=2;goto B53446f;
case 0x534470:c.instructions+=1;goto B534470;
case 0x534471:goto L534471;
case 0x534473:c.instructions+=3;goto B534473;
case 0x534474:c.instructions+=2;goto B534474;
case 0x534477:c.instructions+=1;goto B534477;
case 0x5344a0:goto L5344a0;
case 0x5344a1:c.instructions+=3;goto B5344a1;
case 0x5344a3:c.instructions+=2;goto B5344a3;
case 0x5344a6:c.instructions+=1;goto B5344a6;
case 0x5344ab:goto L5344ab;
case 0x5344b1:c.instructions+=1;goto B5344b1;
case 0x5344b6:goto L5344b6;
case 0x5344bc:c.instructions+=1;goto B5344bc;
case 0x5344c1:goto L5344c1;
case 0x5344c3:c.instructions+=2;goto B5344c3;
case 0x5344c4:c.instructions+=1;goto B5344c4;
case 0x5344d0:goto L5344d0;
case 0x5344d1:c.instructions+=13;goto B5344d1;
case 0x5344d3:c.instructions+=12;goto B5344d3;
case 0x5344d6:c.instructions+=11;goto B5344d6;
case 0x5344d9:c.instructions+=10;goto B5344d9;
case 0x5344da:c.instructions+=9;goto B5344da;
case 0x5344db:c.instructions+=8;goto B5344db;
case 0x5344de:c.instructions+=7;goto B5344de;
case 0x5344df:c.instructions+=6;goto B5344df;
case 0x5344e1:c.instructions+=5;goto B5344e1;
case 0x5344e4:c.instructions+=4;goto B5344e4;
case 0x5344e6:c.instructions+=3;goto B5344e6;
case 0x5344eb:c.instructions+=2;goto B5344eb;
case 0x5344ee:c.instructions+=1;goto B5344ee;
case 0x5344f3:goto L5344f3;
case 0x5344f5:c.instructions+=5;goto B5344f5;
case 0x5344f7:c.instructions+=4;goto B5344f7;
case 0x5344f8:c.instructions+=3;goto B5344f8;
case 0x5344f9:c.instructions+=2;goto B5344f9;
case 0x5344ff:c.instructions+=1;goto B5344ff;
case 0x534504:goto L534504;
case 0x534506:c.instructions+=5;goto B534506;
case 0x534508:c.instructions+=4;goto B534508;
case 0x534509:c.instructions+=3;goto B534509;
case 0x53450a:c.instructions+=2;goto B53450a;
case 0x53450f:c.instructions+=1;goto B53450f;
case 0x534514:goto L534514;
case 0x53451a:c.instructions+=2;goto B53451a;
case 0x53451c:c.instructions+=1;goto B53451c;
case 0x53451e:goto L53451e;
case 0x534523:c.instructions+=2;goto B534523;
case 0x534525:c.instructions+=1;goto B534525;
case 0x53452b:goto L53452b;
case 0x53452d:goto L53452d;
case 0x534530:goto L534530;
case 0x534533:c.instructions+=2;goto B534533;
case 0x534535:c.instructions+=1;goto B534535;
case 0x534537:goto L534537;
case 0x53453c:c.instructions+=2;goto B53453c;
case 0x53453e:c.instructions+=1;goto B53453e;
case 0x534541:goto L534541;
case 0x534543:goto L534543;
case 0x534546:goto L534546;
case 0x534549:c.instructions+=2;goto B534549;
case 0x53454b:c.instructions+=1;goto B53454b;
case 0x53454d:goto L53454d;
case 0x53454f:c.instructions+=8;goto B53454f;
case 0x534552:c.instructions+=7;goto B534552;
case 0x534554:c.instructions+=6;goto B534554;
case 0x534557:c.instructions+=5;goto B534557;
case 0x53455a:c.instructions+=4;goto B53455a;
case 0x53455d:c.instructions+=3;goto B53455d;
case 0x534560:c.instructions+=2;goto B534560;
case 0x534563:c.instructions+=1;goto B534563;
case 0x534566:goto L534566;
case 0x534569:c.instructions+=2;goto B534569;
case 0x53456b:c.instructions+=1;goto B53456b;
case 0x53456d:goto L53456d;
case 0x534572:c.instructions+=1;goto B534572;
case 0x534578:goto L534578;
case 0x53457a:goto L53457a;
case 0x53457d:goto L53457d;
case 0x534580:c.instructions+=2;goto B534580;
case 0x534582:c.instructions+=1;goto B534582;
case 0x534584:goto L534584;
case 0x534586:c.instructions+=8;goto B534586;
case 0x534589:c.instructions+=7;goto B534589;
case 0x53458b:c.instructions+=6;goto B53458b;
case 0x53458e:c.instructions+=5;goto B53458e;
case 0x534591:c.instructions+=4;goto B534591;
case 0x534594:c.instructions+=3;goto B534594;
case 0x534597:c.instructions+=2;goto B534597;
case 0x53459a:c.instructions+=1;goto B53459a;
case 0x53459d:goto L53459d;
case 0x5345a3:c.instructions+=2;goto B5345a3;
case 0x5345a5:c.instructions+=1;goto B5345a5;
case 0x5345a7:goto L5345a7;
case 0x5345ac:c.instructions+=1;goto B5345ac;
case 0x5345b2:goto L5345b2;
case 0x5345b4:goto L5345b4;
case 0x5345b7:goto L5345b7;
case 0x5345ba:c.instructions+=2;goto B5345ba;
case 0x5345bc:c.instructions+=1;goto B5345bc;
case 0x5345be:goto L5345be;
case 0x5345c0:c.instructions+=2;goto B5345c0;
case 0x5345c6:c.instructions+=1;goto B5345c6;
case 0x5345c8:goto L5345c8;
case 0x5345cb:c.instructions+=2;goto B5345cb;
case 0x5345cd:c.instructions+=1;goto B5345cd;
case 0x5345cf:goto L5345cf;
case 0x5345d1:c.instructions+=2;goto B5345d1;
case 0x5345d7:c.instructions+=1;goto B5345d7;
case 0x5345d9:goto L5345d9;
case 0x5345dc:c.instructions+=2;goto B5345dc;
case 0x5345de:c.instructions+=1;goto B5345de;
case 0x5345e0:goto L5345e0;
case 0x5345e2:c.instructions+=2;goto B5345e2;
case 0x5345e8:c.instructions+=1;goto B5345e8;
case 0x5345ea:goto L5345ea;
case 0x5345ed:c.instructions+=2;goto B5345ed;
case 0x5345ef:c.instructions+=1;goto B5345ef;
case 0x5345f1:goto L5345f1;
case 0x5345f3:c.instructions+=2;goto B5345f3;
case 0x5345f9:c.instructions+=1;goto B5345f9;
case 0x5345fb:goto L5345fb;
case 0x5345fe:c.instructions+=2;goto B5345fe;
case 0x534600:c.instructions+=1;goto B534600;
case 0x534602:goto L534602;
case 0x534604:c.instructions+=2;goto B534604;
case 0x53460a:c.instructions+=1;goto B53460a;
case 0x53460c:goto L53460c;
case 0x534612:c.instructions+=2;goto B534612;
case 0x534614:c.instructions+=1;goto B534614;
case 0x534616:goto L534616;
case 0x53461b:c.instructions+=1;goto B53461b;
case 0x534621:goto L534621;
case 0x534623:goto L534623;
case 0x534626:goto L534626;
case 0x534628:c.instructions+=3;goto B534628;
case 0x53462e:c.instructions+=2;goto B53462e;
case 0x534630:c.instructions+=1;goto B534630;
case 0x534632:goto L534632;
case 0x534637:c.instructions+=1;goto B534637;
case 0x53463d:goto L53463d;
case 0x53463f:goto L53463f;
case 0x534642:goto L534642;
case 0x534644:c.instructions+=3;goto B534644;
case 0x534647:c.instructions+=2;goto B534647;
case 0x534649:c.instructions+=1;goto B534649;
case 0x53464b:goto L53464b;
case 0x534650:c.instructions+=1;goto B534650;
case 0x534652:goto L534652;
case 0x534654:goto L534654;
case 0x534655:c.instructions+=2;goto B534655;
case 0x53465a:c.instructions+=1;goto B53465a;
case 0x53465f:goto L53465f;
case 0x534660:c.instructions+=1;goto B534660;
case 0x534665:goto L534665;
case 0x534668:c.instructions+=4;goto B534668;
case 0x53466b:c.instructions+=3;goto B53466b;
case 0x53466d:c.instructions+=2;goto B53466d;
case 0x534671:c.instructions+=1;goto B534671;
case 0x534673:goto L534673;
case 0x534676:c.instructions+=3;goto B534676;
case 0x534677:c.instructions+=2;goto B534677;
case 0x53467d:c.instructions+=1;goto B53467d;
case 0x534682:goto L534682;
case 0x534685:c.instructions+=4;goto B534685;
case 0x53468b:c.instructions+=3;goto B53468b;
case 0x53468e:c.instructions+=2;goto B53468e;
case 0x53468f:c.instructions+=1;goto B53468f;
case 0x534694:goto L534694;
case 0x53469a:c.instructions+=1;goto B53469a;
case 0x53469f:goto L53469f;
case 0x5346a4:goto L5346a4;
case 0x5346a6:c.instructions+=2;goto B5346a6;
case 0x5346ab:c.instructions+=1;goto B5346ab;
case 0x5346b0:goto L5346b0;
case 0x5346b1:c.instructions+=1;goto B5346b1;
case 0x5346b6:goto L5346b6;
case 0x5346b9:c.instructions+=5;goto B5346b9;
case 0x5346ba:c.instructions+=4;goto B5346ba;
case 0x5346bd:c.instructions+=3;goto B5346bd;
case 0x5346bf:c.instructions+=2;goto B5346bf;
case 0x5346c0:c.instructions+=1;goto B5346c0;
case 0x5346c5:goto L5346c5;
case 0x5346c7:c.instructions+=4;goto B5346c7;
case 0x5346cb:c.instructions+=3;goto B5346cb;
case 0x5346cc:c.instructions+=2;goto B5346cc;
case 0x5346cd:c.instructions+=1;goto B5346cd;
case 0x5346d2:goto L5346d2;
case 0x5346d5:c.instructions+=4;goto B5346d5;
case 0x5346d8:c.instructions+=3;goto B5346d8;
case 0x5346d9:c.instructions+=2;goto B5346d9;
case 0x5346df:c.instructions+=1;goto B5346df;
case 0x5346e1:goto L5346e1;
case 0x5346e2:c.instructions+=5;goto B5346e2;
case 0x5346e3:c.instructions+=4;goto B5346e3;
case 0x5346e4:c.instructions+=3;goto B5346e4;
case 0x5346e6:c.instructions+=2;goto B5346e6;
case 0x5346e7:c.instructions+=1;goto B5346e7;
case 0x5346f0:goto L5346f0;
case 0x5346f1:c.instructions+=10;goto B5346f1;
case 0x5346f2:c.instructions+=9;goto B5346f2;
case 0x5346f4:c.instructions+=8;goto B5346f4;
case 0x5346f6:c.instructions+=7;goto B5346f6;
case 0x5346fc:c.instructions+=6;goto B5346fc;
case 0x5346ff:c.instructions+=5;goto B5346ff;
case 0x534703:c.instructions+=4;goto B534703;
case 0x534708:c.instructions+=3;goto B534708;
case 0x534709:c.instructions+=2;goto B534709;
case 0x53470f:c.instructions+=1;goto B53470f;
case 0x534714:goto L534714;
case 0x53471a:c.instructions+=3;goto B53471a;
case 0x53471b:c.instructions+=2;goto B53471b;
case 0x534721:c.instructions+=1;goto B534721;
case 0x534726:goto L534726;
case 0x534728:c.instructions+=3;goto B534728;
case 0x534729:c.instructions+=2;goto B534729;
case 0x53472c:c.instructions+=1;goto B53472c;
case 0x534731:goto L534731;
case 0x534733:c.instructions+=3;goto B534733;
case 0x534735:c.instructions+=2;goto B534735;
case 0x53473b:c.instructions+=1;goto B53473b;
case 0x534740:goto L534740;
case 0x534742:c.instructions+=7;goto B534742;
case 0x534747:c.instructions+=6;goto B534747;
case 0x53474d:c.instructions+=5;goto B53474d;
case 0x534753:c.instructions+=4;goto B534753;
case 0x53475d:c.instructions+=3;goto B53475d;
case 0x534760:c.instructions+=2;goto B534760;
case 0x534767:c.instructions+=1;goto B534767;
case 0x53476c:goto L53476c;
case 0x53476d:c.instructions+=2;goto B53476d;
case 0x53476e:c.instructions+=1;goto B53476e;
case 0x534770:goto L534770;
case 0x534777:c.instructions+=1;goto B534777;
case 0x534779:goto L534779;
case 0x53477f:c.instructions+=5;goto B53477f;
case 0x534785:c.instructions+=4;goto B534785;
case 0x534789:c.instructions+=3;goto B534789;
case 0x534791:c.instructions+=2;goto B534791;
case 0x534797:c.instructions+=1;goto B534797;
case 0x53479c:goto L53479c;
case 0x5347a0:c.instructions+=6;goto B5347a0;
case 0x5347a4:c.instructions+=5;goto B5347a4;
case 0x5347a6:c.instructions+=4;goto B5347a6;
case 0x5347a7:c.instructions+=3;goto B5347a7;
case 0x5347a8:c.instructions+=2;goto B5347a8;
case 0x5347ab:c.instructions+=1;goto B5347ab;
case 0x5347b0:goto L5347b0;
case 0x5347c0:goto L5347c0;
case 0x5347c1:c.instructions+=4;goto B5347c1;
case 0x5347c3:c.instructions+=3;goto B5347c3;
case 0x5347c9:c.instructions+=2;goto B5347c9;
case 0x5347cb:c.instructions+=1;goto B5347cb;
case 0x5347cd:goto L5347cd;
case 0x5347d2:goto L5347d2;
case 0x5347d8:c.instructions+=4;goto B5347d8;
case 0x5347de:c.instructions+=3;goto B5347de;
case 0x5347e3:c.instructions+=2;goto B5347e3;
case 0x5347e6:c.instructions+=1;goto B5347e6;
case 0x5347e8:goto L5347e8;
case 0x5347ee:c.instructions+=6;goto B5347ee;
case 0x5347f4:c.instructions+=5;goto B5347f4;
case 0x5347f9:c.instructions+=4;goto B5347f9;
case 0x5347fd:c.instructions+=3;goto B5347fd;
case 0x5347fe:c.instructions+=2;goto B5347fe;
case 0x534804:c.instructions+=1;goto B534804;
case 0x534809:goto L534809;
case 0x53480b:goto L53480b;
case 0x53480d:c.instructions+=4;goto B53480d;
case 0x53480e:c.instructions+=3;goto B53480e;
case 0x53480f:c.instructions+=2;goto B53480f;
case 0x534812:c.instructions+=1;goto B534812;
case 0x534817:goto L534817;
case 0x53481d:c.instructions+=2;goto B53481d;
case 0x53481f:c.instructions+=1;goto B53481f;
case 0x534821:goto L534821;
case 0x534822:c.instructions+=1;goto B534822;
case 0x534827:goto L534827;
case 0x53482a:c.instructions+=1;goto B53482a;
case 0x534834:goto L534834;
case 0x534835:c.instructions+=1;goto B534835;
case 0x534840:goto L534840;
case 0x534845:c.instructions+=1;goto B534845;
case 0x534850:goto L534850;
case 0x534853:c.instructions+=10;goto B534853;
case 0x534854:c.instructions+=9;goto B534854;
case 0x534858:c.instructions+=8;goto B534858;
case 0x534859:c.instructions+=7;goto B534859;
case 0x53485d:c.instructions+=6;goto B53485d;
case 0x53485e:c.instructions+=5;goto B53485e;
case 0x53485f:c.instructions+=4;goto B53485f;
case 0x534861:c.instructions+=3;goto B534861;
case 0x534869:c.instructions+=2;goto B534869;
case 0x53486f:c.instructions+=1;goto B53486f;
case 0x534877:goto L534877;
case 0x534879:c.instructions+=3;goto B534879;
case 0x53487c:c.instructions+=2;goto B53487c;
case 0x53487e:c.instructions+=1;goto B53487e;
case 0x534880:goto L534880;
case 0x534882:c.instructions+=1;goto B534882;
case 0x534885:goto L534885;
case 0x534888:c.instructions+=1;goto B534888;
case 0x53488a:goto L53488a;
case 0x53488c:c.instructions+=3;goto B53488c;
case 0x53488f:c.instructions+=2;goto B53488f;
case 0x534891:c.instructions+=1;goto B534891;
case 0x534893:goto L534893;
case 0x534896:c.instructions+=1;goto B534896;
case 0x534898:goto L534898;
case 0x53489e:c.instructions+=2;goto B53489e;
case 0x5348a0:c.instructions+=1;goto B5348a0;
case 0x5348a2:goto L5348a2;
case 0x5348a5:c.instructions+=7;goto B5348a5;
case 0x5348a7:c.instructions+=6;goto B5348a7;
case 0x5348ad:c.instructions+=5;goto B5348ad;
case 0x5348b0:c.instructions+=4;goto B5348b0;
case 0x5348b1:c.instructions+=3;goto B5348b1;
case 0x5348b2:c.instructions+=2;goto B5348b2;
case 0x5348b3:c.instructions+=1;goto B5348b3;
case 0x5348b8:goto L5348b8;
case 0x5348bb:c.instructions+=1;goto B5348bb;
case 0x5348bd:goto L5348bd;
case 0x5348bf:goto L5348bf;
case 0x5348c3:goto L5348c3;
case 0x5348c7:c.instructions+=4;goto B5348c7;
case 0x5348ca:c.instructions+=3;goto B5348ca;
case 0x5348cb:c.instructions+=2;goto B5348cb;
case 0x5348cf:c.instructions+=1;goto B5348cf;
case 0x5348d1:goto L5348d1;
case 0x5348d5:c.instructions+=6;goto B5348d5;
case 0x5348d6:c.instructions+=5;goto B5348d6;
case 0x5348d7:c.instructions+=4;goto B5348d7;
case 0x5348d8:c.instructions+=3;goto B5348d8;
case 0x5348d9:c.instructions+=2;goto B5348d9;
case 0x5348dc:c.instructions+=1;goto B5348dc;
case 0x5348e0:goto L5348e0;
case 0x5348e4:c.instructions+=7;goto B5348e4;
case 0x5348e5:c.instructions+=6;goto B5348e5;
case 0x5348e6:c.instructions+=5;goto B5348e6;
case 0x5348e7:c.instructions+=4;goto B5348e7;
case 0x5348e8:c.instructions+=3;goto B5348e8;
case 0x5348ed:c.instructions+=2;goto B5348ed;
case 0x5348ef:c.instructions+=1;goto B5348ef;
case 0x5348f4:goto L5348f4;
case 0x5348f7:c.instructions+=3;goto B5348f7;
case 0x5348f8:c.instructions+=2;goto B5348f8;
case 0x5348fa:c.instructions+=1;goto B5348fa;
case 0x5348ff:goto L5348ff;
case 0x534905:c.instructions+=4;goto B534905;
case 0x534907:c.instructions+=3;goto B534907;
case 0x534909:c.instructions+=2;goto B534909;
case 0x53490b:c.instructions+=1;goto B53490b;
case 0x53490d:goto L53490d;
case 0x534911:c.instructions+=1;goto B534911;
case 0x534914:goto L534914;
case 0x534916:c.instructions+=1;goto B534916;
case 0x534918:goto L534918;
case 0x534919:c.instructions+=3;goto B534919;
case 0x53491c:c.instructions+=2;goto B53491c;
case 0x53491e:c.instructions+=1;goto B53491e;
case 0x534920:goto L534920;
case 0x534922:goto L534922;
case 0x534925:c.instructions+=4;goto B534925;
case 0x534926:c.instructions+=3;goto B534926;
case 0x534927:c.instructions+=2;goto B534927;
case 0x534929:c.instructions+=1;goto B534929;
case 0x53492e:goto L53492e;
case 0x534935:c.instructions+=5;goto B534935;
case 0x53493c:c.instructions+=4;goto B53493c;
case 0x53493d:c.instructions+=3;goto B53493d;
case 0x53493e:c.instructions+=2;goto B53493e;
case 0x53493f:c.instructions+=1;goto B53493f;
case 0x534942:goto L534942;
case 0x534945:c.instructions+=2;goto B534945;
case 0x534947:c.instructions+=1;goto B534947;
case 0x53494e:goto L53494e;
case 0x53494f:c.instructions+=8;goto B53494f;
case 0x534950:c.instructions+=7;goto B534950;
case 0x534954:c.instructions+=6;goto B534954;
case 0x534955:c.instructions+=5;goto B534955;
case 0x534956:c.instructions+=4;goto B534956;
case 0x534957:c.instructions+=3;goto B534957;
case 0x534958:c.instructions+=2;goto B534958;
case 0x53495a:c.instructions+=1;goto B53495a;
case 0x53495f:goto L53495f;
case 0x534961:c.instructions+=2;goto B534961;
case 0x534967:c.instructions+=1;goto B534967;
case 0x53496c:goto L53496c;
case 0x534972:c.instructions+=3;goto B534972;
case 0x534974:c.instructions+=2;goto B534974;
case 0x534976:c.instructions+=1;goto B534976;
case 0x534978:goto L534978;
case 0x53497c:c.instructions+=2;goto B53497c;
case 0x53497f:c.instructions+=1;goto B53497f;
case 0x534980:goto L534980;
case 0x534982:c.instructions+=1;goto B534982;
case 0x534984:goto L534984;
case 0x534985:c.instructions+=3;goto B534985;
case 0x534988:c.instructions+=2;goto B534988;
case 0x53498a:c.instructions+=1;goto B53498a;
case 0x53498c:goto L53498c;
case 0x53498e:goto L53498e;
case 0x534991:c.instructions+=4;goto B534991;
case 0x534992:c.instructions+=3;goto B534992;
case 0x534993:c.instructions+=2;goto B534993;
case 0x534995:c.instructions+=1;goto B534995;
case 0x53499a:goto L53499a;
case 0x5349a1:c.instructions+=5;goto B5349a1;
case 0x5349a8:c.instructions+=4;goto B5349a8;
case 0x5349a9:c.instructions+=3;goto B5349a9;
case 0x5349aa:c.instructions+=2;goto B5349aa;
case 0x5349ab:c.instructions+=1;goto B5349ab;
case 0x5349ae:goto L5349ae;
case 0x5349b1:c.instructions+=2;goto B5349b1;
case 0x5349b3:c.instructions+=1;goto B5349b3;
case 0x5349c0:goto L5349c0;
case 0x5349c1:c.instructions+=2;goto B5349c1;
case 0x5349c3:c.instructions+=1;goto B5349c3;
case 0x5349c8:goto L5349c8;
case 0x5349ca:c.instructions+=27;goto B5349ca;
case 0x5349cd:c.instructions+=26;goto B5349cd;
case 0x5349d0:c.instructions+=25;goto B5349d0;
case 0x5349d6:c.instructions+=24;goto B5349d6;
case 0x5349db:c.instructions+=23;goto B5349db;
case 0x5349de:c.instructions+=22;goto B5349de;
case 0x5349e1:c.instructions+=21;goto B5349e1;
case 0x5349e4:c.instructions+=20;goto B5349e4;
case 0x5349e7:c.instructions+=19;goto B5349e7;
case 0x5349ea:c.instructions+=18;goto B5349ea;
case 0x5349ed:c.instructions+=17;goto B5349ed;
case 0x5349f0:c.instructions+=16;goto B5349f0;
case 0x5349f5:c.instructions+=15;goto B5349f5;
case 0x5349fb:c.instructions+=14;goto B5349fb;
case 0x534a01:c.instructions+=13;goto B534a01;
case 0x534a07:c.instructions+=12;goto B534a07;
case 0x534a0d:c.instructions+=11;goto B534a0d;
case 0x534a13:c.instructions+=10;goto B534a13;
case 0x534a19:c.instructions+=9;goto B534a19;
case 0x534a1f:c.instructions+=8;goto B534a1f;
case 0x534a25:c.instructions+=7;goto B534a25;
case 0x534a2b:c.instructions+=6;goto B534a2b;
case 0x534a31:c.instructions+=5;goto B534a31;
case 0x534a3b:c.instructions+=4;goto B534a3b;
case 0x534a3e:c.instructions+=3;goto B534a3e;
case 0x534a40:c.instructions+=2;goto B534a40;
case 0x534a41:c.instructions+=1;goto B534a41;
case 0x534a50:goto L534a50;
case 0x534a52:c.instructions+=11;goto B534a52;
case 0x534a57:c.instructions+=10;goto B534a57;
case 0x534a5d:c.instructions+=9;goto B534a5d;
case 0x534a5e:c.instructions+=8;goto B534a5e;
case 0x534a65:c.instructions+=7;goto B534a65;
case 0x534a66:c.instructions+=6;goto B534a66;
case 0x534a67:c.instructions+=5;goto B534a67;
case 0x534a69:c.instructions+=4;goto B534a69;
case 0x534a6d:c.instructions+=3;goto B534a6d;
case 0x534a73:c.instructions+=2;goto B534a73;
case 0x534a7b:c.instructions+=1;goto B534a7b;
case 0x534a80:goto L534a80;
case 0x534a82:c.instructions+=2;goto B534a82;
case 0x534a8a:c.instructions+=1;goto B534a8a;
case 0x534a8f:goto L534a8f;
case 0x534a93:c.instructions+=4;goto B534a93;
case 0x534a94:c.instructions+=3;goto B534a94;
case 0x534a9b:c.instructions+=2;goto B534a9b;
case 0x534a9e:c.instructions+=1;goto B534a9e;
case 0x534aa0:goto L534aa0;
case 0x534aa1:c.instructions+=2;goto B534aa1;
case 0x534aa3:c.instructions+=1;goto B534aa3;
case 0x534aa8:goto L534aa8;
case 0x534aad:c.instructions+=1;goto B534aad;
case 0x534aaf:goto L534aaf;
case 0x534ab0:c.instructions+=1;goto B534ab0;
case 0x534ab5:goto L534ab5;
case 0x534ab8:goto L534ab8;
case 0x534aba:c.instructions+=2;goto B534aba;
case 0x534abb:c.instructions+=1;goto B534abb;
case 0x534ac0:goto L534ac0;
case 0x534ac2:c.instructions+=12;goto B534ac2;
case 0x534ac7:c.instructions+=11;goto B534ac7;
case 0x534acd:c.instructions+=10;goto B534acd;
case 0x534ace:c.instructions+=9;goto B534ace;
case 0x534ad5:c.instructions+=8;goto B534ad5;
case 0x534ad6:c.instructions+=7;goto B534ad6;
case 0x534ad7:c.instructions+=6;goto B534ad7;
case 0x534ad9:c.instructions+=5;goto B534ad9;
case 0x534add:c.instructions+=4;goto B534add;
case 0x534ae0:c.instructions+=3;goto B534ae0;
case 0x534ae8:c.instructions+=2;goto B534ae8;
case 0x534aee:c.instructions+=1;goto B534aee;
case 0x534af3:goto L534af3;
case 0x534af7:c.instructions+=5;goto B534af7;
case 0x534afd:c.instructions+=4;goto B534afd;
case 0x534afe:c.instructions+=3;goto B534afe;
case 0x534b05:c.instructions+=2;goto B534b05;
case 0x534b08:c.instructions+=1;goto B534b08;
case 0x534b10:goto L534b10;
case 0x534b12:c.instructions+=13;goto B534b12;
case 0x534b17:c.instructions+=12;goto B534b17;
case 0x534b1d:c.instructions+=11;goto B534b1d;
case 0x534b1e:c.instructions+=10;goto B534b1e;
case 0x534b25:c.instructions+=9;goto B534b25;
case 0x534b26:c.instructions+=8;goto B534b26;
case 0x534b27:c.instructions+=7;goto B534b27;
case 0x534b29:c.instructions+=6;goto B534b29;
case 0x534b2d:c.instructions+=5;goto B534b2d;
case 0x534b33:c.instructions+=4;goto B534b33;
case 0x534b36:c.instructions+=3;goto B534b36;
case 0x534b38:c.instructions+=2;goto B534b38;
case 0x534b40:c.instructions+=1;goto B534b40;
case 0x534b42:goto L534b42;
case 0x534b45:c.instructions+=7;goto B534b45;
case 0x534b46:c.instructions+=6;goto B534b46;
case 0x534b49:c.instructions+=5;goto B534b49;
case 0x534b4e:c.instructions+=4;goto B534b4e;
case 0x534b4f:c.instructions+=3;goto B534b4f;
case 0x534b51:c.instructions+=2;goto B534b51;
case 0x534b52:c.instructions+=1;goto B534b52;
case 0x534b57:goto L534b57;
case 0x534b58:c.instructions+=1;goto B534b58;
case 0x534b5d:goto L534b5d;
case 0x534b60:c.instructions+=1;goto B534b60;
case 0x534b61:goto L534b61;
case 0x534b65:c.instructions+=7;goto B534b65;
case 0x534b6c:c.instructions+=6;goto B534b6c;
case 0x534b73:c.instructions+=5;goto B534b73;
case 0x534b79:c.instructions+=4;goto B534b79;
case 0x534b7a:c.instructions+=3;goto B534b7a;
case 0x534b81:c.instructions+=2;goto B534b81;
case 0x534b84:c.instructions+=1;goto B534b84;
case 0x534b90:goto L534b90;
case 0x534b91:c.instructions+=2;goto B534b91;
case 0x534b93:c.instructions+=1;goto B534b93;
case 0x534b98:goto L534b98;
case 0x534b9f:c.instructions+=5;goto B534b9f;
case 0x534ba5:c.instructions+=4;goto B534ba5;
case 0x534bac:c.instructions+=3;goto B534bac;
case 0x534bae:c.instructions+=2;goto B534bae;
case 0x534baf:c.instructions+=1;goto B534baf;
case 0x534bb0:goto L534bb0;
case 0x534bb1:c.instructions+=2;goto B534bb1;
case 0x534bb3:c.instructions+=1;goto B534bb3;
case 0x534bb8:goto L534bb8;
case 0x534bbd:c.instructions+=1;goto B534bbd;
case 0x534bbf:goto L534bbf;
case 0x534bc0:c.instructions+=1;goto B534bc0;
case 0x534bc5:goto L534bc5;
case 0x534bc8:goto L534bc8;
case 0x534bca:c.instructions+=2;goto B534bca;
case 0x534bcb:c.instructions+=1;goto B534bcb;
case 0x534bd0:goto L534bd0;
case 0x534bd1:c.instructions+=2;goto B534bd1;
case 0x534bd3:c.instructions+=1;goto B534bd3;
case 0x534bd8:goto L534bd8;
case 0x534bdd:c.instructions+=1;goto B534bdd;
case 0x534bdf:goto L534bdf;
case 0x534be0:c.instructions+=1;goto B534be0;
case 0x534be5:goto L534be5;
case 0x534be8:goto L534be8;
case 0x534bea:c.instructions+=2;goto B534bea;
case 0x534beb:c.instructions+=1;goto B534beb;
case 0x534bf0:goto L534bf0;
case 0x534bf2:c.instructions+=12;goto B534bf2;
case 0x534bf7:c.instructions+=11;goto B534bf7;
case 0x534bfd:c.instructions+=10;goto B534bfd;
case 0x534bfe:c.instructions+=9;goto B534bfe;
case 0x534c05:c.instructions+=8;goto B534c05;
case 0x534c06:c.instructions+=7;goto B534c06;
case 0x534c07:c.instructions+=6;goto B534c07;
case 0x534c09:c.instructions+=5;goto B534c09;
case 0x534c0d:c.instructions+=4;goto B534c0d;
case 0x534c10:c.instructions+=3;goto B534c10;
case 0x534c18:c.instructions+=2;goto B534c18;
case 0x534c1e:c.instructions+=1;goto B534c1e;
case 0x534c23:goto L534c23;
case 0x534c25:c.instructions+=2;goto B534c25;
case 0x534c2d:c.instructions+=1;goto B534c2d;
case 0x534c32:goto L534c32;
case 0x534c36:c.instructions+=4;goto B534c36;
case 0x534c37:c.instructions+=3;goto B534c37;
case 0x534c3e:c.instructions+=2;goto B534c3e;
case 0x534c41:c.instructions+=1;goto B534c41;
case 0x534c45:goto L534c45;
case 0x534c46:c.instructions+=13;goto B534c46;
case 0x534c47:c.instructions+=12;goto B534c47;
case 0x534c48:c.instructions+=11;goto B534c48;
case 0x534c49:c.instructions+=10;goto B534c49;
case 0x534c4a:c.instructions+=9;goto B534c4a;
case 0x534c4b:c.instructions+=8;goto B534c4b;
case 0x534c4c:c.instructions+=7;goto B534c4c;
case 0x534c4d:c.instructions+=6;goto B534c4d;
case 0x534c4e:c.instructions+=5;goto B534c4e;
case 0x534c4f:c.instructions+=4;goto B534c4f;
case 0x534c50:c.instructions+=3;goto B534c50;
case 0x534c51:c.instructions+=2;goto B534c51;
case 0x534c53:c.instructions+=1;goto B534c53;
case 0x534c58:goto L534c58;
case 0x534c5d:c.instructions+=1;goto B534c5d;
case 0x534c5f:goto L534c5f;
case 0x534c60:c.instructions+=1;goto B534c60;
case 0x534c65:goto L534c65;
case 0x534c68:goto L534c68;
case 0x534c6a:c.instructions+=2;goto B534c6a;
case 0x534c6b:c.instructions+=1;goto B534c6b;
case 0x534c70:goto L534c70;
case 0x534c71:c.instructions+=13;goto B534c71;
case 0x534c75:c.instructions+=12;goto B534c75;
case 0x534c79:c.instructions+=11;goto B534c79;
case 0x534c7a:c.instructions+=10;goto B534c7a;
case 0x534c7d:c.instructions+=9;goto B534c7d;
case 0x534c7e:c.instructions+=8;goto B534c7e;
case 0x534c82:c.instructions+=7;goto B534c82;
case 0x534c84:c.instructions+=6;goto B534c84;
case 0x534c85:c.instructions+=5;goto B534c85;
case 0x534c86:c.instructions+=4;goto B534c86;
case 0x534c89:c.instructions+=3;goto B534c89;
case 0x534c8b:c.instructions+=2;goto B534c8b;
case 0x534c8f:c.instructions+=1;goto B534c8f;
case 0x534c95:goto L534c95;
case 0x534c98:c.instructions+=1;goto B534c98;
case 0x534c9a:goto L534c9a;
case 0x534c9b:c.instructions+=1;goto B534c9b;
case 0x534c9f:goto L534c9f;
case 0x534ca1:c.instructions+=3;goto B534ca1;
case 0x534ca3:c.instructions+=2;goto B534ca3;
case 0x534ca7:c.instructions+=1;goto B534ca7;
case 0x534cad:goto L534cad;
case 0x534cb0:goto L534cb0;
case 0x534cb2:c.instructions+=1;goto B534cb2;
case 0x534cb4:goto L534cb4;
case 0x534cb5:c.instructions+=3;goto B534cb5;
case 0x534cb8:c.instructions+=2;goto B534cb8;
case 0x534cba:c.instructions+=1;goto B534cba;
case 0x534cbc:goto L534cbc;
case 0x534cbd:c.instructions+=6;goto B534cbd;
case 0x534cbe:c.instructions+=5;goto B534cbe;
case 0x534cbf:c.instructions+=4;goto B534cbf;
case 0x534cc3:c.instructions+=3;goto B534cc3;
case 0x534cc4:c.instructions+=2;goto B534cc4;
case 0x534cc5:c.instructions+=1;goto B534cc5;
case 0x534cc8:goto L534cc8;
case 0x534cca:c.instructions+=2;goto B534cca;
case 0x534cce:c.instructions+=1;goto B534cce;
case 0x534cd4:goto L534cd4;
case 0x534cd8:c.instructions+=4;goto B534cd8;
case 0x534cdc:c.instructions+=3;goto B534cdc;
case 0x534cdf:c.instructions+=2;goto B534cdf;
case 0x534ce2:c.instructions+=1;goto B534ce2;
case 0x534ce4:goto L534ce4;
case 0x534ce8:c.instructions+=1;goto B534ce8;
case 0x534cf0:goto L534cf0;
case 0x534cf3:c.instructions+=1;goto B534cf3;
case 0x534cf9:goto L534cf9;
case 0x534cfc:c.instructions+=2;goto B534cfc;
case 0x534cff:c.instructions+=1;goto B534cff;
case 0x534d01:goto L534d01;
case 0x534d03:goto L534d03;
case 0x534d05:c.instructions+=1;goto B534d05;
case 0x534d07:goto L534d07;
case 0x534d0a:c.instructions+=1;goto B534d0a;
case 0x534d0c:goto L534d0c;
case 0x534d0e:c.instructions+=2;goto B534d0e;
case 0x534d0f:c.instructions+=1;goto B534d0f;
case 0x534d11:goto L534d11;
case 0x534d13:c.instructions+=2;goto B534d13;
case 0x534d19:c.instructions+=1;goto B534d19;
case 0x534d1b:goto L534d1b;
case 0x534d1c:c.instructions+=2;goto B534d1c;
case 0x534d1e:c.instructions+=1;goto B534d1e;
case 0x534d23:goto L534d23;
case 0x534d25:c.instructions+=4;goto B534d25;
case 0x534d26:c.instructions+=3;goto B534d26;
case 0x534d27:c.instructions+=2;goto B534d27;
case 0x534d29:c.instructions+=1;goto B534d29;
case 0x534d2e:goto L534d2e;
case 0x534d30:goto L534d30;
case 0x534d32:c.instructions+=2;goto B534d32;
case 0x534d34:c.instructions+=1;goto B534d34;
case 0x534d36:goto L534d36;
case 0x534d38:c.instructions+=6;goto B534d38;
case 0x534d3a:c.instructions+=5;goto B534d3a;
case 0x534d3c:c.instructions+=4;goto B534d3c;
case 0x534d3d:c.instructions+=3;goto B534d3d;
case 0x534d3e:c.instructions+=2;goto B534d3e;
case 0x534d3f:c.instructions+=1;goto B534d3f;
case 0x534d41:goto L534d41;
case 0x534d44:c.instructions+=1;goto B534d44;
case 0x534d46:goto L534d46;
case 0x534d49:c.instructions+=1;goto B534d49;
case 0x534d4b:goto L534d4b;
case 0x534d4c:c.instructions+=2;goto B534d4c;
case 0x534d4e:c.instructions+=1;goto B534d4e;
case 0x534d53:goto L534d53;
case 0x534d55:c.instructions+=2;goto B534d55;
case 0x534d5b:c.instructions+=1;goto B534d5b;
case 0x534d5d:goto L534d5d;
case 0x534d60:c.instructions+=1;goto B534d60;
case 0x534d62:goto L534d62;
case 0x534d64:c.instructions+=1;goto B534d64;
case 0x534d66:goto L534d66;
case 0x534d68:c.instructions+=2;goto B534d68;
case 0x534d69:c.instructions+=1;goto B534d69;
case 0x534d6b:goto L534d6b;
case 0x534d71:c.instructions+=7;goto B534d71;
case 0x534d73:c.instructions+=6;goto B534d73;
case 0x534d75:c.instructions+=5;goto B534d75;
case 0x534d76:c.instructions+=4;goto B534d76;
case 0x534d78:c.instructions+=3;goto B534d78;
case 0x534d79:c.instructions+=2;goto B534d79;
case 0x534d7a:c.instructions+=1;goto B534d7a;
case 0x534d7d:goto L534d7d;
case 0x534d7f:goto L534d7f;
case 0x534d81:c.instructions+=1;goto B534d81;
case 0x534d83:goto L534d83;
case 0x534d85:goto L534d85;
case 0x534d86:c.instructions+=2;goto B534d86;
case 0x534d87:c.instructions+=1;goto B534d87;
case 0x534d88:goto L534d88;
case 0x534d8a:c.instructions+=1;goto B534d8a;
case 0x534d8f:goto L534d8f;
case 0x534d93:c.instructions+=6;goto B534d93;
case 0x534d97:c.instructions+=5;goto B534d97;
case 0x534d98:c.instructions+=4;goto B534d98;
case 0x534d9b:c.instructions+=3;goto B534d9b;
case 0x534d9d:c.instructions+=2;goto B534d9d;
case 0x534da1:c.instructions+=1;goto B534da1;
case 0x534da7:goto L534da7;
case 0x534da8:c.instructions+=5;goto B534da8;
case 0x534da9:c.instructions+=4;goto B534da9;
case 0x534daa:c.instructions+=3;goto B534daa;
case 0x534dab:c.instructions+=2;goto B534dab;
case 0x534dac:c.instructions+=1;goto B534dac;
case 0x534db0:goto L534db0;
case 0x534db1:c.instructions+=2;goto B534db1;
case 0x534db3:c.instructions+=1;goto B534db3;
case 0x534db8:goto L534db8;
case 0x534dbf:c.instructions+=5;goto B534dbf;
case 0x534dc5:c.instructions+=4;goto B534dc5;
case 0x534dcc:c.instructions+=3;goto B534dcc;
case 0x534dce:c.instructions+=2;goto B534dce;
case 0x534dcf:c.instructions+=1;goto B534dcf;
case 0x534dd0:goto L534dd0;
case 0x534dd1:c.instructions+=2;goto B534dd1;
case 0x534dd3:c.instructions+=1;goto B534dd3;
case 0x534dd8:goto L534dd8;
case 0x534ddd:c.instructions+=1;goto B534ddd;
case 0x534ddf:goto L534ddf;
case 0x534de0:c.instructions+=1;goto B534de0;
case 0x534de5:goto L534de5;
case 0x534de8:goto L534de8;
case 0x534dea:c.instructions+=2;goto B534dea;
case 0x534deb:c.instructions+=1;goto B534deb;
case 0x534df0:goto L534df0;
case 0x534df1:c.instructions+=6;goto B534df1;
case 0x534df5:c.instructions+=5;goto B534df5;
case 0x534df8:c.instructions+=4;goto B534df8;
case 0x534df9:c.instructions+=3;goto B534df9;
case 0x534dfa:c.instructions+=2;goto B534dfa;
case 0x534dfc:c.instructions+=1;goto B534dfc;
case 0x534e02:goto L534e02;
case 0x534e09:goto L534e09;
case 0x534e0b:c.instructions+=1;goto B534e0b;
case 0x534e10:goto L534e10;
case 0x534e13:c.instructions+=2;goto B534e13;
case 0x534e15:c.instructions+=1;goto B534e15;
case 0x534e1b:goto L534e1b;
case 0x534e1d:c.instructions+=1;goto B534e1d;
case 0x534e22:goto L534e22;
case 0x534e27:goto L534e27;
case 0x534e2c:c.instructions+=1;goto B534e2c;
case 0x534e31:goto L534e31;
case 0x534e34:c.instructions+=2;goto B534e34;
case 0x534e36:c.instructions+=1;goto B534e36;
case 0x534e3c:goto L534e3c;
case 0x534e3e:c.instructions+=1;goto B534e3e;
case 0x534e43:goto L534e43;
case 0x534e48:goto L534e48;
case 0x534e4d:c.instructions+=1;goto B534e4d;
case 0x534e52:goto L534e52;
case 0x534e55:c.instructions+=2;goto B534e55;
case 0x534e57:c.instructions+=1;goto B534e57;
case 0x534e59:goto L534e59;
case 0x534e5b:c.instructions+=1;goto B534e5b;
case 0x534e60:goto L534e60;
case 0x534e63:c.instructions+=2;goto B534e63;
case 0x534e66:c.instructions+=1;goto B534e66;
case 0x534e6b:goto L534e6b;
case 0x534e6e:c.instructions+=3;goto B534e6e;
case 0x534e70:c.instructions+=2;goto B534e70;
case 0x534e73:c.instructions+=1;goto B534e73;
case 0x534e78:goto L534e78;
case 0x534e7a:c.instructions+=1;goto B534e7a;
case 0x534e7f:goto L534e7f;
case 0x534e82:c.instructions+=2;goto B534e82;
case 0x534e84:c.instructions+=1;goto B534e84;
case 0x534e8a:goto L534e8a;
case 0x534e8c:c.instructions+=1;goto B534e8c;
case 0x534e91:goto L534e91;
case 0x534e96:goto L534e96;
case 0x534e98:c.instructions+=1;goto B534e98;
case 0x534e9d:goto L534e9d;
case 0x534ea0:c.instructions+=2;goto B534ea0;
case 0x534ea2:c.instructions+=1;goto B534ea2;
case 0x534ea8:goto L534ea8;
case 0x534eaa:c.instructions+=1;goto B534eaa;
case 0x534eaf:goto L534eaf;
case 0x534eb1:goto L534eb1;
case 0x534eb3:c.instructions+=1;goto B534eb3;
case 0x534eb8:goto L534eb8;
case 0x534ebb:c.instructions+=2;goto B534ebb;
case 0x534ebd:c.instructions+=1;goto B534ebd;
case 0x534ebf:goto L534ebf;
case 0x534ec1:c.instructions+=1;goto B534ec1;
case 0x534ec6:goto L534ec6;
case 0x534ec8:goto L534ec8;
case 0x534eca:c.instructions+=1;goto B534eca;
case 0x534ecf:goto L534ecf;
case 0x534ed2:c.instructions+=2;goto B534ed2;
case 0x534ed4:c.instructions+=1;goto B534ed4;
case 0x534ed6:goto L534ed6;
case 0x534ed8:c.instructions+=1;goto B534ed8;
case 0x534edd:goto L534edd;
case 0x534edf:goto L534edf;
case 0x534ee1:c.instructions+=1;goto B534ee1;
case 0x534ee6:goto L534ee6;
case 0x534ee9:c.instructions+=2;goto B534ee9;
case 0x534eeb:c.instructions+=1;goto B534eeb;
case 0x534eed:goto L534eed;
case 0x534eef:c.instructions+=1;goto B534eef;
case 0x534ef4:goto L534ef4;
case 0x534ef6:goto L534ef6;
case 0x534ef8:c.instructions+=1;goto B534ef8;
case 0x534efd:goto L534efd;
case 0x534f00:c.instructions+=2;goto B534f00;
case 0x534f02:c.instructions+=1;goto B534f02;
case 0x534f04:goto L534f04;
case 0x534f06:c.instructions+=1;goto B534f06;
case 0x534f0b:goto L534f0b;
case 0x534f0d:goto L534f0d;
case 0x534f0e:c.instructions+=4;goto B534f0e;
case 0x534f0f:c.instructions+=3;goto B534f0f;
case 0x534f11:c.instructions+=2;goto B534f11;
case 0x534f12:c.instructions+=1;goto B534f12;
case 0x534f15:goto L534f15;
case 0x534f17:c.instructions+=1;goto B534f17;
case 0x534f1c:goto L534f1c;
case 0x534f1f:c.instructions+=2;goto B534f1f;
case 0x534f21:c.instructions+=1;goto B534f21;
case 0x534f23:goto L534f23;
case 0x534f25:c.instructions+=1;goto B534f25;
case 0x534f2a:goto L534f2a;
case 0x534f2c:goto L534f2c;
case 0x534f2e:goto L534f2e;
case 0x534f30:c.instructions+=5;goto B534f30;
case 0x534f33:c.instructions+=4;goto B534f33;
case 0x534f36:c.instructions+=3;goto B534f36;
case 0x534f38:c.instructions+=2;goto B534f38;
case 0x534f3a:c.instructions+=1;goto B534f3a;
case 0x534f3c:goto L534f3c;
case 0x534f3f:c.instructions+=1;goto B534f3f;
case 0x534f41:goto L534f41;
case 0x534f43:c.instructions+=1;goto B534f43;
case 0x534f45:goto L534f45;
case 0x534f46:c.instructions+=3;goto B534f46;
case 0x534f49:c.instructions+=2;goto B534f49;
case 0x534f4b:c.instructions+=1;goto B534f4b;
case 0x534f4d:goto L534f4d;
case 0x534f4f:goto L534f4f;
case 0x534f52:c.instructions+=3;goto B534f52;
case 0x534f53:c.instructions+=2;goto B534f53;
case 0x534f58:c.instructions+=1;goto B534f58;
case 0x534f5d:goto L534f5d;
case 0x534f5e:c.instructions+=3;goto B534f5e;
case 0x534f63:c.instructions+=2;goto B534f63;
case 0x534f6a:c.instructions+=1;goto B534f6a;
case 0x534f6f:goto L534f6f;
case 0x534f72:c.instructions+=6;goto B534f72;
case 0x534f75:c.instructions+=5;goto B534f75;
case 0x534f76:c.instructions+=4;goto B534f76;
case 0x534f78:c.instructions+=3;goto B534f78;
case 0x534f79:c.instructions+=2;goto B534f79;
case 0x534f7a:c.instructions+=1;goto B534f7a;
case 0x534f7d:goto L534f7d;
case 0x534f81:c.instructions+=1;goto B534f81;
case 0x534fc0:goto L534fc0;
case 0x534fc4:c.instructions+=6;goto B534fc4;
case 0x534fc7:c.instructions+=5;goto B534fc7;
case 0x534fcc:c.instructions+=4;goto B534fcc;
case 0x534fcd:c.instructions+=3;goto B534fcd;
case 0x534fcf:c.instructions+=2;goto B534fcf;
case 0x534fd2:c.instructions+=1;goto B534fd2;
case 0x534fd4:goto L534fd4;
case 0x534fd6:goto L534fd6;
case 0x534fdb:c.instructions+=1;goto B534fdb;
case 0x534fdd:goto L534fdd;
case 0x534fe2:c.instructions+=1;goto B534fe2;
case 0x534fe4:goto L534fe4;
case 0x534fe9:c.instructions+=1;goto B534fe9;
case 0x534feb:goto L534feb;
case 0x534fee:c.instructions+=4;goto B534fee;
case 0x534fef:c.instructions+=3;goto B534fef;
case 0x534ff3:c.instructions+=2;goto B534ff3;
case 0x534ff6:c.instructions+=1;goto B534ff6;
case 0x534ffb:goto L534ffb;
case 0x534ffe:c.instructions+=1;goto B534ffe;
default:missing_instruction(c.pc);}
B534009:L534009:{c.instructions+=2;NFSU2_TR(0x534009);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B534011:{NFSU2_TR(0x534011);
if(r1(R+518)){{goto L534034;}}
}
B534013:L534013:{c.instructions+=7;NFSU2_TR(0x534013);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B534015:{NFSU2_TR(0x534015);
__builtin_memmove((R+4),(R+28),4);
}
B534017:{NFSU2_TR(0x534017);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53401a:{NFSU2_TR(0x53401a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B53401c:{NFSU2_TR(0x53401c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53401d:{NFSU2_TR(0x53401d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534020:{NFSU2_TR(0x534020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534025ull));
TAIL_STATIC(0x575630u,575);
}
B534025:L534025:{c.instructions+=5;NFSU2_TR(0x534025);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534029:{NFSU2_TR(0x534029);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53402d:{NFSU2_TR(0x53402d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534030:{NFSU2_TR(0x534030);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534032:{NFSU2_TR(0x534032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534013u);}goto L534013;}}
}
B534034:L534034:{c.instructions+=1;NFSU2_TR(0x534034);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B534038:L534038:{c.instructions+=5;NFSU2_TR(0x534038);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53403c:{NFSU2_TR(0x53403c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53403d:{NFSU2_TR(0x53403d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B534040:{NFSU2_TR(0x534040);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534044:{NFSU2_TR(0x534044);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x533d85u,533);}
}
B53404a:L53404a:{c.instructions+=8;NFSU2_TR(0x53404a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53404e:{NFSU2_TR(0x53404e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534052:{NFSU2_TR(0x534052);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534053:{NFSU2_TR(0x534053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534054:{NFSU2_TR(0x534054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534055:{NFSU2_TR(0x534055);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53405c:{NFSU2_TR(0x53405c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53405f:{NFSU2_TR(0x53405f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534060:L534060:{c.instructions+=2;NFSU2_TR(0x534060);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534061:{NFSU2_TR(0x534061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534066ull));
TAIL_STATIC(0x5020c0u,502);
}
B534066:L534066:{c.instructions+=5;NFSU2_TR(0x534066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B534068:{NFSU2_TR(0x534068);
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
B53406b:{NFSU2_TR(0x53406b);
__builtin_memmove((R+4),(R+24),4);
}
B53406d:{NFSU2_TR(0x53406d);
__builtin_memmove((R+28),(R+0),4);
}
B53406f:{NFSU2_TR(0x53406f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534072ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B534072:L534072:{c.instructions+=7;NFSU2_TR(0x534072);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534074:{NFSU2_TR(0x534074);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534076:{NFSU2_TR(0x534076);
__builtin_memmove((R+24),(R+0),4);
}
B534078:{NFSU2_TR(0x534078);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534079:{NFSU2_TR(0x534079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53407a:{NFSU2_TR(0x53407a);
w4(R+4,u32(0x8a2b68ull));
}
B53407f:{NFSU2_TR(0x53407f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534084ull));
TAIL_STATIC(0x61ba30u,61b);
}
B534084:L534084:{c.instructions+=2;NFSU2_TR(0x534084);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534086:{NFSU2_TR(0x534086);
if(r1(R+518)){{goto L5340bc;}}
}
B534088:L534088:{c.instructions+=1;NFSU2_TR(0x534088);
{goto L534090;}
}
B534090:L534090:{c.instructions+=12;NFSU2_TR(0x534090);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534096:{NFSU2_TR(0x534096);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534098:{NFSU2_TR(0x534098);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B53409c:{NFSU2_TR(0x53409c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5340a2:{NFSU2_TR(0x5340a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5340a4:{NFSU2_TR(0x5340a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5340a5:{NFSU2_TR(0x5340a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5340a6:{NFSU2_TR(0x5340a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5340a7:{NFSU2_TR(0x5340a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5340ad:{NFSU2_TR(0x5340ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5340ae:{NFSU2_TR(0x5340ae);
w4(R+4,u32(0x8a2b68ull));
}
B5340b3:{NFSU2_TR(0x5340b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5340b8ull));
TAIL_STATIC(0x61ba50u,61b);
}
B5340b8:L5340b8:{c.instructions+=2;NFSU2_TR(0x5340b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5340ba:{NFSU2_TR(0x5340ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534090u);}goto L534090;}}
}
B5340bc:L5340bc:{c.instructions+=2;NFSU2_TR(0x5340bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5340c2:{NFSU2_TR(0x5340c2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534034u);}goto L534034;}
}
B5340c7:L5340c7:{c.instructions+=2;NFSU2_TR(0x5340c7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5340ca:{NFSU2_TR(0x5340ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534038u);}goto L534038;}}
}
B5340d0:L5340d0:{c.instructions+=3;NFSU2_TR(0x5340d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5340d1:{NFSU2_TR(0x5340d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5340d8:{NFSU2_TR(0x5340d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5340ddull));
TAIL_STATIC(0x502240u,502);
}
B5340dd:L5340dd:{c.instructions+=4;NFSU2_TR(0x5340dd);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5340e4:{NFSU2_TR(0x5340e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5340e7:{NFSU2_TR(0x5340e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5340e9:{NFSU2_TR(0x5340e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5340fb;}}
}
B5340eb:L5340eb:{c.instructions+=3;NFSU2_TR(0x5340eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5340f1:{NFSU2_TR(0x5340f1);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5340f5:{NFSU2_TR(0x5340f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5340fb:L5340fb:{c.instructions+=2;NFSU2_TR(0x5340fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B534105:{NFSU2_TR(0x534105);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534038u);}goto L534038;}
}
B534110:L534110:{c.instructions+=4;NFSU2_TR(0x534110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534111:{NFSU2_TR(0x534111);
__builtin_memmove((R+0),gp(0x838464),1);
}
B534116:{NFSU2_TR(0x534116);
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
B534118:{NFSU2_TR(0x534118);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534179;}}
}
B53411a:L53411a:{c.instructions+=7;NFSU2_TR(0x53411a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53411b:{NFSU2_TR(0x53411b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53411f:{NFSU2_TR(0x53411f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B534122:{NFSU2_TR(0x534122);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534123:{NFSU2_TR(0x534123);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B534127:{NFSU2_TR(0x534127);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53412c:{NFSU2_TR(0x53412c);
if(r1(R+518)){{goto L53413c;}}
}
B53412e:L53412e:{c.instructions+=3;NFSU2_TR(0x53412e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53412f:{NFSU2_TR(0x53412f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534130:{NFSU2_TR(0x534130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534135ull));
TAIL_STATIC(0x529e80u,529);
}
B534135:L534135:{c.instructions+=2;NFSU2_TR(0x534135);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B534138:{NFSU2_TR(0x534138);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53413c:L53413c:{c.instructions+=2;NFSU2_TR(0x53413c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53413f:{NFSU2_TR(0x53413f);
if(r1(R+518)){{goto L534155;}}
}
B534141:L534141:{c.instructions+=3;NFSU2_TR(0x534141);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534142:{NFSU2_TR(0x534142);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534143:{NFSU2_TR(0x534143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534148ull));
TAIL_STATIC(0x529e80u,529);
}
B534148:L534148:{c.instructions+=4;NFSU2_TR(0x534148);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53414c:{NFSU2_TR(0x53414c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53414f:{NFSU2_TR(0x53414f);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B534151:{NFSU2_TR(0x534151);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B534155:L534155:{c.instructions+=2;NFSU2_TR(0x534155);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53415b:{NFSU2_TR(0x53415b);
if(r1(R+518)){{goto L534171;}}
}
B53415d:L53415d:{c.instructions+=3;NFSU2_TR(0x53415d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53415e:{NFSU2_TR(0x53415e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53415f:{NFSU2_TR(0x53415f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534164ull));
TAIL_STATIC(0x529e80u,529);
}
B534164:L534164:{c.instructions+=4;NFSU2_TR(0x534164);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B534168:{NFSU2_TR(0x534168);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53416b:{NFSU2_TR(0x53416b);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53416d:{NFSU2_TR(0x53416d);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B534171:L534171:{c.instructions+=5;NFSU2_TR(0x534171);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B534175:{NFSU2_TR(0x534175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534176:{NFSU2_TR(0x534176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534177:{NFSU2_TR(0x534177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534178:{NFSU2_TR(0x534178);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534179:L534179:{c.instructions+=3;NFSU2_TR(0x534179);
w1(R+0,u8(0x1ull));
}
B53417b:{NFSU2_TR(0x53417b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53417c:{NFSU2_TR(0x53417c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534180:L534180:{c.instructions+=4;NFSU2_TR(0x534180);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534181:{NFSU2_TR(0x534181);
__builtin_memmove((R+0),gp(0x838464),1);
}
B534186:{NFSU2_TR(0x534186);
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
B534188:{NFSU2_TR(0x534188);
if(r1(R+518)){{goto L53418e;}}
}
B53418a:L53418a:{c.instructions+=3;NFSU2_TR(0x53418a);
w1(R+0,u8(0x1ull));
}
B53418c:{NFSU2_TR(0x53418c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53418d:{NFSU2_TR(0x53418d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53418e:L53418e:{c.instructions+=7;NFSU2_TR(0x53418e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534192:{NFSU2_TR(0x534192);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534193:{NFSU2_TR(0x534193);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B534195:{NFSU2_TR(0x534195);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B534197:{NFSU2_TR(0x534197);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534198:{NFSU2_TR(0x534198);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53419c:{NFSU2_TR(0x53419c);
if(r1(R+518)){{goto L5341c1;}}
}
B53419e:L53419e:{c.instructions+=3;NFSU2_TR(0x53419e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53419f:{NFSU2_TR(0x53419f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5341a0:{NFSU2_TR(0x5341a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5341a5ull));
TAIL_STATIC(0x529f70u,529);
}
B5341a5:L5341a5:{c.instructions+=5;NFSU2_TR(0x5341a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5341a9:{NFSU2_TR(0x5341a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5341ad:{NFSU2_TR(0x5341ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5341b0:{NFSU2_TR(0x5341b0);
__builtin_memmove((R+0),(R+24),4);
}
B5341b2:{NFSU2_TR(0x5341b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5341b7ull));
TAIL_STATIC(0x529cc0u,529);
}
B5341b7:L5341b7:{c.instructions+=3;NFSU2_TR(0x5341b7);
__builtin_memmove((R+12),(R+0),1);
}
B5341b9:{NFSU2_TR(0x5341b9);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+12,u8(u32(r1(R+12))|u32(r1(U+4))));
}
B5341bd:{NFSU2_TR(0x5341bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5341c1:L5341c1:{c.instructions+=2;NFSU2_TR(0x5341c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5341c3:{NFSU2_TR(0x5341c3);
if(r1(R+518)){{goto L5341d5;}}
}
B5341c5:L5341c5:{c.instructions+=3;NFSU2_TR(0x5341c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5341c6:{NFSU2_TR(0x5341c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5341c7:{NFSU2_TR(0x5341c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5341ccull));
TAIL_STATIC(0x529f70u,529);
}
B5341cc:L5341cc:{c.instructions+=3;NFSU2_TR(0x5341cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5341cf:{NFSU2_TR(0x5341cf);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B5341d1:{NFSU2_TR(0x5341d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5341d5:L5341d5:{c.instructions+=2;NFSU2_TR(0x5341d5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5341da:{NFSU2_TR(0x5341da);
if(r1(R+518)){{goto L5341f9;}}
}
B5341dc:L5341dc:{c.instructions+=3;NFSU2_TR(0x5341dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5341dd:{NFSU2_TR(0x5341dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5341de:{NFSU2_TR(0x5341de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5341e3ull));
TAIL_STATIC(0x529f70u,529);
}
B5341e3:L5341e3:{c.instructions+=5;NFSU2_TR(0x5341e3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5341e7:{NFSU2_TR(0x5341e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5341ea:{NFSU2_TR(0x5341ea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5341ec:{NFSU2_TR(0x5341ec);
__builtin_memmove((R+0),(R+24),4);
}
B5341ee:{NFSU2_TR(0x5341ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5341f3ull));
TAIL_STATIC(0x529cc0u,529);
}
B5341f3:L5341f3:{c.instructions+=2;NFSU2_TR(0x5341f3);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
}
B5341f7:{NFSU2_TR(0x5341f7);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5341f9:L5341f9:{c.instructions+=5;NFSU2_TR(0x5341f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5341fa:{NFSU2_TR(0x5341fa);
__builtin_memmove((R+0),(R+12),1);
}
B5341fc:{NFSU2_TR(0x5341fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5341fd:{NFSU2_TR(0x5341fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5341fe:{NFSU2_TR(0x5341fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534200:L534200:{c.instructions+=7;NFSU2_TR(0x534200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534201:{NFSU2_TR(0x534201);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534202:{NFSU2_TR(0x534202);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+4)),r4(U+0));
}
B534208:{NFSU2_TR(0x534208);
__builtin_memmove((R+28),gp(0x8900ac),4);
}
B53420e:{NFSU2_TR(0x53420e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534210:{NFSU2_TR(0x534210);
__builtin_memmove((R+4),(R+28),4);
}
B534212:{NFSU2_TR(0x534212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534217ull));
TAIL_STATIC(0x605c70u,605);
}
B534217:L534217:{c.instructions+=2;NFSU2_TR(0x534217);
w4(R+4,u32(0x85ad40ull));
}
B53421c:{NFSU2_TR(0x53421c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534221ull));
TAIL_STATIC(0x533310u,533);
}
B534221:L534221:{c.instructions+=2;NFSU2_TR(0x534221);
u8 U[4];
w4(U+0,u32(0x79bad4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534226:{NFSU2_TR(0x534226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53422bull));
TAIL_STATIC(0x43db50u,43d);
}
B53422b:L53422b:{c.instructions+=2;NFSU2_TR(0x53422b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53422c:{NFSU2_TR(0x53422c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534231ull));
TAIL_STATIC(0x501310u,501);
}
B534231:L534231:{c.instructions+=4;NFSU2_TR(0x534231);
__builtin_memmove((R+24),(R+0),4);
}
B534233:{NFSU2_TR(0x534233);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B534236:{NFSU2_TR(0x534236);
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
B534238:{NFSU2_TR(0x534238);
if(r1(R+518)){{goto L534254;}}
}
B53423a:L53423a:{c.instructions+=3;NFSU2_TR(0x53423a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53423b:{NFSU2_TR(0x53423b);
w4(R+4,u32(0x860a60ull));
}
B534240:{NFSU2_TR(0x534240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534245ull));
TAIL_STATIC(0x514cb0u,514);
}
B534245:L534245:{c.instructions+=2;NFSU2_TR(0x534245);
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
B534247:{NFSU2_TR(0x534247);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534254;}}
}
B534249:L534249:{c.instructions+=3;NFSU2_TR(0x534249);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53424a:{NFSU2_TR(0x53424a);
w4(R+4,u32(0x860a60ull));
}
B53424f:{NFSU2_TR(0x53424f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534254ull));
TAIL_STATIC(0x5295f0u,529);
}
B534254:L534254:{c.instructions+=4;NFSU2_TR(0x534254);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53425a:{NFSU2_TR(0x53425a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53425c:{NFSU2_TR(0x53425c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53425e:{NFSU2_TR(0x53425e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534263ull));
TAIL_STATIC(0x402350u,402);
}
B534263:L534263:{c.instructions+=2;NFSU2_TR(0x534263);
u8 U[4];
w4(U+0,u32(0x79aff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534268:{NFSU2_TR(0x534268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53426dull));
TAIL_STATIC(0x43db50u,43d);
}
B53426d:L53426d:{c.instructions+=4;NFSU2_TR(0x53426d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534270:{NFSU2_TR(0x534270);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534271:{NFSU2_TR(0x534271);
w4(R+4,u32(0x85ad40ull));
}
B534276:{NFSU2_TR(0x534276);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53427bull));
TAIL_STATIC(0x532d80u,532);
}
B53427b:L53427b:{c.instructions+=3;NFSU2_TR(0x53427b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53427c:{NFSU2_TR(0x53427c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53427d:{NFSU2_TR(0x53427d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534280:L534280:{c.instructions+=3;NFSU2_TR(0x534280);
__builtin_memmove((R+0),gp(0x864fa8),1);
}
B534285:{NFSU2_TR(0x534285);
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
B534287:{NFSU2_TR(0x534287);
if(r1(R+518)){{goto L53428e;}}
}
B534289:L534289:{c.instructions+=1;NFSU2_TR(0x534289);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534200u);}goto L534200;}
}
B53428e:L53428e:{c.instructions+=1;NFSU2_TR(0x53428e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534290:L534290:{c.instructions+=7;NFSU2_TR(0x534290);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534291:{NFSU2_TR(0x534291);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534292:{NFSU2_TR(0x534292);
__builtin_memmove((R+24),(R+4),4);
}
B534294:{NFSU2_TR(0x534294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B534296:{NFSU2_TR(0x534296);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B534297:{NFSU2_TR(0x534297);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B53429a:{NFSU2_TR(0x53429a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5342c4;}}
}
B53429c:L53429c:{c.instructions+=1;NFSU2_TR(0x53429c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53447cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5342a3:L5342a3:{c.instructions+=6;NFSU2_TR(0x5342a3);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5342a8:{NFSU2_TR(0x5342a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5342ab:{NFSU2_TR(0x5342ab);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B5342b1:{NFSU2_TR(0x5342b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5342b7:{NFSU2_TR(0x5342b7);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5342b9:{NFSU2_TR(0x5342b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5342beull));
TAIL_STATIC(0x4ca670u,4ca);
}
B5342be:L5342be:{c.instructions+=1;NFSU2_TR(0x5342be);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5342c4:L5342c4:{c.instructions+=3;NFSU2_TR(0x5342c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5342c5:{NFSU2_TR(0x5342c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5342c6:{NFSU2_TR(0x5342c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5342c7:L5342c7:{c.instructions+=10;NFSU2_TR(0x5342c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5342ca:{NFSU2_TR(0x5342ca);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5342d0:{NFSU2_TR(0x5342d0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B5342d2:{NFSU2_TR(0x5342d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5342d6:{NFSU2_TR(0x5342d6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5342da:{NFSU2_TR(0x5342da);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5342e0:{NFSU2_TR(0x5342e0);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5342e6:{NFSU2_TR(0x5342e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5342e8:{NFSU2_TR(0x5342e8);
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
B5342eb:{NFSU2_TR(0x5342eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B5342ed:L5342ed:{c.instructions+=4;NFSU2_TR(0x5342ed);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5342f3:{NFSU2_TR(0x5342f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5342f4:{NFSU2_TR(0x5342f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5342f5:{NFSU2_TR(0x5342f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5342f6:L5342f6:{c.instructions+=2;NFSU2_TR(0x5342f6);
w4(R+4,u32(0x8635bcull));
}
B5342fb:{NFSU2_TR(0x5342fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534300ull));
TAIL_STATIC(0x5259f0u,525);
}
B534300:L534300:{c.instructions+=2;NFSU2_TR(0x534300);
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
B534302:{NFSU2_TR(0x534302);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B534304:L534304:{c.instructions+=5;NFSU2_TR(0x534304);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53430a:{NFSU2_TR(0x53430a);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B53430f:{NFSU2_TR(0x53430f);
w4(R+4,u32(0x8635bcull));
}
B534314:{NFSU2_TR(0x534314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534317:{NFSU2_TR(0x534317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53431cull));
TAIL_STATIC(0x525900u,525);
}
B53431c:L53431c:{c.instructions+=3;NFSU2_TR(0x53431c);
__builtin_memmove((R+24),gp(0x8900ac),4);
}
B534322:{NFSU2_TR(0x534322);
u8 U[4];
w4(U+0,u32(0x79bad4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534327:{NFSU2_TR(0x534327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53432cull));
TAIL_STATIC(0x43db50u,43d);
}
B53432c:L53432c:{c.instructions+=4;NFSU2_TR(0x53432c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53432f:{NFSU2_TR(0x53432f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534330:{NFSU2_TR(0x534330);
w4(R+4,u32(0x860a60ull));
}
B534335:{NFSU2_TR(0x534335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53433aull));
TAIL_STATIC(0x533890u,533);
}
B53433a:L53433a:{c.instructions+=4;NFSU2_TR(0x53433a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534340:{NFSU2_TR(0x534340);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534342:{NFSU2_TR(0x534342);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534344:{NFSU2_TR(0x534344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534349ull));
TAIL_STATIC(0x402350u,402);
}
B534349:L534349:{c.instructions+=4;NFSU2_TR(0x534349);
w4(R+4,u32(0x860a60ull));
}
B53434e:{NFSU2_TR(0x53434e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53434f:{NFSU2_TR(0x53434f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534352:{NFSU2_TR(0x534352);
TAIL_STATIC(0x529700u,529);
}
B534357:L534357:{c.instructions+=4;NFSU2_TR(0x534357);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B53435d:{NFSU2_TR(0x53435d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B534360:{NFSU2_TR(0x534360);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1f40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1f40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1f40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534366:{NFSU2_TR(0x534366);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B53436c:L53436c:{c.instructions+=2;NFSU2_TR(0x53436c);
w4(R+4,u32(0x8635bcull));
}
B534371:{NFSU2_TR(0x534371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534376ull));
TAIL_STATIC(0x5259f0u,525);
}
B534376:L534376:{c.instructions+=2;NFSU2_TR(0x534376);
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
B534378:{NFSU2_TR(0x534378);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B53437e:L53437e:{c.instructions+=4;NFSU2_TR(0x53437e);
u8 U[4];
w4(U+0,u32(0x5ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534384:{NFSU2_TR(0x534384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534385:{NFSU2_TR(0x534385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534386:{NFSU2_TR(0x534386);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534387:L534387:{c.instructions+=4;NFSU2_TR(0x534387);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B53438d:{NFSU2_TR(0x53438d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B534390:{NFSU2_TR(0x534390);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x1f40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1f40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1f40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534396:{NFSU2_TR(0x534396);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B53439c:L53439c:{c.instructions+=2;NFSU2_TR(0x53439c);
w4(R+4,u32(0x8635bcull));
}
B5343a1:{NFSU2_TR(0x5343a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5343a6ull));
TAIL_STATIC(0x5259f0u,525);
}
B5343a6:L5343a6:{c.instructions+=2;NFSU2_TR(0x5343a6);
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
B5343a8:{NFSU2_TR(0x5343a8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B5343ae:L5343ae:{c.instructions+=3;NFSU2_TR(0x5343ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5343b1:{NFSU2_TR(0x5343b1);
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
B5343b3:{NFSU2_TR(0x5343b3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B5343b9:L5343b9:{c.instructions+=3;NFSU2_TR(0x5343b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5343bc:{NFSU2_TR(0x5343bc);
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
B5343be:{NFSU2_TR(0x5343be);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B5343c4:L5343c4:{c.instructions+=7;NFSU2_TR(0x5343c4);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5343ca:{NFSU2_TR(0x5343ca);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5343cf:{NFSU2_TR(0x5343cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5343d2:{NFSU2_TR(0x5343d2);
w4(R+4,u32(0x8635bcull));
}
B5343d7:{NFSU2_TR(0x5343d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5343d8:{NFSU2_TR(0x5343d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5343db:{NFSU2_TR(0x5343db);
TAIL_STATIC(0x525950u,525);
}
B5343e0:L5343e0:{c.instructions+=4;NFSU2_TR(0x5343e0);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5343e6:{NFSU2_TR(0x5343e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B5343e9:{NFSU2_TR(0x5343e9);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1f40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1f40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1f40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5343ef:{NFSU2_TR(0x5343ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B5343f5:L5343f5:{c.instructions+=2;NFSU2_TR(0x5343f5);
w4(R+4,u32(0x8635bcull));
}
B5343fa:{NFSU2_TR(0x5343fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5343ffull));
TAIL_STATIC(0x5259f0u,525);
}
B5343ff:L5343ff:{c.instructions+=2;NFSU2_TR(0x5343ff);
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
B534401:{NFSU2_TR(0x534401);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5342c4u);}goto L5342c4;}}
}
B534407:L534407:{c.instructions+=5;NFSU2_TR(0x534407);
u8 U[4];
w4(U+0,u32(0x7ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53440d:{NFSU2_TR(0x53440d);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B534413:{NFSU2_TR(0x534413);
w4(R+4,u32(0x85ad40ull));
}
B534418:{NFSU2_TR(0x534418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53441b:{NFSU2_TR(0x53441b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534420ull));
TAIL_STATIC(0x533310u,533);
}
B534420:L534420:{c.instructions+=2;NFSU2_TR(0x534420);
u8 U[4];
w4(U+0,u32(0x79aff0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534425:{NFSU2_TR(0x534425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53442aull));
TAIL_STATIC(0x43db50u,43d);
}
B53442a:L53442a:{c.instructions+=4;NFSU2_TR(0x53442a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53442d:{NFSU2_TR(0x53442d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53442e:{NFSU2_TR(0x53442e);
w4(R+4,u32(0x85ad40ull));
}
B534433:{NFSU2_TR(0x534433);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534438ull));
TAIL_STATIC(0x532d80u,532);
}
B534438:L534438:{c.instructions+=4;NFSU2_TR(0x534438);
w4(R+4,u32(0x8635bcull));
}
B53443d:{NFSU2_TR(0x53443d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53443e:{NFSU2_TR(0x53443e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534441:{NFSU2_TR(0x534441);
TAIL_STATIC(0x5259a0u,525);
}
B534446:L534446:{c.instructions+=4;NFSU2_TR(0x534446);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B53444b:{NFSU2_TR(0x53444b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B53444e:{NFSU2_TR(0x53444e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x1f40ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1f40ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x1f40ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534453:{NFSU2_TR(0x534453);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53445f;}}
}
B534455:L534455:{c.instructions+=2;NFSU2_TR(0x534455);
w4(R+4,u32(0x8635bcull));
}
B53445a:{NFSU2_TR(0x53445a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53445full));
TAIL_STATIC(0x5259f0u,525);
}
B53445f:L53445f:{c.instructions+=6;NFSU2_TR(0x53445f);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534465:{NFSU2_TR(0x534465);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B53446b:{NFSU2_TR(0x53446b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53446e:{NFSU2_TR(0x53446e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53446f:{NFSU2_TR(0x53446f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534470:{NFSU2_TR(0x534470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534471:L534471:{c.instructions+=4;NFSU2_TR(0x534471);
__builtin_memmove((R+4),(R+24),4);
}
B534473:{NFSU2_TR(0x534473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534474:{NFSU2_TR(0x534474);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534477:{NFSU2_TR(0x534477);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534200u);}goto L534200;}
}
B5344a0:L5344a0:{c.instructions+=4;NFSU2_TR(0x5344a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344a1:{NFSU2_TR(0x5344a1);
__builtin_memmove((R+24),(R+4),4);
}
B5344a3:{NFSU2_TR(0x5344a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5344a6:{NFSU2_TR(0x5344a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5344abull));
TAIL_STATIC(0x5116e0u,511);
}
B5344ab:L5344ab:{c.instructions+=2;NFSU2_TR(0x5344ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5344b1:{NFSU2_TR(0x5344b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5344b6ull));
TAIL_STATIC(0x52a220u,52a);
}
B5344b6:L5344b6:{c.instructions+=2;NFSU2_TR(0x5344b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5344bc:{NFSU2_TR(0x5344bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5344c1ull));
TAIL_STATIC(0x52a5d0u,52a);
}
B5344c1:L5344c1:{c.instructions+=3;NFSU2_TR(0x5344c1);
__builtin_memmove((R+0),(R+24),4);
}
B5344c3:{NFSU2_TR(0x5344c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5344c4:{NFSU2_TR(0x5344c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5344d0:L5344d0:{c.instructions+=14;NFSU2_TR(0x5344d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344d1:{NFSU2_TR(0x5344d1);
__builtin_memmove((R+20),(R+16),4);
}
B5344d3:{NFSU2_TR(0x5344d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5344d6:{NFSU2_TR(0x5344d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5344d9:{NFSU2_TR(0x5344d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344da:{NFSU2_TR(0x5344da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344db:{NFSU2_TR(0x5344db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5344de:{NFSU2_TR(0x5344de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344df:{NFSU2_TR(0x5344df);
__builtin_memmove((R+12),(R+4),4);
}
B5344e1:{NFSU2_TR(0x5344e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5344e4:{NFSU2_TR(0x5344e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344e6:{NFSU2_TR(0x5344e6);
w4(R+4,u32(0x85ad40ull));
}
B5344eb:{NFSU2_TR(0x5344eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5344ee:{NFSU2_TR(0x5344ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5344f3ull));
TAIL_STATIC(0x532830u,532);
}
B5344f3:L5344f3:{c.instructions+=6;NFSU2_TR(0x5344f3);
__builtin_memmove((R+4),(R+28),4);
}
B5344f5:{NFSU2_TR(0x5344f5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5344f7:{NFSU2_TR(0x5344f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344f8:{NFSU2_TR(0x5344f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5344f9:{NFSU2_TR(0x5344f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5344ff:{NFSU2_TR(0x5344ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534504ull));
TAIL_STATIC(0x516850u,516);
}
B534504:L534504:{c.instructions+=6;NFSU2_TR(0x534504);
__builtin_memmove((R+8),(R+28),4);
}
B534506:{NFSU2_TR(0x534506);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B534508:{NFSU2_TR(0x534508);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534509:{NFSU2_TR(0x534509);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53450a:{NFSU2_TR(0x53450a);
w4(R+4,u32(0x85ad40ull));
}
B53450f:{NFSU2_TR(0x53450f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534514ull));
TAIL_STATIC(0x529230u,529);
}
B534514:L534514:{c.instructions+=3;NFSU2_TR(0x534514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53451a:{NFSU2_TR(0x53451a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53451c:{NFSU2_TR(0x53451c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534530;}}
}
B53451e:L53451e:{c.instructions+=3;NFSU2_TR(0x53451e);
w4(R+4,u32(0x36ull));
}
B534523:{NFSU2_TR(0x534523);
__builtin_memmove((R+24),(R+0),4);
}
B534525:{NFSU2_TR(0x534525);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53452b:L53452b:{c.instructions+=1;NFSU2_TR(0x53452b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53452d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53452bu);}goto L53452b;}
}
B53452d:L53452d:{c.instructions+=1;NFSU2_TR(0x53452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534530:L534530:{c.instructions+=3;NFSU2_TR(0x534530);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B534533:{NFSU2_TR(0x534533);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534535:{NFSU2_TR(0x534535);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534546;}}
}
B534537:L534537:{c.instructions+=3;NFSU2_TR(0x534537);
w4(R+4,u32(0xfull));
}
B53453c:{NFSU2_TR(0x53453c);
__builtin_memmove((R+24),(R+8),4);
}
B53453e:{NFSU2_TR(0x53453e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534541:L534541:{c.instructions+=1;NFSU2_TR(0x534541);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L534543;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534541u);}goto L534541;}
}
B534543:L534543:{c.instructions+=1;NFSU2_TR(0x534543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534546:L534546:{c.instructions+=3;NFSU2_TR(0x534546);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534549:{NFSU2_TR(0x534549);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53454b:{NFSU2_TR(0x53454b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534566;}}
}
B53454d:L53454d:{c.instructions+=9;NFSU2_TR(0x53454d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53454f:{NFSU2_TR(0x53454f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534552:{NFSU2_TR(0x534552);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B534554:{NFSU2_TR(0x534554);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534557:{NFSU2_TR(0x534557);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53455a:{NFSU2_TR(0x53455a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53455d:{NFSU2_TR(0x53455d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534560:{NFSU2_TR(0x534560);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534563:{NFSU2_TR(0x534563);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534566:L534566:{c.instructions+=3;NFSU2_TR(0x534566);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B534569:{NFSU2_TR(0x534569);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53456b:{NFSU2_TR(0x53456b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53457d;}}
}
B53456d:L53456d:{c.instructions+=2;NFSU2_TR(0x53456d);
w4(R+4,u32(0x14ull));
}
B534572:{NFSU2_TR(0x534572);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x84ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534578:L534578:{c.instructions+=1;NFSU2_TR(0x534578);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53457a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534578u);}goto L534578;}
}
B53457a:L53457a:{c.instructions+=1;NFSU2_TR(0x53457a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53457d:L53457d:{c.instructions+=3;NFSU2_TR(0x53457d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534580:{NFSU2_TR(0x534580);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534582:{NFSU2_TR(0x534582);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53459d;}}
}
B534584:L534584:{c.instructions+=9;NFSU2_TR(0x534584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B534586:{NFSU2_TR(0x534586);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534589:{NFSU2_TR(0x534589);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53458b:{NFSU2_TR(0x53458b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53458e:{NFSU2_TR(0x53458e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534591:{NFSU2_TR(0x534591);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534594:{NFSU2_TR(0x534594);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534597:{NFSU2_TR(0x534597);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53459a:{NFSU2_TR(0x53459a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53459d:L53459d:{c.instructions+=3;NFSU2_TR(0x53459d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5345a3:{NFSU2_TR(0x5345a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5345a5:{NFSU2_TR(0x5345a5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5345b7;}}
}
B5345a7:L5345a7:{c.instructions+=2;NFSU2_TR(0x5345a7);
w4(R+4,u32(0x5full));
}
B5345ac:{NFSU2_TR(0x5345ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5345b2:L5345b2:{c.instructions+=1;NFSU2_TR(0x5345b2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5345b4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5345b2u);}goto L5345b2;}
}
B5345b4:L5345b4:{c.instructions+=1;NFSU2_TR(0x5345b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5345b7:L5345b7:{c.instructions+=3;NFSU2_TR(0x5345b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5345ba:{NFSU2_TR(0x5345ba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5345bc:{NFSU2_TR(0x5345bc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5345c8;}}
}
B5345be:L5345be:{c.instructions+=3;NFSU2_TR(0x5345be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5345c0:{NFSU2_TR(0x5345c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x250ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5345c6:{NFSU2_TR(0x5345c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5345c8:L5345c8:{c.instructions+=3;NFSU2_TR(0x5345c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5345cb:{NFSU2_TR(0x5345cb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5345cd:{NFSU2_TR(0x5345cd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5345d9;}}
}
B5345cf:L5345cf:{c.instructions+=3;NFSU2_TR(0x5345cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5345d1:{NFSU2_TR(0x5345d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x254ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5345d7:{NFSU2_TR(0x5345d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5345d9:L5345d9:{c.instructions+=3;NFSU2_TR(0x5345d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5345dc:{NFSU2_TR(0x5345dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5345de:{NFSU2_TR(0x5345de);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5345ea;}}
}
B5345e0:L5345e0:{c.instructions+=3;NFSU2_TR(0x5345e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5345e2:{NFSU2_TR(0x5345e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0f9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5345e8:{NFSU2_TR(0x5345e8);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5345ea:L5345ea:{c.instructions+=3;NFSU2_TR(0x5345ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5345ed:{NFSU2_TR(0x5345ed);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5345ef:{NFSU2_TR(0x5345ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5345fb;}}
}
B5345f1:L5345f1:{c.instructions+=3;NFSU2_TR(0x5345f1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5345f3:{NFSU2_TR(0x5345f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0f8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5345f9:{NFSU2_TR(0x5345f9);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5345fb:L5345fb:{c.instructions+=3;NFSU2_TR(0x5345fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5345fe:{NFSU2_TR(0x5345fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534600:{NFSU2_TR(0x534600);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53460c;}}
}
B534602:L534602:{c.instructions+=3;NFSU2_TR(0x534602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B534604:{NFSU2_TR(0x534604);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53460a:{NFSU2_TR(0x53460a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53460c:L53460c:{c.instructions+=3;NFSU2_TR(0x53460c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B534612:{NFSU2_TR(0x534612);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534614:{NFSU2_TR(0x534614);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534626;}}
}
B534616:L534616:{c.instructions+=2;NFSU2_TR(0x534616);
w4(R+4,u32(0x294ull));
}
B53461b:{NFSU2_TR(0x53461b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0fcull))));
__builtin_memmove((R+28),(U+0),4);
}
B534621:L534621:{c.instructions+=1;NFSU2_TR(0x534621);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L534623;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534621u);}goto L534621;}
}
B534623:L534623:{c.instructions+=1;NFSU2_TR(0x534623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534626:L534626:{c.instructions+=4;NFSU2_TR(0x534626);
__builtin_memmove((R+24),(R+0),4);
}
B534628:{NFSU2_TR(0x534628);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53462e:{NFSU2_TR(0x53462e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534630:{NFSU2_TR(0x534630);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534642;}}
}
B534632:L534632:{c.instructions+=2;NFSU2_TR(0x534632);
w4(R+4,u32(0x20ull));
}
B534637:{NFSU2_TR(0x534637);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x258ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53463d:L53463d:{c.instructions+=1;NFSU2_TR(0x53463d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53463f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53463du);}goto L53463d;}
}
B53463f:L53463f:{c.instructions+=1;NFSU2_TR(0x53463f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534642:L534642:{c.instructions+=4;NFSU2_TR(0x534642);
__builtin_memmove((R+24),(R+0),4);
}
B534644:{NFSU2_TR(0x534644);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B534647:{NFSU2_TR(0x534647);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534649:{NFSU2_TR(0x534649);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534654;}}
}
B53464b:L53464b:{c.instructions+=2;NFSU2_TR(0x53464b);
w4(R+4,u32(0x8ull));
}
B534650:{NFSU2_TR(0x534650);
__builtin_memmove((R+28),(R+12),4);
}
B534652:L534652:{c.instructions+=1;NFSU2_TR(0x534652);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L534654;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534652u);}goto L534652;}
}
B534654:L534654:{c.instructions+=3;NFSU2_TR(0x534654);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534655:{NFSU2_TR(0x534655);
w4(R+4,u32(0x850080ull));
}
B53465a:{NFSU2_TR(0x53465a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53465full));
TAIL_STATIC(0x515c90u,515);
}
B53465f:L53465f:{c.instructions+=2;NFSU2_TR(0x53465f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534660:{NFSU2_TR(0x534660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534665ull));
TAIL_STATIC(0x5b9570u,5b9);
}
B534665:L534665:{c.instructions+=5;NFSU2_TR(0x534665);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B534668:{NFSU2_TR(0x534668);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53466b:{NFSU2_TR(0x53466b);
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
B53466d:{NFSU2_TR(0x53466d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B534671:{NFSU2_TR(0x534671);
if(r1(R+518)){{goto L5346e1;}}
}
B534673:L534673:{c.instructions+=4;NFSU2_TR(0x534673);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534676:{NFSU2_TR(0x534676);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534677:{NFSU2_TR(0x534677);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53467d:{NFSU2_TR(0x53467d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534682ull));
TAIL_STATIC(0x4792b0u,479);
}
B534682:L534682:{c.instructions+=5;NFSU2_TR(0x534682);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534685:{NFSU2_TR(0x534685);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53468b:{NFSU2_TR(0x53468b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x48ull))));
}
B53468e:{NFSU2_TR(0x53468e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53468f:{NFSU2_TR(0x53468f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534694ull));
TAIL_STATIC(0x469050u,469);
}
B534694:L534694:{c.instructions+=2;NFSU2_TR(0x534694);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53469a:{NFSU2_TR(0x53469a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53469full));
TAIL_STATIC(0x479220u,479);
}
B53469f:L53469f:{c.instructions+=1;NFSU2_TR(0x53469f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5346a4ull));
TAIL_STATIC(0x5be690u,5be);
}
B5346a4:L5346a4:{c.instructions+=3;NFSU2_TR(0x5346a4);
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
B5346a6:{NFSU2_TR(0x5346a6);
w4(R+28,u32(0x83aa6cull));
}
B5346ab:{NFSU2_TR(0x5346ab);
{goto L5346b0;}
}
B5346b0:L5346b0:{c.instructions+=2;NFSU2_TR(0x5346b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346b1:{NFSU2_TR(0x5346b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5346b6ull));
TAIL_STATIC(0x571ac0u,571);
}
B5346b6:L5346b6:{c.instructions+=6;NFSU2_TR(0x5346b6);
w4(R+0,u32(r1(R+0)));
}
B5346b9:{NFSU2_TR(0x5346b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346ba:{NFSU2_TR(0x5346ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5346bd:{NFSU2_TR(0x5346bd);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346bf:{NFSU2_TR(0x5346bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346c0:{NFSU2_TR(0x5346c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5346c5ull));
TAIL_STATIC(0x571fd0u,571);
}
B5346c5:L5346c5:{c.instructions+=5;NFSU2_TR(0x5346c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5346c7:{NFSU2_TR(0x5346c7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5346cb:{NFSU2_TR(0x5346cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346cc:{NFSU2_TR(0x5346cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346cd:{NFSU2_TR(0x5346cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5346d2ull));
TAIL_STATIC(0x571fb0u,571);
}
B5346d2:L5346d2:{c.instructions+=5;NFSU2_TR(0x5346d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5346d5:{NFSU2_TR(0x5346d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B5346d8:{NFSU2_TR(0x5346d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5346d9:{NFSU2_TR(0x5346d9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x83aabcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x83aabcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x83aabcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5346df:{NFSU2_TR(0x5346df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5346b0u);}goto L5346b0;}}
}
B5346e1:L5346e1:{c.instructions+=6;NFSU2_TR(0x5346e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5346e2:{NFSU2_TR(0x5346e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5346e3:{NFSU2_TR(0x5346e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5346e4:{NFSU2_TR(0x5346e4);
__builtin_memmove((R+16),(R+20),4);
}
B5346e6:{NFSU2_TR(0x5346e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5346e7:{NFSU2_TR(0x5346e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5346f0:L5346f0:{c.instructions+=11;NFSU2_TR(0x5346f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346f1:{NFSU2_TR(0x5346f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5346f2:{NFSU2_TR(0x5346f2);
__builtin_memmove((R+24),(R+4),4);
}
B5346f4:{NFSU2_TR(0x5346f4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5346f6:{NFSU2_TR(0x5346f6);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5346fc:{NFSU2_TR(0x5346fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5346ff:{NFSU2_TR(0x5346ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B534703:{NFSU2_TR(0x534703);
__builtin_memmove((R+0),gp(0x7faa48),4);
}
B534708:{NFSU2_TR(0x534708);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534709:{NFSU2_TR(0x534709);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53470f:{NFSU2_TR(0x53470f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534714ull));
TAIL_STATIC(0x52a8a0u,52a);
}
B534714:L534714:{c.instructions+=4;NFSU2_TR(0x534714);
__builtin_memmove((R+4),gp(0x7faa4c),4);
}
B53471a:{NFSU2_TR(0x53471a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53471b:{NFSU2_TR(0x53471b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaf0cull))));
__builtin_memmove((R+4),(U+0),4);
}
B534721:{NFSU2_TR(0x534721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534726ull));
TAIL_STATIC(0x52a8a0u,52a);
}
B534726:L534726:{c.instructions+=4;NFSU2_TR(0x534726);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534728:{NFSU2_TR(0x534728);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534729:{NFSU2_TR(0x534729);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53472c:{NFSU2_TR(0x53472c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534731ull));
TAIL_STATIC(0x515aa0u,515);
}
B534731:L534731:{c.instructions+=4;NFSU2_TR(0x534731);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534733:{NFSU2_TR(0x534733);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534735:{NFSU2_TR(0x534735);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53473b:{NFSU2_TR(0x53473b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534740ull));
TAIL_STATIC(0x515aa0u,515);
}
B534740:L534740:{c.instructions+=8;NFSU2_TR(0x534740);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534742:{NFSU2_TR(0x534742);
w4(R+4,u32(0x85ad40ull));
}
B534747:{NFSU2_TR(0x534747);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15994ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53474d:{NFSU2_TR(0x53474d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15998ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534753:{NFSU2_TR(0x534753);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156a8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53475d:{NFSU2_TR(0x53475d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534760:{NFSU2_TR(0x534760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534767:{NFSU2_TR(0x534767);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53476cull));
TAIL_STATIC(0x532830u,532);
}
B53476c:L53476c:{c.instructions+=3;NFSU2_TR(0x53476c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53476d:{NFSU2_TR(0x53476d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53476e:{NFSU2_TR(0x53476e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534770:L534770:{c.instructions+=2;NFSU2_TR(0x534770);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B534777:{NFSU2_TR(0x534777);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53479c;}}
}
B534779:L534779:{c.instructions+=6;NFSU2_TR(0x534779);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53477f:{NFSU2_TR(0x53477f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B534785:{NFSU2_TR(0x534785);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B534789:{NFSU2_TR(0x534789);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x993eull));
s4(u32(r4(U+0)),r4(U+4));
}
B534791:{NFSU2_TR(0x534791);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534797:{NFSU2_TR(0x534797);
TAIL_STATIC(0x516850u,516);
}
B53479c:L53479c:{c.instructions+=7;NFSU2_TR(0x53479c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5347a0:{NFSU2_TR(0x5347a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5347a4:{NFSU2_TR(0x5347a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347a6:{NFSU2_TR(0x5347a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347a7:{NFSU2_TR(0x5347a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347a8:{NFSU2_TR(0x5347a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5347ab:{NFSU2_TR(0x5347ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5347b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5344d0u);}goto L5344d0;}
}
B5347b0:L5347b0:{c.instructions+=1;NFSU2_TR(0x5347b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5347c0:L5347c0:{c.instructions+=5;NFSU2_TR(0x5347c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347c1:{NFSU2_TR(0x5347c1);
__builtin_memmove((R+24),(R+4),4);
}
B5347c3:{NFSU2_TR(0x5347c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5347c9:{NFSU2_TR(0x5347c9);
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
B5347cb:{NFSU2_TR(0x5347cb);
if(r1(R+518)){{goto L534834;}}
}
B5347cd:L5347cd:{c.instructions+=1;NFSU2_TR(0x5347cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5347d2ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B5347d2:L5347d2:{c.instructions+=5;NFSU2_TR(0x5347d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5347d8:{NFSU2_TR(0x5347d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5347de:{NFSU2_TR(0x5347de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B5347e3:{NFSU2_TR(0x5347e3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5347e6:{NFSU2_TR(0x5347e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53480b;}}
}
B5347e8:L5347e8:{c.instructions+=7;NFSU2_TR(0x5347e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5347ee:{NFSU2_TR(0x5347ee);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5347f4:{NFSU2_TR(0x5347f4);
u8 U[4];
w4(U+0,u32(0x993eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347f9:{NFSU2_TR(0x5347f9);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5347fd:{NFSU2_TR(0x5347fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5347fe:{NFSU2_TR(0x5347fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534804:{NFSU2_TR(0x534804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534809ull));
TAIL_STATIC(0x516850u,516);
}
B534809:L534809:{c.instructions+=1;NFSU2_TR(0x534809);
{goto L534817;}
}
B53480b:L53480b:{c.instructions+=5;NFSU2_TR(0x53480b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53480d:{NFSU2_TR(0x53480d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53480e:{NFSU2_TR(0x53480e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53480f:{NFSU2_TR(0x53480f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534812:{NFSU2_TR(0x534812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534817ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5344d0u);}goto L5344d0;}
}
B534817:L534817:{c.instructions+=3;NFSU2_TR(0x534817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53481d:{NFSU2_TR(0x53481d);
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
B53481f:{NFSU2_TR(0x53481f);
if(r1(R+518)){{goto L534834;}}
}
B534821:L534821:{c.instructions+=2;NFSU2_TR(0x534821);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534822:{NFSU2_TR(0x534822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534827ull));
TAIL_STATIC(0x440540u,440);
}
B534827:L534827:{c.instructions+=2;NFSU2_TR(0x534827);
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
B53482a:{NFSU2_TR(0x53482a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534834:L534834:{c.instructions+=2;NFSU2_TR(0x534834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534835:{NFSU2_TR(0x534835);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534840:L534840:{c.instructions+=2;NFSU2_TR(0x534840);
w4(R+4,u32(0x83a9d0ull));
}
B534845:{NFSU2_TR(0x534845);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5346f0u);}goto L5346f0;}
}
B534850:L534850:{c.instructions+=11;NFSU2_TR(0x534850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B534853:{NFSU2_TR(0x534853);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534854:{NFSU2_TR(0x534854);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B534858:{NFSU2_TR(0x534858);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534859:{NFSU2_TR(0x534859);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53485d:{NFSU2_TR(0x53485d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53485e:{NFSU2_TR(0x53485e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53485f:{NFSU2_TR(0x53485f);
__builtin_memmove((R+28),(R+4),4);
}
B534861:{NFSU2_TR(0x534861);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534869:{NFSU2_TR(0x534869);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53486f:{NFSU2_TR(0x53486f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x5bull));
s4(u32(r4(U+0)),r4(U+4));
}
B534877:L534877:{c.instructions+=4;NFSU2_TR(0x534877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B534879:{NFSU2_TR(0x534879);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53487c:{NFSU2_TR(0x53487c);
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
B53487e:{NFSU2_TR(0x53487e);
if(r1(R+518)){{goto L5348c3;}}
}
B534880:L534880:{c.instructions+=2;NFSU2_TR(0x534880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B534882:{NFSU2_TR(0x534882);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534885ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B534885:L534885:{c.instructions+=2;NFSU2_TR(0x534885);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534888:{NFSU2_TR(0x534888);
if(r1(R+518)){{goto L5348c3;}}
}
B53488a:L53488a:{c.instructions+=4;NFSU2_TR(0x53488a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53488c:{NFSU2_TR(0x53488c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53488f:{NFSU2_TR(0x53488f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534891:{NFSU2_TR(0x534891);
if(r1(R+518)){{goto L5348c3;}}
}
B534893:L534893:{c.instructions+=2;NFSU2_TR(0x534893);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B534896:{NFSU2_TR(0x534896);
if(r1(R+518)){{goto L5348a2;}}
}
B534898:L534898:{c.instructions+=3;NFSU2_TR(0x534898);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53489e:{NFSU2_TR(0x53489e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5348a0:{NFSU2_TR(0x5348a0);
{goto L5348bd;}
}
B5348a2:L5348a2:{c.instructions+=8;NFSU2_TR(0x5348a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5348a5:{NFSU2_TR(0x5348a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5348a7:{NFSU2_TR(0x5348a7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8458dcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5348ad:{NFSU2_TR(0x5348ad);
__builtin_memmove((R+4),(R+518),1);
}
B5348b0:{NFSU2_TR(0x5348b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348b1:{NFSU2_TR(0x5348b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348b2:{NFSU2_TR(0x5348b2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348b3:{NFSU2_TR(0x5348b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5348b8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534180u);}goto L534180;}
}
B5348b8:L5348b8:{c.instructions+=2;NFSU2_TR(0x5348b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5348bb:{NFSU2_TR(0x5348bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5348bd:L5348bd:{c.instructions+=1;NFSU2_TR(0x5348bd);
if(r1(R+518)){{goto L5348c3;}}
}
B5348bf:L5348bf:{c.instructions+=1;NFSU2_TR(0x5348bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5348c3:L5348c3:{c.instructions+=5;NFSU2_TR(0x5348c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5348c7:{NFSU2_TR(0x5348c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5348ca:{NFSU2_TR(0x5348ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5348cb:{NFSU2_TR(0x5348cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5348cf:{NFSU2_TR(0x5348cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534877u);}goto L534877;}}
}
B5348d1:L5348d1:{c.instructions+=7;NFSU2_TR(0x5348d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5348d5:{NFSU2_TR(0x5348d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5348d6:{NFSU2_TR(0x5348d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5348d7:{NFSU2_TR(0x5348d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5348d8:{NFSU2_TR(0x5348d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5348d9:{NFSU2_TR(0x5348d9);
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
B5348dc:{NFSU2_TR(0x5348dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5348e0:L5348e0:{c.instructions+=8;NFSU2_TR(0x5348e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5348e4:{NFSU2_TR(0x5348e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348e5:{NFSU2_TR(0x5348e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348e6:{NFSU2_TR(0x5348e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348e7:{NFSU2_TR(0x5348e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348e8:{NFSU2_TR(0x5348e8);
u8 U[4];
w4(U+0,u32(0x797e74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348ed:{NFSU2_TR(0x5348ed);
__builtin_memmove((R+24),(R+4),4);
}
B5348ef:{NFSU2_TR(0x5348ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5348f4ull));
TAIL_STATIC(0x50b990u,50b);
}
B5348f4:L5348f4:{c.instructions+=4;NFSU2_TR(0x5348f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5348f7:{NFSU2_TR(0x5348f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5348f8:{NFSU2_TR(0x5348f8);
__builtin_memmove((R+4),(R+24),4);
}
B5348fa:{NFSU2_TR(0x5348fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5348ffull));
TAIL_STATIC(0x503680u,503);
}
B5348ff:L5348ff:{c.instructions+=5;NFSU2_TR(0x5348ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534905:{NFSU2_TR(0x534905);
__builtin_memmove((R+28),(R+0),4);
}
B534907:{NFSU2_TR(0x534907);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534909:{NFSU2_TR(0x534909);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53490b:{NFSU2_TR(0x53490b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L534920;}}
}
B53490d:L53490d:{c.instructions+=2;NFSU2_TR(0x53490d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B534911:{NFSU2_TR(0x534911);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B534914:L534914:{c.instructions+=2;NFSU2_TR(0x534914);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B534916:{NFSU2_TR(0x534916);
if(r1(R+518)){{goto L534942;}}
}
B534918:L534918:{c.instructions+=4;NFSU2_TR(0x534918);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B534919:{NFSU2_TR(0x534919);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B53491c:{NFSU2_TR(0x53491c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53491e:{NFSU2_TR(0x53491e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534914u);}goto L534914;}}
}
B534920:L534920:{c.instructions+=1;NFSU2_TR(0x534920);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534922:L534922:{c.instructions+=5;NFSU2_TR(0x534922);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534925:{NFSU2_TR(0x534925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534926:{NFSU2_TR(0x534926);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534927:{NFSU2_TR(0x534927);
__builtin_memmove((R+4),(R+28),4);
}
B534929:{NFSU2_TR(0x534929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53492eull));
TAIL_STATIC(0x516b90u,516);
}
B53492e:L53492e:{c.instructions+=6;NFSU2_TR(0x53492e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534935:{NFSU2_TR(0x534935);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53493c:{NFSU2_TR(0x53493c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53493d:{NFSU2_TR(0x53493d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53493e:{NFSU2_TR(0x53493e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53493f:{NFSU2_TR(0x53493f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534942:L534942:{c.instructions+=3;NFSU2_TR(0x534942);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B534945:{NFSU2_TR(0x534945);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B534947:{NFSU2_TR(0x534947);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534922u);}goto L534922;}
}
B53494e:L53494e:{c.instructions+=9;NFSU2_TR(0x53494e);
}
B53494f:{NFSU2_TR(0x53494f);
}
B534950:{NFSU2_TR(0x534950);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534954:{NFSU2_TR(0x534954);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534955:{NFSU2_TR(0x534955);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534956:{NFSU2_TR(0x534956);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534957:{NFSU2_TR(0x534957);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534958:{NFSU2_TR(0x534958);
__builtin_memmove((R+24),(R+4),4);
}
B53495a:{NFSU2_TR(0x53495a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53495full));
TAIL_STATIC(0x503680u,503);
}
B53495f:L53495f:{c.instructions+=3;NFSU2_TR(0x53495f);
__builtin_memmove((R+28),(R+0),4);
}
B534961:{NFSU2_TR(0x534961);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534967:{NFSU2_TR(0x534967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53496cull));
TAIL_STATIC(0x503e70u,503);
}
B53496c:L53496c:{c.instructions+=4;NFSU2_TR(0x53496c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534972:{NFSU2_TR(0x534972);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534974:{NFSU2_TR(0x534974);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534976:{NFSU2_TR(0x534976);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53498c;}}
}
B534978:L534978:{c.instructions+=3;NFSU2_TR(0x534978);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53497c:{NFSU2_TR(0x53497c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53497f:{NFSU2_TR(0x53497f);
}
B534980:L534980:{c.instructions+=2;NFSU2_TR(0x534980);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B534982:{NFSU2_TR(0x534982);
if(r1(R+518)){{goto L5349ae;}}
}
B534984:L534984:{c.instructions+=4;NFSU2_TR(0x534984);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B534985:{NFSU2_TR(0x534985);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B534988:{NFSU2_TR(0x534988);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53498a:{NFSU2_TR(0x53498a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534980u);}goto L534980;}}
}
B53498c:L53498c:{c.instructions+=1;NFSU2_TR(0x53498c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53498e:L53498e:{c.instructions+=5;NFSU2_TR(0x53498e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534991:{NFSU2_TR(0x534991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534992:{NFSU2_TR(0x534992);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534993:{NFSU2_TR(0x534993);
__builtin_memmove((R+4),(R+28),4);
}
B534995:{NFSU2_TR(0x534995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53499aull));
TAIL_STATIC(0x516b90u,516);
}
B53499a:L53499a:{c.instructions+=6;NFSU2_TR(0x53499a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5349a1:{NFSU2_TR(0x5349a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5349a8:{NFSU2_TR(0x5349a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5349a9:{NFSU2_TR(0x5349a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5349aa:{NFSU2_TR(0x5349aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5349ab:{NFSU2_TR(0x5349ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5349ae:L5349ae:{c.instructions+=3;NFSU2_TR(0x5349ae);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5349b1:{NFSU2_TR(0x5349b1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B5349b3:{NFSU2_TR(0x5349b3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53498eu);}goto L53498e;}
}
B5349c0:L5349c0:{c.instructions+=3;NFSU2_TR(0x5349c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5349c1:{NFSU2_TR(0x5349c1);
__builtin_memmove((R+24),(R+4),4);
}
B5349c3:{NFSU2_TR(0x5349c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5349c8ull));
TAIL_STATIC(0x52af20u,52a);
}
B5349c8:L5349c8:{c.instructions+=28;NFSU2_TR(0x5349c8);
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
B5349ca:{NFSU2_TR(0x5349ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349cd:{NFSU2_TR(0x5349cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349d0:{NFSU2_TR(0x5349d0);
u8 U[4];
w4(U+0,u32(0x79bae4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5349d6:{NFSU2_TR(0x5349d6);
w4(R+8,u32(0x4ull));
}
B5349db:{NFSU2_TR(0x5349db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349de:{NFSU2_TR(0x5349de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349e1:{NFSU2_TR(0x5349e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349e4:{NFSU2_TR(0x5349e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349e7:{NFSU2_TR(0x5349e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349ea:{NFSU2_TR(0x5349ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349ed:{NFSU2_TR(0x5349ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349f0:{NFSU2_TR(0x5349f0);
w4(R+4,u32(0x3f800000ull));
}
B5349f5:{NFSU2_TR(0x5349f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5349fb:{NFSU2_TR(0x5349fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a01:{NFSU2_TR(0x534a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a07:{NFSU2_TR(0x534a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a0d:{NFSU2_TR(0x534a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a13:{NFSU2_TR(0x534a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a19:{NFSU2_TR(0x534a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a1f:{NFSU2_TR(0x534a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a25:{NFSU2_TR(0x534a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a2b:{NFSU2_TR(0x534a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a31:{NFSU2_TR(0x534a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
w4(U+4,u32(0xbab60b61ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534a3b:{NFSU2_TR(0x534a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a3e:{NFSU2_TR(0x534a3e);
__builtin_memmove((R+0),(R+24),4);
}
B534a40:{NFSU2_TR(0x534a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534a41:{NFSU2_TR(0x534a41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534a50:L534a50:{c.instructions+=12;NFSU2_TR(0x534a50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534a52:{NFSU2_TR(0x534a52);
u8 U[4];
w4(U+0,u32(0x7774d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534a57:{NFSU2_TR(0x534a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534a5d:{NFSU2_TR(0x534a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534a5e:{NFSU2_TR(0x534a5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a65:{NFSU2_TR(0x534a65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534a66:{NFSU2_TR(0x534a66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534a67:{NFSU2_TR(0x534a67);
__builtin_memmove((R+24),(R+4),4);
}
B534a69:{NFSU2_TR(0x534a69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a6d:{NFSU2_TR(0x534a6d);
u8 U[4];
w4(U+0,u32(0x79bae4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534a73:{NFSU2_TR(0x534a73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534a7b:{NFSU2_TR(0x534a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534a80ull));
TAIL_STATIC(0x516dc0u,516);
}
B534a80:L534a80:{c.instructions+=3;NFSU2_TR(0x534a80);
__builtin_memmove((R+4),(R+24),4);
}
B534a82:{NFSU2_TR(0x534a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B534a8a:{NFSU2_TR(0x534a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534a8full));
TAIL_STATIC(0x52af90u,52a);
}
B534a8f:L534a8f:{c.instructions+=5;NFSU2_TR(0x534a8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534a93:{NFSU2_TR(0x534a93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534a94:{NFSU2_TR(0x534a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534a9b:{NFSU2_TR(0x534a9b);
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
B534a9e:{NFSU2_TR(0x534a9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534aa0:L534aa0:{c.instructions+=3;NFSU2_TR(0x534aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534aa1:{NFSU2_TR(0x534aa1);
__builtin_memmove((R+24),(R+4),4);
}
B534aa3:{NFSU2_TR(0x534aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534aa8ull));
{goto L534ac0;}
}
B534aa8:L534aa8:{c.instructions+=2;NFSU2_TR(0x534aa8);
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
B534aad:{NFSU2_TR(0x534aad);
if(r1(R+518)){{goto L534ab8;}}
}
B534aaf:L534aaf:{c.instructions+=2;NFSU2_TR(0x534aaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ab0:{NFSU2_TR(0x534ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534ab5ull));
TAIL_STATIC(0x575630u,575);
}
B534ab5:L534ab5:{c.instructions+=1;NFSU2_TR(0x534ab5);
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
B534ab8:L534ab8:{c.instructions+=3;NFSU2_TR(0x534ab8);
__builtin_memmove((R+0),(R+24),4);
}
B534aba:{NFSU2_TR(0x534aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534abb:{NFSU2_TR(0x534abb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534ac0:L534ac0:{c.instructions+=13;NFSU2_TR(0x534ac0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ac2:{NFSU2_TR(0x534ac2);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ac7:{NFSU2_TR(0x534ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534acd:{NFSU2_TR(0x534acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ace:{NFSU2_TR(0x534ace);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534ad5:{NFSU2_TR(0x534ad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ad6:{NFSU2_TR(0x534ad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ad7:{NFSU2_TR(0x534ad7);
__builtin_memmove((R+24),(R+4),4);
}
B534ad9:{NFSU2_TR(0x534ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534add:{NFSU2_TR(0x534add);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B534ae0:{NFSU2_TR(0x534ae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534ae8:{NFSU2_TR(0x534ae8);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B534aee:{NFSU2_TR(0x534aee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534af3ull));
TAIL_STATIC(0x511670u,511);
}
B534af3:L534af3:{c.instructions+=6;NFSU2_TR(0x534af3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534af7:{NFSU2_TR(0x534af7);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534afd:{NFSU2_TR(0x534afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534afe:{NFSU2_TR(0x534afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534b05:{NFSU2_TR(0x534b05);
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
B534b08:{NFSU2_TR(0x534b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534b10:L534b10:{c.instructions+=14;NFSU2_TR(0x534b10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b12:{NFSU2_TR(0x534b12);
u8 U[4];
w4(U+0,u32(0x776f68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b17:{NFSU2_TR(0x534b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534b1d:{NFSU2_TR(0x534b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b1e:{NFSU2_TR(0x534b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534b25:{NFSU2_TR(0x534b25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b26:{NFSU2_TR(0x534b26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b27:{NFSU2_TR(0x534b27);
__builtin_memmove((R+24),(R+4),4);
}
B534b29:{NFSU2_TR(0x534b29);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534b2d:{NFSU2_TR(0x534b2d);
u8 U[4];
w4(U+0,u32(0x79aa38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534b33:{NFSU2_TR(0x534b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534b36:{NFSU2_TR(0x534b36);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534b38:{NFSU2_TR(0x534b38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534b40:{NFSU2_TR(0x534b40);
if(r1(R+518)){{goto L534b61;}}
}
B534b42:L534b42:{c.instructions+=8;NFSU2_TR(0x534b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534b45:{NFSU2_TR(0x534b45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b46:{NFSU2_TR(0x534b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B534b49:{NFSU2_TR(0x534b49);
u8 U[4];
w4(U+0,u32(0x517600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b4e:{NFSU2_TR(0x534b4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b4f:{NFSU2_TR(0x534b4f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b51:{NFSU2_TR(0x534b51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b52:{NFSU2_TR(0x534b52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534b57ull));
TAIL_STATIC(0x75c401u,75c);
}
B534b57:L534b57:{c.instructions+=2;NFSU2_TR(0x534b57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b58:{NFSU2_TR(0x534b58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534b5dull));
TAIL_STATIC(0x575630u,575);
}
B534b5d:L534b5d:{c.instructions+=2;NFSU2_TR(0x534b5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534b60:{NFSU2_TR(0x534b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534b61:L534b61:{c.instructions+=8;NFSU2_TR(0x534b61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534b65:{NFSU2_TR(0x534b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534b6c:{NFSU2_TR(0x534b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534b73:{NFSU2_TR(0x534b73);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534b79:{NFSU2_TR(0x534b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534b7a:{NFSU2_TR(0x534b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534b81:{NFSU2_TR(0x534b81);
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
B534b84:{NFSU2_TR(0x534b84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534b90:L534b90:{c.instructions+=3;NFSU2_TR(0x534b90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534b91:{NFSU2_TR(0x534b91);
__builtin_memmove((R+24),(R+4),4);
}
B534b93:{NFSU2_TR(0x534b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534b98ull));
TAIL_STATIC(0x52af20u,52a);
}
B534b98:L534b98:{c.instructions+=6;NFSU2_TR(0x534b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534b9f:{NFSU2_TR(0x534b9f);
u8 U[4];
w4(U+0,u32(0x79baecull));
s4(u32(r4(R+24)),r4(U+0));
}
B534ba5:{NFSU2_TR(0x534ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534bac:{NFSU2_TR(0x534bac);
__builtin_memmove((R+0),(R+24),4);
}
B534bae:{NFSU2_TR(0x534bae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534baf:{NFSU2_TR(0x534baf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534bb0:L534bb0:{c.instructions+=3;NFSU2_TR(0x534bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bb1:{NFSU2_TR(0x534bb1);
__builtin_memmove((R+24),(R+4),4);
}
B534bb3:{NFSU2_TR(0x534bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534bb8ull));
TAIL_STATIC(0x52af90u,52a);
}
B534bb8:L534bb8:{c.instructions+=2;NFSU2_TR(0x534bb8);
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
B534bbd:{NFSU2_TR(0x534bbd);
if(r1(R+518)){{goto L534bc8;}}
}
B534bbf:L534bbf:{c.instructions+=2;NFSU2_TR(0x534bbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bc0:{NFSU2_TR(0x534bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534bc5ull));
TAIL_STATIC(0x575630u,575);
}
B534bc5:L534bc5:{c.instructions+=1;NFSU2_TR(0x534bc5);
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
B534bc8:L534bc8:{c.instructions+=3;NFSU2_TR(0x534bc8);
__builtin_memmove((R+0),(R+24),4);
}
B534bca:{NFSU2_TR(0x534bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534bcb:{NFSU2_TR(0x534bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534bd0:L534bd0:{c.instructions+=3;NFSU2_TR(0x534bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bd1:{NFSU2_TR(0x534bd1);
__builtin_memmove((R+24),(R+4),4);
}
B534bd3:{NFSU2_TR(0x534bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534bd8ull));
{goto L534bf0;}
}
B534bd8:L534bd8:{c.instructions+=2;NFSU2_TR(0x534bd8);
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
B534bdd:{NFSU2_TR(0x534bdd);
if(r1(R+518)){{goto L534be8;}}
}
B534bdf:L534bdf:{c.instructions+=2;NFSU2_TR(0x534bdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534be0:{NFSU2_TR(0x534be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534be5ull));
TAIL_STATIC(0x575630u,575);
}
B534be5:L534be5:{c.instructions+=1;NFSU2_TR(0x534be5);
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
B534be8:L534be8:{c.instructions+=3;NFSU2_TR(0x534be8);
__builtin_memmove((R+0),(R+24),4);
}
B534bea:{NFSU2_TR(0x534bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534beb:{NFSU2_TR(0x534beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534bf0:L534bf0:{c.instructions+=13;NFSU2_TR(0x534bf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bf2:{NFSU2_TR(0x534bf2);
u8 U[4];
w4(U+0,u32(0x7774d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bf7:{NFSU2_TR(0x534bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534bfd:{NFSU2_TR(0x534bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534bfe:{NFSU2_TR(0x534bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534c05:{NFSU2_TR(0x534c05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c06:{NFSU2_TR(0x534c06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c07:{NFSU2_TR(0x534c07);
__builtin_memmove((R+24),(R+4),4);
}
B534c09:{NFSU2_TR(0x534c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534c0d:{NFSU2_TR(0x534c0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B534c10:{NFSU2_TR(0x534c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534c18:{NFSU2_TR(0x534c18);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B534c1e:{NFSU2_TR(0x534c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534c23ull));
TAIL_STATIC(0x511670u,511);
}
B534c23:L534c23:{c.instructions+=3;NFSU2_TR(0x534c23);
__builtin_memmove((R+4),(R+24),4);
}
B534c25:{NFSU2_TR(0x534c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B534c2d:{NFSU2_TR(0x534c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534c32ull));
TAIL_STATIC(0x52af90u,52a);
}
B534c32:L534c32:{c.instructions+=5;NFSU2_TR(0x534c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534c36:{NFSU2_TR(0x534c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534c37:{NFSU2_TR(0x534c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534c3e:{NFSU2_TR(0x534c3e);
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
B534c41:{NFSU2_TR(0x534c41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534c45:L534c45:{c.instructions+=14;NFSU2_TR(0x534c45);
}
B534c46:{NFSU2_TR(0x534c46);
}
B534c47:{NFSU2_TR(0x534c47);
}
B534c48:{NFSU2_TR(0x534c48);
}
B534c49:{NFSU2_TR(0x534c49);
}
B534c4a:{NFSU2_TR(0x534c4a);
}
B534c4b:{NFSU2_TR(0x534c4b);
}
B534c4c:{NFSU2_TR(0x534c4c);
}
B534c4d:{NFSU2_TR(0x534c4d);
}
B534c4e:{NFSU2_TR(0x534c4e);
}
B534c4f:{NFSU2_TR(0x534c4f);
}
B534c50:{NFSU2_TR(0x534c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c51:{NFSU2_TR(0x534c51);
__builtin_memmove((R+24),(R+4),4);
}
B534c53:{NFSU2_TR(0x534c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534c58ull));
TAIL_STATIC(0x52b1e0u,52b);
}
B534c58:L534c58:{c.instructions+=2;NFSU2_TR(0x534c58);
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
B534c5d:{NFSU2_TR(0x534c5d);
if(r1(R+518)){{goto L534c68;}}
}
B534c5f:L534c5f:{c.instructions+=2;NFSU2_TR(0x534c5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c60:{NFSU2_TR(0x534c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534c65ull));
TAIL_STATIC(0x575630u,575);
}
B534c65:L534c65:{c.instructions+=1;NFSU2_TR(0x534c65);
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
B534c68:L534c68:{c.instructions+=3;NFSU2_TR(0x534c68);
__builtin_memmove((R+0),(R+24),4);
}
B534c6a:{NFSU2_TR(0x534c6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534c6b:{NFSU2_TR(0x534c6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534c70:L534c70:{c.instructions+=14;NFSU2_TR(0x534c70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c71:{NFSU2_TR(0x534c71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534c75:{NFSU2_TR(0x534c75);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534c79:{NFSU2_TR(0x534c79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c7a:{NFSU2_TR(0x534c7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B534c7d:{NFSU2_TR(0x534c7d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c7e:{NFSU2_TR(0x534c7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B534c82:{NFSU2_TR(0x534c82);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B534c84:{NFSU2_TR(0x534c84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c85:{NFSU2_TR(0x534c85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534c86:{NFSU2_TR(0x534c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534c89:{NFSU2_TR(0x534c89);
__builtin_memmove((R+24),(R+4),4);
}
B534c8b:{NFSU2_TR(0x534c8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534c8f:{NFSU2_TR(0x534c8f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L534da7;}}
}
B534c95:L534c95:{c.instructions+=2;NFSU2_TR(0x534c95);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B534c98:{NFSU2_TR(0x534c98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534c9f;}}
}
B534c9a:L534c9a:{c.instructions+=2;NFSU2_TR(0x534c9a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B534c9b:{NFSU2_TR(0x534c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534c9f:L534c9f:{c.instructions+=4;NFSU2_TR(0x534c9f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534ca1:{NFSU2_TR(0x534ca1);
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
B534ca3:{NFSU2_TR(0x534ca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534ca7:{NFSU2_TR(0x534ca7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L534da7;}}
}
B534cad:L534cad:{c.instructions+=1;NFSU2_TR(0x534cad);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534cb0:L534cb0:{c.instructions+=2;NFSU2_TR(0x534cb0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+20))));
}
B534cb2:{NFSU2_TR(0x534cb2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L534cc8;}}
}
B534cb4:L534cb4:{c.instructions+=4;NFSU2_TR(0x534cb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B534cb5:{NFSU2_TR(0x534cb5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B534cb8:{NFSU2_TR(0x534cb8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B534cba:{NFSU2_TR(0x534cba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534cb0u);}goto L534cb0;}}
}
B534cbc:L534cbc:{c.instructions+=7;NFSU2_TR(0x534cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534cbd:{NFSU2_TR(0x534cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534cbe:{NFSU2_TR(0x534cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B534cbf:{NFSU2_TR(0x534cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534cc3:{NFSU2_TR(0x534cc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534cc4:{NFSU2_TR(0x534cc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534cc5:{NFSU2_TR(0x534cc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534cc8:L534cc8:{c.instructions+=3;NFSU2_TR(0x534cc8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B534cca:{NFSU2_TR(0x534cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534cce:{NFSU2_TR(0x534cce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L534da7;}}
}
B534cd4:L534cd4:{c.instructions+=5;NFSU2_TR(0x534cd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B534cd8:{NFSU2_TR(0x534cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B534cdc:{NFSU2_TR(0x534cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B534cdf:{NFSU2_TR(0x534cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B534ce2:{NFSU2_TR(0x534ce2);
{goto L534cf0;}
}
B534ce4:L534ce4:{c.instructions+=2;NFSU2_TR(0x534ce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534ce8:{NFSU2_TR(0x534ce8);
{goto L534cf0;}
}
B534cf0:L534cf0:{c.instructions+=2;NFSU2_TR(0x534cf0);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
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
B534cf3:{NFSU2_TR(0x534cf3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L534da7;}}
}
B534cf9:L534cf9:{c.instructions+=3;NFSU2_TR(0x534cf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534cfc:{NFSU2_TR(0x534cfc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0xfffffffbull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534cff:{NFSU2_TR(0x534cff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534d41;}}
}
B534d01:L534d01:{c.instructions+=1;NFSU2_TR(0x534d01);
if(r1(R+518)){{goto L534d36;}}
}
B534d03:L534d03:{c.instructions+=2;NFSU2_TR(0x534d03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534d05:{NFSU2_TR(0x534d05);
if(r1(R+518)){{goto L534d11;}}
}
B534d07:L534d07:{c.instructions+=2;NFSU2_TR(0x534d07);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534d0a:{NFSU2_TR(0x534d0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534d4b;}}
}
B534d0c:L534d0c:{c.instructions+=3;NFSU2_TR(0x534d0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d0e:{NFSU2_TR(0x534d0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d0f:{NFSU2_TR(0x534d0f);
{goto L534d83;}
}
B534d11:L534d11:{c.instructions+=3;NFSU2_TR(0x534d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B534d13:{NFSU2_TR(0x534d13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1b3909aaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534d19:{NFSU2_TR(0x534d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534d30;}}
}
B534d1b:L534d1b:{c.instructions+=3;NFSU2_TR(0x534d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d1c:{NFSU2_TR(0x534d1c);
__builtin_memmove((R+4),(R+24),4);
}
B534d1e:{NFSU2_TR(0x534d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534d23ull));
TAIL_STATIC(0x517fe0u,517);
}
B534d23:L534d23:{c.instructions+=5;NFSU2_TR(0x534d23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d25:{NFSU2_TR(0x534d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d26:{NFSU2_TR(0x534d26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d27:{NFSU2_TR(0x534d27);
__builtin_memmove((R+4),(R+24),4);
}
B534d29:{NFSU2_TR(0x534d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534d2eull));
TAIL_STATIC(0x52b3a0u,52b);
}
B534d2e:L534d2e:{c.instructions+=1;NFSU2_TR(0x534d2e);
{goto L534d8f;}
}
B534d30:L534d30:{c.instructions+=3;NFSU2_TR(0x534d30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d32:{NFSU2_TR(0x534d32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d34:{NFSU2_TR(0x534d34);
{goto L534d85;}
}
B534d36:L534d36:{c.instructions+=7;NFSU2_TR(0x534d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B534d38:{NFSU2_TR(0x534d38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d3a:{NFSU2_TR(0x534d3a);
u8 U[4];
w4(U+0,u32(0xfffffffbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d3c:{NFSU2_TR(0x534d3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d3d:{NFSU2_TR(0x534d3d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d3e:{NFSU2_TR(0x534d3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d3f:{NFSU2_TR(0x534d3f);
{goto L534d88;}
}
B534d41:L534d41:{c.instructions+=2;NFSU2_TR(0x534d41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534d44:{NFSU2_TR(0x534d44);
if(r1(R+518)){{goto L534d7f;}}
}
B534d46:L534d46:{c.instructions+=2;NFSU2_TR(0x534d46);
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
B534d49:{NFSU2_TR(0x534d49);
if(r1(R+518)){{goto L534d6b;}}
}
B534d4b:L534d4b:{c.instructions+=3;NFSU2_TR(0x534d4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d4c:{NFSU2_TR(0x534d4c);
__builtin_memmove((R+4),(R+24),4);
}
B534d4e:{NFSU2_TR(0x534d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534d53ull));
TAIL_STATIC(0x517fe0u,517);
}
B534d53:L534d53:{c.instructions+=3;NFSU2_TR(0x534d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B534d55:{NFSU2_TR(0x534d55);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1b3909aaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B534d5b:{NFSU2_TR(0x534d5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L534d62;}}
}
B534d5d:L534d5d:{c.instructions+=2;NFSU2_TR(0x534d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534d60:{NFSU2_TR(0x534d60);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534d1bu);}goto L534d1b;}
}
B534d62:L534d62:{c.instructions+=2;NFSU2_TR(0x534d62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534d64:{NFSU2_TR(0x534d64);
if(r1(R+518)){{goto L534d8f;}}
}
B534d66:L534d66:{c.instructions+=3;NFSU2_TR(0x534d66);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d68:{NFSU2_TR(0x534d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d69:{NFSU2_TR(0x534d69);
{goto L534d85;}
}
B534d6b:L534d6b:{c.instructions+=8;NFSU2_TR(0x534d6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534d71:{NFSU2_TR(0x534d71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B534d73:{NFSU2_TR(0x534d73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B534d75:{NFSU2_TR(0x534d75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d76:{NFSU2_TR(0x534d76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d78:{NFSU2_TR(0x534d78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d79:{NFSU2_TR(0x534d79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d7a:{NFSU2_TR(0x534d7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534d7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B534d7d:L534d7d:{c.instructions+=1;NFSU2_TR(0x534d7d);
{goto L534d8f;}
}
B534d7f:L534d7f:{c.instructions+=2;NFSU2_TR(0x534d7f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d81:{NFSU2_TR(0x534d81);
u8 U[4];
w4(U+0,u32(0xfffffffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d83:L534d83:{c.instructions+=1;NFSU2_TR(0x534d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B534d85:L534d85:{c.instructions+=3;NFSU2_TR(0x534d85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d86:{NFSU2_TR(0x534d86);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d87:{NFSU2_TR(0x534d87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534d88:L534d88:{c.instructions+=2;NFSU2_TR(0x534d88);
__builtin_memmove((R+4),(R+12),4);
}
B534d8a:{NFSU2_TR(0x534d8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534d8full));
TAIL_STATIC(0x51aa20u,51a);
}
B534d8f:L534d8f:{c.instructions+=7;NFSU2_TR(0x534d8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534d93:{NFSU2_TR(0x534d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534d97:{NFSU2_TR(0x534d97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B534d98:{NFSU2_TR(0x534d98);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B534d9b:{NFSU2_TR(0x534d9b);
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
B534d9d:{NFSU2_TR(0x534d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534da1:{NFSU2_TR(0x534da1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534ce4u);}goto L534ce4;}}
}
B534da7:L534da7:{c.instructions+=6;NFSU2_TR(0x534da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534da8:{NFSU2_TR(0x534da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534da9:{NFSU2_TR(0x534da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B534daa:{NFSU2_TR(0x534daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534dab:{NFSU2_TR(0x534dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B534dac:{NFSU2_TR(0x534dac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534db0:L534db0:{c.instructions+=3;NFSU2_TR(0x534db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534db1:{NFSU2_TR(0x534db1);
__builtin_memmove((R+24),(R+4),4);
}
B534db3:{NFSU2_TR(0x534db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534db8ull));
TAIL_STATIC(0x52af20u,52a);
}
B534db8:L534db8:{c.instructions+=6;NFSU2_TR(0x534db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534dbf:{NFSU2_TR(0x534dbf);
u8 U[4];
w4(U+0,u32(0x79baf4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B534dc5:{NFSU2_TR(0x534dc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B534dcc:{NFSU2_TR(0x534dcc);
__builtin_memmove((R+0),(R+24),4);
}
B534dce:{NFSU2_TR(0x534dce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534dcf:{NFSU2_TR(0x534dcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534dd0:L534dd0:{c.instructions+=3;NFSU2_TR(0x534dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534dd1:{NFSU2_TR(0x534dd1);
__builtin_memmove((R+24),(R+4),4);
}
B534dd3:{NFSU2_TR(0x534dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534dd8ull));
TAIL_STATIC(0x532660u,532);
}
B534dd8:L534dd8:{c.instructions+=2;NFSU2_TR(0x534dd8);
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
B534ddd:{NFSU2_TR(0x534ddd);
if(r1(R+518)){{goto L534de8;}}
}
B534ddf:L534ddf:{c.instructions+=2;NFSU2_TR(0x534ddf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534de0:{NFSU2_TR(0x534de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534de5ull));
TAIL_STATIC(0x575630u,575);
}
B534de5:L534de5:{c.instructions+=1;NFSU2_TR(0x534de5);
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
B534de8:L534de8:{c.instructions+=3;NFSU2_TR(0x534de8);
__builtin_memmove((R+0),(R+24),4);
}
B534dea:{NFSU2_TR(0x534dea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534deb:{NFSU2_TR(0x534deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534df0:L534df0:{c.instructions+=7;NFSU2_TR(0x534df0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534df1:{NFSU2_TR(0x534df1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B534df5:{NFSU2_TR(0x534df5);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xbull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534df8:{NFSU2_TR(0x534df8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534df9:{NFSU2_TR(0x534df9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534dfa:{NFSU2_TR(0x534dfa);
__builtin_memmove((R+28),(R+4),4);
}
B534dfc:{NFSU2_TR(0x534dfc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L534f15;}}
}
B534e02:L534e02:{c.instructions+=1;NFSU2_TR(0x534e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x534f84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B534e09:L534e09:{c.instructions+=2;NFSU2_TR(0x534e09);
u8 U[4];
w4(U+0,u32(0x78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534e0b:{NFSU2_TR(0x534e0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e10ull));
TAIL_STATIC(0x575620u,575);
}
B534e10:L534e10:{c.instructions+=3;NFSU2_TR(0x534e10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534e13:{NFSU2_TR(0x534e13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534e15:{NFSU2_TR(0x534e15);
if(r1(R+518)){{goto L534f2c;}}
}
B534e1b:L534e1b:{c.instructions+=2;NFSU2_TR(0x534e1b);
__builtin_memmove((R+4),(R+0),4);
}
B534e1d:{NFSU2_TR(0x534e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e22ull));
TAIL_STATIC(0x495630u,495);
}
B534e22:L534e22:{c.instructions+=1;NFSU2_TR(0x534e22);
{goto L534f2e;}
}
B534e27:L534e27:{c.instructions+=2;NFSU2_TR(0x534e27);
u8 U[4];
w4(U+0,u32(0xacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534e2c:{NFSU2_TR(0x534e2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e31ull));
TAIL_STATIC(0x575620u,575);
}
B534e31:L534e31:{c.instructions+=3;NFSU2_TR(0x534e31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534e34:{NFSU2_TR(0x534e34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534e36:{NFSU2_TR(0x534e36);
if(r1(R+518)){{goto L534f2c;}}
}
B534e3c:L534e3c:{c.instructions+=2;NFSU2_TR(0x534e3c);
__builtin_memmove((R+4),(R+0),4);
}
B534e3e:{NFSU2_TR(0x534e3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5349c0u);}goto L5349c0;}
}
B534e43:L534e43:{c.instructions+=1;NFSU2_TR(0x534e43);
{goto L534f2e;}
}
B534e48:L534e48:{c.instructions+=2;NFSU2_TR(0x534e48);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534e4d:{NFSU2_TR(0x534e4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e52ull));
TAIL_STATIC(0x575620u,575);
}
B534e52:L534e52:{c.instructions+=3;NFSU2_TR(0x534e52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534e55:{NFSU2_TR(0x534e55);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534e57:{NFSU2_TR(0x534e57);
if(r1(R+518)){{goto L534e6b;}}
}
B534e59:L534e59:{c.instructions+=2;NFSU2_TR(0x534e59);
__builtin_memmove((R+4),(R+0),4);
}
B534e5b:{NFSU2_TR(0x534e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e60ull));
TAIL_STATIC(0x52b9e0u,52b);
}
B534e60:L534e60:{c.instructions+=3;NFSU2_TR(0x534e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534e63:{NFSU2_TR(0x534e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534e66:{NFSU2_TR(0x534e66);
{goto L534f2e;}
}
B534e6b:L534e6b:{c.instructions+=4;NFSU2_TR(0x534e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534e6e:{NFSU2_TR(0x534e6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534e70:{NFSU2_TR(0x534e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534e73:{NFSU2_TR(0x534e73);
{goto L534f2e;}
}
B534e78:L534e78:{c.instructions+=2;NFSU2_TR(0x534e78);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534e7a:{NFSU2_TR(0x534e7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e7full));
TAIL_STATIC(0x575620u,575);
}
B534e7f:L534e7f:{c.instructions+=3;NFSU2_TR(0x534e7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534e82:{NFSU2_TR(0x534e82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534e84:{NFSU2_TR(0x534e84);
if(r1(R+518)){{goto L534f2c;}}
}
B534e8a:L534e8a:{c.instructions+=2;NFSU2_TR(0x534e8a);
__builtin_memmove((R+4),(R+0),4);
}
B534e8c:{NFSU2_TR(0x534e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e91ull));
TAIL_STATIC(0x52b080u,52b);
}
B534e91:L534e91:{c.instructions+=1;NFSU2_TR(0x534e91);
{goto L534f2e;}
}
B534e96:L534e96:{c.instructions+=2;NFSU2_TR(0x534e96);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534e98:{NFSU2_TR(0x534e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534e9dull));
TAIL_STATIC(0x575620u,575);
}
B534e9d:L534e9d:{c.instructions+=3;NFSU2_TR(0x534e9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534ea0:{NFSU2_TR(0x534ea0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534ea2:{NFSU2_TR(0x534ea2);
if(r1(R+518)){{goto L534f2c;}}
}
B534ea8:L534ea8:{c.instructions+=2;NFSU2_TR(0x534ea8);
__builtin_memmove((R+4),(R+0),4);
}
B534eaa:{NFSU2_TR(0x534eaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534eafull));
TAIL_STATIC(0x532640u,532);
}
B534eaf:L534eaf:{c.instructions+=1;NFSU2_TR(0x534eaf);
{goto L534f2e;}
}
B534eb1:L534eb1:{c.instructions+=2;NFSU2_TR(0x534eb1);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534eb3:{NFSU2_TR(0x534eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534eb8ull));
TAIL_STATIC(0x575620u,575);
}
B534eb8:L534eb8:{c.instructions+=3;NFSU2_TR(0x534eb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534ebb:{NFSU2_TR(0x534ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534ebd:{NFSU2_TR(0x534ebd);
if(r1(R+518)){{goto L534f2c;}}
}
B534ebf:L534ebf:{c.instructions+=2;NFSU2_TR(0x534ebf);
__builtin_memmove((R+4),(R+0),4);
}
B534ec1:{NFSU2_TR(0x534ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534ec6ull));
TAIL_STATIC(0x52b0b0u,52b);
}
B534ec6:L534ec6:{c.instructions+=1;NFSU2_TR(0x534ec6);
{goto L534f2e;}
}
B534ec8:L534ec8:{c.instructions+=2;NFSU2_TR(0x534ec8);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534eca:{NFSU2_TR(0x534eca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534ecfull));
TAIL_STATIC(0x575620u,575);
}
B534ecf:L534ecf:{c.instructions+=3;NFSU2_TR(0x534ecf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534ed2:{NFSU2_TR(0x534ed2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534ed4:{NFSU2_TR(0x534ed4);
if(r1(R+518)){{goto L534f2c;}}
}
B534ed6:L534ed6:{c.instructions+=2;NFSU2_TR(0x534ed6);
__builtin_memmove((R+4),(R+0),4);
}
B534ed8:{NFSU2_TR(0x534ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534eddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534b90u);}goto L534b90;}
}
B534edd:L534edd:{c.instructions+=1;NFSU2_TR(0x534edd);
{goto L534f2e;}
}
B534edf:L534edf:{c.instructions+=2;NFSU2_TR(0x534edf);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ee1:{NFSU2_TR(0x534ee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534ee6ull));
TAIL_STATIC(0x575620u,575);
}
B534ee6:L534ee6:{c.instructions+=3;NFSU2_TR(0x534ee6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534ee9:{NFSU2_TR(0x534ee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534eeb:{NFSU2_TR(0x534eeb);
if(r1(R+518)){{goto L534f2c;}}
}
B534eed:L534eed:{c.instructions+=2;NFSU2_TR(0x534eed);
__builtin_memmove((R+4),(R+0),4);
}
B534eef:{NFSU2_TR(0x534eef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534ef4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534db0u);}goto L534db0;}
}
B534ef4:L534ef4:{c.instructions+=1;NFSU2_TR(0x534ef4);
{goto L534f2e;}
}
B534ef6:L534ef6:{c.instructions+=2;NFSU2_TR(0x534ef6);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534ef8:{NFSU2_TR(0x534ef8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534efdull));
TAIL_STATIC(0x575620u,575);
}
B534efd:L534efd:{c.instructions+=3;NFSU2_TR(0x534efd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534f00:{NFSU2_TR(0x534f00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534f02:{NFSU2_TR(0x534f02);
if(r1(R+518)){{goto L534f2c;}}
}
B534f04:L534f04:{c.instructions+=2;NFSU2_TR(0x534f04);
__builtin_memmove((R+4),(R+0),4);
}
B534f06:{NFSU2_TR(0x534f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534f0bull));
TAIL_STATIC(0x52b480u,52b);
}
B534f0b:L534f0b:{c.instructions+=1;NFSU2_TR(0x534f0b);
{goto L534f2e;}
}
B534f0d:L534f0d:{c.instructions+=5;NFSU2_TR(0x534f0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534f0e:{NFSU2_TR(0x534f0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534f0f:{NFSU2_TR(0x534f0f);
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
B534f11:{NFSU2_TR(0x534f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534f12:{NFSU2_TR(0x534f12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534f15:L534f15:{c.instructions+=2;NFSU2_TR(0x534f15);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534f17:{NFSU2_TR(0x534f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534f1cull));
TAIL_STATIC(0x575620u,575);
}
B534f1c:L534f1c:{c.instructions+=3;NFSU2_TR(0x534f1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B534f1f:{NFSU2_TR(0x534f1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534f21:{NFSU2_TR(0x534f21);
if(r1(R+518)){{goto L534f2c;}}
}
B534f23:L534f23:{c.instructions+=2;NFSU2_TR(0x534f23);
__builtin_memmove((R+4),(R+0),4);
}
B534f25:{NFSU2_TR(0x534f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534f2aull));
TAIL_STATIC(0x52af20u,52a);
}
B534f2a:L534f2a:{c.instructions+=1;NFSU2_TR(0x534f2a);
{goto L534f2e;}
}
B534f2c:L534f2c:{c.instructions+=1;NFSU2_TR(0x534f2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534f2e:L534f2e:{c.instructions+=6;NFSU2_TR(0x534f2e);
__builtin_memmove((R+24),(R+0),4);
}
B534f30:{NFSU2_TR(0x534f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534f33:{NFSU2_TR(0x534f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534f36:{NFSU2_TR(0x534f36);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B534f38:{NFSU2_TR(0x534f38);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534f3a:{NFSU2_TR(0x534f3a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L534f4d;}}
}
B534f3c:L534f3c:{c.instructions+=2;NFSU2_TR(0x534f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B534f3f:{NFSU2_TR(0x534f3f);
__builtin_memmove((R+8),(R+28),4);
}
B534f41:L534f41:{c.instructions+=2;NFSU2_TR(0x534f41);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B534f43:{NFSU2_TR(0x534f43);
if(r1(R+518)){{goto L534f7d;}}
}
B534f45:L534f45:{c.instructions+=4;NFSU2_TR(0x534f45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B534f46:{NFSU2_TR(0x534f46);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B534f49:{NFSU2_TR(0x534f49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B534f4b:{NFSU2_TR(0x534f4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534f41u);}goto L534f41;}}
}
B534f4d:L534f4d:{c.instructions+=1;NFSU2_TR(0x534f4d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B534f4f:L534f4f:{c.instructions+=4;NFSU2_TR(0x534f4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534f52:{NFSU2_TR(0x534f52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534f53:{NFSU2_TR(0x534f53);
w4(R+4,u32(0x863770ull));
}
B534f58:{NFSU2_TR(0x534f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534f5dull));
TAIL_STATIC(0x517520u,517);
}
B534f5d:L534f5d:{c.instructions+=4;NFSU2_TR(0x534f5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534f5e:{NFSU2_TR(0x534f5e);
w4(R+4,u32(0x863770ull));
}
B534f63:{NFSU2_TR(0x534f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B534f6a:{NFSU2_TR(0x534f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x534f6full));
TAIL_STATIC(0x52ace0u,52a);
}
B534f6f:L534f6f:{c.instructions+=7;NFSU2_TR(0x534f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534f72:{NFSU2_TR(0x534f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534f75:{NFSU2_TR(0x534f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B534f76:{NFSU2_TR(0x534f76);
__builtin_memmove((R+0),(R+24),4);
}
B534f78:{NFSU2_TR(0x534f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534f79:{NFSU2_TR(0x534f79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B534f7a:{NFSU2_TR(0x534f7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B534f7d:L534f7d:{c.instructions+=2;NFSU2_TR(0x534f7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B534f81:{NFSU2_TR(0x534f81);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x534f4fu);}goto L534f4f;}
}
B534fc0:L534fc0:{c.instructions+=7;NFSU2_TR(0x534fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B534fc4:{NFSU2_TR(0x534fc4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B534fc7:{NFSU2_TR(0x534fc7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6a53ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6a53ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6a53ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534fcc:{NFSU2_TR(0x534fcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B534fcd:{NFSU2_TR(0x534fcd);
__builtin_memmove((R+24),(R+4),4);
}
B534fcf:{NFSU2_TR(0x534fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B534fd2:{NFSU2_TR(0x534fd2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x535026u,535);}
}
B534fd4:L534fd4:{c.instructions+=1;NFSU2_TR(0x534fd4);
if(r1(R+518)){TAIL_STATIC(0x53501cu,535);}
}
B534fd6:L534fd6:{c.instructions+=2;NFSU2_TR(0x534fd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4853ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534fdb:{NFSU2_TR(0x534fdb);
if(r1(R+518)){TAIL_STATIC(0x53500fu,535);}
}
B534fdd:L534fdd:{c.instructions+=2;NFSU2_TR(0x534fdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4c53ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B534fe2:{NFSU2_TR(0x534fe2);
if(r1(R+518)){{goto L534ffb;}}
}
B534fe4:L534fe4:{c.instructions+=2;NFSU2_TR(0x534fe4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6253ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6253ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6253ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B534fe9:{NFSU2_TR(0x534fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x53505bu,535);}
}
B534feb:L534feb:{c.instructions+=5;NFSU2_TR(0x534feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B534fee:{NFSU2_TR(0x534fee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B534fef:{NFSU2_TR(0x534fef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B534ff3:{NFSU2_TR(0x534ff3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B534ff6:{NFSU2_TR(0x534ff6);
TAIL_STATIC(0x51de90u,51d);
}
B534ffb:L534ffb:{c.instructions+=2;NFSU2_TR(0x534ffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B534ffe:{NFSU2_TR(0x534ffe);
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
TAIL_STATIC(0x535000u,535);
}
XIT:NFSU2_TR_EXIT(0x534,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
