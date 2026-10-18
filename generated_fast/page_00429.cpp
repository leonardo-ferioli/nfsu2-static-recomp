#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_417(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_427(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42a(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x429,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x429,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_429(u8* __restrict R,Cpu& c);
u32 page_429(Cpu& c){return body_429(c.regs.data(),c);}
__attribute__((noinline)) u32 body_429(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x429001:goto L429001;
case 0x429008:c.instructions+=22;goto B429008;
case 0x42900c:c.instructions+=21;goto B42900c;
case 0x429010:c.instructions+=20;goto B429010;
case 0x429012:c.instructions+=19;goto B429012;
case 0x429016:c.instructions+=18;goto B429016;
case 0x429017:c.instructions+=17;goto B429017;
case 0x42901a:c.instructions+=16;goto B42901a;
case 0x42901e:c.instructions+=15;goto B42901e;
case 0x42901f:c.instructions+=14;goto B42901f;
case 0x429023:c.instructions+=13;goto B429023;
case 0x429027:c.instructions+=12;goto B429027;
case 0x42902b:c.instructions+=11;goto B42902b;
case 0x42902f:c.instructions+=10;goto B42902f;
case 0x429033:c.instructions+=9;goto B429033;
case 0x429036:c.instructions+=8;goto B429036;
case 0x429037:c.instructions+=7;goto B429037;
case 0x429038:c.instructions+=6;goto B429038;
case 0x429039:c.instructions+=5;goto B429039;
case 0x42903b:c.instructions+=4;goto B42903b;
case 0x42903f:c.instructions+=3;goto B42903f;
case 0x429047:c.instructions+=2;goto B429047;
case 0x42904f:c.instructions+=1;goto B42904f;
case 0x429054:goto L429054;
case 0x429056:c.instructions+=1;goto B429056;
case 0x429058:goto L429058;
case 0x42905b:c.instructions+=4;goto B42905b;
case 0x42905d:c.instructions+=3;goto B42905d;
case 0x429061:c.instructions+=2;goto B429061;
case 0x429065:c.instructions+=1;goto B429065;
case 0x429067:goto L429067;
case 0x42906c:c.instructions+=1;goto B42906c;
case 0x42906e:goto L42906e;
case 0x429073:c.instructions+=8;goto B429073;
case 0x429076:c.instructions+=7;goto B429076;
case 0x42907a:c.instructions+=6;goto B42907a;
case 0x42907e:c.instructions+=5;goto B42907e;
case 0x429084:c.instructions+=4;goto B429084;
case 0x42908a:c.instructions+=3;goto B42908a;
case 0x42908c:c.instructions+=2;goto B42908c;
case 0x42908f:c.instructions+=1;goto B42908f;
case 0x429091:goto L429091;
case 0x429093:c.instructions+=6;goto B429093;
case 0x429094:c.instructions+=5;goto B429094;
case 0x429095:c.instructions+=4;goto B429095;
case 0x429096:c.instructions+=3;goto B429096;
case 0x429098:c.instructions+=2;goto B429098;
case 0x429099:c.instructions+=1;goto B429099;
case 0x42909c:goto L42909c;
case 0x42909e:c.instructions+=1;goto B42909e;
case 0x4290a0:goto L4290a0;
case 0x4290a3:c.instructions+=1;goto B4290a3;
case 0x4290a5:goto L4290a5;
case 0x4290a9:c.instructions+=2;goto B4290a9;
case 0x4290ac:c.instructions+=1;goto B4290ac;
case 0x4290ae:goto L4290ae;
case 0x4290b1:c.instructions+=1;goto B4290b1;
case 0x4290b3:goto L4290b3;
case 0x4290b6:c.instructions+=1;goto B4290b6;
case 0x4290b8:goto L4290b8;
case 0x4290bc:c.instructions+=2;goto B4290bc;
case 0x4290c0:c.instructions+=1;goto B4290c0;
case 0x4290c2:goto L4290c2;
case 0x4290c8:goto L4290c8;
case 0x4290ca:c.instructions+=1;goto B4290ca;
case 0x4290cc:goto L4290cc;
case 0x4290cf:c.instructions+=1;goto B4290cf;
case 0x4290d1:goto L4290d1;
case 0x4290d5:c.instructions+=2;goto B4290d5;
case 0x4290d8:c.instructions+=1;goto B4290d8;
case 0x4290da:goto L4290da;
case 0x4290dd:c.instructions+=1;goto B4290dd;
case 0x4290df:goto L4290df;
case 0x4290e2:c.instructions+=1;goto B4290e2;
case 0x4290e4:goto L4290e4;
case 0x4290e8:c.instructions+=2;goto B4290e8;
case 0x4290ec:c.instructions+=1;goto B4290ec;
case 0x4290ee:goto L4290ee;
case 0x4290f4:goto L4290f4;
case 0x4290f6:c.instructions+=7;goto B4290f6;
case 0x4290f8:c.instructions+=6;goto B4290f8;
case 0x4290fe:c.instructions+=5;goto B4290fe;
case 0x429100:c.instructions+=4;goto B429100;
case 0x429106:c.instructions+=3;goto B429106;
case 0x429108:c.instructions+=2;goto B429108;
case 0x42910b:c.instructions+=1;goto B42910b;
case 0x42910d:goto L42910d;
case 0x429111:c.instructions+=1;goto B429111;
case 0x429113:goto L429113;
case 0x429119:c.instructions+=2;goto B429119;
case 0x42911b:c.instructions+=1;goto B42911b;
case 0x42911f:goto L42911f;
case 0x429122:c.instructions+=3;goto B429122;
case 0x429128:c.instructions+=2;goto B429128;
case 0x42912c:c.instructions+=1;goto B42912c;
case 0x429130:goto L429130;
case 0x429134:c.instructions+=4;goto B429134;
case 0x42913a:c.instructions+=3;goto B42913a;
case 0x42913c:c.instructions+=2;goto B42913c;
case 0x42913f:c.instructions+=1;goto B42913f;
case 0x429145:goto L429145;
case 0x429149:c.instructions+=6;goto B429149;
case 0x42914b:c.instructions+=5;goto B42914b;
case 0x42914f:c.instructions+=4;goto B42914f;
case 0x429151:c.instructions+=3;goto B429151;
case 0x429155:c.instructions+=2;goto B429155;
case 0x429157:c.instructions+=1;goto B429157;
case 0x42915d:goto L42915d;
case 0x42915f:goto L42915f;
case 0x429163:goto L429163;
case 0x429165:c.instructions+=1;goto B429165;
case 0x429167:goto L429167;
case 0x429169:c.instructions+=1;goto B429169;
case 0x42916f:goto L42916f;
case 0x429171:c.instructions+=7;goto B429171;
case 0x429175:c.instructions+=6;goto B429175;
case 0x429179:c.instructions+=5;goto B429179;
case 0x42917d:c.instructions+=4;goto B42917d;
case 0x429181:c.instructions+=3;goto B429181;
case 0x429185:c.instructions+=2;goto B429185;
case 0x429189:c.instructions+=1;goto B429189;
case 0x42918b:goto L42918b;
case 0x42918e:c.instructions+=1;goto B42918e;
case 0x429190:goto L429190;
case 0x429194:c.instructions+=2;goto B429194;
case 0x429197:c.instructions+=1;goto B429197;
case 0x429199:goto L429199;
case 0x42919c:c.instructions+=1;goto B42919c;
case 0x42919e:goto L42919e;
case 0x4291a1:c.instructions+=1;goto B4291a1;
case 0x4291a3:goto L4291a3;
case 0x4291a7:c.instructions+=2;goto B4291a7;
case 0x4291ab:c.instructions+=1;goto B4291ab;
case 0x4291ad:goto L4291ad;
case 0x4291b3:c.instructions+=1;goto B4291b3;
case 0x4291b7:goto L4291b7;
case 0x4291b9:c.instructions+=5;goto B4291b9;
case 0x4291bb:c.instructions+=4;goto B4291bb;
case 0x4291bd:c.instructions+=3;goto B4291bd;
case 0x4291bf:c.instructions+=2;goto B4291bf;
case 0x4291c2:c.instructions+=1;goto B4291c2;
case 0x4291c4:goto L4291c4;
case 0x4291c6:c.instructions+=2;goto B4291c6;
case 0x4291ca:c.instructions+=1;goto B4291ca;
case 0x4291cc:goto L4291cc;
case 0x4291d1:c.instructions+=1;goto B4291d1;
case 0x4291d5:goto L4291d5;
case 0x4291d7:c.instructions+=1;goto B4291d7;
case 0x4291d9:goto L4291d9;
case 0x4291dc:c.instructions+=1;goto B4291dc;
case 0x4291de:goto L4291de;
case 0x4291e1:c.instructions+=1;goto B4291e1;
case 0x4291e3:goto L4291e3;
case 0x4291e6:c.instructions+=1;goto B4291e6;
case 0x4291e8:goto L4291e8;
case 0x4291eb:c.instructions+=1;goto B4291eb;
case 0x4291ed:goto L4291ed;
case 0x4291f1:c.instructions+=1;goto B4291f1;
case 0x4291f3:goto L4291f3;
case 0x4291f9:goto L4291f9;
case 0x4291fb:c.instructions+=5;goto B4291fb;
case 0x4291fd:c.instructions+=4;goto B4291fd;
case 0x4291ff:c.instructions+=3;goto B4291ff;
case 0x429201:c.instructions+=2;goto B429201;
case 0x429204:c.instructions+=1;goto B429204;
case 0x429206:goto L429206;
case 0x429208:c.instructions+=1;goto B429208;
case 0x42920a:goto L42920a;
case 0x42920c:goto L42920c;
case 0x429210:c.instructions+=7;goto B429210;
case 0x429213:c.instructions+=6;goto B429213;
case 0x429215:c.instructions+=5;goto B429215;
case 0x429219:c.instructions+=4;goto B429219;
case 0x42921d:c.instructions+=3;goto B42921d;
case 0x42921f:c.instructions+=2;goto B42921f;
case 0x429223:c.instructions+=1;goto B429223;
case 0x429225:goto L429225;
case 0x429229:c.instructions+=5;goto B429229;
case 0x42922b:c.instructions+=4;goto B42922b;
case 0x42922f:c.instructions+=3;goto B42922f;
case 0x429233:c.instructions+=2;goto B429233;
case 0x429235:c.instructions+=1;goto B429235;
case 0x429239:goto L429239;
case 0x42923b:c.instructions+=1;goto B42923b;
case 0x429241:goto L429241;
case 0x429245:c.instructions+=10;goto B429245;
case 0x429249:c.instructions+=9;goto B429249;
case 0x42924d:c.instructions+=8;goto B42924d;
case 0x429251:c.instructions+=7;goto B429251;
case 0x429257:c.instructions+=6;goto B429257;
case 0x42925b:c.instructions+=5;goto B42925b;
case 0x42925d:c.instructions+=4;goto B42925d;
case 0x429263:c.instructions+=3;goto B429263;
case 0x429265:c.instructions+=2;goto B429265;
case 0x429268:c.instructions+=1;goto B429268;
case 0x42926a:goto L42926a;
case 0x42926e:c.instructions+=2;goto B42926e;
case 0x429270:c.instructions+=1;goto B429270;
case 0x429272:goto L429272;
case 0x429277:c.instructions+=1;goto B429277;
case 0x429279:goto L429279;
case 0x42927f:c.instructions+=2;goto B42927f;
case 0x429283:c.instructions+=1;goto B429283;
case 0x429285:goto L429285;
case 0x42928d:goto L42928d;
case 0x429290:c.instructions+=7;goto B429290;
case 0x429291:c.instructions+=6;goto B429291;
case 0x429292:c.instructions+=5;goto B429292;
case 0x429296:c.instructions+=4;goto B429296;
case 0x429298:c.instructions+=3;goto B429298;
case 0x4292a0:c.instructions+=2;goto B4292a0;
case 0x4292a8:c.instructions+=1;goto B4292a8;
case 0x4292ad:goto L4292ad;
case 0x4292af:c.instructions+=1;goto B4292af;
case 0x4292b1:goto L4292b1;
case 0x4292b4:c.instructions+=8;goto B4292b4;
case 0x4292b7:c.instructions+=7;goto B4292b7;
case 0x4292bb:c.instructions+=6;goto B4292bb;
case 0x4292bc:c.instructions+=5;goto B4292bc;
case 0x4292bd:c.instructions+=4;goto B4292bd;
case 0x4292be:c.instructions+=3;goto B4292be;
case 0x4292bf:c.instructions+=2;goto B4292bf;
case 0x4292c4:c.instructions+=1;goto B4292c4;
case 0x4292c9:goto L4292c9;
case 0x4292cb:c.instructions+=2;goto B4292cb;
case 0x4292cf:c.instructions+=1;goto B4292cf;
case 0x4292d1:goto L4292d1;
case 0x4292d5:c.instructions+=4;goto B4292d5;
case 0x4292d8:c.instructions+=3;goto B4292d8;
case 0x4292da:c.instructions+=2;goto B4292da;
case 0x4292dd:c.instructions+=1;goto B4292dd;
case 0x4292df:goto L4292df;
case 0x4292e1:goto L4292e1;
case 0x4292e6:c.instructions+=6;goto B4292e6;
case 0x4292ec:c.instructions+=5;goto B4292ec;
case 0x4292ed:c.instructions+=4;goto B4292ed;
case 0x4292f1:c.instructions+=3;goto B4292f1;
case 0x4292f5:c.instructions+=2;goto B4292f5;
case 0x4292fb:c.instructions+=1;goto B4292fb;
case 0x4292fd:goto L4292fd;
case 0x4292ff:goto L4292ff;
case 0x429303:c.instructions+=2;goto B429303;
case 0x429305:c.instructions+=1;goto B429305;
case 0x429307:goto L429307;
case 0x42930b:c.instructions+=2;goto B42930b;
case 0x42930d:c.instructions+=1;goto B42930d;
case 0x42930f:goto L42930f;
case 0x429313:c.instructions+=11;goto B429313;
case 0x429317:c.instructions+=10;goto B429317;
case 0x42931d:c.instructions+=9;goto B42931d;
case 0x429321:c.instructions+=8;goto B429321;
case 0x429325:c.instructions+=7;goto B429325;
case 0x429329:c.instructions+=6;goto B429329;
case 0x42932b:c.instructions+=5;goto B42932b;
case 0x42932f:c.instructions+=4;goto B42932f;
case 0x429335:c.instructions+=3;goto B429335;
case 0x429337:c.instructions+=2;goto B429337;
case 0x42933a:c.instructions+=1;goto B42933a;
case 0x42933c:goto L42933c;
case 0x429340:c.instructions+=2;goto B429340;
case 0x429342:c.instructions+=1;goto B429342;
case 0x429344:goto L429344;
case 0x429349:c.instructions+=1;goto B429349;
case 0x42934b:goto L42934b;
case 0x429351:c.instructions+=2;goto B429351;
case 0x429355:c.instructions+=1;goto B429355;
case 0x429357:goto L429357;
case 0x42935f:goto L42935f;
case 0x429362:c.instructions+=10;goto B429362;
case 0x429366:c.instructions+=9;goto B429366;
case 0x429367:c.instructions+=8;goto B429367;
case 0x42936a:c.instructions+=7;goto B42936a;
case 0x42936e:c.instructions+=6;goto B42936e;
case 0x42936f:c.instructions+=5;goto B42936f;
case 0x429370:c.instructions+=4;goto B429370;
case 0x429371:c.instructions+=3;goto B429371;
case 0x429372:c.instructions+=2;goto B429372;
case 0x429376:c.instructions+=1;goto B429376;
case 0x42937b:goto L42937b;
case 0x42937f:goto L42937f;
case 0x429383:c.instructions+=5;goto B429383;
case 0x429387:c.instructions+=4;goto B429387;
case 0x429389:c.instructions+=3;goto B429389;
case 0x42938d:c.instructions+=2;goto B42938d;
case 0x429391:c.instructions+=1;goto B429391;
case 0x429397:goto L429397;
case 0x429399:c.instructions+=4;goto B429399;
case 0x42939f:c.instructions+=3;goto B42939f;
case 0x4293a3:c.instructions+=2;goto B4293a3;
case 0x4293a7:c.instructions+=1;goto B4293a7;
case 0x4293ad:goto L4293ad;
case 0x4293b1:c.instructions+=3;goto B4293b1;
case 0x4293b2:c.instructions+=2;goto B4293b2;
case 0x4293b6:c.instructions+=1;goto B4293b6;
case 0x4293bb:goto L4293bb;
case 0x4293bf:c.instructions+=6;goto B4293bf;
case 0x4293c0:c.instructions+=5;goto B4293c0;
case 0x4293c1:c.instructions+=4;goto B4293c1;
case 0x4293c2:c.instructions+=3;goto B4293c2;
case 0x4293c4:c.instructions+=2;goto B4293c4;
case 0x4293c5:c.instructions+=1;goto B4293c5;
case 0x4293c8:goto L4293c8;
case 0x4293cc:c.instructions+=2;goto B4293cc;
case 0x4293ce:c.instructions+=1;goto B4293ce;
case 0x4293d0:goto L4293d0;
case 0x4293d4:c.instructions+=3;goto B4293d4;
case 0x4293d5:c.instructions+=2;goto B4293d5;
case 0x4293d9:c.instructions+=1;goto B4293d9;
case 0x4293de:goto L4293de;
case 0x4293e2:c.instructions+=6;goto B4293e2;
case 0x4293e3:c.instructions+=5;goto B4293e3;
case 0x4293e4:c.instructions+=4;goto B4293e4;
case 0x4293e5:c.instructions+=3;goto B4293e5;
case 0x4293e7:c.instructions+=2;goto B4293e7;
case 0x4293e8:c.instructions+=1;goto B4293e8;
case 0x4293eb:goto L4293eb;
case 0x4293ed:c.instructions+=11;goto B4293ed;
case 0x4293f0:c.instructions+=10;goto B4293f0;
case 0x4293f4:c.instructions+=9;goto B4293f4;
case 0x4293f8:c.instructions+=8;goto B4293f8;
case 0x429400:c.instructions+=7;goto B429400;
case 0x429408:c.instructions+=6;goto B429408;
case 0x42940c:c.instructions+=5;goto B42940c;
case 0x429410:c.instructions+=4;goto B429410;
case 0x429414:c.instructions+=3;goto B429414;
case 0x429418:c.instructions+=2;goto B429418;
case 0x42941c:c.instructions+=1;goto B42941c;
case 0x429421:goto L429421;
case 0x429428:c.instructions+=1;goto B429428;
case 0x42942d:goto L42942d;
case 0x429431:c.instructions+=2;goto B429431;
case 0x429433:c.instructions+=1;goto B429433;
case 0x429439:goto L429439;
case 0x42943d:c.instructions+=2;goto B42943d;
case 0x429440:c.instructions+=1;goto B429440;
case 0x429442:goto L429442;
case 0x429447:goto L429447;
case 0x429449:c.instructions+=1;goto B429449;
case 0x42944f:goto L42944f;
case 0x429453:c.instructions+=3;goto B429453;
case 0x429456:c.instructions+=2;goto B429456;
case 0x429457:c.instructions+=1;goto B429457;
case 0x42945c:goto L42945c;
case 0x429460:c.instructions+=9;goto B429460;
case 0x429462:c.instructions+=8;goto B429462;
case 0x429465:c.instructions+=7;goto B429465;
case 0x429466:c.instructions+=6;goto B429466;
case 0x429469:c.instructions+=5;goto B429469;
case 0x42946b:c.instructions+=4;goto B42946b;
case 0x42946f:c.instructions+=3;goto B42946f;
case 0x429475:c.instructions+=2;goto B429475;
case 0x429479:c.instructions+=1;goto B429479;
case 0x42947e:goto L42947e;
case 0x429482:c.instructions+=4;goto B429482;
case 0x429483:c.instructions+=3;goto B429483;
case 0x429485:c.instructions+=2;goto B429485;
case 0x429489:c.instructions+=1;goto B429489;
case 0x42948e:goto L42948e;
case 0x429492:c.instructions+=4;goto B429492;
case 0x429493:c.instructions+=3;goto B429493;
case 0x429495:c.instructions+=2;goto B429495;
case 0x429499:c.instructions+=1;goto B429499;
case 0x42949e:goto L42949e;
case 0x4294a2:c.instructions+=4;goto B4294a2;
case 0x4294a5:c.instructions+=3;goto B4294a5;
case 0x4294a7:c.instructions+=2;goto B4294a7;
case 0x4294aa:c.instructions+=1;goto B4294aa;
case 0x4294ac:goto L4294ac;
case 0x4294af:c.instructions+=4;goto B4294af;
case 0x4294b3:c.instructions+=3;goto B4294b3;
case 0x4294b4:c.instructions+=2;goto B4294b4;
case 0x4294b5:c.instructions+=1;goto B4294b5;
case 0x4294ba:goto L4294ba;
case 0x4294be:c.instructions+=1;goto B4294be;
case 0x4294c0:goto L4294c0;
case 0x4294c3:c.instructions+=4;goto B4294c3;
case 0x4294c7:c.instructions+=3;goto B4294c7;
case 0x4294c8:c.instructions+=2;goto B4294c8;
case 0x4294c9:c.instructions+=1;goto B4294c9;
case 0x4294ce:goto L4294ce;
case 0x4294d2:goto L4294d2;
case 0x4294d5:c.instructions+=3;goto B4294d5;
case 0x4294d6:c.instructions+=2;goto B4294d6;
case 0x4294d8:c.instructions+=1;goto B4294d8;
case 0x4294dd:goto L4294dd;
case 0x4294e1:c.instructions+=4;goto B4294e1;
case 0x4294e2:c.instructions+=3;goto B4294e2;
case 0x4294e4:c.instructions+=2;goto B4294e4;
case 0x4294e8:c.instructions+=1;goto B4294e8;
case 0x4294ed:goto L4294ed;
case 0x4294f1:c.instructions+=4;goto B4294f1;
case 0x4294f5:c.instructions+=3;goto B4294f5;
case 0x4294f6:c.instructions+=2;goto B4294f6;
case 0x4294fa:c.instructions+=1;goto B4294fa;
case 0x4294ff:goto L4294ff;
case 0x429502:c.instructions+=4;goto B429502;
case 0x429503:c.instructions+=3;goto B429503;
case 0x429505:c.instructions+=2;goto B429505;
case 0x429509:c.instructions+=1;goto B429509;
case 0x42950e:goto L42950e;
case 0x429511:c.instructions+=9;goto B429511;
case 0x429519:c.instructions+=8;goto B429519;
case 0x429521:c.instructions+=7;goto B429521;
case 0x429525:c.instructions+=6;goto B429525;
case 0x429527:c.instructions+=5;goto B429527;
case 0x429529:c.instructions+=4;goto B429529;
case 0x42952f:c.instructions+=3;goto B42952f;
case 0x429531:c.instructions+=2;goto B429531;
case 0x429534:c.instructions+=1;goto B429534;
case 0x429536:goto L429536;
case 0x42953c:c.instructions+=3;goto B42953c;
case 0x42953e:c.instructions+=2;goto B42953e;
case 0x429541:c.instructions+=1;goto B429541;
case 0x429543:goto L429543;
case 0x429545:goto L429545;
case 0x429546:c.instructions+=3;goto B429546;
case 0x429548:c.instructions+=2;goto B429548;
case 0x42954a:c.instructions+=1;goto B42954a;
case 0x42954f:goto L42954f;
case 0x429552:c.instructions+=3;goto B429552;
case 0x429554:c.instructions+=2;goto B429554;
case 0x429557:c.instructions+=1;goto B429557;
case 0x429559:goto L429559;
case 0x429561:c.instructions+=1;goto B429561;
case 0x429569:goto L429569;
case 0x42956d:c.instructions+=7;goto B42956d;
case 0x429570:c.instructions+=6;goto B429570;
case 0x429573:c.instructions+=5;goto B429573;
case 0x429575:c.instructions+=4;goto B429575;
case 0x429577:c.instructions+=3;goto B429577;
case 0x429579:c.instructions+=2;goto B429579;
case 0x42957d:c.instructions+=1;goto B42957d;
case 0x42957f:goto L42957f;
case 0x429580:goto L429580;
case 0x429582:c.instructions+=1;goto B429582;
case 0x429584:goto L429584;
case 0x429588:c.instructions+=2;goto B429588;
case 0x429589:c.instructions+=1;goto B429589;
case 0x42958e:goto L42958e;
case 0x429590:c.instructions+=1;goto B429590;
case 0x429595:goto L429595;
case 0x429599:c.instructions+=4;goto B429599;
case 0x42959d:c.instructions+=3;goto B42959d;
case 0x42959e:c.instructions+=2;goto B42959e;
case 0x4295a0:c.instructions+=1;goto B4295a0;
case 0x4295a2:goto L4295a2;
case 0x4295a4:c.instructions+=1;goto B4295a4;
case 0x4295a6:goto L4295a6;
case 0x4295aa:c.instructions+=3;goto B4295aa;
case 0x4295ab:c.instructions+=2;goto B4295ab;
case 0x4295ad:c.instructions+=1;goto B4295ad;
case 0x4295b2:goto L4295b2;
case 0x4295b6:c.instructions+=5;goto B4295b6;
case 0x4295b7:c.instructions+=4;goto B4295b7;
case 0x4295b9:c.instructions+=3;goto B4295b9;
case 0x4295bb:c.instructions+=2;goto B4295bb;
case 0x4295bf:c.instructions+=1;goto B4295bf;
case 0x4295c4:goto L4295c4;
case 0x4295c8:c.instructions+=8;goto B4295c8;
case 0x4295ca:c.instructions+=7;goto B4295ca;
case 0x4295ce:c.instructions+=6;goto B4295ce;
case 0x4295d0:c.instructions+=5;goto B4295d0;
case 0x4295d2:c.instructions+=4;goto B4295d2;
case 0x4295d8:c.instructions+=3;goto B4295d8;
case 0x4295da:c.instructions+=2;goto B4295da;
case 0x4295dd:c.instructions+=1;goto B4295dd;
case 0x4295df:goto L4295df;
case 0x4295e3:c.instructions+=3;goto B4295e3;
case 0x4295e7:c.instructions+=2;goto B4295e7;
case 0x4295eb:c.instructions+=1;goto B4295eb;
case 0x4295ed:goto L4295ed;
case 0x4295ef:goto L4295ef;
case 0x4295f2:c.instructions+=2;goto B4295f2;
case 0x4295f4:c.instructions+=1;goto B4295f4;
case 0x4295fa:goto L4295fa;
case 0x4295fe:c.instructions+=4;goto B4295fe;
case 0x429601:c.instructions+=3;goto B429601;
case 0x429604:c.instructions+=2;goto B429604;
case 0x429606:c.instructions+=1;goto B429606;
case 0x42960c:goto L42960c;
case 0x42960f:c.instructions+=4;goto B42960f;
case 0x429611:c.instructions+=3;goto B429611;
case 0x429618:c.instructions+=2;goto B429618;
case 0x429619:c.instructions+=1;goto B429619;
case 0x429620:goto L429620;
case 0x429622:c.instructions+=2;goto B429622;
case 0x429624:c.instructions+=1;goto B429624;
case 0x429626:goto L429626;
case 0x429629:c.instructions+=1;goto B429629;
case 0x42962b:goto L42962b;
case 0x42962e:c.instructions+=2;goto B42962e;
case 0x429632:c.instructions+=1;goto B429632;
case 0x429634:goto L429634;
case 0x429637:c.instructions+=1;goto B429637;
case 0x429639:goto L429639;
case 0x42963c:c.instructions+=1;goto B42963c;
case 0x42963e:goto L42963e;
case 0x429642:c.instructions+=2;goto B429642;
case 0x429646:c.instructions+=1;goto B429646;
case 0x429648:goto L429648;
case 0x429650:goto L429650;
case 0x429652:c.instructions+=1;goto B429652;
case 0x429654:goto L429654;
case 0x429657:c.instructions+=1;goto B429657;
case 0x429659:goto L429659;
case 0x42965c:c.instructions+=1;goto B42965c;
case 0x42965e:goto L42965e;
case 0x429661:c.instructions+=1;goto B429661;
case 0x429663:goto L429663;
case 0x429666:c.instructions+=1;goto B429666;
case 0x429668:goto L429668;
case 0x42966c:c.instructions+=1;goto B42966c;
case 0x42966e:goto L42966e;
case 0x429674:goto L429674;
case 0x429678:c.instructions+=4;goto B429678;
case 0x42967c:c.instructions+=3;goto B42967c;
case 0x42967e:c.instructions+=2;goto B42967e;
case 0x429681:c.instructions+=1;goto B429681;
case 0x429683:goto L429683;
case 0x429687:c.instructions+=1;goto B429687;
case 0x429689:goto L429689;
case 0x42968d:goto L42968d;
case 0x42968f:c.instructions+=4;goto B42968f;
case 0x429691:c.instructions+=3;goto B429691;
case 0x429693:c.instructions+=2;goto B429693;
case 0x429696:c.instructions+=1;goto B429696;
case 0x429698:goto L429698;
case 0x42969a:c.instructions+=1;goto B42969a;
case 0x42969c:goto L42969c;
case 0x4296a0:c.instructions+=5;goto B4296a0;
case 0x4296a2:c.instructions+=4;goto B4296a2;
case 0x4296a4:c.instructions+=3;goto B4296a4;
case 0x4296a6:c.instructions+=2;goto B4296a6;
case 0x4296a9:c.instructions+=1;goto B4296a9;
case 0x4296ab:goto L4296ab;
case 0x4296b3:goto L4296b3;
case 0x4296b7:c.instructions+=4;goto B4296b7;
case 0x4296bb:c.instructions+=3;goto B4296bb;
case 0x4296bd:c.instructions+=2;goto B4296bd;
case 0x4296c0:c.instructions+=1;goto B4296c0;
case 0x4296c2:goto L4296c2;
case 0x4296c6:c.instructions+=2;goto B4296c6;
case 0x4296ca:c.instructions+=1;goto B4296ca;
case 0x4296cc:goto L4296cc;
case 0x4296d0:c.instructions+=1;goto B4296d0;
case 0x4296d4:goto L4296d4;
case 0x4296d8:c.instructions+=3;goto B4296d8;
case 0x4296da:c.instructions+=2;goto B4296da;
case 0x4296dd:c.instructions+=1;goto B4296dd;
case 0x4296df:goto L4296df;
case 0x4296e1:c.instructions+=1;goto B4296e1;
case 0x4296e5:goto L4296e5;
case 0x4296e9:c.instructions+=5;goto B4296e9;
case 0x4296eb:c.instructions+=4;goto B4296eb;
case 0x4296ed:c.instructions+=3;goto B4296ed;
case 0x4296ef:c.instructions+=2;goto B4296ef;
case 0x4296f2:c.instructions+=1;goto B4296f2;
case 0x4296f4:goto L4296f4;
case 0x4296fc:goto L4296fc;
case 0x4296ff:c.instructions+=2;goto B4296ff;
case 0x429700:c.instructions+=1;goto B429700;
case 0x429706:goto L429706;
case 0x429708:goto L429708;
case 0x42970b:goto L42970b;
case 0x429711:c.instructions+=13;goto B429711;
case 0x429715:c.instructions+=12;goto B429715;
case 0x42971b:c.instructions+=11;goto B42971b;
case 0x42971f:c.instructions+=10;goto B42971f;
case 0x429725:c.instructions+=9;goto B429725;
case 0x429729:c.instructions+=8;goto B429729;
case 0x42972b:c.instructions+=7;goto B42972b;
case 0x42972f:c.instructions+=6;goto B42972f;
case 0x429733:c.instructions+=5;goto B429733;
case 0x429735:c.instructions+=4;goto B429735;
case 0x42973b:c.instructions+=3;goto B42973b;
case 0x42973d:c.instructions+=2;goto B42973d;
case 0x429740:c.instructions+=1;goto B429740;
case 0x429742:goto L429742;
case 0x42974a:goto L42974a;
case 0x42974e:c.instructions+=9;goto B42974e;
case 0x429750:c.instructions+=8;goto B429750;
case 0x429754:c.instructions+=7;goto B429754;
case 0x429758:c.instructions+=6;goto B429758;
case 0x42975c:c.instructions+=5;goto B42975c;
case 0x429762:c.instructions+=4;goto B429762;
case 0x429766:c.instructions+=3;goto B429766;
case 0x429768:c.instructions+=2;goto B429768;
case 0x42976b:c.instructions+=1;goto B42976b;
case 0x42976d:goto L42976d;
case 0x429775:goto L429775;
case 0x429779:c.instructions+=7;goto B429779;
case 0x42977f:c.instructions+=6;goto B42977f;
case 0x429781:c.instructions+=5;goto B429781;
case 0x429785:c.instructions+=4;goto B429785;
case 0x42978b:c.instructions+=3;goto B42978b;
case 0x42978d:c.instructions+=2;goto B42978d;
case 0x429790:c.instructions+=1;goto B429790;
case 0x429792:goto L429792;
case 0x429793:c.instructions+=4;goto B429793;
case 0x429797:c.instructions+=3;goto B429797;
case 0x429798:c.instructions+=2;goto B429798;
case 0x42979c:c.instructions+=1;goto B42979c;
case 0x4297a1:goto L4297a1;
case 0x4297a5:c.instructions+=7;goto B4297a5;
case 0x4297ab:c.instructions+=6;goto B4297ab;
case 0x4297ad:c.instructions+=5;goto B4297ad;
case 0x4297b1:c.instructions+=4;goto B4297b1;
case 0x4297b7:c.instructions+=3;goto B4297b7;
case 0x4297b9:c.instructions+=2;goto B4297b9;
case 0x4297bc:c.instructions+=1;goto B4297bc;
case 0x4297be:goto L4297be;
case 0x4297bf:c.instructions+=4;goto B4297bf;
case 0x4297c6:c.instructions+=3;goto B4297c6;
case 0x4297c7:c.instructions+=2;goto B4297c7;
case 0x4297cb:c.instructions+=1;goto B4297cb;
case 0x4297d0:goto L4297d0;
case 0x4297d4:c.instructions+=8;goto B4297d4;
case 0x4297d6:c.instructions+=7;goto B4297d6;
case 0x4297dc:c.instructions+=6;goto B4297dc;
case 0x4297e0:c.instructions+=5;goto B4297e0;
case 0x4297e2:c.instructions+=4;goto B4297e2;
case 0x4297e8:c.instructions+=3;goto B4297e8;
case 0x4297eb:c.instructions+=2;goto B4297eb;
case 0x4297ed:c.instructions+=1;goto B4297ed;
case 0x4297ef:goto L4297ef;
case 0x4297f2:c.instructions+=1;goto B4297f2;
case 0x4297f4:goto L4297f4;
case 0x4297f9:c.instructions+=1;goto B4297f9;
case 0x4297fb:goto L4297fb;
case 0x4297fd:goto L4297fd;
case 0x4297ff:c.instructions+=1;goto B4297ff;
case 0x429802:goto L429802;
case 0x429804:c.instructions+=1;goto B429804;
case 0x429806:goto L429806;
case 0x42980a:c.instructions+=3;goto B42980a;
case 0x42980b:c.instructions+=2;goto B42980b;
case 0x42980f:c.instructions+=1;goto B42980f;
case 0x429814:goto L429814;
case 0x42981b:c.instructions+=1;goto B42981b;
case 0x42981c:goto L42981c;
case 0x42981f:c.instructions+=1;goto B42981f;
case 0x429824:goto L429824;
case 0x429828:c.instructions+=6;goto B429828;
case 0x429829:c.instructions+=5;goto B429829;
case 0x42982a:c.instructions+=4;goto B42982a;
case 0x42982b:c.instructions+=3;goto B42982b;
case 0x42982d:c.instructions+=2;goto B42982d;
case 0x42982e:c.instructions+=1;goto B42982e;
case 0x429831:goto L429831;
case 0x429834:c.instructions+=1;goto B429834;
case 0x429836:goto L429836;
case 0x42983a:c.instructions+=4;goto B42983a;
case 0x429840:c.instructions+=3;goto B429840;
case 0x429842:c.instructions+=2;goto B429842;
case 0x429845:c.instructions+=1;goto B429845;
case 0x429847:goto L429847;
case 0x42984c:c.instructions+=3;goto B42984c;
case 0x42984e:c.instructions+=2;goto B42984e;
case 0x429851:c.instructions+=1;goto B429851;
case 0x429853:goto L429853;
case 0x429855:c.instructions+=3;goto B429855;
case 0x429857:c.instructions+=2;goto B429857;
case 0x42985a:c.instructions+=1;goto B42985a;
case 0x42985c:goto L42985c;
case 0x429860:c.instructions+=4;goto B429860;
case 0x429864:c.instructions+=3;goto B429864;
case 0x429866:c.instructions+=2;goto B429866;
case 0x429869:c.instructions+=1;goto B429869;
case 0x42986b:goto L42986b;
case 0x42986d:c.instructions+=1;goto B42986d;
case 0x42986f:goto L42986f;
case 0x429871:goto L429871;
case 0x429873:c.instructions+=1;goto B429873;
case 0x429876:goto L429876;
case 0x429878:c.instructions+=1;goto B429878;
case 0x42987a:goto L42987a;
case 0x42987e:c.instructions+=3;goto B42987e;
case 0x429882:c.instructions+=2;goto B429882;
case 0x429883:c.instructions+=1;goto B429883;
case 0x429888:goto L429888;
case 0x42988c:c.instructions+=2;goto B42988c;
case 0x42988d:c.instructions+=1;goto B42988d;
case 0x429890:goto L429890;
case 0x429893:c.instructions+=16;goto B429893;
case 0x429894:c.instructions+=15;goto B429894;
case 0x429895:c.instructions+=14;goto B429895;
case 0x429899:c.instructions+=13;goto B429899;
case 0x42989a:c.instructions+=12;goto B42989a;
case 0x42989c:c.instructions+=11;goto B42989c;
case 0x4298a0:c.instructions+=10;goto B4298a0;
case 0x4298a7:c.instructions+=9;goto B4298a7;
case 0x4298a9:c.instructions+=8;goto B4298a9;
case 0x4298aa:c.instructions+=7;goto B4298aa;
case 0x4298ad:c.instructions+=6;goto B4298ad;
case 0x4298b0:c.instructions+=5;goto B4298b0;
case 0x4298b1:c.instructions+=4;goto B4298b1;
case 0x4298b5:c.instructions+=3;goto B4298b5;
case 0x4298b6:c.instructions+=2;goto B4298b6;
case 0x4298b8:c.instructions+=1;goto B4298b8;
case 0x4298bd:goto L4298bd;
case 0x4298be:c.instructions+=3;goto B4298be;
case 0x4298c0:c.instructions+=2;goto B4298c0;
case 0x4298c4:c.instructions+=1;goto B4298c4;
case 0x4298c9:goto L4298c9;
case 0x4298ca:c.instructions+=3;goto B4298ca;
case 0x4298ce:c.instructions+=2;goto B4298ce;
case 0x4298d0:c.instructions+=1;goto B4298d0;
case 0x4298d5:goto L4298d5;
case 0x4298d9:c.instructions+=19;goto B4298d9;
case 0x4298dd:c.instructions+=18;goto B4298dd;
case 0x4298e1:c.instructions+=17;goto B4298e1;
case 0x4298e4:c.instructions+=16;goto B4298e4;
case 0x4298e7:c.instructions+=15;goto B4298e7;
case 0x4298ed:c.instructions+=14;goto B4298ed;
case 0x4298f1:c.instructions+=13;goto B4298f1;
case 0x4298f4:c.instructions+=12;goto B4298f4;
case 0x4298f8:c.instructions+=11;goto B4298f8;
case 0x4298fc:c.instructions+=10;goto B4298fc;
case 0x4298fe:c.instructions+=9;goto B4298fe;
case 0x429902:c.instructions+=8;goto B429902;
case 0x429906:c.instructions+=7;goto B429906;
case 0x429908:c.instructions+=6;goto B429908;
case 0x42990a:c.instructions+=5;goto B42990a;
case 0x42990c:c.instructions+=4;goto B42990c;
case 0x42990e:c.instructions+=3;goto B42990e;
case 0x429910:c.instructions+=2;goto B429910;
case 0x429913:c.instructions+=1;goto B429913;
case 0x429915:goto L429915;
case 0x429919:c.instructions+=2;goto B429919;
case 0x42991c:c.instructions+=1;goto B42991c;
case 0x42991e:goto L42991e;
case 0x429921:c.instructions+=1;goto B429921;
case 0x429923:goto L429923;
case 0x429927:c.instructions+=4;goto B429927;
case 0x42992d:c.instructions+=3;goto B42992d;
case 0x42992f:c.instructions+=2;goto B42992f;
case 0x429932:c.instructions+=1;goto B429932;
case 0x429934:goto L429934;
case 0x429938:c.instructions+=4;goto B429938;
case 0x42993e:c.instructions+=3;goto B42993e;
case 0x429940:c.instructions+=2;goto B429940;
case 0x429943:c.instructions+=1;goto B429943;
case 0x429945:goto L429945;
case 0x429947:c.instructions+=3;goto B429947;
case 0x42994b:c.instructions+=2;goto B42994b;
case 0x42994f:c.instructions+=1;goto B42994f;
case 0x429951:goto L429951;
case 0x429954:c.instructions+=1;goto B429954;
case 0x429956:goto L429956;
case 0x429958:goto L429958;
case 0x42995a:c.instructions+=3;goto B42995a;
case 0x42995e:c.instructions+=2;goto B42995e;
case 0x429962:c.instructions+=1;goto B429962;
case 0x429964:goto L429964;
case 0x429966:c.instructions+=1;goto B429966;
case 0x42996a:goto L42996a;
case 0x42996d:c.instructions+=3;goto B42996d;
case 0x429973:c.instructions+=2;goto B429973;
case 0x429977:c.instructions+=1;goto B429977;
case 0x429979:goto L429979;
case 0x42997b:c.instructions+=3;goto B42997b;
case 0x42997e:c.instructions+=2;goto B42997e;
case 0x429981:c.instructions+=1;goto B429981;
case 0x429983:goto L429983;
case 0x429985:goto L429985;
case 0x429989:c.instructions+=13;goto B429989;
case 0x42998d:c.instructions+=12;goto B42998d;
case 0x42998e:c.instructions+=11;goto B42998e;
case 0x429992:c.instructions+=10;goto B429992;
case 0x429996:c.instructions+=9;goto B429996;
case 0x429997:c.instructions+=8;goto B429997;
case 0x42999b:c.instructions+=7;goto B42999b;
case 0x42999c:c.instructions+=6;goto B42999c;
case 0x42999d:c.instructions+=5;goto B42999d;
case 0x42999e:c.instructions+=4;goto B42999e;
case 0x4299a0:c.instructions+=3;goto B4299a0;
case 0x4299a8:c.instructions+=2;goto B4299a8;
case 0x4299b0:c.instructions+=1;goto B4299b0;
case 0x4299b5:goto L4299b5;
case 0x4299b6:c.instructions+=5;goto B4299b6;
case 0x4299b7:c.instructions+=4;goto B4299b7;
case 0x4299b8:c.instructions+=3;goto B4299b8;
case 0x4299b9:c.instructions+=2;goto B4299b9;
case 0x4299bc:c.instructions+=1;goto B4299bc;
case 0x4299c0:goto L4299c0;
case 0x4299c2:c.instructions+=13;goto B4299c2;
case 0x4299c7:c.instructions+=12;goto B4299c7;
case 0x4299cd:c.instructions+=11;goto B4299cd;
case 0x4299ce:c.instructions+=10;goto B4299ce;
case 0x4299d5:c.instructions+=9;goto B4299d5;
case 0x4299d6:c.instructions+=8;goto B4299d6;
case 0x4299d7:c.instructions+=7;goto B4299d7;
case 0x4299d8:c.instructions+=6;goto B4299d8;
case 0x4299d9:c.instructions+=5;goto B4299d9;
case 0x4299dd:c.instructions+=4;goto B4299dd;
case 0x4299df:c.instructions+=3;goto B4299df;
case 0x4299e0:c.instructions+=2;goto B4299e0;
case 0x4299e4:c.instructions+=1;goto B4299e4;
case 0x4299e9:goto L4299e9;
case 0x4299eb:c.instructions+=4;goto B4299eb;
case 0x4299f0:c.instructions+=3;goto B4299f0;
case 0x4299f4:c.instructions+=2;goto B4299f4;
case 0x4299fa:c.instructions+=1;goto B4299fa;
case 0x4299ff:goto L4299ff;
case 0x429a02:c.instructions+=4;goto B429a02;
case 0x429a06:c.instructions+=3;goto B429a06;
case 0x429a08:c.instructions+=2;goto B429a08;
case 0x429a0d:c.instructions+=1;goto B429a0d;
case 0x429a0f:goto L429a0f;
case 0x429a10:c.instructions+=2;goto B429a10;
case 0x429a12:c.instructions+=1;goto B429a12;
case 0x429a17:goto L429a17;
case 0x429a19:goto L429a19;
case 0x429a1b:goto L429a1b;
case 0x429a1f:c.instructions+=15;goto B429a1f;
case 0x429a22:c.instructions+=14;goto B429a22;
case 0x429a27:c.instructions+=13;goto B429a27;
case 0x429a2d:c.instructions+=12;goto B429a2d;
case 0x429a33:c.instructions+=11;goto B429a33;
case 0x429a39:c.instructions+=10;goto B429a39;
case 0x429a3f:c.instructions+=9;goto B429a3f;
case 0x429a45:c.instructions+=8;goto B429a45;
case 0x429a46:c.instructions+=7;goto B429a46;
case 0x429a50:c.instructions+=6;goto B429a50;
case 0x429a52:c.instructions+=5;goto B429a52;
case 0x429a53:c.instructions+=4;goto B429a53;
case 0x429a54:c.instructions+=3;goto B429a54;
case 0x429a5b:c.instructions+=2;goto B429a5b;
case 0x429a5e:c.instructions+=1;goto B429a5e;
case 0x429a70:goto L429a70;
case 0x429a71:c.instructions+=7;goto B429a71;
case 0x429a75:c.instructions+=6;goto B429a75;
case 0x429a76:c.instructions+=5;goto B429a76;
case 0x429a7b:c.instructions+=4;goto B429a7b;
case 0x429a7d:c.instructions+=3;goto B429a7d;
case 0x429a7f:c.instructions+=2;goto B429a7f;
case 0x429a81:c.instructions+=1;goto B429a81;
case 0x429a86:goto L429a86;
case 0x429a87:c.instructions+=2;goto B429a87;
case 0x429a89:c.instructions+=1;goto B429a89;
case 0x429a8e:goto L429a8e;
case 0x429a94:c.instructions+=3;goto B429a94;
case 0x429a95:c.instructions+=2;goto B429a95;
case 0x429a96:c.instructions+=1;goto B429a96;
case 0x429a9b:goto L429a9b;
case 0x429a9e:c.instructions+=4;goto B429a9e;
case 0x429aa4:c.instructions+=3;goto B429aa4;
case 0x429aa5:c.instructions+=2;goto B429aa5;
case 0x429aa7:c.instructions+=1;goto B429aa7;
case 0x429aac:goto L429aac;
case 0x429ab2:c.instructions+=3;goto B429ab2;
case 0x429ab3:c.instructions+=2;goto B429ab3;
case 0x429ab5:c.instructions+=1;goto B429ab5;
case 0x429aba:goto L429aba;
case 0x429ac0:c.instructions+=4;goto B429ac0;
case 0x429ac3:c.instructions+=3;goto B429ac3;
case 0x429ac4:c.instructions+=2;goto B429ac4;
case 0x429ac5:c.instructions+=1;goto B429ac5;
case 0x429aca:goto L429aca;
case 0x429ad0:c.instructions+=3;goto B429ad0;
case 0x429ad1:c.instructions+=2;goto B429ad1;
case 0x429ad3:c.instructions+=1;goto B429ad3;
case 0x429ad8:goto L429ad8;
case 0x429ade:c.instructions+=3;goto B429ade;
case 0x429adf:c.instructions+=2;goto B429adf;
case 0x429ae1:c.instructions+=1;goto B429ae1;
case 0x429ae6:goto L429ae6;
case 0x429aec:c.instructions+=3;goto B429aec;
case 0x429aed:c.instructions+=2;goto B429aed;
case 0x429aef:c.instructions+=1;goto B429aef;
case 0x429af4:goto L429af4;
case 0x429af6:c.instructions+=1;goto B429af6;
case 0x429afb:goto L429afb;
case 0x429afc:c.instructions+=2;goto B429afc;
case 0x429afd:c.instructions+=1;goto B429afd;
case 0x429b00:goto L429b00;
case 0x429b01:c.instructions+=3;goto B429b01;
case 0x429b02:c.instructions+=2;goto B429b02;
case 0x429b04:c.instructions+=1;goto B429b04;
case 0x429b09:goto L429b09;
case 0x429b0e:c.instructions+=2;goto B429b0e;
case 0x429b0f:c.instructions+=1;goto B429b0f;
case 0x429b14:goto L429b14;
case 0x429b16:c.instructions+=3;goto B429b16;
case 0x429b19:c.instructions+=2;goto B429b19;
case 0x429b1b:c.instructions+=1;goto B429b1b;
case 0x429b1d:goto L429b1d;
case 0x429b22:c.instructions+=2;goto B429b22;
case 0x429b24:c.instructions+=1;goto B429b24;
case 0x429b29:goto L429b29;
case 0x429b2d:c.instructions+=6;goto B429b2d;
case 0x429b30:c.instructions+=5;goto B429b30;
case 0x429b37:c.instructions+=4;goto B429b37;
case 0x429b3d:c.instructions+=3;goto B429b3d;
case 0x429b3f:c.instructions+=2;goto B429b3f;
case 0x429b45:c.instructions+=1;goto B429b45;
case 0x429b4a:goto L429b4a;
case 0x429b4b:c.instructions+=2;goto B429b4b;
case 0x429b4c:c.instructions+=1;goto B429b4c;
case 0x429b4f:goto L429b4f;
case 0x429b51:c.instructions+=3;goto B429b51;
case 0x429b53:c.instructions+=2;goto B429b53;
case 0x429b59:c.instructions+=1;goto B429b59;
case 0x429b5e:goto L429b5e;
case 0x429b5f:c.instructions+=2;goto B429b5f;
case 0x429b60:c.instructions+=1;goto B429b60;
case 0x429b70:goto L429b70;
case 0x429b71:c.instructions+=12;goto B429b71;
case 0x429b77:c.instructions+=11;goto B429b77;
case 0x429b78:c.instructions+=10;goto B429b78;
case 0x429b7e:c.instructions+=9;goto B429b7e;
case 0x429b7f:c.instructions+=8;goto B429b7f;
case 0x429b81:c.instructions+=7;goto B429b81;
case 0x429b84:c.instructions+=6;goto B429b84;
case 0x429b85:c.instructions+=5;goto B429b85;
case 0x429b88:c.instructions+=4;goto B429b88;
case 0x429b8a:c.instructions+=3;goto B429b8a;
case 0x429b8d:c.instructions+=2;goto B429b8d;
case 0x429b91:c.instructions+=1;goto B429b91;
case 0x429b97:goto L429b97;
case 0x429b9a:c.instructions+=1;goto B429b9a;
case 0x429b9c:goto L429b9c;
case 0x429b9f:c.instructions+=2;goto B429b9f;
case 0x429ba4:c.instructions+=1;goto B429ba4;
case 0x429baa:goto L429baa;
case 0x429bad:c.instructions+=2;goto B429bad;
case 0x429bb2:c.instructions+=1;goto B429bb2;
case 0x429bb8:goto L429bb8;
case 0x429bba:c.instructions+=2;goto B429bba;
case 0x429bbc:c.instructions+=1;goto B429bbc;
case 0x429bc1:goto L429bc1;
case 0x429bc3:c.instructions+=2;goto B429bc3;
case 0x429bc5:c.instructions+=1;goto B429bc5;
case 0x429bca:goto L429bca;
case 0x429bcf:c.instructions+=2;goto B429bcf;
case 0x429bd1:c.instructions+=1;goto B429bd1;
case 0x429bd6:goto L429bd6;
case 0x429bdb:c.instructions+=31;goto B429bdb;
case 0x429bde:c.instructions+=30;goto B429bde;
case 0x429be2:c.instructions+=29;goto B429be2;
case 0x429be4:c.instructions+=28;goto B429be4;
case 0x429bea:c.instructions+=27;goto B429bea;
case 0x429bed:c.instructions+=26;goto B429bed;
case 0x429bf0:c.instructions+=25;goto B429bf0;
case 0x429bf4:c.instructions+=24;goto B429bf4;
case 0x429bf7:c.instructions+=23;goto B429bf7;
case 0x429bfa:c.instructions+=22;goto B429bfa;
case 0x429bfc:c.instructions+=21;goto B429bfc;
case 0x429c00:c.instructions+=20;goto B429c00;
case 0x429c03:c.instructions+=19;goto B429c03;
case 0x429c07:c.instructions+=18;goto B429c07;
case 0x429c0a:c.instructions+=17;goto B429c0a;
case 0x429c0d:c.instructions+=16;goto B429c0d;
case 0x429c10:c.instructions+=15;goto B429c10;
case 0x429c14:c.instructions+=14;goto B429c14;
case 0x429c1a:c.instructions+=13;goto B429c1a;
case 0x429c1d:c.instructions+=12;goto B429c1d;
case 0x429c20:c.instructions+=11;goto B429c20;
case 0x429c24:c.instructions+=10;goto B429c24;
case 0x429c2a:c.instructions+=9;goto B429c2a;
case 0x429c2d:c.instructions+=8;goto B429c2d;
case 0x429c33:c.instructions+=7;goto B429c33;
case 0x429c37:c.instructions+=6;goto B429c37;
case 0x429c3d:c.instructions+=5;goto B429c3d;
case 0x429c40:c.instructions+=4;goto B429c40;
case 0x429c46:c.instructions+=3;goto B429c46;
case 0x429c4a:c.instructions+=2;goto B429c4a;
case 0x429c50:c.instructions+=1;goto B429c50;
case 0x429c55:goto L429c55;
case 0x429c57:c.instructions+=1;goto B429c57;
case 0x429c5c:goto L429c5c;
case 0x429c60:c.instructions+=3;goto B429c60;
case 0x429c61:c.instructions+=2;goto B429c61;
case 0x429c63:c.instructions+=1;goto B429c63;
case 0x429c68:goto L429c68;
case 0x429c6c:c.instructions+=4;goto B429c6c;
case 0x429c6e:c.instructions+=3;goto B429c6e;
case 0x429c6f:c.instructions+=2;goto B429c6f;
case 0x429c71:c.instructions+=1;goto B429c71;
case 0x429c74:goto L429c74;
case 0x429c75:c.instructions+=4;goto B429c75;
case 0x429c76:c.instructions+=3;goto B429c76;
case 0x429c77:c.instructions+=2;goto B429c77;
case 0x429c78:c.instructions+=1;goto B429c78;
case 0x429c7b:goto L429c7b;
case 0x429c7e:c.instructions+=1;goto B429c7e;
case 0x429c80:goto L429c80;
case 0x429c82:c.instructions+=1;goto B429c82;
case 0x429c87:goto L429c87;
case 0x429c89:c.instructions+=2;goto B429c89;
case 0x429c8b:c.instructions+=1;goto B429c8b;
case 0x429c91:goto L429c91;
case 0x429c93:c.instructions+=1;goto B429c93;
case 0x429c98:goto L429c98;
case 0x429c9c:c.instructions+=4;goto B429c9c;
case 0x429c9e:c.instructions+=3;goto B429c9e;
case 0x429c9f:c.instructions+=2;goto B429c9f;
case 0x429ca1:c.instructions+=1;goto B429ca1;
case 0x429ca4:goto L429ca4;
case 0x429ca5:c.instructions+=4;goto B429ca5;
case 0x429ca6:c.instructions+=3;goto B429ca6;
case 0x429ca7:c.instructions+=2;goto B429ca7;
case 0x429ca8:c.instructions+=1;goto B429ca8;
case 0x429cab:goto L429cab;
case 0x429cae:c.instructions+=4;goto B429cae;
case 0x429cb1:c.instructions+=3;goto B429cb1;
case 0x429cb4:c.instructions+=2;goto B429cb4;
case 0x429cb8:c.instructions+=1;goto B429cb8;
case 0x429cba:goto L429cba;
case 0x429cbc:c.instructions+=2;goto B429cbc;
case 0x429cbe:c.instructions+=1;goto B429cbe;
case 0x429cc3:goto L429cc3;
case 0x429cc5:c.instructions+=2;goto B429cc5;
case 0x429cc7:c.instructions+=1;goto B429cc7;
case 0x429ccc:goto L429ccc;
case 0x429cd1:c.instructions+=2;goto B429cd1;
case 0x429cd3:c.instructions+=1;goto B429cd3;
case 0x429cd8:goto L429cd8;
case 0x429cdc:c.instructions+=4;goto B429cdc;
case 0x429cde:c.instructions+=3;goto B429cde;
case 0x429cdf:c.instructions+=2;goto B429cdf;
case 0x429ce1:c.instructions+=1;goto B429ce1;
case 0x429ce4:goto L429ce4;
case 0x429ce5:c.instructions+=4;goto B429ce5;
case 0x429ce6:c.instructions+=3;goto B429ce6;
case 0x429ce7:c.instructions+=2;goto B429ce7;
case 0x429ce8:c.instructions+=1;goto B429ce8;
case 0x429cf0:goto L429cf0;
case 0x429cf1:c.instructions+=7;goto B429cf1;
case 0x429cf5:c.instructions+=6;goto B429cf5;
case 0x429cf6:c.instructions+=5;goto B429cf6;
case 0x429cfb:c.instructions+=4;goto B429cfb;
case 0x429cfd:c.instructions+=3;goto B429cfd;
case 0x429cff:c.instructions+=2;goto B429cff;
case 0x429d01:c.instructions+=1;goto B429d01;
case 0x429d06:goto L429d06;
case 0x429d08:c.instructions+=6;goto B429d08;
case 0x429d0a:c.instructions+=5;goto B429d0a;
case 0x429d0c:c.instructions+=4;goto B429d0c;
case 0x429d12:c.instructions+=3;goto B429d12;
case 0x429d13:c.instructions+=2;goto B429d13;
case 0x429d15:c.instructions+=1;goto B429d15;
case 0x429d1a:goto L429d1a;
case 0x429d1c:c.instructions+=6;goto B429d1c;
case 0x429d1e:c.instructions+=5;goto B429d1e;
case 0x429d20:c.instructions+=4;goto B429d20;
case 0x429d26:c.instructions+=3;goto B429d26;
case 0x429d27:c.instructions+=2;goto B429d27;
case 0x429d29:c.instructions+=1;goto B429d29;
case 0x429d2e:goto L429d2e;
case 0x429d30:c.instructions+=6;goto B429d30;
case 0x429d32:c.instructions+=5;goto B429d32;
case 0x429d34:c.instructions+=4;goto B429d34;
case 0x429d3a:c.instructions+=3;goto B429d3a;
case 0x429d3b:c.instructions+=2;goto B429d3b;
case 0x429d3d:c.instructions+=1;goto B429d3d;
case 0x429d42:goto L429d42;
case 0x429d48:c.instructions+=3;goto B429d48;
case 0x429d49:c.instructions+=2;goto B429d49;
case 0x429d4b:c.instructions+=1;goto B429d4b;
case 0x429d50:goto L429d50;
case 0x429d56:c.instructions+=3;goto B429d56;
case 0x429d57:c.instructions+=2;goto B429d57;
case 0x429d59:c.instructions+=1;goto B429d59;
case 0x429d5e:goto L429d5e;
case 0x429d64:c.instructions+=3;goto B429d64;
case 0x429d65:c.instructions+=2;goto B429d65;
case 0x429d67:c.instructions+=1;goto B429d67;
case 0x429d6c:goto L429d6c;
case 0x429d72:c.instructions+=3;goto B429d72;
case 0x429d73:c.instructions+=2;goto B429d73;
case 0x429d74:c.instructions+=1;goto B429d74;
case 0x429d79:goto L429d79;
case 0x429d7c:c.instructions+=3;goto B429d7c;
case 0x429d7d:c.instructions+=2;goto B429d7d;
case 0x429d7f:c.instructions+=1;goto B429d7f;
case 0x429d84:goto L429d84;
case 0x429d86:c.instructions+=1;goto B429d86;
case 0x429d8b:goto L429d8b;
case 0x429d8c:c.instructions+=2;goto B429d8c;
case 0x429d8d:c.instructions+=1;goto B429d8d;
case 0x429d90:goto L429d90;
case 0x429d91:c.instructions+=4;goto B429d91;
case 0x429d92:c.instructions+=3;goto B429d92;
case 0x429d94:c.instructions+=2;goto B429d94;
case 0x429d99:c.instructions+=1;goto B429d99;
case 0x429d9e:goto L429d9e;
case 0x429da0:c.instructions+=1;goto B429da0;
case 0x429da6:goto L429da6;
case 0x429dac:c.instructions+=2;goto B429dac;
case 0x429dae:c.instructions+=1;goto B429dae;
case 0x429db4:goto L429db4;
case 0x429db5:c.instructions+=4;goto B429db5;
case 0x429db6:c.instructions+=3;goto B429db6;
case 0x429db7:c.instructions+=2;goto B429db7;
case 0x429db9:c.instructions+=1;goto B429db9;
case 0x429dbe:goto L429dbe;
case 0x429dc4:c.instructions+=9;goto B429dc4;
case 0x429dc8:c.instructions+=8;goto B429dc8;
case 0x429dcc:c.instructions+=7;goto B429dcc;
case 0x429dd0:c.instructions+=6;goto B429dd0;
case 0x429dd6:c.instructions+=5;goto B429dd6;
case 0x429dd9:c.instructions+=4;goto B429dd9;
case 0x429ddc:c.instructions+=3;goto B429ddc;
case 0x429de0:c.instructions+=2;goto B429de0;
case 0x429de4:c.instructions+=1;goto B429de4;
case 0x429de6:goto L429de6;
case 0x429dec:c.instructions+=9;goto B429dec;
case 0x429def:c.instructions+=8;goto B429def;
case 0x429df2:c.instructions+=7;goto B429df2;
case 0x429df7:c.instructions+=6;goto B429df7;
case 0x429df9:c.instructions+=5;goto B429df9;
case 0x429dfa:c.instructions+=4;goto B429dfa;
case 0x429dfd:c.instructions+=3;goto B429dfd;
case 0x429dff:c.instructions+=2;goto B429dff;
case 0x429e02:c.instructions+=1;goto B429e02;
case 0x429e08:goto L429e08;
case 0x429e0a:c.instructions+=2;goto B429e0a;
case 0x429e0c:c.instructions+=1;goto B429e0c;
case 0x429e12:goto L429e12;
case 0x429e14:c.instructions+=3;goto B429e14;
case 0x429e18:c.instructions+=2;goto B429e18;
case 0x429e1c:c.instructions+=1;goto B429e1c;
case 0x429e22:goto L429e22;
case 0x429e24:goto L429e24;
case 0x429e28:c.instructions+=4;goto B429e28;
case 0x429e2e:c.instructions+=3;goto B429e2e;
case 0x429e30:c.instructions+=2;goto B429e30;
case 0x429e33:c.instructions+=1;goto B429e33;
case 0x429e39:goto L429e39;
case 0x429e3d:c.instructions+=4;goto B429e3d;
case 0x429e3f:c.instructions+=3;goto B429e3f;
case 0x429e45:c.instructions+=2;goto B429e45;
case 0x429e4b:c.instructions+=1;goto B429e4b;
case 0x429e50:goto L429e50;
case 0x429e56:c.instructions+=3;goto B429e56;
case 0x429e58:c.instructions+=2;goto B429e58;
case 0x429e5a:c.instructions+=1;goto B429e5a;
case 0x429e60:goto L429e60;
case 0x429e65:goto L429e65;
case 0x429e68:c.instructions+=3;goto B429e68;
case 0x429e69:c.instructions+=2;goto B429e69;
case 0x429e6b:c.instructions+=1;goto B429e6b;
case 0x429e70:goto L429e70;
case 0x429e72:c.instructions+=2;goto B429e72;
case 0x429e74:c.instructions+=1;goto B429e74;
case 0x429e76:goto L429e76;
case 0x429e7b:goto L429e7b;
case 0x429e7e:c.instructions+=6;goto B429e7e;
case 0x429e80:c.instructions+=5;goto B429e80;
case 0x429e82:c.instructions+=4;goto B429e82;
case 0x429e84:c.instructions+=3;goto B429e84;
case 0x429e86:c.instructions+=2;goto B429e86;
case 0x429e88:c.instructions+=1;goto B429e88;
case 0x429e8b:goto L429e8b;
case 0x429e8d:c.instructions+=2;goto B429e8d;
case 0x429e94:c.instructions+=1;goto B429e94;
case 0x429e99:goto L429e99;
case 0x429e9a:c.instructions+=5;goto B429e9a;
case 0x429e9b:c.instructions+=4;goto B429e9b;
case 0x429e9c:c.instructions+=3;goto B429e9c;
case 0x429e9d:c.instructions+=2;goto B429e9d;
case 0x429e9e:c.instructions+=1;goto B429e9e;
case 0x429ea1:goto L429ea1;
case 0x429ea6:goto L429ea6;
case 0x429ea8:c.instructions+=2;goto B429ea8;
case 0x429eaa:c.instructions+=1;goto B429eaa;
case 0x429eac:goto L429eac;
case 0x429eb1:goto L429eb1;
case 0x429eb7:c.instructions+=10;goto B429eb7;
case 0x429eba:c.instructions+=9;goto B429eba;
case 0x429ebb:c.instructions+=8;goto B429ebb;
case 0x429ec2:c.instructions+=7;goto B429ec2;
case 0x429ec5:c.instructions+=6;goto B429ec5;
case 0x429ec8:c.instructions+=5;goto B429ec8;
case 0x429ec9:c.instructions+=4;goto B429ec9;
case 0x429ecf:c.instructions+=3;goto B429ecf;
case 0x429ed3:c.instructions+=2;goto B429ed3;
case 0x429ed6:c.instructions+=1;goto B429ed6;
case 0x429edb:goto L429edb;
case 0x429edd:c.instructions+=1;goto B429edd;
case 0x429edf:goto L429edf;
case 0x429ee6:c.instructions+=1;goto B429ee6;
case 0x429ee8:goto L429ee8;
case 0x429eee:c.instructions+=3;goto B429eee;
case 0x429eef:c.instructions+=2;goto B429eef;
case 0x429ef1:c.instructions+=1;goto B429ef1;
case 0x429ef6:goto L429ef6;
case 0x429ef8:c.instructions+=1;goto B429ef8;
case 0x429efa:goto L429efa;
case 0x429f01:goto L429f01;
case 0x429f07:c.instructions+=2;goto B429f07;
case 0x429f09:c.instructions+=1;goto B429f09;
case 0x429f0b:goto L429f0b;
case 0x429f0d:c.instructions+=1;goto B429f0d;
case 0x429f12:goto L429f12;
case 0x429f15:c.instructions+=6;goto B429f15;
case 0x429f17:c.instructions+=5;goto B429f17;
case 0x429f19:c.instructions+=4;goto B429f19;
case 0x429f1b:c.instructions+=3;goto B429f1b;
case 0x429f1d:c.instructions+=2;goto B429f1d;
case 0x429f1f:c.instructions+=1;goto B429f1f;
case 0x429f22:goto L429f22;
case 0x429f24:c.instructions+=1;goto B429f24;
case 0x429f29:goto L429f29;
case 0x429f2b:goto L429f2b;
case 0x429f30:goto L429f30;
case 0x429f33:c.instructions+=6;goto B429f33;
case 0x429f35:c.instructions+=5;goto B429f35;
case 0x429f37:c.instructions+=4;goto B429f37;
case 0x429f39:c.instructions+=3;goto B429f39;
case 0x429f3b:c.instructions+=2;goto B429f3b;
case 0x429f3d:c.instructions+=1;goto B429f3d;
case 0x429f40:goto L429f40;
case 0x429f42:c.instructions+=2;goto B429f42;
case 0x429f49:c.instructions+=1;goto B429f49;
case 0x429f4e:goto L429f4e;
case 0x429f4f:c.instructions+=5;goto B429f4f;
case 0x429f50:c.instructions+=4;goto B429f50;
case 0x429f51:c.instructions+=3;goto B429f51;
case 0x429f52:c.instructions+=2;goto B429f52;
case 0x429f53:c.instructions+=1;goto B429f53;
case 0x429f56:goto L429f56;
case 0x429f5c:c.instructions+=2;goto B429f5c;
case 0x429f5e:c.instructions+=1;goto B429f5e;
case 0x429f60:goto L429f60;
case 0x429f62:c.instructions+=2;goto B429f62;
case 0x429f64:c.instructions+=1;goto B429f64;
case 0x429f6a:goto L429f6a;
case 0x429f70:c.instructions+=4;goto B429f70;
case 0x429f73:c.instructions+=3;goto B429f73;
case 0x429f75:c.instructions+=2;goto B429f75;
case 0x429f7a:c.instructions+=1;goto B429f7a;
case 0x429f7c:goto L429f7c;
case 0x429f7d:c.instructions+=1;goto B429f7d;
case 0x429f82:goto L429f82;
case 0x429f88:c.instructions+=2;goto B429f88;
case 0x429f8a:c.instructions+=1;goto B429f8a;
case 0x429f8f:goto L429f8f;
case 0x429f91:c.instructions+=1;goto B429f91;
case 0x429f93:goto L429f93;
case 0x429f99:c.instructions+=1;goto B429f99;
case 0x429f9f:goto L429f9f;
case 0x429fa5:c.instructions+=6;goto B429fa5;
case 0x429fa7:c.instructions+=5;goto B429fa7;
case 0x429fa8:c.instructions+=4;goto B429fa8;
case 0x429fa9:c.instructions+=3;goto B429fa9;
case 0x429fac:c.instructions+=2;goto B429fac;
case 0x429fad:c.instructions+=1;goto B429fad;
case 0x429fb0:goto L429fb0;
case 0x429fb2:c.instructions+=2;goto B429fb2;
case 0x429fb8:c.instructions+=1;goto B429fb8;
case 0x429fba:goto L429fba;
case 0x429fbc:c.instructions+=3;goto B429fbc;
case 0x429fbe:c.instructions+=2;goto B429fbe;
case 0x429fc0:c.instructions+=1;goto B429fc0;
case 0x429fc2:goto L429fc2;
case 0x429fc4:goto L429fc4;
case 0x429fca:c.instructions+=2;goto B429fca;
case 0x429fcc:c.instructions+=1;goto B429fcc;
case 0x429fcf:goto L429fcf;
case 0x429fd1:goto L429fd1;
case 0x429fd3:c.instructions+=1;goto B429fd3;
case 0x429fd5:goto L429fd5;
case 0x429fdb:c.instructions+=2;goto B429fdb;
case 0x429fdd:c.instructions+=1;goto B429fdd;
case 0x429fdf:goto L429fdf;
case 0x429fe1:c.instructions+=3;goto B429fe1;
case 0x429fe4:c.instructions+=2;goto B429fe4;
case 0x429fe5:c.instructions+=1;goto B429fe5;
case 0x429fe8:goto L429fe8;
case 0x429fee:c.instructions+=2;goto B429fee;
case 0x429ff0:c.instructions+=1;goto B429ff0;
case 0x429ff2:goto L429ff2;
case 0x429ff4:c.instructions+=2;goto B429ff4;
case 0x429ff6:c.instructions+=1;goto B429ff6;
case 0x429ff8:goto L429ff8;
case 0x429ffe:c.instructions+=1;goto B429ffe;
default:missing_instruction(c.pc);}
B429001:L429001:{c.instructions+=23;NFSU2_TR(0x429001);
u8 U[16];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B429008:{NFSU2_TR(0x429008);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42900c:{NFSU2_TR(0x42900c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429010:{NFSU2_TR(0x429010);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B429012:{NFSU2_TR(0x429012);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B429016:{NFSU2_TR(0x429016);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429017:{NFSU2_TR(0x429017);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42901a:{NFSU2_TR(0x42901a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42901e:{NFSU2_TR(0x42901e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42901f:{NFSU2_TR(0x42901f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429023:{NFSU2_TR(0x429023);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B429027:{NFSU2_TR(0x429027);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42902b:{NFSU2_TR(0x42902b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42902f:{NFSU2_TR(0x42902f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429033:{NFSU2_TR(0x429033);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429036:{NFSU2_TR(0x429036);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429037:{NFSU2_TR(0x429037);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429038:{NFSU2_TR(0x429038);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429039:{NFSU2_TR(0x429039);
__builtin_memmove((R+4),(R+12),4);
}
B42903b:{NFSU2_TR(0x42903b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42903f:{NFSU2_TR(0x42903f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429047:{NFSU2_TR(0x429047);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42904f:{NFSU2_TR(0x42904f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429054ull));
TAIL_STATIC(0x428df0u,428);
}
B429054:L429054:{c.instructions+=2;NFSU2_TR(0x429054);
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
B429056:{NFSU2_TR(0x429056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429091;}}
}
B429058:L429058:{c.instructions+=5;NFSU2_TR(0x429058);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42905b:{NFSU2_TR(0x42905b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42905d:{NFSU2_TR(0x42905d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429061:{NFSU2_TR(0x429061);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429065:{NFSU2_TR(0x429065);
if(r1(R+518)){{goto L42909c;}}
}
B429067:L429067:{c.instructions+=2;NFSU2_TR(0x429067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42906c:{NFSU2_TR(0x42906c);
if(r1(R+518)){{goto L42909c;}}
}
B42906e:L42906e:{c.instructions+=9;NFSU2_TR(0x42906e);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B429073:{NFSU2_TR(0x429073);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B429076:{NFSU2_TR(0x429076);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42907a:{NFSU2_TR(0x42907a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42907e:{NFSU2_TR(0x42907e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B429084:{NFSU2_TR(0x429084);
{u32 ea_=u32(u32(7878676u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42908a:{NFSU2_TR(0x42908a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42908c:{NFSU2_TR(0x42908c);
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
B42908f:{NFSU2_TR(0x42908f);
if(r1(R+514)){{goto L42909c;}}
}
B429091:L429091:{c.instructions+=7;NFSU2_TR(0x429091);
w1(R+0,u8(0x1ull));
}
B429093:{NFSU2_TR(0x429093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429094:{NFSU2_TR(0x429094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429095:{NFSU2_TR(0x429095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429096:{NFSU2_TR(0x429096);
__builtin_memmove((R+16),(R+20),4);
}
B429098:{NFSU2_TR(0x429098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B429099:{NFSU2_TR(0x429099);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42909c:L42909c:{c.instructions+=2;NFSU2_TR(0x42909c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B42909e:{NFSU2_TR(0x42909e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4290ae;}}
}
B4290a0:L4290a0:{c.instructions+=2;NFSU2_TR(0x4290a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290a3:{NFSU2_TR(0x4290a3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4290ae;}}
}
B4290a5:L4290a5:{c.instructions+=3;NFSU2_TR(0x4290a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4290a9:{NFSU2_TR(0x4290a9);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290ac:{NFSU2_TR(0x4290ac);
{goto L4290c8;}
}
B4290ae:L4290ae:{c.instructions+=2;NFSU2_TR(0x4290ae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290b1:{NFSU2_TR(0x4290b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4290c2;}}
}
B4290b3:L4290b3:{c.instructions+=2;NFSU2_TR(0x4290b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290b6:{NFSU2_TR(0x4290b6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4290c2;}}
}
B4290b8:L4290b8:{c.instructions+=3;NFSU2_TR(0x4290b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4290bc:{NFSU2_TR(0x4290bc);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290c0:{NFSU2_TR(0x4290c0);
{goto L4290c8;}
}
B4290c2:L4290c2:{c.instructions+=1;NFSU2_TR(0x4290c2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290c8:L4290c8:{c.instructions+=2;NFSU2_TR(0x4290c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4290ca:{NFSU2_TR(0x4290ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4290da;}}
}
B4290cc:L4290cc:{c.instructions+=2;NFSU2_TR(0x4290cc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290cf:{NFSU2_TR(0x4290cf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4290da;}}
}
B4290d1:L4290d1:{c.instructions+=3;NFSU2_TR(0x4290d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4290d5:{NFSU2_TR(0x4290d5);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290d8:{NFSU2_TR(0x4290d8);
{goto L4290f4;}
}
B4290da:L4290da:{c.instructions+=2;NFSU2_TR(0x4290da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290dd:{NFSU2_TR(0x4290dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4290ee;}}
}
B4290df:L4290df:{c.instructions+=2;NFSU2_TR(0x4290df);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4290e2:{NFSU2_TR(0x4290e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4290ee;}}
}
B4290e4:L4290e4:{c.instructions+=3;NFSU2_TR(0x4290e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4290e8:{NFSU2_TR(0x4290e8);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290ec:{NFSU2_TR(0x4290ec);
{goto L4290f4;}
}
B4290ee:L4290ee:{c.instructions+=1;NFSU2_TR(0x4290ee);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4290f4:L4290f4:{c.instructions+=8;NFSU2_TR(0x4290f4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4290f6:{NFSU2_TR(0x4290f6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4290f8:{NFSU2_TR(0x4290f8);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4290fe:{NFSU2_TR(0x4290fe);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B429100:{NFSU2_TR(0x429100);
{u32 ea_=u32(u32(7878612u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B429106:{NFSU2_TR(0x429106);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429108:{NFSU2_TR(0x429108);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42910b:{NFSU2_TR(0x42910b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429113;}}
}
B42910d:L42910d:{c.instructions+=2;NFSU2_TR(0x42910d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429111:{NFSU2_TR(0x429111);
{goto L42911f;}
}
B429113:L429113:{c.instructions+=3;NFSU2_TR(0x429113);
__builtin_memmove((R+8),gp(0x7837d4),4);
}
B429119:{NFSU2_TR(0x429119);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42911b:{NFSU2_TR(0x42911b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42911f:L42911f:{c.instructions+=4;NFSU2_TR(0x42911f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429122:{NFSU2_TR(0x429122);
__builtin_memmove((R+4),gp(0x7e8e64),4);
}
B429128:{NFSU2_TR(0x429128);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42912c:{NFSU2_TR(0x42912c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429130:L429130:{c.instructions+=5;NFSU2_TR(0x429130);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429134:{NFSU2_TR(0x429134);
{u32 ea_=u32(u32(7878616u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42913a:{NFSU2_TR(0x42913a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42913c:{NFSU2_TR(0x42913c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42913f:{NFSU2_TR(0x42913f);
if(r1(R+514)){{goto L4293c8;}}
}
B429145:L429145:{c.instructions+=7;NFSU2_TR(0x429145);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B429149:{NFSU2_TR(0x429149);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42914b:{NFSU2_TR(0x42914b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42914f:{NFSU2_TR(0x42914f);
w1(R+12,u8(0x1ull));
}
B429151:{NFSU2_TR(0x429151);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429155:{NFSU2_TR(0x429155);
__builtin_memmove((R+0),(R+12),1);
}
B429157:{NFSU2_TR(0x429157);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429397;}}
}
B42915d:L42915d:{c.instructions+=1;NFSU2_TR(0x42915d);
{goto L429163;}
}
B42915f:L42915f:{c.instructions+=1;NFSU2_TR(0x42915f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429163:L429163:{c.instructions+=2;NFSU2_TR(0x429163);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429165:{NFSU2_TR(0x429165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42916f;}}
}
B429167:L429167:{c.instructions+=2;NFSU2_TR(0x429167);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429169:{NFSU2_TR(0x429169);
if(r1(R+518)){{goto L429397;}}
}
B42916f:L42916f:{c.instructions+=8;NFSU2_TR(0x42916f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B429171:{NFSU2_TR(0x429171);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429175:{NFSU2_TR(0x429175);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429179:{NFSU2_TR(0x429179);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42917d:{NFSU2_TR(0x42917d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429181:{NFSU2_TR(0x429181);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B429185:{NFSU2_TR(0x429185);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B429189:{NFSU2_TR(0x429189);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L429199;}}
}
B42918b:L42918b:{c.instructions+=2;NFSU2_TR(0x42918b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42918e:{NFSU2_TR(0x42918e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L429199;}}
}
B429190:L429190:{c.instructions+=3;NFSU2_TR(0x429190);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429194:{NFSU2_TR(0x429194);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429197:{NFSU2_TR(0x429197);
{goto L4291b7;}
}
B429199:L429199:{c.instructions+=2;NFSU2_TR(0x429199);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42919c:{NFSU2_TR(0x42919c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4291ad;}}
}
B42919e:L42919e:{c.instructions+=2;NFSU2_TR(0x42919e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4291a1:{NFSU2_TR(0x4291a1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4291ad;}}
}
B4291a3:L4291a3:{c.instructions+=3;NFSU2_TR(0x4291a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4291a7:{NFSU2_TR(0x4291a7);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4291ab:{NFSU2_TR(0x4291ab);
{goto L4291b7;}
}
B4291ad:L4291ad:{c.instructions+=2;NFSU2_TR(0x4291ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4291b3:{NFSU2_TR(0x4291b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4291b7:L4291b7:{c.instructions+=6;NFSU2_TR(0x4291b7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4291b9:{NFSU2_TR(0x4291b9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4291bb:{NFSU2_TR(0x4291bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4291bd:{NFSU2_TR(0x4291bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4291bf:{NFSU2_TR(0x4291bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4291c2:{NFSU2_TR(0x4291c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4291cc;}}
}
B4291c4:L4291c4:{c.instructions+=3;NFSU2_TR(0x4291c4);
w1(R+4,u8(0x1ull));
}
B4291c6:{NFSU2_TR(0x4291c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4291ca:{NFSU2_TR(0x4291ca);
{goto L4291d5;}
}
B4291cc:L4291cc:{c.instructions+=2;NFSU2_TR(0x4291cc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4291d1:{NFSU2_TR(0x4291d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4291d5:L4291d5:{c.instructions+=2;NFSU2_TR(0x4291d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4291d7:{NFSU2_TR(0x4291d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4291e3;}}
}
B4291d9:L4291d9:{c.instructions+=2;NFSU2_TR(0x4291d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4291dc:{NFSU2_TR(0x4291dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4291e3;}}
}
B4291de:L4291de:{c.instructions+=2;NFSU2_TR(0x4291de);
{u32 ea_=u32(r4(R+8)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4291e1:{NFSU2_TR(0x4291e1);
{goto L4291f9;}
}
B4291e3:L4291e3:{c.instructions+=2;NFSU2_TR(0x4291e3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4291e6:{NFSU2_TR(0x4291e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4291f3;}}
}
B4291e8:L4291e8:{c.instructions+=2;NFSU2_TR(0x4291e8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4291eb:{NFSU2_TR(0x4291eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4291f3;}}
}
B4291ed:L4291ed:{c.instructions+=2;NFSU2_TR(0x4291ed);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4291f1:{NFSU2_TR(0x4291f1);
{goto L4291f9;}
}
B4291f3:L4291f3:{c.instructions+=1;NFSU2_TR(0x4291f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4291f9:L4291f9:{c.instructions+=6;NFSU2_TR(0x4291f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4291fb:{NFSU2_TR(0x4291fb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4291fd:{NFSU2_TR(0x4291fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4291ff:{NFSU2_TR(0x4291ff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B429201:{NFSU2_TR(0x429201);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429204:{NFSU2_TR(0x429204);
if(r1(R+514)){{goto L42920a;}}
}
B429206:L429206:{c.instructions+=2;NFSU2_TR(0x429206);
w1(R+12,u8(0x1ull));
}
B429208:{NFSU2_TR(0x429208);
{goto L42920c;}
}
B42920a:L42920a:{c.instructions+=1;NFSU2_TR(0x42920a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42920c:L42920c:{c.instructions+=8;NFSU2_TR(0x42920c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429210:{NFSU2_TR(0x429210);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B429213:{NFSU2_TR(0x429213);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429215:{NFSU2_TR(0x429215);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429219:{NFSU2_TR(0x429219);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42921d:{NFSU2_TR(0x42921d);
__builtin_memmove((R+0),(R+4),1);
}
B42921f:{NFSU2_TR(0x42921f);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B429223:{NFSU2_TR(0x429223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429239;}}
}
B429225:L429225:{c.instructions+=6;NFSU2_TR(0x429225);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429229:{NFSU2_TR(0x429229);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42922b:{NFSU2_TR(0x42922b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42922f:{NFSU2_TR(0x42922f);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429233:{NFSU2_TR(0x429233);
__builtin_memmove((R+0),(R+12),1);
}
B429235:{NFSU2_TR(0x429235);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B429239:L429239:{c.instructions+=2;NFSU2_TR(0x429239);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42923b:{NFSU2_TR(0x42923b);
if(r1(R+518)){{goto L4292fd;}}
}
B429241:L429241:{c.instructions+=11;NFSU2_TR(0x429241);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429245:{NFSU2_TR(0x429245);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429249:{NFSU2_TR(0x429249);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42924d:{NFSU2_TR(0x42924d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429251:{NFSU2_TR(0x429251);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429257:{NFSU2_TR(0x429257);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42925b:{NFSU2_TR(0x42925b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42925d:{NFSU2_TR(0x42925d);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429263:{NFSU2_TR(0x429263);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429265:{NFSU2_TR(0x429265);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429268:{NFSU2_TR(0x429268);
if(r1(R+514)){{goto L429285;}}
}
B42926a:L42926a:{c.instructions+=3;NFSU2_TR(0x42926a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42926e:{NFSU2_TR(0x42926e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429270:{NFSU2_TR(0x429270);
if(r1(R+518)){{goto L429279;}}
}
B429272:L429272:{c.instructions+=2;NFSU2_TR(0x429272);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429277:{NFSU2_TR(0x429277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42928d;}}
}
B429279:L429279:{c.instructions+=3;NFSU2_TR(0x429279);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42927f:{NFSU2_TR(0x42927f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429283:{NFSU2_TR(0x429283);
{goto L42928d;}
}
B429285:L429285:{c.instructions+=1;NFSU2_TR(0x429285);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42928d:L42928d:{c.instructions+=8;NFSU2_TR(0x42928d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429290:{NFSU2_TR(0x429290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429291:{NFSU2_TR(0x429291);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429292:{NFSU2_TR(0x429292);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B429296:{NFSU2_TR(0x429296);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B429298:{NFSU2_TR(0x429298);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4292a0:{NFSU2_TR(0x4292a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4292a8:{NFSU2_TR(0x4292a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4292adull));
TAIL_STATIC(0x420d40u,420);
}
B4292ad:L4292ad:{c.instructions+=2;NFSU2_TR(0x4292ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4292af:{NFSU2_TR(0x4292af);
if(r1(R+518)){{goto L4292e1;}}
}
B4292b1:L4292b1:{c.instructions+=9;NFSU2_TR(0x4292b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4292b4:{NFSU2_TR(0x4292b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4292b7:{NFSU2_TR(0x4292b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4292bb:{NFSU2_TR(0x4292bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4292bc:{NFSU2_TR(0x4292bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4292bd:{NFSU2_TR(0x4292bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4292be:{NFSU2_TR(0x4292be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4292bf:{NFSU2_TR(0x4292bf);
w4(R+4,u32(0x827a00ull));
}
B4292c4:{NFSU2_TR(0x4292c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4292c9ull));
TAIL_STATIC(0x428ce0u,428);
}
B4292c9:L4292c9:{c.instructions+=3;NFSU2_TR(0x4292c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4292cb:{NFSU2_TR(0x4292cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4292cf:{NFSU2_TR(0x4292cf);
if(r1(R+518)){{goto L4292df;}}
}
B4292d1:L4292d1:{c.instructions+=5;NFSU2_TR(0x4292d1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4292d5:{NFSU2_TR(0x4292d5);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4292d8:{NFSU2_TR(0x4292d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4292da:{NFSU2_TR(0x4292da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4292dd:{NFSU2_TR(0x4292dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4292e1;}}
}
B4292df:L4292df:{c.instructions+=1;NFSU2_TR(0x4292df);
w1(R+12,u8(0x1ull));
}
B4292e1:L4292e1:{c.instructions+=7;NFSU2_TR(0x4292e1);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4292e6:{NFSU2_TR(0x4292e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4292ec:{NFSU2_TR(0x4292ec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4292ed:{NFSU2_TR(0x4292ed);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4292f1:{NFSU2_TR(0x4292f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4292f5:{NFSU2_TR(0x4292f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4292fb:{NFSU2_TR(0x4292fb);
{goto L4292ff;}
}
B4292fd:L4292fd:{c.instructions+=1;NFSU2_TR(0x4292fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4292ff:L4292ff:{c.instructions+=3;NFSU2_TR(0x4292ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429303:{NFSU2_TR(0x429303);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429305:{NFSU2_TR(0x429305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42937f;}}
}
B429307:L429307:{c.instructions+=3;NFSU2_TR(0x429307);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42930b:{NFSU2_TR(0x42930b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42930d:{NFSU2_TR(0x42930d);
if(r1(R+518)){{goto L42937f;}}
}
B42930f:L42930f:{c.instructions+=12;NFSU2_TR(0x42930f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429313:{NFSU2_TR(0x429313);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429317:{NFSU2_TR(0x429317);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42931d:{NFSU2_TR(0x42931d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429321:{NFSU2_TR(0x429321);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429325:{NFSU2_TR(0x429325);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429329:{NFSU2_TR(0x429329);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42932b:{NFSU2_TR(0x42932b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42932f:{NFSU2_TR(0x42932f);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429335:{NFSU2_TR(0x429335);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429337:{NFSU2_TR(0x429337);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42933a:{NFSU2_TR(0x42933a);
if(r1(R+514)){{goto L429357;}}
}
B42933c:L42933c:{c.instructions+=3;NFSU2_TR(0x42933c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429340:{NFSU2_TR(0x429340);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429342:{NFSU2_TR(0x429342);
if(r1(R+518)){{goto L42934b;}}
}
B429344:L429344:{c.instructions+=2;NFSU2_TR(0x429344);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429349:{NFSU2_TR(0x429349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42935f;}}
}
B42934b:L42934b:{c.instructions+=3;NFSU2_TR(0x42934b);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B429351:{NFSU2_TR(0x429351);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429355:{NFSU2_TR(0x429355);
{goto L42935f;}
}
B429357:L429357:{c.instructions+=1;NFSU2_TR(0x429357);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42935f:L42935f:{c.instructions+=11;NFSU2_TR(0x42935f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429362:{NFSU2_TR(0x429362);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B429366:{NFSU2_TR(0x429366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429367:{NFSU2_TR(0x429367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42936a:{NFSU2_TR(0x42936a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42936e:{NFSU2_TR(0x42936e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42936f:{NFSU2_TR(0x42936f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429370:{NFSU2_TR(0x429370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429371:{NFSU2_TR(0x429371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429372:{NFSU2_TR(0x429372);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B429376:{NFSU2_TR(0x429376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42937bull));
TAIL_STATIC(0x428df0u,428);
}
B42937b:L42937b:{c.instructions+=1;NFSU2_TR(0x42937b);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42937f:L42937f:{c.instructions+=6;NFSU2_TR(0x42937f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429383:{NFSU2_TR(0x429383);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B429387:{NFSU2_TR(0x429387);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429389:{NFSU2_TR(0x429389);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42938d:{NFSU2_TR(0x42938d);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429391:{NFSU2_TR(0x429391);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42915fu);}goto L42915f;}}
}
B429397:L429397:{c.instructions+=5;NFSU2_TR(0x429397);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429399:{NFSU2_TR(0x429399);
{u32 ea_=u32(u32(7878620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42939f:{NFSU2_TR(0x42939f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4293a3:{NFSU2_TR(0x4293a3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4293a7:{NFSU2_TR(0x4293a7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429130u);}goto L429130;}}
}
B4293ad:L4293ad:{c.instructions+=4;NFSU2_TR(0x4293ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4293b1:{NFSU2_TR(0x4293b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4293b2:{NFSU2_TR(0x4293b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4293b6:{NFSU2_TR(0x4293b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4293bbull));
TAIL_STATIC(0x40fbe0u,40f);
}
B4293bb:L4293bb:{c.instructions+=7;NFSU2_TR(0x4293bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4293bf:{NFSU2_TR(0x4293bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4293c0:{NFSU2_TR(0x4293c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4293c1:{NFSU2_TR(0x4293c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4293c2:{NFSU2_TR(0x4293c2);
__builtin_memmove((R+16),(R+20),4);
}
B4293c4:{NFSU2_TR(0x4293c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4293c5:{NFSU2_TR(0x4293c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4293c8:L4293c8:{c.instructions+=3;NFSU2_TR(0x4293c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4293cc:{NFSU2_TR(0x4293cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4293ce:{NFSU2_TR(0x4293ce);
if(r1(R+518)){{goto L4293eb;}}
}
B4293d0:L4293d0:{c.instructions+=4;NFSU2_TR(0x4293d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4293d4:{NFSU2_TR(0x4293d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4293d5:{NFSU2_TR(0x4293d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4293d9:{NFSU2_TR(0x4293d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4293deull));
TAIL_STATIC(0x40fbe0u,40f);
}
B4293de:L4293de:{c.instructions+=7;NFSU2_TR(0x4293de);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4293e2:{NFSU2_TR(0x4293e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4293e3:{NFSU2_TR(0x4293e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4293e4:{NFSU2_TR(0x4293e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4293e5:{NFSU2_TR(0x4293e5);
__builtin_memmove((R+16),(R+20),4);
}
B4293e7:{NFSU2_TR(0x4293e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4293e8:{NFSU2_TR(0x4293e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4293eb:L4293eb:{c.instructions+=12;NFSU2_TR(0x4293eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4293ed:{NFSU2_TR(0x4293ed);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4293f0:{NFSU2_TR(0x4293f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4293f4:{NFSU2_TR(0x4293f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4293f8:{NFSU2_TR(0x4293f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429400:{NFSU2_TR(0x429400);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429408:{NFSU2_TR(0x429408);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42940c:{NFSU2_TR(0x42940c);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429410:{NFSU2_TR(0x429410);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429414:{NFSU2_TR(0x429414);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429418:{NFSU2_TR(0x429418);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42941c:{NFSU2_TR(0x42941c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429421ull));
TAIL_STATIC(0x420b40u,420);
}
B429421:L429421:{c.instructions+=2;NFSU2_TR(0x429421);
u8 U[4];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B429428:{NFSU2_TR(0x429428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42942dull));
TAIL_STATIC(0x420b40u,420);
}
B42942d:L42942d:{c.instructions+=3;NFSU2_TR(0x42942d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429431:{NFSU2_TR(0x429431);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B429433:{NFSU2_TR(0x429433);
if(r1(R+518)){{goto L429824;}}
}
B429439:L429439:{c.instructions+=3;NFSU2_TR(0x429439);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42943d:{NFSU2_TR(0x42943d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B429440:{NFSU2_TR(0x429440);
if(r1(R+518)){{goto L42944f;}}
}
B429442:L429442:{c.instructions+=1;NFSU2_TR(0x429442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429447ull));
TAIL_STATIC(0x60bea0u,60b);
}
B429447:L429447:{c.instructions+=2;NFSU2_TR(0x429447);
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
B429449:{NFSU2_TR(0x429449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429824;}}
}
B42944f:L42944f:{c.instructions+=4;NFSU2_TR(0x42944f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429453:{NFSU2_TR(0x429453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429456:{NFSU2_TR(0x429456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429457:{NFSU2_TR(0x429457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42945cull));
TAIL_STATIC(0x60c120u,60c);
}
B42945c:L42945c:{c.instructions+=10;NFSU2_TR(0x42945c);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429460:{NFSU2_TR(0x429460);
__builtin_memmove((R+24),(R+0),4);
}
B429462:{NFSU2_TR(0x429462);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429465:{NFSU2_TR(0x429465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429466:{NFSU2_TR(0x429466);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B429469:{NFSU2_TR(0x429469);
__builtin_memmove((R+4),(R+24),4);
}
B42946b:{NFSU2_TR(0x42946b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42946f:{NFSU2_TR(0x42946f);
{u32 ea_=u32(u32(7878668u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B429475:{NFSU2_TR(0x429475);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429479:{NFSU2_TR(0x429479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42947eull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42947e:L42947e:{c.instructions+=5;NFSU2_TR(0x42947e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429482:{NFSU2_TR(0x429482);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429483:{NFSU2_TR(0x429483);
__builtin_memmove((R+4),(R+24),4);
}
B429485:{NFSU2_TR(0x429485);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429489:{NFSU2_TR(0x429489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42948eull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42948e:L42948e:{c.instructions+=5;NFSU2_TR(0x42948e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B429492:{NFSU2_TR(0x429492);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429493:{NFSU2_TR(0x429493);
__builtin_memmove((R+4),(R+24),4);
}
B429495:{NFSU2_TR(0x429495);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429499:{NFSU2_TR(0x429499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42949eull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42949e:L42949e:{c.instructions+=5;NFSU2_TR(0x42949e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4294a2:{NFSU2_TR(0x4294a2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4294a5:{NFSU2_TR(0x4294a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4294a7:{NFSU2_TR(0x4294a7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4294aa:{NFSU2_TR(0x4294aa);
if(r1(R+514)){{goto L4294c0;}}
}
B4294ac:L4294ac:{c.instructions+=5;NFSU2_TR(0x4294ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4294af:{NFSU2_TR(0x4294af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4294b3:{NFSU2_TR(0x4294b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294b4:{NFSU2_TR(0x4294b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294b5:{NFSU2_TR(0x4294b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4294baull));
TAIL_STATIC(0x401050u,401);
}
B4294ba:L4294ba:{c.instructions+=2;NFSU2_TR(0x4294ba);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4294be:{NFSU2_TR(0x4294be);
{goto L4294d2;}
}
B4294c0:L4294c0:{c.instructions+=5;NFSU2_TR(0x4294c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4294c3:{NFSU2_TR(0x4294c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4294c7:{NFSU2_TR(0x4294c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294c8:{NFSU2_TR(0x4294c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294c9:{NFSU2_TR(0x4294c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4294ceull));
TAIL_STATIC(0x401070u,401);
}
B4294ce:L4294ce:{c.instructions+=1;NFSU2_TR(0x4294ce);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4294d2:L4294d2:{c.instructions+=4;NFSU2_TR(0x4294d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4294d5:{NFSU2_TR(0x4294d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294d6:{NFSU2_TR(0x4294d6);
__builtin_memmove((R+4),(R+24),4);
}
B4294d8:{NFSU2_TR(0x4294d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4294ddull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4294dd:L4294dd:{c.instructions+=5;NFSU2_TR(0x4294dd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4294e1:{NFSU2_TR(0x4294e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294e2:{NFSU2_TR(0x4294e2);
__builtin_memmove((R+4),(R+24),4);
}
B4294e4:{NFSU2_TR(0x4294e4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4294e8:{NFSU2_TR(0x4294e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4294edull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4294ed:L4294ed:{c.instructions+=5;NFSU2_TR(0x4294ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4294f1:{NFSU2_TR(0x4294f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4294f5:{NFSU2_TR(0x4294f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4294f6:{NFSU2_TR(0x4294f6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4294fa:{NFSU2_TR(0x4294fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4294ffull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4294ff:L4294ff:{c.instructions+=5;NFSU2_TR(0x4294ff);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429502:{NFSU2_TR(0x429502);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429503:{NFSU2_TR(0x429503);
__builtin_memmove((R+4),(R+24),4);
}
B429505:{NFSU2_TR(0x429505);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429509:{NFSU2_TR(0x429509);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42950eull));
TAIL_STATIC(0x60bfa0u,60b);
}
B42950e:L42950e:{c.instructions+=10;NFSU2_TR(0x42950e);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429511:{NFSU2_TR(0x429511);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429519:{NFSU2_TR(0x429519);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429521:{NFSU2_TR(0x429521);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B429525:{NFSU2_TR(0x429525);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B429527:{NFSU2_TR(0x429527);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B429529:{NFSU2_TR(0x429529);
{u32 ea_=u32(u32(7878672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42952f:{NFSU2_TR(0x42952f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429531:{NFSU2_TR(0x429531);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429534:{NFSU2_TR(0x429534);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429545;}}
}
B429536:L429536:{c.instructions+=4;NFSU2_TR(0x429536);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42953c:{NFSU2_TR(0x42953c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42953e:{NFSU2_TR(0x42953e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429541:{NFSU2_TR(0x429541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429569;}}
}
B429543:L429543:{c.instructions+=1;NFSU2_TR(0x429543);
{goto L429559;}
}
B429545:L429545:{c.instructions+=4;NFSU2_TR(0x429545);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429546:{NFSU2_TR(0x429546);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B429548:{NFSU2_TR(0x429548);
__builtin_memmove((R+4),(R+24),4);
}
B42954a:{NFSU2_TR(0x42954a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42954full));
TAIL_STATIC(0x60bfa0u,60b);
}
B42954f:L42954f:{c.instructions+=4;NFSU2_TR(0x42954f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429552:{NFSU2_TR(0x429552);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429554:{NFSU2_TR(0x429554);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429557:{NFSU2_TR(0x429557);
if(r1(R+514)){{goto L429569;}}
}
B429559:L429559:{c.instructions+=2;NFSU2_TR(0x429559);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429561:{NFSU2_TR(0x429561);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429569:L429569:{c.instructions+=8;NFSU2_TR(0x429569);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42956d:{NFSU2_TR(0x42956d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429570:{NFSU2_TR(0x429570);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B429573:{NFSU2_TR(0x429573);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B429575:{NFSU2_TR(0x429575);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B429577:{NFSU2_TR(0x429577);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429579:{NFSU2_TR(0x429579);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42957d:{NFSU2_TR(0x42957d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4295ef;}}
}
B42957f:L42957f:{c.instructions+=1;NFSU2_TR(0x42957f);
}
B429580:L429580:{c.instructions+=2;NFSU2_TR(0x429580);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429582:{NFSU2_TR(0x429582);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4295a6;}}
}
B429584:L429584:{c.instructions+=3;NFSU2_TR(0x429584);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429588:{NFSU2_TR(0x429588);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429589:{NFSU2_TR(0x429589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42958eull));
TAIL_STATIC(0x5a0820u,5a0);
}
B42958e:L42958e:{c.instructions+=2;NFSU2_TR(0x42958e);
__builtin_memmove((R+4),(R+0),4);
}
B429590:{NFSU2_TR(0x429590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429595ull));
TAIL_STATIC(0x592c60u,592);
}
B429595:L429595:{c.instructions+=5;NFSU2_TR(0x429595);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429599:{NFSU2_TR(0x429599);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42959d:{NFSU2_TR(0x42959d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B42959e:{NFSU2_TR(0x42959e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4295a0:{NFSU2_TR(0x4295a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429580u);}goto L429580;}}
}
B4295a2:L4295a2:{c.instructions+=2;NFSU2_TR(0x4295a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4295a4:{NFSU2_TR(0x4295a4);
if(r1(R+518)){{goto L4295ef;}}
}
B4295a6:L4295a6:{c.instructions+=4;NFSU2_TR(0x4295a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4295aa:{NFSU2_TR(0x4295aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4295ab:{NFSU2_TR(0x4295ab);
__builtin_memmove((R+4),(R+12),4);
}
B4295ad:{NFSU2_TR(0x4295ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4295b2ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4295b2:L4295b2:{c.instructions+=6;NFSU2_TR(0x4295b2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4295b6:{NFSU2_TR(0x4295b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4295b7:{NFSU2_TR(0x4295b7);
__builtin_memmove((R+4),(R+12),4);
}
B4295b9:{NFSU2_TR(0x4295b9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4295bb:{NFSU2_TR(0x4295bb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4295bf:{NFSU2_TR(0x4295bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4295c4ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4295c4:L4295c4:{c.instructions+=9;NFSU2_TR(0x4295c4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4295c8:{NFSU2_TR(0x4295c8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4295ca:{NFSU2_TR(0x4295ca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4295ce:{NFSU2_TR(0x4295ce);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4295d0:{NFSU2_TR(0x4295d0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4295d2:{NFSU2_TR(0x4295d2);
{u32 ea_=u32(u32(7878672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4295d8:{NFSU2_TR(0x4295d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4295da:{NFSU2_TR(0x4295da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4295dd:{NFSU2_TR(0x4295dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4295ed;}}
}
B4295df:L4295df:{c.instructions+=4;NFSU2_TR(0x4295df);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4295e3:{NFSU2_TR(0x4295e3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4295e7:{NFSU2_TR(0x4295e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4295eb:{NFSU2_TR(0x4295eb);
{goto L4295ef;}
}
B4295ed:L4295ed:{c.instructions+=1;NFSU2_TR(0x4295ed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4295ef:L4295ef:{c.instructions+=3;NFSU2_TR(0x4295ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4295f2:{NFSU2_TR(0x4295f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4295f4:{NFSU2_TR(0x4295f4);
if(r1(R+518)){{goto L429708;}}
}
B4295fa:L4295fa:{c.instructions+=5;NFSU2_TR(0x4295fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4295fe:{NFSU2_TR(0x4295fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429601:{NFSU2_TR(0x429601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B429604:{NFSU2_TR(0x429604);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429606:{NFSU2_TR(0x429606);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L429708;}}
}
B42960c:L42960c:{c.instructions+=5;NFSU2_TR(0x42960c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42960f:{NFSU2_TR(0x42960f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B429611:{NFSU2_TR(0x429611);
u8 U[12];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B429618:{NFSU2_TR(0x429618);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B429619:{NFSU2_TR(0x429619);
__builtin_memmove((R+16),(R+16),4);
}
B429620:L429620:{c.instructions+=3;NFSU2_TR(0x429620);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B429622:{NFSU2_TR(0x429622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B429624:{NFSU2_TR(0x429624);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L429634;}}
}
B429626:L429626:{c.instructions+=2;NFSU2_TR(0x429626);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B429629:{NFSU2_TR(0x429629);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L429634;}}
}
B42962b:L42962b:{c.instructions+=3;NFSU2_TR(0x42962b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42962e:{NFSU2_TR(0x42962e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429632:{NFSU2_TR(0x429632);
{goto L429650;}
}
B429634:L429634:{c.instructions+=2;NFSU2_TR(0x429634);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B429637:{NFSU2_TR(0x429637);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L429648;}}
}
B429639:L429639:{c.instructions+=2;NFSU2_TR(0x429639);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42963c:{NFSU2_TR(0x42963c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L429648;}}
}
B42963e:L42963e:{c.instructions+=3;NFSU2_TR(0x42963e);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429642:{NFSU2_TR(0x429642);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429646:{NFSU2_TR(0x429646);
{goto L429650;}
}
B429648:L429648:{c.instructions+=1;NFSU2_TR(0x429648);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429650:L429650:{c.instructions+=2;NFSU2_TR(0x429650);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B429652:{NFSU2_TR(0x429652);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42965e;}}
}
B429654:L429654:{c.instructions+=2;NFSU2_TR(0x429654);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B429657:{NFSU2_TR(0x429657);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42965e;}}
}
B429659:L429659:{c.instructions+=2;NFSU2_TR(0x429659);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42965c:{NFSU2_TR(0x42965c);
{goto L429674;}
}
B42965e:L42965e:{c.instructions+=2;NFSU2_TR(0x42965e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B429661:{NFSU2_TR(0x429661);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42966e;}}
}
B429663:L429663:{c.instructions+=2;NFSU2_TR(0x429663);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B429666:{NFSU2_TR(0x429666);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42966e;}}
}
B429668:L429668:{c.instructions+=2;NFSU2_TR(0x429668);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42966c:{NFSU2_TR(0x42966c);
{goto L429674;}
}
B42966e:L42966e:{c.instructions+=1;NFSU2_TR(0x42966e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429674:L429674:{c.instructions+=5;NFSU2_TR(0x429674);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429678:{NFSU2_TR(0x429678);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42967c:{NFSU2_TR(0x42967c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42967e:{NFSU2_TR(0x42967e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429681:{NFSU2_TR(0x429681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429689;}}
}
B429683:L429683:{c.instructions+=2;NFSU2_TR(0x429683);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429687:{NFSU2_TR(0x429687);
{goto L42968d;}
}
B429689:L429689:{c.instructions+=1;NFSU2_TR(0x429689);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42968d:L42968d:{c.instructions+=5;NFSU2_TR(0x42968d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B42968f:{NFSU2_TR(0x42968f);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B429691:{NFSU2_TR(0x429691);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429693:{NFSU2_TR(0x429693);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429696:{NFSU2_TR(0x429696);
if(r1(R+514)){{goto L42969c;}}
}
B429698:L429698:{c.instructions+=2;NFSU2_TR(0x429698);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42969a:{NFSU2_TR(0x42969a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42969c:L42969c:{c.instructions+=6;NFSU2_TR(0x42969c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4296a0:{NFSU2_TR(0x4296a0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4296a2:{NFSU2_TR(0x4296a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4296a4:{NFSU2_TR(0x4296a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4296a6:{NFSU2_TR(0x4296a6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4296a9:{NFSU2_TR(0x4296a9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4296b3;}}
}
B4296ab:L4296ab:{c.instructions+=1;NFSU2_TR(0x4296ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4296b3:L4296b3:{c.instructions+=5;NFSU2_TR(0x4296b3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4296b7:{NFSU2_TR(0x4296b7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4296bb:{NFSU2_TR(0x4296bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4296bd:{NFSU2_TR(0x4296bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4296c0:{NFSU2_TR(0x4296c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4296cc;}}
}
B4296c2:L4296c2:{c.instructions+=3;NFSU2_TR(0x4296c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4296c6:{NFSU2_TR(0x4296c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4296ca:{NFSU2_TR(0x4296ca);
{goto L4296d4;}
}
B4296cc:L4296cc:{c.instructions+=2;NFSU2_TR(0x4296cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4296d0:{NFSU2_TR(0x4296d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4296d4:L4296d4:{c.instructions+=4;NFSU2_TR(0x4296d4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4296d8:{NFSU2_TR(0x4296d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4296da:{NFSU2_TR(0x4296da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4296dd:{NFSU2_TR(0x4296dd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4296e5;}}
}
B4296df:L4296df:{c.instructions+=2;NFSU2_TR(0x4296df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4296e1:{NFSU2_TR(0x4296e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4296e5:L4296e5:{c.instructions+=6;NFSU2_TR(0x4296e5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4296e9:{NFSU2_TR(0x4296e9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4296eb:{NFSU2_TR(0x4296eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4296ed:{NFSU2_TR(0x4296ed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4296ef:{NFSU2_TR(0x4296ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4296f2:{NFSU2_TR(0x4296f2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4296fc;}}
}
B4296f4:L4296f4:{c.instructions+=1;NFSU2_TR(0x4296f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4296fc:L4296fc:{c.instructions+=3;NFSU2_TR(0x4296fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4296ff:{NFSU2_TR(0x4296ff);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B429700:{NFSU2_TR(0x429700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429620u);}goto L429620;}}
}
B429706:L429706:{c.instructions+=1;NFSU2_TR(0x429706);
{goto L42970b;}
}
B429708:L429708:{c.instructions+=1;NFSU2_TR(0x429708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42970b:L42970b:{c.instructions+=14;NFSU2_TR(0x42970b);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429711:{NFSU2_TR(0x429711);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429715:{NFSU2_TR(0x429715);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B42971b:{NFSU2_TR(0x42971b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B42971f:{NFSU2_TR(0x42971f);
{u32 ea_=u32(u32(8293992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429725:{NFSU2_TR(0x429725);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429729:{NFSU2_TR(0x429729);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B42972b:{NFSU2_TR(0x42972b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42972f:{NFSU2_TR(0x42972f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429733:{NFSU2_TR(0x429733);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B429735:{NFSU2_TR(0x429735);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42973b:{NFSU2_TR(0x42973b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42973d:{NFSU2_TR(0x42973d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429740:{NFSU2_TR(0x429740);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42974a;}}
}
B429742:L429742:{c.instructions+=1;NFSU2_TR(0x429742);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42974a:L42974a:{c.instructions+=10;NFSU2_TR(0x42974a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42974e:{NFSU2_TR(0x42974e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B429750:{NFSU2_TR(0x429750);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429754:{NFSU2_TR(0x429754);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429758:{NFSU2_TR(0x429758);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42975c:{NFSU2_TR(0x42975c);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429762:{NFSU2_TR(0x429762);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429766:{NFSU2_TR(0x429766);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429768:{NFSU2_TR(0x429768);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42976b:{NFSU2_TR(0x42976b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L429775;}}
}
B42976d:L42976d:{c.instructions+=1;NFSU2_TR(0x42976d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429775:L429775:{c.instructions+=8;NFSU2_TR(0x429775);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429779:{NFSU2_TR(0x429779);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42977f:{NFSU2_TR(0x42977f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B429781:{NFSU2_TR(0x429781);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B429785:{NFSU2_TR(0x429785);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42978b:{NFSU2_TR(0x42978b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42978d:{NFSU2_TR(0x42978d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429790:{NFSU2_TR(0x429790);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4297a1;}}
}
B429792:L429792:{c.instructions+=5;NFSU2_TR(0x429792);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429793:{NFSU2_TR(0x429793);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B429797:{NFSU2_TR(0x429797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429798:{NFSU2_TR(0x429798);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42979c:{NFSU2_TR(0x42979c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4297a1ull));
TAIL_STATIC(0x420d40u,420);
}
B4297a1:L4297a1:{c.instructions+=8;NFSU2_TR(0x4297a1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4297a5:{NFSU2_TR(0x4297a5);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4297ab:{NFSU2_TR(0x4297ab);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4297ad:{NFSU2_TR(0x4297ad);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4297b1:{NFSU2_TR(0x4297b1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4297b7:{NFSU2_TR(0x4297b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4297b9:{NFSU2_TR(0x4297b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4297bc:{NFSU2_TR(0x4297bc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4297d0;}}
}
B4297be:L4297be:{c.instructions+=5;NFSU2_TR(0x4297be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4297bf:{NFSU2_TR(0x4297bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4297c6:{NFSU2_TR(0x4297c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4297c7:{NFSU2_TR(0x4297c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4297cb:{NFSU2_TR(0x4297cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4297d0ull));
TAIL_STATIC(0x420d40u,420);
}
B4297d0:L4297d0:{c.instructions+=9;NFSU2_TR(0x4297d0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4297d4:{NFSU2_TR(0x4297d4);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B4297d6:{NFSU2_TR(0x4297d6);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4297dc:{NFSU2_TR(0x4297dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4297e0:{NFSU2_TR(0x4297e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4297e2:{NFSU2_TR(0x4297e2);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4297e8:{NFSU2_TR(0x4297e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4297eb:{NFSU2_TR(0x4297eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4297ed:{NFSU2_TR(0x4297ed);
if(r1(R+514)){{goto L429831;}}
}
B4297ef:L4297ef:{c.instructions+=2;NFSU2_TR(0x4297ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4297f2:{NFSU2_TR(0x4297f2);
if(r1(R+514)){{goto L4297fb;}}
}
B4297f4:L4297f4:{c.instructions+=2;NFSU2_TR(0x4297f4);
w4(R+0,u32(0x1ull));
}
B4297f9:{NFSU2_TR(0x4297f9);
{goto L4297fd;}
}
B4297fb:L4297fb:{c.instructions+=1;NFSU2_TR(0x4297fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4297fd:L4297fd:{c.instructions+=2;NFSU2_TR(0x4297fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4297ff:{NFSU2_TR(0x4297ff);
__builtin_memmove((R+4),(R+518),1);
}
B429802:L429802:{c.instructions+=2;NFSU2_TR(0x429802);
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
B429804:{NFSU2_TR(0x429804);
if(r1(R+518)){{goto L429824;}}
}
B429806:L429806:{c.instructions+=4;NFSU2_TR(0x429806);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42980a:{NFSU2_TR(0x42980a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42980b:{NFSU2_TR(0x42980b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42980f:{NFSU2_TR(0x42980f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429814ull));
TAIL_STATIC(0x40fbe0u,40f);
}
B429814:L429814:{c.instructions+=2;NFSU2_TR(0x429814);
u8 U[4];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42981b:{NFSU2_TR(0x42981b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42981c:L42981c:{c.instructions+=2;NFSU2_TR(0x42981c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42981f:{NFSU2_TR(0x42981f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429824ull));
TAIL_STATIC(0x401d40u,401);
}
B429824:L429824:{c.instructions+=7;NFSU2_TR(0x429824);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429828:{NFSU2_TR(0x429828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429829:{NFSU2_TR(0x429829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42982a:{NFSU2_TR(0x42982a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42982b:{NFSU2_TR(0x42982b);
__builtin_memmove((R+16),(R+20),4);
}
B42982d:{NFSU2_TR(0x42982d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42982e:{NFSU2_TR(0x42982e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429831:L429831:{c.instructions+=2;NFSU2_TR(0x429831);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429834:{NFSU2_TR(0x429834);
if(r1(R+514)){{goto L42985c;}}
}
B429836:L429836:{c.instructions+=5;NFSU2_TR(0x429836);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42983a:{NFSU2_TR(0x42983a);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429840:{NFSU2_TR(0x429840);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429842:{NFSU2_TR(0x429842);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429845:{NFSU2_TR(0x429845);
if(r1(R+514)){{goto L429853;}}
}
B429847:L429847:{c.instructions+=4;NFSU2_TR(0x429847);
w4(R+0,u32(0x1ull));
}
B42984c:{NFSU2_TR(0x42984c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42984e:{NFSU2_TR(0x42984e);
__builtin_memmove((R+0),(R+518),1);
}
B429851:{NFSU2_TR(0x429851);
{goto L429876;}
}
B429853:L429853:{c.instructions+=4;NFSU2_TR(0x429853);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B429855:{NFSU2_TR(0x429855);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429857:{NFSU2_TR(0x429857);
__builtin_memmove((R+0),(R+518),1);
}
B42985a:{NFSU2_TR(0x42985a);
{goto L429876;}
}
B42985c:L42985c:{c.instructions+=5;NFSU2_TR(0x42985c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429860:{NFSU2_TR(0x429860);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429864:{NFSU2_TR(0x429864);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429866:{NFSU2_TR(0x429866);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429869:{NFSU2_TR(0x429869);
if(r1(R+514)){{goto L42986f;}}
}
B42986b:L42986b:{c.instructions+=2;NFSU2_TR(0x42986b);
w1(R+0,u8(0x1ull));
}
B42986d:{NFSU2_TR(0x42986d);
{goto L429871;}
}
B42986f:L42986f:{c.instructions+=1;NFSU2_TR(0x42986f);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B429871:L429871:{c.instructions+=2;NFSU2_TR(0x429871);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429873:{NFSU2_TR(0x429873);
__builtin_memmove((R+4),(R+518),1);
}
B429876:L429876:{c.instructions+=2;NFSU2_TR(0x429876);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429878:{NFSU2_TR(0x429878);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429802u);}goto L429802;}}
}
B42987a:L42987a:{c.instructions+=4;NFSU2_TR(0x42987a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42987e:{NFSU2_TR(0x42987e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B429882:{NFSU2_TR(0x429882);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429883:{NFSU2_TR(0x429883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429888ull));
TAIL_STATIC(0x40fbe0u,40f);
}
B429888:L429888:{c.instructions+=3;NFSU2_TR(0x429888);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42988c:{NFSU2_TR(0x42988c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42988d:{NFSU2_TR(0x42988d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42981cu);}goto L42981c;}
}
B429890:L429890:{c.instructions+=17;NFSU2_TR(0x429890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B429893:{NFSU2_TR(0x429893);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429894:{NFSU2_TR(0x429894);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429895:{NFSU2_TR(0x429895);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B429899:{NFSU2_TR(0x429899);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42989a:{NFSU2_TR(0x42989a);
__builtin_memmove((R+24),(R+4),4);
}
B42989c:{NFSU2_TR(0x42989c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4298a0:{NFSU2_TR(0x4298a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4298a7:{NFSU2_TR(0x4298a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4298a9:{NFSU2_TR(0x4298a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4298aa:{NFSU2_TR(0x4298aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4298ad:{NFSU2_TR(0x4298ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4298b0:{NFSU2_TR(0x4298b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4298b1:{NFSU2_TR(0x4298b1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4298b5:{NFSU2_TR(0x4298b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4298b6:{NFSU2_TR(0x4298b6);
__builtin_memmove((R+4),(R+24),4);
}
B4298b8:{NFSU2_TR(0x4298b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4298bdull));
TAIL_STATIC(0x41d2d0u,41d);
}
B4298bd:L4298bd:{c.instructions+=4;NFSU2_TR(0x4298bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4298be:{NFSU2_TR(0x4298be);
__builtin_memmove((R+4),(R+28),4);
}
B4298c0:{NFSU2_TR(0x4298c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4298c4:{NFSU2_TR(0x4298c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4298c9ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4298c9:L4298c9:{c.instructions+=4;NFSU2_TR(0x4298c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4298ca:{NFSU2_TR(0x4298ca);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4298ce:{NFSU2_TR(0x4298ce);
__builtin_memmove((R+4),(R+20),4);
}
B4298d0:{NFSU2_TR(0x4298d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4298d5ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4298d5:L4298d5:{c.instructions+=20;NFSU2_TR(0x4298d5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4298d9:{NFSU2_TR(0x4298d9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4298dd:{NFSU2_TR(0x4298dd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4298e1:{NFSU2_TR(0x4298e1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4298e4:{NFSU2_TR(0x4298e4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4298e7:{NFSU2_TR(0x4298e7);
{u32 ea_=u32(u32(7878680u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4298ed:{NFSU2_TR(0x4298ed);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4298f1:{NFSU2_TR(0x4298f1);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4298f4:{NFSU2_TR(0x4298f4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4298f8:{NFSU2_TR(0x4298f8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4298fc:{NFSU2_TR(0x4298fc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4298fe:{NFSU2_TR(0x4298fe);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429902:{NFSU2_TR(0x429902);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429906:{NFSU2_TR(0x429906);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B429908:{NFSU2_TR(0x429908);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42990a:{NFSU2_TR(0x42990a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42990c:{NFSU2_TR(0x42990c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42990e:{NFSU2_TR(0x42990e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429910:{NFSU2_TR(0x429910);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429913:{NFSU2_TR(0x429913);
if(r1(R+514)){{goto L429964;}}
}
B429915:L429915:{c.instructions+=3;NFSU2_TR(0x429915);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429919:{NFSU2_TR(0x429919);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42991c:{NFSU2_TR(0x42991c);
if(r1(R+518)){{goto L429958;}}
}
B42991e:L42991e:{c.instructions+=2;NFSU2_TR(0x42991e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429921:{NFSU2_TR(0x429921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429951;}}
}
B429923:L429923:{c.instructions+=5;NFSU2_TR(0x429923);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429927:{NFSU2_TR(0x429927);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42992d:{NFSU2_TR(0x42992d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42992f:{NFSU2_TR(0x42992f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429932:{NFSU2_TR(0x429932);
if(r1(R+518)){{goto L429958;}}
}
B429934:L429934:{c.instructions+=5;NFSU2_TR(0x429934);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429938:{NFSU2_TR(0x429938);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42993e:{NFSU2_TR(0x42993e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429940:{NFSU2_TR(0x429940);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429943:{NFSU2_TR(0x429943);
if(r1(R+514)){{goto L42996a;}}
}
B429945:L429945:{c.instructions+=4;NFSU2_TR(0x429945);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B429947:{NFSU2_TR(0x429947);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42994b:{NFSU2_TR(0x42994b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42994f:{NFSU2_TR(0x42994f);
{goto L42996a;}
}
B429951:L429951:{c.instructions+=2;NFSU2_TR(0x429951);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429954:{NFSU2_TR(0x429954);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429945u);}goto L429945;}}
}
B429956:L429956:{c.instructions+=1;NFSU2_TR(0x429956);
{goto L42996a;}
}
B429958:L429958:{c.instructions+=4;NFSU2_TR(0x429958);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42995a:{NFSU2_TR(0x42995a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42995e:{NFSU2_TR(0x42995e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429962:{NFSU2_TR(0x429962);
{goto L42996a;}
}
B429964:L429964:{c.instructions+=2;NFSU2_TR(0x429964);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B429966:{NFSU2_TR(0x429966);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42996a:L42996a:{c.instructions+=4;NFSU2_TR(0x42996a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42996d:{NFSU2_TR(0x42996d);
__builtin_memmove((R+4),gp(0x7e8e64),4);
}
B429973:{NFSU2_TR(0x429973);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429977:{NFSU2_TR(0x429977);
if(r1(R+518)){{goto L429983;}}
}
B429979:L429979:{c.instructions+=4;NFSU2_TR(0x429979);
__builtin_memmove((R+8),(R+4),4);
}
B42997b:{NFSU2_TR(0x42997b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42997e:{NFSU2_TR(0x42997e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429981:{NFSU2_TR(0x429981);
{goto L429985;}
}
B429983:L429983:{c.instructions+=1;NFSU2_TR(0x429983);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B429985:L429985:{c.instructions+=14;NFSU2_TR(0x429985);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429989:{NFSU2_TR(0x429989);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42998d:{NFSU2_TR(0x42998d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42998e:{NFSU2_TR(0x42998e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429992:{NFSU2_TR(0x429992);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B429996:{NFSU2_TR(0x429996);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429997:{NFSU2_TR(0x429997);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42999b:{NFSU2_TR(0x42999b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42999c:{NFSU2_TR(0x42999c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42999d:{NFSU2_TR(0x42999d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42999e:{NFSU2_TR(0x42999e);
__builtin_memmove((R+4),(R+24),4);
}
B4299a0:{NFSU2_TR(0x4299a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4299a8:{NFSU2_TR(0x4299a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4299b0:{NFSU2_TR(0x4299b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4299b5ull));
TAIL_STATIC(0x428df0u,428);
}
B4299b5:L4299b5:{c.instructions+=6;NFSU2_TR(0x4299b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4299b6:{NFSU2_TR(0x4299b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4299b7:{NFSU2_TR(0x4299b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4299b8:{NFSU2_TR(0x4299b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4299b9:{NFSU2_TR(0x4299b9);
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
B4299bc:{NFSU2_TR(0x4299bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4299c0:L4299c0:{c.instructions+=14;NFSU2_TR(0x4299c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299c2:{NFSU2_TR(0x4299c2);
u8 U[4];
w4(U+0,u32(0x771afcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299c7:{NFSU2_TR(0x4299c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4299cd:{NFSU2_TR(0x4299cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299ce:{NFSU2_TR(0x4299ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4299d5:{NFSU2_TR(0x4299d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299d6:{NFSU2_TR(0x4299d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299d7:{NFSU2_TR(0x4299d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299d8:{NFSU2_TR(0x4299d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299d9:{NFSU2_TR(0x4299d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4299dd:{NFSU2_TR(0x4299dd);
__builtin_memmove((R+24),(R+4),4);
}
B4299df:{NFSU2_TR(0x4299df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299e0:{NFSU2_TR(0x4299e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4299e4:{NFSU2_TR(0x4299e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4299e9ull));
TAIL_STATIC(0x4260b0u,426);
}
B4299e9:L4299e9:{c.instructions+=5;NFSU2_TR(0x4299e9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4299eb:{NFSU2_TR(0x4299eb);
u8 U[4];
w4(U+0,u32(0x7a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4299f0:{NFSU2_TR(0x4299f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4299f4:{NFSU2_TR(0x4299f4);
u8 U[4];
w4(U+0,u32(0x785518ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4299fa:{NFSU2_TR(0x4299fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4299ffull));
TAIL_STATIC(0x575620u,575);
}
B4299ff:L4299ff:{c.instructions+=5;NFSU2_TR(0x4299ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B429a02:{NFSU2_TR(0x429a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a06:{NFSU2_TR(0x429a06);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429a08:{NFSU2_TR(0x429a08);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429a0d:{NFSU2_TR(0x429a0d);
if(r1(R+518)){{goto L429a19;}}
}
B429a0f:L429a0f:{c.instructions+=3;NFSU2_TR(0x429a0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a10:{NFSU2_TR(0x429a10);
__builtin_memmove((R+4),(R+0),4);
}
B429a12:{NFSU2_TR(0x429a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429a17ull));
TAIL_STATIC(0x427f20u,427);
}
B429a17:L429a17:{c.instructions+=1;NFSU2_TR(0x429a17);
{goto L429a1b;}
}
B429a19:L429a19:{c.instructions+=1;NFSU2_TR(0x429a19);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B429a1b:L429a1b:{c.instructions+=16;NFSU2_TR(0x429a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429a1f:{NFSU2_TR(0x429a1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a22:{NFSU2_TR(0x429a22);
w4(R+0,u32(0xffull));
}
B429a27:{NFSU2_TR(0x429a27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a2d:{NFSU2_TR(0x429a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a33:{NFSU2_TR(0x429a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a39:{NFSU2_TR(0x429a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a3f:{NFSU2_TR(0x429a3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B429a45:{NFSU2_TR(0x429a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429a46:{NFSU2_TR(0x429a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429a50:{NFSU2_TR(0x429a50);
__builtin_memmove((R+0),(R+24),4);
}
B429a52:{NFSU2_TR(0x429a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429a53:{NFSU2_TR(0x429a53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429a54:{NFSU2_TR(0x429a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429a5b:{NFSU2_TR(0x429a5b);
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
B429a5e:{NFSU2_TR(0x429a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429a70:L429a70:{c.instructions+=8;NFSU2_TR(0x429a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a71:{NFSU2_TR(0x429a71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B429a75:{NFSU2_TR(0x429a75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a76:{NFSU2_TR(0x429a76);
u8 U[4];
w4(U+0,u32(0x785b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a7b:{NFSU2_TR(0x429a7b);
__builtin_memmove((R+28),(R+4),4);
}
B429a7d:{NFSU2_TR(0x429a7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a7f:{NFSU2_TR(0x429a7f);
__builtin_memmove((R+4),(R+24),4);
}
B429a81:{NFSU2_TR(0x429a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429a86ull));
TAIL_STATIC(0x578ce0u,578);
}
B429a86:L429a86:{c.instructions+=3;NFSU2_TR(0x429a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a87:{NFSU2_TR(0x429a87);
__builtin_memmove((R+4),(R+28),4);
}
B429a89:{NFSU2_TR(0x429a89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429a8eull));
TAIL_STATIC(0x428260u,428);
}
B429a8e:L429a8e:{c.instructions+=4;NFSU2_TR(0x429a8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x798ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429a94:{NFSU2_TR(0x429a94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a95:{NFSU2_TR(0x429a95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429a96:{NFSU2_TR(0x429a96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429a9bull));
TAIL_STATIC(0x60bd10u,60b);
}
B429a9b:L429a9b:{c.instructions+=5;NFSU2_TR(0x429a9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B429a9e:{NFSU2_TR(0x429a9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x79cull))));
__builtin_memmove((R+4),(U+0),4);
}
B429aa4:{NFSU2_TR(0x429aa4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429aa5:{NFSU2_TR(0x429aa5);
__builtin_memmove((R+4),(R+24),4);
}
B429aa7:{NFSU2_TR(0x429aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429aacull));
TAIL_STATIC(0x571770u,571);
}
B429aac:L429aac:{c.instructions+=4;NFSU2_TR(0x429aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7a0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B429ab2:{NFSU2_TR(0x429ab2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ab3:{NFSU2_TR(0x429ab3);
__builtin_memmove((R+4),(R+24),4);
}
B429ab5:{NFSU2_TR(0x429ab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429abaull));
TAIL_STATIC(0x571770u,571);
}
B429aba:L429aba:{c.instructions+=5;NFSU2_TR(0x429aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429ac0:{NFSU2_TR(0x429ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429ac3:{NFSU2_TR(0x429ac3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ac4:{NFSU2_TR(0x429ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ac5:{NFSU2_TR(0x429ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429acaull));
TAIL_STATIC(0x57b980u,57b);
}
B429aca:L429aca:{c.instructions+=4;NFSU2_TR(0x429aca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7a8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429ad0:{NFSU2_TR(0x429ad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ad1:{NFSU2_TR(0x429ad1);
__builtin_memmove((R+4),(R+24),4);
}
B429ad3:{NFSU2_TR(0x429ad3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ad8ull));
TAIL_STATIC(0x571770u,571);
}
B429ad8:L429ad8:{c.instructions+=4;NFSU2_TR(0x429ad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7acull))));
__builtin_memmove((R+8),(U+0),4);
}
B429ade:{NFSU2_TR(0x429ade);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429adf:{NFSU2_TR(0x429adf);
__builtin_memmove((R+4),(R+24),4);
}
B429ae1:{NFSU2_TR(0x429ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ae6ull));
TAIL_STATIC(0x571770u,571);
}
B429ae6:L429ae6:{c.instructions+=4;NFSU2_TR(0x429ae6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x7b0ull))));
}
B429aec:{NFSU2_TR(0x429aec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429aed:{NFSU2_TR(0x429aed);
__builtin_memmove((R+4),(R+24),4);
}
B429aef:{NFSU2_TR(0x429aef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429af4ull));
TAIL_STATIC(0x571770u,571);
}
B429af4:L429af4:{c.instructions+=2;NFSU2_TR(0x429af4);
__builtin_memmove((R+4),(R+24),4);
}
B429af6:{NFSU2_TR(0x429af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429afbull));
TAIL_STATIC(0x578d90u,578);
}
B429afb:L429afb:{c.instructions+=3;NFSU2_TR(0x429afb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429afc:{NFSU2_TR(0x429afc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429afd:{NFSU2_TR(0x429afd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429b00:L429b00:{c.instructions+=4;NFSU2_TR(0x429b00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b01:{NFSU2_TR(0x429b01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b02:{NFSU2_TR(0x429b02);
__builtin_memmove((R+28),(R+4),4);
}
B429b04:{NFSU2_TR(0x429b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429b09ull));
TAIL_STATIC(0x402070u,402);
}
B429b09:L429b09:{c.instructions+=3;NFSU2_TR(0x429b09);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B429b0e:{NFSU2_TR(0x429b0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b0f:{NFSU2_TR(0x429b0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429b14ull));
TAIL_STATIC(0x440e50u,440);
}
B429b14:L429b14:{c.instructions+=4;NFSU2_TR(0x429b14);
__builtin_memmove((R+24),(R+0),4);
}
B429b16:{NFSU2_TR(0x429b16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B429b19:{NFSU2_TR(0x429b19);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B429b1b:{NFSU2_TR(0x429b1b);
if(r1(R+518)){{goto L429b4f;}}
}
B429b1d:L429b1d:{c.instructions+=3;NFSU2_TR(0x429b1d);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b22:{NFSU2_TR(0x429b22);
__builtin_memmove((R+4),(R+24),4);
}
B429b24:{NFSU2_TR(0x429b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429b29ull));
TAIL_STATIC(0x40c960u,40c);
}
B429b29:L429b29:{c.instructions+=7;NFSU2_TR(0x429b29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429b2d:{NFSU2_TR(0x429b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429b30:{NFSU2_TR(0x429b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B429b37:{NFSU2_TR(0x429b37);
u8 U[4];
w4(U+0,u32(0x784af8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B429b3d:{NFSU2_TR(0x429b3d);
__builtin_memmove((R+4),(R+28),4);
}
B429b3f:{NFSU2_TR(0x429b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429b45:{NFSU2_TR(0x429b45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429b4aull));
TAIL_STATIC(0x428490u,428);
}
B429b4a:L429b4a:{c.instructions+=3;NFSU2_TR(0x429b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429b4b:{NFSU2_TR(0x429b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429b4c:{NFSU2_TR(0x429b4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429b4f:L429b4f:{c.instructions+=4;NFSU2_TR(0x429b4f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B429b51:{NFSU2_TR(0x429b51);
__builtin_memmove((R+4),(R+28),4);
}
B429b53:{NFSU2_TR(0x429b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429b59:{NFSU2_TR(0x429b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429b5eull));
TAIL_STATIC(0x428490u,428);
}
B429b5e:L429b5e:{c.instructions+=3;NFSU2_TR(0x429b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429b5f:{NFSU2_TR(0x429b5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429b60:{NFSU2_TR(0x429b60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429b70:L429b70:{c.instructions+=13;NFSU2_TR(0x429b70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b71:{NFSU2_TR(0x429b71);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429b77:{NFSU2_TR(0x429b77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b78:{NFSU2_TR(0x429b78);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429b7e:{NFSU2_TR(0x429b7e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b7f:{NFSU2_TR(0x429b7f);
__builtin_memmove((R+12),(R+4),4);
}
B429b81:{NFSU2_TR(0x429b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B429b84:{NFSU2_TR(0x429b84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429b85:{NFSU2_TR(0x429b85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B429b88:{NFSU2_TR(0x429b88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429b8a:{NFSU2_TR(0x429b8a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429b8d:{NFSU2_TR(0x429b8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429b91:{NFSU2_TR(0x429b91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429cab;}}
}
B429b97:L429b97:{c.instructions+=2;NFSU2_TR(0x429b97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429b9a:{NFSU2_TR(0x429b9a);
if(r1(R+518)){{goto L429baa;}}
}
B429b9c:L429b9c:{c.instructions+=3;NFSU2_TR(0x429b9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429b9f:{NFSU2_TR(0x429b9f);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429ba4:{NFSU2_TR(0x429ba4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429c7b;}}
}
B429baa:L429baa:{c.instructions+=3;NFSU2_TR(0x429baa);
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
B429bad:{NFSU2_TR(0x429bad);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429bb2:{NFSU2_TR(0x429bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429c7b;}}
}
B429bb8:L429bb8:{c.instructions+=3;NFSU2_TR(0x429bb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429bba:{NFSU2_TR(0x429bba);
__builtin_memmove((R+4),(R+28),4);
}
B429bbc:{NFSU2_TR(0x429bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429bc1ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B429bc1:L429bc1:{c.instructions+=3;NFSU2_TR(0x429bc1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429bc3:{NFSU2_TR(0x429bc3);
__builtin_memmove((R+4),(R+28),4);
}
B429bc5:{NFSU2_TR(0x429bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429bcaull));
TAIL_STATIC(0x5eb900u,5eb);
}
B429bca:L429bca:{c.instructions+=3;NFSU2_TR(0x429bca);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429bcf:{NFSU2_TR(0x429bcf);
__builtin_memmove((R+4),(R+28),4);
}
B429bd1:{NFSU2_TR(0x429bd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429bd6ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B429bd6:L429bd6:{c.instructions+=32;NFSU2_TR(0x429bd6);
__builtin_memmove((R+0),gp(0x89e7b8),4);
}
B429bdb:{NFSU2_TR(0x429bdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429bde:{NFSU2_TR(0x429bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429be2:{NFSU2_TR(0x429be2);
__builtin_memmove((R+8),(R+0),4);
}
B429be4:{NFSU2_TR(0x429be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429bea:{NFSU2_TR(0x429bea);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429bed:{NFSU2_TR(0x429bed);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429bf0:{NFSU2_TR(0x429bf0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429bf4:{NFSU2_TR(0x429bf4);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B429bf7:{NFSU2_TR(0x429bf7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429bfa:{NFSU2_TR(0x429bfa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B429bfc:{NFSU2_TR(0x429bfc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B429c00:{NFSU2_TR(0x429c00);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c03:{NFSU2_TR(0x429c03);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B429c07:{NFSU2_TR(0x429c07);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c0a:{NFSU2_TR(0x429c0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429c0d:{NFSU2_TR(0x429c0d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429c10:{NFSU2_TR(0x429c10);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B429c14:{NFSU2_TR(0x429c14);
{u32 ea_=u32(r4(R+4)+u32(752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c1a:{NFSU2_TR(0x429c1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429c1d:{NFSU2_TR(0x429c1d);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429c20:{NFSU2_TR(0x429c20);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B429c24:{NFSU2_TR(0x429c24);
{u32 ea_=u32(r4(R+4)+u32(756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c2a:{NFSU2_TR(0x429c2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429c2d:{NFSU2_TR(0x429c2d);
{u32 ea_=u32(r4(R+0)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429c33:{NFSU2_TR(0x429c33);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B429c37:{NFSU2_TR(0x429c37);
{u32 ea_=u32(r4(R+4)+u32(760u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c3d:{NFSU2_TR(0x429c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429c40:{NFSU2_TR(0x429c40);
{u32 ea_=u32(r4(R+8)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429c46:{NFSU2_TR(0x429c46);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B429c4a:{NFSU2_TR(0x429c4a);
{u32 ea_=u32(r4(R+4)+u32(764u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429c50:{NFSU2_TR(0x429c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c55ull));
TAIL_STATIC(0x5923e0u,592);
}
B429c55:L429c55:{c.instructions+=2;NFSU2_TR(0x429c55);
__builtin_memmove((R+4),(R+24),4);
}
B429c57:{NFSU2_TR(0x429c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c5cull));
TAIL_STATIC(0x5ebc00u,5eb);
}
B429c5c:L429c5c:{c.instructions+=4;NFSU2_TR(0x429c5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429c60:{NFSU2_TR(0x429c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429c61:{NFSU2_TR(0x429c61);
__builtin_memmove((R+4),(R+12),4);
}
B429c63:{NFSU2_TR(0x429c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x429b00u);}goto L429b00;}
}
B429c68:L429c68:{c.instructions+=5;NFSU2_TR(0x429c68);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429c6c:{NFSU2_TR(0x429c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429c6e:{NFSU2_TR(0x429c6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429c6f:{NFSU2_TR(0x429c6f);
__builtin_memmove((R+4),(R+28),4);
}
B429c71:{NFSU2_TR(0x429c71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429c74:L429c74:{c.instructions+=5;NFSU2_TR(0x429c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429c75:{NFSU2_TR(0x429c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429c76:{NFSU2_TR(0x429c76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429c77:{NFSU2_TR(0x429c77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429c78:{NFSU2_TR(0x429c78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429c7b:L429c7b:{c.instructions+=2;NFSU2_TR(0x429c7b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B429c7e:{NFSU2_TR(0x429c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429cd8;}}
}
B429c80:L429c80:{c.instructions+=2;NFSU2_TR(0x429c80);
__builtin_memmove((R+4),(R+12),4);
}
B429c82:{NFSU2_TR(0x429c82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c87ull));
TAIL_STATIC(0x402070u,402);
}
B429c87:L429c87:{c.instructions+=3;NFSU2_TR(0x429c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429c89:{NFSU2_TR(0x429c89);
__builtin_memmove((R+4),(R+12),4);
}
B429c8b:{NFSU2_TR(0x429c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429c91:L429c91:{c.instructions+=2;NFSU2_TR(0x429c91);
__builtin_memmove((R+4),(R+12),4);
}
B429c93:{NFSU2_TR(0x429c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429c98ull));
TAIL_STATIC(0x428490u,428);
}
B429c98:L429c98:{c.instructions+=5;NFSU2_TR(0x429c98);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429c9c:{NFSU2_TR(0x429c9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429c9e:{NFSU2_TR(0x429c9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429c9f:{NFSU2_TR(0x429c9f);
__builtin_memmove((R+4),(R+28),4);
}
B429ca1:{NFSU2_TR(0x429ca1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ca4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429ca4:L429ca4:{c.instructions+=5;NFSU2_TR(0x429ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429ca5:{NFSU2_TR(0x429ca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429ca6:{NFSU2_TR(0x429ca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429ca7:{NFSU2_TR(0x429ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429ca8:{NFSU2_TR(0x429ca8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429cab:L429cab:{c.instructions+=5;NFSU2_TR(0x429cab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B429cae:{NFSU2_TR(0x429cae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B429cb1:{NFSU2_TR(0x429cb1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B429cb4:{NFSU2_TR(0x429cb4);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B429cb8:{NFSU2_TR(0x429cb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429cd8;}}
}
B429cba:L429cba:{c.instructions+=3;NFSU2_TR(0x429cba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cbc:{NFSU2_TR(0x429cbc);
__builtin_memmove((R+4),(R+28),4);
}
B429cbe:{NFSU2_TR(0x429cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429cc3ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B429cc3:L429cc3:{c.instructions+=3;NFSU2_TR(0x429cc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cc5:{NFSU2_TR(0x429cc5);
__builtin_memmove((R+4),(R+28),4);
}
B429cc7:{NFSU2_TR(0x429cc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429cccull));
TAIL_STATIC(0x5eb900u,5eb);
}
B429ccc:L429ccc:{c.instructions+=3;NFSU2_TR(0x429ccc);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cd1:{NFSU2_TR(0x429cd1);
__builtin_memmove((R+4),(R+28),4);
}
B429cd3:{NFSU2_TR(0x429cd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429cd8ull));
TAIL_STATIC(0x5eb910u,5eb);
}
B429cd8:L429cd8:{c.instructions+=5;NFSU2_TR(0x429cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429cdc:{NFSU2_TR(0x429cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429cde:{NFSU2_TR(0x429cde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cdf:{NFSU2_TR(0x429cdf);
__builtin_memmove((R+4),(R+28),4);
}
B429ce1:{NFSU2_TR(0x429ce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ce4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429ce4:L429ce4:{c.instructions+=5;NFSU2_TR(0x429ce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429ce5:{NFSU2_TR(0x429ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429ce6:{NFSU2_TR(0x429ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429ce7:{NFSU2_TR(0x429ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429ce8:{NFSU2_TR(0x429ce8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429cf0:L429cf0:{c.instructions+=8;NFSU2_TR(0x429cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cf1:{NFSU2_TR(0x429cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B429cf5:{NFSU2_TR(0x429cf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cf6:{NFSU2_TR(0x429cf6);
u8 U[4];
w4(U+0,u32(0x785b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cfb:{NFSU2_TR(0x429cfb);
__builtin_memmove((R+28),(R+4),4);
}
B429cfd:{NFSU2_TR(0x429cfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429cff:{NFSU2_TR(0x429cff);
__builtin_memmove((R+4),(R+24),4);
}
B429d01:{NFSU2_TR(0x429d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d06ull));
TAIL_STATIC(0x578ce0u,578);
}
B429d06:L429d06:{c.instructions+=7;NFSU2_TR(0x429d06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d08:{NFSU2_TR(0x429d08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d0a:{NFSU2_TR(0x429d0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d0c:{NFSU2_TR(0x429d0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x798ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429d12:{NFSU2_TR(0x429d12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d13:{NFSU2_TR(0x429d13);
__builtin_memmove((R+4),(R+24),4);
}
B429d15:{NFSU2_TR(0x429d15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d1aull));
TAIL_STATIC(0x571640u,571);
}
B429d1a:L429d1a:{c.instructions+=7;NFSU2_TR(0x429d1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d1c:{NFSU2_TR(0x429d1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d1e:{NFSU2_TR(0x429d1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d20:{NFSU2_TR(0x429d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77cull))));
__builtin_memmove((R+4),(U+0),4);
}
B429d26:{NFSU2_TR(0x429d26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d27:{NFSU2_TR(0x429d27);
__builtin_memmove((R+4),(R+24),4);
}
B429d29:{NFSU2_TR(0x429d29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d2eull));
TAIL_STATIC(0x571640u,571);
}
B429d2e:L429d2e:{c.instructions+=7;NFSU2_TR(0x429d2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d30:{NFSU2_TR(0x429d30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d32:{NFSU2_TR(0x429d32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d34:{NFSU2_TR(0x429d34);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x77dull))));
__builtin_memmove((R+8),(U+0),4);
}
B429d3a:{NFSU2_TR(0x429d3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d3b:{NFSU2_TR(0x429d3b);
__builtin_memmove((R+4),(R+24),4);
}
B429d3d:{NFSU2_TR(0x429d3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d42ull));
TAIL_STATIC(0x571640u,571);
}
B429d42:L429d42:{c.instructions+=4;NFSU2_TR(0x429d42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x799ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429d48:{NFSU2_TR(0x429d48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d49:{NFSU2_TR(0x429d49);
__builtin_memmove((R+4),(R+24),4);
}
B429d4b:{NFSU2_TR(0x429d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d50ull));
TAIL_STATIC(0x5716c0u,571);
}
B429d50:L429d50:{c.instructions+=4;NFSU2_TR(0x429d50);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x79cull))));
__builtin_memmove((R+4),(U+0),4);
}
B429d56:{NFSU2_TR(0x429d56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d57:{NFSU2_TR(0x429d57);
__builtin_memmove((R+4),(R+24),4);
}
B429d59:{NFSU2_TR(0x429d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d5eull));
TAIL_STATIC(0x571770u,571);
}
B429d5e:L429d5e:{c.instructions+=4;NFSU2_TR(0x429d5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7a4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B429d64:{NFSU2_TR(0x429d64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d65:{NFSU2_TR(0x429d65);
__builtin_memmove((R+4),(R+24),4);
}
B429d67:{NFSU2_TR(0x429d67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d6cull));
TAIL_STATIC(0x571770u,571);
}
B429d6c:L429d6c:{c.instructions+=4;NFSU2_TR(0x429d6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429d72:{NFSU2_TR(0x429d72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d73:{NFSU2_TR(0x429d73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d74:{NFSU2_TR(0x429d74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d79ull));
TAIL_STATIC(0x409ad0u,409);
}
B429d79:L429d79:{c.instructions+=4;NFSU2_TR(0x429d79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B429d7c:{NFSU2_TR(0x429d7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d7d:{NFSU2_TR(0x429d7d);
__builtin_memmove((R+4),(R+28),4);
}
B429d7f:{NFSU2_TR(0x429d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d84ull));
TAIL_STATIC(0x428260u,428);
}
B429d84:L429d84:{c.instructions+=2;NFSU2_TR(0x429d84);
__builtin_memmove((R+4),(R+24),4);
}
B429d86:{NFSU2_TR(0x429d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d8bull));
TAIL_STATIC(0x578d90u,578);
}
B429d8b:L429d8b:{c.instructions+=3;NFSU2_TR(0x429d8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429d8c:{NFSU2_TR(0x429d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429d8d:{NFSU2_TR(0x429d8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429d90:L429d90:{c.instructions+=5;NFSU2_TR(0x429d90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d91:{NFSU2_TR(0x429d91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429d92:{NFSU2_TR(0x429d92);
__builtin_memmove((R+24),(R+4),4);
}
B429d94:{NFSU2_TR(0x429d94);
w4(R+4,u32(0x827e88ull));
}
B429d99:{NFSU2_TR(0x429d99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429d9eull));
TAIL_STATIC(0x430340u,430);
}
B429d9e:L429d9e:{c.instructions+=2;NFSU2_TR(0x429d9e);
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
B429da0:{NFSU2_TR(0x429da0);
if(r1(R+518)){TAIL_STATIC(0x42a03eu,42a);}
}
B429da6:L429da6:{c.instructions+=3;NFSU2_TR(0x429da6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429dac:{NFSU2_TR(0x429dac);
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
B429dae:{NFSU2_TR(0x429dae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42a03eu,42a);}
}
B429db4:L429db4:{c.instructions+=5;NFSU2_TR(0x429db4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429db5:{NFSU2_TR(0x429db5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429db6:{NFSU2_TR(0x429db6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429db7:{NFSU2_TR(0x429db7);
__builtin_memmove((R+4),(R+24),4);
}
B429db9:{NFSU2_TR(0x429db9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429dbeull));
TAIL_STATIC(0x408de0u,408);
}
B429dbe:L429dbe:{c.instructions+=10;NFSU2_TR(0x429dbe);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429dc4:{NFSU2_TR(0x429dc4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B429dc8:{NFSU2_TR(0x429dc8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429dcc:{NFSU2_TR(0x429dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429dd0:{NFSU2_TR(0x429dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429dd6:{NFSU2_TR(0x429dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429dd9:{NFSU2_TR(0x429dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429ddc:{NFSU2_TR(0x429ddc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429de0:{NFSU2_TR(0x429de0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B429de4:{NFSU2_TR(0x429de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429e24;}}
}
B429de6:L429de6:{c.instructions+=10;NFSU2_TR(0x429de6);
__builtin_memmove((R+28),gp(0x890080),4);
}
B429dec:{NFSU2_TR(0x429dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B429def:{NFSU2_TR(0x429def);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429df2:{NFSU2_TR(0x429df2);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B429df7:{NFSU2_TR(0x429df7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+20))));
}
B429df9:{NFSU2_TR(0x429df9);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B429dfa:{NFSU2_TR(0x429dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B429dfd:{NFSU2_TR(0x429dfd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x429dfd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x429dfd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B429dff:{NFSU2_TR(0x429dff);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B429e02:{NFSU2_TR(0x429e02);
if(r1(R+518)){TAIL_STATIC(0x42a03bu,42a);}
}
B429e08:L429e08:{c.instructions+=3;NFSU2_TR(0x429e08);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B429e0a:{NFSU2_TR(0x429e0a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B429e0c:{NFSU2_TR(0x429e0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x42a03bu,42a);}
}
B429e12:L429e12:{c.instructions+=4;NFSU2_TR(0x429e12);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B429e14:{NFSU2_TR(0x429e14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B429e18:{NFSU2_TR(0x429e18);
u8 U[30];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+22)));
w4(U+26,u32(u32(r4(R+8))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B429e1c:{NFSU2_TR(0x429e1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42a03bu,42a);}
}
B429e22:L429e22:{c.instructions+=1;NFSU2_TR(0x429e22);
{goto L429e39;}
}
B429e24:L429e24:{c.instructions+=5;NFSU2_TR(0x429e24);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429e28:{NFSU2_TR(0x429e28);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B429e2e:{NFSU2_TR(0x429e2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B429e30:{NFSU2_TR(0x429e30);
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
B429e33:{NFSU2_TR(0x429e33);
if(r1(R+514)){TAIL_STATIC(0x42a03bu,42a);}
}
B429e39:L429e39:{c.instructions+=5;NFSU2_TR(0x429e39);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429e3d:{NFSU2_TR(0x429e3d);
__builtin_memmove((R+4),(R+24),4);
}
B429e3f:{NFSU2_TR(0x429e3f);
{u32 ea_=u32(u32(7879548u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B429e45:{NFSU2_TR(0x429e45);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429e4b:{NFSU2_TR(0x429e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e50ull));
TAIL_STATIC(0x413800u,413);
}
B429e50:L429e50:{c.instructions+=4;NFSU2_TR(0x429e50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429e56:{NFSU2_TR(0x429e56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429e58:{NFSU2_TR(0x429e58);
__builtin_memmove((R+4),(R+24),4);
}
B429e5a:{NFSU2_TR(0x429e5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429f2b;}}
}
B429e60:L429e60:{c.instructions+=1;NFSU2_TR(0x429e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e65ull));
TAIL_STATIC(0x41d0e0u,41d);
}
B429e65:L429e65:{c.instructions+=4;NFSU2_TR(0x429e65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429e68:{NFSU2_TR(0x429e68);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429e69:{NFSU2_TR(0x429e69);
__builtin_memmove((R+4),(R+28),4);
}
B429e6b:{NFSU2_TR(0x429e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e70ull));
TAIL_STATIC(0x428720u,428);
}
B429e70:L429e70:{c.instructions+=3;NFSU2_TR(0x429e70);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429e72:{NFSU2_TR(0x429e72);
__builtin_memmove((R+4),(R+24),4);
}
B429e74:{NFSU2_TR(0x429e74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429ea1;}}
}
B429e76:L429e76:{c.instructions+=1;NFSU2_TR(0x429e76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e7bull));
TAIL_STATIC(0x4023e0u,402);
}
B429e7b:L429e7b:{c.instructions+=7;NFSU2_TR(0x429e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429e7e:{NFSU2_TR(0x429e7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429e80:{NFSU2_TR(0x429e80);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429e82:{NFSU2_TR(0x429e82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429e84:{NFSU2_TR(0x429e84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429e86:{NFSU2_TR(0x429e86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429e88:{NFSU2_TR(0x429e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429e8b:L429e8b:{c.instructions+=3;NFSU2_TR(0x429e8b);
__builtin_memmove((R+4),(R+24),4);
}
B429e8d:{NFSU2_TR(0x429e8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429e94:{NFSU2_TR(0x429e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429e99ull));
TAIL_STATIC(0x41bf80u,41b);
}
B429e99:L429e99:{c.instructions+=6;NFSU2_TR(0x429e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429e9a:{NFSU2_TR(0x429e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B429e9b:{NFSU2_TR(0x429e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429e9c:{NFSU2_TR(0x429e9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429e9d:{NFSU2_TR(0x429e9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429e9e:{NFSU2_TR(0x429e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429ea1:L429ea1:{c.instructions+=1;NFSU2_TR(0x429ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ea6ull));
TAIL_STATIC(0x417750u,417);
}
B429ea6:L429ea6:{c.instructions+=3;NFSU2_TR(0x429ea6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429ea8:{NFSU2_TR(0x429ea8);
__builtin_memmove((R+4),(R+24),4);
}
B429eaa:{NFSU2_TR(0x429eaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429f2b;}}
}
B429eac:L429eac:{c.instructions+=1;NFSU2_TR(0x429eac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429eb1ull));
TAIL_STATIC(0x417890u,417);
}
B429eb1:L429eb1:{c.instructions+=11;NFSU2_TR(0x429eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429eb7:{NFSU2_TR(0x429eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429eba:{NFSU2_TR(0x429eba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ebb:{NFSU2_TR(0x429ebb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B429ec2:{NFSU2_TR(0x429ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B429ec5:{NFSU2_TR(0x429ec5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B429ec8:{NFSU2_TR(0x429ec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ec9:{NFSU2_TR(0x429ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429ecf:{NFSU2_TR(0x429ecf);
{u32 ea_=u32(r4(R+0)+r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B429ed3:{NFSU2_TR(0x429ed3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B429ed6:{NFSU2_TR(0x429ed6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429edbull));
TAIL_STATIC(0x40abb0u,40a);
}
B429edb:L429edb:{c.instructions+=2;NFSU2_TR(0x429edb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429edd:{NFSU2_TR(0x429edd);
if(r1(R+518)){{goto L429ee8;}}
}
B429edf:L429edf:{c.instructions+=2;NFSU2_TR(0x429edf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429ee6:{NFSU2_TR(0x429ee6);
{goto L429f01;}
}
B429ee8:L429ee8:{c.instructions+=4;NFSU2_TR(0x429ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429eee:{NFSU2_TR(0x429eee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429eef:{NFSU2_TR(0x429eef);
__builtin_memmove((R+4),(R+24),4);
}
B429ef1:{NFSU2_TR(0x429ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ef6ull));
TAIL_STATIC(0x410620u,410);
}
B429ef6:L429ef6:{c.instructions+=2;NFSU2_TR(0x429ef6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429ef8:{NFSU2_TR(0x429ef8);
if(r1(R+518)){{goto L429f01;}}
}
B429efa:L429efa:{c.instructions+=1;NFSU2_TR(0x429efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429f01:L429f01:{c.instructions+=3;NFSU2_TR(0x429f01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B429f07:{NFSU2_TR(0x429f07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B429f09:{NFSU2_TR(0x429f09);
if(r1(R+518)){{goto L429f56;}}
}
B429f0b:L429f0b:{c.instructions+=2;NFSU2_TR(0x429f0b);
__builtin_memmove((R+4),(R+24),4);
}
B429f0d:{NFSU2_TR(0x429f0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f12ull));
TAIL_STATIC(0x4020d0u,402);
}
B429f12:L429f12:{c.instructions+=7;NFSU2_TR(0x429f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429f15:{NFSU2_TR(0x429f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429f17:{NFSU2_TR(0x429f17);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f19:{NFSU2_TR(0x429f19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f1b:{NFSU2_TR(0x429f1b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f1d:{NFSU2_TR(0x429f1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f1f:{NFSU2_TR(0x429f1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429f22:L429f22:{c.instructions+=2;NFSU2_TR(0x429f22);
__builtin_memmove((R+4),(R+24),4);
}
B429f24:{NFSU2_TR(0x429f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f29ull));
TAIL_STATIC(0x4023e0u,402);
}
B429f29:L429f29:{c.instructions+=1;NFSU2_TR(0x429f29);
__builtin_memmove((R+4),(R+24),4);
}
B429f2b:L429f2b:{c.instructions+=1;NFSU2_TR(0x429f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f30ull));
TAIL_STATIC(0x4023e0u,402);
}
B429f30:L429f30:{c.instructions+=7;NFSU2_TR(0x429f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429f33:{NFSU2_TR(0x429f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B429f35:{NFSU2_TR(0x429f35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f37:{NFSU2_TR(0x429f37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f39:{NFSU2_TR(0x429f39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f3b:{NFSU2_TR(0x429f3b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f3d:{NFSU2_TR(0x429f3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f40ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429f40:L429f40:{c.instructions+=3;NFSU2_TR(0x429f40);
__builtin_memmove((R+4),(R+24),4);
}
B429f42:{NFSU2_TR(0x429f42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B429f49:{NFSU2_TR(0x429f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f4eull));
TAIL_STATIC(0x41bf80u,41b);
}
B429f4e:L429f4e:{c.instructions+=6;NFSU2_TR(0x429f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B429f4f:{NFSU2_TR(0x429f4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B429f50:{NFSU2_TR(0x429f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B429f51:{NFSU2_TR(0x429f51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B429f52:{NFSU2_TR(0x429f52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B429f53:{NFSU2_TR(0x429f53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B429f56:L429f56:{c.instructions+=3;NFSU2_TR(0x429f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B429f5c:{NFSU2_TR(0x429f5c);
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
B429f5e:{NFSU2_TR(0x429f5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429f6a;}}
}
B429f60:L429f60:{c.instructions+=3;NFSU2_TR(0x429f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429f62:{NFSU2_TR(0x429f62);
__builtin_memmove((R+4),(R+24),4);
}
B429f64:{NFSU2_TR(0x429f64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429f6a:L429f6a:{c.instructions+=5;NFSU2_TR(0x429f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429f70:{NFSU2_TR(0x429f70);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B429f73:{NFSU2_TR(0x429f73);
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
B429f75:{NFSU2_TR(0x429f75);
w4(R+12,u32(0x16ull));
}
B429f7a:{NFSU2_TR(0x429f7a);
if(r1(R+518)){{goto L429fc4;}}
}
B429f7c:L429f7c:{c.instructions+=2;NFSU2_TR(0x429f7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429f7d:{NFSU2_TR(0x429f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f82ull));
TAIL_STATIC(0x403120u,403);
}
B429f82:L429f82:{c.instructions+=3;NFSU2_TR(0x429f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B429f88:{NFSU2_TR(0x429f88);
__builtin_memmove((R+4),(R+28),4);
}
B429f8a:{NFSU2_TR(0x429f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429f8full));
TAIL_STATIC(0x401990u,401);
}
B429f8f:L429f8f:{c.instructions+=2;NFSU2_TR(0x429f8f);
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
B429f91:{NFSU2_TR(0x429f91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L429f9f;}}
}
B429f93:L429f93:{c.instructions+=2;NFSU2_TR(0x429f93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B429f99:{NFSU2_TR(0x429f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B429f9f:L429f9f:{c.instructions+=7;NFSU2_TR(0x429f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429fa5:{NFSU2_TR(0x429fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429fa7:{NFSU2_TR(0x429fa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429fa8:{NFSU2_TR(0x429fa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429fa9:{NFSU2_TR(0x429fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429fac:{NFSU2_TR(0x429fac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429fad:{NFSU2_TR(0x429fad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429fb0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429fb0:L429fb0:{c.instructions+=3;NFSU2_TR(0x429fb0);
__builtin_memmove((R+28),(R+0),4);
}
B429fb2:{NFSU2_TR(0x429fb2);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B429fb8:{NFSU2_TR(0x429fb8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L429fd1;}}
}
B429fba:L429fba:{c.instructions+=4;NFSU2_TR(0x429fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B429fbc:{NFSU2_TR(0x429fbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429fbe:{NFSU2_TR(0x429fbe);
__builtin_memmove((R+4),(R+28),4);
}
B429fc0:{NFSU2_TR(0x429fc0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429fc2ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B429fc2:L429fc2:{c.instructions+=1;NFSU2_TR(0x429fc2);
TAIL_STATIC(0x42a02du,42a);
}
B429fc4:L429fc4:{c.instructions+=3;NFSU2_TR(0x429fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429fca:{NFSU2_TR(0x429fca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429fcc:{NFSU2_TR(0x429fcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429fcfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429fcf:L429fcf:{c.instructions+=1;NFSU2_TR(0x429fcf);
__builtin_memmove((R+28),(R+0),4);
}
B429fd1:L429fd1:{c.instructions+=2;NFSU2_TR(0x429fd1);
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
B429fd3:{NFSU2_TR(0x429fd3);
if(r1(R+518)){TAIL_STATIC(0x42a02du,42a);}
}
B429fd5:L429fd5:{c.instructions+=3;NFSU2_TR(0x429fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429fdb:{NFSU2_TR(0x429fdb);
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
B429fdd:{NFSU2_TR(0x429fdd);
if(r1(R+518)){{goto L429ff8;}}
}
B429fdf:L429fdf:{c.instructions+=4;NFSU2_TR(0x429fdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B429fe1:{NFSU2_TR(0x429fe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B429fe4:{NFSU2_TR(0x429fe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429fe5:{NFSU2_TR(0x429fe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429fe8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B429fe8:L429fe8:{c.instructions+=3;NFSU2_TR(0x429fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B429fee:{NFSU2_TR(0x429fee);
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
B429ff0:{NFSU2_TR(0x429ff0);
if(r1(R+518)){{goto L429ff8;}}
}
B429ff2:L429ff2:{c.instructions+=3;NFSU2_TR(0x429ff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B429ff4:{NFSU2_TR(0x429ff4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B429ff6:{NFSU2_TR(0x429ff6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x429ff8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B429ff8:L429ff8:{c.instructions+=2;NFSU2_TR(0x429ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B429ffe:{NFSU2_TR(0x429ffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
TAIL_STATIC(0x42a004u,42a);
}
XIT:NFSU2_TR_EXIT(0x429,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
