#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_463(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x469,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x469,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_469(u8* __restrict R,Cpu& c);
u32 page_469(Cpu& c){return body_469(c.regs.data(),c);}
__attribute__((noinline)) u32 body_469(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x469000:goto L469000;
case 0x469002:c.instructions+=6;goto B469002;
case 0x469005:c.instructions+=5;goto B469005;
case 0x469008:c.instructions+=4;goto B469008;
case 0x46900b:c.instructions+=3;goto B46900b;
case 0x46900e:c.instructions+=2;goto B46900e;
case 0x469010:c.instructions+=1;goto B469010;
case 0x469012:goto L469012;
case 0x469015:c.instructions+=1;goto B469015;
case 0x469017:goto L469017;
case 0x46901a:c.instructions+=2;goto B46901a;
case 0x46901c:c.instructions+=1;goto B46901c;
case 0x46901e:goto L46901e;
case 0x46901f:c.instructions+=3;goto B46901f;
case 0x469020:c.instructions+=2;goto B469020;
case 0x469022:c.instructions+=1;goto B469022;
case 0x469025:goto L469025;
case 0x46902b:c.instructions+=2;goto B46902b;
case 0x469031:c.instructions+=1;goto B469031;
case 0x469033:goto L469033;
case 0x469034:c.instructions+=2;goto B469034;
case 0x469035:c.instructions+=1;goto B469035;
case 0x46903a:goto L46903a;
case 0x46903c:c.instructions+=1;goto B46903c;
case 0x469041:goto L469041;
case 0x469043:c.instructions+=1;goto B469043;
case 0x469045:goto L469045;
case 0x469047:goto L469047;
case 0x469048:c.instructions+=2;goto B469048;
case 0x469049:c.instructions+=1;goto B469049;
case 0x469050:goto L469050;
case 0x469051:c.instructions+=5;goto B469051;
case 0x469055:c.instructions+=4;goto B469055;
case 0x469058:c.instructions+=3;goto B469058;
case 0x46905d:c.instructions+=2;goto B46905d;
case 0x46905f:c.instructions+=1;goto B46905f;
case 0x469061:goto L469061;
case 0x469067:c.instructions+=2;goto B469067;
case 0x469069:c.instructions+=1;goto B469069;
case 0x46906b:goto L46906b;
case 0x469071:c.instructions+=2;goto B469071;
case 0x469073:c.instructions+=1;goto B469073;
case 0x469075:goto L469075;
case 0x469077:c.instructions+=1;goto B469077;
case 0x46907a:goto L46907a;
case 0x469080:c.instructions+=2;goto B469080;
case 0x469082:c.instructions+=1;goto B469082;
case 0x469084:goto L469084;
case 0x469086:c.instructions+=1;goto B469086;
case 0x469089:goto L469089;
case 0x46908c:c.instructions+=4;goto B46908c;
case 0x469091:c.instructions+=3;goto B469091;
case 0x469097:c.instructions+=2;goto B469097;
case 0x46909d:c.instructions+=1;goto B46909d;
case 0x4690a2:goto L4690a2;
case 0x4690a7:c.instructions+=2;goto B4690a7;
case 0x4690a8:c.instructions+=1;goto B4690a8;
case 0x4690b0:goto L4690b0;
case 0x4690b6:c.instructions+=2;goto B4690b6;
case 0x4690b8:c.instructions+=1;goto B4690b8;
case 0x4690ba:goto L4690ba;
case 0x4690bd:c.instructions+=2;goto B4690bd;
case 0x4690bf:c.instructions+=1;goto B4690bf;
case 0x4690c1:goto L4690c1;
case 0x4690c5:goto L4690c5;
case 0x4690c8:c.instructions+=1;goto B4690c8;
case 0x4690ca:goto L4690ca;
case 0x4690cd:c.instructions+=2;goto B4690cd;
case 0x4690cf:c.instructions+=1;goto B4690cf;
case 0x4690d1:goto L4690d1;
case 0x4690d3:goto L4690d3;
case 0x4690e0:goto L4690e0;
case 0x4690e5:c.instructions+=2;goto B4690e5;
case 0x4690e7:c.instructions+=1;goto B4690e7;
case 0x4690e9:goto L4690e9;
case 0x4690eb:c.instructions+=1;goto B4690eb;
case 0x4690ee:goto L4690ee;
case 0x4690ef:c.instructions+=6;goto B4690ef;
case 0x4690f0:c.instructions+=5;goto B4690f0;
case 0x4690f4:c.instructions+=4;goto B4690f4;
case 0x4690f7:c.instructions+=3;goto B4690f7;
case 0x4690fa:c.instructions+=2;goto B4690fa;
case 0x4690fd:c.instructions+=1;goto B4690fd;
case 0x4690ff:goto L4690ff;
case 0x469105:c.instructions+=2;goto B469105;
case 0x469107:c.instructions+=1;goto B469107;
case 0x469109:goto L469109;
case 0x46910f:c.instructions+=1;goto B46910f;
case 0x469111:goto L469111;
case 0x469114:c.instructions+=1;goto B469114;
case 0x469116:goto L469116;
case 0x46911c:c.instructions+=2;goto B46911c;
case 0x46911e:c.instructions+=1;goto B46911e;
case 0x469120:goto L469120;
case 0x469123:c.instructions+=1;goto B469123;
case 0x469125:goto L469125;
case 0x46912b:c.instructions+=2;goto B46912b;
case 0x46912d:c.instructions+=1;goto B46912d;
case 0x46912f:goto L46912f;
case 0x469130:c.instructions+=3;goto B469130;
case 0x469132:c.instructions+=2;goto B469132;
case 0x469133:c.instructions+=1;goto B469133;
case 0x469136:goto L469136;
case 0x469138:c.instructions+=2;goto B469138;
case 0x469139:c.instructions+=1;goto B469139;
case 0x46913c:goto L46913c;
case 0x46913d:c.instructions+=2;goto B46913d;
case 0x46913e:c.instructions+=1;goto B46913e;
case 0x469141:goto L469141;
case 0x469147:goto L469147;
case 0x469149:c.instructions+=1;goto B469149;
case 0x46914b:goto L46914b;
case 0x46914d:c.instructions+=2;goto B46914d;
case 0x46914e:c.instructions+=1;goto B46914e;
case 0x469151:goto L469151;
case 0x469152:c.instructions+=2;goto B469152;
case 0x469153:c.instructions+=1;goto B469153;
case 0x469160:goto L469160;
case 0x469165:c.instructions+=2;goto B469165;
case 0x469167:c.instructions+=1;goto B469167;
case 0x469169:goto L469169;
case 0x46916a:c.instructions+=5;goto B46916a;
case 0x46916e:c.instructions+=4;goto B46916e;
case 0x469171:c.instructions+=3;goto B469171;
case 0x469174:c.instructions+=2;goto B469174;
case 0x469177:c.instructions+=1;goto B469177;
case 0x469179:goto L469179;
case 0x46917a:c.instructions+=4;goto B46917a;
case 0x469180:c.instructions+=3;goto B469180;
case 0x469182:c.instructions+=2;goto B469182;
case 0x469183:c.instructions+=1;goto B469183;
case 0x469185:goto L469185;
case 0x46918b:c.instructions+=1;goto B46918b;
case 0x46918d:goto L46918d;
case 0x469190:c.instructions+=1;goto B469190;
case 0x469192:goto L469192;
case 0x469198:c.instructions+=2;goto B469198;
case 0x46919a:c.instructions+=1;goto B46919a;
case 0x46919c:goto L46919c;
case 0x46919e:c.instructions+=2;goto B46919e;
case 0x46919f:c.instructions+=1;goto B46919f;
case 0x4691a2:goto L4691a2;
case 0x4691a3:c.instructions+=1;goto B4691a3;
case 0x4691a6:goto L4691a6;
case 0x4691a9:c.instructions+=1;goto B4691a9;
case 0x4691ab:goto L4691ab;
case 0x4691b1:goto L4691b1;
case 0x4691b3:c.instructions+=1;goto B4691b3;
case 0x4691b5:goto L4691b5;
case 0x4691b7:c.instructions+=2;goto B4691b7;
case 0x4691b8:c.instructions+=1;goto B4691b8;
case 0x4691bb:goto L4691bb;
case 0x4691bc:goto L4691bc;
case 0x4691c0:goto L4691c0;
case 0x4691c4:c.instructions+=3;goto B4691c4;
case 0x4691c7:c.instructions+=2;goto B4691c7;
case 0x4691c9:c.instructions+=1;goto B4691c9;
case 0x4691cb:goto L4691cb;
case 0x4691cf:c.instructions+=5;goto B4691cf;
case 0x4691d3:c.instructions+=4;goto B4691d3;
case 0x4691d4:c.instructions+=3;goto B4691d4;
case 0x4691d5:c.instructions+=2;goto B4691d5;
case 0x4691da:c.instructions+=1;goto B4691da;
case 0x4691df:goto L4691df;
case 0x4691e5:c.instructions+=5;goto B4691e5;
case 0x4691e6:c.instructions+=4;goto B4691e6;
case 0x4691ea:c.instructions+=3;goto B4691ea;
case 0x4691ef:c.instructions+=2;goto B4691ef;
case 0x4691f0:c.instructions+=1;goto B4691f0;
case 0x4691f5:goto L4691f5;
case 0x4691f8:goto L4691f8;
case 0x4691fb:c.instructions+=1;goto B4691fb;
case 0x469200:goto L469200;
case 0x469204:c.instructions+=13;goto B469204;
case 0x469208:c.instructions+=12;goto B469208;
case 0x469209:c.instructions+=11;goto B469209;
case 0x46920a:c.instructions+=10;goto B46920a;
case 0x46920b:c.instructions+=9;goto B46920b;
case 0x46920c:c.instructions+=8;goto B46920c;
case 0x46920e:c.instructions+=7;goto B46920e;
case 0x469215:c.instructions+=6;goto B469215;
case 0x46921c:c.instructions+=5;goto B46921c;
case 0x46921d:c.instructions+=4;goto B46921d;
case 0x46921e:c.instructions+=3;goto B46921e;
case 0x469221:c.instructions+=2;goto B469221;
case 0x469222:c.instructions+=1;goto B469222;
case 0x469227:goto L469227;
case 0x469228:c.instructions+=1;goto B469228;
case 0x46922d:goto L46922d;
case 0x469233:c.instructions+=4;goto B469233;
case 0x469234:c.instructions+=3;goto B469234;
case 0x469236:c.instructions+=2;goto B469236;
case 0x469238:c.instructions+=1;goto B469238;
case 0x46923d:goto L46923d;
case 0x469243:c.instructions+=3;goto B469243;
case 0x469246:c.instructions+=2;goto B469246;
case 0x469248:c.instructions+=1;goto B469248;
case 0x46924a:goto L46924a;
case 0x46924f:c.instructions+=5;goto B46924f;
case 0x469252:c.instructions+=4;goto B469252;
case 0x469257:c.instructions+=3;goto B469257;
case 0x469258:c.instructions+=2;goto B469258;
case 0x469259:c.instructions+=1;goto B469259;
case 0x46925e:goto L46925e;
case 0x469261:c.instructions+=1;goto B469261;
case 0x469263:goto L469263;
case 0x469267:c.instructions+=10;goto B469267;
case 0x46926b:c.instructions+=9;goto B46926b;
case 0x46926e:c.instructions+=8;goto B46926e;
case 0x469272:c.instructions+=7;goto B469272;
case 0x469273:c.instructions+=6;goto B469273;
case 0x469278:c.instructions+=5;goto B469278;
case 0x469279:c.instructions+=4;goto B469279;
case 0x46927b:c.instructions+=3;goto B46927b;
case 0x46927c:c.instructions+=2;goto B46927c;
case 0x46927d:c.instructions+=1;goto B46927d;
case 0x469282:goto L469282;
case 0x469285:c.instructions+=8;goto B469285;
case 0x469288:c.instructions+=7;goto B469288;
case 0x469289:c.instructions+=6;goto B469289;
case 0x46928c:c.instructions+=5;goto B46928c;
case 0x46928f:c.instructions+=4;goto B46928f;
case 0x469290:c.instructions+=3;goto B469290;
case 0x469291:c.instructions+=2;goto B469291;
case 0x469292:c.instructions+=1;goto B469292;
case 0x4692a0:goto L4692a0;
case 0x4692a5:c.instructions+=5;goto B4692a5;
case 0x4692a9:c.instructions+=4;goto B4692a9;
case 0x4692ac:c.instructions+=3;goto B4692ac;
case 0x4692b1:c.instructions+=2;goto B4692b1;
case 0x4692b3:c.instructions+=1;goto B4692b3;
case 0x4692b5:goto L4692b5;
case 0x4692b8:c.instructions+=3;goto B4692b8;
case 0x4692b9:c.instructions+=2;goto B4692b9;
case 0x4692ba:c.instructions+=1;goto B4692ba;
case 0x4692bf:goto L4692bf;
case 0x4692c5:c.instructions+=3;goto B4692c5;
case 0x4692c8:c.instructions+=2;goto B4692c8;
case 0x4692cb:c.instructions+=1;goto B4692cb;
case 0x4692cc:goto L4692cc;
case 0x4692ce:c.instructions+=2;goto B4692ce;
case 0x4692cf:c.instructions+=1;goto B4692cf;
case 0x4692d4:goto L4692d4;
case 0x4692da:c.instructions+=3;goto B4692da;
case 0x4692dd:c.instructions+=2;goto B4692dd;
case 0x4692e0:c.instructions+=1;goto B4692e0;
case 0x4692f0:goto L4692f0;
case 0x4692f4:c.instructions+=4;goto B4692f4;
case 0x4692fa:c.instructions+=3;goto B4692fa;
case 0x4692fd:c.instructions+=2;goto B4692fd;
case 0x4692ff:c.instructions+=1;goto B4692ff;
case 0x469301:goto L469301;
case 0x469304:c.instructions+=1;goto B469304;
case 0x469306:goto L469306;
case 0x46930b:goto L46930b;
case 0x46930e:c.instructions+=1;goto B46930e;
case 0x469310:goto L469310;
case 0x469313:c.instructions+=1;goto B469313;
case 0x469315:goto L469315;
case 0x469318:c.instructions+=1;goto B469318;
case 0x46931a:goto L46931a;
case 0x46931d:c.instructions+=2;goto B46931d;
case 0x46931f:c.instructions+=1;goto B46931f;
case 0x469321:goto L469321;
case 0x469324:c.instructions+=2;goto B469324;
case 0x469325:c.instructions+=1;goto B469325;
case 0x469327:goto L469327;
case 0x469328:goto L469328;
case 0x469330:goto L469330;
case 0x469333:c.instructions+=13;goto B469333;
case 0x469334:c.instructions+=12;goto B469334;
case 0x469335:c.instructions+=11;goto B469335;
case 0x469336:c.instructions+=10;goto B469336;
case 0x469337:c.instructions+=9;goto B469337;
case 0x46933c:c.instructions+=8;goto B46933c;
case 0x469341:c.instructions+=7;goto B469341;
case 0x469343:c.instructions+=6;goto B469343;
case 0x469345:c.instructions+=5;goto B469345;
case 0x469347:c.instructions+=4;goto B469347;
case 0x46934a:c.instructions+=3;goto B46934a;
case 0x46934b:c.instructions+=2;goto B46934b;
case 0x469351:c.instructions+=1;goto B469351;
case 0x469356:goto L469356;
case 0x46935c:c.instructions+=8;goto B46935c;
case 0x469360:c.instructions+=7;goto B469360;
case 0x469366:c.instructions+=6;goto B469366;
case 0x469369:c.instructions+=5;goto B469369;
case 0x46936c:c.instructions+=4;goto B46936c;
case 0x469374:c.instructions+=3;goto B469374;
case 0x469376:c.instructions+=2;goto B469376;
case 0x46937b:c.instructions+=1;goto B46937b;
case 0x469380:goto L469380;
case 0x469382:goto L469382;
case 0x469384:c.instructions+=13;goto B469384;
case 0x46938b:c.instructions+=12;goto B46938b;
case 0x46938d:c.instructions+=11;goto B46938d;
case 0x469390:c.instructions+=10;goto B469390;
case 0x469393:c.instructions+=9;goto B469393;
case 0x469396:c.instructions+=8;goto B469396;
case 0x469399:c.instructions+=7;goto B469399;
case 0x46939c:c.instructions+=6;goto B46939c;
case 0x46939f:c.instructions+=5;goto B46939f;
case 0x4693a0:c.instructions+=4;goto B4693a0;
case 0x4693a3:c.instructions+=3;goto B4693a3;
case 0x4693a6:c.instructions+=2;goto B4693a6;
case 0x4693a9:c.instructions+=1;goto B4693a9;
case 0x4693ab:goto L4693ab;
case 0x4693af:c.instructions+=8;goto B4693af;
case 0x4693b5:c.instructions+=7;goto B4693b5;
case 0x4693b8:c.instructions+=6;goto B4693b8;
case 0x4693bc:c.instructions+=5;goto B4693bc;
case 0x4693c0:c.instructions+=4;goto B4693c0;
case 0x4693c3:c.instructions+=3;goto B4693c3;
case 0x4693c4:c.instructions+=2;goto B4693c4;
case 0x4693c8:c.instructions+=1;goto B4693c8;
case 0x4693ca:goto L4693ca;
case 0x4693d0:c.instructions+=12;goto B4693d0;
case 0x4693d3:c.instructions+=11;goto B4693d3;
case 0x4693d6:c.instructions+=10;goto B4693d6;
case 0x4693d9:c.instructions+=9;goto B4693d9;
case 0x4693df:c.instructions+=8;goto B4693df;
case 0x4693e5:c.instructions+=7;goto B4693e5;
case 0x4693e7:c.instructions+=6;goto B4693e7;
case 0x4693e8:c.instructions+=5;goto B4693e8;
case 0x4693e9:c.instructions+=4;goto B4693e9;
case 0x4693ea:c.instructions+=3;goto B4693ea;
case 0x4693eb:c.instructions+=2;goto B4693eb;
case 0x4693ee:c.instructions+=1;goto B4693ee;
case 0x4693f0:goto L4693f0;
case 0x4693f2:c.instructions+=14;goto B4693f2;
case 0x4693f7:c.instructions+=13;goto B4693f7;
case 0x4693fd:c.instructions+=12;goto B4693fd;
case 0x4693fe:c.instructions+=11;goto B4693fe;
case 0x469405:c.instructions+=10;goto B469405;
case 0x469408:c.instructions+=9;goto B469408;
case 0x469409:c.instructions+=8;goto B469409;
case 0x46940a:c.instructions+=7;goto B46940a;
case 0x46940c:c.instructions+=6;goto B46940c;
case 0x469410:c.instructions+=5;goto B469410;
case 0x469416:c.instructions+=4;goto B469416;
case 0x469419:c.instructions+=3;goto B469419;
case 0x46941b:c.instructions+=2;goto B46941b;
case 0x469423:c.instructions+=1;goto B469423;
case 0x469425:goto L469425;
case 0x469427:c.instructions+=2;goto B469427;
case 0x469429:c.instructions+=1;goto B469429;
case 0x46942b:goto L46942b;
case 0x469430:goto L469430;
case 0x469434:c.instructions+=2;goto B469434;
case 0x469435:c.instructions+=1;goto B469435;
case 0x46943a:goto L46943a;
case 0x46943d:c.instructions+=1;goto B46943d;
case 0x469442:goto L469442;
case 0x469446:c.instructions+=4;goto B469446;
case 0x469448:c.instructions+=3;goto B469448;
case 0x46944a:c.instructions+=2;goto B46944a;
case 0x46944b:c.instructions+=1;goto B46944b;
case 0x46944e:goto L46944e;
case 0x469453:goto L469453;
case 0x469458:c.instructions+=7;goto B469458;
case 0x46945a:c.instructions+=6;goto B46945a;
case 0x469461:c.instructions+=5;goto B469461;
case 0x469463:c.instructions+=4;goto B469463;
case 0x469466:c.instructions+=3;goto B469466;
case 0x469467:c.instructions+=2;goto B469467;
case 0x46946f:c.instructions+=1;goto B46946f;
case 0x469474:goto L469474;
case 0x469478:c.instructions+=5;goto B469478;
case 0x469479:c.instructions+=4;goto B469479;
case 0x46947a:c.instructions+=3;goto B46947a;
case 0x469481:c.instructions+=2;goto B469481;
case 0x469484:c.instructions+=1;goto B469484;
case 0x469490:goto L469490;
case 0x469495:c.instructions+=4;goto B469495;
case 0x469497:c.instructions+=3;goto B469497;
case 0x469498:c.instructions+=2;goto B469498;
case 0x46949a:c.instructions+=1;goto B46949a;
case 0x46949c:goto L46949c;
case 0x4694a0:c.instructions+=3;goto B4694a0;
case 0x4694a3:c.instructions+=2;goto B4694a3;
case 0x4694a6:c.instructions+=1;goto B4694a6;
case 0x4694a8:goto L4694a8;
case 0x4694ab:c.instructions+=2;goto B4694ab;
case 0x4694ad:c.instructions+=1;goto B4694ad;
case 0x4694af:goto L4694af;
case 0x4694b6:c.instructions+=1;goto B4694b6;
case 0x4694b8:goto L4694b8;
case 0x4694c2:c.instructions+=1;goto B4694c2;
case 0x4694c7:goto L4694c7;
case 0x4694cd:c.instructions+=2;goto B4694cd;
case 0x4694ce:c.instructions+=1;goto B4694ce;
case 0x4694d1:goto L4694d1;
case 0x4694d2:c.instructions+=3;goto B4694d2;
case 0x4694d5:c.instructions+=2;goto B4694d5;
case 0x4694d7:c.instructions+=1;goto B4694d7;
case 0x4694d9:goto L4694d9;
case 0x4694db:c.instructions+=2;goto B4694db;
case 0x4694dd:c.instructions+=1;goto B4694dd;
case 0x4694df:goto L4694df;
case 0x4694e4:goto L4694e4;
case 0x4694e8:c.instructions+=2;goto B4694e8;
case 0x4694e9:c.instructions+=1;goto B4694e9;
case 0x4694ee:goto L4694ee;
case 0x4694f1:c.instructions+=1;goto B4694f1;
case 0x4694f6:goto L4694f6;
case 0x4694fa:c.instructions+=4;goto B4694fa;
case 0x4694fc:c.instructions+=3;goto B4694fc;
case 0x4694fe:c.instructions+=2;goto B4694fe;
case 0x4694ff:c.instructions+=1;goto B4694ff;
case 0x469502:goto L469502;
case 0x469507:goto L469507;
case 0x46950e:goto L46950e;
case 0x46950f:goto L46950f;
case 0x469510:c.instructions+=1;goto B469510;
case 0x469520:goto L469520;
case 0x469522:c.instructions+=13;goto B469522;
case 0x469527:c.instructions+=12;goto B469527;
case 0x46952d:c.instructions+=11;goto B46952d;
case 0x46952e:c.instructions+=10;goto B46952e;
case 0x469535:c.instructions+=9;goto B469535;
case 0x469536:c.instructions+=8;goto B469536;
case 0x46953b:c.instructions+=7;goto B46953b;
case 0x46953c:c.instructions+=6;goto B46953c;
case 0x46953d:c.instructions+=5;goto B46953d;
case 0x46953f:c.instructions+=4;goto B46953f;
case 0x469541:c.instructions+=3;goto B469541;
case 0x469543:c.instructions+=2;goto B469543;
case 0x469547:c.instructions+=1;goto B469547;
case 0x469549:goto L469549;
case 0x46954a:c.instructions+=6;goto B46954a;
case 0x46954d:c.instructions+=5;goto B46954d;
case 0x46954e:c.instructions+=4;goto B46954e;
case 0x469552:c.instructions+=3;goto B469552;
case 0x469559:c.instructions+=2;goto B469559;
case 0x46955c:c.instructions+=1;goto B46955c;
case 0x46955f:goto L46955f;
case 0x469565:c.instructions+=2;goto B469565;
case 0x469567:c.instructions+=1;goto B469567;
case 0x46956d:goto L46956d;
case 0x469570:c.instructions+=1;goto B469570;
case 0x469576:goto L469576;
case 0x469578:c.instructions+=4;goto B469578;
case 0x469579:c.instructions+=3;goto B469579;
case 0x46957a:c.instructions+=2;goto B46957a;
case 0x46957c:c.instructions+=1;goto B46957c;
case 0x46957f:goto L46957f;
case 0x469583:c.instructions+=5;goto B469583;
case 0x469585:c.instructions+=4;goto B469585;
case 0x469588:c.instructions+=3;goto B469588;
case 0x46958b:c.instructions+=2;goto B46958b;
case 0x469595:c.instructions+=1;goto B469595;
case 0x46959b:goto L46959b;
case 0x46959e:c.instructions+=3;goto B46959e;
case 0x4695a1:c.instructions+=2;goto B4695a1;
case 0x4695a3:c.instructions+=1;goto B4695a3;
case 0x4695a9:goto L4695a9;
case 0x4695ab:c.instructions+=1;goto B4695ab;
case 0x4695b0:goto L4695b0;
case 0x4695b2:c.instructions+=5;goto B4695b2;
case 0x4695b5:c.instructions+=4;goto B4695b5;
case 0x4695b9:c.instructions+=3;goto B4695b9;
case 0x4695bb:c.instructions+=2;goto B4695bb;
case 0x4695bf:c.instructions+=1;goto B4695bf;
case 0x4695c1:goto L4695c1;
case 0x4695c3:c.instructions+=2;goto B4695c3;
case 0x4695c5:c.instructions+=1;goto B4695c5;
case 0x4695c7:goto L4695c7;
case 0x4695c9:c.instructions+=1;goto B4695c9;
case 0x4695cb:goto L4695cb;
case 0x4695ce:c.instructions+=1;goto B4695ce;
case 0x4695d0:goto L4695d0;
case 0x4695d5:goto L4695d5;
case 0x4695d8:c.instructions+=8;goto B4695d8;
case 0x4695d9:c.instructions+=7;goto B4695d9;
case 0x4695da:c.instructions+=6;goto B4695da;
case 0x4695df:c.instructions+=5;goto B4695df;
case 0x4695e1:c.instructions+=4;goto B4695e1;
case 0x4695e4:c.instructions+=3;goto B4695e4;
case 0x4695e7:c.instructions+=2;goto B4695e7;
case 0x4695ea:c.instructions+=1;goto B4695ea;
case 0x4695ef:goto L4695ef;
case 0x4695f2:c.instructions+=2;goto B4695f2;
case 0x4695f4:c.instructions+=1;goto B4695f4;
case 0x4695f6:goto L4695f6;
case 0x4695fb:c.instructions+=2;goto B4695fb;
case 0x469600:c.instructions+=1;goto B469600;
case 0x469605:goto L469605;
case 0x469606:c.instructions+=3;goto B469606;
case 0x469607:c.instructions+=2;goto B469607;
case 0x46960c:c.instructions+=1;goto B46960c;
case 0x469611:goto L469611;
case 0x469614:c.instructions+=1;goto B469614;
case 0x469616:goto L469616;
case 0x469618:goto L469618;
case 0x46961c:c.instructions+=5;goto B46961c;
case 0x46961f:c.instructions+=4;goto B46961f;
case 0x469620:c.instructions+=3;goto B469620;
case 0x469625:c.instructions+=2;goto B469625;
case 0x469629:c.instructions+=1;goto B469629;
case 0x46962e:goto L46962e;
case 0x469632:goto L469632;
case 0x469638:c.instructions+=1;goto B469638;
case 0x46963d:goto L46963d;
case 0x46963f:c.instructions+=1;goto B46963f;
case 0x469644:goto L469644;
case 0x469646:c.instructions+=5;goto B469646;
case 0x469649:c.instructions+=4;goto B469649;
case 0x46964d:c.instructions+=3;goto B46964d;
case 0x46964f:c.instructions+=2;goto B46964f;
case 0x469657:c.instructions+=1;goto B469657;
case 0x469659:goto L469659;
case 0x46965b:c.instructions+=2;goto B46965b;
case 0x46965d:c.instructions+=1;goto B46965d;
case 0x46965f:goto L46965f;
case 0x469661:c.instructions+=1;goto B469661;
case 0x469663:goto L469663;
case 0x469666:c.instructions+=1;goto B469666;
case 0x469668:goto L469668;
case 0x46966d:goto L46966d;
case 0x46966f:c.instructions+=4;goto B46966f;
case 0x469672:c.instructions+=3;goto B469672;
case 0x469674:c.instructions+=2;goto B469674;
case 0x469676:c.instructions+=1;goto B469676;
case 0x469678:goto L469678;
case 0x46967a:c.instructions+=1;goto B46967a;
case 0x46967c:goto L46967c;
case 0x469682:c.instructions+=1;goto B469682;
case 0x469684:goto L469684;
case 0x469689:goto L469689;
case 0x46968a:c.instructions+=6;goto B46968a;
case 0x46968b:c.instructions+=5;goto B46968b;
case 0x469690:c.instructions+=4;goto B469690;
case 0x469693:c.instructions+=3;goto B469693;
case 0x46969a:c.instructions+=2;goto B46969a;
case 0x46969d:c.instructions+=1;goto B46969d;
case 0x4696a2:goto L4696a2;
case 0x4696a5:c.instructions+=2;goto B4696a5;
case 0x4696a7:c.instructions+=1;goto B4696a7;
case 0x4696a9:goto L4696a9;
case 0x4696ae:c.instructions+=2;goto B4696ae;
case 0x4696b3:c.instructions+=1;goto B4696b3;
case 0x4696b8:goto L4696b8;
case 0x4696b9:c.instructions+=3;goto B4696b9;
case 0x4696ba:c.instructions+=2;goto B4696ba;
case 0x4696bf:c.instructions+=1;goto B4696bf;
case 0x4696c4:goto L4696c4;
case 0x4696c7:goto L4696c7;
case 0x4696c9:c.instructions+=1;goto B4696c9;
case 0x4696cb:goto L4696cb;
case 0x4696cd:goto L4696cd;
case 0x4696cf:c.instructions+=4;goto B4696cf;
case 0x4696d3:c.instructions+=3;goto B4696d3;
case 0x4696db:c.instructions+=2;goto B4696db;
case 0x4696de:c.instructions+=1;goto B4696de;
case 0x4696e0:goto L4696e0;
case 0x4696e2:c.instructions+=1;goto B4696e2;
case 0x4696e7:goto L4696e7;
case 0x4696ea:goto L4696ea;
case 0x4696eb:c.instructions+=1;goto B4696eb;
case 0x4696ec:goto L4696ec;
case 0x4696f0:c.instructions+=6;goto B4696f0;
case 0x4696f1:c.instructions+=5;goto B4696f1;
case 0x4696f3:c.instructions+=4;goto B4696f3;
case 0x4696f4:c.instructions+=3;goto B4696f4;
case 0x4696fb:c.instructions+=2;goto B4696fb;
case 0x4696fe:c.instructions+=1;goto B4696fe;
case 0x469710:goto L469710;
case 0x469711:c.instructions+=5;goto B469711;
case 0x469713:c.instructions+=4;goto B469713;
case 0x469716:c.instructions+=3;goto B469716;
case 0x469718:c.instructions+=2;goto B469718;
case 0x46971e:c.instructions+=1;goto B46971e;
case 0x469720:goto L469720;
case 0x469722:c.instructions+=2;goto B469722;
case 0x469724:c.instructions+=1;goto B469724;
case 0x469726:goto L469726;
case 0x469729:c.instructions+=3;goto B469729;
case 0x46972b:c.instructions+=2;goto B46972b;
case 0x469732:c.instructions+=1;goto B469732;
case 0x469734:goto L469734;
case 0x469736:c.instructions+=2;goto B469736;
case 0x469738:c.instructions+=1;goto B469738;
case 0x46973a:goto L46973a;
case 0x46973f:c.instructions+=2;goto B46973f;
case 0x469746:c.instructions+=1;goto B469746;
case 0x469748:goto L469748;
case 0x469749:c.instructions+=1;goto B469749;
case 0x46974e:goto L46974e;
case 0x469751:goto L469751;
case 0x469753:c.instructions+=2;goto B469753;
case 0x469754:c.instructions+=1;goto B469754;
case 0x469760:goto L469760;
case 0x469762:c.instructions+=11;goto B469762;
case 0x469767:c.instructions+=10;goto B469767;
case 0x46976d:c.instructions+=9;goto B46976d;
case 0x46976e:c.instructions+=8;goto B46976e;
case 0x469775:c.instructions+=7;goto B469775;
case 0x469778:c.instructions+=6;goto B469778;
case 0x46977d:c.instructions+=5;goto B46977d;
case 0x46977f:c.instructions+=4;goto B46977f;
case 0x469780:c.instructions+=3;goto B469780;
case 0x469782:c.instructions+=2;goto B469782;
case 0x469786:c.instructions+=1;goto B469786;
case 0x469788:goto L469788;
case 0x46978d:c.instructions+=2;goto B46978d;
case 0x46978f:c.instructions+=1;goto B46978f;
case 0x469791:goto L469791;
case 0x469794:c.instructions+=2;goto B469794;
case 0x469796:c.instructions+=1;goto B469796;
case 0x469798:goto L469798;
case 0x46979b:c.instructions+=2;goto B46979b;
case 0x46979d:c.instructions+=1;goto B46979d;
case 0x46979f:goto L46979f;
case 0x4697a2:c.instructions+=5;goto B4697a2;
case 0x4697a3:c.instructions+=4;goto B4697a3;
case 0x4697a7:c.instructions+=3;goto B4697a7;
case 0x4697ae:c.instructions+=2;goto B4697ae;
case 0x4697b1:c.instructions+=1;goto B4697b1;
case 0x4697b4:goto L4697b4;
case 0x4697b6:c.instructions+=4;goto B4697b6;
case 0x4697b7:c.instructions+=3;goto B4697b7;
case 0x4697b8:c.instructions+=2;goto B4697b8;
case 0x4697ba:c.instructions+=1;goto B4697ba;
case 0x4697bd:goto L4697bd;
case 0x4697bf:c.instructions+=3;goto B4697bf;
case 0x4697c1:c.instructions+=2;goto B4697c1;
case 0x4697cb:c.instructions+=1;goto B4697cb;
case 0x4697d0:goto L4697d0;
case 0x4697d2:c.instructions+=5;goto B4697d2;
case 0x4697d5:c.instructions+=4;goto B4697d5;
case 0x4697d9:c.instructions+=3;goto B4697d9;
case 0x4697db:c.instructions+=2;goto B4697db;
case 0x4697e3:c.instructions+=1;goto B4697e3;
case 0x4697e5:goto L4697e5;
case 0x4697e9:c.instructions+=2;goto B4697e9;
case 0x4697eb:c.instructions+=1;goto B4697eb;
case 0x4697ed:goto L4697ed;
case 0x4697ef:c.instructions+=1;goto B4697ef;
case 0x4697f1:goto L4697f1;
case 0x4697f4:c.instructions+=1;goto B4697f4;
case 0x4697f6:goto L4697f6;
case 0x4697fb:goto L4697fb;
case 0x4697fd:c.instructions+=4;goto B4697fd;
case 0x469800:c.instructions+=3;goto B469800;
case 0x469802:c.instructions+=2;goto B469802;
case 0x469804:c.instructions+=1;goto B469804;
case 0x469806:goto L469806;
case 0x469808:c.instructions+=1;goto B469808;
case 0x46980a:goto L46980a;
case 0x469810:c.instructions+=1;goto B469810;
case 0x469812:goto L469812;
case 0x469817:goto L469817;
case 0x469818:c.instructions+=6;goto B469818;
case 0x469819:c.instructions+=5;goto B469819;
case 0x46981e:c.instructions+=4;goto B46981e;
case 0x469821:c.instructions+=3;goto B469821;
case 0x469828:c.instructions+=2;goto B469828;
case 0x46982f:c.instructions+=1;goto B46982f;
case 0x469834:goto L469834;
case 0x469837:c.instructions+=2;goto B469837;
case 0x469839:c.instructions+=1;goto B469839;
case 0x46983b:goto L46983b;
case 0x469840:c.instructions+=2;goto B469840;
case 0x469845:c.instructions+=1;goto B469845;
case 0x46984a:goto L46984a;
case 0x46984b:c.instructions+=3;goto B46984b;
case 0x46984c:c.instructions+=2;goto B46984c;
case 0x469851:c.instructions+=1;goto B469851;
case 0x469856:goto L469856;
case 0x469859:goto L469859;
case 0x46985d:c.instructions+=2;goto B46985d;
case 0x46985f:c.instructions+=1;goto B46985f;
case 0x469861:goto L469861;
case 0x469863:goto L469863;
case 0x469865:c.instructions+=5;goto B469865;
case 0x469866:c.instructions+=4;goto B469866;
case 0x46986e:c.instructions+=3;goto B46986e;
case 0x469871:c.instructions+=2;goto B469871;
case 0x469872:c.instructions+=1;goto B469872;
case 0x469874:goto L469874;
case 0x469876:c.instructions+=1;goto B469876;
case 0x46987b:goto L46987b;
case 0x46987f:c.instructions+=6;goto B46987f;
case 0x469886:c.instructions+=5;goto B469886;
case 0x469888:c.instructions+=4;goto B469888;
case 0x469889:c.instructions+=3;goto B469889;
case 0x469890:c.instructions+=2;goto B469890;
case 0x469893:c.instructions+=1;goto B469893;
case 0x4698a0:goto L4698a0;
case 0x4698a4:c.instructions+=4;goto B4698a4;
case 0x4698a5:c.instructions+=3;goto B4698a5;
case 0x4698a6:c.instructions+=2;goto B4698a6;
case 0x4698a8:c.instructions+=1;goto B4698a8;
case 0x4698ad:goto L4698ad;
case 0x4698b3:c.instructions+=2;goto B4698b3;
case 0x4698b4:c.instructions+=1;goto B4698b4;
case 0x4698b9:goto L4698b9;
case 0x4698bc:c.instructions+=3;goto B4698bc;
case 0x4698c2:c.instructions+=2;goto B4698c2;
case 0x4698c3:c.instructions+=1;goto B4698c3;
case 0x4698d0:goto L4698d0;
case 0x4698d6:c.instructions+=3;goto B4698d6;
case 0x4698d7:c.instructions+=2;goto B4698d7;
case 0x4698d9:c.instructions+=1;goto B4698d9;
case 0x4698e0:goto L4698e0;
case 0x4698e3:c.instructions+=2;goto B4698e3;
case 0x4698ea:c.instructions+=1;goto B4698ea;
case 0x4698ec:goto L4698ec;
case 0x4698ed:c.instructions+=2;goto B4698ed;
case 0x4698f1:c.instructions+=1;goto B4698f1;
case 0x4698f3:goto L4698f3;
case 0x4698f8:c.instructions+=8;goto B4698f8;
case 0x4698f9:c.instructions+=7;goto B4698f9;
case 0x4698fb:c.instructions+=6;goto B4698fb;
case 0x469900:c.instructions+=5;goto B469900;
case 0x469902:c.instructions+=4;goto B469902;
case 0x469909:c.instructions+=3;goto B469909;
case 0x46990b:c.instructions+=2;goto B46990b;
case 0x469911:c.instructions+=1;goto B469911;
case 0x469913:goto L469913;
case 0x469916:c.instructions+=6;goto B469916;
case 0x469918:c.instructions+=5;goto B469918;
case 0x46991d:c.instructions+=4;goto B46991d;
case 0x46991f:c.instructions+=3;goto B46991f;
case 0x469926:c.instructions+=2;goto B469926;
case 0x469928:c.instructions+=1;goto B469928;
case 0x46992a:goto L46992a;
case 0x469930:goto L469930;
case 0x469937:c.instructions+=15;goto B469937;
case 0x46993d:c.instructions+=14;goto B46993d;
case 0x469942:c.instructions+=13;goto B469942;
case 0x469944:c.instructions+=12;goto B469944;
case 0x469948:c.instructions+=11;goto B469948;
case 0x46994a:c.instructions+=10;goto B46994a;
case 0x46994c:c.instructions+=9;goto B46994c;
case 0x46994e:c.instructions+=8;goto B46994e;
case 0x469951:c.instructions+=7;goto B469951;
case 0x469954:c.instructions+=6;goto B469954;
case 0x469957:c.instructions+=5;goto B469957;
case 0x46995d:c.instructions+=4;goto B46995d;
case 0x469963:c.instructions+=3;goto B469963;
case 0x469966:c.instructions+=2;goto B469966;
case 0x469967:c.instructions+=1;goto B469967;
case 0x46996a:goto L46996a;
case 0x46996e:c.instructions+=3;goto B46996e;
case 0x469971:c.instructions+=2;goto B469971;
case 0x469972:c.instructions+=1;goto B469972;
case 0x469980:goto L469980;
case 0x469984:c.instructions+=3;goto B469984;
case 0x469986:c.instructions+=2;goto B469986;
case 0x469987:c.instructions+=1;goto B469987;
case 0x469989:goto L469989;
case 0x46998d:c.instructions+=1;goto B46998d;
case 0x469992:goto L469992;
case 0x469999:c.instructions+=2;goto B469999;
case 0x46999b:c.instructions+=1;goto B46999b;
case 0x4699a0:goto L4699a0;
case 0x4699a4:c.instructions+=4;goto B4699a4;
case 0x4699a5:c.instructions+=3;goto B4699a5;
case 0x4699a8:c.instructions+=2;goto B4699a8;
case 0x4699aa:c.instructions+=1;goto B4699aa;
case 0x4699ac:goto L4699ac;
case 0x4699b2:c.instructions+=3;goto B4699b2;
case 0x4699b8:c.instructions+=2;goto B4699b8;
case 0x4699ba:c.instructions+=1;goto B4699ba;
case 0x4699c0:goto L4699c0;
case 0x4699c2:c.instructions+=1;goto B4699c2;
case 0x4699c4:goto L4699c4;
case 0x4699c7:c.instructions+=2;goto B4699c7;
case 0x4699c9:c.instructions+=1;goto B4699c9;
case 0x4699cb:goto L4699cb;
case 0x4699d0:goto L4699d0;
case 0x4699d3:c.instructions+=1;goto B4699d3;
case 0x4699d5:goto L4699d5;
case 0x4699d8:c.instructions+=2;goto B4699d8;
case 0x4699da:c.instructions+=1;goto B4699da;
case 0x4699dc:goto L4699dc;
case 0x4699de:goto L4699de;
case 0x4699e0:c.instructions+=1;goto B4699e0;
case 0x4699e2:goto L4699e2;
case 0x4699e5:c.instructions+=1;goto B4699e5;
case 0x4699e7:goto L4699e7;
case 0x4699e8:c.instructions+=2;goto B4699e8;
case 0x4699eb:c.instructions+=1;goto B4699eb;
case 0x4699ed:goto L4699ed;
case 0x4699ee:c.instructions+=1;goto B4699ee;
case 0x4699ef:goto L4699ef;
case 0x4699f1:c.instructions+=1;goto B4699f1;
case 0x4699f3:goto L4699f3;
case 0x4699f6:c.instructions+=2;goto B4699f6;
case 0x4699f8:c.instructions+=1;goto B4699f8;
case 0x4699fa:goto L4699fa;
case 0x469a00:goto L469a00;
case 0x469a03:c.instructions+=1;goto B469a03;
case 0x469a05:goto L469a05;
case 0x469a08:c.instructions+=2;goto B469a08;
case 0x469a0a:c.instructions+=1;goto B469a0a;
case 0x469a0c:goto L469a0c;
case 0x469a0d:c.instructions+=1;goto B469a0d;
case 0x469a10:goto L469a10;
case 0x469a11:c.instructions+=9;goto B469a11;
case 0x469a13:c.instructions+=8;goto B469a13;
case 0x469a16:c.instructions+=7;goto B469a16;
case 0x469a19:c.instructions+=6;goto B469a19;
case 0x469a1a:c.instructions+=5;goto B469a1a;
case 0x469a1c:c.instructions+=4;goto B469a1c;
case 0x469a1f:c.instructions+=3;goto B469a1f;
case 0x469a21:c.instructions+=2;goto B469a21;
case 0x469a22:c.instructions+=1;goto B469a22;
case 0x469a28:goto L469a28;
case 0x469a2b:c.instructions+=2;goto B469a2b;
case 0x469a2c:c.instructions+=1;goto B469a2c;
case 0x469a31:goto L469a31;
case 0x469a37:c.instructions+=8;goto B469a37;
case 0x469a39:c.instructions+=7;goto B469a39;
case 0x469a3c:c.instructions+=6;goto B469a3c;
case 0x469a3f:c.instructions+=5;goto B469a3f;
case 0x469a40:c.instructions+=4;goto B469a40;
case 0x469a43:c.instructions+=3;goto B469a43;
case 0x469a44:c.instructions+=2;goto B469a44;
case 0x469a48:c.instructions+=1;goto B469a48;
case 0x469a4d:goto L469a4d;
case 0x469a51:c.instructions+=4;goto B469a51;
case 0x469a54:c.instructions+=3;goto B469a54;
case 0x469a56:c.instructions+=2;goto B469a56;
case 0x469a59:c.instructions+=1;goto B469a59;
case 0x469a5f:goto L469a5f;
case 0x469a62:c.instructions+=25;goto B469a62;
case 0x469a65:c.instructions+=24;goto B469a65;
case 0x469a68:c.instructions+=23;goto B469a68;
case 0x469a6b:c.instructions+=22;goto B469a6b;
case 0x469a6e:c.instructions+=21;goto B469a6e;
case 0x469a71:c.instructions+=20;goto B469a71;
case 0x469a74:c.instructions+=19;goto B469a74;
case 0x469a78:c.instructions+=18;goto B469a78;
case 0x469a7a:c.instructions+=17;goto B469a7a;
case 0x469a7e:c.instructions+=16;goto B469a7e;
case 0x469a82:c.instructions+=15;goto B469a82;
case 0x469a84:c.instructions+=14;goto B469a84;
case 0x469a86:c.instructions+=13;goto B469a86;
case 0x469a88:c.instructions+=12;goto B469a88;
case 0x469a8a:c.instructions+=11;goto B469a8a;
case 0x469a8c:c.instructions+=10;goto B469a8c;
case 0x469a90:c.instructions+=9;goto B469a90;
case 0x469a94:c.instructions+=8;goto B469a94;
case 0x469a96:c.instructions+=7;goto B469a96;
case 0x469a98:c.instructions+=6;goto B469a98;
case 0x469a9a:c.instructions+=5;goto B469a9a;
case 0x469a9c:c.instructions+=4;goto B469a9c;
case 0x469aa2:c.instructions+=3;goto B469aa2;
case 0x469aa4:c.instructions+=2;goto B469aa4;
case 0x469aa7:c.instructions+=1;goto B469aa7;
case 0x469aa9:goto L469aa9;
case 0x469aad:c.instructions+=18;goto B469aad;
case 0x469ab5:c.instructions+=17;goto B469ab5;
case 0x469abd:c.instructions+=16;goto B469abd;
case 0x469ac5:c.instructions+=15;goto B469ac5;
case 0x469acd:c.instructions+=14;goto B469acd;
case 0x469ad1:c.instructions+=13;goto B469ad1;
case 0x469ad4:c.instructions+=12;goto B469ad4;
case 0x469ad7:c.instructions+=11;goto B469ad7;
case 0x469ada:c.instructions+=10;goto B469ada;
case 0x469ae0:c.instructions+=9;goto B469ae0;
case 0x469ae2:c.instructions+=8;goto B469ae2;
case 0x469ae6:c.instructions+=7;goto B469ae6;
case 0x469aea:c.instructions+=6;goto B469aea;
case 0x469aee:c.instructions+=5;goto B469aee;
case 0x469af2:c.instructions+=4;goto B469af2;
case 0x469af8:c.instructions+=3;goto B469af8;
case 0x469afa:c.instructions+=2;goto B469afa;
case 0x469afb:c.instructions+=1;goto B469afb;
case 0x469afe:goto L469afe;
case 0x469b00:c.instructions+=1;goto B469b00;
case 0x469b02:goto L469b02;
case 0x469b04:c.instructions+=4;goto B469b04;
case 0x469b08:c.instructions+=3;goto B469b08;
case 0x469b09:c.instructions+=2;goto B469b09;
case 0x469b0b:c.instructions+=1;goto B469b0b;
case 0x469b0e:goto L469b0e;
case 0x469b0f:c.instructions+=4;goto B469b0f;
case 0x469b10:c.instructions+=3;goto B469b10;
case 0x469b12:c.instructions+=2;goto B469b12;
case 0x469b13:c.instructions+=1;goto B469b13;
case 0x469b16:goto L469b16;
case 0x469b18:goto L469b18;
case 0x469b19:c.instructions+=4;goto B469b19;
case 0x469b1a:c.instructions+=3;goto B469b1a;
case 0x469b1c:c.instructions+=2;goto B469b1c;
case 0x469b1d:c.instructions+=1;goto B469b1d;
case 0x469b20:goto L469b20;
case 0x469b24:c.instructions+=6;goto B469b24;
case 0x469b27:c.instructions+=5;goto B469b27;
case 0x469b2a:c.instructions+=4;goto B469b2a;
case 0x469b2d:c.instructions+=3;goto B469b2d;
case 0x469b30:c.instructions+=2;goto B469b30;
case 0x469b33:c.instructions+=1;goto B469b33;
case 0x469b35:goto L469b35;
case 0x469b3c:c.instructions+=1;goto B469b3c;
case 0x469b43:goto L469b43;
case 0x469b45:c.instructions+=1;goto B469b45;
case 0x469b47:goto L469b47;
case 0x469b49:goto L469b49;
case 0x469b4a:c.instructions+=6;goto B469b4a;
case 0x469b4d:c.instructions+=5;goto B469b4d;
case 0x469b4f:c.instructions+=4;goto B469b4f;
case 0x469b52:c.instructions+=3;goto B469b52;
case 0x469b55:c.instructions+=2;goto B469b55;
case 0x469b59:c.instructions+=1;goto B469b59;
case 0x469b5b:goto L469b5b;
case 0x469b60:goto L469b60;
case 0x469b62:c.instructions+=2;goto B469b62;
case 0x469b64:c.instructions+=1;goto B469b64;
case 0x469b67:goto L469b67;
case 0x469b6a:c.instructions+=2;goto B469b6a;
case 0x469b6c:c.instructions+=1;goto B469b6c;
case 0x469b6e:goto L469b6e;
case 0x469b6f:c.instructions+=1;goto B469b6f;
case 0x469b90:goto L469b90;
case 0x469b91:c.instructions+=9;goto B469b91;
case 0x469b92:c.instructions+=8;goto B469b92;
case 0x469b93:c.instructions+=7;goto B469b93;
case 0x469b95:c.instructions+=6;goto B469b95;
case 0x469b98:c.instructions+=5;goto B469b98;
case 0x469b9a:c.instructions+=4;goto B469b9a;
case 0x469b9c:c.instructions+=3;goto B469b9c;
case 0x469b9f:c.instructions+=2;goto B469b9f;
case 0x469ba2:c.instructions+=1;goto B469ba2;
case 0x469ba4:goto L469ba4;
case 0x469ba6:c.instructions+=2;goto B469ba6;
case 0x469ba8:c.instructions+=1;goto B469ba8;
case 0x469bab:goto L469bab;
case 0x469bae:c.instructions+=2;goto B469bae;
case 0x469bb0:c.instructions+=1;goto B469bb0;
case 0x469bb2:goto L469bb2;
case 0x469bb5:c.instructions+=5;goto B469bb5;
case 0x469bb6:c.instructions+=4;goto B469bb6;
case 0x469bb7:c.instructions+=3;goto B469bb7;
case 0x469bb9:c.instructions+=2;goto B469bb9;
case 0x469bba:c.instructions+=1;goto B469bba;
case 0x469bc0:goto L469bc0;
case 0x469bc4:c.instructions+=5;goto B469bc4;
case 0x469bc7:c.instructions+=4;goto B469bc7;
case 0x469bca:c.instructions+=3;goto B469bca;
case 0x469bcb:c.instructions+=2;goto B469bcb;
case 0x469bcf:c.instructions+=1;goto B469bcf;
case 0x469bd1:goto L469bd1;
case 0x469bd8:goto L469bd8;
case 0x469bda:c.instructions+=3;goto B469bda;
case 0x469bdd:c.instructions+=2;goto B469bdd;
case 0x469be4:c.instructions+=1;goto B469be4;
case 0x469bea:goto L469bea;
case 0x469bee:c.instructions+=4;goto B469bee;
case 0x469bef:c.instructions+=3;goto B469bef;
case 0x469bf0:c.instructions+=2;goto B469bf0;
case 0x469bf1:c.instructions+=1;goto B469bf1;
case 0x469bf6:goto L469bf6;
case 0x469bf7:c.instructions+=1;goto B469bf7;
case 0x469bfa:goto L469bfa;
case 0x469bfe:c.instructions+=7;goto B469bfe;
case 0x469c04:c.instructions+=6;goto B469c04;
case 0x469c08:c.instructions+=5;goto B469c08;
case 0x469c09:c.instructions+=4;goto B469c09;
case 0x469c0a:c.instructions+=3;goto B469c0a;
case 0x469c0b:c.instructions+=2;goto B469c0b;
case 0x469c12:c.instructions+=1;goto B469c12;
case 0x469c17:goto L469c17;
case 0x469c18:c.instructions+=1;goto B469c18;
case 0x469c1b:goto L469c1b;
case 0x469c1f:c.instructions+=7;goto B469c1f;
case 0x469c25:c.instructions+=6;goto B469c25;
case 0x469c29:c.instructions+=5;goto B469c29;
case 0x469c2a:c.instructions+=4;goto B469c2a;
case 0x469c2b:c.instructions+=3;goto B469c2b;
case 0x469c2c:c.instructions+=2;goto B469c2c;
case 0x469c33:c.instructions+=1;goto B469c33;
case 0x469c38:goto L469c38;
case 0x469c39:c.instructions+=1;goto B469c39;
case 0x469c3c:goto L469c3c;
case 0x469c40:c.instructions+=5;goto B469c40;
case 0x469c41:c.instructions+=4;goto B469c41;
case 0x469c42:c.instructions+=3;goto B469c42;
case 0x469c43:c.instructions+=2;goto B469c43;
case 0x469c4a:c.instructions+=1;goto B469c4a;
case 0x469c4f:goto L469c4f;
case 0x469c50:c.instructions+=1;goto B469c50;
case 0x469c53:goto L469c53;
case 0x469c56:c.instructions+=2;goto B469c56;
case 0x469c58:c.instructions+=1;goto B469c58;
case 0x469c5a:goto L469c5a;
case 0x469c61:c.instructions+=5;goto B469c61;
case 0x469c65:c.instructions+=4;goto B469c65;
case 0x469c66:c.instructions+=3;goto B469c66;
case 0x469c67:c.instructions+=2;goto B469c67;
case 0x469c68:c.instructions+=1;goto B469c68;
case 0x469c6d:goto L469c6d;
case 0x469c6e:c.instructions+=1;goto B469c6e;
case 0x469c71:goto L469c71;
case 0x469c73:c.instructions+=2;goto B469c73;
case 0x469c74:c.instructions+=1;goto B469c74;
case 0x469cb0:goto L469cb0;
case 0x469cb3:c.instructions+=2;goto B469cb3;
case 0x469cb5:c.instructions+=1;goto B469cb5;
case 0x469cb7:goto L469cb7;
case 0x469cb8:c.instructions+=3;goto B469cb8;
case 0x469cbb:c.instructions+=2;goto B469cbb;
case 0x469cbd:c.instructions+=1;goto B469cbd;
case 0x469cbf:goto L469cbf;
case 0x469cc0:goto L469cc0;
case 0x469cc2:c.instructions+=2;goto B469cc2;
case 0x469cc4:c.instructions+=1;goto B469cc4;
case 0x469cc7:goto L469cc7;
case 0x469cca:c.instructions+=2;goto B469cca;
case 0x469ccc:c.instructions+=1;goto B469ccc;
case 0x469cce:goto L469cce;
case 0x469ccf:goto L469ccf;
case 0x469cd0:goto L469cd0;
case 0x469cd1:c.instructions+=4;goto B469cd1;
case 0x469cd3:c.instructions+=3;goto B469cd3;
case 0x469cd6:c.instructions+=2;goto B469cd6;
case 0x469cd8:c.instructions+=1;goto B469cd8;
case 0x469cda:goto L469cda;
case 0x469cdf:goto L469cdf;
case 0x469ce6:goto L469ce6;
case 0x469ce7:c.instructions+=1;goto B469ce7;
case 0x469cf0:goto L469cf0;
case 0x469cf1:c.instructions+=4;goto B469cf1;
case 0x469cf3:c.instructions+=3;goto B469cf3;
case 0x469cf6:c.instructions+=2;goto B469cf6;
case 0x469cf8:c.instructions+=1;goto B469cf8;
case 0x469cfa:goto L469cfa;
case 0x469cfc:c.instructions+=1;goto B469cfc;
case 0x469cff:goto L469cff;
case 0x469d03:c.instructions+=3;goto B469d03;
case 0x469d04:c.instructions+=2;goto B469d04;
case 0x469d06:c.instructions+=1;goto B469d06;
case 0x469d0b:goto L469d0b;
case 0x469d12:goto L469d12;
case 0x469d13:c.instructions+=1;goto B469d13;
case 0x469d20:goto L469d20;
case 0x469d25:c.instructions+=2;goto B469d25;
case 0x469d27:c.instructions+=1;goto B469d27;
case 0x469d29:goto L469d29;
case 0x469d2c:c.instructions+=2;goto B469d2c;
case 0x469d2e:c.instructions+=1;goto B469d2e;
case 0x469d33:goto L469d33;
case 0x469d40:goto L469d40;
case 0x469d41:c.instructions+=8;goto B469d41;
case 0x469d42:c.instructions+=7;goto B469d42;
case 0x469d45:c.instructions+=6;goto B469d45;
case 0x469d4f:c.instructions+=5;goto B469d4f;
case 0x469d59:c.instructions+=4;goto B469d59;
case 0x469d63:c.instructions+=3;goto B469d63;
case 0x469d65:c.instructions+=2;goto B469d65;
case 0x469d67:c.instructions+=1;goto B469d67;
case 0x469d69:goto L469d69;
case 0x469d6c:c.instructions+=1;goto B469d6c;
case 0x469d6e:goto L469d6e;
case 0x469d70:goto L469d70;
case 0x469d72:c.instructions+=1;goto B469d72;
case 0x469d74:goto L469d74;
case 0x469d77:c.instructions+=1;goto B469d77;
case 0x469d79:goto L469d79;
case 0x469d7b:goto L469d7b;
case 0x469d7d:c.instructions+=1;goto B469d7d;
case 0x469d7f:goto L469d7f;
case 0x469d82:c.instructions+=2;goto B469d82;
case 0x469d84:c.instructions+=1;goto B469d84;
case 0x469d86:goto L469d86;
case 0x469d89:c.instructions+=1;goto B469d89;
case 0x469d8b:goto L469d8b;
case 0x469d8d:goto L469d8d;
case 0x469d90:c.instructions+=7;goto B469d90;
case 0x469d93:c.instructions+=6;goto B469d93;
case 0x469d95:c.instructions+=5;goto B469d95;
case 0x469d98:c.instructions+=4;goto B469d98;
case 0x469d9e:c.instructions+=3;goto B469d9e;
case 0x469da0:c.instructions+=2;goto B469da0;
case 0x469da2:c.instructions+=1;goto B469da2;
case 0x469da4:goto L469da4;
case 0x469da6:c.instructions+=1;goto B469da6;
case 0x469da8:goto L469da8;
case 0x469da9:c.instructions+=2;goto B469da9;
case 0x469daa:c.instructions+=1;goto B469daa;
case 0x469db0:goto L469db0;
case 0x469db4:c.instructions+=3;goto B469db4;
case 0x469db5:c.instructions+=2;goto B469db5;
case 0x469db7:c.instructions+=1;goto B469db7;
case 0x469dbc:goto L469dbc;
case 0x469dbe:c.instructions+=1;goto B469dbe;
case 0x469dc0:goto L469dc0;
case 0x469dc4:goto L469dc4;
case 0x469dc7:c.instructions+=1;goto B469dc7;
case 0x469dc9:goto L469dc9;
case 0x469dcb:c.instructions+=2;goto B469dcb;
case 0x469dcd:c.instructions+=1;goto B469dcd;
case 0x469dcf:goto L469dcf;
case 0x469dd1:c.instructions+=2;goto B469dd1;
case 0x469dd2:c.instructions+=1;goto B469dd2;
case 0x469dd5:goto L469dd5;
case 0x469dd7:c.instructions+=2;goto B469dd7;
case 0x469dd8:c.instructions+=1;goto B469dd8;
case 0x469de0:goto L469de0;
case 0x469de5:c.instructions+=2;goto B469de5;
case 0x469de7:c.instructions+=1;goto B469de7;
case 0x469de9:goto L469de9;
case 0x469dec:c.instructions+=4;goto B469dec;
case 0x469def:c.instructions+=3;goto B469def;
case 0x469df1:c.instructions+=2;goto B469df1;
case 0x469df2:c.instructions+=1;goto B469df2;
case 0x469df4:goto L469df4;
case 0x469df7:c.instructions+=1;goto B469df7;
case 0x469df9:goto L469df9;
case 0x469dfb:goto L469dfb;
case 0x469dff:c.instructions+=1;goto B469dff;
case 0x469e00:goto L469e00;
case 0x469e02:c.instructions+=1;goto B469e02;
case 0x469e04:goto L469e04;
case 0x469e07:c.instructions+=1;goto B469e07;
case 0x469e09:goto L469e09;
case 0x469e0b:goto L469e0b;
case 0x469e0d:c.instructions+=1;goto B469e0d;
case 0x469e0f:goto L469e0f;
case 0x469e12:c.instructions+=1;goto B469e12;
case 0x469e14:goto L469e14;
case 0x469e17:c.instructions+=2;goto B469e17;
case 0x469e19:c.instructions+=1;goto B469e19;
case 0x469e1b:goto L469e1b;
case 0x469e1e:c.instructions+=1;goto B469e1e;
case 0x469e20:goto L469e20;
case 0x469e22:c.instructions+=1;goto B469e22;
case 0x469e24:goto L469e24;
case 0x469e2a:c.instructions+=2;goto B469e2a;
case 0x469e2c:c.instructions+=1;goto B469e2c;
case 0x469e2e:goto L469e2e;
case 0x469e34:c.instructions+=2;goto B469e34;
case 0x469e36:c.instructions+=1;goto B469e36;
case 0x469e38:goto L469e38;
case 0x469e3a:c.instructions+=2;goto B469e3a;
case 0x469e3c:c.instructions+=1;goto B469e3c;
case 0x469e3f:goto L469e3f;
case 0x469e41:c.instructions+=1;goto B469e41;
case 0x469e43:goto L469e43;
case 0x469e47:goto L469e47;
case 0x469e48:goto L469e48;
case 0x469e50:goto L469e50;
case 0x469e55:c.instructions+=14;goto B469e55;
case 0x469e5b:c.instructions+=13;goto B469e5b;
case 0x469e61:c.instructions+=12;goto B469e61;
case 0x469e66:c.instructions+=11;goto B469e66;
case 0x469e6b:c.instructions+=10;goto B469e6b;
case 0x469e70:c.instructions+=9;goto B469e70;
case 0x469e76:c.instructions+=8;goto B469e76;
case 0x469e7c:c.instructions+=7;goto B469e7c;
case 0x469e82:c.instructions+=6;goto B469e82;
case 0x469e88:c.instructions+=5;goto B469e88;
case 0x469e8a:c.instructions+=4;goto B469e8a;
case 0x469e90:c.instructions+=3;goto B469e90;
case 0x469e92:c.instructions+=2;goto B469e92;
case 0x469e95:c.instructions+=1;goto B469e95;
case 0x469e97:goto L469e97;
case 0x469e9d:c.instructions+=2;goto B469e9d;
case 0x469ea3:c.instructions+=1;goto B469ea3;
case 0x469ea9:goto L469ea9;
case 0x469eaf:c.instructions+=17;goto B469eaf;
case 0x469eb5:c.instructions+=16;goto B469eb5;
case 0x469eba:c.instructions+=15;goto B469eba;
case 0x469ec0:c.instructions+=14;goto B469ec0;
case 0x469ec6:c.instructions+=13;goto B469ec6;
case 0x469ecc:c.instructions+=12;goto B469ecc;
case 0x469ed2:c.instructions+=11;goto B469ed2;
case 0x469ed8:c.instructions+=10;goto B469ed8;
case 0x469ede:c.instructions+=9;goto B469ede;
case 0x469ee4:c.instructions+=8;goto B469ee4;
case 0x469eea:c.instructions+=7;goto B469eea;
case 0x469eef:c.instructions+=6;goto B469eef;
case 0x469ef9:c.instructions+=5;goto B469ef9;
case 0x469efb:c.instructions+=4;goto B469efb;
case 0x469f01:c.instructions+=3;goto B469f01;
case 0x469f03:c.instructions+=2;goto B469f03;
case 0x469f06:c.instructions+=1;goto B469f06;
case 0x469f08:goto L469f08;
case 0x469f0e:c.instructions+=2;goto B469f0e;
case 0x469f14:c.instructions+=1;goto B469f14;
case 0x469f1a:goto L469f1a;
case 0x469f20:c.instructions+=17;goto B469f20;
case 0x469f25:c.instructions+=16;goto B469f25;
case 0x469f2b:c.instructions+=15;goto B469f2b;
case 0x469f31:c.instructions+=14;goto B469f31;
case 0x469f37:c.instructions+=13;goto B469f37;
case 0x469f3c:c.instructions+=12;goto B469f3c;
case 0x469f41:c.instructions+=11;goto B469f41;
case 0x469f47:c.instructions+=10;goto B469f47;
case 0x469f4d:c.instructions+=9;goto B469f4d;
case 0x469f52:c.instructions+=8;goto B469f52;
case 0x469f58:c.instructions+=7;goto B469f58;
case 0x469f62:c.instructions+=6;goto B469f62;
case 0x469f68:c.instructions+=5;goto B469f68;
case 0x469f6a:c.instructions+=4;goto B469f6a;
case 0x469f70:c.instructions+=3;goto B469f70;
case 0x469f72:c.instructions+=2;goto B469f72;
case 0x469f75:c.instructions+=1;goto B469f75;
case 0x469f77:goto L469f77;
case 0x469f7d:c.instructions+=2;goto B469f7d;
case 0x469f83:c.instructions+=1;goto B469f83;
case 0x469f89:goto L469f89;
case 0x469f8e:c.instructions+=17;goto B469f8e;
case 0x469f94:c.instructions+=16;goto B469f94;
case 0x469f9a:c.instructions+=15;goto B469f9a;
case 0x469f9f:c.instructions+=14;goto B469f9f;
case 0x469fa4:c.instructions+=13;goto B469fa4;
case 0x469faa:c.instructions+=12;goto B469faa;
case 0x469fb0:c.instructions+=11;goto B469fb0;
case 0x469fb5:c.instructions+=10;goto B469fb5;
case 0x469fbb:c.instructions+=9;goto B469fbb;
case 0x469fc1:c.instructions+=8;goto B469fc1;
case 0x469fc7:c.instructions+=7;goto B469fc7;
case 0x469fd1:c.instructions+=6;goto B469fd1;
case 0x469fd7:c.instructions+=5;goto B469fd7;
case 0x469fd9:c.instructions+=4;goto B469fd9;
case 0x469fdf:c.instructions+=3;goto B469fdf;
case 0x469fe1:c.instructions+=2;goto B469fe1;
case 0x469fe4:c.instructions+=1;goto B469fe4;
case 0x469fe6:goto L469fe6;
case 0x469fec:c.instructions+=2;goto B469fec;
case 0x469ff2:c.instructions+=1;goto B469ff2;
case 0x469ff8:goto L469ff8;
case 0x469ffe:c.instructions+=1;goto B469ffe;
default:missing_instruction(c.pc);}
B469000:L469000:{c.instructions+=7;NFSU2_TR(0x469000);
__builtin_memmove((R+24),(R+28),4);
}
B469002:{NFSU2_TR(0x469002);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B469005:{NFSU2_TR(0x469005);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B469008:{NFSU2_TR(0x469008);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B46900b:{NFSU2_TR(0x46900b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7full))));
}
B46900e:{NFSU2_TR(0x46900e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469010:{NFSU2_TR(0x469010);
if(r1(R+518)){{goto L469045;}}
}
B469012:L469012:{c.instructions+=2;NFSU2_TR(0x469012);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B469015:{NFSU2_TR(0x469015);
if(r1(R+518)){{goto L469025;}}
}
B469017:L469017:{c.instructions+=3;NFSU2_TR(0x469017);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46901a:{NFSU2_TR(0x46901a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46901c:{NFSU2_TR(0x46901c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469012u);}goto L469012;}}
}
B46901e:L46901e:{c.instructions+=4;NFSU2_TR(0x46901e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46901f:{NFSU2_TR(0x46901f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469020:{NFSU2_TR(0x469020);
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
B469022:{NFSU2_TR(0x469022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469025:L469025:{c.instructions+=3;NFSU2_TR(0x469025);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xe0000000ull))));
}
B46902b:{NFSU2_TR(0x46902b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469031:{NFSU2_TR(0x469031);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469045;}}
}
B469033:L469033:{c.instructions+=3;NFSU2_TR(0x469033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469034:{NFSU2_TR(0x469034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469035:{NFSU2_TR(0x469035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46903aull));
TAIL_STATIC(0x463c50u,463);
}
B46903a:L46903a:{c.instructions+=2;NFSU2_TR(0x46903a);
__builtin_memmove((R+4),(R+0),4);
}
B46903c:{NFSU2_TR(0x46903c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469041ull));
TAIL_STATIC(0x464d00u,464);
}
B469041:L469041:{c.instructions+=2;NFSU2_TR(0x469041);
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
B469043:{NFSU2_TR(0x469043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469047;}}
}
B469045:L469045:{c.instructions+=1;NFSU2_TR(0x469045);
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
B469047:L469047:{c.instructions+=3;NFSU2_TR(0x469047);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469048:{NFSU2_TR(0x469048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469049:{NFSU2_TR(0x469049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469050:L469050:{c.instructions+=6;NFSU2_TR(0x469050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469051:{NFSU2_TR(0x469051);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469055:{NFSU2_TR(0x469055);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469058:{NFSU2_TR(0x469058);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B46905d:{NFSU2_TR(0x46905d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46905f:{NFSU2_TR(0x46905f);
if(r1(R+518)){{goto L469089;}}
}
B469061:L469061:{c.instructions+=3;NFSU2_TR(0x469061);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469067:{NFSU2_TR(0x469067);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469069:{NFSU2_TR(0x469069);
if(r1(R+518)){{goto L469089;}}
}
B46906b:L46906b:{c.instructions+=3;NFSU2_TR(0x46906b);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B469071:{NFSU2_TR(0x469071);
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
B469073:{NFSU2_TR(0x469073);
if(r1(R+518)){{goto L46907a;}}
}
B469075:L469075:{c.instructions+=2;NFSU2_TR(0x469075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469077:{NFSU2_TR(0x469077);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46907aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46907a:L46907a:{c.instructions+=3;NFSU2_TR(0x46907a);
__builtin_memmove((R+4),gp(0x82b978),4);
}
B469080:{NFSU2_TR(0x469080);
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
B469082:{NFSU2_TR(0x469082);
if(r1(R+518)){{goto L469089;}}
}
B469084:L469084:{c.instructions+=2;NFSU2_TR(0x469084);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469086:{NFSU2_TR(0x469086);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469089ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469089:L469089:{c.instructions+=5;NFSU2_TR(0x469089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46908c:{NFSU2_TR(0x46908c);
__builtin_memmove(gp(0x7ec848),(R+0),4);
}
B469091:{NFSU2_TR(0x469091);
{u32 ea_=u32(u32(8308808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469097:{NFSU2_TR(0x469097);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46909d:{NFSU2_TR(0x46909d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4690a2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4690a2:L4690a2:{c.instructions+=3;NFSU2_TR(0x4690a2);
__builtin_memmove(gp(0x7ec84c),(R+0),4);
}
B4690a7:{NFSU2_TR(0x4690a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4690a8:{NFSU2_TR(0x4690a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4690b0:L4690b0:{c.instructions+=3;NFSU2_TR(0x4690b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4690b6:{NFSU2_TR(0x4690b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4690b8:{NFSU2_TR(0x4690b8);
if(r1(R+518)){{goto L4690d1;}}
}
B4690ba:L4690ba:{c.instructions+=3;NFSU2_TR(0x4690ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4690bd:{NFSU2_TR(0x4690bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4690bf:{NFSU2_TR(0x4690bf);
if(r1(R+518)){{goto L4690d1;}}
}
B4690c1:L4690c1:{c.instructions+=1;NFSU2_TR(0x4690c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4690c5:L4690c5:{c.instructions+=2;NFSU2_TR(0x4690c5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4690c8:{NFSU2_TR(0x4690c8);
if(r1(R+518)){{goto L4690d3;}}
}
B4690ca:L4690ca:{c.instructions+=3;NFSU2_TR(0x4690ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4690cd:{NFSU2_TR(0x4690cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4690cf:{NFSU2_TR(0x4690cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4690c5u);}goto L4690c5;}}
}
B4690d1:L4690d1:{c.instructions+=1;NFSU2_TR(0x4690d1);
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
B4690d3:L4690d3:{c.instructions+=1;NFSU2_TR(0x4690d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4690e0:L4690e0:{c.instructions+=3;NFSU2_TR(0x4690e0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B4690e5:{NFSU2_TR(0x4690e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4690e7:{NFSU2_TR(0x4690e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4690ee;}}
}
B4690e9:L4690e9:{c.instructions+=2;NFSU2_TR(0x4690e9);
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
B4690eb:{NFSU2_TR(0x4690eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4690ee:L4690ee:{c.instructions+=7;NFSU2_TR(0x4690ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4690ef:{NFSU2_TR(0x4690ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4690f0:{NFSU2_TR(0x4690f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4690f4:{NFSU2_TR(0x4690f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4690f7:{NFSU2_TR(0x4690f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4690fa:{NFSU2_TR(0x4690fa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4690fd:{NFSU2_TR(0x4690fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469111;}}
}
B4690ff:L4690ff:{c.instructions+=3;NFSU2_TR(0x4690ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B469105:{NFSU2_TR(0x469105);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B469107:{NFSU2_TR(0x469107);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469111;}}
}
B469109:L469109:{c.instructions+=2;NFSU2_TR(0x469109);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46910f:{NFSU2_TR(0x46910f);
{goto L469147;}
}
B469111:L469111:{c.instructions+=2;NFSU2_TR(0x469111);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469114:{NFSU2_TR(0x469114);
if(r1(R+518)){{goto L469141;}}
}
B469116:L469116:{c.instructions+=3;NFSU2_TR(0x469116);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B46911c:{NFSU2_TR(0x46911c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46911e:{NFSU2_TR(0x46911e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469141;}}
}
B469120:L469120:{c.instructions+=2;NFSU2_TR(0x469120);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469123:{NFSU2_TR(0x469123);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46912f;}}
}
B469125:L469125:{c.instructions+=3;NFSU2_TR(0x469125);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46912b:{NFSU2_TR(0x46912b);
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
B46912d:{NFSU2_TR(0x46912d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469136;}}
}
B46912f:L46912f:{c.instructions+=4;NFSU2_TR(0x46912f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469130:{NFSU2_TR(0x469130);
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
B469132:{NFSU2_TR(0x469132);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469133:{NFSU2_TR(0x469133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469136:L469136:{c.instructions+=3;NFSU2_TR(0x469136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469138:{NFSU2_TR(0x469138);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469139:{NFSU2_TR(0x469139);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46913cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46913c:L46913c:{c.instructions+=3;NFSU2_TR(0x46913c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46913d:{NFSU2_TR(0x46913d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46913e:{NFSU2_TR(0x46913e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469141:L469141:{c.instructions+=1;NFSU2_TR(0x469141);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469147:L469147:{c.instructions+=2;NFSU2_TR(0x469147);
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
B469149:{NFSU2_TR(0x469149);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46912fu);}goto L46912f;}}
}
B46914b:L46914b:{c.instructions+=3;NFSU2_TR(0x46914b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46914d:{NFSU2_TR(0x46914d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46914e:{NFSU2_TR(0x46914e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469151ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469151:L469151:{c.instructions+=3;NFSU2_TR(0x469151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469152:{NFSU2_TR(0x469152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469153:{NFSU2_TR(0x469153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469160:L469160:{c.instructions+=3;NFSU2_TR(0x469160);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B469165:{NFSU2_TR(0x469165);
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
B469167:{NFSU2_TR(0x469167);
if(r1(R+518)){{goto L4691bc;}}
}
B469169:L469169:{c.instructions+=6;NFSU2_TR(0x469169);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46916a:{NFSU2_TR(0x46916a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46916e:{NFSU2_TR(0x46916e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469171:{NFSU2_TR(0x469171);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469174:{NFSU2_TR(0x469174);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469177:{NFSU2_TR(0x469177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46918d;}}
}
B469179:L469179:{c.instructions+=5;NFSU2_TR(0x469179);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46917a:{NFSU2_TR(0x46917a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B469180:{NFSU2_TR(0x469180);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B469182:{NFSU2_TR(0x469182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469183:{NFSU2_TR(0x469183);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46918d;}}
}
B469185:L469185:{c.instructions+=2;NFSU2_TR(0x469185);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46918b:{NFSU2_TR(0x46918b);
{goto L4691b1;}
}
B46918d:L46918d:{c.instructions+=2;NFSU2_TR(0x46918d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469190:{NFSU2_TR(0x469190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4691a6;}}
}
B469192:L469192:{c.instructions+=3;NFSU2_TR(0x469192);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469198:{NFSU2_TR(0x469198);
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
B46919a:{NFSU2_TR(0x46919a);
if(r1(R+518)){{goto L4691bb;}}
}
B46919c:L46919c:{c.instructions+=3;NFSU2_TR(0x46919c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46919e:{NFSU2_TR(0x46919e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46919f:{NFSU2_TR(0x46919f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4691a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4691a2:L4691a2:{c.instructions+=2;NFSU2_TR(0x4691a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4691a3:{NFSU2_TR(0x4691a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4691a6:L4691a6:{c.instructions+=2;NFSU2_TR(0x4691a6);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4691a9:{NFSU2_TR(0x4691a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4691bb;}}
}
B4691ab:L4691ab:{c.instructions+=1;NFSU2_TR(0x4691ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4691b1:L4691b1:{c.instructions+=2;NFSU2_TR(0x4691b1);
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
B4691b3:{NFSU2_TR(0x4691b3);
if(r1(R+518)){{goto L4691bb;}}
}
B4691b5:L4691b5:{c.instructions+=3;NFSU2_TR(0x4691b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4691b7:{NFSU2_TR(0x4691b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691b8:{NFSU2_TR(0x4691b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4691bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4691bb:L4691bb:{c.instructions+=1;NFSU2_TR(0x4691bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4691bc:L4691bc:{c.instructions+=1;NFSU2_TR(0x4691bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4691c0:L4691c0:{c.instructions+=4;NFSU2_TR(0x4691c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4691c4:{NFSU2_TR(0x4691c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4691c7:{NFSU2_TR(0x4691c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4691c9:{NFSU2_TR(0x4691c9);
if(r1(R+518)){{goto L4691f8;}}
}
B4691cb:L4691cb:{c.instructions+=6;NFSU2_TR(0x4691cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4691cf:{NFSU2_TR(0x4691cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4691d3:{NFSU2_TR(0x4691d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691d4:{NFSU2_TR(0x4691d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691d5:{NFSU2_TR(0x4691d5);
u8 U[4];
w4(U+0,u32(0x82c738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691da:{NFSU2_TR(0x4691da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4691dfull));
TAIL_STATIC(0x43fbc0u,43f);
}
B4691df:L4691df:{c.instructions+=6;NFSU2_TR(0x4691df);
__builtin_memmove((R+8),gp(0x7fb724),4);
}
B4691e5:{NFSU2_TR(0x4691e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691e6:{NFSU2_TR(0x4691e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4691ea:{NFSU2_TR(0x4691ea);
u8 U[4];
w4(U+0,u32(0x789cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691ef:{NFSU2_TR(0x4691ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4691f0:{NFSU2_TR(0x4691f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4691f5ull));
TAIL_STATIC(0x4400d0u,440);
}
B4691f5:L4691f5:{c.instructions+=1;NFSU2_TR(0x4691f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4691f8:L4691f8:{c.instructions+=2;NFSU2_TR(0x4691f8);
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
B4691fb:{NFSU2_TR(0x4691fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469200:L469200:{c.instructions+=14;NFSU2_TR(0x469200);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469204:{NFSU2_TR(0x469204);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469208:{NFSU2_TR(0x469208);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469209:{NFSU2_TR(0x469209);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46920a:{NFSU2_TR(0x46920a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46920b:{NFSU2_TR(0x46920b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46920c:{NFSU2_TR(0x46920c);
__builtin_memmove((R+24),(R+4),4);
}
B46920e:{NFSU2_TR(0x46920e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed148ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B469215:{NFSU2_TR(0x469215);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed160ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B46921c:{NFSU2_TR(0x46921c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46921d:{NFSU2_TR(0x46921d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46921e:{NFSU2_TR(0x46921e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469221:{NFSU2_TR(0x469221);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469222:{NFSU2_TR(0x469222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469227ull));
TAIL_STATIC(0x43dda0u,43d);
}
B469227:L469227:{c.instructions+=2;NFSU2_TR(0x469227);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469228:{NFSU2_TR(0x469228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46922dull));
TAIL_STATIC(0x57d900u,57d);
}
B46922d:L46922d:{c.instructions+=5;NFSU2_TR(0x46922d);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B469233:{NFSU2_TR(0x469233);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469234:{NFSU2_TR(0x469234);
__builtin_memmove((R+12),(R+0),4);
}
B469236:{NFSU2_TR(0x469236);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B469238:{NFSU2_TR(0x469238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46923dull));
TAIL_STATIC(0x43e910u,43e);
}
B46923d:L46923d:{c.instructions+=4;NFSU2_TR(0x46923d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B469243:{NFSU2_TR(0x469243);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B469246:{NFSU2_TR(0x469246);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469248:{NFSU2_TR(0x469248);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L469263;}}
}
B46924a:L46924a:{c.instructions+=6;NFSU2_TR(0x46924a);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46924f:{NFSU2_TR(0x46924f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B469252:{NFSU2_TR(0x469252);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
}
B469257:{NFSU2_TR(0x469257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469258:{NFSU2_TR(0x469258);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469259:{NFSU2_TR(0x469259);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46925eull));
TAIL_STATIC(0x440820u,440);
}
B46925e:L46925e:{c.instructions+=2;NFSU2_TR(0x46925e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B469261:{NFSU2_TR(0x469261);
__builtin_memmove((R+20),(R+0),4);
}
B469263:L469263:{c.instructions+=11;NFSU2_TR(0x469263);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469267:{NFSU2_TR(0x469267);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46926b:{NFSU2_TR(0x46926b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46926e:{NFSU2_TR(0x46926e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B469272:{NFSU2_TR(0x469272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469273:{NFSU2_TR(0x469273);
u8 U[4];
w4(U+0,u32(0x458980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469278:{NFSU2_TR(0x469278);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469279:{NFSU2_TR(0x469279);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46927b:{NFSU2_TR(0x46927b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46927c:{NFSU2_TR(0x46927c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46927d:{NFSU2_TR(0x46927d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469282ull));
TAIL_STATIC(0x57b4a0u,57b);
}
B469282:L469282:{c.instructions+=9;NFSU2_TR(0x469282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469285:{NFSU2_TR(0x469285);
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
B469288:{NFSU2_TR(0x469288);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469289:{NFSU2_TR(0x469289);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46928c:{NFSU2_TR(0x46928c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46928f:{NFSU2_TR(0x46928f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469290:{NFSU2_TR(0x469290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B469291:{NFSU2_TR(0x469291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469292:{NFSU2_TR(0x469292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4692a0:L4692a0:{c.instructions+=6;NFSU2_TR(0x4692a0);
__builtin_memmove((R+0),gp(0x82b920),4);
}
B4692a5:{NFSU2_TR(0x4692a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4692a9:{NFSU2_TR(0x4692a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4692ac:{NFSU2_TR(0x4692ac);
u8 U[4];
w4(U+0,u32(0x4589c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692b1:{NFSU2_TR(0x4692b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692b3:{NFSU2_TR(0x4692b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4692cc;}}
}
B4692b5:L4692b5:{c.instructions+=4;NFSU2_TR(0x4692b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4692b8:{NFSU2_TR(0x4692b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692b9:{NFSU2_TR(0x4692b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692ba:{NFSU2_TR(0x4692ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4692bfull));
TAIL_STATIC(0x7238d2u,723);
}
B4692bf:L4692bf:{c.instructions+=4;NFSU2_TR(0x4692bf);
__builtin_memmove((R+4),gp(0x82b920),4);
}
B4692c5:{NFSU2_TR(0x4692c5);
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
B4692c8:{NFSU2_TR(0x4692c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4692cb:{NFSU2_TR(0x4692cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4692cc:L4692cc:{c.instructions+=3;NFSU2_TR(0x4692cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692ce:{NFSU2_TR(0x4692ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4692cf:{NFSU2_TR(0x4692cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4692d4ull));
TAIL_STATIC(0x7238d2u,723);
}
B4692d4:L4692d4:{c.instructions+=4;NFSU2_TR(0x4692d4);
__builtin_memmove((R+4),gp(0x82b920),4);
}
B4692da:{NFSU2_TR(0x4692da);
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
B4692dd:{NFSU2_TR(0x4692dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4692e0:{NFSU2_TR(0x4692e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4692f0:L4692f0:{c.instructions+=5;NFSU2_TR(0x4692f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4692f4:{NFSU2_TR(0x4692f4);
__builtin_memmove(gp(0x82b920),(R+4),4);
}
B4692fa:{NFSU2_TR(0x4692fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4692fd:{NFSU2_TR(0x4692fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4692ff:{NFSU2_TR(0x4692ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46930b;}}
}
B469301:L469301:{c.instructions+=2;NFSU2_TR(0x469301);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469304:{NFSU2_TR(0x469304);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46930b;}}
}
B469306:L469306:{c.instructions+=1;NFSU2_TR(0x469306);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4692a0u);}goto L4692a0;}
}
B46930b:L46930b:{c.instructions+=2;NFSU2_TR(0x46930b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46930e:{NFSU2_TR(0x46930e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469306u);}goto L469306;}}
}
B469310:L469310:{c.instructions+=2;NFSU2_TR(0x469310);
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
B469313:{NFSU2_TR(0x469313);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L469328;}}
}
B469315:L469315:{c.instructions+=2;NFSU2_TR(0x469315);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469318:{NFSU2_TR(0x469318);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L469328;}}
}
B46931a:L46931a:{c.instructions+=3;NFSU2_TR(0x46931a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46931d:{NFSU2_TR(0x46931d);
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
B46931f:{NFSU2_TR(0x46931f);
if(r1(R+518)){{goto L469328;}}
}
B469321:L469321:{c.instructions+=3;NFSU2_TR(0x469321);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469324:{NFSU2_TR(0x469324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469325:{NFSU2_TR(0x469325);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469327ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B469327:L469327:{c.instructions+=1;NFSU2_TR(0x469327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B469328:L469328:{c.instructions+=1;NFSU2_TR(0x469328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469330:L469330:{c.instructions+=14;NFSU2_TR(0x469330);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B469333:{NFSU2_TR(0x469333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469334:{NFSU2_TR(0x469334);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469335:{NFSU2_TR(0x469335);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469336:{NFSU2_TR(0x469336);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469337:{NFSU2_TR(0x469337);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46933c:{NFSU2_TR(0x46933c);
u8 U[4];
w4(U+0,u32(0x459970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469341:{NFSU2_TR(0x469341);
__builtin_memmove((R+28),(R+4),4);
}
B469343:{NFSU2_TR(0x469343);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469345:{NFSU2_TR(0x469345);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469347:{NFSU2_TR(0x469347);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B46934a:{NFSU2_TR(0x46934a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46934b:{NFSU2_TR(0x46934b);
u8 U[4];
w4(U+0,u32(0x78a744ull));
s4(u32(r4(R+28)),r4(U+0));
}
B469351:{NFSU2_TR(0x469351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469356ull));
TAIL_STATIC(0x75c461u,75c);
}
B469356:L469356:{c.instructions+=9;NFSU2_TR(0x469356);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B46935c:{NFSU2_TR(0x46935c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469360:{NFSU2_TR(0x469360);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469366:{NFSU2_TR(0x469366);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+0),(U+0),4);
}
B469369:{NFSU2_TR(0x469369);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B46936c:{NFSU2_TR(0x46936c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469374:{NFSU2_TR(0x469374);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B469376:{NFSU2_TR(0x469376);
w4(R+20,u32(0x3f800000ull));
}
B46937b:{NFSU2_TR(0x46937b);
{goto L469380;}
}
B469380:L469380:{c.instructions+=1;NFSU2_TR(0x469380);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B469382:L469382:{c.instructions+=14;NFSU2_TR(0x469382);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B469384:{NFSU2_TR(0x469384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B46938b:{NFSU2_TR(0x46938b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46938d:{NFSU2_TR(0x46938d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469390:{NFSU2_TR(0x469390);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469393:{NFSU2_TR(0x469393);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B469396:{NFSU2_TR(0x469396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469399:{NFSU2_TR(0x469399);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46939c:{NFSU2_TR(0x46939c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B46939f:{NFSU2_TR(0x46939f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4693a0:{NFSU2_TR(0x4693a0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4693a3:{NFSU2_TR(0x4693a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B4693a6:{NFSU2_TR(0x4693a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4693a9:{NFSU2_TR(0x4693a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469382u);}goto L469382;}}
}
B4693ab:L4693ab:{c.instructions+=9;NFSU2_TR(0x4693ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4693af:{NFSU2_TR(0x4693af);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+4)),r4(U+0));
}
B4693b5:{NFSU2_TR(0x4693b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4693b8:{NFSU2_TR(0x4693b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693bc:{NFSU2_TR(0x4693bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4693c0:{NFSU2_TR(0x4693c0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B4693c3:{NFSU2_TR(0x4693c3);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4693c4:{NFSU2_TR(0x4693c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693c8:{NFSU2_TR(0x4693c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469380u);}goto L469380;}}
}
B4693ca:L4693ca:{c.instructions+=13;NFSU2_TR(0x4693ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693d0:{NFSU2_TR(0x4693d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693d3:{NFSU2_TR(0x4693d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693d6:{NFSU2_TR(0x4693d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693d9:{NFSU2_TR(0x4693d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693df:{NFSU2_TR(0x4693df);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4693e5:{NFSU2_TR(0x4693e5);
__builtin_memmove((R+0),(R+28),4);
}
B4693e7:{NFSU2_TR(0x4693e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4693e8:{NFSU2_TR(0x4693e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4693e9:{NFSU2_TR(0x4693e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4693ea:{NFSU2_TR(0x4693ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4693eb:{NFSU2_TR(0x4693eb);
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
B4693ee:{NFSU2_TR(0x4693ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4693f0:L4693f0:{c.instructions+=15;NFSU2_TR(0x4693f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4693f2:{NFSU2_TR(0x4693f2);
u8 U[4];
w4(U+0,u32(0x7724c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4693f7:{NFSU2_TR(0x4693f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4693fd:{NFSU2_TR(0x4693fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4693fe:{NFSU2_TR(0x4693fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469405:{NFSU2_TR(0x469405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B469408:{NFSU2_TR(0x469408);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469409:{NFSU2_TR(0x469409);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46940a:{NFSU2_TR(0x46940a);
__builtin_memmove((R+28),(R+4),4);
}
B46940c:{NFSU2_TR(0x46940c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469410:{NFSU2_TR(0x469410);
u8 U[4];
w4(U+0,u32(0x78a744ull));
s4(u32(r4(R+28)),r4(U+0));
}
B469416:{NFSU2_TR(0x469416);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469419:{NFSU2_TR(0x469419);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46941b:{NFSU2_TR(0x46941b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469423:{NFSU2_TR(0x469423);
if(r1(R+518)){{goto L469453;}}
}
B469425:L469425:{c.instructions+=3;NFSU2_TR(0x469425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B469427:{NFSU2_TR(0x469427);
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
B469429:{NFSU2_TR(0x469429);
if(r1(R+518)){{goto L469430;}}
}
B46942b:L46942b:{c.instructions+=1;NFSU2_TR(0x46942b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469430ull));
TAIL_STATIC(0x735550u,735);
}
B469430:L469430:{c.instructions+=3;NFSU2_TR(0x469430);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B469434:{NFSU2_TR(0x469434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469435:{NFSU2_TR(0x469435);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46943aull));
TAIL_STATIC(0x734df0u,734);
}
B46943a:L46943a:{c.instructions+=2;NFSU2_TR(0x46943a);
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
B46943d:{NFSU2_TR(0x46943d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469442ull));
TAIL_STATIC(0x734e40u,734);
}
B469442:L469442:{c.instructions+=5;NFSU2_TR(0x469442);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469446:{NFSU2_TR(0x469446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469448:{NFSU2_TR(0x469448);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46944a:{NFSU2_TR(0x46944a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46944b:{NFSU2_TR(0x46944b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46944eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46944e:L46944e:{c.instructions+=1;NFSU2_TR(0x46944e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469453ull));
TAIL_STATIC(0x734e60u,734);
}
B469453:L469453:{c.instructions+=8;NFSU2_TR(0x469453);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469458:{NFSU2_TR(0x469458);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46945a:{NFSU2_TR(0x46945a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469461:{NFSU2_TR(0x469461);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469463:{NFSU2_TR(0x469463);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2cull))));
}
B469466:{NFSU2_TR(0x469466);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469467:{NFSU2_TR(0x469467);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46946f:{NFSU2_TR(0x46946f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469474ull));
TAIL_STATIC(0x75c401u,75c);
}
B469474:L469474:{c.instructions+=6;NFSU2_TR(0x469474);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469478:{NFSU2_TR(0x469478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469479:{NFSU2_TR(0x469479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46947a:{NFSU2_TR(0x46947a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469481:{NFSU2_TR(0x469481);
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
B469484:{NFSU2_TR(0x469484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469490:L469490:{c.instructions+=5;NFSU2_TR(0x469490);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B469495:{NFSU2_TR(0x469495);
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
B469497:{NFSU2_TR(0x469497);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469498:{NFSU2_TR(0x469498);
__builtin_memmove((R+24),(R+4),4);
}
B46949a:{NFSU2_TR(0x46949a);
if(r1(R+518)){{goto L46950f;}}
}
B46949c:L46949c:{c.instructions+=4;NFSU2_TR(0x46949c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4694a0:{NFSU2_TR(0x4694a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B4694a3:{NFSU2_TR(0x4694a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x49ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4694a6:{NFSU2_TR(0x4694a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4694d1;}}
}
B4694a8:L4694a8:{c.instructions+=3;NFSU2_TR(0x4694a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4694ab:{NFSU2_TR(0x4694ab);
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
B4694ad:{NFSU2_TR(0x4694ad);
if(r1(R+518)){{goto L46950f;}}
}
B4694af:L4694af:{c.instructions+=2;NFSU2_TR(0x4694af);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4694b6:{NFSU2_TR(0x4694b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46950f;}}
}
B4694b8:L4694b8:{c.instructions+=2;NFSU2_TR(0x4694b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4694c2:{NFSU2_TR(0x4694c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4694c7ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B4694c7:L4694c7:{c.instructions+=3;NFSU2_TR(0x4694c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4694cd:{NFSU2_TR(0x4694cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4694ce:{NFSU2_TR(0x4694ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4694d1:L4694d1:{c.instructions+=4;NFSU2_TR(0x4694d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4694d2:{NFSU2_TR(0x4694d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4694d5:{NFSU2_TR(0x4694d5);
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
B4694d7:{NFSU2_TR(0x4694d7);
if(r1(R+518)){{goto L46950e;}}
}
B4694d9:L4694d9:{c.instructions+=3;NFSU2_TR(0x4694d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4694db:{NFSU2_TR(0x4694db);
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
B4694dd:{NFSU2_TR(0x4694dd);
if(r1(R+518)){{goto L4694e4;}}
}
B4694df:L4694df:{c.instructions+=1;NFSU2_TR(0x4694df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4694e4ull));
TAIL_STATIC(0x735550u,735);
}
B4694e4:L4694e4:{c.instructions+=3;NFSU2_TR(0x4694e4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4694e8:{NFSU2_TR(0x4694e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4694e9:{NFSU2_TR(0x4694e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4694eeull));
TAIL_STATIC(0x734df0u,734);
}
B4694ee:L4694ee:{c.instructions+=2;NFSU2_TR(0x4694ee);
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
B4694f1:{NFSU2_TR(0x4694f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4694f6ull));
TAIL_STATIC(0x734e40u,734);
}
B4694f6:L4694f6:{c.instructions+=5;NFSU2_TR(0x4694f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4694fa:{NFSU2_TR(0x4694fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4694fc:{NFSU2_TR(0x4694fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4694fe:{NFSU2_TR(0x4694fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4694ff:{NFSU2_TR(0x4694ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469502ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469502:L469502:{c.instructions+=1;NFSU2_TR(0x469502);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469507ull));
TAIL_STATIC(0x734e60u,734);
}
B469507:L469507:{c.instructions+=1;NFSU2_TR(0x469507);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46950e:L46950e:{c.instructions+=1;NFSU2_TR(0x46950e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46950f:L46950f:{c.instructions+=2;NFSU2_TR(0x46950f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469510:{NFSU2_TR(0x469510);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469520:L469520:{c.instructions+=14;NFSU2_TR(0x469520);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469522:{NFSU2_TR(0x469522);
u8 U[4];
w4(U+0,u32(0x7722b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469527:{NFSU2_TR(0x469527);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46952d:{NFSU2_TR(0x46952d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46952e:{NFSU2_TR(0x46952e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469535:{NFSU2_TR(0x469535);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469536:{NFSU2_TR(0x469536);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B46953b:{NFSU2_TR(0x46953b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46953c:{NFSU2_TR(0x46953c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46953d:{NFSU2_TR(0x46953d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B46953f:{NFSU2_TR(0x46953f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469541:{NFSU2_TR(0x469541);
__builtin_memmove((R+24),(R+4),4);
}
B469543:{NFSU2_TR(0x469543);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469547:{NFSU2_TR(0x469547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46955f;}}
}
B469549:L469549:{c.instructions+=7;NFSU2_TR(0x469549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46954a:{NFSU2_TR(0x46954a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B46954d:{NFSU2_TR(0x46954d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46954e:{NFSU2_TR(0x46954e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469552:{NFSU2_TR(0x469552);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469559:{NFSU2_TR(0x469559);
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
B46955c:{NFSU2_TR(0x46955c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46955f:L46955f:{c.instructions+=3;NFSU2_TR(0x46955f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469565:{NFSU2_TR(0x469565);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469567:{NFSU2_TR(0x469567);
if(r1(R+518)){{goto L4696ec;}}
}
B46956d:L46956d:{c.instructions+=2;NFSU2_TR(0x46956d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
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
B469570:{NFSU2_TR(0x469570);
if(r1(R+518)){{goto L4696ec;}}
}
B469576:L469576:{c.instructions+=5;NFSU2_TR(0x469576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469578:{NFSU2_TR(0x469578);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469579:{NFSU2_TR(0x469579);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46957a:{NFSU2_TR(0x46957a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46957c:{NFSU2_TR(0x46957c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46957full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46957f:L46957f:{c.instructions+=6;NFSU2_TR(0x46957f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B469583:{NFSU2_TR(0x469583);
__builtin_memmove((R+12),(R+0),4);
}
B469585:{NFSU2_TR(0x469585);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B469588:{NFSU2_TR(0x469588);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x49ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46958b:{NFSU2_TR(0x46958b);
s4(0x7ec844,u32(0x789d10ull));
}
B469595:{NFSU2_TR(0x469595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46963d;}}
}
B46959b:L46959b:{c.instructions+=4;NFSU2_TR(0x46959b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46959e:{NFSU2_TR(0x46959e);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4695a1:{NFSU2_TR(0x4695a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4695a3:{NFSU2_TR(0x4695a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469632;}}
}
B4695a9:L4695a9:{c.instructions+=2;NFSU2_TR(0x4695a9);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4695ab:{NFSU2_TR(0x4695ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4695b0ull));
TAIL_STATIC(0x457e20u,457);
}
B4695b0:L4695b0:{c.instructions+=6;NFSU2_TR(0x4695b0);
__builtin_memmove((R+24),(R+0),4);
}
B4695b2:{NFSU2_TR(0x4695b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4695b5:{NFSU2_TR(0x4695b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4695b9:{NFSU2_TR(0x4695b9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4695bb:{NFSU2_TR(0x4695bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4695bf:{NFSU2_TR(0x4695bf);
if(r1(R+518)){{goto L469616;}}
}
B4695c1:L4695c1:{c.instructions+=3;NFSU2_TR(0x4695c1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4695c3:{NFSU2_TR(0x4695c3);
__builtin_memmove((R+0),(R+28),4);
}
B4695c5:{NFSU2_TR(0x4695c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4695cb;}}
}
B4695c7:L4695c7:{c.instructions+=2;NFSU2_TR(0x4695c7);
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
B4695c9:{NFSU2_TR(0x4695c9);
{goto L4695d5;}
}
B4695cb:L4695cb:{c.instructions+=2;NFSU2_TR(0x4695cb);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x4bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4695ce:{NFSU2_TR(0x4695ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4695d5;}}
}
B4695d0:L4695d0:{c.instructions+=1;NFSU2_TR(0x4695d0);
w4(R+0,u32(0x4bull));
}
B4695d5:L4695d5:{c.instructions+=9;NFSU2_TR(0x4695d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4695d8:{NFSU2_TR(0x4695d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4695d9:{NFSU2_TR(0x4695d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4695da:{NFSU2_TR(0x4695da);
u8 U[4];
w4(U+0,u32(0x82c590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4695df:{NFSU2_TR(0x4695df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4695e1:{NFSU2_TR(0x4695e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4695e4:{NFSU2_TR(0x4695e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4695e7:{NFSU2_TR(0x4695e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4695ea:{NFSU2_TR(0x4695ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4695efull));
TAIL_STATIC(0x7358c0u,735);
}
B4695ef:L4695ef:{c.instructions+=3;NFSU2_TR(0x4695ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4695f2:{NFSU2_TR(0x4695f2);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4695f4:{NFSU2_TR(0x4695f4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L469618;}}
}
B4695f6:L4695f6:{c.instructions+=3;NFSU2_TR(0x4695f6);
u8 U[4];
w4(U+0,u32(0x7edd98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4695fb:{NFSU2_TR(0x4695fb);
w4(R+4,u32(0x82c590ull));
}
B469600:{NFSU2_TR(0x469600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469605ull));
TAIL_STATIC(0x735840u,735);
}
B469605:L469605:{c.instructions+=4;NFSU2_TR(0x469605);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469606:{NFSU2_TR(0x469606);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469607:{NFSU2_TR(0x469607);
u8 U[4];
w4(U+0,u32(0x82c590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46960c:{NFSU2_TR(0x46960c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469611ull));
TAIL_STATIC(0x7358c0u,735);
}
B469611:L469611:{c.instructions+=2;NFSU2_TR(0x469611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B469614:{NFSU2_TR(0x469614);
{goto L469618;}
}
B469616:L469616:{c.instructions+=1;NFSU2_TR(0x469616);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B469618:L469618:{c.instructions+=6;NFSU2_TR(0x469618);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46961c:{NFSU2_TR(0x46961c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46961f:{NFSU2_TR(0x46961f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469620:{NFSU2_TR(0x469620);
w4(R+4,u32(0x82c6e8ull));
}
B469625:{NFSU2_TR(0x469625);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469629:{NFSU2_TR(0x469629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46962eull));
TAIL_STATIC(0x576a10u,576);
}
B46962e:L46962e:{c.instructions+=1;NFSU2_TR(0x46962e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469632:L469632:{c.instructions+=2;NFSU2_TR(0x469632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469638:{NFSU2_TR(0x469638);
{goto L4696ea;}
}
B46963d:L46963d:{c.instructions+=2;NFSU2_TR(0x46963d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46963f:{NFSU2_TR(0x46963f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469644ull));
TAIL_STATIC(0x457e20u,457);
}
B469644:L469644:{c.instructions+=6;NFSU2_TR(0x469644);
__builtin_memmove((R+24),(R+0),4);
}
B469646:{NFSU2_TR(0x469646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B469649:{NFSU2_TR(0x469649);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46964d:{NFSU2_TR(0x46964d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46964f:{NFSU2_TR(0x46964f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469657:{NFSU2_TR(0x469657);
if(r1(R+518)){{goto L4696cb;}}
}
B469659:L469659:{c.instructions+=3;NFSU2_TR(0x469659);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46965b:{NFSU2_TR(0x46965b);
__builtin_memmove((R+0),(R+28),4);
}
B46965d:{NFSU2_TR(0x46965d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L469663;}}
}
B46965f:L46965f:{c.instructions+=2;NFSU2_TR(0x46965f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B469661:{NFSU2_TR(0x469661);
{goto L46966d;}
}
B469663:L469663:{c.instructions+=2;NFSU2_TR(0x469663);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469666:{NFSU2_TR(0x469666);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46966d;}}
}
B469668:L469668:{c.instructions+=1;NFSU2_TR(0x469668);
w4(R+0,u32(0x4bull));
}
B46966d:L46966d:{c.instructions+=5;NFSU2_TR(0x46966d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46966f:{NFSU2_TR(0x46966f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469672:{NFSU2_TR(0x469672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B469674:{NFSU2_TR(0x469674);
__builtin_memmove((R+0),(R+12),4);
}
B469676:{NFSU2_TR(0x469676);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46967c;}}
}
B469678:L469678:{c.instructions+=2;NFSU2_TR(0x469678);
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
B46967a:{NFSU2_TR(0x46967a);
{goto L469689;}
}
B46967c:L46967c:{c.instructions+=2;NFSU2_TR(0x46967c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469682:{NFSU2_TR(0x469682);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L469689;}}
}
B469684:L469684:{c.instructions+=1;NFSU2_TR(0x469684);
w4(R+0,u32(0x7fffull));
}
B469689:L469689:{c.instructions+=7;NFSU2_TR(0x469689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46968a:{NFSU2_TR(0x46968a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46968b:{NFSU2_TR(0x46968b);
u8 U[4];
w4(U+0,u32(0x82c660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469690:{NFSU2_TR(0x469690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469693:{NFSU2_TR(0x469693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46969a:{NFSU2_TR(0x46969a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46969d:{NFSU2_TR(0x46969d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4696a2ull));
TAIL_STATIC(0x7358c0u,735);
}
B4696a2:L4696a2:{c.instructions+=3;NFSU2_TR(0x4696a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4696a5:{NFSU2_TR(0x4696a5);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4696a7:{NFSU2_TR(0x4696a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4696c7;}}
}
B4696a9:L4696a9:{c.instructions+=3;NFSU2_TR(0x4696a9);
u8 U[4];
w4(U+0,u32(0x7edd90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4696ae:{NFSU2_TR(0x4696ae);
w4(R+4,u32(0x82c660ull));
}
B4696b3:{NFSU2_TR(0x4696b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4696b8ull));
TAIL_STATIC(0x735840u,735);
}
B4696b8:L4696b8:{c.instructions+=4;NFSU2_TR(0x4696b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4696b9:{NFSU2_TR(0x4696b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4696ba:{NFSU2_TR(0x4696ba);
u8 U[4];
w4(U+0,u32(0x82c660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4696bf:{NFSU2_TR(0x4696bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4696c4ull));
TAIL_STATIC(0x7358c0u,735);
}
B4696c4:L4696c4:{c.instructions+=1;NFSU2_TR(0x4696c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4696c7:L4696c7:{c.instructions+=2;NFSU2_TR(0x4696c7);
__builtin_memmove((R+4),(R+24),4);
}
B4696c9:{NFSU2_TR(0x4696c9);
{goto L4696cd;}
}
B4696cb:L4696cb:{c.instructions+=1;NFSU2_TR(0x4696cb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4696cd:L4696cd:{c.instructions+=5;NFSU2_TR(0x4696cd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4696cf:{NFSU2_TR(0x4696cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4696d3:{NFSU2_TR(0x4696d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4696db:{NFSU2_TR(0x4696db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4696de:{NFSU2_TR(0x4696de);
if(r1(R+518)){{goto L4696e7;}}
}
B4696e0:L4696e0:{c.instructions+=2;NFSU2_TR(0x4696e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4696e2:{NFSU2_TR(0x4696e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4696e7ull));
TAIL_STATIC(0x45fa60u,45f);
}
B4696e7:L4696e7:{c.instructions+=1;NFSU2_TR(0x4696e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4696ea:L4696ea:{c.instructions+=2;NFSU2_TR(0x4696ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4696eb:{NFSU2_TR(0x4696eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4696ec:L4696ec:{c.instructions+=7;NFSU2_TR(0x4696ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4696f0:{NFSU2_TR(0x4696f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4696f1:{NFSU2_TR(0x4696f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4696f3:{NFSU2_TR(0x4696f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4696f4:{NFSU2_TR(0x4696f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4696fb:{NFSU2_TR(0x4696fb);
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
B4696fe:{NFSU2_TR(0x4696fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469710:L469710:{c.instructions+=6;NFSU2_TR(0x469710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469711:{NFSU2_TR(0x469711);
__builtin_memmove((R+24),(R+4),4);
}
B469713:{NFSU2_TR(0x469713);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469716:{NFSU2_TR(0x469716);
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
B469718:{NFSU2_TR(0x469718);
u8 U[4];
w4(U+0,u32(0x789d24ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46971e:{NFSU2_TR(0x46971e);
if(r1(R+518)){{goto L469726;}}
}
B469720:L469720:{c.instructions+=3;NFSU2_TR(0x469720);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469722:{NFSU2_TR(0x469722);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469724:{NFSU2_TR(0x469724);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469726ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B469726:L469726:{c.instructions+=4;NFSU2_TR(0x469726);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469729:{NFSU2_TR(0x469729);
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
B46972b:{NFSU2_TR(0x46972b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469732:{NFSU2_TR(0x469732);
if(r1(R+518)){{goto L46973a;}}
}
B469734:L469734:{c.instructions+=3;NFSU2_TR(0x469734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469736:{NFSU2_TR(0x469736);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469738:{NFSU2_TR(0x469738);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46973aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46973a:L46973a:{c.instructions+=3;NFSU2_TR(0x46973a);
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
B46973f:{NFSU2_TR(0x46973f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469746:{NFSU2_TR(0x469746);
if(r1(R+518)){{goto L469751;}}
}
B469748:L469748:{c.instructions+=2;NFSU2_TR(0x469748);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469749:{NFSU2_TR(0x469749);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46974eull));
TAIL_STATIC(0x575630u,575);
}
B46974e:L46974e:{c.instructions+=1;NFSU2_TR(0x46974e);
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
B469751:L469751:{c.instructions+=3;NFSU2_TR(0x469751);
__builtin_memmove((R+0),(R+24),4);
}
B469753:{NFSU2_TR(0x469753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469754:{NFSU2_TR(0x469754);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469760:L469760:{c.instructions+=12;NFSU2_TR(0x469760);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469762:{NFSU2_TR(0x469762);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469767:{NFSU2_TR(0x469767);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46976d:{NFSU2_TR(0x46976d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46976e:{NFSU2_TR(0x46976e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469775:{NFSU2_TR(0x469775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B469778:{NFSU2_TR(0x469778);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B46977d:{NFSU2_TR(0x46977d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46977f:{NFSU2_TR(0x46977f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469780:{NFSU2_TR(0x469780);
__builtin_memmove((R+28),(R+4),4);
}
B469782:{NFSU2_TR(0x469782);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469786:{NFSU2_TR(0x469786);
if(r1(R+518)){{goto L46979f;}}
}
B469788:L469788:{c.instructions+=3;NFSU2_TR(0x469788);
__builtin_memmove((R+0),gp(0x82b924),4);
}
B46978d:{NFSU2_TR(0x46978d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46978f:{NFSU2_TR(0x46978f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46979f;}}
}
B469791:L469791:{c.instructions+=3;NFSU2_TR(0x469791);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469794:{NFSU2_TR(0x469794);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469796:{NFSU2_TR(0x469796);
if(r1(R+518)){{goto L46979f;}}
}
B469798:L469798:{c.instructions+=3;NFSU2_TR(0x469798);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46979b:{NFSU2_TR(0x46979b);
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
B46979d:{NFSU2_TR(0x46979d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4697b4;}}
}
B46979f:L46979f:{c.instructions+=6;NFSU2_TR(0x46979f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B4697a2:{NFSU2_TR(0x4697a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4697a3:{NFSU2_TR(0x4697a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4697a7:{NFSU2_TR(0x4697a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4697ae:{NFSU2_TR(0x4697ae);
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
B4697b1:{NFSU2_TR(0x4697b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4697b4:L4697b4:{c.instructions+=5;NFSU2_TR(0x4697b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4697b6:{NFSU2_TR(0x4697b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4697b7:{NFSU2_TR(0x4697b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4697b8:{NFSU2_TR(0x4697b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4697ba:{NFSU2_TR(0x4697ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4697bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4697bd:L4697bd:{c.instructions+=4;NFSU2_TR(0x4697bd);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4697bf:{NFSU2_TR(0x4697bf);
__builtin_memmove((R+12),(R+0),4);
}
B4697c1:{NFSU2_TR(0x4697c1);
s4(0x7ec844,u32(0x789d40ull));
}
B4697cb:{NFSU2_TR(0x4697cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4697d0ull));
TAIL_STATIC(0x457e20u,457);
}
B4697d0:L4697d0:{c.instructions+=6;NFSU2_TR(0x4697d0);
__builtin_memmove((R+24),(R+0),4);
}
B4697d2:{NFSU2_TR(0x4697d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4697d5:{NFSU2_TR(0x4697d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4697d9:{NFSU2_TR(0x4697d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4697db:{NFSU2_TR(0x4697db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4697e3:{NFSU2_TR(0x4697e3);
if(r1(R+518)){{goto L469861;}}
}
B4697e5:L4697e5:{c.instructions+=3;NFSU2_TR(0x4697e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4697e9:{NFSU2_TR(0x4697e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4697eb:{NFSU2_TR(0x4697eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4697f1;}}
}
B4697ed:L4697ed:{c.instructions+=2;NFSU2_TR(0x4697ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4697ef:{NFSU2_TR(0x4697ef);
{goto L4697fb;}
}
B4697f1:L4697f1:{c.instructions+=2;NFSU2_TR(0x4697f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4697f4:{NFSU2_TR(0x4697f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4697fb;}}
}
B4697f6:L4697f6:{c.instructions+=1;NFSU2_TR(0x4697f6);
w4(R+0,u32(0x4bull));
}
B4697fb:L4697fb:{c.instructions+=5;NFSU2_TR(0x4697fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4697fd:{NFSU2_TR(0x4697fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469800:{NFSU2_TR(0x469800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B469802:{NFSU2_TR(0x469802);
__builtin_memmove((R+0),(R+12),4);
}
B469804:{NFSU2_TR(0x469804);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46980a;}}
}
B469806:L469806:{c.instructions+=2;NFSU2_TR(0x469806);
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
B469808:{NFSU2_TR(0x469808);
{goto L469817;}
}
B46980a:L46980a:{c.instructions+=2;NFSU2_TR(0x46980a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469810:{NFSU2_TR(0x469810);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L469817;}}
}
B469812:L469812:{c.instructions+=1;NFSU2_TR(0x469812);
w4(R+0,u32(0x7fffull));
}
B469817:L469817:{c.instructions+=7;NFSU2_TR(0x469817);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469818:{NFSU2_TR(0x469818);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469819:{NFSU2_TR(0x469819);
u8 U[4];
w4(U+0,u32(0x82c5a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46981e:{NFSU2_TR(0x46981e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469821:{NFSU2_TR(0x469821);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469828:{NFSU2_TR(0x469828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46982f:{NFSU2_TR(0x46982f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469834ull));
TAIL_STATIC(0x7358c0u,735);
}
B469834:L469834:{c.instructions+=3;NFSU2_TR(0x469834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B469837:{NFSU2_TR(0x469837);
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
B469839:{NFSU2_TR(0x469839);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L469859;}}
}
B46983b:L46983b:{c.instructions+=3;NFSU2_TR(0x46983b);
u8 U[4];
w4(U+0,u32(0x7edd88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469840:{NFSU2_TR(0x469840);
w4(R+4,u32(0x82c5a8ull));
}
B469845:{NFSU2_TR(0x469845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46984aull));
TAIL_STATIC(0x735840u,735);
}
B46984a:L46984a:{c.instructions+=4;NFSU2_TR(0x46984a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46984b:{NFSU2_TR(0x46984b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46984c:{NFSU2_TR(0x46984c);
u8 U[4];
w4(U+0,u32(0x82c5a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469851:{NFSU2_TR(0x469851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469856ull));
TAIL_STATIC(0x7358c0u,735);
}
B469856:L469856:{c.instructions+=1;NFSU2_TR(0x469856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B469859:L469859:{c.instructions+=3;NFSU2_TR(0x469859);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46985d:{NFSU2_TR(0x46985d);
__builtin_memmove((R+4),(R+24),4);
}
B46985f:{NFSU2_TR(0x46985f);
{goto L469863;}
}
B469861:L469861:{c.instructions+=1;NFSU2_TR(0x469861);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B469863:L469863:{c.instructions+=6;NFSU2_TR(0x469863);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469865:{NFSU2_TR(0x469865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469866:{NFSU2_TR(0x469866);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46986e:{NFSU2_TR(0x46986e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469871:{NFSU2_TR(0x469871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469872:{NFSU2_TR(0x469872);
if(r1(R+518)){{goto L46987b;}}
}
B469874:L469874:{c.instructions+=2;NFSU2_TR(0x469874);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469876:{NFSU2_TR(0x469876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46987bull));
TAIL_STATIC(0x45fa60u,45f);
}
B46987b:L46987b:{c.instructions+=7;NFSU2_TR(0x46987b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46987f:{NFSU2_TR(0x46987f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469886:{NFSU2_TR(0x469886);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B469888:{NFSU2_TR(0x469888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469889:{NFSU2_TR(0x469889);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469890:{NFSU2_TR(0x469890);
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
B469893:{NFSU2_TR(0x469893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4698a0:L4698a0:{c.instructions+=5;NFSU2_TR(0x4698a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4698a4:{NFSU2_TR(0x4698a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4698a5:{NFSU2_TR(0x4698a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4698a6:{NFSU2_TR(0x4698a6);
__builtin_memmove((R+24),(R+4),4);
}
B4698a8:{NFSU2_TR(0x4698a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4698adull));
TAIL_STATIC(0x4593b0u,459);
}
B4698ad:L4698ad:{c.instructions+=3;NFSU2_TR(0x4698ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4698b3:{NFSU2_TR(0x4698b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4698b4:{NFSU2_TR(0x4698b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4698b9ull));
TAIL_STATIC(0x458f00u,458);
}
B4698b9:L4698b9:{c.instructions+=4;NFSU2_TR(0x4698b9);
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
B4698bc:{NFSU2_TR(0x4698bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4698c2:{NFSU2_TR(0x4698c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4698c3:{NFSU2_TR(0x4698c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4698d0:L4698d0:{c.instructions+=4;NFSU2_TR(0x4698d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4698d6:{NFSU2_TR(0x4698d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4698d7:{NFSU2_TR(0x4698d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4698d9:{NFSU2_TR(0x4698d9);
__builtin_memmove((R+16),(R+16),4);
}
B4698e0:L4698e0:{c.instructions+=3;NFSU2_TR(0x4698e0);
w4(R+24,u32(r2(R+0)));
}
B4698e3:{NFSU2_TR(0x4698e3);
u8 U[26];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82a5a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(R+8))<(r4(U+18))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+18)));
w4(U+22,u32(u32(r4(R+8))-u32(r4(U+18))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4698ea:{NFSU2_TR(0x4698ea);
if(r1(R+518)){{goto L46996a;}}
}
B4698ec:L4698ec:{c.instructions+=3;NFSU2_TR(0x4698ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4698ed:{NFSU2_TR(0x4698ed);
w1(R+512,u8((r2(R+0))<(u16(0x6ull))));
}
B4698f1:{NFSU2_TR(0x4698f1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4698e0u);}goto L4698e0;}}
}
B4698f3:L4698f3:{c.instructions+=9;NFSU2_TR(0x4698f3);
__builtin_memmove((R+0),gp(0x82cb3c),4);
}
B4698f8:{NFSU2_TR(0x4698f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4698f9:{NFSU2_TR(0x4698f9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4698fb:{NFSU2_TR(0x4698fb);
w4(R+24,u32(0x6ull));
}
B469900:{NFSU2_TR(0x469900);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x469900);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x469900);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B469902:{NFSU2_TR(0x469902);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82a5a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B469909:{NFSU2_TR(0x469909);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46990b:{NFSU2_TR(0x46990b);
__builtin_memmove(gp(0x82cb3c),(R+8),4);
}
B469911:{NFSU2_TR(0x469911);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469930;}}
}
B469913:L469913:{c.instructions+=7;NFSU2_TR(0x469913);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B469916:{NFSU2_TR(0x469916);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B469918:{NFSU2_TR(0x469918);
w4(R+24,u32(0x6ull));
}
B46991d:{NFSU2_TR(0x46991d);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x46991d);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x46991d);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B46991f:{NFSU2_TR(0x46991f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82a5a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B469926:{NFSU2_TR(0x469926);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469928:{NFSU2_TR(0x469928);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469913u);}goto L469913;}}
}
B46992a:L46992a:{c.instructions+=1;NFSU2_TR(0x46992a);
__builtin_memmove(gp(0x82cb3c),(R+8),4);
}
B469930:L469930:{c.instructions+=16;NFSU2_TR(0x469930);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82a5a0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B469937:{NFSU2_TR(0x469937);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x7f0de0ull))));
}
B46993d:{NFSU2_TR(0x46993d);
w4(R+0,u32(0xaf286bcbull));
}
B469942:{NFSU2_TR(0x469942);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+24)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B469944:{NFSU2_TR(0x469944);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469948:{NFSU2_TR(0x469948);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B46994a:{NFSU2_TR(0x46994a);
w4(R+24,shr<u32>(r4(R+24),u64(u32(0x1ull))));
}
B46994c:{NFSU2_TR(0x46994c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B46994e:{NFSU2_TR(0x46994e);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B469951:{NFSU2_TR(0x469951);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469954:{NFSU2_TR(0x469954);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B469957:{NFSU2_TR(0x469957);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x7f0de0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x7f0de0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7f0de0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46995d:{NFSU2_TR(0x46995d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469963:{NFSU2_TR(0x469963);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469966:{NFSU2_TR(0x469966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469967:{NFSU2_TR(0x469967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46996a:L46996a:{c.instructions+=4;NFSU2_TR(0x46996a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46996e:{NFSU2_TR(0x46996e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469971:{NFSU2_TR(0x469971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469972:{NFSU2_TR(0x469972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469980:L469980:{c.instructions+=4;NFSU2_TR(0x469980);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469984:{NFSU2_TR(0x469984);
__builtin_memmove((R+0),(R+8),4);
}
B469986:{NFSU2_TR(0x469986);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B469987:{NFSU2_TR(0x469987);
if(r1(R+518)){{goto L469992;}}
}
B469989:L469989:{c.instructions+=2;NFSU2_TR(0x469989);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46998d:{NFSU2_TR(0x46998d);
TAIL_STATIC(0x459550u,459);
}
B469992:L469992:{c.instructions+=3;NFSU2_TR(0x469992);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469999:{NFSU2_TR(0x469999);
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
B46999b:{NFSU2_TR(0x46999b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4699a0:L4699a0:{c.instructions+=5;NFSU2_TR(0x4699a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4699a4:{NFSU2_TR(0x4699a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4699a5:{NFSU2_TR(0x4699a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4699a8:{NFSU2_TR(0x4699a8);
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
B4699aa:{NFSU2_TR(0x4699aa);
if(r1(R+518)){{goto L469a0c;}}
}
B4699ac:L4699ac:{c.instructions+=4;NFSU2_TR(0x4699ac);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4699b2:{NFSU2_TR(0x4699b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4699b8:{NFSU2_TR(0x4699b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4699ba:{NFSU2_TR(0x4699ba);
__builtin_memmove((R+12),(R+12),4);
}
B4699c0:L4699c0:{c.instructions+=2;NFSU2_TR(0x4699c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4699c2:{NFSU2_TR(0x4699c2);
if(r1(R+518)){{goto L4699e7;}}
}
B4699c4:L4699c4:{c.instructions+=3;NFSU2_TR(0x4699c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4699c7:{NFSU2_TR(0x4699c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4699c9:{NFSU2_TR(0x4699c9);
if(r1(R+518)){{goto L4699e7;}}
}
B4699cb:L4699cb:{c.instructions+=1;NFSU2_TR(0x4699cb);
{goto L4699d0;}
}
B4699d0:L4699d0:{c.instructions+=2;NFSU2_TR(0x4699d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4699d3:{NFSU2_TR(0x4699d3);
if(r1(R+518)){{goto L4699de;}}
}
B4699d5:L4699d5:{c.instructions+=3;NFSU2_TR(0x4699d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4699d8:{NFSU2_TR(0x4699d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4699da:{NFSU2_TR(0x4699da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4699d0u);}goto L4699d0;}}
}
B4699dc:L4699dc:{c.instructions+=1;NFSU2_TR(0x4699dc);
{goto L4699e7;}
}
B4699de:L4699de:{c.instructions+=2;NFSU2_TR(0x4699de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4699e0:{NFSU2_TR(0x4699e0);
if(r1(R+518)){{goto L4699e7;}}
}
B4699e2:L4699e2:{c.instructions+=2;NFSU2_TR(0x4699e2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4699e5:{NFSU2_TR(0x4699e5);
if(r1(R+518)){{goto L4699ef;}}
}
B4699e7:L4699e7:{c.instructions+=3;NFSU2_TR(0x4699e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4699e8:{NFSU2_TR(0x4699e8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4699eb:{NFSU2_TR(0x4699eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4699c0u);}goto L4699c0;}}
}
B4699ed:L4699ed:{c.instructions+=2;NFSU2_TR(0x4699ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4699ee:{NFSU2_TR(0x4699ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4699ef:L4699ef:{c.instructions+=2;NFSU2_TR(0x4699ef);
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
B4699f1:{NFSU2_TR(0x4699f1);
if(r1(R+518)){{goto L469a0c;}}
}
B4699f3:L4699f3:{c.instructions+=3;NFSU2_TR(0x4699f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4699f6:{NFSU2_TR(0x4699f6);
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
B4699f8:{NFSU2_TR(0x4699f8);
if(r1(R+518)){{goto L469a0c;}}
}
B4699fa:L4699fa:{c.instructions+=1;NFSU2_TR(0x4699fa);
__builtin_memmove((R+12),(R+12),4);
}
B469a00:L469a00:{c.instructions+=2;NFSU2_TR(0x469a00);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B469a03:{NFSU2_TR(0x469a03);
if(r1(R+518)){{goto L469a0c;}}
}
B469a05:L469a05:{c.instructions+=3;NFSU2_TR(0x469a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469a08:{NFSU2_TR(0x469a08);
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
B469a0a:{NFSU2_TR(0x469a0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469a00u);}goto L469a00;}}
}
B469a0c:L469a0c:{c.instructions+=2;NFSU2_TR(0x469a0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469a0d:{NFSU2_TR(0x469a0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469a10:L469a10:{c.instructions+=10;NFSU2_TR(0x469a10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a11:{NFSU2_TR(0x469a11);
__builtin_memmove((R+20),(R+16),4);
}
B469a13:{NFSU2_TR(0x469a13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B469a16:{NFSU2_TR(0x469a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B469a19:{NFSU2_TR(0x469a19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a1a:{NFSU2_TR(0x469a1a);
__builtin_memmove((R+24),(R+4),4);
}
B469a1c:{NFSU2_TR(0x469a1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469a1f:{NFSU2_TR(0x469a1f);
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
B469a21:{NFSU2_TR(0x469a21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a22:{NFSU2_TR(0x469a22);
if(r1(R+518)){{goto L469b18;}}
}
B469a28:L469a28:{c.instructions+=3;NFSU2_TR(0x469a28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B469a2b:{NFSU2_TR(0x469a2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a2c:{NFSU2_TR(0x469a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469a31ull));
TAIL_STATIC(0x459a50u,459);
}
B469a31:L469a31:{c.instructions+=9;NFSU2_TR(0x469a31);
__builtin_memmove((R+4),gp(0x788484),4);
}
B469a37:{NFSU2_TR(0x469a37);
__builtin_memmove((R+28),(R+0),4);
}
B469a39:{NFSU2_TR(0x469a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469a3c:{NFSU2_TR(0x469a3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B469a3f:{NFSU2_TR(0x469a3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a40:{NFSU2_TR(0x469a40);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x60ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469a43:{NFSU2_TR(0x469a43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469a44:{NFSU2_TR(0x469a44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469a48:{NFSU2_TR(0x469a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469a4dull));
TAIL_STATIC(0x43ce10u,43c);
}
B469a4d:L469a4d:{c.instructions+=5;NFSU2_TR(0x469a4d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B469a51:{NFSU2_TR(0x469a51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B469a54:{NFSU2_TR(0x469a54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469a56:{NFSU2_TR(0x469a56);
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
B469a59:{NFSU2_TR(0x469a59);
if(r1(R+514)){{goto L469b18;}}
}
B469a5f:L469a5f:{c.instructions+=26;NFSU2_TR(0x469a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469a62:{NFSU2_TR(0x469a62);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469a65:{NFSU2_TR(0x469a65);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469a68:{NFSU2_TR(0x469a68);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469a6b:{NFSU2_TR(0x469a6b);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469a6e:{NFSU2_TR(0x469a6e);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469a71:{NFSU2_TR(0x469a71);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469a74:{NFSU2_TR(0x469a74);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469a78:{NFSU2_TR(0x469a78);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B469a7a:{NFSU2_TR(0x469a7a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469a7e:{NFSU2_TR(0x469a7e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469a82:{NFSU2_TR(0x469a82);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B469a84:{NFSU2_TR(0x469a84);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B469a86:{NFSU2_TR(0x469a86);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B469a88:{NFSU2_TR(0x469a88);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B469a8a:{NFSU2_TR(0x469a8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B469a8c:{NFSU2_TR(0x469a8c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469a90:{NFSU2_TR(0x469a90);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B469a94:{NFSU2_TR(0x469a94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B469a96:{NFSU2_TR(0x469a96);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B469a98:{NFSU2_TR(0x469a98);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B469a9a:{NFSU2_TR(0x469a9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B469a9c:{NFSU2_TR(0x469a9c);
{u32 ea_=u32(u32(7898248u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B469aa2:{NFSU2_TR(0x469aa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469aa4:{NFSU2_TR(0x469aa4);
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
B469aa7:{NFSU2_TR(0x469aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L469b16;}}
}
B469aa9:L469aa9:{c.instructions+=19;NFSU2_TR(0x469aa9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469aad:{NFSU2_TR(0x469aad);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469ab5:{NFSU2_TR(0x469ab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469abd:{NFSU2_TR(0x469abd);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469ac5:{NFSU2_TR(0x469ac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469acd:{NFSU2_TR(0x469acd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469ad1:{NFSU2_TR(0x469ad1);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469ad4:{NFSU2_TR(0x469ad4);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469ad7:{NFSU2_TR(0x469ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469ada:{NFSU2_TR(0x469ada);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B469ae0:{NFSU2_TR(0x469ae0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B469ae2:{NFSU2_TR(0x469ae2);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469ae6:{NFSU2_TR(0x469ae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469aea:{NFSU2_TR(0x469aea);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B469aee:{NFSU2_TR(0x469aee);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469af2:{NFSU2_TR(0x469af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469af8:{NFSU2_TR(0x469af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469afa:{NFSU2_TR(0x469afa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469afb:{NFSU2_TR(0x469afb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469afeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469afe:L469afe:{c.instructions+=2;NFSU2_TR(0x469afe);
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
B469b00:{NFSU2_TR(0x469b00);
if(r1(R+518)){{goto L469b18;}}
}
B469b02:L469b02:{c.instructions+=5;NFSU2_TR(0x469b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B469b04:{NFSU2_TR(0x469b04);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B469b08:{NFSU2_TR(0x469b08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469b09:{NFSU2_TR(0x469b09);
__builtin_memmove((R+4),(R+0),4);
}
B469b0b:{NFSU2_TR(0x469b0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469b0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469b0e:L469b0e:{c.instructions+=5;NFSU2_TR(0x469b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469b0f:{NFSU2_TR(0x469b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469b10:{NFSU2_TR(0x469b10);
__builtin_memmove((R+16),(R+20),4);
}
B469b12:{NFSU2_TR(0x469b12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B469b13:{NFSU2_TR(0x469b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469b16:L469b16:{c.instructions+=1;NFSU2_TR(0x469b16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B469b18:L469b18:{c.instructions+=5;NFSU2_TR(0x469b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469b19:{NFSU2_TR(0x469b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469b1a:{NFSU2_TR(0x469b1a);
__builtin_memmove((R+16),(R+20),4);
}
B469b1c:{NFSU2_TR(0x469b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B469b1d:{NFSU2_TR(0x469b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469b20:L469b20:{c.instructions+=7;NFSU2_TR(0x469b20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469b24:{NFSU2_TR(0x469b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469b27:{NFSU2_TR(0x469b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469b2a:{NFSU2_TR(0x469b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469b2d:{NFSU2_TR(0x469b2d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xffffffddull))));
}
B469b30:{NFSU2_TR(0x469b30);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B469b33:{NFSU2_TR(0x469b33);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L469b47;}}
}
B469b35:L469b35:{c.instructions+=2;NFSU2_TR(0x469b35);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x469b7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B469b3c:{NFSU2_TR(0x469b3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x469b74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469b43:L469b43:{c.instructions+=2;NFSU2_TR(0x469b43);
w1(R+8,u8(0x1ull));
}
B469b45:{NFSU2_TR(0x469b45);
{goto L469b49;}
}
B469b47:L469b47:{c.instructions+=1;NFSU2_TR(0x469b47);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B469b49:L469b49:{c.instructions+=7;NFSU2_TR(0x469b49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469b4a:{NFSU2_TR(0x469b4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469b4d:{NFSU2_TR(0x469b4d);
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
B469b4f:{NFSU2_TR(0x469b4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B469b52:{NFSU2_TR(0x469b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469b55:{NFSU2_TR(0x469b55);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469b59:{NFSU2_TR(0x469b59);
if(r1(R+518)){{goto L469b6e;}}
}
B469b5b:L469b5b:{c.instructions+=1;NFSU2_TR(0x469b5b);
{goto L469b60;}
}
B469b60:L469b60:{c.instructions+=3;NFSU2_TR(0x469b60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469b62:{NFSU2_TR(0x469b62);
__builtin_memmove((R+4),(R+24),4);
}
B469b64:{NFSU2_TR(0x469b64);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469b67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469b67:L469b67:{c.instructions+=3;NFSU2_TR(0x469b67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469b6a:{NFSU2_TR(0x469b6a);
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
B469b6c:{NFSU2_TR(0x469b6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469b60u);}goto L469b60;}}
}
B469b6e:L469b6e:{c.instructions+=2;NFSU2_TR(0x469b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469b6f:{NFSU2_TR(0x469b6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469b90:L469b90:{c.instructions+=10;NFSU2_TR(0x469b90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469b91:{NFSU2_TR(0x469b91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469b92:{NFSU2_TR(0x469b92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469b93:{NFSU2_TR(0x469b93);
__builtin_memmove((R+28),(R+4),4);
}
B469b95:{NFSU2_TR(0x469b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469b98:{NFSU2_TR(0x469b98);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B469b9a:{NFSU2_TR(0x469b9a);
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
B469b9c:{NFSU2_TR(0x469b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469b9f:{NFSU2_TR(0x469b9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B469ba2:{NFSU2_TR(0x469ba2);
if(r1(R+518)){{goto L469bb2;}}
}
B469ba4:L469ba4:{c.instructions+=3;NFSU2_TR(0x469ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469ba6:{NFSU2_TR(0x469ba6);
__builtin_memmove((R+4),(R+24),4);
}
B469ba8:{NFSU2_TR(0x469ba8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469babull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469bab:L469bab:{c.instructions+=3;NFSU2_TR(0x469bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469bae:{NFSU2_TR(0x469bae);
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
B469bb0:{NFSU2_TR(0x469bb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469ba4u);}goto L469ba4;}}
}
B469bb2:L469bb2:{c.instructions+=6;NFSU2_TR(0x469bb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469bb5:{NFSU2_TR(0x469bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469bb6:{NFSU2_TR(0x469bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469bb7:{NFSU2_TR(0x469bb7);
w1(R+0,u8(0x1ull));
}
B469bb9:{NFSU2_TR(0x469bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B469bba:{NFSU2_TR(0x469bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469bc0:L469bc0:{c.instructions+=6;NFSU2_TR(0x469bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469bc4:{NFSU2_TR(0x469bc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B469bc7:{NFSU2_TR(0x469bc7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469bca:{NFSU2_TR(0x469bca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469bcb:{NFSU2_TR(0x469bcb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469bcf:{NFSU2_TR(0x469bcf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L469bea;}}
}
B469bd1:L469bd1:{c.instructions+=1;NFSU2_TR(0x469bd1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x469c78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469bd8:L469bd8:{c.instructions+=4;NFSU2_TR(0x469bd8);
__builtin_memmove((R+0),(R+24),4);
}
B469bda:{NFSU2_TR(0x469bda);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B469bdd:{NFSU2_TR(0x469bdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469be4:{NFSU2_TR(0x469be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469bea:L469bea:{c.instructions+=5;NFSU2_TR(0x469bea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469bee:{NFSU2_TR(0x469bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469bef:{NFSU2_TR(0x469bef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469bf0:{NFSU2_TR(0x469bf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469bf1:{NFSU2_TR(0x469bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469bf6ull));
TAIL_STATIC(0x459550u,459);
}
B469bf6:L469bf6:{c.instructions+=2;NFSU2_TR(0x469bf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469bf7:{NFSU2_TR(0x469bf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469bfa:L469bfa:{c.instructions+=8;NFSU2_TR(0x469bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469bfe:{NFSU2_TR(0x469bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469c04:{NFSU2_TR(0x469c04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c08:{NFSU2_TR(0x469c08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c09:{NFSU2_TR(0x469c09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c0a:{NFSU2_TR(0x469c0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c0b:{NFSU2_TR(0x469c0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469c12:{NFSU2_TR(0x469c12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469c17ull));
TAIL_STATIC(0x459550u,459);
}
B469c17:L469c17:{c.instructions+=2;NFSU2_TR(0x469c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469c18:{NFSU2_TR(0x469c18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469c1b:L469c1b:{c.instructions+=8;NFSU2_TR(0x469c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c1f:{NFSU2_TR(0x469c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469c25:{NFSU2_TR(0x469c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c29:{NFSU2_TR(0x469c29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c2a:{NFSU2_TR(0x469c2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c2b:{NFSU2_TR(0x469c2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c2c:{NFSU2_TR(0x469c2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469c33:{NFSU2_TR(0x469c33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469c38ull));
TAIL_STATIC(0x459550u,459);
}
B469c38:L469c38:{c.instructions+=2;NFSU2_TR(0x469c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469c39:{NFSU2_TR(0x469c39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469c3c:L469c3c:{c.instructions+=6;NFSU2_TR(0x469c3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c40:{NFSU2_TR(0x469c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c41:{NFSU2_TR(0x469c41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c42:{NFSU2_TR(0x469c42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c43:{NFSU2_TR(0x469c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469c4a:{NFSU2_TR(0x469c4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469c4full));
TAIL_STATIC(0x459550u,459);
}
B469c4f:L469c4f:{c.instructions+=2;NFSU2_TR(0x469c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469c50:{NFSU2_TR(0x469c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469c53:L469c53:{c.instructions+=3;NFSU2_TR(0x469c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c56:{NFSU2_TR(0x469c56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469c58:{NFSU2_TR(0x469c58);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469beau);}goto L469bea;}}
}
B469c5a:L469c5a:{c.instructions+=6;NFSU2_TR(0x469c5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469c61:{NFSU2_TR(0x469c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469c65:{NFSU2_TR(0x469c65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c66:{NFSU2_TR(0x469c66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c67:{NFSU2_TR(0x469c67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469c68:{NFSU2_TR(0x469c68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469c6dull));
TAIL_STATIC(0x459550u,459);
}
B469c6d:L469c6d:{c.instructions+=2;NFSU2_TR(0x469c6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469c6e:{NFSU2_TR(0x469c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469c71:L469c71:{c.instructions+=3;NFSU2_TR(0x469c71);
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
B469c73:{NFSU2_TR(0x469c73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469c74:{NFSU2_TR(0x469c74);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469cb0:L469cb0:{c.instructions+=3;NFSU2_TR(0x469cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469cb3:{NFSU2_TR(0x469cb3);
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
B469cb5:{NFSU2_TR(0x469cb5);
if(r1(R+518)){{goto L469ccf;}}
}
B469cb7:L469cb7:{c.instructions+=4;NFSU2_TR(0x469cb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469cb8:{NFSU2_TR(0x469cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469cbb:{NFSU2_TR(0x469cbb);
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
B469cbd:{NFSU2_TR(0x469cbd);
if(r1(R+518)){{goto L469cce;}}
}
B469cbf:L469cbf:{c.instructions+=1;NFSU2_TR(0x469cbf);
}
B469cc0:L469cc0:{c.instructions+=3;NFSU2_TR(0x469cc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469cc2:{NFSU2_TR(0x469cc2);
__builtin_memmove((R+4),(R+24),4);
}
B469cc4:{NFSU2_TR(0x469cc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469cc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469cc7:L469cc7:{c.instructions+=3;NFSU2_TR(0x469cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469cca:{NFSU2_TR(0x469cca);
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
B469ccc:{NFSU2_TR(0x469ccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469cc0u);}goto L469cc0;}}
}
B469cce:L469cce:{c.instructions+=1;NFSU2_TR(0x469cce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469ccf:L469ccf:{c.instructions+=1;NFSU2_TR(0x469ccf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469cd0:L469cd0:{c.instructions+=5;NFSU2_TR(0x469cd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469cd1:{NFSU2_TR(0x469cd1);
__builtin_memmove((R+24),(R+4),4);
}
B469cd3:{NFSU2_TR(0x469cd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469cd6:{NFSU2_TR(0x469cd6);
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
B469cd8:{NFSU2_TR(0x469cd8);
if(r1(R+518)){{goto L469ce6;}}
}
B469cda:L469cda:{c.instructions+=1;NFSU2_TR(0x469cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469cdfull));
TAIL_STATIC(0x464bb0u,464);
}
B469cdf:L469cdf:{c.instructions+=1;NFSU2_TR(0x469cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B469ce6:L469ce6:{c.instructions+=2;NFSU2_TR(0x469ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469ce7:{NFSU2_TR(0x469ce7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469cf0:L469cf0:{c.instructions+=5;NFSU2_TR(0x469cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469cf1:{NFSU2_TR(0x469cf1);
__builtin_memmove((R+24),(R+4),4);
}
B469cf3:{NFSU2_TR(0x469cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469cf6:{NFSU2_TR(0x469cf6);
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
B469cf8:{NFSU2_TR(0x469cf8);
if(r1(R+518)){{goto L469d12;}}
}
B469cfa:L469cfa:{c.instructions+=2;NFSU2_TR(0x469cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469cfc:{NFSU2_TR(0x469cfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469cffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469cff:L469cff:{c.instructions+=4;NFSU2_TR(0x469cff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469d03:{NFSU2_TR(0x469d03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469d04:{NFSU2_TR(0x469d04);
__builtin_memmove((R+4),(R+24),4);
}
B469d06:{NFSU2_TR(0x469d06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469d0bull));
TAIL_STATIC(0x464c10u,464);
}
B469d0b:L469d0b:{c.instructions+=1;NFSU2_TR(0x469d0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469d12:L469d12:{c.instructions+=2;NFSU2_TR(0x469d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469d13:{NFSU2_TR(0x469d13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469d20:L469d20:{c.instructions+=3;NFSU2_TR(0x469d20);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B469d25:{NFSU2_TR(0x469d25);
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
B469d27:{NFSU2_TR(0x469d27);
if(r1(R+518)){{goto L469d33;}}
}
B469d29:L469d29:{c.instructions+=3;NFSU2_TR(0x469d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469d2c:{NFSU2_TR(0x469d2c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469d2e:{NFSU2_TR(0x469d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469d33ull));
TAIL_STATIC(0x45ad40u,45a);
}
B469d33:L469d33:{c.instructions+=1;NFSU2_TR(0x469d33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469d40:L469d40:{c.instructions+=9;NFSU2_TR(0x469d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469d41:{NFSU2_TR(0x469d41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469d42:{NFSU2_TR(0x469d42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469d45:{NFSU2_TR(0x469d45);
s4(0x82b954,u32(0x0ull));
}
B469d4f:{NFSU2_TR(0x469d4f);
s4(0x82b958,u32(0x0ull));
}
B469d59:{NFSU2_TR(0x469d59);
s4(0x82b960,u32(0x0ull));
}
B469d63:{NFSU2_TR(0x469d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469d65:{NFSU2_TR(0x469d65);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469d67:{NFSU2_TR(0x469d67);
if(r1(R+518)){{goto L469d6e;}}
}
B469d69:L469d69:{c.instructions+=2;NFSU2_TR(0x469d69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B469d6c:{NFSU2_TR(0x469d6c);
{goto L469d70;}
}
B469d6e:L469d6e:{c.instructions+=1;NFSU2_TR(0x469d6e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B469d70:L469d70:{c.instructions+=2;NFSU2_TR(0x469d70);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469d72:{NFSU2_TR(0x469d72);
if(r1(R+518)){{goto L469d79;}}
}
B469d74:L469d74:{c.instructions+=2;NFSU2_TR(0x469d74);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B469d77:{NFSU2_TR(0x469d77);
{goto L469d7b;}
}
B469d79:L469d79:{c.instructions+=1;NFSU2_TR(0x469d79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B469d7b:L469d7b:{c.instructions+=2;NFSU2_TR(0x469d7b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B469d7d:{NFSU2_TR(0x469d7d);
if(r1(R+518)){{goto L469da8;}}
}
B469d7f:L469d7f:{c.instructions+=3;NFSU2_TR(0x469d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469d82:{NFSU2_TR(0x469d82);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469d84:{NFSU2_TR(0x469d84);
if(r1(R+518)){{goto L469d8b;}}
}
B469d86:L469d86:{c.instructions+=2;NFSU2_TR(0x469d86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469d89:{NFSU2_TR(0x469d89);
{goto L469d8d;}
}
B469d8b:L469d8b:{c.instructions+=1;NFSU2_TR(0x469d8b);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B469d8d:L469d8d:{c.instructions+=8;NFSU2_TR(0x469d8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469d90:{NFSU2_TR(0x469d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469d93:{NFSU2_TR(0x469d93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B469d95:{NFSU2_TR(0x469d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B469d98:{NFSU2_TR(0x469d98);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x82b944),u32(0x1ull)));
s4(0x82b944,u32(u32(m4(0x82b944))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b944))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b944))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b944))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B469d9e:{NFSU2_TR(0x469d9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469da0:{NFSU2_TR(0x469da0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469da2:{NFSU2_TR(0x469da2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469da4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B469da4:L469da4:{c.instructions+=2;NFSU2_TR(0x469da4);
__builtin_memmove((R+4),(R+24),4);
}
B469da6:{NFSU2_TR(0x469da6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469d70u);}goto L469d70;}
}
B469da8:L469da8:{c.instructions+=3;NFSU2_TR(0x469da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B469da9:{NFSU2_TR(0x469da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469daa:{NFSU2_TR(0x469daa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469db0:L469db0:{c.instructions+=4;NFSU2_TR(0x469db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469db4:{NFSU2_TR(0x469db4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469db5:{NFSU2_TR(0x469db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B469db7:{NFSU2_TR(0x469db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469dbcull));
TAIL_STATIC(0x502fd0u,502);
}
B469dbc:L469dbc:{c.instructions+=2;NFSU2_TR(0x469dbc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469dbe:{NFSU2_TR(0x469dbe);
if(r1(R+518)){{goto L469dcf;}}
}
B469dc0:L469dc0:{c.instructions+=1;NFSU2_TR(0x469dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B469dc4:L469dc4:{c.instructions+=2;NFSU2_TR(0x469dc4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B469dc7:{NFSU2_TR(0x469dc7);
if(r1(R+518)){{goto L469dd5;}}
}
B469dc9:L469dc9:{c.instructions+=3;NFSU2_TR(0x469dc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B469dcb:{NFSU2_TR(0x469dcb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B469dcd:{NFSU2_TR(0x469dcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469dc4u);}goto L469dc4;}}
}
B469dcf:L469dcf:{c.instructions+=3;NFSU2_TR(0x469dcf);
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
B469dd1:{NFSU2_TR(0x469dd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469dd2:{NFSU2_TR(0x469dd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469dd5:L469dd5:{c.instructions+=3;NFSU2_TR(0x469dd5);
w1(R+0,u8(0x1ull));
}
B469dd7:{NFSU2_TR(0x469dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469dd8:{NFSU2_TR(0x469dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469de0:L469de0:{c.instructions+=3;NFSU2_TR(0x469de0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B469de5:{NFSU2_TR(0x469de5);
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
B469de7:{NFSU2_TR(0x469de7);
if(r1(R+518)){{goto L469e48;}}
}
B469de9:L469de9:{c.instructions+=5;NFSU2_TR(0x469de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B469dec:{NFSU2_TR(0x469dec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B469def:{NFSU2_TR(0x469def);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469df1:{NFSU2_TR(0x469df1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B469df2:{NFSU2_TR(0x469df2);
if(r1(R+518)){{goto L469df9;}}
}
B469df4:L469df4:{c.instructions+=2;NFSU2_TR(0x469df4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469df7:{NFSU2_TR(0x469df7);
{goto L469dfb;}
}
B469df9:L469df9:{c.instructions+=1;NFSU2_TR(0x469df9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B469dfb:L469dfb:{c.instructions+=2;NFSU2_TR(0x469dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B469dff:{NFSU2_TR(0x469dff);
}
B469e00:L469e00:{c.instructions+=2;NFSU2_TR(0x469e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469e02:{NFSU2_TR(0x469e02);
if(r1(R+518)){{goto L469e09;}}
}
B469e04:L469e04:{c.instructions+=2;NFSU2_TR(0x469e04);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B469e07:{NFSU2_TR(0x469e07);
{goto L469e0b;}
}
B469e09:L469e09:{c.instructions+=1;NFSU2_TR(0x469e09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B469e0b:L469e0b:{c.instructions+=2;NFSU2_TR(0x469e0b);
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
B469e0d:{NFSU2_TR(0x469e0d);
if(r1(R+518)){{goto L469e47;}}
}
B469e0f:L469e0f:{c.instructions+=2;NFSU2_TR(0x469e0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B469e12:{NFSU2_TR(0x469e12);
if(r1(R+518)){{goto L469e24;}}
}
B469e14:L469e14:{c.instructions+=3;NFSU2_TR(0x469e14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B469e17:{NFSU2_TR(0x469e17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B469e19:{NFSU2_TR(0x469e19);
if(r1(R+518)){{goto L469e20;}}
}
B469e1b:L469e1b:{c.instructions+=2;NFSU2_TR(0x469e1b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B469e1e:{NFSU2_TR(0x469e1e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469e00u);}goto L469e00;}
}
B469e20:L469e20:{c.instructions+=2;NFSU2_TR(0x469e20);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B469e22:{NFSU2_TR(0x469e22);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x469e00u);}goto L469e00;}
}
B469e24:L469e24:{c.instructions+=3;NFSU2_TR(0x469e24);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B469e2a:{NFSU2_TR(0x469e2a);
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
B469e2c:{NFSU2_TR(0x469e2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469e47;}}
}
B469e2e:L469e2e:{c.instructions+=3;NFSU2_TR(0x469e2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B469e34:{NFSU2_TR(0x469e34);
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
B469e36:{NFSU2_TR(0x469e36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L469e47;}}
}
B469e38:L469e38:{c.instructions+=3;NFSU2_TR(0x469e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B469e3a:{NFSU2_TR(0x469e3a);
__builtin_memmove((R+4),(R+24),4);
}
B469e3c:{NFSU2_TR(0x469e3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x469e3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B469e3f:L469e3f:{c.instructions+=2;NFSU2_TR(0x469e3f);
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
B469e41:{NFSU2_TR(0x469e41);
if(r1(R+518)){{goto L469e47;}}
}
B469e43:L469e43:{c.instructions+=1;NFSU2_TR(0x469e43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B469e47:L469e47:{c.instructions+=1;NFSU2_TR(0x469e47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B469e48:L469e48:{c.instructions+=1;NFSU2_TR(0x469e48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B469e50:L469e50:{c.instructions+=15;NFSU2_TR(0x469e50);
__builtin_memmove((R+0),gp(0x7884a4),4);
}
B469e55:{NFSU2_TR(0x469e55);
__builtin_memmove((R+8),gp(0x7884ac),4);
}
B469e5b:{NFSU2_TR(0x469e5b);
__builtin_memmove((R+4),gp(0x7884a8),4);
}
B469e61:{NFSU2_TR(0x469e61);
__builtin_memmove(gp(0x82bcec),(R+0),4);
}
B469e66:{NFSU2_TR(0x469e66);
__builtin_memmove((R+0),gp(0x7884b0),4);
}
B469e6b:{NFSU2_TR(0x469e6b);
__builtin_memmove(gp(0x82bcf8),(R+0),4);
}
B469e70:{NFSU2_TR(0x469e70);
{u32 ea_=u32(u32(8568056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469e76:{NFSU2_TR(0x469e76);
__builtin_memmove(gp(0x82bcf4),(R+8),4);
}
B469e7c:{NFSU2_TR(0x469e7c);
{u32 ea_=u32(u32(8568052u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469e82:{NFSU2_TR(0x469e82);
__builtin_memmove(gp(0x82bcf0),(R+4),4);
}
B469e88:{NFSU2_TR(0x469e88);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B469e8a:{NFSU2_TR(0x469e8a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B469e90:{NFSU2_TR(0x469e90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469e92:{NFSU2_TR(0x469e92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B469e95:{NFSU2_TR(0x469e95);
if(r1(R+514)){{goto L469ea9;}}
}
B469e97:L469e97:{c.instructions+=3;NFSU2_TR(0x469e97);
{u32 ea_=u32(u32(8568056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469e9d:{NFSU2_TR(0x469e9d);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B469ea3:{NFSU2_TR(0x469ea3);
{u32 ea_=u32(u32(8568056u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469ea9:L469ea9:{c.instructions+=18;NFSU2_TR(0x469ea9);
__builtin_memmove((R+8),gp(0x7884b4),4);
}
B469eaf:{NFSU2_TR(0x469eaf);
__builtin_memmove((R+4),gp(0x7884a4),4);
}
B469eb5:{NFSU2_TR(0x469eb5);
__builtin_memmove((R+0),gp(0x7884b8),4);
}
B469eba:{NFSU2_TR(0x469eba);
__builtin_memmove(gp(0x82bd08),(R+8),4);
}
B469ec0:{NFSU2_TR(0x469ec0);
__builtin_memmove((R+8),gp(0x7884c0),4);
}
B469ec6:{NFSU2_TR(0x469ec6);
__builtin_memmove(gp(0x82bd00),(R+4),4);
}
B469ecc:{NFSU2_TR(0x469ecc);
__builtin_memmove((R+4),gp(0x7884bc),4);
}
B469ed2:{NFSU2_TR(0x469ed2);
__builtin_memmove(gp(0x82bd14),(R+8),4);
}
B469ed8:{NFSU2_TR(0x469ed8);
{u32 ea_=u32(u32(8568084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469ede:{NFSU2_TR(0x469ede);
__builtin_memmove(gp(0x82bd10),(R+4),4);
}
B469ee4:{NFSU2_TR(0x469ee4);
{u32 ea_=u32(u32(8568080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469eea:{NFSU2_TR(0x469eea);
__builtin_memmove(gp(0x82bd0c),(R+0),4);
}
B469eef:{NFSU2_TR(0x469eef);
s4(0x82bcfc,u32(0x0ull));
}
B469ef9:{NFSU2_TR(0x469ef9);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B469efb:{NFSU2_TR(0x469efb);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B469f01:{NFSU2_TR(0x469f01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469f03:{NFSU2_TR(0x469f03);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B469f06:{NFSU2_TR(0x469f06);
if(r1(R+514)){{goto L469f1a;}}
}
B469f08:L469f08:{c.instructions+=3;NFSU2_TR(0x469f08);
{u32 ea_=u32(u32(8568084u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469f0e:{NFSU2_TR(0x469f0e);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B469f14:{NFSU2_TR(0x469f14);
{u32 ea_=u32(u32(8568084u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469f1a:L469f1a:{c.instructions+=18;NFSU2_TR(0x469f1a);
__builtin_memmove((R+4),gp(0x7884c4),4);
}
B469f20:{NFSU2_TR(0x469f20);
__builtin_memmove((R+0),gp(0x7884b4),4);
}
B469f25:{NFSU2_TR(0x469f25);
__builtin_memmove((R+8),gp(0x7884c8),4);
}
B469f2b:{NFSU2_TR(0x469f2b);
__builtin_memmove(gp(0x82bd24),(R+4),4);
}
B469f31:{NFSU2_TR(0x469f31);
__builtin_memmove((R+4),gp(0x7884d0),4);
}
B469f37:{NFSU2_TR(0x469f37);
__builtin_memmove(gp(0x82bd1c),(R+0),4);
}
B469f3c:{NFSU2_TR(0x469f3c);
__builtin_memmove((R+0),gp(0x7884cc),4);
}
B469f41:{NFSU2_TR(0x469f41);
__builtin_memmove(gp(0x82bd30),(R+4),4);
}
B469f47:{NFSU2_TR(0x469f47);
{u32 ea_=u32(u32(8568112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469f4d:{NFSU2_TR(0x469f4d);
__builtin_memmove(gp(0x82bd2c),(R+0),4);
}
B469f52:{NFSU2_TR(0x469f52);
{u32 ea_=u32(u32(8568108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469f58:{NFSU2_TR(0x469f58);
s4(0x82bd18,u32(0x0ull));
}
B469f62:{NFSU2_TR(0x469f62);
__builtin_memmove(gp(0x82bd28),(R+8),4);
}
B469f68:{NFSU2_TR(0x469f68);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B469f6a:{NFSU2_TR(0x469f6a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B469f70:{NFSU2_TR(0x469f70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469f72:{NFSU2_TR(0x469f72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B469f75:{NFSU2_TR(0x469f75);
if(r1(R+514)){{goto L469f89;}}
}
B469f77:L469f77:{c.instructions+=3;NFSU2_TR(0x469f77);
{u32 ea_=u32(u32(8568112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469f7d:{NFSU2_TR(0x469f7d);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B469f83:{NFSU2_TR(0x469f83);
{u32 ea_=u32(u32(8568112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469f89:L469f89:{c.instructions+=18;NFSU2_TR(0x469f89);
__builtin_memmove((R+0),gp(0x7884d4),4);
}
B469f8e:{NFSU2_TR(0x469f8e);
__builtin_memmove((R+8),gp(0x7884c4),4);
}
B469f94:{NFSU2_TR(0x469f94);
__builtin_memmove((R+4),gp(0x7884d8),4);
}
B469f9a:{NFSU2_TR(0x469f9a);
__builtin_memmove(gp(0x82bd40),(R+0),4);
}
B469f9f:{NFSU2_TR(0x469f9f);
__builtin_memmove((R+0),gp(0x7884e0),4);
}
B469fa4:{NFSU2_TR(0x469fa4);
__builtin_memmove(gp(0x82bd38),(R+8),4);
}
B469faa:{NFSU2_TR(0x469faa);
__builtin_memmove((R+8),gp(0x7884dc),4);
}
B469fb0:{NFSU2_TR(0x469fb0);
__builtin_memmove(gp(0x82bd4c),(R+0),4);
}
B469fb5:{NFSU2_TR(0x469fb5);
{u32 ea_=u32(u32(8568140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469fbb:{NFSU2_TR(0x469fbb);
__builtin_memmove(gp(0x82bd48),(R+8),4);
}
B469fc1:{NFSU2_TR(0x469fc1);
{u32 ea_=u32(u32(8568136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B469fc7:{NFSU2_TR(0x469fc7);
s4(0x82bd34,u32(0x0ull));
}
B469fd1:{NFSU2_TR(0x469fd1);
__builtin_memmove(gp(0x82bd44),(R+4),4);
}
B469fd7:{NFSU2_TR(0x469fd7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B469fd9:{NFSU2_TR(0x469fd9);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B469fdf:{NFSU2_TR(0x469fdf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B469fe1:{NFSU2_TR(0x469fe1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B469fe4:{NFSU2_TR(0x469fe4);
if(r1(R+514)){{goto L469ff8;}}
}
B469fe6:L469fe6:{c.instructions+=3;NFSU2_TR(0x469fe6);
{u32 ea_=u32(u32(8568140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B469fec:{NFSU2_TR(0x469fec);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B469ff2:{NFSU2_TR(0x469ff2);
{u32 ea_=u32(u32(8568140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B469ff8:L469ff8:{c.instructions+=2;NFSU2_TR(0x469ff8);
__builtin_memmove((R+8),gp(0x7884e4),4);
}
B469ffe:{NFSU2_TR(0x469ffe);
__builtin_memmove((R+4),gp(0x7884d4),4);
TAIL_STATIC(0x46a004u,46a);
}
XIT:NFSU2_TR_EXIT(0x469,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
