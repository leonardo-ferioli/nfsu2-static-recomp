#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_544(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x545,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x545,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_545(u8* __restrict R,Cpu& c);
u32 page_545(Cpu& c){return body_545(c.regs.data(),c);}
__attribute__((noinline)) u32 body_545(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x545001:goto L545001;
case 0x545006:goto L545006;
case 0x545008:c.instructions+=1;goto B545008;
case 0x54500a:goto L54500a;
case 0x54500d:c.instructions+=1;goto B54500d;
case 0x54500f:goto L54500f;
case 0x545011:goto L545011;
case 0x545014:c.instructions+=6;goto B545014;
case 0x545016:c.instructions+=5;goto B545016;
case 0x545019:c.instructions+=4;goto B545019;
case 0x54501c:c.instructions+=3;goto B54501c;
case 0x54501e:c.instructions+=2;goto B54501e;
case 0x545024:c.instructions+=1;goto B545024;
case 0x545029:goto L545029;
case 0x54502b:c.instructions+=1;goto B54502b;
case 0x54502d:goto L54502d;
case 0x545030:c.instructions+=1;goto B545030;
case 0x545032:goto L545032;
case 0x545034:goto L545034;
case 0x545037:c.instructions+=6;goto B545037;
case 0x545039:c.instructions+=5;goto B545039;
case 0x54503c:c.instructions+=4;goto B54503c;
case 0x54503f:c.instructions+=3;goto B54503f;
case 0x545041:c.instructions+=2;goto B545041;
case 0x545047:c.instructions+=1;goto B545047;
case 0x54504c:goto L54504c;
case 0x54504e:c.instructions+=1;goto B54504e;
case 0x545050:goto L545050;
case 0x545053:c.instructions+=1;goto B545053;
case 0x545055:goto L545055;
case 0x545057:goto L545057;
case 0x54505a:c.instructions+=6;goto B54505a;
case 0x54505c:c.instructions+=5;goto B54505c;
case 0x54505f:c.instructions+=4;goto B54505f;
case 0x545062:c.instructions+=3;goto B545062;
case 0x545064:c.instructions+=2;goto B545064;
case 0x54506a:c.instructions+=1;goto B54506a;
case 0x54506f:goto L54506f;
case 0x545071:c.instructions+=1;goto B545071;
case 0x545073:goto L545073;
case 0x545076:c.instructions+=1;goto B545076;
case 0x545078:goto L545078;
case 0x54507a:goto L54507a;
case 0x54507d:c.instructions+=6;goto B54507d;
case 0x54507f:c.instructions+=5;goto B54507f;
case 0x545082:c.instructions+=4;goto B545082;
case 0x545085:c.instructions+=3;goto B545085;
case 0x545087:c.instructions+=2;goto B545087;
case 0x54508d:c.instructions+=1;goto B54508d;
case 0x545092:goto L545092;
case 0x545094:c.instructions+=1;goto B545094;
case 0x545096:goto L545096;
case 0x545099:c.instructions+=1;goto B545099;
case 0x54509b:goto L54509b;
case 0x54509d:goto L54509d;
case 0x5450a0:c.instructions+=6;goto B5450a0;
case 0x5450a2:c.instructions+=5;goto B5450a2;
case 0x5450a5:c.instructions+=4;goto B5450a5;
case 0x5450a8:c.instructions+=3;goto B5450a8;
case 0x5450aa:c.instructions+=2;goto B5450aa;
case 0x5450b0:c.instructions+=1;goto B5450b0;
case 0x5450b5:goto L5450b5;
case 0x5450b7:c.instructions+=1;goto B5450b7;
case 0x5450b9:goto L5450b9;
case 0x5450bc:c.instructions+=1;goto B5450bc;
case 0x5450be:goto L5450be;
case 0x5450c0:goto L5450c0;
case 0x5450c3:c.instructions+=6;goto B5450c3;
case 0x5450c5:c.instructions+=5;goto B5450c5;
case 0x5450c8:c.instructions+=4;goto B5450c8;
case 0x5450cb:c.instructions+=3;goto B5450cb;
case 0x5450cd:c.instructions+=2;goto B5450cd;
case 0x5450d3:c.instructions+=1;goto B5450d3;
case 0x5450d8:goto L5450d8;
case 0x5450da:c.instructions+=1;goto B5450da;
case 0x5450dc:goto L5450dc;
case 0x5450df:c.instructions+=1;goto B5450df;
case 0x5450e1:goto L5450e1;
case 0x5450e3:goto L5450e3;
case 0x5450e6:c.instructions+=6;goto B5450e6;
case 0x5450e8:c.instructions+=5;goto B5450e8;
case 0x5450eb:c.instructions+=4;goto B5450eb;
case 0x5450ee:c.instructions+=3;goto B5450ee;
case 0x5450f0:c.instructions+=2;goto B5450f0;
case 0x5450f6:c.instructions+=1;goto B5450f6;
case 0x5450fb:goto L5450fb;
case 0x5450fd:c.instructions+=1;goto B5450fd;
case 0x5450ff:goto L5450ff;
case 0x545102:c.instructions+=1;goto B545102;
case 0x545104:goto L545104;
case 0x545106:goto L545106;
case 0x545109:c.instructions+=6;goto B545109;
case 0x54510b:c.instructions+=5;goto B54510b;
case 0x54510e:c.instructions+=4;goto B54510e;
case 0x545111:c.instructions+=3;goto B545111;
case 0x545113:c.instructions+=2;goto B545113;
case 0x545119:c.instructions+=1;goto B545119;
case 0x54511e:goto L54511e;
case 0x545120:c.instructions+=1;goto B545120;
case 0x545122:goto L545122;
case 0x545125:c.instructions+=1;goto B545125;
case 0x545127:goto L545127;
case 0x545129:goto L545129;
case 0x54512c:c.instructions+=6;goto B54512c;
case 0x54512e:c.instructions+=5;goto B54512e;
case 0x545131:c.instructions+=4;goto B545131;
case 0x545134:c.instructions+=3;goto B545134;
case 0x545136:c.instructions+=2;goto B545136;
case 0x54513c:c.instructions+=1;goto B54513c;
case 0x545141:goto L545141;
case 0x545143:c.instructions+=1;goto B545143;
case 0x545145:goto L545145;
case 0x545148:c.instructions+=1;goto B545148;
case 0x54514a:goto L54514a;
case 0x54514c:goto L54514c;
case 0x54514f:c.instructions+=6;goto B54514f;
case 0x545151:c.instructions+=5;goto B545151;
case 0x545154:c.instructions+=4;goto B545154;
case 0x545157:c.instructions+=3;goto B545157;
case 0x545159:c.instructions+=2;goto B545159;
case 0x54515f:c.instructions+=1;goto B54515f;
case 0x545164:goto L545164;
case 0x545166:c.instructions+=1;goto B545166;
case 0x545168:goto L545168;
case 0x54516b:c.instructions+=1;goto B54516b;
case 0x54516d:goto L54516d;
case 0x54516f:goto L54516f;
case 0x545172:c.instructions+=6;goto B545172;
case 0x545174:c.instructions+=5;goto B545174;
case 0x545177:c.instructions+=4;goto B545177;
case 0x54517a:c.instructions+=3;goto B54517a;
case 0x54517c:c.instructions+=2;goto B54517c;
case 0x545182:c.instructions+=1;goto B545182;
case 0x545187:goto L545187;
case 0x545189:c.instructions+=1;goto B545189;
case 0x54518b:goto L54518b;
case 0x54518e:c.instructions+=1;goto B54518e;
case 0x545190:goto L545190;
case 0x545192:goto L545192;
case 0x545195:c.instructions+=6;goto B545195;
case 0x545197:c.instructions+=5;goto B545197;
case 0x54519a:c.instructions+=4;goto B54519a;
case 0x54519d:c.instructions+=3;goto B54519d;
case 0x54519f:c.instructions+=2;goto B54519f;
case 0x5451a5:c.instructions+=1;goto B5451a5;
case 0x5451aa:goto L5451aa;
case 0x5451ac:c.instructions+=1;goto B5451ac;
case 0x5451ae:goto L5451ae;
case 0x5451b1:c.instructions+=1;goto B5451b1;
case 0x5451b3:goto L5451b3;
case 0x5451b5:goto L5451b5;
case 0x5451b8:c.instructions+=6;goto B5451b8;
case 0x5451ba:c.instructions+=5;goto B5451ba;
case 0x5451bd:c.instructions+=4;goto B5451bd;
case 0x5451c0:c.instructions+=3;goto B5451c0;
case 0x5451c2:c.instructions+=2;goto B5451c2;
case 0x5451c8:c.instructions+=1;goto B5451c8;
case 0x5451cd:goto L5451cd;
case 0x5451cf:c.instructions+=1;goto B5451cf;
case 0x5451d1:goto L5451d1;
case 0x5451d4:c.instructions+=1;goto B5451d4;
case 0x5451d6:goto L5451d6;
case 0x5451d8:goto L5451d8;
case 0x5451db:c.instructions+=6;goto B5451db;
case 0x5451dd:c.instructions+=5;goto B5451dd;
case 0x5451e0:c.instructions+=4;goto B5451e0;
case 0x5451e3:c.instructions+=3;goto B5451e3;
case 0x5451e5:c.instructions+=2;goto B5451e5;
case 0x5451eb:c.instructions+=1;goto B5451eb;
case 0x5451f0:goto L5451f0;
case 0x5451f2:c.instructions+=1;goto B5451f2;
case 0x5451f4:goto L5451f4;
case 0x5451f7:c.instructions+=1;goto B5451f7;
case 0x5451f9:goto L5451f9;
case 0x5451fb:goto L5451fb;
case 0x5451fe:c.instructions+=6;goto B5451fe;
case 0x545200:c.instructions+=5;goto B545200;
case 0x545203:c.instructions+=4;goto B545203;
case 0x545206:c.instructions+=3;goto B545206;
case 0x545208:c.instructions+=2;goto B545208;
case 0x54520e:c.instructions+=1;goto B54520e;
case 0x545213:goto L545213;
case 0x545215:c.instructions+=1;goto B545215;
case 0x545217:goto L545217;
case 0x54521a:c.instructions+=1;goto B54521a;
case 0x54521c:goto L54521c;
case 0x54521e:goto L54521e;
case 0x545221:c.instructions+=6;goto B545221;
case 0x545223:c.instructions+=5;goto B545223;
case 0x545226:c.instructions+=4;goto B545226;
case 0x545229:c.instructions+=3;goto B545229;
case 0x54522b:c.instructions+=2;goto B54522b;
case 0x545231:c.instructions+=1;goto B545231;
case 0x545236:goto L545236;
case 0x545238:c.instructions+=1;goto B545238;
case 0x54523a:goto L54523a;
case 0x54523d:c.instructions+=1;goto B54523d;
case 0x54523f:goto L54523f;
case 0x545241:goto L545241;
case 0x545244:c.instructions+=6;goto B545244;
case 0x545246:c.instructions+=5;goto B545246;
case 0x545249:c.instructions+=4;goto B545249;
case 0x54524c:c.instructions+=3;goto B54524c;
case 0x54524e:c.instructions+=2;goto B54524e;
case 0x545254:c.instructions+=1;goto B545254;
case 0x545259:goto L545259;
case 0x54525b:c.instructions+=1;goto B54525b;
case 0x54525d:goto L54525d;
case 0x545260:c.instructions+=1;goto B545260;
case 0x545262:goto L545262;
case 0x545264:goto L545264;
case 0x545267:c.instructions+=7;goto B545267;
case 0x545269:c.instructions+=6;goto B545269;
case 0x54526c:c.instructions+=5;goto B54526c;
case 0x54526f:c.instructions+=4;goto B54526f;
case 0x545271:c.instructions+=3;goto B545271;
case 0x545273:c.instructions+=2;goto B545273;
case 0x545275:c.instructions+=1;goto B545275;
case 0x545277:goto L545277;
case 0x54527c:c.instructions+=2;goto B54527c;
case 0x54527e:c.instructions+=1;goto B54527e;
case 0x545280:goto L545280;
case 0x545285:c.instructions+=1;goto B545285;
case 0x545287:goto L545287;
case 0x54528c:c.instructions+=2;goto B54528c;
case 0x54528f:c.instructions+=1;goto B54528f;
case 0x545291:goto L545291;
case 0x545298:goto L545298;
case 0x54529d:c.instructions+=1;goto B54529d;
case 0x54529f:goto L54529f;
case 0x5452a4:c.instructions+=1;goto B5452a4;
case 0x5452a6:goto L5452a6;
case 0x5452ab:c.instructions+=1;goto B5452ab;
case 0x5452ad:goto L5452ad;
case 0x5452b2:c.instructions+=1;goto B5452b2;
case 0x5452b4:goto L5452b4;
case 0x5452b9:goto L5452b9;
case 0x5452bc:c.instructions+=3;goto B5452bc;
case 0x5452bd:c.instructions+=2;goto B5452bd;
case 0x5452be:c.instructions+=1;goto B5452be;
case 0x5452c3:goto L5452c3;
case 0x5452c6:c.instructions+=2;goto B5452c6;
case 0x5452c8:c.instructions+=1;goto B5452c8;
case 0x5452ca:goto L5452ca;
case 0x5452cc:c.instructions+=2;goto B5452cc;
case 0x5452ce:c.instructions+=1;goto B5452ce;
case 0x5452d0:goto L5452d0;
case 0x5452d4:c.instructions+=8;goto B5452d4;
case 0x5452d7:c.instructions+=7;goto B5452d7;
case 0x5452d8:c.instructions+=6;goto B5452d8;
case 0x5452d9:c.instructions+=5;goto B5452d9;
case 0x5452db:c.instructions+=4;goto B5452db;
case 0x5452dc:c.instructions+=3;goto B5452dc;
case 0x5452e3:c.instructions+=2;goto B5452e3;
case 0x5452e6:c.instructions+=1;goto B5452e6;
case 0x545310:goto L545310;
case 0x545311:c.instructions+=2;goto B545311;
case 0x545313:c.instructions+=1;goto B545313;
case 0x545318:goto L545318;
case 0x54531d:c.instructions+=1;goto B54531d;
case 0x54531f:goto L54531f;
case 0x545320:c.instructions+=1;goto B545320;
case 0x545325:goto L545325;
case 0x545328:goto L545328;
case 0x54532a:c.instructions+=2;goto B54532a;
case 0x54532b:c.instructions+=1;goto B54532b;
case 0x545330:goto L545330;
case 0x545331:c.instructions+=2;goto B545331;
case 0x545333:c.instructions+=1;goto B545333;
case 0x545338:goto L545338;
case 0x54533d:c.instructions+=1;goto B54533d;
case 0x54533f:goto L54533f;
case 0x545340:c.instructions+=1;goto B545340;
case 0x545345:goto L545345;
case 0x545348:goto L545348;
case 0x54534a:c.instructions+=2;goto B54534a;
case 0x54534b:c.instructions+=1;goto B54534b;
case 0x545350:goto L545350;
case 0x545352:c.instructions+=14;goto B545352;
case 0x545357:c.instructions+=13;goto B545357;
case 0x54535d:c.instructions+=12;goto B54535d;
case 0x54535e:c.instructions+=11;goto B54535e;
case 0x545365:c.instructions+=10;goto B545365;
case 0x545366:c.instructions+=9;goto B545366;
case 0x545367:c.instructions+=8;goto B545367;
case 0x545368:c.instructions+=7;goto B545368;
case 0x54536a:c.instructions+=6;goto B54536a;
case 0x54536e:c.instructions+=5;goto B54536e;
case 0x545371:c.instructions+=4;goto B545371;
case 0x545374:c.instructions+=3;goto B545374;
case 0x545376:c.instructions+=2;goto B545376;
case 0x54537e:c.instructions+=1;goto B54537e;
case 0x545380:goto L545380;
case 0x545382:c.instructions+=5;goto B545382;
case 0x545385:c.instructions+=4;goto B545385;
case 0x545387:c.instructions+=3;goto B545387;
case 0x545388:c.instructions+=2;goto B545388;
case 0x54538b:c.instructions+=1;goto B54538b;
case 0x545390:goto L545390;
case 0x545392:c.instructions+=3;goto B545392;
case 0x545395:c.instructions+=2;goto B545395;
case 0x545397:c.instructions+=1;goto B545397;
case 0x545399:goto L545399;
case 0x54539d:c.instructions+=6;goto B54539d;
case 0x5453a3:c.instructions+=5;goto B5453a3;
case 0x5453a4:c.instructions+=4;goto B5453a4;
case 0x5453a5:c.instructions+=3;goto B5453a5;
case 0x5453ac:c.instructions+=2;goto B5453ac;
case 0x5453af:c.instructions+=1;goto B5453af;
case 0x5453b0:goto L5453b0;
case 0x5453b1:c.instructions+=6;goto B5453b1;
case 0x5453b2:c.instructions+=5;goto B5453b2;
case 0x5453b4:c.instructions+=4;goto B5453b4;
case 0x5453b7:c.instructions+=3;goto B5453b7;
case 0x5453bc:c.instructions+=2;goto B5453bc;
case 0x5453bd:c.instructions+=1;goto B5453bd;
case 0x5453c2:goto L5453c2;
case 0x5453c5:c.instructions+=3;goto B5453c5;
case 0x5453c8:c.instructions+=2;goto B5453c8;
case 0x5453ca:c.instructions+=1;goto B5453ca;
case 0x5453cc:goto L5453cc;
case 0x5453cd:c.instructions+=1;goto B5453cd;
case 0x5453d2:goto L5453d2;
case 0x5453d5:c.instructions+=2;goto B5453d5;
case 0x5453d7:c.instructions+=1;goto B5453d7;
case 0x5453d9:goto L5453d9;
case 0x5453de:c.instructions+=2;goto B5453de;
case 0x5453e0:c.instructions+=1;goto B5453e0;
case 0x5453e5:goto L5453e5;
case 0x5453e7:c.instructions+=1;goto B5453e7;
case 0x5453e9:goto L5453e9;
case 0x5453ee:c.instructions+=2;goto B5453ee;
case 0x5453f0:c.instructions+=1;goto B5453f0;
case 0x5453f2:goto L5453f2;
case 0x5453f5:c.instructions+=3;goto B5453f5;
case 0x5453f6:c.instructions+=2;goto B5453f6;
case 0x5453fb:c.instructions+=1;goto B5453fb;
case 0x545400:goto L545400;
case 0x545402:c.instructions+=2;goto B545402;
case 0x545404:c.instructions+=1;goto B545404;
case 0x545406:goto L545406;
case 0x545409:c.instructions+=2;goto B545409;
case 0x54540b:c.instructions+=1;goto B54540b;
case 0x54540d:goto L54540d;
case 0x545410:goto L545410;
case 0x545415:c.instructions+=1;goto B545415;
case 0x54541a:goto L54541a;
case 0x54541d:c.instructions+=3;goto B54541d;
case 0x545420:c.instructions+=2;goto B545420;
case 0x545422:c.instructions+=1;goto B545422;
case 0x545424:goto L545424;
case 0x545427:c.instructions+=2;goto B545427;
case 0x545429:c.instructions+=1;goto B545429;
case 0x54542b:goto L54542b;
case 0x54542c:c.instructions+=2;goto B54542c;
case 0x54542d:c.instructions+=1;goto B54542d;
case 0x54542e:goto L54542e;
case 0x545430:c.instructions+=1;goto B545430;
case 0x545432:goto L545432;
case 0x545435:c.instructions+=1;goto B545435;
case 0x545437:goto L545437;
case 0x545439:c.instructions+=2;goto B545439;
case 0x54543c:c.instructions+=1;goto B54543c;
case 0x545441:goto L545441;
case 0x545444:c.instructions+=1;goto B545444;
case 0x54544b:goto L54544b;
case 0x545452:goto L545452;
case 0x545453:c.instructions+=2;goto B545453;
case 0x545454:c.instructions+=1;goto B545454;
case 0x545460:goto L545460;
case 0x545461:c.instructions+=6;goto B545461;
case 0x545462:c.instructions+=5;goto B545462;
case 0x545464:c.instructions+=4;goto B545464;
case 0x545467:c.instructions+=3;goto B545467;
case 0x54546c:c.instructions+=2;goto B54546c;
case 0x54546d:c.instructions+=1;goto B54546d;
case 0x545472:goto L545472;
case 0x545475:c.instructions+=3;goto B545475;
case 0x545478:c.instructions+=2;goto B545478;
case 0x54547a:c.instructions+=1;goto B54547a;
case 0x54547c:goto L54547c;
case 0x54547d:c.instructions+=1;goto B54547d;
case 0x545482:goto L545482;
case 0x545485:c.instructions+=2;goto B545485;
case 0x545487:c.instructions+=1;goto B545487;
case 0x545489:goto L545489;
case 0x54548e:c.instructions+=2;goto B54548e;
case 0x545490:c.instructions+=1;goto B545490;
case 0x545495:goto L545495;
case 0x545497:c.instructions+=1;goto B545497;
case 0x545499:goto L545499;
case 0x54549e:c.instructions+=2;goto B54549e;
case 0x5454a0:c.instructions+=1;goto B5454a0;
case 0x5454a2:goto L5454a2;
case 0x5454a5:c.instructions+=3;goto B5454a5;
case 0x5454a6:c.instructions+=2;goto B5454a6;
case 0x5454ab:c.instructions+=1;goto B5454ab;
case 0x5454b0:goto L5454b0;
case 0x5454b2:c.instructions+=2;goto B5454b2;
case 0x5454b4:c.instructions+=1;goto B5454b4;
case 0x5454b6:goto L5454b6;
case 0x5454b9:c.instructions+=2;goto B5454b9;
case 0x5454bb:c.instructions+=1;goto B5454bb;
case 0x5454bd:goto L5454bd;
case 0x5454c0:goto L5454c0;
case 0x5454c5:c.instructions+=1;goto B5454c5;
case 0x5454ca:goto L5454ca;
case 0x5454cd:c.instructions+=3;goto B5454cd;
case 0x5454d0:c.instructions+=2;goto B5454d0;
case 0x5454d2:c.instructions+=1;goto B5454d2;
case 0x5454d4:goto L5454d4;
case 0x5454d7:c.instructions+=2;goto B5454d7;
case 0x5454d9:c.instructions+=1;goto B5454d9;
case 0x5454db:goto L5454db;
case 0x5454dc:c.instructions+=2;goto B5454dc;
case 0x5454dd:c.instructions+=1;goto B5454dd;
case 0x5454de:goto L5454de;
case 0x5454e0:c.instructions+=1;goto B5454e0;
case 0x5454e2:goto L5454e2;
case 0x5454e5:c.instructions+=1;goto B5454e5;
case 0x5454e7:goto L5454e7;
case 0x5454e9:c.instructions+=2;goto B5454e9;
case 0x5454ec:c.instructions+=1;goto B5454ec;
case 0x5454f1:goto L5454f1;
case 0x5454f4:c.instructions+=1;goto B5454f4;
case 0x5454fb:goto L5454fb;
case 0x545502:goto L545502;
case 0x545503:c.instructions+=2;goto B545503;
case 0x545504:c.instructions+=1;goto B545504;
case 0x545510:goto L545510;
case 0x545511:c.instructions+=5;goto B545511;
case 0x545513:c.instructions+=4;goto B545513;
case 0x545514:c.instructions+=3;goto B545514;
case 0x545517:c.instructions+=2;goto B545517;
case 0x545519:c.instructions+=1;goto B545519;
case 0x54551e:goto L54551e;
case 0x54551f:c.instructions+=5;goto B54551f;
case 0x545525:c.instructions+=4;goto B545525;
case 0x545526:c.instructions+=3;goto B545526;
case 0x545528:c.instructions+=2;goto B545528;
case 0x54552e:c.instructions+=1;goto B54552e;
case 0x545533:goto L545533;
case 0x545539:c.instructions+=1;goto B545539;
case 0x54553e:goto L54553e;
case 0x545544:c.instructions+=5;goto B545544;
case 0x545545:c.instructions+=4;goto B545545;
case 0x545546:c.instructions+=3;goto B545546;
case 0x545548:c.instructions+=2;goto B545548;
case 0x54554e:c.instructions+=1;goto B54554e;
case 0x545553:goto L545553;
case 0x545556:c.instructions+=2;goto B545556;
case 0x545558:c.instructions+=1;goto B545558;
case 0x54555a:goto L54555a;
case 0x54555d:c.instructions+=1;goto B54555d;
case 0x54555f:goto L54555f;
case 0x545561:goto L545561;
case 0x545564:c.instructions+=1;goto B545564;
case 0x545566:goto L545566;
case 0x54556c:c.instructions+=2;goto B54556c;
case 0x54556d:c.instructions+=1;goto B54556d;
case 0x545572:goto L545572;
case 0x545575:c.instructions+=1;goto B545575;
case 0x545577:goto L545577;
case 0x54557a:c.instructions+=2;goto B54557a;
case 0x54557c:c.instructions+=1;goto B54557c;
case 0x54557e:goto L54557e;
case 0x545581:c.instructions+=1;goto B545581;
case 0x545583:goto L545583;
case 0x545585:goto L545585;
case 0x545588:c.instructions+=1;goto B545588;
case 0x54558a:goto L54558a;
case 0x545590:c.instructions+=2;goto B545590;
case 0x545591:c.instructions+=1;goto B545591;
case 0x545596:goto L545596;
case 0x545599:c.instructions+=1;goto B545599;
case 0x54559b:goto L54559b;
case 0x5455a1:c.instructions+=2;goto B5455a1;
case 0x5455a2:c.instructions+=1;goto B5455a2;
case 0x5455a7:goto L5455a7;
case 0x5455ad:c.instructions+=2;goto B5455ad;
case 0x5455ae:c.instructions+=1;goto B5455ae;
case 0x5455b3:goto L5455b3;
case 0x5455b6:goto L5455b6;
case 0x5455bc:c.instructions+=3;goto B5455bc;
case 0x5455be:c.instructions+=2;goto B5455be;
case 0x5455c0:c.instructions+=1;goto B5455c0;
case 0x5455c2:goto L5455c2;
case 0x5455c5:c.instructions+=1;goto B5455c5;
case 0x5455c7:goto L5455c7;
case 0x5455c8:c.instructions+=1;goto B5455c8;
case 0x5455ca:goto L5455ca;
case 0x5455cf:c.instructions+=1;goto B5455cf;
case 0x5455d1:goto L5455d1;
case 0x5455d6:c.instructions+=1;goto B5455d6;
case 0x5455d8:goto L5455d8;
case 0x5455dd:c.instructions+=5;goto B5455dd;
case 0x5455de:c.instructions+=4;goto B5455de;
case 0x5455e0:c.instructions+=3;goto B5455e0;
case 0x5455e2:c.instructions+=2;goto B5455e2;
case 0x5455e7:c.instructions+=1;goto B5455e7;
case 0x5455ec:goto L5455ec;
case 0x5455f2:c.instructions+=2;goto B5455f2;
case 0x5455f4:c.instructions+=1;goto B5455f4;
case 0x5455f6:goto L5455f6;
case 0x5455fb:c.instructions+=1;goto B5455fb;
case 0x5455fd:goto L5455fd;
case 0x545603:c.instructions+=2;goto B545603;
case 0x545605:c.instructions+=1;goto B545605;
case 0x545607:goto L545607;
case 0x54560c:goto L54560c;
case 0x54560d:c.instructions+=4;goto B54560d;
case 0x545610:c.instructions+=3;goto B545610;
case 0x545615:c.instructions+=2;goto B545615;
case 0x545616:c.instructions+=1;goto B545616;
case 0x54561b:goto L54561b;
case 0x54561e:c.instructions+=3;goto B54561e;
case 0x545621:c.instructions+=2;goto B545621;
case 0x545623:c.instructions+=1;goto B545623;
case 0x545625:goto L545625;
case 0x545628:c.instructions+=5;goto B545628;
case 0x54562b:c.instructions+=4;goto B54562b;
case 0x54562c:c.instructions+=3;goto B54562c;
case 0x545631:c.instructions+=2;goto B545631;
case 0x545632:c.instructions+=1;goto B545632;
case 0x545637:goto L545637;
case 0x54563a:goto L54563a;
case 0x545640:c.instructions+=3;goto B545640;
case 0x545646:c.instructions+=2;goto B545646;
case 0x545648:c.instructions+=1;goto B545648;
case 0x54564a:goto L54564a;
case 0x54564c:c.instructions+=1;goto B54564c;
case 0x54564e:goto L54564e;
case 0x545654:goto L545654;
case 0x545656:c.instructions+=1;goto B545656;
case 0x545658:goto L545658;
case 0x54565b:c.instructions+=5;goto B54565b;
case 0x54565c:c.instructions+=4;goto B54565c;
case 0x54565f:c.instructions+=3;goto B54565f;
case 0x545660:c.instructions+=2;goto B545660;
case 0x545662:c.instructions+=1;goto B545662;
case 0x545667:goto L545667;
case 0x545668:c.instructions+=3;goto B545668;
case 0x54566d:c.instructions+=2;goto B54566d;
case 0x54566e:c.instructions+=1;goto B54566e;
case 0x545673:goto L545673;
case 0x545676:c.instructions+=1;goto B545676;
case 0x545677:goto L545677;
case 0x54567d:c.instructions+=3;goto B54567d;
case 0x545682:c.instructions+=2;goto B545682;
case 0x545684:c.instructions+=1;goto B545684;
case 0x545686:goto L545686;
case 0x54568c:c.instructions+=1;goto B54568c;
case 0x54568e:goto L54568e;
case 0x545691:c.instructions+=4;goto B545691;
case 0x545694:c.instructions+=3;goto B545694;
case 0x54569a:c.instructions+=2;goto B54569a;
case 0x54569c:c.instructions+=1;goto B54569c;
case 0x54569e:goto L54569e;
case 0x5456a3:c.instructions+=1;goto B5456a3;
case 0x5456a5:goto L5456a5;
case 0x5456ab:c.instructions+=2;goto B5456ab;
case 0x5456ad:c.instructions+=1;goto B5456ad;
case 0x5456af:goto L5456af;
case 0x5456b4:goto L5456b4;
case 0x5456b6:c.instructions+=1;goto B5456b6;
case 0x5456b8:goto L5456b8;
case 0x5456bb:c.instructions+=5;goto B5456bb;
case 0x5456be:c.instructions+=4;goto B5456be;
case 0x5456bf:c.instructions+=3;goto B5456bf;
case 0x5456c0:c.instructions+=2;goto B5456c0;
case 0x5456c5:c.instructions+=1;goto B5456c5;
case 0x5456ca:goto L5456ca;
case 0x5456cb:c.instructions+=4;goto B5456cb;
case 0x5456d0:c.instructions+=3;goto B5456d0;
case 0x5456d5:c.instructions+=2;goto B5456d5;
case 0x5456d6:c.instructions+=1;goto B5456d6;
case 0x5456db:goto L5456db;
case 0x5456de:c.instructions+=3;goto B5456de;
case 0x5456df:c.instructions+=2;goto B5456df;
case 0x5456e0:c.instructions+=1;goto B5456e0;
case 0x5456e1:goto L5456e1;
case 0x5456e4:c.instructions+=3;goto B5456e4;
case 0x5456e9:c.instructions+=2;goto B5456e9;
case 0x5456ea:c.instructions+=1;goto B5456ea;
case 0x5456ef:goto L5456ef;
case 0x5456f2:goto L5456f2;
case 0x5456f3:c.instructions+=2;goto B5456f3;
case 0x5456f4:c.instructions+=1;goto B5456f4;
case 0x545700:goto L545700;
case 0x545701:c.instructions+=15;goto B545701;
case 0x545703:c.instructions+=14;goto B545703;
case 0x545706:c.instructions+=13;goto B545706;
case 0x545708:c.instructions+=12;goto B545708;
case 0x54570d:c.instructions+=11;goto B54570d;
case 0x545713:c.instructions+=10;goto B545713;
case 0x545714:c.instructions+=9;goto B545714;
case 0x54571b:c.instructions+=8;goto B54571b;
case 0x54571e:c.instructions+=7;goto B54571e;
case 0x54571f:c.instructions+=6;goto B54571f;
case 0x545720:c.instructions+=5;goto B545720;
case 0x545721:c.instructions+=4;goto B545721;
case 0x545723:c.instructions+=3;goto B545723;
case 0x545725:c.instructions+=2;goto B545725;
case 0x545729:c.instructions+=1;goto B545729;
case 0x54572e:goto L54572e;
case 0x545731:c.instructions+=4;goto B545731;
case 0x545733:c.instructions+=3;goto B545733;
case 0x545736:c.instructions+=2;goto B545736;
case 0x545738:c.instructions+=1;goto B545738;
case 0x54573a:goto L54573a;
case 0x54573d:c.instructions+=18;goto B54573d;
case 0x545740:c.instructions+=17;goto B545740;
case 0x545743:c.instructions+=16;goto B545743;
case 0x545746:c.instructions+=15;goto B545746;
case 0x545749:c.instructions+=14;goto B545749;
case 0x54574c:c.instructions+=13;goto B54574c;
case 0x54574f:c.instructions+=12;goto B54574f;
case 0x545752:c.instructions+=11;goto B545752;
case 0x545756:c.instructions+=10;goto B545756;
case 0x54575c:c.instructions+=9;goto B54575c;
case 0x54575f:c.instructions+=8;goto B54575f;
case 0x545763:c.instructions+=7;goto B545763;
case 0x545765:c.instructions+=6;goto B545765;
case 0x545768:c.instructions+=5;goto B545768;
case 0x54576a:c.instructions+=4;goto B54576a;
case 0x54576d:c.instructions+=3;goto B54576d;
case 0x545770:c.instructions+=2;goto B545770;
case 0x545774:c.instructions+=1;goto B545774;
case 0x545776:goto L545776;
case 0x54577a:c.instructions+=1;goto B54577a;
case 0x54577c:goto L54577c;
case 0x545780:c.instructions+=14;goto B545780;
case 0x545784:c.instructions+=13;goto B545784;
case 0x545788:c.instructions+=12;goto B545788;
case 0x54578c:c.instructions+=11;goto B54578c;
case 0x54578f:c.instructions+=10;goto B54578f;
case 0x545791:c.instructions+=9;goto B545791;
case 0x545792:c.instructions+=8;goto B545792;
case 0x545796:c.instructions+=7;goto B545796;
case 0x54579a:c.instructions+=6;goto B54579a;
case 0x54579c:c.instructions+=5;goto B54579c;
case 0x5457a1:c.instructions+=4;goto B5457a1;
case 0x5457a2:c.instructions+=3;goto B5457a2;
case 0x5457a3:c.instructions+=2;goto B5457a3;
case 0x5457a4:c.instructions+=1;goto B5457a4;
case 0x5457a9:goto L5457a9;
case 0x5457ac:c.instructions+=6;goto B5457ac;
case 0x5457ae:c.instructions+=5;goto B5457ae;
case 0x5457b1:c.instructions+=4;goto B5457b1;
case 0x5457b3:c.instructions+=3;goto B5457b3;
case 0x5457b6:c.instructions+=2;goto B5457b6;
case 0x5457b8:c.instructions+=1;goto B5457b8;
case 0x5457ba:goto L5457ba;
case 0x5457be:c.instructions+=3;goto B5457be;
case 0x5457c2:c.instructions+=2;goto B5457c2;
case 0x5457c4:c.instructions+=1;goto B5457c4;
case 0x5457c6:goto L5457c6;
case 0x5457c9:c.instructions+=1;goto B5457c9;
case 0x5457d0:goto L5457d0;
case 0x5457d2:c.instructions+=13;goto B5457d2;
case 0x5457d5:c.instructions+=12;goto B5457d5;
case 0x5457d7:c.instructions+=11;goto B5457d7;
case 0x5457da:c.instructions+=10;goto B5457da;
case 0x5457dd:c.instructions+=9;goto B5457dd;
case 0x5457e0:c.instructions+=8;goto B5457e0;
case 0x5457e2:c.instructions+=7;goto B5457e2;
case 0x5457e5:c.instructions+=6;goto B5457e5;
case 0x5457e7:c.instructions+=5;goto B5457e7;
case 0x5457e9:c.instructions+=4;goto B5457e9;
case 0x5457ed:c.instructions+=3;goto B5457ed;
case 0x5457f1:c.instructions+=2;goto B5457f1;
case 0x5457f3:c.instructions+=1;goto B5457f3;
case 0x5457f5:goto L5457f5;
case 0x5457f9:c.instructions+=2;goto B5457f9;
case 0x5457fd:c.instructions+=1;goto B5457fd;
case 0x5457ff:goto L5457ff;
case 0x545803:goto L545803;
case 0x545805:c.instructions+=4;goto B545805;
case 0x545807:c.instructions+=3;goto B545807;
case 0x545808:c.instructions+=2;goto B545808;
case 0x54580b:c.instructions+=1;goto B54580b;
case 0x545810:goto L545810;
case 0x545812:c.instructions+=1;goto B545812;
case 0x545814:goto L545814;
case 0x545817:c.instructions+=2;goto B545817;
case 0x54581a:c.instructions+=1;goto B54581a;
case 0x54581c:goto L54581c;
case 0x54581f:c.instructions+=1;goto B54581f;
case 0x545826:goto L545826;
case 0x54582c:c.instructions+=7;goto B54582c;
case 0x545830:c.instructions+=6;goto B545830;
case 0x545831:c.instructions+=5;goto B545831;
case 0x545835:c.instructions+=4;goto B545835;
case 0x545837:c.instructions+=3;goto B545837;
case 0x54583d:c.instructions+=2;goto B54583d;
case 0x545845:c.instructions+=1;goto B545845;
case 0x545847:goto L545847;
case 0x545849:c.instructions+=6;goto B545849;
case 0x54584b:c.instructions+=5;goto B54584b;
case 0x54584e:c.instructions+=4;goto B54584e;
case 0x545850:c.instructions+=3;goto B545850;
case 0x545851:c.instructions+=2;goto B545851;
case 0x545854:c.instructions+=1;goto B545854;
case 0x545859:goto L545859;
case 0x54585d:c.instructions+=4;goto B54585d;
case 0x545861:c.instructions+=3;goto B545861;
case 0x545864:c.instructions+=2;goto B545864;
case 0x545866:c.instructions+=1;goto B545866;
case 0x545868:goto L545868;
case 0x54586c:c.instructions+=7;goto B54586c;
case 0x54586d:c.instructions+=6;goto B54586d;
case 0x54586e:c.instructions+=5;goto B54586e;
case 0x545875:c.instructions+=4;goto B545875;
case 0x545876:c.instructions+=3;goto B545876;
case 0x545878:c.instructions+=2;goto B545878;
case 0x545879:c.instructions+=1;goto B545879;
case 0x545880:goto L545880;
case 0x545881:c.instructions+=4;goto B545881;
case 0x545882:c.instructions+=3;goto B545882;
case 0x545883:c.instructions+=2;goto B545883;
case 0x545885:c.instructions+=1;goto B545885;
case 0x54588a:goto L54588a;
case 0x54588c:c.instructions+=2;goto B54588c;
case 0x545890:c.instructions+=1;goto B545890;
case 0x545895:goto L545895;
case 0x545897:c.instructions+=4;goto B545897;
case 0x54589a:c.instructions+=3;goto B54589a;
case 0x54589c:c.instructions+=2;goto B54589c;
case 0x5458a1:c.instructions+=1;goto B5458a1;
case 0x5458a3:goto L5458a3;
case 0x5458a7:c.instructions+=17;goto B5458a7;
case 0x5458aa:c.instructions+=16;goto B5458aa;
case 0x5458ad:c.instructions+=15;goto B5458ad;
case 0x5458b4:c.instructions+=14;goto B5458b4;
case 0x5458b7:c.instructions+=13;goto B5458b7;
case 0x5458ba:c.instructions+=12;goto B5458ba;
case 0x5458bd:c.instructions+=11;goto B5458bd;
case 0x5458c0:c.instructions+=10;goto B5458c0;
case 0x5458c3:c.instructions+=9;goto B5458c3;
case 0x5458c9:c.instructions+=8;goto B5458c9;
case 0x5458cc:c.instructions+=7;goto B5458cc;
case 0x5458cf:c.instructions+=6;goto B5458cf;
case 0x5458d1:c.instructions+=5;goto B5458d1;
case 0x5458d4:c.instructions+=4;goto B5458d4;
case 0x5458d8:c.instructions+=3;goto B5458d8;
case 0x5458db:c.instructions+=2;goto B5458db;
case 0x5458de:c.instructions+=1;goto B5458de;
case 0x5458e0:goto L5458e0;
case 0x5458e2:goto L5458e2;
case 0x5458e4:c.instructions+=4;goto B5458e4;
case 0x5458e5:c.instructions+=3;goto B5458e5;
case 0x5458e6:c.instructions+=2;goto B5458e6;
case 0x5458e9:c.instructions+=1;goto B5458e9;
case 0x5458ee:goto L5458ee;
case 0x5458f0:c.instructions+=1;goto B5458f0;
case 0x5458f2:goto L5458f2;
case 0x5458f6:c.instructions+=2;goto B5458f6;
case 0x5458f9:c.instructions+=1;goto B5458f9;
case 0x5458fb:goto L5458fb;
case 0x5458fe:c.instructions+=1;goto B5458fe;
case 0x545905:goto L545905;
case 0x54590b:c.instructions+=4;goto B54590b;
case 0x54590c:c.instructions+=3;goto B54590c;
case 0x54590d:c.instructions+=2;goto B54590d;
case 0x54590e:c.instructions+=1;goto B54590e;
case 0x545920:goto L545920;
case 0x545921:c.instructions+=13;goto B545921;
case 0x545923:c.instructions+=12;goto B545923;
case 0x545925:c.instructions+=11;goto B545925;
case 0x54592a:c.instructions+=10;goto B54592a;
case 0x545930:c.instructions+=9;goto B545930;
case 0x545931:c.instructions+=8;goto B545931;
case 0x545938:c.instructions+=7;goto B545938;
case 0x54593b:c.instructions+=6;goto B54593b;
case 0x54593c:c.instructions+=5;goto B54593c;
case 0x54593d:c.instructions+=4;goto B54593d;
case 0x54593e:c.instructions+=3;goto B54593e;
case 0x545940:c.instructions+=2;goto B545940;
case 0x545943:c.instructions+=1;goto B545943;
case 0x545948:goto L545948;
case 0x54594a:c.instructions+=3;goto B54594a;
case 0x54594d:c.instructions+=2;goto B54594d;
case 0x54594f:c.instructions+=1;goto B54594f;
case 0x545951:goto L545951;
case 0x545954:c.instructions+=18;goto B545954;
case 0x545957:c.instructions+=17;goto B545957;
case 0x54595a:c.instructions+=16;goto B54595a;
case 0x54595d:c.instructions+=15;goto B54595d;
case 0x545960:c.instructions+=14;goto B545960;
case 0x545963:c.instructions+=13;goto B545963;
case 0x545966:c.instructions+=12;goto B545966;
case 0x545969:c.instructions+=11;goto B545969;
case 0x54596d:c.instructions+=10;goto B54596d;
case 0x545973:c.instructions+=9;goto B545973;
case 0x545976:c.instructions+=8;goto B545976;
case 0x545979:c.instructions+=7;goto B545979;
case 0x54597d:c.instructions+=6;goto B54597d;
case 0x54597f:c.instructions+=5;goto B54597f;
case 0x545982:c.instructions+=4;goto B545982;
case 0x545985:c.instructions+=3;goto B545985;
case 0x545988:c.instructions+=2;goto B545988;
case 0x54598b:c.instructions+=1;goto B54598b;
case 0x54598d:goto L54598d;
case 0x545990:goto L545990;
case 0x545993:c.instructions+=7;goto B545993;
case 0x545996:c.instructions+=6;goto B545996;
case 0x545999:c.instructions+=5;goto B545999;
case 0x54599c:c.instructions+=4;goto B54599c;
case 0x54599e:c.instructions+=3;goto B54599e;
case 0x5459a1:c.instructions+=2;goto B5459a1;
case 0x5459a4:c.instructions+=1;goto B5459a4;
case 0x5459a9:goto L5459a9;
case 0x5459af:c.instructions+=4;goto B5459af;
case 0x5459b1:c.instructions+=3;goto B5459b1;
case 0x5459b4:c.instructions+=2;goto B5459b4;
case 0x5459b7:c.instructions+=1;goto B5459b7;
case 0x5459ba:goto L5459ba;
case 0x5459bc:c.instructions+=6;goto B5459bc;
case 0x5459bd:c.instructions+=5;goto B5459bd;
case 0x5459bf:c.instructions+=4;goto B5459bf;
case 0x5459c1:c.instructions+=3;goto B5459c1;
case 0x5459c2:c.instructions+=2;goto B5459c2;
case 0x5459c7:c.instructions+=1;goto B5459c7;
case 0x5459cc:goto L5459cc;
case 0x5459ce:c.instructions+=2;goto B5459ce;
case 0x5459d0:c.instructions+=1;goto B5459d0;
case 0x5459d6:goto L5459d6;
case 0x5459e0:goto L5459e0;
case 0x5459e4:c.instructions+=2;goto B5459e4;
case 0x5459e7:c.instructions+=1;goto B5459e7;
case 0x5459ed:goto L5459ed;
case 0x5459f0:c.instructions+=5;goto B5459f0;
case 0x5459f2:c.instructions+=4;goto B5459f2;
case 0x5459f5:c.instructions+=3;goto B5459f5;
case 0x5459f8:c.instructions+=2;goto B5459f8;
case 0x5459fa:c.instructions+=1;goto B5459fa;
case 0x5459fc:goto L5459fc;
case 0x545a02:c.instructions+=4;goto B545a02;
case 0x545a03:c.instructions+=3;goto B545a03;
case 0x545a04:c.instructions+=2;goto B545a04;
case 0x545a06:c.instructions+=1;goto B545a06;
case 0x545a0b:goto L545a0b;
case 0x545a0c:c.instructions+=1;goto B545a0c;
case 0x545a11:goto L545a11;
case 0x545a14:c.instructions+=2;goto B545a14;
case 0x545a16:c.instructions+=1;goto B545a16;
case 0x545a18:goto L545a18;
case 0x545a1b:c.instructions+=3;goto B545a1b;
case 0x545a1d:c.instructions+=2;goto B545a1d;
case 0x545a1f:c.instructions+=1;goto B545a1f;
case 0x545a21:goto L545a21;
case 0x545a26:c.instructions+=1;goto B545a26;
case 0x545a2b:goto L545a2b;
case 0x545a2f:c.instructions+=6;goto B545a2f;
case 0x545a32:c.instructions+=5;goto B545a32;
case 0x545a35:c.instructions+=4;goto B545a35;
case 0x545a37:c.instructions+=3;goto B545a37;
case 0x545a3a:c.instructions+=2;goto B545a3a;
case 0x545a3c:c.instructions+=1;goto B545a3c;
case 0x545a3e:goto L545a3e;
case 0x545a43:goto L545a43;
case 0x545a45:c.instructions+=1;goto B545a45;
case 0x545a47:goto L545a47;
case 0x545a4a:c.instructions+=4;goto B545a4a;
case 0x545a4b:c.instructions+=3;goto B545a4b;
case 0x545a4d:c.instructions+=2;goto B545a4d;
case 0x545a50:c.instructions+=1;goto B545a50;
case 0x545a55:goto L545a55;
case 0x545a58:c.instructions+=2;goto B545a58;
case 0x545a5a:c.instructions+=1;goto B545a5a;
case 0x545a5c:goto L545a5c;
case 0x545a5f:c.instructions+=2;goto B545a5f;
case 0x545a62:c.instructions+=1;goto B545a62;
case 0x545a64:goto L545a64;
case 0x545a66:goto L545a66;
case 0x545a69:c.instructions+=5;goto B545a69;
case 0x545a6b:c.instructions+=4;goto B545a6b;
case 0x545a6e:c.instructions+=3;goto B545a6e;
case 0x545a71:c.instructions+=2;goto B545a71;
case 0x545a74:c.instructions+=1;goto B545a74;
case 0x545a76:goto L545a76;
case 0x545a78:c.instructions+=6;goto B545a78;
case 0x545a79:c.instructions+=5;goto B545a79;
case 0x545a7b:c.instructions+=4;goto B545a7b;
case 0x545a7c:c.instructions+=3;goto B545a7c;
case 0x545a7d:c.instructions+=2;goto B545a7d;
case 0x545a82:c.instructions+=1;goto B545a82;
case 0x545a87:goto L545a87;
case 0x545a89:c.instructions+=2;goto B545a89;
case 0x545a8b:c.instructions+=1;goto B545a8b;
case 0x545a91:goto L545a91;
case 0x545a94:c.instructions+=1;goto B545a94;
case 0x545a96:goto L545a96;
case 0x545a99:c.instructions+=3;goto B545a99;
case 0x545a9c:c.instructions+=2;goto B545a9c;
case 0x545a9e:c.instructions+=1;goto B545a9e;
case 0x545aa0:goto L545aa0;
case 0x545aa3:c.instructions+=1;goto B545aa3;
case 0x545aa6:goto L545aa6;
case 0x545aa8:c.instructions+=13;goto B545aa8;
case 0x545aab:c.instructions+=12;goto B545aab;
case 0x545aad:c.instructions+=11;goto B545aad;
case 0x545ab0:c.instructions+=10;goto B545ab0;
case 0x545ab3:c.instructions+=9;goto B545ab3;
case 0x545ab6:c.instructions+=8;goto B545ab6;
case 0x545ab8:c.instructions+=7;goto B545ab8;
case 0x545abb:c.instructions+=6;goto B545abb;
case 0x545abd:c.instructions+=5;goto B545abd;
case 0x545abf:c.instructions+=4;goto B545abf;
case 0x545ac2:c.instructions+=3;goto B545ac2;
case 0x545ac5:c.instructions+=2;goto B545ac5;
case 0x545ac7:c.instructions+=1;goto B545ac7;
case 0x545ac9:goto L545ac9;
case 0x545acb:goto L545acb;
case 0x545ace:c.instructions+=1;goto B545ace;
case 0x545ad2:goto L545ad2;
case 0x545ad5:c.instructions+=6;goto B545ad5;
case 0x545ad8:c.instructions+=5;goto B545ad8;
case 0x545ada:c.instructions+=4;goto B545ada;
case 0x545adc:c.instructions+=3;goto B545adc;
case 0x545add:c.instructions+=2;goto B545add;
case 0x545ae0:c.instructions+=1;goto B545ae0;
case 0x545ae5:goto L545ae5;
case 0x545ae7:c.instructions+=1;goto B545ae7;
case 0x545ae9:goto L545ae9;
case 0x545aec:c.instructions+=2;goto B545aec;
case 0x545aef:c.instructions+=1;goto B545aef;
case 0x545af1:goto L545af1;
case 0x545af4:c.instructions+=1;goto B545af4;
case 0x545afb:goto L545afb;
case 0x545b01:c.instructions+=10;goto B545b01;
case 0x545b04:c.instructions+=9;goto B545b04;
case 0x545b05:c.instructions+=8;goto B545b05;
case 0x545b0b:c.instructions+=7;goto B545b0b;
case 0x545b0c:c.instructions+=6;goto B545b0c;
case 0x545b0f:c.instructions+=5;goto B545b0f;
case 0x545b11:c.instructions+=4;goto B545b11;
case 0x545b12:c.instructions+=3;goto B545b12;
case 0x545b19:c.instructions+=2;goto B545b19;
case 0x545b1a:c.instructions+=1;goto B545b1a;
case 0x545b1c:goto L545b1c;
case 0x545b20:goto L545b20;
case 0x545b22:c.instructions+=6;goto B545b22;
case 0x545b24:c.instructions+=5;goto B545b24;
case 0x545b27:c.instructions+=4;goto B545b27;
case 0x545b29:c.instructions+=3;goto B545b29;
case 0x545b2a:c.instructions+=2;goto B545b2a;
case 0x545b2d:c.instructions+=1;goto B545b2d;
case 0x545b32:goto L545b32;
case 0x545b35:c.instructions+=4;goto B545b35;
case 0x545b38:c.instructions+=3;goto B545b38;
case 0x545b3b:c.instructions+=2;goto B545b3b;
case 0x545b3d:c.instructions+=1;goto B545b3d;
case 0x545b3f:goto L545b3f;
case 0x545b42:c.instructions+=4;goto B545b42;
case 0x545b49:c.instructions+=3;goto B545b49;
case 0x545b4b:c.instructions+=2;goto B545b4b;
case 0x545b4c:c.instructions+=1;goto B545b4c;
case 0x545b50:goto L545b50;
case 0x545b51:c.instructions+=5;goto B545b51;
case 0x545b53:c.instructions+=4;goto B545b53;
case 0x545b54:c.instructions+=3;goto B545b54;
case 0x545b57:c.instructions+=2;goto B545b57;
case 0x545b59:c.instructions+=1;goto B545b59;
case 0x545b5e:goto L545b5e;
case 0x545b60:c.instructions+=6;goto B545b60;
case 0x545b65:c.instructions+=5;goto B545b65;
case 0x545b6a:c.instructions+=4;goto B545b6a;
case 0x545b6c:c.instructions+=3;goto B545b6c;
case 0x545b6e:c.instructions+=2;goto B545b6e;
case 0x545b78:c.instructions+=1;goto B545b78;
case 0x545b7d:goto L545b7d;
case 0x545b7f:c.instructions+=5;goto B545b7f;
case 0x545b84:c.instructions+=4;goto B545b84;
case 0x545b89:c.instructions+=3;goto B545b89;
case 0x545b8b:c.instructions+=2;goto B545b8b;
case 0x545b8d:c.instructions+=1;goto B545b8d;
case 0x545b92:goto L545b92;
case 0x545b94:c.instructions+=5;goto B545b94;
case 0x545b99:c.instructions+=4;goto B545b99;
case 0x545b9e:c.instructions+=3;goto B545b9e;
case 0x545ba0:c.instructions+=2;goto B545ba0;
case 0x545ba2:c.instructions+=1;goto B545ba2;
case 0x545ba7:goto L545ba7;
case 0x545ba9:c.instructions+=5;goto B545ba9;
case 0x545bae:c.instructions+=4;goto B545bae;
case 0x545bb3:c.instructions+=3;goto B545bb3;
case 0x545bb5:c.instructions+=2;goto B545bb5;
case 0x545bb7:c.instructions+=1;goto B545bb7;
case 0x545bbc:goto L545bbc;
case 0x545bbe:c.instructions+=5;goto B545bbe;
case 0x545bc3:c.instructions+=4;goto B545bc3;
case 0x545bc8:c.instructions+=3;goto B545bc8;
case 0x545bca:c.instructions+=2;goto B545bca;
case 0x545bcc:c.instructions+=1;goto B545bcc;
case 0x545bd1:goto L545bd1;
case 0x545bd3:c.instructions+=5;goto B545bd3;
case 0x545bd8:c.instructions+=4;goto B545bd8;
case 0x545bdd:c.instructions+=3;goto B545bdd;
case 0x545bdf:c.instructions+=2;goto B545bdf;
case 0x545be1:c.instructions+=1;goto B545be1;
case 0x545be6:goto L545be6;
case 0x545be8:c.instructions+=5;goto B545be8;
case 0x545bed:c.instructions+=4;goto B545bed;
case 0x545bf2:c.instructions+=3;goto B545bf2;
case 0x545bf4:c.instructions+=2;goto B545bf4;
case 0x545bf6:c.instructions+=1;goto B545bf6;
case 0x545bfb:goto L545bfb;
case 0x545bfd:c.instructions+=5;goto B545bfd;
case 0x545c02:c.instructions+=4;goto B545c02;
case 0x545c07:c.instructions+=3;goto B545c07;
case 0x545c09:c.instructions+=2;goto B545c09;
case 0x545c0b:c.instructions+=1;goto B545c0b;
case 0x545c10:goto L545c10;
case 0x545c12:c.instructions+=5;goto B545c12;
case 0x545c17:c.instructions+=4;goto B545c17;
case 0x545c1c:c.instructions+=3;goto B545c1c;
case 0x545c1e:c.instructions+=2;goto B545c1e;
case 0x545c20:c.instructions+=1;goto B545c20;
case 0x545c25:goto L545c25;
case 0x545c27:c.instructions+=5;goto B545c27;
case 0x545c2c:c.instructions+=4;goto B545c2c;
case 0x545c31:c.instructions+=3;goto B545c31;
case 0x545c33:c.instructions+=2;goto B545c33;
case 0x545c35:c.instructions+=1;goto B545c35;
case 0x545c3a:goto L545c3a;
case 0x545c3f:c.instructions+=3;goto B545c3f;
case 0x545c44:c.instructions+=2;goto B545c44;
case 0x545c46:c.instructions+=1;goto B545c46;
case 0x545c4b:goto L545c4b;
case 0x545c50:c.instructions+=3;goto B545c50;
case 0x545c55:c.instructions+=2;goto B545c55;
case 0x545c57:c.instructions+=1;goto B545c57;
case 0x545c5c:goto L545c5c;
case 0x545c5e:c.instructions+=5;goto B545c5e;
case 0x545c63:c.instructions+=4;goto B545c63;
case 0x545c68:c.instructions+=3;goto B545c68;
case 0x545c6a:c.instructions+=2;goto B545c6a;
case 0x545c6c:c.instructions+=1;goto B545c6c;
case 0x545c71:goto L545c71;
case 0x545c76:c.instructions+=2;goto B545c76;
case 0x545c78:c.instructions+=1;goto B545c78;
case 0x545c7a:goto L545c7a;
case 0x545c81:c.instructions+=3;goto B545c81;
case 0x545c84:c.instructions+=2;goto B545c84;
case 0x545c85:c.instructions+=1;goto B545c85;
case 0x545c8a:goto L545c8a;
case 0x545c8b:c.instructions+=1;goto B545c8b;
case 0x545c90:goto L545c90;
case 0x545c93:c.instructions+=2;goto B545c93;
case 0x545c95:c.instructions+=1;goto B545c95;
case 0x545c97:goto L545c97;
case 0x545c9e:c.instructions+=1;goto B545c9e;
case 0x545ca0:goto L545ca0;
case 0x545ca1:c.instructions+=3;goto B545ca1;
case 0x545ca4:c.instructions+=2;goto B545ca4;
case 0x545ca5:c.instructions+=1;goto B545ca5;
case 0x545caa:goto L545caa;
case 0x545cab:c.instructions+=1;goto B545cab;
case 0x545cb0:goto L545cb0;
case 0x545cb3:c.instructions+=2;goto B545cb3;
case 0x545cb5:c.instructions+=1;goto B545cb5;
case 0x545cb7:goto L545cb7;
case 0x545cbb:c.instructions+=1;goto B545cbb;
case 0x545cbd:goto L545cbd;
case 0x545cbe:c.instructions+=1;goto B545cbe;
case 0x545cc3:goto L545cc3;
case 0x545cc4:c.instructions+=1;goto B545cc4;
case 0x545cc9:goto L545cc9;
case 0x545ccc:c.instructions+=2;goto B545ccc;
case 0x545cce:c.instructions+=1;goto B545cce;
case 0x545cd0:goto L545cd0;
case 0x545cd7:goto L545cd7;
case 0x545cd8:goto L545cd8;
case 0x545cdb:c.instructions+=2;goto B545cdb;
case 0x545cdc:c.instructions+=1;goto B545cdc;
case 0x545ce1:goto L545ce1;
case 0x545ce2:c.instructions+=1;goto B545ce2;
case 0x545ce7:goto L545ce7;
case 0x545cea:c.instructions+=2;goto B545cea;
case 0x545cec:c.instructions+=1;goto B545cec;
case 0x545cee:goto L545cee;
case 0x545cf1:c.instructions+=1;goto B545cf1;
case 0x545cf3:goto L545cf3;
case 0x545cf5:goto L545cf5;
case 0x545cf6:c.instructions+=2;goto B545cf6;
case 0x545cf8:c.instructions+=1;goto B545cf8;
case 0x545cfd:goto L545cfd;
case 0x545cff:c.instructions+=1;goto B545cff;
case 0x545d01:goto L545d01;
case 0x545d04:c.instructions+=2;goto B545d04;
case 0x545d06:c.instructions+=1;goto B545d06;
case 0x545d08:goto L545d08;
case 0x545d0b:c.instructions+=1;goto B545d0b;
case 0x545d0d:goto L545d0d;
case 0x545d0f:goto L545d0f;
case 0x545d10:c.instructions+=2;goto B545d10;
case 0x545d12:c.instructions+=1;goto B545d12;
case 0x545d17:goto L545d17;
case 0x545d19:c.instructions+=2;goto B545d19;
case 0x545d1c:c.instructions+=1;goto B545d1c;
case 0x545d21:goto L545d21;
case 0x545d22:c.instructions+=2;goto B545d22;
case 0x545d23:c.instructions+=1;goto B545d23;
case 0x545d30:goto L545d30;
case 0x545d31:c.instructions+=7;goto B545d31;
case 0x545d33:c.instructions+=6;goto B545d33;
case 0x545d34:c.instructions+=5;goto B545d34;
case 0x545d35:c.instructions+=4;goto B545d35;
case 0x545d37:c.instructions+=3;goto B545d37;
case 0x545d38:c.instructions+=2;goto B545d38;
case 0x545d3b:c.instructions+=1;goto B545d3b;
case 0x545d40:goto L545d40;
case 0x545d42:c.instructions+=7;goto B545d42;
case 0x545d47:c.instructions+=6;goto B545d47;
case 0x545d4c:c.instructions+=5;goto B545d4c;
case 0x545d4e:c.instructions+=4;goto B545d4e;
case 0x545d50:c.instructions+=3;goto B545d50;
case 0x545d52:c.instructions+=2;goto B545d52;
case 0x545d58:c.instructions+=1;goto B545d58;
case 0x545d5d:goto L545d5d;
case 0x545d5f:c.instructions+=5;goto B545d5f;
case 0x545d64:c.instructions+=4;goto B545d64;
case 0x545d69:c.instructions+=3;goto B545d69;
case 0x545d6b:c.instructions+=2;goto B545d6b;
case 0x545d6d:c.instructions+=1;goto B545d6d;
case 0x545d72:goto L545d72;
case 0x545d74:c.instructions+=5;goto B545d74;
case 0x545d79:c.instructions+=4;goto B545d79;
case 0x545d7e:c.instructions+=3;goto B545d7e;
case 0x545d80:c.instructions+=2;goto B545d80;
case 0x545d82:c.instructions+=1;goto B545d82;
case 0x545d87:goto L545d87;
case 0x545d89:c.instructions+=5;goto B545d89;
case 0x545d8e:c.instructions+=4;goto B545d8e;
case 0x545d93:c.instructions+=3;goto B545d93;
case 0x545d95:c.instructions+=2;goto B545d95;
case 0x545d97:c.instructions+=1;goto B545d97;
case 0x545d9c:goto L545d9c;
case 0x545da1:c.instructions+=4;goto B545da1;
case 0x545da2:c.instructions+=3;goto B545da2;
case 0x545da4:c.instructions+=2;goto B545da4;
case 0x545da6:c.instructions+=1;goto B545da6;
case 0x545dab:goto L545dab;
case 0x545dac:c.instructions+=1;goto B545dac;
case 0x545db1:goto L545db1;
case 0x545db4:c.instructions+=7;goto B545db4;
case 0x545db6:c.instructions+=6;goto B545db6;
case 0x545db8:c.instructions+=5;goto B545db8;
case 0x545dba:c.instructions+=4;goto B545dba;
case 0x545dbc:c.instructions+=3;goto B545dbc;
case 0x545dc1:c.instructions+=2;goto B545dc1;
case 0x545dc3:c.instructions+=1;goto B545dc3;
case 0x545dc8:goto L545dc8;
case 0x545dcc:c.instructions+=6;goto B545dcc;
case 0x545dcf:c.instructions+=5;goto B545dcf;
case 0x545dd2:c.instructions+=4;goto B545dd2;
case 0x545dd4:c.instructions+=3;goto B545dd4;
case 0x545dda:c.instructions+=2;goto B545dda;
case 0x545ddc:c.instructions+=1;goto B545ddc;
case 0x545dde:goto L545dde;
case 0x545de3:goto L545de3;
case 0x545de6:c.instructions+=2;goto B545de6;
case 0x545de8:c.instructions+=1;goto B545de8;
case 0x545dea:goto L545dea;
case 0x545ded:c.instructions+=15;goto B545ded;
case 0x545df4:c.instructions+=14;goto B545df4;
case 0x545df7:c.instructions+=13;goto B545df7;
case 0x545dfa:c.instructions+=12;goto B545dfa;
case 0x545dfd:c.instructions+=11;goto B545dfd;
case 0x545e01:c.instructions+=10;goto B545e01;
case 0x545e05:c.instructions+=9;goto B545e05;
case 0x545e0b:c.instructions+=8;goto B545e0b;
case 0x545e12:c.instructions+=7;goto B545e12;
case 0x545e15:c.instructions+=6;goto B545e15;
case 0x545e19:c.instructions+=5;goto B545e19;
case 0x545e1b:c.instructions+=4;goto B545e1b;
case 0x545e1e:c.instructions+=3;goto B545e1e;
case 0x545e21:c.instructions+=2;goto B545e21;
case 0x545e25:c.instructions+=1;goto B545e25;
case 0x545e27:goto L545e27;
case 0x545e29:goto L545e29;
case 0x545e2b:c.instructions+=4;goto B545e2b;
case 0x545e2d:c.instructions+=3;goto B545e2d;
case 0x545e2e:c.instructions+=2;goto B545e2e;
case 0x545e31:c.instructions+=1;goto B545e31;
case 0x545e36:goto L545e36;
case 0x545e38:c.instructions+=1;goto B545e38;
case 0x545e3a:goto L545e3a;
case 0x545e3f:c.instructions+=1;goto B545e3f;
case 0x545e41:goto L545e41;
case 0x545e46:goto L545e46;
case 0x545e49:c.instructions+=2;goto B545e49;
case 0x545e4b:c.instructions+=1;goto B545e4b;
case 0x545e4d:goto L545e4d;
case 0x545e50:c.instructions+=15;goto B545e50;
case 0x545e57:c.instructions+=14;goto B545e57;
case 0x545e5a:c.instructions+=13;goto B545e5a;
case 0x545e5d:c.instructions+=12;goto B545e5d;
case 0x545e60:c.instructions+=11;goto B545e60;
case 0x545e64:c.instructions+=10;goto B545e64;
case 0x545e68:c.instructions+=9;goto B545e68;
case 0x545e6e:c.instructions+=8;goto B545e6e;
case 0x545e75:c.instructions+=7;goto B545e75;
case 0x545e78:c.instructions+=6;goto B545e78;
case 0x545e7c:c.instructions+=5;goto B545e7c;
case 0x545e7e:c.instructions+=4;goto B545e7e;
case 0x545e81:c.instructions+=3;goto B545e81;
case 0x545e84:c.instructions+=2;goto B545e84;
case 0x545e88:c.instructions+=1;goto B545e88;
case 0x545e8a:goto L545e8a;
case 0x545e8c:goto L545e8c;
case 0x545e8e:c.instructions+=4;goto B545e8e;
case 0x545e90:c.instructions+=3;goto B545e90;
case 0x545e91:c.instructions+=2;goto B545e91;
case 0x545e94:c.instructions+=1;goto B545e94;
case 0x545e99:goto L545e99;
case 0x545e9b:c.instructions+=1;goto B545e9b;
case 0x545e9d:goto L545e9d;
case 0x545ea2:goto L545ea2;
case 0x545ea5:c.instructions+=1;goto B545ea5;
case 0x545ea7:goto L545ea7;
case 0x545eaa:c.instructions+=1;goto B545eaa;
case 0x545eb1:goto L545eb1;
case 0x545eb7:c.instructions+=5;goto B545eb7;
case 0x545ebc:c.instructions+=4;goto B545ebc;
case 0x545ebd:c.instructions+=3;goto B545ebd;
case 0x545ebf:c.instructions+=2;goto B545ebf;
case 0x545ec1:c.instructions+=1;goto B545ec1;
case 0x545ec6:goto L545ec6;
case 0x545ec7:c.instructions+=1;goto B545ec7;
case 0x545ecc:goto L545ecc;
case 0x545ecf:c.instructions+=7;goto B545ecf;
case 0x545ed1:c.instructions+=6;goto B545ed1;
case 0x545ed3:c.instructions+=5;goto B545ed3;
case 0x545ed5:c.instructions+=4;goto B545ed5;
case 0x545ed7:c.instructions+=3;goto B545ed7;
case 0x545edc:c.instructions+=2;goto B545edc;
case 0x545ede:c.instructions+=1;goto B545ede;
case 0x545ee3:goto L545ee3;
case 0x545ee7:c.instructions+=6;goto B545ee7;
case 0x545eea:c.instructions+=5;goto B545eea;
case 0x545eed:c.instructions+=4;goto B545eed;
case 0x545eef:c.instructions+=3;goto B545eef;
case 0x545ef5:c.instructions+=2;goto B545ef5;
case 0x545ef7:c.instructions+=1;goto B545ef7;
case 0x545ef9:goto L545ef9;
case 0x545efe:goto L545efe;
case 0x545f01:c.instructions+=2;goto B545f01;
case 0x545f03:c.instructions+=1;goto B545f03;
case 0x545f05:goto L545f05;
case 0x545f08:c.instructions+=15;goto B545f08;
case 0x545f0f:c.instructions+=14;goto B545f0f;
case 0x545f12:c.instructions+=13;goto B545f12;
case 0x545f15:c.instructions+=12;goto B545f15;
case 0x545f18:c.instructions+=11;goto B545f18;
case 0x545f1c:c.instructions+=10;goto B545f1c;
case 0x545f20:c.instructions+=9;goto B545f20;
case 0x545f26:c.instructions+=8;goto B545f26;
case 0x545f2d:c.instructions+=7;goto B545f2d;
case 0x545f30:c.instructions+=6;goto B545f30;
case 0x545f34:c.instructions+=5;goto B545f34;
case 0x545f36:c.instructions+=4;goto B545f36;
case 0x545f39:c.instructions+=3;goto B545f39;
case 0x545f3c:c.instructions+=2;goto B545f3c;
case 0x545f40:c.instructions+=1;goto B545f40;
case 0x545f42:goto L545f42;
case 0x545f44:goto L545f44;
case 0x545f46:c.instructions+=4;goto B545f46;
case 0x545f48:c.instructions+=3;goto B545f48;
case 0x545f49:c.instructions+=2;goto B545f49;
case 0x545f4c:c.instructions+=1;goto B545f4c;
case 0x545f51:goto L545f51;
case 0x545f53:c.instructions+=1;goto B545f53;
case 0x545f55:goto L545f55;
case 0x545f5a:c.instructions+=1;goto B545f5a;
case 0x545f5c:goto L545f5c;
case 0x545f61:goto L545f61;
case 0x545f64:c.instructions+=2;goto B545f64;
case 0x545f66:c.instructions+=1;goto B545f66;
case 0x545f68:goto L545f68;
case 0x545f6b:c.instructions+=15;goto B545f6b;
case 0x545f72:c.instructions+=14;goto B545f72;
case 0x545f75:c.instructions+=13;goto B545f75;
case 0x545f78:c.instructions+=12;goto B545f78;
case 0x545f7b:c.instructions+=11;goto B545f7b;
case 0x545f7f:c.instructions+=10;goto B545f7f;
case 0x545f83:c.instructions+=9;goto B545f83;
case 0x545f89:c.instructions+=8;goto B545f89;
case 0x545f90:c.instructions+=7;goto B545f90;
case 0x545f93:c.instructions+=6;goto B545f93;
case 0x545f97:c.instructions+=5;goto B545f97;
case 0x545f99:c.instructions+=4;goto B545f99;
case 0x545f9c:c.instructions+=3;goto B545f9c;
case 0x545f9f:c.instructions+=2;goto B545f9f;
case 0x545fa3:c.instructions+=1;goto B545fa3;
case 0x545fa5:goto L545fa5;
case 0x545fa7:goto L545fa7;
case 0x545fa9:c.instructions+=4;goto B545fa9;
case 0x545fab:c.instructions+=3;goto B545fab;
case 0x545fac:c.instructions+=2;goto B545fac;
case 0x545faf:c.instructions+=1;goto B545faf;
case 0x545fb4:goto L545fb4;
case 0x545fb6:c.instructions+=1;goto B545fb6;
case 0x545fb8:goto L545fb8;
case 0x545fbd:goto L545fbd;
case 0x545fc0:c.instructions+=1;goto B545fc0;
case 0x545fc2:goto L545fc2;
case 0x545fc5:c.instructions+=1;goto B545fc5;
case 0x545fcc:goto L545fcc;
case 0x545fd2:c.instructions+=5;goto B545fd2;
case 0x545fd5:c.instructions+=4;goto B545fd5;
case 0x545fd8:c.instructions+=3;goto B545fd8;
case 0x545fd9:c.instructions+=2;goto B545fd9;
case 0x545fdb:c.instructions+=1;goto B545fdb;
case 0x545fe0:goto L545fe0;
case 0x545fe2:c.instructions+=1;goto B545fe2;
case 0x545fe4:goto L545fe4;
case 0x545fe7:c.instructions+=2;goto B545fe7;
case 0x545fe9:c.instructions+=1;goto B545fe9;
case 0x545feb:goto L545feb;
case 0x545fee:c.instructions+=1;goto B545fee;
case 0x545ff0:goto L545ff0;
case 0x545ff2:goto L545ff2;
case 0x545ff3:c.instructions+=2;goto B545ff3;
case 0x545ff5:c.instructions+=1;goto B545ff5;
case 0x545ffa:goto L545ffa;
case 0x545ffb:c.instructions+=2;goto B545ffb;
case 0x545ffe:c.instructions+=1;goto B545ffe;
default:missing_instruction(c.pc);}
B545001:L545001:{c.instructions+=1;NFSU2_TR(0x545001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545006ull));
TAIL_STATIC(0x440ec0u,440);
}
B545006:L545006:{c.instructions+=2;NFSU2_TR(0x545006);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545008:{NFSU2_TR(0x545008);
if(r1(R+518)){{goto L54500f;}}
}
B54500a:L54500a:{c.instructions+=2;NFSU2_TR(0x54500a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54500d:{NFSU2_TR(0x54500d);
{goto L545011;}
}
B54500f:L54500f:{c.instructions+=1;NFSU2_TR(0x54500f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545011:L545011:{c.instructions+=7;NFSU2_TR(0x545011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545014:{NFSU2_TR(0x545014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545016:{NFSU2_TR(0x545016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545019:{NFSU2_TR(0x545019);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54501c:{NFSU2_TR(0x54501c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54501e:{NFSU2_TR(0x54501e);
__builtin_memmove((R+28),gp(0x7fa1bc),4);
}
B545024:{NFSU2_TR(0x545024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545029ull));
TAIL_STATIC(0x440ec0u,440);
}
B545029:L545029:{c.instructions+=2;NFSU2_TR(0x545029);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54502b:{NFSU2_TR(0x54502b);
if(r1(R+518)){{goto L545032;}}
}
B54502d:L54502d:{c.instructions+=2;NFSU2_TR(0x54502d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545030:{NFSU2_TR(0x545030);
{goto L545034;}
}
B545032:L545032:{c.instructions+=1;NFSU2_TR(0x545032);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545034:L545034:{c.instructions+=7;NFSU2_TR(0x545034);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545037:{NFSU2_TR(0x545037);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545039:{NFSU2_TR(0x545039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54503c:{NFSU2_TR(0x54503c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54503f:{NFSU2_TR(0x54503f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545041:{NFSU2_TR(0x545041);
__builtin_memmove((R+28),gp(0x7fa1c0),4);
}
B545047:{NFSU2_TR(0x545047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54504cull));
TAIL_STATIC(0x440ec0u,440);
}
B54504c:L54504c:{c.instructions+=2;NFSU2_TR(0x54504c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54504e:{NFSU2_TR(0x54504e);
if(r1(R+518)){{goto L545055;}}
}
B545050:L545050:{c.instructions+=2;NFSU2_TR(0x545050);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545053:{NFSU2_TR(0x545053);
{goto L545057;}
}
B545055:L545055:{c.instructions+=1;NFSU2_TR(0x545055);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545057:L545057:{c.instructions+=7;NFSU2_TR(0x545057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54505a:{NFSU2_TR(0x54505a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54505c:{NFSU2_TR(0x54505c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54505f:{NFSU2_TR(0x54505f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545062:{NFSU2_TR(0x545062);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545064:{NFSU2_TR(0x545064);
__builtin_memmove((R+28),gp(0x7fa1d8),4);
}
B54506a:{NFSU2_TR(0x54506a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54506full));
TAIL_STATIC(0x440ec0u,440);
}
B54506f:L54506f:{c.instructions+=2;NFSU2_TR(0x54506f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545071:{NFSU2_TR(0x545071);
if(r1(R+518)){{goto L545078;}}
}
B545073:L545073:{c.instructions+=2;NFSU2_TR(0x545073);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545076:{NFSU2_TR(0x545076);
{goto L54507a;}
}
B545078:L545078:{c.instructions+=1;NFSU2_TR(0x545078);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54507a:L54507a:{c.instructions+=7;NFSU2_TR(0x54507a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54507d:{NFSU2_TR(0x54507d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54507f:{NFSU2_TR(0x54507f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545082:{NFSU2_TR(0x545082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545085:{NFSU2_TR(0x545085);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545087:{NFSU2_TR(0x545087);
__builtin_memmove((R+28),gp(0x7fa1b4),4);
}
B54508d:{NFSU2_TR(0x54508d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545092ull));
TAIL_STATIC(0x440ec0u,440);
}
B545092:L545092:{c.instructions+=2;NFSU2_TR(0x545092);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545094:{NFSU2_TR(0x545094);
if(r1(R+518)){{goto L54509b;}}
}
B545096:L545096:{c.instructions+=2;NFSU2_TR(0x545096);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545099:{NFSU2_TR(0x545099);
{goto L54509d;}
}
B54509b:L54509b:{c.instructions+=1;NFSU2_TR(0x54509b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54509d:L54509d:{c.instructions+=7;NFSU2_TR(0x54509d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5450a0:{NFSU2_TR(0x5450a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5450a2:{NFSU2_TR(0x5450a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450a5:{NFSU2_TR(0x5450a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450a8:{NFSU2_TR(0x5450a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5450aa:{NFSU2_TR(0x5450aa);
__builtin_memmove((R+28),gp(0x7fa1c8),4);
}
B5450b0:{NFSU2_TR(0x5450b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5450b5ull));
TAIL_STATIC(0x440ec0u,440);
}
B5450b5:L5450b5:{c.instructions+=2;NFSU2_TR(0x5450b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5450b7:{NFSU2_TR(0x5450b7);
if(r1(R+518)){{goto L5450be;}}
}
B5450b9:L5450b9:{c.instructions+=2;NFSU2_TR(0x5450b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450bc:{NFSU2_TR(0x5450bc);
{goto L5450c0;}
}
B5450be:L5450be:{c.instructions+=1;NFSU2_TR(0x5450be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5450c0:L5450c0:{c.instructions+=7;NFSU2_TR(0x5450c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5450c3:{NFSU2_TR(0x5450c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5450c5:{NFSU2_TR(0x5450c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450c8:{NFSU2_TR(0x5450c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450cb:{NFSU2_TR(0x5450cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5450cd:{NFSU2_TR(0x5450cd);
__builtin_memmove((R+28),gp(0x7fa1cc),4);
}
B5450d3:{NFSU2_TR(0x5450d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5450d8ull));
TAIL_STATIC(0x440ec0u,440);
}
B5450d8:L5450d8:{c.instructions+=2;NFSU2_TR(0x5450d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5450da:{NFSU2_TR(0x5450da);
if(r1(R+518)){{goto L5450e1;}}
}
B5450dc:L5450dc:{c.instructions+=2;NFSU2_TR(0x5450dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450df:{NFSU2_TR(0x5450df);
{goto L5450e3;}
}
B5450e1:L5450e1:{c.instructions+=1;NFSU2_TR(0x5450e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5450e3:L5450e3:{c.instructions+=7;NFSU2_TR(0x5450e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5450e6:{NFSU2_TR(0x5450e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5450e8:{NFSU2_TR(0x5450e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450eb:{NFSU2_TR(0x5450eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5450ee:{NFSU2_TR(0x5450ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5450f0:{NFSU2_TR(0x5450f0);
__builtin_memmove((R+28),gp(0x7fa1d0),4);
}
B5450f6:{NFSU2_TR(0x5450f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5450fbull));
TAIL_STATIC(0x440ec0u,440);
}
B5450fb:L5450fb:{c.instructions+=2;NFSU2_TR(0x5450fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5450fd:{NFSU2_TR(0x5450fd);
if(r1(R+518)){{goto L545104;}}
}
B5450ff:L5450ff:{c.instructions+=2;NFSU2_TR(0x5450ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545102:{NFSU2_TR(0x545102);
{goto L545106;}
}
B545104:L545104:{c.instructions+=1;NFSU2_TR(0x545104);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545106:L545106:{c.instructions+=7;NFSU2_TR(0x545106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545109:{NFSU2_TR(0x545109);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54510b:{NFSU2_TR(0x54510b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54510e:{NFSU2_TR(0x54510e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545111:{NFSU2_TR(0x545111);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545113:{NFSU2_TR(0x545113);
__builtin_memmove((R+28),gp(0x7fa1d4),4);
}
B545119:{NFSU2_TR(0x545119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54511eull));
TAIL_STATIC(0x440ec0u,440);
}
B54511e:L54511e:{c.instructions+=2;NFSU2_TR(0x54511e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545120:{NFSU2_TR(0x545120);
if(r1(R+518)){{goto L545127;}}
}
B545122:L545122:{c.instructions+=2;NFSU2_TR(0x545122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545125:{NFSU2_TR(0x545125);
{goto L545129;}
}
B545127:L545127:{c.instructions+=1;NFSU2_TR(0x545127);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545129:L545129:{c.instructions+=7;NFSU2_TR(0x545129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54512c:{NFSU2_TR(0x54512c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54512e:{NFSU2_TR(0x54512e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545131:{NFSU2_TR(0x545131);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545134:{NFSU2_TR(0x545134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545136:{NFSU2_TR(0x545136);
__builtin_memmove((R+28),gp(0x7fa1dc),4);
}
B54513c:{NFSU2_TR(0x54513c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545141ull));
TAIL_STATIC(0x440ec0u,440);
}
B545141:L545141:{c.instructions+=2;NFSU2_TR(0x545141);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545143:{NFSU2_TR(0x545143);
if(r1(R+518)){{goto L54514a;}}
}
B545145:L545145:{c.instructions+=2;NFSU2_TR(0x545145);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545148:{NFSU2_TR(0x545148);
{goto L54514c;}
}
B54514a:L54514a:{c.instructions+=1;NFSU2_TR(0x54514a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54514c:L54514c:{c.instructions+=7;NFSU2_TR(0x54514c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54514f:{NFSU2_TR(0x54514f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545151:{NFSU2_TR(0x545151);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545154:{NFSU2_TR(0x545154);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545157:{NFSU2_TR(0x545157);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545159:{NFSU2_TR(0x545159);
__builtin_memmove((R+28),gp(0x7fa1e0),4);
}
B54515f:{NFSU2_TR(0x54515f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545164ull));
TAIL_STATIC(0x440ec0u,440);
}
B545164:L545164:{c.instructions+=2;NFSU2_TR(0x545164);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545166:{NFSU2_TR(0x545166);
if(r1(R+518)){{goto L54516d;}}
}
B545168:L545168:{c.instructions+=2;NFSU2_TR(0x545168);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54516b:{NFSU2_TR(0x54516b);
{goto L54516f;}
}
B54516d:L54516d:{c.instructions+=1;NFSU2_TR(0x54516d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54516f:L54516f:{c.instructions+=7;NFSU2_TR(0x54516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545172:{NFSU2_TR(0x545172);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545174:{NFSU2_TR(0x545174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545177:{NFSU2_TR(0x545177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54517a:{NFSU2_TR(0x54517a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54517c:{NFSU2_TR(0x54517c);
__builtin_memmove((R+28),gp(0x7fa1e4),4);
}
B545182:{NFSU2_TR(0x545182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545187ull));
TAIL_STATIC(0x440ec0u,440);
}
B545187:L545187:{c.instructions+=2;NFSU2_TR(0x545187);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545189:{NFSU2_TR(0x545189);
if(r1(R+518)){{goto L545190;}}
}
B54518b:L54518b:{c.instructions+=2;NFSU2_TR(0x54518b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54518e:{NFSU2_TR(0x54518e);
{goto L545192;}
}
B545190:L545190:{c.instructions+=1;NFSU2_TR(0x545190);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545192:L545192:{c.instructions+=7;NFSU2_TR(0x545192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545195:{NFSU2_TR(0x545195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545197:{NFSU2_TR(0x545197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54519a:{NFSU2_TR(0x54519a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54519d:{NFSU2_TR(0x54519d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54519f:{NFSU2_TR(0x54519f);
__builtin_memmove((R+28),gp(0x7fa1e8),4);
}
B5451a5:{NFSU2_TR(0x5451a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5451aaull));
TAIL_STATIC(0x440ec0u,440);
}
B5451aa:L5451aa:{c.instructions+=2;NFSU2_TR(0x5451aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5451ac:{NFSU2_TR(0x5451ac);
if(r1(R+518)){{goto L5451b3;}}
}
B5451ae:L5451ae:{c.instructions+=2;NFSU2_TR(0x5451ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451b1:{NFSU2_TR(0x5451b1);
{goto L5451b5;}
}
B5451b3:L5451b3:{c.instructions+=1;NFSU2_TR(0x5451b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5451b5:L5451b5:{c.instructions+=7;NFSU2_TR(0x5451b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5451b8:{NFSU2_TR(0x5451b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5451ba:{NFSU2_TR(0x5451ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451bd:{NFSU2_TR(0x5451bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451c0:{NFSU2_TR(0x5451c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5451c2:{NFSU2_TR(0x5451c2);
__builtin_memmove((R+28),gp(0x7fa1ec),4);
}
B5451c8:{NFSU2_TR(0x5451c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5451cdull));
TAIL_STATIC(0x440ec0u,440);
}
B5451cd:L5451cd:{c.instructions+=2;NFSU2_TR(0x5451cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5451cf:{NFSU2_TR(0x5451cf);
if(r1(R+518)){{goto L5451d6;}}
}
B5451d1:L5451d1:{c.instructions+=2;NFSU2_TR(0x5451d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451d4:{NFSU2_TR(0x5451d4);
{goto L5451d8;}
}
B5451d6:L5451d6:{c.instructions+=1;NFSU2_TR(0x5451d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5451d8:L5451d8:{c.instructions+=7;NFSU2_TR(0x5451d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5451db:{NFSU2_TR(0x5451db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5451dd:{NFSU2_TR(0x5451dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451e0:{NFSU2_TR(0x5451e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451e3:{NFSU2_TR(0x5451e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5451e5:{NFSU2_TR(0x5451e5);
__builtin_memmove((R+28),gp(0x7fa1c4),4);
}
B5451eb:{NFSU2_TR(0x5451eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5451f0ull));
TAIL_STATIC(0x440ec0u,440);
}
B5451f0:L5451f0:{c.instructions+=2;NFSU2_TR(0x5451f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5451f2:{NFSU2_TR(0x5451f2);
if(r1(R+518)){{goto L5451f9;}}
}
B5451f4:L5451f4:{c.instructions+=2;NFSU2_TR(0x5451f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5451f7:{NFSU2_TR(0x5451f7);
{goto L5451fb;}
}
B5451f9:L5451f9:{c.instructions+=1;NFSU2_TR(0x5451f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5451fb:L5451fb:{c.instructions+=7;NFSU2_TR(0x5451fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5451fe:{NFSU2_TR(0x5451fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545200:{NFSU2_TR(0x545200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545203:{NFSU2_TR(0x545203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545206:{NFSU2_TR(0x545206);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545208:{NFSU2_TR(0x545208);
__builtin_memmove((R+28),gp(0x7fa1f0),4);
}
B54520e:{NFSU2_TR(0x54520e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545213ull));
TAIL_STATIC(0x440ec0u,440);
}
B545213:L545213:{c.instructions+=2;NFSU2_TR(0x545213);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545215:{NFSU2_TR(0x545215);
if(r1(R+518)){{goto L54521c;}}
}
B545217:L545217:{c.instructions+=2;NFSU2_TR(0x545217);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54521a:{NFSU2_TR(0x54521a);
{goto L54521e;}
}
B54521c:L54521c:{c.instructions+=1;NFSU2_TR(0x54521c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54521e:L54521e:{c.instructions+=7;NFSU2_TR(0x54521e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545221:{NFSU2_TR(0x545221);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545223:{NFSU2_TR(0x545223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545226:{NFSU2_TR(0x545226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545229:{NFSU2_TR(0x545229);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54522b:{NFSU2_TR(0x54522b);
__builtin_memmove((R+28),gp(0x7fa1f4),4);
}
B545231:{NFSU2_TR(0x545231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545236ull));
TAIL_STATIC(0x440ec0u,440);
}
B545236:L545236:{c.instructions+=2;NFSU2_TR(0x545236);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545238:{NFSU2_TR(0x545238);
if(r1(R+518)){{goto L54523f;}}
}
B54523a:L54523a:{c.instructions+=2;NFSU2_TR(0x54523a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54523d:{NFSU2_TR(0x54523d);
{goto L545241;}
}
B54523f:L54523f:{c.instructions+=1;NFSU2_TR(0x54523f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545241:L545241:{c.instructions+=7;NFSU2_TR(0x545241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545244:{NFSU2_TR(0x545244);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545246:{NFSU2_TR(0x545246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545249:{NFSU2_TR(0x545249);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54524c:{NFSU2_TR(0x54524c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B54524e:{NFSU2_TR(0x54524e);
__builtin_memmove((R+28),gp(0x7fa1f8),4);
}
B545254:{NFSU2_TR(0x545254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545259ull));
TAIL_STATIC(0x440ec0u,440);
}
B545259:L545259:{c.instructions+=2;NFSU2_TR(0x545259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54525b:{NFSU2_TR(0x54525b);
if(r1(R+518)){{goto L545262;}}
}
B54525d:L54525d:{c.instructions+=2;NFSU2_TR(0x54525d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545260:{NFSU2_TR(0x545260);
{goto L545264;}
}
B545262:L545262:{c.instructions+=1;NFSU2_TR(0x545262);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545264:L545264:{c.instructions+=8;NFSU2_TR(0x545264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545267:{NFSU2_TR(0x545267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545269:{NFSU2_TR(0x545269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54526c:{NFSU2_TR(0x54526c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54526f:{NFSU2_TR(0x54526f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545271:{NFSU2_TR(0x545271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B545273:{NFSU2_TR(0x545273);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545275:{NFSU2_TR(0x545275);
if(r1(R+518)){{goto L5452d0;}}
}
B545277:L545277:{c.instructions+=3;NFSU2_TR(0x545277);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B54527c:{NFSU2_TR(0x54527c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54527e:{NFSU2_TR(0x54527e);
if(r1(R+518)){{goto L545287;}}
}
B545280:L545280:{c.instructions+=2;NFSU2_TR(0x545280);
__builtin_memmove((R+0),gp(0x7fa1b0),4);
}
B545285:{NFSU2_TR(0x545285);
{goto L5452b9;}
}
B545287:L545287:{c.instructions+=3;NFSU2_TR(0x545287);
__builtin_memmove((R+0),gp(0x838990),4);
}
B54528c:{NFSU2_TR(0x54528c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54528f:{NFSU2_TR(0x54528f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5452b4;}}
}
B545291:L545291:{c.instructions+=1;NFSU2_TR(0x545291);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5452e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B545298:L545298:{c.instructions+=2;NFSU2_TR(0x545298);
__builtin_memmove((R+0),gp(0x7fa1b4),4);
}
B54529d:{NFSU2_TR(0x54529d);
{goto L5452b9;}
}
B54529f:L54529f:{c.instructions+=2;NFSU2_TR(0x54529f);
__builtin_memmove((R+0),gp(0x7fa1bc),4);
}
B5452a4:{NFSU2_TR(0x5452a4);
{goto L5452b9;}
}
B5452a6:L5452a6:{c.instructions+=2;NFSU2_TR(0x5452a6);
__builtin_memmove((R+0),gp(0x7fa1c0),4);
}
B5452ab:{NFSU2_TR(0x5452ab);
{goto L5452b9;}
}
B5452ad:L5452ad:{c.instructions+=2;NFSU2_TR(0x5452ad);
__builtin_memmove((R+0),gp(0x7fa1ec),4);
}
B5452b2:{NFSU2_TR(0x5452b2);
{goto L5452b9;}
}
B5452b4:L5452b4:{c.instructions+=1;NFSU2_TR(0x5452b4);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B5452b9:L5452b9:{c.instructions+=4;NFSU2_TR(0x5452b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5452bc:{NFSU2_TR(0x5452bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5452bd:{NFSU2_TR(0x5452bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5452be:{NFSU2_TR(0x5452be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5452c3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B5452c3:L5452c3:{c.instructions+=3;NFSU2_TR(0x5452c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5452c6:{NFSU2_TR(0x5452c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5452c8:{NFSU2_TR(0x5452c8);
if(r1(R+518)){{goto L5452d0;}}
}
B5452ca:L5452ca:{c.instructions+=3;NFSU2_TR(0x5452ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5452cc:{NFSU2_TR(0x5452cc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5452ce:{NFSU2_TR(0x5452ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545277u);}goto L545277;}}
}
B5452d0:L5452d0:{c.instructions+=9;NFSU2_TR(0x5452d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5452d4:{NFSU2_TR(0x5452d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5452d7:{NFSU2_TR(0x5452d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5452d8:{NFSU2_TR(0x5452d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5452d9:{NFSU2_TR(0x5452d9);
__builtin_memmove((R+0),(R+12),4);
}
B5452db:{NFSU2_TR(0x5452db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5452dc:{NFSU2_TR(0x5452dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5452e3:{NFSU2_TR(0x5452e3);
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
B5452e6:{NFSU2_TR(0x5452e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545310:L545310:{c.instructions+=3;NFSU2_TR(0x545310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545311:{NFSU2_TR(0x545311);
__builtin_memmove((R+24),(R+4),4);
}
B545313:{NFSU2_TR(0x545313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545318ull));
TAIL_STATIC(0x53a240u,53a);
}
B545318:L545318:{c.instructions+=2;NFSU2_TR(0x545318);
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
B54531d:{NFSU2_TR(0x54531d);
if(r1(R+518)){{goto L545328;}}
}
B54531f:L54531f:{c.instructions+=2;NFSU2_TR(0x54531f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545320:{NFSU2_TR(0x545320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545325ull));
TAIL_STATIC(0x575630u,575);
}
B545325:L545325:{c.instructions+=1;NFSU2_TR(0x545325);
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
B545328:L545328:{c.instructions+=3;NFSU2_TR(0x545328);
__builtin_memmove((R+0),(R+24),4);
}
B54532a:{NFSU2_TR(0x54532a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54532b:{NFSU2_TR(0x54532b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545330:L545330:{c.instructions+=3;NFSU2_TR(0x545330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545331:{NFSU2_TR(0x545331);
__builtin_memmove((R+24),(R+4),4);
}
B545333:{NFSU2_TR(0x545333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545338ull));
{goto L545350;}
}
B545338:L545338:{c.instructions+=2;NFSU2_TR(0x545338);
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
B54533d:{NFSU2_TR(0x54533d);
if(r1(R+518)){{goto L545348;}}
}
B54533f:L54533f:{c.instructions+=2;NFSU2_TR(0x54533f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545340:{NFSU2_TR(0x545340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545345ull));
TAIL_STATIC(0x575630u,575);
}
B545345:L545345:{c.instructions+=1;NFSU2_TR(0x545345);
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
B545348:L545348:{c.instructions+=3;NFSU2_TR(0x545348);
__builtin_memmove((R+0),(R+24),4);
}
B54534a:{NFSU2_TR(0x54534a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54534b:{NFSU2_TR(0x54534b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545350:L545350:{c.instructions+=15;NFSU2_TR(0x545350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545352:{NFSU2_TR(0x545352);
u8 U[4];
w4(U+0,u32(0x7772b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545357:{NFSU2_TR(0x545357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54535d:{NFSU2_TR(0x54535d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54535e:{NFSU2_TR(0x54535e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545365:{NFSU2_TR(0x545365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545366:{NFSU2_TR(0x545366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545367:{NFSU2_TR(0x545367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545368:{NFSU2_TR(0x545368);
__builtin_memmove((R+28),(R+4),4);
}
B54536a:{NFSU2_TR(0x54536a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54536e:{NFSU2_TR(0x54536e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545371:{NFSU2_TR(0x545371);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545374:{NFSU2_TR(0x545374);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545376:{NFSU2_TR(0x545376);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54537e:{NFSU2_TR(0x54537e);
if(r1(R+518)){{goto L545399;}}
}
B545380:L545380:{c.instructions+=6;NFSU2_TR(0x545380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B545382:{NFSU2_TR(0x545382);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B545385:{NFSU2_TR(0x545385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B545387:{NFSU2_TR(0x545387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545388:{NFSU2_TR(0x545388);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54538b:{NFSU2_TR(0x54538b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545390ull));
TAIL_STATIC(0x575630u,575);
}
B545390:L545390:{c.instructions+=4;NFSU2_TR(0x545390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B545392:{NFSU2_TR(0x545392);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545395:{NFSU2_TR(0x545395);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545397:{NFSU2_TR(0x545397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545380u);}goto L545380;}}
}
B545399:L545399:{c.instructions+=7;NFSU2_TR(0x545399);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54539d:{NFSU2_TR(0x54539d);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+28)),r4(U+0));
}
B5453a3:{NFSU2_TR(0x5453a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5453a4:{NFSU2_TR(0x5453a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5453a5:{NFSU2_TR(0x5453a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5453ac:{NFSU2_TR(0x5453ac);
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
B5453af:{NFSU2_TR(0x5453af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5453b0:L5453b0:{c.instructions+=7;NFSU2_TR(0x5453b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453b1:{NFSU2_TR(0x5453b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453b2:{NFSU2_TR(0x5453b2);
__builtin_memmove((R+24),(R+4),4);
}
B5453b4:{NFSU2_TR(0x5453b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5453b7:{NFSU2_TR(0x5453b7);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453bc:{NFSU2_TR(0x5453bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453bd:{NFSU2_TR(0x5453bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5453c2ull));
TAIL_STATIC(0x495520u,495);
}
B5453c2:L5453c2:{c.instructions+=4;NFSU2_TR(0x5453c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5453c5:{NFSU2_TR(0x5453c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5453c8:{NFSU2_TR(0x5453c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5453ca:{NFSU2_TR(0x5453ca);
if(r1(R+518)){{goto L5453e9;}}
}
B5453cc:L5453cc:{c.instructions+=2;NFSU2_TR(0x5453cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453cd:{NFSU2_TR(0x5453cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5453d2ull));
TAIL_STATIC(0x52cef0u,52c);
}
B5453d2:L5453d2:{c.instructions+=3;NFSU2_TR(0x5453d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5453d5:{NFSU2_TR(0x5453d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5453d7:{NFSU2_TR(0x5453d7);
if(r1(R+518)){{goto L5453e9;}}
}
B5453d9:L5453d9:{c.instructions+=3;NFSU2_TR(0x5453d9);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453de:{NFSU2_TR(0x5453de);
__builtin_memmove((R+4),(R+0),4);
}
B5453e0:{NFSU2_TR(0x5453e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5453e5ull));
TAIL_STATIC(0x517f80u,517);
}
B5453e5:L5453e5:{c.instructions+=2;NFSU2_TR(0x5453e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5453e7:{NFSU2_TR(0x5453e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545400;}}
}
B5453e9:L5453e9:{c.instructions+=3;NFSU2_TR(0x5453e9);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B5453ee:{NFSU2_TR(0x5453ee);
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
B5453f0:{NFSU2_TR(0x5453f0);
if(r1(R+518)){{goto L545452;}}
}
B5453f2:L5453f2:{c.instructions+=4;NFSU2_TR(0x5453f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5453f5:{NFSU2_TR(0x5453f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453f6:{NFSU2_TR(0x5453f6);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5453fb:{NFSU2_TR(0x5453fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545400ull));
TAIL_STATIC(0x52c570u,52c);
}
B545400:L545400:{c.instructions+=3;NFSU2_TR(0x545400);
__builtin_memmove((R+28),(R+0),4);
}
B545402:{NFSU2_TR(0x545402);
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
B545404:{NFSU2_TR(0x545404);
if(r1(R+518)){{goto L545452;}}
}
B545406:L545406:{c.instructions+=3;NFSU2_TR(0x545406);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B545409:{NFSU2_TR(0x545409);
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
B54540b:{NFSU2_TR(0x54540b);
if(r1(R+518)){{goto L545452;}}
}
B54540d:L54540d:{c.instructions+=1;NFSU2_TR(0x54540d);
__builtin_memmove((R+4),(R+4),4);
}
B545410:L545410:{c.instructions+=2;NFSU2_TR(0x545410);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545415:{NFSU2_TR(0x545415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54541aull));
TAIL_STATIC(0x505450u,505);
}
B54541a:L54541a:{c.instructions+=4;NFSU2_TR(0x54541a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54541d:{NFSU2_TR(0x54541d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545420:{NFSU2_TR(0x545420);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545422:{NFSU2_TR(0x545422);
if(r1(R+518)){{goto L54542e;}}
}
B545424:L545424:{c.instructions+=3;NFSU2_TR(0x545424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B545427:{NFSU2_TR(0x545427);
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
B545429:{NFSU2_TR(0x545429);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545410u);}goto L545410;}}
}
B54542b:L54542b:{c.instructions+=3;NFSU2_TR(0x54542b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54542c:{NFSU2_TR(0x54542c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54542d:{NFSU2_TR(0x54542d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54542e:L54542e:{c.instructions+=2;NFSU2_TR(0x54542e);
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
B545430:{NFSU2_TR(0x545430);
if(r1(R+518)){{goto L545452;}}
}
B545432:L545432:{c.instructions+=2;NFSU2_TR(0x545432);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B545435:{NFSU2_TR(0x545435);
if(r1(R+518)){{goto L54544b;}}
}
B545437:L545437:{c.instructions+=3;NFSU2_TR(0x545437);
__builtin_memmove((R+4),(R+28),4);
}
B545439:{NFSU2_TR(0x545439);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54543c:{NFSU2_TR(0x54543c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545441ull));
TAIL_STATIC(0x517720u,517);
}
B545441:L545441:{c.instructions+=2;NFSU2_TR(0x545441);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545444:{NFSU2_TR(0x545444);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54544b:L54544b:{c.instructions+=1;NFSU2_TR(0x54544b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545452:L545452:{c.instructions+=3;NFSU2_TR(0x545452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B545453:{NFSU2_TR(0x545453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545454:{NFSU2_TR(0x545454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545460:L545460:{c.instructions+=7;NFSU2_TR(0x545460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545461:{NFSU2_TR(0x545461);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545462:{NFSU2_TR(0x545462);
__builtin_memmove((R+24),(R+4),4);
}
B545464:{NFSU2_TR(0x545464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545467:{NFSU2_TR(0x545467);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54546c:{NFSU2_TR(0x54546c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54546d:{NFSU2_TR(0x54546d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545472ull));
TAIL_STATIC(0x4954e0u,495);
}
B545472:L545472:{c.instructions+=4;NFSU2_TR(0x545472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B545475:{NFSU2_TR(0x545475);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B545478:{NFSU2_TR(0x545478);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54547a:{NFSU2_TR(0x54547a);
if(r1(R+518)){{goto L545499;}}
}
B54547c:L54547c:{c.instructions+=2;NFSU2_TR(0x54547c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54547d:{NFSU2_TR(0x54547d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545482ull));
TAIL_STATIC(0x52cef0u,52c);
}
B545482:L545482:{c.instructions+=3;NFSU2_TR(0x545482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545485:{NFSU2_TR(0x545485);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545487:{NFSU2_TR(0x545487);
if(r1(R+518)){{goto L545499;}}
}
B545489:L545489:{c.instructions+=3;NFSU2_TR(0x545489);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54548e:{NFSU2_TR(0x54548e);
__builtin_memmove((R+4),(R+0),4);
}
B545490:{NFSU2_TR(0x545490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545495ull));
TAIL_STATIC(0x517f80u,517);
}
B545495:L545495:{c.instructions+=2;NFSU2_TR(0x545495);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545497:{NFSU2_TR(0x545497);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5454b0;}}
}
B545499:L545499:{c.instructions+=3;NFSU2_TR(0x545499);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54549e:{NFSU2_TR(0x54549e);
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
B5454a0:{NFSU2_TR(0x5454a0);
if(r1(R+518)){{goto L545502;}}
}
B5454a2:L5454a2:{c.instructions+=4;NFSU2_TR(0x5454a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5454a5:{NFSU2_TR(0x5454a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5454a6:{NFSU2_TR(0x5454a6);
u8 U[4];
w4(U+0,u32(0x9ff84a88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5454ab:{NFSU2_TR(0x5454ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5454b0ull));
TAIL_STATIC(0x52c570u,52c);
}
B5454b0:L5454b0:{c.instructions+=3;NFSU2_TR(0x5454b0);
__builtin_memmove((R+28),(R+0),4);
}
B5454b2:{NFSU2_TR(0x5454b2);
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
B5454b4:{NFSU2_TR(0x5454b4);
if(r1(R+518)){{goto L545502;}}
}
B5454b6:L5454b6:{c.instructions+=3;NFSU2_TR(0x5454b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5454b9:{NFSU2_TR(0x5454b9);
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
B5454bb:{NFSU2_TR(0x5454bb);
if(r1(R+518)){{goto L545502;}}
}
B5454bd:L5454bd:{c.instructions+=1;NFSU2_TR(0x5454bd);
__builtin_memmove((R+4),(R+4),4);
}
B5454c0:L5454c0:{c.instructions+=2;NFSU2_TR(0x5454c0);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5454c5:{NFSU2_TR(0x5454c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5454caull));
TAIL_STATIC(0x505450u,505);
}
B5454ca:L5454ca:{c.instructions+=4;NFSU2_TR(0x5454ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5454cd:{NFSU2_TR(0x5454cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5454d0:{NFSU2_TR(0x5454d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5454d2:{NFSU2_TR(0x5454d2);
if(r1(R+518)){{goto L5454de;}}
}
B5454d4:L5454d4:{c.instructions+=3;NFSU2_TR(0x5454d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5454d7:{NFSU2_TR(0x5454d7);
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
B5454d9:{NFSU2_TR(0x5454d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5454c0u);}goto L5454c0;}}
}
B5454db:L5454db:{c.instructions+=3;NFSU2_TR(0x5454db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5454dc:{NFSU2_TR(0x5454dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5454dd:{NFSU2_TR(0x5454dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5454de:L5454de:{c.instructions+=2;NFSU2_TR(0x5454de);
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
B5454e0:{NFSU2_TR(0x5454e0);
if(r1(R+518)){{goto L545502;}}
}
B5454e2:L5454e2:{c.instructions+=2;NFSU2_TR(0x5454e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5454e5:{NFSU2_TR(0x5454e5);
if(r1(R+518)){{goto L5454fb;}}
}
B5454e7:L5454e7:{c.instructions+=3;NFSU2_TR(0x5454e7);
__builtin_memmove((R+4),(R+28),4);
}
B5454e9:{NFSU2_TR(0x5454e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5454ec:{NFSU2_TR(0x5454ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5454f1ull));
TAIL_STATIC(0x517720u,517);
}
B5454f1:L5454f1:{c.instructions+=2;NFSU2_TR(0x5454f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5454f4:{NFSU2_TR(0x5454f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5454fb:L5454fb:{c.instructions+=1;NFSU2_TR(0x5454fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545502:L545502:{c.instructions+=3;NFSU2_TR(0x545502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B545503:{NFSU2_TR(0x545503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545504:{NFSU2_TR(0x545504);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545510:L545510:{c.instructions+=6;NFSU2_TR(0x545510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545511:{NFSU2_TR(0x545511);
__builtin_memmove((R+24),(R+4),4);
}
B545513:{NFSU2_TR(0x545513);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545514:{NFSU2_TR(0x545514);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B545517:{NFSU2_TR(0x545517);
__builtin_memmove((R+4),(R+28),4);
}
B545519:{NFSU2_TR(0x545519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54551eull));
TAIL_STATIC(0x51f7e0u,51f);
}
B54551e:L54551e:{c.instructions+=6;NFSU2_TR(0x54551e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54551f:{NFSU2_TR(0x54551f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545525:{NFSU2_TR(0x545525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545526:{NFSU2_TR(0x545526);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545528:{NFSU2_TR(0x545528);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54552e:{NFSU2_TR(0x54552e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545533ull));
TAIL_STATIC(0x538080u,538);
}
B545533:L545533:{c.instructions+=2;NFSU2_TR(0x545533);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545539:{NFSU2_TR(0x545539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54553eull));
TAIL_STATIC(0x51f7e0u,51f);
}
B54553e:L54553e:{c.instructions+=6;NFSU2_TR(0x54553e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545544:{NFSU2_TR(0x545544);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545545:{NFSU2_TR(0x545545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545546:{NFSU2_TR(0x545546);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545548:{NFSU2_TR(0x545548);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54554e:{NFSU2_TR(0x54554e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545553ull));
TAIL_STATIC(0x538080u,538);
}
B545553:L545553:{c.instructions+=3;NFSU2_TR(0x545553);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545556:{NFSU2_TR(0x545556);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545558:{NFSU2_TR(0x545558);
if(r1(R+518)){{goto L54555f;}}
}
B54555a:L54555a:{c.instructions+=2;NFSU2_TR(0x54555a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B54555d:{NFSU2_TR(0x54555d);
{goto L545561;}
}
B54555f:L54555f:{c.instructions+=1;NFSU2_TR(0x54555f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545561:L545561:{c.instructions+=2;NFSU2_TR(0x545561);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545564:{NFSU2_TR(0x545564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545577;}}
}
B545566:L545566:{c.instructions+=3;NFSU2_TR(0x545566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54556c:{NFSU2_TR(0x54556c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54556d:{NFSU2_TR(0x54556d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545572ull));
TAIL_STATIC(0x50ca00u,50c);
}
B545572:L545572:{c.instructions+=2;NFSU2_TR(0x545572);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545575:{NFSU2_TR(0x545575);
{goto L5455b6;}
}
B545577:L545577:{c.instructions+=3;NFSU2_TR(0x545577);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54557a:{NFSU2_TR(0x54557a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54557c:{NFSU2_TR(0x54557c);
if(r1(R+518)){{goto L545583;}}
}
B54557e:L54557e:{c.instructions+=2;NFSU2_TR(0x54557e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B545581:{NFSU2_TR(0x545581);
{goto L545585;}
}
B545583:L545583:{c.instructions+=1;NFSU2_TR(0x545583);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545585:L545585:{c.instructions+=2;NFSU2_TR(0x545585);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545588:{NFSU2_TR(0x545588);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54559b;}}
}
B54558a:L54558a:{c.instructions+=3;NFSU2_TR(0x54558a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545590:{NFSU2_TR(0x545590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545591:{NFSU2_TR(0x545591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545596ull));
TAIL_STATIC(0x50ca00u,50c);
}
B545596:L545596:{c.instructions+=2;NFSU2_TR(0x545596);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545599:{NFSU2_TR(0x545599);
{goto L5455b6;}
}
B54559b:L54559b:{c.instructions+=3;NFSU2_TR(0x54559b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5455a1:{NFSU2_TR(0x5455a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5455a2:{NFSU2_TR(0x5455a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5455a7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5455a7:L5455a7:{c.instructions+=3;NFSU2_TR(0x5455a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5455ad:{NFSU2_TR(0x5455ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5455ae:{NFSU2_TR(0x5455ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5455b3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B5455b3:L5455b3:{c.instructions+=1;NFSU2_TR(0x5455b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5455b6:L5455b6:{c.instructions+=4;NFSU2_TR(0x5455b6);
__builtin_memmove((R+4),gp(0x838990),4);
}
B5455bc:{NFSU2_TR(0x5455bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5455be:{NFSU2_TR(0x5455be);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5455c0:{NFSU2_TR(0x5455c0);
if(r1(R+518)){{goto L5455d8;}}
}
B5455c2:L5455c2:{c.instructions+=2;NFSU2_TR(0x5455c2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5455c5:{NFSU2_TR(0x5455c5);
if(r1(R+518)){{goto L5455d1;}}
}
B5455c7:L5455c7:{c.instructions+=2;NFSU2_TR(0x5455c7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5455c8:{NFSU2_TR(0x5455c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5455ec;}}
}
B5455ca:L5455ca:{c.instructions+=2;NFSU2_TR(0x5455ca);
w4(R+0,u32(0xdf86227aull));
}
B5455cf:{NFSU2_TR(0x5455cf);
{goto L5455ec;}
}
B5455d1:L5455d1:{c.instructions+=2;NFSU2_TR(0x5455d1);
w4(R+0,u32(0xb6aaecf7ull));
}
B5455d6:{NFSU2_TR(0x5455d6);
{goto L5455ec;}
}
B5455d8:L5455d8:{c.instructions+=6;NFSU2_TR(0x5455d8);
__builtin_memmove((R+0),gp(0x83898c),4);
}
B5455dd:{NFSU2_TR(0x5455dd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5455de:{NFSU2_TR(0x5455de);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5455e0:{NFSU2_TR(0x5455e0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5455e2:{NFSU2_TR(0x5455e2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x537cfab5ull))));
}
B5455e7:{NFSU2_TR(0x5455e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x25f0c994ull))));
}
B5455ec:L5455ec:{c.instructions+=3;NFSU2_TR(0x5455ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5455f2:{NFSU2_TR(0x5455f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5455f4:{NFSU2_TR(0x5455f4);
if(r1(R+518)){{goto L5455fd;}}
}
B5455f6:L5455f6:{c.instructions+=2;NFSU2_TR(0x5455f6);
w4(R+0,u32(0x294d2a3ull));
}
B5455fb:{NFSU2_TR(0x5455fb);
{goto L54560c;}
}
B5455fd:L5455fd:{c.instructions+=3;NFSU2_TR(0x5455fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B545603:{NFSU2_TR(0x545603);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B545605:{NFSU2_TR(0x545605);
if(r1(R+518)){{goto L54560c;}}
}
B545607:L545607:{c.instructions+=1;NFSU2_TR(0x545607);
w4(R+0,u32(0x24911e04ull));
}
B54560c:L54560c:{c.instructions+=5;NFSU2_TR(0x54560c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54560d:{NFSU2_TR(0x54560d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545610:{NFSU2_TR(0x545610);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545615:{NFSU2_TR(0x545615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545616:{NFSU2_TR(0x545616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54561bull));
TAIL_STATIC(0x495460u,495);
}
B54561b:L54561b:{c.instructions+=4;NFSU2_TR(0x54561b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54561e:{NFSU2_TR(0x54561e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B545621:{NFSU2_TR(0x545621);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545623:{NFSU2_TR(0x545623);
if(r1(R+518)){{goto L54563a;}}
}
B545625:L545625:{c.instructions+=6;NFSU2_TR(0x545625);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545628:{NFSU2_TR(0x545628);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54562b:{NFSU2_TR(0x54562b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54562c:{NFSU2_TR(0x54562c);
u8 U[4];
w4(U+0,u32(0x6c9e933eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545631:{NFSU2_TR(0x545631);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545632:{NFSU2_TR(0x545632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545637ull));
TAIL_STATIC(0x495460u,495);
}
B545637:L545637:{c.instructions+=1;NFSU2_TR(0x545637);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54563a:L54563a:{c.instructions+=4;NFSU2_TR(0x54563a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545640:{NFSU2_TR(0x545640);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B545646:{NFSU2_TR(0x545646);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545648:{NFSU2_TR(0x545648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54564e;}}
}
B54564a:L54564a:{c.instructions+=2;NFSU2_TR(0x54564a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54564c:{NFSU2_TR(0x54564c);
{goto L545654;}
}
B54564e:L54564e:{c.instructions+=1;NFSU2_TR(0x54564e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B545654:L545654:{c.instructions+=2;NFSU2_TR(0x545654);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545656:{NFSU2_TR(0x545656);
if(r1(R+518)){{goto L545677;}}
}
B545658:L545658:{c.instructions+=6;NFSU2_TR(0x545658);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54565b:{NFSU2_TR(0x54565b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54565c:{NFSU2_TR(0x54565c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54565f:{NFSU2_TR(0x54565f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545660:{NFSU2_TR(0x545660);
__builtin_memmove((R+4),(R+24),4);
}
B545662:{NFSU2_TR(0x545662);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545667ull));
TAIL_STATIC(0x50e530u,50e);
}
B545667:L545667:{c.instructions+=4;NFSU2_TR(0x545667);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545668:{NFSU2_TR(0x545668);
u8 U[4];
w4(U+0,u32(0xd28b9316ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54566d:{NFSU2_TR(0x54566d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54566e:{NFSU2_TR(0x54566e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545673ull));
TAIL_STATIC(0x537b80u,537);
}
B545673:L545673:{c.instructions+=2;NFSU2_TR(0x545673);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B545676:{NFSU2_TR(0x545676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B545677:L545677:{c.instructions+=4;NFSU2_TR(0x545677);
__builtin_memmove((R+4),gp(0x850078),4);
}
B54567d:{NFSU2_TR(0x54567d);
w4(R+0,u32(0x1ull));
}
B545682:{NFSU2_TR(0x545682);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545684:{NFSU2_TR(0x545684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5456e1;}}
}
B545686:L545686:{c.instructions+=2;NFSU2_TR(0x545686);
u8 U[8];
__builtin_memmove((U+0),gp(0x83898c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54568c:{NFSU2_TR(0x54568c);
if(r1(R+518)){{goto L5456e1;}}
}
B54568e:L54568e:{c.instructions+=5;NFSU2_TR(0x54568e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545691:{NFSU2_TR(0x545691);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545694:{NFSU2_TR(0x545694);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54569a:{NFSU2_TR(0x54569a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54569c:{NFSU2_TR(0x54569c);
if(r1(R+518)){{goto L5456a5;}}
}
B54569e:L54569e:{c.instructions+=2;NFSU2_TR(0x54569e);
w4(R+0,u32(0x1dull));
}
B5456a3:{NFSU2_TR(0x5456a3);
{goto L5456b4;}
}
B5456a5:L5456a5:{c.instructions+=3;NFSU2_TR(0x5456a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5456ab:{NFSU2_TR(0x5456ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5456ad:{NFSU2_TR(0x5456ad);
if(r1(R+518)){{goto L5456b4;}}
}
B5456af:L5456af:{c.instructions+=1;NFSU2_TR(0x5456af);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B5456b4:L5456b4:{c.instructions+=2;NFSU2_TR(0x5456b4);
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
B5456b6:{NFSU2_TR(0x5456b6);
if(r1(R+518)){{goto L5456f2;}}
}
B5456b8:L5456b8:{c.instructions+=6;NFSU2_TR(0x5456b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5456bb:{NFSU2_TR(0x5456bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5456be:{NFSU2_TR(0x5456be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456bf:{NFSU2_TR(0x5456bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456c0:{NFSU2_TR(0x5456c0);
w4(R+4,u32(0x85ad40ull));
}
B5456c5:{NFSU2_TR(0x5456c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5456caull));
TAIL_STATIC(0x514280u,514);
}
B5456ca:L5456ca:{c.instructions+=5;NFSU2_TR(0x5456ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456cb:{NFSU2_TR(0x5456cb);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456d0:{NFSU2_TR(0x5456d0);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456d5:{NFSU2_TR(0x5456d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456d6:{NFSU2_TR(0x5456d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5456dbull));
TAIL_STATIC(0x537b80u,537);
}
B5456db:L5456db:{c.instructions+=4;NFSU2_TR(0x5456db);
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
B5456de:{NFSU2_TR(0x5456de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5456df:{NFSU2_TR(0x5456df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5456e0:{NFSU2_TR(0x5456e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5456e1:L5456e1:{c.instructions+=4;NFSU2_TR(0x5456e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5456e4:{NFSU2_TR(0x5456e4);
u8 U[4];
w4(U+0,u32(0x380b632ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456e9:{NFSU2_TR(0x5456e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5456ea:{NFSU2_TR(0x5456ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5456efull));
TAIL_STATIC(0x4954e0u,495);
}
B5456ef:L5456ef:{c.instructions+=1;NFSU2_TR(0x5456ef);
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
B5456f2:L5456f2:{c.instructions+=3;NFSU2_TR(0x5456f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5456f3:{NFSU2_TR(0x5456f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5456f4:{NFSU2_TR(0x5456f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545700:L545700:{c.instructions+=16;NFSU2_TR(0x545700);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545701:{NFSU2_TR(0x545701);
__builtin_memmove((R+20),(R+16),4);
}
B545703:{NFSU2_TR(0x545703);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B545706:{NFSU2_TR(0x545706);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545708:{NFSU2_TR(0x545708);
u8 U[4];
w4(U+0,u32(0x777748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54570d:{NFSU2_TR(0x54570d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545713:{NFSU2_TR(0x545713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545714:{NFSU2_TR(0x545714);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54571b:{NFSU2_TR(0x54571b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B54571e:{NFSU2_TR(0x54571e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54571f:{NFSU2_TR(0x54571f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545720:{NFSU2_TR(0x545720);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545721:{NFSU2_TR(0x545721);
__builtin_memmove((R+28),(R+4),4);
}
B545723:{NFSU2_TR(0x545723);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545725:{NFSU2_TR(0x545725);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545729:{NFSU2_TR(0x545729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54572eull));
TAIL_STATIC(0x575620u,575);
}
B54572e:L54572e:{c.instructions+=5;NFSU2_TR(0x54572e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B545731:{NFSU2_TR(0x545731);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B545733:{NFSU2_TR(0x545733);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545736:{NFSU2_TR(0x545736);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545738:{NFSU2_TR(0x545738);
if(r1(R+518)){{goto L545776;}}
}
B54573a:L54573a:{c.instructions+=19;NFSU2_TR(0x54573a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54573d:{NFSU2_TR(0x54573d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545740:{NFSU2_TR(0x545740);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545743:{NFSU2_TR(0x545743);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545746:{NFSU2_TR(0x545746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545749:{NFSU2_TR(0x545749);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54574c:{NFSU2_TR(0x54574c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54574f:{NFSU2_TR(0x54574f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545752:{NFSU2_TR(0x545752);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545756:{NFSU2_TR(0x545756);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B54575c:{NFSU2_TR(0x54575c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54575f:{NFSU2_TR(0x54575f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545763:{NFSU2_TR(0x545763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545765:{NFSU2_TR(0x545765);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545768:{NFSU2_TR(0x545768);
__builtin_memmove((R+24),(R+0),4);
}
B54576a:{NFSU2_TR(0x54576a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B54576d:{NFSU2_TR(0x54576d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545770:{NFSU2_TR(0x545770);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545774:{NFSU2_TR(0x545774);
{goto L54577c;}
}
B545776:L545776:{c.instructions+=2;NFSU2_TR(0x545776);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54577a:{NFSU2_TR(0x54577a);
__builtin_memmove((R+24),(R+12),4);
}
B54577c:L54577c:{c.instructions+=15;NFSU2_TR(0x54577c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B545780:{NFSU2_TR(0x545780);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B545784:{NFSU2_TR(0x545784);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545788:{NFSU2_TR(0x545788);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54578c:{NFSU2_TR(0x54578c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54578f:{NFSU2_TR(0x54578f);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B545791:{NFSU2_TR(0x545791);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545792:{NFSU2_TR(0x545792);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B545796:{NFSU2_TR(0x545796);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54579a:{NFSU2_TR(0x54579a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54579c:{NFSU2_TR(0x54579c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x29aull))));
}
B5457a1:{NFSU2_TR(0x5457a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5457a2:{NFSU2_TR(0x5457a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5457a3:{NFSU2_TR(0x5457a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5457a4:{NFSU2_TR(0x5457a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5457a9ull));
TAIL_STATIC(0x5449c0u,544);
}
B5457a9:L5457a9:{c.instructions+=7;NFSU2_TR(0x5457a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5457ac:{NFSU2_TR(0x5457ac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5457ae:{NFSU2_TR(0x5457ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5457b1:{NFSU2_TR(0x5457b1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5457b3:{NFSU2_TR(0x5457b3);
__builtin_memmove((R+4),(R+518),1);
}
B5457b6:{NFSU2_TR(0x5457b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5457b8:{NFSU2_TR(0x5457b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5457ff;}}
}
B5457ba:L5457ba:{c.instructions+=4;NFSU2_TR(0x5457ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5457be:{NFSU2_TR(0x5457be);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5457c2:{NFSU2_TR(0x5457c2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5457c4:{NFSU2_TR(0x5457c4);
if(r1(R+518)){{goto L545803;}}
}
B5457c6:L5457c6:{c.instructions+=2;NFSU2_TR(0x5457c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5457c9:{NFSU2_TR(0x5457c9);
__builtin_memmove((R+16),(R+16),4);
}
B5457d0:L5457d0:{c.instructions+=14;NFSU2_TR(0x5457d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5457d2:{NFSU2_TR(0x5457d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5457d5:{NFSU2_TR(0x5457d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5457d7:{NFSU2_TR(0x5457d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5457da:{NFSU2_TR(0x5457da);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5457dd:{NFSU2_TR(0x5457dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5457e0:{NFSU2_TR(0x5457e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5457e2:{NFSU2_TR(0x5457e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5457e5:{NFSU2_TR(0x5457e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5457e7:{NFSU2_TR(0x5457e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5457e9:{NFSU2_TR(0x5457e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5457ed:{NFSU2_TR(0x5457ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5457f1:{NFSU2_TR(0x5457f1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5457f3:{NFSU2_TR(0x5457f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5457d0u);}goto L5457d0;}}
}
B5457f5:L5457f5:{c.instructions+=3;NFSU2_TR(0x5457f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5457f9:{NFSU2_TR(0x5457f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5457fd:{NFSU2_TR(0x5457fd);
{goto L545803;}
}
B5457ff:L5457ff:{c.instructions+=1;NFSU2_TR(0x5457ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545803:L545803:{c.instructions+=5;NFSU2_TR(0x545803);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545805:{NFSU2_TR(0x545805);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545807:{NFSU2_TR(0x545807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545808:{NFSU2_TR(0x545808);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B54580b:{NFSU2_TR(0x54580b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545810ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545810:L545810:{c.instructions+=2;NFSU2_TR(0x545810);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545812:{NFSU2_TR(0x545812);
if(r1(R+518)){{goto L545826;}}
}
B545814:L545814:{c.instructions+=3;NFSU2_TR(0x545814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545817:{NFSU2_TR(0x545817);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54581a:{NFSU2_TR(0x54581a);
if(r1(R+518)){{goto L545826;}}
}
B54581c:L54581c:{c.instructions+=2;NFSU2_TR(0x54581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54581f:{NFSU2_TR(0x54581f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545826:L545826:{c.instructions+=8;NFSU2_TR(0x545826);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54582c:{NFSU2_TR(0x54582c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545830:{NFSU2_TR(0x545830);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B545831:{NFSU2_TR(0x545831);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B545835:{NFSU2_TR(0x545835);
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
B545837:{NFSU2_TR(0x545837);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54583d:{NFSU2_TR(0x54583d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B545845:{NFSU2_TR(0x545845);
if(r1(R+518)){{goto L545868;}}
}
B545847:L545847:{c.instructions+=7;NFSU2_TR(0x545847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B545849:{NFSU2_TR(0x545849);
__builtin_memmove((R+8),(R+0),4);
}
B54584b:{NFSU2_TR(0x54584b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54584e:{NFSU2_TR(0x54584e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545850:{NFSU2_TR(0x545850);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545851:{NFSU2_TR(0x545851);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545854:{NFSU2_TR(0x545854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545859ull));
TAIL_STATIC(0x575630u,575);
}
B545859:L545859:{c.instructions+=5;NFSU2_TR(0x545859);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54585d:{NFSU2_TR(0x54585d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B545861:{NFSU2_TR(0x545861);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545864:{NFSU2_TR(0x545864);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B545866:{NFSU2_TR(0x545866);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545847u);}goto L545847;}}
}
B545868:L545868:{c.instructions+=8;NFSU2_TR(0x545868);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54586c:{NFSU2_TR(0x54586c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54586d:{NFSU2_TR(0x54586d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54586e:{NFSU2_TR(0x54586e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545875:{NFSU2_TR(0x545875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B545876:{NFSU2_TR(0x545876);
__builtin_memmove((R+16),(R+20),4);
}
B545878:{NFSU2_TR(0x545878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B545879:{NFSU2_TR(0x545879);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545880:L545880:{c.instructions+=5;NFSU2_TR(0x545880);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545881:{NFSU2_TR(0x545881);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545882:{NFSU2_TR(0x545882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545883:{NFSU2_TR(0x545883);
__builtin_memmove((R+24),(R+4),4);
}
B545885:{NFSU2_TR(0x545885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54588aull));
TAIL_STATIC(0x544f00u,544);
}
B54588a:L54588a:{c.instructions+=3;NFSU2_TR(0x54588a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54588c:{NFSU2_TR(0x54588c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545890:{NFSU2_TR(0x545890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545895ull));
TAIL_STATIC(0x575620u,575);
}
B545895:L545895:{c.instructions+=5;NFSU2_TR(0x545895);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B545897:{NFSU2_TR(0x545897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54589a:{NFSU2_TR(0x54589a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54589c:{NFSU2_TR(0x54589c);
w4(R+8,u32(0x1ull));
}
B5458a1:{NFSU2_TR(0x5458a1);
if(r1(R+518)){{goto L5458e0;}}
}
B5458a3:L5458a3:{c.instructions+=18;NFSU2_TR(0x5458a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5458a7:{NFSU2_TR(0x5458a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458aa:{NFSU2_TR(0x5458aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5458ad:{NFSU2_TR(0x5458ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x5eull));
s4(u32(r4(U+0)),r4(U+4));
}
B5458b4:{NFSU2_TR(0x5458b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458b7:{NFSU2_TR(0x5458b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458ba:{NFSU2_TR(0x5458ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458bd:{NFSU2_TR(0x5458bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5458c0:{NFSU2_TR(0x5458c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5458c3:{NFSU2_TR(0x5458c3);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5458c9:{NFSU2_TR(0x5458c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458cc:{NFSU2_TR(0x5458cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5458cf:{NFSU2_TR(0x5458cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5458d1:{NFSU2_TR(0x5458d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458d4:{NFSU2_TR(0x5458d4);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5458d8:{NFSU2_TR(0x5458d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5458db:{NFSU2_TR(0x5458db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5458de:{NFSU2_TR(0x5458de);
{goto L5458e2;}
}
B5458e0:L5458e0:{c.instructions+=1;NFSU2_TR(0x5458e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5458e2:L5458e2:{c.instructions+=5;NFSU2_TR(0x5458e2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5458e4:{NFSU2_TR(0x5458e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5458e5:{NFSU2_TR(0x5458e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5458e6:{NFSU2_TR(0x5458e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5458e9:{NFSU2_TR(0x5458e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5458eeull));
TAIL_STATIC(0x52ed80u,52e);
}
B5458ee:L5458ee:{c.instructions+=2;NFSU2_TR(0x5458ee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5458f0:{NFSU2_TR(0x5458f0);
if(r1(R+518)){{goto L545905;}}
}
B5458f2:L5458f2:{c.instructions+=3;NFSU2_TR(0x5458f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5458f6:{NFSU2_TR(0x5458f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5458f9:{NFSU2_TR(0x5458f9);
if(r1(R+518)){{goto L545905;}}
}
B5458fb:L5458fb:{c.instructions+=2;NFSU2_TR(0x5458fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5458fe:{NFSU2_TR(0x5458fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545905:L545905:{c.instructions+=5;NFSU2_TR(0x545905);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
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
B54590b:{NFSU2_TR(0x54590b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54590c:{NFSU2_TR(0x54590c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54590d:{NFSU2_TR(0x54590d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54590e:{NFSU2_TR(0x54590e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545920:L545920:{c.instructions+=14;NFSU2_TR(0x545920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545921:{NFSU2_TR(0x545921);
__builtin_memmove((R+20),(R+16),4);
}
B545923:{NFSU2_TR(0x545923);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545925:{NFSU2_TR(0x545925);
u8 U[4];
w4(U+0,u32(0x777a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54592a:{NFSU2_TR(0x54592a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545930:{NFSU2_TR(0x545930);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545931:{NFSU2_TR(0x545931);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545938:{NFSU2_TR(0x545938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B54593b:{NFSU2_TR(0x54593b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54593c:{NFSU2_TR(0x54593c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54593d:{NFSU2_TR(0x54593d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54593e:{NFSU2_TR(0x54593e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545940:{NFSU2_TR(0x545940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545943:{NFSU2_TR(0x545943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545948ull));
TAIL_STATIC(0x575620u,575);
}
B545948:L545948:{c.instructions+=4;NFSU2_TR(0x545948);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B54594a:{NFSU2_TR(0x54594a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54594d:{NFSU2_TR(0x54594d);
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
B54594f:{NFSU2_TR(0x54594f);
if(r1(R+518)){{goto L54598d;}}
}
B545951:L545951:{c.instructions+=19;NFSU2_TR(0x545951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545954:{NFSU2_TR(0x545954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B545957:{NFSU2_TR(0x545957);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54595a:{NFSU2_TR(0x54595a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54595d:{NFSU2_TR(0x54595d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545960:{NFSU2_TR(0x545960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545963:{NFSU2_TR(0x545963);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545966:{NFSU2_TR(0x545966);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545969:{NFSU2_TR(0x545969);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54596d:{NFSU2_TR(0x54596d);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B545973:{NFSU2_TR(0x545973);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545976:{NFSU2_TR(0x545976);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545979:{NFSU2_TR(0x545979);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54597d:{NFSU2_TR(0x54597d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B54597f:{NFSU2_TR(0x54597f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545982:{NFSU2_TR(0x545982);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545985:{NFSU2_TR(0x545985);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545988:{NFSU2_TR(0x545988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54598b:{NFSU2_TR(0x54598b);
{goto L545990;}
}
B54598d:L54598d:{c.instructions+=1;NFSU2_TR(0x54598d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545990:L545990:{c.instructions+=8;NFSU2_TR(0x545990);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B545993:{NFSU2_TR(0x545993);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545996:{NFSU2_TR(0x545996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545999:{NFSU2_TR(0x545999);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54599c:{NFSU2_TR(0x54599c);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54599e:{NFSU2_TR(0x54599e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5459a1:{NFSU2_TR(0x5459a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5459a4:{NFSU2_TR(0x5459a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5459a9ull));
TAIL_STATIC(0x60fee0u,60f);
}
B5459a9:L5459a9:{c.instructions+=5;NFSU2_TR(0x5459a9);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B5459af:{NFSU2_TR(0x5459af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5459b1:{NFSU2_TR(0x5459b1);
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
B5459b4:{NFSU2_TR(0x5459b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5459b7:{NFSU2_TR(0x5459b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5459baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5459ba:L5459ba:{c.instructions+=7;NFSU2_TR(0x5459ba);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5459bc:{NFSU2_TR(0x5459bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5459bd:{NFSU2_TR(0x5459bd);
__builtin_memmove((R+28),(R+0),4);
}
B5459bf:{NFSU2_TR(0x5459bf);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5459c1:{NFSU2_TR(0x5459c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5459c2:{NFSU2_TR(0x5459c2);
w4(R+4,u32(0x8a2b68ull));
}
B5459c7:{NFSU2_TR(0x5459c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5459ccull));
TAIL_STATIC(0x61ba30u,61b);
}
B5459cc:L5459cc:{c.instructions+=3;NFSU2_TR(0x5459cc);
__builtin_memmove((R+24),(R+0),4);
}
B5459ce:{NFSU2_TR(0x5459ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5459d0:{NFSU2_TR(0x5459d0);
if(r1(R+518)){{goto L545acb;}}
}
B5459d6:L5459d6:{c.instructions+=1;NFSU2_TR(0x5459d6);
{goto L5459e0;}
}
B5459e0:L5459e0:{c.instructions+=3;NFSU2_TR(0x5459e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5459e4:{NFSU2_TR(0x5459e4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5459e7:{NFSU2_TR(0x5459e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545a76;}}
}
B5459ed:L5459ed:{c.instructions+=6;NFSU2_TR(0x5459ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5459f0:{NFSU2_TR(0x5459f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5459f2:{NFSU2_TR(0x5459f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5459f5:{NFSU2_TR(0x5459f5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B5459f8:{NFSU2_TR(0x5459f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5459fa:{NFSU2_TR(0x5459fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545a76;}}
}
B5459fc:L5459fc:{c.instructions+=5;NFSU2_TR(0x5459fc);
__builtin_memmove((R+8),gp(0x8389b0),4);
}
B545a02:{NFSU2_TR(0x545a02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a03:{NFSU2_TR(0x545a03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a04:{NFSU2_TR(0x545a04);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a06:{NFSU2_TR(0x545a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a0bull));
TAIL_STATIC(0x50f0d0u,50f);
}
B545a0b:L545a0b:{c.instructions+=2;NFSU2_TR(0x545a0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a0c:{NFSU2_TR(0x545a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a11ull));
TAIL_STATIC(0x52a010u,52a);
}
B545a11:L545a11:{c.instructions+=3;NFSU2_TR(0x545a11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B545a14:{NFSU2_TR(0x545a14);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B545a16:{NFSU2_TR(0x545a16);
if(r1(R+518)){{goto L545a76;}}
}
B545a18:L545a18:{c.instructions+=4;NFSU2_TR(0x545a18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B545a1b:{NFSU2_TR(0x545a1b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1full))));
}
B545a1d:{NFSU2_TR(0x545a1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x16ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B545a1f:{NFSU2_TR(0x545a1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545a47;}}
}
B545a21:L545a21:{c.instructions+=2;NFSU2_TR(0x545a21);
u8 U[4];
w4(U+0,u32(0x79c1b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a26:{NFSU2_TR(0x545a26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a2bull));
TAIL_STATIC(0x43db50u,43d);
}
B545a2b:L545a2b:{c.instructions+=7;NFSU2_TR(0x545a2b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B545a2f:{NFSU2_TR(0x545a2f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B545a32:{NFSU2_TR(0x545a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B545a35:{NFSU2_TR(0x545a35);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B545a37:{NFSU2_TR(0x545a37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545a3a:{NFSU2_TR(0x545a3a);
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
B545a3c:{NFSU2_TR(0x545a3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545a47;}}
}
B545a3e:L545a3e:{c.instructions+=1;NFSU2_TR(0x545a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a43ull));
TAIL_STATIC(0x570a30u,570);
}
B545a43:L545a43:{c.instructions+=2;NFSU2_TR(0x545a43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545a45:{NFSU2_TR(0x545a45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545a76;}}
}
B545a47:L545a47:{c.instructions+=5;NFSU2_TR(0x545a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545a4a:{NFSU2_TR(0x545a4a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B545a4b:{NFSU2_TR(0x545a4b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a4d:{NFSU2_TR(0x545a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545a50:{NFSU2_TR(0x545a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a55ull));
TAIL_STATIC(0x575620u,575);
}
B545a55:L545a55:{c.instructions+=3;NFSU2_TR(0x545a55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545a58:{NFSU2_TR(0x545a58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545a5a:{NFSU2_TR(0x545a5a);
if(r1(R+518)){{goto L545a64;}}
}
B545a5c:L545a5c:{c.instructions+=3;NFSU2_TR(0x545a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545a5f:{NFSU2_TR(0x545a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545a62:{NFSU2_TR(0x545a62);
{goto L545a66;}
}
B545a64:L545a64:{c.instructions+=1;NFSU2_TR(0x545a64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545a66:L545a66:{c.instructions+=6;NFSU2_TR(0x545a66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545a69:{NFSU2_TR(0x545a69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545a6b:{NFSU2_TR(0x545a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545a6e:{NFSU2_TR(0x545a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545a71:{NFSU2_TR(0x545a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545a74:{NFSU2_TR(0x545a74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545a76:L545a76:{c.instructions+=7;NFSU2_TR(0x545a76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a78:{NFSU2_TR(0x545a78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a79:{NFSU2_TR(0x545a79);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a7b:{NFSU2_TR(0x545a7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a7c:{NFSU2_TR(0x545a7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545a7d:{NFSU2_TR(0x545a7d);
w4(R+4,u32(0x8a2b68ull));
}
B545a82:{NFSU2_TR(0x545a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545a87ull));
TAIL_STATIC(0x61ba50u,61b);
}
B545a87:L545a87:{c.instructions+=3;NFSU2_TR(0x545a87);
__builtin_memmove((R+24),(R+0),4);
}
B545a89:{NFSU2_TR(0x545a89);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545a8b:{NFSU2_TR(0x545a8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5459e0u);}goto L5459e0;}}
}
B545a91:L545a91:{c.instructions+=2;NFSU2_TR(0x545a91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545a94:{NFSU2_TR(0x545a94);
if(r1(R+518)){{goto L545acb;}}
}
B545a96:L545a96:{c.instructions+=4;NFSU2_TR(0x545a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545a99:{NFSU2_TR(0x545a99);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B545a9c:{NFSU2_TR(0x545a9c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545a9e:{NFSU2_TR(0x545a9e);
if(r1(R+518)){{goto L545ad2;}}
}
B545aa0:L545aa0:{c.instructions+=2;NFSU2_TR(0x545aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545aa3:{NFSU2_TR(0x545aa3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B545aa6:L545aa6:{c.instructions+=14;NFSU2_TR(0x545aa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B545aa8:{NFSU2_TR(0x545aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B545aab:{NFSU2_TR(0x545aab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B545aad:{NFSU2_TR(0x545aad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545ab0:{NFSU2_TR(0x545ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545ab3:{NFSU2_TR(0x545ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B545ab6:{NFSU2_TR(0x545ab6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B545ab8:{NFSU2_TR(0x545ab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545abb:{NFSU2_TR(0x545abb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B545abd:{NFSU2_TR(0x545abd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545abf:{NFSU2_TR(0x545abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545ac2:{NFSU2_TR(0x545ac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B545ac5:{NFSU2_TR(0x545ac5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545ac7:{NFSU2_TR(0x545ac7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545aa6u);}goto L545aa6;}}
}
B545ac9:L545ac9:{c.instructions+=1;NFSU2_TR(0x545ac9);
{goto L545ad2;}
}
B545acb:L545acb:{c.instructions+=2;NFSU2_TR(0x545acb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545ace:{NFSU2_TR(0x545ace);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545ad2:L545ad2:{c.instructions+=7;NFSU2_TR(0x545ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545ad5:{NFSU2_TR(0x545ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B545ad8:{NFSU2_TR(0x545ad8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ada:{NFSU2_TR(0x545ada);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545adc:{NFSU2_TR(0x545adc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545add:{NFSU2_TR(0x545add);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545ae0:{NFSU2_TR(0x545ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ae5ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545ae5:L545ae5:{c.instructions+=2;NFSU2_TR(0x545ae5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545ae7:{NFSU2_TR(0x545ae7);
if(r1(R+518)){{goto L545afb;}}
}
B545ae9:L545ae9:{c.instructions+=3;NFSU2_TR(0x545ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545aec:{NFSU2_TR(0x545aec);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545aef:{NFSU2_TR(0x545aef);
if(r1(R+518)){{goto L545afb;}}
}
B545af1:L545af1:{c.instructions+=2;NFSU2_TR(0x545af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545af4:{NFSU2_TR(0x545af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545afb:L545afb:{c.instructions+=11;NFSU2_TR(0x545afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B545b01:{NFSU2_TR(0x545b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545b04:{NFSU2_TR(0x545b04);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B545b05:{NFSU2_TR(0x545b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545b0b:{NFSU2_TR(0x545b0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B545b0c:{NFSU2_TR(0x545b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B545b0f:{NFSU2_TR(0x545b0f);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B545b11:{NFSU2_TR(0x545b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545b12:{NFSU2_TR(0x545b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B545b19:{NFSU2_TR(0x545b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B545b1a:{NFSU2_TR(0x545b1a);
if(r1(R+518)){{goto L545b3f;}}
}
B545b1c:L545b1c:{c.instructions+=1;NFSU2_TR(0x545b1c);
__builtin_memmove((R+16),(R+16),4);
}
B545b20:L545b20:{c.instructions+=7;NFSU2_TR(0x545b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B545b22:{NFSU2_TR(0x545b22);
__builtin_memmove((R+8),(R+0),4);
}
B545b24:{NFSU2_TR(0x545b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545b27:{NFSU2_TR(0x545b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B545b29:{NFSU2_TR(0x545b29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b2a:{NFSU2_TR(0x545b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545b2d:{NFSU2_TR(0x545b2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545b32ull));
TAIL_STATIC(0x575630u,575);
}
B545b32:L545b32:{c.instructions+=5;NFSU2_TR(0x545b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545b35:{NFSU2_TR(0x545b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545b38:{NFSU2_TR(0x545b38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545b3b:{NFSU2_TR(0x545b3b);
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
B545b3d:{NFSU2_TR(0x545b3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545b20u);}goto L545b20;}}
}
B545b3f:L545b3f:{c.instructions+=5;NFSU2_TR(0x545b3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545b42:{NFSU2_TR(0x545b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545b49:{NFSU2_TR(0x545b49);
__builtin_memmove((R+16),(R+20),4);
}
B545b4b:{NFSU2_TR(0x545b4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B545b4c:{NFSU2_TR(0x545b4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545b50:L545b50:{c.instructions+=6;NFSU2_TR(0x545b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b51:{NFSU2_TR(0x545b51);
__builtin_memmove((R+24),(R+4),4);
}
B545b53:{NFSU2_TR(0x545b53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b54:{NFSU2_TR(0x545b54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B545b57:{NFSU2_TR(0x545b57);
__builtin_memmove((R+4),(R+28),4);
}
B545b59:{NFSU2_TR(0x545b59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545b5eull));
TAIL_STATIC(0x5385c0u,538);
}
B545b5e:L545b5e:{c.instructions+=7;NFSU2_TR(0x545b5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b60:{NFSU2_TR(0x545b60);
u8 U[4];
w4(U+0,u32(0x739c4a1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b65:{NFSU2_TR(0x545b65);
u8 U[4];
w4(U+0,u32(0x739c4a1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b6a:{NFSU2_TR(0x545b6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b6c:{NFSU2_TR(0x545b6c);
__builtin_memmove((R+4),(R+24),4);
}
B545b6e:{NFSU2_TR(0x545b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545b78:{NFSU2_TR(0x545b78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545b7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545b7d:L545b7d:{c.instructions+=6;NFSU2_TR(0x545b7d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b7f:{NFSU2_TR(0x545b7f);
u8 U[4];
w4(U+0,u32(0x15c767cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b84:{NFSU2_TR(0x545b84);
u8 U[4];
w4(U+0,u32(0x15c767cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b89:{NFSU2_TR(0x545b89);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b8b:{NFSU2_TR(0x545b8b);
__builtin_memmove((R+4),(R+24),4);
}
B545b8d:{NFSU2_TR(0x545b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545b92ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545b92:L545b92:{c.instructions+=6;NFSU2_TR(0x545b92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b94:{NFSU2_TR(0x545b94);
u8 U[4];
w4(U+0,u32(0x4e6c2af9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b99:{NFSU2_TR(0x545b99);
u8 U[4];
w4(U+0,u32(0x4e6c2af9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545b9e:{NFSU2_TR(0x545b9e);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ba0:{NFSU2_TR(0x545ba0);
__builtin_memmove((R+4),(R+24),4);
}
B545ba2:{NFSU2_TR(0x545ba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ba7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545ba7:L545ba7:{c.instructions+=6;NFSU2_TR(0x545ba7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ba9:{NFSU2_TR(0x545ba9);
u8 U[4];
w4(U+0,u32(0xbb034ea6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bae:{NFSU2_TR(0x545bae);
u8 U[4];
w4(U+0,u32(0xbb034ea6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bb3:{NFSU2_TR(0x545bb3);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bb5:{NFSU2_TR(0x545bb5);
__builtin_memmove((R+4),(R+24),4);
}
B545bb7:{NFSU2_TR(0x545bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545bbcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545bbc:L545bbc:{c.instructions+=6;NFSU2_TR(0x545bbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bbe:{NFSU2_TR(0x545bbe);
u8 U[4];
w4(U+0,u32(0x28f7092ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bc3:{NFSU2_TR(0x545bc3);
u8 U[4];
w4(U+0,u32(0x28f7092ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bc8:{NFSU2_TR(0x545bc8);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bca:{NFSU2_TR(0x545bca);
__builtin_memmove((R+4),(R+24),4);
}
B545bcc:{NFSU2_TR(0x545bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545bd1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545bd1:L545bd1:{c.instructions+=6;NFSU2_TR(0x545bd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bd3:{NFSU2_TR(0x545bd3);
u8 U[4];
w4(U+0,u32(0x79165861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bd8:{NFSU2_TR(0x545bd8);
u8 U[4];
w4(U+0,u32(0x79165861ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bdd:{NFSU2_TR(0x545bdd);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bdf:{NFSU2_TR(0x545bdf);
__builtin_memmove((R+4),(R+24),4);
}
B545be1:{NFSU2_TR(0x545be1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545be6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545be6:L545be6:{c.instructions+=6;NFSU2_TR(0x545be6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545be8:{NFSU2_TR(0x545be8);
u8 U[4];
w4(U+0,u32(0x3dc6a111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bed:{NFSU2_TR(0x545bed);
u8 U[4];
w4(U+0,u32(0xf69ac384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bf2:{NFSU2_TR(0x545bf2);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bf4:{NFSU2_TR(0x545bf4);
__builtin_memmove((R+4),(R+24),4);
}
B545bf6:{NFSU2_TR(0x545bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545bfbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545bfb:L545bfb:{c.instructions+=6;NFSU2_TR(0x545bfb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545bfd:{NFSU2_TR(0x545bfd);
u8 U[4];
w4(U+0,u32(0x663437a9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c02:{NFSU2_TR(0x545c02);
u8 U[4];
w4(U+0,u32(0x2cbb2d1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c07:{NFSU2_TR(0x545c07);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c09:{NFSU2_TR(0x545c09);
__builtin_memmove((R+4),(R+24),4);
}
B545c0b:{NFSU2_TR(0x545c0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545c10:L545c10:{c.instructions+=6;NFSU2_TR(0x545c10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c12:{NFSU2_TR(0x545c12);
u8 U[4];
w4(U+0,u32(0xdd35467ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c17:{NFSU2_TR(0x545c17);
u8 U[4];
w4(U+0,u32(0xc83de19aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c1c:{NFSU2_TR(0x545c1c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c1e:{NFSU2_TR(0x545c1e);
__builtin_memmove((R+4),(R+24),4);
}
B545c20:{NFSU2_TR(0x545c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c25ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545c25:L545c25:{c.instructions+=6;NFSU2_TR(0x545c25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c27:{NFSU2_TR(0x545c27);
u8 U[4];
w4(U+0,u32(0x2aced725ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c2c:{NFSU2_TR(0x545c2c);
u8 U[4];
w4(U+0,u32(0xa434a006ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c31:{NFSU2_TR(0x545c31);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c33:{NFSU2_TR(0x545c33);
__builtin_memmove((R+4),(R+24),4);
}
B545c35:{NFSU2_TR(0x545c35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545c3a:L545c3a:{c.instructions+=4;NFSU2_TR(0x545c3a);
u8 U[4];
w4(U+0,u32(0x294d2a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c3f:{NFSU2_TR(0x545c3f);
u8 U[4];
w4(U+0,u32(0x294d2a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c44:{NFSU2_TR(0x545c44);
__builtin_memmove((R+4),(R+24),4);
}
B545c46:{NFSU2_TR(0x545c46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c4bull));
TAIL_STATIC(0x53a620u,53a);
}
B545c4b:L545c4b:{c.instructions+=4;NFSU2_TR(0x545c4b);
u8 U[4];
w4(U+0,u32(0x24911e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c50:{NFSU2_TR(0x545c50);
u8 U[4];
w4(U+0,u32(0x24911e04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c55:{NFSU2_TR(0x545c55);
__builtin_memmove((R+4),(R+24),4);
}
B545c57:{NFSU2_TR(0x545c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545880u);}goto L545880;}
}
B545c5c:L545c5c:{c.instructions+=6;NFSU2_TR(0x545c5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c5e:{NFSU2_TR(0x545c5e);
u8 U[4];
w4(U+0,u32(0x945e9bc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c63:{NFSU2_TR(0x545c63);
u8 U[4];
w4(U+0,u32(0x945e9bc5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c68:{NFSU2_TR(0x545c68);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c6a:{NFSU2_TR(0x545c6a);
__builtin_memmove((R+4),(R+24),4);
}
B545c6c:{NFSU2_TR(0x545c6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c71ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545c71:L545c71:{c.instructions+=3;NFSU2_TR(0x545c71);
__builtin_memmove((R+0),gp(0x839bc0),1);
}
B545c76:{NFSU2_TR(0x545c76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B545c78:{NFSU2_TR(0x545c78);
if(r1(R+518)){{goto L545ca0;}}
}
B545c7a:L545c7a:{c.instructions+=4;NFSU2_TR(0x545c7a);
s1(0x839bc0,u8(0x0ull));
}
B545c81:{NFSU2_TR(0x545c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545c84:{NFSU2_TR(0x545c84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c85:{NFSU2_TR(0x545c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c8aull));
TAIL_STATIC(0x505450u,505);
}
B545c8a:L545c8a:{c.instructions+=2;NFSU2_TR(0x545c8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545c8b:{NFSU2_TR(0x545c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545c90ull));
TAIL_STATIC(0x50b840u,50b);
}
B545c90:L545c90:{c.instructions+=3;NFSU2_TR(0x545c90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B545c93:{NFSU2_TR(0x545c93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545c95:{NFSU2_TR(0x545c95);
if(r1(R+518)){{goto L545cd8;}}
}
B545c97:L545c97:{c.instructions+=2;NFSU2_TR(0x545c97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B545c9e:{NFSU2_TR(0x545c9e);
{goto L545cd8;}
}
B545ca0:L545ca0:{c.instructions+=4;NFSU2_TR(0x545ca0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ca1:{NFSU2_TR(0x545ca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B545ca4:{NFSU2_TR(0x545ca4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ca5:{NFSU2_TR(0x545ca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545caaull));
TAIL_STATIC(0x505450u,505);
}
B545caa:L545caa:{c.instructions+=2;NFSU2_TR(0x545caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545cab:{NFSU2_TR(0x545cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545cb0ull));
TAIL_STATIC(0x50b840u,50b);
}
B545cb0:L545cb0:{c.instructions+=3;NFSU2_TR(0x545cb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B545cb3:{NFSU2_TR(0x545cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545cb5:{NFSU2_TR(0x545cb5);
if(r1(R+518)){{goto L545cd7;}}
}
B545cb7:L545cb7:{c.instructions+=2;NFSU2_TR(0x545cb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545cbb:{NFSU2_TR(0x545cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545cd7;}}
}
B545cbd:L545cbd:{c.instructions+=2;NFSU2_TR(0x545cbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545cbe:{NFSU2_TR(0x545cbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545cc3ull));
TAIL_STATIC(0x505450u,505);
}
B545cc3:L545cc3:{c.instructions+=2;NFSU2_TR(0x545cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545cc4:{NFSU2_TR(0x545cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545cc9ull));
TAIL_STATIC(0x50b840u,50b);
}
B545cc9:L545cc9:{c.instructions+=3;NFSU2_TR(0x545cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B545ccc:{NFSU2_TR(0x545ccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545cce:{NFSU2_TR(0x545cce);
if(r1(R+518)){{goto L545cd7;}}
}
B545cd0:L545cd0:{c.instructions+=1;NFSU2_TR(0x545cd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545cd7:L545cd7:{c.instructions+=1;NFSU2_TR(0x545cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B545cd8:L545cd8:{c.instructions+=3;NFSU2_TR(0x545cd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B545cdb:{NFSU2_TR(0x545cdb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545cdc:{NFSU2_TR(0x545cdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ce1ull));
TAIL_STATIC(0x505450u,505);
}
B545ce1:L545ce1:{c.instructions+=2;NFSU2_TR(0x545ce1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ce2:{NFSU2_TR(0x545ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ce7ull));
TAIL_STATIC(0x50b840u,50b);
}
B545ce7:L545ce7:{c.instructions+=3;NFSU2_TR(0x545ce7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B545cea:{NFSU2_TR(0x545cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545cec:{NFSU2_TR(0x545cec);
if(r1(R+518)){{goto L545cf3;}}
}
B545cee:L545cee:{c.instructions+=2;NFSU2_TR(0x545cee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545cf1:{NFSU2_TR(0x545cf1);
{goto L545cf5;}
}
B545cf3:L545cf3:{c.instructions+=1;NFSU2_TR(0x545cf3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545cf5:L545cf5:{c.instructions+=3;NFSU2_TR(0x545cf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545cf6:{NFSU2_TR(0x545cf6);
__builtin_memmove((R+4),(R+28),4);
}
B545cf8:{NFSU2_TR(0x545cf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545cfdull));
TAIL_STATIC(0x51f7a0u,51f);
}
B545cfd:L545cfd:{c.instructions+=2;NFSU2_TR(0x545cfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545cff:{NFSU2_TR(0x545cff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545d0f;}}
}
B545d01:L545d01:{c.instructions+=3;NFSU2_TR(0x545d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545d04:{NFSU2_TR(0x545d04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B545d06:{NFSU2_TR(0x545d06);
if(r1(R+518)){{goto L545d0d;}}
}
B545d08:L545d08:{c.instructions+=2;NFSU2_TR(0x545d08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B545d0b:{NFSU2_TR(0x545d0b);
{goto L545d0f;}
}
B545d0d:L545d0d:{c.instructions+=1;NFSU2_TR(0x545d0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545d0f:L545d0f:{c.instructions+=3;NFSU2_TR(0x545d0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d10:{NFSU2_TR(0x545d10);
__builtin_memmove((R+4),(R+28),4);
}
B545d12:{NFSU2_TR(0x545d12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d17ull));
TAIL_STATIC(0x5386a0u,538);
}
B545d17:L545d17:{c.instructions+=3;NFSU2_TR(0x545d17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d19:{NFSU2_TR(0x545d19);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545d1c:{NFSU2_TR(0x545d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d21ull));
TAIL_STATIC(0x43be80u,43b);
}
B545d21:L545d21:{c.instructions+=3;NFSU2_TR(0x545d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B545d22:{NFSU2_TR(0x545d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B545d23:{NFSU2_TR(0x545d23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B545d30:L545d30:{c.instructions+=8;NFSU2_TR(0x545d30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d31:{NFSU2_TR(0x545d31);
__builtin_memmove((R+20),(R+16),4);
}
B545d33:{NFSU2_TR(0x545d33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d34:{NFSU2_TR(0x545d34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d35:{NFSU2_TR(0x545d35);
__builtin_memmove((R+24),(R+4),4);
}
B545d37:{NFSU2_TR(0x545d37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d38:{NFSU2_TR(0x545d38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545d3b:{NFSU2_TR(0x545d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d40ull));
TAIL_STATIC(0x5385c0u,538);
}
B545d40:L545d40:{c.instructions+=8;NFSU2_TR(0x545d40);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d42:{NFSU2_TR(0x545d42);
u8 U[4];
w4(U+0,u32(0xf7363420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d47:{NFSU2_TR(0x545d47);
u8 U[4];
w4(U+0,u32(0xf7363420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d4c:{NFSU2_TR(0x545d4c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B545d4e:{NFSU2_TR(0x545d4e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d50:{NFSU2_TR(0x545d50);
__builtin_memmove((R+4),(R+24),4);
}
B545d52:{NFSU2_TR(0x545d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545d58:{NFSU2_TR(0x545d58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545d5d:L545d5d:{c.instructions+=6;NFSU2_TR(0x545d5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d5f:{NFSU2_TR(0x545d5f);
u8 U[4];
w4(U+0,u32(0xc43176d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d64:{NFSU2_TR(0x545d64);
u8 U[4];
w4(U+0,u32(0xc43176d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d69:{NFSU2_TR(0x545d69);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d6b:{NFSU2_TR(0x545d6b);
__builtin_memmove((R+4),(R+24),4);
}
B545d6d:{NFSU2_TR(0x545d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545d72:L545d72:{c.instructions+=6;NFSU2_TR(0x545d72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d74:{NFSU2_TR(0x545d74);
u8 U[4];
w4(U+0,u32(0x643bde3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d79:{NFSU2_TR(0x545d79);
u8 U[4];
w4(U+0,u32(0x643bde3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d7e:{NFSU2_TR(0x545d7e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d80:{NFSU2_TR(0x545d80);
__builtin_memmove((R+4),(R+24),4);
}
B545d82:{NFSU2_TR(0x545d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d87ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545d87:L545d87:{c.instructions+=6;NFSU2_TR(0x545d87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d89:{NFSU2_TR(0x545d89);
u8 U[4];
w4(U+0,u32(0x10b5e8d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d8e:{NFSU2_TR(0x545d8e);
u8 U[4];
w4(U+0,u32(0x10b5e8d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d93:{NFSU2_TR(0x545d93);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545d95:{NFSU2_TR(0x545d95);
__builtin_memmove((R+4),(R+24),4);
}
B545d97:{NFSU2_TR(0x545d97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545d9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x545700u);}goto L545700;}
}
B545d9c:L545d9c:{c.instructions+=5;NFSU2_TR(0x545d9c);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B545da1:{NFSU2_TR(0x545da1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545da2:{NFSU2_TR(0x545da2);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545da4:{NFSU2_TR(0x545da4);
u8 U[4];
w4(U+0,u32(0x56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545da6:{NFSU2_TR(0x545da6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545dabull));
TAIL_STATIC(0x50f0d0u,50f);
}
B545dab:L545dab:{c.instructions+=2;NFSU2_TR(0x545dab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545dac:{NFSU2_TR(0x545dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545db1ull));
TAIL_STATIC(0x52a1a0u,52a);
}
B545db1:L545db1:{c.instructions+=8;NFSU2_TR(0x545db1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B545db4:{NFSU2_TR(0x545db4);
__builtin_memmove((R+12),(R+0),1);
}
B545db6:{NFSU2_TR(0x545db6);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B545db8:{NFSU2_TR(0x545db8);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+12))<(r1(R+12))));
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B545dba:{NFSU2_TR(0x545dba);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545dbc:{NFSU2_TR(0x545dbc);
w4(R+4,u32(0x8392c0ull));
}
B545dc1:{NFSU2_TR(0x545dc1);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+12),u8(0x1ull)));
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B545dc3:{NFSU2_TR(0x545dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545dc8ull));
TAIL_STATIC(0x6102f0u,610);
}
B545dc8:L545dc8:{c.instructions+=7;NFSU2_TR(0x545dc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B545dcc:{NFSU2_TR(0x545dcc);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B545dcf:{NFSU2_TR(0x545dcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B545dd2:{NFSU2_TR(0x545dd2);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B545dd4:{NFSU2_TR(0x545dd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545dda:{NFSU2_TR(0x545dda);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ddc:{NFSU2_TR(0x545ddc);
if(r1(R+518)){{goto L545e41;}}
}
B545dde:L545dde:{c.instructions+=1;NFSU2_TR(0x545dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545de3ull));
TAIL_STATIC(0x575620u,575);
}
B545de3:L545de3:{c.instructions+=3;NFSU2_TR(0x545de3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545de6:{NFSU2_TR(0x545de6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545de8:{NFSU2_TR(0x545de8);
if(r1(R+518)){{goto L545e27;}}
}
B545dea:L545dea:{c.instructions+=16;NFSU2_TR(0x545dea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545ded:{NFSU2_TR(0x545ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545df4:{NFSU2_TR(0x545df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545df7:{NFSU2_TR(0x545df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545dfa:{NFSU2_TR(0x545dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545dfd:{NFSU2_TR(0x545dfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e01:{NFSU2_TR(0x545e01);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e05:{NFSU2_TR(0x545e05);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B545e0b:{NFSU2_TR(0x545e0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x1036e38eull));
s4(u32(r4(U+0)),r4(U+4));
}
B545e12:{NFSU2_TR(0x545e12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e15:{NFSU2_TR(0x545e15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e19:{NFSU2_TR(0x545e19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545e1b:{NFSU2_TR(0x545e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e1e:{NFSU2_TR(0x545e1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545e21:{NFSU2_TR(0x545e21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e25:{NFSU2_TR(0x545e25);
{goto L545e29;}
}
B545e27:L545e27:{c.instructions+=1;NFSU2_TR(0x545e27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545e29:L545e29:{c.instructions+=5;NFSU2_TR(0x545e29);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e2b:{NFSU2_TR(0x545e2b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e2d:{NFSU2_TR(0x545e2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e2e:{NFSU2_TR(0x545e2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545e31:{NFSU2_TR(0x545e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545e36ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545e36:L545e36:{c.instructions+=2;NFSU2_TR(0x545e36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545e38:{NFSU2_TR(0x545e38);
if(r1(R+518)){{goto L545eb1;}}
}
B545e3a:L545e3a:{c.instructions+=2;NFSU2_TR(0x545e3a);
w4(R+4,u32(0x8f5dc19full));
}
B545e3f:{NFSU2_TR(0x545e3f);
{goto L545ea2;}
}
B545e41:L545e41:{c.instructions+=1;NFSU2_TR(0x545e41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545e46ull));
TAIL_STATIC(0x575620u,575);
}
B545e46:L545e46:{c.instructions+=3;NFSU2_TR(0x545e46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545e49:{NFSU2_TR(0x545e49);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545e4b:{NFSU2_TR(0x545e4b);
if(r1(R+518)){{goto L545e8a;}}
}
B545e4d:L545e4d:{c.instructions+=16;NFSU2_TR(0x545e4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545e50:{NFSU2_TR(0x545e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x60ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545e57:{NFSU2_TR(0x545e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e5a:{NFSU2_TR(0x545e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e5d:{NFSU2_TR(0x545e5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e60:{NFSU2_TR(0x545e60);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e64:{NFSU2_TR(0x545e64);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e68:{NFSU2_TR(0x545e68);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B545e6e:{NFSU2_TR(0x545e6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xf8111a17ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545e75:{NFSU2_TR(0x545e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e78:{NFSU2_TR(0x545e78);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e7c:{NFSU2_TR(0x545e7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545e7e:{NFSU2_TR(0x545e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545e81:{NFSU2_TR(0x545e81);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545e84:{NFSU2_TR(0x545e84);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545e88:{NFSU2_TR(0x545e88);
{goto L545e8c;}
}
B545e8a:L545e8a:{c.instructions+=1;NFSU2_TR(0x545e8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545e8c:L545e8c:{c.instructions+=5;NFSU2_TR(0x545e8c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e8e:{NFSU2_TR(0x545e8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e90:{NFSU2_TR(0x545e90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545e91:{NFSU2_TR(0x545e91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545e94:{NFSU2_TR(0x545e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545e99ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545e99:L545e99:{c.instructions+=2;NFSU2_TR(0x545e99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545e9b:{NFSU2_TR(0x545e9b);
if(r1(R+518)){{goto L545eb1;}}
}
B545e9d:L545e9d:{c.instructions+=1;NFSU2_TR(0x545e9d);
w4(R+4,u32(0xf8111a17ull));
}
B545ea2:L545ea2:{c.instructions+=2;NFSU2_TR(0x545ea2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545ea5:{NFSU2_TR(0x545ea5);
if(r1(R+518)){{goto L545eb1;}}
}
B545ea7:L545ea7:{c.instructions+=2;NFSU2_TR(0x545ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545eaa:{NFSU2_TR(0x545eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545eb1:L545eb1:{c.instructions+=6;NFSU2_TR(0x545eb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545eb7:{NFSU2_TR(0x545eb7);
__builtin_memmove((R+0),gp(0x8389b0),4);
}
B545ebc:{NFSU2_TR(0x545ebc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ebd:{NFSU2_TR(0x545ebd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ebf:{NFSU2_TR(0x545ebf);
u8 U[4];
w4(U+0,u32(0x55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ec1:{NFSU2_TR(0x545ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ec6ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B545ec6:L545ec6:{c.instructions+=2;NFSU2_TR(0x545ec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ec7:{NFSU2_TR(0x545ec7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545eccull));
TAIL_STATIC(0x52a1a0u,52a);
}
B545ecc:L545ecc:{c.instructions+=8;NFSU2_TR(0x545ecc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B545ecf:{NFSU2_TR(0x545ecf);
__builtin_memmove((R+12),(R+0),1);
}
B545ed1:{NFSU2_TR(0x545ed1);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B545ed3:{NFSU2_TR(0x545ed3);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+12))<(r1(R+12))));
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B545ed5:{NFSU2_TR(0x545ed5);
u8 U[4];
w4(U+0,u32(0x5dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ed7:{NFSU2_TR(0x545ed7);
w4(R+4,u32(0x8392c0ull));
}
B545edc:{NFSU2_TR(0x545edc);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+12),u8(0x1ull)));
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B545ede:{NFSU2_TR(0x545ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ee3ull));
TAIL_STATIC(0x6102f0u,610);
}
B545ee3:L545ee3:{c.instructions+=7;NFSU2_TR(0x545ee3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B545ee7:{NFSU2_TR(0x545ee7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B545eea:{NFSU2_TR(0x545eea);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B545eed:{NFSU2_TR(0x545eed);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B545eef:{NFSU2_TR(0x545eef);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc8d313acull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545ef5:{NFSU2_TR(0x545ef5);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ef7:{NFSU2_TR(0x545ef7);
if(r1(R+518)){{goto L545f5c;}}
}
B545ef9:L545ef9:{c.instructions+=1;NFSU2_TR(0x545ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545efeull));
TAIL_STATIC(0x575620u,575);
}
B545efe:L545efe:{c.instructions+=3;NFSU2_TR(0x545efe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545f01:{NFSU2_TR(0x545f01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545f03:{NFSU2_TR(0x545f03);
if(r1(R+518)){{goto L545f42;}}
}
B545f05:L545f05:{c.instructions+=16;NFSU2_TR(0x545f05);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545f08:{NFSU2_TR(0x545f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x5dull));
s4(u32(r4(U+0)),r4(U+4));
}
B545f0f:{NFSU2_TR(0x545f0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f12:{NFSU2_TR(0x545f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f15:{NFSU2_TR(0x545f15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f18:{NFSU2_TR(0x545f18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f1c:{NFSU2_TR(0x545f1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f20:{NFSU2_TR(0x545f20);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B545f26:{NFSU2_TR(0x545f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xe170f115ull));
s4(u32(r4(U+0)),r4(U+4));
}
B545f2d:{NFSU2_TR(0x545f2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f30:{NFSU2_TR(0x545f30);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f34:{NFSU2_TR(0x545f34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545f36:{NFSU2_TR(0x545f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f39:{NFSU2_TR(0x545f39);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545f3c:{NFSU2_TR(0x545f3c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f40:{NFSU2_TR(0x545f40);
{goto L545f44;}
}
B545f42:L545f42:{c.instructions+=1;NFSU2_TR(0x545f42);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545f44:L545f44:{c.instructions+=5;NFSU2_TR(0x545f44);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545f46:{NFSU2_TR(0x545f46);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545f48:{NFSU2_TR(0x545f48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545f49:{NFSU2_TR(0x545f49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545f4c:{NFSU2_TR(0x545f4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545f51ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545f51:L545f51:{c.instructions+=2;NFSU2_TR(0x545f51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545f53:{NFSU2_TR(0x545f53);
if(r1(R+518)){{goto L545fcc;}}
}
B545f55:L545f55:{c.instructions+=2;NFSU2_TR(0x545f55);
w4(R+4,u32(0x2bdb0653ull));
}
B545f5a:{NFSU2_TR(0x545f5a);
{goto L545fbd;}
}
B545f5c:L545f5c:{c.instructions+=1;NFSU2_TR(0x545f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545f61ull));
TAIL_STATIC(0x575620u,575);
}
B545f61:L545f61:{c.instructions+=3;NFSU2_TR(0x545f61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B545f64:{NFSU2_TR(0x545f64);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545f66:{NFSU2_TR(0x545f66);
if(r1(R+518)){{goto L545fa5;}}
}
B545f68:L545f68:{c.instructions+=16;NFSU2_TR(0x545f68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545f6b:{NFSU2_TR(0x545f6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x5dull));
s4(u32(r4(U+0)),r4(U+4));
}
B545f72:{NFSU2_TR(0x545f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f75:{NFSU2_TR(0x545f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f78:{NFSU2_TR(0x545f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f7b:{NFSU2_TR(0x545f7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f7f:{NFSU2_TR(0x545f7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f83:{NFSU2_TR(0x545f83);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B545f89:{NFSU2_TR(0x545f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0xb229fa7eull));
s4(u32(r4(U+0)),r4(U+4));
}
B545f90:{NFSU2_TR(0x545f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f93:{NFSU2_TR(0x545f93);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545f97:{NFSU2_TR(0x545f97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B545f99:{NFSU2_TR(0x545f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545f9c:{NFSU2_TR(0x545f9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B545f9f:{NFSU2_TR(0x545f9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B545fa3:{NFSU2_TR(0x545fa3);
{goto L545fa7;}
}
B545fa5:L545fa5:{c.instructions+=1;NFSU2_TR(0x545fa5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545fa7:L545fa7:{c.instructions+=5;NFSU2_TR(0x545fa7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545fa9:{NFSU2_TR(0x545fa9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545fab:{NFSU2_TR(0x545fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545fac:{NFSU2_TR(0x545fac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B545faf:{NFSU2_TR(0x545faf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545fb4ull));
TAIL_STATIC(0x52ed80u,52e);
}
B545fb4:L545fb4:{c.instructions+=2;NFSU2_TR(0x545fb4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545fb6:{NFSU2_TR(0x545fb6);
if(r1(R+518)){{goto L545fcc;}}
}
B545fb8:L545fb8:{c.instructions+=1;NFSU2_TR(0x545fb8);
w4(R+4,u32(0x246de0cbull));
}
B545fbd:L545fbd:{c.instructions+=2;NFSU2_TR(0x545fbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B545fc0:{NFSU2_TR(0x545fc0);
if(r1(R+518)){{goto L545fcc;}}
}
B545fc2:L545fc2:{c.instructions+=2;NFSU2_TR(0x545fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B545fc5:{NFSU2_TR(0x545fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545fcc:L545fcc:{c.instructions+=6;NFSU2_TR(0x545fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B545fd2:{NFSU2_TR(0x545fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545fd5:{NFSU2_TR(0x545fd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B545fd8:{NFSU2_TR(0x545fd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545fd9:{NFSU2_TR(0x545fd9);
__builtin_memmove((R+4),(R+12),4);
}
B545fdb:{NFSU2_TR(0x545fdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545fe0ull));
TAIL_STATIC(0x51f7a0u,51f);
}
B545fe0:L545fe0:{c.instructions+=2;NFSU2_TR(0x545fe0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545fe2:{NFSU2_TR(0x545fe2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L545ff2;}}
}
B545fe4:L545fe4:{c.instructions+=3;NFSU2_TR(0x545fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B545fe7:{NFSU2_TR(0x545fe7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B545fe9:{NFSU2_TR(0x545fe9);
if(r1(R+518)){{goto L545ff0;}}
}
B545feb:L545feb:{c.instructions+=2;NFSU2_TR(0x545feb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B545fee:{NFSU2_TR(0x545fee);
{goto L545ff2;}
}
B545ff0:L545ff0:{c.instructions+=1;NFSU2_TR(0x545ff0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B545ff2:L545ff2:{c.instructions+=3;NFSU2_TR(0x545ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ff3:{NFSU2_TR(0x545ff3);
__builtin_memmove((R+4),(R+12),4);
}
B545ff5:{NFSU2_TR(0x545ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x545ffaull));
TAIL_STATIC(0x5386a0u,538);
}
B545ffa:L545ffa:{c.instructions+=3;NFSU2_TR(0x545ffa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B545ffb:{NFSU2_TR(0x545ffb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B545ffe:{NFSU2_TR(0x545ffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x546003ull));
TAIL_STATIC(0x43be80u,43b);
}
XIT:NFSU2_TR_EXIT(0x545,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
