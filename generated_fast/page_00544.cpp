#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52f(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_545(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x544,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x544,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_544(u8* __restrict R,Cpu& c);
u32 page_544(Cpu& c){return body_544(c.regs.data(),c);}
__attribute__((noinline)) u32 body_544(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x544001:goto L544001;
case 0x544003:c.instructions+=1;goto B544003;
case 0x544008:goto L544008;
case 0x54400b:c.instructions+=3;goto B54400b;
case 0x54400c:c.instructions+=2;goto B54400c;
case 0x54400d:c.instructions+=1;goto B54400d;
case 0x544012:goto L544012;
case 0x544015:c.instructions+=4;goto B544015;
case 0x544016:c.instructions+=3;goto B544016;
case 0x544017:c.instructions+=2;goto B544017;
case 0x54401a:c.instructions+=1;goto B54401a;
case 0x54401d:goto L54401d;
case 0x54401f:c.instructions+=1;goto B54401f;
case 0x544024:goto L544024;
case 0x544025:c.instructions+=3;goto B544025;
case 0x544026:c.instructions+=2;goto B544026;
case 0x544029:c.instructions+=1;goto B544029;
case 0x54402c:goto L54402c;
case 0x54402f:c.instructions+=3;goto B54402f;
case 0x544032:c.instructions+=2;goto B544032;
case 0x544034:c.instructions+=1;goto B544034;
case 0x544036:goto L544036;
case 0x544039:c.instructions+=2;goto B544039;
case 0x54403b:c.instructions+=1;goto B54403b;
case 0x54403d:goto L54403d;
case 0x544040:c.instructions+=2;goto B544040;
case 0x544042:c.instructions+=1;goto B544042;
case 0x544048:goto L544048;
case 0x54404b:c.instructions+=2;goto B54404b;
case 0x54404d:c.instructions+=1;goto B54404d;
case 0x544052:goto L544052;
case 0x544054:c.instructions+=1;goto B544054;
case 0x544056:goto L544056;
case 0x54405e:goto L54405e;
case 0x544060:c.instructions+=1;goto B544060;
case 0x544065:goto L544065;
case 0x54406a:goto L54406a;
case 0x54406d:c.instructions+=3;goto B54406d;
case 0x544070:c.instructions+=2;goto B544070;
case 0x544072:c.instructions+=1;goto B544072;
case 0x544078:goto L544078;
case 0x54407b:c.instructions+=2;goto B54407b;
case 0x54407d:c.instructions+=1;goto B54407d;
case 0x544083:goto L544083;
case 0x544086:c.instructions+=2;goto B544086;
case 0x544088:c.instructions+=1;goto B544088;
case 0x54408e:goto L54408e;
case 0x544091:c.instructions+=2;goto B544091;
case 0x544093:c.instructions+=1;goto B544093;
case 0x544098:goto L544098;
case 0x54409a:c.instructions+=1;goto B54409a;
case 0x5440a0:goto L5440a0;
case 0x5440a8:c.instructions+=1;goto B5440a8;
case 0x5440ad:goto L5440ad;
case 0x5440b2:c.instructions+=1;goto B5440b2;
case 0x5440b8:goto L5440b8;
case 0x5440bd:c.instructions+=1;goto B5440bd;
case 0x5440bf:goto L5440bf;
case 0x5440c4:c.instructions+=1;goto B5440c4;
case 0x5440ca:goto L5440ca;
case 0x5440cb:c.instructions+=2;goto B5440cb;
case 0x5440d0:c.instructions+=1;goto B5440d0;
case 0x5440d5:goto L5440d5;
case 0x5440d8:c.instructions+=2;goto B5440d8;
case 0x5440da:c.instructions+=1;goto B5440da;
case 0x5440df:goto L5440df;
case 0x5440e2:c.instructions+=3;goto B5440e2;
case 0x5440e5:c.instructions+=2;goto B5440e5;
case 0x5440e7:c.instructions+=1;goto B5440e7;
case 0x5440ed:goto L5440ed;
case 0x5440f0:c.instructions+=3;goto B5440f0;
case 0x5440f3:c.instructions+=2;goto B5440f3;
case 0x5440f5:c.instructions+=1;goto B5440f5;
case 0x5440fb:goto L5440fb;
case 0x544101:c.instructions+=10;goto B544101;
case 0x544104:c.instructions+=9;goto B544104;
case 0x544105:c.instructions+=8;goto B544105;
case 0x54410b:c.instructions+=7;goto B54410b;
case 0x54410c:c.instructions+=6;goto B54410c;
case 0x544112:c.instructions+=5;goto B544112;
case 0x544113:c.instructions+=4;goto B544113;
case 0x544119:c.instructions+=3;goto B544119;
case 0x54411c:c.instructions+=2;goto B54411c;
case 0x54411d:c.instructions+=1;goto B54411d;
case 0x544120:goto L544120;
case 0x544121:c.instructions+=3;goto B544121;
case 0x544122:c.instructions+=2;goto B544122;
case 0x544125:c.instructions+=1;goto B544125;
case 0x544128:goto L544128;
case 0x544129:c.instructions+=2;goto B544129;
case 0x54412e:c.instructions+=1;goto B54412e;
case 0x544133:goto L544133;
case 0x544136:c.instructions+=2;goto B544136;
case 0x544138:c.instructions+=1;goto B544138;
case 0x54413d:goto L54413d;
case 0x54413e:c.instructions+=3;goto B54413e;
case 0x54413f:c.instructions+=2;goto B54413f;
case 0x544142:c.instructions+=1;goto B544142;
case 0x544145:goto L544145;
case 0x544148:c.instructions+=2;goto B544148;
case 0x54414b:c.instructions+=1;goto B54414b;
case 0x54414e:goto L54414e;
case 0x54414f:c.instructions+=3;goto B54414f;
case 0x544150:c.instructions+=2;goto B544150;
case 0x544153:c.instructions+=1;goto B544153;
case 0x544160:goto L544160;
case 0x544163:c.instructions+=14;goto B544163;
case 0x544169:c.instructions+=13;goto B544169;
case 0x54416a:c.instructions+=12;goto B54416a;
case 0x54416b:c.instructions+=11;goto B54416b;
case 0x54416c:c.instructions+=10;goto B54416c;
case 0x544172:c.instructions+=9;goto B544172;
case 0x544174:c.instructions+=8;goto B544174;
case 0x544175:c.instructions+=7;goto B544175;
case 0x544179:c.instructions+=6;goto B544179;
case 0x54417d:c.instructions+=5;goto B54417d;
case 0x544183:c.instructions+=4;goto B544183;
case 0x544185:c.instructions+=3;goto B544185;
case 0x544188:c.instructions+=2;goto B544188;
case 0x54418e:c.instructions+=1;goto B54418e;
case 0x544192:goto L544192;
case 0x544194:c.instructions+=2;goto B544194;
case 0x544196:c.instructions+=1;goto B544196;
case 0x544198:goto L544198;
case 0x54419c:c.instructions+=3;goto B54419c;
case 0x54419d:c.instructions+=2;goto B54419d;
case 0x54419e:c.instructions+=1;goto B54419e;
case 0x5441a3:goto L5441a3;
case 0x5441a6:c.instructions+=2;goto B5441a6;
case 0x5441a8:c.instructions+=1;goto B5441a8;
case 0x5441aa:goto L5441aa;
case 0x5441ae:c.instructions+=4;goto B5441ae;
case 0x5441b2:c.instructions+=3;goto B5441b2;
case 0x5441b4:c.instructions+=2;goto B5441b4;
case 0x5441b7:c.instructions+=1;goto B5441b7;
case 0x5441b9:goto L5441b9;
case 0x5441bd:c.instructions+=4;goto B5441bd;
case 0x5441c1:c.instructions+=3;goto B5441c1;
case 0x5441c3:c.instructions+=2;goto B5441c3;
case 0x5441c6:c.instructions+=1;goto B5441c6;
case 0x5441c8:goto L5441c8;
case 0x5441cc:c.instructions+=4;goto B5441cc;
case 0x5441d0:c.instructions+=3;goto B5441d0;
case 0x5441d2:c.instructions+=2;goto B5441d2;
case 0x5441d5:c.instructions+=1;goto B5441d5;
case 0x5441d7:goto L5441d7;
case 0x5441db:c.instructions+=4;goto B5441db;
case 0x5441df:c.instructions+=3;goto B5441df;
case 0x5441e1:c.instructions+=2;goto B5441e1;
case 0x5441e4:c.instructions+=1;goto B5441e4;
case 0x5441e6:goto L5441e6;
case 0x5441e7:c.instructions+=3;goto B5441e7;
case 0x5441ea:c.instructions+=2;goto B5441ea;
case 0x5441ed:c.instructions+=1;goto B5441ed;
case 0x5441ef:goto L5441ef;
case 0x5441f4:goto L5441f4;
case 0x5441f7:c.instructions+=3;goto B5441f7;
case 0x5441fb:c.instructions+=2;goto B5441fb;
case 0x5441fd:c.instructions+=1;goto B5441fd;
case 0x5441ff:goto L5441ff;
case 0x544204:c.instructions+=3;goto B544204;
case 0x544207:c.instructions+=2;goto B544207;
case 0x544209:c.instructions+=1;goto B544209;
case 0x544210:goto L544210;
case 0x544213:c.instructions+=2;goto B544213;
case 0x544215:c.instructions+=1;goto B544215;
case 0x544217:goto L544217;
case 0x544219:c.instructions+=1;goto B544219;
case 0x54421b:goto L54421b;
case 0x54421d:goto L54421d;
case 0x544220:c.instructions+=5;goto B544220;
case 0x544222:c.instructions+=4;goto B544222;
case 0x544225:c.instructions+=3;goto B544225;
case 0x544226:c.instructions+=2;goto B544226;
case 0x544228:c.instructions+=1;goto B544228;
case 0x54422a:goto L54422a;
case 0x54422d:c.instructions+=2;goto B54422d;
case 0x54422f:c.instructions+=1;goto B54422f;
case 0x544231:goto L544231;
case 0x544234:c.instructions+=1;goto B544234;
case 0x544236:goto L544236;
case 0x544239:c.instructions+=2;goto B544239;
case 0x54423b:c.instructions+=1;goto B54423b;
case 0x54423d:goto L54423d;
case 0x54423f:goto L54423f;
case 0x544241:c.instructions+=1;goto B544241;
case 0x544243:goto L544243;
case 0x544246:c.instructions+=1;goto B544246;
case 0x544248:goto L544248;
case 0x54424a:c.instructions+=2;goto B54424a;
case 0x54424d:c.instructions+=1;goto B54424d;
case 0x544252:goto L544252;
case 0x544255:c.instructions+=1;goto B544255;
case 0x54425c:goto L54425c;
case 0x544263:goto L544263;
case 0x544266:c.instructions+=3;goto B544266;
case 0x54426a:c.instructions+=2;goto B54426a;
case 0x54426c:c.instructions+=1;goto B54426c;
case 0x54426e:goto L54426e;
case 0x544273:c.instructions+=2;goto B544273;
case 0x544276:c.instructions+=1;goto B544276;
case 0x544278:goto L544278;
case 0x54427b:c.instructions+=2;goto B54427b;
case 0x54427d:c.instructions+=1;goto B54427d;
case 0x54427f:goto L54427f;
case 0x544281:c.instructions+=1;goto B544281;
case 0x544283:goto L544283;
case 0x544285:goto L544285;
case 0x544288:c.instructions+=5;goto B544288;
case 0x54428a:c.instructions+=4;goto B54428a;
case 0x54428d:c.instructions+=3;goto B54428d;
case 0x54428e:c.instructions+=2;goto B54428e;
case 0x544290:c.instructions+=1;goto B544290;
case 0x544292:goto L544292;
case 0x544295:c.instructions+=3;goto B544295;
case 0x544297:c.instructions+=2;goto B544297;
case 0x544299:c.instructions+=1;goto B544299;
case 0x54429b:goto L54429b;
case 0x5442a0:goto L5442a0;
case 0x5442a3:c.instructions+=1;goto B5442a3;
case 0x5442a5:goto L5442a5;
case 0x5442a8:c.instructions+=2;goto B5442a8;
case 0x5442aa:c.instructions+=1;goto B5442aa;
case 0x5442ac:goto L5442ac;
case 0x5442ae:goto L5442ae;
case 0x5442b0:c.instructions+=1;goto B5442b0;
case 0x5442b2:goto L5442b2;
case 0x5442b5:c.instructions+=1;goto B5442b5;
case 0x5442b7:goto L5442b7;
case 0x5442b9:c.instructions+=2;goto B5442b9;
case 0x5442bc:c.instructions+=1;goto B5442bc;
case 0x5442c1:goto L5442c1;
case 0x5442c4:c.instructions+=1;goto B5442c4;
case 0x5442c7:goto L5442c7;
case 0x5442ca:goto L5442ca;
case 0x5442ce:c.instructions+=2;goto B5442ce;
case 0x5442d0:c.instructions+=1;goto B5442d0;
case 0x5442d3:goto L5442d3;
case 0x5442d9:c.instructions+=10;goto B5442d9;
case 0x5442de:c.instructions+=9;goto B5442de;
case 0x5442e0:c.instructions+=8;goto B5442e0;
case 0x5442e2:c.instructions+=7;goto B5442e2;
case 0x5442e8:c.instructions+=6;goto B5442e8;
case 0x5442ef:c.instructions+=5;goto B5442ef;
case 0x5442f3:c.instructions+=4;goto B5442f3;
case 0x5442f9:c.instructions+=3;goto B5442f9;
case 0x5442ff:c.instructions+=2;goto B5442ff;
case 0x544303:c.instructions+=1;goto B544303;
case 0x544305:goto L544305;
case 0x54430c:goto L54430c;
case 0x54430e:c.instructions+=1;goto B54430e;
case 0x544310:goto L544310;
case 0x544312:c.instructions+=1;goto B544312;
case 0x544314:goto L544314;
case 0x544318:c.instructions+=3;goto B544318;
case 0x544319:c.instructions+=2;goto B544319;
case 0x54431a:c.instructions+=1;goto B54431a;
case 0x54431f:goto L54431f;
case 0x544322:c.instructions+=2;goto B544322;
case 0x544324:c.instructions+=1;goto B544324;
case 0x544326:goto L544326;
case 0x54432a:c.instructions+=4;goto B54432a;
case 0x54432e:c.instructions+=3;goto B54432e;
case 0x544330:c.instructions+=2;goto B544330;
case 0x544333:c.instructions+=1;goto B544333;
case 0x544335:goto L544335;
case 0x544339:c.instructions+=4;goto B544339;
case 0x54433d:c.instructions+=3;goto B54433d;
case 0x54433f:c.instructions+=2;goto B54433f;
case 0x544342:c.instructions+=1;goto B544342;
case 0x544344:goto L544344;
case 0x544348:c.instructions+=4;goto B544348;
case 0x54434c:c.instructions+=3;goto B54434c;
case 0x54434e:c.instructions+=2;goto B54434e;
case 0x544351:c.instructions+=1;goto B544351;
case 0x544353:goto L544353;
case 0x544357:c.instructions+=4;goto B544357;
case 0x54435b:c.instructions+=3;goto B54435b;
case 0x54435d:c.instructions+=2;goto B54435d;
case 0x544360:c.instructions+=1;goto B544360;
case 0x544362:goto L544362;
case 0x544363:c.instructions+=3;goto B544363;
case 0x544366:c.instructions+=2;goto B544366;
case 0x544369:c.instructions+=1;goto B544369;
case 0x54436f:goto L54436f;
case 0x544370:c.instructions+=5;goto B544370;
case 0x544371:c.instructions+=4;goto B544371;
case 0x544372:c.instructions+=3;goto B544372;
case 0x544373:c.instructions+=2;goto B544373;
case 0x544376:c.instructions+=1;goto B544376;
case 0x544377:goto L544377;
case 0x544379:c.instructions+=7;goto B544379;
case 0x54437a:c.instructions+=6;goto B54437a;
case 0x54437c:c.instructions+=5;goto B54437c;
case 0x54437e:c.instructions+=4;goto B54437e;
case 0x544381:c.instructions+=3;goto B544381;
case 0x544383:c.instructions+=2;goto B544383;
case 0x544385:c.instructions+=1;goto B544385;
case 0x54438b:goto L54438b;
case 0x54438f:c.instructions+=3;goto B54438f;
case 0x544393:c.instructions+=2;goto B544393;
case 0x544395:c.instructions+=1;goto B544395;
case 0x544397:goto L544397;
case 0x54439c:c.instructions+=2;goto B54439c;
case 0x54439f:c.instructions+=1;goto B54439f;
case 0x5443a1:goto L5443a1;
case 0x5443a4:c.instructions+=2;goto B5443a4;
case 0x5443a6:c.instructions+=1;goto B5443a6;
case 0x5443a8:goto L5443a8;
case 0x5443aa:c.instructions+=1;goto B5443aa;
case 0x5443ac:goto L5443ac;
case 0x5443ae:goto L5443ae;
case 0x5443b1:c.instructions+=5;goto B5443b1;
case 0x5443b3:c.instructions+=4;goto B5443b3;
case 0x5443b6:c.instructions+=3;goto B5443b6;
case 0x5443b7:c.instructions+=2;goto B5443b7;
case 0x5443b9:c.instructions+=1;goto B5443b9;
case 0x5443bb:goto L5443bb;
case 0x5443be:c.instructions+=2;goto B5443be;
case 0x5443c0:c.instructions+=1;goto B5443c0;
case 0x5443c2:goto L5443c2;
case 0x5443c5:c.instructions+=1;goto B5443c5;
case 0x5443c7:goto L5443c7;
case 0x5443ca:c.instructions+=2;goto B5443ca;
case 0x5443cc:c.instructions+=1;goto B5443cc;
case 0x5443ce:goto L5443ce;
case 0x5443d0:goto L5443d0;
case 0x5443d2:c.instructions+=1;goto B5443d2;
case 0x5443d4:goto L5443d4;
case 0x5443d7:c.instructions+=1;goto B5443d7;
case 0x5443d9:goto L5443d9;
case 0x5443db:c.instructions+=2;goto B5443db;
case 0x5443de:c.instructions+=1;goto B5443de;
case 0x5443e3:goto L5443e3;
case 0x5443e6:c.instructions+=1;goto B5443e6;
case 0x5443ed:goto L5443ed;
case 0x5443f4:goto L5443f4;
case 0x5443f8:c.instructions+=4;goto B5443f8;
case 0x5443fb:c.instructions+=3;goto B5443fb;
case 0x5443ff:c.instructions+=2;goto B5443ff;
case 0x544401:c.instructions+=1;goto B544401;
case 0x544403:goto L544403;
case 0x544408:c.instructions+=3;goto B544408;
case 0x54440b:c.instructions+=2;goto B54440b;
case 0x54440d:c.instructions+=1;goto B54440d;
case 0x544410:goto L544410;
case 0x544413:c.instructions+=2;goto B544413;
case 0x544415:c.instructions+=1;goto B544415;
case 0x544417:goto L544417;
case 0x544419:c.instructions+=1;goto B544419;
case 0x54441b:goto L54441b;
case 0x54441d:goto L54441d;
case 0x544420:c.instructions+=5;goto B544420;
case 0x544422:c.instructions+=4;goto B544422;
case 0x544425:c.instructions+=3;goto B544425;
case 0x544426:c.instructions+=2;goto B544426;
case 0x544428:c.instructions+=1;goto B544428;
case 0x54442a:goto L54442a;
case 0x54442d:c.instructions+=3;goto B54442d;
case 0x54442f:c.instructions+=2;goto B54442f;
case 0x544431:c.instructions+=1;goto B544431;
case 0x544433:goto L544433;
case 0x544436:c.instructions+=1;goto B544436;
case 0x544438:goto L544438;
case 0x54443b:c.instructions+=2;goto B54443b;
case 0x54443d:c.instructions+=1;goto B54443d;
case 0x54443f:goto L54443f;
case 0x544441:goto L544441;
case 0x544443:c.instructions+=1;goto B544443;
case 0x544445:goto L544445;
case 0x544448:c.instructions+=1;goto B544448;
case 0x54444a:goto L54444a;
case 0x54444c:c.instructions+=2;goto B54444c;
case 0x54444f:c.instructions+=1;goto B54444f;
case 0x544454:goto L544454;
case 0x544457:c.instructions+=1;goto B544457;
case 0x54445a:goto L54445a;
case 0x54445d:goto L54445d;
case 0x544460:c.instructions+=2;goto B544460;
case 0x544464:c.instructions+=1;goto B544464;
case 0x544466:goto L544466;
case 0x544468:c.instructions+=1;goto B544468;
case 0x54446d:goto L54446d;
case 0x54446e:c.instructions+=5;goto B54446e;
case 0x54446f:c.instructions+=4;goto B54446f;
case 0x544470:c.instructions+=3;goto B544470;
case 0x544471:c.instructions+=2;goto B544471;
case 0x544474:c.instructions+=1;goto B544474;
case 0x544475:goto L544475;
case 0x544477:c.instructions+=1;goto B544477;
case 0x54447c:goto L54447c;
case 0x54447d:c.instructions+=5;goto B54447d;
case 0x54447e:c.instructions+=4;goto B54447e;
case 0x54447f:c.instructions+=3;goto B54447f;
case 0x544480:c.instructions+=2;goto B544480;
case 0x544483:c.instructions+=1;goto B544483;
case 0x544490:goto L544490;
case 0x544491:c.instructions+=5;goto B544491;
case 0x544493:c.instructions+=4;goto B544493;
case 0x544494:c.instructions+=3;goto B544494;
case 0x544497:c.instructions+=2;goto B544497;
case 0x544499:c.instructions+=1;goto B544499;
case 0x54449e:goto L54449e;
case 0x5444a4:c.instructions+=3;goto B5444a4;
case 0x5444a7:c.instructions+=2;goto B5444a7;
case 0x5444a9:c.instructions+=1;goto B5444a9;
case 0x5444ab:goto L5444ab;
case 0x5444ae:c.instructions+=1;goto B5444ae;
case 0x5444b0:goto L5444b0;
case 0x5444b3:c.instructions+=2;goto B5444b3;
case 0x5444b4:c.instructions+=1;goto B5444b4;
case 0x5444b9:goto L5444b9;
case 0x5444bf:c.instructions+=6;goto B5444bf;
case 0x5444c0:c.instructions+=5;goto B5444c0;
case 0x5444c1:c.instructions+=4;goto B5444c1;
case 0x5444c2:c.instructions+=3;goto B5444c2;
case 0x5444c4:c.instructions+=2;goto B5444c4;
case 0x5444c6:c.instructions+=1;goto B5444c6;
case 0x5444cb:goto L5444cb;
case 0x5444cc:c.instructions+=2;goto B5444cc;
case 0x5444cd:c.instructions+=1;goto B5444cd;
case 0x5444ce:goto L5444ce;
case 0x5444d4:c.instructions+=3;goto B5444d4;
case 0x5444d6:c.instructions+=2;goto B5444d6;
case 0x5444d8:c.instructions+=1;goto B5444d8;
case 0x5444da:goto L5444da;
case 0x5444df:goto L5444df;
case 0x5444e1:c.instructions+=3;goto B5444e1;
case 0x5444e2:c.instructions+=2;goto B5444e2;
case 0x5444e3:c.instructions+=1;goto B5444e3;
case 0x5444e8:goto L5444e8;
case 0x5444ed:goto L5444ed;
case 0x5444f0:c.instructions+=3;goto B5444f0;
case 0x5444f3:c.instructions+=2;goto B5444f3;
case 0x5444f5:c.instructions+=1;goto B5444f5;
case 0x5444f7:goto L5444f7;
case 0x5444fa:c.instructions+=1;goto B5444fa;
case 0x5444fc:goto L5444fc;
case 0x5444fe:goto L5444fe;
case 0x544500:c.instructions+=1;goto B544500;
case 0x544502:goto L544502;
case 0x544504:c.instructions+=3;goto B544504;
case 0x544505:c.instructions+=2;goto B544505;
case 0x544506:c.instructions+=1;goto B544506;
case 0x54450b:goto L54450b;
case 0x544511:c.instructions+=3;goto B544511;
case 0x544513:c.instructions+=2;goto B544513;
case 0x544515:c.instructions+=1;goto B544515;
case 0x544517:goto L544517;
case 0x54451c:goto L54451c;
case 0x54451e:c.instructions+=3;goto B54451e;
case 0x54451f:c.instructions+=2;goto B54451f;
case 0x544520:c.instructions+=1;goto B544520;
case 0x544525:goto L544525;
case 0x54452a:goto L54452a;
case 0x54452d:c.instructions+=3;goto B54452d;
case 0x544530:c.instructions+=2;goto B544530;
case 0x544532:c.instructions+=1;goto B544532;
case 0x544534:goto L544534;
case 0x544537:c.instructions+=1;goto B544537;
case 0x544539:goto L544539;
case 0x54453b:goto L54453b;
case 0x54453d:c.instructions+=1;goto B54453d;
case 0x54453f:goto L54453f;
case 0x544540:c.instructions+=2;goto B544540;
case 0x544541:c.instructions+=1;goto B544541;
case 0x544545:goto L544545;
case 0x544546:c.instructions+=19;goto B544546;
case 0x544547:c.instructions+=18;goto B544547;
case 0x544548:c.instructions+=17;goto B544548;
case 0x544549:c.instructions+=16;goto B544549;
case 0x54454a:c.instructions+=15;goto B54454a;
case 0x54454b:c.instructions+=14;goto B54454b;
case 0x54454c:c.instructions+=13;goto B54454c;
case 0x54454d:c.instructions+=12;goto B54454d;
case 0x54454e:c.instructions+=11;goto B54454e;
case 0x54454f:c.instructions+=10;goto B54454f;
case 0x544550:c.instructions+=9;goto B544550;
case 0x544554:c.instructions+=8;goto B544554;
case 0x544557:c.instructions+=7;goto B544557;
case 0x544558:c.instructions+=6;goto B544558;
case 0x54455d:c.instructions+=5;goto B54455d;
case 0x54455f:c.instructions+=4;goto B54455f;
case 0x544560:c.instructions+=3;goto B544560;
case 0x544564:c.instructions+=2;goto B544564;
case 0x544565:c.instructions+=1;goto B544565;
case 0x54456a:goto L54456a;
case 0x544570:c.instructions+=7;goto B544570;
case 0x544571:c.instructions+=6;goto B544571;
case 0x544575:c.instructions+=5;goto B544575;
case 0x544576:c.instructions+=4;goto B544576;
case 0x54457a:c.instructions+=3;goto B54457a;
case 0x54457c:c.instructions+=2;goto B54457c;
case 0x54457d:c.instructions+=1;goto B54457d;
case 0x544582:goto L544582;
case 0x544585:c.instructions+=4;goto B544585;
case 0x544589:c.instructions+=3;goto B544589;
case 0x54458a:c.instructions+=2;goto B54458a;
case 0x54458b:c.instructions+=1;goto B54458b;
case 0x544590:goto L544590;
case 0x544593:c.instructions+=3;goto B544593;
case 0x544594:c.instructions+=2;goto B544594;
case 0x544597:c.instructions+=1;goto B544597;
case 0x5445a0:goto L5445a0;
case 0x5445a4:c.instructions+=8;goto B5445a4;
case 0x5445a7:c.instructions+=7;goto B5445a7;
case 0x5445a8:c.instructions+=6;goto B5445a8;
case 0x5445ad:c.instructions+=5;goto B5445ad;
case 0x5445af:c.instructions+=4;goto B5445af;
case 0x5445b0:c.instructions+=3;goto B5445b0;
case 0x5445b4:c.instructions+=2;goto B5445b4;
case 0x5445b5:c.instructions+=1;goto B5445b5;
case 0x5445ba:goto L5445ba;
case 0x5445c0:c.instructions+=7;goto B5445c0;
case 0x5445c1:c.instructions+=6;goto B5445c1;
case 0x5445c5:c.instructions+=5;goto B5445c5;
case 0x5445c6:c.instructions+=4;goto B5445c6;
case 0x5445ca:c.instructions+=3;goto B5445ca;
case 0x5445cc:c.instructions+=2;goto B5445cc;
case 0x5445cd:c.instructions+=1;goto B5445cd;
case 0x5445d2:goto L5445d2;
case 0x5445d5:c.instructions+=4;goto B5445d5;
case 0x5445d9:c.instructions+=3;goto B5445d9;
case 0x5445da:c.instructions+=2;goto B5445da;
case 0x5445db:c.instructions+=1;goto B5445db;
case 0x5445e0:goto L5445e0;
case 0x5445e3:c.instructions+=3;goto B5445e3;
case 0x5445e4:c.instructions+=2;goto B5445e4;
case 0x5445e7:c.instructions+=1;goto B5445e7;
case 0x5445f0:goto L5445f0;
case 0x5445f4:c.instructions+=9;goto B5445f4;
case 0x5445f7:c.instructions+=8;goto B5445f7;
case 0x5445f8:c.instructions+=7;goto B5445f8;
case 0x5445f9:c.instructions+=6;goto B5445f9;
case 0x5445fe:c.instructions+=5;goto B5445fe;
case 0x544600:c.instructions+=4;goto B544600;
case 0x544601:c.instructions+=3;goto B544601;
case 0x544605:c.instructions+=2;goto B544605;
case 0x544606:c.instructions+=1;goto B544606;
case 0x54460b:goto L54460b;
case 0x544611:c.instructions+=7;goto B544611;
case 0x544612:c.instructions+=6;goto B544612;
case 0x544616:c.instructions+=5;goto B544616;
case 0x544617:c.instructions+=4;goto B544617;
case 0x54461b:c.instructions+=3;goto B54461b;
case 0x54461d:c.instructions+=2;goto B54461d;
case 0x54461e:c.instructions+=1;goto B54461e;
case 0x544623:goto L544623;
case 0x544626:c.instructions+=6;goto B544626;
case 0x54462a:c.instructions+=5;goto B54462a;
case 0x54462d:c.instructions+=4;goto B54462d;
case 0x544630:c.instructions+=3;goto B544630;
case 0x544632:c.instructions+=2;goto B544632;
case 0x544636:c.instructions+=1;goto B544636;
case 0x544638:goto L544638;
case 0x54463b:c.instructions+=2;goto B54463b;
case 0x54463d:c.instructions+=1;goto B54463d;
case 0x54463f:goto L54463f;
case 0x544641:c.instructions+=1;goto B544641;
case 0x544643:goto L544643;
case 0x544645:goto L544645;
case 0x544648:c.instructions+=5;goto B544648;
case 0x54464b:c.instructions+=4;goto B54464b;
case 0x54464d:c.instructions+=3;goto B54464d;
case 0x54464e:c.instructions+=2;goto B54464e;
case 0x544650:c.instructions+=1;goto B544650;
case 0x544652:goto L544652;
case 0x544654:c.instructions+=1;goto B544654;
case 0x544656:goto L544656;
case 0x544657:c.instructions+=1;goto B544657;
case 0x54465c:goto L54465c;
case 0x54465f:c.instructions+=2;goto B54465f;
case 0x544661:c.instructions+=1;goto B544661;
case 0x544663:goto L544663;
case 0x544664:c.instructions+=2;goto B544664;
case 0x544666:c.instructions+=1;goto B544666;
case 0x54466b:goto L54466b;
case 0x54466d:c.instructions+=1;goto B54466d;
case 0x54466f:goto L54466f;
case 0x544674:c.instructions+=2;goto B544674;
case 0x544676:c.instructions+=1;goto B544676;
case 0x544678:goto L544678;
case 0x54467b:c.instructions+=3;goto B54467b;
case 0x54467c:c.instructions+=2;goto B54467c;
case 0x54467d:c.instructions+=1;goto B54467d;
case 0x544682:goto L544682;
case 0x544683:c.instructions+=3;goto B544683;
case 0x544684:c.instructions+=2;goto B544684;
case 0x544687:c.instructions+=1;goto B544687;
case 0x54468a:goto L54468a;
case 0x54468c:goto L54468c;
case 0x54468d:c.instructions+=3;goto B54468d;
case 0x54468e:c.instructions+=2;goto B54468e;
case 0x544691:c.instructions+=1;goto B544691;
case 0x5446a0:goto L5446a0;
case 0x5446a4:c.instructions+=4;goto B5446a4;
case 0x5446a9:c.instructions+=3;goto B5446a9;
case 0x5446aa:c.instructions+=2;goto B5446aa;
case 0x5446ac:c.instructions+=1;goto B5446ac;
case 0x5446ae:goto L5446ae;
case 0x5446b3:c.instructions+=1;goto B5446b3;
case 0x5446b5:goto L5446b5;
case 0x5446b8:c.instructions+=2;goto B5446b8;
case 0x5446b9:c.instructions+=1;goto B5446b9;
case 0x5446be:goto L5446be;
case 0x5446c1:c.instructions+=5;goto B5446c1;
case 0x5446c3:c.instructions+=4;goto B5446c3;
case 0x5446c8:c.instructions+=3;goto B5446c8;
case 0x5446cd:c.instructions+=2;goto B5446cd;
case 0x5446ce:c.instructions+=1;goto B5446ce;
case 0x5446d3:goto L5446d3;
case 0x5446d6:c.instructions+=3;goto B5446d6;
case 0x5446db:c.instructions+=2;goto B5446db;
case 0x5446dc:c.instructions+=1;goto B5446dc;
case 0x5446e1:goto L5446e1;
case 0x5446e4:goto L5446e4;
case 0x5446e5:c.instructions+=1;goto B5446e5;
case 0x5446f0:goto L5446f0;
case 0x5446f3:c.instructions+=8;goto B5446f3;
case 0x5446f4:c.instructions+=7;goto B5446f4;
case 0x5446f5:c.instructions+=6;goto B5446f5;
case 0x5446f6:c.instructions+=5;goto B5446f6;
case 0x5446f8:c.instructions+=4;goto B5446f8;
case 0x5446fb:c.instructions+=3;goto B5446fb;
case 0x5446fd:c.instructions+=2;goto B5446fd;
case 0x5446ff:c.instructions+=1;goto B5446ff;
case 0x544705:goto L544705;
case 0x544709:c.instructions+=2;goto B544709;
case 0x54470b:c.instructions+=1;goto B54470b;
case 0x544711:goto L544711;
case 0x544712:c.instructions+=5;goto B544712;
case 0x544713:c.instructions+=4;goto B544713;
case 0x544717:c.instructions+=3;goto B544717;
case 0x54471a:c.instructions+=2;goto B54471a;
case 0x54471d:c.instructions+=1;goto B54471d;
case 0x544722:goto L544722;
case 0x544724:c.instructions+=2;goto B544724;
case 0x544726:c.instructions+=1;goto B544726;
case 0x544728:goto L544728;
case 0x54472a:c.instructions+=2;goto B54472a;
case 0x54472d:c.instructions+=1;goto B54472d;
case 0x54472f:goto L54472f;
case 0x544730:goto L544730;
case 0x544733:c.instructions+=2;goto B544733;
case 0x544737:c.instructions+=1;goto B544737;
case 0x544739:goto L544739;
case 0x544740:goto L544740;
case 0x544744:c.instructions+=1;goto B544744;
case 0x544746:goto L544746;
case 0x544748:c.instructions+=1;goto B544748;
case 0x54474a:goto L54474a;
case 0x54474e:c.instructions+=3;goto B54474e;
case 0x54474f:c.instructions+=2;goto B54474f;
case 0x544750:c.instructions+=1;goto B544750;
case 0x544752:goto L544752;
case 0x544756:c.instructions+=6;goto B544756;
case 0x544757:c.instructions+=5;goto B544757;
case 0x544759:c.instructions+=4;goto B544759;
case 0x54475a:c.instructions+=3;goto B54475a;
case 0x54475b:c.instructions+=2;goto B54475b;
case 0x54475d:c.instructions+=1;goto B54475d;
case 0x544762:goto L544762;
case 0x544766:c.instructions+=2;goto B544766;
case 0x544768:c.instructions+=1;goto B544768;
case 0x54476c:goto L54476c;
case 0x544770:c.instructions+=2;goto B544770;
case 0x544774:c.instructions+=1;goto B544774;
case 0x544776:goto L544776;
case 0x544779:c.instructions+=3;goto B544779;
case 0x54477a:c.instructions+=2;goto B54477a;
case 0x54477c:c.instructions+=1;goto B54477c;
case 0x544781:goto L544781;
case 0x544783:c.instructions+=2;goto B544783;
case 0x544785:c.instructions+=1;goto B544785;
case 0x544787:goto L544787;
case 0x54478a:c.instructions+=2;goto B54478a;
case 0x54478c:c.instructions+=1;goto B54478c;
case 0x54478e:goto L54478e;
case 0x544790:goto L544790;
case 0x544793:c.instructions+=2;goto B544793;
case 0x544797:c.instructions+=1;goto B544797;
case 0x544799:goto L544799;
case 0x54479b:goto L54479b;
case 0x54479f:c.instructions+=2;goto B54479f;
case 0x5447a1:c.instructions+=1;goto B5447a1;
case 0x5447a7:goto L5447a7;
case 0x5447aa:c.instructions+=2;goto B5447aa;
case 0x5447ac:c.instructions+=1;goto B5447ac;
case 0x5447ae:goto L5447ae;
case 0x5447b2:c.instructions+=4;goto B5447b2;
case 0x5447b4:c.instructions+=3;goto B5447b4;
case 0x5447b5:c.instructions+=2;goto B5447b5;
case 0x5447b8:c.instructions+=1;goto B5447b8;
case 0x5447bd:goto L5447bd;
case 0x5447c0:c.instructions+=1;goto B5447c0;
case 0x5447c3:goto L5447c3;
case 0x5447c6:c.instructions+=7;goto B5447c6;
case 0x5447ca:c.instructions+=6;goto B5447ca;
case 0x5447cd:c.instructions+=5;goto B5447cd;
case 0x5447d4:c.instructions+=4;goto B5447d4;
case 0x5447d5:c.instructions+=3;goto B5447d5;
case 0x5447d7:c.instructions+=2;goto B5447d7;
case 0x5447da:c.instructions+=1;goto B5447da;
case 0x5447df:goto L5447df;
case 0x5447e1:c.instructions+=2;goto B5447e1;
case 0x5447e3:c.instructions+=1;goto B5447e3;
case 0x5447e5:goto L5447e5;
case 0x5447e7:c.instructions+=3;goto B5447e7;
case 0x5447e8:c.instructions+=2;goto B5447e8;
case 0x5447ea:c.instructions+=1;goto B5447ea;
case 0x5447ef:goto L5447ef;
case 0x5447f1:c.instructions+=2;goto B5447f1;
case 0x5447f3:c.instructions+=1;goto B5447f3;
case 0x5447f5:goto L5447f5;
case 0x5447f9:c.instructions+=1;goto B5447f9;
case 0x5447fb:goto L5447fb;
case 0x5447fd:c.instructions+=4;goto B5447fd;
case 0x5447ff:c.instructions+=3;goto B5447ff;
case 0x544801:c.instructions+=2;goto B544801;
case 0x544803:c.instructions+=1;goto B544803;
case 0x544805:goto L544805;
case 0x54480a:goto L54480a;
case 0x54480c:goto L54480c;
case 0x54480d:c.instructions+=2;goto B54480d;
case 0x54480e:c.instructions+=1;goto B54480e;
case 0x544813:goto L544813;
case 0x544817:c.instructions+=1;goto B544817;
case 0x544819:goto L544819;
case 0x54481c:c.instructions+=3;goto B54481c;
case 0x54481d:c.instructions+=2;goto B54481d;
case 0x54481f:c.instructions+=1;goto B54481f;
case 0x544824:goto L544824;
case 0x544826:c.instructions+=2;goto B544826;
case 0x544828:c.instructions+=1;goto B544828;
case 0x54482a:goto L54482a;
case 0x54482d:c.instructions+=2;goto B54482d;
case 0x54482f:c.instructions+=1;goto B54482f;
case 0x544831:goto L544831;
case 0x544834:c.instructions+=2;goto B544834;
case 0x544838:c.instructions+=1;goto B544838;
case 0x54483a:goto L54483a;
case 0x54483c:goto L54483c;
case 0x54483f:c.instructions+=1;goto B54483f;
case 0x544841:goto L544841;
case 0x544843:c.instructions+=1;goto B544843;
case 0x544844:goto L544844;
case 0x544847:c.instructions+=3;goto B544847;
case 0x544849:c.instructions+=2;goto B544849;
case 0x54484c:c.instructions+=1;goto B54484c;
case 0x54484e:goto L54484e;
case 0x544851:c.instructions+=5;goto B544851;
case 0x544854:c.instructions+=4;goto B544854;
case 0x544856:c.instructions+=3;goto B544856;
case 0x544857:c.instructions+=2;goto B544857;
case 0x544858:c.instructions+=1;goto B544858;
case 0x54485d:goto L54485d;
case 0x544860:c.instructions+=3;goto B544860;
case 0x544861:c.instructions+=2;goto B544861;
case 0x544863:c.instructions+=1;goto B544863;
case 0x544868:goto L544868;
case 0x544869:c.instructions+=4;goto B544869;
case 0x54486a:c.instructions+=3;goto B54486a;
case 0x54486b:c.instructions+=2;goto B54486b;
case 0x54486e:c.instructions+=1;goto B54486e;
case 0x544880:goto L544880;
case 0x544881:c.instructions+=5;goto B544881;
case 0x544883:c.instructions+=4;goto B544883;
case 0x544886:c.instructions+=3;goto B544886;
case 0x544889:c.instructions+=2;goto B544889;
case 0x54488b:c.instructions+=1;goto B54488b;
case 0x54488d:goto L54488d;
case 0x544891:c.instructions+=4;goto B544891;
case 0x544892:c.instructions+=3;goto B544892;
case 0x544895:c.instructions+=2;goto B544895;
case 0x544897:c.instructions+=1;goto B544897;
case 0x544899:goto L544899;
case 0x54489b:c.instructions+=1;goto B54489b;
case 0x54489d:goto L54489d;
case 0x5448a0:c.instructions+=2;goto B5448a0;
case 0x5448a2:c.instructions+=1;goto B5448a2;
case 0x5448a4:goto L5448a4;
case 0x5448a6:c.instructions+=1;goto B5448a6;
case 0x5448a8:goto L5448a8;
case 0x5448ab:c.instructions+=2;goto B5448ab;
case 0x5448ad:c.instructions+=1;goto B5448ad;
case 0x5448af:goto L5448af;
case 0x5448b2:c.instructions+=2;goto B5448b2;
case 0x5448b4:c.instructions+=1;goto B5448b4;
case 0x5448b6:goto L5448b6;
case 0x5448bb:goto L5448bb;
case 0x5448bc:c.instructions+=3;goto B5448bc;
case 0x5448be:c.instructions+=2;goto B5448be;
case 0x5448c1:c.instructions+=1;goto B5448c1;
case 0x5448c6:goto L5448c6;
case 0x5448c7:c.instructions+=2;goto B5448c7;
case 0x5448c8:c.instructions+=1;goto B5448c8;
case 0x5448cb:goto L5448cb;
case 0x5448cd:goto L5448cd;
case 0x5448d2:goto L5448d2;
case 0x5448d3:c.instructions+=3;goto B5448d3;
case 0x5448d5:c.instructions+=2;goto B5448d5;
case 0x5448d8:c.instructions+=1;goto B5448d8;
case 0x5448dd:goto L5448dd;
case 0x5448de:goto L5448de;
case 0x5448df:c.instructions+=1;goto B5448df;
case 0x5448f0:goto L5448f0;
case 0x5448f4:c.instructions+=4;goto B5448f4;
case 0x5448f5:c.instructions+=3;goto B5448f5;
case 0x5448f7:c.instructions+=2;goto B5448f7;
case 0x5448fa:c.instructions+=1;goto B5448fa;
case 0x5448fc:goto L5448fc;
case 0x5448fe:c.instructions+=2;goto B5448fe;
case 0x544900:c.instructions+=1;goto B544900;
case 0x544905:goto L544905;
case 0x544908:c.instructions+=2;goto B544908;
case 0x54490a:c.instructions+=1;goto B54490a;
case 0x54490c:goto L54490c;
case 0x54490f:c.instructions+=7;goto B54490f;
case 0x544912:c.instructions+=6;goto B544912;
case 0x544913:c.instructions+=5;goto B544913;
case 0x544914:c.instructions+=4;goto B544914;
case 0x544917:c.instructions+=3;goto B544917;
case 0x544918:c.instructions+=2;goto B544918;
case 0x544919:c.instructions+=1;goto B544919;
case 0x54491e:goto L54491e;
case 0x544920:c.instructions+=2;goto B544920;
case 0x544921:c.instructions+=1;goto B544921;
case 0x544924:goto L544924;
case 0x544927:c.instructions+=1;goto B544927;
case 0x544929:goto L544929;
case 0x54492b:c.instructions+=2;goto B54492b;
case 0x54492d:c.instructions+=1;goto B54492d;
case 0x544932:goto L544932;
case 0x544935:c.instructions+=2;goto B544935;
case 0x544937:c.instructions+=1;goto B544937;
case 0x544939:goto L544939;
case 0x54493c:c.instructions+=7;goto B54493c;
case 0x54493f:c.instructions+=6;goto B54493f;
case 0x544940:c.instructions+=5;goto B544940;
case 0x544941:c.instructions+=4;goto B544941;
case 0x544944:c.instructions+=3;goto B544944;
case 0x544945:c.instructions+=2;goto B544945;
case 0x544946:c.instructions+=1;goto B544946;
case 0x54494b:goto L54494b;
case 0x54494d:c.instructions+=2;goto B54494d;
case 0x54494e:c.instructions+=1;goto B54494e;
case 0x544951:goto L544951;
case 0x544956:c.instructions+=1;goto B544956;
case 0x544958:goto L544958;
case 0x54495b:c.instructions+=2;goto B54495b;
case 0x54495d:c.instructions+=1;goto B54495d;
case 0x54495f:goto L54495f;
case 0x544964:goto L544964;
case 0x54496a:c.instructions+=6;goto B54496a;
case 0x54496d:c.instructions+=5;goto B54496d;
case 0x544970:c.instructions+=4;goto B544970;
case 0x544976:c.instructions+=3;goto B544976;
case 0x544978:c.instructions+=2;goto B544978;
case 0x54497b:c.instructions+=1;goto B54497b;
case 0x54497d:goto L54497d;
case 0x54497f:c.instructions+=2;goto B54497f;
case 0x544984:c.instructions+=1;goto B544984;
case 0x544986:goto L544986;
case 0x54498c:c.instructions+=3;goto B54498c;
case 0x54498e:c.instructions+=2;goto B54498e;
case 0x544991:c.instructions+=1;goto B544991;
case 0x544993:goto L544993;
case 0x544996:c.instructions+=1;goto B544996;
case 0x544998:goto L544998;
case 0x54499b:c.instructions+=1;goto B54499b;
case 0x54499d:goto L54499d;
case 0x54499e:c.instructions+=2;goto B54499e;
case 0x5449a0:c.instructions+=1;goto B5449a0;
case 0x5449a5:goto L5449a5;
case 0x5449a7:c.instructions+=1;goto B5449a7;
case 0x5449ac:goto L5449ac;
case 0x5449ae:c.instructions+=2;goto B5449ae;
case 0x5449af:c.instructions+=1;goto B5449af;
case 0x5449b2:goto L5449b2;
case 0x5449b4:c.instructions+=2;goto B5449b4;
case 0x5449b5:c.instructions+=1;goto B5449b5;
case 0x5449c0:goto L5449c0;
case 0x5449c1:c.instructions+=8;goto B5449c1;
case 0x5449c3:c.instructions+=7;goto B5449c3;
case 0x5449c4:c.instructions+=6;goto B5449c4;
case 0x5449c5:c.instructions+=5;goto B5449c5;
case 0x5449c8:c.instructions+=4;goto B5449c8;
case 0x5449cb:c.instructions+=3;goto B5449cb;
case 0x5449d0:c.instructions+=2;goto B5449d0;
case 0x5449d7:c.instructions+=1;goto B5449d7;
case 0x5449dd:goto L5449dd;
case 0x5449e4:c.instructions+=3;goto B5449e4;
case 0x5449e5:c.instructions+=2;goto B5449e5;
case 0x5449e6:c.instructions+=1;goto B5449e6;
case 0x5449ed:goto L5449ed;
case 0x5449ee:c.instructions+=1;goto B5449ee;
case 0x5449f3:goto L5449f3;
case 0x5449f9:c.instructions+=4;goto B5449f9;
case 0x5449fb:c.instructions+=3;goto B5449fb;
case 0x5449fe:c.instructions+=2;goto B5449fe;
case 0x544a01:c.instructions+=1;goto B544a01;
case 0x544a04:goto L544a04;
case 0x544a06:c.instructions+=6;goto B544a06;
case 0x544a08:c.instructions+=5;goto B544a08;
case 0x544a0a:c.instructions+=4;goto B544a0a;
case 0x544a0b:c.instructions+=3;goto B544a0b;
case 0x544a0c:c.instructions+=2;goto B544a0c;
case 0x544a11:c.instructions+=1;goto B544a11;
case 0x544a16:goto L544a16;
case 0x544a18:c.instructions+=2;goto B544a18;
case 0x544a1a:c.instructions+=1;goto B544a1a;
case 0x544a20:goto L544a20;
case 0x544a22:c.instructions+=3;goto B544a22;
case 0x544a27:c.instructions+=2;goto B544a27;
case 0x544a29:c.instructions+=1;goto B544a29;
case 0x544a2e:goto L544a2e;
case 0x544a32:c.instructions+=6;goto B544a32;
case 0x544a35:c.instructions+=5;goto B544a35;
case 0x544a37:c.instructions+=4;goto B544a37;
case 0x544a39:c.instructions+=3;goto B544a39;
case 0x544a3e:c.instructions+=2;goto B544a3e;
case 0x544a40:c.instructions+=1;goto B544a40;
case 0x544a42:goto L544a42;
case 0x544a45:c.instructions+=1;goto B544a45;
case 0x544a47:goto L544a47;
case 0x544a4d:c.instructions+=4;goto B544a4d;
case 0x544a4e:c.instructions+=3;goto B544a4e;
case 0x544a4f:c.instructions+=2;goto B544a4f;
case 0x544a50:c.instructions+=1;goto B544a50;
case 0x544a55:goto L544a55;
case 0x544a56:c.instructions+=1;goto B544a56;
case 0x544a5b:goto L544a5b;
case 0x544a5e:c.instructions+=2;goto B544a5e;
case 0x544a60:c.instructions+=1;goto B544a60;
case 0x544a62:goto L544a62;
case 0x544a65:c.instructions+=1;goto B544a65;
case 0x544a67:goto L544a67;
case 0x544a6a:c.instructions+=3;goto B544a6a;
case 0x544a6c:c.instructions+=2;goto B544a6c;
case 0x544a6e:c.instructions+=1;goto B544a6e;
case 0x544a70:goto L544a70;
case 0x544a73:c.instructions+=4;goto B544a73;
case 0x544a74:c.instructions+=3;goto B544a74;
case 0x544a76:c.instructions+=2;goto B544a76;
case 0x544a79:c.instructions+=1;goto B544a79;
case 0x544a7e:goto L544a7e;
case 0x544a81:c.instructions+=2;goto B544a81;
case 0x544a83:c.instructions+=1;goto B544a83;
case 0x544a85:goto L544a85;
case 0x544a88:c.instructions+=2;goto B544a88;
case 0x544a8f:c.instructions+=1;goto B544a8f;
case 0x544a91:goto L544a91;
case 0x544a93:goto L544a93;
case 0x544a96:c.instructions+=5;goto B544a96;
case 0x544a99:c.instructions+=4;goto B544a99;
case 0x544a9b:c.instructions+=3;goto B544a9b;
case 0x544a9e:c.instructions+=2;goto B544a9e;
case 0x544aa1:c.instructions+=1;goto B544aa1;
case 0x544aa3:goto L544aa3;
case 0x544aa5:c.instructions+=6;goto B544aa5;
case 0x544aa7:c.instructions+=5;goto B544aa7;
case 0x544aa8:c.instructions+=4;goto B544aa8;
case 0x544aa9:c.instructions+=3;goto B544aa9;
case 0x544aaa:c.instructions+=2;goto B544aaa;
case 0x544aaf:c.instructions+=1;goto B544aaf;
case 0x544ab4:goto L544ab4;
case 0x544ab6:c.instructions+=2;goto B544ab6;
case 0x544ab8:c.instructions+=1;goto B544ab8;
case 0x544abe:goto L544abe;
case 0x544ac1:c.instructions+=6;goto B544ac1;
case 0x544ac2:c.instructions+=5;goto B544ac2;
case 0x544ac3:c.instructions+=4;goto B544ac3;
case 0x544ac4:c.instructions+=3;goto B544ac4;
case 0x544ac6:c.instructions+=2;goto B544ac6;
case 0x544ac7:c.instructions+=1;goto B544ac7;
case 0x544ac8:goto L544ac8;
case 0x544ac9:c.instructions+=1;goto B544ac9;
case 0x544ace:goto L544ace;
case 0x544ad4:c.instructions+=4;goto B544ad4;
case 0x544ad6:c.instructions+=3;goto B544ad6;
case 0x544ad9:c.instructions+=2;goto B544ad9;
case 0x544adc:c.instructions+=1;goto B544adc;
case 0x544adf:goto L544adf;
case 0x544ae1:c.instructions+=6;goto B544ae1;
case 0x544ae3:c.instructions+=5;goto B544ae3;
case 0x544ae5:c.instructions+=4;goto B544ae5;
case 0x544ae6:c.instructions+=3;goto B544ae6;
case 0x544ae7:c.instructions+=2;goto B544ae7;
case 0x544aec:c.instructions+=1;goto B544aec;
case 0x544af1:goto L544af1;
case 0x544af3:c.instructions+=2;goto B544af3;
case 0x544af5:c.instructions+=1;goto B544af5;
case 0x544afb:goto L544afb;
case 0x544b00:goto L544b00;
case 0x544b04:c.instructions+=2;goto B544b04;
case 0x544b07:c.instructions+=1;goto B544b07;
case 0x544b09:goto L544b09;
case 0x544b0c:c.instructions+=4;goto B544b0c;
case 0x544b0d:c.instructions+=3;goto B544b0d;
case 0x544b0e:c.instructions+=2;goto B544b0e;
case 0x544b0f:c.instructions+=1;goto B544b0f;
case 0x544b14:goto L544b14;
case 0x544b17:c.instructions+=2;goto B544b17;
case 0x544b19:c.instructions+=1;goto B544b19;
case 0x544b1b:goto L544b1b;
case 0x544b1e:c.instructions+=4;goto B544b1e;
case 0x544b1f:c.instructions+=3;goto B544b1f;
case 0x544b21:c.instructions+=2;goto B544b21;
case 0x544b24:c.instructions+=1;goto B544b24;
case 0x544b29:goto L544b29;
case 0x544b2c:c.instructions+=2;goto B544b2c;
case 0x544b2e:c.instructions+=1;goto B544b2e;
case 0x544b30:goto L544b30;
case 0x544b33:c.instructions+=2;goto B544b33;
case 0x544b3a:c.instructions+=1;goto B544b3a;
case 0x544b3c:goto L544b3c;
case 0x544b3e:goto L544b3e;
case 0x544b41:c.instructions+=5;goto B544b41;
case 0x544b44:c.instructions+=4;goto B544b44;
case 0x544b46:c.instructions+=3;goto B544b46;
case 0x544b49:c.instructions+=2;goto B544b49;
case 0x544b4c:c.instructions+=1;goto B544b4c;
case 0x544b4e:goto L544b4e;
case 0x544b50:c.instructions+=6;goto B544b50;
case 0x544b52:c.instructions+=5;goto B544b52;
case 0x544b53:c.instructions+=4;goto B544b53;
case 0x544b54:c.instructions+=3;goto B544b54;
case 0x544b55:c.instructions+=2;goto B544b55;
case 0x544b5a:c.instructions+=1;goto B544b5a;
case 0x544b5f:goto L544b5f;
case 0x544b61:c.instructions+=2;goto B544b61;
case 0x544b63:c.instructions+=1;goto B544b63;
case 0x544b65:goto L544b65;
case 0x544b68:c.instructions+=6;goto B544b68;
case 0x544b69:c.instructions+=5;goto B544b69;
case 0x544b6a:c.instructions+=4;goto B544b6a;
case 0x544b6b:c.instructions+=3;goto B544b6b;
case 0x544b6d:c.instructions+=2;goto B544b6d;
case 0x544b6e:c.instructions+=1;goto B544b6e;
case 0x544b6f:goto L544b6f;
case 0x544b70:c.instructions+=1;goto B544b70;
case 0x544b75:goto L544b75;
case 0x544b7b:c.instructions+=4;goto B544b7b;
case 0x544b7d:c.instructions+=3;goto B544b7d;
case 0x544b80:c.instructions+=2;goto B544b80;
case 0x544b83:c.instructions+=1;goto B544b83;
case 0x544b86:goto L544b86;
case 0x544b88:c.instructions+=6;goto B544b88;
case 0x544b8a:c.instructions+=5;goto B544b8a;
case 0x544b8c:c.instructions+=4;goto B544b8c;
case 0x544b8d:c.instructions+=3;goto B544b8d;
case 0x544b8e:c.instructions+=2;goto B544b8e;
case 0x544b93:c.instructions+=1;goto B544b93;
case 0x544b98:goto L544b98;
case 0x544b9a:c.instructions+=2;goto B544b9a;
case 0x544b9c:c.instructions+=1;goto B544b9c;
case 0x544ba2:goto L544ba2;
case 0x544ba6:c.instructions+=2;goto B544ba6;
case 0x544ba9:c.instructions+=1;goto B544ba9;
case 0x544bab:goto L544bab;
case 0x544bad:c.instructions+=3;goto B544bad;
case 0x544bb2:c.instructions+=2;goto B544bb2;
case 0x544bb4:c.instructions+=1;goto B544bb4;
case 0x544bb9:goto L544bb9;
case 0x544bbc:c.instructions+=1;goto B544bbc;
case 0x544bbe:goto L544bbe;
case 0x544bc1:c.instructions+=4;goto B544bc1;
case 0x544bc2:c.instructions+=3;goto B544bc2;
case 0x544bc4:c.instructions+=2;goto B544bc4;
case 0x544bc7:c.instructions+=1;goto B544bc7;
case 0x544bcc:goto L544bcc;
case 0x544bcf:c.instructions+=2;goto B544bcf;
case 0x544bd1:c.instructions+=1;goto B544bd1;
case 0x544bd3:goto L544bd3;
case 0x544bd6:c.instructions+=2;goto B544bd6;
case 0x544bdd:c.instructions+=1;goto B544bdd;
case 0x544bdf:goto L544bdf;
case 0x544be1:goto L544be1;
case 0x544be4:c.instructions+=5;goto B544be4;
case 0x544be7:c.instructions+=4;goto B544be7;
case 0x544be9:c.instructions+=3;goto B544be9;
case 0x544bec:c.instructions+=2;goto B544bec;
case 0x544bef:c.instructions+=1;goto B544bef;
case 0x544bf1:goto L544bf1;
case 0x544bf3:c.instructions+=6;goto B544bf3;
case 0x544bf5:c.instructions+=5;goto B544bf5;
case 0x544bf6:c.instructions+=4;goto B544bf6;
case 0x544bf7:c.instructions+=3;goto B544bf7;
case 0x544bf8:c.instructions+=2;goto B544bf8;
case 0x544bfd:c.instructions+=1;goto B544bfd;
case 0x544c02:goto L544c02;
case 0x544c04:c.instructions+=2;goto B544c04;
case 0x544c06:c.instructions+=1;goto B544c06;
case 0x544c08:goto L544c08;
case 0x544c0b:c.instructions+=6;goto B544c0b;
case 0x544c0c:c.instructions+=5;goto B544c0c;
case 0x544c0d:c.instructions+=4;goto B544c0d;
case 0x544c0e:c.instructions+=3;goto B544c0e;
case 0x544c10:c.instructions+=2;goto B544c10;
case 0x544c11:c.instructions+=1;goto B544c11;
case 0x544c12:goto L544c12;
case 0x544c13:c.instructions+=1;goto B544c13;
case 0x544c18:goto L544c18;
case 0x544c1e:c.instructions+=4;goto B544c1e;
case 0x544c20:c.instructions+=3;goto B544c20;
case 0x544c23:c.instructions+=2;goto B544c23;
case 0x544c26:c.instructions+=1;goto B544c26;
case 0x544c29:goto L544c29;
case 0x544c2b:c.instructions+=6;goto B544c2b;
case 0x544c2d:c.instructions+=5;goto B544c2d;
case 0x544c2f:c.instructions+=4;goto B544c2f;
case 0x544c30:c.instructions+=3;goto B544c30;
case 0x544c31:c.instructions+=2;goto B544c31;
case 0x544c36:c.instructions+=1;goto B544c36;
case 0x544c3b:goto L544c3b;
case 0x544c3d:c.instructions+=2;goto B544c3d;
case 0x544c3f:c.instructions+=1;goto B544c3f;
case 0x544c45:goto L544c45;
case 0x544c50:goto L544c50;
case 0x544c54:c.instructions+=2;goto B544c54;
case 0x544c57:c.instructions+=1;goto B544c57;
case 0x544c5d:goto L544c5d;
case 0x544c60:c.instructions+=5;goto B544c60;
case 0x544c62:c.instructions+=4;goto B544c62;
case 0x544c65:c.instructions+=3;goto B544c65;
case 0x544c68:c.instructions+=2;goto B544c68;
case 0x544c6a:c.instructions+=1;goto B544c6a;
case 0x544c70:goto L544c70;
case 0x544c76:c.instructions+=4;goto B544c76;
case 0x544c77:c.instructions+=3;goto B544c77;
case 0x544c78:c.instructions+=2;goto B544c78;
case 0x544c79:c.instructions+=1;goto B544c79;
case 0x544c7e:goto L544c7e;
case 0x544c7f:c.instructions+=1;goto B544c7f;
case 0x544c84:goto L544c84;
case 0x544c87:c.instructions+=2;goto B544c87;
case 0x544c89:c.instructions+=1;goto B544c89;
case 0x544c8b:goto L544c8b;
case 0x544c8e:c.instructions+=3;goto B544c8e;
case 0x544c90:c.instructions+=2;goto B544c90;
case 0x544c92:c.instructions+=1;goto B544c92;
case 0x544c94:goto L544c94;
case 0x544c99:c.instructions+=1;goto B544c99;
case 0x544c9e:goto L544c9e;
case 0x544ca2:c.instructions+=6;goto B544ca2;
case 0x544ca5:c.instructions+=5;goto B544ca5;
case 0x544ca8:c.instructions+=4;goto B544ca8;
case 0x544caa:c.instructions+=3;goto B544caa;
case 0x544cad:c.instructions+=2;goto B544cad;
case 0x544caf:c.instructions+=1;goto B544caf;
case 0x544cb1:goto L544cb1;
case 0x544cb6:goto L544cb6;
case 0x544cb8:c.instructions+=1;goto B544cb8;
case 0x544cba:goto L544cba;
case 0x544cbd:c.instructions+=4;goto B544cbd;
case 0x544cbe:c.instructions+=3;goto B544cbe;
case 0x544cc0:c.instructions+=2;goto B544cc0;
case 0x544cc3:c.instructions+=1;goto B544cc3;
case 0x544cc8:goto L544cc8;
case 0x544ccb:c.instructions+=2;goto B544ccb;
case 0x544ccd:c.instructions+=1;goto B544ccd;
case 0x544ccf:goto L544ccf;
case 0x544cd2:c.instructions+=2;goto B544cd2;
case 0x544cd9:c.instructions+=1;goto B544cd9;
case 0x544cdb:goto L544cdb;
case 0x544cdd:goto L544cdd;
case 0x544ce0:c.instructions+=5;goto B544ce0;
case 0x544ce3:c.instructions+=4;goto B544ce3;
case 0x544ce5:c.instructions+=3;goto B544ce5;
case 0x544ce8:c.instructions+=2;goto B544ce8;
case 0x544ceb:c.instructions+=1;goto B544ceb;
case 0x544ced:goto L544ced;
case 0x544cef:c.instructions+=6;goto B544cef;
case 0x544cf1:c.instructions+=5;goto B544cf1;
case 0x544cf2:c.instructions+=4;goto B544cf2;
case 0x544cf3:c.instructions+=3;goto B544cf3;
case 0x544cf4:c.instructions+=2;goto B544cf4;
case 0x544cf9:c.instructions+=1;goto B544cf9;
case 0x544cfe:goto L544cfe;
case 0x544d00:c.instructions+=2;goto B544d00;
case 0x544d02:c.instructions+=1;goto B544d02;
case 0x544d08:goto L544d08;
case 0x544d0b:c.instructions+=6;goto B544d0b;
case 0x544d0c:c.instructions+=5;goto B544d0c;
case 0x544d0d:c.instructions+=4;goto B544d0d;
case 0x544d0e:c.instructions+=3;goto B544d0e;
case 0x544d10:c.instructions+=2;goto B544d10;
case 0x544d11:c.instructions+=1;goto B544d11;
case 0x544d12:goto L544d12;
case 0x544d13:c.instructions+=1;goto B544d13;
case 0x544d18:goto L544d18;
case 0x544d1e:c.instructions+=3;goto B544d1e;
case 0x544d20:c.instructions+=2;goto B544d20;
case 0x544d23:c.instructions+=1;goto B544d23;
case 0x544d26:goto L544d26;
case 0x544d28:c.instructions+=6;goto B544d28;
case 0x544d2a:c.instructions+=5;goto B544d2a;
case 0x544d2b:c.instructions+=4;goto B544d2b;
case 0x544d2c:c.instructions+=3;goto B544d2c;
case 0x544d31:c.instructions+=2;goto B544d31;
case 0x544d34:c.instructions+=1;goto B544d34;
case 0x544d39:goto L544d39;
case 0x544d3b:c.instructions+=2;goto B544d3b;
case 0x544d3d:c.instructions+=1;goto B544d3d;
case 0x544d3f:goto L544d3f;
case 0x544d42:goto L544d42;
case 0x544d45:c.instructions+=4;goto B544d45;
case 0x544d46:c.instructions+=3;goto B544d46;
case 0x544d48:c.instructions+=2;goto B544d48;
case 0x544d4b:c.instructions+=1;goto B544d4b;
case 0x544d50:goto L544d50;
case 0x544d53:c.instructions+=2;goto B544d53;
case 0x544d55:c.instructions+=1;goto B544d55;
case 0x544d57:goto L544d57;
case 0x544d5a:c.instructions+=2;goto B544d5a;
case 0x544d61:c.instructions+=1;goto B544d61;
case 0x544d63:goto L544d63;
case 0x544d65:goto L544d65;
case 0x544d68:c.instructions+=12;goto B544d68;
case 0x544d6a:c.instructions+=11;goto B544d6a;
case 0x544d6c:c.instructions+=10;goto B544d6c;
case 0x544d6e:c.instructions+=9;goto B544d6e;
case 0x544d71:c.instructions+=8;goto B544d71;
case 0x544d74:c.instructions+=7;goto B544d74;
case 0x544d77:c.instructions+=6;goto B544d77;
case 0x544d78:c.instructions+=5;goto B544d78;
case 0x544d79:c.instructions+=4;goto B544d79;
case 0x544d7a:c.instructions+=3;goto B544d7a;
case 0x544d7f:c.instructions+=2;goto B544d7f;
case 0x544d81:c.instructions+=1;goto B544d81;
case 0x544d86:goto L544d86;
case 0x544d88:c.instructions+=2;goto B544d88;
case 0x544d8a:c.instructions+=1;goto B544d8a;
case 0x544d8c:goto L544d8c;
case 0x544d8d:c.instructions+=1;goto B544d8d;
case 0x544d8e:goto L544d8e;
case 0x544d91:c.instructions+=4;goto B544d91;
case 0x544d92:c.instructions+=3;goto B544d92;
case 0x544d94:c.instructions+=2;goto B544d94;
case 0x544d95:c.instructions+=1;goto B544d95;
case 0x544e60:goto L544e60;
case 0x544e62:c.instructions+=18;goto B544e62;
case 0x544e67:c.instructions+=17;goto B544e67;
case 0x544e6d:c.instructions+=16;goto B544e6d;
case 0x544e6e:c.instructions+=15;goto B544e6e;
case 0x544e75:c.instructions+=14;goto B544e75;
case 0x544e78:c.instructions+=13;goto B544e78;
case 0x544e7c:c.instructions+=12;goto B544e7c;
case 0x544e80:c.instructions+=11;goto B544e80;
case 0x544e81:c.instructions+=10;goto B544e81;
case 0x544e85:c.instructions+=9;goto B544e85;
case 0x544e89:c.instructions+=8;goto B544e89;
case 0x544e8d:c.instructions+=7;goto B544e8d;
case 0x544e8f:c.instructions+=6;goto B544e8f;
case 0x544e94:c.instructions+=5;goto B544e94;
case 0x544e98:c.instructions+=4;goto B544e98;
case 0x544e99:c.instructions+=3;goto B544e99;
case 0x544e9a:c.instructions+=2;goto B544e9a;
case 0x544ea2:c.instructions+=1;goto B544ea2;
case 0x544ea7:goto L544ea7;
case 0x544eaa:c.instructions+=7;goto B544eaa;
case 0x544ead:c.instructions+=6;goto B544ead;
case 0x544eb1:c.instructions+=5;goto B544eb1;
case 0x544eb5:c.instructions+=4;goto B544eb5;
case 0x544eb8:c.instructions+=3;goto B544eb8;
case 0x544eba:c.instructions+=2;goto B544eba;
case 0x544ec2:c.instructions+=1;goto B544ec2;
case 0x544ec4:goto L544ec4;
case 0x544ec6:c.instructions+=6;goto B544ec6;
case 0x544ec8:c.instructions+=5;goto B544ec8;
case 0x544ecb:c.instructions+=4;goto B544ecb;
case 0x544ecd:c.instructions+=3;goto B544ecd;
case 0x544ece:c.instructions+=2;goto B544ece;
case 0x544ed1:c.instructions+=1;goto B544ed1;
case 0x544ed6:goto L544ed6;
case 0x544eda:c.instructions+=4;goto B544eda;
case 0x544ede:c.instructions+=3;goto B544ede;
case 0x544ee1:c.instructions+=2;goto B544ee1;
case 0x544ee3:c.instructions+=1;goto B544ee3;
case 0x544ee5:goto L544ee5;
case 0x544ee9:c.instructions+=5;goto B544ee9;
case 0x544eeb:c.instructions+=4;goto B544eeb;
case 0x544eec:c.instructions+=3;goto B544eec;
case 0x544ef3:c.instructions+=2;goto B544ef3;
case 0x544ef6:c.instructions+=1;goto B544ef6;
case 0x544f00:goto L544f00;
case 0x544f02:c.instructions+=1;goto B544f02;
case 0x544f07:goto L544f07;
case 0x544f0a:c.instructions+=2;goto B544f0a;
case 0x544f0c:c.instructions+=1;goto B544f0c;
case 0x544f0e:goto L544f0e;
case 0x544f10:c.instructions+=1;goto B544f10;
case 0x544f15:goto L544f15;
case 0x544f18:c.instructions+=2;goto B544f18;
case 0x544f1a:c.instructions+=1;goto B544f1a;
case 0x544f1c:goto L544f1c;
case 0x544f1e:c.instructions+=1;goto B544f1e;
case 0x544f23:goto L544f23;
case 0x544f26:c.instructions+=2;goto B544f26;
case 0x544f28:c.instructions+=1;goto B544f28;
case 0x544f2a:goto L544f2a;
case 0x544f2c:c.instructions+=1;goto B544f2c;
case 0x544f31:goto L544f31;
case 0x544f34:c.instructions+=2;goto B544f34;
case 0x544f36:c.instructions+=1;goto B544f36;
case 0x544f38:goto L544f38;
case 0x544f3d:c.instructions+=4;goto B544f3d;
case 0x544f3e:c.instructions+=3;goto B544f3e;
case 0x544f40:c.instructions+=2;goto B544f40;
case 0x544f42:c.instructions+=1;goto B544f42;
case 0x544f47:goto L544f47;
case 0x544f48:c.instructions+=1;goto B544f48;
case 0x544f4d:goto L544f4d;
case 0x544f50:c.instructions+=2;goto B544f50;
case 0x544f52:c.instructions+=1;goto B544f52;
case 0x544f54:goto L544f54;
case 0x544f5a:c.instructions+=4;goto B544f5a;
case 0x544f5b:c.instructions+=3;goto B544f5b;
case 0x544f5d:c.instructions+=2;goto B544f5d;
case 0x544f5f:c.instructions+=1;goto B544f5f;
case 0x544f64:goto L544f64;
case 0x544f65:c.instructions+=1;goto B544f65;
case 0x544f6a:goto L544f6a;
case 0x544f6d:c.instructions+=4;goto B544f6d;
case 0x544f6f:c.instructions+=3;goto B544f6f;
case 0x544f71:c.instructions+=2;goto B544f71;
case 0x544f73:c.instructions+=1;goto B544f73;
case 0x544f74:goto L544f74;
case 0x544f76:c.instructions+=1;goto B544f76;
case 0x544f80:goto L544f80;
case 0x544f82:c.instructions+=17;goto B544f82;
case 0x544f87:c.instructions+=16;goto B544f87;
case 0x544f8d:c.instructions+=15;goto B544f8d;
case 0x544f8e:c.instructions+=14;goto B544f8e;
case 0x544f95:c.instructions+=13;goto B544f95;
case 0x544f96:c.instructions+=12;goto B544f96;
case 0x544f97:c.instructions+=11;goto B544f97;
case 0x544f99:c.instructions+=10;goto B544f99;
case 0x544f9a:c.instructions+=9;goto B544f9a;
case 0x544f9d:c.instructions+=8;goto B544f9d;
case 0x544fa3:c.instructions+=7;goto B544fa3;
case 0x544fa4:c.instructions+=6;goto B544fa4;
case 0x544fa8:c.instructions+=5;goto B544fa8;
case 0x544faa:c.instructions+=4;goto B544faa;
case 0x544fad:c.instructions+=3;goto B544fad;
case 0x544fb3:c.instructions+=2;goto B544fb3;
case 0x544fbb:c.instructions+=1;goto B544fbb;
case 0x544fc0:goto L544fc0;
case 0x544fc2:c.instructions+=1;goto B544fc2;
case 0x544fc4:goto L544fc4;
case 0x544fc7:c.instructions+=1;goto B544fc7;
case 0x544fc9:goto L544fc9;
case 0x544fcb:goto L544fcb;
case 0x544fce:c.instructions+=6;goto B544fce;
case 0x544fd0:c.instructions+=5;goto B544fd0;
case 0x544fd3:c.instructions+=4;goto B544fd3;
case 0x544fd6:c.instructions+=3;goto B544fd6;
case 0x544fd8:c.instructions+=2;goto B544fd8;
case 0x544fde:c.instructions+=1;goto B544fde;
case 0x544fe3:goto L544fe3;
case 0x544fe5:c.instructions+=1;goto B544fe5;
case 0x544fe7:goto L544fe7;
case 0x544fea:c.instructions+=1;goto B544fea;
case 0x544fec:goto L544fec;
case 0x544fee:goto L544fee;
case 0x544ff1:c.instructions+=5;goto B544ff1;
case 0x544ff3:c.instructions+=4;goto B544ff3;
case 0x544ff6:c.instructions+=3;goto B544ff6;
case 0x544ff9:c.instructions+=2;goto B544ff9;
case 0x544ffb:c.instructions+=1;goto B544ffb;
default:missing_instruction(c.pc);}
B544001:L544001:{c.instructions+=2;NFSU2_TR(0x544001);
__builtin_memmove((R+4),(R+28),4);
}
B544003:{NFSU2_TR(0x544003);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544008ull));
TAIL_STATIC(0x495910u,495);
}
B544008:L544008:{c.instructions+=4;NFSU2_TR(0x544008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54400b:{NFSU2_TR(0x54400b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54400c:{NFSU2_TR(0x54400c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54400d:{NFSU2_TR(0x54400d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544012ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B544012:L544012:{c.instructions+=5;NFSU2_TR(0x544012);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B544015:{NFSU2_TR(0x544015);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544016:{NFSU2_TR(0x544016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544017:{NFSU2_TR(0x544017);
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
B54401a:{NFSU2_TR(0x54401a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54401d:L54401d:{c.instructions+=2;NFSU2_TR(0x54401d);
__builtin_memmove((R+4),(R+24),4);
}
B54401f:{NFSU2_TR(0x54401f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544024ull));
TAIL_STATIC(0x538c00u,538);
}
B544024:L544024:{c.instructions+=4;NFSU2_TR(0x544024);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544025:{NFSU2_TR(0x544025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544026:{NFSU2_TR(0x544026);
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
B544029:{NFSU2_TR(0x544029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54402c:L54402c:{c.instructions+=4;NFSU2_TR(0x54402c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54402f:{NFSU2_TR(0x54402f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B544032:{NFSU2_TR(0x544032);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544034:{NFSU2_TR(0x544034);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B544036:L544036:{c.instructions+=3;NFSU2_TR(0x544036);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544039:{NFSU2_TR(0x544039);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54403b:{NFSU2_TR(0x54403b);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B54403d:L54403d:{c.instructions+=3;NFSU2_TR(0x54403d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544040:{NFSU2_TR(0x544040);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544042:{NFSU2_TR(0x544042);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B544048:L544048:{c.instructions+=3;NFSU2_TR(0x544048);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B54404b:{NFSU2_TR(0x54404b);
__builtin_memmove((R+4),(R+28),4);
}
B54404d:{NFSU2_TR(0x54404d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544052ull));
TAIL_STATIC(0x5276d0u,527);
}
B544052:L544052:{c.instructions+=2;NFSU2_TR(0x544052);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544054:{NFSU2_TR(0x544054);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54405e;}}
}
B544056:L544056:{c.instructions+=1;NFSU2_TR(0x544056);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54405e:L54405e:{c.instructions+=2;NFSU2_TR(0x54405e);
__builtin_memmove((R+4),(R+28),4);
}
B544060:{NFSU2_TR(0x544060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544065ull));
TAIL_STATIC(0x527750u,527);
}
B544065:L544065:{c.instructions+=1;NFSU2_TR(0x544065);
TAIL_STATIC(0x543f76u,543);
}
B54406a:L54406a:{c.instructions+=4;NFSU2_TR(0x54406a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54406d:{NFSU2_TR(0x54406d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B544070:{NFSU2_TR(0x544070);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544072:{NFSU2_TR(0x544072);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B544078:L544078:{c.instructions+=3;NFSU2_TR(0x544078);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54407b:{NFSU2_TR(0x54407b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54407d:{NFSU2_TR(0x54407d);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B544083:L544083:{c.instructions+=3;NFSU2_TR(0x544083);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544086:{NFSU2_TR(0x544086);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544088:{NFSU2_TR(0x544088);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B54408e:L54408e:{c.instructions+=3;NFSU2_TR(0x54408e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B544091:{NFSU2_TR(0x544091);
__builtin_memmove((R+4),(R+28),4);
}
B544093:{NFSU2_TR(0x544093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544098ull));
TAIL_STATIC(0x527700u,527);
}
B544098:L544098:{c.instructions+=2;NFSU2_TR(0x544098);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54409a:{NFSU2_TR(0x54409a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x543f6fu,543);}
}
B5440a0:L5440a0:{c.instructions+=2;NFSU2_TR(0x5440a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5440a8:{NFSU2_TR(0x5440a8);
TAIL_STATIC(0x543f6fu,543);
}
B5440ad:L5440ad:{c.instructions+=2;NFSU2_TR(0x5440ad);
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
B5440b2:{NFSU2_TR(0x5440b2);
if(r1(R+518)){{goto L544145;}}
}
B5440b8:L5440b8:{c.instructions+=2;NFSU2_TR(0x5440b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd9ca113dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5440bd:{NFSU2_TR(0x5440bd);
if(r1(R+518)){{goto L544128;}}
}
B5440bf:L5440bf:{c.instructions+=2;NFSU2_TR(0x5440bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5440c4:{NFSU2_TR(0x5440c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x543fbdu,543);}
}
B5440ca:L5440ca:{c.instructions+=3;NFSU2_TR(0x5440ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5440cb:{NFSU2_TR(0x5440cb);
u8 U[4];
w4(U+0,u32(0x79c158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5440d0:{NFSU2_TR(0x5440d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5440d5ull));
TAIL_STATIC(0x50d510u,50d);
}
B5440d5:L5440d5:{c.instructions+=3;NFSU2_TR(0x5440d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5440d8:{NFSU2_TR(0x5440d8);
__builtin_memmove((R+4),(R+24),4);
}
B5440da:{NFSU2_TR(0x5440da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5440dfull));
TAIL_STATIC(0x52fba0u,52f);
}
B5440df:L5440df:{c.instructions+=4;NFSU2_TR(0x5440df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5440e2:{NFSU2_TR(0x5440e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5440e5:{NFSU2_TR(0x5440e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5440e7:{NFSU2_TR(0x5440e7);
if(r1(R+518)){TAIL_STATIC(0x543fbdu,543);}
}
B5440ed:L5440ed:{c.instructions+=4;NFSU2_TR(0x5440ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5440f0:{NFSU2_TR(0x5440f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5440f3:{NFSU2_TR(0x5440f3);
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
B5440f5:{NFSU2_TR(0x5440f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x543fbdu,543);}
}
B5440fb:L5440fb:{c.instructions+=11;NFSU2_TR(0x5440fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544101:{NFSU2_TR(0x544101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544104:{NFSU2_TR(0x544104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544105:{NFSU2_TR(0x544105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54410b:{NFSU2_TR(0x54410b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54410c:{NFSU2_TR(0x54410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544112:{NFSU2_TR(0x544112);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544113:{NFSU2_TR(0x544113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544119:{NFSU2_TR(0x544119);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54411c:{NFSU2_TR(0x54411c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54411d:{NFSU2_TR(0x54411d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544120ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544120:L544120:{c.instructions+=4;NFSU2_TR(0x544120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544121:{NFSU2_TR(0x544121);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544122:{NFSU2_TR(0x544122);
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
B544125:{NFSU2_TR(0x544125);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544128:L544128:{c.instructions+=3;NFSU2_TR(0x544128);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544129:{NFSU2_TR(0x544129);
u8 U[4];
w4(U+0,u32(0x79c118ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54412e:{NFSU2_TR(0x54412e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544133ull));
TAIL_STATIC(0x50d510u,50d);
}
B544133:L544133:{c.instructions+=3;NFSU2_TR(0x544133);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B544136:{NFSU2_TR(0x544136);
__builtin_memmove((R+4),(R+24),4);
}
B544138:{NFSU2_TR(0x544138);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54413dull));
TAIL_STATIC(0x52fba0u,52f);
}
B54413d:L54413d:{c.instructions+=4;NFSU2_TR(0x54413d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54413e:{NFSU2_TR(0x54413e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54413f:{NFSU2_TR(0x54413f);
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
B544142:{NFSU2_TR(0x544142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544145:L544145:{c.instructions+=3;NFSU2_TR(0x544145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544148:{NFSU2_TR(0x544148);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54414b:{NFSU2_TR(0x54414b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54414eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54414e:L54414e:{c.instructions+=4;NFSU2_TR(0x54414e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54414f:{NFSU2_TR(0x54414f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544150:{NFSU2_TR(0x544150);
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
B544153:{NFSU2_TR(0x544153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544160:L544160:{c.instructions+=15;NFSU2_TR(0x544160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B544163:{NFSU2_TR(0x544163);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B544169:{NFSU2_TR(0x544169);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54416a:{NFSU2_TR(0x54416a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54416b:{NFSU2_TR(0x54416b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54416c:{NFSU2_TR(0x54416c);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B544172:{NFSU2_TR(0x544172);
__builtin_memmove((R+12),(R+4),4);
}
B544174:{NFSU2_TR(0x544174);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544175:{NFSU2_TR(0x544175);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544179:{NFSU2_TR(0x544179);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54417d:{NFSU2_TR(0x54417d);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B544183:{NFSU2_TR(0x544183);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B544185:{NFSU2_TR(0x544185);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B544188:{NFSU2_TR(0x544188);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54418e:{NFSU2_TR(0x54418e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B544192:L544192:{c.instructions+=3;NFSU2_TR(0x544192);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B544194:{NFSU2_TR(0x544194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544196:{NFSU2_TR(0x544196);
if(r1(R+518)){{goto L5441e6;}}
}
B544198:L544198:{c.instructions+=4;NFSU2_TR(0x544198);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54419c:{NFSU2_TR(0x54419c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54419d:{NFSU2_TR(0x54419d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54419e:{NFSU2_TR(0x54419e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5441a3ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B5441a3:L5441a3:{c.instructions+=3;NFSU2_TR(0x5441a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5441a6:{NFSU2_TR(0x5441a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5441a8:{NFSU2_TR(0x5441a8);
if(r1(R+518)){{goto L5441e6;}}
}
B5441aa:L5441aa:{c.instructions+=5;NFSU2_TR(0x5441aa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5441ae:{NFSU2_TR(0x5441ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5441b2:{NFSU2_TR(0x5441b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5441b4:{NFSU2_TR(0x5441b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5441b7:{NFSU2_TR(0x5441b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5441e6;}}
}
B5441b9:L5441b9:{c.instructions+=5;NFSU2_TR(0x5441b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5441bd:{NFSU2_TR(0x5441bd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5441c1:{NFSU2_TR(0x5441c1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5441c3:{NFSU2_TR(0x5441c3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5441c6:{NFSU2_TR(0x5441c6);
if(r1(R+514)){{goto L5441e6;}}
}
B5441c8:L5441c8:{c.instructions+=5;NFSU2_TR(0x5441c8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5441cc:{NFSU2_TR(0x5441cc);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5441d0:{NFSU2_TR(0x5441d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5441d2:{NFSU2_TR(0x5441d2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5441d5:{NFSU2_TR(0x5441d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5441e6;}}
}
B5441d7:L5441d7:{c.instructions+=5;NFSU2_TR(0x5441d7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5441db:{NFSU2_TR(0x5441db);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5441df:{NFSU2_TR(0x5441df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5441e1:{NFSU2_TR(0x5441e1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5441e4:{NFSU2_TR(0x5441e4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5441f4;}}
}
B5441e6:L5441e6:{c.instructions+=4;NFSU2_TR(0x5441e6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5441e7:{NFSU2_TR(0x5441e7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5441ea:{NFSU2_TR(0x5441ea);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5441ed:{NFSU2_TR(0x5441ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544192u);}goto L544192;}}
}
B5441ef:L5441ef:{c.instructions+=1;NFSU2_TR(0x5441ef);
{goto L5442ca;}
}
B5441f4:L5441f4:{c.instructions+=4;NFSU2_TR(0x5441f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5441f7:{NFSU2_TR(0x5441f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5441fb:{NFSU2_TR(0x5441fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5441fd:{NFSU2_TR(0x5441fd);
if(r1(R+518)){{goto L544263;}}
}
B5441ff:L5441ff:{c.instructions+=4;NFSU2_TR(0x5441ff);
w4(R+8,u32(0x78f21cull));
}
B544204:{NFSU2_TR(0x544204);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B544207:{NFSU2_TR(0x544207);
w1(R+0,u8(0x55ull));
}
B544209:{NFSU2_TR(0x544209);
__builtin_memmove((R+16),(R+16),4);
}
B544210:L544210:{c.instructions+=3;NFSU2_TR(0x544210);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B544213:{NFSU2_TR(0x544213);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B544215:{NFSU2_TR(0x544215);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54421d;}}
}
B544217:L544217:{c.instructions+=2;NFSU2_TR(0x544217);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544219:{NFSU2_TR(0x544219);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54421d;}}
}
B54421b:L54421b:{c.instructions+=1;NFSU2_TR(0x54421b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54421d:L54421d:{c.instructions+=6;NFSU2_TR(0x54421d);
w4(R+0,u32(r1(R+0)));
}
B544220:{NFSU2_TR(0x544220);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B544222:{NFSU2_TR(0x544222);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544225:{NFSU2_TR(0x544225);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B544226:{NFSU2_TR(0x544226);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544228:{NFSU2_TR(0x544228);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544210u);}goto L544210;}}
}
B54422a:L54422a:{c.instructions+=3;NFSU2_TR(0x54422a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54422d:{NFSU2_TR(0x54422d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54422f:{NFSU2_TR(0x54422f);
if(r1(R+518)){{goto L544263;}}
}
B544231:L544231:{c.instructions+=2;NFSU2_TR(0x544231);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544234:{NFSU2_TR(0x544234);
if(r1(R+518)){{goto L54423f;}}
}
B544236:L544236:{c.instructions+=3;NFSU2_TR(0x544236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B544239:{NFSU2_TR(0x544239);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54423b:{NFSU2_TR(0x54423b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544231u);}goto L544231;}}
}
B54423d:L54423d:{c.instructions+=1;NFSU2_TR(0x54423d);
{goto L544263;}
}
B54423f:L54423f:{c.instructions+=2;NFSU2_TR(0x54423f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544241:{NFSU2_TR(0x544241);
if(r1(R+518)){{goto L544263;}}
}
B544243:L544243:{c.instructions+=2;NFSU2_TR(0x544243);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544246:{NFSU2_TR(0x544246);
if(r1(R+518)){{goto L54425c;}}
}
B544248:L544248:{c.instructions+=3;NFSU2_TR(0x544248);
__builtin_memmove((R+4),(R+28),4);
}
B54424a:{NFSU2_TR(0x54424a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54424d:{NFSU2_TR(0x54424d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544252ull));
TAIL_STATIC(0x517720u,517);
}
B544252:L544252:{c.instructions+=2;NFSU2_TR(0x544252);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544255:{NFSU2_TR(0x544255);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54425c:L54425c:{c.instructions+=1;NFSU2_TR(0x54425c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544263:L544263:{c.instructions+=4;NFSU2_TR(0x544263);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544266:{NFSU2_TR(0x544266);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B54426a:{NFSU2_TR(0x54426a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54426c:{NFSU2_TR(0x54426c);
if(r1(R+518)){{goto L5442ca;}}
}
B54426e:L54426e:{c.instructions+=3;NFSU2_TR(0x54426e);
w4(R+8,u32(0x78f228ull));
}
B544273:{NFSU2_TR(0x544273);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B544276:{NFSU2_TR(0x544276);
w1(R+0,u8(0x48ull));
}
B544278:L544278:{c.instructions+=3;NFSU2_TR(0x544278);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B54427b:{NFSU2_TR(0x54427b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54427d:{NFSU2_TR(0x54427d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L544285;}}
}
B54427f:L54427f:{c.instructions+=2;NFSU2_TR(0x54427f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544281:{NFSU2_TR(0x544281);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L544285;}}
}
B544283:L544283:{c.instructions+=1;NFSU2_TR(0x544283);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B544285:L544285:{c.instructions+=6;NFSU2_TR(0x544285);
w4(R+0,u32(r1(R+0)));
}
B544288:{NFSU2_TR(0x544288);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B54428a:{NFSU2_TR(0x54428a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54428d:{NFSU2_TR(0x54428d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B54428e:{NFSU2_TR(0x54428e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544290:{NFSU2_TR(0x544290);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544278u);}goto L544278;}}
}
B544292:L544292:{c.instructions+=4;NFSU2_TR(0x544292);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B544295:{NFSU2_TR(0x544295);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B544297:{NFSU2_TR(0x544297);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544299:{NFSU2_TR(0x544299);
if(r1(R+518)){{goto L5442ca;}}
}
B54429b:L54429b:{c.instructions+=1;NFSU2_TR(0x54429b);
{goto L5442a0;}
}
B5442a0:L5442a0:{c.instructions+=2;NFSU2_TR(0x5442a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5442a3:{NFSU2_TR(0x5442a3);
if(r1(R+518)){{goto L5442ae;}}
}
B5442a5:L5442a5:{c.instructions+=3;NFSU2_TR(0x5442a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5442a8:{NFSU2_TR(0x5442a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5442aa:{NFSU2_TR(0x5442aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5442a0u);}goto L5442a0;}}
}
B5442ac:L5442ac:{c.instructions+=1;NFSU2_TR(0x5442ac);
{goto L5442ca;}
}
B5442ae:L5442ae:{c.instructions+=2;NFSU2_TR(0x5442ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5442b0:{NFSU2_TR(0x5442b0);
if(r1(R+518)){{goto L5442ca;}}
}
B5442b2:L5442b2:{c.instructions+=2;NFSU2_TR(0x5442b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5442b5:{NFSU2_TR(0x5442b5);
if(r1(R+518)){{goto L5442c7;}}
}
B5442b7:L5442b7:{c.instructions+=3;NFSU2_TR(0x5442b7);
__builtin_memmove((R+4),(R+28),4);
}
B5442b9:{NFSU2_TR(0x5442b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5442bc:{NFSU2_TR(0x5442bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5442c1ull));
TAIL_STATIC(0x517720u,517);
}
B5442c1:L5442c1:{c.instructions+=2;NFSU2_TR(0x5442c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5442c4:{NFSU2_TR(0x5442c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5442c7:L5442c7:{c.instructions+=1;NFSU2_TR(0x5442c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5442ca:L5442ca:{c.instructions+=3;NFSU2_TR(0x5442ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5442ce:{NFSU2_TR(0x5442ce);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5442d0:{NFSU2_TR(0x5442d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5442d3:L5442d3:{c.instructions+=11;NFSU2_TR(0x5442d3);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5442d9:{NFSU2_TR(0x5442d9);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B5442de:{NFSU2_TR(0x5442de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5442e0:{NFSU2_TR(0x5442e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5442e2:{NFSU2_TR(0x5442e2);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5442e8:{NFSU2_TR(0x5442e8);
w4(R+0,u32(m1(0x8763f2)));
}
B5442ef:{NFSU2_TR(0x5442ef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5442f3:{NFSU2_TR(0x5442f3);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5442f9:{NFSU2_TR(0x5442f9);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5442ff:{NFSU2_TR(0x5442ff);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B544303:{NFSU2_TR(0x544303);
if(r1(R+518)){{goto L54430c;}}
}
B544305:L544305:{c.instructions+=1;NFSU2_TR(0x544305);
w4(R+0,u32(m1(0x8763f5)));
}
B54430c:L54430c:{c.instructions+=2;NFSU2_TR(0x54430c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54430e:{NFSU2_TR(0x54430e);
if(r1(R+518)){{goto L544362;}}
}
B544310:L544310:{c.instructions+=2;NFSU2_TR(0x544310);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544312:{NFSU2_TR(0x544312);
if(r1(R+518)){{goto L544362;}}
}
B544314:L544314:{c.instructions+=4;NFSU2_TR(0x544314);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B544318:{NFSU2_TR(0x544318);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544319:{NFSU2_TR(0x544319);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54431a:{NFSU2_TR(0x54431a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54431full));
TAIL_STATIC(0x51d9f0u,51d);
}
B54431f:L54431f:{c.instructions+=3;NFSU2_TR(0x54431f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B544322:{NFSU2_TR(0x544322);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544324:{NFSU2_TR(0x544324);
if(r1(R+518)){{goto L544362;}}
}
B544326:L544326:{c.instructions+=5;NFSU2_TR(0x544326);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54432a:{NFSU2_TR(0x54432a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54432e:{NFSU2_TR(0x54432e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B544330:{NFSU2_TR(0x544330);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544333:{NFSU2_TR(0x544333);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544362;}}
}
B544335:L544335:{c.instructions+=5;NFSU2_TR(0x544335);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B544339:{NFSU2_TR(0x544339);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54433d:{NFSU2_TR(0x54433d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54433f:{NFSU2_TR(0x54433f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B544342:{NFSU2_TR(0x544342);
if(r1(R+514)){{goto L544362;}}
}
B544344:L544344:{c.instructions+=5;NFSU2_TR(0x544344);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B544348:{NFSU2_TR(0x544348);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54434c:{NFSU2_TR(0x54434c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54434e:{NFSU2_TR(0x54434e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544351:{NFSU2_TR(0x544351);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544362;}}
}
B544353:L544353:{c.instructions+=5;NFSU2_TR(0x544353);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B544357:{NFSU2_TR(0x544357);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54435b:{NFSU2_TR(0x54435b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54435d:{NFSU2_TR(0x54435d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B544360:{NFSU2_TR(0x544360);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L544377;}}
}
B544362:L544362:{c.instructions+=4;NFSU2_TR(0x544362);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B544363:{NFSU2_TR(0x544363);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B544366:{NFSU2_TR(0x544366);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B544369:{NFSU2_TR(0x544369);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5442d3u);}goto L5442d3;}}
}
B54436f:L54436f:{c.instructions+=6;NFSU2_TR(0x54436f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544370:{NFSU2_TR(0x544370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544371:{NFSU2_TR(0x544371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544372:{NFSU2_TR(0x544372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544373:{NFSU2_TR(0x544373);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B544376:{NFSU2_TR(0x544376);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544377:L544377:{c.instructions+=8;NFSU2_TR(0x544377);
__builtin_memmove((R+0),(R+12),4);
}
B544379:{NFSU2_TR(0x544379);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B54437a:{NFSU2_TR(0x54437a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B54437c:{NFSU2_TR(0x54437c);
__builtin_memmove((R+20),(R+0),4);
}
B54437e:{NFSU2_TR(0x54437e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544381:{NFSU2_TR(0x544381);
w4(R+20,sar<u32>(r4(R+20),u64(u32(0x1ull))));
}
B544383:{NFSU2_TR(0x544383);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544385:{NFSU2_TR(0x544385);
if(r1(R+518)){{goto L54445d;}}
}
B54438b:L54438b:{c.instructions+=4;NFSU2_TR(0x54438b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54438f:{NFSU2_TR(0x54438f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B544393:{NFSU2_TR(0x544393);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544395:{NFSU2_TR(0x544395);
if(r1(R+518)){{goto L5443f4;}}
}
B544397:L544397:{c.instructions+=3;NFSU2_TR(0x544397);
w4(R+8,u32(0x78f21cull));
}
B54439c:{NFSU2_TR(0x54439c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B54439f:{NFSU2_TR(0x54439f);
w1(R+0,u8(0x55ull));
}
B5443a1:L5443a1:{c.instructions+=3;NFSU2_TR(0x5443a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5443a4:{NFSU2_TR(0x5443a4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5443a6:{NFSU2_TR(0x5443a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5443ae;}}
}
B5443a8:L5443a8:{c.instructions+=2;NFSU2_TR(0x5443a8);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5443aa:{NFSU2_TR(0x5443aa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5443ae;}}
}
B5443ac:L5443ac:{c.instructions+=1;NFSU2_TR(0x5443ac);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B5443ae:L5443ae:{c.instructions+=6;NFSU2_TR(0x5443ae);
w4(R+0,u32(r1(R+0)));
}
B5443b1:{NFSU2_TR(0x5443b1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5443b3:{NFSU2_TR(0x5443b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5443b6:{NFSU2_TR(0x5443b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5443b7:{NFSU2_TR(0x5443b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5443b9:{NFSU2_TR(0x5443b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5443a1u);}goto L5443a1;}}
}
B5443bb:L5443bb:{c.instructions+=3;NFSU2_TR(0x5443bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5443be:{NFSU2_TR(0x5443be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5443c0:{NFSU2_TR(0x5443c0);
if(r1(R+518)){{goto L5443f4;}}
}
B5443c2:L5443c2:{c.instructions+=2;NFSU2_TR(0x5443c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5443c5:{NFSU2_TR(0x5443c5);
if(r1(R+518)){{goto L5443d0;}}
}
B5443c7:L5443c7:{c.instructions+=3;NFSU2_TR(0x5443c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5443ca:{NFSU2_TR(0x5443ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5443cc:{NFSU2_TR(0x5443cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5443c2u);}goto L5443c2;}}
}
B5443ce:L5443ce:{c.instructions+=1;NFSU2_TR(0x5443ce);
{goto L5443f4;}
}
B5443d0:L5443d0:{c.instructions+=2;NFSU2_TR(0x5443d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5443d2:{NFSU2_TR(0x5443d2);
if(r1(R+518)){{goto L5443f4;}}
}
B5443d4:L5443d4:{c.instructions+=2;NFSU2_TR(0x5443d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5443d7:{NFSU2_TR(0x5443d7);
if(r1(R+518)){{goto L5443ed;}}
}
B5443d9:L5443d9:{c.instructions+=3;NFSU2_TR(0x5443d9);
__builtin_memmove((R+4),(R+28),4);
}
B5443db:{NFSU2_TR(0x5443db);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5443de:{NFSU2_TR(0x5443de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5443e3ull));
TAIL_STATIC(0x517720u,517);
}
B5443e3:L5443e3:{c.instructions+=2;NFSU2_TR(0x5443e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5443e6:{NFSU2_TR(0x5443e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5443ed:L5443ed:{c.instructions+=1;NFSU2_TR(0x5443ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5443f4:L5443f4:{c.instructions+=5;NFSU2_TR(0x5443f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5443f8:{NFSU2_TR(0x5443f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5443fb:{NFSU2_TR(0x5443fb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B5443ff:{NFSU2_TR(0x5443ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544401:{NFSU2_TR(0x544401);
if(r1(R+518)){{goto L54445d;}}
}
B544403:L544403:{c.instructions+=4;NFSU2_TR(0x544403);
w4(R+8,u32(0x78f228ull));
}
B544408:{NFSU2_TR(0x544408);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B54440b:{NFSU2_TR(0x54440b);
w1(R+0,u8(0x48ull));
}
B54440d:{NFSU2_TR(0x54440d);
__builtin_memmove((R+4),(R+4),4);
}
B544410:L544410:{c.instructions+=3;NFSU2_TR(0x544410);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B544413:{NFSU2_TR(0x544413);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B544415:{NFSU2_TR(0x544415);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L54441d;}}
}
B544417:L544417:{c.instructions+=2;NFSU2_TR(0x544417);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544419:{NFSU2_TR(0x544419);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54441d;}}
}
B54441b:L54441b:{c.instructions+=1;NFSU2_TR(0x54441b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B54441d:L54441d:{c.instructions+=6;NFSU2_TR(0x54441d);
w4(R+0,u32(r1(R+0)));
}
B544420:{NFSU2_TR(0x544420);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B544422:{NFSU2_TR(0x544422);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544425:{NFSU2_TR(0x544425);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B544426:{NFSU2_TR(0x544426);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544428:{NFSU2_TR(0x544428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544410u);}goto L544410;}}
}
B54442a:L54442a:{c.instructions+=4;NFSU2_TR(0x54442a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54442d:{NFSU2_TR(0x54442d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B54442f:{NFSU2_TR(0x54442f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544431:{NFSU2_TR(0x544431);
if(r1(R+518)){{goto L54445d;}}
}
B544433:L544433:{c.instructions+=2;NFSU2_TR(0x544433);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544436:{NFSU2_TR(0x544436);
if(r1(R+518)){{goto L544441;}}
}
B544438:L544438:{c.instructions+=3;NFSU2_TR(0x544438);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54443b:{NFSU2_TR(0x54443b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54443d:{NFSU2_TR(0x54443d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544433u);}goto L544433;}}
}
B54443f:L54443f:{c.instructions+=1;NFSU2_TR(0x54443f);
{goto L54445d;}
}
B544441:L544441:{c.instructions+=2;NFSU2_TR(0x544441);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544443:{NFSU2_TR(0x544443);
if(r1(R+518)){{goto L54445d;}}
}
B544445:L544445:{c.instructions+=2;NFSU2_TR(0x544445);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544448:{NFSU2_TR(0x544448);
if(r1(R+518)){{goto L54445a;}}
}
B54444a:L54444a:{c.instructions+=3;NFSU2_TR(0x54444a);
__builtin_memmove((R+4),(R+28),4);
}
B54444c:{NFSU2_TR(0x54444c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54444f:{NFSU2_TR(0x54444f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544454ull));
TAIL_STATIC(0x517720u,517);
}
B544454:L544454:{c.instructions+=2;NFSU2_TR(0x544454);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544457:{NFSU2_TR(0x544457);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54445a:L54445a:{c.instructions+=1;NFSU2_TR(0x54445a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54445d:L54445d:{c.instructions+=3;NFSU2_TR(0x54445d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544460:{NFSU2_TR(0x544460);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544464:{NFSU2_TR(0x544464);
if(r1(R+518)){{goto L544475;}}
}
B544466:L544466:{c.instructions+=2;NFSU2_TR(0x544466);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544468:{NFSU2_TR(0x544468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54446dull));
TAIL_STATIC(0x538e70u,538);
}
B54446d:L54446d:{c.instructions+=6;NFSU2_TR(0x54446d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54446e:{NFSU2_TR(0x54446e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54446f:{NFSU2_TR(0x54446f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544470:{NFSU2_TR(0x544470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544471:{NFSU2_TR(0x544471);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B544474:{NFSU2_TR(0x544474);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544475:L544475:{c.instructions+=2;NFSU2_TR(0x544475);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544477:{NFSU2_TR(0x544477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54447cull));
TAIL_STATIC(0x538e70u,538);
}
B54447c:L54447c:{c.instructions+=6;NFSU2_TR(0x54447c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54447d:{NFSU2_TR(0x54447d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54447e:{NFSU2_TR(0x54447e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54447f:{NFSU2_TR(0x54447f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544480:{NFSU2_TR(0x544480);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B544483:{NFSU2_TR(0x544483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544490:L544490:{c.instructions+=6;NFSU2_TR(0x544490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544491:{NFSU2_TR(0x544491);
__builtin_memmove((R+24),(R+4),4);
}
B544493:{NFSU2_TR(0x544493);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544494:{NFSU2_TR(0x544494);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+28),(U+0),4);
}
B544497:{NFSU2_TR(0x544497);
__builtin_memmove((R+4),(R+28),4);
}
B544499:{NFSU2_TR(0x544499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54449eull));
TAIL_STATIC(0x538130u,538);
}
B54449e:L54449e:{c.instructions+=4;NFSU2_TR(0x54449e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5444a4:{NFSU2_TR(0x5444a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5444a7:{NFSU2_TR(0x5444a7);
__builtin_memmove((R+4),(R+24),4);
}
B5444a9:{NFSU2_TR(0x5444a9);
if(r1(R+518)){{goto L54450b;}}
}
B5444ab:L5444ab:{c.instructions+=2;NFSU2_TR(0x5444ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5444ae:{NFSU2_TR(0x5444ae);
if(r1(R+518)){{goto L5444ce;}}
}
B5444b0:L5444b0:{c.instructions+=3;NFSU2_TR(0x5444b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5444b3:{NFSU2_TR(0x5444b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5444b4:{NFSU2_TR(0x5444b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5444b9ull));
TAIL_STATIC(0x520020u,520);
}
B5444b9:L5444b9:{c.instructions+=7;NFSU2_TR(0x5444b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5444bf:{NFSU2_TR(0x5444bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5444c0:{NFSU2_TR(0x5444c0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5444c1:{NFSU2_TR(0x5444c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5444c2:{NFSU2_TR(0x5444c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5444c4:{NFSU2_TR(0x5444c4);
__builtin_memmove((R+4),(R+28),4);
}
B5444c6:{NFSU2_TR(0x5444c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5444cbull));
TAIL_STATIC(0x538080u,538);
}
B5444cb:L5444cb:{c.instructions+=3;NFSU2_TR(0x5444cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5444cc:{NFSU2_TR(0x5444cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5444cd:{NFSU2_TR(0x5444cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5444ce:L5444ce:{c.instructions+=4;NFSU2_TR(0x5444ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5444d4:{NFSU2_TR(0x5444d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5444d6:{NFSU2_TR(0x5444d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5444d8:{NFSU2_TR(0x5444d8);
if(r1(R+518)){{goto L5444e8;}}
}
B5444da:L5444da:{c.instructions+=1;NFSU2_TR(0x5444da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5444dfull));
TAIL_STATIC(0x539370u,539);
}
B5444df:L5444df:{c.instructions+=4;NFSU2_TR(0x5444df);
__builtin_memmove((R+4),(R+28),4);
}
B5444e1:{NFSU2_TR(0x5444e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5444e2:{NFSU2_TR(0x5444e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5444e3:{NFSU2_TR(0x5444e3);
TAIL_STATIC(0x495850u,495);
}
B5444e8:L5444e8:{c.instructions+=1;NFSU2_TR(0x5444e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5444edull));
TAIL_STATIC(0x5390e0u,539);
}
B5444ed:L5444ed:{c.instructions+=4;NFSU2_TR(0x5444ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5444f0:{NFSU2_TR(0x5444f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5444f3:{NFSU2_TR(0x5444f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5444f5:{NFSU2_TR(0x5444f5);
if(r1(R+518)){{goto L5444fc;}}
}
B5444f7:L5444f7:{c.instructions+=2;NFSU2_TR(0x5444f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5444fa:{NFSU2_TR(0x5444fa);
{goto L5444fe;}
}
B5444fc:L5444fc:{c.instructions+=1;NFSU2_TR(0x5444fc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5444fe:L5444fe:{c.instructions+=2;NFSU2_TR(0x5444fe);
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
B544500:{NFSU2_TR(0x544500);
if(r1(R+518)){{goto L54453f;}}
}
B544502:L544502:{c.instructions+=4;NFSU2_TR(0x544502);
__builtin_memmove((R+4),(R+28),4);
}
B544504:{NFSU2_TR(0x544504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544505:{NFSU2_TR(0x544505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544506:{NFSU2_TR(0x544506);
TAIL_STATIC(0x495850u,495);
}
B54450b:L54450b:{c.instructions+=4;NFSU2_TR(0x54450b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544511:{NFSU2_TR(0x544511);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544513:{NFSU2_TR(0x544513);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544515:{NFSU2_TR(0x544515);
if(r1(R+518)){{goto L544525;}}
}
B544517:L544517:{c.instructions+=1;NFSU2_TR(0x544517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54451cull));
TAIL_STATIC(0x539370u,539);
}
B54451c:L54451c:{c.instructions+=4;NFSU2_TR(0x54451c);
__builtin_memmove((R+4),(R+28),4);
}
B54451e:{NFSU2_TR(0x54451e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54451f:{NFSU2_TR(0x54451f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544520:{NFSU2_TR(0x544520);
TAIL_STATIC(0x495810u,495);
}
B544525:L544525:{c.instructions+=1;NFSU2_TR(0x544525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54452aull));
TAIL_STATIC(0x5390e0u,539);
}
B54452a:L54452a:{c.instructions+=4;NFSU2_TR(0x54452a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54452d:{NFSU2_TR(0x54452d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B544530:{NFSU2_TR(0x544530);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544532:{NFSU2_TR(0x544532);
if(r1(R+518)){{goto L544539;}}
}
B544534:L544534:{c.instructions+=2;NFSU2_TR(0x544534);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B544537:{NFSU2_TR(0x544537);
{goto L54453b;}
}
B544539:L544539:{c.instructions+=1;NFSU2_TR(0x544539);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54453b:L54453b:{c.instructions+=2;NFSU2_TR(0x54453b);
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
B54453d:{NFSU2_TR(0x54453d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54451cu);}goto L54451c;}}
}
B54453f:L54453f:{c.instructions+=3;NFSU2_TR(0x54453f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544540:{NFSU2_TR(0x544540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544541:{NFSU2_TR(0x544541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544545:L544545:{c.instructions+=20;NFSU2_TR(0x544545);
}
B544546:{NFSU2_TR(0x544546);
}
B544547:{NFSU2_TR(0x544547);
}
B544548:{NFSU2_TR(0x544548);
}
B544549:{NFSU2_TR(0x544549);
}
B54454a:{NFSU2_TR(0x54454a);
}
B54454b:{NFSU2_TR(0x54454b);
}
B54454c:{NFSU2_TR(0x54454c);
}
B54454d:{NFSU2_TR(0x54454d);
}
B54454e:{NFSU2_TR(0x54454e);
}
B54454f:{NFSU2_TR(0x54454f);
}
B544550:{NFSU2_TR(0x544550);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544554:{NFSU2_TR(0x544554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B544557:{NFSU2_TR(0x544557);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544558:{NFSU2_TR(0x544558);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54455d:{NFSU2_TR(0x54455d);
__builtin_memmove((R+24),(R+4),4);
}
B54455f:{NFSU2_TR(0x54455f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544560:{NFSU2_TR(0x544560);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B544564:{NFSU2_TR(0x544564);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544565:{NFSU2_TR(0x544565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54456aull));
TAIL_STATIC(0x43dda0u,43d);
}
B54456a:L54456a:{c.instructions+=8;NFSU2_TR(0x54456a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544570:{NFSU2_TR(0x544570);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544571:{NFSU2_TR(0x544571);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B544575:{NFSU2_TR(0x544575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544576:{NFSU2_TR(0x544576);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54457a:{NFSU2_TR(0x54457a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54457c:{NFSU2_TR(0x54457c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54457d:{NFSU2_TR(0x54457d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544582ull));
TAIL_STATIC(0x50c960u,50c);
}
B544582:L544582:{c.instructions+=5;NFSU2_TR(0x544582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B544585:{NFSU2_TR(0x544585);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B544589:{NFSU2_TR(0x544589);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54458a:{NFSU2_TR(0x54458a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54458b:{NFSU2_TR(0x54458b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544590ull));
TAIL_STATIC(0x4953c0u,495);
}
B544590:L544590:{c.instructions+=4;NFSU2_TR(0x544590);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B544593:{NFSU2_TR(0x544593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544594:{NFSU2_TR(0x544594);
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
B544597:{NFSU2_TR(0x544597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5445a0:L5445a0:{c.instructions+=9;NFSU2_TR(0x5445a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5445a4:{NFSU2_TR(0x5445a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5445a7:{NFSU2_TR(0x5445a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445a8:{NFSU2_TR(0x5445a8);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445ad:{NFSU2_TR(0x5445ad);
__builtin_memmove((R+24),(R+4),4);
}
B5445af:{NFSU2_TR(0x5445af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445b0:{NFSU2_TR(0x5445b0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5445b4:{NFSU2_TR(0x5445b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445b5:{NFSU2_TR(0x5445b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5445baull));
TAIL_STATIC(0x43dda0u,43d);
}
B5445ba:L5445ba:{c.instructions+=8;NFSU2_TR(0x5445ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5445c0:{NFSU2_TR(0x5445c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445c1:{NFSU2_TR(0x5445c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5445c5:{NFSU2_TR(0x5445c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445c6:{NFSU2_TR(0x5445c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5445ca:{NFSU2_TR(0x5445ca);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445cc:{NFSU2_TR(0x5445cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445cd:{NFSU2_TR(0x5445cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5445d2ull));
TAIL_STATIC(0x50c960u,50c);
}
B5445d2:L5445d2:{c.instructions+=5;NFSU2_TR(0x5445d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5445d5:{NFSU2_TR(0x5445d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5445d9:{NFSU2_TR(0x5445d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445da:{NFSU2_TR(0x5445da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445db:{NFSU2_TR(0x5445db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5445e0ull));
TAIL_STATIC(0x4953e0u,495);
}
B5445e0:L5445e0:{c.instructions+=4;NFSU2_TR(0x5445e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5445e3:{NFSU2_TR(0x5445e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5445e4:{NFSU2_TR(0x5445e4);
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
B5445e7:{NFSU2_TR(0x5445e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5445f0:L5445f0:{c.instructions+=10;NFSU2_TR(0x5445f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5445f4:{NFSU2_TR(0x5445f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5445f7:{NFSU2_TR(0x5445f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445f8:{NFSU2_TR(0x5445f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445f9:{NFSU2_TR(0x5445f9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5445fe:{NFSU2_TR(0x5445fe);
__builtin_memmove((R+24),(R+4),4);
}
B544600:{NFSU2_TR(0x544600);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544601:{NFSU2_TR(0x544601);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B544605:{NFSU2_TR(0x544605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544606:{NFSU2_TR(0x544606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54460bull));
TAIL_STATIC(0x43dda0u,43d);
}
B54460b:L54460b:{c.instructions+=8;NFSU2_TR(0x54460b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544611:{NFSU2_TR(0x544611);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544612:{NFSU2_TR(0x544612);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B544616:{NFSU2_TR(0x544616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544617:{NFSU2_TR(0x544617);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B54461b:{NFSU2_TR(0x54461b);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54461d:{NFSU2_TR(0x54461d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54461e:{NFSU2_TR(0x54461e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544623ull));
TAIL_STATIC(0x50c960u,50c);
}
B544623:L544623:{c.instructions+=7;NFSU2_TR(0x544623);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B544626:{NFSU2_TR(0x544626);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54462a:{NFSU2_TR(0x54462a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54462d:{NFSU2_TR(0x54462d);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B544630:{NFSU2_TR(0x544630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544632:{NFSU2_TR(0x544632);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B544636:{NFSU2_TR(0x544636);
if(r1(R+518)){{goto L544652;}}
}
B544638:L544638:{c.instructions+=3;NFSU2_TR(0x544638);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B54463b:{NFSU2_TR(0x54463b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B54463d:{NFSU2_TR(0x54463d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L544645;}}
}
B54463f:L54463f:{c.instructions+=2;NFSU2_TR(0x54463f);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544641:{NFSU2_TR(0x544641);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L544645;}}
}
B544643:L544643:{c.instructions+=1;NFSU2_TR(0x544643);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B544645:L544645:{c.instructions+=6;NFSU2_TR(0x544645);
w4(R+8,u32(r1(R+0)));
}
B544648:{NFSU2_TR(0x544648);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54464b:{NFSU2_TR(0x54464b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B54464d:{NFSU2_TR(0x54464d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54464e:{NFSU2_TR(0x54464e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544650:{NFSU2_TR(0x544650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544638u);}goto L544638;}}
}
B544652:L544652:{c.instructions+=2;NFSU2_TR(0x544652);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544654:{NFSU2_TR(0x544654);
if(r1(R+518)){{goto L54466f;}}
}
B544656:L544656:{c.instructions+=2;NFSU2_TR(0x544656);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544657:{NFSU2_TR(0x544657);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54465cull));
TAIL_STATIC(0x52cef0u,52c);
}
B54465c:L54465c:{c.instructions+=3;NFSU2_TR(0x54465c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54465f:{NFSU2_TR(0x54465f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544661:{NFSU2_TR(0x544661);
if(r1(R+518)){{goto L54466f;}}
}
B544663:L544663:{c.instructions+=3;NFSU2_TR(0x544663);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544664:{NFSU2_TR(0x544664);
__builtin_memmove((R+4),(R+0),4);
}
B544666:{NFSU2_TR(0x544666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54466bull));
TAIL_STATIC(0x517f80u,517);
}
B54466b:L54466b:{c.instructions+=2;NFSU2_TR(0x54466b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54466d:{NFSU2_TR(0x54466d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54468c;}}
}
B54466f:L54466f:{c.instructions+=3;NFSU2_TR(0x54466f);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B544674:{NFSU2_TR(0x544674);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544676:{NFSU2_TR(0x544676);
if(r1(R+518)){{goto L54468a;}}
}
B544678:L544678:{c.instructions+=4;NFSU2_TR(0x544678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54467b:{NFSU2_TR(0x54467b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54467c:{NFSU2_TR(0x54467c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54467d:{NFSU2_TR(0x54467d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544682ull));
TAIL_STATIC(0x52c570u,52c);
}
B544682:L544682:{c.instructions+=4;NFSU2_TR(0x544682);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544683:{NFSU2_TR(0x544683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544684:{NFSU2_TR(0x544684);
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
B544687:{NFSU2_TR(0x544687);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54468a:L54468a:{c.instructions+=1;NFSU2_TR(0x54468a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54468c:L54468c:{c.instructions+=4;NFSU2_TR(0x54468c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54468d:{NFSU2_TR(0x54468d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54468e:{NFSU2_TR(0x54468e);
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
B544691:{NFSU2_TR(0x544691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5446a0:L5446a0:{c.instructions+=5;NFSU2_TR(0x5446a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5446a4:{NFSU2_TR(0x5446a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc9d30688ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5446a9:{NFSU2_TR(0x5446a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446aa:{NFSU2_TR(0x5446aa);
__builtin_memmove((R+24),(R+4),4);
}
B5446ac:{NFSU2_TR(0x5446ac);
if(r1(R+518)){{goto L5446b5;}}
}
B5446ae:L5446ae:{c.instructions+=2;NFSU2_TR(0x5446ae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xda5b8712ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xda5b8712ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xda5b8712ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5446b3:{NFSU2_TR(0x5446b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5446e4;}}
}
B5446b5:L5446b5:{c.instructions+=3;NFSU2_TR(0x5446b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5446b8:{NFSU2_TR(0x5446b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446b9:{NFSU2_TR(0x5446b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5446beull));
TAIL_STATIC(0x50ca50u,50c);
}
B5446be:L5446be:{c.instructions+=6;NFSU2_TR(0x5446be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5446c1:{NFSU2_TR(0x5446c1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446c3:{NFSU2_TR(0x5446c3);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446c8:{NFSU2_TR(0x5446c8);
u8 U[4];
w4(U+0,u32(0x7902b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446cd:{NFSU2_TR(0x5446cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446ce:{NFSU2_TR(0x5446ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5446d3ull));
TAIL_STATIC(0x5426c0u,542);
}
B5446d3:L5446d3:{c.instructions+=4;NFSU2_TR(0x5446d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5446d6:{NFSU2_TR(0x5446d6);
u8 U[4];
w4(U+0,u32(0xb19f8b41ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446db:{NFSU2_TR(0x5446db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446dc:{NFSU2_TR(0x5446dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5446e1ull));
TAIL_STATIC(0x50c900u,50c);
}
B5446e1:L5446e1:{c.instructions+=1;NFSU2_TR(0x5446e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5446e4:L5446e4:{c.instructions+=2;NFSU2_TR(0x5446e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5446e5:{NFSU2_TR(0x5446e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5446f0:L5446f0:{c.instructions+=9;NFSU2_TR(0x5446f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5446f3:{NFSU2_TR(0x5446f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446f4:{NFSU2_TR(0x5446f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446f5:{NFSU2_TR(0x5446f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5446f6:{NFSU2_TR(0x5446f6);
__builtin_memmove((R+24),(R+4),4);
}
B5446f8:{NFSU2_TR(0x5446f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5446fb:{NFSU2_TR(0x5446fb);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5446fd:{NFSU2_TR(0x5446fd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5446ff:{NFSU2_TR(0x5446ff);
if(r1(R+518)){{goto L54483c;}}
}
B544705:L544705:{c.instructions+=3;NFSU2_TR(0x544705);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B544709:{NFSU2_TR(0x544709);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54470b:{NFSU2_TR(0x54470b);
if(r1(R+518)){{goto L54483c;}}
}
B544711:L544711:{c.instructions+=6;NFSU2_TR(0x544711);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544712:{NFSU2_TR(0x544712);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544713:{NFSU2_TR(0x544713);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544717:{NFSU2_TR(0x544717);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54471a:{NFSU2_TR(0x54471a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54471d:{NFSU2_TR(0x54471d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544722ull));
TAIL_STATIC(0x50dc70u,50d);
}
B544722:L544722:{c.instructions+=3;NFSU2_TR(0x544722);
__builtin_memmove((R+28),(R+0),4);
}
B544724:{NFSU2_TR(0x544724);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544726:{NFSU2_TR(0x544726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544740;}}
}
B544728:L544728:{c.instructions+=3;NFSU2_TR(0x544728);
__builtin_memmove((R+28),(R+12),4);
}
B54472a:{NFSU2_TR(0x54472a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B54472d:{NFSU2_TR(0x54472d);
if(r1(R+518)){{goto L544740;}}
}
B54472f:L54472f:{c.instructions+=1;NFSU2_TR(0x54472f);
}
B544730:L544730:{c.instructions+=3;NFSU2_TR(0x544730);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B544733:{NFSU2_TR(0x544733);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544737:{NFSU2_TR(0x544737);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544730u);}goto L544730;}}
}
B544739:L544739:{c.instructions+=1;NFSU2_TR(0x544739);
__builtin_memmove((R+16),(R+16),4);
}
B544740:L544740:{c.instructions+=2;NFSU2_TR(0x544740);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544744:{NFSU2_TR(0x544744);
if(r1(R+518)){{goto L54479b;}}
}
B544746:L544746:{c.instructions+=2;NFSU2_TR(0x544746);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544748:{NFSU2_TR(0x544748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544752;}}
}
B54474a:L54474a:{c.instructions+=4;NFSU2_TR(0x54474a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54474e:{NFSU2_TR(0x54474e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B54474f:{NFSU2_TR(0x54474f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B544750:{NFSU2_TR(0x544750);
{goto L54476c;}
}
B544752:L544752:{c.instructions+=7;NFSU2_TR(0x544752);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B544756:{NFSU2_TR(0x544756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544757:{NFSU2_TR(0x544757);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544759:{NFSU2_TR(0x544759);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54475a:{NFSU2_TR(0x54475a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54475b:{NFSU2_TR(0x54475b);
__builtin_memmove((R+4),(R+24),4);
}
B54475d:{NFSU2_TR(0x54475d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544762ull));
TAIL_STATIC(0x520070u,520);
}
B544762:L544762:{c.instructions+=3;NFSU2_TR(0x544762);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544766:{NFSU2_TR(0x544766);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B544768:{NFSU2_TR(0x544768);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+20,u32(u32(r4(R+20))+u32(r4(U+4))));
}
B54476c:L54476c:{c.instructions+=3;NFSU2_TR(0x54476c);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544770:{NFSU2_TR(0x544770);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544774:{NFSU2_TR(0x544774);
if(r1(R+518)){{goto L54479b;}}
}
B544776:L544776:{c.instructions+=4;NFSU2_TR(0x544776);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544779:{NFSU2_TR(0x544779);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54477a:{NFSU2_TR(0x54477a);
__builtin_memmove((R+4),(R+24),4);
}
B54477c:{NFSU2_TR(0x54477c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544781ull));
TAIL_STATIC(0x50dc70u,50d);
}
B544781:L544781:{c.instructions+=3;NFSU2_TR(0x544781);
__builtin_memmove((R+28),(R+0),4);
}
B544783:{NFSU2_TR(0x544783);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544785:{NFSU2_TR(0x544785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544740u);}goto L544740;}}
}
B544787:L544787:{c.instructions+=3;NFSU2_TR(0x544787);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B54478a:{NFSU2_TR(0x54478a);
__builtin_memmove((R+28),(R+12),4);
}
B54478c:{NFSU2_TR(0x54478c);
if(r1(R+518)){{goto L54479b;}}
}
B54478e:L54478e:{c.instructions+=1;NFSU2_TR(0x54478e);
__builtin_memmove((R+28),(R+28),4);
}
B544790:L544790:{c.instructions+=3;NFSU2_TR(0x544790);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B544793:{NFSU2_TR(0x544793);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544797:{NFSU2_TR(0x544797);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544790u);}goto L544790;}}
}
B544799:L544799:{c.instructions+=1;NFSU2_TR(0x544799);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544740u);}goto L544740;}
}
B54479b:L54479b:{c.instructions+=3;NFSU2_TR(0x54479b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54479f:{NFSU2_TR(0x54479f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5447a1:{NFSU2_TR(0x5447a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L544841;}}
}
B5447a7:L5447a7:{c.instructions+=3;NFSU2_TR(0x5447a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5447aa:{NFSU2_TR(0x5447aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5447ac:{NFSU2_TR(0x5447ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5447c3;}}
}
B5447ae:L5447ae:{c.instructions+=5;NFSU2_TR(0x5447ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5447b2:{NFSU2_TR(0x5447b2);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5447b4:{NFSU2_TR(0x5447b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5447b5:{NFSU2_TR(0x5447b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5447b8:{NFSU2_TR(0x5447b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5447bdull));
TAIL_STATIC(0x575620u,575);
}
B5447bd:L5447bd:{c.instructions+=2;NFSU2_TR(0x5447bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5447c0:{NFSU2_TR(0x5447c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5447c3:L5447c3:{c.instructions+=8;NFSU2_TR(0x5447c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5447c6:{NFSU2_TR(0x5447c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5447ca:{NFSU2_TR(0x5447ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5447cd:{NFSU2_TR(0x5447cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5447d4:{NFSU2_TR(0x5447d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5447d5:{NFSU2_TR(0x5447d5);
__builtin_memmove((R+4),(R+24),4);
}
B5447d7:{NFSU2_TR(0x5447d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5447da:{NFSU2_TR(0x5447da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5447dfull));
TAIL_STATIC(0x50dc70u,50d);
}
B5447df:L5447df:{c.instructions+=3;NFSU2_TR(0x5447df);
__builtin_memmove((R+28),(R+0),4);
}
B5447e1:{NFSU2_TR(0x5447e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5447e3:{NFSU2_TR(0x5447e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5447f5;}}
}
B5447e5:L5447e5:{c.instructions+=4;NFSU2_TR(0x5447e5);
__builtin_memmove((R+0),(R+12),4);
}
B5447e7:{NFSU2_TR(0x5447e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5447e8:{NFSU2_TR(0x5447e8);
__builtin_memmove((R+4),(R+24),4);
}
B5447ea:{NFSU2_TR(0x5447ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5447efull));
TAIL_STATIC(0x50dcb0u,50d);
}
B5447ef:L5447ef:{c.instructions+=3;NFSU2_TR(0x5447ef);
__builtin_memmove((R+28),(R+0),4);
}
B5447f1:{NFSU2_TR(0x5447f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5447f3:{NFSU2_TR(0x5447f3);
if(r1(R+518)){{goto L544841;}}
}
B5447f5:L5447f5:{c.instructions+=2;NFSU2_TR(0x5447f5);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B5447f9:{NFSU2_TR(0x5447f9);
if(r1(R+518)){{goto L544841;}}
}
B5447fb:L5447fb:{c.instructions+=5;NFSU2_TR(0x5447fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5447fd:{NFSU2_TR(0x5447fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5447ff:{NFSU2_TR(0x5447ff);
__builtin_memmove((R+4),(R+24),4);
}
B544801:{NFSU2_TR(0x544801);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544803:{NFSU2_TR(0x544803);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54480c;}}
}
B544805:L544805:{c.instructions+=1;NFSU2_TR(0x544805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54480aull));
TAIL_STATIC(0x50dbf0u,50d);
}
B54480a:L54480a:{c.instructions+=1;NFSU2_TR(0x54480a);
{goto L544813;}
}
B54480c:L54480c:{c.instructions+=3;NFSU2_TR(0x54480c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54480d:{NFSU2_TR(0x54480d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54480e:{NFSU2_TR(0x54480e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544813ull));
TAIL_STATIC(0x520070u,520);
}
B544813:L544813:{c.instructions+=2;NFSU2_TR(0x544813);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544817:{NFSU2_TR(0x544817);
if(r1(R+518)){{goto L544841;}}
}
B544819:L544819:{c.instructions+=4;NFSU2_TR(0x544819);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54481c:{NFSU2_TR(0x54481c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54481d:{NFSU2_TR(0x54481d);
__builtin_memmove((R+4),(R+24),4);
}
B54481f:{NFSU2_TR(0x54481f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544824ull));
TAIL_STATIC(0x50dc70u,50d);
}
B544824:L544824:{c.instructions+=3;NFSU2_TR(0x544824);
__builtin_memmove((R+28),(R+0),4);
}
B544826:{NFSU2_TR(0x544826);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544828:{NFSU2_TR(0x544828);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5447f5u);}goto L5447f5;}}
}
B54482a:L54482a:{c.instructions+=3;NFSU2_TR(0x54482a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B54482d:{NFSU2_TR(0x54482d);
__builtin_memmove((R+28),(R+12),4);
}
B54482f:{NFSU2_TR(0x54482f);
if(r1(R+518)){{goto L544841;}}
}
B544831:L544831:{c.instructions+=3;NFSU2_TR(0x544831);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B544834:{NFSU2_TR(0x544834);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B544838:{NFSU2_TR(0x544838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544831u);}goto L544831;}}
}
B54483a:L54483a:{c.instructions+=1;NFSU2_TR(0x54483a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5447f5u);}goto L5447f5;}
}
B54483c:L54483c:{c.instructions+=2;NFSU2_TR(0x54483c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54483f:{NFSU2_TR(0x54483f);
{goto L544844;}
}
B544841:L544841:{c.instructions+=2;NFSU2_TR(0x544841);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B544843:{NFSU2_TR(0x544843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544844:L544844:{c.instructions+=4;NFSU2_TR(0x544844);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544847:{NFSU2_TR(0x544847);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544849:{NFSU2_TR(0x544849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54484c:{NFSU2_TR(0x54484c);
if(r1(R+518)){{goto L54485d;}}
}
B54484e:L54484e:{c.instructions+=6;NFSU2_TR(0x54484e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544851:{NFSU2_TR(0x544851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544854:{NFSU2_TR(0x544854);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544856:{NFSU2_TR(0x544856);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544857:{NFSU2_TR(0x544857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544858:{NFSU2_TR(0x544858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54485dull));
TAIL_STATIC(0x538080u,538);
}
B54485d:L54485d:{c.instructions+=4;NFSU2_TR(0x54485d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544860:{NFSU2_TR(0x544860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544861:{NFSU2_TR(0x544861);
__builtin_memmove((R+4),(R+24),4);
}
B544863:{NFSU2_TR(0x544863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544868ull));
TAIL_STATIC(0x5397e0u,539);
}
B544868:L544868:{c.instructions+=5;NFSU2_TR(0x544868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544869:{NFSU2_TR(0x544869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54486a:{NFSU2_TR(0x54486a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54486b:{NFSU2_TR(0x54486b);
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
B54486e:{NFSU2_TR(0x54486e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544880:L544880:{c.instructions+=6;NFSU2_TR(0x544880);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544881:{NFSU2_TR(0x544881);
__builtin_memmove((R+28),(R+4),4);
}
B544883:{NFSU2_TR(0x544883);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544886:{NFSU2_TR(0x544886);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544889:{NFSU2_TR(0x544889);
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
B54488b:{NFSU2_TR(0x54488b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5448de;}}
}
B54488d:L54488d:{c.instructions+=5;NFSU2_TR(0x54488d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544891:{NFSU2_TR(0x544891);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544892:{NFSU2_TR(0x544892);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B544895:{NFSU2_TR(0x544895);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B544897:{NFSU2_TR(0x544897);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L54489d;}}
}
B544899:L544899:{c.instructions+=2;NFSU2_TR(0x544899);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54489b:{NFSU2_TR(0x54489b);
{goto L5448a8;}
}
B54489d:L54489d:{c.instructions+=3;NFSU2_TR(0x54489d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5448a0:{NFSU2_TR(0x5448a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5448a2:{NFSU2_TR(0x5448a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5448a8;}}
}
B5448a4:L5448a4:{c.instructions+=2;NFSU2_TR(0x5448a4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5448a6:{NFSU2_TR(0x5448a6);
__builtin_memmove((R+24),(R+0),4);
}
B5448a8:L5448a8:{c.instructions+=3;NFSU2_TR(0x5448a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5448ab:{NFSU2_TR(0x5448ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5448ad:{NFSU2_TR(0x5448ad);
if(r1(R+518)){{goto L5448d2;}}
}
B5448af:L5448af:{c.instructions+=3;NFSU2_TR(0x5448af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5448b2:{NFSU2_TR(0x5448b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5448b4:{NFSU2_TR(0x5448b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5448cb;}}
}
B5448b6:L5448b6:{c.instructions+=1;NFSU2_TR(0x5448b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5448bbull));
TAIL_STATIC(0x495810u,495);
}
B5448bb:L5448bb:{c.instructions+=4;NFSU2_TR(0x5448bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5448bc:{NFSU2_TR(0x5448bc);
__builtin_memmove((R+4),(R+28),4);
}
B5448be:{NFSU2_TR(0x5448be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5448c1:{NFSU2_TR(0x5448c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5448c6ull));
TAIL_STATIC(0x5397e0u,539);
}
B5448c6:L5448c6:{c.instructions+=3;NFSU2_TR(0x5448c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5448c7:{NFSU2_TR(0x5448c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5448c8:{NFSU2_TR(0x5448c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5448cb:L5448cb:{c.instructions+=1;NFSU2_TR(0x5448cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5448d2;}}
}
B5448cd:L5448cd:{c.instructions+=1;NFSU2_TR(0x5448cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5448d2ull));
TAIL_STATIC(0x495850u,495);
}
B5448d2:L5448d2:{c.instructions+=4;NFSU2_TR(0x5448d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5448d3:{NFSU2_TR(0x5448d3);
__builtin_memmove((R+4),(R+28),4);
}
B5448d5:{NFSU2_TR(0x5448d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5448d8:{NFSU2_TR(0x5448d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5448ddull));
TAIL_STATIC(0x5397e0u,539);
}
B5448dd:L5448dd:{c.instructions+=1;NFSU2_TR(0x5448dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5448de:L5448de:{c.instructions+=2;NFSU2_TR(0x5448de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5448df:{NFSU2_TR(0x5448df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5448f0:L5448f0:{c.instructions+=5;NFSU2_TR(0x5448f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5448f4:{NFSU2_TR(0x5448f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5448f5:{NFSU2_TR(0x5448f5);
__builtin_memmove((R+24),(R+4),4);
}
B5448f7:{NFSU2_TR(0x5448f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5448fa:{NFSU2_TR(0x5448fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544924;}}
}
B5448fc:L5448fc:{c.instructions+=3;NFSU2_TR(0x5448fc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5448fe:{NFSU2_TR(0x5448fe);
__builtin_memmove((R+4),(R+24),4);
}
B544900:{NFSU2_TR(0x544900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544905ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544880u);}goto L544880;}
}
B544905:L544905:{c.instructions+=3;NFSU2_TR(0x544905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544908:{NFSU2_TR(0x544908);
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
B54490a:{NFSU2_TR(0x54490a);
if(r1(R+518)){{goto L54491e;}}
}
B54490c:L54490c:{c.instructions+=8;NFSU2_TR(0x54490c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54490f:{NFSU2_TR(0x54490f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544912:{NFSU2_TR(0x544912);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B544913:{NFSU2_TR(0x544913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544914:{NFSU2_TR(0x544914);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544917:{NFSU2_TR(0x544917);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544918:{NFSU2_TR(0x544918);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544919:{NFSU2_TR(0x544919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54491eull));
TAIL_STATIC(0x538080u,538);
}
B54491e:L54491e:{c.instructions+=3;NFSU2_TR(0x54491e);
w1(R+0,u8(0x1ull));
}
B544920:{NFSU2_TR(0x544920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544921:{NFSU2_TR(0x544921);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544924:L544924:{c.instructions+=2;NFSU2_TR(0x544924);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544927:{NFSU2_TR(0x544927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544951;}}
}
B544929:L544929:{c.instructions+=3;NFSU2_TR(0x544929);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54492b:{NFSU2_TR(0x54492b);
__builtin_memmove((R+4),(R+24),4);
}
B54492d:{NFSU2_TR(0x54492d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544932ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544880u);}goto L544880;}
}
B544932:L544932:{c.instructions+=3;NFSU2_TR(0x544932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544935:{NFSU2_TR(0x544935);
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
B544937:{NFSU2_TR(0x544937);
if(r1(R+518)){{goto L54494b;}}
}
B544939:L544939:{c.instructions+=8;NFSU2_TR(0x544939);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54493c:{NFSU2_TR(0x54493c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54493f:{NFSU2_TR(0x54493f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B544940:{NFSU2_TR(0x544940);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544941:{NFSU2_TR(0x544941);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544944:{NFSU2_TR(0x544944);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544945:{NFSU2_TR(0x544945);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544946:{NFSU2_TR(0x544946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54494bull));
TAIL_STATIC(0x538080u,538);
}
B54494b:L54494b:{c.instructions+=3;NFSU2_TR(0x54494b);
w1(R+0,u8(0x1ull));
}
B54494d:{NFSU2_TR(0x54494d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54494e:{NFSU2_TR(0x54494e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544951:L544951:{c.instructions+=2;NFSU2_TR(0x544951);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544956:{NFSU2_TR(0x544956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5449b2;}}
}
B544958:L544958:{c.instructions+=3;NFSU2_TR(0x544958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54495b:{NFSU2_TR(0x54495b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54495d:{NFSU2_TR(0x54495d);
if(r1(R+518)){{goto L5449b2;}}
}
B54495f:L54495f:{c.instructions+=1;NFSU2_TR(0x54495f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544964ull));
TAIL_STATIC(0x538130u,538);
}
B544964:L544964:{c.instructions+=7;NFSU2_TR(0x544964);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54496a:{NFSU2_TR(0x54496a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54496d:{NFSU2_TR(0x54496d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544970:{NFSU2_TR(0x544970);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B544976:{NFSU2_TR(0x544976);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B544978:{NFSU2_TR(0x544978);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54497b:{NFSU2_TR(0x54497b);
if(r1(R+514)){{goto L544986;}}
}
B54497d:L54497d:{c.instructions+=3;NFSU2_TR(0x54497d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B54497f:{NFSU2_TR(0x54497f);
w4(R+4,u32(0x1ull));
}
B544984:{NFSU2_TR(0x544984);
{goto L54499d;}
}
B544986:L544986:{c.instructions+=4;NFSU2_TR(0x544986);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54498c:{NFSU2_TR(0x54498c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54498e:{NFSU2_TR(0x54498e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544991:{NFSU2_TR(0x544991);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544998;}}
}
B544993:L544993:{c.instructions+=2;NFSU2_TR(0x544993);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B544996:{NFSU2_TR(0x544996);
{goto L54499d;}
}
B544998:L544998:{c.instructions+=2;NFSU2_TR(0x544998);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54499b:{NFSU2_TR(0x54499b);
if(r1(R+518)){{goto L5449b2;}}
}
B54499d:L54499d:{c.instructions+=3;NFSU2_TR(0x54499d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54499e:{NFSU2_TR(0x54499e);
__builtin_memmove((R+4),(R+24),4);
}
B5449a0:{NFSU2_TR(0x5449a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5449a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544880u);}goto L544880;}
}
B5449a5:L5449a5:{c.instructions+=2;NFSU2_TR(0x5449a5);
__builtin_memmove((R+4),(R+24),4);
}
B5449a7:{NFSU2_TR(0x5449a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5449acull));
TAIL_STATIC(0x5398c0u,539);
}
B5449ac:L5449ac:{c.instructions+=3;NFSU2_TR(0x5449ac);
w1(R+0,u8(0x1ull));
}
B5449ae:{NFSU2_TR(0x5449ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5449af:{NFSU2_TR(0x5449af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5449b2:L5449b2:{c.instructions+=3;NFSU2_TR(0x5449b2);
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
B5449b4:{NFSU2_TR(0x5449b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5449b5:{NFSU2_TR(0x5449b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5449c0:L5449c0:{c.instructions+=9;NFSU2_TR(0x5449c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449c1:{NFSU2_TR(0x5449c1);
__builtin_memmove((R+20),(R+16),4);
}
B5449c3:{NFSU2_TR(0x5449c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449c4:{NFSU2_TR(0x5449c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449c5:{NFSU2_TR(0x5449c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5449c8:{NFSU2_TR(0x5449c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5449cb:{NFSU2_TR(0x5449cb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xa5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa5ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xa5ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5449d0:{NFSU2_TR(0x5449d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5449d7:{NFSU2_TR(0x5449d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L544d8e;}}
}
B5449dd:L5449dd:{c.instructions+=4;NFSU2_TR(0x5449dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x544db0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5449e4:{NFSU2_TR(0x5449e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449e5:{NFSU2_TR(0x5449e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449e6:{NFSU2_TR(0x5449e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x544d98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5449ed:L5449ed:{c.instructions+=2;NFSU2_TR(0x5449ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5449ee:{NFSU2_TR(0x5449ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5449f3ull));
TAIL_STATIC(0x60fee0u,60f);
}
B5449f3:L5449f3:{c.instructions+=5;NFSU2_TR(0x5449f3);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5449f9:{NFSU2_TR(0x5449f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5449fb:{NFSU2_TR(0x5449fb);
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
B5449fe:{NFSU2_TR(0x5449fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544a01:{NFSU2_TR(0x544a01);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544a04:L544a04:{c.instructions+=7;NFSU2_TR(0x544a04);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a06:{NFSU2_TR(0x544a06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a08:{NFSU2_TR(0x544a08);
__builtin_memmove((R+12),(R+0),4);
}
B544a0a:{NFSU2_TR(0x544a0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a0b:{NFSU2_TR(0x544a0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a0c:{NFSU2_TR(0x544a0c);
w4(R+4,u32(0x8a2b68ull));
}
B544a11:{NFSU2_TR(0x544a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a16ull));
TAIL_STATIC(0x61ba30u,61b);
}
B544a16:L544a16:{c.instructions+=3;NFSU2_TR(0x544a16);
__builtin_memmove((R+24),(R+0),4);
}
B544a18:{NFSU2_TR(0x544a18);
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
B544a1a:{NFSU2_TR(0x544a1a);
if(r1(R+518)){{goto L544d8c;}}
}
B544a20:L544a20:{c.instructions+=4;NFSU2_TR(0x544a20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a22:{NFSU2_TR(0x544a22);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a27:{NFSU2_TR(0x544a27);
__builtin_memmove((R+4),(R+24),4);
}
B544a29:{NFSU2_TR(0x544a29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a2eull));
TAIL_STATIC(0x61b500u,61b);
}
B544a2e:L544a2e:{c.instructions+=7;NFSU2_TR(0x544a2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B544a32:{NFSU2_TR(0x544a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544a35:{NFSU2_TR(0x544a35);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B544a37:{NFSU2_TR(0x544a37);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B544a39:{NFSU2_TR(0x544a39);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x29aull))));
}
B544a3e:{NFSU2_TR(0x544a3e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544a40:{NFSU2_TR(0x544a40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544aa3;}}
}
B544a42:L544a42:{c.instructions+=2;NFSU2_TR(0x544a42);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544a45:{NFSU2_TR(0x544a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544aa3;}}
}
B544a47:L544a47:{c.instructions+=5;NFSU2_TR(0x544a47);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B544a4d:{NFSU2_TR(0x544a4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a4e:{NFSU2_TR(0x544a4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a4f:{NFSU2_TR(0x544a4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a50:{NFSU2_TR(0x544a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a55ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B544a55:L544a55:{c.instructions+=2;NFSU2_TR(0x544a55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a56:{NFSU2_TR(0x544a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a5bull));
TAIL_STATIC(0x52a010u,52a);
}
B544a5b:L544a5b:{c.instructions+=3;NFSU2_TR(0x544a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B544a5e:{NFSU2_TR(0x544a5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544a60:{NFSU2_TR(0x544a60);
if(r1(R+518)){{goto L544aa3;}}
}
B544a62:L544a62:{c.instructions+=2;NFSU2_TR(0x544a62);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544a65:{NFSU2_TR(0x544a65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544a70;}}
}
B544a67:L544a67:{c.instructions+=4;NFSU2_TR(0x544a67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544a6a:{NFSU2_TR(0x544a6a);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B544a6c:{NFSU2_TR(0x544a6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544a6e:{NFSU2_TR(0x544a6e);
if(r1(R+518)){{goto L544aa3;}}
}
B544a70:L544a70:{c.instructions+=5;NFSU2_TR(0x544a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544a73:{NFSU2_TR(0x544a73);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B544a74:{NFSU2_TR(0x544a74);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544a76:{NFSU2_TR(0x544a76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544a79:{NFSU2_TR(0x544a79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544a7eull));
TAIL_STATIC(0x575620u,575);
}
B544a7e:L544a7e:{c.instructions+=3;NFSU2_TR(0x544a7e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544a81:{NFSU2_TR(0x544a81);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544a83:{NFSU2_TR(0x544a83);
if(r1(R+518)){{goto L544a91;}}
}
B544a85:L544a85:{c.instructions+=3;NFSU2_TR(0x544a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544a88:{NFSU2_TR(0x544a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544a8f:{NFSU2_TR(0x544a8f);
{goto L544a93;}
}
B544a91:L544a91:{c.instructions+=1;NFSU2_TR(0x544a91);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544a93:L544a93:{c.instructions+=6;NFSU2_TR(0x544a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544a96:{NFSU2_TR(0x544a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544a99:{NFSU2_TR(0x544a99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544a9b:{NFSU2_TR(0x544a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544a9e:{NFSU2_TR(0x544a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544aa1:{NFSU2_TR(0x544aa1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544aa3:L544aa3:{c.instructions+=7;NFSU2_TR(0x544aa3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544aa5:{NFSU2_TR(0x544aa5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544aa7:{NFSU2_TR(0x544aa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544aa8:{NFSU2_TR(0x544aa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544aa9:{NFSU2_TR(0x544aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544aaa:{NFSU2_TR(0x544aaa);
w4(R+4,u32(0x8a2b68ull));
}
B544aaf:{NFSU2_TR(0x544aaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544ab4ull));
TAIL_STATIC(0x61ba50u,61b);
}
B544ab4:L544ab4:{c.instructions+=3;NFSU2_TR(0x544ab4);
__builtin_memmove((R+24),(R+0),4);
}
B544ab6:{NFSU2_TR(0x544ab6);
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
B544ab8:{NFSU2_TR(0x544ab8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544a20u);}goto L544a20;}}
}
B544abe:L544abe:{c.instructions+=7;NFSU2_TR(0x544abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544ac1:{NFSU2_TR(0x544ac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544ac2:{NFSU2_TR(0x544ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544ac3:{NFSU2_TR(0x544ac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544ac4:{NFSU2_TR(0x544ac4);
__builtin_memmove((R+16),(R+20),4);
}
B544ac6:{NFSU2_TR(0x544ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544ac7:{NFSU2_TR(0x544ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544ac8:L544ac8:{c.instructions+=2;NFSU2_TR(0x544ac8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ac9:{NFSU2_TR(0x544ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544aceull));
TAIL_STATIC(0x60fee0u,60f);
}
B544ace:L544ace:{c.instructions+=5;NFSU2_TR(0x544ace);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B544ad4:{NFSU2_TR(0x544ad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B544ad6:{NFSU2_TR(0x544ad6);
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
B544ad9:{NFSU2_TR(0x544ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544adc:{NFSU2_TR(0x544adc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544adfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544adf:L544adf:{c.instructions+=7;NFSU2_TR(0x544adf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ae1:{NFSU2_TR(0x544ae1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ae3:{NFSU2_TR(0x544ae3);
__builtin_memmove((R+12),(R+0),4);
}
B544ae5:{NFSU2_TR(0x544ae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ae6:{NFSU2_TR(0x544ae6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ae7:{NFSU2_TR(0x544ae7);
w4(R+4,u32(0x8a2b68ull));
}
B544aec:{NFSU2_TR(0x544aec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544af1ull));
TAIL_STATIC(0x61ba30u,61b);
}
B544af1:L544af1:{c.instructions+=3;NFSU2_TR(0x544af1);
__builtin_memmove((R+24),(R+0),4);
}
B544af3:{NFSU2_TR(0x544af3);
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
B544af5:{NFSU2_TR(0x544af5);
if(r1(R+518)){{goto L544d8c;}}
}
B544afb:L544afb:{c.instructions+=1;NFSU2_TR(0x544afb);
{goto L544b00;}
}
B544b00:L544b00:{c.instructions+=3;NFSU2_TR(0x544b00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B544b04:{NFSU2_TR(0x544b04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544b07:{NFSU2_TR(0x544b07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544b4e;}}
}
B544b09:L544b09:{c.instructions+=5;NFSU2_TR(0x544b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544b0c:{NFSU2_TR(0x544b0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b0d:{NFSU2_TR(0x544b0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b0e:{NFSU2_TR(0x544b0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b0f:{NFSU2_TR(0x544b0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b14ull));
TAIL_STATIC(0x539b70u,539);
}
B544b14:L544b14:{c.instructions+=3;NFSU2_TR(0x544b14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B544b17:{NFSU2_TR(0x544b17);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544b19:{NFSU2_TR(0x544b19);
if(r1(R+518)){{goto L544b4e;}}
}
B544b1b:L544b1b:{c.instructions+=5;NFSU2_TR(0x544b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544b1e:{NFSU2_TR(0x544b1e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B544b1f:{NFSU2_TR(0x544b1f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b21:{NFSU2_TR(0x544b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544b24:{NFSU2_TR(0x544b24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b29ull));
TAIL_STATIC(0x575620u,575);
}
B544b29:L544b29:{c.instructions+=3;NFSU2_TR(0x544b29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544b2c:{NFSU2_TR(0x544b2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544b2e:{NFSU2_TR(0x544b2e);
if(r1(R+518)){{goto L544b3c;}}
}
B544b30:L544b30:{c.instructions+=3;NFSU2_TR(0x544b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544b33:{NFSU2_TR(0x544b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544b3a:{NFSU2_TR(0x544b3a);
{goto L544b3e;}
}
B544b3c:L544b3c:{c.instructions+=1;NFSU2_TR(0x544b3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544b3e:L544b3e:{c.instructions+=6;NFSU2_TR(0x544b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544b41:{NFSU2_TR(0x544b41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544b44:{NFSU2_TR(0x544b44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544b46:{NFSU2_TR(0x544b46);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544b49:{NFSU2_TR(0x544b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544b4c:{NFSU2_TR(0x544b4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544b4e:L544b4e:{c.instructions+=7;NFSU2_TR(0x544b4e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b50:{NFSU2_TR(0x544b50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b52:{NFSU2_TR(0x544b52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b53:{NFSU2_TR(0x544b53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b54:{NFSU2_TR(0x544b54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b55:{NFSU2_TR(0x544b55);
w4(R+4,u32(0x8a2b68ull));
}
B544b5a:{NFSU2_TR(0x544b5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b5full));
TAIL_STATIC(0x61ba50u,61b);
}
B544b5f:L544b5f:{c.instructions+=3;NFSU2_TR(0x544b5f);
__builtin_memmove((R+24),(R+0),4);
}
B544b61:{NFSU2_TR(0x544b61);
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
B544b63:{NFSU2_TR(0x544b63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544b00u);}goto L544b00;}}
}
B544b65:L544b65:{c.instructions+=7;NFSU2_TR(0x544b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544b68:{NFSU2_TR(0x544b68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544b69:{NFSU2_TR(0x544b69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544b6a:{NFSU2_TR(0x544b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544b6b:{NFSU2_TR(0x544b6b);
__builtin_memmove((R+16),(R+20),4);
}
B544b6d:{NFSU2_TR(0x544b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544b6e:{NFSU2_TR(0x544b6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544b6f:L544b6f:{c.instructions+=2;NFSU2_TR(0x544b6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b70:{NFSU2_TR(0x544b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b75ull));
TAIL_STATIC(0x60fee0u,60f);
}
B544b75:L544b75:{c.instructions+=5;NFSU2_TR(0x544b75);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B544b7b:{NFSU2_TR(0x544b7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B544b7d:{NFSU2_TR(0x544b7d);
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
B544b80:{NFSU2_TR(0x544b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544b83:{NFSU2_TR(0x544b83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544b86:L544b86:{c.instructions+=7;NFSU2_TR(0x544b86);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b88:{NFSU2_TR(0x544b88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b8a:{NFSU2_TR(0x544b8a);
__builtin_memmove((R+12),(R+0),4);
}
B544b8c:{NFSU2_TR(0x544b8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b8d:{NFSU2_TR(0x544b8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544b8e:{NFSU2_TR(0x544b8e);
w4(R+4,u32(0x8a2b68ull));
}
B544b93:{NFSU2_TR(0x544b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544b98ull));
TAIL_STATIC(0x61ba30u,61b);
}
B544b98:L544b98:{c.instructions+=3;NFSU2_TR(0x544b98);
__builtin_memmove((R+24),(R+0),4);
}
B544b9a:{NFSU2_TR(0x544b9a);
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
B544b9c:{NFSU2_TR(0x544b9c);
if(r1(R+518)){{goto L544d8c;}}
}
B544ba2:L544ba2:{c.instructions+=3;NFSU2_TR(0x544ba2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B544ba6:{NFSU2_TR(0x544ba6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544ba9:{NFSU2_TR(0x544ba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544bf1;}}
}
B544bab:L544bab:{c.instructions+=4;NFSU2_TR(0x544bab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bad:{NFSU2_TR(0x544bad);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bb2:{NFSU2_TR(0x544bb2);
__builtin_memmove((R+4),(R+24),4);
}
B544bb4:{NFSU2_TR(0x544bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544bb9ull));
TAIL_STATIC(0x61b500u,61b);
}
B544bb9:L544bb9:{c.instructions+=2;NFSU2_TR(0x544bb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544bbc:{NFSU2_TR(0x544bbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544bf1;}}
}
B544bbe:L544bbe:{c.instructions+=5;NFSU2_TR(0x544bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544bc1:{NFSU2_TR(0x544bc1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B544bc2:{NFSU2_TR(0x544bc2);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bc4:{NFSU2_TR(0x544bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544bc7:{NFSU2_TR(0x544bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544bccull));
TAIL_STATIC(0x575620u,575);
}
B544bcc:L544bcc:{c.instructions+=3;NFSU2_TR(0x544bcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544bcf:{NFSU2_TR(0x544bcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544bd1:{NFSU2_TR(0x544bd1);
if(r1(R+518)){{goto L544bdf;}}
}
B544bd3:L544bd3:{c.instructions+=3;NFSU2_TR(0x544bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544bd6:{NFSU2_TR(0x544bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544bdd:{NFSU2_TR(0x544bdd);
{goto L544be1;}
}
B544bdf:L544bdf:{c.instructions+=1;NFSU2_TR(0x544bdf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544be1:L544be1:{c.instructions+=6;NFSU2_TR(0x544be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544be4:{NFSU2_TR(0x544be4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544be7:{NFSU2_TR(0x544be7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544be9:{NFSU2_TR(0x544be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544bec:{NFSU2_TR(0x544bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544bef:{NFSU2_TR(0x544bef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544bf1:L544bf1:{c.instructions+=7;NFSU2_TR(0x544bf1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bf3:{NFSU2_TR(0x544bf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bf5:{NFSU2_TR(0x544bf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bf6:{NFSU2_TR(0x544bf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bf7:{NFSU2_TR(0x544bf7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544bf8:{NFSU2_TR(0x544bf8);
w4(R+4,u32(0x8a2b68ull));
}
B544bfd:{NFSU2_TR(0x544bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c02ull));
TAIL_STATIC(0x61ba50u,61b);
}
B544c02:L544c02:{c.instructions+=3;NFSU2_TR(0x544c02);
__builtin_memmove((R+24),(R+0),4);
}
B544c04:{NFSU2_TR(0x544c04);
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
B544c06:{NFSU2_TR(0x544c06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544ba2u);}goto L544ba2;}}
}
B544c08:L544c08:{c.instructions+=7;NFSU2_TR(0x544c08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544c0b:{NFSU2_TR(0x544c0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544c0c:{NFSU2_TR(0x544c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544c0d:{NFSU2_TR(0x544c0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544c0e:{NFSU2_TR(0x544c0e);
__builtin_memmove((R+16),(R+20),4);
}
B544c10:{NFSU2_TR(0x544c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544c11:{NFSU2_TR(0x544c11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544c12:L544c12:{c.instructions+=2;NFSU2_TR(0x544c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c13:{NFSU2_TR(0x544c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c18ull));
TAIL_STATIC(0x60fee0u,60f);
}
B544c18:L544c18:{c.instructions+=5;NFSU2_TR(0x544c18);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B544c1e:{NFSU2_TR(0x544c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B544c20:{NFSU2_TR(0x544c20);
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
B544c23:{NFSU2_TR(0x544c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544c26:{NFSU2_TR(0x544c26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544c29:L544c29:{c.instructions+=7;NFSU2_TR(0x544c29);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c2b:{NFSU2_TR(0x544c2b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c2d:{NFSU2_TR(0x544c2d);
__builtin_memmove((R+12),(R+0),4);
}
B544c2f:{NFSU2_TR(0x544c2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c30:{NFSU2_TR(0x544c30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c31:{NFSU2_TR(0x544c31);
w4(R+4,u32(0x8a2b68ull));
}
B544c36:{NFSU2_TR(0x544c36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c3bull));
TAIL_STATIC(0x61ba30u,61b);
}
B544c3b:L544c3b:{c.instructions+=3;NFSU2_TR(0x544c3b);
__builtin_memmove((R+24),(R+0),4);
}
B544c3d:{NFSU2_TR(0x544c3d);
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
B544c3f:{NFSU2_TR(0x544c3f);
if(r1(R+518)){{goto L544d8c;}}
}
B544c45:L544c45:{c.instructions+=1;NFSU2_TR(0x544c45);
{goto L544c50;}
}
B544c50:L544c50:{c.instructions+=3;NFSU2_TR(0x544c50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B544c54:{NFSU2_TR(0x544c54);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B544c57:{NFSU2_TR(0x544c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544ced;}}
}
B544c5d:L544c5d:{c.instructions+=6;NFSU2_TR(0x544c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544c60:{NFSU2_TR(0x544c60);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B544c62:{NFSU2_TR(0x544c62);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B544c65:{NFSU2_TR(0x544c65);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B544c68:{NFSU2_TR(0x544c68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544c6a:{NFSU2_TR(0x544c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544ced;}}
}
B544c70:L544c70:{c.instructions+=5;NFSU2_TR(0x544c70);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B544c76:{NFSU2_TR(0x544c76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c77:{NFSU2_TR(0x544c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c78:{NFSU2_TR(0x544c78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c79:{NFSU2_TR(0x544c79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c7eull));
TAIL_STATIC(0x50f0d0u,50f);
}
B544c7e:L544c7e:{c.instructions+=2;NFSU2_TR(0x544c7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c7f:{NFSU2_TR(0x544c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c84ull));
TAIL_STATIC(0x52a010u,52a);
}
B544c84:L544c84:{c.instructions+=3;NFSU2_TR(0x544c84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B544c87:{NFSU2_TR(0x544c87);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544c89:{NFSU2_TR(0x544c89);
if(r1(R+518)){{goto L544ced;}}
}
B544c8b:L544c8b:{c.instructions+=4;NFSU2_TR(0x544c8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B544c8e:{NFSU2_TR(0x544c8e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B544c90:{NFSU2_TR(0x544c90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x16ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544c92:{NFSU2_TR(0x544c92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544cba;}}
}
B544c94:L544c94:{c.instructions+=2;NFSU2_TR(0x544c94);
u8 U[4];
w4(U+0,u32(0x79c1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544c99:{NFSU2_TR(0x544c99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544c9eull));
TAIL_STATIC(0x43db50u,43d);
}
B544c9e:L544c9e:{c.instructions+=7;NFSU2_TR(0x544c9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B544ca2:{NFSU2_TR(0x544ca2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B544ca5:{NFSU2_TR(0x544ca5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B544ca8:{NFSU2_TR(0x544ca8);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B544caa:{NFSU2_TR(0x544caa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544cad:{NFSU2_TR(0x544cad);
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
B544caf:{NFSU2_TR(0x544caf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544cba;}}
}
B544cb1:L544cb1:{c.instructions+=1;NFSU2_TR(0x544cb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544cb6ull));
TAIL_STATIC(0x570a30u,570);
}
B544cb6:L544cb6:{c.instructions+=2;NFSU2_TR(0x544cb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544cb8:{NFSU2_TR(0x544cb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544ced;}}
}
B544cba:L544cba:{c.instructions+=5;NFSU2_TR(0x544cba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544cbd:{NFSU2_TR(0x544cbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B544cbe:{NFSU2_TR(0x544cbe);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cc0:{NFSU2_TR(0x544cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544cc3:{NFSU2_TR(0x544cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544cc8ull));
TAIL_STATIC(0x575620u,575);
}
B544cc8:L544cc8:{c.instructions+=3;NFSU2_TR(0x544cc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544ccb:{NFSU2_TR(0x544ccb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544ccd:{NFSU2_TR(0x544ccd);
if(r1(R+518)){{goto L544cdb;}}
}
B544ccf:L544ccf:{c.instructions+=3;NFSU2_TR(0x544ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544cd2:{NFSU2_TR(0x544cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544cd9:{NFSU2_TR(0x544cd9);
{goto L544cdd;}
}
B544cdb:L544cdb:{c.instructions+=1;NFSU2_TR(0x544cdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544cdd:L544cdd:{c.instructions+=6;NFSU2_TR(0x544cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B544ce0:{NFSU2_TR(0x544ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544ce3:{NFSU2_TR(0x544ce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544ce5:{NFSU2_TR(0x544ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ce8:{NFSU2_TR(0x544ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ceb:{NFSU2_TR(0x544ceb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544ced:L544ced:{c.instructions+=7;NFSU2_TR(0x544ced);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cef:{NFSU2_TR(0x544cef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cf1:{NFSU2_TR(0x544cf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cf2:{NFSU2_TR(0x544cf2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cf3:{NFSU2_TR(0x544cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544cf4:{NFSU2_TR(0x544cf4);
w4(R+4,u32(0x8a2b68ull));
}
B544cf9:{NFSU2_TR(0x544cf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544cfeull));
TAIL_STATIC(0x61ba50u,61b);
}
B544cfe:L544cfe:{c.instructions+=3;NFSU2_TR(0x544cfe);
__builtin_memmove((R+24),(R+0),4);
}
B544d00:{NFSU2_TR(0x544d00);
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
B544d02:{NFSU2_TR(0x544d02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544c50u);}goto L544c50;}}
}
B544d08:L544d08:{c.instructions+=7;NFSU2_TR(0x544d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544d0b:{NFSU2_TR(0x544d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544d0c:{NFSU2_TR(0x544d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544d0d:{NFSU2_TR(0x544d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544d0e:{NFSU2_TR(0x544d0e);
__builtin_memmove((R+16),(R+20),4);
}
B544d10:{NFSU2_TR(0x544d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544d11:{NFSU2_TR(0x544d11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544d12:L544d12:{c.instructions+=2;NFSU2_TR(0x544d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d13:{NFSU2_TR(0x544d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544d18ull));
TAIL_STATIC(0x60fee0u,60f);
}
B544d18:L544d18:{c.instructions+=4;NFSU2_TR(0x544d18);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B544d1e:{NFSU2_TR(0x544d1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B544d20:{NFSU2_TR(0x544d20);
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
B544d23:{NFSU2_TR(0x544d23);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544d26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B544d26:L544d26:{c.instructions+=7;NFSU2_TR(0x544d26);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d28:{NFSU2_TR(0x544d28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d2a:{NFSU2_TR(0x544d2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d2b:{NFSU2_TR(0x544d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d2c:{NFSU2_TR(0x544d2c);
w4(R+4,u32(0x8a2b68ull));
}
B544d31:{NFSU2_TR(0x544d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544d34:{NFSU2_TR(0x544d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544d39ull));
TAIL_STATIC(0x61ba30u,61b);
}
B544d39:L544d39:{c.instructions+=3;NFSU2_TR(0x544d39);
__builtin_memmove((R+24),(R+0),4);
}
B544d3b:{NFSU2_TR(0x544d3b);
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
B544d3d:{NFSU2_TR(0x544d3d);
if(r1(R+518)){{goto L544d8c;}}
}
B544d3f:L544d3f:{c.instructions+=1;NFSU2_TR(0x544d3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B544d42:L544d42:{c.instructions+=5;NFSU2_TR(0x544d42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544d45:{NFSU2_TR(0x544d45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B544d46:{NFSU2_TR(0x544d46);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d48:{NFSU2_TR(0x544d48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544d4b:{NFSU2_TR(0x544d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544d50ull));
TAIL_STATIC(0x575620u,575);
}
B544d50:L544d50:{c.instructions+=3;NFSU2_TR(0x544d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544d53:{NFSU2_TR(0x544d53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544d55:{NFSU2_TR(0x544d55);
if(r1(R+518)){{goto L544d63;}}
}
B544d57:L544d57:{c.instructions+=3;NFSU2_TR(0x544d57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544d5a:{NFSU2_TR(0x544d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544d61:{NFSU2_TR(0x544d61);
{goto L544d65;}
}
B544d63:L544d63:{c.instructions+=1;NFSU2_TR(0x544d63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544d65:L544d65:{c.instructions+=13;NFSU2_TR(0x544d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544d68:{NFSU2_TR(0x544d68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544d6a:{NFSU2_TR(0x544d6a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d6c:{NFSU2_TR(0x544d6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d6e:{NFSU2_TR(0x544d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544d71:{NFSU2_TR(0x544d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544d74:{NFSU2_TR(0x544d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544d77:{NFSU2_TR(0x544d77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d78:{NFSU2_TR(0x544d78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d79:{NFSU2_TR(0x544d79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544d7a:{NFSU2_TR(0x544d7a);
w4(R+4,u32(0x8a2b68ull));
}
B544d7f:{NFSU2_TR(0x544d7f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544d81:{NFSU2_TR(0x544d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544d86ull));
TAIL_STATIC(0x61ba50u,61b);
}
B544d86:L544d86:{c.instructions+=3;NFSU2_TR(0x544d86);
__builtin_memmove((R+24),(R+0),4);
}
B544d88:{NFSU2_TR(0x544d88);
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
B544d8a:{NFSU2_TR(0x544d8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544d42u);}goto L544d42;}}
}
B544d8c:L544d8c:{c.instructions+=2;NFSU2_TR(0x544d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544d8d:{NFSU2_TR(0x544d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544d8e:L544d8e:{c.instructions+=5;NFSU2_TR(0x544d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544d91:{NFSU2_TR(0x544d91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B544d92:{NFSU2_TR(0x544d92);
__builtin_memmove((R+16),(R+20),4);
}
B544d94:{NFSU2_TR(0x544d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B544d95:{NFSU2_TR(0x544d95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544e60:L544e60:{c.instructions+=19;NFSU2_TR(0x544e60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e62:{NFSU2_TR(0x544e62);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e67:{NFSU2_TR(0x544e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544e6d:{NFSU2_TR(0x544e6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e6e:{NFSU2_TR(0x544e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544e75:{NFSU2_TR(0x544e75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B544e78:{NFSU2_TR(0x544e78);
__builtin_memmove((R+0),(R+16),4);
}
B544e7c:{NFSU2_TR(0x544e7c);
__builtin_memmove((R+4),(R+16),4);
}
B544e80:{NFSU2_TR(0x544e80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e81:{NFSU2_TR(0x544e81);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544e85:{NFSU2_TR(0x544e85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544e89:{NFSU2_TR(0x544e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544e8d:{NFSU2_TR(0x544e8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e8f:{NFSU2_TR(0x544e8f);
u8 U[4];
w4(U+0,u32(0x29aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e94:{NFSU2_TR(0x544e94);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B544e98:{NFSU2_TR(0x544e98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e99:{NFSU2_TR(0x544e99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544e9a:{NFSU2_TR(0x544e9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544ea2:{NFSU2_TR(0x544ea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544ea7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5449c0u);}goto L5449c0;}
}
B544ea7:L544ea7:{c.instructions+=8;NFSU2_TR(0x544ea7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B544eaa:{NFSU2_TR(0x544eaa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B544ead:{NFSU2_TR(0x544ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544eb1:{NFSU2_TR(0x544eb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B544eb5:{NFSU2_TR(0x544eb5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+12),(U+0),1);
}
B544eb8:{NFSU2_TR(0x544eb8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544eba:{NFSU2_TR(0x544eba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B544ec2:{NFSU2_TR(0x544ec2);
if(r1(R+518)){{goto L544ee5;}}
}
B544ec4:L544ec4:{c.instructions+=7;NFSU2_TR(0x544ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B544ec6:{NFSU2_TR(0x544ec6);
__builtin_memmove((R+8),(R+0),4);
}
B544ec8:{NFSU2_TR(0x544ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544ecb:{NFSU2_TR(0x544ecb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544ecd:{NFSU2_TR(0x544ecd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544ece:{NFSU2_TR(0x544ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ed1:{NFSU2_TR(0x544ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544ed6ull));
TAIL_STATIC(0x575630u,575);
}
B544ed6:L544ed6:{c.instructions+=5;NFSU2_TR(0x544ed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544eda:{NFSU2_TR(0x544eda);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B544ede:{NFSU2_TR(0x544ede);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544ee1:{NFSU2_TR(0x544ee1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B544ee3:{NFSU2_TR(0x544ee3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544ec4u);}goto L544ec4;}}
}
B544ee5:L544ee5:{c.instructions+=6;NFSU2_TR(0x544ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544ee9:{NFSU2_TR(0x544ee9);
__builtin_memmove((R+0),(R+12),1);
}
B544eeb:{NFSU2_TR(0x544eeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B544eec:{NFSU2_TR(0x544eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ef3:{NFSU2_TR(0x544ef3);
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
B544ef6:{NFSU2_TR(0x544ef6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544f00:L544f00:{c.instructions+=2;NFSU2_TR(0x544f00);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f02:{NFSU2_TR(0x544f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544e60u);}goto L544e60;}
}
B544f07:L544f07:{c.instructions+=3;NFSU2_TR(0x544f07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544f0a:{NFSU2_TR(0x544f0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544f0c:{NFSU2_TR(0x544f0c);
if(r1(R+518)){{goto L544f74;}}
}
B544f0e:L544f0e:{c.instructions+=2;NFSU2_TR(0x544f0e);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f10:{NFSU2_TR(0x544f10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544e60u);}goto L544e60;}
}
B544f15:L544f15:{c.instructions+=3;NFSU2_TR(0x544f15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544f18:{NFSU2_TR(0x544f18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544f1a:{NFSU2_TR(0x544f1a);
if(r1(R+518)){{goto L544f74;}}
}
B544f1c:L544f1c:{c.instructions+=2;NFSU2_TR(0x544f1c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f1e:{NFSU2_TR(0x544f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544e60u);}goto L544e60;}
}
B544f23:L544f23:{c.instructions+=3;NFSU2_TR(0x544f23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544f26:{NFSU2_TR(0x544f26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544f28:{NFSU2_TR(0x544f28);
if(r1(R+518)){{goto L544f74;}}
}
B544f2a:L544f2a:{c.instructions+=2;NFSU2_TR(0x544f2a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f2c:{NFSU2_TR(0x544f2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x544e60u);}goto L544e60;}
}
B544f31:L544f31:{c.instructions+=3;NFSU2_TR(0x544f31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B544f34:{NFSU2_TR(0x544f34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544f36:{NFSU2_TR(0x544f36);
if(r1(R+518)){{goto L544f74;}}
}
B544f38:L544f38:{c.instructions+=5;NFSU2_TR(0x544f38);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B544f3d:{NFSU2_TR(0x544f3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f3e:{NFSU2_TR(0x544f3e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f40:{NFSU2_TR(0x544f40);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f42:{NFSU2_TR(0x544f42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f47ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B544f47:L544f47:{c.instructions+=2;NFSU2_TR(0x544f47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f48:{NFSU2_TR(0x544f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f4dull));
TAIL_STATIC(0x52a1a0u,52a);
}
B544f4d:L544f4d:{c.instructions+=3;NFSU2_TR(0x544f4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B544f50:{NFSU2_TR(0x544f50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B544f52:{NFSU2_TR(0x544f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L544f74;}}
}
B544f54:L544f54:{c.instructions+=5;NFSU2_TR(0x544f54);
__builtin_memmove((R+4),gp(0x8389b0),4);
}
B544f5a:{NFSU2_TR(0x544f5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f5b:{NFSU2_TR(0x544f5b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f5d:{NFSU2_TR(0x544f5d);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f5f:{NFSU2_TR(0x544f5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f64ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B544f64:L544f64:{c.instructions+=2;NFSU2_TR(0x544f64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f65:{NFSU2_TR(0x544f65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544f6aull));
TAIL_STATIC(0x52a1a0u,52a);
}
B544f6a:L544f6a:{c.instructions+=5;NFSU2_TR(0x544f6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B544f6d:{NFSU2_TR(0x544f6d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B544f6f:{NFSU2_TR(0x544f6f);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B544f71:{NFSU2_TR(0x544f71);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B544f73:{NFSU2_TR(0x544f73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544f74:L544f74:{c.instructions+=2;NFSU2_TR(0x544f74);
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
B544f76:{NFSU2_TR(0x544f76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B544f80:L544f80:{c.instructions+=18;NFSU2_TR(0x544f80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f82:{NFSU2_TR(0x544f82);
u8 U[4];
w4(U+0,u32(0x7779fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f87:{NFSU2_TR(0x544f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B544f8d:{NFSU2_TR(0x544f8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f8e:{NFSU2_TR(0x544f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544f95:{NFSU2_TR(0x544f95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f96:{NFSU2_TR(0x544f96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f97:{NFSU2_TR(0x544f97);
__builtin_memmove((R+12),(R+4),4);
}
B544f99:{NFSU2_TR(0x544f99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544f9a:{NFSU2_TR(0x544f9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B544f9d:{NFSU2_TR(0x544f9d);
u8 U[4];
w4(U+0,u32(0x79be30ull));
s4(u32(r4(R+12)),r4(U+0));
}
B544fa3:{NFSU2_TR(0x544fa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B544fa4:{NFSU2_TR(0x544fa4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fa8:{NFSU2_TR(0x544fa8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B544faa:{NFSU2_TR(0x544faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fad:{NFSU2_TR(0x544fad);
__builtin_memmove((R+28),gp(0x7fa1b0),4);
}
B544fb3:{NFSU2_TR(0x544fb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B544fbb:{NFSU2_TR(0x544fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544fc0ull));
TAIL_STATIC(0x440ec0u,440);
}
B544fc0:L544fc0:{c.instructions+=2;NFSU2_TR(0x544fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544fc2:{NFSU2_TR(0x544fc2);
if(r1(R+518)){{goto L544fc9;}}
}
B544fc4:L544fc4:{c.instructions+=2;NFSU2_TR(0x544fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fc7:{NFSU2_TR(0x544fc7);
{goto L544fcb;}
}
B544fc9:L544fc9:{c.instructions+=1;NFSU2_TR(0x544fc9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544fcb:L544fcb:{c.instructions+=7;NFSU2_TR(0x544fcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544fce:{NFSU2_TR(0x544fce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544fd0:{NFSU2_TR(0x544fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fd3:{NFSU2_TR(0x544fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fd6:{NFSU2_TR(0x544fd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544fd8:{NFSU2_TR(0x544fd8);
__builtin_memmove((R+28),gp(0x7fa1b4),4);
}
B544fde:{NFSU2_TR(0x544fde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x544fe3ull));
TAIL_STATIC(0x440ec0u,440);
}
B544fe3:L544fe3:{c.instructions+=2;NFSU2_TR(0x544fe3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B544fe5:{NFSU2_TR(0x544fe5);
if(r1(R+518)){{goto L544fec;}}
}
B544fe7:L544fe7:{c.instructions+=2;NFSU2_TR(0x544fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544fea:{NFSU2_TR(0x544fea);
{goto L544fee;}
}
B544fec:L544fec:{c.instructions+=1;NFSU2_TR(0x544fec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B544fee:L544fee:{c.instructions+=6;NFSU2_TR(0x544fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B544ff1:{NFSU2_TR(0x544ff1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B544ff3:{NFSU2_TR(0x544ff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ff6:{NFSU2_TR(0x544ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B544ff9:{NFSU2_TR(0x544ff9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B544ffb:{NFSU2_TR(0x544ffb);
__builtin_memmove((R+28),gp(0x7fa1b8),4);
TAIL_STATIC(0x545001u,545);
}
XIT:NFSU2_TR_EXIT(0x544,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
